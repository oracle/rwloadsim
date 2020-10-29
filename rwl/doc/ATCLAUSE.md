## Selecting a database using the at clause
The at clause, which is found several places in the syntax is used to 
specify which of the declared databases is used for execution:

An important aspect of this to understand when the connect and 
disconnect takes place.
In the typical cases that are described in this document, the choice of 
database is determined at compile time before actual execution of code 
takes place.
Most simulation runs will have one run command often with multiple 
threads that each at some point in time execute a control loop.
Whenever a procedure with some SQL in it (normally inside a control 
loop) is executed, it will ensure there is a database session upon 
start, and potentially release it upon exit.
If the database is dedicated the database logon and logoff is already 
done (at the start/end of rwloadsim or a thread), so ensuring a 
database is effectively a no-op.
In the other cases, an actual database session will be acquired, either 
through a complete logon, or from a session pool or DRCP pool.
This mechanism is an important part of rwloadsim, and it is also what 
is behind the statistics gathering, where both the time to get a 
database and time to actually perform database work is registered.

This mechanism applies in the following cases of the use of an at 
clause outside a declared procedure or function, i.e. directly at the 
"top level" of your rwloadsim code:
 * procedurecall() at database;
 * sqlstatement at database;
 * execute at database; ... end;
When any of these is found directly in your main program, a database 
session will be acquired, the code will be executed and the session 
will be released.
In case the named database is marked dedicated, a database session will 
already exist for the entire duration of execution of rwloadsim. 

When threads are started and an explicit database is named, the entire 
thread will use that database as shown here:
```
run
  threads N at database; 

    ...

  end;
end; 
```
If the database is declared dedicated (or thread dedicated), an actual 
logon will be performed when the thread starts and logoff will be 
performed when it terminates.
Otherwise (i.e. with any pooling), whenever the first procedure 
executing SQL (or with statistics attribute) is called, that procedure 
will acquire and release a database session at start and exit. 

Note that any rollback or commit executed is always against the 
database session that is in use as a result of this mechanism; this 
implies two phase commit it not supported.  

If you are using the at clause at any other place (typically inside a 
declared procedure), the behavior is somewhat different.
In such cases, any existing database session will be "stacked", and a 
new database session will be acquired from a session pool as a 
new database connection for the duration of the SQL, 
procedure call or execution block.
That session will be released or a disconnect will be done after 
finishing the SQL, procedure call or execution block.
As sessions are acquired and released, only databases that have real 
client side pooling (session pool or reconnect) can be used.
Note that only queries can be executed using this approach.

If you use at default inside a procedure, the effect is to use the 
database that was chosen at compile time for the top level procedure or 
thread being executed; this is not necessarily the database that has 
the default attribute.
Take this example: 
```
procedure copytodest()
  sql selsource select ... end;
  sql insdest insert ... end;

  for selsource at sourcedb loop
    insdest at default; # destdb would imply a new session!
  end loop;

  commit; # always against the effective database in use
end;
copytodest() at destdb;
```
When the procedure copytodest() is being called at the last line above, 
the named database (destdb) is being used during the call.
Inside the procedure, a cursor loop is being executed selecting rows 
from the named database (sourcedb), and for each row returned, the SQL 
insdest is executed against the actual database session used by the 
procedure.
This is the same database later used when commit is executed.
Effectively, rows are copied from one database to another.
Any array interface - for both the query and the insert - will be used.

Note that two-phase commit is not supported. 

The exact semantics of these "stacked at-clauses" may change in a later 
release.

