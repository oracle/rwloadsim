/*
 * RWP*Load Simulator
 *
 * Copyright (c) 2023 Oracle Corporation
 * Licensed under the Universal Permissive License v 1.0
 * as shown at https://oss.oracle.com/licenses/upl/
 *
 * Real World performance Load simulator error header
 *
 * rwlerror.h
 *
 * History
 *
 * bengsig   6-feb-2024 - Own option processing
 * bengsig  30-jan-2024 - all includes in rwl.h
 * bengsig  20-sep-2023 - list iterator loop
 * bengsig  12-sep-2023 - sql ampersand replacement
 * bengsig   6-sep-2023 - sql logging
 * johnkenn 31-aug-2023 - debug text warning
 * bengsig  10-aug-2023 - session pool timeout then action
 * bengsig  26-jul-2023 - Add run/threads error
 * bengsig  15-may-2023 - statisticsonly
 * bengsig   3-feb-2023 - No OCI_ATTR_TRANSACTION_IN_PROGRESS in 11.2
 * bengsig  26-jan-2023 - RWL-046 changed; removed some punctuation
 * bengsig  25-jan-2023 - Add #define for error number in tags/cscope
 * bengsig   9-jan-2023 - Project cqn
 * bengsig  24-nov-2022 - Arguments are all positional in generated
 * bengsig  26-oct-2022 - Add $niceabort:on directive
 * bengsig  25-oct-2022 - Abort is not critical
 * bengsig  18-oct-2022 - threads global variables
 * bengsig  22-sep-2022 - Changed stack type handling
 * bengsig  19-sep-2022 - Future keywords
 * bengsig  15-sep-2022 - New file assignment operators
 * bengsig  12-sep-2022 - More options to access function
 * bengsig  11-jul-2022 - Correct option error
 * bengsig  01-jul-2022 - Allow md output
 * bengsig  28-jun-2022 - Generate project
 * bengsig  12-may-2022 - connect as sysdba etc
 * bengsig  11-may-2022 - Correct error pos in sql/string scan
 * bengsig  09-may-2022 - Improved scan/parse error location
 * bengsig  20-apr-2022 - Immediate sql errors
 * bengsig  19-apr-2022 - Warn about static sql that appears like dynamic
 * bengsig  06-apr-2022 - flush array dml
 * bengsig  31-mar-2022 - Warn if using future sql keyword as identifier
 * bengsig  17-mar-2022 - Fix wrong messages
 * bengsig  04-mar-2022 - printf project
 * bengsig  01-mar-2022 - Implicit bind with array DML
 * bengsig  21-feb-2022 - Implicit bind and define
 * bengsig  25-nov-2021 - poolmin/max changes
 * bengsig  24-nov-2021 - $dbfailures directive
 * bengsig  22-nov-2021 - Add port string and beta warning
 * bengsig  13-aug-2021 - Add break
 * bengsig  20-jul-2021 - OCI_SUCCESS_WITH_INFO is not an error
 * bengsig  21-jun-2021 - Improve error messaging on file
 * bengsig  16-jun-2021 - Better first file scanning
 * bengsig  14-jun-2021 - Deprecate legacy control loop syntax
 * bengsig  10-jun-2021 - Add error for min value check
 * bengsig  09-jun-2021 - Add modify database cursorcache/sessionpool
 * bengsig  18-mar-2021 - Fix rwl-600 when resdb fails
 * bengsig  17-feb-2021 - General error message cleanup
 * bengsig  15-feb-2021 - Add RWLEDESC for detailed error description
 * bengsig  03-feb-2021 - error stack for RWL-056 (file will close)
 * bengsig  27-jan-2021 - connectionclass
 * bengsig  27-jan-2021 - improve missing ; error in sql
 * bengsig  20-jan-2021 - connectionpool
 * bengsig  04-jan-2021 - -L option
 * bengsig  16-dec-2020 - exit
 * bengsig  04-nov-2020 - Allow string length to be immediate_expression
 * bengsig  14-oct-2020 - fix bind raw bug
 * bengsig  07-oct-2020 - remove sharding
 * bengsig  05-oct-2020 - compare/uniform/integer warning
 * bengsig  23-sep-2020 - for .. loop syntax for control loops
 * bengsig  31-aug-2020 - Reconnect for dedicated
 * bengsig  15-may-2020 - $useroption etc
 * bengsig  15-apr-2020 - File reading
 * bengsig  30-mar-2020 - Dynamic SQL changes
 * bengsig  23-aug-2019 - getenv, comditional compilations
 * bengsig  12-jun-2019 - array define related errors
 * bengsig  24-mar-2019 - Added erlangk related errors
 * bengsig  14-feb-2019 - added errors for flush persec
 * bengsig  06-feb-2019 - added errors for ociping and missing file name
 * bengsig  10-may-2017 - creation
 */

// Only actually include the error texts
// when comiling rwlerror.c where RWLERROR gets
// defined and used like this:
//
// #undef RWLERROR
// #define RWLERROR(txt,cat) , { txt, cat }
// static rwl_error rwlerrors[] = {
//   { "No error", 0 }
//   #include "rwlerror.h"
// } ;
//
//
#ifndef RWLERROR
# define RWLERROR(txt,cat) 
# define RWLEDESC(desc)
#endif

#define RWL_ERROR_NO_ERROR 0
RWLEDESC(0)

// Note that it is important that the #defines below before
// each error text has a value 1 higher than the previous
// such that the entries in the rwlerrors[] are correct
// DO NOT leave holes!
// You can verify there are no holes by doing rwlerror NN
// where NN is the highest number - it should print the
// correct error message.
//
// The RWLEDESC() macro below contains a detailed description
// of each error as one text string in the C sense, but
// often made from several " embedded strings. For multiple
// lines, include \n. Do not include a terminating . as
// rwlerror automatically adds that.
//
// If you omit an RWLEDESC() you will get warnings about
// missing initializers; you can just use RWLEDESC(0)
// but you really should include some actual text

#define RWL_ERROR_FILE_NOT_OPEN 1
RWLERROR("cannot open '%s' for reading",RWL_ERROR_NOFILE|RWL_ERROR_MINOR)
RWLEDESC("The file named could not be opened for reading.\n"
"This error can happen in several places including:\n"
"* processing an input file argument to rwloadsim\n"
"* the $include directive")

#define RWL_ERROR_PUBLIC_BAD 2
RWLERROR("public directory '%s' is not accessible or does not appear correct"
, RWL_ERROR_NOFILE |RWL_ERROR_WARNING)
RWLEDESC("The verification that the public directory exists and is correct failed.\n"
"You probably have an invalid installation or are directly using an rwloadsimNN.\n"
"In the latter case, always use the rwloadsim executable, not a client specific\n"
"one, or use the full pathname to your rwloadsimNN executable")

#define RWL_ERROR_PREMATUREEND 3
RWLERROR("premature end-of-file or abort", RWL_ERROR_PARSE)
RWLEDESC("Your rwloadsim program terminated unexpectedly. Typical causes are:\n"
"* unfinished function or procedure declarations\n"
"* if/loop/execute that is not properly matched with end\n"
"* unbalanced $if $else $endif directives")

#define RWL_ERROR_DECL_INT 4
RWLERROR("incorrect integer declaration", RWL_ERROR_PARSE)
RWLEDESC("A syntax error during parse of an integer declaration")

#define RWL_ERROR_DECL_DBL 5
RWLERROR("incorrect double declaration", RWL_ERROR_PARSE)
RWLEDESC("A syntax error during parse of a double declaration")

#define RWL_ERROR_DECL_STR 6
RWLERROR("incorrect string declaration", RWL_ERROR_PARSE)
RWLEDESC("A syntax error during parse of a string declaration")

#define RWL_ERROR_UNEXPECTED_AFTER_IDENTIFIER 7
RWLERROR("expected valid input after identifier", RWL_ERROR_PARSE)
RWLEDESC("A syntax error after parse of an identifier.\n"
"The identifier should be followed by either of:\n"
" - An assignment operator\n"
" - Potentially an at clause and a semicolon\n"
" - An opening paranthesis")

#define RWL_ERROR_NO_VALID_EXPRESSION 8
RWLERROR("expected valid expression", RWL_ERROR_PARSE)
RWLEDESC("A syntax error during parse of an expression")

#define RWL_ERROR_UNNEEDED_SEMICOLON 9
RWLERROR("superfluous ';' at position %d", RWL_ERROR_WARNING)
RWLEDESC("The semicolon is used to terminate a statement or declaration\n"
"and repeated semicolon is not allowed")

#define RWL_ERROR_MODIFY_SQL_ARRAY_BAD 10
RWLERROR("modify sql '%s' array %d should be positive", RWL_ERROR_WARNING)
RWLEDESC("The size of an array must be at least 1")

#define RWL_ERROR_MISSING_SEMICOLON 11
RWLERROR("unexpected keyword or identifier (missing ';')", RWL_ERROR_PARSE)
RWLEDESC("A general parse error that often occurs when a semicolon is missing")

#define RWL_ERROR_CANNOT_USE_LOCAL 12
RWLERROR("local variable '%s' cannot be used here", RWL_ERROR_PARSE)
RWLEDESC(
"A local variable was used in a context where\n"
"only private or public variables are allowed")

#define RWL_ERROR_BIND 13
RWLERROR("invalid bind", RWL_ERROR_PARSE)
RWLEDESC("A syntax error during parse of bind in a sql declaration")

#define RWL_ERROR_DEFINE 14
RWLERROR("invalid define", RWL_ERROR_PARSE)
RWLEDESC("A syntax error during parse of define in a sql declaration")

#define RWL_ERROR_ARRAY 15
RWLERROR("invalid array", RWL_ERROR_PARSE)
RWLEDESC("A syntax error during parse of array in a sql declaration")

#define RWL_ERROR_MISSING_SEMICOLON_IN_SQL 16
RWLERROR("missing ';' after sql specification", RWL_ERROR_MINOR)
RWLEDESC("In a declaration of a sql variable, each specification must\n"
"must be terminated with a semicolon")

#define RWL_ERROR_VAR_NOT_FOUND 17
RWLERROR("'%s' has not been declared", RWL_ERROR_PARSE)
RWLEDESC("The identifier you are using has not been declared")

#define RWL_ERROR_LOOP 18
RWLERROR("incorrect loop", RWL_ERROR_PARSE)
RWLEDESC("A syntax error during parse of a loop header")

#define RWL_ERROR_DATABASE_WRONG 19
RWLERROR("invalid database declaration", RWL_ERROR_PARSE)
RWLEDESC("A syntax error during parse of a database declaration")

#define RWL_ERROR_ALREADY_VARIABLE 20
RWLERROR("identifier '%s' already declared as %s at [%s;%d]", RWL_ERROR_PARSE)
RWLEDESC("The named identifier has already been declared\n"
"Note that there is only one namespace for all variables")

#define RWL_ERROR_TOO_SHORT_STRING 21
RWLERROR("variable '%s' of length %d cannot hold %d bytes", RWL_ERROR_RUNTIME)
RWLEDESC("Attempt to write more bytes to a string variable than its declared length.\n"
"Note that if you are using sprintf, the the expected number of bytes is\n"
"calculated as soon as the first % conversion would exceed the maximum length")

#define RWL_ERROR_ZERO_DIVIDE 22
RWLERROR("attempted division by zero", RWL_ERROR_RUNTIME)
RWLEDESC("The right operand of a / or % operation is zero,\n"
"operation continues using the left operand as result")


#define RWL_ERROR_CANNOT_CREATE_TEMPFILE 23
RWLERROR("cannot create temporary file", RWL_ERROR_PARSE|RWL_ERROR_NOFILE|RWL_ERROR_SEVERE)
RWLEDESC("The tmpfile(3) function returned an error")

#define RWL_ERROR_BAD_DIRECTIVE 24
RWLERROR("incorrect directive '%s'", RWL_ERROR_MINOR)
RWLEDESC("See rwlman directive for a complete list of all directives")

#define RWL_ERROR_ERRORS_FOUND 25
RWLERROR("cannot execute '%s' due to previous errors", RWL_ERROR_RUNTIME)
RWLEDESC("Due to previous errors, the named procedure cannot be executed")

