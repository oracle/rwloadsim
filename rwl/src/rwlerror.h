/*
 * RWP*Load Simulator
 *
 * Copyright (c) 2020 Oracle Corportaion
 * Licensed under the Universal Permissive License v 1.0
 * as shown at https://oss.oracle.com/licenses/upl/
 *
 * Real World performance Load simulator error header
 *
 * rwlerror.h
 *
 * History
 *
 * bengsig 31-aug-2020 - Reconnect for dedicated
 * bengsig 15-may-2020 - $useroption etc
 * bengsig 15-apr-2020 - File reading
 * bengsig 30-mar-2020 - Dynamic SQL changes
 * bengsig 23-aug-2019 - getenv, comditional compilations
 * bengsig 12-jun-2019 - array define related errors
 * bengsig 24-mar-2019 - Added erlangk related errors
 * bengsig 14-feb-2019 - added errors for flush persec
 * bengsig 06-feb-2019 - added errors for ociping and missing file name
 * bengsig 10-may-2017 - creation
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
#endif

#define RWL_ERROR_NO_ERROR 0

// Note that it is important that the #defines below before
// each error text has a value 1 higher than the previous
// such that the entries in the rwlerrors[] are correct
// DO NOT leave holes!

#define RWL_ERROR_FILE_NOT_OPEN 1
RWLERROR("cannot open '%s' for reading",RWL_ERROR_NOFILE|RWL_ERROR_MINOR)

#define RWL_ERROR_ILLEGAL_ERRNO 2
RWLERROR("maximum error number exceeded", RWL_ERROR_SEVERE)

#define RWL_ERROR_PREMATUREEND 3
RWLERROR("premature end-of-file or abort", RWL_ERROR_PARSE)

#define RWL_ERROR_DECL_INT 4
RWLERROR("incorrect integer declaration", RWL_ERROR_PARSE|RWL_ERROR_MINOR)

#define RWL_ERROR_DECL_DBL 5
RWLERROR("incorrect double declaration", RWL_ERROR_PARSE|RWL_ERROR_MINOR)

#define RWL_ERROR_DECL_STR 6
RWLERROR("incorrect string declaration", RWL_ERROR_PARSE|RWL_ERROR_MINOR)

#define RWL_ERROR_UNEXPECTED_IDENTIFIER 7
RWLERROR("expected valid input in stead of '%s'", RWL_ERROR_PARSE|RWL_ERROR_MINOR)

#define RWL_ERROR_NO_VALID_EXPRESSION 8
RWLERROR("expected valid expression", RWL_ERROR_PARSE|RWL_ERROR_MINOR)

#define RWL_UNNEEDED_SEMICOLON 9
RWLERROR("superfluous ';'", RWL_ERROR_WARNING)

#define RWL_MODIFY_SQL_ARRAY_BAD 10
RWLERROR("modify sql '%s' array %d should be positive", RWL_ERROR_WARNING)

#define RWL_ERROR_MISSING_SEMICOLON 11
RWLERROR("unexpected keyword or identifier (missing ';')", RWL_ERROR_PARSE)

#define RWL_CANNOT_USE_LOCAL 12
RWLERROR("local variable '%s' cannot be used here", RWL_ERROR_PARSE)

#define RWL_ERROR_BIND 13
RWLERROR("invalid bind", RWL_ERROR_PARSE)

#define RWL_ERROR_DEFINE 14
RWLERROR("invalid define", RWL_ERROR_PARSE)

#define RWL_ERROR_ARRAY 15
RWLERROR("invalid array", RWL_ERROR_PARSE)

#define RWL_ERROR_INCORRECT_TYPE 16
RWLERROR("cannot use '%s' for %s", RWL_ERROR_PARSE)

#define RWL_ERROR_VAR_NOT_FOUND 17
RWLERROR("'%s' has not been declared", RWL_ERROR_PARSE)

#define RWL_ERROR_LOOP 18
RWLERROR("incorrect loop", RWL_ERROR_PARSE)

#define RWL_ERROR_DATABASE_WRONG 19
RWLERROR("invalid database declaration", RWL_ERROR_PARSE)

#define RWL_ERROR_ALREADY_VARIABLE 20
RWLERROR("identifier '%s' already declared as %s at [%s;%d]", RWL_ERROR_PARSE)

#define RWL_ERROR_TOO_SHORT_STRING 21
RWLERROR("variable '%s' of length %d cannot hold %d bytes", RWL_ERROR_RUNTIME)

#define RWL_ERROR_ZERO_DIVIDE 22
RWLERROR("attempted division by zero", RWL_ERROR_RUNTIME)

#define RWL_ERROR_CANNOT_CREATE_TEMPFILE 23
RWLERROR("cannot create temporary file", RWL_ERROR_PARSE|RWL_ERROR_NOFILE|RWL_ERROR_SEVERE)

#define RWL_ERROR_BAD_DIRECTIVE 24
RWLERROR("incorrect directive '%s'", RWL_ERROR_MINOR)

#define RWL_ERROR_ERRORS_FOUND 25
RWLERROR("cannot execute '%s' due to previous errors", RWL_ERROR_RUNTIME)

#define RWL_ERROR_INVALID_CHARS_NONASCII 26
RWLERROR("invalid input character: 0x%2.2x (utf8?)", RWL_ERROR_PARSE)

#define RWL_ERROR_INVALID_CHARS 27
RWLERROR("invalid input character: '%s'", RWL_ERROR_PARSE)

#define RWL_ERROR_NEGATIVE_WEIGHT 28
RWLERROR("weight %.2f for '%s' must be zero or positive", RWL_ERROR_PARSE)

#define RWL_ERROR_SQL_ARRAY_AND_IGNERR 29
RWLERROR("ignoring error with array based sql is not supported", RWL_ERROR_WARNING)

#define RWL_ERROR_WEIGHTSUM_ZERO 30
RWLERROR("all entries in '%s' are zero", RWL_ERROR_PARSE)

#define RWL_ERROR_NO_STDIN 31
RWLERROR("reading from stdin not supported", RWL_ERROR_MINOR|RWL_ERROR_NOFILE)

#define RWL_ERROR_SQLARRAY_SET 32
RWLERROR("array size has already been set", RWL_ERROR_MINOR)

#define RWL_ERROR_SQLARRAY_NOTGOOD 33
RWLERROR("array size must be positive", RWL_ERROR_PARSE)

#define RWL_ERROR_DB_NOUSER 34
RWLERROR("username must be specified for database", RWL_ERROR_PARSE)

#define RWL_ERROR_DBALREADY 35
RWLERROR("%s database already specified as '%s'", RWL_ERROR_PARSE)

#define RWL_ERROR_NOT_YET_IMPL 36
RWLERROR("%s not yet implemented", RWL_ERROR_PARSE)

#define RWL_ERROR_NO_DATABASE 37
RWLERROR("%s database not declared or not accessible", RWL_ERROR_PARSE|RWL_ERROR_RUNTIME)

#define RWL_ERROR_DBERROR_SQL_NO_OFFSET 38
RWLERROR("database error in SQL '%s' [%s,%s]\n%.*s", RWL_ERROR_PARSE|RWL_ERROR_RUNTIME)

#define RWL_ERROR_DBERROR_SQL 39
RWLERROR("database error in SQL '%s', line %d, position %d [%s,%s]\n%.*s", RWL_ERROR_PARSE|RWL_ERROR_RUNTIME)

#define RWL_ERROR_DBERROR_OTHER 40
RWLERROR("database error [%s,%s]\n%.*s", RWL_ERROR_PARSE|RWL_ERROR_RUNTIME)

#define RWL_ERROR_DEFINE_NUM_MISMATCH 41
RWLERROR("mismatch between result list count (%d) and define count (%d)", RWL_ERROR_WARNING)

#define RWL_ERROR_NO_ROWS 42
RWLERROR("no rows returned from '%s'", RWL_ERROR_WARNING)

#define RWL_ERROR_RESERVED_FOR_FUTURE 43
RWLERROR("'%s' is a keyword reserved for future use", RWL_ERROR_WARNING)

#define RWL_ERROR_COMMIT_NO_SQL 44
RWLERROR("attempted commit/rollback without any SQL being executed", RWL_ERROR_RUNTIME)

#define RWL_ERROR_ROLLBACK_FORCED 45
RWLERROR("release of session from '%s' with outstanding DML; rollback forced", RWL_ERROR_RUNTIME)

#define RWL_ERROR_MISSING_COMMIT 46
RWLERROR("cannot determine if PL/SQL started transaction on '%s'; commit executed", RWL_ERROR_WARNING)

#define RWL_ERROR_BAD_DATABASE 47
RWLERROR("database '%s' could not connect", RWL_ERROR_PARSE)

#define RWL_ERROR_CONN_ROLLBACK_FORCED 48
RWLERROR("terminating connection '%s' with outstanding DML; rollback forced", RWL_ERROR_NOFILE|RWL_ERROR_RUNTIME)

#define RWL_ATTEMPT_CURSOR_NONQUERY 49
RWLERROR("cannot use cursor loop as '%s' is non-query", RWL_ERROR_RUNTIME)

#define RWL_DEFAULT_ARRAY 50
RWLERROR("cursor loop '%s' uses default array size of %d", RWL_ERROR_WARNING)

#define RWL_ERROR_DECL_FILE 51
RWLERROR("incorrect file declaration", RWL_ERROR_PARSE|RWL_ERROR_MINOR)

#define RWL_ERROR_CANNOTOPEN_FILE 52
RWLERROR("cannot open '%s' for %s as '%s', O/S error: %s", RWL_ERROR_RUNTIME)

#define RWL_ERROR_WRITE_NOT_OPEN 53
RWLERROR("file '%s' is not open", RWL_ERROR_RUNTIME)

#define RWL_ERROR_CANNOTCLOSE_FILE 54
RWLERROR("cannot close file '%s', O/S error: %s", RWL_ERROR_RUNTIME)

#define RWL_ERROR_ALREADYOPEN_FILE 55
RWLERROR("file '%s' is already open", RWL_ERROR_RUNTIME)

#define RWL_ERROR_FILE_WILL_CLOSE 56
RWLERROR("file '%s' will be closed", RWL_ERROR_WARNING|RWL_ERROR_NOFILE)

#define RWL_ERROR_ILLEGAL_THREAD 57
RWLERROR("incorrect or missing thread specification", RWL_ERROR_PARSE)

#define RWL_ERROR_GENERIC_OS 58
RWLERROR("%s failed, O/S error: %s", RWL_ERROR_SEVERE|RWL_ERROR_NOFILE)

#define RWL_ERROR_CLOCKOFF_NEGATIVE 59
RWLERROR("clock start time (%.2f) cannot be negative", RWL_ERROR_WARNING|RWL_ERROR_NOFILE)

#define RWL_ERROR_THROPT_REPEAT 60
RWLERROR("thread option '%s' specified more than once", RWL_ERROR_PARSE|RWL_ERROR_MINOR)

#define RWL_ERROR_NO_ARGUMENTS_ALLOWED 61
RWLERROR("procedure '%s' with arguments cannot be used in %s", RWL_ERROR_PARSE)

#define RWL_ERROR_RUNOPT_REPEAT 62
RWLERROR("run option '%s' specified more than once", RWL_ERROR_PARSE|RWL_ERROR_MINOR)

#define RWL_ERROR_THROPT_MISSING 63
RWLERROR("thread option '%s' must be specified", RWL_ERROR_PARSE|RWL_ERROR_MINOR)

#define RWL_ERROR_IF_NULL 64
RWLERROR("executing if with NULL argument - false assumed", RWL_ERROR_WARNING|RWL_ERROR_RUNTIME)

#define RWL_ERROR_UNIFORM_RETURNS_INTEGER 65
RWLERROR("uniform() returns an integer in this context", RWL_ERROR_WARNING)

#define RWL_ERROR_NONZEROEXIT 66
RWLERROR("pipeline '%s' returned %d", RWL_ERROR_WARNING)

#define RWL_ERROR_CANNOTOPEN_PIPE 67
RWLERROR("cannot open '%s' as pipe to '%s', O/S error: %s", RWL_ERROR_RUNTIME)

#define RWL_ERROR_CANNOTCLOSE_PIPE 68
RWLERROR("cannot close pipe '%s', O/S error: %s", RWL_ERROR_RUNTIME)

#define RWL_ERROR_DONTEXECUTE 69
RWLERROR("cannot execute due to previous errors", RWL_ERROR_RUNTIME)

#define RWL_ERROR_HISTOVERFLOW 70
RWLERROR("histogram overflow (%d,%.3e)", RWL_ERROR_WARNING)

#define RWL_ERROR_HISTUNDERFLOW 71
RWLERROR("histogram underflow (%d,%.3e)", RWL_ERROR_WARNING)

#define RWL_ERROR_MUTE_TOO_HIGH 72
RWLERROR("cannot mute non-existing error", RWL_ERROR_WARNING)

#define RWL_ERROR_MUTE_NOTWARN 73
RWLERROR("muting non-warning %d", RWL_ERROR_WARNING)

#define RWL_ERROR_PERSEC_TOOBIG 74
RWLERROR("cannot save counts beyond %ds", RWL_ERROR_WARNING)

#define RWL_ERROR_NO_CODE_SPACE 75
RWLERROR("out of space for code (%d) - rerun with -C option", RWL_ERROR_SEVERE)

#define RWL_ERROR_NO_IDENTIFIER_SPACE 76
RWLERROR("maximum number of identifers (%d) exceeded - rerun with -I option", RWL_ERROR_SEVERE)

#define RWL_ERROR_BINDOUT 77
RWLERROR("invalid bindout", RWL_ERROR_PARSE)

#define RWL_ERROR_OCITRHREADINIT 78
RWLERROR("cannot initialize OCI threading", RWL_ERROR_SEVERE)

#define RWL_ERROR_ORA_ERROR_SQL 79
RWLERROR("oracle error %d in '%s' declared at [%s;%d]\n%s", RWL_ERROR_RUNTIME|RWL_ERROR_HASNL)

#define RWL_ERROR_ORA_ERROR_NOSQL 80
RWLERROR("oracle error %d\n%s", RWL_ERROR_RUNTIME|RWL_ERROR_HASNL)

#define RWL_ERROR_ORA_SUCWIN_SQL 81
RWLERROR("oracle success with info %d in '%s' declared at [%s;%d]\n%s", RWL_ERROR_WARNING|RWL_ERROR_RUNTIME|RWL_ERROR_HASNL)

#define RWL_ERROR_ORA_SUCWIN_NOSQL 82
RWLERROR("oracle success with info %d\n%s", RWL_ERROR_WARNING|RWL_ERROR_RUNTIME|RWL_ERROR_HASNL)

#define RWL_ERROR_OCI_ERROR_SQL 83
RWLERROR("OCI error %s in '%s' declared at [%s;%d]", RWL_ERROR_RUNTIME)

#define RWL_ERROR_OCI_ERROR_NOSQL 84
RWLERROR("OCI error %s", RWL_ERROR_RUNTIME)

#define RWL_ERROR_OCI_UNSPEC_SQL 85
RWLERROR("unspecified OCI error %d in '%s' declared at [%s;%d]", RWL_ERROR_RUNTIME)

#define RWL_ERROR_OCI_UNSPEC_NOSQL 86
RWLERROR("unspecified OCI error %d", RWL_ERROR_RUNTIME)

#define RWL_ERROR_OCI_LINE_POS 87
RWLERROR("previous error was at line %d position %d:\n%.*s\n%*s", RWL_ERROR_RUNTIME)

#define RWL_ERROR_BAD_BIND_ARRAY 88
RWLERROR("at least one bind and no bindout must be specified for this array", RWL_ERROR_PARSE)

#define RWL_ERROR_NOTHING_AFTER_END 89
RWLERROR("'%s' keyword not allowed after end", RWL_ERROR_PARSE)

#define RWL_ERROR_DECL_RAST 90
RWLERROR("incorrect random string declaration", RWL_ERROR_PARSE)

#define RWL_ERROR_RAST_WAS_CANCELLED 91
RWLERROR("random string array '%s' cannot be used", RWL_ERROR_RUNTIME)

#define RWL_ERROR_DECL_RAPROC 92
RWLERROR("incorrect random procedure declaration", RWL_ERROR_PARSE)

#define RWL_ERROR_RESULTSDB_NOT_THRDEC 93
RWLERROR("results database connect use threads dedicated", RWL_ERROR_RUNTIME)

#define RWL_ERROR_NO_STATS_WITHOUT_RESDB 94
RWLERROR("cannot save statistics without a results database", RWL_ERROR_WARNING)

#define RWL_IDENTIFIER_TOO_LONG 95
RWLERROR("identifier/key '%s' longer than %d characters - reduced to '%s'", RWL_ERROR_WARNING)

#define RWL_NOT_PREPARE_AND_EXECUTE_MULTI 96
RWLERROR("cannot prepare and execute multi-process in same run", RWL_ERROR_NOFILE)

#define RWL_ERROR_CLOCKOFF_UNREASONABLE 97
RWLERROR("clock offset (%.2f) is unreasonably higher than %.2f", RWL_ERROR_MINOR|RWL_ERROR_NOFILE)

#define RWL_ERROR_MODIFY 98
RWLERROR("invalid modify", RWL_ERROR_PARSE)

#define RWL_ERROR_NO_INPUT 99
RWLERROR("no input files", RWL_ERROR_WARNING| RWL_ERROR_NOFILE)

#define RWL_ERROR_INCORRECT_TYPE2 100
RWLERROR("cannot use %s '%s' as %s", RWL_ERROR_PARSE)

#define RWL_ERROR_ONLY_THIS_AFTER_END 101
RWLERROR("only %s allowed after this end", RWL_ERROR_PARSE)

#define RWL_ERROR_THRCOUNT_NEGATIVE 102
RWLERROR("invalid thread count(%d) - must be zero or positive", RWL_ERROR_RUNTIME)

#define RWL_ERROR_TOTTHR_NOT_POSITIVE 103
RWLERROR("total thread count must be positive", RWL_ERROR_RUNTIME)

#define RWL_ERROR_SQL_WRONG 104
RWLERROR("invalid sql declaration (missing 'end', SQL or PL/SQL keyword)", RWL_ERROR_PARSE)

#define RWL_ERROR_BAD_SQL_SCAN 105
RWLERROR("unfinished sql or pl/sql", RWL_ERROR_PARSE)

#define RWL_ERROR_PROCEDURE_WRONG 106
RWLERROR("invalid procedure declaration", RWL_ERROR_PARSE)

#define RWL_ERROR_GAMMA_TO_ERLANG 107
RWLERROR("gamma/gamma2 have been renamed to erlang/erlang2, please change your code", RWL_ERROR_WARNING)

#define RWL_ERROR_DBL_AND_MOD 108
RWLERROR("modulus operation (%%) used in expression with double", RWL_ERROR_WARNING)

#define RWL_ERROR_SUSPICIOUS_CHAR_IN_SQL 109
RWLERROR("suspicious whitespace character after '%c' during SQL or PL/SQL scan", RWL_ERROR_WARNING)

#define RWL_ERROR_VERY_LONG_IDENTIFIER 110
RWLERROR("identifier '%s' is longer than 30 characters", RWL_ERROR_WARNING)

#define RWL_ERROR_BAD_ARGUMNET 111 // not used directly
RWLERROR("RWL-111", RWL_ERROR_NOFILE)

#define RWL_ERROR_CANNOT_INCLUDE_HERE 112
RWLERROR("$include directive cannot be used here", RWL_ERROR_PARSE)

/* The next one is special as it is written directly to file descriptor 2
 * inside the interrupt handler using write() as printf (or sprintf) aren't
 * safe to use in interrupt handlers.  It therefore has RWL- in the start
 * and a newline at the end.
 *
 * This error of course has to have the number RWL-113 as it is similar to 
 * ORA-1013
 */
