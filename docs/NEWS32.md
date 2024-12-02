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
* [INSTALL.md](INSTALL.md) Previous topic: Install and create repository
* [NEWS31.md](NEWS31.md) Next topic: Working with rwloadsim using a few examples
