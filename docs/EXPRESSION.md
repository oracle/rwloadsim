## Expressions
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
|⎮⎮|String concatenation|Dyadic|

A missing operator, i.e. having two expressions directly after each other can in most cases replace the explicit string
concatenation.
In the manual pages, the term _expression_ refers to an expression that does not include implicit concatenation,
while the term _concatenation_ is an expression that potentially does include implicit concatenation without the || operator.

Some examples of expressions are shown below
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

printline $USER, getenv("USER");
# The contents of the environment variable USER will be printed twice.
```
Expressions involving and, or and the ? : operators are using 
short-circuit evaluation.
The triadic between/and operator does _not_ use short-circuit evaluation.

## Navigation
* [README.md](README.md) Table of contents
* [DYNAMICSQL.md](DYNAMICSQL.md) Previous topic: Declaring and using dynamic SQL
* [FILE.md](FILE.md) Next topic: Using files and pipe-lines
