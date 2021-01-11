## Providing positional arguments
By default, all arguments provided to rwloadsim are taken as rwl input 
files.
You can, however, tell rwloadsim that only some arguments are rwl input 
files and the rest of the arguments will then be made available to your 
rwloadsim program.
Such arguments are dealt with similar to how it is done in shell by 
using either the -A or the -F option or by separating file arguments 
from positional arguments by ; (which must be escaped by the shell) or -- .
The -A option value is the count of positional arguments and it implies 
that many arguments at the end of the rwloadsim command line are 
positional rather than rwl input files to be read.
Alternatively, the -F option specifies how many arguments (after all 
options) are taken as rwl input files; the rest will be positional.
The third possibility where you don't need to specify the count of 
either files or arguments, is to separate the list of files from the 
list of arguments by a single ; (which must be escaped by the shell).
You can also use -- (two hyphens) in stead of the single ; , but you 
then need to have two occurrences of of --  on your command line, as 
getopt(3C) uses the first of these to mean the end of options.
You can use the method that is best suited for your scripting; they 
effectively serve the same purpose.

Positional arguments are made available to your rwl program as string 
variables named $1, $2, etc. and their count is available as $#.
If you e.g. have an input file called dollar.rwl with this contents
```
printline $1, $2;
```
you can execute something like:
```
$ rwloadsim -A 2 dollar.rwl hello world

RWP*Load Simulator Release 2.0.7.13 Development on Mon Oct 22 03:12:07 2018

hello world
```
Note that due to the implicit conversion from strings to integer or 
double, you can similarly use the positional argument variables in 
numerical expressions.

The shift statement works by shifting arguments left ($2 overwrites $1, 
etc) and at the same time subtracting one from $#.
Note that the shift statement does not change the value of the highest 
numbered argument.
As an example, if you save this small rwloadsim program in a file 
called echo.rwl:
```
while $# execute
  if $# = 1 then
    printline $1;
  else
    print $1||" ";
  end if;
  shift;
end while;
```
you can e.g. do:
```
$ rwloadsim -q -F1 echo.rwl hello world of simulation
hello world of simulation
```
If you prefer using the ; marker to end the list of files, you could 
alternatively do :
```
$ rwloadsim -q echo.rwl ';' hello world of simulation
hello world of simulation
```
Note that the variables $#, $1, $2 are global like any other predefined 
variables and that threads therefore get their own copies of these 
variables.
Positional arguments beyond the count are null and return an empty 
string.

Note that using the $longoptions directive, you can provide values for 
e.g. -F in your first .rwl file.
Examples of this are shown in the section on regular expressions.

## Navigation
* [README.md](README.md) Table of contents
* [RWLOADSIM.md](RWLOADSIM.md) Previous topic: Calling the rwloadsim tool
* [COMPILE.md](COMPILE.md) Next topic: Compilation and execution
