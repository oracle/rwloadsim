## Saving runtime statistics 
As a primary purpose of the RWL*Load Simulator is to simulate load, it 
is important to be able to gather execution statistics such as average 
execution times, execution counts, etc.
If you run a simulation, simulating an order entry system, you may 
want to see the average and maximum time taken to execute e.g. an order 
entry, an order query, etc.
Rwloadsim can save up to three different types of statistics. 

### Overview of execution time gathering 
Your simulation is likely to include one or typically more procedures 
that each simulate a certain part of an application.
Assume you have two procedures named "insorder()" and "selorder()" 
respectively, that each are implemented by executing a set of SQL 
statements.
You may further have a random procedure array, "dosomething()" that 
calls either of these two with a certain probability.
The run command may then do little more than start a number of threads, 
all running for two minutes, and all calling "dosomething" every so 
often using a control loop as in: 
```
run
  threads 20 at mypool
    for every 0.1s stop 120 loop
      dosomething();
    end loop;
  end threads;
end run;
```
This will start 20 threads that all run for 120s and all call either 
"insorder" or "selorder" every 0.1s. 

Whenever a procedure that contains SQL is executed, the procedure will 
be timed by rwloadsim, and the control loop will therefore effectively 
perform these steps: 
```
loop
   sleep
   get a session from the session pool
   execute the statement list in the procedure
   release the session back to the session pool
until end condition is met 
```
The sleep time depends on the every or wait option of the control loop, 
and while in the sleep, the thread does not have a database session.
In each loop, rwloadsim will save three time-stamps: 
 * t1 just before getting a session
 * t2 just before executing the procedure
 * t3 just before releasing the session

The difference between t2 and t1 is the time waiting for an available 
session, and the difference between t3 and t2 is the time actually 
spent doing database work.
These two differences will be summed, and will together with the total 
execution count be saved in a database table.
The difference between t3 and t1 represents the total execution time experienced by
the simulated end user, which additionally can be saved as a histogram.
Finally, a count of executions per second can be saved. 

## Use of the results database
The repository database identified by the "results" keyword contains 
the above mentioned tables, and it also contains a sequence number used 
to generate a runnumber value.
Each individual execution of rwloadsim or each multi-process run
will get a separate runnumber.

When not using the --flush-every option, rwloadsim only has database 
activity in the repository database during start-up (to get the sequence 
number value) and just before completion to save all results; these
include executing a number of SQL statements.
If you are doing multi process runs, each process will use its own 
connection to the repository database to save results.
Just like with the databases being tested, you can declare the result 
database to be dedicated, use a session pool or use DRCP.
It is suggested that you use session pool with at most 2 as the maximum 
pool size.
The minimum pool size should be 0 (or 1) in most cases.

However, if you are using --flush-every, each rwloadsim process will 
execute a SQL statement for every flush, which requires an existing 
session to be efficient, so a slightly larger session pool may be beneficial.
As the total load on the repository database, however, still is 
relatively small, using connections with server side pooling (DRCP or 
shared server) may be beneficial.
This is in particular the case if the same repository database is being 
used for many concurrent projects that all are doing multi process runs.

## Statistics with stacked at-clauses
If you are using the at-clause inside a procedure to perform some 
queries against a database differently from the database chosen at the 
top level, statistics gathering may be impacted.
If you e.g. do something like:
```
database db1 ... sessionpool ... ;
database db2 ... sessionpool ... ;
procedure top()
  sql sql1 ... end;
  sql sql2 ... end;
  ...

  sql1;
  sql2 at db2;
  ...

end;

run 
  threads 2 at db1
    loop every 0.1 stop 60; top(); end loop;
  end threads;
end run;
```
the control loop in the two threads will call top() every 0.1s and each 
call with be timed for the time taken to acquire a session from db1 and 
to execute the code in the procedure.
However, as the call to sql2 includes an actual session acquire/release 
from db2, the time registered for executing top() will not only be the 
time taken by the actual SQL statements (such as sql1), but also the 
time taken for the full processing of sql2 including session 
acquire/release for db2.

## Navigation
* [README.md](README.md) Table of contents
* [QUEUEING.md](QUEUEING.md) Previous topic: Handling queuing in control loops