#define RWL_ERROR_INVALID_CHARS_NONASCII 26
RWLERROR("scan error at position %d: invalid input character 0x%2.2x (utf8?)", RWL_ERROR_PARSE)
RWLEDESC("An invalid character with the value shown in hex was read during scanning")

#define RWL_ERROR_INVALID_CHARS 27
RWLERROR("scan error at position %d: invalid input character '%s'", RWL_ERROR_PARSE)
RWLEDESC("An invalid character was read during scanning")

#define RWL_ERROR_NEGATIVE_WEIGHT 28
RWLERROR("weight %.2f for '%s' must be zero or positive", RWL_ERROR_PARSE)
RWLEDESC("In declaration of a random string or procedure, all weights must be\n"
"at least zero")

#define RWL_ERROR_SQL_ARRAY_AND_IGNERR 29
RWLERROR("ignoring error with array based sql is not supported", RWL_ERROR_WARNING)
RWLEDESC("Ignoring errors and use of programmed error handling\n"
"cannot be done with array processing.\n"
"You must either set array to 1 or let rwloadsim handle errors")

#define RWL_ERROR_WEIGHTSUM_ZERO 30
RWLERROR("all entries in '%s' are zero", RWL_ERROR_PARSE)
RWLEDESC("In declaration of a random string or procedure, at least one\n"
"weight must positive")

#define RWL_ERROR_NO_STDIN 31
RWLERROR("reading from stdin not supported", RWL_ERROR_MINOR|RWL_ERROR_NOFILE)
RWLEDESC("You have been using '-' as an argument to rwloadsim, this is not supported")

#define RWL_ERROR_SQLARRAY_SET 32
RWLERROR("array size has already been set", RWL_ERROR_MINOR)
RWLEDESC("You can only use the array specification once")

#define RWL_ERROR_SQLARRAY_NOTGOOD 33
RWLERROR("array size must be positive", RWL_ERROR_PARSE)
RWLEDESC("The array size must be at least 1")

#define RWL_ERROR_NO_USERNAME 34
RWLERROR("username must be specified for database '%s'", RWL_ERROR_PARSE)
RWLEDESC("The username is a compulsory specification in a database declaration")

#define RWL_ERROR_DBALREADY 35
RWLERROR("%s database already specified as '%s'", RWL_ERROR_PARSE)
RWLEDESC("The default and results databases can only be declared once")

#define RWL_ERROR_NOT_YET_IMPL 36
RWLERROR("'%s' not yet implemented", RWL_ERROR_PARSE)
RWLEDESC("The facility you attempt using has not yet been implemented")

#define RWL_ERROR_NO_DATABASE 37
RWLERROR("%s database not declared or not accessible", RWL_ERROR_PARSE|RWL_ERROR_RUNTIME)
RWLEDESC("A database is either not declared or has caused error during connection")

#define RWL_ERROR_BAD_REGEX 38
RWLERROR("incorrect regex", RWL_ERROR_PARSE)
RWLEDESC("A syntax error during parse of a regex statement")

#define RWL_ERROR_REGEX_COMPILE_ERROR 39
RWLERROR("error compiling regular expression: %s", RWL_ERROR_RUNTIME)
RWLEDESC("Regular expression caused an error in regcomp(3)")

#define RWL_ERROR_REGEXSUBN_TOO_FEW 40
RWLERROR("regextract found %d matched sub-expressions, %d expected"
, RWL_ERROR_RUNTIME|RWL_ERROR_WARNING)
RWLEDESC("When using the regextract statement, the number of matched sub-expressions\n"
"is smaller than the number of variables")

#define RWL_ERROR_DEFINE_NUM_MISMATCH 41
RWLERROR("mismatch between result list count (%d) and define count (%d)", RWL_ERROR_WARNING)
RWLEDESC("The number of select list elements reported by Oracle Call Interface\n"
"does not match the number of defines used in the sql declaration\n"
"or the number of defines in effect for a dynamic sql")

#define RWL_ERROR_NO_ROWS 42
RWLERROR("no rows returned from '%s'", RWL_ERROR_WARNING)
RWLEDESC("A query used as a simple sql statement returns no errors.\n"
"You can replace the simple sql by a cursor loop to prevent this error")

#define RWL_ERROR_RESERVED_FOR_FUTURE 43
RWLERROR("'%s' is a keyword reserved for future use", RWL_ERROR_WARNING)
RWLEDESC("The facility you attempt using has not yet been implemented")

#define RWL_ERROR_COMMIT_NO_SQL 44
RWLERROR("attempted commit/rollback without any SQL being executed", RWL_ERROR_RUNTIME)
RWLEDESC("The commit or rollback has no effect as not sql has been executed")

#define RWL_ERROR_ROLLBACK_FORCED 45
RWLERROR("release of session from '%s' with outstanding DML; rollback forced", RWL_ERROR_RUNTIME)
RWLEDESC("You have been doing DML without performing explicit commit or rollback\n"
"before your session was (implicitly) released or given up.\n"
"If you have DML directly in main, you must wrap the DML and an associated\n"
"commit with an execute block for the commit to have effect")

#define RWL_ERROR_MISSING_PLSQL_COMMIT 46
RWLERROR("release of session from '%s' with outstanding PL/SQL transaction; rollback forced", RWL_ERROR_RUNTIME)
RWLEDESC("You have been doing DML inside PL/SQL without performing explicit commit or\n"
"rollback before your session was (implicitly) released or given up. If you have\n"
"PL/SQL with open transaction directly in main, you must wrap the call and\n"
"associated commit with an execute block for the commit to have effect")

// RWLERROR("cannot determine if PL/SQL started transaction on '%s'; commit executed", RWL_ERROR_WARNING)
// RWLEDESC("After executing a PL/SQL block, you need an explicit commit or rollback")

#define RWL_ERROR_BAD_DATABASE 47
RWLERROR("database '%s' could not connect", RWL_ERROR_PARSE)
RWLEDESC("There was an error during initial connection of the database\n"
"and the database can therefore not be used")

#define RWL_ERROR_CONN_ROLLBACK_FORCED 48
RWLERROR("terminating connection '%s' with outstanding DML; rollback forced"
, RWL_ERROR_NOFILE|RWL_ERROR_RUNTIME)
RWLEDESC(
"You have been using a database and rwloadsim has registered some dml has\n"
"been executed. You therefore must perform explicit commit or rollback")

#define RWL_ERROR_ATTEMPT_CURSOR_NONQUERY 49
RWLERROR("cannot use cursor loop as '%s' is non-query", RWL_ERROR_RUNTIME)
RWLEDESC("You have attempted using the syntax for a cursor loop\n"
"but the sql statement is not a query")

#define RWL_ERROR_DEFAULT_ARRAY 50
RWLERROR("cursor loop '%s' uses default array size of %d", RWL_ERROR_WARNING)
RWLEDESC("Without an explicit array size set, array fetch will be based\n"
"on memory. If this is acceptable, use $mute:50")

#define RWL_ERROR_DECL_FILE 51
RWLERROR("incorrect file declaration", RWL_ERROR_PARSE)
RWLEDESC("A syntax error during parse of a file declaration")

#define RWL_ERROR_CANNOTOPEN_FILE 52
RWLERROR("cannot open '%s' for %s as '%s', O/S error: %s", RWL_ERROR_RUNTIME)
RWLEDESC("At runtime, the file named could not be opened.\n"
"The O/S error will have further details")

#define RWL_ERROR_WRITE_NOT_OPEN 53
RWLERROR("file '%s' is not open", RWL_ERROR_RUNTIME)
RWLEDESC("When closing a file (assigning null to it), the file was not open")

#define RWL_ERROR_CANNOTCLOSE_FILE 54
RWLERROR("cannot close file '%s', O/S error: %s", RWL_ERROR_RUNTIME)
RWLEDESC("At runtime, the file named could not be closed.\n"
"The O/S will have further details")

#define RWL_ERROR_ALREADYOPEN_FILE 55
RWLERROR("file '%s' is already open", RWL_ERROR_RUNTIME)
RWLEDESC("Attempting to open a file that has already been opened")

#define RWL_ERROR_FILE_WILL_CLOSE 56
RWLERROR("file '%s' will be closed", RWL_ERROR_WARNING)
RWLEDESC("The file will implicitly be closed. This may happen:\n"
"* when a thread finishes\n"
"* when rwloadsim finishes")

#define RWL_ERROR_ILLEGAL_THREAD 57
RWLERROR("incorrect or missing thread specification", RWL_ERROR_PARSE)
RWLEDESC("A syntax error during parse of a thread specification")

#define RWL_ERROR_GENERIC_OS 58
RWLERROR("%s failed, O/S error: %s", RWL_ERROR_SEVERE|RWL_ERROR_NOFILE)
RWLEDESC("This is a generic error assoticated with unexpected conditions.\n"
"The O/S error normally has further details")

#define RWL_ERROR_CLOCKOFF_NEGATIVE 59
RWLERROR("clock start time (%.2f) cannot be negative", RWL_ERROR_WARNING|RWL_ERROR_NOFILE)
RWLEDESC("When using the -c option, the start time must be zero or larger. If you are\n"
"using multi process execution, too long time may have passed after the prepare\n"
"call to rwloadsim with the -P option until the actual execution is done with\n"
"the -M or -R option")

#define RWL_ERROR_THROPT_REPEAT 60
RWLERROR("control loop option '%s' specified more than once", RWL_ERROR_PARSE)
RWLEDESC("A control loop option can only be provided once")

#define RWL_ERROR_THROPT_MISSING 61
RWLERROR("control loop option '%s' must be specified", RWL_ERROR_PARSE)
RWLEDESC("A control loop must have either stop or count specified exactly once")

#define RWL_ERROR_ORA11_PLSQL_NO_COMMIT 62
RWLERROR("cannot determine if PL/SQL started transaction on '%s'; commit executed", RWL_ERROR_WARNING)
RWLEDESC("After executing a PL/SQL block when the client version is 11.2, you need an\n"
"explicit commit or rollback")

#define RWL_ERROR_MISSING_EMPTY_BRACKETS 63
RWLERROR("the empty argument list is missing in %s()", RWL_ERROR_WARNING)
RWLEDESC("The function you are calling should be followed by an empty argument list.\n"
"Omitting () will be desupported in a future release")

#define RWL_ERROR_IF_NULL 64
RWLERROR("executing if with NULL argument - false assumed", RWL_ERROR_WARNING|RWL_ERROR_RUNTIME)
RWLEDESC("In an if statement, the condition was null.\n"
"Processing continues using false")

#define RWL_ERROR_LEGACY_CONTROLLOOP_SYNTAX 65
RWLERROR("this syntax for a control loop is deprecated", RWL_ERROR_WARNING)
RWLEDESC("You have somehow managed to find the legacy syntax for control\n"
"loops. Change your code to use the documented syntax")

#define RWL_ERROR_NONZEROEXIT 66
RWLERROR("pipeline '%s' returned %d", RWL_ERROR_WARNING)
RWLEDESC("When a pipeline was closed, the return value from pclose() was non zero")

#define RWL_ERROR_CANNOTOPEN_PIPE 67
RWLERROR("cannot open '%s' as pipe to '%s', O/S error: %s", RWL_ERROR_RUNTIME)
RWLEDESC("Creation of a pipeline failed with the O/S error shown")

#define RWL_ERROR_CANNOTCLOSE_PIPE 68
RWLERROR("cannot close pipe '%s', O/S error: %s", RWL_ERROR_RUNTIME)
RWLEDESC("At runtime, the pipeline named could not be closed.\n"
"The O/S will have further details")

#define RWL_ERROR_DONTEXECUTE 69
RWLERROR("cannot execute due to previous errors", RWL_ERROR_RUNTIME)
RWLEDESC("There have been previous errors that prevent further processing")

#define RWL_ERROR_HISTOVERFLOW 70
RWLERROR("histogram overflow (%d,%.3e)", RWL_ERROR_WARNING)
RWLEDESC("When saving histogram statistics, the bucket was larger than allowed")

#define RWL_ERROR_HISTUNDERFLOW 71
RWLERROR("histogram underflow (%d,%.3e)", RWL_ERROR_WARNING)
RWLEDESC("When saving histogram statistics, the bucket was smaller than allowed.\n"
"This error is no longer used")

