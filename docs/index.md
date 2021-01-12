# The RWP\*Load Simulator

The RWP\*Load Simuator is a tool for scripting, simulation and much more around the Oracle database.
Like having a bit of bash and SQL, a nip of C or Java, a dash of awk, a grain of sed
plus drops of secret sauce in one single tool. 

## Getting the RWP\*Load Simulator

The tool is available at [https://github.com/oracle/rwloadsim](https://github.com/oracle/rwloadsim) where
you will find both souces and binary distributions.

## RWP\*Load Simulator users guide

### Introduction

* [OVERVIEW.md](OVERVIEW.md) A brief introduction
* [INSTALL.md](INSTALL.md) Install the software from binary distribution and create the repository
* [WORKING.md](WORKING.md) Working with rwloadsim using a few examples

### Basic concepts

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
* [SIMULATOR.md](SIMULATOR.md) Simulating workload using threads

### Using the rwloadsim program

* [RWLOADSIM.md](RWLOADSIM.md) Calling the rwloadsim tool
* [ARGUMENTS.md](ARGUMENTS.md) Providing arguments on the command line to your rwloadsim program
* [COMPILE.md](COMPILE.md) Compilation and execution
* [STATISTICS.md](STATISTICS.md) Saving and using runtime statistics

### Sample usages

* [COMPLEXAMPLE.md](COMPLEXAMPLE.md) A complete example
* [SAMPLEOLTP.md](SAMPLEOLTP.md) Overview of the sample oltp workload

### Advanced features

* [CLOB.md](CLOB.md) Using CLOB data
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
