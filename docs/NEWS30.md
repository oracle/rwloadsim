# Changed behavior in version 3.0.1 of the RWP\*Load Simulator

## Keywords initiating SQL
Rwloadsim will now 
recognize _all_ SQL keywords and initiate scanning for SQL or PL/SQL
when any of these are seen. 
If you have been using such a keyword as an identifier, you will 
now get syntax errors, and you will need to change your code to use
different identifiers.
As a small example, the following code that was valid in previous versions:
```
integer audit;

integer a,b,c;
```
will now generate an error about incorrect integer declaration
since ```audit``` is taken as initial keyword to start scanning
for SQL.

# News in version 3.0.1 of the RWP\*Load Simulator

Version 3.0 of the RWP\*Load Simulator has a number of new features
that in particular make scripting, i.e. integration between bash
and the Oracle database, much easier.
These new features are:

## Formatting using printf

In previous versions, output (say to files including stdout) was 
using very simple formatting with only rudimentary control via 
$iformat or $dformat directives. 
In version 3, formatting based on printf and associated functions
in C have been added.
This can be done to format output to files (like printf, fprintf)
as wall as to strings (like sprintf).
There are some examples below.

## Implicit bind/define

In previous versions of rwloadsim, you were required to explicitly
bind placeholders (i.e. variables such as :1 or :empno) to variables
in your program, and similarly to explicitly define which variables
should be receiving values from select list elements in queries.
Version 3.0 can do this implicitly.
Named placeholders (such as :empno) can implicitly be bound to variables
of the same name (such as empno), 
and select list elements can implicitly have a define operation to variables.

Hence, if you execute a query like
```
select empno, ename, sal
from emp
where deptno=:deptno
```
and you have the necessary variables, empno, ename, sal and deptno declared
you no longer need to provide any bind or define attributes to your 
sql statement.

This implicit bind and/or define can be enabled for individual sql statements
using a simple syntax 
or generally for all sql statements using a directive.
A complete example using the above query is
```
integer deptno := 10, empno;
double sal;
string ename;

$implicit:both # This will turn on both implicit bind and define
sql selemps
  select empno, ename, sal
  from emp
  where deptno=:deptno;
end;

for selemps loop
  printf "%d %s %.2f\n", empno, ename, sal;
end loop;
```
## Immediate and embedded sql

In previous versions, it was necessary to have two rwl statements
associated with each sql; the first would declare the sql as 
a variable, and the second would execute this variable as is
(for e.g. DML, PL/SQL or single row queries) or as a cursor
loops for queries with an unknown number of rows.
In version 3, you can now combine these into one for immediate
execution.

This is done by writing code similar to a sql declaration but
using the keyword ```execute``` in stead of a name.
Also, implicit bind and define is automatically enabled.

Using this, the above example would be simplified to:
```
integer deptno := 10, empno;
double sal;
string ename;

for 
  sql execute
    select empno, ename, sal from emp
    where deptno=:deptno;
  end
loop
  printf "%d %s %.2f\n", empno, ename, sal;
end loop;
```

If there is no need for any sql specifications, the syntax can
be simplified further using embedded sql, which here is shown
with the sql being terminated by a line containing only
white-space and /:
```
integer deptno := 10, empno;
double sal;
string ename;

for 
  select empno, ename, sal from emp
  where deptno=:deptno
  /
loop
  printf "%d %s %.2f\n", empno, ename, sal;
end loop;
```

## Navigation
* [index.md](index.md#rwpload-simulator-users-guide) Table of contents
* [INSTALL.md](INSTALL.md) Previous topic: Install and create repository
* [WORKING.md](WORKING.md) Next topic: Working with rwloadsim using a few examples
