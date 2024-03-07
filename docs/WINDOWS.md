## Running on Microsoft Windows
The RWP\*Load Simulator is available on Microsoft Windows as a so called
"console" application that must run from a command prompt.
Except for a few ommisions, all features of rwloadsim is available on Windows,
and it can therefore be used as a general purpose scripting tool.

### Requirements
In order to run on Microsoft Windows, you need to have an Oracle Client
environment, preferably Oracle Instant Client although a full Oracle installation
also can be used.

Only 64 bit Windows on the X86\_64 architecture is supported.

Some utilities such as ashplot require gnuplot to be available.

### Installation

Unless you have an existing Oracle installation, install the 64 bit version of
[https://www.oracle.com/database/technologies/instant-client/winx64-64-downloads.html](Oracle Instant Client).
You must use version 19 or later.
After install, make sure your PATH includes the top directory of your Instant Client installation.

As for Linux, there are two different downloads available:
A full installation to be used if you want to run your own rwl programs, and a version that only
contains a set of generated executables such as ociping.

The full installation is named something like rwloadsim-Windows-x86\_64-bin-3.1.2.zip,
which you should unzip it into an empty directory.
You subsequently need to set PATH to contain the expanded \\bin directory.

If you only are interested in the generated execuables,
the download is named something like generated-Windows-x86\_64-bin-3.1.2.zip,
which you can unzip to any directory you prefer.
The exectables can be called directly from the directory or you can decide to include the directory in PATH.

If you are going to run actual simulations, you will need a repository database just like when running 
on Linux.

### Dealing with the \\ path separator

If you have existing rwl code, that you will be running on Windows, you can generally run it unchanged even if
it includes file or directory names that include the / path separator. 
When running on Windows, rwloadsim will _automatically_ change all path separators from / to \\ whenever
you open a file using any of the >= >>= or <= assignment operators or use the access() function. 

The only case where you may need to do this explicitly is when using *system* or the pipe operators |>= or |<=.
In these cases, the change from / to \\ is not done as it might incorrectly
also change options to the program being called.
You can use the functions winslashf2b or winslashf2bb if required to explicitly do the change.
The former returns it input string with each / replaced by \\, the later replaces each / by \\\\, which 
is necessary in case there is later escape handling taking place.
Note that these functions also exist on the Linux version of rwloadsim, although they are not 
performing any operation.

A sample usecase for winslashf2b is available in filecommands.rwl in the public directory of your
rwloadsim distribution.

### Conditional compilation
Inside the $if $then directive, you can use the constant $windows. On Microsoft Windows, it will have a 
non zero value, otherwise its value will be zero.

### No rwlman utility
The rwlman utility is using the standard man program, which is not available on Windows. 
The manual pages documenting rwloadsim are available online at
[https://oracle.github.io/rwloadsim/refman/](https://oracle.github.io/rwloadsim/refman/).

### Running simulations
You can run simulations on Windows just like on Linux as long as you have a repository database available.
However, the standard oltp workload is _not_ included on Windows as it is highly despendendt on Linux
shell scripts.

### Generating executables
If you are using the --generate option to generate executables with included rwl code, you need to have
the Microsoft Visual C compiler and linker (the CL and LINK commands) available.

### Regular Expressions

Due to the lack of a regular expression library on Microsoft Windows, all regex statements are unavailable.

## Navigation
* [index.md](index.md#rwpload-simulator-users-guide) Table of contents
* [QUEUEING.md](QUEUEING.md) Previous topic: Handling queuing in control loops
