## Procedure declaration
Procedures are a primarily building block of rwloadsim, particularly 
when doing actual load simulation.
If a procedure includes processing of SQL, rwloadsim will automatically 
ensure there is a database session available when the procedure is 
called.
If the database is declared using some pooling, the session will 
similarly be automatically released when no longer needed.

A function is similar to a procedure, but it has a return value and is used in expressions.

Both procedures and functions are declared with a header, a potentially empty list of arguments
and the actual code implementing the functionality required.
They can have local variables that, just as the arguments, are only available inside.

A sample procedure declaration is the following:
```
procedure isbig(double x)
  if x>1000.0 then
    printline x||" is larger than one thousand";
  else
    printline x;
  end if;
end isbig;
```
Due to the scope rules of local variables, if you e.g. attempt 
something like
```
procedure trynestedlocal(integer x)
  if x>0 then
    integer y := 3*x; # y is local to the procedure
  else
    integer y := -3*x; # so you cannot redeclare y here
  end;
  ... # do something with y
end;
```
you will get an error about re-declaration of the local variable y.

## Function declaration
A function is similar to a procedure, but it has a return value of a 
specified type, and it is used in expressions. 

An example of a function declaration is the following:
```
function add(integer a, integer b)
return integer
is
  return a+b;
end function;
```

* [SCALAR.md](SCALAR.md) Previous topic: Declaring scalars such as integers and doubles
* [SQL.md](SQL.md) Next topic: Declaring and using static SQL
