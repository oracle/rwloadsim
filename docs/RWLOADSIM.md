## Calling the rwloadsim tool
The rwloadsim tool itself is a command like tool that you can 
call like you would call any other tool from your shell.
It has a (too?) large number of options that can be provided
traditionally using a single hyphen followed by an option letter
or using a double hyphen followed by an option name.
After option processing, it accepts a list of .rwl input files
and potentially a list of arguments that are provided to your rwl
program as $1, $2, etc.
There must be at least one input file; everything else is optional.
The full syntax is found by typing
```
rwlman rwloadsim
```
The input files are read and processed one after another and each must contain
a complete programelement as shown in
```
rwlman rwlprogram
```
The first file named with a .rwl syntax will be scanned twice, the first very early
and before any other option or argument processing.
This scan is done such the the programmer can provide _extra_ options using the
double hyphen syntax to the end user.
See
```
rwlman rwlprogram
```
for details.
## Navigation
* [index.md](index.md) Table of contents
* [SIMULATOR.md](SIMULATOR.md) Simulating workload using threads
* [ARGUMENTS.md](ARGUMENTS.md) Next topic: Providing arguments on the command line to your rwloadsim program
