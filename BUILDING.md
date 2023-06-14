# Building the RWP\*Load Simulator from source

## Prerequisites

 * An Oracle client environment (release 19.9 or higher) used for building the tool; Instant Client including basiclite, sdk and sqlplus is fine.
 * Potentially client environments for other releases than the primary build release, these can similarly use full client or Instant Client; releases 11, 12, 18, 19, 21, 23 are supported.
 * For client release 19, you must have at least 19.9.
 * A database (release 19 or higher, release 21.3 preferred) that can be used to run test scripts.
 * An environment with the gcc compiler and tools like make.
 * Both bison (3.0.4 or newer) and flex must be installed.
 * Installing ctags and cscope is recommended if you want to work on the source.
 * The Bourne Again Shell, /bin/bash.
 * Installing gnuplot is highly recommended, although not required for compiling or running test suite. It is required for running the oltp workload.
 * On Solaris, you must have GNU utilities installed and they _must_ be before ordinary utilities in your PATH. Typically, this means your PATH should have /usr/gnu/bin among the first parts.

## Building rwloadsim

 * Install the prerequisites
 * Clone or pull the complete directory from github
 * Run 'sh makedirs.sh' to create directories for object files
 * Modify your PATH environment to include the bin directory
 * Modify your LD\_LIBRARY\_PATH environment appropriately for your Instant Client or ORACLE\_HOME based client
 * Note that even if you are using an rpm based install of Instant Client, you still need to set LD\_LIBRARY\_PATH. The location would be something like /usr/lib/oracle/21/client64/lib.
 * Run 'sh makemake.sh' to create the top level Makefile and the Makefile in src, it will prompt for releases and install locations. If you want to build for multiple versions, it is recommended that your primary build version and your test database are the same major version (such as 21).
 * To get vim coloring, create symbolic links in $HOME/.vim/ftdetect to the files in admin/.vim/ftdetect and in $HOME/.vim/syntax to to files in admin/.vim/syntax.
 * Run 'make' to build rwloadsim using the primary release.
 * Go to the test directory and run all tests per the [test/TEST.md](test/TEST.md) file.
 * Run 'make all' from the top directory to build rwloadsim using all other client releases.
 * If you want to ship the executables to some other system, run 'sh makeship.sh' which will create a .tgz file.
 * If you want to work on the source, you can do so directly from the src directory.
If you have ctags and cscope installed, you can type 'make ctags' to create a vi tags file and a cscope.out file.

Note that every-time you run 'make' in the top directory, the patch level
(fourth number in the version) will be increased by one.
If you work on the source and do frequent makes, it is recommended that you run
'make' in the src directory, which does not increase the patch level.

## Known good environments

For building rwloadsim and running the test suite, these versions have been successfully tested:

 * Oracle Linux 7 on x86_64 with gcc 4.8.5, bison 3.0.4, flex 2.5.37, database 12.2.0.1
 * Oracle Linux 7 on x86_64 with gcc 4.8.5, bison 3.0.4, flex 2.5.37, database 19.9
 * Oracle Linux 7 on x86_64 with gcc 4.8.5, bison 3.0.4, flex 2.5.37, database 21.3
 * Oracle Linux 8 on x86_64 with gcc 8.4.1, bison 3.0.4, flex 2.6.1, database 21.3
 * Oracle Linux 8 on ARM64 with gcc 8.4.1, bison 3.0.4, flex 2.6.1, database 19.9
 * Ubuntu 18.04 on x86_64 with gcc 7.5.0, bison 3.0.4, flex 2.6.4, database 19.4
 * Ubuntu 20.04 on x86_64 with gcc 9.4.0, bison 3.5.1, flex 2.6.4, database 19.9
 * Solaris 11.4 on Sparc with gcc 9.2.0, bison 3.4.2, flex 2.6.4, instant client 19.8 with test database 12.2 on Linux; several of the possible differences listed in the TEST.md file are known to occur on Solaris.

In addition, several other client and database releases and combinations thereof have been used successfully.  
Similarly, a few other x86\_64 based Linux versions have been used successfully.
Compiling on 32 bit systems has not been attempted and is likely to require code modifications.

Note than bison versions earlier than 3.0.4 are _not supported_, and will cause compilation errors.

## Other Platforms

If you want to build on other platforms, you will initially have to modify rwlport.h in
the src directory.
It contains a set of defines that must be provided for the new platform.

At present, the following platforms are in _Beta_ state, which means they are not yet ready for production use.
If you complete a port, please contact the rwloadsim developer.

### Apple OS X

For building on OS X, please be aware of the following:

 * Ensure you have the required software versions - the standard bison version on OS X is likely to be some version 2 which is _not_ sufficient.
 * The rwlport.h file includes the necessary settings
 * Install Instant Client and set environment variables
 * Disable System Integrity Protection as the rwloadsim shell script otherwise will fail
 * The rwloadsim test suite has _not_ executed
 * Shipping binaries (to other OS X systems) has _not_ been attempted

Note that if you find a way to solve the problem that the rwloadsim shell script is failing due to
its use of LD_LIBRARY_PATH, please provide feedback.
