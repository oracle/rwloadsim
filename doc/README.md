# Documentation to RWP\*Load Simulator

The documentation to the RWP\*Load Simulator is split into two parts:

* A users guide found as various markdown files in this directory
* A reference guide that is accessed using the rwlman command

## RWP\*Load Simulator users guide

* [OVERVIEW.md](OVERVIEW.md) A brief introduction
* [WORKING.md](WORKING.md) Working with rwloadsim using a few examples
* [INSTALL.md](INSTALL.md) Explains how to create the repository and how to install if you have a binary distribution.
* [SCALAR.md](SCALAR.md) Declaring scalars such as integers and doubles
* [PROCFUNC.md](PROCFUNC.md) Declaring procedures and functions
* [SQL.md](SQL.md) Declaring and using static SQL
* [DYNAMICSQL.md](DYNAMICSQL.md) Declaring and using dynamic SQL
* [EXPRESSION.md](EXPRESSION.md) Expressions in rwloadsim
* [FILE.md](FILE.md) Use of files and pipe-lines
* [DATABASE.md](DATABASE.md) Declaration and use of databases
* [ATCLAUSE.md](ATCLAUSE.md) Using the at clause to choose a database
* [RANSTRING.md](RANSTRING.md) Providing random strings
* [RANPROC.md](RANPROC.md) Randomly executing some procedure
* [CLOB.md](CLOB.md) Using CLOB data
* [SIMULATOR.md](SIMULATOR.md) Simulating workload using threads
* [REGEX.md](REGEX.md) Dealing with regular expression search and substitute
* [RWLOADSIM.md](RWLOADSIM.md) Calling the rwloadsim tool
* [ARGUMENTS.md](ARGUMENTS.md) Providing arguments on the command line to your rwloadsim program
* [COMPILE.md](COMPILE.md) Compilation and execution
* [COMPLEXAMPLE.md](COMPLEXAMPLE.md) A complete example
* [CONSTORM.md](CONSTORM.md) Avoiding connection storms
* [ERROR.md](ERROR.md) Error handling during parse and execution
* [INTERPRETER.md](INTERPRETER.md) Using rwloadsim as an interpreter
* [INTERRUPT.md](INTERRUPT.md) Interrupting rwloadsim
* [MODULAR.md](MODULAR.md) Methods for modular programming
* [MULTI.md](MULTI.md) Running multiple processes as one simulation
* [QUEUEING.md](QUEUEING.md) Handling queuing in control loops
* [STATISTICS.md](STATISTICS.md) Saving and using runtime statistics

## RWP\*Load Simulator reference manual

The reference manual is distributed as a large number of pages that are very similar
to ordinary UNIX man-pages.
There is a single shell script, rwlman, that is used rather than the ordinary man
command, to display these. 
As a starting point, simply type
```
rwlman
```
