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
|rwlthreads.yi|Bison for all thread stuff, i.e. the ""run"" command|
|rwllexer.l|Flex lexer|
|rwldiprs.y|Bison for parsing the expression in $if $then conditional compilation|
|rwldilex.l|Flex lexer for conditional compilation|
|rwlarglex.l|Flex lexer for initial scan of first rwl file|
|rwlmain.c|Mostly just the main program|
|rwlvariable.c|Everything related to identifiers (variables)|
|rwlexprescomp.c|Expression compilation|
|rwlexpreval.c|Expression evaluation|
|rwlcodeadd.c|Creating p-code|
|rwlcoderun.c|p-code execution engine|
|rwlsql.c|Most database calls|
|rwldynsql.c|Code for dynamic sql|
|rwlmisc.c|Various helper routines|
|rwltypedefs.h|Helper file for typdefs|
|rwloadsim.sh|Shell script wrapper for the executables|
|rwlpatch.sh|Used to generate value for the fourth (patch) element in version|

All names of files, routines, macros, etc. _must_ begin with the three letters rwl.
All names of #define variable _must_ begin with the three letters RWL.

## Primary data structures

The whole application is fully re-entrant with absolutely no global variables, and everything is allocated on demand 
(only exception is the error message text). 
It hasn''t been attempted yet, but it should in principle be possible to embed everything with something else.
A number of data structures are of primary importance;
they are all typedef''ed to have a typdedef of the same name as the struct.
These are:

|struct|usage|
|------|-----|
|rwl_main|All data that is used in the main thread, and which does not need to be copied to individual worker threads. A pointer to this structure is given the name ""rwm"" throughout the code. Note that threads are NOT allowed to change anything in rwl_main during their execution; there is currently no mutex for such things. In stead, there is a bit set indicating when touching rwl_main is forbidden; this flag is checked in several asserts.|
|rwl_xeqenv|All data relevant for an execution environment, that is data that exists for each individual worker thread as well as for the main thread. It contains a pointer back to main called ""rwm"", so code can always access rwl_main in individual threads. Such access must be read only. The main thread also has an execution environment, it is named ""mxq"".|
|rwl_identifier|Only one namespace exist, so all identifiers of any type are contained in an rwl_identifier; some fields could be in a union as not all fields are used by all identifiers. The identifiers are put in array of a fixed size and not in a linked list. This is done such that all worker threads can refer to a specific identifier by the same approach, namely by the index into this array.  That is, in compiled code, variables are just a number being the index into this array.  At present, searching for an identifier by name is a linear search through this array as it isn''t sorted. The code was originally prepared to allow sorting, which would make all identifiers change index in the array; there is therefore a concept of a guess of this index throughout the code.  When a named identifier is needed, the guess will first be tried and if incorrect, a new search is performed. At present, however, identifiers never move, and as there is no ""link"" step, lots of code is likely to not work properly if identifiers are allowed to move, so doing the sorting will be a major project.  Also note, that there will be very little runtime benefit as the guess is correct when executing code.|
|rwl_localvar|Contains information about local variables in procedures/functions and is stored as an array.  It really mimics the stack frame in ordinary programming languages
|rwl_value|This structure contains a value, which for all practical purposes always is represented as both an int64_t, a double, and a text string. In addition, it has information about null and about its dominant type. 
|rwl_estack|During parsing of an expression, each element (variables, numbers, operators, etc) are pushed onto a linked list of rwl_pstack elements, ready for RPN processing. When that stack is complete, i.e. in principle ready for execution, it''s size is known and it is copied to an array of rwl_estack elements. During expression evaluation, we can evaluate such a stack via array indexes, starting at the beginning. Each element contains little more than either a value, a variable reference or an operator.  As the execution is strictly RPN, there is some extra code used to implement short circuit operation of and, or and ?:
|rwl_code|The p-code is stored in a fixed size array of these elements. Each has an operator (such as IF, SQL, ASSIGNMENT, etc) and a number of arguments; arguments are used differently for different operators.  Due to evolution of the software, some of the mapping of arguments to fields appears odd.
|rwl_cinfo|A ""database"" in rwloadsim is a named database with attributes such as session pool. It contains username, password, connect string and some more
|rwl_sql|This structure stores everything related to execution of a certain sql statement. It is used both with sql statements declared by the user of rwloadsim and internal sql statements from e.g. saving statistics. Each rwl_sql contains a pointer to a linked list of rwl_bindef|
|rwl_bindef|One of these exists for each distinct bind, bindout or define|
|rwl_location|Contains input file name and line number; its primary purpose is error reporting|
|rwl_oerstat|Saves information about ORA- errors received, it is allocated as a linked list and is eventually flushed to repository|
|rwl_thrinfo|Saves information about what individual threads do|

## Data types, porting, etc

Oracle data types included via oci.h are used throughout,
the most imporant ones in use being ub1, sb4, sb8, double, ub4, text.
All user data is stored in sb8 and/or double, ub4 is generally used for bit flags, and array index variables,
sb4 is generally used as the standard integer type for things that must allow negative values,
ub1/ub2 is used for bit flags when less than 8/16 are needed or for enum like things.
The actual typedefs for the oracle data types are implictly there via the include of oci.h.

The are macros bit(), bis(),and bic() that respectively test, set and clear bits.

Some standard routines (in the POSIX) sense are replaced by macros, e.g. strcpy isn''t used in code, in stead rwlstrcpy is.
Currently, they are just macros, but this allows for later changes if needed.
Note specifically that rwlstrncpy is _not_ just a macro to strncpy;
it is a real routine that makes sure the result is always null terminated.

There is a macro RWL_OWN_MALLOC that can be defined;
if present wrapper code around calloc() and free() makes lots of checking for underwrite,
overwrite, etc.
However, this cost CPU, so RWL_OWN_MALLOC is unset by default.
If set, also compile with -O0 in stead of -O3.
It hasn''t been used since the very early development, so it is unlikely it will actually work.

Note that compilation is done with -W -Wall -Wextra -Wconversion and therefore e.g. all casts must be explicit.
ALWAYS fix warnings!
