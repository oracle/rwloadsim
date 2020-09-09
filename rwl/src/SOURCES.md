# RWP\*Load Simulator program documentation

This readme file documents the rwloadsim program source code, although it must
be clearly understood that this file typically is far behind the actual source.
The actual source code has many comments.

## Source files

|filename|comments|
|--------|--------|
|rwl.h|Primary header file with all data structures and defines|
|rwlerror.c|Error handling|
|rwlport.h|File with things requiring attention for porting|
|rwlrast.c|Random String/Procedure|
|rwlerror.h|All error message texts|
|rwlheader.y|Bison parser header|
|rwldeclaration.yi|Bison for all complex declarations: procedure, function, database and a few more|
|rwlstatement.yi|Bison for statements, including simple declarations: integer, double, string|
|rwlexpression.yi|Bison for expressions|
|rwlthreads.yi|Bison for all thread stuff, i.e. the "run" command|
|rwllexer.l|Flex lexer for the full rwl language|
|rwldiprs.y|Bison for parsing the expression in $if $then conditional compilation|
|rwldilex.l|Flex lexer for conditional compilation|
|rwlarglex.l|Flex lexer for initial scan of first rwl file (there is no parser for this)|
|rwlmain.c|Mostly just the main program including everything around parsing arguments|
|rwlvariable.c|Everything related to identifiers (variables)|
|rwlexprescomp.c|Expression compilation|
|rwlexpreval.c|Expression evaluation|
|rwlcodeadd.c|Creating p-code|
|rwlcoderun.c|p-code execution engine|
|rwlsql.c|Most database calls|
|rwldynsql.c|Code for dynamic sql|
|rwlmisc.c|Various helper routines|
|rwltypedefs.h|Helper file for typdefs and enums|
|rwloadsim.sh|Shell script wrapper for the executables|
|rwlpatch.sh|Used to generate value for the fourth (patch) element in version|

All names of files, routines, macros, etc. _must_ begin with the three letters rwl.
All names of #define variable _must_ begin with the three letters RWL.

## Primary data structures

The whole application is fully re-entrant with practically no global variables, and everything is allocated on demand 
(only exception is the error message text). 
It hasn't been attempted yet, but it should in principle be possible to embed everything with something else.
A number of data structures are of primary importance;
they are all typedef'ed to have a typdedef of the same name as the struct.
These are:

