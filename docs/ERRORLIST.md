## Complete list of RWL- errors

### RWL-001 error: "cannot open '%s' for reading"
The file named could not be opened for reading.
This error can happen in several places including:
* processing an input file argument to rwloadsim
* the $include directive.

### RWL-002 warning: "public directory '%s' is not accessible or does not appear correct"
The verification that the public directory exists and is correct failed.
You probably have an invalid installation or are directly using an rwloadsimNN.
In the latter case, always use the rwloadsim executable, not a client specific
one, or use the full pathname to your rwloadsimNN executable.

### RWL-003 error: "premature end-of-file or abort"
Your rwloadsim program terminated unexpectedly. Typical causes are:
* unfinished function or procedure declarations
* if/loop/execute that is not properly matched with end
* unbalanced $if $else $endif directives.

### RWL-004 error: "incorrect integer declaration"
A syntax error during parse of an integer declaration.

### RWL-005 error: "incorrect double declaration"
A syntax error during parse of a double declaration.

### RWL-006 error: "incorrect string declaration"
A syntax error during parse of a string declaration.

### RWL-007 error: "expected valid input after identifier"
A syntax error after parse of an identifier.
The identifier should be followed by either of:
 - An assignment operator
 - Potentially an at clause and a semicolon
 - An opening paranthesis.

### RWL-008 error: "expected valid expression"
A syntax error during parse of an expression.

### RWL-009 warning: "superfluous ';' at posistion %d"
The semicolon is used to terminate a statement or declaration
and repeated semicolon is not allowed.

### RWL-010 warning: "modify sql '%s' array %d should be positive"
The size of an array must be at least 1.

### RWL-011 error: "unexpected keyword or identifier (missing ';')"
A general parse error that often occurs when a semicolon is missing.

### RWL-012 error: "local variable '%s' cannot be used here"
A local variable was used in a context where
only private or public variables are allowed.

### RWL-013 error: "invalid bind"
A syntax error during parse of bind in a sql declaration.

### RWL-014 error: "invalid define"
A syntax error during parse of define in a sql declaration.

### RWL-015 error: "invalid array"
A syntax error during parse of array in a sql declaration.

### RWL-016 error: "missing ';' after sql specification"
In a declaration of a sql variable, each specification must
must be terminated with a semicolon.

### RWL-017 error: "'%s' has not been declared"
The identifier you are using has not been declared.

### RWL-018 error: "incorrect loop"
A syntax error during parse of a loop header.

### RWL-019 error: "invalid database declaration"
A syntax error during parse of a database declaration.

### RWL-020 error: "identifier '%s' already declared as %s at [%s;%d]"
The named identifier has already been declared
Note that there is only one namespace for all variables.

### RWL-021 error: "variable '%s' of length %d cannot hold %d bytes"
Attempt to write more bytes to a string variable than its declared length.
Note that if you are using sprintf, the the expected number of bytes is
calculated as soon as the first % conversion would exceed the maximum length.

### RWL-022 error: "attempted division by zero"
The right operand of a / or % operation is zero,
operation continues using the left operand as result.

### RWL-023 critical error: "cannot create temporary file"
The tmpfile(3) function returned an error.

### RWL-024 error: "incorrect directive '%s'"
See rwlman directive for a complete list of all directives.

### RWL-025 error: "cannot execute '%s' due to previous errors"
Due to previous errors, the named procedure cannot be executed.

### RWL-026 error: "scan error at position %d: invalid input character 0x%2.2x (utf8?)"
An invalid character with the value shown in hex was read during scanning.

### RWL-027 error: "scan error at position %d: invalid input character '%s'"
An invalid character was read during scanning.

### RWL-028 error: "weight %.2f for '%s' must be zero or positive"
In declaration of a random string or procedure, all weights must be
at least zero.

### RWL-029 warning: "ignoring error with array based sql is not supported"
Ignoring errors and use of progammed error handling
cannot be done with array processing.
You must either set array to 1 or let rwloadsim handle errors.

### RWL-030 error: "all entries in '%s' are zero"
In declaration of a random string or procedure, at least one
weight must positive.

### RWL-031 error: "reading from stdin not supported"
You have been using '-' as an argument to rwloadsim, this is not supported.

### RWL-032 error: "array size has already been set"
You can only use the array specification once.

### RWL-033 error: "array size must be positive"
The array size must be at least 1.

### RWL-034 error: "username must be specified for database '%s'"
The username is a compulsary specification in a database declaration.

### RWL-035 error: "%s database already specified as '%s'"
The default and results databases can only be declared once.

### RWL-036 error: "'%s' not yet implemented"
The facility you attempt using has not yet been implemented.

### RWL-037 error: "%s database not declared or not accessible"
A database is either not declared or has caused error during connection.

### RWL-038 error: "incorrect regex"
A syntax error during parse of a regex statement.

### RWL-039 error: "error compiling regular expression: %s"
Reguar expression caused an error in regcomp(3).

### RWL-040 warning: "regextract found %d matched sub-expressions, %d expected"
When using the regextract statement, the number of matched sub-expressions
is smaller than the number of variables.

### RWL-041 warning: "mismatch between result list count (%d) and define count (%d)"
The number of select list elements reported by Oracle Call Interface
does not match the number of defines used in the sql declaration
or the number of defines in effect for a dynamic sql.

### RWL-042 warning: "no rows returned from '%s'"
A query used as a simple sql statement returns no errors.
You can replace the simple sql by a cursor loop to prevent this error.

### RWL-043 warning: "'%s' is a keyword reserved for future use"
The facility you attempt using has not yet been implemented.

### RWL-044 error: "attempted commit/rollback without any SQL being executed"
The commit or rollback has no effect as not sql has been executed.

### RWL-045 error: "release of session from '%s' with outstanding DML; rollback forced"
You have been doing DML without performing explicit commit or rollback
before your session was (implicitly) released or given up.
If you have DML directly in main, you must wrap the DML and an associated
commit with an execute block for the commit to have effect.

### RWL-046 error: "release of session from '%s' with outstanding PL/SQL transaction; rollback forced"
You have been doing DML inside PL/SQL without performing explicit commit or
rollback before your session was (implicitly) released or given up. If you have
PL/SQL with open transaction directly in main, you must wrap the call and
associtated commit with an execute block for the commit to have effect.

