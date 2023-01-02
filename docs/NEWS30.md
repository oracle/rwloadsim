## Changed behavior in version 3.0.5 of the RWP\*Load Simulator

The utility to create awr reports has been renamed to awrreport.
Otherwise, 3.0.5 only has bug fixes and very minor changes.

## Changed behavior in version 3.0.4 of the RWP\*Load Simulator

### Stack evaluation with mixed data types

Stack evaluation with mixed data types has been corrected. 
Previously, the entire stack would be evaluated using the same data type
even if constants or variables were a different type.
As an example
```
double d;
d := 1/2;
```
would assign the value 0.5 to the double variable despite the two
constants are both integer.
In version 3.0.4, this is now behaving is it does in e.g. C
so the above is an integer division 1/2 returning 0, which is then
assigned to the variable d.
If expresion evaluation using double is wanted, make either or both
of the operators and double such as:
```
d := 1.0/2;
```

### Changes to the repository

The persec repository table that contains statistics of execution
for each second has two new columns, wtime and etime, which like
the same columns in runres contain respectively the time spent
waiting for a session and time spent executing.

### Global, mutex protected variables

A ```threads global``` attribute has been added to variables of type
integer, double and string causing the variable to be shared
among all threads.
A mutex is used to control internal data structures in rwloadsim.

### New and updated utilities

The awreport utility is updated and a new utility awrdump is provided.
Additionally, these two and the network test utilities are available
as shell scripts in the bin directory.

## Changed behavior in version 3.0.3 of the RWP\*Load Simulator

The syntax for opening files and pipelines has been enhanced with
new operators: >=, >>=, <=, >|= and <|=. 
These replace the previous behavior where the contents of the 
concatenation being assigned to a file would be interpreted to
imply open for read, append, or as a pipeline respectively.
This has a security concern and is deprecated, it will
be desupported in an upcoming 3.1 release, where no interpretation
of characters like >> or | in the file name will take place.
You can enable warnings when using the current approach via
the $pre31fileassign:warn directive, and it is suggested
you put this directive in your .rwloadsim.rwl startup file.

In a future release ```case```, ```when``` and ```switch``` will be keywords,
and there is therefore a warning if you use these as identifiers.
You should change your code to use different identifiers if you get this warning.

## Changed behavior in version 3.0.1 of the RWP\*Load Simulator

### Keywords initiating SQL
Rwloadsim will now
recognize _all_ SQL keywords and initiate scanning for SQL or PL/SQL
when any of these are seen, so there is no longer a need to 
use an initial /\* or -- comment if you need SQL or PL/SQL that
begins with the more rarely used keywords.
You write SQL or PL/SQL, and rwloadsim sees it, knows which it
is and therefore knows when to stop.
It does imply, that if you have been using such a keyword as an identifier,
you will
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

## News in version 3.0.3 of the RWP\*Load Simulator

The three utilities ociping.rwl, connping.rwl and netthroughput.rwl are
shipped as standalone, generated binaries, and they can therefore be
used without a full install of the RWP\*Load Simulator.

## News in version 3.0.2 of the RWP\*Load Simulator

### Generating an executable

If you have a commonly used rwl script that you would like to distribute
to be executed in many environments, all these would also require an
installation of rwloadsim.
The new feature in version 3.0.2 allows you to generate an executable
that executes one specific rwl script, and which can be copied 
completely stand alone to any system that just has an Oracle client
(or server) installation.

If you e.g. do

```
rwloadsim --generate=./ociping -u ociping.rwl
```
A binary called ociping will be created.
This binary can now be copied to any system where it can be executed
without an instalation of rwloadsim.

This allows for much simpler distribution of (simple) rwloadsim scripts.

## News in version 3.0.1 of the RWP\*Load Simulator

Version 3.0 of the RWP\*Load Simulator has a number of new features
that in particular make scripting, i.e. integration between bash
and the Oracle database, much easier.
These new features are:

### Formatting using printf

In version 3, formatting based on printf and associated functions
have been added.
This can be done to format output to files (like printf, fprintf)
as wall as to strings (like sprintf).
There are some examples below.
This augments the existing
simple formatting with only rudimentary control via 
$iformat or $dformat directives. 

### Implicit bind/define

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
### Immediate and embedded sql

In previous versions, it was necessary to have two rwl statements
associated with each sql; the first would declare the sql as 
a variable, and the second would execute this variable as is
(for e.g. DML, PL/SQL or single row queries) or as a cursor
loop for queries with an unknown number of rows.
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

### External authentication via wallets
To prevent having passwords in clear text in either .rwl files or on the command line
(from where rwloadsim does overwrite the memory), you can now use external authentication
via wallets.
This is achieved by declaring a database with a connect string that matches a name in the wallet
but neither the username nor password attributes,
or alternatively by giving empty username and password using /@name to the -l option
similar to how SQL*Plus does it.

## Navigation
* [index.md](index.md#rwpload-simulator-users-guide) Table of contents
* [INSTALL.md](INSTALL.md) Previous topic: Install and create repository
* [WORKING.md](WORKING.md) Next topic: Working with rwloadsim using a few examples