#define RWL_ERROR_CONTROL_C_HANDLED 113 
RWLERROR("RWL-113: user requested termination - please wait a few seconds\n", RWL_ERROR_RUNTIME)

#define RWL_ERROR_ILLEGAL_FILE_NAME 114
RWLERROR("'%s' is not a legal filename", RWL_ERROR_PARSE)

#define RWL_ERROR_INCLUDE_DEEP 115
RWLERROR("$include recursion too deep", RWL_ERROR_RUNTIME)

#define RWL_ERROR_RECURSIVE_INCLUDE 116
RWLERROR("$include recursion into '%s' attempted", RWL_ERROR_PARSE)

#define RWL_ERROR_WRONG_DB_IN_CODE 117
RWLERROR("cannot use %s database '%s' for at clause inside procedure/function", RWL_ERROR_PARSE)

#define RWL_ERROR_AT_DEFAULT_NO_IMPACT 118
RWLERROR("at default has no effect here", RWL_ERROR_WARNING)

#define RWL_ERROR_STARTSEC_TOO_LATE 119
RWLERROR("$startseconds directive must be used earlier - using %.2f", RWL_ERROR_WARNING)

#define RWL_ERROR_DFORMAT_BAD 120
RWLERROR("dformat '%s' converts %.8f to %.8f using buffer '%s'", RWL_ERROR_WARNING)

