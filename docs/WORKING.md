## Working with RWP\*Load Simulator

### A brief introduction

The RWP\*Load Simulator (rwloadsim) has a relatively simple command 
interface and is primarily targeted at scripting environments, where 
sqlplus together with things like shell, sed, awk and other Unix tools 
doesn't allow sufficient control of how to execute SQL statements or a 
mix of concurrently executing SQL statements.

As a simulation tool, rwloadsim has several ways to specify random
values for SQL or PL/SQL 
with bind variables, and it can control things like frequency of 
execution, mix of "transactions", several connection mechanisms 
including session pooling, while it also may gather run-time execution 
statistics such as throughput and histograms of execution times.
All such statistics are stored in database tables in the repository 
schema to allow for reporting.
The rwloadsim language is also sufficient to allow automatic generation 
of awr reports.

In addition to actual workload simulations, rwloadsim is a relatively 
powerful scripting tool. 
One example of such usage is that database administrators easily can
create scripts, which combine execution of SQL with procedural logic.
If you only use it for its scripting capabilities, there is no need for 
the repository database that stores execution statistics.

Some of the rwloadsim behavior is controlled via options to the 
executable, and the actual RWL program is specified in text files that 
are read by rwloadsim; several options can be set globally using 
start-up files.
The text files are written in the rwloadsim language "rwl" (pronounced 
"rawl") and has typical programming language elements such as 
declarations and executable code.
One or more of these files are given as input to rwloadsim; they are 
read in sequence, and are parsed and executed.
There is no separate "compile" and "execute" step as in ordinary 
programming languages, declarations of things like variables and 
procedures are stored immediately and code is executed immediately.
It is also possible to include rwl files within others similar to using 
the @ clause in SQL\*Plus or #include in C,
and you can conditionally include code similar to #if in C.

### Manual pages

Your distribution includes reference documentation in the form of manual
pages, which you read using the ```rwlman``` utility.
Without arguments, it gives a brief overview, and with an argument
it displays a manual page.
Some examples are
```
rwlman rwloadsim
rwlman rwl
rwlman statement
rwlman simpledeclaration
```
that will respectively show how to call the rwloadsim program,
the overall syntax for the rwloadsim language,
syntax for a statement and syntax for simple declarations
such as integers.

Type the above now to get acquainted to using rwlman.

### A few simple examples

The samples shown here will gradually introduce some of the important 
features of rwloadsim.
All samples are available in the demo 
sub-directory; it is recommended to copy these files to a personal 
directory before execution.

### Variable and procedure declaration and execution

The first example in sample1.rwl does not interact with the database, 
and it shows how to declare variables and procedures, has examples of 
expressions, and shows how to execute a procedure.
```
integer a, b; # declare two integer variables

# declare a procedure that takes two arguments
procedure add(integer v1, integer v2)
  integer c; # a local variable
  c := v1+v2; # assign sum of arguments to c
  if c>100 then # sometimes print 
    printline "c is larger than 100", c;
  end;
end;

procedure setab()
  a := uniform(0,50); # give a a random value between 0 and 50
  b := uniform(50,150);
end;

integer i; # declarations can come anywhere

procedure runten()
  for i := 1 .. 10 loop # do something ten times
    setab();
    add(a,b);
  end;
end;

runten(); # execute the procedure

printline a,b,a-b; # print the values of a and b
```
You can simply execute
```
$ rwloadsim sample1.rwl

RWP*Load Simulator Release 2.0.1.30 Beta on Mon Aug 13 02:21:30 2018

c is larger than 100 117
c is larger than 100 159
c is larger than 100 158
c is larger than 100 127
c is larger than 100 192
5 83 -78
```
The sample shows some of the important concepts of rwloadsim:

* Variables are declared and used quite similarly to how it is done 
in other programming languages; the available data types are integer, 
double and string(N) with a specified maximum length.
* Procedures, which are the main constructs of rwloadsim, can take 
arguments and contain a list of statements
* Variables are either public, private or local to a procedure.
Private variables are discussed in the section on modular programming.
* Expressions such as a+b, a-b, uniform(0,50) can be used in 
assignments and other places
* Procedures can call other procedures and can be called 
recursively.
* Programming constructs like if/then/end and for loops are 
available.
* The language is free format with semicolon as terminator
* Comments span from the # symbol until end of line 

