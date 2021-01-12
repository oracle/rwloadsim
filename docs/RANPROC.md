## Random procedures
Another main feature of rwloadsim is to randomly execute certain 
"business logic"; this is what random procedure arrays do.
A random procedure array contains a number of (identically shaped) 
procedures each with some probability of execution associated with it.

When a named random procedure is being executed, one of the procedures 
in the array will be executed with the given probability. 

Take this example that first declares four procedures and then a random 
procedure array:
```
procedure one(integer x) ... end;
procedure two(integer y) ... end;
procedure three(integer z) ... end;
procedure four(integer x) ... end;

random procedure array doit ( one 10, two 25, three 5, four 60 );
```
As the sum of the four values is 100, the values are effectively 
percentages.
The net result is that whenever your rwloadsim program executes 
"doit(value)", the actual execution will with the specified probability 
be one of those four.
As with random strings, rwloadsim will scale the weights to 
probabilities in the range [0;1].

Although you don't actually declare the arguments in a random procedure 
array declaration, they do take arguments just like a normal procedure, 
and all procedures used in its definition must take the same arguments 
(argument names can be different.)

## Navigation
* [index.md](index.md) Table of contents
* [RANSTRING.md](RANSTRING.md) Previous topic: Providing random strings
* [CLOB.md](CLOB.md) Next topic: Using CLOB data