### RWL-047 error: "database '%s' could not connect"
There was an error during initial connection of the database
and the database can therefore not be used.

### RWL-048 error: "terminating connection '%s' with outstanding DML; rollback forced"
You have been using a database and rwloadsim has registered some dml has
been executed. You therefore must perform explicit commit or rollback.

### RWL-049 error: "cannot use cursor loop as '%s' is non-query"
You have attempted using the syntax for a cursor loop
but the sql statement is not a query.

### RWL-050 warning: "cursor loop '%s' uses default array size of %d"
Without an explicit array size set, array fetch will be based
on memory. If this is acceptable, use $mute:50.

### RWL-051 error: "incorrect file declaration"
A syntax error during parse of a file declaration.

### RWL-052 error: "cannot open '%s' for %s as '%s', O/S error: %s"
At runtime, the file named could not be opened.
The O/S error will have further details.

### RWL-053 error: "file '%s' is not open"
When closing a file (assigning null to it), the file was not open.

### RWL-054 error: "cannot close file '%s', O/S error: %s"
At runtime, the file named could not be closed.
The O/S will have further details.

### RWL-055 error: "file '%s' is already open"
Attempting to open a file that has already been opened.

### RWL-056 warning: "file '%s' will be closed"
The file will implicitly be closed. This may happen:
* when a thread finishes
* when rwloadsim finishes.

### RWL-057 error: "incorrect or missing thread specification"
A syntax error during parse of a thread specification.

### RWL-058 critical error: "%s failed, O/S error: %s"
This is a generic error assoticated with unexpected conditions.
The O/S error normally has further details.

### RWL-059 warning: "clock start time (%.2f) cannot be negative"
When using the -c option, the start time must be zero or larger.

### RWL-060 error: "control loop option '%s' specified more than once"
A control loop option can only be provided once.

### RWL-061 error: "control loop option '%s' must be specified"
A control loop must have either stop or count specified exactly once.

### RWL-062 warning: "cannot determine if PL/SQL started transaction on '%s'; commit executed"
After executing a PL/SQL block when the client version is 11.2, you need an
explicit commit or rollback.

### RWL-063 warning: "the empty argument list is missing in %s()"
The function you are calling should be followed by an empty argument list.
Omitting () will be desupported in a future release.

### RWL-064 warning: "executing if with NULL argument - false assumed"
In an if statement, the condition was null.
Processing continues using false.

### RWL-065 warning: "this syntax for a control loop is deprecated"
You have somehow managed to find the legacy syntax for control
loops. Change your code to use the documented syntax.

### RWL-066 warning: "pipeline '%s' returned %d"
When a pipeline was closed, the return value from pclose() was non zero.

### RWL-067 error: "cannot open '%s' as pipe to '%s', O/S error: %s"
Creation of a pipeline failed with the O/S error shown.

### RWL-068 error: "cannot close pipe '%s', O/S error: %s"
At runtime, the pipeline named could not be closed.
The O/S will have further details.

### RWL-069 error: "cannot execute due to previous errors"
There have been previous errors that prevent further processing.

### RWL-070 warning: "histogram overflow (%d,%.3e)"
When saving histogram statistics, the bucket was larger than allowed.

### RWL-071 warning: "histogram underflow (%d,%.3e)"
When saving histogram statistics, the bucket was smaller than allowed.
This error is no longer used.

### RWL-072 warning: "cannot mute non-existing error"
You have attempted using the $mute directive for an
error number that does not exist.

### RWL-073 warning: "muting non-warning %d"
You have attempted muting an error or severe error.
To allow this, first include $mute:73.

### RWL-074 warning: "cannot save counts beyond %ds"
Saving of per second counts for seconds beyond the value shown is suppressed.
This is mostly a result of database activity taking much longer than expected,
causing procedures to finish much after the expected time given via the -Z
option or the default of 2 hours.

### RWL-075 critical error: "out of space for code (%d) - rerun with -C option"
The fixed array for storing your declared procedures and functions has been
exhausted. You can use either of these methods to increase the size:
* Put $longoption:codesize=N in your first .rwl file
* Provide the -C option to rwloadsim
* Use the $maxcode:N directive in your startup file such as ~/.rwloadsim.rwl.

### RWL-076 critical error: "maximum number of identifers (%d) exceeded - rerun with -I option"
The fixed array for storing your variable names has been
exhausted. You can use either of these methods to increase the size:
* Put $longoption:namecount=N in your first .rwl file
* Provide the -I option to rwloadsim
* Use the $maxident:N directive in your startup file such as ~/.rwloadsim.rwl.

### RWL-077 error: "invalid bindout"
A syntax error during parse of bindout in a sql declaration.

### RWL-078 critical error: "cannot initialize OCI threading"
The OCIThreadInit call did not succeed.

### RWL-079 error: "oracle error %d in '%s' declared at [%s;%d] %s"
Executing the sql at the file and line shown caused an Oracle error.
Processing will continue unless you have used $oraerror:stop.

### RWL-080 error: "oracle error %d %s"
Executing some database operation caused an Oracle error.
Processing will continue unless you have used $oraerror:stop.

### RWL-081 warning: "oracle success with info %d in '%s' declared at [%s;%d] %s"
Executing the sql at the file and line shown caused an Oracle warning.
Processing will continue unless you have used $oraerror:stop.

### RWL-082 warning: "oracle success with info %d %s"
Executing some database operation caused an Oracle warning.
Processing will continue unless you have used $oraerror:stop.

### RWL-083 error: "OCI error %s in '%s' declared at [%s;%d]"
Executing the sql at the file and line shown caused an Oracle Call Interface
error. Processing will continue unless you have used $oraerror:stop.

### RWL-084 error: "OCI error %s"
Executing some database operation caused an Oracle Call Interface error.
Processing will continue unless you have used $oraerror:stop.

### RWL-085 error: "unspecified OCI error %d in '%s' declared at [%s;%d]"
Executing the sql at the file and line shown caused an unspecified
Oracle Call Interface error. Processing will continue unless you have
used $oraerror:stop.

### RWL-086 error: "unspecified OCI error %d"
Executing some database operation caused an unspecified Oracle
Call Interface error. Processing will continue unless you have
used $oraerror:stop.