#define RWL_ERROR_MUTE_TOO_HIGH 72
RWLERROR("cannot mute non-existing error", RWL_ERROR_WARNING)
RWLEDESC("You have attempted using the $mute directive for an\n"
"error number that does not exist")

#define RWL_ERROR_MUTE_NOTWARN 73
RWLERROR("muting non-warning %d", RWL_ERROR_WARNING)
RWLEDESC("You have attempted muting an error or severe error.\n"
"To allow this, first include $mute:73")

#define RWL_ERROR_PERSEC_TOOBIG 74
RWLERROR("cannot save counts beyond %ds", RWL_ERROR_WARNING)
RWLEDESC("Saving of per second counts for seconds beyond the value shown is suppressed.\n"
"This is mostly a result of database activity taking much longer than expected,\n"
"causing procedures to finish much after the expected time given via the -Z\n"
"option or the default of 2 hours")

#define RWL_ERROR_NO_CODE_SPACE 75
RWLERROR("out of space for code (%d) - rerun with -C option", RWL_ERROR_SEVERE)
RWLEDESC(
"The fixed array for storing your declared procedures and functions has been\n"
"exhausted. You can use either of these methods to increase the size:\n"
"* Put $longoption:codesize=N in your first .rwl file\n"
"* Provide the -C option to rwloadsim\n"
"* Use the $maxcode:N directive in your startup file such as ~/.rwloadsim.rwl")

#define RWL_ERROR_NO_IDENTIFIER_SPACE 76
RWLERROR("maximum number of identifiers (%d) exceeded - rerun with -I option", RWL_ERROR_SEVERE)
RWLEDESC(
"The fixed array for storing your variable names has been\n"
"exhausted. You can use either of these methods to increase the size:\n"
"* Put $longoption:namecount=N in your first .rwl file\n"
"* Provide the -I option to rwloadsim\n"
"* Use the $maxident:N directive in your startup file such as ~/.rwloadsim.rwl")

#define RWL_ERROR_BINDOUT 77
RWLERROR("invalid bindout", RWL_ERROR_PARSE)
RWLEDESC("A syntax error during parse of bindout in a sql declaration")

#define RWL_ERROR_OCITRHREADINIT 78
RWLERROR("cannot initialize OCI threading", RWL_ERROR_SEVERE)
RWLEDESC("The OCIThreadInit call did not succeed")

#define RWL_ERROR_ORA_ERROR_SQL 79
RWLERROR("oracle error %d in '%s' declared at [%s;%d]\n%s", RWL_ERROR_RUNTIME|RWL_ERROR_HASNL)
RWLEDESC("Executing the sql at the file and line shown caused an Oracle error.\n"
"Processing will continue unless you have used $oraerror:stop")

#define RWL_ERROR_ORA_ERROR_NOSQL 80
RWLERROR("oracle error %d\n%s", RWL_ERROR_RUNTIME|RWL_ERROR_HASNL)
RWLEDESC("Executing some database operation caused an Oracle error.\n"
"Processing will continue unless you have used $oraerror:stop")

#define RWL_ERROR_ORA_SUCWIN_SQL 81
RWLERROR("oracle success with info %d in '%s' declared at [%s;%d]\n%s"
, RWL_ERROR_WARNING|RWL_ERROR_RUNMINOR|RWL_ERROR_HASNL)
RWLEDESC("Executing the sql at the file and line shown caused an Oracle warning.\n"
"Processing will continue unless you have used $oraerror:stop")

#define RWL_ERROR_ORA_SUCWIN_NOSQL 82
RWLERROR("oracle success with info %d\n%s", RWL_ERROR_WARNING|RWL_ERROR_RUNMINOR|RWL_ERROR_HASNL)
RWLEDESC("Executing some database operation caused an Oracle warning.\n"
"Processing will continue unless you have used $oraerror:stop")

#define RWL_ERROR_OCI_ERROR_SQL 83
RWLERROR("OCI error %s in '%s' declared at [%s;%d]", RWL_ERROR_RUNTIME)
RWLEDESC("Executing the sql at the file and line shown caused an Oracle Call Interface\n"
"error. Processing will continue unless you have used $oraerror:stop")

#define RWL_ERROR_OCI_ERROR_NOSQL 84
RWLERROR("OCI error %s", RWL_ERROR_RUNTIME)
RWLEDESC("Executing some database operation caused an Oracle Call Interface error.\n"
"Processing will continue unless you have used $oraerror:stop")

#define RWL_ERROR_OCI_UNSPEC_SQL 85
RWLERROR("unspecified OCI error %d in '%s' declared at [%s;%d]", RWL_ERROR_RUNTIME)
RWLEDESC(
"Executing the sql at the file and line shown caused an unspecified\n"
"Oracle Call Interface error. Processing will continue unless you have\n"
"used $oraerror:stop")

#define RWL_ERROR_OCI_UNSPEC_NOSQL 86
RWLERROR("unspecified OCI error %d", RWL_ERROR_RUNTIME)
RWLEDESC(
"Executing some database operation caused an unspecified Oracle\n"
"Call Interface error. Processing will continue unless you have\n"
"used $oraerror:stop")

#define RWL_ERROR_OCI_LINE_POS 87
RWLERROR("previous error was at line %d position %d:\n%.*s\n%*s", RWL_ERROR_RUNTIME)
RWLEDESC("The Oracle error shown was located at a specific line and position in\n"
"the sql statement. The actual line an position will be marked with an asterisk")

#define RWL_ERROR_BAD_BIND_ARRAY 88
RWLERROR("at least one define and no bindout must be specified for this array", RWL_ERROR_PARSE)
RWLEDESC(
"You must have at least one define and you cannot use bindout when\n"
"using 'array define' to have rwloadsim handle the array for a query")

#define RWL_ERROR_STATIC_SQL_NO_MODIFY 89
RWLERROR("modify sql %s cannot be used with static sql", RWL_ERROR_RUNTIME)
RWLEDESC("An attempt was done at modifying a static sql. The\n"
"'modify sql' statement can only be used with dynamic sql")

#define RWL_ERROR_DECL_RAST 90
RWLERROR("incorrect random string declaration", RWL_ERROR_PARSE)
RWLEDESC("A syntax error during parse of random string")

#define RWL_ERROR_RAST_WAS_CANCELLED 91
RWLERROR("random string '%s' cannot be used", RWL_ERROR_RUNTIME)
RWLEDESC("The random string was declared, but cannot be used due to errors.\n"
"You must fix the random string declaration")

#define RWL_ERROR_DECL_RAPROC 92
RWLERROR("incorrect random procedure declaration", RWL_ERROR_PARSE)
RWLEDESC("A syntax error during parse of random procedure")

#define RWL_ERROR_RESULTSDB_NOT_THRDEC 93
RWLERROR("results database connect use threads dedicated", RWL_ERROR_RUNTIME)
RWLEDESC("The results database must be declared dedicated, drcp or sessionpool.\n"
"In most cases, using a session pool 0..2 is fine")

#define RWL_ERROR_NO_STATS_WITHOUT_RESDB 94
RWLERROR("cannot save statistics without a results database", RWL_ERROR_WARNING)
RWLEDESC("In order to save statistics, you must have a results database,\n"
"and the results database must be accessible")

#define RWL_ERROR_LENGTH_NOT_POSITIVE 95
RWLERROR("length of string variable %s (%d) must be positive", RWL_ERROR_PARSE)
RWLEDESC("The value provided for the length of a string variable must be at least 1.\n"
"If you omit an actual length, the default will be 128. The length is in bytes")

#define RWL_ERROR_NOT_PREPARE_AND_EXECUTE_MULTI 96
RWLERROR("cannot prepare and execute multi-process in same run", RWL_ERROR_NOFILE)
RWLEDESC("You must use the -P option in separate call of rwloadsim followed\n"
"by call using either -M or -R option")

#define RWL_ERROR_CLOCKOFF_UNREASONABLE 97
RWLERROR("clock offset (%.2f) is unreasonably higher than %.2f", RWL_ERROR_MINOR|RWL_ERROR_NOFILE)
RWLEDESC("The clock offset sets the control loop common start time as a number of\n"
"seconds after start of rwloadsim. The value you have chosen is too high")

#define RWL_ERROR_MODIFY 98
RWLERROR("invalid modify", RWL_ERROR_PARSE)
RWLEDESC("A syntax error during parse of modify sql or modify database")

#define RWL_ERROR_NO_INPUT 99
RWLERROR("no input files", RWL_ERROR_WARNING| RWL_ERROR_NOFILE)
RWLEDESC("At least one input file must be provided to rwloadsim")

#define RWL_ERROR_INCORRECT_TYPE2 100
RWLERROR("cannot use %s '%s' as %s", RWL_ERROR_PARSE)
RWLEDESC("A variable of some type was found when a variable of a different type\n"
"was expected. This is a generic error used in several contexts")

#define RWL_ERROR_ONLY_THIS_AFTER_END 101
RWLERROR("only %s allowed after this end", RWL_ERROR_PARSE)
RWLEDESC("The keyword 'end' was followed by an unexpected keyword or identifier")

#define RWL_ERROR_THRCOUNT_NEGATIVE 102
RWLERROR("invalid thread count(%d) - must be zero or positive", RWL_ERROR_RUNTIME)
RWLEDESC(
"The count of threads started in each group of threads in the run statement\n"
"cannot be negative. Additionally the total count must be positive")

#define RWL_ERROR_TOTTHR_NOT_POSITIVE 103
RWLERROR("total thread count must be positive", RWL_ERROR_RUNTIME)
RWLEDESC(
"The count of threads started in each group of threads in the run statement\n"
"cannot be negative. Additionally the total count must be positive")

#define RWL_ERROR_SQL_WRONG 104
RWLERROR("invalid sql declaration (missing 'end', SQL or PL/SQL keyword)", RWL_ERROR_PARSE)
RWLEDESC("During parse of a sql declaration, the expected 'end' keyword was not found")

#define RWL_ERROR_BAD_SQL_SCAN 105
RWLERROR("unfinished scan for sql", RWL_ERROR_PARSE)
RWLEDESC("During scan for sql text, a terminator was not found.\n"
"SQL is terminated by a line with potential white space followed by a single\n"
"'.' or '/' at the end of the line, or by a ';' and the end of a line")

#define RWL_ERROR_PROCEDURE_WRONG 106
RWLERROR("invalid procedure declaration", RWL_ERROR_PARSE)
RWLEDESC("A syntax error during parse of a function or procedure declaration")

#define RWL_ERROR_GAMMA_TO_ERLANG 107
RWLERROR("gamma/gamma2 have been renamed to erlang/erlang2, please change your code", RWL_ERROR_WARNING)
RWLEDESC(
"The names of the gamma and gamma2 functions have been changed to\n"
"erlang/erlang2. The old names will be removed in a future release")

#define RWL_ERROR_DBL_AND_MOD 108
RWLERROR("modulus operation (%%) used in expression with double", RWL_ERROR_WARNING)
RWLEDESC("In rwloadsim versions before 3.1, the modulus operator (%) was handled as in\n"
"C and it did not handle double values. This is no longer the case, and this\n"
"error is no longer used")

#define RWL_ERROR_SUSPICIOUS_CHAR_IN_SQL 109
RWLERROR("suspicious whitespace character after '%c' during SQL or PL/SQL scan", RWL_ERROR_WARNING)
RWLEDESC("During scan for the terminator for sql or pl/sql, the terminator was\n"
"found followed by white space")

#define RWL_ERROR_VERY_LONG_IDENTIFIER 110
RWLERROR("identifier '%.*s' is longer than 30 characters", RWL_ERROR_WARNING)
RWLEDESC("In rwloadsim, the maximum length of identifiers is 30 characters")

#define RWL_ERROR_BAD_OPTION 111 // also used indirectly
RWLERROR("unrecognized option '%s'", RWL_ERROR_NOFILE)
RWLEDESC(
"When scanning for options to rwloadsim, an option that is neither\n"
"known as an ordinary short or long option, nor known as an option\n"
"from $useroption or $userswitch")

#define RWL_ERROR_CANNOT_INCLUDE_HERE 112
RWLERROR("$include directive cannot be used here", RWL_ERROR_PARSE)
RWLEDESC("You can only used $include when a program element is complete.\n"
"As an example, you cannot use $include while declaring a procedure.\n"
"See the rwlprogram(1rwl) rwlman page for details")