### Interact with the database
The main purpose of rwloadsim is to execute SQL statements against an 
Oracle database, so let us show a small example of how this can be done.
As the same database credentials are likely to be used for many 
different cases, let us first create a file that contains just a 
database credential.
You must modify a private copy of 
testuser.sql (not shown here) to suit your databases requirement for things like
password and tablespace and then execute it from sqlplus 
logged in as a DBA, which will create a user named "rwltest".
Assume this is done, you can then declare a database in rwloadsim using:
```
# create a default database connection called rwltest
database rwltest username "rwltest" password "{password}" default;
```
The keyword `database` starts the declaration (just like the keyword 
`integer` starts a declaration of an integer), and the actual username 
and password are entered as stings.
The keyword `default` marks this database as default, which means it will 
be used when no database has been explicitly named.
The above is available as the file rwltest.rwl; you must modify 
a private copy of it as 
necessary with things like the proper connect string and password.
If you do not include the password, you will be prompted for it.
If you need to have a connect string you could e.g. use something like:
```
# create a default database connection called rwltest
database rwltest connect "//host/service:dedicated" 
username "rwltest" password "{password}" default; 
```
When you have created your user using sqlplus and have modified rwltest.rwl
accordingly, type 
```
rwloadsim rwltest.rwl
```
It should do nothing but printing 
a connected message.

Let us next see how SQL statements are declared and executed.
You need a table like this in your schema:
```
create table verysimple
( a number
, b varchar2(30)
)
```
This can be created using the file simpletables.sql, which also creates
tables very similar to the classical emp and dept tables.
Next look at the file simpleinsert.rwl which contains:
```
# simpleinsert.rwl

integer max := 12;

# Set a default array size
# for dml using a directive
$embeddeddmlarray:5

# declare a procedure that inserts some rows
procedure doinsert()
  integer i;

  # declare some variables that match
  # placeholders
  double a;
  string(30) b;

  for i := 1.. max loop
    # assign values to the two bind variables
    a := erlang2(1);
    # the next line shows that strings and 
    # integers can be concatenated
    b := " row number "||i; 

    # run the insert
    insert into verysimple
    ( a, b ) values ( :a, :b );
  end ;
  # and commit the transaction
  commit; 
end;

# actually execute the procedure
doinsert();
```
You can now execute this:
```
$ rwloadsim rwltest.rwl simpleinsert.rwl
```
There will be no output shown, except the banner as there are no print 
statements in your input files, but you can use sqlplus to actually see 
the result of the insert, where the first few lines might be:
```
SQL >select * from verysimple;

         A B
---------- ------------------------------
2.18538601  row number 1
1.81184842  row number 2
2.07463075  row number 3
```
This example shows some important concepts of rwloadsim:

* Rwloadsim processes multiple input files, one after another, 
which e.g. can used to have modules for different purposes.
Here, it is just used to separate the declaration of the database 
connection from what actually gets executed.
* Just as you can declare scalar variables, you can declare more 
complex things, such as databases, sql statements, procedures, etc.
Note that rwloadsim only has one name-space for public identifiers, so 
all public names (which excludes arguments to procedures and names of 
local variables) must be unique.
You could e.g. not give a database and a procedure the same name.
* SQL statement syntax is similar to that of sqlplus and can be 
terminated by a line with just a single `/`; a `.` could also have been 
used, just as a line ending with `;` (except when using PL/SQL).
To allow for nice indentation of source files, the `/` or `.` may have 
white-space in front of it.
* For SQL statements with placeholders (bind variables), you need 
to match the names of these to variables in your program.
In this case, this is the two placeholders in the values clause.
* As this is an insert operation, using the array interface is 
highly recommended, so we use a _directive_ to set an array
size to be used for DML operations.
The array is implicitly created and flushed as needed; 
in the case above with an array size of five and a total of 12 rows, 
there will be three actual flushes, the first two with the array filled 
(the array insert is actually happening at every fifth call to 
sqlinsert), the last with only two elements in the array, and which 
actually takes place at commit.
* The assignment to the variable `b`, which is of type string(30) 
shows that numbers (here the value of the integer variable `i`) are 
implicitly converted to a string as needed.
The opposite is also the case - if you use a string value in a 
numerical expression, an implicit conversion to a number (integer or 
double) will be done.
These implicit conversions never result in errors, similar to the 
behavior in awk. 

