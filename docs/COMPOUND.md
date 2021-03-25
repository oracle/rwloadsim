## Compound statements
The procedural part of the rwl language has several types of compound statements known from
other programming languages.
These all begin with a keyword that identifies the type procedural construct and
are terminated by the keyword ```end``` optionally followed be the beginning keyword.
Compound statements can be nested.

### If/then/else

The if statement is used to execute one of many branches of code.
It starts with the keyword ```if``` followed by an expression and the keyword ```then```;
if the expression is non zero, the list of statements after ```then``` will be executed.
You can have multiple branches by starting subsequent branches with ```elseif```,
expression and ```then```, and 
you can have a branch that gets executed if no other branches do using ```else```.

This first example will execute the printline statement if the value 42 has been read from stdin:
```
integer theanswer;

readline stdin,theanswer;

if theanswer=42 then
  printline "You have found the answer";
end if;
```
The next example shows the use of both ```elseif``` and ```else``` clauses:
```
integer theanswer;

readline stdin,theanswer;

if theanswer <= 40 then
  printline "Your answer is too low";
elseif theanswer=41 or theanswer=43 then
  printline "Close but no cigar";
elseif theanswer=42 then
  printline "That really is the answer";
else
  printline "You have come too far";
end if;
```
### While loop
The while loop executes a list of statements as long as some condition is non-zero.
A simple example is:
```
integer theanswer := 37;

while theanswer < 42 loop
  printline theanswer " is not yet found";
  theanswer += 1;
end loop;

printline "You found it:" theanswer;
```
### Counting for loop
Several loops start with the keyword ```for``` and one of them is a loop that simply 
increases a variable by 1 for each execution of the loop.
The syntax consists of the ```for``` keyword followed by an assignment and the list of values 
to loop through separated by ```..``` and finally the keyword ```loop```
This example shows it:
```
integer theanswer, lo, hi;

lo := 40; hi:= 44;

for theanswer := lo .. hi loop
  if theanswer = 42 then
    printline "You have found the answer";
  else
    printline "The answer is not " theanswer;
  end if;
end loop;
```
### Execution block
The purpose of the execution block is simply to wrap a list of statements and it is mostly useful
when that list of statement must be executed against the same database session.
The keyword ```execute``` potentially follewed by an at clause starts the list of statements as this example shows:
```
execute at mydb
  sql myinsert ...
  end;

  myinsert;
  commit;
end;
```


### Further loop types
Rwloadsim also includes loops that read lines from a file, fetch rows from a cursor and control execution
in typical simulations.

## Navigation
* [index.md](index.md#rwpload-simulator-users-guide) Table of contents
* [PROCFUNC.md](PROCFUNC.md) Previous topic: Declaring procedures and functions
* [SQL.md](SQL.md) Declaring and using static SQL
