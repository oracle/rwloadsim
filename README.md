# RWP\*Load Simulator
This is the RWP\*Load Simulator - a tool that can be used for several purposes:

 * Simulate a workload using an Oracle database
 * Write shell scripts that are closely integrated with Oracle SQL

Please the the doc directory for Users' Guide and for Reference manual

## Prerequisites

 * An Oracle client environment (release 12 or higher) used for building the tool; Instant Client is fine
 * Potentially client environemnts for other releases than the primary build release
 * A database  (release 12 or higher) that can be used to run test scripts
 * An environment with the gcc compiler and tools like make
 * Both bison and flex must be installed as well
 * Installing gnuplot is highly recommended
 * Unless you have access to binaries, you need libreoffice 6.1 to create documentation

## Building rwloadsim

 * Install the prerequisites
 * Clone the complete directory from github
 * Modify your PATH environment to include the bin directory (which will be empty right after clone)
 * Modify your LD\_LIBRARY\_PATH environment appropriately for your Instant Client or ORACLE\_HOME based client
 * Run 'sh makedirs.sh' to create directories for binaries and object files
 * Run 'sh makemake.sh' to create the top level Makefile and the Makefile in rwl/src, it will prompt for releases and install locations
 * Run 'make' to build rwloadsim using the primary release
 * Go to the rwl/test directory and run all tests per the TEST.md file
 * Run 'make all' from the top directory to build rwloadsim using all other client releases
 * If you want to ship the executables to some other system, run 'sh makeship.sh' which will create a .tgz file
 * If you want to work on the source, you can do so directly from the rwl/src directory. 

## Creating documentation

If you only have the pure source files, documentation will only be available as source code for
libreoffice in fodt (Flat Open Document Text) format and ebnf format for the syntax. If you are
getting a binary download, they will likely contain documentation in pdf and html format.

 * To create the pdf and html version of the documents, make sure you have libreoffice and run make in the rwl/doc directory
 * To create nicely looking and click-able syntax diagrams for the rwl language, upload doc/rwlsyntax.ebnf to http://www.bottlecaps.de/rr/ui. 

