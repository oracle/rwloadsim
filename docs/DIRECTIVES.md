## Using directives to modify behavior

Several of the parameters that can be given to the rwloadsim executable
are used to modify the behavior of the RWL*Load Simulator.
A few examples are that ```--statistics``` cause runtime statistics to
be saved and that ```--startseconds``` can be used to set a value for
the common starting time.
These and many other settings can alternatively 
be modified using _directives_ in your rwl source files. 
Directives are instructions to rwloadsim and are handled
purely during scanning of your rwl sources files;
they are not handled by the parser and are not "executed".

All directives have an initial $ followed by a string of characters without
any white space. The characters are lower case letters and in a few
cases contain numerals or punctuation.
Many directive names are terminated by a : followed by a directive value
such as a number.
Directives are never upper case letters; $ followed by upper case are environment
variables.

Many directives can be changed several times in your rwl source files,
which means the actual value will be used onwards during scanning and parsing.
A directive set in one source file will be applied in subsequent sources files
both when these are on the command line or as include files.

Some examples of directives are:

 * ```$statisitcs:basic``` which has the same effect as the ```--statistics``` option
 * ```$starseconds:<double>``` which has the same effect as the ```--startseconds``` option
 * ```$implicit:both``` which turns on implicit bind and define

Directives for creating useroptions are described in [WORKING.md](WORKING.md) and 
all directives are documented at the ```rwlman directive``` page.

### Conditional compilation

A set of directives, ```$if ... $then```, ```$else```, ```$endif``` are used to 
perform condtional compilation. 
The compile time expression beween $if and $then, which can use global variables and 
a small subset of built in functions only, is evaluated during scanning, causing either the first
or second part (after $else) to be parsed; $else and the second part can be
omitted.
The initial $if and $then parts and the compile time expression between them _must_
be on the same source line, but there
are otherwise no restrictions on how these are put in your rwl source file.

A small example of how this can be used is:
```
integer poolsize := 0; $useroption:poolsize

database mydb
  username "username"
  password "{password}"
  connect "//host/service";
  $if poolsize $then
    sessionpool 1 .. poolsize
  $else
    dedicated
  $endif
  default;
```

There are further examples in [MODULAR.md](MODULAR.md).

## Navigation
* [index.md](index.md#rwpload-simulator-users-guide) Table of contents
* [STATISTICS.md](STATISTICS.md) Previous topic: Saving and using run time statistics
* [COMPLEXAMPLE.md](COMPLEXAMPLE.md) Next topic: A complete example
