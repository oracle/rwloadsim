## News and updates for version 3.2.1 of the RWP\*Load Simulator

The most important changes in version 3.2.1 are:

### Support for reading and writing binary files and binary database contents

A new utility, ocp, with similar purpose as the standard scp utility, can be used to copy files
to and from database directories.
The "other end" of the copy is either the system where you execute ocp or it is a cloud
bucket.
Note that ocp is also available on MS Windows, so if you have database access from a Windows laptop,
it can be used to copy files between your laptop and a directory in the database.

### Limitied support for a raw data type

To implement ocp, there is support for raw (binary) data to be written or read to files and sent to
or from the database using bind, define or bindout.
There is currently no other use of this new data type and it can e.g. not be used
in expressions or concatenations.

## News and updates for version 3.2.0 of the RWP\*Load Simulator

The most important changes in version 3.2.0 are:

### Bitwise operations and hexadecimal input

Bitwise shift, and, or and exclusive or operators have been added as well as the ability
to input hexadecimal integer constants.

Additionally, bitwise set and clear assignments have been added.

### Functions for database end-2-end tracing

Two new functions, dbseconds() and ociseconds() have been added; they return respectively the
time spent on the database side and on the clienside when executing select OCI calls.

### Procedure calls do not require parentheses

To make the the rwloadsim scripting language more similar to bash and to make calls to built-in statements 
and user declared procedures appear identical, there is no longer a requirement
to have parentheses around the arguments to procedure calls.

### Several changes to standard oltp workload

The standard oltp workload has evolved gradually in particular in the area of reporting.

## Navigation
* [index.md](index.md#rwpload-simulator-users-guide) Table of contents
* [NEWS33.md](NEWS33.md) Previous topic: News in version 3.3
* [NEWS31.md](NEWS31.md) Next topic: News in version 3.1 and 3.0