|struct|usage|
|------|-----|
|rwl_main|All data that is used in the main thread, and which does not need to be copied to individual worker threads. A pointer to this structure is given the name "rwm" throughout the code. Note that threads are NOT allowed to change anything in rwl_main during their execution; there is currently no mutex for such things. In stead, there is a bit set indicating when touching rwl_main is forbidden; this flag is checked in several asserts.|
|rwl_xeqenv|All data relevant for an execution environment, that is data that exists for each individual worker thread as well as for the main thread. It contains a pointer back to main called "rwm", so code can always access rwl_main in individual threads. Such access must be read only. The main thread also has an execution environment, it is named "mxq".|
|rwl_identifier|Only one namespace exist, so all identifiers of any type are contained in an rwl_identifier; some fields could be in a union as not all fields are used by all identifiers.  The identifiers are put in array of a fixed size and not in a linked list.  This is done such that all worker threads can refer to a specific identifier by the same approach, namely by the index into this array.  That is, in compiled code, variables are just a number being the index into this array.  At present, searching for an identifier by name is a linear search through this array as it isn't sorted. The code was originally prepared to allow sorting, which would make all identifiers change index in the array; there is therefore a concept of a guess of this index throughout the code.  When a named identifier is needed, the guess will first be tried and if incorrect, a new search is performed. At present, however, identifiers never move, and as there is no "link" step, lots of code is likely to not work properly if identifiers are allowed to move, so doing the sorting will be a major project.  Also note, that there will be very little runtime benefit as the guess is correct when executing code.|
|rwl_localvar|Contains information about local variables in procedures/functions and is stored as an array.  It really mimics the stack frame in ordinary programming languages
|rwl_value|This structure contains a value, which for all practical purposes always is represented as both an int64_t, a double, and a text string. In addition, it has information about null and about its dominant type. 
|rwl_estack|During parsing of an expression, each element (variables, numbers, operators, etc) are pushed onto a linked list of rwl_pstack elements, ready for RPN processing. When that stack is complete, i.e. in principle ready for execution, it's size is known and it is copied to an array of rwl_estack elements. During expression evaluation, we can evaluate such a stack via array indexes, starting at the beginning. Each element contains little more than either a value, a variable reference or an operator.  As the execution is strictly RPN, there is some extra code used to implement short circuit operation of and, or and ?:
|rwl_code|The p-code is stored in a fixed size array of these elements. Each has an operator (such as IF, SQL, ASSIGNMENT, etc) and a number of arguments; arguments are used differently for different operators.  Due to evolution of the software, some of the mapping of arguments to fields appears odd.
|rwl_cinfo|A "database" in rwloadsim is a named database with attributes such as session pool. It contains username, password, connect string and some more
|rwl_sql|This structure stores everything related to execution of a certain sql statement. It is used both with sql statements declared by the user of rwloadsim and internal sql statements from e.g. saving statistics. Each rwl_sql contains a pointer to a linked list of rwl_bindef|
|rwl_bindef|One of these exists for each distinct bind, bindout or define|
|rwl_location|Contains input file name and line number; its primary purpose is error reporting and a pointer to it is very often named cloc in routines dealing with execution.|
|rwl_oerstat|Saves information about ORA- errors received, it is allocated as a linked list and is eventually flushed to repository|
|rwl_thrinfo|Saves information about what individual threads do|

A few global variables that deal with interrupt handling exist.

## Data types, porting, etc

Oracle data types included via oci.h are used throughout,
the most imporant ones in use being ub1, sb4, sb8, double, ub4, text.
All user data is stored in sb8 and/or double, ub4 is generally used for bit flags, and array index variables,
sb4 is generally used as the standard integer type for things that must allow negative values,
ub1/ub2 is used for bit flags when less than 8/16 are needed or for enum like things.
Some enum's are declared and used as such primarily to aid debugging.
The actual typedefs for the oracle data types are implictly there via the include of oci.h.

There are macros bit(), bis(),and bic() that respectively test, set and clear bits; they probably
ought to be renamed to rwlbit, rwlbis, rwlbic.

Some standard routines (in the POSIX) sense are replaced by macros, e.g. strcpy isn't used in code, in stead rwlstrcpy is.
Currently, they are just macros, but this allows for later changes if needed.
Note specifically that strncpy is _not_ used by rwloadsim.
In stead, there is a routine named rwlstrnncpy that behaves like strcpy if the result
fits (i.e. it copies until and incuding the null character), but if the result
does not fit, it copies n characters including the final null.
So the result is always null terminated and characters beyond the null are never copied.

There is a macro RWL_OWN_MALLOC that may be defined;
if present, wrapper code around calloc() and free() makes lots of checking for underwrite,
overwrite, etc.
However, this cost CPU, so RWL_OWN_MALLOC is unset by default.
If set, also compile with -O0 in stead of -O3, as the optimizer completely messes up
the carefully written patterns used to verify rwlmalloc/rwlfree are properly used.
It has not been used for a long time and should probably be replaced by some other
memory allocation verification tool.

Note that compilation is done with -W -Wall -Wextra -Wconversion and therefore e.g. all casts must be explicit.
Do _always_ fix warnings!

## General comments

The code is throughout written in such a way that a NULL or zero contents means something like "not yet used" or similar;
this is the case both for pointers and many integers.
It is therefore crucial that data is always allocated and cleared before first use.
Malloc/free are wrapped with macros that make sure this happens.
Do _not ever_ use malloc/free directly.
There are also lots of places where after doing a free, the variable that had the pointer is explicitly set to 0.
A result of this is that we can have lots of asserts explicitly checking a pointer against 0 producing RWL-600 errors rather than core dump.

