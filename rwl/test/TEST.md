# RWP\*Load Simulator testing

## Test overview

This directory contains a large number of tests that will verify (almost) all features of
the RWP\*Load Simulator are working properly.
All tests are executed using a single shell script, test.sh, or you can choose to run
just a list of tests by providing the wanted test numbers (without the .rwl suffix) as agument.
Tests are numbered 1, 2, 3, etc.

When the test.sh script runs, it will show the complete command for each individual test
and write stdout and stderr from the execution
to files in the directory named testres, that
already contains _expected_ output for both stdout and stderr of all tests.
The expected output is in files names testres/NNN.out.good respectively testres/NNN.err.good
for most tests; some tests are somewhat more complex, so there are a few more
files in the testres directory named .good.
When the individual tests run, files named testres/NNN.out and testres/NNN.err will be
generated and they will be compared to the .good files and any differences will be reported.
If differences are found, the failing tests will be listed.
Note that in some cases, an exact match between actual and execpted
output cannot be guaranteed, the test.sh script knows about these and will
display messages accordingly.

## Database preparation

You will need a database for your testing where you have access to a user with DBA privileges.
The database must be at least version 12, and it cannot be an autonomous database as these
do not allow users to configure DRCP.
The database _must_ be registered with a listener to execute the actual tests;
connections via ORACLE_SID are not sufficient.

The file testuser.sql drops and creates the test user.
You should first modify it to suit your needs for things like password requirements
and tablespaces.
Note that the test user MUST be named rwltest
as a large number of test outputs contain the name of the test user.
If you call it something else, you will get lots of differences.
After modifying, log in to sqlplus with a user having DBA privileges and execute:
```
@testuser
```
Do make sure the rwltest user gets the privilege to execute dbms_lock, which may 
require you to log in to the root container of a multitenant database.

Some tests require DRCP to be configured, which can be done using the cpool.sql script.
If your database is a PDB, you need access to the root to start DRCP.
Potentially modify the script cpool.sql and execute it as SYSDBA (in the root
database if multitenant) to start DRCP:
```
@cpool
```
Once your rwltest user is created, you need to create the necessary tables and
other objects.
Log in to your rwltest user using sqlplus and execute the following at the SQL> prompt
```
@testschema
```
Next create a file named testuserinfo.rwl as a copy of testuserinfo-template.rwl
and modify it such that it has the correct usernames and
passwords for both a user with DBA privileges (at CDB level if multitenant)
and the ordinary user just created.
You will also need to set the connect string properly.
For those tests that require DRCP, the test itself will append ":pooled" to the connect_string
provided in testuserinfo.rwl
For most other tests, ":dedicated" will be appended.

To make sure everything is working as expected, type:
```
rwloadsim testuserinfo.rwl testdrcp.rwl testpool.rwl testdefault.rwl testsystem.rwl
```
which should run without errors and just display four connected messages.

## Setup a few files and symbolic links

Some tests require certain files and symbolic links to be present, create these by running
```
sh prepare.sh
```
you only need to do this once.

## Executing the test suite

You can execute all tests by simply doing:
```
./test.sh
```
this will run for abound five minutes and will show statistics about good and failed tests at the end.
The test.sh shell script takes an optional argument, -q, which will make it quiet about the
full command lines for the tests being executed.

If you provide a list of test numbers, only those will be executed:
```
./test.sh 12 13 14
>>>>>>>> 12: rwloadsim 12.rwl
>>>>>>>> 13: rwloadsim rwlrand.rwl 13.rwl
>>>>>>>> 13 long: rwloadsim -q -i max:=100000 -D 0x0 rwlrand.rwl 13.rwl
>>>>>>>> 14: rwloadsim rwlrand.rwl 14.rwl
good count: 6
good stderr count: 3
bad count: 0
probably good stdout count: 0
probably good stderr count: 0
```
As many tests require more command line arguments to rwloadsim than just the simple
name of the .rwl file, the execution of the full command line for each test
is built into the test.sh script. 
As shown in the sample above,
test number 13 is somewhat special as it is executed _twice_ with 
different arguments.
The output shown is useful if you need to repeat a test by hand to analyze any differences 
As just one example, you can reexecute the second test 13 by hand by typing
```
rwloadsim -q -i max:=100000 -D 0x0 rwlrand.rwl 13.rwl
```
You can make the script only show the final result and be quiet about the
commands using the -q option:
```
./test.sh -q 12 13 14
good count: 6
good stderr count: 3
bad count: 0
probably good stdout count: 0
probably good stderr count: 0
```
If some tests are returning unexpected results, this will be shown as here:
```
good count: 194
good stderr count: 185
bad count: 1
probably good stdout count: 0
probably good stderr count: 1
badlist: 166.out
You are required to rerun:
sh test.sh 166
You are recommended to rerun:
sh test.sh 158
To rerun all these, do:
sh test.sh 166 158
```
you can simply rerun the failing ones, or you can decide to analyze further.

## Potential differences

For several tests, an exact match cannot be expected, so it is normal that there
are some differences.
The scripts knows about these differences, and the final result shown at the
end differentiates between tests that must be rerun and tests that it is 
recommended to rerun.  
The expected differences can be due to timing or performance, versions, portability, etc.

You should always investigate why differences are there, and if you are confident the 
results are actually good, you can overwrite the .good files to achieve a clean test.

The distributed .good files were created using a database release 12.2.0.1.0 running
on Oracle Enterprise Linux 7.

The following lists tests with known potential differences.

### 21, 41, 68, 88
These sometimes show errors (which is to print
the location of the error in the SQL text), and sometimes does not. 
It really _should not_ print these errors, and it is considered an issue/bug with OCI
that the error location sometimes gets printed.
Simply rerunning a few times normally make those three test clean.

### 151, 156

The expected stdout/stderr depends on the error message and the return code when "cat" cannot
open a file, which may be different on different platforms.

### 152

The expected output depends on the pricese implementation of mathematical functions like log()
when these aren't define mathematically and therefore returning e.g. "nan", etc.
This implementation may be platform specific.

### 158

The output depends on line numbers in the standard dbms_lock package
so the correct output may change when the database release changes.

### 177

The correct output depends on error messages from the regex package
which may be platform specific.

### 184

The correct output depends on the release of the database
server that is being used.