### RWL-087 error: "previous error was at line %d position %d: %.*s %*s"
The Oracle error shown was located at a specific line and position in
the sql statement. The actual line an position will be marked with an asterisk.

### RWL-088 error: "at least one define and no bindout must be specified for this array"
You must have at least one define and you cannot use bindout when
using 'array define' to have rwloadsim handle the array for a query.

### RWL-089 error: "modify sql %s cannot be used with static sql"
An attempt was done at modifying a static sql. The
'modify sql' statement can only be used with dynamic sql.

### RWL-090 error: "incorrect random string declaration"
A syntax error during parse of random string.

### RWL-091 error: "random string '%s' cannot be used"
The random string was declared, but cannot be used due to errors.
You must fix the random string delcaration.

### RWL-092 error: "incorrect random procedure declaration"
A syntax error during parse of random procedure.

### RWL-093 error: "results database connect use threads dedicated"
The results database must be declared dedicated, drcp or sessionpool.
In most cases, using a session pool 0..2 is fine.

### RWL-094 warning: "cannot save statistics without a results database"
In order to save statistics, you must have a results database,
and the results database must be accessible.

### RWL-095 error: "length of string variable %s (%d) must be positive"
The value provided for the length of a string variable must be at least 1.
If you omit an actual length, the default will be 128. The length is in bytes.

### RWL-096 error: "cannot prepare and execute multi-process in same run"
You must use the -P option in separate call of rwloadsim followed
by call using either -M or -R option.

### RWL-097 error: "clock offset (%.2f) is unreasonably higher than %.2f"
The clock offset sets the control loop common start time as a number of
seconds after start of rwloadsim. The value you have chosen is too high.

### RWL-098 error: "invalid modify"
A syntax error during parse of modify sql or modify database.

### RWL-099 warning: "no input files"
At least one input file must be provided to rwloadsim.

### RWL-100 error: "cannot use %s '%s' as %s"
A variable of some type was found when a variable of a different type
was expected. This is a generic error used in several contexts.

### RWL-101 error: "only %s allowed after this end"
The keyword 'end' was followed by an unecpected keyword or identifier.

### RWL-102 error: "invalid thread count(%d) - must be zero or positive"
The count of threads started in each group of threads in the run statement
cannot be negative. Additionally the total count must be positive.

### RWL-103 error: "total thread count must be positive"
The count of threads started in each group of threads in the run statement
cannot be negative. Additionally the total count must be positive.

### RWL-104 error: "invalid sql declaration (missing 'end', SQL or PL/SQL keyword)"
During parse of a sql declaration, the expected 'end' keyword was not found.

### RWL-105 error: "unfinished scan for sql"
During scan for sql text, a terminator was not found.
SQL is terminated by a line with potential white space followed by a single
'.' or '/' at the end of the line, or by a ';' and the end of a line.

### RWL-106 error: "invalid procedure declaration"
A syntax error during parse of a function or procedure declaration.

### RWL-107 warning: "gamma/gamma2 have been renamed to erlang/erlang2, please change your code"
The names of the gamma and gamma2 functions have been changed to
erlang/erlang2. The old names will be removed in a future release.

### RWL-108 warning: "modulus operation (%%) used in expression with double"
In rwloadsim versions before 3.1, the modulus operator (%) was handled as in
C and it did not handle double values. This is no longer the case, and this
error is no longer used.

### RWL-109 warning: "suspicious whitespace character after '%c' during SQL or PL/SQL scan"
During scan for the terminator for sql or pl/sql, the terminator was
found followed by white space.

### RWL-110 warning: "identifier '%.*s' is longer than 30 characters"
In rwloadsim, the maximum length of identifiers is 30 characters.

### RWL-111 error: "unrecognized option '%s'"
When scanning for options to rwloadsim, an option that is neither
known as an ordinary short or long option, nor known as an option
from $useroption or $userswitch.

### RWL-112 error: "$include directive cannot be used here"
You can only used $include when a program element is complete.
As an example, you cannot use $include while declaring a procedure.
See the rwlprogram(1rwl) rwlman page for details.

### RWL-113 error: "user requested termination - please wait a few seconds"
Using ctrl-c will normally cause a termination within a few seconds.
You can repeat the ctrl-c a number of times if termination does not occur.
If you have $ora01013:continue, ORA-01013 will be treated like any other
error and not cause rwloadsim to stop.

### RWL-114 error: "'%s' is not a legal filename"
The filename is either empty or has illegal characters. As an
example, an include file using < > delimiters cannot begin with . or /.

### RWL-115 error: "$include recursion too deep"
The limit on depth of $include has been reached. You must
recompile rwloadsim from source to increase the limit.

### RWL-116 error: "$include recursion into '%s' attempted"
You have attemted including some file using the $include directive from
within the file itself. This is not supported.

### RWL-117 error: "cannot use %s database '%s' for at clause inside procedure/function"
The database used with an at clause must support pooling
such as sessionpool or drcp.

### RWL-118 warning: "at default has no effect here"
The 'at default' clause only has an impact when done inside a procedure.

### RWL-119 warning: "$startseconds directive must be used earlier - using %.2f"
The $startseconds or $clockstart directive must be used before
declaring the results database.

### RWL-120 warning: "dformat '%s' converts %.8f to %.8f using buffer '%s'"
The new value for $dformat is too limited to properly output some double.
This is a warning; continue at your own risk.

### RWL-121 warning: "iformat '%s' converts %ld to %ld using buffer '%s'"
The new value for $iformat is too limited to properly output some integer.
This is a warning; use at your own risk.

### RWL-122 error: "strings are delimited by ""
The single quote limiter is not used by rwloadsim.

### RWL-123 error: "expected database name for execution"
A syntax error during parse of the at clause.

### RWL-124 error: "procedure or function '%s' called with too many arguments"
The number of arguments in the call to a procedure or function
is larger than the number of declared arguments.

### RWL-125 error: "procedure or function '%s' called with too few arguments"
The number of arguments in the call to a procedure or function
is smaller than the number of declared arguments.

### RWL-126 warning: "function '%s' has no return statement"
A function must have at least one return statement. The behavior is
undefined if you return from a function by other means than via return.

### RWL-127 error: "function '%s' of length %d cannot return %d bytes"
Attempt to return more bytes from a string function than its declared length.

