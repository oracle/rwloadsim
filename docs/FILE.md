## Working with files and pipelines
Variables of type file are grossly comparable to FILE * variables in C 
and most operations on files in rwloadsim are implemented using 
standard calls like fopen(), popen(), fgets(), fprintf() etc.
All files are line oriented.
You open a file by assigning a string to it, and close a file by 
assigning null to it.
Depending on how it was opened, you can use operations like readline 
and writeline.  

The string that is assigned to the file is interpreted similar to how the shell does it,
and the file can be opened in one of these five ways:

* To open for write, simply assign a string containing the file name to it; for completeness with the other options, a single initial ">" can be used.
* To open for append, the first two characters of the string must be "\>\>"
* To open for read, the first character of the string must be "<"
* To open a pipeline for write, the first character of the string must be "\|" and the following characters will be the actual pipeline.
* To open a pipeline for read, the last character of the string must be "\|".

In all cases, the initial or terminating character(s) are removed and will not be part of the file or pipe-line.

Rwloadsim does not include advanced output formatting, strings are 
output as is and integers or doubles are output using a predefined 
printf format of %d and %.2f respectively; these can be changed at 
compile time using directives.

This simple example
```
file hello;
hello := "hello.txt";
writeline hello, "Hello, World";
hello := null;
```
will create a file named "hello.txt" and write the text to it.  

A simple example of reading from a pipeline is:
```
file id;
string(1000) myid;

id := "id|";
readline id,myid;
id := null;

printline myid;
```
which when executed will open the file id as the stdout from the id 
command, then read the single line of output from it and save it in the 
variable myid, which then is printed.

In addition to using file, rwloadsim also has a system function, that 
can be used to retrieve the output of a command and save it in a string 
variable.
Using that, you could implement the previous example like this:
```
integer resval;
string(1000) myid;

resval := system("id",myid); # like doing myid=`id` in the shell

printline myid;
```
The readline command above only reads one line.  
It can also be used as a loop which causes it to read 
until EOF as this example shows:
```
# declare a few variables
integer i;
double a, b;

file yt;

# The initial > is optional here as the default is to open for writing
yt:=">numbers.txt";

# write number from 1 until 10 and their 
# squares to the file numbers.txt
for i:= 1..10 loop
  writeline yt,i, i*i;
end loop;

yt := null; # close the file

# use a pipeline to read the file
yt := "cat numbers.txt|";

for readline yt,a,b loop # similar to read a,b in the shell
  printline a,b,sqrt(b);
end loop;

yt := null; 
```
The maximum line length for reading files (and pipelines) using 
readline is by default 2050 bytes including the null chatacter at the end;
it can be changed using the --readbuffer option.

You can verify existence of files or directories using the access 
function as this small example shows:
```
if access("/tmp","wd") then
  printline "/tmp is a writable directory";
end if;

if access("/dev/null","r") then
  printline "/dev/null can be opened for reading";
end;
```

## Navigation
* [index.md](index.md#rwpload-simulator-users-guide) Table of contents
* [EXPRESSION.md](EXPRESSION.md) Previous topic: Expressions in rwloadsim
* [DATABASE.md](DATABASE.md) Next topic: Declaration and use of databases
