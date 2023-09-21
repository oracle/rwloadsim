# RWP\*Load Simulator testing

## Test overview

This directory contains a large number of tests that will verify (almost) all features of
the RWP\*Load Simulator are working properly.
All tests are executed using a single shell script, test.sh, or you can choose to run
just a list of tests by providing the wanted test numbers (without the .rwl suffix) as argument.
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
Note that in some cases, an exact match between actual and expected
output cannot be guaranteed, the test.sh script knows about these and will
display messages accordingly.

The test.sh script is a bit messy, so be careful if you add new tests.

## Database preparation

You will need a database for your testing where you have access to a user with DBA privileges.
The database must be at least version 19, and it should not be an autonomous database as these
have several constraints that make a number of tests fail.
It is expected that the test database is multitenant, and that you are able to
access the root database as a DBA as well as using "as sysdba".
The database _must_ be registered with a listener to execute the actual tests;
connections via ORACLE_SID are not sufficient.
Note that some tests include output of the actual database version, and that this
currently is version 21.9.
Therefore, if your test database is some other version, certain differences are expected.

The file testuser.sql drops and creates the test user.
You should first make a copy of the file and make sure only you have access to it.
Then modify the copy according to your database's requirements for things like 
default tablespace, password, etc.
Note that the test user MUST be named rwltest
as a large number of test outputs contain the name of the test user.
If you call it something else, you will get lots of differences.
After modifying your copy of the file, it must be executed from your root
container after changing your session to the actual PDB.
You _cannot_ execute it from a DBA user in your PDB.

To create the user, you therefore need to log in as sysdba
to your root container and then
switch session to your actual PDB.
```
sqlplus username/{password}@//hostname/service as sysdba
SQL> show pdbs
SQL> alter session set container=<your pdb>

SQL> @testuser
```
Some tests require DRCP to be configured, which can be done using the cpool.sql script.
It can normally be used as is, although you may want to look at and potentially change
some of the DRCP configuration options in the file.
The script must be executed while connected as sysdba in the root container
of your database:
```
SQL> @cpool
```
Once your rwltest user is created, you need to create the necessary tables and
other objects.
Change your current directory to the test directory of your rwloadsim distribution, 
and log in to your rwltest user using sqlplus and execute the following at the SQL> prompt
```
@testschema
```
In addition to the objects used by the tests, it also creates the repository database objects.

Next create a private copy (possibly in the same directory where you copied rwltest.sql)
of the file rwltestuser.rwl,
and modify it such that it has the correct usernames
passwords 
and connection strings for both a user with DBA privileges (in your _root_ if multitenant)
and the ordinary user just created.
You will also need to set the connect strings properly for respectively the normal
connect string and that used by the DRCP test, which should include ":pooled" or
have server=pooled in its tnsnames.ora entry.
If your database isn't configured for DRCP, you can use the same connect string
for both, in which case a few differences are expected.
You also need to set connect string, username and password for a user with DBA
privileges connecting to your multitenant root database.

To run tests, the full path of this file must be known to test.sh which gets
it from the environment variable RWLTESTUSER, so do something like
```
export RWLTESTUSER=/full/path/to/your/rwltestuser.rwl
```
such that the RWLTESTUSER points to your private copy with the necessary credentials.

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
When you have completed testing, you can remove those extra copies of files and
symbolic links by running
```
sh unprepare.sh
```

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
As just one example, you can re-execute the second test 13 by hand by typing
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

The distributed .good files were created using a database release 21.3 running
on Oracle Linux 7.

The following lists some tests with known potential differences, although the 
list is not comprehensive.

### 21, 41, 68, 88
These sometimes show errors (which is to print
the location of the error in the SQL text), and sometimes does not. 
It really _should not_ print these errors, and it is considered an issue/bug with OCI
that the error location sometimes gets printed.
Simply rerunning a few times normally make those three test clean.

### 34, 171, 355, 356
The first execution will always fail as they initially perform a drop table purge.
After executing these test, the tables will exist and the drop table will succeed.

### 118, 138, 159, 164, 230, 313
Quite timing dependent

### 151, 156

The expected stdout/stderr depends on the error message and the return code when "cat" cannot
open a file, which may be different on different platforms.

### 152

The expected output depends on the precise implementation of mathematical functions like log()
when these aren't defined mathematically and therefore returning e.g. "nan", etc.
This implementation may be platform specific.

### 158

The output depends on line numbers in the standard dbms_lock package
so the correct output may change when the database release changes.

### 177

The correct output depends on error messages from the regex package
which may be platform specific.

### 184, 205

The correct output depends on the release of the database
server that is being used.
