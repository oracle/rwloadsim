## What is the RWP*Load Simulator
The RWP\*Load Simulator - or rwloadsim - is a programming and simulation 
tool that can be used for several purposes involving execution of SQL 
statements using an Oracle database.
One of the purposes is reflected in its name and is to simulate database load.
However, it really does much more than that, and it is best thought of 
as a tool that fills in the space between SQL\*Plus, OCI (Oracle Call Interface)
and scripting done with e.g. the Linux command shell.
As it is a command line tool, it is well suited for various types of 
batch or scripting environments, including but surely not limited to 
testing, triage, and load simulation. 

As a scripting tool, you can think of it as if you had
SQL\*Plus with a programming language, PL/SQL on the client side or
bash with ability to execute SQL. 
It really is somewhere between those three and can be suited for
many different scripting purposes.

As a load simulator, it can be used to execute specified SQL statements 
in a certain order and fashion specifying different types of random 
input, with variable run duration and/or execution counts or frequency.
At the same time, statistics about execution of the individual SQL 
statements and/or procedures (combination of SQL statements) are 
collected and saved in a database schema for later analysis, printing, 
etc.
All this can be done with different connection methods such as 
dedicated connections or a session pool.

As just one example, rwloadsim can simulate a simple order entry 
workload, where each order gets an order number from a sequence, has a 
random number of order lines, and e.g. has a status code that gets one 
of a set of random values with a certain distribution such as 80% open, 
15% on hold and 5% closed.

RWP\*Load Simulator includes a programming language, and it therefore 
has elements from general application programming environments.
The programming language has some resemblance with PL/SQL (you can 
declare and execute SQL statements and do many typical operations on cursors),
with awk (data types such as strings or numbers can be freely mixed), and 
several typical scripting and programming languages (procedures, functions, 
if/then/else logic, for loops, expressions).
It also also includes features for printing, reading or writing to 
files in a fashion that is very suitable for many kinds of scripting.
Similarly, it can be used with typical UNIX pipelines for reading as 
well as writing.
There are also several ways to do modular design, including conditional 
compilation and include files similar to C.

The way SQL is being processed is similar to how OCI does it with bind 
and/or define variables, so you can also think of rwloadsim as a way to 
execute OCI without having to write a C program.
In most cases, this is done implicitly by matching bind variable names
or select list elements in queries to declared variables,
but if required, you have
full control of how bind and/or define is done.

As a command line tool (the executable is rwloadsim), RWP\*Load 
Simulator reads one or more RWL files as input, parses and executes 
these.
It is generally multi-threaded, which particularly is useful for 
simulating load, where threads can represent workers, with execution 
statistics potentially being saved to a database schema.

The following very simple example shows some of the basic features of 
rwloadsim.
Consider a file with this contents:
```
# Tell how to connect to the database
database scott username "username" password "{password}" default;

# Declare some variables, and possibly initialize them
integer empno, deptno:=10, numemps:=0;
string ename;
# Tell that a variable can get a value from the command line
$useroption:deptno

# Execute a query as a cursor loop
for
  select empno, ename from emp where deptno=:deptno;
loop
  printf "%12s %4d\n", ename, empno; # print something to stdout
  numemps += 1; # count the number of rows
end loop;

if numemps=0 then # If there were no rows, print a message
  printline "No employees in department", deptno;
end if;

```
If the file were named scott.rwl, you could execute rwloadsim with this file as argument,
and you might get:
```
$ rwloadsim scott.rwl

RWP*Load Simulator Release 3.0.0.25 Development on Tue, 17 May 2022 11:39:58 UTC
RWL-206: warning: OCI compile environment (21.5) is different from runtime (21.3)
Connected scott to:
Oracle Database 21c Enterprise Edition Release 21.0.0.0.0 - Production

       CLARK 7782
        KING 7839
      MILLER 7934
```
If you wanted to execute the same, although specifying a different 
value of deptno, you might get:
```
$ rwloadsim --deptno=42 scott.rwl

RWP*Load Simulator Release 3.0.0.25 Development on Tue, 17 May 2022 11:39:58 UTC
RWL-206: warning: OCI compile environment (21.5) is different from runtime (21.3)
Connected scott to:
Oracle Database 21c Enterprise Edition Release 21.0.0.0.0 - Production

No employees in department 42
```
We will shortly elaborate more on this example.
# What is the RWP\*Load Simulator not?

The RWP\*Load Simulator is not a complete application programming tool, and it 
should not be used as such.
If you attempt using it beyond its design purpose, you will
realize that it does have limitations compared to traditional application
programming environments.
Some examples are a complete lack of GUI, relatively simple input,
several programming capabilities found in many other programming 
language are missing, only few simple data types are supported.
That said, it does support a modular programming approach that is 
suited for the purpose of simulating load, and it does allow relatively 
advanced scripting in particular when combined with shell scripts.

These are design criteria and you should not expect rwloadsim to evolve 
into a complete application programming tool.
However, within its bounds, it can be a very efficient scripting tool,
including for the type of scripts typically used by database administrators.
It should, however, be mentioned that the developers always are open for 
new ideas.

## Navigation
* [index.md](index.md#rwpload-simulator-users-guide) Table of contents
* [INTRODUCTION.md](INTRODUCTION.md) Next topic: A brief introduction the RWP*Load Simulator
