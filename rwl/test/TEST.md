# RWP\*Load Simulator testing

## Test overview

This directory contains a large number of tests that will verify (almost) all features of
the RWP\*Load Simulator are working properly.
All tests are executed using a single shell script, test.sh, or you can choose to run
just a list of tests.
Tests are numbered 1, 2, 3, etc.

When the test.sh script runs, it will generate output in the directory named testres, that
already contains _expected_ output for both stdout and stderr of all tests.
The expected outpus is in files names testres/NNN.out.good respectively testres/NNN.err.good
for most tests; some tests are somewhat more complex.
When the individual tests run, files named testres/NNN.out and testres/NNN.err will be generated
and they will be compared to the good files and any differences will be reported.
If differences are found, the failing tests will be listed.  
Note that in some cases, an exact match between actual and execpted output cannot be guaranteed,
the test.sh script knows about these and will display messages accordingly.

## Preparations

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
After modifying, execute it using:

```
sqlplus /nolog @testuser
```

It should run without errors except during first execution of the 'drop user' command.

Some tests require DRCP to be configured, which can be done using the cpool.sql script.
Potentially modify the script and execute it as SYSDBA to start DRCP.

Next modify the file testuserinfo.rwl such that it has the correct usernames and
passwords for both a user with DBA privileges and the ordinary user just created.
You will also need to set the connect string properly.
For those tests that require DRCP, the test itself will append ":pooled" to the connect_string
provided in testuserinfo.rwl

## Setup a few symbolic links

Some tests require symbolic links to be present, create these by running

```
sh prepare.sh
```

you only need to do this once.

## Executing the test suite

You can execute all tests by simply doing:

```
sh test.sh
```

this will run for abound five minutes and will show statistics about good and failed tests at the end.

If you provide a list of test numbers, only those will be executed:

```
sh test.sh 1 2 3
good count: 3
good stderr count: 3
bad count: 0
probably good stdout count: 0
probably good stderr count: 0
```

e.g. shows execution of the first three tests.

The test.sh shell script takes an optional argument, -e, which will make it echo the complete
command lines for the tests being executed as this example shows:

```
sh test.sh -e 1 2 3
>>>>>>>> 1: rwloadsim 1.rwl
>>>>>>>> 2: rwloadsim 2.rwl
>>>>>>>> 3: rwloadsim 3.rwl
good count: 3
good stderr count: 3
bad count: 0
probably good stdout count: 0
probably good stderr count: 0
```

This is useful if you need to repeat a single test by hand to analyze any differences.

If some tests are returning unexpected results, this will be shown as here:

```
good count: 194
good stderr count: 185
bad count: 1
probably good stdout count: 0
probably good stderr count: 1
badlist: 166.out
You are required to rerun:
sh test.sh -e 166
You are recommended to rerun:
sh test.sh -e 158
To rerun all these, do:
sh test.sh -e 166 158
```

you can simply rerun the failing ones, or you can decide to analyze further.
Note specifically that the tests 41, 68 and 88 sometimes show errors (which is to print
the location of the error in the SQL text), and sometimes does not. 
It reall _should not_ print these errors, and it is considered an issue/bug with OCI
that the error location sometimes gets printed.
Simply rerunning a few times normally make those three test clean.

