## Error handling 
Syntax errors during parsing or executions errors will be printed to 
stderr with an RWL-nnn error number, file name, line number and error 
text, much like ORA-nnnnn errors.
Syntax errors during parse will prevent later execution.
There are three categories of errors: warnings, errors and critical 
errors, plus a special RWL-600 internal error which is used by 
rwloadsim itself to report abnormal situations.

If you receive an RWL-600 error, please report it providing as much 
evidence as possible.

If executing database calls results in some ORA-nnnnn error, that will 
also be reported and - if available - the error location in the SQL 
text is also identified.
A few examples are shown by this rwl program (here shown with line 
numbers) 
```
     1  integer a, b, c; b := 3;
     2  procedure ifnull()
     3    if a then
     4      printline "a is not zero";
     5    end;
     6  end;
     7  ifnull();
     8  c := ; # wrong syntax
     9  c := 0;
    10  printline b/c;
```
If you save the above (taking out the line numbers) in a file called 
errors.rwl, and execute it, you will see following output: 
```
RWL-064: warning at [errors.rwl;3]<-[errors.rwl;7]: executing if with NULL argument - false assumed
RWL-278: error at [errors.rwl;8]: parse error at position 6: unexpected ';'
RWL-008: error at [errors.rwl;8]: expected valid expression
RWL-022: error at [errors.rwl;10]: attempted division by zero
3
```
The RWL-064 error tells that at line 7 in errors.rwl, you called a 
procedure which then at line 3 executed an if statement with a null 
argument.

The RWL-278 error is a syntax error found at line 8 saying
that the symbol ';' found at character posistion 6 was unexpected.
The subsequent RWL-008 error gives more detail saying that in stead of
the unexpected symbol, an expression was expected.

Finally, when executing line 10, a division by zero was attempted.

Note that in all cases, execution actually continues, even in the 
division by zero case. 

You can get more detailed information about an RWL- error my providing
the error number to the ```rwlerror``` program.
As an example, executing ```rwlerror 278```
will produce this output
```
RWL-278 error: "parse error at position %d: %s"
A syntax error was found during parsing by bison at the character position
shown; the error may include the unexpected symbol and/or a list of expected
symbols to help identify the actual error. It is followed by another error
showing the rwloadsim error.
```

A full list of all errors it available at [ERRORLIST.md](ERRORLIST.md)

## Navigation
* [index.md](index.md#rwpload-simulator-users-guide) Table of contents
* [CONSTORM.md](CONSTORM.md) Previous topic: Avoiding connection storms
* [INTERPRETER.md](INTERPRETER.md) Next topic: Using rwloadsim as an interpreter