#define RWL_ERROR_IFORMAT_BAD 121
RWLERROR("iformat '%s' converts %ld to %ld using buffer '%s'", RWL_ERROR_WARNING)

#define RWL_ERROR_USE_QUOTE_FOR_STRING 122
RWLERROR("strings are delimited by \"", RWL_ERROR_PARSE)

#define RWL_ERROR_NO_DATABASE_NAME 123
RWLERROR("expected database name for execution", RWL_ERROR_PARSE)

#define RWL_ERROR_TOO_MANY_ARGUMENTS 124
RWLERROR("procedure or function '%s' called with too many arguments", RWL_ERROR_PARSE)

#define RWL_ERROR_TOO_FEW_ARGUMENTS 125
RWLERROR("procedure or function '%s' called with too few arguments", RWL_ERROR_PARSE)

#define RWL_ERROR_NO_RETURN_IN_FUNCTION 126
RWLERROR("function '%s' has no return statement", RWL_ERROR_WARNING)

#define RWL_ERROR_TOO_SHORT_RETURN 127
RWLERROR("function '%s' of length %d cannot return %d bytes", RWL_ERROR_RUNTIME)

#define RWL_ERROR_RETURN_NO_EXPR 128
RWLERROR("return in function '%s' must include expression", RWL_ERROR_PARSE)

