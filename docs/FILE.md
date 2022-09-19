## Working with files and pipelines
Variables of type file are grossly comparable to FILE * variables in C 
and most operations on files in rwloadsim are implemented using 
standard calls like fopen(), popen(), fgets(), fprintf() etc.
All files are line oriented.
You open a file for writing by assigning a string to it, and close a file by 
assigning null to it.
Depending on how it was opened, you can use operations like readline 
and writeline.  

There are different assignment operators to allow for read, append, etc:

* To open for write, simply assign a string containing the file name to it using := or >=.
* To open for append, use the >>= assignment operator.
* To open for read, use the <= assignment operator.
* To open a pipeline for write, use the >\|= operator, the concatenation will be the command to execute.
* To open a pipeline for read, use the <\|= operator, the concatenation will be the command to execute.

The writeline and printline commands of rwloadsim do not include
advanced output formatting, strings are 
output as is and integers or doubles are output using a predefined 
printf format of %d and %.2f respectively; these can be changed at 
compile time using directives.
To get output formatting, use fprintf.

This simple example
```
file hello;
hello >= "hello.txt";
writeline hello, "Hello, World";
hello := null;
```
will create a file named "hello.txt" and write the text to it.  

A simple example of reading from a pipeline is:
```
file id;
string(1000) myid;

id <|= "id";
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

# You could also use the := operator
yt >= "numbers.txt";

# write number from 1 until 10 and their 
# squares to the file numbers.txt
for i:= 1..10 loop
  writeline yt,i, i*i;
end loop;

yt := null; # close the file

# use a pipeline to read the file
yt <|= "cat numbers.txt";

for readline yt,a,b loop # similar to read a,b in the shell
  printline a,b,sqrt(b);
end loop;

yt := null; 
```
The maximum line length for reading files (and pipelines) using 
readline is by default 2050 bytes including the null character at the end;
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
* [PRINTF.md](PRINTF.md) Previous topic: Formatting using sprintf or fprintf
* [DATABASE.md](DATABASE.md) Next topic: Declaration and use of databases
