# Building the RWP\*Load Simulator from source

## Prerequisites

 * An Oracle client environment (release 12 or higher) used for building the tool; Instant Client including basiclite, sdk and sqlplus is fine
 * Potentially client environments for other releases than the primary build release, these can similarly use full client or Instant Client; releases 11, 12, 18, 19, 21 are supported
 * Note that when using release 19 for compiling, you must use 19.9 or later.
 * A database (release 12 or higher, release 19 preferred) that can be used to run test scripts
 * An environment with the gcc compiler and tools like make
 * Both bison (3.0.4 or newer) and flex must be installed
 * Installing ctags and cscope is recommended if you want to work on the source
 * The Bourne Again Shell, /bin/bash
 * Installing gnuplot is highly recommended, although not required for compiling or running test suite
 * On Solaris, you must have GNU utilities installed and they _must_ be before ordinary utilitiex in your PATH.
Typically, this means your PATH should have /usr/gnu/bin among the first parts.

## Building rwloadsim

 * Install the prerequisites
 * Clone the complete directory from github
 * Run 'sh makedirs.sh' to create directories for object files
 * Modify your PATH environment to include the bin directory
 * Modify your LD\_LIBRARY\_PATH environment appropriately for your Instant Client or ORACLE\_HOME based client
 * Run 'sh makemake.sh' to create the top level Makefile and the Makefile in src, it will prompt for releases and install locations. If you want to build for multiple versions, it is recommended that your primary build version is the same version you use for your test database.
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

## Other Platforms

If you want to build on other platforms, you will initially have to modify rwlport.h in
the src directory.
It contains a set of defines that must be provided for the new platform.

At present, the following platforms are in _Beta_ state.
If you complete a port, please contact the rwloadsim developer.

### Apple OS X

For building on OS X, please be aware of the following:

 * Ensure you have the required software versions - the standard bison version on OS X is likely to be some version 2 which is _not_ sufficient.
 * The rwlport.h file includes the necessary settings
 * Install Instant Client and set environent variables
 * Disable System Integrity Protection as the rwloadsim shell script otherwise will fail
 * The rwloadsim test suite has _not_ executed
 * Shipping binaries (to other OS X systems) has _not_ been attempted