#define RWL_ERROR_RETURN_WITH_EXPR 129
RWLERROR("procedure '%s' cannot return an expression", RWL_ERROR_PARSE)

#define RWL_ERROR_BAD_ARG_LIST 130
RWLERROR("incorrect argument list", RWL_ERROR_PARSE)

#define RWL_ERROR_ISNULL_DEPRECATED 131
RWLERROR("isnull() function is deprecated, please change your code", RWL_ERROR_WARNING)

#define RWL_ERROR_UNEXPECTED_AFTER_IDENTIFIER 132
RWLERROR("expected valid input after '%s'", RWL_ERROR_PARSE|RWL_ERROR_MINOR)

#define RWL_UNNEEDED_SEMICOLON_AFTER 133
RWLERROR("superfluous ';' after %s", RWL_ERROR_WARNING)

#define RWL_ERROR_TOO_MANY_BAD_CHAR 134
RWLERROR("too many invalid charaters (is input an rwl file?)", RWL_ERROR_SEVERE)

#define RWL_ERROR_GLOBAL_HIDDEN_BY_PRIVATE 135
RWLERROR("public %s '%s' is hidden by private %s declared at [%s;%d]", RWL_ERROR_WARNING)

#define RWL_ERROR_PRIVATE_HIDES_GLOBAL 136
RWLERROR("%s %s '%s' hides public %s declared at [%s;%d]", RWL_ERROR_WARNING)