### Providing user defined arguments

Using ```$useroption``` and/or ```$userswitch``` which are examples
of _directives_, you can add new 
getopt style long options that provide values for variables that are 
declared in the _first_ file named with a .rwl suffix on the command line.

The following show how this can be done.
The file emp.rwl uses a ```$useroption:deptno``` directive that makes the
variable named deptno settable using a --deptno option, and it
also has a ```$include``` directive causing the database declaration file
to be included:
```
$include:"rwltest.rwl"
integer empno, deptno:=10, numemps:=0; $useroption:deptno
# Declare some variables, and possibly initialize them
string ename;

sql selemps # Declare a SQL statement
  select empno, ename from emp where deptno=:1;
  define 1 empno, 2 ename; # As it is a query, define the select list elements
  bind 1 deptno; # Bind the single placeholder to a variable
  array 10; # Set an array size
end;

for selemps loop # Execute a cursor loop
  printline empno, ename; # print something to stdout
  numemps := numemps + 1; # count the number of rows
end loop;

if numemps=0 then # If there were no rows, print a message
  printline "No employees in department", deptno;
end if;
```
If you execute it as previously without argument, it will show 
employees in department 10.
But due to the directive, rwloadsim will accept the long option 
--deptno taking an argument, so you can make a call like:
```
$ rwloadsim --deptno 20 emp.rwl

RWP*Load Simulator Release 3.0.0.11 Development on Wed, 06 Apr 2022 09:54:17 UTC
Connected scott to:
Oracle Database 21c Enterprise Edition Release 21.0.0.0.0 - Production

7369 SMITH
7566 JONES
7788 SCOTT
7876 ADAMS
7902 FORD
```
Note that the name of the variable and the option name must be the same.

### Implicit bind and define
In the sample above in emp.rwl, you explicitly define the select list elements
to variables and you explicitly bind the placeholder :1 to a variable.
If these have names that are also names of declared variable,
you can enable implicit define and bind using
the directive ```$implicit:both``` as shown here:
```
# Get the database
$include:"rwltest.rwl"

# 
integer empno, deptno:=10, numemps:=0; $useroption:deptno
# Declare some variables, and possibly initialize them
string ename;

$implicit:both

sql selemps # Declare a SQL statement
  select empno, ename from emp where deptno=:deptno;
end;

for selemps loop # Execute a cursor loop
  printline empno, ename; # print something to stdout
  numemps := numemps + 1; # count the number of rows
end loop;

if numemps=0 then # If there were no rows, print a message
  printline "No employees in department", deptno;
end if;
```
This code is found in emp2.rwl which you can execute just
like you did emp.rwl.
Implicit bind and define greatly simplifies programming.
### Embedded execution of sql
As also shown in the simpleinsert.rwl example, you can often
simply embed your sql statement directly in the code without
first declaring it as a variable.
This is shown in emp3.rwl with the following contents:
```
# Get the database
$include:"rwltest.rwl"

# 
integer empno, deptno:=10, numemps:=0; $useroption:deptno
# Declare some variables, and possibly initialize them
string ename;

for
  select empno, ename from emp where deptno=:deptno;
loop
  printline empno, ename; # print something to stdout
  numemps := numemps + 1; # count the number of rows
end loop;

if numemps=0 then # If there were no rows, print a message
  printline "No employees in department", deptno;
end if;
```
The cursor loop above therefore consist of these parts:
 * The keyword ```for```
 * The sql text terminated by ;
 * The keyword ```loop``` followed by the code to execute in the loop and terminated by ```end```

A possible call and the output is:
```
rwloadsim --deptno 30 emp3.rwl

RWP*Load Simulator Release 3.0.0.23 Development on Mon, 16 May 2022 14:59:30 UTC
RWL-206: warning: OCI compile environment (21.5) is different from runtime (21.3)
Connected rwltest to:
Oracle Database 21c Enterprise Edition Release 21.0.0.0.0 - Production

7499 ALLEN
7521 WARD
7654 MARTIN
7698 BLAKE
7844 TURNER
7900 JAMES
```

### Providing input values using -i or -d