### RWL-128 error: "return in function '%s' must include expression"
In functions, the return statement must include an expression.

### RWL-129 error: "procedure '%s' cannot return an expression"
In procedures, the return statement cannot include an expression.

### RWL-130 error: "incorrect argument list"
A syntax error during parse of procedure call.

### RWL-131 warning: "isnull() function is deprecated, please change your code"
Please replace the deprecated isnull() function by the is null operator.
The isnull() function will be removed in a later release.

### RWL-132 error: "invalid function declaration"
A syntax error during parse of a function declaration.

### RWL-133 warning: "superfluous ';' after %s"
A semicolon was found at a place where it is not expected.
It is used to terminate a statement or declaration.

### RWL-134 critical error: "too many invalid charaters (is input an rwl file?)"
The scanner has found a high number of invalid characters and
all further processing is stopped.

### RWL-135 warning: "public %s '%s' is hidden by private %s declared at [%s;%d]"
A private variable is given the same name as an already existig public
variable. The private variable will be used during the rest of the source file.

### RWL-136 warning: "%s %s '%s' hides public %s declared at [%s;%d]"
A local or private variable is given the same name as an already existig
public variable. The public variable will not be accessible.

### RWL-137 warning: "a comma is recommended after '%s' in %s"
Please include the comma between the identifier and the following arguments.

### RWL-138 error: "exit statement not available inside procedure/function"
The exit statement is only available directly in your main program.
If you need a procedure or function to cause an exit, you must code it such
that the wanted exit value is provided to your main program, where an exit
can take place.

