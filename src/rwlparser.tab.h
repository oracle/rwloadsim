/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_RWLY_RWLPARSER_TAB_H_INCLUDED
# define YY_RWLY_RWLPARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef RWLYDEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define RWLYDEBUG 1
#  else
#   define RWLYDEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define RWLYDEBUG 1
# endif /* ! defined YYDEBUG */
#endif  /* ! defined RWLYDEBUG */
#if RWLYDEBUG
extern int rwlydebug;
#endif

/* Token type.  */
#ifndef RWLYTOKENTYPE
# define RWLYTOKENTYPE
  enum rwlytokentype
  {
    RWL_T_CONNECT = 258,
    RWL_T_USERNAME = 259,
    RWL_T_PASSWORD = 260,
    RWL_T_DATABASE = 261,
    RWL_T_EPOCHSECONDS = 262,
    RWL_T_DBSECONDS = 263,
    RWL_T_PRINT = 264,
    RWL_T_PRINTLINE = 265,
    RWL_T_PRINTVAR = 266,
    RWL_T_SHARDKEY = 267,
    RWL_T_SUPERSHK = 268,
    RWL_T_OCISECONDS = 269,
    RWL_T_PROCEDURE = 270,
    RWL_T_BIND = 271,
    RWL_T_DEFINE = 272,
    RWL_T_STRING = 273,
    RWL_T_INTEGER = 274,
    RWL_T_END = 275,
    RWL_T_PROCEDURENAME = 276,
    RWL_T_FOR = 277,
    RWL_T_ARRAY = 278,
    RWL_T_DATE = 279,
    RWL_T_SQRT = 280,
    RWL_T_ACCESS = 281,
    RWL_T_REGEX = 282,
    RWL_T_REGEXTRACT = 283,
    RWL_T_UNIFORM = 284,
    RWL_T_ERLANG = 285,
    RWL_T_DOTDOT = 286,
    RWL_T_DOUBLE = 287,
    RWL_T_ERLANG2 = 288,
    RWL_T_ERLANGK = 289,
    RWL_T_RUN = 290,
    RWL_T_THREADS = 291,
    RWL_T_RUNSECONDS = 292,
    RWL_T_WHILE = 293,
    RWL_T_FFLUSH = 294,
    RWL_T_READLINE = 295,
    RWL_T_RANDOM = 296,
    RWL_T_FILE = 297,
    RWL_T_WRITE = 298,
    RWL_T_WRITELINE = 299,
    RWL_T_BINDOUT = 300,
    RWL_T_GETRUSAGE = 301,
    RWL_T_DRCP = 302,
    RWL_T_SESSIONPOOL = 303,
    RWL_T_RECONNECT = 304,
    RWL_T_DEDICATED = 305,
    RWL_T_DEFAULT = 306,
    RWL_T_RESULTS = 307,
    RWL_T_ASSIGN = 308,
    RWL_T_LOOP = 309,
    RWL_T_ALL = 310,
    RWL_T_NULL = 311,
    RWL_T_ISNULL = 312,
    RWL_T_SUM = 313,
    RWL_T_IS = 314,
    RWL_T_NOT = 315,
    RWL_T_LESSEQ = 316,
    RWL_T_GREATEQ = 317,
    RWL_T_NOTEQ = 318,
    RWL_T_AND = 319,
    RWL_T_OR = 320,
    RWL_T_BETWEEN = 321,
    RWL_T_CONCAT = 322,
    RWL_T_IF = 323,
    RWL_T_THEN = 324,
    RWL_T_ELSE = 325,
    RWL_T_NEVER = 326,
    RWL_T_APPEND = 327,
    RWL_T_IGNOREERROR = 328,
    RWL_T_ELSEIF = 329,
    RWL_T_EXECUTE = 330,
    RWL_T_WAIT = 331,
    RWL_T_COMMIT = 332,
    RWL_T_ROLLBACK = 333,
    RWL_T_EVERY = 334,
    RWL_T_ASNADD = 335,
    RWL_T_ASNSUB = 336,
    RWL_T_STOP = 337,
    RWL_T_START = 338,
    RWL_T_COUNT = 339,
    RWL_T_AT = 340,
    RWL_T_BREAK = 341,
    RWL_T_RETURN = 342,
    RWL_T_ABORT = 343,
    RWL_T_MODIFY = 344,
    RWL_T_CURSORCACHE = 345,
    RWL_T_NOCURSORCACHE = 346,
    RWL_T_LEAK = 347,
    RWL_T_SHIFT = 348,
    RWL_T_WHEN = 349,
    RWL_T_STATISTICS = 350,
    RWL_T_NOSTATISTICS = 351,
    RWL_T_FUNCTION = 352,
    RWL_T_PUBLIC = 353,
    RWL_T_OCIPING = 354,
    RWL_T_QUEUE = 355,
    RWL_T_NOQUEUE = 356,
    RWL_T_PRIVATE = 357,
    RWL_T_BEGIN = 358,
    RWL_T_RELEASE = 359,
    RWL_T_SYSTEM = 360,
    RWL_T_CLOB = 361,
    RWL_T_BLOB = 362,
    RWL_T_NCLOB = 363,
    RWL_T_READLOB = 364,
    RWL_T_WRITELOB = 365,
    RWL_T_RAW = 366,
    RWL_T_EXIT = 367,
    RWL_T_SUBSTR = 368,
    RWL_T_SUBSTRB = 369,
    RWL_T_LENGTH = 370,
    RWL_T_LENGTHB = 371,
    RWL_T_SQL_ID = 372,
    RWL_T_GETENV = 373,
    RWL_T_LOG = 374,
    RWL_T_EXP = 375,
    RWL_T_ROUND = 376,
    RWL_T_ACTIVESESSIONCOUNT = 377,
    RWL_T_REQUESTMARK = 378,
    RWL_T_SPRINTF = 379,
    RWL_T_OPENSESSIONCOUNT = 380,
    RWL_T_STATEMARK = 381,
    RWL_T_REGEXSUB = 382,
    RWL_T_REGEXSUBG = 383,
    RWL_T_SERVERRELEASE = 384,
    RWL_T_SQL = 385,
    RWL_T_SQL_TEXT = 386,
    RWL_T_INSTR = 387,
    RWL_T_INSTRB = 388,
    RWL_T_CONNECTIONPOOL = 389,
    RWL_T_CONNECTIONCLASS = 390,
    RWL_T_UNSIGNED = 391,
    RWL_T_HEXADECIMAL = 392,
    RWL_T_OCTAL = 393,
    RWL_T_FPRINTF = 394,
    RWL_T_ENCODE = 395,
    RWL_T_DECODE = 396,
    RWL_T_STRING_CONST = 397,
    RWL_T_IDENTIFIER = 398,
    RWL_T_INTEGER_CONST = 399,
    RWL_T_DOUBLE_CONST = 400,
    RWL_T_PRINTF = 401,
    RWL_T_PIPEFROM = 402,
    RWL_T_PIPETO = 403,
    RWL_T_RSHIFTASSIGN = 404,
    RWL_T_GLOBAL = 405,
    RWL_T_QUERYNOTIFICATION = 406,
    RWL_T_NORMALRANDOM = 407,
    RWL_T_STATISTICSONLY = 408,
    RWL_T_CEIL = 409,
    RWL_T_TRUNC = 410,
    RWL_T_FLOOR = 411,
    RWL_T_LOBPREFETCH = 412,
    RWL_T_SIN = 413,
    RWL_T_COS = 414,
    RWL_T_ATAN2 = 415,
    RWL_T_WINSLASHF2B = 416,
    RWL_T_WINSLASHF2BB = 417,
    RWL_T_BITWISE_LEFT_SHIFT = 418,
    RWL_T_BITWISE_RIGHT_SHIFT = 419,
    RWL_T_ASNBIS = 420,
    RWL_T_ASNBIC = 421,
    RWL_T_UMINUS = 422
  };
#endif

/* Value type.  */
#if ! defined RWLYSTYPE && ! defined RWLYSTYPE_IS_DECLARED

union RWLYSTYPE
{
#line 481 "rwlparser.y" /* yacc.c:1909  */

	/* this must be declared as it is ifdef'ed as YYSTYPE
	** but we never actually use it as the lexer sets
	** apropriate fields in rwm, which it gets as argument
	**
	** Note that the naming ival, dval, sval in the parser
	** for historical reasons are the same those bison normally
	** uses itself. Although they serve the same purpose as
	** in plain bison, there is NO relation to the ordinary
	** bison usage of these.
	*/
	void	*rwl_never_used;

#line 244 "rwlparser.tab.h" /* yacc.c:1909  */
};

typedef union RWLYSTYPE RWLYSTYPE;
# define RWLYSTYPE_IS_TRIVIAL 1
# define RWLYSTYPE_IS_DECLARED 1
#endif



int rwlyparse (rwl_main *rwm);

#endif /* !YY_RWLY_RWLPARSER_TAB_H_INCLUDED  */
