# RWP\*Load Simulator
This is the RWP\*Load Simulator - a tool that can be used for several purposes:

 * Simulate a workload using an Oracle database
 * Write shell scripts that are closely integrated with Oracle SQL

Please see the doc directory for Users' Guide and for Reference manual

## Branches

The branches that should be used by ordinary users are named after the release, i.e. x.y.z.
The master branch is always the development branch and may as such contain intermediate code.
You should normally _not_ clone or checkout the master branch unless you are developing the
rwloadsim code.

* Version 2.2.3 Limited Production was released on 9-sep-2020 and is available in branch 2.2.3
* Version 2.2.4 Production was released on 18-Nov-2020 and is available in branch 2.2.4

Please see [RELEASE.md](RELEASE.md) for details.

## Prerequisites

 * An Oracle client environment (release 12 or higher) used for building the tool; Instant Client is fine
 * Potentially client environemnts for other releases than the primary build release, these can similarly use full client or Instant Client; releases 11, 12, 18, 19, 20 are supported
 * Note that when using release 19 for compiling, you must use 19.9 or later.
 * A database (release 12 or higher, release 19 preferred) that can be used to run test scripts
 * An environment with the gcc compiler and tools like make
 * Both bison and flex must be installed
 * The Bourne Again SHell, /bin/bash
 * Installing gnuplot is highly recommended, although not required for compiling or running test suite

## Building rwloadsim

 * Install the prerequisites
 * Clone the complete directory from github
 * Run 'sh makedirs.sh' to create directories for binaries and object files
 * Modify your PATH environment to include the bin directory (which will be empty right after clone)
 * Modify your LD\_LIBRARY\_PATH environment appropriately for your Instant Client or ORACLE\_HOME based client
 * Run 'sh makemake.sh' to create the top level Makefile and the Makefile in rwl/src, it will prompt for releases and install locations. If you want to build for multiple versions, it is recommended that your primary build version is the same version you use for your test database.
 * To get vim coloring, create symbolic links in $HOME/.vim/ftdetect to the files in rwl/admin/.vim/ftdetect and in $HOME/.vim/syntax to to file in rwl/admin/.vim/syntax.
 * Run 'make' to build rwloadsim using the primary release
 * Go to the rwl/test directory and run all tests per the [rwl/test/TEST.md](rwl/test/TEST.md) file
 * Run 'make all' from the top directory to build rwloadsim using all other client releases
 * If you want to ship the executables to some other system, run 'sh makeship.sh' which will create a .tgz file
 * If you want to work on the source, you can do so directly from the rwl/src directory. You can initially type 'make ctags' to create a vi tags file and a cscope.out file

## Documentation

The users guide is found in rwl/doc and is distributed into a number of .md files. 
You should start with [rwl/doc/README.md](rwl/doc/README.md) which has links to all other files.

The reference guide is created as manual pages that are found in rwl/man/man1rwl.
The shell script rwlman, that will be copied to the bin directory when you run make
is the documented way to read these manual pages.
Simply start by typing 'rwlman'.

## Known good environments

For building rwloadsim and running the test suite, these versions have been succesfully tested:

 * Oracle Enterprise Linux 7 with gcc 4.8.5, bison 3.0.4, flex 2.5.37, database 12.2.0.1
 * Oracle Enterprise Linux 7 with gcc 4.8.5, bison 3.0.4, flex 2.5.37, database 19.9.0.0
 * Oracle Enterprise Linux 6 with gcc 4.4.7, bison 2.4.1, flex 2.5.35, database 12.2.0.1
 * Ubuntu 18.04 with gcc 7.5.0, bison 3.0.4, flex 2.6.4, database 19.4
 * Solaris 11.4 with gcc 9.2.0, bison 3.4.2, flex 2.6.4, instant client 19.8 with test database 12.2 on Linux; several of the possible differences listed in the TEST.md file are known to occur on Solaris.

In addition, several other client and database releases and combinations thereof have been used succesfully.  
Similarly, a few other x86\_64 based Linux versions have been used succesfully.
Compiling on 32 bit systems has not been attempted and is likely to require code modifications.