/* The next one is special as it is written directly to file descriptor 2
 * inside the interrupt handler using write() as printf (or sprintf) aren't
 * safe to use in interrupt handlers.  It therefore has RWL- in the start
 * and a newline at the end.
 *
 * This error of course has to have the number RWL-113 as it is similar to 
 * ORA-1013
 */
#define RWL_ERROR_CONTROL_C_HANDLED 113 
RWLERROR("RWL-113: user requested termination - please wait a few seconds\n"
, RWL_ERROR_RUNTIME|RWL_ERROR_RWLDASH)
RWLEDESC("Using ctrl-c will normally cause a termination within a few seconds.\n"
"You can repeat the ctrl-c a number of times if termination does not occur.\n"
"If you have $ora01013:continue, ORA-01013 will be treated like any other\n"
"error and not cause rwloadsim to stop")

#define RWL_ERROR_ILLEGAL_FILE_NAME 114
RWLERROR("'%s' is not a legal filename", RWL_ERROR_RUNTIME)
RWLEDESC("The filename is either empty or has illegal characters. As an\n"
"example, an include file using < > delimiters cannot begin with . or /")

#define RWL_ERROR_INCLUDE_DEEP 115
RWLERROR("$include recursion too deep", RWL_ERROR_RUNTIME)
RWLEDESC("The limit on depth of $include has been reached. You must\n"
"recompile rwloadsim from source to increase the limit")

#define RWL_ERROR_RECURSIVE_INCLUDE 116
RWLERROR("$include recursion into '%s' attempted", RWL_ERROR_RUNTIME)
RWLEDESC("You have attempted including some file using the $include directive from\n"
"within the file itself. This is not supported")

#define RWL_ERROR_WRONG_DB_IN_CODE 117
RWLERROR("cannot use %s database '%s' for at clause inside procedure/function", RWL_ERROR_PARSE)
RWLEDESC("The database used with an at clause must support pooling\n"
"such as sessionpool or drcp"
)

#define RWL_ERROR_AT_DEFAULT_NO_IMPACT 118
RWLERROR("at default has no effect here", RWL_ERROR_WARNING)
RWLEDESC("The 'at default' clause only has an impact when done inside a procedure")

#define RWL_ERROR_STARTSEC_TOO_LATE 119
RWLERROR("$startseconds directive must be used earlier - using %.2f", RWL_ERROR_WARNING)
RWLEDESC(
"The $startseconds or $clockstart directive must be used before\n"
"declaring the results database")

#define RWL_ERROR_DFORMAT_BAD 120
RWLERROR("dformat '%s' converts %.8f to %.8f using buffer '%s'", RWL_ERROR_WARNING)
RWLEDESC("The new value for $dformat is too limited to properly output some double.\n"
"This is a warning; continue at your own risk")

#define RWL_ERROR_IFORMAT_BAD 121
RWLERROR("iformat '%s' converts %ld to %ld using buffer '%s'", RWL_ERROR_WARNING)
RWLEDESC("The new value for $iformat is too limited to properly output some integer.\n"
"This is a warning; use at your own risk")

#define RWL_ERROR_USE_QUOTE_FOR_STRING 122
RWLERROR("strings are delimited by \"", RWL_ERROR_PARSE)
RWLEDESC("The single quote limiter is not used by rwloadsim")

#define RWL_ERROR_NO_DATABASE_NAME 123
RWLERROR("expected database name for execution", RWL_ERROR_PARSE)
RWLEDESC("A syntax error during parse of the at clause")

#define RWL_ERROR_TOO_MANY_ARGUMENTS 124
RWLERROR("procedure or function '%s' called with too many arguments", RWL_ERROR_PARSE)
RWLEDESC("The number of arguments in the call to a procedure or function\n"
"is larger than the number of declared arguments")

#define RWL_ERROR_TOO_FEW_ARGUMENTS 125
RWLERROR("procedure or function '%s' called with too few arguments", RWL_ERROR_PARSE)
RWLEDESC("The number of arguments in the call to a procedure or function\n"
"is smaller than the number of declared arguments")

#define RWL_ERROR_NO_RETURN_IN_FUNCTION 126
RWLERROR("function '%s' has no return statement", RWL_ERROR_WARNING)
RWLEDESC("A function must have at least one return statement. The behavior is\n"
"undefined if you return from a function by other means than via return")

#define RWL_ERROR_TOO_SHORT_RETURN 127
RWLERROR("function '%s' of length %d cannot return %d bytes", RWL_ERROR_RUNTIME)
RWLEDESC("Attempt to return more bytes from a string function than its declared length")

#define RWL_ERROR_RETURN_NO_EXPR 128
RWLERROR("return in function '%s' must include expression", RWL_ERROR_PARSE)
RWLEDESC("In functions, the return statement must include an expression")

#define RWL_ERROR_RETURN_WITH_EXPR 129
RWLERROR("procedure '%s' cannot return an expression", RWL_ERROR_PARSE)
RWLEDESC("In procedures, the return statement cannot include an expression")

#define RWL_ERROR_BAD_ARG_LIST 130
RWLERROR("incorrect argument list", RWL_ERROR_PARSE)
RWLEDESC("A syntax error during parse of procedure call")

#define RWL_ERROR_ISNULL_DEPRECATED 131
RWLERROR("isnull() function is deprecated, please change your code", RWL_ERROR_WARNING)
RWLEDESC("Please replace the deprecated isnull() function by the is null operator.\n"
"The isnull() function will be removed in a later release")

#define RWL_ERROR_FUNCTION_WRONG 132
RWLERROR("invalid function declaration", RWL_ERROR_PARSE)
RWLEDESC("A syntax error during parse of a function declaration")

#define RWL_ERROR_UNNEEDED_SEMICOLON_AFTER 133
RWLERROR("superfluous ';' after %s", RWL_ERROR_WARNING)
RWLEDESC("A semicolon was found at a place where it is not expected.\n"
"It is used to terminate a statement or declaration")

#define RWL_ERROR_TOO_MANY_BAD_CHAR 134
RWLERROR("too many invalid characters (is input an rwl file?)", RWL_ERROR_SEVERE)
RWLEDESC("The scanner has found a high number of invalid characters and\n"
"all further processing is stopped")

#define RWL_ERROR_GLOBAL_HIDDEN_BY_PRIVATE 135
RWLERROR("public %s '%s' is hidden by private %s declared at [%s;%d]", RWL_ERROR_WARNING)
RWLEDESC(
"A private variable is given the same name as an already existing public\n"
"variable. The private variable will be used during the rest of the source file")

#define RWL_ERROR_PRIVATE_HIDES_GLOBAL 136
RWLERROR("%s %s '%s' hides public %s declared at [%s;%d]", RWL_ERROR_WARNING)
RWLEDESC(
"A local or private variable is given the same name as an already existing\n"
"public variable. The public variable will not be accessible")

#define RWL_ERROR_COMMA_IS_RECOMMENDED 137
RWLERROR("a comma is recommended after '%s' in %s", RWL_ERROR_WARNING)
RWLEDESC("Please include the comma between the identifier and the following arguments")

#define RWL_ERROR_EXIT_INSIDE_CODE 138
RWLERROR("exit statement not available inside procedure/function", RWL_ERROR_PARSE)
RWLEDESC("The exit statement is only available directly in your main program.\n"
"If you need a procedure or function to cause an exit, you must code it such\n"
"that the wanted exit value is provided to your main program, where an exit\n"
"can take place")

#define RWL_ERROR_PASSWORD_TOO_LONG 139
RWLERROR("password read from stdin is too long", RWL_ERROR_PARSE)
RWLEDESC("The password that was read was unreasonably long\n"
"(The limit is probably too short, but requires recompile")

#define RWL_ERROR_PASSWORD_TOO_SHORT 140
RWLERROR("password read from stdin is too short", RWL_ERROR_PARSE)
RWLEDESC("The password that was read was shorter than two characters\n")

#define RWL_ERROR_NOEXEC 141
RWLERROR("-e flag prevents execution", RWL_ERROR_WARNING)
RWLEDESC("When the -e flag is used, neither procedures nor sql are being executed")

#define RWL_ERROR_DECL_LOB 142
RWLERROR("incorrect lob declaration", RWL_ERROR_PARSE)
RWLEDESC("A syntax error during parse of a clob declaration")

#define RWL_ERROR_NOT_ENOUGH_ARGUMENTS 143
RWLERROR("not enough arguments to %s", RWL_ERROR_NOFILE)
RWLEDESC("There are not sufficient arguments for the value of the -A or -F option")

#define RWL_ERROR_NO_DML_ARRAY_LOB 144
RWLERROR("array DML not supported for lob", RWL_ERROR_WARNING)
RWLEDESC("The use of array when dealing with clob data\n"
"is not supported by Oracle Call Interface")

#define RWL_ERROR_NOT_LOCAL 145
RWLERROR("%s cannot be declared as local variable or argument", RWL_ERROR_PARSE)
RWLEDESC("You cannot declare local variables or arguments to procedures\n"
"or functions with this data type")

#define RWL_ERROR_ATTEMPT_ZERO_WRITE 146
RWLERROR("attempted write of 0 bytes to lob at database '%s'", RWL_ERROR_WARNING)
RWLEDESC("You cannot write 0 bytes to a lob. This is a bug in rwloadsim\n"
"that should do a truncate of the lob in this case")

#define RWL_ERROR_LOB_NOT_FILLED 147
RWLERROR("lob has not been read from database", RWL_ERROR_RUNTIME)
RWLEDESC("You can only use a lob locator that has been read from the database.\n"
"This can be doing using a query or a returning into")

#define RWL_ERROR_ILLEGAL_UNIFORM_RANGE 148
RWLERROR("attempted uniform() with invalid range", RWL_ERROR_RUNTIME)
RWLEDESC("The lower end of the range is larger than the higher end of the range")

#define RWL_ERROR_HACK_ALLOWED 149
RWLERROR("you have enabled unsupported experimental features", RWL_ERROR_WARNING)
RWLEDESC("You are on your own! This may be reasonable\n"
"if you understand the source code")

#define RWL_ERROR_ONLY_DIRECTIVE_IN_DOT 150
RWLERROR("only directives allowed in startup file", RWL_ERROR_WARNING)
RWLEDESC("The startup file such as ~/.rwloadsim.rwl may only contain directives")

#define RWL_ERROR_ONLY_IN_RC 151
RWLERROR("directive '%s' is only available in startup file", RWL_ERROR_WARNING)
RWLEDESC("The directive can only be used in a startup file such as ~/.rwloadsim.rwl")

#define RWL_ERROR_NO_LOCAL_SUMGLOB 152
RWLERROR("threads sum/global cannot be used with local variables or arguments", RWL_ERROR_PARSE)
RWLEDESC("The threads sum/global attribute is only valid for private or public variables")

#define RWL_ERROR_KK_NOT_USEFUL 153
RWLERROR("key and komment options are ignored in multiprocess run", RWL_ERROR_NOFILE|RWL_ERROR_WARNING)
RWLEDESC("To provide key or komment in a multiprocess run, do so in\n"
"the prepare run where the -P option is used")

#define RWL_ERROR_DBPOOL_ALREADY 154
RWLERROR("connection type already specified", RWL_ERROR_PARSE)
RWLEDESC("The type of the database connection can only be provided once")

#define RWL_ERROR_CCLASS_NOT_USEFUL 155
RWLERROR("connectionclass is only relevant with sessionpool and drcp", RWL_ERROR_WARNING)
RWLEDESC("Do not provide a connection class for this database")

#define RWL_ERROR_CCLASS_TOO_LATE 156
RWLERROR("modify database connectionclass attempted after session is in use"
, RWL_ERROR_RUNTIME|RWL_ERROR_WARNING)
RWLEDESC(
"As sessions are implicitly acquired at the start of a procedure, request\n"
"for a specific connection class must take place before calling the\n"
"procedure that acquires the session")

#define RWL_ERROR_CLASS_BADLEN 157
RWLERROR("connectionclass length (%d) is zero or longer than 128 bytes", RWL_ERROR_RUNTIME)
RWLEDESC("The maximum length of a connection class in rwloadsim is 128 bytes")