The whole program is built upon flex/bison doing lexical analysis and parsing respectively; they are used in their reentrant fashion.
In main(), there is a loop around all files gives as argument,
each file is setup as input for the flex scanner, and the top of the parser is called.
The traditional "yy" names for flex/bison are replaced by "rwly",
so the top entry is e.g. rwlyparse().
The parser is called recursively e.g. when processing an include file.
It is important to realize that everything is executed directly as it is being parsed,
there is no separate compile and execute steps.
Anything that is called "directexecution" in the syntax diagram is directly executed during parse and code between run and end is similarly executed directly as end is reached during parse.
When procedures or functions are declared, they are obviously saved, i.e. similar to the usual compile step.
No "linking" takes place,
procedures/functions simply have a start location in the code array.
Code that cannot be executed immediately,
say if/then/else/end will be compiled into an internally named procedure and as soon as compilation is completed,
it will be executed.

To distinguish during parsing between direct execution and compilation,
there is a very important field in rwl_main called codename.
When compiling a procedure,
it is the name of the procedure being compiled and the parser calls rwlcodeadd(),
if codename is null, it executes directly.

Expression are parsed such that the evaluation stack can either be saved as a code element (take assignment in a procedure as example) or can be directly executed during parse.
If new operators (or built-in functions) are added, they need to be added in rwlexpression.yi,
and in both rwlexprcomp.c and rwlexpreval.c.
Before expression evaluation, a scan through the stack is done to find the "dominant" type (sb8 or double) as some operators are executed differently depending on this.
But in all cases, we always calculate both the integer and double result and its string representation.
The primary routines for expression are rwlexprpush() which at parse time pushes something onto the stack,
rwlexprfinish(), which make a parsed stack ready for execution,
and rwlexpreval(), which does the evaluation.

The p-code machine is stored in an array on which a Program Counter operates.
A new instruction is added to the array using rwlcodeadd6(), which however doesn't get called
directly in code.
In stead, various macroes named rwlcodeaddX(), with X being one or more of the letters u and p
are used, where a p means a pointer and an u means a ub4.
To execute code, rwlcoderun() is called; it only takes one argument (an rwl_xeqenv *) as it also is the routine being called as the entry point for threads.
As everything is re-entrant, a call to a procedure or function means recursively calling rwlcoderun2().

Error handling is throughout based on a principle of continuing if at all possible,
and there is no try/catch type constructs and no longjumps.
There is, however, extensive asserts in the code,
which is typically done using something like if (seriousproblem) { produce RWL-600 } else { do real work }.
An effect of this is that even when errors (also RWL-600 errors) are found,
the code will continue - typically resulting in more errors later.

Everything that has do with database access is in the file rwlsql.c, except dynamic sql found in rwldynsql.c.
From the end-users perspective,
database connections or sessions can be dealt with in different ways, including plain dedicated connections,
drcp and session pools.
To make sure this is dealt with easily in the code,
everything is based around a concept of a general "database session",
which is acquired by rwlensuresession() and released by rwlreleasesession().
The name of the former tells what it really does - it ensures an actual database session exists.
If a dedicated connection is in use, rwlensuresesison() effectively does nothing.
Note that the pair can be stacked and if e.g. a session pool (or drcp) is used,
only the first call to rwlensuresession() really takes a database session from the pool.

SQL (and PL/SQL) processing uses rwl_sql which again uses a linked list of rwl_bindef (BINd DEFine).
In the code, there is very little difference between bind, bindout and define;
it is primarily a matter of when the "other" representation of data is generated.
Therefore, rwl_sql/rwl_bindef are useful both operating on the actual variables declared by the user (and stored in rwl_identifier),
or by any internal SQL (such as inserting histograms or statistics).