### RWL-139 error: "password read from stdin is too long"
The password that was read was unreasonably long
(The limit is probably too short, but requires recompile.

### RWL-140 error: "password read from stdin is too short"
The password that was read was shorter than two characters
.

### RWL-141 warning: "-e flag prevents execution"
When the -e flag is used, neither procedures nor sql are being executed.

### RWL-142 error: "incorrect lob declaration"
A syntax error during parse of a clob declaration.

### RWL-143 error: "not anough arguments to %s"
There are not sufficient arguments for the value of the -A or -F option.

### RWL-144 warning: "array DML not supported for lob"
The use of array when dealing with clob data
is not supported by Oracle Call Interface.

### RWL-145 error: "%s cannot be declared as local variable or argument"
You cannot declare local variables or arguments to procedures
or functions with this data type.

### RWL-146 warning: "attempted write of 0 bytes to lob at database '%s'"
You cannot write 0 bytes to a lob. This is a bug in rwloadsim
that should do a truncate of the lob in this case.

### RWL-147 error: "lob has not been read from database"
You can only use a lob locator that has been read from the database.
This can be doing using a query or a returning into.

### RWL-148 error: "attempted uniform() with invalid range"
The lower end of the range is larger than the higher end of the range.

### RWL-149 warning: "you have enabled unsupported experimental features"
You are on your own! This may be reasonable
if you understand the source code.

### RWL-150 warning: "only directives allowed in startup file"
The startup file such as ~/.rwloadsim.rwl may only contain directives.

### RWL-151 warning: "directive '%s' is only available in startup file"
The directive can only be used in a startup file such as ~/.rwloadsim.rwl.

### RWL-152 error: "threads sum/global cannot be used with local variables or arguments"
The threads sum/global attribute is only valid for private or public variables.

### RWL-153 warning: "key and komment options are ignored in multiprocess run"
To provide key or komment in a multiprocess run, do so in
the prepare run where the -P option is used.

### RWL-154 error: "connection type already specified"
The type of the database connection can only be provided once.

### RWL-155 warning: "connectionclass is only relevant with sessionpool and drcp"
Do not provide a connection class for this database.

### RWL-156 warning: "modify database connectionclass attempted after session is in use"
As sessions are implicitly acquired at the start of a procedure, request
for a specific connection class must take place before calling the
procedure that acquires the session.

### RWL-157 error: "connectionclass length (%d) is zero or longer than 128 bytes"
The maximum length of a connection class in rwloadsim is 128 bytes.

### RWL-158 error: "bad character '%c' in connectionclass"
Your connection class must have a name that does not include this character.

### RWL-159 warning: "scan error at position %d: invalid escape '&#92;%c' in string constant"
The valid escapes in a string constant are &#92;&#92; &#92;" &#92;t &#92;n &#92;e &#92;r or
a &#92; prefixing a newline causing the newline to be excluded from the string.

### RWL-160 error: "control loops cannot be nested"
An attempt at parsing a control loop while another control loop
is being parsed.

### RWL-161 error: "control loop recursion detected - unsafe to continue"
An attempt at starting a control loop recursively while another
control loop is being executed.

### RWL-162 error: "invalid control loop specification"
A syntax error during parse of a control loop.

### RWL-163 error: "no more positional arguments"
A syntax error during parse of a control loop header.

### RWL-164 warning: "%s specified in both startup file and command line; largest value (%d) chosen"
A parameter is provided both at the command line and in a startup
file such as ~/.rwloadsim.rwl.

### RWL-165 warning: "komment of length %d is truncated to %d"
Comments are limited in length to the size of the varchar2 column 'komment'
in the rwlrun repository table.

### RWL-166 warning: "file '%s' used in stead of '%s'"
The file you are opening using a $include directive was found
in the public directory and has been read from there.
You should not give your own include files the same name
as those found in the public directory.

### RWL-167 error: "random procedure '%s' has different argument count for '%s' and '%s'"
All procedures named in a random procedure must have the
same number and types of arguments.

### RWL-168 error: "random procedure '%s' has different argument type for argument %d of '%s' and '%s'"
All procedures named in a random procedure must have the
same number and types of arguments.

### RWL-169 error: "maximum string length is %d"
You have attempted using a string constant with a line longer than allowed.

### RWL-170 warning: "omitting () for procedure or function without arguments is deprecated"
Procedures or functions that take no arguments must include an
empty set of brackets. This will be enforced in a future release.

### RWL-171 error: "return statement not available outside procedure/function"
You cannot use the return statement directly in main.
The exit statement is a possible alternative.

### RWL-172 error: "cannot create thread"
This error is returned when OCIThreadCreate returns an OCI_NO_DATA error.
There is no O/S error assoicated with this, but the typical cause is that
the user is unable to start a new thread due to a too low value for ulimit -u.

### RWL-173 warning: "local %s '%s' hides %s %s declared at [%s;%d]"
A local variable is given the same name as an already existig private
or public variable. The private/public variable will not be accessible.

### RWL-174 error: "cannot open '%s' for reading, O/S error: %s"
The file named that should contain the text of a sql statement
cannot be opened. The O/S error has details.

### RWL-175 error: "cannot read from '%s', O/S error: %s"
The file named that should contain the text of a sql statement
cannot be read. The O/S error has details.

### RWL-176 error: "-x option %d has no argument (missing shell quotes?)"
The -x option to rwloadsim takes one argument that must be a
rwl program element including the terminating semicolon.

### RWL-177 error: "previous error was at [%s;%d] position %d: %.*s %*s"
The Oracle error shown was located at a specific line and position
in the sql statement read from a file. The actual line an position will
be marked with an asterisk.

### RWL-178 warning: "-F flag overwrites -A"
You cannot provide both the number of input files as the -F option
and the number of user arguments as the -A option.

### RWL-179 error: "only %s or '%s' allowed after this end"
During parse of some declaration, the keyword 'end' was
followed by an unexpected identifier or keyword.

### RWL-180 warning: "event %d is unexpected"
During execution of the event handler for OCIEvents, an unexpected
event was returned. You should report the value such that the
rwloadsim code can be fixed to deal with it.

### RWL-181 information: "event source:%s hst:%s svc:%s db:%s inst:%s ev:%s at:%.2f"
Oracle Call Interface was setup to handle events, and the event handler
was called. The entries in the error text contain the following
information (if available):
* source: The source of the event such has database, node, instance
* hst:    The name of the host that triggered the event
* svc:    The name of the database service
* db:     The name of the database
* inst:   The instance name
* ev:     Either of 'up' or 'down'
* at:     The timestamp in seconds since the common start time.

### RWL-182 error: "cannot open '%s' for writing, O/S error: %s"
Rwloadsim was unable to open a file for writing; the O/S error has details
The error is used in several places such as when creating the multiprocess
file given as the -P option.

### RWL-183 warning: "database '%s' has terminated unexpectedly due to ORA-%05d; reconnect will be attempted"
The error returned is assumed to be a recoverable error causing a session
to fail. Due to the nature of the error, an attempt at re-creating the
session will be done.

### RWL-184 error: "expected keyword '%s' was not found"
During parsing another keyword than the expected was found.

### RWL-185 error: "several user requested termination received - using SIGTERM"
You have been hitting ctrl-c a number of times and rwloadsim
terminates using SIGTERM.

### RWL-186 error: "cannot find executable in PATH"
Your PATH environment variable does not include the expected rwloadsimNN
executable built for the client identified via LD_LIBRARY_PATH.

### RWL-187 error: "LD_LIBRARY_PATH environment must be set"
The LD_LIBRARY_PATH environment is not set.
It should include the library with liblcntsh.so.

### RWL-188 error: "cannot find libclntsh"
The LD_LIBRARY_PATH environment is not set properly.
It should include the library with liblcntsh.so.

### RWL-189 error: "database '%s' has terminated unexpectedly due to ORA-%05d; reconnect may be attempted"
The error returned is assumed to be a recoverable error causing
a database failure. In some circumstances, an attempt at reconnecting
the database will be done.

### RWL-190 warning: "missing max poolsize for default database, using dedicated"
When using the -l option to create a default database, you cannot use the
-Y option without the -X option.

### RWL-191 warning: "attempted %s of terminated database"
The database you are using has terminated due to an error.

### RWL-192 warning: "attempted %s without database"
You can only use this statement with an explicitly named database, or in some
cases a default database.

### RWL-193 error: "missing file name for writing"
A syntax error during parse of a write, writeline or fprintf statement.

### RWL-194 warning: "flush-stop must be at least %d - no statistics flush done"
The period used for automatic flush of per second statistics is too short
and statistics flushing has been turned off.

### RWL-195 warning: "flush-every must be at least %d - value changed"
The period between flushes of per second statistics must be at least 1s.

### RWL-196 warning: "results database must be using a session pool for statistics flushing - flush turned off"
When period flushing of per second statistics is in use, the
results database must be using a session pool.

### RWL-197 error: "missing file name for fflush"
A syntax error during parse of an fflush statement.

### RWL-198 warning: "%s is currently implemented as %s"
You are calling a function that currently is implemented as a more
simple function. As an example, this is used when string functions
handle strings a sequence bytes.

### RWL-199 error: "first argument to erlangk(%d) must be at least 1"
The minium allowed value for k in erlangk is 1.

### RWL-200 error: "first argument to erlangk(%d) is unreasonably high"
The maximum allowed value for k in erlangk is 20.

### RWL-201 error: "define array requires explicit defines"
You have asked for a define array, but no explicit defines are found.

### RWL-202 error: "variable '%s' has wrong type for define array"
Use can only use define arrays with variables of type integer, double or string.

### RWL-203 error: "the size of define array cannot by modifed"
The size of a define array can only be specified at declaration time.

### RWL-204 warning: "this is not C - '==' is taken as '='"
Although rwloadsim does have similarities with C, this is not one of them!
The equality comparison operator is '='.

### RWL-205 error: "sql_id function requires name of sql variable"
A syntax error during parse of the sql_id function.

### RWL-206 warning: "OCI compile environment (%d.%d) is different from runtime (%d.%d)"
Your rwloadsim executables was compiled in a different Oracle Call Interface
version than the one being found via LD_LIBRARY_PATH during execution.
To mute the error, put $mute:206 in your .rwloadsim.rwl startup file.

### RWL-207 error: "illegal environment expansion in file name '%s'"
During scan for environment variables in a file name fails. This
can happen if ${ } expansion does not match, if the environment variable
starts with anything but an upper case letter or is too long.

### RWL-208 warning: "environment variable '%s' does not exist"
The named environment variable does not exist. If this is
acceptable, use the getenv() function in stead.

### RWL-209 error: "abort without cleanup"
You have been using the abort statement. It should only
be used when no other possibilities exist.
Consider using exit in stead.

### RWL-210 error: "'%s' cannot be used in $if ... $then directive"
The expression in the $if $then directive is using a feature
that is not available for conditional compilation.

### RWL-211 error: "$%s directive cannot be matched to an $if ... $then directive"
The $if $then $else $endif must be matched within each .rwl source file.

### RWL-212 error: "$if ... $then directive at [%s;%d] was not matched with $endif"
The $if $then $else $endif directives must be
matched within each .rwl source file.

### RWL-213 warning: "only %d ORA- errors out of %d were saved"
A thread has returned more ORA- errors and saving has been stopped.
If this happens frequently and you need to save more errors, use
the -O option or the $oerstatistics:N directive to increase the limit.

### RWL-214 error: "this is not C - '%s' cannot be used"
Although rwloadsim does have similarities with C, the operation you attempt
using is not available.

### RWL-215 critical error: "more than %d local variables in procedure - use $maxlocals:NN directive or -L option"
The array for storing local variables in procedures or functions has been
exhausted. You can use either of these methods to increase the size:
* Put $longoption:localnames=N in your first .rwl file
* Provide the -L option to rwloadsim
* Use the $maxlocals:N directive before declaring the procedure or function.

### RWL-216 error: "variable '%s' of length %d cannot hold output from system"
Attempt to write more bytes as output from the system function
than the declared length of the string variable.

### RWL-217 error: "only identifier allowed as second argument to system"
A syntax error during parse of the system function; a
second argument must be a variable.

### RWL-218 error: "2nd argument to access ('%s') must consist of 'fdrwxupc'"
The second argument to the access function must contain 'f' or 'd' to
check for a file or directory and must contain a combination of 'rwx'
to check for read, write or execute permission. It may further contain
'p' to search in RWLOADSIM_PATH, 'u' to search in public directory
or 'c' to not check in the current directory.

### RWL-219 error: "%s function requires name of database variable"
A syntax error during parse of the named database function.
The argument must identify a database.

### RWL-220 warning: "use of '$if: ... ;' is deprecated, use '$if ... $then' in stead"
Only seen when executing test.sh as the syntax is not documented.
If you use the deprecated syntax, please change your code.

### RWL-221 error: "$if without matching $then on same line"
The $if and $then directivies must be on the same input line.

### RWL-222 error: "expected valid expression in $if ... $then directive"
A syntax error during parse of the expression in an $if $then directive.

### RWL-223 error: "formal argument or return value cannot be of type %s"
The formal argument of a procedure or function, and the return
if a function must be one of integer, double or string.

### RWL-224 error: "%s is not available in database version %d"
You are using a feature that requies a higher Oracle Client
release than the one you have.

### RWL-225 error: "sql text has already been provided for '%s'"
The sql text for a dynamic sql statement must be provided exactly once.
If you need to provide a new sql text, you must first do 'modify sql release'.

### RWL-226 error: "define array cannot by used by dynamic sql"
Dynamic sql statement can only use the implicit fetch array in
Oracle Call Interface and not a define array.

### RWL-227 error: "cannot execute modify sql %s - '%s' in use"
You cannot modify a dynamic sql that is currently being used
in a cursor loop.

### RWL-228 error: "array bind cannot be used with experimental raw"
The experimental use of raw does not currently work with array bind, which
prevents array dml. You could write the code and submit a pull request.

### RWL-229 error: "cannot open /dev/tty"
When prompting the user for a password, rwloadsim was unable to open /dev/tty.

### RWL-230 error: "incorrect readline"
A syntax error during parse of a readline statement.

### RWL-231 error: "readbuffer of size %d too short to read a line from %s"
When reading a line from a file, the line was longer than the buffer
size. You can use either of these methods to increase the buffer:
* Put $longoption:readbuffer=N in your first .rwl file
* Provide the -B option to rwloadsim
* Use the $readbuffer:N directive in your startup file such as ~/.rwloadsim.rwl.

### RWL-232 warning: "reverse searching in instrb2 is not yet implemented"
The instrb2 function does not currently support reverse searching.

### RWL-233 warning: "mixing current and deprecated syntax for control loop"
You have somehow found the now deprecated syntax for control loops, and
have mixed that with the documented syntax. Note that the previous syntax
will be desupported in some future release.

### RWL-234 error: "file %s opened in main cannot be closed in thread"
Files that are opened in the main thread must also be closed in the
main thread. Note that files opened for read in the main thread
including stdin) will be automatically closed in threads.