#define RWL_ERROR_CLASS_BADCHAR 158
RWLERROR("bad character '%c' in connectionclass", RWL_ERROR_RUNTIME)
RWLEDESC("Your connection class must have a name that does not include this character")

#define RWL_ERROR_INVALID_ESCAPE 159
RWLERROR("scan error at position %d: invalid escape '\\%c' in string constant", RWL_ERROR_WARNING)
RWLEDESC("The valid escapes in a string constant are \\\\ \\\" \\t \\n \\e \\r or\n"
"a \\ prefixing a newline causing the newline to be excluded from the string")

#define RWL_ERROR_NO_NEST_LOOP 160
RWLERROR("control loops cannot be nested", RWL_ERROR_PARSE)
RWLEDESC("An attempt at parsing a control loop while another control loop\n"
"is being parsed")

#define RWL_ERROR_CBLOCK_DETECTED 161
RWLERROR("control loop recursion detected - unsafe to continue", RWL_ERROR_RUNTIME)
RWLEDESC("An attempt at starting a control loop recursively while another\n"
"control loop is being executed")

#define RWL_ERROR_COUNTER_LOOP_NOT_INT 162
RWLERROR("the variable '%s' in a counter loop should be integer, not %s", RWL_ERROR_WARNING)
RWLEDESC("In a counter loop using .. the variable named after the for keyword should\n"
"be of type integer, as the variable is incremented by the integer value 1 in\n"
"each iteration")

#define RWL_ERROR_SHIFT_EMPTY 163
RWLERROR("no more positional arguments", RWL_ERROR_RUNTIME)
RWLEDESC("A shift statement was attempted after all posistional arguments have been\n"
"shifted and $# is zero")

#define RWL_ERROR_DOT_OVERWRITES_COMMAND 164
RWLERROR("%s specified in both startup file and command line; largest value (%d) chosen", RWL_ERROR_WARNING)
RWLEDESC("A parameter is provided both at the command line and in a startup\n"
"file such as ~/.rwloadsim.rwl")

#define RWL_ERROR_KOMMENT_TOO_LONG 165
RWLERROR("komment of length %d is truncated to %d", RWL_ERROR_NOFILE |RWL_ERROR_WARNING)
RWLEDESC("Comments are limited in length to the size of the varchar2 column 'komment'\n"
"in the rwlrun repository table")

#define RWL_ERROR_FIL_IN_PUBLIC 166
RWLERROR("file '%s' used in stead of '%s'", RWL_ERROR_RUNTIME|RWL_ERROR_WARNING)
RWLEDESC("The file you are opening using a $include directive was found\n"
"in the public directory and has been read from there.\n"
"You should not give your own include files the same name\n"
"as those found in the public directory")

#define RWL_ERROR_RAPROC_DIF_ARGCOUNT 167
RWLERROR("random procedure '%s' has different argument count for '%s' and '%s'", RWL_ERROR_PARSE)
RWLEDESC("All procedures named in a random procedure must have the\n"
"same number and types of arguments")

#define RWL_ERROR_RAPROC_DIF_ARGTYPE 168
RWLERROR("random procedure '%s' has different argument type for argument %d of '%s' and '%s'"
, RWL_ERROR_PARSE)
RWLEDESC("All procedures named in a random procedure must have the\n"
"same number and types of arguments")

#define RWL_ERROR_STRING_TOO_LONG 169
RWLERROR("maximum string length is %d", RWL_ERROR_PARSE)
RWLEDESC("You have attempted using a string constant with a line longer than allowed")

#define RWL_ERROR_MISSING_DECL_BRACK 170
RWLERROR("omitting () for procedure or function without arguments is deprecated", RWL_ERROR_WARNING)
RWLEDESC("Procedures or functions that take no arguments must include an\n"
"empty set of brackets. This will be enforced in a future release")

#define RWL_ERROR_RETURN_OUTSIDE_CODE 171
RWLERROR("return statement not available outside procedure/function", RWL_ERROR_PARSE)
RWLEDESC("You cannot use the return statement directly in main.\n"
"The exit statement is a possible alternative")

#define RWL_ERROR_CANNOT_THREAD 172
RWLERROR("cannot create thread", RWL_ERROR_RUNTIME)
RWLEDESC("This error is returned when OCIThreadCreate returns an OCI_NO_DATA error.\n"
"There is no O/S error associated with this, but the typical cause is that\n"
"the user is unable to start a new thread due to a too low value for ulimit -u")

#define RWL_ERROR_LOCAL_HIDES 173
RWLERROR("local %s '%s' hides %s %s declared at [%s;%d]", RWL_ERROR_WARNING)
RWLEDESC(
"A local variable is given the same name as an already existing private\n"
"or public variable. The private/public variable will not be accessible")

#define RWL_ERROR_CANNOTOPEN_FILEREAD 174
RWLERROR("cannot open '%s' for reading, O/S error: %s", RWL_ERROR_PARSE)
RWLEDESC("The file named that should contain the text of a sql statement\n"
"cannot be opened. The O/S error has details")

#define RWL_ERROR_CANNOTREAD_FILE 175
RWLERROR("cannot read from '%s', O/S error: %s", RWL_ERROR_PARSE)
RWLEDESC("The file named that should contain the text of a sql statement\n"
"cannot be read. The O/S error has details")

#define RWL_ERROR_MISSING_X_ARG 176
RWLERROR("-x option %d has no argument (missing shell quotes?)", RWL_ERROR_PARSE| RWL_ERROR_NOFILE)
RWLEDESC("The -x option to rwloadsim takes one argument that must be a\n"
"rwl program element including the terminating semicolon")

#define RWL_ERROR_OCI_LINE_POS_IN_FILE 177
RWLERROR("previous error was at [%s;%d] position %d:\n%.*s\n%*s", RWL_ERROR_RUNTIME)
RWLEDESC("The Oracle error shown was located at a specific line and position\n"
"in the sql statement read from a file. The actual line an position will\n"
"be marked with an asterisk")

#define RWL_ERROR_BOTH_F_AND_A_FLAG 178
RWLERROR("-F flag overwrites -A", RWL_ERROR_NOFILE|RWL_ERROR_WARNING)
RWLEDESC("You cannot provide both the number of input files as the -F option\n"
"and the number of user arguments as the -A option")

#define RWL_ERROR_ONLY_THIS_AFTER_END2 179
RWLERROR("only %s or '%s' allowed after this end", RWL_ERROR_PARSE)
RWLEDESC("During parse of some declaration, the keyword 'end' was\n"
"followed by an unexpected identifier or keyword")

#define RWL_ERROR_UNEXPECTED_EVENT 180
RWLERROR("event %d is unexpected", RWL_ERROR_WARNING)
RWLEDESC(
"During execution of the event handler for OCIEvents, an unexpected\n"
"event was returned. You should report the value such that the\n"
"rwloadsim code can be fixed to deal with it")

#define RWL_ERROR_EVENT_RECOGNIZED 181
RWLERROR("event source:%s hst:%s svc:%s db:%s inst:%s ev:%s at:%.2f"
, RWL_ERROR_INFORMATION | RWL_ERROR_NOFILE)
RWLEDESC(
"Oracle Call Interface was setup to handle events, and the event handler\n"
"was called. The entries in the error text contain the following\n"
"information (if available):\n"
"* source: The source of the event such has database, node, instance\n"
"* hst:    The name of the host that triggered the event\n"
"* svc:    The name of the database service\n"
"* db:     The name of the database\n"
"* inst:   The instance name\n"
"* ev:     Either of 'up' or 'down'\n"
"* at:     The timestamp in seconds since the common start time")

#define RWL_ERROR_CANNOTOPEN_FILEWRITE 182
RWLERROR("cannot open '%s' for writing, O/S error: %s", RWL_ERROR_PARSE | RWL_ERROR_NOFILE)
RWLEDESC("Rwloadsim was unable to open a file for writing; the O/S error has details\n"
"The error is used in several places such as when creating the multiprocess\n"
"file given as the -P option")

#define RWL_ERROR_DATABASE_DEAD 183
RWLERROR("database '%s' has terminated unexpectedly due to ORA-%05d; reconnect will be attempted"
, RWL_ERROR_WARNING)
RWLEDESC(
"The error returned is assumed to be a recoverable error causing a session\n"
"to fail. Due to the nature of the error, an attempt at re-creating the\n"
"session will be done")

#define RWL_ERROR_UNEXPECTED_KEYWORD 184
RWLERROR("expected keyword '%s' was not found", RWL_ERROR_PARSE)
RWLEDESC("During parsing another keyword than the expected was found")

// see RWL_ERROR_CONTROL_C_HANDLED
#define RWL_ERROR_CONTROL_C_MAX 185 
RWLERROR("RWL-185: several user requested termination received - using SIGTERM\n"
, RWL_ERROR_RUNTIME|RWL_ERROR_RWLDASH)
RWLEDESC("You have been hitting ctrl-c a number of times and rwloadsim\n"
"terminates using SIGTERM")

#define RWL_ERROR_NOT_USED_IN_C_186 186
RWLERROR("cannot find executable in PATH", RWL_ERROR_PARSE)
RWLEDESC("Your PATH environment variable does not include the expected rwloadsimNN\n"
"executable built for the client identified via LD_LIBRARY_PATH")

#define RWL_ERROR_NOT_USED_IN_C_187 187
RWLERROR("LD_LIBRARY_PATH environment must be set", RWL_ERROR_PARSE)
RWLEDESC("The LD_LIBRARY_PATH environment is not set.\n"
"It should include the library with liblcntsh.so")

#define RWL_ERROR_NOT_USED_IN_C_188 188
RWLERROR("cannot find libclntsh", RWL_ERROR_PARSE)
RWLEDESC("The LD_LIBRARY_PATH environment is not set properly.\n"
"It should include the library with liblcntsh.so")

#define RWL_ERROR_DATABASE_DEAD_MAYBR 189
RWLERROR("database '%s' has terminated unexpectedly due to ORA-%05d; reconnect may be attempted"
, RWL_ERROR_RUNTIME)
RWLEDESC("The error returned is assumed to be a recoverable error causing\n"
"a database failure. In some circumstances, an attempt at reconnecting\n"
"the database will be done")

#define RWL_ERROR_ONLY_POOL_MIN_SET 190
RWLERROR("missing max poolsize for default database, using dedicated", RWL_ERROR_WARNING|RWL_ERROR_NOFILE)
RWLEDESC("When using the -l option to create a default database, you cannot use the\n"
"-Y option without the -X option")

#define RWL_ERROR_WARN_DEAD_DATABASE 191
RWLERROR("attempted %s of terminated database", RWL_ERROR_WARNING|RWL_ERROR_RUNTIME)
RWLEDESC("The database you are using has terminated due to an error")

#define RWL_ERROR_WARN_NO_DATABASE 192
RWLERROR("attempted %s without database", RWL_ERROR_WARNING|RWL_ERROR_RUNTIME)
RWLEDESC("You can only use this statement with an explicitly named database, or in some\n"
"cases a default database")

#define RWL_ERROR_NO_FILE_FOR_WRITE 193
RWLERROR("missing file name for writing", RWL_ERROR_PARSE)
RWLEDESC("A syntax error during parse of a write, writeline or fprintf statement")

#define RWL_ERROR_FLUSH_STOP_LOW 194
RWLERROR("flush-stop must be at least %d - no statistics flush done", RWL_ERROR_WARNING)
RWLEDESC("The period used for automatic flush of per second statistics is too short\n"
"and statistics flushing has been turned off")

#define RWL_ERROR_FLUSH_EVERY_LOW 195
RWLERROR("flush-every must be at least %d - value changed", RWL_ERROR_WARNING)
RWLEDESC("The period between flushes of per second statistics must be at least 1s")

#define RWL_ERROR_RESULTSDB_MUST_SESS 196
RWLERROR("results database must be using a session pool for statistics flushing - flush turned off"
, RWL_ERROR_WARNING)
RWLEDESC("When period flushing of per second statistics is in use, the\n"
"results database must be using a session pool")

#define RWL_ERROR_NO_FILE_FOR_FFLUSH 197
RWLERROR("missing file name for fflush", RWL_ERROR_PARSE)
RWLEDESC("A syntax error during parse of an fflush statement")