#define RWL_ERROR_COMMA_IS_RECOMMENDED 137
RWLERROR("a comma is recommended after '%s' in %s", RWL_ERROR_WARNING)

#define RWL_ERROR_NO_USERNAME 138
RWLERROR("username must be specified for database '%s'", RWL_ERROR_PARSE)

#define RWL_ERROR_PASSWORD_TOO_LONG 139
RWLERROR("password read from stdin is too long", RWL_ERROR_PARSE)

#define RWL_ERROR_PASSWORD_TOO_SHORT 140
RWLERROR("password read from stdin is too short", RWL_ERROR_PARSE)

#define RWL_ERROR_NOEXEC 141
RWLERROR("-e flag prevents execution", RWL_ERROR_WARNING)

#define RWL_ERROR_DECL_LOB 142
RWLERROR("incorrect lob declaration", RWL_ERROR_PARSE|RWL_ERROR_MINOR)

#define RWL_ERROR_NOT_ENOUGH_ARGUMENTS 143
RWLERROR("not anough arguments to rwloadsim", RWL_ERROR_NOFILE)

#define RWL_ERROR_NO_DML_ARRAY_LOB 144
RWLERROR("array DML not supported for lob", RWL_ERROR_WARNING)

#define RWL_ERROR_NOT_LOCAL 145
RWLERROR("%s cannot be declared as local variable or argument", RWL_ERROR_PARSE)

#define RWL_ERROR_ATTEMPT_ZERO_WRITE 146
RWLERROR("attempted write of 0 bytes to lob at database '%s'", RWL_ERROR_WARNING)

#define RWL_ERROR_LOB_NOT_FILLED 147
RWLERROR("lob has not been read from database", RWL_ERROR_RUNTIME)

#define RWL_ERROR_ILLEGAL_UNIFORM_RANGE 148
RWLERROR("attempted uniform() with invalid range", RWL_ERROR_RUNTIME)

#define RWL_ERROR_HACK_ALLOWED 149
RWLERROR("you have enabled unsupported experimental features", RWL_ERROR_WARNING)

#define RWL_ONLY_DIRECTIVE_IN_DOT 150
RWLERROR("only directives allowed in startup file", RWL_ERROR_WARNING)

#define RWL_ERROR_ONLY_IN_RC 151
RWLERROR("directive '%s' is only available in startup file", RWL_ERROR_WARNING)

#define RWL_ERROR_NO_LOCAL_THSUM 152
RWLERROR("threads sum cannot be used with local variables or arguments", RWL_ERROR_PARSE)

