## Using rwloadsim as an interpreter
You can use rwloadsim as in interpreter using 
```
#!/usr/bin/env rwloadsim
```
as the first lines of a script file that is given execute permission.
As an example, if you create a file called echo.rwl with the following 
contents, put it in your PATH, and give it execute permission:
```
#!/usr/bin/env rwloadsim

# This is an implementation of the "echo" command
# using rwloadsim with an optional --commaseparate

$longoption:file-count=1 # Tell there is just this input rwl file
$longoption:quiet # Do not show the banner

integer commaseparate := 0;
$userswitch:commaseparate:"--commaseparate : Separate using comma"

while $# execute
  if $# = 1 then
    printline $1;
  else
    print $1 commaseparate ? "," : " ";
  end if;
  shift;
end while;
```
you have effectively implemented the echo command using rwloadsim, and 
it can used like this:
```
$ echo.rwl --commaseparate hello world
hello,world
```
Note that inclusion of the directives $longoption:file-count=1 and 
$longoption:quiet in echo.rwl imply both --quiet to not display the 
banner and --file-count=1 to make rwloadsim use all subsequent 
arguments as positional arguments made available as $1, etc.
You can also ask for help text:
```
$ echo.rwl -H
RWP*Load Simulator user options from /path/to/bin/echo.rwl:

--commaseparate:
Separate using comma
```
Note that the script file must be named with the .rwl suffix for the 
$longoption directive to be effective.

## Navigation
* [index.md](index.md#rwpload-simulator-users-guide) Table of contents
* [ERROR.md](ERROR.md) Previous topic: Error handling during parse and execution
* [INTERRUPT.md](INTERRUPT.md) Next topic: Interrupting rwloadsim