#define RWL_ERROR_CURRENTLY_AS 198
RWLERROR("%s is currently implemented as %s", RWL_ERROR_WARNING)
RWLEDESC(
"You are calling a function that currently is implemented as a more\n"
"simple function. As an example, this is used when string functions\n"
"handle strings a sequence bytes")

#define RWL_ERROR_ERLANGK_SMALL 199
RWLERROR("first argument to erlangk(%d) must be at least 1", RWL_ERROR_RUNTIME)
RWLEDESC("The minimum allowed value for k in erlangk is 1")

#define RWL_ERROR_ERLANGK_HIGH 200
RWLERROR("first argument to erlangk(%d) is unreasonably high", RWL_ERROR_RUNTIME)
RWLEDESC("The maximum allowed value for k in erlangk is 20")

#define RWL_ERROR_BAD_DEFINE_ARRAY 201
RWLERROR("define array requires explicit defines", RWL_ERROR_PARSE)
RWLEDESC("You have asked for a define array, but no explicit defines are found")

#define RWL_ERROR_DEFINE_ARRAY_WRONG_TYPE 202
RWLERROR("variable '%s' has wrong type for define array", RWL_ERROR_PARSE)
RWLEDESC("Use can only use define arrays with variables of type integer, double or string")

#define RWL_ERROR_DEFINE_ARRAY_IS_FIXED 203
RWLERROR("the size of define array cannot by modified", RWL_ERROR_PARSE)
RWLEDESC("The size of a define array can only be specified at declaration time")

#define RWL_ERROR_NOT_EQUALEQUAL 204
RWLERROR("this is not C - '==' is taken as '='", RWL_ERROR_WARNING)
RWLEDESC("Although rwloadsim does have similarities with C, this is not one of them!\n"
"The equality comparison operator is '='")

#define RWL_ERROR_SQLID_NEED_IDENT 205
RWLERROR("sql_id function requires name of sql variable", RWL_ERROR_PARSE)
RWLEDESC("A syntax error during parse of the sql_id function")

#define RWL_ERROR_CLIENT_MISMATCH 206
RWLERROR("OCI compile environment (%d.%d) is different from runtime (%d.%d)"
, RWL_ERROR_WARNING | RWL_ERROR_NOFILE)
RWLEDESC("Your rwloadsim executable was compiled in a different Oracle Call Interface\n"
"version than the one being found via LD_LIBRARY_PATH during execution.\n"
"To mute the error, put $mute:206 in your .rwloadsim.rwl startup file")

#define RWL_ERROR_BAD_ENV_EXPANSION 207
RWLERROR("illegal environment expansion in file name '%s'", RWL_ERROR_RUNTIME)
RWLEDESC("During scan for environment variables in a file name fails. This\n"
"can happen if ${ } expansion does not match, if the environment variable\n"
"starts with anything but an upper case letter or is too long")

#define RWL_ERROR_ENV_NOT_FOUND 208
RWLERROR("environment variable '%s' does not exist", RWL_ERROR_WARNING)
RWLEDESC("The named environment variable does not exist. If this is\n"
"acceptable, use the getenv() function in stead")

#define RWL_ERROR_ABORT 209
RWLERROR("abort without cleanup", RWL_ERROR_RUNTIME)
RWLEDESC("You have been using the abort statement. It should only\n"
"be used when no other possibilities exist.\n"
"Consider using exit in stead")

#define RWL_ERROR_NOT_IN_IF 210
RWLERROR("'%s' cannot be used in $if ... $then directive", RWL_ERROR_PARSE)
RWLEDESC("The expression in the $if $then directive is using a feature\n"
"that is not available for conditional compilation")

#define RWL_ERROR_UNMATCHED_ELSE_OR_END 211
RWLERROR("$%s directive cannot be matched to an $if ... $then directive", RWL_ERROR_PARSE)
RWLEDESC("The $if $then $else $endif must be matched within each .rwl source file")

#define RWL_ERROR_DIRIF_NOT_FINISH 212
RWLERROR("$if ... $then directive at [%s;%d] was not matched with $endif", RWL_ERROR_PARSE)
RWLEDESC("The $if $then $else $endif directives must be\n"
"matched within each .rwl source file")

#define RWL_ERROR_TOO_MANY_OER_SAVE 213
RWLERROR("only %d ORA- errors out of %d were saved", RWL_ERROR_WARNING| RWL_ERROR_NOFILE)
RWLEDESC("A thread has returned more ORA- errors and saving has been stopped.\n"
"If this happens frequently and you need to save more errors, use\n"
"the -O option or the $oerstatistics:N directive to increase the limit")

#define RWL_ERROR_THIS_IS_NOT_C 214
RWLERROR("this is not C - '%s' cannot be used", RWL_ERROR_PARSE)
RWLEDESC("Although rwloadsim does have similarities with C, the operation you attempt\n"
"using is not available")

#define RWL_ERROR_TOO_MAY_LOCALS 215
RWLERROR("more than %d local variables in procedure - use $maxlocals:NN directive or -L option"
, RWL_ERROR_SEVERE)
RWLEDESC(
"The array for storing local variables in procedures or functions has been\n"
"exhausted. You can use either of these methods to increase the size:\n"
"* Put $longoption:localnames=N in your first .rwl file\n"
"* Provide the -L option to rwloadsim\n"
"* Use the $maxlocals:N directive before declaring the procedure or function")

#define RWL_ERROR_SYSTEM_RES_LARGE 216
RWLERROR("variable '%s' of length %d cannot hold output from system"
, RWL_ERROR_RUNTIME)
RWLEDESC("Attempt to write more bytes as output from the system function\n"
"than the declared length of the string variable")

#define RWL_ERROR_SYSTEM_BAD 217
RWLERROR("only identifier allowed as second argument to system", RWL_ERROR_PARSE)
RWLEDESC("A syntax error during parse of the system function; a\n"
"second argument must be a variable")

#define RWL_ERROR_ACCESS_WRONG2 218
RWLERROR("2nd argument to access ('%s') must consist of 'fdrwxupc'", RWL_ERROR_RUNTIME)
RWLEDESC("The second argument to the access function must contain 'f' or 'd' to\n"
"check for a file or directory and must contain a combination of 'rwx'\n"
"to check for read, write or execute permission. It may further contain\n"
"'p' to search in RWLOADSIM_PATH, 'u' to search in public directory\n"
"or 'c' to not check in the current directory")

#define RWL_ERROR_DBFUN_NEED_IDENT 219
RWLERROR("%s function requires name of database variable", RWL_ERROR_PARSE)
RWLEDESC("A syntax error during parse of the named database function.\n"
"The argument must identify a database")

#define RWL_ERROR_DEPRECATED_DOLLARIF 220
RWLERROR("use of '$if: ... ;' is deprecated, use '$if ... $then' in stead", RWL_ERROR_WARNING)
RWLEDESC("Only seen when executing test.sh as the syntax is not documented.\n"
"If you use the deprecated syntax, please change your code")

#define RWL_ERROR_DOLLARIF_NO_THEN 221
RWLERROR("$if without matching $then on same line", RWL_ERROR_PARSE)
RWLEDESC("The $if and $then directives must be on the same input line")

#define RWL_ERROR_DOLLARIF_NO_VALID_EXPRESSION 222
RWLERROR("expected valid expression in $if ... $then directive", RWL_ERROR_PARSE)
RWLEDESC("A syntax error during parse of the expression in an $if $then directive")

#define RWL_ERROR_BAD_ARGUMENT_TYPE 223
RWLERROR("formal argument or return value cannot be of type %s", RWL_ERROR_PARSE)
RWLEDESC("The formal argument of a procedure or function, and the return\n"
"if a function must be one of integer, double or string")

#define RWL_ERROR_NOT_SUPPORTED_IN_VERSION 224
RWLERROR("%s is not available in database version %d", RWL_ERROR_PARSE)
RWLEDESC("You are using a feature that requires a higher Oracle Client\n"
"release than the one you have")

#define RWL_ERROR_SQLTEXT_ALREADY 225
RWLERROR("sql text has already been provided for '%s'", RWL_ERROR_RUNTIME)
RWLEDESC("The sql text for a dynamic sql statement must be provided exactly once.\n"
"If you need to provide a new sql text, you must first do 'modify sql release'")

#define RWL_ERROR_DEFINE_ARRAY_NOT_DYNAMIC 226
RWLERROR("define array cannot by used by dynamic sql", RWL_ERROR_PARSE)
RWLEDESC("Dynamic sql statement can only use the implicit fetch array in\n"
"Oracle Call Interface and not a define array")

#define RWL_ERROR_CANNOT_MODIFY_NOW 227
RWLERROR("cannot execute modify sql %s - '%s' in use", RWL_ERROR_RUNTIME)
RWLEDESC("You cannot modify a dynamic sql that is currently being used\n"
"in a cursor loop")

#define RWL_ERROR_NO_BIND_RAW_ARRAY 228
RWLERROR("array bind cannot be used with experimental raw", RWL_ERROR_PARSE)
RWLEDESC("The experimental use of raw does not currently work with array bind, which\n"
"prevents array dml. You could write the code and submit a pull request")

#define RWL_ERROR_NO_DEV_TTY 229
RWLERROR("cannot open /dev/tty", RWL_ERROR_PARSE)
RWLEDESC("When prompting the user for a password, rwloadsim was unable to open /dev/tty")

#define RWL_ERROR_BAD_READLINE 230
RWLERROR("incorrect readline", RWL_ERROR_PARSE)
RWLEDESC("A syntax error during parse of a readline statement")

#define RWL_ERROR_READBUFFER_TOO_SHORT 231
RWLERROR("readbuffer of size %d too short to read a line from %s", RWL_ERROR_RUNTIME)
RWLEDESC(
"When reading a line from a file, the line was longer than the buffer\n"
"size. You can use either of these methods to increase the buffer:\n"
"* Put $longoption:readbuffer=N in your first .rwl file\n"
"* Provide the -B option to rwloadsim\n"
"* Use the $readbuffer:N directive in your startup file such as ~/.rwloadsim.rwl")

#define RWL_ERROR_INSTRB3_POS_NEG 232
RWLERROR("reverse searching in instrb2 is not yet implemented", RWL_ERROR_RUNTIME|RWL_ERROR_WARNING)
RWLEDESC("The instrb2 function does not currently support reverse searching")

#define RWL_ERROR_MIX_LEGACY_CLOOP 233
RWLERROR("mixing current and deprecated syntax for control loop", RWL_ERROR_WARNING)
RWLEDESC("You have somehow found the now deprecated syntax for control loops, and\n"
"have mixed that with the documented syntax. Note that the previous syntax\n"
"will be desupported in some future release")

#define RWL_ERROR_CANNOT_CLOSE_MAIN 234
RWLERROR("file %s opened in main cannot be closed in thread", RWL_ERROR_RUNTIME)
RWLEDESC(
"Files that are opened in the main thread must also be closed in the\n"
"main thread. Note that files opened for read in the main thread\n"
"including stdin) will be automatically closed in threads")

#define RWL_ERROR_NOT_DONE_IN_MAIN 235
RWLERROR("%s cannot be done in main; wrap with execute block", RWL_ERROR_WARNING)
RWLEDESC("The operation you attempted cannot be done directly in main. You need\n"
"need to wrap it with execute/end. Operations on LOB can be done directly\n"
"in main, if you have a default database declare dedicated")

#define RWL_ERROR_ARGUMENT_NOT_FIRST 236
RWLERROR("option and userhelp directives only available in first file", RWL_ERROR_PARSE)
RWLEDESC("All of the directives $useroption, $userswitch, $longoption, $userhelp can\n"
"only be used in the first .rwl file named on the command line")

#define RWL_ERROR_ARGUMENT_IS_ORDINARY 237
RWLERROR("user argument %s is an ordinary argument", RWL_ERROR_PARSE)
RWLEDESC("An attempt was made at using $useroption or $userswitch with an option\n"
"name that already exists as an ordinary option")

#define RWL_ERROR_ARGUMENT_ALREADY 238
RWLERROR("user argument %s is already defined", RWL_ERROR_PARSE)
RWLEDESC("You have already used $useroption or $userswitch with the same name")

#define RWL_ERROR_ARGUMENT_LOCAL 239
RWLERROR("user argument %s cannot be used locally", RWL_ERROR_PARSE)
RWLEDESC("You can only use $useroption or $userswitch with variables declared\n"
"as private or public")

