## SQL execution and declaration

In rwloadsim, there are three possible methods to include sql:

 * Embedded sql, which is static SQL directly embededded in your rwloadsim program
 * Declare a variable as a sql statement, which you subsequently can use for execution. This method gives you full control.
 * Immediate sql where the declaration and use is combined into one statement giving you some control.

In previous versions of rwloadsim, only the second method was available.
Note that the simple, embedded sql syntax is fully sufficient for many cases.

### Embedded sql
The most simple way to execute SQL is to embed it directly in your rwl source file.
Despite some limitations, it is often quite sufficient for many practical cases.
The constraints are:

 * All placeholders (bind variables) must already be declared as variables with the same name as the placeholder.
 * All such bind is for input to the SQL statement; you can e.g. not use it if you have a "returning" clause or if a bind is an output from a PL/SQL block.
 * For queries, all select list elements must have simple names (or aliases) and these names must already be declare as variables.

An example with a cursor loop is the following:
```
integer deptno := 10, empno;
double monthsal;
string ename, dname;

for
  select e.empno, e.ename
  , e.sal/12 monthsal
  , d.dname
  from emp e join dept d
  on d.deptno = e.deptno
  where d.deptno=:deptno;
loop
  printf "%s works in %s and earns %.2f per month\n", ename, dname, sal;
end loop;
```
As this is a query in a loop, a default array will be using OCI pre-fetch based on memory
(currently 100k).
If you are executing DML, the default array will be 1.
You can set a different array size (measured as rows) using
the directive ```$embeddedqueryarray``` for queries or ```$embeddeddmlarray```
for DML.
An example of the latter is the following
```
integer i, a, b;
$embeddeddmlarray:8

for i := 1 .. 10 loop
  a := uniform(1,10);
  b := uniform(0,100);
  insert into sometable(a,b) values (:a, :b)
  /
end loop;
commit;
```
which will perform _two_ insert operations, one with a full array of 8 rows, the second with 2 rows in the array.
When the $embeddeddmlarray directive is in effect, the actual flush only takes place when the array is full 
or a commit is performed.

As in SQL*Plus, a SQL statement can be terminated by a ; at the end of a line.
Both SQL and PL/SQL can be terminated by a line with white space and a . or / at the end of the line.

### SQL declaration
A sql declaration is used to declare a variable that grossly is a 
"cursor" in database terms.
It contains the actual sql text, variables used for bind or define, 
etc., and it can subsequently be used for execution.
This method where declaration and execution of sql was two separate statements
was the only one available in previous versions of the RWP*Load Simulator.

A few examples with comments:

Declare a sql statement called ins_order, which takes one bind variable 
as input and another bind variables as output via the returning clause:
```
sql ins_order
  insert into orders
  ( order_id
  , order_date
  , customer_id
  , order_status
  , order_total
  ) values
  (orders_seq.nextval, sysdate, :1, 'ordered',0)
  returning order_id into :2
  /
  bind 1 customer_id;
  bindout 2 order_id;
end;
```
Declare a sql statement called ins_item, which takes some input bind 
variables and which will be executing using an array operation with 10 
array elements:
```
sql ins_item
  insert into order_items
  ( order_id
  , line_item_id
  , product_id
  , unit_price
  , quantity
  ) values (:1,:2,:3,:4,:5)
  .

  bind 1 order_id, 2 line_item_id;
  bind 3 product_id, 4 unit_price;
  bind 5 quantity;
  array 10;
end;
```
Declare a sql statement called sel_one_order that has a bind variable 
and three defines matching the three select list elements.
As it has the ignoreerror attribute, rwloadsim will not process any 
error:
```
sql sel_one_order
  select
    customer_id
  , order_status
  , rowid from orders
  where order_id = :1
  for update;
  bind 1 order_id;
  define 1 customer_id, 2 order_status;
  define 3 ord_rowid;
  ignoreerror;
end;
```
A possible way to use this sql may therefore be:
```
sel_one_order;
if oraerror != 0 and oraerror != 1403 then
  writeline stderr, oraerrortext;
end if;
if oraerror = 1403 then
   ... # Do something when not found
```
### Execution of cursor loops
If your SQL is a query where the number of rows returned is unknown, you 
would normally use it in a cursor loop as this example shows:
```
sql selemps
  select
    ename, sal
  , from emp
  where deptno = :1
  /
  bind 1 deptno;
  define 1 ename, 2 sal;
  array 10;
end;

for selemps loop
  ... # do something with one row
end loop;
```
If you do not specify the array size for such queries, a default one 
based on memory will be used; in either case, the pre-fetch mechanism of OCI will be 
used.
You can change that to have an actual array allocated by rwloadsim if 
you use array define as shown here:
```
sql selemps
  select
    ename, sal
  , from emp
  where deptno = :1
  /
  bind 1 deptno;
  define 1 ename, 2 sal;
  array define 10;
end;
```
Using an rwloadsim allocated array is useful in cases where OCI does 
not perform pre-fetch, e.g. when clob data is involved.