In a now legacy version of rwloadsim, procedures and functions did not take arguments and
there was no local variables.
When that was introduced, stack frames were added.
The stack frame is allocated by the calling routine (i.e. before recursion) and consists of an array of rwl_value elements.
Element 0 is always the return value (and therefore unused in procedures),
then follows the arguments,
and finally the local variables.
There is only one scope for local variables for the whole procedure/function.

## Handling variables

In the original design, there were only global variables and all variables (in fact all identifiers) were simply stored in a fixed size array.
Variables were identified by their name, but their location in the array is needed for execution.
It was planned (but never implemented) that re-allocation and maybe sorting by name should be possible.
With the addition of stack frames (for local variables and function or procedure arguments),
variables can now be located in two different places.
When threads are created,
they get a full copy of the array of variables and after termination of threads,
the 'threads sum' variables in main are corrected.
As we fully allow recursion,
both user procedures/functions themselves or indirectly (e.g. in a cursor loop),
there is a need for a generalized way to locate actual variables.

For the global variables, this implies knowing the variable location i.e. the index in the array,
so lots of code therefore finds this by calling rwlfindvar2 or rwlfindvarug2.
In addition to locating the variable (i.e. the array index), the latter also updates a "guess" of it.
Except for direct execution, the variable location is always known and fixed.
The actual value of global variables is stored in the variable array itself,
so simply indexing the array by the variable number points at it. 

The stack-frame on the other hand is allocated each time we recurse (rwllocalsprepare does it),
and it is again an array.
Entry 0 is for a function return value,
entries 1..N are for the arguments to the procedure/function and from N+1 it is the local variables.
As all variables (both local and global) have their names in the single array of variables,
there is a bit telling if the variable really is global or local.
This is exposed via a macro rwlnuminvar() which returns a pointer to the real value,
either in the stack-frame array or in the variable array.
This is used wherever a variable is needed, i.e. both during expression evalueation and e.g. when using a variable as an rwl_bindef.

As there is no differentiation between double, sb8 and string, a variable holds all three.
The string has a fixed size (32 bytes) if the declaration is double or sb8, otherwise a variable length.
There is a bit telling how it was allocated, and there is some optimization to avoid too frequent free/alloc repetition.
The C type for values is rwl_value.

There are some fixed size arrays that will cause errors if exhausted.
Two of these, the array of variables, and the code array, is allocated based on a user defined size (with defaults),
but others are strictly sized via a #define.
It will not be hard to also allow user specification of these.
The strictly fixed ones include if/then/else call depth during compilation,
stack-frame i.e. function/procedure call depth upon execution,
max paranthesized function calls during expression compilation.
In particular the max length of the stack-size which is an execution time limit would be good to make user-settable. 

## RWL-600 and asserts

There are many examples of code like:

```
  /\* assert \*/
  if ( _some condition that must be false _)
  {
    rwlsevere(xev->rwm, "[sometext:% ...]", values, ... );
    return;
  }
```
which causes RWL-600 errors to be reported.
In case this takes place during execution, the call is `rwlexecsevere` which also takes an rwl_location \* as argument.
This is much nicer than risking core dumps or similar, so please continue to do that.

## Things that could/should have been done differently

If I had not initially thought that it would be useful to re-order identifiers (alphabetically) to allow faster lookup, several things would have been easier.
As it is now, there is lots of code that is prepared to allow change of identifier numbers,
and that will never happen.
If identifiers were given a fixed entry in the identifier array from the start, all that code would not be necessary. 

Stack frames were also not considered initially, and they could also be smarter implemented.
One suggestion would be that positive identifier numbers would be indexes to the array, and negative would be indexes to the stack.
This however would be complicated in the current code where different negative values rather
than array entries mean different types of errors.

The short-circuit operators on the execution stack (e.g. "a and b()" does not call b() if a is false) was also not planned originally, so that code is awful as it needs to break the 
otherwise strict implementation of the execution stack.

