# The RWP\*Load Simulator

The RWP*Load Simulator is a tool developed by the Real World Performance group at Oracle Corporation.
While it on one side nicely fills the somewhat void space between the Oracle database,
Linux scripting, and programming in e.g. C or Java,
it also bridges a bit of the way into complex benchmarking tools.

If you ever had a need to do any of these:

* Write scripts for Linux (bash, awk, sed) that integrates easily with the Oracle database
* Simulate workloads while experimenting with database or application side parameters
* Experiment with different connection methods or different sizes of session pools
* Exercise limits of your environment; find where the "hockey stick" curve bends
* Automatically create html reports with graphs showing scaling, performance, etc
* Get statistics about application or database performance to embed in reports

and you found the standard sqlplus tool to be too limited and found that writing
a full application in e.g. Java, C++ or Python to be too complex,
you are likely to find rwloadsim to suit you well.

If you think of a bit of bash and SQL, a dose of PL/SQL, a nip of C or Java, a fragment of Oracle Call Interface, 
a dash of awk, a grain of sed plus a few drops of secret sauce and put it all into one tool, you will have an idea about what rwloadsim is.
In its core, it is a programming language that takes a bit of each of these known tools and programming languages and integrates them into one.

As a very small example, this code will display rows from the EMP table
that you probably have used before.
If the following is in a file called emp.rwl
(well, you need correct credentials and connect string):
```
# declare a database
database db username "scott" password "{password}" connect "//host/service" default;

# and some variables
integer empno, deptno:=10, numemps:=0; $useroption:deptno
string ename;

# and a sql statement:
sql selemps
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
You can execute rwloadsim --deptno=20 emp.rwl and you will get a list of employees in department 20.

This document includes the users guide to the RWP*Load Simulator a bit further down,
and reference documentation is available after install by typing ```rwlman```.
There are also simple demos to get you started, 
a few scripts to measure Oracle Net performance
and a complete oltp workload
The latter is vaguely similar to Swingbench.

It is important to understand that rwloadsim is not a general purpose application programming environment; it is a scripting and workload simulation tool.
If you attempt using it beyond its design goals, you will quickly observe limitations.
As just one example, there is a complete lack of a graphical interface, and the only reason you can get html pages with graphics out of it is that you can write code that generates html and code that calls gnuplot.

You should typically start with a binary distribution (found at Github releases), but you can also build it from sources or just look the sources to get under the hood.
It is written in C with use of flex and bison.
It is strongly recommended that you also have gnuplot and that you have a place to put html files such that you can view them from a browser.

## Getting the RWP\*Load Simulator

The tool is available at [https://github.com/oracle/rwloadsim](https://github.com/oracle/rwloadsim) where
you will find both sources and binary distributions.

## RWP\*Load Simulator users guide

### Introduction

* [OVERVIEW.md](OVERVIEW.md) A brief introduction
* [INSTALL.md](INSTALL.md) Install the software from binary distribution and create the repository
* [WORKING.md](WORKING.md) Working with rwloadsim using a few examples

### Basic concepts

* [SCALAR.md](SCALAR.md) Declaring scalars such as integers and doubles
* [PROCFUNC.md](PROCFUNC.md) Declaring procedures and functions
* [SQL.md](SQL.md) Declaring and using static SQL
* [EXPRESSION.md](EXPRESSION.md) Expressions in rwloadsim
* [FILE.md](FILE.md) Use of files and pipe-lines
* [DATABASE.md](DATABASE.md) Declaration and use of databases
* [ATCLAUSE.md](ATCLAUSE.md) Using the at clause to choose a database
* [RANSTRING.md](RANSTRING.md) Providing random strings
* [RANPROC.md](RANPROC.md) Randomly executing some procedure
* [SIMULATOR.md](SIMULATOR.md) Simulating workload using threads

### Using the rwloadsim program

* [RWLOADSIM.md](RWLOADSIM.md) Calling the rwloadsim tool
* [ARGUMENTS.md](ARGUMENTS.md) Providing arguments on the command line to your rwloadsim program
* [COMPILE.md](COMPILE.md) Compilation and execution
* [STATISTICS.md](STATISTICS.md) Saving and using run time statistics

### Samples and ready to use workloads

* [COMPLEXAMPLE.md](COMPLEXAMPLE.md) A complete example
* [ORACLENET.md](ORACLENET.md) Utilities to measure database "ping" rates and network throughput
* [SAMPLEOLTP.md](SAMPLEOLTP.md) Overview of the sample oltp workload

### Advanced features

* [CLOB.md](CLOB.md) Using CLOB data
* [DYNAMICSQL.md](DYNAMICSQL.md) Declaring and using dynamic SQL
* [REGEX.md](REGEX.md) Dealing with regular expression search and substitute
* [CONSTORM.md](CONSTORM.md) Avoiding connection storms
* [ERROR.md](ERROR.md) Error handling during parse and execution
* [INTERPRETER.md](INTERPRETER.md) Using rwloadsim as an interpreter
* [INTERRUPT.md](INTERRUPT.md) Interrupting rwloadsim
* [MODULAR.md](MODULAR.md) Methods for modular programming
* [MULTI.md](MULTI.md) Running multiple processes as one simulation
* [QUEUEING.md](QUEUEING.md) Handling queuing in control loops

## RWP\*Load Simulator reference manual

The reference manual is distributed as a large number of pages that are very similar
to ordinary UNIX man-pages; the are available after installation of the tool.
There is a single shell script, rwlman, that is used rather than the ordinary man
command, to display these.
As a starting point, simply type
```
rwlman
```
