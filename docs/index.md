# The RWP\*Load Simulator

The RWP*Load Simulator is a tool developed by the
Real World Performance group at Oracle Corporation.

If you think of a bit of bash and SQL, a dose of PL/SQL,
a nip of C or Java, a fragment of Oracle Call Interface,
a dash of awk, a grain of sed plus a few drops of secret sauce
and put it all into one tool, you will have an idea about what rwloadsim is.
In its core, it is a programming language that takes a bit
of each of these known tools and programming languages
and integrates them into one.

## Getting the RWP\*Load Simulator

The tool is available at [https://github.com/oracle/rwloadsim](https://github.com/oracle/rwloadsim) where
you will find both sources and binary distributions.

## RWP\*Load Simulator users guide

### Introduction

* [WHATISIT.md](WHATISIT.md) What is the RWP*Load Simulator
* [INTRODUCTION.md](INTRODUCTION.md) A brief introduction the RWP*Load Simulator
* [INSTALL.md](INSTALL.md) Install the software from binary distribution and create the repository
* [WORKING.md](WORKING.md) Working with rwloadsim using a few examples

### Basic concepts

* [SCALAR.md](SCALAR.md) Declaring scalars such as integers and doubles
* [PROCFUNC.md](PROCFUNC.md) Declaring procedures and functions
* [COMPOUND.md](COMPOUND.md) Use of compound statements such as if/then/else and loops
* [SQL.md](SQL.md) Declaring and using static SQL
* [EXPRESSION.md](EXPRESSION.md) Expressions and assignments
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

### Samples, public utilities and files, oltp workload

* [COMPLEXAMPLE.md](COMPLEXAMPLE.md) A complete example
* [YOUROWNWL.md](YOUROWNWL.md) Creating your own workload
* [ORACLENET.md](ORACLENET.md) Utilities to measure database "ping" rates and network throughput
* [MISCUTIL.md](MISCUTIL.md) Miscellaneous utilities and include files
* [SAMPLEOLTP.md](SAMPLEOLTP.md) Sample use cases with the oltp workload
* [OLTP.md](OLTP.md) Setup and use of the oltp workload
* [OLTPQUICKSTART.md](OLTPQUICKSTART.md) Quickstart of the oltp workload for experienced users

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
to ordinary UNIX man-pages; they are available after installation
and online at [refman/README.md](refman/README.md).
There is a single shell script, rwlman, that is used rather than the ordinary man
command, to display these.
As a starting point, simply type
```
rwlman
```