#define RWL_ERROR_KK_NOT_USEFUL 153
RWLERROR("key and komment options are ignored in multip-process run", RWL_ERROR_NOFILE|RWL_ERROR_WARNING)

#define RWL_ERROR_DBPOOL_ALREADY 154
RWLERROR("connection type already specified", RWL_ERROR_PARSE)

#define RWL_ERROR_SUPERSHK_ALREADY 155
RWLERROR("super sharding key already specified", RWL_ERROR_PARSE)

#define RWL_ERROR_SHARDKEY_ALREADY 156
RWLERROR("sharding key already specified", RWL_ERROR_PARSE)

#define RWL_ERROR_SHARDING_MUST_POOL 157
RWLERROR("sharding can only be used with sessionpool", RWL_ERROR_PARSE)

#define RWL_ERROR_SUPERSHK_MUST_SHARDKEY 158
RWLERROR("shardkey must be specified when supershardkey is", RWL_ERROR_PARSE)

#define RWL_ERROR_NO_NEST_LOOP 159
RWLERROR("control loops cannot be nested", RWL_ERROR_PARSE)

#define RWL_ERROR_NOT_IN_CBLOCK 160
RWLERROR("control loop specification cannot contain %s", RWL_ERROR_PARSE)

#define RWL_ERROR_CBLOCK_DETECTED 161
RWLERROR("control loop recursion detected - unsafe to continue", RWL_ERROR_RUNTIME)

#define RWL_ERROR_CBLOCK_INVALID 162
RWLERROR("invalid control loop specification", RWL_ERROR_PARSE)

#define RWL_ERROR_SHIFT_EMPTY 163
RWLERROR("no more positional arguments", RWL_ERROR_RUNTIME)

#define RWL_ERROR_DOT_OVERWRITES_COMMAND 164
RWLERROR("%s specified in both startup file and command line; largest value (%d) chosen", RWL_ERROR_WARNING)

#define RWL_ERROR_EXECUTE_NOT_NEEDED 165
RWLERROR("execute keyword not needed for %s '%s'", RWL_ERROR_WARNING)

#define RWL_ERROR_NOT_SQL 166
RWLERROR("%s '%s' found - sql expected", RWL_ERROR_PARSE)

#define RWL_ERROR_RAPROC_DIF_ARGCOUNT 167
RWLERROR("random procedure array '%s' has different argument count for '%s' and '%s'", RWL_ERROR_PARSE)

#define RWL_ERROR_RAPROC_DIF_ARGTYPE 168
RWLERROR("random procedure array '%s' has different argument type for argument %d of '%s' and '%s'", RWL_ERROR_PARSE)

#define RWL_ERROR_STRING_TOO_LONG 169
RWLERROR("maximum string length is %d", RWL_ERROR_PARSE)

#define RWL_ERROR_MISSING_DECL_BRACK 170
RWLERROR("omitting () for procedure or function without arguments is deprecated", RWL_ERROR_WARNING)

#define RWL_ERROR_RETURN_OUTSIDE_CODE 171
RWLERROR("return statement not available outside procedure/function", RWL_ERROR_PARSE)

#define RWL_ERROR_DECL_NO_ASSIGN 172
RWLERROR("%s declaration cannot have assignments", RWL_ERROR_PARSE)

#define RWL_ERROR_LOCAL_HIDES 173
RWLERROR("local %s '%s' hides %s %s declared at [%s;%d]", RWL_ERROR_WARNING)

#define RWL_ERROR_CANNOTOPEN_FILEREAD 174
RWLERROR("cannot open '%s' for reading, O/S error: %s", RWL_ERROR_PARSE)

#define RWL_ERROR_CANNOTREAD_FILE 175
RWLERROR("cannot read from '%s', O/S error: %s", RWL_ERROR_PARSE)

#define RWL_ERROR_MISSING_X_ARG 176
RWLERROR("-x option %d has no argument (missing shell quotes?)", RWL_ERROR_PARSE| RWL_ERROR_NOFILE)

#define RWL_ERROR_OCI_LINE_POS_IN_FILE 177
RWLERROR("previous error was at [%s;%d] position %d:\n%.*s\n%*s", RWL_ERROR_RUNTIME)

#define RWL_ERROR_BOTH_F_AND_A_FLAG 178
RWLERROR("-F flag overwrites -A", RWL_ERROR_NOFILE|RWL_ERROR_WARNING)

#define RWL_ERROR_ONLY_THIS_AFTER_END2 179
RWLERROR("only %s or '%s' allowed after this end", RWL_ERROR_PARSE)

#define RWL_ERROR_UNEXPECTED_EVENT 180
RWLERROR("event %d is unexpected", RWL_ERROR_WARNING)

#define RWL_ERROR_EVENT_RECOGNIZED 181
RWLERROR("event source:%s hst:%s svc:%s db:%s inst:%s ev:%s at:%.2f", RWL_ERROR_INFORMATION | RWL_ERROR_NOFILE)

#define RWL_ERROR_CANNOTOPEN_FILEWRITE 182
RWLERROR("cannot open '%s' for writing, O/S error: %s", RWL_ERROR_PARSE | RWL_ERROR_NOFILE)

#define RWL_ERROR_DATABASE_DEAD 183
RWLERROR("database '%s' has terminated unexpectedly due to ORA-%05d; reconnect will be attempted", RWL_ERROR_WARNING)

#define RWL_ERROR_UNEXPECTED_KEYWORD 184
RWLERROR("expected keyword '%s' was not found", RWL_ERROR_PARSE)