### RWL-235 warning: "%s cannot be done in main; wrap with execute block"
The operation you attempted cannot be done directly in main. You need
need to wrap it with execute/end. Operations on LOB can be done directly
in main, if you have a default database declare dedicated.

### RWL-236 error: "option and userhelp directives only available in first file"
All of the directives $useroption, $userswitch, $longoption, $userhelp can
only be used in the first .rwl file named on the command line.

### RWL-237 error: "user argument %s is an ordinary argument"
An attempt was made at using $useroption or $userswitch with an option
name that already exists as an ordinary option.

### RWL-238 error: "user argument %s is already defined"
You have already used $useroption or $userswitch with the same name.

### RWL-239 error: "user argument %s cannot be used locally"
You can only use $useroption or $userswitch with variables declared
as private or public.

### RWL-240 warning: "user argument %s has not been used"
You have provide a $useroption or $userswitch that does
not have a variable associated with it.

### RWL-241 error: "environment expansion in file name '%s' is larger than %d"
After expansion of one or more environment variables, the
resulting file name is unreasonably long.

### RWL-242 warning: "expansion of %s/%s would not fit in %d bytes"
After expansion of one or more environment variables, the
resulting file name is unreasonably long.

### RWL-243 warning: "cursorcache has no effect in a connection pool"
As connection pools do not have a session associated with them, they cannot
be used to execute any sql. As a consequence, cursorcache has no effect.

### RWL-244 error: "'%s' is not a database of type connection pool"
When using the 'connect connectionpool' option during a database declaration,
the database named by the option must be delcared as a connectionpool.

### RWL-245 error: "the %s database cannot be a connection pool"
You cannot use a connection pool for this database.

### RWL-246 error: "database '%s' cannot connect using a connection pool"
Only (threads) dedicated databases can connect using a connection pool.

### RWL-247 error: "connect string or pool already provided for database '%s'"
A database declaration can have at most one specification for
connect string or connection pool.

### RWL-248 error: "the connection pool database '%s' cannot be used to execute sql"
As connection pools do not have a session associated with them, they cannot
be used to execute any sql.

