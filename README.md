# RWP\*Load Simulator
This is the RWP\*Load Simulator - a tool that can be used for several purposes:

 * Simulate a workload using an Oracle database
 * Write shell scripts that are closely integrated with Oracle SQL

Please the the doc directory for Users' Guide and for Reference manual

## Prerequisites

 * An Oracle client environment (release 12 or higher) used for building the tool; Instant Client is fine
 * Potentially client environemnts for other releases than the primary build release, these can similarly use full client or Instant Client; releases 11, 12, 18, 19, 20 are supported
 * A database (release 12 or higher) that can be used to run test scripts
 * An environment with the gcc compiler and tools like make
 * Both bison and flex must be installed as well
 * Installing gnuplot is highly recommended
 * Unless you have access to binaries, you need libreoffice 6.1 to create documentation

## Building rwloadsim

 * Install the prerequisites
 * Clone the complete directory from github
 * Run 'sh makedirs.sh' to create directories for binaries and object files
 * Modify your PATH environment to include the bin directory (which will be empty right after clone)
 * Modify your LD\_LIBRARY\_PATH environment appropriately for your Instant Client or ORACLE\_HOME based client
 * Run 'sh makemake.sh' to create the top level Makefile and the Makefile in rwl/src, it will prompt for releases and install locations. If you want to build for multiple versions, it is recommended that your primary build version is the same version you use for your test database.
 * Run 'make' to build rwloadsim using the primary release
 * Go to the rwl/test directory and run all tests per the [rwl/test/TEST.md](rwl/test/TEST.md) file
 * Run 'make all' from the top directory to build rwloadsim using all other client releases
 * Create rwl/admin/vim.tar by executing 'sh makevimtar.sh'
 * If you want to ship the executables to some other system, run 'sh makeship.sh' which will create a .tgz file
 * If you want to work on the source, you can do so directly from the rwl/src directory. 

## Creating documentation

If you only have the pure source files, documentation will only be available as source code for
libreoffice in fodt (Flat Open Document Text) format and ebnf format for the syntax. If you are
getting a binary download, they will likely contain documentation in pdf and html format.

 * To create the pdf and html version of the documents, make sure you have libreoffice and run make in the rwl/doc directory
 * To create nicely looking and click-able syntax diagrams for the rwl language, upload doc/rwlsyntax.ebnf to http://www.bottlecaps.de/rr/ui. 

## Known good environments

For building rwloadsim and running the test suite, these versions have been succesfully tested:

 * Oracle Enterprise Linux 7 with gcc 4.8.5, bison 3.0.4, flex 2.5.37, database 12.2.0.1
 * Oracle Enterprise Linux 6 with gcc 4.4.7, bison 2.4.1, flex 2.5.35, database 12.2.0.1
 * Ubuntu 18.04 with gcc 7.5.0, bison 3.0.4, flex 2.6.4, database 19.4

In addition, several other client and database releases and combinations thereof have been used succesfully.  
Similarly, a few other x86\_64 based Linux versions have been used succesfully.
Compiling on 32 bit systems is not been attempted and is likely to require code modifications.