// see RWL_ERROR_CONTROL_C_HANDLED
#define RWL_ERROR_CONTROL_C_MAX 185 
RWLERROR("RWL-185: several user requested termination received - using SIGTERM\n", RWL_ERROR_RUNTIME)

#define RWL_ERROR_CANNOT_THREAD 186
RWLERROR("cannot create thread", RWL_ERROR_RUNTIME)

#define RWL_ERROR_NOT_USED_IN_C_187 187
RWLERROR("LD_LIBRARY_PATH environment must be set", RWL_ERROR_PARSE)

#define RWL_ERROR_NOT_USED_IN_C_188 188
RWLERROR("Cannot find libclntsh", RWL_ERROR_PARSE)

#define RWL_ERROR_DATABASE_DEAD_MAYBR 189
RWLERROR("database '%s' has terminated unexpectedly due to ORA-%05d; reconnect may be attempted", RWL_ERROR_RUNTIME)

#define RWL_ERROR_ONLY_POOL_MIN_SET 190
RWLERROR("missing max poolsize for default database, using dedicated", RWL_ERROR_WARNING|RWL_ERROR_NOFILE)

#define RWL_ERROR_PING_DEAD_DATABASE 191
RWLERROR("attempted ociping of terminated database", RWL_ERROR_WARNING|RWL_ERROR_RUNTIME)

#define RWL_ERROR_PING_NO_DATABASE 192
RWLERROR("attempted ociping without database", RWL_ERROR_WARNING|RWL_ERROR_RUNTIME)

#define RWL_ERROR_NO_FILE_FOR_WRITE 193
RWLERROR("missing file name for writing", RWL_ERROR_PARSE)

#define RWL_ERROR_FLUSH_STOP_LOW 194
RWLERROR("flush-stop must be at least %d - no statistics flush done", RWL_ERROR_WARNING)

#define RWL_ERROR_FLUSH_EVERY_LOW 195
RWLERROR("flush-every must be at least %d - value changed", RWL_ERROR_WARNING)

#define RWL_ERROR_RESULTSDB_MUST_SESS 196
RWLERROR("results database must be using a session pool for statisitcs flushing - flush turned off", RWL_ERROR_WARNING)

#define RWL_ERROR_NO_FILE_FOR_FFLUSH 197
RWLERROR("missing file name for fflush", RWL_ERROR_PARSE)

#define RWL_ERROR_CURRENTLY_AS 198
RWLERROR("%s is currently implemented as %s", RWL_ERROR_WARNING)

#define RWL_ERROR_ERLANGK_SMALL 199
RWLERROR("first argument to erlangk(%d) must be at least 1", RWL_ERROR_RUNTIME)

#define RWL_ERROR_ERLANGK_HIGH 200
RWLERROR("first argument to erlangk(%d) is unreasonably high", RWL_ERROR_RUNTIME)

#define RWL_ERROR_BAD_DEFINE_ARRAY 201
RWLERROR("define array requires defines", RWL_ERROR_PARSE)

#define RWL_ERROR_DEFINE_ARRAY_WRONG_TYPE 202
RWLERROR("variable '%s' has wrong type for define array", RWL_ERROR_PARSE)

#define RWL_ERROR_DEFINE_ARRAY_IS_FIXED 203
RWLERROR("the size of define array cannot by modifed", RWL_ERROR_PARSE)

#define RWL_ERROR_NOT_EQUALEQUAL 204
RWLERROR("this is not C - '==' is taken as '='", RWL_ERROR_WARNING)

#define RWL_ERROR_SQLID_NEED_IDENT 205
RWLERROR("sql_id function requires name of sql variable", RWL_ERROR_PARSE)

#define RWL_ERROR_CLIENT_MISMATCH 206
RWLERROR("OCI compile environment (%d.%d) is different from runtime (%d.%d)", RWL_ERROR_WARNING | RWL_ERROR_NOFILE)

#define RWL_ERROR_BAD_ENV_EXPANSION 207
RWLERROR("illegal environment expansion in file name '%s'", RWL_ERROR_RUNTIME)

#define RWL_ERROR_ENV_NOT_FOUND 208
RWLERROR("environment variable '%s' does not exist", RWL_ERROR_WARNING)

#define RWL_ERROR_ABORT 209
RWLERROR("abort without cleanup", RWL_ERROR_SEVERE)

#define RWL_ERROR_NOT_IN_IF 210
RWLERROR("'%s' cannot be used in $if ... $then directive", RWL_ERROR_PARSE)

#define RWL_ERROR_UNMATCHED_ELSE_OR_END 211
RWLERROR("$%s directive cannot be matched to an $if ... $then directive", RWL_ERROR_PARSE)

#define RWL_ERROR_DIRIF_NOT_FINISH 212
RWLERROR("$if ... $then directive at [%s;%d] was not matched with $endif", RWL_ERROR_PARSE)

#define RWL_ERROR_TOO_MANY_OER_SAVE 213
RWLERROR("only %d ORA- errors out of %d were saved", RWL_ERROR_WARNING| RWL_ERROR_NOFILE)

#define RWL_ERROR_THIS_IS_NOT_C 214
RWLERROR("this is not C - '%s' cannot be used", RWL_ERROR_PARSE)

#define RWL_ERROR_TOO_MAY_LOCALS 215
RWLERROR("more than %d local variables in procedure - use $maxlocals:NN directive", RWL_ERROR_SEVERE)