There are several statement that you can use to change the attributes, such
as the array size, if statement caching takes place or not, etc.
These statements are all started with the keywords ```modify sql``` followed
by the name of the sql variable.

### Implicit bind and/or define
As of version 3, rwloadsim can implicitly match names of placeholders and/or select
list elements to variables, in which case you do not need to do this explicitly.
This allows for much simpler programming as you simply declare variables
that have the same name as your placeholders or select list elements.
To turn on this feature, use the 
```
$implicit:both
```
directive.

This example shows how this can be done

```
$implicit:both
# some variables to receive output
string ename, dname;
integer empno;
double monthsal;
# a variable to provide input 
integer deptno; $useroption:deptno

# Note that only the actual SQL text
# is required; all binds and defines
# are done implicitly
sql getemps
  select e.empno, e.ename, d.dname
  , e.sal/12 monthsal
  from emp e join dept d
  on e.deptno = d.deptno
  where d.deptno=:deptno
  /
end;

integer ecount := 0;
for getemps loop
  printline empno, ename, monthsal, dname;
  ecount += 1;
end loop;

if !ecount then
  printline "no employees in department " deptno;
end if;
```

If this is saved in a file called empsindept.rwl, you can execute it using
something like

```
rwloadsim -u username/{password}@//host/service empsindept.rwl --deptno=10
```
### Immediate SQL
In many cases, there is no need to have a separate declaration of your
sql statements with a subsequent execute or subsequent use in a cursor loop.
If your sql statement is only required once in your program or if you don't need
to modify any of its attributes, you can use a syntax that immediately executes
your sql statement.
The syntax combines the declaration - although with the keyword ```execute```
in stead of a name - with the execution as shown in the following examples.
Note that implicit bind and define is automatically enabled for immediate SQL.

Effectively, immediated SQL has most of the simplicity of embedded SQL without
having the constriants such as lack of output bind.

Immediately execute an insert with a returning clause
```
sql execute
  insert into rwl_demo_ord
  ( ordno , b , pl , c )
  values
  ( rwl_demo_ordno.nextval , :b , :pl , :c)
  returning ordno into :ordno
  /
  # The bindout must be done explicitly
  bindout : ordno ;
end;
```
The binds to the three first placeholders are implicitly done, but bindout can
only be done explicitly.

Immediately execute a cursor loop which includes implicit bind and define:
```
integer deptno := 10, empno;
double monthsal;
string ename, dname;

for
  sql execute
    select e.empno, e.ename
    , e.sal/12 monthsal
    , d.dname
    from emp e join dept d
    on d.deptno = e.deptno
    where d.deptno=:deptno;
  end
loop
  printf "%s works in %s and earns %.2f per month\n", ename, dname, sal;
end loop;
```
This example is similar to the first example of embedded SQL.

Since immediate sql does not have a name, you cannot use any
of the ```modify sql``` commands.

### Providing the sql text as a concatenation

In the cases of sql declaration or immediate sql execution you can provide
the text of the sql statement as a concatenation.

For sql declaration, the value of the concatenation is determined
at _compile time_ and it must therefore be made from global or private variables
and or string constants. 
Even when inside a procedure, function or execution block, a sql declaration
is _never_ "executed" and does therefore not constitute dynamic SQL.
This constraint is legacy from previous versions of rwloadsim, but it is 
unlikely to be changed; if needed, use declared dynamic SQL.

For immediate sql execution, if the sql text is provided as a concatenation,
it _will_ be treated as a dynamic SQL and will also have the implicit bind and
define done.
Doing so implies array dml cannot be used, as the sql statement potentially could
changed for each execution inside a loop.
If you need dynmically generated dml to use an array, use declared dynamic SQL.

Declaration and use of dynamic SQL variables, where the sql text and possibly
bind/define are done at runtime is described in [DYNAMICSQL.md](DYNAMICSQL.md).

### Scan for SQL or PL/SQL
Rwloadsim will scan for SQL or PL/SQL whenever a keyword that initiates one of these
is seen; this is case insensitive.
As examples, any of "select", "SELECT", "alter", will initiate scan for SQL and any
of "begin", "DECLARE" will initiate scan for PL/SQL.
The comments "/*" or "--" will also initiate scan for respectively SQL or PL/SQL.
There is a distinction between SQL and PL/SQL in how they are teminated,
which is somewhat similar to SQL*Plus: 
Both can be terminated by a line with whitespace and / or . at the end of the line, and
SQL can additionally be terminated by ; at the end of a line.
Note that an empty line does _not_ terminate the scan for either.

## Navigation
* [index.md](index.md#rwpload-simulator-users-guide) Table of contents
* [COMPOUND.md](COMPOUND.md) Use of compound statements such as if/then/else and loops
* [EXPRESSION.md](EXPRESSION.md) Next topic: Expressions and assignment