#define RWL_ERROR_ARGUMENT_NOT_USED 240
RWLERROR("user argument %s has not been used", RWL_ERROR_WARNING|RWL_ERROR_NOFILE)
RWLEDESC("You have provide a $useroption or $userswitch that does\n"
"not have a variable associated with it")

#define RWL_ERROR_ENV_EXP_TOO_LARGE 241
RWLERROR("environment expansion in file name '%s' is larger than %d", RWL_ERROR_RUNTIME)
RWLEDESC("After expansion of one or more environment variables, the\n"
"resulting file name is unreasonably long")

#define RWL_ERROR_EXPANSION_TRUNCATED 242
RWLERROR("expansion of %s/%s would not fit in %d bytes", RWL_ERROR_RUNTIME|RWL_ERROR_WARNING)
RWLEDESC("After expansion of one or more environment variables, the\n"
"resulting file name is unreasonably long")

#define RWL_ERROR_CONNECT_DO_NOT_CURSORCACHE 243
RWLERROR("cursorcache has no effect in a connection pool", RWL_ERROR_WARNING)
RWLEDESC("As connection pools do not have a session associated with them, they cannot\n"
"be used to execute any sql. As a consequence, cursorcache has no effect")

#define RWL_ERROR_MUST_BE_CPOOL 244
RWLERROR("'%s' is not a database of type connection pool", RWL_ERROR_PARSE)
RWLEDESC("When using the 'connect connectionpool' option during a database declaration,\n"
"the database named by the option must be declared as a connectionpool")

#define RWL_ERROR_CPOOL_NOT_GOOD 245
RWLERROR("the %s database cannot be a connection pool", RWL_ERROR_PARSE)
RWLEDESC("You cannot use a connection pool for this database")

#define RWL_ERROR_CANNOT_CPOOL 246
RWLERROR("database '%s' cannot connect using a connection pool", RWL_ERROR_PARSE)
RWLEDESC("Only (threads) dedicated databases can connect using a connection pool")

#define RWL_ERROR_CONNECT_ALREADY 247
RWLERROR("connect string or pool already provided for database '%s'", RWL_ERROR_PARSE)
RWLEDESC("A database declaration can have at most one specification for\n"
"connect string or connection pool")

#define RWL_ERROR_CPOOL_NO_SESSION 248
RWLERROR("the connection pool database '%s' cannot be used to execute sql", RWL_ERROR_PARSE)
RWLEDESC("As connection pools do not have a session associated with them, they cannot\n"
"be used to execute any sql")

#define RWL_ERROR_DB_NOT_SESSIONPOOL 249
RWLERROR("the database '%s' is not of type sessionpool", RWL_ERROR_RUNTIME)
RWLEDESC("You are attempting to modify session pool parameters, but the database is not\n"
"declared as a sessionpool database")

#define RWL_ERROR_UNREASONABLE_PARAMETER 250
RWLERROR("the value (%d) for %s is unreasonable; %d will be used", RWL_ERROR_WARNING|RWL_ERROR_RUNTIME)
RWLEDESC(
"The value for some parameter is outside the allowed range and it has\n"
"been adjusted to the new value shown. You should correct your program\n"
"such that a proper value is used")

#define RWL_ERROR_OPTIONS_NOT_EXCLUDED 251
RWLERROR("the %s directive cannot be excluded using $if/$then/$else", RWL_ERROR_WARNING)
RWLEDESC(
"The scan for option directives that is performed in the first rwl file cannot\n"
"be excluded using $if/$then/$else/$endif directives, and they will therefore\n"
"always be used")

#define RWL_ERROR_BREAK_IN_MAIN 252
RWLERROR("break cannot be done in main", RWL_ERROR_PARSE)
RWLEDESC("You cannot use the break statement directly in main.\n"
"The exit statement is a possible alternative")

#define RWL_ERROR_BREAK_NOT_POSSIBLE 253
RWLERROR("break outside loop or execute block", RWL_ERROR_PARSE)
RWLEDESC("The break statement can only be used inside loop or execute block")

#define RWL_PORT_IS_BETA 254
RWLERROR("rwloadsim port on %s is a beta release", RWL_ERROR_WARNING|RWL_ERROR_NOFILE )
RWLEDESC("You are running rwloadsim on a platform that has not been thoroughly tested.\n"
"If you complete full testing, please report using github")

#define RWL_ERROR_DB_RETRY_COUNTDOWN 255
RWLERROR("connection failure for database %s - %d retry attempts", RWL_ERROR_WARNING )
RWLEDESC("A connection attempt failed due to a temporary error, and a retry will be\n"
"attempted as specified by the $dbfailures directive")

#define RWL_ERROR_NO_MORE_DB_TRIES 256
RWLERROR("no more connection retries for database %s", RWL_ERROR_PARSE )
RWLEDESC("The number of failures set via the $dbfailures directive has been exhausted.\n"
"Investigate your environment and potentially set a higher value in $dbfailures")

#define RWL_ERROR_NO_DIRECTIVE_DOLLARIF 257
RWLERROR("you cannot use directives inside a $if ... $then directive", RWL_ERROR_PARSE )
RWLEDESC("Between $if and $then, only expressions are allowed. If you need nested\n"
"$if $then, each $if ... $then directive must be on a separate line")

#define RWL_ERROR_LEGACY_WHILE_SYNTAX 258
RWLERROR("the 'execute' keyword is deprecated for while loops", RWL_ERROR_WARNING)
RWLEDESC("You have somehow found the now deprecated syntax for while loops;\n"
"replace 'execute' with 'loop'. Note that the previous syntax will\n"
"be desupported in some future release")

#define RWL_ERROR_IMPLICIT_ALREADY 259
RWLERROR("implicit %s has already been provided", RWL_ERROR_WARNING)
RWLEDESC("The implicit bind or define should only be provided once;\n"
"in each sql declaration")

#define RWL_ERROR_IMPLICIT_NOT_BINDOUT 260
RWLERROR("bindout must be explicit", RWL_ERROR_PARSE)
RWLEDESC("To use bindout as an implicit bind, the syntax :variable\n"
"is needed in the bindout specification")

#define RWL_ERROR_DEFINE_ARRAY_NOT_IMPLICIT 261
RWLERROR("array define cannot be used with implicit defines", RWL_ERROR_PARSE)
RWLEDESC("The implicit define can only be used with pre-fetch\n"
"and not with array defines")

#define RWL_ERROR_DEFINE_NO_COLS 262
RWLERROR("no columns returned from sql '%s'", RWL_ERROR_RUNTIME)
RWLEDESC("While doing implicit define for the named SQL statement,\n"
"OCI_ATTR_PARAM_COUNT was returned as 0. Your SQL must\n"
"be a query")

#define RWL_ERROR_ALIAS_NEEDED 263
RWLERROR("the select list element '%s' in '%s' must have an alias", RWL_ERROR_RUNTIME)
RWLEDESC("While doing implicit define for the named SQL statement, a\n"
"select list element cannot be used as the name of a variable\n"
"and it needs to have an alias")

#define RWL_ERROR_BIND_BAD_NAME 264
RWLERROR("implicit bind requires valid bind name in stead of ':%.*s' in '%s'", RWL_ERROR_RUNTIME)
RWLEDESC("While doing implicit bind for the named SQL statement, a\n"
"placeholder that is not a valid variable was found.\n"
"One such example is using numbered placeholders")

#define RWL_ERROR_BIND_NAME_NOVAR 265
RWLERROR("no variable declared to match name ':%.*s' in '%s'", RWL_ERROR_RUNTIME)
RWLEDESC("While doing implicit bind for the named SQL statement, a\n"
"placeholder does not match any declared variable. You must\n"
"change the placeholder or declare the variable")

#define RWL_ERROR_OUT_OF_PRINTF_VALUES 266
RWLERROR("not enough expressions to satisfy printf format '%s'", RWL_ERROR_RUNTIME)
RWLEDESC("While scanning the printf format, there was not enough expressions\n"
"available to satisfy the format. Verify the printf format and\n"
"provide the appropriate number of expressions")

#define RWL_ERROR_UNSUPPORTED_CONVERSION 267
RWLERROR("replacing unsupported conversion character '%c' by '%c'", RWL_ERROR_WARNING|RWL_ERROR_RUNTIME)
RWLEDESC("While scanning the printf format, an unsupported conversion character\n"
"was found and replaced by another supported character")

#define RWL_ERROR_FPRINTF_PREMATURE_END 268
RWLERROR("no conversion character found", RWL_ERROR_RUNTIME)
RWLEDESC("While scanning the printf format, end of string was reached before\n"
"an appropriate conversion character was found")

#define RWL_ERROR_FPRINTF_BADCONV 269
RWLERROR("found '%c' in stead of a valid conversion character", RWL_ERROR_RUNTIME)
RWLEDESC("While scanning the printf format, some other character than a valid conversion\n"
"character was found. Supported characters include 'i', 'f', 'e', 's'")

#define RWL_ERROR_FPRINTF_BADCONV_NONASCII 270
RWLERROR("found 0x%x in stead of a valid conversion character", RWL_ERROR_RUNTIME)
RWLEDESC("While scanning the printf format, some non ascii character\n"
"was found. Supported characters include 'i', 'f', 'e', 's'")

#define RWL_ERROR_FPRINTF_TOO_FEW_CONV 271
RWLERROR("the number of output elements in '%s' is insufficient for the number of expressions", RWL_ERROR_RUNTIME)
RWLEDESC("Each expression provided as an argument to printf must have a corresponding\n"
"output format elements in the format string")

#define RWL_ERROR_NO_STRING_FOR_SPRINTF 272
RWLERROR("missing string name for sprintf", RWL_ERROR_PARSE)
RWLEDESC("A syntax error during parse of sprintf statement")

#define RWL_ERROR_FUTURE_SQL_KEYWORD 273
RWLERROR("the identifier '%s' will be taken as a SQL keyword in a future version", RWL_ERROR_WARNING)
RWLEDESC("You are using an identifier that in a future version of rwloadsim will be\n"
"used as a keyword starting a SQL statement. You should change your code to\n"
"use a different identifier")

#define RWL_ERROR_ARRAY_EXECUTE_NOT_AB 274
RWLERROR("sql '%s' cannot be flushed using array execute", RWL_ERROR_RUNTIME)
RWLEDESC("You have attempted using the modify sql array execute statement with\n"
"a sql statement that is not using array bind for a dml operation")

#define RWL_ERROR_WARN_COMPILETIME_SQLTEXT 275
RWLERROR("the text of sql '%s' is generated at compile time", RWL_ERROR_WARNING)
RWLEDESC("The sql statement text does not depend on any calculations done inside a\n"
"procedure or anonymous execution block such as a loop. This is a legacy\n"
"from the original rwloadsim design, and you are suggested one of these\n"
"alternatives:\n"
"1. Use dynamic sql and provide the text using 'modify sql for'\n"
"2. Embed your sql text directly rather than as a concatenation.\n"
"3. Use the 'sql execute' syntax if a named sql is not needed")

#define RWL_ERROR_IMM_AND_DYN_NO_ARRAY 276
RWLERROR("cannot set the array for immediate sql with dynamic sql text", RWL_ERROR_PARSE)
RWLEDESC("The sql statement text for this sql is dynamically set which means it could\n"
"change for every execute and therefore cannot use an array. This is only\n"
"relevant for dml, and if you expect to execute a query, you can do so in a\n"
"cursor loop without this restriction")

#define RWL_ERROR_BAD_PLSQL_SCAN 277
RWLERROR("unfinished scan for pl/sql", RWL_ERROR_PARSE)
RWLEDESC("During scan for pl/sql text, a terminator was not found.\n"
"PL/SQL is terminated by a line with potential white space followed by a\n"
"single '.' or '/' at the end of the line")

#define RWL_ERROR_RWLY_SYNTAX 278
RWLERROR("parse error at position %d: %s", RWL_ERROR_PARSE)
RWLEDESC("A syntax error was found during parsing by bison at the character position\n"
"shown; the error may include the unexpected symbol and/or a list of expected\n"
"symbols to help identify the actual error. It is followed by another error\n"
"showing the rwloadsim error")