### RWL-249 error: "the database '%s' is not of type sessionpool"
You are attempting to modify session pool parameters, but the database is not
declared as a sessionpool database.

### RWL-250 warning: "the value (%d) for %s is unreasonable; %d will be used"
The value for some parameter is outside the allowed range and it has
been adjusted to the new value shown. You should correct your program
such that a proper value is used.

### RWL-251 warning: "the %s directive cannot be excluded using $if/$then/$else"
The scan for option directives that is performed in the first rwl file cannot
be excluded using $if/$then/$else/$endif directives, and they will therefore
always be used.

### RWL-252 error: "break cannot be done in main"
You cannot use the break statement directly in main.
The exit statement is a possible alternative.

### RWL-253 error: "break outside loop or execute block"
The break statement can only be used inside loop or execute block.

### RWL-254 warning: "rwloadsim port on %s is a beta release"
You are running rwloadsim on a platform that has not been thoroughly tested.
If you complete full testing, please report using github.

### RWL-255 warning: "connection failure for database %s - %d retry attempts"
A connection attempt failed due to a temporary error, and a retry will be
attempted as specified by the $dbfailures directive.

### RWL-256 error: "no more connection retries for database %s"
The number of failures set via the $dbfailures directive has been exhausted.
Investigate your environment and potentially set a higher value in $dbfailures.

### RWL-257 error: "you cannot use directives inside a $if ... $then directive"
Between $if and $then, only expressions are allowed. If you need nested
$if $then, each $if ... $then directive must be on a separate line.

### RWL-258 warning: "the 'execute' keyword is deprecated for while loops"
You have somehow found the now deprecated syntax for while loops;
replace 'execute' with 'loop'. Note that the previous syntax will
be desupported in some future release.

### RWL-259 warning: "implicit %s has already been provided"
The implicit bind or define should only be provided once;
in each sql declaration.

### RWL-260 error: "bindout must be explicit"
To use bindout as an implicit bind, the syntax :variable
is needed in the bindout specification.

### RWL-261 error: "array define cannot be used with implicit defines"
The implicit define can only be used with pre-fetch
and not with array defines.

### RWL-262 error: "no columns returned from sql '%s'"
While doing implicit define for the named SQL statement,
OCI_ATTR_PARAM_COUNT was returned as 0. Your SQL must
be a query.

### RWL-263 error: "the select list element '%s' in '%s' must have an alias"
While doing implicit define for the named SQL statement, a
select list element cannot be used as the name of a variable
and it needs to have an alias.

### RWL-264 error: "implicit bind requires valid bind name in stead of ':%.*s' in '%s'"
While doing implicit bind for the named SQL statement, a
placeholder that is not a valid variable was found.
One such example is using numbered placeholders.

### RWL-265 error: "no variable declared to match name ':%.*s' in '%s'"
While doing implicit bind for the named SQL statement, a
placeholder does not match any declared variable. You must
change the placeholder or declare the variable.

### RWL-266 error: "not enough expressions to satisfy printf format '%s'"
While scanning the printf format, there was not enough expressions
available to satisfy the format. Verify the printf format and
provide the appropriate number of expressions.

### RWL-267 warning: "replacing unsupported conversion character '%c' by '%c'"
While scanning the printf format, an unsupported conversion character
was found and replaced by another supported character.

### RWL-268 error: "no conversion character found"
While scanning the printf format, end of string was reached before
an appropriate conversion character was found.

### RWL-269 error: "found '%c' in stead of a valid conversion character"
While scanning the printf format, some other character than a valid conversion
character was found. Supported characters include 'i', 'f', 'e', 's'.

### RWL-270 error: "found 0x%x in stead of a valid conversion character"
While scanning the printf format, some non ascii character
was found. Supported characters include 'i', 'f', 'e', 's'.

### RWL-271 error: "the number of output elements in '%s' is insufficent for the number of expressions"
Each expression provided as an argument to prinft must have a coresponding
output format elements in the format string.

### RWL-272 error: "missing string name for sprintf"
A syntax error during parse of sprintf statement.

### RWL-273 warning: "the identifier '%s' will be taken as a SQL keyword in a future version"
You are using an identifier that in a future version of rwloadsim will be
used as a keyword starting a SQL statement. You should change your code to
use a different identifer.

### RWL-274 error: "sql '%s' cannot be flushed using array execute"
You have attempted using the modify sql array execute statement with
a sql statement that is not using array bind for a dml operation.

### RWL-275 warning: "the text of sql '%s' is generated at compile time"
The sql statement text does not depend on any calculations done inside a
procedure or anonymous execution block such as a loop. This is a legacy
from the original rwloadsim design, and you are suggested one of these
alternatives:
1. Use dynamic sql and provide the text using 'modify sql for'
2. Embed your sql text directly rather than as a concatenation.
3. Use the 'sql execute' syntax if a named sql is not needed.

### RWL-276 error: "cannot set the array for immediate sql with dynamic sql text"
The sql statement text for this sql is dynamically set which means it could
change for every execute and therefore cannot use an array. This is only
relevant for dml, and if you expect to execute a query, you can do so in a
cursor loop without this restriction.

### RWL-277 error: "unfinished scan for pl/sql"
During scan for pl/sql text, a terminator was not found.
PL/SQL is terminated by a line with potential white space followed by a
single '.' or '/' at the end of the line.

### RWL-278 error: "parse error at position %d: %s"
A syntax error was found during parsing by bison at the character position
shown; the error may included the unexpected symbol and/or a list of expected
symbols to helt identify the actual error. It is followed by another error
showing the rwlloadsim error.

### RWL-279 warning: "invalid escape '&#92;%c' in string constant"
The valid escapes in a string constant are &#92;&#92; &#92;" &#92;t &#92;n &#92;e &#92;r or
a &#92; prefixing a newline causing the newline to be excluded from the string.

### RWL-280 error: "invalid input character 0x%2.2x (utf8?)"
An invalid character with the value shown in hex was read during scanning.

### RWL-281 error: "invalid input character '%s'"
An invalid character was read during scanning.

### RWL-282 error: "the proper 'sys' token was not found in '%s'"
To connect using sys authentication, 'as' must be followed by one of
'sysdba', 'sysoper', 'sysasm', 'sysbackup', 'sysdg', 'syskm' sysrac'.

