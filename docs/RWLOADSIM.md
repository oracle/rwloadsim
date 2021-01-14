## Calling the rwloadsim tool
The rwloadsim tool itself is a command like tool that you can 
call like you would call any other tool from your shell.
It has a (too?) large number of options that can be provided
traditionally using a single hyphen followed by an option letter
or using a double hyphen followed by an option name.
After option processing, it accepts a list of .rwl input files
and potentially a list of arguments that are provided to your rwl
program as $1, $2, etc.

The full syntax therefore is
```
rwloadsim [options] file ... [arg ...]
```
There must be at least one input file; everything else is optional.
Some of the most typically used options are:

|Option|Usage|
|------|-----|
|-h|Do nothing but listing all options|
|-v|Print the program version and the Oracle client version|
|-q|Do not print the normal banner and database connection messages|
|-s -ss -sss|Gather increasing amounts of statisitcs|
|-F N|The first N arguments are input files, the rest become $1, $2 etc|
|-A N|The last N arguments become $1, $2 .. $N, the first are input files|
|-l u/p@c|Create a default database|
|-u|Search for input files in the public directory of your rwloadsim distribution|

All options can be provided using single hyphen and one letter or double hyphen
and a longer option noame, and the full syntax is described
in the manual page available by typing
```
rwlman rwloadsim
```
The input files are read and processed one after another and each must contain
a complete programelement as shown in
```
rwlman rwlprogram
```
The first file named with a .rwl syntax will be scanned twice, the first
is done very early
and before any other option or argument processing.
This scan is done such the the programmer can provide _extra_ options using the
double hyphen syntax to the end user or provide ordinary options and
option values if appropriate. 
See
```
rwlman useroption
```
for details.
## Navigation
* [index.md](index.md) Table of contents
* [SIMULATOR.md](SIMULATOR.md) Simulating workload using threads
* [ARGUMENTS.md](ARGUMENTS.md) Next topic: Providing arguments on the command line to your rwloadsim program
