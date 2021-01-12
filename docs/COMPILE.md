## Direct execution vs. compilation
The RWP\*Load Simulator includes parsing and execution just like any 
ordinary programming language, but these two phases are handled 
implicitly.
When a procedure or a function is declared, the statements that it 
contains, which includes both actually executable code (such as 
assignments) and declarations of simple scalars and SQL, are compiled 
and saved internally (in memory) for later execution.
At the top level, statements can also be executed directly during 
parsing of your input files.
If you e.g. provide this as input to rwloadsim:
```
integer a;
a := 10;
if a<10 then
  printline "a is less than ten";
end if;
```
the two first statements, the declaration of the integer variable a and 
the assignment to it are directly executed as they are parsed.
The if/then/end code, however, is compiled into an anonymous procedure 
on the fly, and it is subsequently executed.
Internally this snippet includes both compilation and execution, while 
the user sees it as one.

As there is no complete compilation of your entire input before execution starts,
your input 
may be partly executed even if there are syntax errors.
As an example, the following input to rwloadsim
```
integer aa := 10;
printline "aa has the value", aa;

if aa<10 thenn
  printline "aa is smaller than ten";
end if;
```
will execute the first two lines showing the output from the first 
printline and then subsequently give you a syntax error due to the 
misspelled keyword then. 

Using the -e option prevents rwloadsim from executing any declared 
function, procedure or SQL, so this can be used to show syntax errors.

## Navigation
* [index.md](index.md) Table of contents
* [ARGUMENTS.md](ARGUMENTS.md) Previous topic: Providing arguments on the command line to your rwloadsim program
* [STATISTICS.md](STATISTICS.md) Next topic: Saving and using runtime statistics