As shown above, you can provide input by associating variables with 
long options.
A secondary way to achieve the same is by overwriting initializations
in your rwl file using the -i or -d options for respectively integer
and double variables.
This approach is _not_ only available for the first .rwl file, but for all
input files.
Using the simpleinsert.rwl as an example, you can e.g. do:
```
$ rwloadsim -i max:=100 rwltest.rwl simpleinsert.rwl
```
and 100 rows will be inserted into the table.
The -i option (which can be repeated) is used to initialize an integer 
variable; there is also a -d option for double variables. 

If your interest primarily is to use rwloadsim as a scripting tool,
you can skip the rest of this page an go directly to 
[SCRIPTING.md](SCRIPTING.md).

### Simulating think time
We have so far just looked at busy loop without think time and with a 
certain number of executions.
Such things can be handy for filling tables, but what if you wanted run 
a simulation taking 10 minutes with some average think time between 
each execution?
Doing such things is exactly what rwloadsim is created to do.
The file simpleinsert2.rwl is a slightly modified version of 
simpleinsert.rwl, and is used to show that and also shows how 
procedures can take arguments:
```
# simpleinsert2.rwl

integer threads sum totalrows := 0;

# Set a default array size
# for dml using a directive
$embeddeddmlarray:5

# declare a procedure that inserts some rows
procedure doinsert(integer rows)
  integer i;

  # declare some variables that match
  # placeholders
  double a;
  string(30) b;

  totalrows += rows;

  for i := 1.. rows loop
    # assign values to the two bind variables
    a := erlang2(1);
    # the next line shows that strings and 
    # integers can be concatenated
    b := " row number "||i; 

    # run the insert
    insert into verysimple
    ( a, b ) values ( :a, :b );
  end ;
  # and commit the transaction
  commit; 
end;

```
There are a few important changes:

* The number of rows to insert is provided as an argument to the 
procedure doinsert().
* There is a variable `totalrows`, which is declared with the 
threads sum option; it will shortly be described what the purpose of 
this is.
* There is no `doinsert()` at the end of the file, so no actual execution of the procedure takes place.

Due to the missing execution, if you run
```
$ rwloadsim rwltest.rwl simpleinsert2.rwl
```
nothing will actually be inserted into the database.
If you had included a line like
```
doinsert(5);
```
running it would have inserted 5 lines into the table.

The file runsimple.rwl has this contents:
```
# include the database
$include:"rwltest.rwl"

# and the procedure
$include:"simpleinsert2.rwl"

procedure someinserts()
  integer rr;
  for wait 0.5 stop 10 loop
    rr := uniform(1,10);
    doinsert(rr);
  end;
end;

someinserts();

printline "inserted", totalrows;
```
Initially, it has two $include directives which are used such
that you don't need to give a (potentially) long list of file names
to rwloadsim. 
It works similarly to how #include does in C.
Therefore, you just need to provide the name of this file to rwloadsim
as shown:
```
$ rwloadsim runsimple.rwl

RWP*Load Simulator Release 3.0.0.11 Development on Wed, 06 Apr 2022 09:51:54 UTC
Connected rwltest to:
Oracle Database 21c Enterprise Edition Release 21.0.0.0.0 - Production

inserted 121
```
The for .. loop end construct in the file runsimple.rwl is called a _control loop_
and it shows one of the most important core features of rwloadsim, 
namely the possibility to execute something that simulates what end 
users may do.
In the example shown above, there is a wait time specified at 0.5 
(seconds) and a stop time specified as 10 (seconds).
The implication is that the loop will execute 10s and after each 
execution of the loop, there will be a wait of 0.5s.
Assuming the actual time taken to execute the statements of the loop is 
negligible compared to the 0.5s wait time, the loop will therefore 
execute (approximately) 20 times.

### Using multiple execution threads
Simulating a load with just a single thread of execution is in most 
case far from sufficient.
What if you wanted to simulate ten concurrent users (or application 
server threads) each concurrently running the above?
You could start rwloadsim ten times in the background, simulating ten 
end users.
But what if you want your simulation to use a session pool (often referred
to as "stateless connection pool") rather than 
having ten individual dedicated connections to the database?
Ability to do this is another very important feature of rwloadsim.

We are now using a somewhat modified version of the last file above, 
runsimple2.rwl:
```
$include:"rwltest.rwl"
$include:"simpleinsert2.rwl"

procedure someinserts()
  integer rr;
  for wait 0.5 stop 10 loop
    rr := uniform(1,10);
    doinsert(rr);
  end;
end;

run
  threads 10
    someinserts();
  end;
end;

printline "inserted", totalrows;
```
The procedure is declared in the same way, but in stead of just calling 
the procedure, we use the run .. threads .. end construct which is similar to 
starting things in the background using & in the shell.

