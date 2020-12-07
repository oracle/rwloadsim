## Random strings
One of the main features of rwloadsim is to generate random data and 
one way to do that is using random string arrays.

A random string array is a variable that will return a different value 
each time it is used in an expression.
It contains a fixed number of entries, each having a string constant 
and a weight.
Weights cannot be negative, their sum must be positive, and rwloadsim 
will scale them to probabilities in the range [0;1].
Here is a short example:
```
random string array maybe ( "yes" 20, "no" 70, "maybe" 10);
printline maybe, maybe, maybe, maybe, maybe, maybe, maybe;
```
This declares the variable "maybe" as a random string array with three 
entries.
Whenever "maybe" is used in an expression, one of the three entries 
will be returned, and each entry will be returned with a certain 
probability.
In this case, the weights are given as 20, 70 and 10, and because the 
sum of these is 100, these values effectively are percentages.
A few executions of this might give:
```
no no maybe no no no no
no yes no no no no no
no no yes maybe no yes yes
```
See the file ovid2.rwl in the demo directory as an example.

Note that you cannot use a random string array as a bind parameter.

* [ATCLAUSE.md](ATCLAUSE.md) Previous topic: Using the at clause to choose a database
* [RANPROC.md](RANPROC.md) Next topic: Randomly executing some procedure
