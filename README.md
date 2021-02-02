# RWP\*Load Simulator
This is the RWP\*Load Simulator - a tool that can be used for several purposes:

 * Simulate a workload using an Oracle database
 * Write shell scripts that are closely integrated with Oracle SQL

Please see the [docs directory](docs) for Users' Guide; the reference manual is available after
installation using rwlman.

## Branches

The branches that should be used by ordinary users are named after the release, e.g. 2.3.1.
The master branch is always the development branch and may as such contain intermediate code.
You should normally _not_ clone or checkout the master branch unless you are developing the
rwloadsim code.

At present, branch 2.3.1 is the release branch.

Please see [CHANGELOG.md](CHANGELOG.md) for details.

## Using a binary distribution

Using a binary distribution is simple as all it requires is an Oracle Client environment
and access to one (or more) databases.
Please see [docs/INSTALL.md](docs/INSTALL.md) for details.

## Getting started

The suggested documentation for getting started is the first two chapters of
the users manual available at [docs/index.md](docs/index.md#rwpload-simulator-users-guide).
To get quickly started with some of the rwloadsim basics, a good starting point
is at [docs/WORKING.md](docs/WORKING.md).
The demo directory contains all files mentioned there.

## Building rwloadsim from sources

Please see [BUILDING.md](BUILDING.md)

## Documentation

The users guide is found in docs and is distributed into a number of .md files. 
You should start with [docs/index.md](docs/index.md) which has a very brief 
introduction and links to all files of the users guide.

The reference guide is created as manual pages that are found in man/man1rwl.
The shell script rwlman, that will be copied to the bin directory when you run make
is the documented way to read these manual pages.
Simply start by typing ```rwlman```.

## Known good environments

For building rwloadsim and running the test suite, these versions have been successfully tested:

 * Oracle Linux 7 with gcc 4.8.5, bison 3.0.4, flex 2.5.37, database 12.2.0.1
 * Oracle Linux 7 with gcc 4.8.5, bison 3.0.4, flex 2.5.37, database 19.9.0.0
 * Oracle Linux 6 with gcc 4.4.7, bison 2.4.1, flex 2.5.35, database 12.2.0.1
 * Ubuntu 18.04 with gcc 7.5.0, bison 3.0.4, flex 2.6.4, database 19.4
 * Solaris 11.4 with gcc 9.2.0, bison 3.4.2, flex 2.6.4, instant client 19.8 with test database 12.2 on Linux; several of the possible differences listed in the TEST.md file are known to occur on Solaris.

In addition, several other client and database releases and combinations thereof have been used successfully.  
Similarly, a few other x86\_64 based Linux versions have been used successfully.
Compiling on 32 bit systems has not been attempted and is likely to require code modifications.

## Included workloads

Both the binary and source distributions includes complete workloads,
please see [workloads/README.md](workloads/README.md) for details.
