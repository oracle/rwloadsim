## Formatting output
The printline and associated statements are useful to provide
simple output with default formatting, that can be generally
modified using the $dformat or $iformat directives for 
respectively double and integer.

For more advanced output, you can use the fprintf statement
or the sprintf statement to output to a string.
These work very similary to how the work in C, and are in
fact implemented using their C equivalents.

There are three such statements, sprintf that writes to a string,
fprintf that writes to a named file (including e.g. stderr), and
printf that writes to stdout.
The sprintf statement will by default write to the start of the string,
but using a syntax that include ||, the formatted output
will append to the string.

All statements work like their C equivalents but do additionally have
a flag 'z', 'b', 'n', 'N' or 't' that control how a NULL integer or double
value is formatted.
By default, if an integer or double is NULL, an empty string will be output.
Using the 'z' flag, a NULL will be output as zero, using 'b' blanks will be
used and using 'n' or 'N', the text null or NULL will be used.
Using 't', the subsitution text will be taken from an argument to the printf 
statement.

Some examples are shown here
```
integer a := 42, b;
double x := 12.345678;
string s := "fourtytwo";

# Show 0-padding and output of null
printf ">%07d|%d<\n", a, b; 
printf ">%07d|%nd<\n", a, b;
printf "%td\n", "no value", b;

b:=4;
# Show how field width and precision
# are provided as parameters
printf ">%-*.*f<\n", a/3,b,x;

# Show append to existing string
# with negative field width causing
# left justification
sprintf || s,"=%*d|", -b, a;
printline s;
```
which will generate this output:
```
>0000042|<
>0000042|null<
no value
>12.3457       <
fourtytwo=42  |
```

## Navigation
* [index.md](index.md#rwpload-simulator-users-guide) Table of contents
* [EXPRESSION.md](EXPRESSION.md) Previous topic: Expressions and assignment
* [FILE.md](FILE.md) Next topic: Use of files and pipe-lines
