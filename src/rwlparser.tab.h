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
    RWL_T_PRINT = 263,
    RWL_T_PRINTLINE = 264,
    RWL_T_PRINTVAR = 265,
    RWL_T_SHARDKEY = 266,
    RWL_T_SUPERSHK = 267,
    RWL_T_PROCEDURE = 268,
    RWL_T_BIND = 269,
    RWL_T_DEFINE = 270,
    RWL_T_STRING = 271,
    RWL_T_INTEGER = 272,
    RWL_T_END = 273,
    RWL_T_FOR = 274,
    RWL_T_ARRAY = 275,
    RWL_T_DATE = 276,
    RWL_T_SQRT = 277,
    RWL_T_ACCESS = 278,
    RWL_T_REGEX = 279,
    RWL_T_REGEXTRACT = 280,
    RWL_T_UNIFORM = 281,
    RWL_T_ERLANG = 282,
    RWL_T_DOTDOT = 283,
    RWL_T_DOUBLE = 284,
    RWL_T_ERLANG2 = 285,
    RWL_T_ERLANGK = 286,
    RWL_T_RUN = 287,
    RWL_T_THREADS = 288,
    RWL_T_RUNSECONDS = 289,
    RWL_T_WHILE = 290,
    RWL_T_FFLUSH = 291,
    RWL_T_READLINE = 292,
    RWL_T_RANDOM = 293,
    RWL_T_FILE = 294,
    RWL_T_WRITE = 295,
    RWL_T_WRITELINE = 296,
    RWL_T_BINDOUT = 297,
    RWL_T_GETRUSAGE = 298,
    RWL_T_DRCP = 299,
    RWL_T_SESSIONPOOL = 300,
    RWL_T_RECONNECT = 301,
    RWL_T_DEDICATED = 302,
    RWL_T_DEFAULT = 303,
    RWL_T_RESULTS = 304,
    RWL_T_ASSIGN = 305,
    RWL_T_LOOP = 306,
    RWL_T_ALL = 307,
    RWL_T_NULL = 308,
    RWL_T_ISNULL = 309,
    RWL_T_SUM = 310,
    RWL_T_IS = 311,
    RWL_T_NOT = 312,
    RWL_T_LESSEQ = 313,
    RWL_T_GREATEQ = 314,
    RWL_T_NOTEQ = 315,
    RWL_T_AND = 316,
    RWL_T_OR = 317,
    RWL_T_BETWEEN = 318,
    RWL_T_CONCAT = 319,
    RWL_T_IF = 320,
    RWL_T_THEN = 321,
    RWL_T_ELSE = 322,
    RWL_T_NEVER = 323,
    RWL_T_APPEND = 324,
    RWL_T_IGNOREERROR = 325,
    RWL_T_ELSEIF = 326,
    RWL_T_EXECUTE = 327,
    RWL_T_WAIT = 328,
    RWL_T_COMMIT = 329,
    RWL_T_ROLLBACK = 330,
    RWL_T_EVERY = 331,
    RWL_T_ASNADD = 332,
    RWL_T_ASNSUB = 333,
    RWL_T_STOP = 334,
    RWL_T_START = 335,
    RWL_T_COUNT = 336,
    RWL_T_AT = 337,
    RWL_T_BREAK = 338,
    RWL_T_RETURN = 339,
    RWL_T_ABORT = 340,
    RWL_T_MODIFY = 341,
    RWL_T_CURSORCACHE = 342,
    RWL_T_NOCURSORCACHE = 343,
    RWL_T_LEAK = 344,
    RWL_T_SHIFT = 345,
    RWL_T_WHEN = 346,
    RWL_T_STATISTICS = 347,
    RWL_T_NOSTATISTICS = 348,
    RWL_T_FUNCTION = 349,
    RWL_T_PUBLIC = 350,
    RWL_T_OCIPING = 351,
    RWL_T_QUEUE = 352,
    RWL_T_NOQUEUE = 353,
    RWL_T_PRIVATE = 354,
    RWL_T_BEGIN = 355,
    RWL_T_RELEASE = 356,
    RWL_T_SYSTEM = 357,
    RWL_T_CLOB = 358,
    RWL_T_BLOB = 359,
    RWL_T_NCLOB = 360,
    RWL_T_READLOB = 361,
    RWL_T_WRITELOB = 362,
    RWL_T_RAW = 363,
    RWL_T_EXIT = 364,
    RWL_T_SUBSTR = 365,
    RWL_T_SUBSTRB = 366,
    RWL_T_LENGTH = 367,
    RWL_T_LENGTHB = 368,
    RWL_T_SQL_ID = 369,
    RWL_T_GETENV = 370,
    RWL_T_LOG = 371,
    RWL_T_EXP = 372,
    RWL_T_ROUND = 373,
    RWL_T_ACTIVESESSIONCOUNT = 374,
    RWL_T_REQUESTMARK = 375,
    RWL_T_SPRINTF = 376,
    RWL_T_OPENSESSIONCOUNT = 377,
    RWL_T_STATEMARK = 378,
    RWL_T_REGEXSUB = 379,
    RWL_T_REGEXSUBG = 380,
    RWL_T_SERVERRELEASE = 381,
    RWL_T_SQL = 382,
    RWL_T_SQL_TEXT = 383,
    RWL_T_INSTR = 384,
    RWL_T_INSTRB = 385,
    RWL_T_CONNECTIONPOOL = 386,
    RWL_T_CONNECTIONCLASS = 387,
    RWL_T_UNSIGNED = 388,
    RWL_T_HEXADECIMAL = 389,
    RWL_T_OCTAL = 390,
    RWL_T_FPRINTF = 391,
    RWL_T_ENCODE = 392,
    RWL_T_DECODE = 393,
    RWL_T_STRING_CONST = 394,
    RWL_T_IDENTIFIER = 395,
    RWL_T_INTEGER_CONST = 396,
    RWL_T_DOUBLE_CONST = 397,
    RWL_T_PRINTF = 398,
    RWL_T_PIPEFROM = 399,
    RWL_T_PIPETO = 400,
    RWL_T_RSHIFTASSIGN = 401,
    RWL_T_GLOBAL = 402,
    RWL_T_QUERYNOTIFICATION = 403,
    RWL_T_NORMALRANDOM = 404,
    RWL_T_STATISTICSONLY = 405,
    RWL_T_CEIL = 406,
    RWL_T_TRUNC = 407,
    RWL_T_FLOOR = 408,
    RWL_T_LOBPREFETCH = 409,
    RWL_T_SIN = 410,
    RWL_T_COS = 411,
    RWL_T_ATAN2 = 412,
    RWL_T_WINSLASHF2B = 413,
    RWL_T_WINSLASHF2BB = 414,
    RWL_T_UMINUS = 415
  };
#endif

/* Value type.  */
#if ! defined RWLYSTYPE && ! defined RWLYSTYPE_IS_DECLARED

union RWLYSTYPE
{
#line 468 "rwlparser.y" /* yacc.c:1909  */

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

#line 237 "rwlparser.tab.h" /* yacc.c:1909  */
};

typedef union RWLYSTYPE RWLYSTYPE;
# define RWLYSTYPE_IS_TRIVIAL 1
# define RWLYSTYPE_IS_DECLARED 1
#endif



int rwlyparse (rwl_main *rwm);

#endif /* !YY_RWLY_RWLPARSER_TAB_H_INCLUDED  */