The idea that code is either executed immediately or is stored in the code array should also not have been there.
It would be nicer to always have separate compile and execute steps.
A consequence of the current implementation is that running threads (i.e. the "run") command only with major changes could be turned into a "statement".
This again is legacy from the original design. 

A few syntax things would benefit from changes.
As an example, the order of entries in each "bind" or "define" should be reversed (the identifier to bind/define to should come before the position).
Another example is that comma is optional in some places. 

It should be possible to do more without the repository database, 
but certain changes are quite hard to do due to the process/threading model
that was created such that mutex would only be rarely needed.

More ub1's (e.g. code) should be changed to enum (from just a list of #define) to make debugging easier.

With the continuous and on-going addition of new code, the use of the variables and pointers in the code array has become messy. 
This result of the is the rwlcodeadd6 routine witch its many macros.

## Using vim with the .yi files
The full bison input is split into a number of files that are simply concatenated to
produce the input for bison.
The first of these "fits" the yacc/bison syntax understood by vim, but the others 
(being named with .yi suffix) do not.
To make vim get it right, you can add a ~/.vim/ftdetect/yi.vim file containing
```
au BufRead,BufNewFile *.yi set filetype=yaccii
```
and copy /usr/share/vim/vim74/syntax/yacc.vim (it may be located somewhere else)
to your own ~/.vim/syntax/yaccii.vim.
In that file remove or comment out (put a " at the start of the line)
the SynFold entries for regions yaccInit, yaccInit2, yaccHeader2, yaccHeader, yaccEncode

## cscope and vi tags

On a Linux system, to generate cscope.out and tags, run
```
make ctags
```
and subsequently use cscope -d, vi -t rwlsomename or ctrl-% in vi.
For non-Linux platforms, this may work if you install the GNU version of the ctags command,
however the standard ctags utility _cannot_ be used.

## Compiling/debugging

If you need to do debugging, maybe as a result of differences while running the test suite,
you can simply type "make" in the rwl/src directory.
For debugging using gdb, change the Makefile (that was generated by running makemake.sh) such that
it uses the gcc options -O0 -g.
If your primary build release is _not_ the same as the database release you use for testing,
you may need to run "make" at the top directory, which will cause _all_ releases to be built.

## NEVER

Some code, typically of debugging nature, is kept in the source but excluded by using #ifdef NEVER.
You should _never_ define the variable NEVER, but if needed, you can include the otherwise excluded
code, e.g. for debugging.

## Sharding

The source code has very rudimentary support for sharding.
The code is actually never included in compilation, it was only tested very briefly
and will at all likelihood require complete rewrite for actual sharding support.

## Releases

The rwl.h file has a number of defines, RWL_VERSION_MAJOR, RWL_VERSION_MINOR, 
RWL_VERSION_RELEASE, and RWL_VERSION_TEXT, that become the banner with 
the first three elements in a version like x.y.z.p and a text string such as "Development".
The fourth (often called the patch release) is _automatically_ increased by 1 whenever
you run "make" in the top directory; this is done via the rwlpatch.sh script.
When finalizing a release, set the RWL_VERSION_TEXT text to "Production"
(or if appropiate "Limited Production").
Then run "make clean" and "make all" in the top directory, commit and push your last changes.

You should now create a new branch name x.y.z, checkout and push it.

In the master branch, you should immediatedly change the RWL_VERSION_TEXT in rwl.h
to "Development", set the three numbers appropriately which at the minimum will
be to increase RWL_VERSION_MINOR by one, and finally put a zero into the rwlpatch.txt file.

As a result, there is a branch named x.y.z containing that release
with a banner of x.y.z.n Production while the master branch will produce releases
with a banner such as x.y.z+1.p Development with p starting from 0.

If there ever is a need to backport changes from master, you can work in a branch like
x.y.z and when (re-) releasing it, the value of n will be increased.

## Bugs

This page is still under construction!
