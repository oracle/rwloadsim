## Expressions and assignments
Expressions are similar to expressions in other programming languages 
and follow standard operator precedence rules. 

In rwloadsim, you can freely mix variables and constants of the three 
types, integer, double and string, although expressions always will 
have a dominant type depending on context.
Note that conversion from string to a number never causes an error; 
they do little more than the C function atoi() or atof() do.

The full list of operators in order of precedence are:

|operator|description|type|
|--------|-----------|----|
|is [not] null|Check for (not) null|Post-fix, monadic|
|- ! not|Arithmetic negative, two synonyms for boolean not|Prefix, monadic|
|* / %|Multiplication, division, and integer remainder|Dyadic|
|+ -|Addition, subtraction|Dyadic|
|< <= > >= between/and|Inequality comparisons|Dyadic (between/and triadic)|
|= != <>|Equality and two synonyms for non-equality|Dyadic|
|and|Boolean and|Dyadic|
|or|Boolean or|Dyadic|
|? :|Conditional expression|Triadic|
|&#124;&#124;|String concatenation|Dyadic|

A missing operator, i.e. having two expressions directly after each other can in most cases replace the explicit string
concatenation.
In the manual pages, the term _expression_ refers to an expression that does not include implicit concatenation,
while the term _concatenation_ is an expression that potentially does include implicit concatenation without the || operator.

The rwloadsim language has three types of assignments:

|operator|description|
|--------|-----------|
|:=|Ordinary assignment that assigns the value on the right side to the variable on the left|
|+=|Increment assignment that adds the value on the right side to the variable on the left, which must be an integer or a double|
|&#124;&#124;=|Append assignment that appends the value on the right side to the variable on the left, which must be a string|

Constants of type integer are sequences of digits, constants of type double 
contain a decimal point and or an exponent.
A possible - in front of a number constant is never part of the constant, it
is always the unary minus operator.
String constants are sequences of characters within double quotes; they
can span newline in which case the newline is part of the string. 
In strings, you can use &#92; to escape symbols such as " and &#92;.
You can put national languages characters in string constant, but strings
are always considered as a sequence of (unsigned) bytes.

Some examples of expressions and assignments are shown below
```
integer a:=2, b:=3;
integer c;

c := (a = b+1) + 10; 
# + has higher precedence than =, so b+1 is calculated first as 4,
# then because 4=2 is false, the value of the parenthesis is 0,
# adding 10 gives 10, which will be assigned to c.

printline c + (a=b-1)*(a!=b);
# - has higher precedence than =, so the first parenthesis is evaluated
# as 2=2 returning 1, the second parenthesis is also true, hence 1,
# so the product is 1, adding the value of c which is 10, gives 11
# so this will be printed

printline 10.0/(!c+a*b);
# as c is 10, !c is false or 0, adding the product of a and b (2 and 3)
# the result in the parenthesis is 6.  As there is a double constant, the whole
# expression is evaluated as double, and the result of 10.0/6.0 will be printed

printline 5 between 0 and 10 and 2;
# between/and has higher precedence than and
# so 5 between 0 and 10 evaluates first giving 1
# subsequently, 1 and 2 evaluates to 1

printline 5 between (0 and 10) and 2;
# the parenthesis evaluates to to 0
# and subsequently 5 between 0 and 2 evaluates to 0

double d;
d := 1 + "2.9"; # will assign 3.9 to d as the dominant type is double
a := 1 + "2.9"; # will assign 3 to the integer as the
# implicit conversion from string to integer stops at "."
a += b+c; # increase the value of a by the sum of b and c

# declare a string variable and assign some text to it
string helloworld := "Hello";
# append some more text to it
helloworld ||= ", World";

printline $USER, getenv("USER");
# The contents of the environment variable USER will be printed twice.
```
Expressions involving and, or and the ? : operators are using 
short-circuit evaluation.
The triadic between/and operator does _not_ use short-circuit evaluation.

Note that assignments are not themselves expressions so you cannot do something like
```
a := b := 0; # This is illegal
```
## Navigation
* [index.md](index.md#rwpload-simulator-users-guide) Table of contents
* [SQL.md](SQL.md) Previous topic: Declaring and using static SQL
* [PRINTF.md](PRINTF.md) Next topic: Formatting using sprintf or fprintf