We can now execute:
```
$ rwloadsim runsimple2.rwl

RWP*Load Simulator Release 3.0.0.11 Development on Wed, 06 Apr 2022 09:52:59 UTC
Connected rwltest to:
Oracle Database 21c Enterprise Edition Release 21.0.0.0.0 - Production

inserted 1082
```
What happens at the run command in the third file is the following:

* Ten threads will be started and each thread will make a dedicated 
connection to the database
* Each thread will execute the named procedure
* As there are ten threads each running a loop for ten seconds with 
0.5s wait, doinsert() will be executed about 200 times, each with a 
random number of rows as argument.
* Note that each thread has its own copy of the variables such as 
`a`, `rr`, etc; these variables are destroyed when the threads 
terminate.
* Each thread also has its own copy of the `totalrows` variable, 
but after execution of threads, the actual value of the contents from 
each thread is added to the variable in the main thread; this behavior 
is what `threads sum` in simpleinsert2.rwl does.
* Due to this addition of the individual `totalrows` variables, the 
grand total can be printed after the threads have finished. 

### Using a session pool; specifying execution time

In the example above, we were using the existing database called 
"rwltest", which is a dedicated connection.
This implies each worker thread (the ten threads above) all will 
acquire their own dedicated connection as well.
You would normally want to use a session pool in stead.
In rwloadsim this can be achieved by a slightly different database 
declaration.
Take a look at rwltest2.rwl with the following contents.
You must provide your password and if you need a connect string, you must add it as described previously.
```
# Use a dedicated connection as default:

database rwltest username "rwltest" password "{password}" default;
# And declare another database as pooled:

database rwlpool username "rwltest" password "{password}" sessionpool 1..4;
```
When giving this file as input to rwloadsim, you declare two databases; 
one is the same we have used above, the second one named "rwlpool" 
really is a session pool with a variable pool-size between 1 and 4.
Note that this second database does not have the default keyword, so it 
must be explicitly named when you want to use it.
Now, finally take a look at runsimple3.rwl with this contents:

```
$include:"rwltest2.rwl"
$include:"simpleinsert2.rwl"

integer exectime := 60; # default 1 min execution time
$useroption:exectime
integer numthreads := 10; # default 10 threads
$useroption:numthreads

procedure someinserts()
  integer rr;
  for wait erlang2(0.02) stop exectime loop
    rr := uniform(1,10);
    doinsert(rr);
  end;
end;

run
  threads numthreads at rwlpool
    someinserts();
  end;
end;

printline "inserted", totalrows;
```
Execution will by default run for just over a minute with a default
of ten threads. 
You can change these on the command line, and a possible execution
is:
```
$ rwloadsim runsimple3.rwl --numthreads=15

RWP*Load Simulator Release 3.0.0.11 Development on Wed, 06 Apr 2022 09:47:39 UTC
Connected rwltest to:
Oracle Database 21c Enterprise Edition Release 21.0.0.0.0 - Production

Created rwlpool as session pool (1..4) to:
Oracle Database 21c Enterprise Edition Release 21.0.0.0.0 - Production

inserted 228989
```
Some comments about this:

* There are now two database connections, one being a session pool; 
the version strings are shown from both.
* If you run a command like `top` on your database server, you will see 
four dedicated connections being active; these four are 
the four connections from the session pool.
* The ten worker threads in rwloadsim will not have dedicated 
connections, but will in stead acquire a session from the pool just 
before each execute of the procedure `doinsert()`, and release the 
session back to the pool immediately after the call.
* Effectively, this means the wait time, which is Erlang (k=2) 
distributed with a mean of 0.02s, simulates user think time, during 
which no session is held.
* Each worker thread will run until a certain stop condition is met; in this case the stop condition is stop exectime, which be default is 60s.
* The two variables exectime and numthreads are given as useroptions, so you can provide different values at the command line.

## Navigation
* [index.md](index.md#rwpload-simulator-users-guide) Table of contents
* [NEWS31.md](NEWS31.md) Previous topic: News in rwloadsim version 3.1
* [SCRIPTING.md](SCRIPTING.md) Next topic: Using rwloadsim for scripting