### RWL-283 error: "sys authentication only possible for dedicated database"
To connect using sys authentication such as sysdba, the database must be
declared as dedicated'.

### RWL-284 error: "'%s' specification has already been provided"
Each specification should only provided once when you declare a database,
and the one shown in the error has already been provided.

### RWL-285 error: "'%s' cannot be used in generated executable"
When calling an executable with direct execution of rwl scripts,
you cannot use the feature or option shown.

### RWL-286 error: "'%s' cannot be used when generating executable"
When generating an executable for direct execution of rwl scripts,
you cannot use the feature or option shown.

### RWL-287 error: "when generating an executable, the following command: %s returned with status %d"
When genrating an executable with direct execution of an rwl script, the
command to compile and link has failed.

### RWL-288 error: "libclntsh.so cannot be found"
ORACLE_HOME or LD_LIBRARY_PATH environment is not set properly. Either
should contain liblcntsh.so to use by gcc -L option for linking the generated
binary.

### RWL-289 information: "the executable '%s' was generated"
The --generate option was used to create an executable from rwl scripts,
and the named executable was succesfully generated.

### RWL-290 warning: "a sensitive keyword was found during scanning"
During scan of the rwl files for generating an executable, one or more
sensitive keywords (including 'database', 'password' and others) was found. You
are recommended making sure no sensitive information is included in the
generated executable. Note that rwloadsim cannot complete verify no sensitive
inforation is put in the executable.

### RWL-291 warning: "opening a file with '%s' in the file name is deprecated"
In version 3.1, you need to change your syntax for opening files to use
either of these assignment operators: >=, >>=, <=, >|=, <|= in stead of using
similar characters as part of the text string assigned to the file variable.

### RWL-292 warning: "closing a file with an operator used for open"
You are using one of the operators used to open a file or pipeline to
close a file by assigning null to it. You should use the := operator.

### RWL-293 warning: "'%s' will be a keyword in a future release"
You are using an identifier that in some future release will be a keyword.
You should change your code and use a different identifer as it otherwise will
cause a syntax error in the future.

### RWL-294 error: "Variables of type %s cannot be declared threads sum"
The threads sum attribute can only be used with variables of type integer
or double.

### RWL-295 warning: "Assign to threads global '%s' with same variable in expression"
The expression being assigned to a threads global variable includes the same
variable. Each indiviaul access to threads global variables is protected by a
mutex, and the assignment therefore has a race condition.

### RWL-296 warning: "aborted prematurely"
You have been using the abort statement and $abortnice is in effect. It should
only be used when no other possibilities exist.
Consider using exit in stead.

### RWL-297 warning: "all arguments are positional in a generated executable"
When generating an executable for direct execution of rwl scripts, all
arguments are rwl files during generation, and are positional at execution.

### RWL-298 error: "'%s' is not a threads dedicated database"
The at clause must refer to a threads dedicated database.

### RWL-299 error: "querynotification stop time (%.1f) before start (%.1f) or current (%.1f)"
When registering for query notification, the active time must be positive,
and therefore stop time must be after both of start time and of current time.

### RWL-300 error: "break querynotification can only be performed from inside callback"
The break querynotification is breaking a query notification before the stop
time experes, but the statement is executed outside of the notification
callback. The call must be executed in the 'then' clause of query notification.

### RWL-301 error: "the stddev (%.2f) argument to normalrandom is not positive"
The second argument to the normalrandom function is the standard deviation,
which must be a positive number.

### RWL-302 error: "the statisticsonly procedure '%s' cannot execute any SQL"
The statisticsonly attribute can only be used with procdures that do not
perform any sql or other database calls. You need to either remove database
activity from the procedure or remove the statisticsonly attribute.

### RWL-303 error: "the debug options '%s' could not be resolved"
debug arugments must be a comma separated list of debug options without
spaces; each option either a hexadeciman number (potentially prefixed by
0x or 0X) or one of the text values exec, var, eval, bison, or sql
.

### RWL-304 error: "%s cannot be used inside procedure or function"
You cannot use this command inside a procedure, function, or inside any
compound statement such as if or loop.

### RWL-305 warning: "timeout after %.3fs waiting for a session in '%s'"
When waiting for a session in a session pool, no available entry was available
within the timeout of set for the pool.

### RWL-306 information: "executing sql with sql_id=%.*s: %s"
The $sqllogging: directive is used to output all SQL being executed.

### RWL-307 information: "executing sql with unknown sql_id: %s"
The $sqllogging: directive is used to output all SQL being executed. The sql_id
is typically unknown if the sql had an error or if the database or client
version is not at least 12.2.

### RWL-308 warning: "sqllogging is already in effect"
During handling of sqllogging from option or directive, sqllogging was already
enabled. You can turn off sqllogging via the $sqllogging:off directive.

### RWL-309 warning: "ampersand replacement is not available for %s"
Ampsersand replacement can only be used in sql text directly embedded in
your rwl file and the sql provided appears to have & used for replacement. You
can use dynamic sql as an alternative, unless the & actually is part of your
sql statement in which case the warning can be ignored. To prevent the check
for &, use the $ampersand:off directive.

### RWL-310 warning: "the total length (%d) of ampersand replacement variables is unreasonably long"
To be able to fit the potential contents of all ampersand replacement
variables, a sufficiently large buffer will be allocated. This warning means
this buffer will be larger than reasonably expected. If possible, you should
use shorter replacement variables or alternatively simply mute this warning
using the $mute:310 directive.

### RWL-311 error: "ampersand replacement is incorrectly terminated by the character '%c'"
In embedded sql, the ampersand character must either be followed by the
name of a string variable and a decimal point or by another & character.
&varname. will be replaced by the actual variable contents when the sql is
executed and && is used to include a single & in your sql statement.

### RWL-312 warning: "the variable '%s' in a counter loop should be integer, not %s"
In a counter loop using .. the variable named after the for keyword should
be of type integer, as the variable is incremented by the integer value 1 in
each iteration.

### RWL-600 internal error: '%s'
An abnormal situation caused an internal error in rwloadsim.
This is in most cases due to a programming error and it
should be reported with as much evidence as possible.

### RWL-601 debug: '%s'
This output is produced when running with any debug bits set using the
-D option. The actual debug output is dependent on the source code,
which you need to read to get all details.