#define RWL_ERROR_SYSTEM_RES_LARGE 216
RWLERROR("variable '%s' of length %d cannot hold output from system", RWL_ERROR_RUNTIME)

#define RWL_ERROR_SYSTEM_BAD 217
RWLERROR("only identifier allowed as second argument to system", RWL_ERROR_PARSE)

#define RWL_ERROR_ACCESS_WRONG2 218
RWLERROR("2nd argument to access ('%s') must consist of 'fdrwx'", RWL_ERROR_RUNTIME)

#define RWL_ERROR_DBFUN_NEED_IDENT 219
RWLERROR("%s function requires name of database variable", RWL_ERROR_PARSE)

#define RWL_ERROR_DEPRECATED_DOLLARIF 220
RWLERROR("use of '$if: ... ;' is deprecated, use '$if ... $then' in stead", RWL_ERROR_WARNING)

#define RWL_ERROR_DOLLARIF_NO_THEN 221
RWLERROR("$if without matching $then on same line", RWL_ERROR_PARSE)

#define RWL_ERROR_DOLLARIF_NO_VALID_EXPRESSION 222
RWLERROR("expected valid expression in $if ... $then directive", RWL_ERROR_PARSE)

#define RWL_ERROR_BAD_ARGUMENT_TYPE 223
RWLERROR("formal argument or return value cannot be of type %s", RWL_ERROR_PARSE)

#define RWL_ERROR_NOT_SUPPORTED_IN_VERSION 224
RWLERROR("%s is not available in database version %d", RWL_ERROR_PARSE)

#define RWL_ERROR_SQLTEXT_ALREADY 225
RWLERROR("sql text has already been provided for '%s'", RWL_ERROR_RUNTIME)

#define RWL_ERROR_DEFINE_ARRAY_NOT_DYNAMIC 226
RWLERROR("define array cannot by used by dynamic sql", RWL_ERROR_PARSE)

#define RWL_ERROR_STATIC_SQL_NO_MODIFY 227
RWLERROR("modify sql %s cannot be used with static sql", RWL_ERROR_RUNTIME)

#define RWL_ERROR_CANNOT_MODIFY_NOW 228
RWLERROR("cannot execute modify sql %s - '%s' in use", RWL_ERROR_RUNTIME)

#define RWL_ERROR_NO_DEV_TTY 229
RWLERROR("cannot open /dev/tty", RWL_ERROR_PARSE)

#define RWL_ERROR_BAD_READLINE 230
RWLERROR("incorrect readline", RWL_ERROR_PARSE)

#define RWL_ERROR_READBUFFER_TOO_SHORT 231
RWLERROR("readbuffer of size %d too short to read a line from %s", RWL_ERROR_RUNTIME)

#define RWL_ERROR_BAD_REGEX 232
RWLERROR("incorrect regex", RWL_ERROR_PARSE)

#define RWL_ERROR_REGEX_COMPILE_ERROR 233
RWLERROR("error compiling regular expression: %s", RWL_ERROR_RUNTIME)

#define RWL_ERROR_CANNOT_CLOSE_MAIN 234
RWLERROR("file %s opened in main cannot be closed in thread", RWL_ERROR_RUNTIME)

#define RWL_ERROR_NOT_DONE_IN_MAIN 235
RWLERROR("%s is currently not done in main; wrap with execute block", RWL_ERROR_WARNING)

#define RWL_ERROR_ARGUMENT_NOT_FIRST 236
RWLERROR("option directives only available in first file", RWL_ERROR_PARSE)

#define RWL_ERROR_ARGUMENT_IS_ORDINARY 237
RWLERROR("user argument %s is an ordinary argument", RWL_ERROR_PARSE)

#define RWL_ERROR_ARGUMENT_ALREADY 238
RWLERROR("user argument %s is already defined", RWL_ERROR_PARSE)

#define RWL_ERROR_ARGUMENT_LOCAL 239
RWLERROR("user argument %s cannot be used locally", RWL_ERROR_PARSE)

#define RWL_ERROR_ARGUMENT_NOT_USED 240
RWLERROR("user argumnent %s has not been used", RWL_ERROR_WARNING|RWL_ERROR_NOFILE)

#define RWL_ERROR_ENV_EXP_TOO_LARGE 241
RWLERROR("environment expansion in file name '%s' is larger than %d", RWL_ERROR_RUNTIME)

#define RWL_ERROR_FIL_IN_PUBLIC 242
RWLERROR("file '%s' used in stead of '%s'", RWL_ERROR_RUNTIME|RWL_ERROR_WARNING)

#define RWL_ERROR_NOT_USED_IN_C_243 243
RWLERROR("Cannot find executable in PATH", RWL_ERROR_PARSE)

#define RWL_ERROR_PUBLIC_BAD 244
RWLERROR("public directory '%s' is not accessible or does not appear correct", RWL_ERROR_NOFILE |RWL_ERROR_WARNING)

#define RWL_ERROR_KOMMENT_TOO_LONG 245
RWLERROR("komment of length %d is truncated to %d", RWL_ERROR_NOFILE |RWL_ERROR_WARNING)

#define RWL_ERROR_INSTRB3_POS_NEG 246
RWLERROR("reverse searching in instrb2 is not yet implemented", RWL_ERROR_RUNTIME|RWL_ERROR_WARNING)