#define RWL_ERROR_INVALID_ESCAPE_NO_POS 279
RWLERROR("invalid escape '\\%c' in string constant", RWL_ERROR_WARNING)
RWLEDESC("The valid escapes in a string constant are \\\\ \\\" \\t \\n \\e \\r or\n"
"a \\ prefixing a newline causing the newline to be excluded from the string")

#define RWL_ERROR_INVALID_CHARS_NONASCII_NOPOS 280
RWLERROR("invalid input character 0x%2.2x (utf8?)", RWL_ERROR_PARSE)
RWLEDESC("An invalid character with the value shown in hex was read during scanning")

#define RWL_ERROR_INVALID_CHARS_NOPOS 281
RWLERROR("invalid input character '%s'", RWL_ERROR_PARSE)
RWLEDESC("An invalid character was read during scanning")

#define RWL_ERROR_BAD_SYS_IN_USERNAME 282
RWLERROR("the proper 'sys' token was not found in '%s'", RWL_ERROR_PARSE)
RWLEDESC("To connect using sys authentication, 'as' must be followed by one of\n"
"'sysdba', 'sysoper', 'sysasm', 'sysbackup', 'sysdg', 'syskm' sysrac'")

#define RWL_ERROR_SYS_ONLY_DEDICATED 283
RWLERROR("sys authentication only possible for dedicated database", RWL_ERROR_PARSE)
RWLEDESC("To connect using sys authentication such as sysdba, the database must be\n"
"declared as dedicated'")

#define RWL_ERROR_DBSPEC_ALREADY 284
RWLERROR("'%s' specification has already been provided", RWL_ERROR_PARSE)
RWLEDESC("Each specification should only provided once when you declare a database,\n"
"and the one shown in the error has already been provided")

#define RWL_ERROR_NOT_IN_GEN_EXEC 285
RWLERROR("'%s' cannot be used in generated executable", RWL_ERROR_MINOR)
RWLEDESC("When calling an executable with direct execution of rwl scripts,\n"
"you cannot use the feature or option shown")

#define RWL_ERROR_NOT_FOR_GEN_EXEC 286
RWLERROR("'%s' cannot be used when generating executable", RWL_ERROR_PARSE)
RWLEDESC("When generating an executable for direct execution of rwl scripts,\n"
"you cannot use the feature or option shown")

#define RWL_ERROR_CANNOT_LINK 287
RWLERROR("when generating an executable, the following command:\n%s\nreturned with status %d", RWL_ERROR_PARSE)
RWLEDESC("When generating an executable with direct execution of an rwl script, the\n"
"command to compile and link has failed")

#define RWL_ERROR_NOT_USED_IN_C_288 288
RWLERROR("libclntsh.so cannot be found", RWL_ERROR_PARSE)
RWLEDESC("ORACLE_HOME or LD_LIBRARY_PATH environment is not set properly. Either\n"
"should contain liblcntsh.so to use by gcc -L option for linking the generated\n"
"binary")

#define RWL_ERROR_GENERATED_EXECUTABLE 289
RWLERROR("the executable '%s' was generated", RWL_ERROR_INFORMATION | RWL_ERROR_NOFILE)
RWLEDESC("The --generate option was used to create an executable from rwl scripts,\n"
"and the named executable was successfully generated")

#define RWL_ERROR_GEN_SENSITIVE_KEYWORDS 290
RWLERROR("a sensitive keyword was found during scanning", RWL_ERROR_WARNING | RWL_ERROR_NOFILE)
RWLEDESC("During scan of the rwl files for generating an executable, one or more\n"
"sensitive keywords (including 'database', 'password' and others) was found. You\n"
"are recommended making sure no sensitive information is included in the\n"
"generated executable. Note that rwloadsim cannot complete verify no sensitive\n"
"information is put in the executable")

#define RWL_ERROR_PRE31_FILE_ASSIGN_WARN 291
RWLERROR("opening a file with '%s' in the file name is deprecated", RWL_ERROR_WARNING)
RWLEDESC("In version 3.1, you need to change your syntax for opening files to use\n"
"either of these assignment operators: >=, >>=, <=, >|=, <|= in stead of using\n"
"similar characters as part of the text string assigned to the file variable")

#define RWL_ERROR_CLOSE_USING_OPEN 292
RWLERROR("closing a file with an operator used for open", RWL_ERROR_WARNING)
RWLEDESC("You are using one of the operators used to open a file or pipeline to\n"
"close a file by assigning null to it. You should use the := operator")

#define RWL_ERROR_RESERVED_FOR_FUTURE2 293
RWLERROR("'%s' will be a keyword in a future release", RWL_ERROR_WARNING)
RWLEDESC("You are using an identifier that in some future release will be a keyword.\n"
"You should change your code and use a different identifier as it otherwise will\n"
"cause a syntax error in the future")

#define RWL_ERROR_CANNOT_BE_THSUM 294
RWLERROR("Variables of type %s cannot be declared threads sum", RWL_ERROR_PARSE)
RWLEDESC("The threads sum attribute can only be used with variables of type integer\n"
"or double")

#define RWL_ERROR_GLOB_ASSIGN_IN_EXP 295
RWLERROR("Assign to threads global '%s' with same variable in expression", RWL_ERROR_WARNING)
RWLEDESC("The expression being assigned to a threads global variable includes the same\n"
"variable. Each individual access to threads global variables is protected by a\n"
"mutex, and the assignment therefore has a race condition")

#define RWL_ERROR_ABORTNICE 296
RWLERROR("aborted prematurely", RWL_ERROR_WARNING|RWL_ERROR_NOFILE)
RWLEDESC("You have been using the abort statement and $abortnice is in effect. It should\n"
"only be used when no other possibilities exist.\n"
"Consider using exit in stead")

#define RWL_ERROR_GEN_EXEC_ONLY_POS 297
RWLERROR("all arguments are positional in a generated executable", RWL_ERROR_WARNING|RWL_ERROR_NOFILE)
RWLEDESC("When generating an executable for direct execution of rwl scripts, all\n"
"arguments are rwl files during generation, and are positional at execution")

#define RWL_ERROR_CQN_BAD_AT 298
RWLERROR("'%s' is not a threads dedicated database", RWL_ERROR_PARSE)
RWLEDESC("The at clause must refer to a threads dedicated database")

#define RWL_ERROR_CQN_STOP_BEFORE_START 299
RWLERROR("querynotification stop time (%.1f) before start (%.1f) or current (%.1f)", RWL_ERROR_RUNTIME)
RWLEDESC("When registering for query notification, the active time must be positive,\n"
"and therefore stop time must be after both of start time and of current time")

#define RWL_ERROR_CQN_BREAK_OUTSIDE_CALLBACK 300
RWLERROR("break querynotification can only be performed from inside callback", RWL_ERROR_RUNTIME)
RWLEDESC("The break querynotification is breaking a query notification before the stop\n"
"time expires, but the statement is executed outside of the notification\n"
"callback. The call must be executed in the 'then' clause of query notification")

#define RWL_ERROR_NORMAL_STDDEV_NOT_POSITIVE 301
RWLERROR("the stddev (%.2f) argument to normalrandom is not positive", RWL_ERROR_RUNTIME)
RWLEDESC("The second argument to the normalrandom function is the standard deviation,\n"
"which must be a positive number")

#define RWL_ERROR_STATSONLY_DOES_SQL 302
RWLERROR("the statisticsonly procedure '%s' cannot execute any SQL", RWL_ERROR_PARSE)
RWLEDESC("The statisticsonly attribute can only be used with procedures that do not\n"
"perform any sql or other database calls. You need to either remove database\n"
"activity from the procedure or remove the statisticsonly attribute")

#define RWL_ERROR_INVALID_DEBUG_OPTION 303
RWLERROR("the debug options '%s' could not be resolved", RWL_ERROR_NOFILE)
RWLEDESC("debug arguments must be a comma separated list of debug options without\n"
"spaces; each option either a hexadecimal number (potentially prefixed by\n"
"0x or 0X) or one of the text values exec, var, eval, bison, or sql\n")

#define RWL_ERROR_COMMAND_NOT_LOCAL 304
RWLERROR("%s cannot be used inside procedure or function", RWL_ERROR_PARSE)
RWLEDESC("You cannot use this command inside a procedure, function, or inside any\n"
"compound statement such as if or loop")

#define RWL_ERROR_SESPOOL_WAIT_TIMEOUT 305
RWLERROR("timeout after %.3fs waiting for a session in '%s'", RWL_ERROR_WARNING|RWL_ERROR_RUNTIME)
RWLEDESC("When waiting for a session in a session pool, no available entry was available\n"
"within the timeout of set for the pool")

#define RWL_ERROR_SQL_LOGGING 306
RWLERROR("executing sql with sql_id=%.*s:\n%s", RWL_ERROR_INFORMATION|RWL_ERROR_RUNTIME|RWL_ERROR_SQLLOGGING)
RWLEDESC("The $sqllogging: directive is used to output all SQL being executed")

#define RWL_ERROR_SQL_LOGGING_NOSQLID 307
RWLERROR("executing sql with unknown sql_id:\n%s", RWL_ERROR_INFORMATION|RWL_ERROR_RUNTIME|RWL_ERROR_SQLLOGGING)
RWLEDESC("The $sqllogging: directive is used to output all SQL being executed. The sql_id\n"
"is typically unknown if the sql had an error or if the database or client\n"
"version is not at least 12.2")

#define RWL_ERROR_SQL_LOGGING_ALREADY 308
RWLERROR("sqllogging is already in effect", RWL_ERROR_WARNING)
RWLEDESC("During handling of sqllogging from option or directive, sqllogging was already\n"
"enabled. You can turn off sqllogging via the $sqllogging:off directive")

#define RWL_ERROR_CANNOT_AMPREP_HERE 309
RWLERROR("ampersand replacement is not available for %s", RWL_ERROR_WARNING)
RWLEDESC("Ampersand replacement can only be used in sql text directly embedded in\n"
"your rwl file and the sql provided appears to have & used for replacement. You\n"
"can use dynamic sql as an alternative, unless the & actually is part of your\n"
"sql statement in which case the warning can be ignored. To prevent the check\n"
"for &, use the $ampersand:off directive")

#define RWL_ERROR_AMPREP_TOO_LONG_VAR 310
RWLERROR("the total length (%d) of ampersand replacement variables is unreasonably long", RWL_ERROR_WARNING)
RWLEDESC("To be able to fit the potential contents of all ampersand replacement\n"
"variables, a sufficiently large buffer will be allocated. This warning means\n"
"this buffer will be larger than reasonably expected. If possible, you should\n"
"use shorter replacement variables or alternatively simply mute this warning\n"
"using the $mute:310 directive")

#define RWL_ERROR_BAD_AMPREP_FOUND 311
RWLERROR("ampersand replacement is incorrectly terminated by the character '%c'", RWL_ERROR_PARSE)
RWLEDESC("In embedded sql, the ampersand character must either be followed by the\n"
"name of a string variable and a decimal point or by another & character.\n"
"&varname. will be replaced by the actual variable contents when the sql is\n"
"executed and && is used to include a single & in your sql statement")

#define RWL_ERROR_OPT_CANNOT_ARG 312 
RWLERROR("option '%s' does not take an argument", RWL_ERROR_NOFILE)
RWLEDESC(
"When scanning for options to rwloadsim, a long option name is followed by an\n"
"= sign but the option does not take an argument")

#define RWL_ERROR_OPT_NEEDS_ARG 313 
RWLERROR("option '%s' requires an argument", RWL_ERROR_NOFILE)
RWLEDESC(
"When scanning for options to rwloadsim, an option letter or long option name\n"
"requiring an argument is found, but there are no further arguments")

#define RWL_ERROR_AMBIGOUS_ARGUMENT 314 
RWLERROR("the long option '%s' is ambiguous", RWL_ERROR_NOFILE)
RWLEDESC(
"When scanning for options to rwloadsim, an abbreviated long option name is\n"
"found, but the abbreviation has multiple potential matches. You need to\n"
"include more characters to make it unique")

// When adding new errors, add them before these lines
// and make sure the #define follows a format like
// #define RWL_ERROR_whatever_reasonable_here NNN
// as otherwise ctags/cscope will not properly see this:
// #define RWL_ERROR_NNN RWL_ERROR_whatever_reaosnable_here
// which is used to "translate" from an error number
// to the actual error name/define
