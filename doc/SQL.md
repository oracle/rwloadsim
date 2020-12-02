## SQL declaration
A sql declaration is used to declare a variable that grossly is a 
"cursor" in database terms.
It contains the actual sql text, variables used for bind or define, 
etc.  

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
based on memory will be used; in either case, the prefetch mechanism of OCI will be 
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
not perform prefetch, e.g. when clob data is involved.
