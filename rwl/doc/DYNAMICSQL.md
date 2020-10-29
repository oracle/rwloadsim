## Dynamic SQL
RWP\*Load Simulator can execute dynamically generated SQL statements as 
long as the necessary bind/define variables are known.
The following example shows the most important features for dynamic 
SQL; it is available in the file dynamic.sql in the demo directory and 
can be executed using a default database holding the classic "emp" 
table.
```
# Example of dynamic SQL
#
# This must be called with a -l option
# specifying a database that has the
# usual emp table

procedure empsin
( integer deptno
, integer literal
, integer withsal)

  string ename;
  integer empno;
  double sal;

  string head;

  sql getemps
    # No SQL text provided, hence dynamic
    define 1 empno, 2 ename; # fixed defines
    # no binds
  end;

  # The head of the SQL text with or without
  # the sal column
  if withsal then
    head := "select empno, ename, sal from emp ";
    modify sql getemps define 3 sal;
  else
    head := "select empno, ename from emp ";
  end if;

  if literal then
    # Use a fixed literal for deptno
    # and a large array 
    modify sql getemps
      for head 
      || " where deptno="||deptno
      || " order by empno";
    modify sql getemps array 100;
  else
    # Otherwise bind and use smaller array
    modify sql getemps
      for head
      || " where deptno=:deptno"
      || " order by empno";
    modify sql getemps array 10;
    modify sql getemps bind ":deptno" deptno;
  end if;

  printline "Employees in", deptno;
  # Actually execute the cursor loop
  for getemps loop
    if withsal then
      printline empno, ename, sal;
    else
      printline empno, ename;
    end if;
  end loop;

  modify sql getemps release;
end;

empsin(10, 0, 1);
empsin(20, 0, 0);
empsin(30, 1, 1);
```
Some comments about this:

 * The procedure empsin takes a deptno as input and prints all employees in that department; if the second argument is non-zero, the SQL executed will have the deptno as a literal, and the third argument can be set to also print the salaries.  
 * Inside the procedure, there is a declaration of a dynamic SQL statement named getemps.  It has two define variables that will retrieve the empno and ename columns.  
 * Depending on the settings of the second and third arguments, there are different modify sql commands executed.  
 * The cursor loop is executed just as if it were a normal static SQL statement.  
 * At exit from the procedure, the dynamic SQL is released.  

