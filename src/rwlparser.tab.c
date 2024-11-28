/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Substitute the type names.  */
#define YYSTYPE         RWLYSTYPE
/* Substitute the variable and function names.  */
#define yyparse         rwlyparse
#define yylex           rwlylex
#define yyerror         rwlyerror
#define yydebug         rwlydebug
#define yynerrs         rwlynerrs


/* Copy the first part of user declarations.  */
#line 162 "rwlparser.y" /* yacc.c:339  */

#include "rwl.h"

/*
  rwm is an argument to rwlyparse
*/
#define rwlyrwmscanner rwm->rwlyscanner

// pretty print parser syntax errors
struct rwl_yt2txt
{
  const char *ytoken;
  const char *etext;
};

typedef struct rwl_yt2txt rwl_yt2txt;

// Note that this must be sorted by ytoken (first column)
static const rwl_yt2txt rwlyt2[] = 
{
    {"RWL_T_ABORT", "'abort'"}
  , {"RWL_T_ACCESS", "'access'"}
  , {"RWL_T_ACTIVESESSIONCOUNT", "'activesessioncount'"}
  , {"RWL_T_ALL", "'all'"}
  , {"RWL_T_AND", "'and'"}
  , {"RWL_T_APPEND", "'||='"}
  , {"RWL_T_ARRAY", "'array'"}
  , {"RWL_T_ASNADD", "'+='"}
  , {"RWL_T_ASNBIC", "'&~='"}
  , {"RWL_T_ASNBIS", "'|='"}
  , {"RWL_T_ASNSUB", "'-='"}
  , {"RWL_T_ASSIGN", "':='"}
  , {"RWL_T_AT", "'at'"}
  , {"RWL_T_ATAN2", "'atan2'"}
  , {"RWL_T_BEGIN", "'begin'"}
  , {"RWL_T_BETWEEN", "'between'"}
  , {"RWL_T_BIND", "'bind'"}
  , {"RWL_T_BINDOUT", "'bindout'"}
  , {"RWL_T_BLOB", "'blob'"}
  , {"RWL_T_BREAK", "'break'"}
  , {"RWL_T_CEIL", "'ceil'"}
  , {"RWL_T_CLOB", "'clob'"}
  , {"RWL_T_COMMIT", "'commit'"}
  , {"RWL_T_CONCAT", "'||'"}
  , {"RWL_T_CONNECT", "'connect'"}
  , {"RWL_T_CONNECTIONCLASS", "'connectionclass'"}
  , {"RWL_T_CONNECTIONPOOL", "'connectionpool'"}
  , {"RWL_T_COS", "'cos'"}
  , {"RWL_T_COUNT", "'count'"}
  , {"RWL_T_CURSORCACHE", "'cursorcache'"}
  , {"RWL_T_DATABASE", "'database'"}
  , {"RWL_T_DATE", "'date'"}
  , {"RWL_T_DBSECONDS", "'dbseconds'"}
  , {"RWL_T_DECODE", "'decode'"}
  , {"RWL_T_DEDICATED", "'dedicated'"}
  , {"RWL_T_DEFAULT", "'default'"}
  , {"RWL_T_DEFINE", "'define'"}
  , {"RWL_T_DOTDOT", "'..'"}
  , {"RWL_T_DOUBLE", "'double'"}
  , {"RWL_T_DOUBLE_CONST", "double constant"}
  , {"RWL_T_DRCP", "'drcp'"}
  , {"RWL_T_ELSE", "'else'"}
  , {"RWL_T_ELSEIF", "'elseif'"}
  , {"RWL_T_ENCODE", "'encode'"}
  , {"RWL_T_END", "'end'"}
  , {"RWL_T_EPOCHSECONDS", "'epochseconds'"}
  , {"RWL_T_ERLANG", "'erlang'"}
  , {"RWL_T_ERLANG2", "'erlang2'"}
  , {"RWL_T_ERLANGK", "'erlangk'"}
  , {"RWL_T_EVERY", "'every'"}
  , {"RWL_T_EXECUTE", "'execute'"}
  , {"RWL_T_EXIT", "'exit'"}
  , {"RWL_T_EXP", "'exp'"}
  , {"RWL_T_FFLUSH", "'fflush'"}
  , {"RWL_T_FILE", "'file'"}
  , {"RWL_T_FLOOR", "'floor'"}
  , {"RWL_T_FOR", "'for'"}
  , {"RWL_T_FPRINTF", "'fprintf'"}
  , {"RWL_T_FUNCTION", "'function'"}
  , {"RWL_T_GETENV", "'getenv'"}
  , {"RWL_T_GETRUSAGE", "'getrusage'"}
  , {"RWL_T_GLOBAL", "'global'"}
  , {"RWL_T_GREATEQ", "'>='"}
  , {"RWL_T_HEXADECIMAL", "'hexadecimal'"}
  , {"RWL_T_IDENTIFIER", "identifier"}
  , {"RWL_T_IF", "'if'"}
  , {"RWL_T_IGNOREERROR", "'ignoreerror'"}
  , {"RWL_T_INSTR", "'instr'"}
  , {"RWL_T_INSTRB", "'instrb'"}
  , {"RWL_T_INTEGER", "'integer'"}
  , {"RWL_T_INTEGER_CONST", "integer constant"}
  , {"RWL_T_IS", "'is'"}
  , {"RWL_T_ISNULL", "'isnull'"}
  , {"RWL_T_LEAK", "'leak'"}
  , {"RWL_T_LENGTH", "'length'"}
  , {"RWL_T_LENGTHB", "'lengthb'"}
  , {"RWL_T_LESSEQ", "'<='"}
  , {"RWL_T_LOBPREFETCH", "'lobprefetch'"}
  , {"RWL_T_LOG", "'log'"}
  , {"RWL_T_LOOP", "'loop'"}
  , {"RWL_T_MODIFY", "'modify'"}
  , {"RWL_T_NCLOB", "'nclob'"}
  , {"RWL_T_NOCURSORCACHE", "'nocursorcache'"}
  , {"RWL_T_NOQUEUE", "'noqueue'"}
  , {"RWL_T_NORMALRANDOM", "'normalrandom'"}
  , {"RWL_T_NOSTATISTICS", "'nostatistics'"}
  , {"RWL_T_NOT", "'not'"}
  , {"RWL_T_NOTEQ", "'!='"}
  , {"RWL_T_NULL", "'null'"}
  , {"RWL_T_OCIPING", "'ociping'"}
  , {"RWL_T_OCISECONDS", "'ociseconds'"}
  , {"RWL_T_OCTAL", "'octal'"}
  , {"RWL_T_OPENSESSIONCOUNT", "'opensessioncount'"}
  , {"RWL_T_OR", "'or'"}
  , {"RWL_T_PASSWORD", "'password'"}
  , {"RWL_T_PIPEFROM", "'|='"}
  , {"RWL_T_PIPETO", "'=|'"}
  , {"RWL_T_PRINT", "'print'"}
  , {"RWL_T_PRINTF", "'printf'"}
  , {"RWL_T_PRINTLINE", "'printline'"}
  , {"RWL_T_PRINTVAR", "'printvar'"}
  , {"RWL_T_PRIVATE", "'private'"}
  , {"RWL_T_PROCEDURE", "'procedure'"}
  , {"RWL_T_PROCEDURENAME", "'procedure name'"}
  , {"RWL_T_PUBLIC", "'public'"}
  , {"RWL_T_QUERYNOTIFICATION", "'querynotification'"}
  , {"RWL_T_QUEUE", "'queue'"}
  , {"RWL_T_RANDOM", "'random'"}
  , {"RWL_T_RAW", "'raw'"}
  , {"RWL_T_READLINE", "'readline'"}
  , {"RWL_T_READLOB", "'readlob'"}
  , {"RWL_T_RECONNECT", "'reconnect'"}
  , {"RWL_T_REGEX", "'regex'"}
  , {"RWL_T_REGEXSUB", "'regexsub'"}
  , {"RWL_T_REGEXSUBG", "'regexsubg'"}
  , {"RWL_T_REGEXTRACT", "'regextract'"}
  , {"RWL_T_RELEASE", "'release'"}
  , {"RWL_T_REQUESTMARK", "'requestmark'"}
  , {"RWL_T_RESULTS", "'results'"}
  , {"RWL_T_RETURN", "'return'"}
  , {"RWL_T_ROLLBACK", "'rollback'"}
  , {"RWL_T_ROUND", "'round'"}
  , {"RWL_T_RSHIFTASSIGN", "'>>='"}
  , {"RWL_T_RUN", "'run'"}
  , {"RWL_T_RUNSECONDS", "'runseconds'"}
  , {"RWL_T_SERVERRELEASE", "'serverrelease'"}
  , {"RWL_T_SESSIONPOOL", "'sessionpool'"}
  , {"RWL_T_SHARDKEY", "'shardkey'"}
  , {"RWL_T_SHIFT", "'shift'"}
  , {"RWL_T_SIN", "'sin'"}
  , {"RWL_T_SPRINTF", "'sprintf'"}
  , {"RWL_T_SQL", "'sql'"}
  , {"RWL_T_SQL_ID", "'sql_id'"}
  , {"RWL_T_SQL_TEXT", "SQL or PL/SQL text"}
  , {"RWL_T_SQRT", "'sqrt'"}
  , {"RWL_T_START", "'start'"}
  , {"RWL_T_STATEMARK", "'statemark'"}
  , {"RWL_T_STATISTICS", "'statistics'"}
  , {"RWL_T_STATISTICSONLY", "'statisticsonly'"}
  , {"RWL_T_STOP", "'stop'"}
  , {"RWL_T_STRING", "'string'"}
  , {"RWL_T_STRING_CONST", "string constant"}
  , {"RWL_T_SUBSTR", "'substr'"}
  , {"RWL_T_SUBSTRB", "'substrb'"}
  , {"RWL_T_SUM", "'sum'"}
  , {"RWL_T_SUPERSHK", "'supershk'"}
  , {"RWL_T_SYSTEM", "'system'"}
  , {"RWL_T_THEN", "'then'"}
  , {"RWL_T_THREADS", "'threads'"}
  , {"RWL_T_TRUNC", "'trunc'"}
  , {"RWL_T_UMINUS", "'uminus'"}
  , {"RWL_T_UNIFORM", "'uniform'"}
  , {"RWL_T_UNSIGNED", "'unsigned'"}
  , {"RWL_T_USERNAME", "'username'"}
  , {"RWL_T_WAIT", "'wait'"}
  , {"RWL_T_WHEN", "'when'"}
  , {"RWL_T_WHILE", "'while'"}
  , {"RWL_T_WINSLASHF2B", "'winslashf2b'"}
  , {"RWL_T_WINSLASHF2BB", "'winslashf2bb'"}
  , {"RWL_T_WRITE", "'write'"}
  , {"RWL_T_WRITELINE", "'writeline'"}
  , {"RWL_T_WRITELOB", "'writelob'"}
};
#define RWL_TOK_COUNT (sizeof(rwlyt2)/sizeof(rwl_yt2txt))

// compare - used by bsearch
static int rwlcmptok(const void *l1, const void *l2)
{
  rwl_yt2txt *y1, *y2;
  y1 = (rwl_yt2txt *)l1;
  y2 = (rwl_yt2txt *)l2;
  return strcmp(y1->ytoken, y2->ytoken);
}

// verify it is sorted
// note that we only run this if there is a -D flag set
// so we don't waste CPU in general
void rwlyt2assert(rwl_main *rwm)
{
  sb4 i;
  for (i=1; i<(sb4)RWL_TOK_COUNT; i++)
  {
    if (rwlcmptok(rwlyt2+i-1, rwlyt2+i) >= 0)
      rwlsevere(rwm, "[rwly2assert-badorder:%d;%s;%s]", i
        , rwlyt2[i-1].ytoken, rwlyt2[i].ytoken);
  }
}

static void rwlyerror(rwl_main *rwm, const char *in) 
{
  // print the error text that was givin at an 'error' syntax element
  // using the above translation table for RWL_T_xxxx

  char ytline[1000]; // must be large enough to hold the full yyerror text
  char ytok[50]; // must be large enough to hold the largest RWL_T_xxxx
  static char syer[] = "syntax error, ";
  const char *b;
  char *yt = ytline;
  ub4 tl, rl;
  rwl_yt2txt *t, key;

  key.ytoken = ytok;
  key.etext = 0;

  // before doing anything else, remove "syntax error, "
  if (!strncmp(in, syer, sizeof(syer)-1))
    in += sizeof(syer)-1;

  while (*in)
  {
    if (yt > ytline + sizeof(ytline) - 1)
    {
      rwlsevere(rwm, "[rwlyerror-toolongyrtext:%s;%s]", ytline, in);
      break;
    }
      
    if (strncmp(in,"RWL_T_", 6) && strncmp(in,"$end",4))
      *yt++ = *in++;
    else
    {
      if (!strncmp(in,"$end",4))
      {
	char *eof = "end-of-file";
	ub4 eol = strlen(eof);
	if (yt+eol > ytline + sizeof(ytline) - 1)
	{
	  rwlsevere(rwm, "[rwlyerror-toolongyrtext3:%s;%s]", ytline, in);
	  break;
	}
	strcpy(yt, eof);
	yt += eol;
	in += 4;
      }
      else if (!strncmp(in,"RWL_T_NEVER",11))
      {
        goto finishwithouterror;
      }
      else
      {
	t = 0;
	// scan for non upper case or underscore
	b = in;
	while (*b && strchr("ABCDEFGHIJKLMNOPQRSTUVWXYZ_",*b))
	  b++;
	tl = (ub4)(b-in);
	if (tl>sizeof(ytok)-1)
	  rwlsevere(rwm, "[rwlyerror-toolongtoken:%d;%s]", b, in);
	else
	{
	  strncpy(ytok,in,tl);
	  ytok[tl] = 0;
	  t = bsearch(&key, rwlyt2, RWL_TOK_COUNT, sizeof(rwl_yt2txt), rwlcmptok);
	}
	if (t)
	{
	  rl = strlen(t->etext);
	  if (yt+rl > ytline + sizeof(ytline) - 1)
	  {
	    rwlsevere(rwm, "[rwlyerror-toolongyrtext2:%s;%s]", ytline, in);
	    break;
	  }
	  strcpy(yt, t->etext);
	  yt += rl;
	  in += tl;
	}
	else 
	  *yt++ = *in++;
      }
    }
  }
  *yt = 0;
  if (rwm->loc.inpos)
    rwlerror(rwm, RWL_ERROR_RWLY_SYNTAX, rwm->loc.inpos, ytline);
  /* mark error line as soon as error is found */
  finishwithouterror:
  rwm->loc.errlin = rwm->loc.lineno; 
}

rwlcomp(rwlparser_y, RWL_GCCFLAGS)


#line 375 "rwlparser.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "rwlparser.tab.h".  */
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
#line 481 "rwlparser.y" /* yacc.c:355  */

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

#line 605 "rwlparser.tab.c" /* yacc.c:355  */
};

typedef union RWLYSTYPE RWLYSTYPE;
# define RWLYSTYPE_IS_TRIVIAL 1
# define RWLYSTYPE_IS_DECLARED 1
#endif



int rwlyparse (rwl_main *rwm);

#endif /* !YY_RWLY_RWLPARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 621 "rwlparser.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined RWLYSTYPE_IS_TRIVIAL && RWLYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5975

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  187
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  301
/* YYNRULES -- Number of rules.  */
#define YYNRULES  688
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1259

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   422

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   178,     2,     2,     2,   177,   169,     2,
     182,   183,   175,   174,   184,   173,     2,   176,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   186,   181,
     171,   170,   172,   185,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   168,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   167,     2,   179,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   180
};

#if RWLYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   543,   543,   550,   554,   556,   555,   571,   572,   573,
     575,   578,   585,   587,   604,   603,   613,   612,   621,   620,
     630,   629,   639,   644,   653,   654,   658,   657,   664,   669,
     677,   678,   682,   681,   689,   688,   761,   766,   767,   779,
     780,   783,   784,   787,   797,   802,   810,   823,   854,   865,
     877,   876,   892,   902,   901,   919,   929,   939,   949,   962,
     963,   966,   974,   984,   995,  1010,  1011,  1015,  1016,  1017,
    1020,  1044,  1068,  1080,  1082,  1081,  1094,  1095,  1100,  1104,
    1111,  1125,  1142,  1149,  1156,  1157,  1161,  1162,  1165,  1178,
    1177,  1229,  1241,  1240,  1261,  1266,  1273,  1278,  1285,  1371,
    1372,  1376,  1385,  1386,  1390,  1391,  1394,  1395,  1396,  1400,
    1401,  1405,  1433,  1435,  1437,  1439,  1454,  1459,  1464,  1472,
    1473,  1475,  1477,  1496,  1498,  1497,  1513,  1512,  1528,  1527,
    1543,  1586,  1600,  1614,  1628,  1640,  1644,  1645,  1646,  1647,
    1648,  1649,  1650,  1651,  1652,  1653,  1654,  1655,  1656,  1657,
    1658,  1660,  1662,  1664,  1666,  1667,  1670,  1673,  1674,  1678,
    1683,  1684,  1685,  1687,  1689,  1690,  1692,  1703,  1714,  1718,
    1724,  1728,  1734,  1738,  1744,  1749,  1753,  1761,  1759,  1786,
    1790,  1794,  1800,  1806,  1810,  1811,  1815,  1816,  1820,  1825,
    1826,  1827,  1832,  1833,  1834,  1835,  1836,  1840,  1841,  1842,
    1843,  1847,  1848,  1849,  1852,  1853,  1854,  1858,  1859,  1860,
    1861,  1862,  1863,  1867,  1868,  1869,  1873,  1874,  1878,  1879,
    1883,  1884,  1888,  1890,  1889,  1907,  1909,  1908,  1924,  1926,
    1935,  1925,  1950,  1951,  1955,  1956,  1966,  1967,  1971,  1979,
    1982,  1981,  1988,  1991,  1990,  1994,  1996,  1998,  2000,  2003,
    2009,  2038,  2053,  2066,  2068,  2069,  2073,  2075,  2079,  2081,
    2086,  2085,  2092,  2091,  2103,  2108,  2107,  2115,  2119,  2143,
    2169,  2167,  2195,  2193,  2304,  2313,  2312,  2316,  2315,  2320,
    2326,  2325,  2335,  2334,  2343,  2356,  2361,  2355,  2389,  2397,
    2402,  2396,  2431,  2438,  2454,  2453,  2466,  2482,  2493,  2499,
    2505,  2517,  2529,  2539,  2549,  2548,  2561,  2565,  2570,  2574,
    2581,  2597,  2599,  2601,  2601,  2602,  2605,  2607,  2609,  2606,
    2611,  2615,  2614,  2731,  2764,  2772,  2797,  2771,  2849,  2850,
    2851,  2852,  2854,  2855,  2863,  2864,  2872,  2873,  2882,  2885,
    2884,  2893,  2895,  2903,  2911,  2920,  2928,  2930,  2937,  2938,
    2949,  2985,  3022,  3063,  3080,  3062,  3122,  3129,  3136,  3174,
    3263,  3262,  3294,  3295,  3303,  3302,  3350,  3352,  3351,  3361,
    3512,  3511,  3659,  3665,  3668,  3684,  3688,  3692,  3699,  3700,
    3704,  3704,  3718,  3718,  3734,  3734,  3750,  3750,  3764,  3764,
    3795,  3796,  3797,  3800,  3806,  3805,  3815,  3814,  3832,  3831,
    3879,  3894,  3903,  3878,  3940,  3948,  3949,  3949,  3962,  3961,
    3968,  3969,  3970,  3976,  3977,  3981,  3985,  3993,  3997,  4001,
    4009,  4010,  4016,  4022,  4024,  4027,  4028,  4033,  4032,  4134,
    4136,  4135,  4190,  4194,  4198,  4199,  4203,  4218,  4227,  4242,
    4251,  4255,  4261,  4278,  4285,  4295,  4296,  4297,  4301,  4302,
    4318,  4328,  4334,  4342,  4348,  4356,  4362,  4370,  4375,  4382,
    4383,  4384,  4388,  4389,  4388,  4399,  4403,  4404,  4403,  4413,
    4420,  4421,  4424,  4424,  4505,  4503,  4517,  4594,  4691,  4692,
    4696,  4697,  4700,  4701,  4704,  4705,  4708,  4712,  4716,  4720,
    4739,  4745,  4747,  4750,  4751,  4760,  4761,  4766,  4765,  4774,
    4784,  4785,  4789,  4789,  4791,  4790,  4799,  4798,  4802,  4809,
    4810,  4814,  4814,  4816,  4815,  4822,  4821,  4825,  4834,  4930,
    4935,  4940,  4941,  4944,  4961,  4978,  4995,  5018,  5018,  5049,
    5070,  5070,  5093,  5092,  5108,  5107,  5123,  5122,  5139,  5140,
    5143,  5145,  5143,  5199,  5230,  5229,  5266,  5267,  5275,  5274,
    5298,  5299,  5303,  5302,  5341,  5340,  5363,  5363,  5390,  5391,
    5394,  5415,  5437,  5461,  5466,  5474,  5475,  5475,  5479,  5540,
    5575,  5590,  5639,  5648,  5649,  5657,  5658,  5659,  5660,  5661,
    5662,  5665,  5666,  5667,  5668,  5669,  5670,  5677,  5684,  5675,
    5710,  5710,  5723,  5736,  5737,  5741,  5754,  5755,  5762,  5767,
    5774,  5775,  5776,  5781,  5782,  5783,  5788,  5789,  5790,  5795,
    5796,  5797,  5802,  5807,  5808,  5819,  5830,  5841,  5845,  5852,
    5853,  5910,  5916,  5915,  6003,  6002,  6046,  6054,  6056,  6060,
    6064,  6053,  6106,  6115,  6119,  6126,  6128,  6132,  6125,  6170,
    6180,  6182,  6186,  6179,  6224,  6233,  6234,  6237,  6280,  6289,
    6315,  6314,  6345,  6351,  6352,  6355,  6356,  6360,  6365,  6390,
    6399,  6451,  6476,  6504,  6359,  6512,  6513,  6514,  6522,  6523,
    6531,  6549,  6530,  6553,  6557,  6558,  6565,  6566,  6567,  6573,
    6574,  6575,  6580,  6581,  6582,  6583,  6584,  6585,  6586
};
#endif

#if RWLYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "RWL_T_CONNECT", "RWL_T_USERNAME",
  "RWL_T_PASSWORD", "RWL_T_DATABASE", "RWL_T_EPOCHSECONDS",
  "RWL_T_DBSECONDS", "RWL_T_PRINT", "RWL_T_PRINTLINE", "RWL_T_PRINTVAR",
  "RWL_T_SHARDKEY", "RWL_T_SUPERSHK", "RWL_T_OCISECONDS",
  "RWL_T_PROCEDURE", "RWL_T_BIND", "RWL_T_DEFINE", "RWL_T_STRING",
  "RWL_T_INTEGER", "RWL_T_END", "RWL_T_PROCEDURENAME", "RWL_T_FOR",
  "RWL_T_ARRAY", "RWL_T_DATE", "RWL_T_SQRT", "RWL_T_ACCESS", "RWL_T_REGEX",
  "RWL_T_REGEXTRACT", "RWL_T_UNIFORM", "RWL_T_ERLANG", "RWL_T_DOTDOT",
  "RWL_T_DOUBLE", "RWL_T_ERLANG2", "RWL_T_ERLANGK", "RWL_T_RUN",
  "RWL_T_THREADS", "RWL_T_RUNSECONDS", "RWL_T_WHILE", "RWL_T_FFLUSH",
  "RWL_T_READLINE", "RWL_T_RANDOM", "RWL_T_FILE", "RWL_T_WRITE",
  "RWL_T_WRITELINE", "RWL_T_BINDOUT", "RWL_T_GETRUSAGE", "RWL_T_DRCP",
  "RWL_T_SESSIONPOOL", "RWL_T_RECONNECT", "RWL_T_DEDICATED",
  "RWL_T_DEFAULT", "RWL_T_RESULTS", "RWL_T_ASSIGN", "RWL_T_LOOP",
  "RWL_T_ALL", "RWL_T_NULL", "RWL_T_ISNULL", "RWL_T_SUM", "RWL_T_IS",
  "RWL_T_NOT", "RWL_T_LESSEQ", "RWL_T_GREATEQ", "RWL_T_NOTEQ", "RWL_T_AND",
  "RWL_T_OR", "RWL_T_BETWEEN", "RWL_T_CONCAT", "RWL_T_IF", "RWL_T_THEN",
  "RWL_T_ELSE", "RWL_T_NEVER", "RWL_T_APPEND", "RWL_T_IGNOREERROR",
  "RWL_T_ELSEIF", "RWL_T_EXECUTE", "RWL_T_WAIT", "RWL_T_COMMIT",
  "RWL_T_ROLLBACK", "RWL_T_EVERY", "RWL_T_ASNADD", "RWL_T_ASNSUB",
  "RWL_T_STOP", "RWL_T_START", "RWL_T_COUNT", "RWL_T_AT", "RWL_T_BREAK",
  "RWL_T_RETURN", "RWL_T_ABORT", "RWL_T_MODIFY", "RWL_T_CURSORCACHE",
  "RWL_T_NOCURSORCACHE", "RWL_T_LEAK", "RWL_T_SHIFT", "RWL_T_WHEN",
  "RWL_T_STATISTICS", "RWL_T_NOSTATISTICS", "RWL_T_FUNCTION",
  "RWL_T_PUBLIC", "RWL_T_OCIPING", "RWL_T_QUEUE", "RWL_T_NOQUEUE",
  "RWL_T_PRIVATE", "RWL_T_BEGIN", "RWL_T_RELEASE", "RWL_T_SYSTEM",
  "RWL_T_CLOB", "RWL_T_BLOB", "RWL_T_NCLOB", "RWL_T_READLOB",
  "RWL_T_WRITELOB", "RWL_T_RAW", "RWL_T_EXIT", "RWL_T_SUBSTR",
  "RWL_T_SUBSTRB", "RWL_T_LENGTH", "RWL_T_LENGTHB", "RWL_T_SQL_ID",
  "RWL_T_GETENV", "RWL_T_LOG", "RWL_T_EXP", "RWL_T_ROUND",
  "RWL_T_ACTIVESESSIONCOUNT", "RWL_T_REQUESTMARK", "RWL_T_SPRINTF",
  "RWL_T_OPENSESSIONCOUNT", "RWL_T_STATEMARK", "RWL_T_REGEXSUB",
  "RWL_T_REGEXSUBG", "RWL_T_SERVERRELEASE", "RWL_T_SQL", "RWL_T_SQL_TEXT",
  "RWL_T_INSTR", "RWL_T_INSTRB", "RWL_T_CONNECTIONPOOL",
  "RWL_T_CONNECTIONCLASS", "RWL_T_UNSIGNED", "RWL_T_HEXADECIMAL",
  "RWL_T_OCTAL", "RWL_T_FPRINTF", "RWL_T_ENCODE", "RWL_T_DECODE",
  "RWL_T_STRING_CONST", "RWL_T_IDENTIFIER", "RWL_T_INTEGER_CONST",
  "RWL_T_DOUBLE_CONST", "RWL_T_PRINTF", "RWL_T_PIPEFROM", "RWL_T_PIPETO",
  "RWL_T_RSHIFTASSIGN", "RWL_T_GLOBAL", "RWL_T_QUERYNOTIFICATION",
  "RWL_T_NORMALRANDOM", "RWL_T_STATISTICSONLY", "RWL_T_CEIL",
  "RWL_T_TRUNC", "RWL_T_FLOOR", "RWL_T_LOBPREFETCH", "RWL_T_SIN",
  "RWL_T_COS", "RWL_T_ATAN2", "RWL_T_WINSLASHF2B", "RWL_T_WINSLASHF2BB",
  "RWL_T_BITWISE_LEFT_SHIFT", "RWL_T_BITWISE_RIGHT_SHIFT", "RWL_T_ASNBIS",
  "RWL_T_ASNBIC", "'|'", "'^'", "'&'", "'='", "'<'", "'>'", "'-'", "'+'",
  "'*'", "'/'", "'%'", "'!'", "'~'", "RWL_T_UMINUS", "';'", "'('", "')'",
  "','", "'?'", "':'", "$accept", "rwlyparse", "terminator",
  "programelementlist", "$@1", "programelement", "globaldeclaration",
  "$@2", "$@3", "$@4", "$@5", "ranstringspec", "ranstringlist",
  "ranstringentry", "$@6", "ranidentifierspec", "ranidentifierlist",
  "ranidentifierentry", "$@7", "databasedeclaration", "$@8",
  "maybejustusername", "maybedbspeclist", "dbspeclist", "dbspec", "$@9",
  "$@10", "maybemarks", "eithermark", "maybemaxpoolsize", "releaselist",
  "poolrelease", "poolreleasecount", "poolreleaseevery", "poolreleaseidle",
  "maybewait", "$@11", "maybethentimeoutaction", "thenprocedurenamehead",
  "thenprocedurenametail", "compiletime_expression",
  "compiletime_concatenation", "subroutinedeclaration", "isaccepted",
  "functionhead", "$@12", "procedurehead", "$@13", "maybeprivatefunction",
  "maybeprivateprocedure", "codebody", "printvarlist", "printvarelement",
  "identifierorprocname", "maybeemptybrackets", "maybearguments",
  "formalargumentlist", "formalargument", "argumenttype",
  "maybestatistics", "codeterminator", "$@14", "$@15", "$@16",
  "identifier_or_constant", "$@17", "maybe_expression_list",
  "expression_list", "countexpressions", "primary_expression",
  "unary_expression", "multiplication", "addition", "bitwise_shift",
  "comparison", "equality", "bitwise_and", "bitwise_xor", "bitwise_or",
  "logicaland", "$@18", "logicalor", "$@19", "conditional", "$@20", "$@21",
  "expression", "concatenation", "statementlist", "goodorbadstatement",
  "$@22", "$@23", "statement", "$@24", "$@25", "$@26", "$@27", "$@28",
  "$@29", "$@30", "$@31", "$@32", "$@33", "$@34", "$@35", "$@36", "$@37",
  "$@38", "$@39", "$@40", "$@41", "$@42", "$@43", "$@44", "$@45", "$@46",
  "$@47", "beginofprocedurecall", "endofprocedurecall", "writelobhead",
  "$@48", "maybewritelobtail", "readlobhead", "$@49", "maybereadlobtail",
  "$@50", "docallonesql", "dosqlloop", "$@51", "controlloopheader",
  "controllooplistandend", "controlloopheadend", "controllooplist",
  "controlloopoption", "$@52", "$@53", "$@54", "$@55", "$@56",
  "maybequeue", "callsql", "$@57", "$@58", "embeddedsql", "$@59",
  "immediatesql", "$@60", "$@61", "$@62", "getdynamicorinlineimmsql",
  "$@63", "immediatesqlheader", "$@64", "immediatesqlendsqlisok",
  "immediatesqltail", "immediateatclause", "executehead",
  "maybeatdatabase", "declinitlist", "declinit", "$@65", "declinitassign",
  "$@66", "ifstatements", "elseifstatements", "maybeelseiflist", "ifhead",
  "elseifhead", "whileheadkeyword", "whilehead", "whileheadwrongkeyword",
  "maybethreadsattr", "maybeprivatestring", "maybeprivateinteger",
  "maybeprivatedouble", "maybeprivatelob", "eitherlobtype",
  "sqldeclaration", "$@67", "$@68", "$@69", "$@70", "namedsqldeclaration",
  "dynamicsqlbody", "$@71", "staticsqlbody", "$@72", "addsqlvariable",
  "parsesqlspecifications", "sqlspeclist", "sqlspec", "musthaveterminator",
  "maybearraydefine", "definelist", "defineelement", "$@73", "bindoutlist",
  "bindoutelement", "$@74", "$@75", "$@76", "bindlist", "bindelement",
  "$@77", "$@78", "$@79", "bdidentifier", "bdidentname", "modsqlstatement",
  "$@80", "$@81", "$@82", "$@83", "$@84", "modsqlbdlist", "modsqlbd",
  "$@85", "$@86", "moddbstatement", "$@87", "moddbsespmaybedotdot",
  "printf", "$@88", "sprintfheader", "sprintf", "$@89", "fprintf", "$@90",
  "handlefprintflist", "$@91", "printflist", "printfelement", "write",
  "print", "printlist", "$@92", "printelement", "pwterminator",
  "pfterminator", "assignrightside", "assignterminator",
  "declassignoperator", "assignoperator", "loopiterator", "$@93", "$@94",
  "$@95", "commaconcatenationlist", "commaconcatenation",
  "loopiteratorrecover", "maybeprivatefile", "executeterminator",
  "loopterminator", "ifterminator", "sqlterminator", "whileterminator",
  "maybeandexpression", "getstaticsqltext", "getinlinesql", "$@96",
  "readfromfile", "$@97", "regexsub", "$@98", "$@99", "$@100", "$@101",
  "regexsuborsubg", "regextract", "$@102", "$@103", "$@104", "regex",
  "$@105", "$@106", "$@107", "readlist", "readlistelement", "systemstart",
  "systemfinish", "threadexecution", "$@108", "threadlistp", "threadorcqn",
  "cqnthread", "$@109", "$@110", "$@111", "$@112", "$@113", "$@114",
  "$@115", "cqnterminator", "maybecqnstart", "thread", "$@116", "$@117",
  "maybedatabase", "threadsterminator", "runterminator",
  "maybeenderrorkeyword", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   124,    94,    38,
      61,    60,    62,    45,    43,    42,    47,    37,    33,   126,
     422,    59,    40,    41,    44,    63,    58
};
# endif

#define YYPACT_NINF -926

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-926)))

#define YYTABLE_NINF -672

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -926,   127,   333,  -926,  3533,   -43,    57,  -926,   -43,    67,
    -926,  -926,  -926,  1482,   260,  1948,  2110,  -926,    39,  2177,
      68,   120,   156,  -926,   132,   136,   -37,  -926,   -43,  2339,
     269,  5793,   -43,   -43,   -31,  1718,   -43,    85,   -43,   -43,
    -926,   -43,   457,   363,  -926,  -926,  -926,  -926,   198,   233,
    2406,    52,  -926,  -926,    53,  -926,   139,   240,  -926,  -926,
    -926,  -926,  -926,  -926,    55,   334,   334,   140,   141,  -926,
    -926,   -43,   345,   -43,  1651,  -926,    94,  -926,  -926,    49,
      76,    96,   145,  -926,    59,    72,   316,   -43,   -43,  1320,
    2568,   146,  -926,  -926,  2635,  -926,  -926,  5793,  -926,  -926,
     -43,  -926,  -926,  -926,   -43,  -926,   199,  -926,  -926,   -43,
    -926,  5793,   -43,   373,   341,   393,   477,   345,   -43,  5793,
     -43,  5793,   529,    16,   553,   -37,   369,   395,   412,   424,
     438,   443,   444,   447,   -37,  -926,   448,  5793,   449,   450,
     451,   452,   456,   458,   459,   460,   464,   465,   467,   468,
    -926,   470,  -926,  -926,   471,   474,   475,   478,   479,   480,
     482,   483,   484,  5793,  5793,  5793,  5793,   525,  -926,  -926,
     357,   226,   185,   335,   245,   490,   469,   472,   580,    22,
    -926,   278,   -43,   -43,   -43,  -926,   645,   646,   -43,  -926,
     -43,  -926,   493,   -43,  -926,  2797,   609,    86,    65,    31,
    -926,  -926,   -43,  -926,   -43,  -926,  5793,  -926,   -43,   360,
     536,  -926,  -926,  -926,  -926,  -926,  -926,  -926,   377,  -926,
    -926,   153,  -926,   -43,   500,   501,   503,   504,   -43,  5793,
     -43,   546,  -926,   672,   621,   556,  -926,   -43,   516,   -43,
     558,   651,  -926,   -43,  -926,  -926,  -926,  -926,  -926,  -926,
    -926,  -926,   -43,  -926,   -43,  -926,   455,  -926,   265,  -926,
     -43,  -926,   686,   356,  -926,    56,  -926,  3258,  3664,   -43,
     294,  5793,  -926,   -43,   565,   -43,   565,   -43,  -926,   223,
    -926,   -43,   -43,   -43,  -926,  -926,   -43,  -926,  -926,  -926,
    -926,  -926,   -43,  5793,  -926,  5793,  -926,   -43,  5568,  -926,
     293,  -926,   -43,   565,   -43,  5793,    46,  -926,  5793,  -926,
      27,  -926,  -926,  5793,    63,   527,  -926,  -926,  -926,  -926,
     656,  -926,  -926,  5793,   663,   477,  -926,  -926,  -926,  -926,
    -926,   508,  2864,  -926,   274,  -926,  -926,  -926,  -926,  -926,
    -926,  -926,  -926,  -926,  -926,  -926,   535,   538,  5793,  5793,
    5793,  5793,  5793,  5793,  -926,  5793,  -926,  5793,  5793,  5793,
      50,  5793,  5793,  5793,  5793,   160,   162,    66,  5793,  -926,
    5793,  5793,  5793,  5793,  5793,  5793,  5793,  5793,  5793,  -926,
    -926,  -926,   542,   102,  5793,  5793,  5793,  5793,  5793,  5793,
    5793,  5793,  5793,  5793,  5793,  5793,  5793,  5793,  5793,  5793,
    5793,  -926,  -926,  -926,  5793,  -926,  -926,  -926,  -926,   544,
     583,   586,  -926,  -926,  -926,  -926,   -43,    77,  -926,  -926,
    -926,  -926,  -926,  -926,  -926,  -926,  -926,  -926,   -43,   -43,
    5793,  -926,  -926,   707,   710,   715,   596,  -926,  -926,  5793,
     -43,  -926,  5793,   -43,  -926,  -926,  -926,  -926,  -926,  -926,
    -926,  -926,  -926,  -926,  -926,   689,   600,  -926,  -926,  -926,
    -926,  -926,  -926,  -926,  -926,  -926,  -926,  -926,  -926,  2797,
    -926,  5793,  -926,   -43,   -43,   -43,  -926,  3795,  -926,  -926,
     563,  -926,   563,  -926,  -926,  -926,  -926,  -926,  -926,  -926,
     281,  -926,   667,  -926,  -926,  -926,  -926,  -926,  -926,  -926,
    -926,  -926,  -926,  5793,  -926,  3926,   -43,   -43,  -926,  -926,
    -926,    88,   133,   142,   402,   473,  -926,  -926,   676,    54,
    -926,  -926,  -926,   568,   681,   565,  -926,   223,  -926,   223,
    -926,   381,   565,  -926,  -926,  -926,  -926,  -926,  5793,  -926,
     293,   293,  -926,  -926,  -926,  -926,  -926,   223,  -926,  -926,
     -43,   610,   -43,   323,  -926,  -926,  -926,   574,   -43,   105,
    -926,  -926,  -926,  5793,   544,  3026,   477,   681,  -926,  -926,
     663,   576,   577,  -926,  -926,  -926,  -926,  -926,  -926,   -43,
     738,  -926,   677,    70,  -926,  -926,  -926,    23,   584,    62,
      90,   175,   114,   239,    37,   585,   587,   590,   591,  -926,
     592,   -18,   134,   246,   594,   597,   598,   599,   602,   606,
     608,   612,   595,  5793,   138,   248,   256,   257,   262,   267,
     244,   613,   618,  -926,  -926,   711,  -926,  -926,  -926,   357,
     357,   226,   226,   185,   185,   255,   185,   185,   335,   335,
     245,   490,   469,  5793,  5793,  5793,  -926,   649,   309,  -926,
    -926,  -926,  -926,   -43,  -926,  -926,   -43,  -926,  -926,   -43,
     289,   582,   650,   659,  -926,  -926,   660,   681,  -926,  5793,
     681,  -926,   -43,  5343,  -926,  -926,  -926,  -926,  -926,   620,
    -926,  -926,  -926,  -926,  -926,   272,   722,     7,  5793,  5793,
    5793,  5793,  -926,  -926,  -926,  -926,  -926,  -926,  -926,  -926,
    5793,  -926,   627,    64,  -926,  -926,  4057,   -43,   -43,  -926,
     -43,  -926,   -43,   809,   812,   -43,  3093,  -926,  -926,   -43,
     -43,   -43,  -926,  -926,   778,   223,  -926,  -926,  -926,  -926,
    -926,   620,  -926,  -926,  5793,  -926,   631,  -926,  -926,  -926,
    -926,  5726,  5793,  5793,   768,  -926,  5793,  -926,  -926,  -926,
    -926,  5793,  5793,  5793,   -43,   323,  -926,    63,  -926,   -43,
     -43,   -43,  -926,    32,   -12,   789,  -926,   663,  -926,  -926,
    5793,  5793,  -926,   508,   736,   679,   -43,   -43,  -926,  -926,
    -926,  5793,  5793,  -926,  -926,  5793,  -926,   640,  -926,   682,
    5793,  -926,  -926,  -926,  -926,  -926,  5793,  -926,  5793,  -926,
    -926,  -926,  -926,  -926,  -926,  -926,  -926,  -926,  5793,   641,
    5793,  -926,  -926,  -926,  -926,  -926,  5793,  -926,  -926,  -926,
    5793,   472,   580,   642,  -926,  -926,  -926,    40,    44,  -926,
    -926,  -926,  5793,  5793,   -43,  -926,  -926,  -926,   751,  -926,
    -926,  -926,  -926,  -926,   -43,  -926,  -926,  5343,  -926,   643,
    -926,  -926,   652,  -926,  -926,  -926,  -926,  -926,  -926,  -926,
    5793,   648,  -926,  -926,  -926,  -926,  -926,  -926,   328,  -926,
     688,   462,  -926,  -926,  -926,  -926,   681,   681,   681,   681,
    4188,  5793,   -43,  -926,  -926,   -43,   -43,  -926,  -926,    56,
    -926,  -926,  -926,  -926,  5793,  -926,   -43,   -43,  -926,   763,
     347,  3389,  -926,  -926,  -926,  -926,  -926,  5793,  -926,  5793,
     -43,   692,  -926,  -926,  -926,  -926,  -926,   394,  -926,  -926,
    -926,  -926,  -926,  -926,  -926,  -926,  -926,   782,  -926,  -926,
    -926,  -926,   653,  4319,  -926,  4450,  -926,  -926,   -43,   695,
    -926,  -926,  -926,  -926,   271,   273,   280,  -926,   657,   147,
     284,   288,   375,  -926,   295,   299,   185,  -926,   -43,    27,
    -926,   -43,   699,  -926,   681,   681,  -926,  -926,  -926,  5793,
    -926,  5793,  -926,  -926,    40,    44,  -926,  5793,  -926,   674,
    -926,  -926,  5793,  -926,   462,  -926,  -926,    71,   681,  -926,
    -926,     6,   721,  -926,  -926,  -926,  4581,  -926,  -926,  -926,
    -926,  -926,   565,  -926,  -926,  -926,  -926,   394,   811,  -926,
    -926,  -926,   811,  -926,  5793,  5793,    -8,  -926,    71,    71,
     544,   544,  -926,  -926,  4712,   760,  -926,  -926,  -926,  -926,
    -926,  5793,  -926,  -926,  -926,  5793,  -926,  -926,  5793,  -926,
     413,  -926,  -926,  -926,  -926,   432,  -926,   813,   661,  -926,
    5793,   661,  -926,   681,   661,  -926,  -926,   681,    38,    43,
    -926,  1881,    42,   -43,   -43,   -43,  -926,  -926,   664,  -926,
     -43,   -43,  -926,  -926,  -926,  -926,  -926,  -926,    70,  4843,
     223,   662,  5793,  -926,  -926,  -926,  -926,  -926,  -926,  -926,
    -926,  -926,   309,   309,   828,  5793,   767,   300,   301,  -926,
     -43,    27,  5793,  5793,   -43,   699,  5793,  -926,  -926,   681,
     -43,  -926,  -926,  -926,  -926,   337,  -926,   -43,  -926,  -926,
     376,  -926,   -43,  -926,  5793,   -43,  -926,  -926,  -926,  -926,
     401,  -926,  -926,  -926,  -926,  -926,  -926,  -926,  -926,   345,
    -926,    73,  -926,  5793,  -926,    47,   746,  4974,   797,  -926,
    -926,    73,  -926,  5793,  -926,  -926,  -926,  -926,  -926,  -926,
    -926,  -926,   681,  -926,   709,  -926,    74,    74,    74,   366,
    -926,  -926,    74,     0,  -926,  -926,   -43,  -926,    74,    74,
      74,   383,  -926,  -926,   -43,   -43,  -926,  -926,  -926,  5793,
    5501,  -926,  -926,  -926,  -926,  -926,    71,  -926,  -926,  -926,
    -926,  -926,  -926,   742,  -926,  -926,  -926,  -926,  -926,  -926,
    -926,  -926,  -926,  -926,  -926,  -926,  -926,  -926,   670,  -926,
    5793,  5793,  -926,  -926,   761,  -926,   713,   788,  -926,  -926,
    -926,   -43,    89,  -926,  -926,  -926,   678,  -926,  5105,  -926,
    5793,   792,  5793,  -926,  -926,   675,  -926,  -926,  -926,  5236,
    -926,   842,    99,   -43,   -43,  -926,  -926,  -926,  -926
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       4,     0,     5,     1,     0,     0,     0,   563,   564,     0,
      97,   452,   454,     0,     0,     0,     0,   456,     0,     0,
       0,     0,     0,   599,     0,     0,   104,   372,   280,     0,
     417,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      95,     0,     0,     0,   648,   459,   460,   461,     0,     0,
       0,     0,   633,   634,     0,   398,     0,     0,   548,     3,
     250,     6,     8,    12,     0,    86,    86,     0,     0,     7,
     353,     0,   313,     0,     0,   321,     0,   236,   236,     0,
       0,     0,     0,   458,     0,     0,     0,     0,     0,     0,
       0,     0,   328,   330,     0,   331,   329,     0,     9,   357,
       0,    34,   345,   103,     0,   102,     0,    99,   101,     0,
     358,   184,     0,     0,   393,     0,   617,   413,     0,     0,
       0,     0,     0,     0,     0,   104,     0,     0,     0,     0,
       0,     0,     0,     0,   104,   135,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     134,   131,   133,   132,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   189,   192,   197,
     201,   204,   207,   213,   216,   218,   220,   222,   225,   228,
     232,     0,     0,     0,     0,   624,     0,     0,     0,   561,
       0,   562,     0,     0,   348,     0,     0,     0,     0,     0,
     300,   301,     0,   350,     0,   284,     0,   251,     0,     0,
       0,   302,   252,   310,    96,   451,   453,   455,     0,   598,
      94,     0,   457,     0,     0,   366,     0,   362,     0,     0,
       0,     0,   551,     0,     0,     0,   476,     0,     0,     0,
     394,     0,   556,     0,   126,   124,   123,   128,    13,    87,
     236,   236,     0,    89,     0,    92,   390,   369,     0,   369,
       0,   369,     0,   406,   236,     0,   270,     0,     0,     0,
       0,     0,   260,     0,     0,     0,     0,     0,   427,     0,
     425,     0,     0,     0,   609,   253,     0,   570,   336,   552,
     334,   332,     0,     0,   569,     0,   338,     0,   234,   568,
       0,   565,     0,     0,     0,     0,     0,    36,    37,    10,
       0,    11,   309,   184,     0,   185,   186,   188,   274,   325,
       0,   408,   318,     0,     0,   617,   414,   644,   641,   639,
     636,   682,     0,   657,     0,   653,   656,   655,   441,   447,
     445,   446,   440,   443,   444,   182,     0,     0,     0,     0,
       0,     0,     0,     0,   181,     0,   195,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   177,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   193,
     194,   196,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   223,   226,   229,     0,   442,   324,   323,   626,     0,
       0,     0,   343,   344,   105,   303,     0,     0,   281,   437,
     436,   418,   419,   293,   349,   288,   286,   306,     0,     0,
       0,   294,   304,     0,     0,     0,     0,   299,   364,     0,
       0,   360,     0,     0,   292,   290,   335,   550,   469,   409,
     467,   399,   333,   554,   356,     0,     0,   575,   578,   576,
     582,   583,   584,   579,   580,   577,   585,   586,   581,     0,
     549,     0,   130,     0,     0,     0,    85,     0,    84,    88,
     106,    91,   106,   386,   382,   380,   384,   391,   392,   354,
     390,   378,     0,   311,   415,   416,   314,   369,   315,   404,
     622,   621,   476,     0,   405,     0,     0,     0,   606,   269,
     236,     0,     0,     0,     0,     0,   237,   238,   432,     0,
     264,   449,   450,     0,    82,     0,   257,     0,   259,     0,
     255,   429,     0,   254,   612,   610,   611,   337,     0,   342,
       0,     0,   347,   235,   566,   346,   267,     0,   632,   628,
       0,     0,     0,    39,    38,    83,   100,     0,     0,     0,
     420,   308,   359,     0,     0,     0,   617,   618,   370,   316,
       0,     0,     0,   684,   688,   685,   687,   683,   686,     0,
       0,   670,     0,     0,   654,   179,   180,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   174,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   184,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   183,   190,     0,   198,   199,   200,   203,
     202,   205,   206,   210,   211,     0,   208,   209,   215,   214,
     217,   219,   221,     0,     0,     0,   233,     0,     0,   645,
      20,    16,   572,     0,   573,   571,     0,   297,   298,     0,
       0,     0,     0,     0,   465,   463,     0,   367,   351,     0,
     363,   352,     0,   472,   556,   395,   397,   283,   560,   557,
     558,   127,   125,   129,    98,     0,     0,   119,     0,     0,
       0,     0,   236,   377,   376,   375,   374,   379,   388,   312,
       0,   401,     0,     0,   608,   607,     0,     0,     0,   243,
       0,   240,     0,     0,     0,     0,     0,   435,   236,     0,
       0,     0,   613,   268,   448,     0,   256,   258,   428,   430,
     426,   553,   341,   340,     0,   266,     0,   279,   277,   649,
     276,     0,     0,     0,     0,    55,     0,    58,    59,    49,
      48,     0,     0,     0,     0,    40,    41,     0,   424,     0,
       0,     0,   187,   617,     0,   590,   236,     0,   236,   320,
       0,     0,   652,   682,   674,     0,     0,     0,   679,   651,
     145,     0,     0,   160,   161,     0,   164,     0,   157,     0,
       0,   149,   176,   175,   154,   138,     0,   140,     0,   144,
     173,   172,   171,   170,   169,   167,   166,   168,     0,     0,
       0,   141,   142,   143,   146,   147,     0,   155,   156,   191,
       0,   224,   227,     0,   647,   625,   646,     0,     0,   574,
     287,   296,     0,     0,     0,   534,   532,   530,   527,   536,
     524,   525,   523,   529,     0,    18,    14,   472,   365,     0,
     361,   291,     0,   468,   471,   478,   470,   476,   619,   555,
       0,   114,   112,   113,   116,   118,   117,   107,     0,   109,
       0,     0,   121,   122,   120,    93,   387,   383,   381,   385,
       0,     0,   491,   478,   407,     0,     0,   600,   322,     0,
     246,   245,   236,   242,     0,   239,     0,     0,   247,     0,
       0,     0,   616,   614,   615,   262,   261,     0,   567,     0,
       0,     0,    46,    43,    44,    59,    53,    56,    52,    50,
      45,    35,    42,   307,   423,   421,   422,     0,   597,   596,
     592,   587,     0,     0,   319,     0,   642,   637,     0,     0,
     236,   658,   681,   680,     0,     0,     0,   159,     0,     0,
       0,     0,     0,   178,     0,     0,   212,   230,     0,     0,
      21,     0,     0,    17,   544,   543,   295,   540,   540,     0,
     526,     0,   540,   305,     0,     0,   464,     0,   620,     0,
     474,   559,     0,   108,     0,   111,    90,     0,   389,   492,
     623,   410,     0,   602,   601,   271,     0,   236,   248,   249,
     439,   438,     0,   431,   629,   278,    47,    57,    63,    62,
      61,    60,    63,   326,     0,     0,     0,   593,     0,     0,
       0,     0,   673,   675,     0,   668,   165,   136,   162,   158,
     152,     0,   137,   139,   150,     0,   163,   148,     0,    29,
       0,    30,    32,    23,    26,     0,    24,   546,   535,   538,
       0,   533,   531,   528,   537,    19,    15,   368,     0,     0,
     473,     0,     0,   491,   491,   491,   479,   478,     0,   110,
       0,     0,   603,   355,   411,   412,   402,   477,     0,     0,
       0,     0,     0,    65,    65,   236,   588,   595,   591,   594,
     273,   371,     0,     0,     0,     0,     0,     0,     0,   231,
       0,     0,     0,     0,     0,     0,     0,   545,   540,   541,
       0,   517,   511,   513,   515,   491,   509,     0,   499,   497,
     491,   495,     0,   494,     0,     0,   508,   502,   504,   506,
     491,   500,   486,   487,   488,   475,   115,   605,   604,   413,
     244,     0,   263,     0,    64,    73,    51,     0,     0,   643,
     638,     0,   669,     0,   153,   151,    28,    31,    33,    27,
      22,    25,   547,   539,     0,   481,     0,     0,     0,     0,
     480,   485,     0,     0,   484,   490,   491,   483,     0,     0,
       0,     0,   482,   403,     0,     0,   676,   241,   630,     0,
       0,    66,    67,    68,    69,    54,     0,   589,   672,   659,
     542,   520,   519,   521,   512,   518,   514,   516,   510,   498,
     496,   489,   503,   505,   507,   501,   678,   677,     0,    74,
       0,     0,    72,   327,     0,   522,     0,    76,    71,    70,
     660,     0,     0,    75,   236,   631,    80,    77,     0,    80,
     184,     0,   184,    81,   662,     0,    78,   236,    81,     0,
      79,     0,     0,     0,     0,   665,   664,   667,   666
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -926,  -926,    -5,  -926,  -926,  -926,  -926,  -926,  -926,  -926,
    -926,  -112,  -926,  -241,  -926,  -109,  -926,  -233,  -926,  -926,
    -926,  -926,  -926,  -926,   111,  -926,  -926,   -46,  -926,  -140,
    -211,  -926,  -926,  -926,  -926,  -926,  -926,  -926,  -365,  -373,
    -319,  -294,  -926,   810,  -926,  -926,  -926,  -926,  -926,  -926,
     628,  -926,   572,   -63,     1,   396,  -926,  -101,    14,  -926,
    -926,  -926,  -926,  -926,  -926,  -926,  -306,  -926,   324,  -926,
     187,  -102,    20,  -374,   170,   488,   489,   494,   247,   249,
    -926,  -926,  -926,  -402,  -926,  -926,   238,   429,   -73,  -926,
    -926,  -926,   885,  -926,  -926,  -926,  -926,  -926,  -926,  -926,
    -926,  -926,  -926,  -926,  -926,  -926,  -926,  -926,  -926,  -926,
    -926,  -926,  -926,  -926,  -926,  -926,  -926,   785,   149,  -926,
    -926,  -926,  -926,  -926,  -926,  -926,  -235,  -538,  -926,  -926,
    -926,  -926,  -926,   407,  -926,  -926,  -926,  -926,  -926,  -926,
     889,  -926,  -926,   890,  -926,   784,  -926,  -926,  -926,  -926,
    -926,  -926,  -926,  -926,  -232,   836,  -926,  -926,  -266,   378,
    -926,  -926,  -926,  -926,  -926,  -926,  -926,  -926,   728,  -926,
    -926,   -69,  -926,  -926,  -926,  -926,   -36,  -926,  -926,  -926,
    -926,  -926,    69,  -926,  -926,  -926,  -926,  -480,  -156,    58,
    -926,  -679,  -926,  -926,  -261,  -926,  -926,  -267,  -926,  -926,
    -926,  -926,  -254,  -926,  -926,  -926,  -497,  -926,  -926,  -926,
    -926,  -926,  -926,  -926,  -622,  -191,  -926,  -926,  -926,  -926,
    -926,  -926,  -926,  -926,  -926,  -926,  -926,  -926,   251,  -926,
     380,    60,  -926,  -926,   193,  -926,   188,  -275,   530,   454,
    -926,   388,  -926,  -926,  -926,  -926,  -926,  -926,   -95,  -926,
    -926,  -926,  -925,    41,  -926,  -926,  -310,  -926,   668,  -926,
    -926,  -926,  -926,  -926,  -926,  -926,  -926,  -926,  -926,  -926,
    -926,  -926,  -926,  -926,  -926,  -926,  -555,  -632,  -926,    25,
    -926,  -926,  -926,   603,  -926,  -926,  -926,  -926,  -926,  -926,
    -926,  -926,  -926,  -926,  -926,  -926,  -926,  -926,  -213,  -139,
     167
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    60,     2,     4,    61,    62,   975,   828,   974,
     827,   963,  1045,  1046,  1103,   960,  1040,  1041,  1102,    63,
     308,   553,   754,   755,   756,  1012,  1008,   917,  1011,  1083,
    1145,  1191,  1192,  1193,  1194,  1195,  1227,  1233,  1240,  1246,
     523,   852,    64,   250,    65,   480,    66,   482,    67,    68,
     476,   106,   107,   108,   193,   686,   868,   869,   870,   875,
     248,   474,   473,   475,   167,   613,   314,   315,   316,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     643,   179,   644,   180,   645,  1038,   298,   555,   477,   516,
     894,   892,   517,   525,  1002,   303,   510,   320,   552,   910,
     195,   241,   206,   656,   229,   672,   660,   661,   259,   115,
     566,   264,   564,  1085,   295,   256,   692,   111,   561,   227,
     669,   443,   225,   666,   440,   849,   493,   569,   768,    70,
     489,   696,   490,   491,   690,   689,   691,   688,   881,   492,
      71,   455,   456,    72,   236,    73,   263,   883,  1139,   502,
     503,    74,   234,  1076,   325,   326,    75,   562,   279,   280,
     531,   728,   907,    76,   717,   518,    77,   718,   343,    78,
     344,   272,    79,    80,    81,    82,    83,    84,   436,   847,
     235,   673,   853,   854,   855,   856,  1067,   451,   991,   992,
    1066,   990,  1124,  1120,  1121,  1172,  1130,  1131,  1178,  1179,
    1180,  1115,  1116,  1166,  1167,  1168,  1204,  1205,   844,   971,
     969,   968,   967,   972,  1048,  1049,  1050,  1164,   834,  1047,
    1107,    85,   242,    86,    87,   538,    88,   674,   470,   471,
     679,   680,    89,    90,   300,   734,   301,   296,   288,   418,
     655,   468,   469,   766,  1014,  1148,   932,  1016,  1017,   930,
      91,   888,  1073,   509,   285,   723,   324,   857,   858,   700,
      92,   409,    93,   305,   736,  1081,  1218,    94,    95,   121,
     572,  1021,    96,   119,   571,  1020,   648,   649,    97,   740,
      98,   123,   334,   335,   336,   582,  1025,  1224,  1234,  1241,
    1247,  1251,  1256,  1096,   337,   774,  1094,   940,  1187,   779,
     579
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      99,   247,   646,   102,   267,   268,   222,   557,   527,   763,
     529,   274,   276,   581,   554,   570,   826,   633,   634,   635,
     636,   637,   701,   194,   496,   545,   498,   200,   201,   203,
     205,   207,   769,   211,   212,   356,   213,   547,   787,  1110,
     122,   958,   928,  1125,  1117,   961,  1088,   550,   103,   404,
     269,   597,   332,   230,   233,   719,   243,   506,   100,   246,
     281,   379,   380,   381,   558,   885,   257,   608,   261,   182,
     244,   776,  1070,   286,  1184,  -650,   103,   273,   653,   284,
     287,  1201,   287,   287,   294,   270,   208,   402,   103,   707,
     404,   209,   720,  1090,  1091,   307,   323,   275,   404,   309,
    1253,   311,   872,   873,   312,   777,   759,   318,   721,  1185,
    1236,  1202,   270,   327,   265,   329,   421,   609,   610,   231,
     202,   184,   104,  1189,   507,  1071,   345,     3,  -408,   404,
    1118,   826,   270,   188,   709,   354,  1074,   190,    59,   886,
     237,   252,   254,   711,  1119,   192,   277,   302,   559,  1075,
      59,  1190,   245,   404,   435,   420,   760,   404,   624,   708,
     874,   604,   625,   606,   266,   795,   796,   333,  1111,    59,
     105,   186,  1126,  1118,   187,  1237,  1015,   406,   407,   408,
    1112,   404,  1113,   412,  1127,   413,  1128,  1119,   415,   282,
    -650,   505,  -448,   598,   423,   232,  -466,   424,   105,   425,
     101,   404,   283,   427,   710,   404,   780,   403,   422,   611,
     105,   183,    59,   712,   404,   210,   647,  1203,   437,  -448,
     788,   789,   959,   444,  1114,   446,   962,  -275,  1129,   934,
     551,   271,   452,   599,   454,    59,    59,    59,   472,  -448,
      59,   239,   404,   823,    59,    59,   782,   479,   761,   481,
    1254,    59,    59,    59,    59,   497,   767,   181,    59,   725,
     508,   112,   699,   185,   520,   732,   733,   197,   526,   199,
     528,  1223,   530,   783,   533,   189,   534,   535,   536,   191,
      59,   537,   238,   253,   255,   629,   630,   539,   278,  -265,
     861,   862,   542,  -282,   583,   294,  -462,   546,   785,   548,
     113,  -282,  -282,   605,   863,   607,   404,   809,   396,   560,
     332,   404,  -282,   404,   864,   404,   494,   797,   798,   820,
    -282,  -282,   810,   404,   404,   240,   741,   742,   743,   404,
    1030,  1031,   338,    -2,   404,   693,  -373,   832,   404,  -373,
     404,   224,  -373,  -373,  -373,   404,  1051,   404,   389,   390,
    1054,   404,   521,   342,   198,   404,   694,   483,   784,   744,
    -373,  -373,   404,   484,   485,   486,   404,   404,   404,   223,
     745,   746,   747,   748,   749,   750,   226,   980,   865,   833,
      59,   487,   488,   310,  1132,  1133,  1134,  -282,  -282,  -282,
    -317,    55,   433,   249,  -272,   434,   391,   392,   500,   387,
     388,   393,   866,   114,    59,  -282,  -282,   532,   495,   631,
     632,   652,   654,   751,   404,   397,  1001,   713,   389,   390,
     714,  -393,   786,   657,   658,   333,   240,   916,   816,   799,
     258,   811,   918,   919,   457,   668,  1170,   706,   671,   812,
     813,  1174,   458,   459,   522,   814,   956,   912,   913,   914,
     815,  1182,   428,   927,  1026,   867,  1027,   752,   753,   920,
     826,   826,    59,  1028,   429,  1092,  1093,  1032,   681,   682,
     683,  1033,   214,   715,    59,   215,   216,   544,  1036,   222,
     861,   862,  1037,  1154,  1155,   695,   540,   501,   541,   217,
      59,   215,   216,   647,   863,   430,  1111,  1211,   218,   219,
     289,   704,   705,   431,   864,   217,   394,   395,  1112,   524,
    1113,   983,   984,  1126,   722,   219,   319,  1009,    59,   299,
    1010,  1169,   726,   321,   727,  1127,   306,  1128,   463,   464,
     465,   483,   384,   385,   386,   294,   294,   484,   485,   486,
     317,   323,   735,   573,   574,   737,   575,   739,   328,   331,
     330,   346,  1114,   758,   220,   487,   488,    59,  1034,  1035,
    1173,   567,   576,    45,    46,    47,   638,   639,   865,  1129,
     524,   626,   627,   628,   772,   997,   577,   347,   778,    45,
      46,    47,    59,   578,   383,  1181,   587,   221,   589,   590,
     591,   592,   866,   593,   348,   382,  1100,  1101,   835,   836,
     601,   602,   603,   221,   837,   838,   349,   338,   614,   615,
     616,   617,   618,   619,   620,  1104,  1105,   290,   291,   880,
     350,   339,   340,   341,   417,   351,   352,   839,   342,   353,
     355,   357,   358,   359,   360,   426,  1099,   399,   361,   400,
     362,   363,   364,   825,   401,   901,   365,   366,   829,   367,
     368,   830,   369,   370,   831,   905,   371,   372,   445,   398,
     373,   374,   375,  1068,   376,   377,   378,   851,   410,   411,
    1206,  1207,   840,   841,   842,  1209,   414,   667,   419,   432,
     670,  1212,  1213,  1214,   438,   439,   843,   441,   442,   447,
    1058,  1059,   448,   933,  1060,   935,   449,  1061,   887,   450,
     453,  -396,   890,   891,   457,   893,   499,   895,   278,   565,
     898,   563,   458,   459,   902,   903,   904,   568,   585,  1062,
     906,   586,   299,   460,   299,   623,   650,   543,   647,   651,
     662,   461,   462,   663,   549,   664,  1080,  1058,  1059,   665,
     675,  1077,   317,   676,  1061,   685,   698,  1063,   404,   921,
     716,   724,   560,   738,   924,   925,   926,   757,   773,   929,
     770,   771,   775,  1144,  1064,  1065,  1062,   819,   781,   790,
     791,   942,   943,   792,   793,   794,  1152,   800,   588,   808,
     801,   802,   803,  1158,  1159,   804,   594,   595,   596,   805,
     600,   806,   824,   845,  1063,   807,   817,   612,   463,   464,
     465,   818,   846,   848,   860,  1176,   621,   622,   884,   871,
     896,  1064,  1065,   897,   270,   909,   466,   467,   915,   996,
     931,   939,   941,   947,   953,   948,   970,   977,   957,   966,
     982,   985,  1000,   978,  1199,  1006,  1013,  1015,  1023,   973,
    1029,  1044,  1082,  1095,  1106,  1108,  1143,  1136,  1151,  1153,
    1190,  1197,  1200,  1225,  1226,  1230,  1231,  1232,  1248,   659,
    1239,  1244,  1252,  1056,  1161,  1055,   922,  1024,  1157,  1007,
    1219,  1222,  1084,  1146,  1242,  1250,   251,   989,   687,   478,
     993,   994,   556,  1069,   508,   986,   640,   762,   641,    69,
     821,   998,   999,   822,   642,   313,  1042,   697,   417,   322,
     678,  1228,  1229,   116,   117,   739,   923,  1183,   260,   405,
     730,  1135,  1210,   979,  1215,  1208,   976,  1163,   731,   729,
     981,  1089,   908,   677,  1079,   859,   876,   877,   878,   879,
     995,   504,   702,  1022,  1243,  1005,  1245,   584,  1198,  1140,
     938,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1039,   900,     0,  1043,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   678,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1072,     0,   524,     0,     0,     0,     0,   524,
     524,     0,   317,     0,   765,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1147,  1072,  1072,     0,     0,     0,     0,   944,
     945,     0,     0,   946,     0,     0,     0,     0,   949,     0,
       0,     0,     0,     0,   950,     0,   951,     0,  1042,     0,
       0,     0,   317,     0,     0,     0,     0,     0,   954,     0,
       0,     0,     0,     0,   955,     0,     0,     0,   989,   989,
     989,     0,     0,     0,     0,  1137,  1138,     0,     0,     0,
     964,   965,     0,   778,     0,  1142,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1149,  1150,     0,
       0,     0,     0,     0,     0,  1156,     0,     0,   850,  1160,
       0,     0,     0,     0,     0,  1165,     0,     0,     0,     0,
     989,     0,  1171,     0,     0,   989,     0,  1175,     0,   988,
    1177,     0,     0,     0,     0,   989,     0,     0,     0,   882,
       0,     0,   524,     0,     0,     0,  1186,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1186,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1238,     0,   299,     0,     0,     0,     0,     0,     0,
       0,   989,     0,     0,  1249,     0,     0,     0,     0,  1216,
    1217,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1072,     0,     0,     0,     0,     0,     0,     0,   936,
     937,     0,     0,     0,     0,     0,     0,     0,     0,  1053,
       0,     0,     0,     0,     0,  1057,     0,     0,     0,     0,
     524,     0,     0,     0,     0,     0,  1235,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   952,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1255,  1257,  1258,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1097,
       0,     0,     0,  1098,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1109,   678,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     524,   292,     0,     0,     0,     0,     0,  -339,  -339,     0,
       0,     0,     0,   524,  -339,     0,  1003,     0,  1004,     0,
     524,   524,     0,     0,  1162,  -339,  -339,     0,     0,  -339,
    -339,     0,     0,  -339,  -339,     0,     0,  -339,     0,     0,
       0,     0,   524,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -339,  -339,     0,     0,
    -339,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   524,     0,     0,     0,     0,     0,     0,  1052,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -339,     0,   524,   524,     0,
       0,     0,     0,     0,  -339,     0,  -339,  -339,  -339,  -339,
    -339,  -339,  -339,  1086,  1087,  -339,     0,     0,     0,  -339,
       0,     0,     0,  -339,     0,     0,     0,     0,   524,   524,
       0,     0,  -339,  -339,  -339,  -339,     0,     0,     0,     0,
       0,     0,  -339,     0,  -339,  -339,  -339,     0,  -339,  -339,
    -339,  -339,  -339,   109,     0,     0,     0,     0,     0,  -358,
    -358,     0,     0,  -339,     0,     0,  -358,     0,  -339,  -339,
       0,    59,  -339,     0,   293,     0,     0,  -358,  -358,     0,
       0,  -358,  -358,     0,     0,  -358,  -358,     0,     0,  -358,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -358,  -358,
       0,     0,  -358,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -358,     0,     0,
       0,     0,  1188,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -358,     0,     0,
       0,     0,     0,     0,     0,     0,  -358,     0,  -358,  -358,
    -358,  -358,  -358,  -358,  -358,     0,     0,  -358,     0,     0,
       0,  -358,     0,     0,     0,  -358,     0,     0,     0,     0,
       0,     0,     0,     0,  -358,  -358,  -358,  -358,     0,     0,
       0,     0,     0,     0,  -358,     0,  -358,  -358,  -358,     0,
    -358,  -358,  -358,  -358,  -358,     0,     0,     0,     0,     0,
       0,     0,   262,     0,     0,  -358,     0,     0,  -400,  -400,
    -358,  -358,     0,  -358,   110,  -400,     0,     0,     0,   317,
       0,   317,     0,     0,     0,     0,  -400,  -400,     0,     0,
    -400,  -400,     0,     0,  -400,  -400,     0,     0,  -400,     0,
       0,     0,     0,  -400,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -400,  -400,     0,
       0,  -400,     0,     0,     0,     0,     0,     0,     0,   204,
       0,     0,     0,     0,     0,  -285,  -285,     0,     0,     0,
       0,     0,  -285,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -285,  -285,     0,     0,  -285,  -285,     0,
       0,  -285,  -285,     0,     0,  -285,  -400,     0,     0,     0,
       0,     0,     0,     0,     0,  -400,     0,  -400,  -400,  -400,
    -400,  -400,  -400,  -400,  -285,  -285,  -400,     0,  -285,     0,
    -400,     0,  -400,     0,  -400,     0,     0,     0,     0,     0,
       0,     0,     0,  -400,  -400,  -400,  -400,     0,     0,     0,
       0,     0,     0,  -400,     0,  -400,  -400,  -400,     0,  -400,
    -400,  -400,  -400,  -400,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -285,  -400,     0,     0,     0,     0,  -400,
    -400,     0,  -285,  -400,  -285,  -285,  -285,  -285,  -285,  -285,
    -285,     0,     0,  -285,     0,     0,     0,  -285,     0,     0,
       0,  -285,     0,     0,     0,     0,     0,     0,     0,     0,
    -285,  -285,  -285,  -285,     0,     0,     0,     0,     0,     0,
    -285,     0,  -285,  -285,  -285,     0,  -285,  -285,  -285,  -285,
    -285,     0,  1122,     0,     0,     0,     0,     0,  -493,  -493,
       0,  -285,     0,     0,     0,  -493,  -285,  -285,  1123,    59,
    -285,     0,     0,     0,     0,     0,  -493,  -493,     0,     0,
    -493,  -493,     0,     0,  -493,  -493,     0,     0,  -493,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -493,  -493,     0,
       0,  -493,     0,     0,     0,     0,     0,     0,     0,   118,
       0,     0,     0,     0,     0,  -640,  -640,     0,     0,     0,
       0,     0,  -640,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -640,  -640,     0,     0,  -640,  -640,     0,
       0,  -640,  -640,     0,     0,  -640,  -493,     0,     0,     0,
       0,     0,     0,     0,     0,  -493,     0,  -493,  -493,  -493,
    -493,  -493,  -493,  -493,  -640,  -640,  -493,     0,  -640,     0,
    -493,     0,     0,     0,  -493,     0,     0,     0,     0,     0,
       0,     0,     0,  -493,  -493,  -493,  -493,     0,     0,     0,
       0,     0,     0,  -493,     0,  -493,  -493,  -493,     0,  -493,
    -493,  -493,  -493,  -493,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -640,  -493,     0,     0,     0,     0,  -493,
    -493,     0,  -640,  -493,  -640,  -640,  -640,  -640,  -640,  -640,
    -640,     0,     0,  -640,     0,     0,     0,  -640,     0,     0,
       0,  -640,     0,     0,     0,     0,     0,     0,     0,     0,
    -640,  -640,  -640,  -640,     0,     0,     0,     0,     0,     0,
    -640,     0,  -640,  -640,  -640,     0,  -640,  -640,  -640,  -640,
    -640,   120,     0,     0,     0,     0,     0,  -635,  -635,     0,
       0,  -640,     0,     0,  -635,     0,  -640,  -640,     0,     0,
    -640,     0,     0,     0,     0,  -635,  -635,     0,     0,  -635,
    -635,     0,     0,  -635,  -635,     0,     0,  -635,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -635,  -635,     0,     0,
    -635,     0,     0,     0,     0,     0,     0,     0,   124,     0,
       0,     0,     0,     0,   125,   126,     0,     0,     0,     0,
       0,   127,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   128,   129,     0,     0,   130,   131,     0,     0,
     132,   133,     0,     0,   134,  -635,     0,     0,     0,     0,
       0,     0,     0,     0,  -635,     0,  -635,  -635,  -635,  -635,
    -635,  -635,  -635,   135,   136,  -635,     0,   137,     0,  -635,
       0,     0,     0,  -635,     0,     0,     0,     0,     0,     0,
       0,     0,  -635,  -635,  -635,  -635,     0,     0,     0,     0,
       0,     0,  -635,     0,  -635,  -635,  -635,     0,  -635,  -635,
    -635,  -635,  -635,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   138,  -635,     0,     0,     0,     0,  -635,  -635,
       0,   139,  -635,   140,   141,   142,   143,   144,   145,   146,
       0,     0,   147,     0,     0,     0,   148,     0,     0,     0,
     149,     0,     0,     0,     0,     0,     0,     0,     0,   150,
     151,   152,   153,     0,     0,     0,     0,     0,     0,   154,
       0,   155,   156,   157,     0,   158,   159,   160,   161,   162,
     196,     0,     0,     0,     0,     0,   125,   126,     0,     0,
     163,     0,     0,   127,     0,   164,   165,     0,     0,   166,
       0,     0,     0,     0,   128,   129,     0,     0,   130,   131,
       0,     0,   132,   133,     0,     0,   134,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   135,   136,     0,     0,   137,
       0,     0,     0,     0,     0,     0,     0,   228,     0,     0,
       0,     0,     0,  -289,  -289,     0,     0,     0,     0,     0,
    -289,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -289,  -289,     0,     0,  -289,  -289,     0,     0,  -289,
    -289,     0,     0,  -289,   138,     0,     0,     0,     0,     0,
       0,     0,     0,   139,     0,   140,   141,   142,   143,   144,
     145,   146,  -289,  -289,   147,     0,  -289,     0,   148,     0,
       0,     0,   149,     0,     0,     0,     0,     0,     0,     0,
       0,   150,   151,   152,   153,     0,     0,     0,     0,     0,
       0,   154,     0,   155,   156,   157,     0,   158,   159,   160,
     161,   162,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -289,   163,     0,     0,     0,     0,   164,   165,     0,
    -289,   166,  -289,  -289,  -289,  -289,  -289,  -289,  -289,     0,
       0,  -289,     0,     0,     0,  -289,     0,     0,     0,  -289,
       0,     0,     0,     0,     0,     0,     0,     0,  -289,  -289,
    -289,  -289,     0,     0,     0,     0,     0,     0,  -289,     0,
    -289,  -289,  -289,     0,  -289,  -289,  -289,  -289,  -289,   297,
       0,     0,     0,     0,     0,   125,   126,     0,     0,  -289,
       0,     0,   127,     0,  -289,  -289,     0,     0,  -289,     0,
       0,     0,     0,   128,   129,     0,     0,   130,   131,     0,
       0,   132,   133,     0,     0,   134,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   135,   136,     0,     0,   137,     0,
       0,     0,     0,     0,     0,     0,   304,     0,     0,     0,
       0,     0,  -627,  -627,     0,     0,     0,     0,     0,  -627,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -627,  -627,     0,     0,  -627,  -627,     0,     0,  -627,  -627,
       0,     0,  -627,   138,     0,     0,     0,     0,     0,     0,
       0,     0,   139,     0,   140,   141,   142,   143,   144,   145,
     146,  -627,  -627,   147,     0,  -627,     0,   148,     0,     0,
       0,   149,     0,     0,     0,     0,     0,     0,     0,     0,
     150,   151,   152,   153,     0,     0,     0,     0,     0,     0,
     154,     0,   155,   156,   157,     0,   158,   159,   160,   161,
     162,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -627,   163,     0,     0,     0,     0,   164,   165,     0,  -627,
     166,  -627,  -627,  -627,  -627,  -627,  -627,  -627,     0,     0,
    -627,     0,     0,     0,  -627,     0,     0,     0,  -627,     0,
       0,     0,     0,     0,     0,     0,     0,  -627,  -627,  -627,
    -627,     0,     0,     0,     0,     0,     0,  -627,     0,  -627,
    -627,  -627,     0,  -627,  -627,  -627,  -627,  -627,   416,     0,
       0,     0,     0,     0,   125,   126,     0,     0,  -627,     0,
       0,   127,     0,  -627,  -627,     0,     0,  -627,     0,     0,
       0,     0,   128,   129,     0,     0,   130,   131,     0,     0,
     132,   133,     0,     0,   134,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   135,   136,     0,     0,   137,     0,     0,
       0,     0,     0,     0,     0,   580,     0,     0,     0,     0,
       0,   125,   126,     0,     0,     0,     0,     0,   127,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   128,
     129,     0,     0,   130,   131,     0,     0,   132,   133,     0,
       0,   134,   138,     0,     0,     0,     0,     0,     0,     0,
       0,   139,     0,   140,   141,   142,   143,   144,   145,   146,
     135,   136,   147,     0,   137,     0,   148,     0,     0,     0,
     149,     0,     0,     0,     0,     0,     0,     0,     0,   150,
     151,   152,   153,     0,     0,     0,     0,     0,     0,   154,
       0,   155,   156,   157,     0,   158,   159,   160,   161,   162,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   138,
     163,     0,     0,     0,     0,   164,   165,     0,   139,   166,
     140,   141,   142,   143,   144,   145,   146,     0,     0,   147,
       0,     0,     0,   148,     0,     0,     0,   149,     0,     0,
       0,     0,     0,     0,     0,     0,   150,   151,   152,   153,
       0,     0,     0,     0,     0,     0,   154,     0,   155,   156,
     157,     0,   158,   159,   160,   161,   162,   764,     0,     0,
       0,     0,     0,   125,   126,     0,     0,   163,     0,     0,
     127,     0,   164,   165,     0,     0,   166,     0,     0,     0,
       0,   128,   129,     0,     0,   130,   131,     0,     0,   132,
     133,     0,     0,   134,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   135,   136,     0,     0,   137,     0,     0,     0,
       0,     0,     0,     0,   899,     0,     0,     0,     0,     0,
     125,   126,     0,     0,     0,     0,     0,   127,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   128,   129,
       0,     0,   130,   131,     0,     0,   132,   133,     0,     0,
     134,   138,     0,     0,     0,     0,     0,     0,     0,     0,
     139,     0,   140,   141,   142,   143,   144,   145,   146,   135,
     136,   147,     0,   137,     0,   148,     0,     0,     0,   149,
       0,     0,     0,     0,     0,     0,     0,     0,   150,   151,
     152,   153,     0,     0,     0,     0,     0,     0,   154,     0,
     155,   156,   157,     0,   158,   159,   160,   161,   162,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   138,   163,
       0,     0,     0,     0,   164,   165,     0,   139,   166,   140,
     141,   142,   143,   144,   145,   146,     0,     0,   147,     0,
       0,     0,   148,     0,     0,     0,   149,     0,     0,     0,
       0,     0,     0,     0,     0,   150,   151,   152,   153,     0,
       0,     0,     0,     0,     0,   154,     0,   155,   156,   157,
       0,   158,   159,   160,   161,   162,     0,     0,     0,     5,
       0,     0,     0,     0,   511,     0,   163,     7,     8,     0,
       0,   164,   165,     0,     0,   166,    11,    12,  -434,    13,
      14,     0,     0,     0,     0,    15,    16,     0,     0,     0,
      17,     0,     0,   512,   513,     0,    19,    20,    21,   514,
      23,    24,    25,     0,    26,     0,     0,     0,     0,     0,
       0,     0,    27,     0,    28,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    29,     0,  -434,     0,
       0,     0,  -434,    30,    31,    32,    33,     0,     0,     0,
       0,     0,     0,     0,    34,    35,    36,    37,     0,     0,
       0,    38,     0,     0,    39,     0,     0,    41,     0,     0,
     515,     0,    43,    44,    45,    46,    47,    48,    49,     0,
      50,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    51,     0,     0,    52,    53,     0,    54,    55,
       5,     0,     0,     0,     0,   511,     0,    56,     7,     8,
       0,    57,     0,     0,    58,     0,     0,    11,    12,  -433,
      13,    14,     0,     0,     0,     0,    15,    16,     0,     0,
       0,    17,     0,     0,   512,   513,     0,    19,    20,    21,
     514,    23,    24,    25,     0,    26,     0,     0,     0,    59,
       0,     0,     0,    27,     0,    28,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    29,     0,  -433,
       0,     0,     0,  -433,    30,    31,    32,    33,     0,     0,
       0,     0,     0,     0,     0,    34,    35,    36,    37,     0,
       0,     0,    38,     0,     0,    39,     0,     0,    41,     0,
       0,   515,     0,    43,    44,    45,    46,    47,    48,    49,
       0,    50,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    51,     0,     0,    52,    53,     0,    54,
      55,     0,     0,     0,     0,     0,     0,     0,    56,     0,
       0,     0,    57,     0,     5,    58,     0,     0,     0,     6,
       0,     0,     7,     8,     9,     0,     0,     0,    10,     0,
       0,    11,    12,     0,    13,    14,     0,     0,     0,     0,
      15,    16,     0,     0,     0,    17,     0,     0,    18,     0,
      59,    19,    20,    21,    22,    23,    24,    25,     0,    26,
       0,     0,     0,     0,     0,     0,     0,    27,     0,    28,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    29,     0,     0,     0,     0,     0,     0,    30,    31,
      32,    33,     0,     0,     0,     0,     0,     0,     0,    34,
      35,    36,    37,     0,     0,     0,    38,     0,     0,    39,
      40,     0,    41,     0,     0,    42,     0,    43,    44,    45,
      46,    47,    48,    49,     0,    50,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    51,     0,     0,
      52,    53,     0,    54,    55,     5,     0,     0,     0,     0,
     511,     0,    56,     7,     8,     0,    57,     0,     0,    58,
       0,     0,    11,    12,   519,    13,    14,     0,     0,     0,
       0,    15,    16,     0,     0,     0,    17,     0,     0,   512,
     513,     0,    19,    20,    21,   514,    23,    24,    25,     0,
      26,     0,     0,     0,    59,     0,     0,     0,    27,     0,
      28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    29,     0,     0,     0,     0,     0,     0,    30,
      31,    32,    33,     0,     0,     0,     0,     0,     0,     0,
      34,    35,    36,    37,     0,     0,     0,    38,     0,     0,
      39,     0,     0,    41,     0,     0,   515,     0,    43,    44,
      45,    46,    47,    48,    49,     0,    50,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    51,     0,
       0,    52,    53,     0,    54,    55,     5,     0,     0,     0,
       0,   511,     0,    56,     7,     8,     0,    57,     0,     0,
      58,     0,     0,    11,    12,   684,    13,    14,     0,     0,
       0,     0,    15,    16,     0,     0,     0,    17,     0,     0,
     512,   513,     0,    19,    20,    21,   514,    23,    24,    25,
       0,    26,     0,     0,     0,    59,     0,     0,     0,    27,
       0,    28,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    29,     0,     0,     0,     0,     0,     0,
      30,    31,    32,    33,     0,     0,     0,     0,     0,     0,
       0,    34,    35,    36,    37,     0,     0,     0,    38,     0,
       0,    39,     0,     0,    41,     0,     0,   515,     0,    43,
      44,    45,    46,    47,    48,    49,     0,    50,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    51,
       0,     0,    52,    53,     0,    54,    55,     5,     0,     0,
       0,     0,   511,     0,    56,     7,     8,     0,    57,     0,
       0,    58,     0,     0,    11,    12,   703,    13,    14,     0,
       0,     0,     0,    15,    16,     0,     0,     0,    17,     0,
       0,   512,   513,     0,    19,    20,    21,   514,    23,    24,
      25,     0,    26,     0,     0,     0,    59,     0,     0,     0,
      27,     0,    28,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    29,     0,     0,     0,     0,     0,
       0,    30,    31,    32,    33,     0,     0,     0,     0,     0,
       0,     0,    34,    35,    36,    37,     0,     0,     0,    38,
       0,     0,    39,     0,     0,    41,     0,     0,   515,     0,
      43,    44,    45,    46,    47,    48,    49,     0,    50,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      51,     0,     0,    52,    53,     0,    54,    55,     5,     0,
       0,     0,     0,   511,     0,    56,     7,     8,     0,    57,
       0,     0,    58,     0,     0,    11,    12,   889,    13,    14,
       0,     0,     0,     0,    15,    16,     0,     0,     0,    17,
       0,     0,   512,   513,     0,    19,    20,    21,   514,    23,
      24,    25,     0,    26,     0,     0,     0,    59,     0,     0,
       0,    27,     0,    28,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    29,     0,     0,     0,     0,
       0,     0,    30,    31,    32,    33,     0,     0,     0,     0,
       0,     0,     0,    34,    35,    36,    37,     0,     0,     0,
      38,     0,     0,    39,     0,     0,    41,     0,     0,   515,
       0,    43,    44,    45,    46,    47,    48,    49,     0,    50,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    51,     0,     0,    52,    53,     0,    54,    55,     5,
       0,     0,     0,     0,   511,     0,    56,     7,     8,     0,
      57,     0,     0,    58,     0,     0,    11,    12,   987,    13,
      14,     0,     0,     0,     0,    15,    16,     0,     0,     0,
      17,     0,     0,   512,   513,     0,    19,    20,    21,   514,
      23,    24,    25,     0,    26,     0,     0,     0,    59,     0,
       0,     0,    27,     0,    28,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    29,     0,     0,     0,
       0,     0,     0,    30,    31,    32,    33,     0,     0,     0,
       0,     0,     0,     0,    34,    35,    36,    37,     0,     0,
       0,    38,     0,     0,    39,     0,     0,    41,     0,     0,
     515,     0,    43,    44,    45,    46,    47,    48,    49,     0,
      50,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    51,     0,     0,    52,    53,     0,    54,    55,
       5,     0,     0,     0,     0,   511,     0,    56,     7,     8,
       0,    57,     0,     0,    58,     0,     0,    11,    12,  1018,
      13,    14,     0,     0,     0,     0,    15,    16,     0,     0,
       0,    17,     0,     0,   512,   513,     0,    19,    20,    21,
     514,    23,    24,    25,     0,    26,     0,     0,     0,    59,
       0,     0,     0,    27,     0,    28,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    29,     0,     0,
       0,     0,     0,     0,    30,    31,    32,    33,     0,     0,
       0,     0,     0,     0,     0,    34,    35,    36,    37,     0,
       0,     0,    38,     0,     0,    39,     0,     0,    41,     0,
       0,   515,     0,    43,    44,    45,    46,    47,    48,    49,
       0,    50,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    51,     0,     0,    52,    53,     0,    54,
      55,     5,     0,     0,     0,     0,   511,     0,    56,     7,
       8,     0,    57,     0,     0,    58,     0,     0,    11,    12,
    1019,    13,    14,     0,     0,     0,     0,    15,    16,     0,
       0,     0,    17,     0,     0,   512,   513,     0,    19,    20,
      21,   514,    23,    24,    25,     0,    26,     0,     0,     0,
      59,     0,     0,     0,    27,     0,    28,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    29,     0,
       0,     0,     0,     0,     0,    30,    31,    32,    33,     0,
       0,     0,     0,     0,     0,     0,    34,    35,    36,    37,
       0,     0,     0,    38,     0,     0,    39,     0,     0,    41,
       0,     0,   515,     0,    43,    44,    45,    46,    47,    48,
      49,     0,    50,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    51,     0,     0,    52,    53,     0,
      54,    55,     5,     0,     0,     0,     0,   511,     0,    56,
       7,     8,     0,    57,     0,     0,    58,     0,     0,    11,
      12,  1078,    13,    14,     0,     0,     0,     0,    15,    16,
       0,     0,     0,    17,     0,     0,   512,   513,     0,    19,
      20,    21,   514,    23,    24,    25,     0,    26,     0,     0,
       0,    59,     0,     0,     0,    27,     0,    28,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    29,
       0,     0,     0,     0,     0,     0,    30,    31,    32,    33,
       0,     0,     0,     0,     0,     0,     0,    34,    35,    36,
      37,     0,     0,     0,    38,     0,     0,    39,     0,     0,
      41,     0,     0,   515,     0,    43,    44,    45,    46,    47,
      48,    49,     0,    50,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    51,     0,     0,    52,    53,
       0,    54,    55,     5,     0,     0,     0,     0,   511,     0,
      56,     7,     8,     0,    57,     0,     0,    58,     0,     0,
      11,    12,  -671,    13,    14,     0,     0,     0,     0,    15,
      16,     0,     0,     0,    17,     0,     0,   512,   513,     0,
      19,    20,    21,   514,    23,    24,    25,     0,    26,     0,
       0,     0,    59,     0,     0,     0,    27,     0,    28,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      29,     0,     0,     0,     0,     0,     0,    30,    31,    32,
      33,     0,     0,     0,     0,     0,     0,     0,    34,    35,
      36,    37,     0,     0,     0,    38,     0,     0,    39,     0,
       0,    41,     0,     0,   515,     0,    43,    44,    45,    46,
      47,    48,    49,     0,    50,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    51,     0,     0,    52,
      53,     0,    54,    55,     5,     0,     0,     0,     0,   511,
       0,    56,     7,     8,     0,    57,     0,     0,    58,     0,
       0,    11,    12,  1141,    13,    14,     0,     0,     0,     0,
      15,    16,     0,     0,     0,    17,     0,     0,   512,   513,
       0,    19,    20,    21,   514,    23,    24,    25,     0,    26,
       0,     0,     0,    59,     0,     0,     0,    27,     0,    28,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    29,     0,     0,     0,     0,     0,     0,    30,    31,
      32,    33,     0,     0,     0,     0,     0,     0,     0,    34,
      35,    36,    37,     0,     0,     0,    38,     0,     0,    39,
       0,     0,    41,     0,     0,   515,     0,    43,    44,    45,
      46,    47,    48,    49,     0,    50,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    51,     0,     0,
      52,    53,     0,    54,    55,     5,     0,     0,     0,     0,
     511,     0,    56,     7,     8,     0,    57,     0,     0,    58,
       0,     0,    11,    12,  1196,    13,    14,     0,     0,     0,
       0,    15,    16,     0,     0,     0,    17,     0,     0,   512,
     513,     0,    19,    20,    21,   514,    23,    24,    25,     0,
      26,     0,     0,     0,    59,     0,     0,     0,    27,     0,
      28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    29,     0,     0,     0,     0,     0,     0,    30,
      31,    32,    33,     0,     0,     0,     0,     0,     0,     0,
      34,    35,    36,    37,     0,     0,     0,    38,     0,     0,
      39,     0,     0,    41,     0,     0,   515,     0,    43,    44,
      45,    46,    47,    48,    49,     0,    50,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    51,     0,
       0,    52,    53,     0,    54,    55,     5,     0,     0,     0,
       0,   511,     0,    56,     7,     8,     0,    57,     0,     0,
      58,     0,     0,    11,    12,     0,    13,    14,     0,     0,
       0,     0,    15,    16,     0,     0,     0,    17,     0,     0,
     512,   513,     0,    19,    20,    21,   514,    23,    24,    25,
       0,    26,     0,     0,     0,    59,     0,     0,     0,    27,
       0,    28,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    29,  -661,     0,     0,     0,     0,     0,
      30,    31,    32,    33,     0,     0,     0,     0,     0,     0,
       0,    34,    35,    36,    37,     0,     0,     0,    38,     0,
       0,    39,     0,     0,    41,     0,     0,   515,     0,    43,
      44,    45,    46,    47,    48,    49,     0,    50,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    51,
       0,     0,    52,    53,     0,    54,    55,     5,     0,     0,
       0,     0,   511,     0,    56,     7,     8,     0,    57,     0,
       0,    58,     0,     0,    11,    12,  -663,    13,    14,     0,
       0,     0,     0,    15,    16,     0,     0,     0,    17,     0,
       0,   512,   513,     0,    19,    20,    21,   514,    23,    24,
      25,     0,    26,     0,     0,     0,    59,     0,     0,     0,
      27,     0,    28,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    29,     0,     0,     0,     0,     0,
       0,    30,    31,    32,    33,     0,     0,     0,     0,     0,
       0,     0,    34,    35,    36,    37,     0,     0,     0,    38,
       0,     0,    39,     0,     0,    41,     0,     0,   515,     0,
      43,    44,    45,    46,    47,    48,    49,     0,    50,     0,
     125,   126,     0,     0,     0,     0,     0,   127,     0,     0,
      51,     0,     0,    52,    53,     0,    54,    55,   128,   129,
       0,     0,   130,   131,     0,    56,   132,   133,     0,    57,
     134,     0,    58,     0,     0,   500,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   135,
     136,     0,     0,   137,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    59,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   138,     0,
       0,     0,     0,     0,     0,     0,     0,   139,     0,   140,
     141,   142,   143,   144,   145,   146,     0,     0,   147,     0,
       0,     0,   148,     0,   501,     0,   149,     0,     0,     0,
       0,     0,     0,     0,     0,   150,   151,   152,   153,     0,
       0,     0,     0,     0,     0,   154,     0,   155,   156,   157,
       0,   158,   159,   160,   161,   162,     0,     0,   125,   126,
       0,     0,     0,     0,     0,   127,   163,     0,     0,     0,
       0,   164,   165,     0,     0,   166,   128,   129,     0,     0,
     130,   131,     0,     0,   132,   133,     0,     0,   134,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   135,   136,     0,
       0,   137,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   125,   126,     0,     0,     0,
    1220,     0,   127,     0,     0,  1221,     0,     0,     0,     0,
       0,     0,     0,   128,   129,     0,     0,   130,   131,     0,
       0,   132,   133,     0,     0,   134,   138,     0,     0,     0,
       0,     0,     0,     0,     0,   139,     0,   140,   141,   142,
     143,   144,   145,   146,   135,   136,   147,     0,   137,     0,
     148,     0,     0,     0,   149,   404,     0,     0,     0,     0,
       0,     0,     0,   150,   151,   152,   153,     0,     0,     0,
       0,     0,     0,   154,     0,   155,   156,   157,     0,   158,
     159,   160,   161,   162,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   138,   163,     0,     0,     0,     0,   164,
     165,     0,   139,   166,   140,   141,   142,   143,   144,   145,
     146,     0,     0,   147,     0,     0,     0,   148,     0,     0,
       0,   149,     0,     0,     0,     0,     0,     0,     0,     0,
     150,   151,   152,   153,     0,     0,     0,     0,     0,     0,
     154,     0,   155,   156,   157,     0,   158,   159,   160,   161,
     162,     0,     0,   125,   126,     0,     0,     0,     0,     0,
     127,   163,     0,     0,     0,     0,   164,   165,     0,     0,
     166,   128,   129,     0,     0,   130,   131,     0,     0,   132,
     133,     0,     0,   134,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   135,   136,     0,     0,   137,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     125,   126,     0,     0,     0,     0,     0,   127,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   128,   129,
       0,     0,   130,   131,     0,     0,   132,   133,     0,     0,
     134,   138,     0,     0,     0,     0,     0,     0,     0,     0,
     139,     0,   140,   141,   142,   143,   144,   145,   146,   135,
     136,   147,     0,   137,     0,   148,     0,     0,     0,   149,
     911,     0,     0,     0,     0,     0,     0,     0,   150,   151,
     152,   153,     0,     0,     0,     0,     0,     0,   154,     0,
     155,   156,   157,     0,   158,   159,   160,   161,   162,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   138,   163,
       0,     0,     0,     0,   164,   165,     0,   139,   166,   140,
     141,   142,   143,   144,   145,   146,     0,     0,   147,     0,
       0,     0,   148,     0,     0,     0,   149,     0,     0,     0,
       0,     0,     0,     0,     0,   150,   151,   152,   153,     0,
       0,     0,     0,     0,     0,   154,     0,   155,   156,   157,
       0,   158,   159,   160,   161,   162,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   163,     0,     0,     0,
       0,   164,   165,     0,     0,   166
};

static const yytype_int16 yycheck[] =
{
       5,    64,   404,     8,    77,    78,    42,   313,   274,   564,
     276,    80,    81,   332,   308,   325,   648,   391,   392,   393,
     394,   395,   502,    28,   259,   300,   261,    32,    33,    34,
      35,    36,   570,    38,    39,   137,    41,   303,     1,     1,
       1,     1,    54,     1,     1,     1,    54,     1,    21,    67,
       1,     1,    36,     1,     1,     1,     1,     1,     1,    64,
       1,   163,   164,   165,     1,     1,    71,     1,    73,     1,
      15,     1,     1,     1,     1,    36,    21,     1,     1,    84,
      85,     7,    87,    88,    89,    36,     1,    65,    21,     1,
      67,     6,    38,  1018,  1019,   100,    64,     1,    67,   104,
       1,   106,    95,    96,   109,    35,     1,   112,    54,    36,
      21,    37,    36,   118,    20,   120,    51,    51,    52,    67,
     151,     1,    55,    76,    68,    54,   125,     0,    75,    67,
     130,   763,    36,     1,     1,   134,   130,     1,   181,    75,
       1,     1,     1,     1,   144,   182,     1,     1,    85,   143,
     181,   104,    97,    67,     1,    69,    51,    67,    56,    71,
     153,     1,    60,     1,    70,   183,   184,   151,   130,   181,
     143,    15,   130,   130,    18,    86,   184,   182,   183,   184,
     142,    67,   144,   188,   142,   190,   144,   144,   193,   130,
     151,   264,   143,   143,   199,   143,   143,   202,   143,   204,
     143,    67,   143,   208,    71,    67,   183,   185,   143,   143,
     143,   143,   181,    71,    67,   130,   184,   143,   223,   143,
     183,   184,   182,   228,   186,   230,   182,   181,   186,   767,
     184,   182,   237,   183,   239,   181,   181,   181,   243,   143,
     181,     1,    67,   645,   181,   181,   184,   252,   143,   254,
     151,   181,   181,   181,   181,   260,   566,    19,   181,   525,
     265,     1,   497,   143,   269,   540,   541,    29,   273,    31,
     275,  1196,   277,   183,   279,   143,   281,   282,   283,   143,
     181,   286,   143,   143,   143,   387,   388,   292,   143,   143,
      18,    19,   297,    53,    20,   300,   143,   302,   184,   304,
      40,    61,    62,   143,    32,   143,    67,   613,    63,   314,
      36,    67,    72,    67,    42,    67,    51,   183,   184,    64,
      80,    81,   184,    67,    67,    85,     3,     4,     5,    67,
     183,   184,    54,     0,    67,    54,    76,    48,    67,    79,
      67,   143,    82,    83,    84,    67,   968,    67,   163,   164,
     972,    67,    58,    75,    85,    67,    75,    76,   183,    36,
     100,   101,    67,    82,    83,    84,    67,    67,    67,     6,
      47,    48,    49,    50,    51,    52,   143,   857,   106,    90,
     181,   100,   101,   184,  1063,  1064,  1065,   147,   148,   149,
     130,   131,    15,    59,    53,    18,    61,    62,    42,   173,
     174,    66,   130,   143,   181,   165,   166,   184,   143,   389,
     390,   416,   417,    90,    67,   170,    69,    15,   163,   164,
      18,   181,   183,   428,   429,   151,    85,   746,   184,   183,
      85,   183,   751,   752,    53,   440,  1115,   510,   443,   183,
     183,  1120,    61,    62,   150,   183,   820,   741,   742,   743,
     183,  1130,    92,   763,   183,   183,   183,   134,   135,   753,
    1092,  1093,   181,   183,   104,  1020,  1021,   183,   473,   474,
     475,   183,    15,    71,   181,    18,    19,   184,   183,   515,
      18,    19,   183,   183,   183,   490,   293,   131,   295,    32,
     181,    18,    19,   184,    32,   135,   130,  1176,    41,    42,
     184,   506,   507,   143,    42,    32,   171,   172,   142,   271,
     144,   183,   184,   130,   519,    42,   143,   123,   181,    90,
     126,   184,   527,   130,   529,   142,    97,   144,   147,   148,
     149,    76,   175,   176,   177,   540,   541,    82,    83,    84,
     111,    64,   547,    35,    36,   550,    38,   552,   119,    20,
     121,   182,   186,   558,    97,   100,   101,   181,   183,   184,
     184,   323,    54,   106,   107,   108,   396,   397,   106,   186,
     332,   384,   385,   386,   579,   894,    68,   182,   583,   106,
     107,   108,   181,    75,    59,   184,   348,   130,   350,   351,
     352,   353,   130,   355,   182,   166,   183,   184,    16,    17,
     362,   363,   364,   130,    22,    23,   182,    54,   370,   371,
     372,   373,   374,   375,   376,   183,   184,    87,    88,   692,
     182,    68,    69,    70,   195,   182,   182,    45,    75,   182,
     182,   182,   182,   182,   182,   206,  1038,   168,   182,   167,
     182,   182,   182,   648,    64,   718,   182,   182,   653,   182,
     182,   656,   182,   182,   659,   724,   182,   182,   229,   169,
     182,   182,   182,   982,   182,   182,   182,   672,    23,    23,
    1167,  1168,    90,    91,    92,  1172,   183,   439,    69,   143,
     442,  1178,  1179,  1180,   184,   184,   104,   184,   184,   143,
      16,    17,    20,   766,    20,   768,    75,    23,   703,   143,
     184,   143,   707,   708,    53,   710,    20,   712,   143,    53,
     715,   184,    61,    62,   719,   720,   721,    54,   183,    45,
     725,   183,   293,    72,   295,   183,   143,   298,   184,   143,
      23,    80,    81,    23,   305,    20,  1002,    16,    17,   143,
      51,    20,   313,   143,    23,   182,    79,    73,    67,   754,
      74,   183,   757,   143,   759,   760,   761,   183,    20,   764,
     184,   184,    85,  1082,    90,    91,    45,    56,   184,   184,
     183,   776,   777,   183,   183,   183,  1095,   183,   349,   184,
     183,   183,   183,  1102,  1103,   183,   357,   358,   359,   183,
     361,   183,   143,   143,    73,   183,   183,   368,   147,   148,
     149,   183,   143,   143,   184,  1124,   377,   378,   181,    87,
       1,    90,    91,     1,    36,   184,   165,   166,    50,   892,
      31,    85,   143,   183,   183,   143,    75,   184,   186,   834,
     182,   143,    69,   181,  1153,   143,    54,   184,   143,   844,
     183,   142,    31,    83,    31,   184,   184,   183,    20,    82,
     104,    54,   143,   111,   184,    94,   143,    69,   183,   430,
     182,    69,    20,   975,  1105,   974,   755,   940,  1101,   915,
    1189,  1190,  1012,  1084,  1239,  1248,    66,   882,   482,   251,
     885,   886,   310,   984,   889,   871,   398,   563,   399,     4,
     643,   896,   897,   644,   400,   110,   959,   490,   469,   115,
     471,  1220,  1221,    14,    14,   910,   757,  1139,    72,   181,
     532,  1067,  1173,   855,  1181,  1169,   847,  1108,   538,   531,
     860,  1016,   734,   469,   997,   674,   688,   689,   690,   691,
     889,   263,   503,   938,  1240,   910,  1242,   334,  1151,  1078,
     773,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   958,   716,    -1,   961,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   538,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   987,    -1,   746,    -1,    -1,    -1,    -1,   751,
     752,    -1,   563,    -1,   565,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1085,  1018,  1019,    -1,    -1,    -1,    -1,   781,
     782,    -1,    -1,   785,    -1,    -1,    -1,    -1,   790,    -1,
      -1,    -1,    -1,    -1,   796,    -1,   798,    -1,  1101,    -1,
      -1,    -1,   613,    -1,    -1,    -1,    -1,    -1,   810,    -1,
      -1,    -1,    -1,    -1,   816,    -1,    -1,    -1,  1063,  1064,
    1065,    -1,    -1,    -1,    -1,  1070,  1071,    -1,    -1,    -1,
     832,   833,    -1,  1078,    -1,  1080,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1092,  1093,    -1,
      -1,    -1,    -1,    -1,    -1,  1100,    -1,    -1,   669,  1104,
      -1,    -1,    -1,    -1,    -1,  1110,    -1,    -1,    -1,    -1,
    1115,    -1,  1117,    -1,    -1,  1120,    -1,  1122,    -1,   881,
    1125,    -1,    -1,    -1,    -1,  1130,    -1,    -1,    -1,   700,
      -1,    -1,   894,    -1,    -1,    -1,  1141,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1151,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1234,    -1,   734,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1176,    -1,    -1,  1247,    -1,    -1,    -1,    -1,  1184,
    1185,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1196,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   770,
     771,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   971,
      -1,    -1,    -1,    -1,    -1,   977,    -1,    -1,    -1,    -1,
     982,    -1,    -1,    -1,    -1,    -1,  1231,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   808,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1252,  1253,  1254,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1031,
      -1,    -1,    -1,  1035,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1050,   860,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1082,     1,    -1,    -1,    -1,    -1,    -1,     7,     8,    -1,
      -1,    -1,    -1,  1095,    14,    -1,   907,    -1,   909,    -1,
    1102,  1103,    -1,    -1,  1106,    25,    26,    -1,    -1,    29,
      30,    -1,    -1,    33,    34,    -1,    -1,    37,    -1,    -1,
      -1,    -1,  1124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    56,    57,    -1,    -1,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1153,    -1,    -1,    -1,    -1,    -1,    -1,   969,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   105,    -1,  1189,  1190,    -1,
      -1,    -1,    -1,    -1,   114,    -1,   116,   117,   118,   119,
     120,   121,   122,  1014,  1015,   125,    -1,    -1,    -1,   129,
      -1,    -1,    -1,   133,    -1,    -1,    -1,    -1,  1220,  1221,
      -1,    -1,   142,   143,   144,   145,    -1,    -1,    -1,    -1,
      -1,    -1,   152,    -1,   154,   155,   156,    -1,   158,   159,
     160,   161,   162,     1,    -1,    -1,    -1,    -1,    -1,     7,
       8,    -1,    -1,   173,    -1,    -1,    14,    -1,   178,   179,
      -1,   181,   182,    -1,   184,    -1,    -1,    25,    26,    -1,
      -1,    29,    30,    -1,    -1,    33,    34,    -1,    -1,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    57,
      -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,
      -1,    -1,  1143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,   116,   117,
     118,   119,   120,   121,   122,    -1,    -1,   125,    -1,    -1,
      -1,   129,    -1,    -1,    -1,   133,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   142,   143,   144,   145,    -1,    -1,
      -1,    -1,    -1,    -1,   152,    -1,   154,   155,   156,    -1,
     158,   159,   160,   161,   162,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,    -1,   173,    -1,    -1,     7,     8,
     178,   179,    -1,   181,   182,    14,    -1,    -1,    -1,  1240,
      -1,  1242,    -1,    -1,    -1,    -1,    25,    26,    -1,    -1,
      29,    30,    -1,    -1,    33,    34,    -1,    -1,    37,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    57,    -1,
      -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,    -1,    -1,    -1,    -1,     7,     8,    -1,    -1,    -1,
      -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    26,    -1,    -1,    29,    30,    -1,
      -1,    33,    34,    -1,    -1,    37,   105,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   114,    -1,   116,   117,   118,
     119,   120,   121,   122,    56,    57,   125,    -1,    60,    -1,
     129,    -1,   131,    -1,   133,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   142,   143,   144,   145,    -1,    -1,    -1,
      -1,    -1,    -1,   152,    -1,   154,   155,   156,    -1,   158,
     159,   160,   161,   162,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   105,   173,    -1,    -1,    -1,    -1,   178,
     179,    -1,   114,   182,   116,   117,   118,   119,   120,   121,
     122,    -1,    -1,   125,    -1,    -1,    -1,   129,    -1,    -1,
      -1,   133,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     142,   143,   144,   145,    -1,    -1,    -1,    -1,    -1,    -1,
     152,    -1,   154,   155,   156,    -1,   158,   159,   160,   161,
     162,    -1,     1,    -1,    -1,    -1,    -1,    -1,     7,     8,
      -1,   173,    -1,    -1,    -1,    14,   178,   179,    17,   181,
     182,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    -1,
      29,    30,    -1,    -1,    33,    34,    -1,    -1,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    57,    -1,
      -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,    -1,    -1,    -1,    -1,     7,     8,    -1,    -1,    -1,
      -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    26,    -1,    -1,    29,    30,    -1,
      -1,    33,    34,    -1,    -1,    37,   105,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   114,    -1,   116,   117,   118,
     119,   120,   121,   122,    56,    57,   125,    -1,    60,    -1,
     129,    -1,    -1,    -1,   133,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   142,   143,   144,   145,    -1,    -1,    -1,
      -1,    -1,    -1,   152,    -1,   154,   155,   156,    -1,   158,
     159,   160,   161,   162,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   105,   173,    -1,    -1,    -1,    -1,   178,
     179,    -1,   114,   182,   116,   117,   118,   119,   120,   121,
     122,    -1,    -1,   125,    -1,    -1,    -1,   129,    -1,    -1,
      -1,   133,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     142,   143,   144,   145,    -1,    -1,    -1,    -1,    -1,    -1,
     152,    -1,   154,   155,   156,    -1,   158,   159,   160,   161,
     162,     1,    -1,    -1,    -1,    -1,    -1,     7,     8,    -1,
      -1,   173,    -1,    -1,    14,    -1,   178,   179,    -1,    -1,
     182,    -1,    -1,    -1,    -1,    25,    26,    -1,    -1,    29,
      30,    -1,    -1,    33,    34,    -1,    -1,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    56,    57,    -1,    -1,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
      -1,    -1,    -1,    -1,     7,     8,    -1,    -1,    -1,    -1,
      -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    26,    -1,    -1,    29,    30,    -1,    -1,
      33,    34,    -1,    -1,    37,   105,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   114,    -1,   116,   117,   118,   119,
     120,   121,   122,    56,    57,   125,    -1,    60,    -1,   129,
      -1,    -1,    -1,   133,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   142,   143,   144,   145,    -1,    -1,    -1,    -1,
      -1,    -1,   152,    -1,   154,   155,   156,    -1,   158,   159,
     160,   161,   162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   105,   173,    -1,    -1,    -1,    -1,   178,   179,
      -1,   114,   182,   116,   117,   118,   119,   120,   121,   122,
      -1,    -1,   125,    -1,    -1,    -1,   129,    -1,    -1,    -1,
     133,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,
     143,   144,   145,    -1,    -1,    -1,    -1,    -1,    -1,   152,
      -1,   154,   155,   156,    -1,   158,   159,   160,   161,   162,
       1,    -1,    -1,    -1,    -1,    -1,     7,     8,    -1,    -1,
     173,    -1,    -1,    14,    -1,   178,   179,    -1,    -1,   182,
      -1,    -1,    -1,    -1,    25,    26,    -1,    -1,    29,    30,
      -1,    -1,    33,    34,    -1,    -1,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    57,    -1,    -1,    60,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,
      -1,    -1,    -1,     7,     8,    -1,    -1,    -1,    -1,    -1,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    26,    -1,    -1,    29,    30,    -1,    -1,    33,
      34,    -1,    -1,    37,   105,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   114,    -1,   116,   117,   118,   119,   120,
     121,   122,    56,    57,   125,    -1,    60,    -1,   129,    -1,
      -1,    -1,   133,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   142,   143,   144,   145,    -1,    -1,    -1,    -1,    -1,
      -1,   152,    -1,   154,   155,   156,    -1,   158,   159,   160,
     161,   162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   105,   173,    -1,    -1,    -1,    -1,   178,   179,    -1,
     114,   182,   116,   117,   118,   119,   120,   121,   122,    -1,
      -1,   125,    -1,    -1,    -1,   129,    -1,    -1,    -1,   133,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,
     144,   145,    -1,    -1,    -1,    -1,    -1,    -1,   152,    -1,
     154,   155,   156,    -1,   158,   159,   160,   161,   162,     1,
      -1,    -1,    -1,    -1,    -1,     7,     8,    -1,    -1,   173,
      -1,    -1,    14,    -1,   178,   179,    -1,    -1,   182,    -1,
      -1,    -1,    -1,    25,    26,    -1,    -1,    29,    30,    -1,
      -1,    33,    34,    -1,    -1,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    57,    -1,    -1,    60,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,
      -1,    -1,     7,     8,    -1,    -1,    -1,    -1,    -1,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    26,    -1,    -1,    29,    30,    -1,    -1,    33,    34,
      -1,    -1,    37,   105,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   114,    -1,   116,   117,   118,   119,   120,   121,
     122,    56,    57,   125,    -1,    60,    -1,   129,    -1,    -1,
      -1,   133,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     142,   143,   144,   145,    -1,    -1,    -1,    -1,    -1,    -1,
     152,    -1,   154,   155,   156,    -1,   158,   159,   160,   161,
     162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     105,   173,    -1,    -1,    -1,    -1,   178,   179,    -1,   114,
     182,   116,   117,   118,   119,   120,   121,   122,    -1,    -1,
     125,    -1,    -1,    -1,   129,    -1,    -1,    -1,   133,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,   144,
     145,    -1,    -1,    -1,    -1,    -1,    -1,   152,    -1,   154,
     155,   156,    -1,   158,   159,   160,   161,   162,     1,    -1,
      -1,    -1,    -1,    -1,     7,     8,    -1,    -1,   173,    -1,
      -1,    14,    -1,   178,   179,    -1,    -1,   182,    -1,    -1,
      -1,    -1,    25,    26,    -1,    -1,    29,    30,    -1,    -1,
      33,    34,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    57,    -1,    -1,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,
      -1,     7,     8,    -1,    -1,    -1,    -1,    -1,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      26,    -1,    -1,    29,    30,    -1,    -1,    33,    34,    -1,
      -1,    37,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   114,    -1,   116,   117,   118,   119,   120,   121,   122,
      56,    57,   125,    -1,    60,    -1,   129,    -1,    -1,    -1,
     133,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,
     143,   144,   145,    -1,    -1,    -1,    -1,    -1,    -1,   152,
      -1,   154,   155,   156,    -1,   158,   159,   160,   161,   162,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
     173,    -1,    -1,    -1,    -1,   178,   179,    -1,   114,   182,
     116,   117,   118,   119,   120,   121,   122,    -1,    -1,   125,
      -1,    -1,    -1,   129,    -1,    -1,    -1,   133,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   142,   143,   144,   145,
      -1,    -1,    -1,    -1,    -1,    -1,   152,    -1,   154,   155,
     156,    -1,   158,   159,   160,   161,   162,     1,    -1,    -1,
      -1,    -1,    -1,     7,     8,    -1,    -1,   173,    -1,    -1,
      14,    -1,   178,   179,    -1,    -1,   182,    -1,    -1,    -1,
      -1,    25,    26,    -1,    -1,    29,    30,    -1,    -1,    33,
      34,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    56,    57,    -1,    -1,    60,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,
       7,     8,    -1,    -1,    -1,    -1,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,
      -1,    -1,    29,    30,    -1,    -1,    33,    34,    -1,    -1,
      37,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     114,    -1,   116,   117,   118,   119,   120,   121,   122,    56,
      57,   125,    -1,    60,    -1,   129,    -1,    -1,    -1,   133,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,
     144,   145,    -1,    -1,    -1,    -1,    -1,    -1,   152,    -1,
     154,   155,   156,    -1,   158,   159,   160,   161,   162,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,   173,
      -1,    -1,    -1,    -1,   178,   179,    -1,   114,   182,   116,
     117,   118,   119,   120,   121,   122,    -1,    -1,   125,    -1,
      -1,    -1,   129,    -1,    -1,    -1,   133,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   142,   143,   144,   145,    -1,
      -1,    -1,    -1,    -1,    -1,   152,    -1,   154,   155,   156,
      -1,   158,   159,   160,   161,   162,    -1,    -1,    -1,     1,
      -1,    -1,    -1,    -1,     6,    -1,   173,     9,    10,    -1,
      -1,   178,   179,    -1,    -1,   182,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    27,    28,    -1,    -1,    -1,
      32,    -1,    -1,    35,    36,    -1,    38,    39,    40,    41,
      42,    43,    44,    -1,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    -1,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    70,    -1,
      -1,    -1,    74,    75,    76,    77,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    -1,    -1,
      -1,    93,    -1,    -1,    96,    -1,    -1,    99,    -1,    -1,
     102,    -1,   104,   105,   106,   107,   108,   109,   110,    -1,
     112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   124,    -1,    -1,   127,   128,    -1,   130,   131,
       1,    -1,    -1,    -1,    -1,     6,    -1,   139,     9,    10,
      -1,   143,    -1,    -1,   146,    -1,    -1,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    27,    28,    -1,    -1,
      -1,    32,    -1,    -1,    35,    36,    -1,    38,    39,    40,
      41,    42,    43,    44,    -1,    46,    -1,    -1,    -1,   181,
      -1,    -1,    -1,    54,    -1,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    70,
      -1,    -1,    -1,    74,    75,    76,    77,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    -1,
      -1,    -1,    93,    -1,    -1,    96,    -1,    -1,    99,    -1,
      -1,   102,    -1,   104,   105,   106,   107,   108,   109,   110,
      -1,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   124,    -1,    -1,   127,   128,    -1,   130,
     131,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,    -1,
      -1,    -1,   143,    -1,     1,   146,    -1,    -1,    -1,     6,
      -1,    -1,     9,    10,    11,    -1,    -1,    -1,    15,    -1,
      -1,    18,    19,    -1,    21,    22,    -1,    -1,    -1,    -1,
      27,    28,    -1,    -1,    -1,    32,    -1,    -1,    35,    -1,
     181,    38,    39,    40,    41,    42,    43,    44,    -1,    46,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,
      77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    -1,    -1,    -1,    93,    -1,    -1,    96,
      97,    -1,    99,    -1,    -1,   102,    -1,   104,   105,   106,
     107,   108,   109,   110,    -1,   112,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,
     127,   128,    -1,   130,   131,     1,    -1,    -1,    -1,    -1,
       6,    -1,   139,     9,    10,    -1,   143,    -1,    -1,   146,
      -1,    -1,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    -1,    -1,    -1,    32,    -1,    -1,    35,
      36,    -1,    38,    39,    40,    41,    42,    43,    44,    -1,
      46,    -1,    -1,    -1,   181,    -1,    -1,    -1,    54,    -1,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      76,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    87,    88,    89,    -1,    -1,    -1,    93,    -1,    -1,
      96,    -1,    -1,    99,    -1,    -1,   102,    -1,   104,   105,
     106,   107,   108,   109,   110,    -1,   112,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,
      -1,   127,   128,    -1,   130,   131,     1,    -1,    -1,    -1,
      -1,     6,    -1,   139,     9,    10,    -1,   143,    -1,    -1,
     146,    -1,    -1,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    27,    28,    -1,    -1,    -1,    32,    -1,    -1,
      35,    36,    -1,    38,    39,    40,    41,    42,    43,    44,
      -1,    46,    -1,    -1,    -1,   181,    -1,    -1,    -1,    54,
      -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    76,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    -1,    -1,    -1,    93,    -1,
      -1,    96,    -1,    -1,    99,    -1,    -1,   102,    -1,   104,
     105,   106,   107,   108,   109,   110,    -1,   112,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,
      -1,    -1,   127,   128,    -1,   130,   131,     1,    -1,    -1,
      -1,    -1,     6,    -1,   139,     9,    10,    -1,   143,    -1,
      -1,   146,    -1,    -1,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    35,    36,    -1,    38,    39,    40,    41,    42,    43,
      44,    -1,    46,    -1,    -1,    -1,   181,    -1,    -1,    -1,
      54,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    77,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    -1,    -1,    -1,    93,
      -1,    -1,    96,    -1,    -1,    99,    -1,    -1,   102,    -1,
     104,   105,   106,   107,   108,   109,   110,    -1,   112,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     124,    -1,    -1,   127,   128,    -1,   130,   131,     1,    -1,
      -1,    -1,    -1,     6,    -1,   139,     9,    10,    -1,   143,
      -1,    -1,   146,    -1,    -1,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    27,    28,    -1,    -1,    -1,    32,
      -1,    -1,    35,    36,    -1,    38,    39,    40,    41,    42,
      43,    44,    -1,    46,    -1,    -1,    -1,   181,    -1,    -1,
      -1,    54,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    76,    77,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    -1,    -1,    -1,
      93,    -1,    -1,    96,    -1,    -1,    99,    -1,    -1,   102,
      -1,   104,   105,   106,   107,   108,   109,   110,    -1,   112,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   124,    -1,    -1,   127,   128,    -1,   130,   131,     1,
      -1,    -1,    -1,    -1,     6,    -1,   139,     9,    10,    -1,
     143,    -1,    -1,   146,    -1,    -1,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    27,    28,    -1,    -1,    -1,
      32,    -1,    -1,    35,    36,    -1,    38,    39,    40,    41,
      42,    43,    44,    -1,    46,    -1,    -1,    -1,   181,    -1,
      -1,    -1,    54,    -1,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    76,    77,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    -1,    -1,
      -1,    93,    -1,    -1,    96,    -1,    -1,    99,    -1,    -1,
     102,    -1,   104,   105,   106,   107,   108,   109,   110,    -1,
     112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   124,    -1,    -1,   127,   128,    -1,   130,   131,
       1,    -1,    -1,    -1,    -1,     6,    -1,   139,     9,    10,
      -1,   143,    -1,    -1,   146,    -1,    -1,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    27,    28,    -1,    -1,
      -1,    32,    -1,    -1,    35,    36,    -1,    38,    39,    40,
      41,    42,    43,    44,    -1,    46,    -1,    -1,    -1,   181,
      -1,    -1,    -1,    54,    -1,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    76,    77,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    -1,
      -1,    -1,    93,    -1,    -1,    96,    -1,    -1,    99,    -1,
      -1,   102,    -1,   104,   105,   106,   107,   108,   109,   110,
      -1,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   124,    -1,    -1,   127,   128,    -1,   130,
     131,     1,    -1,    -1,    -1,    -1,     6,    -1,   139,     9,
      10,    -1,   143,    -1,    -1,   146,    -1,    -1,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    27,    28,    -1,
      -1,    -1,    32,    -1,    -1,    35,    36,    -1,    38,    39,
      40,    41,    42,    43,    44,    -1,    46,    -1,    -1,    -1,
     181,    -1,    -1,    -1,    54,    -1,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      -1,    -1,    -1,    93,    -1,    -1,    96,    -1,    -1,    99,
      -1,    -1,   102,    -1,   104,   105,   106,   107,   108,   109,
     110,    -1,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   124,    -1,    -1,   127,   128,    -1,
     130,   131,     1,    -1,    -1,    -1,    -1,     6,    -1,   139,
       9,    10,    -1,   143,    -1,    -1,   146,    -1,    -1,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    35,    36,    -1,    38,
      39,    40,    41,    42,    43,    44,    -1,    46,    -1,    -1,
      -1,   181,    -1,    -1,    -1,    54,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    -1,    -1,    -1,    93,    -1,    -1,    96,    -1,    -1,
      99,    -1,    -1,   102,    -1,   104,   105,   106,   107,   108,
     109,   110,    -1,   112,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,   127,   128,
      -1,   130,   131,     1,    -1,    -1,    -1,    -1,     6,    -1,
     139,     9,    10,    -1,   143,    -1,    -1,   146,    -1,    -1,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,
      28,    -1,    -1,    -1,    32,    -1,    -1,    35,    36,    -1,
      38,    39,    40,    41,    42,    43,    44,    -1,    46,    -1,
      -1,    -1,   181,    -1,    -1,    -1,    54,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    -1,    -1,    -1,    93,    -1,    -1,    96,    -1,
      -1,    99,    -1,    -1,   102,    -1,   104,   105,   106,   107,
     108,   109,   110,    -1,   112,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,   127,
     128,    -1,   130,   131,     1,    -1,    -1,    -1,    -1,     6,
      -1,   139,     9,    10,    -1,   143,    -1,    -1,   146,    -1,
      -1,    18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,
      27,    28,    -1,    -1,    -1,    32,    -1,    -1,    35,    36,
      -1,    38,    39,    40,    41,    42,    43,    44,    -1,    46,
      -1,    -1,    -1,   181,    -1,    -1,    -1,    54,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,
      77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    -1,    -1,    -1,    93,    -1,    -1,    96,
      -1,    -1,    99,    -1,    -1,   102,    -1,   104,   105,   106,
     107,   108,   109,   110,    -1,   112,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,
     127,   128,    -1,   130,   131,     1,    -1,    -1,    -1,    -1,
       6,    -1,   139,     9,    10,    -1,   143,    -1,    -1,   146,
      -1,    -1,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    -1,    -1,    -1,    32,    -1,    -1,    35,
      36,    -1,    38,    39,    40,    41,    42,    43,    44,    -1,
      46,    -1,    -1,    -1,   181,    -1,    -1,    -1,    54,    -1,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      76,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    87,    88,    89,    -1,    -1,    -1,    93,    -1,    -1,
      96,    -1,    -1,    99,    -1,    -1,   102,    -1,   104,   105,
     106,   107,   108,   109,   110,    -1,   112,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,
      -1,   127,   128,    -1,   130,   131,     1,    -1,    -1,    -1,
      -1,     6,    -1,   139,     9,    10,    -1,   143,    -1,    -1,
     146,    -1,    -1,    18,    19,    -1,    21,    22,    -1,    -1,
      -1,    -1,    27,    28,    -1,    -1,    -1,    32,    -1,    -1,
      35,    36,    -1,    38,    39,    40,    41,    42,    43,    44,
      -1,    46,    -1,    -1,    -1,   181,    -1,    -1,    -1,    54,
      -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,
      75,    76,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    -1,    -1,    -1,    93,    -1,
      -1,    96,    -1,    -1,    99,    -1,    -1,   102,    -1,   104,
     105,   106,   107,   108,   109,   110,    -1,   112,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,
      -1,    -1,   127,   128,    -1,   130,   131,     1,    -1,    -1,
      -1,    -1,     6,    -1,   139,     9,    10,    -1,   143,    -1,
      -1,   146,    -1,    -1,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    35,    36,    -1,    38,    39,    40,    41,    42,    43,
      44,    -1,    46,    -1,    -1,    -1,   181,    -1,    -1,    -1,
      54,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    77,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    -1,    -1,    -1,    93,
      -1,    -1,    96,    -1,    -1,    99,    -1,    -1,   102,    -1,
     104,   105,   106,   107,   108,   109,   110,    -1,   112,    -1,
       7,     8,    -1,    -1,    -1,    -1,    -1,    14,    -1,    -1,
     124,    -1,    -1,   127,   128,    -1,   130,   131,    25,    26,
      -1,    -1,    29,    30,    -1,   139,    33,    34,    -1,   143,
      37,    -1,   146,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      57,    -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   181,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,   116,
     117,   118,   119,   120,   121,   122,    -1,    -1,   125,    -1,
      -1,    -1,   129,    -1,   131,    -1,   133,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   142,   143,   144,   145,    -1,
      -1,    -1,    -1,    -1,    -1,   152,    -1,   154,   155,   156,
      -1,   158,   159,   160,   161,   162,    -1,    -1,     7,     8,
      -1,    -1,    -1,    -1,    -1,    14,   173,    -1,    -1,    -1,
      -1,   178,   179,    -1,    -1,   182,    25,    26,    -1,    -1,
      29,    30,    -1,    -1,    33,    34,    -1,    -1,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    57,    -1,
      -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     7,     8,    -1,    -1,    -1,
      79,    -1,    14,    -1,    -1,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    26,    -1,    -1,    29,    30,    -1,
      -1,    33,    34,    -1,    -1,    37,   105,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   114,    -1,   116,   117,   118,
     119,   120,   121,   122,    56,    57,   125,    -1,    60,    -1,
     129,    -1,    -1,    -1,   133,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   142,   143,   144,   145,    -1,    -1,    -1,
      -1,    -1,    -1,   152,    -1,   154,   155,   156,    -1,   158,
     159,   160,   161,   162,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   105,   173,    -1,    -1,    -1,    -1,   178,
     179,    -1,   114,   182,   116,   117,   118,   119,   120,   121,
     122,    -1,    -1,   125,    -1,    -1,    -1,   129,    -1,    -1,
      -1,   133,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     142,   143,   144,   145,    -1,    -1,    -1,    -1,    -1,    -1,
     152,    -1,   154,   155,   156,    -1,   158,   159,   160,   161,
     162,    -1,    -1,     7,     8,    -1,    -1,    -1,    -1,    -1,
      14,   173,    -1,    -1,    -1,    -1,   178,   179,    -1,    -1,
     182,    25,    26,    -1,    -1,    29,    30,    -1,    -1,    33,
      34,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    56,    57,    -1,    -1,    60,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       7,     8,    -1,    -1,    -1,    -1,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,
      -1,    -1,    29,    30,    -1,    -1,    33,    34,    -1,    -1,
      37,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     114,    -1,   116,   117,   118,   119,   120,   121,   122,    56,
      57,   125,    -1,    60,    -1,   129,    -1,    -1,    -1,   133,
     134,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,
     144,   145,    -1,    -1,    -1,    -1,    -1,    -1,   152,    -1,
     154,   155,   156,    -1,   158,   159,   160,   161,   162,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,   173,
      -1,    -1,    -1,    -1,   178,   179,    -1,   114,   182,   116,
     117,   118,   119,   120,   121,   122,    -1,    -1,   125,    -1,
      -1,    -1,   129,    -1,    -1,    -1,   133,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   142,   143,   144,   145,    -1,
      -1,    -1,    -1,    -1,    -1,   152,    -1,   154,   155,   156,
      -1,   158,   159,   160,   161,   162,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   173,    -1,    -1,    -1,
      -1,   178,   179,    -1,    -1,   182
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   188,   190,     0,   191,     1,     6,     9,    10,    11,
      15,    18,    19,    21,    22,    27,    28,    32,    35,    38,
      39,    40,    41,    42,    43,    44,    46,    54,    56,    68,
      75,    76,    77,    78,    86,    87,    88,    89,    93,    96,
      97,    99,   102,   104,   105,   106,   107,   108,   109,   110,
     112,   124,   127,   128,   130,   131,   139,   143,   146,   181,
     189,   192,   193,   206,   229,   231,   233,   235,   236,   279,
     316,   327,   330,   332,   338,   343,   350,   353,   356,   359,
     360,   361,   362,   363,   364,   408,   410,   411,   413,   419,
     420,   437,   447,   449,   454,   455,   459,   465,   467,   189,
       1,   143,   189,    21,    55,   143,   238,   239,   240,     1,
     182,   304,     1,    40,   143,   296,   327,   330,     1,   460,
       1,   456,     1,   468,     1,     7,     8,    14,    25,    26,
      29,    30,    33,    34,    37,    56,    57,    60,   105,   114,
     116,   117,   118,   119,   120,   121,   122,   125,   129,   133,
     142,   143,   144,   145,   152,   154,   155,   156,   158,   159,
     160,   161,   162,   173,   178,   179,   182,   251,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   268,
     270,   273,     1,   143,     1,   143,    15,    18,     1,   143,
       1,   143,   182,   241,   189,   287,     1,   273,    85,   273,
     189,   189,   151,   189,     1,   189,   289,   189,     1,     6,
     130,   189,   189,   189,    15,    18,    19,    32,    41,    42,
      97,   130,   363,     6,   143,   309,   143,   306,     1,   291,
       1,    67,   143,     1,   339,   367,   331,     1,   143,     1,
      85,   288,   409,     1,    15,    97,   189,   240,   247,    59,
     230,   230,     1,   143,     1,   143,   302,   189,    85,   295,
     342,   189,     1,   333,   298,    20,    70,   275,   275,     1,
      36,   182,   358,     1,   358,     1,   358,     1,   143,   345,
     346,     1,   130,   143,   189,   441,     1,   189,   425,   184,
     425,   425,     1,   184,   189,   301,   424,     1,   273,   274,
     421,   423,     1,   282,     1,   450,   274,   189,   207,   189,
     184,   189,   189,   304,   253,   254,   255,   274,   189,   143,
     284,   130,   332,    64,   443,   341,   342,   189,   274,   189,
     274,    20,    36,   151,   469,   470,   471,   481,    54,    68,
      69,    70,    75,   355,   357,   241,   182,   182,   182,   182,
     182,   182,   182,   182,   241,   182,   258,   182,   182,   182,
     182,   182,   182,   182,   182,   182,   182,   182,   182,   182,
     182,   182,   182,   182,   182,   182,   182,   182,   182,   258,
     258,   258,   274,    59,   175,   176,   177,   173,   174,   163,
     164,    61,    62,    66,   171,   172,    63,   170,   169,   168,
     167,    64,    65,   185,    67,   355,   189,   189,   189,   448,
      23,    23,   189,   189,   183,   189,     1,   274,   426,    69,
      69,    51,   143,   189,   189,   189,   274,   189,    92,   104,
     135,   143,   143,    15,    18,     1,   365,   189,   184,   184,
     311,   184,   184,   308,   189,   274,   189,   143,    20,    75,
     143,   374,   189,   184,   189,   328,   329,    53,    61,    62,
      72,    80,    81,   147,   148,   149,   165,   166,   428,   429,
     415,   416,   189,   249,   248,   250,   237,   275,   237,   189,
     232,   189,   234,    76,    82,    83,    84,   100,   101,   317,
     319,   320,   326,   313,    51,   143,   313,   189,   313,    20,
      42,   131,   336,   337,   445,   275,     1,    68,   189,   440,
     283,     6,    35,    36,    41,   102,   276,   279,   352,    20,
     189,    58,   150,   227,   273,   280,   189,   345,   189,   345,
     189,   347,   184,   189,   189,   189,   189,   189,   412,   189,
     421,   421,   189,   274,   184,   424,   189,   345,   189,   274,
       1,   184,   285,   208,   228,   274,   239,   253,     1,    85,
     189,   305,   344,   184,   299,    53,   297,   273,    54,   314,
     443,   461,   457,    35,    36,    38,    54,    68,    75,   487,
       1,   227,   472,    20,   470,   183,   183,   273,   274,   273,
     273,   273,   273,   273,   274,   274,   274,     1,   143,   183,
     274,   273,   273,   273,     1,   143,     1,   143,     1,    51,
      52,   143,   274,   252,   273,   273,   273,   273,   273,   273,
     273,   274,   274,   183,    56,    60,   257,   257,   257,   258,
     258,   259,   259,   260,   260,   260,   260,   260,   261,   261,
     262,   263,   264,   267,   269,   271,   270,   184,   463,   464,
     143,   143,   189,     1,   189,   427,   290,   189,   189,   274,
     293,   294,    23,    23,    20,   143,   310,   273,   189,   307,
     273,   189,   292,   368,   414,    51,   143,   426,   274,   417,
     418,   189,   189,   189,    20,   182,   242,   242,   324,   322,
     321,   323,   303,    54,    75,   189,   318,   320,    79,   313,
     446,   374,   274,    20,   189,   189,   275,     1,    71,     1,
      71,     1,    71,    15,    18,    71,    74,   351,   354,     1,
      38,    54,   189,   442,   183,   345,   189,   189,   348,   428,
     346,   417,   424,   424,   422,   189,   451,   189,   143,   189,
     466,     3,     4,     5,    36,    47,    48,    49,    50,    51,
      52,    90,   134,   135,   209,   210,   211,   183,   189,     1,
      51,   143,   255,   463,     1,   274,   430,   443,   315,   314,
     184,   184,   189,    20,   482,    85,     1,    35,   189,   486,
     183,   184,   184,   183,   183,   184,   183,     1,   183,   184,
     184,   183,   183,   183,   183,   183,   184,   183,   184,   183,
     183,   183,   183,   183,   183,   183,   183,   183,   184,   253,
     184,   183,   183,   183,   183,   183,   184,   183,   183,    56,
      64,   265,   266,   270,   143,   189,   464,   197,   195,   189,
     189,   189,    48,    90,   405,    16,    17,    22,    23,    45,
      90,    91,    92,   104,   395,   143,   143,   366,   143,   312,
     274,   189,   228,   369,   370,   371,   372,   444,   445,   415,
     184,    18,    19,    32,    42,   106,   130,   183,   243,   244,
     245,    87,    95,    96,   153,   246,   273,   273,   273,   273,
     275,   325,   274,   334,   181,     1,    75,   189,   438,    20,
     189,   189,   278,   189,   277,   189,     1,     1,   189,     1,
     273,   275,   189,   189,   189,   358,   189,   349,   423,   184,
     286,   134,   228,   228,   228,    50,   227,   214,   227,   227,
     228,   189,   211,   305,   189,   189,   189,   443,    54,   189,
     436,    31,   433,   275,   314,   275,   274,   274,   487,    85,
     484,   143,   189,   189,   273,   273,   273,   183,   143,   273,
     273,   273,   274,   183,   273,   273,   260,   186,     1,   182,
     202,     1,   182,   198,   273,   273,   189,   399,   398,   397,
      75,   396,   400,   189,   196,   194,   369,   184,   181,   376,
     374,   418,   182,   183,   184,   143,   245,    20,   273,   189,
     378,   375,   376,   189,   189,   440,   275,   227,   189,   189,
      69,    69,   281,   274,   274,   466,   143,   214,   213,   123,
     126,   215,   212,    54,   431,   184,   434,   435,    20,    20,
     462,   458,   189,   143,   275,   473,   183,   183,   183,   183,
     183,   184,   183,   183,   183,   184,   183,   183,   272,   189,
     203,   204,   240,   189,   142,   199,   200,   406,   401,   402,
     403,   401,   274,   273,   401,   202,   198,   273,    16,    17,
      20,    23,    45,    73,    90,    91,   377,   373,   227,   244,
       1,    54,   189,   439,   130,   143,   340,    20,    20,   275,
     345,   452,    31,   216,   216,   300,   274,   274,    54,   435,
     439,   439,   463,   463,   483,    83,   480,   273,   273,   270,
     183,   184,   205,   201,   183,   184,    31,   407,   184,   273,
       1,   130,   142,   144,   186,   388,   389,     1,   130,   144,
     380,   381,     1,    17,   379,     1,   130,   142,   144,   186,
     383,   384,   378,   378,   378,   375,   183,   189,   189,   335,
     486,    20,   189,   184,   227,   217,   217,   275,   432,   189,
     189,    20,   227,    82,   183,   183,   189,   204,   227,   227,
     189,   200,   273,   402,   404,   189,   390,   391,   392,   184,
     378,   189,   382,   184,   378,   189,   227,   189,   385,   386,
     387,   184,   378,   341,     1,    36,   189,   485,   274,    76,
     104,   218,   219,   220,   221,   222,    20,    54,   485,   227,
     143,     7,    37,   143,   393,   394,   393,   393,   389,   393,
     381,   378,   393,   393,   393,   384,   189,   189,   453,   227,
      79,    84,   227,   439,   474,   111,   184,   223,   227,   227,
      94,   143,    69,   224,   475,   189,    21,    86,   275,   182,
     225,   476,   225,   253,    69,   253,   226,   477,   183,   275,
     226,   478,    20,     1,   151,   189,   479,   189,   189
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   187,   188,   189,   190,   191,   190,   192,   192,   192,
     192,   192,   193,   193,   194,   193,   195,   193,   196,   193,
     197,   193,   198,   198,   199,   199,   201,   200,   202,   202,
     203,   203,   205,   204,   207,   206,   206,   208,   208,   209,
     209,   210,   210,   211,   211,   211,   211,   211,   211,   211,
     212,   211,   211,   213,   211,   211,   211,   211,   211,   214,
     214,   215,   215,   216,   216,   217,   217,   218,   218,   218,
     219,   220,   221,   222,   223,   222,   224,   224,   224,   224,
     225,   226,   227,   228,   229,   229,   230,   230,   231,   232,
     231,   233,   234,   233,   235,   235,   236,   236,   237,   238,
     238,   239,   240,   240,   241,   241,   242,   242,   242,   243,
     243,   244,   245,   245,   245,   245,   245,   245,   245,   246,
     246,   246,   246,   247,   248,   247,   249,   247,   250,   247,
     247,   251,   251,   251,   251,   251,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   251,   252,   251,   251,
     251,   251,   251,   251,   253,   253,   254,   254,   255,   256,
     256,   256,   257,   257,   257,   257,   257,   258,   258,   258,
     258,   259,   259,   259,   260,   260,   260,   261,   261,   261,
     261,   261,   261,   262,   262,   262,   263,   263,   264,   264,
     265,   265,   266,   267,   266,   268,   269,   268,   270,   271,
     272,   270,   273,   273,   274,   274,   275,   275,   276,   276,
     277,   276,   276,   278,   276,   276,   276,   276,   276,   276,
     279,   279,   279,   279,   279,   279,   279,   279,   279,   279,
     280,   279,   281,   279,   279,   282,   279,   279,   279,   279,
     283,   279,   284,   279,   279,   285,   279,   286,   279,   279,
     287,   279,   288,   279,   279,   289,   290,   279,   279,   291,
     292,   279,   279,   279,   293,   279,   279,   279,   279,   279,
     279,   279,   279,   279,   294,   279,   279,   279,   279,   279,
     279,   279,   279,   295,   279,   279,   279,   296,   297,   279,
     279,   298,   279,   279,   279,   299,   300,   279,   279,   279,
     279,   279,   279,   279,   279,   279,   279,   279,   279,   301,
     279,   279,   279,   279,   279,   279,   279,   279,   279,   279,
     279,   279,   279,   302,   303,   279,   279,   279,   304,   305,
     307,   306,   308,   308,   310,   309,   311,   312,   311,   313,
     315,   314,   316,   316,   317,   318,   318,   318,   319,   319,
     321,   320,   322,   320,   323,   320,   324,   320,   325,   320,
     326,   326,   326,   327,   328,   327,   329,   327,   331,   330,
     333,   334,   335,   332,   332,   336,   337,   336,   339,   338,
     340,   340,   340,   341,   341,   342,   342,   343,   343,   343,
     344,   344,   344,   344,   344,   345,   345,   347,   346,   348,
     349,   348,   350,   351,   352,   352,   353,   353,   354,   354,
     355,   355,   356,   356,   356,   357,   357,   357,   358,   358,
     358,   359,   359,   360,   360,   361,   361,   362,   362,   363,
     363,   363,   365,   366,   364,   364,   367,   368,   364,   364,
     369,   369,   371,   370,   373,   372,   374,   375,   376,   376,
     377,   377,   377,   377,   377,   377,   377,   377,   377,   377,
     377,   378,   378,   379,   379,   380,   380,   382,   381,   381,
     383,   383,   385,   384,   386,   384,   387,   384,   384,   388,
     388,   390,   389,   391,   389,   392,   389,   389,   393,   394,
     394,   394,   394,   395,   395,   395,   395,   396,   395,   395,
     397,   395,   398,   395,   399,   395,   400,   395,   401,   401,
     403,   404,   402,   405,   406,   405,   407,   407,   409,   408,
     410,   410,   412,   411,   414,   413,   416,   415,   417,   417,
     418,   419,   419,   420,   420,   421,   422,   421,   423,   424,
     425,   426,   426,   427,   427,   428,   428,   428,   428,   428,
     428,   429,   429,   429,   429,   429,   429,   431,   432,   430,
     433,   430,   430,   434,   434,   435,   436,   436,   437,   437,
     438,   438,   438,   439,   439,   439,   440,   440,   440,   441,
     441,   441,   441,   442,   442,   442,   442,   443,   443,   444,
     444,   445,   446,   445,   448,   447,   447,   450,   451,   452,
     453,   449,   449,   454,   454,   456,   457,   458,   455,   455,
     460,   461,   462,   459,   459,   463,   463,   464,   465,   466,
     468,   467,   467,   469,   469,   470,   470,   472,   473,   474,
     475,   476,   477,   478,   471,   479,   479,   479,   480,   480,
     482,   483,   481,   481,   484,   484,   485,   485,   485,   486,
     486,   486,   487,   487,   487,   487,   487,   487,   487
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     0,     0,     3,     1,     1,     1,
       3,     3,     1,     2,     0,     7,     0,     6,     0,     7,
       0,     6,     4,     2,     1,     3,     0,     3,     4,     2,
       1,     3,     0,     3,     0,     6,     3,     0,     1,     0,
       1,     1,     2,     2,     2,     2,     2,     3,     1,     1,
       0,     5,     2,     0,     6,     1,     2,     3,     1,     0,
       2,     1,     1,     0,     2,     0,     2,     1,     1,     1,
       3,     3,     2,     0,     0,     4,     0,     2,     5,     7,
       0,     0,     1,     1,     3,     3,     0,     1,     3,     0,
       6,     3,     0,     5,     2,     1,     2,     1,     2,     1,
       3,     1,     1,     1,     0,     2,     0,     2,     3,     1,
       3,     2,     1,     1,     1,     4,     1,     1,     1,     0,
       1,     1,     1,     1,     0,     3,     0,     3,     0,     3,
       2,     1,     1,     1,     1,     1,     6,     6,     4,     6,
       4,     4,     4,     4,     4,     4,     4,     4,     6,     4,
       6,     8,     6,     8,     4,     4,     4,     4,     6,     5,
       4,     4,     6,     6,     4,     6,     4,     4,     4,     4,
       4,     4,     4,     4,     3,     4,     4,     0,     5,     3,
       3,     2,     2,     3,     0,     1,     1,     3,     1,     1,
       3,     4,     1,     2,     2,     2,     2,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     5,     1,     3,     3,     1,     3,     1,     3,
       1,     3,     1,     0,     4,     1,     0,     4,     1,     0,
       0,     7,     1,     3,     1,     2,     0,     2,     1,     3,
       0,     7,     3,     0,     6,     3,     3,     3,     4,     4,
       1,     2,     2,     2,     3,     3,     4,     3,     4,     3,
       0,     5,     0,     8,     3,     0,     4,     3,     4,     3,
       0,     6,     0,     8,     3,     0,     4,     0,     6,     4,
       0,     3,     0,     4,     2,     0,     0,     5,     3,     0,
       0,     5,     3,     3,     0,     6,     5,     4,     4,     3,
       2,     2,     2,     3,     0,     6,     3,     6,     4,     3,
       2,     3,     4,     0,     3,     3,     4,     0,     0,     6,
       5,     0,     5,     3,     3,     0,     0,    11,     1,     1,
       1,     1,     2,     3,     2,     3,     2,     3,     2,     0,
       4,     4,     3,     3,     3,     2,     3,     3,     2,     3,
       2,     4,     4,     0,     0,     7,     3,     2,     0,     1,
       0,     4,     0,     2,     0,     4,     0,     0,     5,     0,
       0,     5,     1,     1,     2,     1,     1,     1,     1,     2,
       0,     3,     0,     3,     0,     3,     0,     3,     0,     4,
       0,     1,     1,     1,     0,     4,     0,     4,     0,     3,
       0,     0,     0,     9,     3,     1,     0,     3,     0,     3,
       0,     1,     1,     0,     1,     2,     2,     1,     3,     3,
       1,     3,     3,     3,     2,     1,     3,     0,     3,     0,
       0,     3,     3,     2,     0,     2,     3,     3,     3,     3,
       1,     1,     3,     3,     3,     1,     1,     1,     0,     2,
       2,     2,     1,     2,     1,     2,     1,     2,     1,     1,
       1,     1,     0,     0,     6,     4,     0,     0,     5,     3,
       1,     1,     0,     3,     0,     4,     0,     2,     0,     2,
       3,     3,     3,     3,     3,     3,     2,     2,     2,     4,
       3,     0,     1,     0,     1,     1,     3,     0,     3,     1,
       1,     3,     0,     3,     0,     3,     0,     3,     1,     1,
       3,     0,     3,     0,     3,     0,     3,     1,     1,     1,
       1,     1,     2,     1,     1,     1,     2,     0,     3,     1,
       0,     3,     0,     3,     0,     3,     0,     3,     1,     3,
       0,     0,     4,     2,     0,     4,     0,     2,     0,     3,
       3,     2,     0,     4,     0,     5,     0,     2,     1,     3,
       1,     2,     2,     1,     1,     1,     0,     4,     1,     1,
       1,     2,     2,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     0,     6,
       0,     4,     2,     1,     2,     2,     1,     1,     2,     1,
       1,     2,     2,     1,     2,     2,     1,     2,     2,     1,
       2,     2,     2,     1,     2,     2,     2,     0,     2,     1,
       2,     1,     0,     4,     0,     5,     3,     0,     0,     0,
       0,    13,     3,     1,     1,     0,     0,     0,     9,     3,
       0,     0,     0,     9,     3,     1,     2,     2,     1,     1,
       0,     5,     5,     1,     2,     1,     1,     0,     0,     0,
       0,     0,     0,     0,    19,     1,     2,     2,     0,     2,
       0,     0,     8,     5,     0,     2,     1,     2,     2,     1,
       2,     2,     0,     1,     1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (rwm, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if RWLYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, rwm); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, rwl_main *rwm)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (rwm);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, rwl_main *rwm)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, rwm);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule, rwl_main *rwm)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              , rwm);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, rwm); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !RWLYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !RWLYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, rwl_main *rwm)
{
  YYUSE (yyvaluep);
  YYUSE (rwm);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (rwl_main *rwm)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex (&yylval, rwlyrwmscanner);
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 544 "rwlparser.y" /* yacc.c:1646  */
    {
	  ; // we are done!
	}
#line 3669 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 550 "rwlparser.y" /* yacc.c:1646  */
    { if (bit(rwm->mxq->errbits,RWL_ERROR_SEVERE)) YYABORT; }
#line 3675 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 556 "rwlparser.y" /* yacc.c:1646  */
    {  
	    bis(rwm->m2flags, RWL_P2_INTHING);
	    if (bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
	      YYACCEPT;
	  }
#line 3685 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 562 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->m2flags, RWL_P2_INTHING); 
	    if (bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
	      YYACCEPT;
	  }
#line 3695 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 577 "rwlparser.y" /* yacc.c:1646  */
    { rwlprintallvars(rwm); }
#line 3701 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 588 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->m3flags, RWL_P3_BNOXPROC|RWL_P3_BNOXFUNC))
	      rwlcodetail(rwm);
	    bic(rwm->m3flags, RWL_P3_BNOXPROC|RWL_P3_BNOXFUNC);
	    /* Is is crucial to set codename to 0 here as this means we
	       are no longer compiling code.  rwm->codename is used in many
	       places as argument to rwlfindvar2 to mean that we are compiling 
	       code and therefore need rwlfindvar2 to local for potential
	       local variables
	    */

	    rwm->codename = 0; // we are no longer compiling code
	    rwm->codeguess = RWL_VAR_NOGUESS;
	    }
#line 3720 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 604 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->raname = rwm->inam;
	      bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	      bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	      rwm->ravarn = rwladdvar(rwm, rwm->inam, RWL_TYPE_RAST, 0);
	      rwlrastbeg(rwm, rwm->raname, RWL_TYPE_RAST);
	    }
#line 3732 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 613 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->raname = rwm->inam;
	      bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	      rwm->ravarn = rwladdvar(rwm, rwm->inam, RWL_TYPE_RAST, 0);
	      rwlrastbeg(rwm, rwm->raname, RWL_TYPE_RAST);
	    }
#line 3743 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 621 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->raname = rwm->inam;
	      bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	      bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	      rwm->ravarn = rwladdvar(rwm, rwm->inam, RWL_TYPE_RAPROC, 0);
	      rwlrastbeg(rwm, rwm->raname, RWL_TYPE_RAPROC);
	    }
#line 3755 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 630 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->raname = rwm->inam;
	      rwm->ravarn = rwladdvar(rwm, rwm->inam, RWL_TYPE_RAPROC, 0);
	      rwlrastbeg(rwm, rwm->raname, RWL_TYPE_RAPROC);
	    }
#line 3765 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 641 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlrastfin(rwm, rwm->raname, (sb4) rwm->ravarn);
	    }
#line 3773 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 645 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlcancelvar(rwm, rwm->raname, (sb4) rwm->ravarn);
	      rwlrastclear(rwm);
	      rwlerror(rwm, RWL_ERROR_DECL_RAST); 
	      yyerrok;
	    }
#line 3784 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 658 "rwlparser.y" /* yacc.c:1646  */
    {rwm->raentry = rwm->sval; }
#line 3790 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 660 "rwlparser.y" /* yacc.c:1646  */
    {rwlrastadd(rwm, rwm->raentry, rwm->pval.dval); }
#line 3796 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 666 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlrastfin(rwm, rwm->raname, (sb4) rwm->ravarn);
	    }
#line 3804 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 670 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlcancelvar(rwm, rwm->raname, (sb4) rwm->ravarn);
	      rwlrastclear(rwm);
	      rwlerror(rwm, RWL_ERROR_DECL_RAPROC); 
	      yyerrok;
	    }
#line 3815 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 682 "rwlparser.y" /* yacc.c:1646  */
    {rwm->raentry = rwm->inam; }
#line 3821 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 684 "rwlparser.y" /* yacc.c:1646  */
    {rwlrastadd(rwm, rwm->raentry, rwm->pval.dval); }
#line 3827 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 689 "rwlparser.y" /* yacc.c:1646  */
    {
	      // add identifier
	      sb4 ld = rwladdvar(rwm, rwm->inam, RWL_TYPE_DB, 0);
	      if (ld >= 0)
	      {
		// and save data
	        rwm->dbsav = (rwl_cinfo *) rwlalloc(rwm, sizeof(rwl_cinfo));
		rwm->dbsav->vname = rwm->inam;
		rwm->dbsav->pooltext = "unset";
		rwm->dbsav->cclass = 0 ; 
		rwm->dbsav->stmtcache = RWL_DEFAULT_STMTCACHE;
		rwm->dbname = rwm->inam;
		rwm->mxq->evar[ld].vdata = rwm->dbsav;
	      }
	      bic(rwm->m2flags, RWL_P2_SOMEEXPFAIL);
	    }
#line 3848 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 706 "rwlparser.y" /* yacc.c:1646  */
    { 
	      // fix core dump, only call builddb if everything fine
	      if (bit(rwm->m2flags, RWL_P2_SOMEEXPFAIL))
	      {
		sb4 ld = rwlfindvar(rwm->mxq, rwm->dbname, RWL_VAR_NOGUESS);
		/*assert*/
		if (ld<0)
		{
		  rwlsevere(rwm, "[rwlparser-baddb:%s;%d]", rwm->dbname, ld);
		}
		else
		{
		  rwm->mxq->evar[ld].vtype = RWL_TYPE_CANCELLED;
		  rwm->mxq->evar[ld].vdata = 0;
		}
		// not needed, other erros will follow: rwlerror(rwm, RWL_ERROR_DATABASE_WRONG);
		if (rwm->dbsav)
		  rwlfree(rwm, rwm->dbsav);
		rwm->dbsav = 0;
	      }
	      else if (rwm->dbsav)
	      {
	        text *cp;
		if (!rwm->dbsav->connect && rwm->dbsav->username)
		{
		  // if no CONNECT, look for @ in username
		  if ((cp = rwlstrchr(rwm->dbsav->username, '@')))
		  {
		    rwm->dbsav->connect = rwlstrdup(rwm, cp+1);
		    rwm->dbsav->conlen = (ub4) rwlstrlen(rwm->dbsav->connect);
		    *cp = 0;
		  }
		}
		if (!rwm->dbsav->password && rwm->dbsav->username)
		{
		  // if no PASSWORD, look for / in username
		  if ((cp = rwlstrchr(rwm->dbsav->username, '/')))
		  {
		    if (cp[1])
		      rwm->dbsav->password = rwlstrdup(rwm, cp+1);
		    else
		      rwm->dbsav->password = (text *) "";
		    *cp = 0;
		  }
		}
		rwm->mxq->curdb = rwm->dbsav;
		if (!bit(rwm->m3flags, RWL_P3_GENERATE))
		  rwlbuilddb(rwm);
	      }
	      if (bit(rwm->m3flags, RWL_P3_GENERATE))
	      {
		rwlerror(rwm, RWL_ERROR_NOT_FOR_GEN_EXEC, "database declaration");
		bic(rwm->m3flags, RWL_P3_GENERATE_OK);
	      }
	    }
#line 3908 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 762 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DATABASE_WRONG); yyerrok; }
#line 3914 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 768 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
	        if (rwm->dbsav->username)
		  rwlerror(rwm, RWL_ERROR_DBSPEC_ALREADY, "username");
		else
		  rwm->dbsav->username = rwlstrdup(rwm, rwm->pval.sval);
	      }
	    }
#line 3928 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 788 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
	        if (rwm->dbsav->username)
		  rwlerror(rwm, RWL_ERROR_DBSPEC_ALREADY, "username");
		else
		  rwm->dbsav->username = rwlstrdup(rwm, rwm->pval.sval);
	      }
	    }
#line 3942 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 798 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	        rwm->dbsav->password = rwlstrdup(rwm, rwm->pval.sval);
	    }
#line 3951 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 803 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwlcclassgood(rwm, (rwm->pval.sval)))
	      { 
	        if (rwm->dbsav)
		  rwm->dbsav->cclass = rwlstrdup(rwm, rwm->pval.sval);
	      }
	    }
#line 3963 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 811 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
	        if (rwm->dbsav->connect)
		  rwlerror(rwm, RWL_ERROR_CONNECT_ALREADY, rwm->dbsav->vname);
		else
		{
		  rwm->dbsav->connect = rwlstrdup(rwm, rwm->pval.sval);
		  rwm->dbsav->conlen = (ub4) rwlstrlen(rwm->pval.sval);
		}
	      }
	    }
#line 3980 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 824 "rwlparser.y" /* yacc.c:1646  */
    {
	      if (rwm->dbsav)
	      {
		if (rwm->dbsav->connect)
		  rwlerror(rwm, RWL_ERROR_CONNECT_ALREADY, rwm->dbsav->vname);
		else
		{
		  rwl_cinfo *cp;
		  sb4 l;
		  l = rwlfindvar(rwm->mxq, rwm->inam, RWL_VAR_NOGUESS);
		  if (l>=0 && // variable exists
		      ( RWL_TYPE_DB == rwm->mxq->evar[l].vtype) // is db
			&& ((cp = rwm->mxq->evar[l].vdata))
			&&  RWL_DBPOOL_CONNECT == cp->pooltype // of type cpool
			&& cp->cpstring && cp->cpslen  // that is valid
		      )
		  {
		    rwm->dbsav->connect = cp->cpstring;
		    rwm->dbsav->conlen = cp->cpslen;
		    rwm->dbsav->cpvname = cp->vname; 
		    bis(rwm->dbsav->flags, RWL_DB_USECPOOL);
		  }
		  else
		  {
		    if (!bit(rwm->m2flags, RWL_P2_NOEXEC))
		      rwlerror(rwm, RWL_ERROR_MUST_BE_CPOOL, rwm->inam);
		  }
		}
	      }
	    }
#line 4015 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 855 "rwlparser.y" /* yacc.c:1646  */
    {
	      if (rwm->resdb)
	        rwlerror(rwm, RWL_ERROR_DBALREADY, "results", rwm->resdb);
	      else
	      {
	        if (rwm->dbsav)
		  bis(rwm->dbsav->flags, RWL_DB_RESULTS);
	        rwm->resdb = rwm->dbname;
	      }
	    }
#line 4030 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 866 "rwlparser.y" /* yacc.c:1646  */
    {
	      if (rwm->defdb)
	        rwlerror(rwm, RWL_ERROR_DBALREADY, "default", rwm->defdb);
	      else
	      {
	        if (rwm->dbsav)
		  bis(rwm->dbsav->flags, RWL_DB_DEFAULT);
	        rwm->defdb = rwm->dbname;
	      }
	    }
#line 4045 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 877 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      { 
		if (rwm->dbsav->pooltype)
		  rwlerror(rwm, RWL_ERROR_DBPOOL_ALREADY);
	        rwm->dbsav->pooltype = RWL_DBPOOL_CONNECT;
		rwm->dbsav->poolmin = 
		  rwlcheckminval(rwm->mxq, 0, rwm->pval.ival,0,0, (text *)"connectionpool min size");
		rwm->dbsav->ptimeout = RWL_DBPOOL_DEFAULT_TIMEOUT;
		rwm->dbsav->pooltext = "connection pool";
		rwm->misctxt = (text *)"connectionpool max size";
	      }
	    }
#line 4063 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 893 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      { 
		rwm->dbsav->stmtcache = rwlcheckminval(rwm->mxq, 0, rwm->pval.ival
		  , 0, RWL_DEFAULT_STMTCACHE, (text *)"cursorcache");
		bis(rwm->dbsav->flags, RWL_DB_CCACHUSER);
	      }
	    }
#line 4076 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 902 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      { 
		if (rwm->dbsav->pooltype)
		  rwlerror(rwm, RWL_ERROR_DBPOOL_ALREADY);
	        rwm->dbsav->pooltype = RWL_DBPOOL_SESSION;
		rwm->dbsav->poolmin = 
		  rwlcheckminval(rwm->mxq, 0, rwm->pval.ival,0,0, (text *)"sessionpool min size");
		rwm->dbsav->ptimeout = RWL_DBPOOL_DEFAULT_TIMEOUT;
		rwm->dbsav->pmaxuse = 0;
		rwm->dbsav->pooltext = "session pool";
		rwm->misctxt = (text *)"sessionpool max size";
	      }
	    }
#line 4095 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 920 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
		if (rwm->dbsav->pooltype)
		  rwlerror(rwm, RWL_ERROR_DBPOOL_ALREADY);
	        rwm->dbsav->pooltype = RWL_DBPOOL_POOLED;
		rwm->dbsav->pooltext = "drcp pooled";
	      }
	    }
#line 4109 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 930 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
		if (rwm->dbsav->pooltype)
		  rwlerror(rwm, RWL_ERROR_DBPOOL_ALREADY);
	        rwm->dbsav->pooltype = RWL_DBPOOL_DEDICATED;
		rwm->dbsav->pooltext = "dedicated";
	      }
	    }
#line 4123 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 940 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
		if (rwm->dbsav->pooltype)
		  rwlerror(rwm, RWL_ERROR_DBPOOL_ALREADY);
	        rwm->dbsav->pooltype = RWL_DBPOOL_RETHRDED;
		rwm->dbsav->pooltext = "threads dedicated";
	      }
	    }
#line 4137 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 950 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
		if (rwm->dbsav->pooltype)
		  rwlerror(rwm, RWL_ERROR_DBPOOL_ALREADY);
	        rwm->dbsav->pooltype = RWL_DBPOOL_RECONNECT;
		rwm->dbsav->pooltext = "reconnect";
	      }
	    }
#line 4151 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 967 "rwlparser.y" /* yacc.c:1646  */
    {
#if (RWL_OCI_VERSION<12)
	    rwlerror(rwm, RWL_ERROR_NOT_SUPPORTED_IN_VERSION, "statemark",RWL_OCI_VERSION);
#else
	    bis(rwm->dbsav->flags,RWL_DB_STATEMARK);
#endif
	  }
#line 4163 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 975 "rwlparser.y" /* yacc.c:1646  */
    {
#if (RWL_OCI_VERSION<12)
	    rwlerror(rwm, RWL_ERROR_NOT_SUPPORTED_IN_VERSION, "requestmark",RWL_OCI_VERSION);
#else
	    bis(rwm->dbsav->flags,RWL_DB_REQMARK);
#endif
	  }
#line 4175 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 985 "rwlparser.y" /* yacc.c:1646  */
    {
	      if (rwm->dbsav)
	      { 
		if (rwm->dbsav->poolmin) 
		  rwm->dbsav->poolmax = rwm->dbsav->poolmin;
		else // tell 0..0 is not good
		  rwm->dbsav->poolmax = rwlcheckminval(rwm->mxq, 0, 0
			, 1, 1, rwm->misctxt);
	      }
	    }
#line 4190 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 996 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      { 
		if (rwm->dbsav->poolmin) 
		  rwm->dbsav->poolmax = rwlcheckminval(rwm->mxq, 0, rwm->pval.ival
			, rwm->dbsav->poolmin, rwm->dbsav->poolmin, rwm->misctxt);
		else // tell 0..0 is not good
		  rwm->dbsav->poolmax = rwlcheckminval(rwm->mxq, 0, rwm->pval.ival
			, 1, 1, rwm->misctxt);
	      }
	    }
#line 4206 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 1021 "rwlparser.y" /* yacc.c:1646  */
    { 
#if (OCI_MAJOR_VERSION > 12)
	      if (rwm->dbsav)
	      { 
	        if (RWL_DBPOOL_CONNECT==rwm->dbsav->pooltype)
		  rwlerror(rwm, RWL_ERROR_CPOOL_NOT_RELEASE_COUNT
		    , rwm->dbsav->vname, "count");
		else
		{
		  if (rwm->dbsav->pmaxuse)
		    rwlerror(rwm, RWL_ERROR_DBSPEC_ALREADY, "release count");
		  else
		    rwm->dbsav->pmaxuse = rwlcheckminval(rwm->mxq, 0, rwm->pval.ival
		    , 1 , 1, (text *)"release count");
		}
	      }
#else
	    rwlerror(rwm, RWL_ERROR_NOT_YET_IMPL, "sessionpool release count");
#endif
	    }
#line 4231 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 1045 "rwlparser.y" /* yacc.c:1646  */
    { 
#if (OCI_MAJOR_VERSION > 12)
	      if (rwm->dbsav)
	      { 
	        if (RWL_DBPOOL_CONNECT==rwm->dbsav->pooltype)
		  rwlerror(rwm, RWL_ERROR_CPOOL_NOT_RELEASE_COUNT
		    , rwm->dbsav->vname, "every");
		else
		{
		  if (rwm->dbsav->pmaxlife)
		    rwlerror(rwm, RWL_ERROR_DBSPEC_ALREADY, "release every");
		  else
		    rwm->dbsav->pmaxuse = rwlcheckminval(rwm->mxq, 0, rwm->pval.ival
		    , 1 , 1, (text *)"release every");
		}
	      }
#else
	    rwlerror(rwm, RWL_ERROR_NOT_YET_IMPL, "sessionpool release every");
#endif
	    }
#line 4256 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 1069 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      { 
		rwm->dbsav->ptimeout = rwlcheckminval(rwm->mxq, 0, rwm->pval.ival
		  , RWL_DBPOOL_CONNECT==rwm->dbsav->pooltype ? 0: 1
		  , RWL_DBPOOL_DEFAULT_TIMEOUT, (text *)"release timeout");
	      }
	    }
#line 4269 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 1082 "rwlparser.y" /* yacc.c:1646  */
    { 
#if (OCI_MAJOR_VERSION >= 12)
	      if (rwm->dbsav && rwm->pval.dval >= 0)
		rwm->dbsav->wtimeout = rwm->pval.dval;
#else
	    rwlerror(rwm, RWL_ERROR_NOT_YET_IMPL, "sessionpool wait attribute");
#endif
	    }
#line 4282 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 1096 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->dbsav && rwm->pval.dval >= 0)
	      bis(rwm->dbsav->flags, RWL_DB_SPTOBREAK);
	  }
#line 4291 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 1112 "rwlparser.y" /* yacc.c:1646  */
    { 
	  if (rwm->dbsav && rwm->pval.dval >= 0)
	    bis(rwm->dbsav->flags, RWL_DB_SPTOBREAK);
	  // similar to normal procedure call
	  if (0 != rwm->furlev)
	    rwlsevere(rwm,"[rwlparser-recursethen:%d]", rwm->furlev);
	  rwm->aacnt[0] = 0;
	  rwm->funcn[0] = rwm->inam;
	  rwlexprbeg(rwm);
	  }
#line 4306 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 1126 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwl_estack *estk;
	    
	    rwlexprpush2(rwm, rwm->funcn[0]
	      , RWL_STACK_PROCCALL
	      , rwm->aacnt[0] );
	    if ((estk = rwlexprfinish(rwm)))
	      rwm->dbsav->tobreak = estk;
	    else
	      rwlexprclear(rwm);
	  }
#line 4322 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 1143 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprimmed(rwm);
	  }
#line 4330 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 1150 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprimmed(rwm);
	  }
#line 4338 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 1166 "rwlparser.y" /* yacc.c:1646  */
    { 
	    // start building a dummy procedure we never execute
	    rwm->totthr = 0;
	    rwlerror(rwm, RWL_ERROR_FUNCTION_WRONG);
	    bic(rwm->m4flags,RWL_P4_PROCHASSQL);
	    //bis(rwm->mflags, RWL_P_DXEQMAIN); 
	    bis(rwm->m3flags, RWL_P3_BNOXFUNC);
	    if (!rwm->codename) // We might have done the codeadd below
	      rwlcodehead(rwm, 1 /*thrcount*/);
	    yyerrok;
	  }
#line 4354 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 1178 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->codeguess=rwladdvar(rwm, rwm->inam, RWL_TYPE_FUNC, rwm->addvarbits);
	      if (!bit(rwm->mxq->errbits,RWL_ERROR_SEVERE)) // e.g. out of space
		rwlcodeaddpu(rwm, RWL_CODE_HEAD, rwm->inam, rwm->codeguess); 
	      rwm->codename = rwm->inam;
	      bic(rwm->m4flags,RWL_P4_PROCHASSQL|RWL_P4_STATSONLY);
	      bic(rwm->m2flags,RWL_P2_HAS_RETURN);
	      bis(rwm->m2flags,RWL_P2_COMP_FUNC);
	      /* Initially allocate temp array of MAX
	      */
	      rwm->lvsav = rwlalloc(rwm, rwm->maxlocals*sizeof(rwl_localvar));
	      rwm->facnt = 0; /* formal argument count */
	      rwm->lvcount = 1; /* total local variable count, at least 1 for return value */
	    }
#line 4373 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 1194 "rwlparser.y" /* yacc.c:1646  */
    {
	      /* codeguess was set en rwlcodeaddp */
	      if (rwm->codeguess>=0 && rwm->dtype)
	      {
	        bis(rwm->mxq->evar[rwm->codeguess].flags, RWL_IDENT_NOSTATS);
		rwm->mxq->evar[rwm->codeguess].v2val = rwm->facnt;
		/* similar code as in addvar for a scalar */
		switch (rwm->dtype)
		{
		  case RWL_TYPE_STR:
		    //rwm->mxq->evar[rwm->codeguess].vtype = RWL_TYPE_FUNC;
		    rwm->mxq->evar[rwm->codeguess].num.vtype = RWL_TYPE_STR;
		    rwm->mxq->evar[rwm->codeguess].num.slen = (ub8) rwm->declslen+1;
		    rwm->mxq->evar[rwm->codeguess].stype = "string function";
		    rwm->mxq->evar[rwm->codeguess].num.vsalloc = RWL_SVALLOC_NOT;
		  break;
		  case RWL_TYPE_INT:
		  case RWL_TYPE_DBL:
		    //rwm->mxq->evar[rwm->codeguess].vtype = RWL_TYPE_FUNC;
		    rwm->mxq->evar[rwm->codeguess].num.vtype = rwm->dtype;
		    rwm->mxq->evar[rwm->codeguess].stype = 
		      (rwm->dtype==RWL_TYPE_INT) ? "integer function" : "double function";
		    //rwm->mxq->evar[rwm->codeguess].num.slen = RWL_PFBUF;
		    rwm->mxq->evar[rwm->codeguess].num.vsalloc = RWL_SVALLOC_NOT;
		    //rwm->mxq->evar[rwm->codeguess].num.sval = rwlalloc(rwm, RWL_PFBUF);
		    //rwm->mxq->evar[rwm->codeguess].num.vsalloc = RWL_SVALLOC_FIX;
		  break;
		}
	      }
	      rwm->supsemerr = RWL_SUPSEM_FUNC;
	    }
#line 4409 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 1230 "rwlparser.y" /* yacc.c:1646  */
    { 
	    // start building a dummy procedure we never execute
	    rwm->totthr = 0;
	    bic(rwm->m4flags,RWL_P4_PROCHASSQL);
	    bis(rwm->m3flags, RWL_P3_BNOXPROC);
	    rwlerror(rwm, RWL_ERROR_PROCEDURE_WRONG);
	    if (!rwm->codename) // If we haven't done the code below
	      rwlcodehead(rwm, 1 /*thrcount*/);
	    yyerrok;
	  }
#line 4424 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 1241 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->codeguess=rwladdvar(rwm, rwm->inam, RWL_TYPE_PROC, rwm->addvarbits);
	      if (!bit(rwm->mxq->errbits,RWL_ERROR_SEVERE)) /* e.g. out of space */
		rwlcodeaddpu(rwm, RWL_CODE_HEAD, rwm->inam, rwm->codeguess);
	      rwm->codename = rwm->inam;
	      bic(rwm->m4flags,RWL_P4_PROCHASSQL|RWL_P4_STATSONLY);
	      bic(rwm->m2flags,RWL_P2_COMP_FUNC|RWL_P2_HAS_RETURN);
	      rwm->lvsav = rwlalloc(rwm, rwm->maxlocals*sizeof(rwl_localvar));
	      rwm->facnt = 0; /* formal argument count */
	      rwm->lvcount = 1; /* total local variable count, return value space is wasted */
	    }
#line 4440 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 1254 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwm->mxq->evar[rwm->codeguess].v2val = rwm->facnt;
	      rwm->supsemerr = RWL_SUPSEM_PROC;
	    }
#line 4449 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 1262 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 4458 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 1267 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 4466 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 1274 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 4475 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 1279 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 4483 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 1286 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (!bit(rwm->m3flags, RWL_P3_BNOXPROC|RWL_P3_BNOXFUNC))
	    { 
	      sb4 l;
	      ub4 c;
	      /* do it also after RWL_ERROR_SEVERE */

	       /* note that codegues was set when adding RWL_CODE_HEAD
	       */

	      /*asserts*/
	      if (!rwm->codename)
	      {
		rwlsevere(rwm, "[rwlparser-finish4]");
		goto finishcodebody;
	      }

	      l = rwlfindvar(rwm->mxq, rwm->codename, rwm->codeguess);
	      if (l<0)
	      {
		rwlsevere(rwm, "[rwlparser-finish1:%s;%d;%d]", rwm->codename, l, rwm->codeguess);
		goto finishcodebody;
	      }

	      if (    bit(rwm->m2flags,RWL_P2_COMP_FUNC) 
	          && !bit(rwm->m2flags,RWL_P2_HAS_RETURN))
		rwlerror(rwm, RWL_ERROR_NO_RETURN_IN_FUNCTION, rwm->codename);
	      /* handle arguments and local variables */
	      if (rwm->lvsav) // maybe zero if func/proc decl is wrong
	      {
		rwm->mxq->evar[l].v3val = rwm->lvcount; /* save count of local vars */
		rwm->mxq->evar[l].v2val = rwm->facnt;
		/* allocate actual size, copy, free temp */
		rwm->mxq->evar[l].vdata = rwlalloc(rwm, rwm->lvcount * sizeof(rwl_localvar));
		memcpy(rwm->mxq->evar[l].vdata, rwm->lvsav, rwm->lvcount *sizeof(rwl_localvar));
		rwlfree(rwm, rwm->lvsav);
	      }
	      rwm->lvsav = 0; /* clean to avoid trouble */

	      if (!bit(rwm->m4flags, RWL_P4_PROCHASSQL|RWL_P4_STATSONLY))
		rwlcodeadd0(rwm, RWL_CODE_END);
	      {
	      /* change type to RWL_CODE_SQLHEAD 
	       */

		c = rwm->mxq->evar[l].vval; /* first pc in my procedure */

		/*assert*/
		if (rwm->code[c].ctyp != RWL_CODE_HEAD)
		{
		  /* only show if not running out of space */
		  if (rwm->ccount < rwm->maxcode-1)
		    rwlsevere(rwm, "[rwlparser-finish2:%s;%d;%d]", rwm->codename, c, rwm->code[c].ctyp);
		  l=0;
		}
		else
		{
		  if (bit(rwm->m4flags, RWL_P4_PROCHASSQL))
		  {
		    /* tell this procedure needs a database */
		    rwm->code[c].ctyp = RWL_CODE_SQLHEAD;
		    rwm->code[c].cname = "hddb";
		    rwlcodeaddpu(rwm, RWL_CODE_SQLEND, rwm->codename, (ub4)l);
		  }
		  if (bit(rwm->m4flags, RWL_P4_STATSONLY))
		  {
		    if (bit(rwm->m4flags, RWL_P4_PROCHASSQL))
		      rwlerror(rwm, RWL_ERROR_STATSONLY_DOES_SQL, rwm->codename);
		    else
		      bis(rwm->mxq->evar[l].flags,RWL_IDENT_STATSONLY); 
		    /* tell this procedure does statistics */
		    rwm->code[c].ctyp = RWL_CODE_HEADSTATS;
		    rwm->code[c].cname = "hstat";
		    rwlcodeaddpu(rwm, RWL_CODE_STATEND, rwm->codename, (ub4)l);
		  }
		} /* assert */
	      } 
	      
	    }
	  finishcodebody:
	    bic(rwm->m4flags,RWL_P4_PROCHASSQL);
	  }
#line 4570 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 1377 "rwlparser.y" /* yacc.c:1646  */
    {
          sb4 l = rwlfindvar(rwm->mxq, rwm->inam, RWL_VAR_NOGUESS);
          if (l>=0)
            rwlprintvar(rwm->mxq, l);
          }
#line 4580 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 1390 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m3flags, RWL_P3_MISBRACK); }
#line 4586 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 1391 "rwlparser.y" /* yacc.c:1646  */
    { bic(rwm->m3flags, RWL_P3_MISBRACK); }
#line 4592 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 1394 "rwlparser.y" /* yacc.c:1646  */
    { if (!bit(rwm->m2flags, RWL_P2_NOWARNDEP)) rwlerror(rwm, RWL_ERROR_MISSING_DECL_BRACK); }
#line 4598 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 1406 "rwlparser.y" /* yacc.c:1646  */
    { 
	    sb4 la;
	    if (rwm->dtype &&
	       (la=rwladdvar2(rwm, rwm->inam, (ub4)rwm->dtype, RWL_IDENT_LOCAL,rwm->codename))
	         >=0
	       )
	    {
	      if (rwm->lvcount < rwm->maxlocals)
	      {
		rwm->lvsav[rwm->lvcount].aname = rwm->inam;
		rwm->lvsav[rwm->lvcount].aguess = la;
		rwm->lvsav[rwm->lvcount].atype = rwm->dtype;
		rwm->lvcount++;
		rwm->facnt++;
	      }
	      else
	      {
		rwlerror(rwm, RWL_ERROR_TOO_MAY_LOCALS, rwm->maxlocals-1);
		rwlerrormute(rwm,RWL_ERROR_TOO_MAY_LOCALS, 0);
	      }
	    }
	    
	  }
#line 4626 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 1434 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_INT; bic(rwm->addvarbits,RWL_IDENT_THRSPEC); }
#line 4632 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 1436 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_DBL; bic(rwm->addvarbits,RWL_IDENT_THRSPEC); }
#line 4638 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1438 "rwlparser.y" /* yacc.c:1646  */
    { rwm->declslen=RWL_DEFAULT_STRLEN; rwm->dtype=RWL_TYPE_STR; bic(rwm->addvarbits,RWL_IDENT_THRSPEC); }
#line 4644 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 1440 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->dtype=RWL_TYPE_STR;
	      bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
              if (RWL_TYPE_CANCELLED == rwm->pval.vtype)
                rwm->declslen = 1; // kind of a kludge, but this prevents doube
                                   // error reporting if using local variable
              else
                rwm->declslen = rwm->pval.ival;
	      if (rwm->declslen>RWL_MAX_STRING_LENGTH)
	      {
		rwlerror(rwm, RWL_ERROR_STRING_TOO_LONG, RWL_MAX_STRING_LENGTH);
		rwm->declslen=RWL_MAX_STRING_LENGTH;
	      }
	    }
#line 4663 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 1455 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwm->dtype = 0;
	      rwlerror(rwm, RWL_ERROR_BAD_ARGUMENT_TYPE, "file");
	    }
#line 4672 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 1460 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwm->dtype = 0;
	      rwlerror(rwm, RWL_ERROR_BAD_ARGUMENT_TYPE, "sql");
	    }
#line 4681 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 1465 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwm->dtype = 0;
	      rwlerror(rwm, RWL_ERROR_BAD_ARGUMENT_TYPE, "clob");
	    }
#line 4690 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 1474 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m4flags,RWL_P4_STATSONLY); }
#line 4696 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 1476 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m4flags,RWL_P4_PROCHASSQL); }
#line 4702 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1478 "rwlparser.y" /* yacc.c:1646  */
    {
	    sb4 l;
	    l = rwlfindvar(rwm->mxq, rwm->codename, RWL_VAR_NOGUESS);
	    /* find the variable and set the nostats flag */

	    if (l<0) /*assert*/
	    {
	      rwlsevere(rwm, "[rwlparser-finish3:%s;%d]", rwm->inam, l);
	    }
	    else
	    {
	      bis(rwm->mxq->evar[l].flags, RWL_IDENT_NOSTATS);
	    }
	    
	  }
#line 4722 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1498 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->m3flags, RWL_P3_BNOXFUNC|RWL_P3_BNOXPROC))
	    {
	      if (!bit(rwm->m2flags,RWL_P2_COMP_FUNC))
	        rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "procedure");
	    }
	    else
	    {
	      if (!bit(rwm->m2flags,RWL_P2_COMP_FUNC))
		rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END2
		  , "procedure", rwm->codename);
	    }
	  }
#line 4740 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1513 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->m3flags, RWL_P3_BNOXFUNC|RWL_P3_BNOXPROC))
	    {
	      if (bit(rwm->m2flags,RWL_P2_COMP_FUNC))
	        rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "function");
	    }
	    else
	    {
	      if (bit(rwm->m2flags,RWL_P2_COMP_FUNC))
		rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END2
		  , "function", rwm->codename);
	    }
	  }
#line 4758 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1528 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->m3flags, RWL_P3_BNOXFUNC|RWL_P3_BNOXPROC))
	    {
	      ; // The head was wrong, so we just assume the indentifier
	        // after end matches what the programmer really thought of
	    }
	    else
	    {
	      if (0 != rwlstrcmp(rwm->inam, rwm->codename))
		rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END2
		  , bit(rwm->m2flags,RWL_P2_COMP_FUNC)?"function":"procedure"
		  , rwm->codename);
	    }
	  }
#line 4777 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1544 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (bit(rwm->m3flags, RWL_P3_BNOXFUNC|RWL_P3_BNOXPROC))
	    {
	      if (!bit(rwm->m2flags,RWL_P2_COMP_FUNC))
	        rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END
		, bit(rwm->m2flags,RWL_P2_COMP_FUNC)?"function":"procedure");
	    }
	    else
	    {
	      rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END2
		, bit(rwm->m2flags,RWL_P2_COMP_FUNC)?"function":"procedure"
		, rwm->codename);
	      yyerrok;
	    }
	  }
#line 4797 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1587 "rwlparser.y" /* yacc.c:1646  */
    {
	      /*
	      There are cases where we have an expression followed
	      by an identifier in the syntax.  Since the parser may
	      have looked ahead in such cases, inam has been overwritten
	      but our lexer has saved the correct name as previnam
	      */
	      rwlexprpush(rwm, 
	        (yychar == RWL_T_IDENTIFIER)
		? rwm->previnam
		: rwm->inam, RWL_STACK_VAR);
	    }
#line 4814 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1601 "rwlparser.y" /* yacc.c:1646  */
    {
	      text buf[RWL_PFBUF];
	      rwl_value num;
	      num.dval = rwm->dval;
	      num.ival = (sb8) trunc(rwm->dval);
	      num.isnull = 0;
	      rwlsnpdformat(rwm, buf, RWL_PFBUF-1, num.dval);
	      num.sval = rwlstrdup(rwm, (text *)buf);
	      num.slen = rwlstrlen(buf)+1;
	      num.vsalloc = RWL_SVALLOC_FIX;
	      num.vtype = RWL_TYPE_DBL;
	      rwlexprpush(rwm, &num, RWL_STACK_NUM);
	    }
#line 4832 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1615 "rwlparser.y" /* yacc.c:1646  */
    {
	      text buf[RWL_PFBUF];
	      rwl_value num;
	      num.ival = rwm->ival;
	      num.dval = (double) rwm->ival;
	      num.isnull = 0;
	      rwlsnpiformat(rwm, buf, RWL_PFBUF, num.ival);
	      num.sval = rwlstrdup(rwm, (text *)buf);
	      num.slen = rwlstrlen(buf)+1;
	      num.vsalloc = RWL_SVALLOC_FIX;
	      num.vtype = RWL_TYPE_INT;
	      rwlexprpush(rwm, &num, RWL_STACK_NUM);
	    }
#line 4850 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1629 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwl_value num;
	      num.sval = rwm->sval; /* no strdup as RWL_T_STRING_CONST from lexer already is strdup'ed */
	      num.vsalloc = RWL_SVALLOC_CONST;
	      num.slen = rwlstrlen(num.sval)+1;
	      num.ival = rwldorxtosb8(rwm->mxq,num.sval);
	      num.dval = rwlatof(num.sval);
	      num.isnull = 0;
	      num.vtype = RWL_TYPE_STR;
	      rwlexprpush(rwm, &num, RWL_STACK_NUM);
	    }
#line 4866 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1641 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    }
#line 4874 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1644 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_UNIFORM); }
#line 4880 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1645 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LOGB); }
#line 4886 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1646 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LOG); }
#line 4892 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1647 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_EXPB); }
#line 4898 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1648 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_EXP); }
#line 4904 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1649 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_CEIL); }
#line 4910 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1650 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_TRUNC); }
#line 4916 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1651 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_FLOOR); }
#line 4922 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1652 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ROUND); }
#line 4928 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1653 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SQRT); }
#line 4934 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1654 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SIN); }
#line 4940 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1655 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_COS); }
#line 4946 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1656 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ATAN2); }
#line 4952 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1657 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LENGTHB); }
#line 4958 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1659 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_INSTRB2); }
#line 4964 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1661 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_INSTRB3); }
#line 4970 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1663 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SUBSTRB2); }
#line 4976 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1665 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SUBSTRB3); }
#line 4982 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1666 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_GETENV); }
#line 4988 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1667 "rwlparser.y" /* yacc.c:1646  */
    { 
						    if (bit(rwm->m4flags, RWL_P4_SLASHCONVERT)) rwlexprpush0(rwm,RWL_STACK_WINSLASHF2B);
						  }
#line 4996 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1670 "rwlparser.y" /* yacc.c:1646  */
    { 
						    if (bit(rwm->m4flags, RWL_P4_SLASHCONVERT)) rwlexprpush0(rwm,RWL_STACK_WINSLASHF2BB);
						  }
#line 5004 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1673 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SYSTEM); }
#line 5010 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1675 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprpush(rwm,rwm->inam ,RWL_STACK_SYSTEM2STR);
	  }
#line 5018 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1679 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_SYSTEM_BAD); yyerrok;
	    rwlexprpush0(rwm,RWL_STACK_SYSTEM);
	  }
#line 5027 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1683 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ERLANG); }
#line 5033 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1684 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ERLANG2); }
#line 5039 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1686 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ERLANGK); }
#line 5045 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1688 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_NORMALRANDOM); }
#line 5051 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1689 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ISNULL); }
#line 5057 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1691 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ACCESS); }
#line 5063 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1693 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->resdb)
	      rwlexprpush(rwm, rwm->resdb, RWL_STACK_SERVERRELEASE);
	    else
	    {
	      // push RWL_T_NULL to make exprfinish work
	      rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	      rwlerror(rwm, RWL_ERROR_NO_DATABASE, "results");
	    }
	  }
#line 5078 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1704 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->defdb)
	      rwlexprpush(rwm, rwm->defdb, RWL_STACK_SERVERRELEASE);
	    else
	    {
	      // push RWL_T_NULL to make exprfinish work
	      rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	      rwlerror(rwm, RWL_ERROR_NO_DATABASE, "default");
	    }
	  }
#line 5093 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1715 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprpush(rwm, rwm->inam, RWL_STACK_SERVERRELEASE);
	  }
#line 5101 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1719 "rwlparser.y" /* yacc.c:1646  */
    {
	    // push RWL_T_NULL to make exprfinish work
	    rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    rwlerror(rwm, RWL_ERROR_DBFUN_NEED_IDENT, "serverrelease"); yyerrok;
	  }
#line 5111 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1725 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprpush(rwm, rwm->inam, RWL_STACK_OPENSESSIONCOUNT);
	  }
#line 5119 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1729 "rwlparser.y" /* yacc.c:1646  */
    {
	    // push RWL_T_NULL to make exprfinish work
	    rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    rwlerror(rwm, RWL_ERROR_DBFUN_NEED_IDENT, "opensessioncount"); yyerrok;
	  }
#line 5129 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1735 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprpush(rwm, rwm->inam, RWL_STACK_ACTIVESESSIONCOUNT);
	  }
#line 5137 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1739 "rwlparser.y" /* yacc.c:1646  */
    {
	    // push RWL_T_NULL to make exprfinish work
	    rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    rwlerror(rwm, RWL_ERROR_DBFUN_NEED_IDENT, "activesessioncount"); yyerrok;
	  }
#line 5147 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1745 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->sqname)
	      rwlexprpush(rwm, rwm->sqname, RWL_STACK_SQL_ID);
	  }
#line 5156 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1750 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprpush(rwm, rwm->inam, RWL_STACK_SQL_ID);
	  }
#line 5164 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1754 "rwlparser.y" /* yacc.c:1646  */
    {
	    // push RWL_T_NULL to make exprfinish work
	    rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    rwlerror(rwm, RWL_ERROR_SQLID_NEED_IDENT); yyerrok;
	  }
#line 5174 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1761 "rwlparser.y" /* yacc.c:1646  */
    { 
	      /* element with furlev=0 is used by procedure call */
	      if (++rwm->furlev>=RWL_MAX_FUNC_RECURSION)
	      {
		rwlsevere(rwm, "[rwlparser-funcdepth:%d]", rwm->furlev);
		rwm->furlev--;
	      }
	      rwm->aacnt[rwm->furlev] = 0;
	      // lookahead in parser may have seen an identifier
	      rwm->funcn[rwm->furlev] = (yychar == RWL_T_IDENTIFIER) 
	      	? rwm->previnam : rwm->inam;
	    }
#line 5191 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1775 "rwlparser.y" /* yacc.c:1646  */
    { 
	      /* syntactically, the number of arguments doesn't matter
	         so we just provide the actual arg count to exprpush2
		 and deal with a mis-count there
	      */
	      rwlexprpush2(rwm, rwm->funcn[rwm->furlev]
	        , RWL_STACK_FUNCCALL
		, rwm->aacnt[rwm->furlev] );
	      if (rwm->furlev)
	        rwm->furlev--;
	    }
#line 5207 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1787 "rwlparser.y" /* yacc.c:1646  */
    {
            rwlexprpush(rwm, 0, RWL_STACK_DBSECONDS);
          }
#line 5215 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1791 "rwlparser.y" /* yacc.c:1646  */
    {
            rwlexprpush(rwm, 0, RWL_STACK_OCISECONDS);
          }
#line 5223 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1795 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (!bit(rwm->m2flags, RWL_P2_NOWARNDEP) && bit(rwm->m3flags,RWL_P3_MISBRACK))
	      rwlerror(rwm, RWL_ERROR_MISSING_EMPTY_BRACKETS, "runseconds");
	    rwlexprpush(rwm, 0, RWL_STACK_RUNSECONDS);
	  }
#line 5233 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1801 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (!bit(rwm->m2flags, RWL_P2_NOWARNDEP) && bit(rwm->m3flags,RWL_P3_MISBRACK))
	      rwlerror(rwm, RWL_ERROR_MISSING_EMPTY_BRACKETS, "epochseconds");
	    rwlexprpush(rwm, 0, RWL_STACK_EPOCHSECONDS);
	  }
#line 5243 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1820 "rwlparser.y" /* yacc.c:1646  */
    { rwm->aacnt[rwm->furlev]++; }
#line 5249 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1826 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ISNULL); }
#line 5255 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1827 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ISNOTNULL); }
#line 5261 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1833 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_MINUS); }
#line 5267 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1834 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_NOT); }
#line 5273 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1835 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_NOT); }
#line 5279 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1836 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_BITWISE_NOT); }
#line 5285 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1841 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_MUL); }
#line 5291 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1842 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_DIV); }
#line 5297 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1843 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_MOD); }
#line 5303 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1848 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ADD); }
#line 5309 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1849 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SUB); }
#line 5315 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1853 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_BITWISE_LEFT_SHIFT); }
#line 5321 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1854 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_BITWISE_RIGHT_SHIFT); }
#line 5327 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1859 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LESS); }
#line 5333 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1860 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_GREATER); }
#line 5339 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1861 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LESSEQ); }
#line 5345 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1862 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_GREATEREQ); }
#line 5351 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1863 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_BETWEEN); }
#line 5357 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1868 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_EQUAL); }
#line 5363 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1869 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_NOTEQUAL); }
#line 5369 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1874 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_BITWISE_AND); }
#line 5375 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1879 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_BITWISE_XOR); }
#line 5381 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1884 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_BITWISE_OR); }
#line 5387 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1890 "rwlparser.y" /* yacc.c:1646  */
    { 
	    // With AND (and OR) skipdep is used to mark
	    // the expression element we need to skip until
	    // in case the first condition is false (true for OR)
	    rwm->ptail->branchtype = RWL_EXP_ANDBRANCH;
	    if (rwm->skipdep++ >= UB1MAXVAL)
	      rwlsevere(rwm, "[rwlparser-andskip:%d]", rwm->skipdep);
	    rwm->ptail->skipnxt = rwm->skipdep;
	  }
#line 5401 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1900 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprpush2(rwm,0,RWL_STACK_AND, rwm->skipdep);
	    rwm->skipdep--;
	  }
#line 5410 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1909 "rwlparser.y" /* yacc.c:1646  */
    {  
	    // see comment above
	    rwm->ptail->branchtype = RWL_EXP_ORBRANCH;
	    if (rwm->skipdep++ >= UB1MAXVAL)
	      rwlsevere(rwm, "[rwlparser-orskip:%d]", rwm->skipdep);
	    rwm->ptail->skipnxt = rwm->skipdep;
	  }
#line 5422 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1917 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprpush2(rwm,0,RWL_STACK_OR ,rwm->skipdep);
	    rwm->skipdep--;
	  }
#line 5431 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1926 "rwlparser.y" /* yacc.c:1646  */
    {  
	    // With conditional execution we mark the condition
	    // with RWL_EXP_CONDBRANCH1
	    rwm->ptail->branchtype = RWL_EXP_CONDBRANCH1;
	    if (rwm->skipdep++ >= UB1MAXVAL)
	      rwlsevere(rwm, "[rwlparser-condskip:%d]", rwm->skipdep);
	    rwm->ptail->skipnxt = rwm->skipdep;
	  }
#line 5444 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1935 "rwlparser.y" /* yacc.c:1646  */
    {
	    // and the place of ':' (really ELSE) with 
	    // RWL_EXP_CONDBRANCH2
	    rwm->ptail->branchtype = RWL_EXP_CONDBRANCH2;
	    rwm->ptail->skipnxt = rwm->skipdep;
	  }
#line 5455 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1942 "rwlparser.y" /* yacc.c:1646  */
    {  
	    // And the actual conditional is the "end if" place
	    rwlexprpush2(rwm,0,RWL_STACK_CONDITIONAL, rwm->skipdep);
	    rwm->skipdep--;
	  }
#line 5465 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1951 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_CONCAT); }
#line 5471 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 1956 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_CONCAT); }
#line 5477 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 1967 "rwlparser.y" /* yacc.c:1646  */
    { rwm->supsemerr = 0; }
#line 5483 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 1972 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
	    {
	      rwm->ifdirdep = 0; // since we may be skipping over $else, $endif
	      YYACCEPT;
	    }
	  }
#line 5495 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 1980 "rwlparser.y" /* yacc.c:1646  */
    { yyerrok; }
#line 5501 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 1982 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_COMMAND_NOT_LOCAL, "threads"); yyerrok; }
#line 5507 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 1989 "rwlparser.y" /* yacc.c:1646  */
    { yyerrok; }
#line 5513 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 1991 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_COMMAND_NOT_LOCAL, "run"); yyerrok; }
#line 5519 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 1995 "rwlparser.y" /* yacc.c:1646  */
    { yyerrok; }
#line 5525 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 1997 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_NOT_LOCAL, "database"); yyerrok; }
#line 5531 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 1999 "rwlparser.y" /* yacc.c:1646  */
    { yyerrok ; }
#line 5537 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 2002 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_NOT_LOCAL, "random procedure array"); yyerrok; }
#line 5543 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 2005 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_NOT_LOCAL, "random string array"); yyerrok; }
#line 5549 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 2010 "rwlparser.y" /* yacc.c:1646  */
    { 
	    switch(rwm->supsemerr)
	    {
	      case RWL_SUPSEM_PROC:
	        rwlerror(rwm, RWL_ERROR_UNNEEDED_SEMICOLON_AFTER, "procedure header");
	      break;

	      case RWL_SUPSEM_FUNC:
	        rwlerror(rwm, RWL_ERROR_UNNEEDED_SEMICOLON_AFTER, "function header");
	      break;

	      case RWL_SUPSEM_CQNSTART:
	        rwlerror(rwm, RWL_ERROR_UNNEEDED_SEMICOLON_AFTER, "querynotification start");
	      break;

	      case RWL_SUPSEM_THREAD:
	        rwlerror(rwm, RWL_ERROR_UNNEEDED_SEMICOLON_AFTER, "threads count");
	      break;

	      case RWL_SUPSEM_EMBSQL:
	        rwlerror(rwm, RWL_ERROR_UNNEEDED_SEMICOLON_AFTER, "embedded sql");
	      break;

	      default:
	        rwlerror(rwm, RWL_ERROR_UNNEEDED_SEMICOLON, rwm->loc.inpos);
	      break;
	    }
	  }
#line 5582 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 2039 "rwlparser.y" /* yacc.c:1646  */
    {
	  if (!rwm->codename)
	  { 
	    if (bit(rwm->m3flags, RWL_P3_NICEABORT))
	      rwlerror(rwm, RWL_ERROR_ABORTNICE);
	    else
	      rwlerror(rwm, RWL_ERROR_ABORT);
	    exit((sb4)(rwm->mxq->errbits & RWL_EXIT_ERRORS));
	  }
	  else
	  {
	    rwlcodeadd0(rwm, RWL_CODE_ABORT);
	  }
	}
#line 5601 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 2054 "rwlparser.y" /* yacc.c:1646  */
    {
	  if (!rwm->codename)
	  { 
	    rwlerror(rwm, RWL_ERROR_NOSTATS_NO_EFFECT);
	  }
	  else
	  {
	    rwlcodeadd0(rwm, RWL_CODE_NOSTATISTICS);
	  }
	}
#line 5616 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 2071 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_LOB); yyerrok; }
#line 5622 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 2078 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_INT); yyerrok; }
#line 5628 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 2084 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_DBL); yyerrok; }
#line 5634 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 2086 "rwlparser.y" /* yacc.c:1646  */
    { 
		rwm->declslen=RWL_DEFAULT_STRLEN;
	      }
#line 5642 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 2092 "rwlparser.y" /* yacc.c:1646  */
    {
	      if (RWL_TYPE_CANCELLED == rwm->pval.vtype)
		rwm->declslen = 1; // kind of a kludge, but this prevents doube
				   // error reporting if using local variable
	      else
	      {
		rwm->declslen = rwm->pval.ival;
	      }
	    }
#line 5656 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 2106 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_STR); yyerrok; }
#line 5662 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 2108 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dtype=RWL_TYPE_FILE;
	    //if (rwm->codename)
	    //  rwlerror(rwm, RWL_ERROR_NOT_LOCAL, "file");
	  }
#line 5672 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 2117 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_FILE); yyerrok; }
#line 5678 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 2122 "rwlparser.y" /* yacc.c:1646  */
    {
	      if (rwm->rslerror)
		rwm->rslerror--;
	      else
	      {
		// while end is just like a loop end 
		rwlcodeadd0(rwm, RWL_CODE_FORL); 
		bic(rwm->rslflags[rwm->rsldepth], RWL_RSLFLAG_WHILOP);
		if (bit(rwm->mflags, RWL_P_DXEQMAIN) && 0==rwm->rsldepth)
		{
		  rwlcodecall(rwm);
		  bic(rwm->mflags, RWL_P_DXEQMAIN);
		  if (bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
		  {
		    rwm->ifdirdep = 0; // since we may be skipping over $else, $endif
		    YYACCEPT;
		  }
		}
	      }
	    }
#line 5703 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 2145 "rwlparser.y" /* yacc.c:1646  */
    {
	      if (rwm->rslerror)
		rwm->rslerror--;
	      else
	      {
		rwlcodeadd0(rwm, RWL_CODE_ENDIF); 
		// Note the RWL_CODE_ENDCUR decreases rsldepth, so it must
		// be done in both if/else parts belwo
		if (bit(rwm->mflags, RWL_P_DXEQMAIN) && 0==rwm->rsldepth)
		{
		  //rwlcodeadd0(rwm, RWL_CODE_ENDIF); 
		  rwlcodecall(rwm);
		  bic(rwm->mflags, RWL_P_DXEQMAIN);
		  if (bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
		  {
		    rwm->ifdirdep = 0; // since we may be skipping over $else, $endif
		    YYACCEPT;
		  }

		}
	      }
	    }
#line 5730 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 2169 "rwlparser.y" /* yacc.c:1646  */
    { if (!rwm->rslerror) rwlcodeadd0(rwm, RWL_CODE_ELSE); }
#line 5736 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 2172 "rwlparser.y" /* yacc.c:1646  */
    {
	      if (rwm->rslerror)
		rwm->rslerror--;
	      else
	      {
		rwlcodeadd0(rwm, RWL_CODE_ENDIF); 
		// be done in both if/else parts belwo
		if (bit(rwm->mflags, RWL_P_DXEQMAIN) && 0==rwm->rsldepth)
		{
		  //rwlcodeadd0(rwm, RWL_CODE_ENDIF); 
		  rwlcodecall(rwm);
		  bic(rwm->mflags, RWL_P_DXEQMAIN);
		  if (bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
		  {
		    rwm->ifdirdep = 0; // since we may be skipping over $else, $endif
		    YYACCEPT;
		  }
		}
	      }
	    }
#line 5761 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 2195 "rwlparser.y" /* yacc.c:1646  */
    {
		sb4 l;
		/* start expression */
		rwm->assignvar = rwm->inam;
		l = rwlfindvar2(rwm->mxq, rwm->assignvar, RWL_VAR_NOGUESS, rwm->codename);
		/* If the variable does not exist, just use the dummy
		 * internal one, so the code can continue parsing without
		 * error.  Note that due to rwlfindvar having found the 
		 * variable did not exist, this will never actually get
		 * executed
		 */
		if (l>0)
		{
		  switch (rwm->mxq->evar[l].vtype)
		  {
		    case RWL_TYPE_DBL:
		    case RWL_TYPE_INT:
		    case RWL_TYPE_STR:
		      break;
		    default:
		      rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2
			, rwm->mxq->evar[l].stype, rwm->assignvar, "for loop");
		      rwm->assignvar = RWL_DUMMY_VAR;
		  }
		}
		else
		  rwm->assignvar = RWL_DUMMY_VAR;
		if (!rwm->codename) // generating code in main for direct execution
		{
		  rwm->totthr = 0;
		  // now in lexer: rwm->lnosav = rwm->loc.lineno;
		  bis(rwm->mflags, RWL_P_DXEQMAIN);
		  bic(rwm->m4flags,RWL_P4_PROCHASSQL);
		  rwlcodehead(rwm, 1 /*thrcount*/);
		}
		rwlexprbeg(rwm);
	      }
#line 5803 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 2237 "rwlparser.y" /* yacc.c:1646  */
    {
	      switch (rwm->rsllityp[rwm->rsldepth])
	      {
		case RWL_LI_COMMA:
		  { 
		    rwlcodeaddp(rwm, RWL_CODE_LIEND, rwm->rsllihead[rwm->rsldepth]);
		    if (bit(rwm->mflags, RWL_P_DXEQMAIN) && 0==rwm->rsldepth)
		    {
		      rwlcodecall(rwm);
		      bic(rwm->mflags, RWL_P_DXEQMAIN);
		      if (bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
		      {
			rwm->ifdirdep = 0; // since we may be skipping over $else, $endif
			YYACCEPT;
		      }
		    }
		  }
		break;

		case RWL_LI_DOTDOT:
		  { 
		    rwl_estack *estk;
		    if (rwm->loopvar[rwm->rsldepth])
		    {
		      /*
		      if loopvar exist (head was good)
		      create the loopvar := loopvar + 1 expression

		      first push loopvar 
		      */
		      rwlexprbeg(rwm);
		      rwlexprpush(rwm, rwm->loopvar[rwm->rsldepth], RWL_STACK_VAR);

		      // push the constant 1
		      rwlexprpush(rwm, rwl_onep, RWL_STACK_NUM);

		      // push +
		      rwlexprpush(rwm,0,RWL_STACK_ADD);

		      // push assign and finish
		      rwlexprpush(rwm, rwm->loopvar[rwm->rsldepth], RWL_STACK_ASN);
		      estk = rwlexprfinish(rwm);
		      rwlcodeaddp(rwm, RWL_CODE_ASSIGN, estk);

		      rwlcodeadd0(rwm, RWL_CODE_FORL);
		    }
		    if (bit(rwm->mflags, RWL_P_DXEQMAIN) && 0==rwm->rsldepth)
		    {
		      rwlcodecall(rwm);
		      bic(rwm->mflags, RWL_P_DXEQMAIN);
		      if (bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
		      {
			rwm->ifdirdep = 0; // since we may be skipping over $else, $endif
			YYACCEPT;
		      }
		    }
		  }
		break;

		case RWL_LI_BAD:
		  break; // error already reported

		default:
		  rwlsevere(rwm,"[rwlparser-noloopiter:%d;%d]"
		  , rwm->rsldepth, rwm->rslmisc[rwm->rsldepth]);
	      }
	    }
#line 5875 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 2306 "rwlparser.y" /* yacc.c:1646  */
    { 
		  rwlerror(rwm, RWL_ERROR_LOOP);
		  rwm->rsllityp[rwm->rsldepth] = RWL_LI_BAD;
		  yyerrok;
		}
#line 5885 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 2313 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SYSTEM); }
#line 5891 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 2316 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprpush(rwm,rwm->inam ,RWL_STACK_SYSTEM2STR);
	  }
#line 5899 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 2321 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_SYSTEM_BAD); yyerrok;
	    rwlexprclear(rwm);
	  }
#line 5908 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 2326 "rwlparser.y" /* yacc.c:1646  */
    {
		/* start a dummy assignment such that expression gets executed */
		rwm->assignvar = RWL_DUMMY_VAR;
		rwm->assignoper = RWL_T_ASSIGN;
		rwlexprbeg(rwm);
	      }
#line 5919 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 2335 "rwlparser.y" /* yacc.c:1646  */
    {
		/* start expression for assign */
		rwm->assignvar = rwm->inam;
		rwlexprbeg(rwm);
	      }
#line 5929 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 2344 "rwlparser.y" /* yacc.c:1646  */
    {
		if (!rwm->codename)
		  rwlerror(rwm, RWL_ERROR_RETURN_OUTSIDE_CODE);
		else
		{
		  rwlcodeaddpu(rwm, RWL_CODE_RETURN, rwm->codename, rwm->codeguess);
		  bis(rwm->m2flags, RWL_P2_HAS_RETURN);
		  if (bit(rwm->m2flags,RWL_P2_COMP_FUNC))
		    rwlerror(rwm,RWL_ERROR_RETURN_NO_EXPR, rwm->codename);
		}
	      }
#line 5945 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 2356 "rwlparser.y" /* yacc.c:1646  */
    {
	        rwm->assignvar = rwm->codename;
		rwlexprbeg(rwm);
	      }
#line 5954 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 2361 "rwlparser.y" /* yacc.c:1646  */
    {
		rwl_estack *estk;
		if (!rwm->codename)
		{
		  rwlerror(rwm, RWL_ERROR_RETURN_OUTSIDE_CODE);
		  rwlexprclear(rwm);
		}
		else
		{
		  if (bit(rwm->mflags, RWL_P_DXEQMAIN))
		  {
		    // attempt return x from anon procedure in main
		    rwlerror(rwm, RWL_ERROR_RETURN_OUTSIDE_CODE);
		    rwlexprclear(rwm);
		  }
		  else
		  {
		    rwlexprpush(rwm, rwm->assignvar, RWL_STACK_ASNINT);
		    // rwlnuminvar will later really use locals[depth[0]
		    estk = rwlexprfinish(rwm);
		    rwlcodeaddp(rwm, RWL_CODE_ASSIGN, estk);
		    bis(rwm->m2flags, RWL_P2_HAS_RETURN);
		    if (!bit(rwm->m2flags,RWL_P2_COMP_FUNC))
		      rwlerror(rwm,RWL_ERROR_RETURN_WITH_EXPR, rwm->codename);
		  }
		  rwlcodeaddpu(rwm, RWL_CODE_RETURN, rwm->codename, rwm->codeguess);
		}
	      }
#line 5987 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 2390 "rwlparser.y" /* yacc.c:1646  */
    { 
		  rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		  rwlexprclear(rwm);
		  yyerrok;
		}
#line 5997 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 2397 "rwlparser.y" /* yacc.c:1646  */
    {
	        rwm->assignvar = rwm->codename;
		rwlexprbeg(rwm);
	      }
#line 6006 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 2402 "rwlparser.y" /* yacc.c:1646  */
    {
		rwl_estack *estk;
		if (!rwm->codename)
		{
		  estk = rwlexprfinish(rwm);
		  if (!bit(rwm->m2flags, RWL_P2_NOEXEC))
		  {
		    rwlexpreval(estk, &rwm->loc, rwm->mxq, &rwm->pval);
		    rwm->userexit = (int) rwm->pval.ival;
		    bis(rwm->m3flags, RWL_P3_USEREXIT);
		  }
		}
		else
		{
		  if (!bit(rwm->mflags, RWL_P_DXEQMAIN))
		  {
		    // attempt exit from named procedure/function
		    rwlerror(rwm, RWL_ERROR_EXIT_INSIDE_CODE);
		    rwlexprclear(rwm);
		  }
		  else
		  {
		    // this only happens inside anon proc/func
		    estk = rwlexprfinish(rwm);
		    rwlcodeaddp(rwm, RWL_CODE_EXIT, estk);
		  }
		}
	      }
#line 6039 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 2432 "rwlparser.y" /* yacc.c:1646  */
    { 
		  rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		  rwlexprclear(rwm);
		  yyerrok;
		}
#line 6049 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 2440 "rwlparser.y" /* yacc.c:1646  */
    {
		rwl_estack *estk;
		if ((estk = rwlexprfinish(rwm)))
		{
		  if (rwm->codename)
		    rwlcodeaddp(rwm, RWL_CODE_WAIT, estk);
		  else
		  {
		    rwlexpreval(estk, &rwm->loc, rwm->mxq, &rwm->pval);
		    rwlwait(rwm->mxq, &rwm->loc, rwm->pval.dval);
		  }
		}
	      }
#line 6067 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 2454 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->mdbnam = rwm->inam; 
	      rwm->mdbvar = rwlfindvar2(rwm->mxq, rwm->mdbnam, RWL_VAR_NOGUESS, rwm->codename);
	      if (rwm->mdbvar>=0 && RWL_TYPE_DB != rwm->mxq->evar[rwm->mdbvar].vtype)
	      {
		rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2
		  , rwm->mxq->evar[rwm->modsqlvar].stype, rwm->inam, "modify database");
		rwm->mdbvar = RWL_VAR_INVALID;
	      }
	    }
#line 6082 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 2468 "rwlparser.y" /* yacc.c:1646  */
    {
		rwl_estack *estk;
		if ((estk = rwlexprfinish(rwm)))
		{
		  if (rwm->codename)
		    rwlcodeaddp(rwm, RWL_CODE_SETCCLASS, estk);
		  else
		  {
		    rwlexprclear(rwm);
		    rwlerror(rwm, RWL_ERROR_NOT_DONE_IN_MAIN, "modify database connectionclass");
		  }
		}
	      }
#line 6100 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 2484 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (!rwm->codename)
	    {
	      rwlerror(rwm, RWL_ERROR_NOT_DONE_IN_MAIN, "modify database leak");
	      goto dontmoddbpool;
	    }
	    else
	      rwlcodeadd0(rwm, RWL_CODE_MODDBLEAK);
	  }
#line 6114 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 2495 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->codename)
	      rwlcodeadd0(rwm, RWL_CODE_SESRELDROP);
	  }
#line 6123 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 2501 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->codename)
	      rwlcodeadd0(rwm, RWL_CODE_SESRELDROP);
	  }
#line 6132 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 2507 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->codename)
	      rwlcodeadd0(rwm, RWL_CODE_COMMIT);
	    else
	    {
	      rwldummyonbad(rwm->mxq, rwm->defdb);
	      if (!bit(rwm->m2flags, RWL_P2_NOEXEC))
		rwlcommit(rwm->mxq, &rwm->loc, rwm->mxq->curdb);
	    }
	  }
#line 6147 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 2519 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->codename)
	      rwlcodeadd0(rwm, RWL_CODE_ROLLBACK);
	    else
	    {
	      rwldummyonbad(rwm->mxq, rwm->defdb);
	      if (!bit(rwm->m2flags, RWL_P2_NOEXEC))
		rwlrollback(rwm->mxq, &rwm->loc, rwm->mxq->curdb);
	    }
	  }
#line 6162 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 2531 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->codename)
	      rwlcodeadd0(rwm, RWL_CODE_SHIFT);
	    else
	      if (!bit(rwm->m2flags, RWL_P2_NOEXEC))
		rwlshiftdollar(rwm->mxq, &rwm->loc);
	  }
#line 6174 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 2540 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->codename)
	      rwlcodeadd0(rwm, RWL_CODE_GETRUSAGE);
	    else
	      if (!bit(rwm->m2flags, RWL_P2_NOEXEC))
		rwlgetrusage(rwm->mxq, 0);
	  }
#line 6186 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 2549 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->msqlinam = rwm->inam; rwm->mqbdtyp = 0;
	      rwm->modsqlvar = rwlfindvar2(rwm->mxq, rwm->msqlinam, RWL_VAR_NOGUESS, rwm->codename);
	      if (rwm->modsqlvar>=0 && RWL_TYPE_SQL != rwm->mxq->evar[rwm->modsqlvar].vtype)
	      {
		rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2
		  , rwm->mxq->evar[rwm->modsqlvar].stype, rwm->inam, "modify sql");
		rwm->modsqlvar = RWL_VAR_INVALID;
	      }
	    }
#line 6201 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 2562 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_MODIFY); yyerrok; }
#line 6207 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 2575 "rwlparser.y" /* yacc.c:1646  */
    {
	      /* This code can cause lookahead */
	      rwlerror(rwm, RWL_ERROR_BAD_ARG_LIST);
	      rwlexprclear(rwm);
	      yyerrok;
	    }
#line 6218 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 2582 "rwlparser.y" /* yacc.c:1646  */
    {
	      if (rwm->codename) // building a procedure
	      {
		bis(rwm->m4flags,RWL_P4_PROCHASSQL);
		rwlcodeadd0(rwm, RWL_CODE_OCIPING);
	      }
	      else // directly in main
	      {
		rwldummyonbad(rwm->mxq, rwm->defdb);
		if (!bit(rwm->m2flags, RWL_P2_NOEXEC))
		  rwlociping(rwm->mxq, &rwm->loc, rwm->mxq->curdb, 0);
	      }

	    }
#line 6237 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 2601 "rwlparser.y" /* yacc.c:1646  */
    { rwm->supsemerr = RWL_SUPSEM_EMBSQL; }
#line 6243 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 317:
#line 2607 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m3flags, RWL_P3_IMMPARSEFOR); }
#line 6249 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 2609 "rwlparser.y" /* yacc.c:1646  */
    { bic(rwm->m3flags, RWL_P3_IMMPARSEFOR); }
#line 6255 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 2615 "rwlparser.y" /* yacc.c:1646  */
    {

	      rwm->rslmisc[rwm->rsldepth] = RWL_VAR_NOGUESS;  // see finish wrapper test below
	      bic(rwm->m4flags,RWL_P4_PROCHASSQL); // ?? Should we really do this here?
	      if (rwm->codename) // building a procedure
	      {
	        sb4 l2;
		l2 = RWL_VAR_NOGUESS;
		if (bit(rwm->m2flags, RWL_P2_AT))
		{
		  l2 = rwlfindvar(rwm->mxq, rwm->dbname, RWL_VAR_NOGUESS);
		  if (RWL_TYPE_DB != rwm->mxq->evar[l2].vtype)
		  {
		    rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2
		      , rwm->mxq->evar[l2].stype, rwm->dbname, "at clause");
		  }
		  else
		  {
		    rwl_cinfo *thisdb = rwm->mxq->evar[l2].vdata;
		    switch (thisdb->pooltype)
		    {
		      case RWL_DBPOOL_RETHRDED:
			rwlerror(rwm,RWL_ERROR_WRONG_DB_IN_CODE, "threads dedicated", thisdb->vname);
			l2 = RWL_VAR_NOGUESS;
		      break;
		      case RWL_DBPOOL_DEDICATED:
			rwlerror(rwm,RWL_ERROR_WRONG_DB_IN_CODE, "dedicated", thisdb->vname);
			l2 = RWL_VAR_NOGUESS;
		      break;

		      default:
		      break;
		    }
		  }
		}
		// If at clause was found, wrap the whole statement list 
		// with NEWDB/OLDDB and PCINCR/PCDECR
		if (l2>=0)
		{
		  rwlcodeaddpu(rwm, RWL_CODE_NEWDB, rwm->dbname, l2);
		  rwlcodeadd0(rwm, RWL_CODE_PCINCR);
		  rwm->rslmisc[rwm->rsldepth] = l2;
		}
		// or DEFDB
		if (bit(rwm->m2flags, RWL_P2_ATDEFAULT))
		{
		  rwlcodeadd0(rwm, RWL_CODE_DEFDB);
		  rwlcodeadd0(rwm, RWL_CODE_PCINCR);
		  rwm->rslmisc[rwm->rsldepth] = RWL_VAR_DEFDB; // see end wrapper below
		}
		
		if (++rwm->rsldepth > RWL_MAX_RSL_DEPTH)
		{
		  rwlsevere(rwm, "[parser-depthex1:%d]", rwm->rsldepth);
		  --rwm->rsldepth;
		}
	      }
	      else // directly in main
	      {
		// Shouldn't we do it here in stead:
		// bic(rwm->m4flags,RWL_P4_PROCHASSQL); 
		rwm->totthr = 0;
		if (rwm->rsldepth) /*ASSERT*/
		  rwlsevere(rwm, "[rwlparser-stmtrsldepth:%d]", rwm->rsldepth);

		if (bit(rwm->m2flags, RWL_P2_ATDEFAULT))
		  rwlerror(rwm, RWL_ERROR_AT_DEFAULT_NO_IMPACT);
		bis(rwm->mflags, RWL_P_DXEQMAIN);
		if (++rwm->rsldepth > RWL_MAX_RSL_DEPTH)
		{
		  rwlsevere(rwm, "[parser-depthex2:%d]", rwm->rsldepth);
		  --rwm->rsldepth;
		}
		rwlcodehead(rwm, 1 /*thrcount*/);
	      }

	      rwm->rslpcbrk[rwm->rsldepth] = 0;
	      bis(rwm->rslflags[rwm->rsldepth], RWL_RSLFLAG_MAYBRK);
	      if (++rwm->rsldepth > RWL_MAX_RSL_DEPTH)
	      {
		rwlsevere(rwm, "[parser-depthex3:%d]", rwm->rsldepth);
		--rwm->rsldepth;
	      }
	    }
#line 6344 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 2702 "rwlparser.y" /* yacc.c:1646  */
    {
	      --rwm->rsldepth;
	      if (rwm->rslerror)
		rwm->rslerror--;
	      else
	      {
		sb4 l2;
		rwlfinishbreaks(rwm, rwm->ccount);
		rwm->rsldepth--;
	        l2 = rwm->rslmisc[rwm->rsldepth]; // will be RWL_VAR_NOGUESS if no at was seen
		// similar to ifterminator
		if (bit(rwm->mflags, RWL_P_DXEQMAIN) && 0==rwm->rsldepth)
		{
		  rwlcodecall(rwm);
		  bic(rwm->mflags, RWL_P_DXEQMAIN);
		  if (bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
		  {
		    rwm->ifdirdep = 0; // since we may be skipping over $else, $endif
		    YYACCEPT;
		  }
		}
		else if (l2>=0 || RWL_VAR_DEFDB==l2) // finish the wrapper above
		{
		  rwlcodeadd0(rwm, RWL_CODE_PCDECR);
		  rwlcodeadd0(rwm, RWL_CODE_OLDDB);
		}
	      }
	    }
#line 6377 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 2732 "rwlparser.y" /* yacc.c:1646  */
    { 
	    sb4 l;
	    /* lookup the file and check it is a file */
	    l = rwlfindvar(rwm->mxq, rwm->inam, RWL_VAR_NOGUESS);
	    if (l>=0)
	    {
	      if (rwm->mxq->evar[l].vtype == RWL_TYPE_FILE)
	      {
		// generating code
		if (rwm->codename)
		{
		  rwlcodeaddpu(rwm, RWL_CODE_FFLUSH, rwm->inam, (ub4)l);
		}
		else // directly during parse
		if (!bit(rwm->m2flags, RWL_P2_NOEXEC))
		{
		  // flush directly, check file is open
		  if (bit(rwm->mxq->evar[l].num.valflags, RWL_VALUE_FILE_OPENR|RWL_VALUE_FILE_OPENW))
		    fflush(rwm->mxq->evar[l].num.vptr);
		  else
		  {
		    if (!bit(rwm->mxq->evar[l].flags, RWL_VALUE_FILEREPNOTOPEN))
		      rwlerror(rwm,RWL_ERROR_WRITE_NOT_OPEN, rwm->mxq->evar[l].vname);
		    bis(rwm->mxq->evar[l].num.valflags, RWL_VALUE_FILEREPNOTOPEN);
		  }
		}
	      }
	      else
		rwlerror(rwm,RWL_ERROR_INCORRECT_TYPE2, rwm->mxq->evar[l].stype, rwm->inam, "file");
	    }
	  }
#line 6413 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 2765 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_NO_FILE_FOR_FFLUSH);
	    yyerrok;
	  }
#line 6422 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 2772 "rwlparser.y" /* yacc.c:1646  */
    {
	      sb4 l;
	      /* lookup the file and check it is a file */
	      rwm->filvarn = RWL_VAR_NOTFOUND;
	      rwm->filenam = 0;
	      l = rwlfindvar2(rwm->mxq, rwm->inam, RWL_VAR_NOGUESS, rwm->codename);
	      if (l>=0)
	      {
		if (rwm->mxq->evar[l].vtype == RWL_TYPE_FILE)
		{
		  rwm->filvarn = l;
		  rwm->filenam = rwm->inam;
		}
		else
		{
		  rwlerror(rwm,RWL_ERROR_INCORRECT_TYPE2, rwm->mxq->evar[l].stype, rwm->inam, "file");
		  rwm->rslerror++; /* prevent end generation */
		}
	      }
	      // initialize identifier list
	      rwm->idlist = rwm->idtail = 0;
	    }
#line 6449 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 2797 "rwlparser.y" /* yacc.c:1646  */
    {
	      if (rwm->filvarn>=0)
	      {
		if (!rwm->codename) // generating code in main for direct execution
		{
		  rwm->totthr = 0;
		  
		  bis(rwm->mflags, RWL_P_DXEQMAIN);
		  bic(rwm->m4flags,RWL_P4_PROCHASSQL);
		  rwlcodehead(rwm, 1 /*thrcount*/); // prepare wrapper procedure
		}

		rwm->rslmisc[rwm->rsldepth] = RWL_VAR_NOGUESS;
		if (rwm->cursorand)
		{
		  rwlcodeaddpupp(rwm, RWL_CODE_READLAND, rwm->filenam
		    , rwm->filvarn, rwm->idlist, rwm->cursorand);
		}
		else
		{
		  rwlcodeaddpup(rwm, RWL_CODE_READLOOP, rwm->filenam
		    , rwm->filvarn, rwm->idlist);
		}
	      }
	      else
	        rwm->rslerror++;

	      rwm->rslpcbrk[rwm->rsldepth] = 0;
	    }
#line 6483 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 2829 "rwlparser.y" /* yacc.c:1646  */
    {
	      if (rwm->rslerror)
		rwm->rslerror--;
	      else
	      {
		rwlcodeadd0(rwm, RWL_CODE_READEND); 
		if (bit(rwm->mflags, RWL_P_DXEQMAIN) && 0==rwm->rsldepth)
		{
		  rwlcodecall(rwm); // end of wrapper if in main
		  bic(rwm->mflags, RWL_P_DXEQMAIN);
		  if (bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
		  {
		    rwm->ifdirdep = 0; // since we may be skipping over $else, $endif
		    YYACCEPT;
		  }
		}
	      }
	    }
#line 6506 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 2857 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_FILE_FOR_WRITE);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6517 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 2866 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_STRING_FOR_SPRINTF);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6528 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 337:
#line 2875 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6539 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 339:
#line 2885 "rwlparser.y" /* yacc.c:1646  */
    {
	      // Note that we do not document this syntax without comma
	      if (rwm->filenam)
		rwlerror(rwm, RWL_ERROR_COMMA_IS_RECOMMENDED, rwm->filenam
		, bit(rwm->mflags,RWL_P_PRINTLINE) ? "writeline" : "write");
	    }
#line 6550 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 342:
#line 2897 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6561 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 343:
#line 2905 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_FILE_FOR_WRITE);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6572 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 2913 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_FILE_FOR_WRITE);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6583 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 345:
#line 2921 "rwlparser.y" /* yacc.c:1646  */
    { 
		if (rwm->codename)
		  rwlcodeadd0(rwm, RWL_CODE_NEWLINE);
		else
		  fputs(bit(rwm->m4flags, RWL_P4_CRNLWRITELINE) ? "\r\n" : "\n", stdout);
		bic(rwm->mflags,RWL_P_PRINTLINE|RWL_P_PRINTBLANK);
	      }
#line 6595 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 347:
#line 2931 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6606 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 2939 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (!rwm->codename)
	    {
	      rwlerror(rwm, RWL_ERROR_BREAK_IN_MAIN);
	    }
	    else
	    {
	      rwlcodeadd0(rwm, RWL_CODE_CQNBREAK);
	    }
	  }
#line 6621 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 350:
#line 2950 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (!rwm->codename)
	    {
	      rwlerror(rwm, RWL_ERROR_BREAK_IN_MAIN);
	    }
	    else
	    {
	      // are we breakable?
	      sb4 d; 

	      d = rwm->rsldepth;
	      while (d>0)
	      {
		if (bit(rwm->rslflags[d], RWL_RSLFLAG_MAYBRK))
		  break;
		d--;
	      }
	      if (d<=0)
	      {
		rwlerror(rwm, RWL_ERROR_BREAK_NOT_POSSIBLE);
	      }
	      else
	      {
		// arg4 is used to backtrace the places where we
		// do a break
		ub4 scc = rwm->ccount;
		if (bit(rwm->rslflags[d], RWL_RSLFLAG_BRKCUR))
		  rwlcodeaddxu(rwm, RWL_CODE_CURBRK, (sb4)rwm->rslpcbrk[d]);
		else
		  rwlcodeaddxu(rwm, RWL_CODE_BREAK, (sb4)rwm->rslpcbrk[d]);
		rwm->rslpcbrk[d] = scc;
	      }
	    }
	  }
#line 6660 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 351:
#line 2986 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->codename)
	    {
	      if (rwm->lobreadlength && rwm->loboffset)
	      {
		rwlcodeaddpupupp(rwm, RWL_CODE_READLOB_LO, rwm->lobnam, rwm->lobvarn, 
		rwm->lobreadvnam, rwm->lobreadvnum, rwm->lobreadlength, rwm->loboffset);
	      }
	      else
	      {
		rwlcodeaddpupu(rwm, RWL_CODE_READLOB, rwm->lobnam, rwm->lobvarn, rwm->lobreadvnam, rwm->lobreadvnum);
	      }
	    }
	    else if (!bit(rwm->m2flags, RWL_P2_NOEXEC))
	    {
	      if (rwm->maindb)
	      {
		if (rwm->lobreadlength && rwm->loboffset)
		{
		  rwlexpreval(rwm->lobreadlength, &rwm->loc, rwm->mxq, &rwm->mxq->xqnum);
		  rwlexpreval(rwm->loboffset, &rwm->loc, rwm->mxq, &rwm->mxq->xqnum2);
		  rwlreadloblo(rwm->mxq, rwm->mxq->evar[rwm->lobvarn].num.vptr, rwm->maindb
		    , &rwm->mxq->evar[rwm->lobreadvnum].num, rwm->lobreadvnam
		    , &rwm->mxq->xqnum, &rwm->mxq->xqnum2
		    , &rwm->loc, 0);
		}
		else
		{
		  rwlreadlob(rwm->mxq, rwm->mxq->evar[rwm->lobvarn].num.vptr, rwm->maindb
                      , &rwm->mxq->evar[rwm->lobreadvnum].num, &rwm->loc, 0);

		}
	      }
	    }
	  }
#line 6700 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 352:
#line 3023 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->codename)
	    {
	      if (rwm->loboffset)
	      {
		rwlcodeaddpupp(rwm, RWL_CODE_WRITELOB_O, rwm->lobnam
		, rwm->lobvarn, rwm->lobwritedata, rwm->loboffset);
	      }
	      else
	      {
		rwlcodeaddpup(rwm, RWL_CODE_WRITELOB, rwm->lobnam, rwm->lobvarn, rwm->lobwritedata);
	      }
	    }
	    else if (!bit(rwm->m2flags, RWL_P2_NOEXEC))
	    {
	      rwlexpreval(rwm->lobwritedata, &rwm->loc, rwm->mxq, &rwm->mxq->xqnum);
	      if (rwm->loboffset)
	      {
	        rwlexpreval(rwm->loboffset, &rwm->loc, rwm->mxq, &rwm->mxq->xqnum2);
	      }
	      if (rwm->maindb)
	      {
	        if (rwm->loboffset)
		{
		  rwlexpreval(rwm->loboffset, &rwm->loc, rwm->mxq, &rwm->mxq->xqnum2);
		  rwlwritelobo(rwm->mxq, rwm->mxq->evar[rwm->lobvarn].num.vptr, rwm->maindb
		  , &rwm->mxq->xqnum, &rwm->mxq->xqnum2, &rwm->loc, 0);
		}
		else
		{
		  rwlwritelob(rwm->mxq, rwm->mxq->evar[rwm->lobvarn].num.vptr, rwm->maindb
		  , &rwm->mxq->xqnum, &rwm->loc, 0);
		}
	      }
	      else
		rwlerror(rwm, RWL_ERROR_NOT_DONE_IN_MAIN, "writelob");
	    }
	  }
#line 6743 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 353:
#line 3063 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (bit(rwm->m2flags, RWL_P2_CBLOCK))
	      {
		// just print the error, but let parsing continue
	        rwlerror(rwm, RWL_ERROR_NO_NEST_LOOP);
	      }
	      rwm->runname = 0;
	      rwm->runstack = 0;
	      rwm->starttime = 0;
	      rwm->stopcount = 0;
	      rwm->stoptime = 0;
	      rwm->waittime = 0;
	      rwm->everytime = 0;
	      bic(rwm->m2flags, RWL_P2_THROPTS); /* clear all thread option flas */
	      bis(rwm->m2flags, RWL_P2_CBLOCK);
	    }
#line 6764 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 354:
#line 3080 "rwlparser.y" /* yacc.c:1646  */
    {
	      if(!rwm->stoptime && !rwm->stopcount)
	      {
	        rwlerror(rwm, RWL_ERROR_THROPT_MISSING, "stop/count");
	        bis(rwm->m2flags, RWL_P2_CBLOCK_BAD);
	      }
	      else
	      {
		if (!rwm->codename) // build for direct xeq
		{
		  rwm->totthr = 0;
		  // now in lexer: rwm->lnosav = rwm->loc.lineno;
		  bic(rwm->m4flags,RWL_P4_PROCHASSQL);
		  bis(rwm->mflags, RWL_P_DXEQMAIN);
		  rwlcodehead(rwm, 1 /*thrcount*/);
		}
	        rwlloophead(rwm);
	      }
	      rwm->rslpcbrk[rwm->rsldepth] = 0;
	      bis(rwm->rslflags[rwm->rsldepth], RWL_RSLFLAG_MAYBRK);
	    }
#line 6790 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 355:
#line 3104 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (!bit(rwm->m2flags, RWL_P2_CBLOCK_BAD))
	        rwlloopfinish(rwm);
	      bic(rwm->rslflags[rwm->rsldepth], RWL_RSLFLAG_MAYBRK);
	      bic(rwm->m2flags, RWL_P2_CBLOCK);
	      // just like ifterminator
	      if (bit(rwm->mflags, RWL_P_DXEQMAIN) && 0==rwm->rsldepth)
	      {
	        rwlcodecall(rwm);
		bic(rwm->mflags, RWL_P_DXEQMAIN);
		if (bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
		{
		  rwm->ifdirdep = 0; // since we may be skipping over $else, $endif
		  YYACCEPT;
		}
	      }
	    }
#line 6812 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 356:
#line 3123 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlerror(rwm, RWL_ERROR_UNEXPECTED_AFTER_IDENTIFIER);
	      yyerrok;
	    }
#line 6821 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 357:
#line 3130 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_MISSING_SEMICOLON); yyerrok; }
#line 6827 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 3137 "rwlparser.y" /* yacc.c:1646  */
    {
            /* handle procedure call with arguments
             * as if it were a function call
             */
            if (0 != rwm->furlev)
              rwlsevere(rwm,"[rwlparser-recurse2:%d]", rwm->furlev);
            bic(rwm->m2flags, RWL_P2_AT|RWL_P2_ATDEFAULT);
            rwm->aacnt[0] = 0;
            /*
            Here is a bit of a hack. Due to the error handling code
            below, the parser may have been doing lookahead, and that lookahead
            may have seen an identifier.  Compare these two:

            someproc(a);
            someproc(0+a);

            The lookahead after '(' will be either "a" or 0.  In the former
            case, the lexer has consumed "a", so rwm->inam now contains "a"
            in stead of "someproc" which we need below.  However, the lexer
            has saved the previous identifier name as previnam.

            Hence, we see if the lookahead is an identifier, if it is, the
            function name is stored in previnam rather than inam
            */

            if (0 != rwm->furlev)
              rwlsevere(rwm,"[rwlparser-recurse2:%d]", rwm->furlev);
            bic(rwm->m2flags, RWL_P2_AT|RWL_P2_ATDEFAULT);
            rwm->aacnt[0] = 0;
            rwm->funcn[0] = (yychar == RWL_T_IDENTIFIER)
              ? rwm->previnam
              : rwm->inam;
            rwlexprbeg(rwm);
            }
#line 6866 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 3175 "rwlparser.y" /* yacc.c:1646  */
    {
              if (rwm->codename) // building a procedure
              {
                rwl_estack *estk;
                sb4 l2 = RWL_VAR_NOGUESS;
                if (bit(rwm->m2flags, RWL_P2_AT))
                {
                  l2 = rwlfindvar(rwm->mxq, rwm->dbname, RWL_VAR_NOGUESS);
                  if (RWL_TYPE_DB != rwm->mxq->evar[l2].vtype)
                  {
                    rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2
                      , rwm->mxq->evar[l2].stype, rwm->dbname, "at clause");
                  }
                  else
                  {
                    rwl_cinfo *thisdb = rwm->mxq->evar[l2].vdata;
                    switch (thisdb->pooltype)
                    {
                      case RWL_DBPOOL_RETHRDED:
                        rwlerror(rwm,RWL_ERROR_WRONG_DB_IN_CODE, "threads dedicated", thisdb->vname);
                        l2 = RWL_VAR_NOGUESS;
                      break;
                      case RWL_DBPOOL_DEDICATED:
                        rwlerror(rwm,RWL_ERROR_WRONG_DB_IN_CODE, "dedicated", thisdb->vname);
                        l2 = RWL_VAR_NOGUESS;
                      break;
                      case RWL_DBPOOL_POOLED:
                      case RWL_DBPOOL_RECONNECT:
                      case RWL_DBPOOL_SESSION:
                      break;

                      default: // shut up gcc
                      break;
                    }
                  }
                }
                // If at clause was found, wrap the RWL_STACK_PROCCALL/RWL_CODE_STACK
                // with NEWDB/OLDDB
                if (l2>=0)
                  rwlcodeaddpu(rwm, RWL_CODE_NEWDB, rwm->dbname, l2);
                // or with DEFDB
                if (bit(rwm->m2flags, RWL_P2_ATDEFAULT))
                  rwlcodeadd0(rwm, RWL_CODE_DEFDB);

                rwlexprpush2(rwm, rwm->funcn[0]
                  , RWL_STACK_PROCCALL
                  , rwm->aacnt[0] );
                if ((estk = rwlexprfinish(rwm)))
                  rwlcodeaddp(rwm, RWL_CODE_STACK, estk);
                else
                  rwlexprclear(rwm);

                if (l2>=0 || bit(rwm->m2flags, RWL_P2_ATDEFAULT))
                  rwlcodeadd0(rwm, RWL_CODE_OLDDB);
              }
              else // exeucting directly in main
              {
                rwl_estack *estk;

                if (bit(rwm->m2flags, RWL_P2_ATDEFAULT))
                  rwlerror(rwm, RWL_ERROR_AT_DEFAULT_NO_IMPACT);

                if (bit(rwm->m2flags, RWL_P2_AT))
                  rwldummyonbad(rwm->mxq, rwm->dbname);
                else
                  rwldummyonbad(rwm->mxq, rwm->defdb);

                /* syntactically, the number of arguments doesn't matter
                   so we just provide the actual arg count to exprpush2
                   and deal with a mis-count there
                */
                rwlexprpush2(rwm, rwm->funcn[0]
                  , RWL_STACK_PROCCALL
                  , rwm->aacnt[0] );

                if ((estk = rwlexprfinish(rwm)))
                {
                  rwlexpreval(estk, &rwm->loc, rwm->mxq, 0);
                  rwlexprdestroy(rwm, estk);
                }
                else
                  rwlexprclear(rwm);
              }
            }
#line 6955 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 3263 "rwlparser.y" /* yacc.c:1646  */
    {
	  sb4 l;
	  rwm->lobvarn = RWL_VAR_NOTFOUND;
	  rwm->lobnam = rwm->inam;
	  rwm->loboffset = 0;
	  /* lookup the file and check it is a file */
	  l = rwlfindvar2(rwm->mxq, rwm->lobnam, RWL_VAR_NOGUESS, rwm->codename);
	  if (l>=0)
	  {
	    switch (rwm->mxq->evar[l].vtype)
	    {
	      case RWL_TYPE_BLOB:
	      case RWL_TYPE_CLOB:
		rwm->lobvarn = l;
	      break;

	      default:
		rwlerror(rwm,RWL_ERROR_INCORRECT_TYPE2
		, rwm->mxq->evar[l].stype, rwm->lobnam, "clob");
	      break;
	    }
	  }
	}
#line 6983 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 361:
#line 3287 "rwlparser.y" /* yacc.c:1646  */
    {
	  rwm->lobwritedata = rwlexprfinish(rwm);
	  rwm->loboffset = 0;
	}
#line 6992 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 363:
#line 3296 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->loboffset = rwlexprfinish(rwm);
	  }
#line 7000 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 364:
#line 3303 "rwlparser.y" /* yacc.c:1646  */
    {
	  sb4 l;
	  rwm->lobvarn = RWL_VAR_NOTFOUND;
	  rwm->lobnam = (yychar == RWL_T_IDENTIFIER)
		  ? rwm->previnam
		  : rwm->inam;
	  l = rwlfindvar2(rwm->mxq, rwm->lobnam, RWL_VAR_NOGUESS, rwm->codename);
	  if (l>=0)
	  {
	    switch (rwm->mxq->evar[l].vtype)
	    {
	    case RWL_TYPE_BLOB:
	    case RWL_TYPE_CLOB:
	      rwm->lobvarn = l;
	    break;

	    default:
	      rwlerror(rwm,RWL_ERROR_INCORRECT_TYPE2, rwm->mxq->evar[l].stype, rwm->lobnam, "clob");
	    break;
	    }
	  }
	}
#line 7027 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 365:
#line 3326 "rwlparser.y" /* yacc.c:1646  */
    {
	  sb4 l;
	  rwm->loboffset = 0;
	  rwm->lobreadlength = 0;
	  rwm->lobreadvnam = (yychar == RWL_T_IDENTIFIER)
		  ? rwm->previnam
		  : rwm->inam;
	  l = rwlfindvar2(rwm->mxq, rwm->lobreadvnam, RWL_VAR_NOGUESS, rwm->codename);
	  if (l>=0)
	  {
	    switch (rwm->mxq->evar[l].vtype)
	    {
	      case RWL_TYPE_STR:
		rwm->lobreadvnum = l;
	      break;
	      default:
		rwlerror(rwm,RWL_ERROR_INCORRECT_TYPE2, rwm->mxq->evar[l].stype, rwm->lobreadvnam, "string");
	      break;
	    }
	  }
	}
#line 7053 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 367:
#line 3352 "rwlparser.y" /* yacc.c:1646  */
    {
	  rwm->lobreadlength = rwlexprfinish(rwm);
	}
#line 7061 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 368:
#line 3356 "rwlparser.y" /* yacc.c:1646  */
    {
	  rwm->loboffset = rwlexprfinish(rwm);
	}
#line 7069 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 369:
#line 3362 "rwlparser.y" /* yacc.c:1646  */
    {
	    /* simple sql execute */
	    sb4 l;

	    /* lookup the variable */
	    l = rwlfindvar2(rwm->mxq, rwm->scname, RWL_VAR_NOGUESS, rwm->codename);
	    if (l>=0)
	    {
	      /* is it a SQL ? */
	      switch (rwm->mxq->evar[l].vtype)
	      {
		case RWL_TYPE_SQL: /* simple sql */
		  if (rwm->codename) // building a procedure
		  {
		    bis(rwm->m4flags,RWL_P4_PROCHASSQL);
		    if (bit(rwm->m2flags, RWL_P2_AT))
		    {
		      sb4 l2;
		      // Find the database 
		      l2 = rwlfindvar(rwm->mxq, rwm->dbname, RWL_VAR_NOGUESS);
		      if (l2>0)
		      {
			if (RWL_TYPE_DB != rwm->mxq->evar[l2].vtype)
			{
			  rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2
			    , rwm->mxq->evar[l2].stype, rwm->dbname, "at clause");
			}
			else
			{
			  rwl_cinfo *thisdb = rwm->mxq->evar[l2].vdata;
			  switch (thisdb->pooltype)
			  {
			    /* There is only one dedicated database in threads, which is the one
			       that was specified at its start time.  Therefore, some SQL inside 
			       a thread that needs another database, can only get another database
			       which uses pools or reconnect.  At compile time, we do not know
			       if this is going to be used in a thread or in main, where it would
			       be possible to use dedicated, so for simplicity, we just only allow
			       database that always gets and releases a session
			    */
			    case RWL_DBPOOL_CONNECT:
			      rwlerror(rwm,RWL_ERROR_WRONG_DB_IN_CODE, "connection pool", thisdb->vname);
			    break;
			    case RWL_DBPOOL_RETHRDED:
			      rwlerror(rwm,RWL_ERROR_WRONG_DB_IN_CODE, "threads dedicated", thisdb->vname);
			    break;
			    case RWL_DBPOOL_DEDICATED:
			      rwlerror(rwm,RWL_ERROR_WRONG_DB_IN_CODE, "dedicated", thisdb->vname);
			    break;
			    case RWL_DBPOOL_POOLED:
			    case RWL_DBPOOL_RECONNECT:
			    case RWL_DBPOOL_SESSION:
			      rwlcodeaddpupu(rwm, RWL_CODE_SQLAT, rwm->scname, (ub4)l, thisdb->vname, l2);
			    break;

			    default: // shut up gcc
			    break;
			  }
			}
		      }
		    }
		    else // no at database clause
		    {
		      if (bit(rwm->m2flags, RWL_P2_ATDEFAULT))
		      {
			rwlcodeadd0(rwm, RWL_CODE_DEFDB);
			rwlcodeadd0(rwm, RWL_CODE_PCINCR);
		      }
		      rwlcodeaddpu(rwm, RWL_CODE_SQL, rwm->scname, (ub4)l);
		      if (bit(rwm->m2flags, RWL_P2_ATDEFAULT))
		      {
			rwlcodeadd0(rwm, RWL_CODE_PCDECR);
			rwlcodeadd0(rwm, RWL_CODE_OLDDB);
		      }
		    }
		  }
		  else // directly in main
		  if (!bit(rwm->m2flags, RWL_P2_NOEXEC))
		  {
		    sb4 l2;
		    if (bit(rwm->m2flags, RWL_P2_ATDEFAULT))
		      rwlerror(rwm, RWL_ERROR_AT_DEFAULT_NO_IMPACT);
		    if (bit(rwm->m2flags, RWL_P2_AT))
		      l2 = rwlfindvar(rwm->mxq, rwm->dbname, RWL_VAR_NOGUESS);
		    else
		    {
		      if (rwm->defdb)
		      {
			l2 = rwlfindvar(rwm->mxq, rwm->defdb, RWL_VAR_NOGUESS);
		      }
		      else
		      {
			rwlerror(rwm,RWL_ERROR_NO_DATABASE,"default");
			goto sqlexecutefinish;
		      }
		    }
		    if (l>=0 && l2>=0)
		    {
		      if (rwm->mxq->evar[l2].vtype == RWL_TYPE_DB)
		      {
			// Ok, it is a database, but don't execute if connection pool
			rwm->mxq->curdb = rwm->mxq->evar[l2].vdata;
			if (RWL_DBPOOL_CONNECT == rwm->mxq->curdb->pooltype)
			{
			  rwlerror(rwm, RWL_ERROR_CPOOL_NO_SESSION
			    , rwm->dbname);
			  rwm->mxq->curdb = 0;
			}
			else
			  rwlsimplesql(rwm->mxq, &rwm->loc /*cloc*/
			  , rwm->mxq->evar[l2].vdata
			  , rwm->mxq->evar[l].vdata);
		      }
		      else
		      {
			// Not a database can be for different reasons
			// NOTE: This check is not foolproof so we may emit the wrong 
			// error.
			// If we had an at clause AND the type isn't cancelled report bad type
			if (bit(rwm->m2flags, RWL_P2_AT) && RWL_TYPE_CANCELLED != rwm->mxq->evar[l2].vtype)
			  rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2
			    , rwm->mxq->evar[l2].stype, rwm->dbname, "at clause");
			else
			  // but RWL_TYPE_CANCELLED can be the result of different cancellations
			  // not only a database returning ORA-1017 for example. So
			  // This error can be incorrectly omitted.
			  rwlerror(rwm, RWL_ERROR_BAD_DATABASE
			    , bit(rwm->m2flags, RWL_P2_AT)?rwm->dbname:rwm->defdb);
		      }
		    }
		    else
		      rwlsevere(rwm, "[rwlparser-dbexec3:%s;%d;%d"
		      , bit(rwm->m2flags, RWL_P2_AT)?rwm->dbname:rwm->defdb,l,l2);
		  }
		  sqlexecutefinish:
		break;

		default:
		  rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2, rwm->mxq->evar[l].stype, rwm->scname, "sql call");
		break;
	      }
	    }

	  rwm->loc.errlin = 0;
	  }
#line 7219 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 370:
#line 3512 "rwlparser.y" /* yacc.c:1646  */
    {
	      sb4 l;

	      /* lookup the driving variable and verify */
	      l = rwlfindvar2(rwm->mxq, rwm->scname, RWL_VAR_NOGUESS, rwm->codename);
	      if (l>=0)
	      {
		/* must be SQL */
		if (RWL_TYPE_SQL != rwm->mxq->evar[l].vtype)
		{
		  rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2, rwm->mxq->evar[l].stype, rwm->inam, "sql");
		  rwm->rslerror++; /* prevent end generation */
		  goto failurecursor;
		}
		else
		{
		  rwl_sql *sq = rwm->mxq->evar[l].vdata;
		  if (sq->asiz <= 0 && !bit(sq->flags, RWL_SQFLAG_DYNAMIC | RWL_SQLFLAG_IDUSE))
		    rwlerror(rwm, RWL_ERROR_DEFAULT_ARRAY, rwm->scname, rwm->mxq->defasiz);
		  if (sq->asiz <=0 && bit(sq->flags, RWL_SQLFLAG_IDUSE))
		    bis(sq->flags,RWL_SQFLAG_ARMEM);
		}
	      }
	      else
	      {
		//rwlerror(rwm, RWL_ERROR_VAR_NOT_FOUND, rwm->inam);
		rwm->rslerror++; /* prevent end generation */
		goto failurecursor;
	      }

	      if (!rwm->codename) // generating code in main for direct execution
	      {
		if (bit(rwm->m2flags, RWL_P2_ATDEFAULT))
		  rwlerror(rwm, RWL_ERROR_AT_DEFAULT_NO_IMPACT);
		rwm->totthr = 0;
		// now in lexer: rwm->lnosav = rwm->loc.lineno;
		bis(rwm->mflags, RWL_P_DXEQMAIN);
		rwlcodehead(rwm, 1 /*thrcount*/); // prepare wrapper procedure
	      }

	      rwm->rslmisc[rwm->rsldepth] = RWL_VAR_NOGUESS;
	      if (bit(rwm->m2flags, RWL_P2_AT))
	      { // se comments at RWL_CODE_SQLAT
		sb4 l2;
		// Find the database 
		l2 = rwlfindvar(rwm->mxq, rwm->dbname, RWL_VAR_NOGUESS);
		if (l2>0)
		{
		  if (RWL_TYPE_DB != rwm->mxq->evar[l2].vtype)
		  {
		    rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2
		      , rwm->mxq->evar[l2].stype, rwm->dbname, "at clause");
		    rwm->rslerror++; /* prevent end generation */
		  }
		  else
		  {
		    rwl_cinfo *thisdb = rwm->mxq->evar[l2].vdata;
		    switch (thisdb->pooltype)
		    {
		      case RWL_DBPOOL_RETHRDED:
			rwlerror(rwm,RWL_ERROR_WRONG_DB_IN_CODE, "threads dedicated", thisdb->vname);
			rwm->rslerror++; /* prevent end generation */
		      break;
		      case RWL_DBPOOL_DEDICATED:
			rwlerror(rwm,RWL_ERROR_WRONG_DB_IN_CODE, "dedicated", thisdb->vname);
			rwm->rslerror++; /* prevent end generation */
		      break;
		      case RWL_DBPOOL_POOLED:
		      case RWL_DBPOOL_RECONNECT:
		      case RWL_DBPOOL_SESSION:
			rwlcodeaddpupu(rwm, RWL_CODE_CURLOOPAT, rwm->scname, (ub4)l, thisdb->vname, l2);
		      break;

		      default: // shut up gcc
		      break;
		    }
		  }
		}
		else
		{ // var not found
		  rwm->rslerror++; /* prevent end generation */
		}

		// We don't set PROCHASSQL here because the SQL it does comes with its own SQL via at clause
	      }
	      else // no at database clause
	      {
		bis(rwm->m4flags,RWL_P4_PROCHASSQL);
		if (bit(rwm->m2flags, RWL_P2_ATDEFAULT))
		{
		  rwlcodeadd0(rwm, RWL_CODE_DEFDB);
		  rwlcodeadd0(rwm, RWL_CODE_PCINCR);
		  rwm->rslmisc[rwm->rsldepth] = RWL_VAR_DEFDB;
		}
	        rwlcodeaddpu(rwm, RWL_CODE_CURLOOP, rwm->scname, (ub4)l); // increases rsldepth
	      }

	      // important to do it here as cursorand in use means increase rsldepth below
	      bis(rwm->rslflags[rwm->rsldepth], RWL_RSLFLAG_MAYBRK|RWL_RSLFLAG_BRKCUR);

	      if (rwm->cursorand)
	      {
		rwlcodeaddp(rwm, RWL_CODE_IF, rwm->cursorand);
		bis(rwm->rslflags[rwm->rsldepth], RWL_RSLFLAG_CURAND);
	      }

	      failurecursor:
	      rwm->loc.errlin = 0;
	    }
#line 7333 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 371:
#line 3624 "rwlparser.y" /* yacc.c:1646  */
    {
	      if (rwm->rslerror)
		rwm->rslerror--;
	      else
	      {
		if (bit(rwm->rslflags[rwm->rsldepth], RWL_RSLFLAG_CURAND))
		{
		  bic(rwm->rslflags[rwm->rsldepth], RWL_RSLFLAG_CURAND);
		  rwlcodeadd0(rwm, RWL_CODE_ELSE);
		  rwlcodeadd0(rwm, RWL_CODE_CANCELCUR);
		  rwlcodeadd0(rwm, RWL_CODE_ENDIF); 
		}
		// just like ifterminator
		rwlcodeadd0(rwm, RWL_CODE_ENDCUR); 
		if (RWL_VAR_DEFDB == rwm->rslmisc[rwm->rsldepth]) // did we pick default database
		{
		  rwlcodeadd0(rwm, RWL_CODE_PCDECR);
		  rwlcodeadd0(rwm, RWL_CODE_OLDDB);
		}
		if (bit(rwm->mflags, RWL_P_DXEQMAIN) && 0==rwm->rsldepth)
		{
		  rwlcodecall(rwm); // end of wrapper if in main
		  bic(rwm->mflags, RWL_P_DXEQMAIN);
		  if (bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
		  {
		    rwm->ifdirdep = 0; // since we may be skipping over $else, $endif
		    YYACCEPT;
		  }
		}
	      }
	      rwm->loc.errlin = 0;
	    }
#line 7370 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 372:
#line 3660 "rwlparser.y" /* yacc.c:1646  */
    {  
	    // This syntax is not documented
	    bic(rwm->m3flags, RWL_P3_CLHEADFOR);
	    rwlerror(rwm, RWL_ERROR_LEGACY_CONTROLLOOP_SYNTAX);
	  }
#line 7380 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 373:
#line 3665 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m3flags, RWL_P3_CLHEADFOR); }
#line 7386 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 374:
#line 3669 "rwlparser.y" /* yacc.c:1646  */
    {
	    // Note that we do not document these two (legacy) syntax:
	    // loop option .. .. ;
	    // loop option .. .. execute
	    // but only the syntax where the initial keyword is "for":
	    // for option .. .. loop
	    // However, we need to keep the code as a large number of tests
	    // use the legacy syntax
	    // The RWL_P3_CLHEADFOR bit is only used to warn when when the
	    // legacy and current syntax are mixed.
	    bic(rwm->m3flags, RWL_P3_CLHEADFOR);
	  }
#line 7403 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 375:
#line 3685 "rwlparser.y" /* yacc.c:1646  */
    { if (bit(rwm->m3flags, RWL_P3_CLHEADFOR))
	      rwlerror(rwm, RWL_ERROR_MIX_LEGACY_CLOOP);
	  }
#line 7411 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 376:
#line 3689 "rwlparser.y" /* yacc.c:1646  */
    { if (bit(rwm->m3flags, RWL_P3_CLHEADFOR))
	      rwlerror(rwm, RWL_ERROR_MIX_LEGACY_CLOOP);
	  }
#line 7419 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 377:
#line 3693 "rwlparser.y" /* yacc.c:1646  */
    { if (!bit(rwm->m3flags, RWL_P3_CLHEADFOR))
	      rwlerror(rwm, RWL_ERROR_MIX_LEGACY_CLOOP);
	  }
#line 7427 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 380:
#line 3704 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7433 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 381:
#line 3706 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (rwm->starttime)
	    {
	      rwlerror(rwm,RWL_ERROR_THROPT_REPEAT,"start");
	      rwlexprclear(rwm);
	    }
	    else
	    {
	      rwlexprpush(rwm,RWL_STARTTIME_VAR,RWL_STACK_ASNINT);
	      rwm->starttime = rwlexprfinish(rwm);
	    }
	  }
#line 7450 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 382:
#line 3718 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7456 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 383:
#line 3720 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (rwm->stoptime || rwm->stopcount)
	    {
	      rwlerror(rwm,RWL_ERROR_THROPT_REPEAT,"stop/count");
	      rwlexprclear(rwm);
	    }
	    else
	    {
	      /* create an expression to assign stoptime to variable */
	      rwlexprpush(rwm,RWL_STOPTIME_VAR,RWL_STACK_ASNINT);
	      rwm->stoptime = rwlexprfinish(rwm);
	      //bis(rwm->m2flags, RWL_P2_STOP);
	    }
	  }
#line 7475 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 384:
#line 3734 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7481 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 385:
#line 3736 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (rwm->stoptime || rwm->stopcount)
	    {
	      rwlerror(rwm,RWL_ERROR_THROPT_REPEAT,"stop/count");
	      rwlexprclear(rwm);
	    }
	    else
	    {
	      /* create an expression to assign count to variable */
	      rwlexprpush(rwm, RWL_STOPCOUNT_VAR, RWL_STACK_ASNINT);
	      rwm->stopcount = rwlexprfinish(rwm);
	      //bic(rwm->m2flags, RWL_P2_STOP);
	    }
	  }
#line 7500 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 386:
#line 3750 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7506 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 387:
#line 3752 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->m2flags, RWL_P2_WAIT|RWL_P2_EVERY))
	    {
	      rwlerror(rwm,RWL_ERROR_THROPT_REPEAT,"wait/every");
	      rwlexprclear(rwm);
	    }
	    else
	    {
	      bis(rwm->m2flags, RWL_P2_WAIT);
	      rwm->waittime = rwlexprfinish(rwm);
	    }
	  }
#line 7523 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 388:
#line 3764 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7529 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 389:
#line 3766 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->m2flags, RWL_P2_WAIT|RWL_P2_EVERY))
	    {
	      rwlerror(rwm,RWL_ERROR_THROPT_REPEAT,"wait/every");
	      rwlexprclear(rwm);
	    }
	    else
	    {
	      bis(rwm->m2flags, RWL_P2_EVERY); 
	      /* The expression stack so far contains 
	       * the calculation of the interval until
	       * the next loop should start.  We need to use
	       * CODE_SUSPEND to do this, so add the
	       * current timestamp and assign to the everyuntil 
	       * variable
	       */
	      if (rwlqueueevery(rwm))
	        rwlexprpush(rwm, RWL_EVERYUNTIL_VAR, RWL_STACK_VAR);
	      else
	        rwlexprpush(rwm, 0, RWL_STACK_RUNSECONDS);
	      rwlexprpush(rwm,0,RWL_STACK_ADD);
	      rwlexprpush(rwm, RWL_EVERYUNTIL_VAR, RWL_STACK_ASNINT); 
	      rwm->everytime = rwlexprfinish(rwm);
	    }
	  }
#line 7559 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 390:
#line 3795 "rwlparser.y" /* yacc.c:1646  */
    { rwm->ynqueue = 0; }
#line 7565 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 391:
#line 3796 "rwlparser.y" /* yacc.c:1646  */
    { rwm->ynqueue = RWL_QUEUE_EVERY; }
#line 7571 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 392:
#line 3797 "rwlparser.y" /* yacc.c:1646  */
    { rwm->ynqueue = RWL_NOQUEUE_EVERY; }
#line 7577 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 393:
#line 3801 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->scname = rwm->inam; 
	    bic(rwm->m2flags, RWL_P2_AT|RWL_P2_ATDEFAULT);
	  }
#line 7586 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 394:
#line 3806 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->scname = rwm->inam;
	    bic(rwm->m2flags, RWL_P2_AT|RWL_P2_ATDEFAULT);
	  }
#line 7595 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 395:
#line 3811 "rwlparser.y" /* yacc.c:1646  */
    { 
	      bis(rwm->m2flags, RWL_P2_ATDEFAULT);
	    }
#line 7603 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 396:
#line 3815 "rwlparser.y" /* yacc.c:1646  */
    {
	      bic(rwm->m2flags, RWL_P2_AT|RWL_P2_ATDEFAULT);
	      // lookahead may have consumed the next identifier
	      rwm->scname = (yychar == RWL_T_IDENTIFIER)
	        ? rwm->previnam
	        : rwm->inam;
	    }
#line 7615 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 397:
#line 3823 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->dbname = rwm->inam; 
	      bis(rwm->m2flags, RWL_P2_AT);
	    }
#line 7624 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 398:
#line 3832 "rwlparser.y" /* yacc.c:1646  */
    {
	    text sqlnam[100];
	    rwm->sqllino = rwm->sqltlin; // the line where we started sql scan
	    rwm->loc.errlin = rwm->loc.lineno; // the line where we are now
	    snprintf((char *)sqlnam, sizeof(sqlnam), "sql#%05d", rwm->mxq->varcount);
	    bic(rwm->m2flags, RWL_P2_AT|RWL_P2_ATDEFAULT);
	    bis(rwm->m3flags, RWL_P3_IMMEDSQL); // make the name internal
	    bic(rwm->m3flags, RWL_P3_WARNSQLKW); // make the name internal
	    bic(rwm->m3flags, RWL_P3_IMMISDYN); // not dynamic: sql is inline
	    // sqname is used to add the variable
	    // scname is used to do the call
	    rwm->scname = rwm->sqname = rwlstrdup(rwm, sqlnam);
	    rwm->sqllen = 0;
	  }
#line 7643 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 399:
#line 3847 "rwlparser.y" /* yacc.c:1646  */
    {
	    bis(rwm->sqsav->flags, RWL_SQLFLAG_IBUSE);
	    bis(rwm->sqsav->flags, RWL_SQLFLAG_IDUSE);
	    bic(rwm->sqsav->flags, RWL_SQLFLAG_ARDYN); 
	    bic(rwm->m3flags, RWL_P3_IMMEDSQL); 
	    if (bit(rwm->m4flags, RWL_P4_AMPERSAND) && rwldynarcomp(rwm))
	    {
	      if (rwm->codename && bit(rwm->m3flags, RWL_P3_SQLWASQRY) && rwm->embqryasiz)
		rwm->sqsav->asiz = rwm->embqryasiz;
	    }
	    else
	    {
	      // no ampersand replacement found
	      if (rwm->codename)
	      {
		// procedure (i.e. ! main) with dml or query
		// should pick up array directive values
		if (bit(rwm->m3flags, RWL_P3_SQLWASDML) && rwm->embdmlasiz)
		  rwm->sqsav->asiz = rwm->embdmlasiz;
		if (bit(rwm->m3flags, RWL_P3_SQLWASQRY) && rwm->embqryasiz)
		  rwm->sqsav->asiz = rwm->embqryasiz;
	      }
	    }
	    if (bit(rwm->m3flags,RWL_P3_IMPLCASE))
	      bis(rwm->sqsav->flags, RWL_SQLFLAG_ICASE);
	    rwm->sqlfile = 0; /* not from a file */
	  }
#line 7675 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 400:
#line 3879 "rwlparser.y" /* yacc.c:1646  */
    {
	  text sqlnam[100];
	  snprintf((char *)sqlnam, sizeof(sqlnam), "sql#%05d", rwm->mxq->varcount);
	  bic(rwm->m2flags, RWL_P2_AT|RWL_P2_ATDEFAULT);
	  bis(rwm->m3flags, RWL_P3_IMMEDSQL); // make the name internal
	  bic(rwm->m3flags, RWL_P3_WARNSQLKW); // make the name internal
	  bic(rwm->m3flags, RWL_P3_IMMISDYN); // not dynamic: sql is inline
	  // sqname is used to add the variable
	  // scname is used to do the call
	  rwm->scname = rwm->sqname = rwlstrdup(rwm, sqlnam);
	  rwm->sqllen = 0;
	  rwm->msqlstk = 0;
	  }
#line 7693 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 401:
#line 3894 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->m3flags, RWL_P3_IMMEDSQL); 
	    bis(rwm->sqsav->flags, RWL_SQLFLAG_IBUSE);
	    bis(rwm->sqsav->flags, RWL_SQLFLAG_IDUSE);
	    if (bit(rwm->m3flags,RWL_P3_IMPLCASE))
	      bis(rwm->sqsav->flags, RWL_SQLFLAG_ICASE);
	  }
#line 7705 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 402:
#line 3903 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (!bit(rwm->m3flags, RWL_P3_IMMISDYN) && bit(rwm->m4flags, RWL_P4_AMPERSAND) && rwldynarcheck(rwm))
	    {
	      rwlerror(rwm, RWL_ERROR_CANNOT_AMPREP_HERE, "immediate sql");
	      rwm->mxq->evar[rwm->sqsavvarn].vtype = RWL_TYPE_CANCELLED;
	      rwm->mxq->evar[rwm->sqsavvarn].stype = "cancelled (sql)";
	      goto cannotdoimm;
	    }
	    if (bit(rwm->m3flags, RWL_P3_IMMISDYN) && rwm->msqlstk)
	    { 
	      rwl_sql *sq = rwm->sqsav;
	      if (!bit(sq->flags, RWL_SQLFLAG_DYIREL) || !bit(sq->flags, RWL_SQLFLAG_DYIREL))
	      {
		rwlsevere(rwm, "[rwlparser-notdyn:%s;0x%x]", sq->vname, sq->flags);
	        goto cannotdoimm;
	      }
	      if (sq->asiz && !bit(rwm->m3flags, RWL_P3_IMMPARSEFOR))
	      {
	        // only allow array if this is a cursor loop
		rwlerror(rwm, RWL_ERROR_IMM_AND_DYN_NO_ARRAY);
		rwm->mxq->evar[rwm->sqsavvarn].vtype = RWL_TYPE_CANCELLED;
		rwm->mxq->evar[rwm->sqsavvarn].stype = "cancelled (sql)";
	        goto cannotdoimm;
	      }

	      if (rwm->codename)
		rwlcodeaddpup(rwm, RWL_CODE_DYNSTXT, sq->vname, (ub4) rwm->sqsavvarn, rwm->msqlstk);
	      else
	      {
		rwlexpreval(rwm->msqlstk, &rwm->loc, rwm->mxq, &rwm->mxq->xqnum);
		rwldynstext(rwm->mxq, &rwm->loc, sq, &rwm->mxq->xqnum, 0);
	      }
	    }
	    cannotdoimm:
	      ;
	  }
#line 7746 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 404:
#line 3941 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_SQL_WRONG) ;
	    yyerrok;
	  }
#line 7755 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 406:
#line 3949 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7761 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 407:
#line 3950 "rwlparser.y" /* yacc.c:1646  */
    {
	    if ((rwm->msqlstk = rwlexprfinish(rwm)))
	      bis(rwm->m3flags, RWL_P3_IMMISDYN); // now dynamic
	    else
	    {
	      rwm->mxq->evar[rwm->sqsavvarn].vtype = RWL_TYPE_CANCELLED;
	      rwm->mxq->evar[rwm->sqsavvarn].stype = "cancelled (sql)";
	    }
	  }
#line 7775 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 408:
#line 3962 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->sqllino = rwm->loc.lineno;
	  }
#line 7783 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 412:
#line 3971 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "sql") ;
	  }
#line 7791 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 415:
#line 3982 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bis(rwm->m2flags, RWL_P2_ATDEFAULT);
	  }
#line 7799 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 416:
#line 3986 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dbname = rwm->inam; 
	    bis(rwm->m2flags, RWL_P2_AT);
	  }
#line 7808 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 417:
#line 3994 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->m2flags, RWL_P2_AT|RWL_P2_ATDEFAULT);
	  }
#line 7816 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 418:
#line 3998 "rwlparser.y" /* yacc.c:1646  */
    { 
	      bis(rwm->m2flags, RWL_P2_ATDEFAULT);
	    }
#line 7824 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 419:
#line 4002 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->dbname = rwm->inam; 
	      bis(rwm->m2flags, RWL_P2_AT);
	    }
#line 7833 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 421:
#line 4012 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->dbname = 0;
	      bis(rwm->m2flags, RWL_P2_ATDEFAULT); /* explict choose standard DB */
	    }
#line 7842 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 422:
#line 4018 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->dbname = rwm->inam;
	      bis(rwm->m2flags, RWL_P2_AT); /* named DB */
	    }
#line 7851 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 423:
#line 4023 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_NO_DATABASE_NAME); yyerrok; }
#line 7857 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 424:
#line 4025 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_MISSING_SEMICOLON); yyerrok; }
#line 7863 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 427:
#line 4033 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (!rwm->codename || bit(rwm->addvarbits,RWL_IDENT_PRIVATE))
	      { 
	        rwm->decvarn = rwladdvar(rwm, rwm->inam, (ub4)rwm->dtype, rwm->addvarbits);
	      }
	      else  
	      {
		rwm->decvarn = rwladdvar2(rwm, rwm->inam, (ub4)rwm->dtype, RWL_IDENT_LOCAL, rwm->codename);
		if (rwm->decvarn>=0)
		{
		  if (rwm->lvcount < rwm->maxlocals)
		  {
		    rwm->lvsav[rwm->lvcount].aname = rwm->inam;
		    rwm->lvsav[rwm->lvcount].aguess = rwm->decvarn;
		    rwm->lvsav[rwm->lvcount].atype = rwm->dtype;
		    rwm->lvcount++;
		  }
		  else
		  {
		    rwlerror(rwm, RWL_ERROR_TOO_MAY_LOCALS, rwm->maxlocals-1);
		    rwlerrormute(rwm,RWL_ERROR_TOO_MAY_LOCALS, 0);
		  }
		}
	      }
	    }
#line 7893 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 428:
#line 4059 "rwlparser.y" /* yacc.c:1646  */
    {
	      // if compiling first file, see if there is a user arg
	      if (bit(rwm->m2flags, RWL_P2_SCANFIRST) && rwm->decvarn >= 0)
	      {
		text *h2, hy2un[RWL_MAX_IDLEN+2]; // argname hyphen converted to underscore
		rwl_arglist *alp = rwm->usrargl;

		while (alp) // scan for a match
		{
		  rwlstrnncpy(hy2un, alp->argname, sizeof(hy2un));
		  for (h2=hy2un; *h2; h2++)
		  {
		    if ('-' == *h2)
		      *h2 = '_';
		  }
		  if (!rwlstrcmp(rwm->mxq->evar[rwm->decvarn].vname, hy2un))
		  {
		    // we have a match
		    if (bit(rwm->mxq->evar[rwm->decvarn].flags, RWL_IDENT_LOCAL) || rwm->codename)
		    {
		      rwlerror(rwm, RWL_ERROR_ARGUMENT_LOCAL, alp->argname);
		      goto donewithuserarg;
		    }
		    bis(alp->argflags, RWL_USER_ARG_USED);
		    switch (rwm->dtype)
		    {
		      default:
			rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2
				    , rwm->mxq->evar[rwm->decvarn].stype
				    , alp->argname
				    , "user argument");
			goto donewithuserarg;
			
		      case RWL_TYPE_INT:
		      case RWL_TYPE_DBL:
		      case RWL_TYPE_STR:

			if (alp->argvalue)
			{
			  // exeute the assignment
			  rwl_value num;
			  rwl_estack *estk;

			  rwlexprbeg(rwm);
			  num.sval = alp->argvalue;
			  num.vsalloc = RWL_SVALLOC_CONST;
			  num.slen = rwlstrlen(num.sval)+1;
			  num.ival = rwldorxtosb8(rwm->mxq,num.sval);
			  num.dval = rwlatof(num.sval);
			  num.isnull = 0;
			  num.vtype = RWL_TYPE_STR;
			  rwlexprpush(rwm, &num, RWL_STACK_NUM);
			  rwlexprpush(rwm, hy2un, RWL_STACK_ASN);
			  estk = rwlexprfinish(rwm);
			  if (estk)
			  {
			    rwlexpreval(estk, &rwm->loc, rwm->mxq, 0);
			  }
			  else
			    rwlsevere(rwm, "[rwlparser-baduserassign:%s;%s]", alp->argname, hy2un);
			  rwlexprdestroy(rwm, estk);
			}
		      break;
		    }
		    goto donewithuserarg;
		  }
		  alp = alp->nextarg;
		}
	      }
	    donewithuserarg:
	      ;
	    }
#line 7970 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 430:
#line 4136 "rwlparser.y" /* yacc.c:1646  */
    {
		  rwm->assignvar = rwm->inam;
		  rwlexprbeg(rwm);
		}
#line 7979 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 431:
#line 4141 "rwlparser.y" /* yacc.c:1646  */
    {
		  rwl_estack *estk;
		  switch (rwm->dtype)
		  {
		    default:
		      rwlsevere(rwm, "[rwlparser-badtype:%s;%d]", rwm->assignvar, rwm->dtype);
		      rwlexprclear(rwm);
		    break;

		    case RWL_TYPE_FILE:
		    case RWL_TYPE_INT:
		    case RWL_TYPE_DBL:
		    case RWL_TYPE_STR:
		      // Has this variable been assigned to at command line?
		      if (!rwm->codename 
		          && rwm->decvarn >= 0
		          && bit(rwm->mxq->evar[rwm->decvarn].flags, RWL_IDENT_IGN_DECL_ASSIGN))
		      {
			/* just finish the stack and do nothing */
			if ((estk = rwlexprfinish(rwm)))
			{
			  rwlexprdestroy(rwm, estk);
			}
			bic(rwm->mxq->evar[rwm->decvarn].flags, RWL_IDENT_IGN_DECL_ASSIGN);
		      }
		      else
		      {
			if (RWL_T_ASSIGN == rwm->assignoper)
			  rwlexprpush(rwm, rwm->assignvar, RWL_STACK_ASN);
			else
			  rwlexprpush2(rwm, rwm->assignvar, RWL_STACK_ASN, rwm->assignoper);
			estk = rwlexprfinish(rwm);
			if (estk)
			{
			  if (!rwm->codename)  // not compiling
			  {
			    rwlexpreval(estk, &rwm->loc, rwm->mxq, 0);
			    rwlexprdestroy(rwm, estk);
			  }
			  else
			    rwlcodeaddp(rwm, RWL_CODE_ASSIGN, estk);
			}
		      }
		    break;
		  }
		}
#line 8030 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 436:
#line 4204 "rwlparser.y" /* yacc.c:1646  */
    {
            rwl_estack *estk;
            estk = rwlexprfinish(rwm);
	    // If in main for direct execution, wrap a header
	    if (!rwm->codename)
	    {
	      rwm->totthr = 0;
	      // now in lexer: rwm->lnosav = rwm->loc.lineno;
	      bic(rwm->m4flags,RWL_P4_PROCHASSQL);
	      bis(rwm->mflags, RWL_P_DXEQMAIN);
	      rwlcodehead(rwm, 1 /*thrcount*/);
	    }
	    rwlcodeaddp(rwm, RWL_CODE_IF, estk);
          }
#line 8049 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 437:
#line 4219 "rwlparser.y" /* yacc.c:1646  */
    {
              rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
              rwlexprclear(rwm);
              rwm->rslerror++; // to prevent attempting else/endif code generation
              yyerrok;
            }
#line 8060 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 438:
#line 4228 "rwlparser.y" /* yacc.c:1646  */
    {
            rwl_estack *estk;
            estk = rwlexprfinish(rwm);
	    // If in main for direct execution, wrap a header
	    if (!rwm->codename)
	    {
	      rwm->totthr = 0;
	      // now in lexer: rwm->lnosav = rwm->loc.lineno;
	      bic(rwm->m4flags,RWL_P4_PROCHASSQL);
	      bis(rwm->mflags, RWL_P_DXEQMAIN);
	      rwlcodehead(rwm, 1 /*thrcount*/);
	    }
	    rwlcodeaddp(rwm, RWL_CODE_ELSEIF, estk);
          }
#line 8079 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 439:
#line 4243 "rwlparser.y" /* yacc.c:1646  */
    {
              rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
              rwlexprclear(rwm);
              rwm->rslerror++; // to prevent attempting else/endif code generation
              yyerrok;
            }
#line 8090 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 440:
#line 4252 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_LEGACY_WHILE_SYNTAX);
	  }
#line 8098 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 441:
#line 4256 "rwlparser.y" /* yacc.c:1646  */
    {
	    bis(rwm->rslflags[rwm->rsldepth], RWL_RSLFLAG_WHILOP);
	  }
#line 8106 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 442:
#line 4262 "rwlparser.y" /* yacc.c:1646  */
    {
            rwl_estack *estk;
            estk = rwlexprfinish(rwm);
	    // If in main for direct execution, wrap a header
	    if (!rwm->codename)
	    {
	      rwm->totthr = 0;
	      // now in lexer: rwm->lnosav = rwm->loc.lineno;
	      bis(rwm->mflags, RWL_P_DXEQMAIN);
	      rwlcodehead(rwm, 1 /*thrcount*/);
	    }
	    // While starts just like if does
	    rwlcodeaddp(rwm, RWL_CODE_IF, estk);
	    rwm->rslpcbrk[rwm->rsldepth] = 0;
	    bis(rwm->rslflags[rwm->rsldepth], RWL_RSLFLAG_MAYBRK);
          }
#line 8127 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 443:
#line 4279 "rwlparser.y" /* yacc.c:1646  */
    {
              rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
              rwlexprclear(rwm);
              rwm->rslerror++; // to prevent attempting else/endif code generation
              yyerrok;
            }
#line 8138 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 444:
#line 4286 "rwlparser.y" /* yacc.c:1646  */
    {
              rwlerror(rwm, RWL_ERROR_UNEXPECTED_KEYWORD, "loop");
              rwlexprclear(rwm);
              rwm->rslerror++; // to prevent attempting else/endif code generation
              yyerrok;
            }
#line 8149 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 449:
#line 4303 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (rwm->codename)
	    {
	      rwlerror(rwm, RWL_ERROR_NO_LOCAL_SUMGLOB);
	      goto nothreadssum;
	    }
	    if (RWL_TYPE_STR == rwm->dtype)
	    {
	      rwlerror(rwm, RWL_ERROR_CANNOT_BE_THSUM, "string");
	      goto nothreadssum;
	    }
	    bis(rwm->addvarbits,RWL_IDENT_THRSUM);
	    nothreadssum:
	      ;
	  }
#line 8169 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 450:
#line 4319 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (rwm->codename)
	      rwlerror(rwm, RWL_ERROR_NO_LOCAL_SUMGLOB);
	    else
	      bis(rwm->addvarbits,RWL_IDENT_GLOBAL);
	  }
#line 8180 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 451:
#line 4329 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dtype=RWL_TYPE_STR;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 8190 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 452:
#line 4335 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->dtype=RWL_TYPE_STR;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 8199 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 453:
#line 4343 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dtype=RWL_TYPE_INT;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 8209 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 454:
#line 4349 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->dtype=RWL_TYPE_INT;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 8218 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 455:
#line 4357 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dtype=RWL_TYPE_DBL;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 8228 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 456:
#line 4363 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->dtype=RWL_TYPE_DBL;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 8237 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 457:
#line 4371 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 8246 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 458:
#line 4376 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 8254 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 459:
#line 4382 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_CLOB; }
#line 8260 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 460:
#line 4383 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_BLOB; }
#line 8266 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 461:
#line 4384 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_NCLOB; }
#line 8272 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 462:
#line 4388 "rwlparser.y" /* yacc.c:1646  */
    { rwm->sqllino = rwm->loc.lineno;}
#line 8278 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 463:
#line 4389 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	    bic(rwm->m2flags, RWL_P2_BADSQLFILTXT);
	    bic(rwm->m3flags, RWL_P3_IMMEDSQL); 
	    bic(rwm->m3flags, RWL_P3_IMMISDYN); 
	    rwm->sqllen = 0;
	    rwm->sqname = rwm->inam;
	  }
#line 8292 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 465:
#line 4400 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_SQL_WRONG); yyerrok;
	  }
#line 8300 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 466:
#line 4403 "rwlparser.y" /* yacc.c:1646  */
    { rwm->sqllino = rwm->loc.lineno;}
#line 8306 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 467:
#line 4404 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bic(rwm->m2flags, RWL_P2_BADSQLFILTXT);
	    bic(rwm->m3flags, RWL_P3_IMMEDSQL); 
	    bic(rwm->m3flags, RWL_P3_IMMISDYN); 
	    rwm->sqllen = 0;
	    rwm->sqname = rwm->inam;
	  }
#line 8319 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 469:
#line 4414 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_SQL_WRONG); yyerrok;
	  }
#line 8327 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 472:
#line 4424 "rwlparser.y" /* yacc.c:1646  */
    { 
	    sb4 ll;

	    /* add the identifier */
	    if (rwm->codename) /* local SQL inside procedure/function */
	      ll = rwladdvar2(rwm, rwm->sqname, RWL_TYPE_SQL, RWL_IDENT_LOCAL, rwm->codename);
	    else
	      ll = rwladdvar(rwm, rwm->sqname, RWL_TYPE_SQL, rwm->addvarbits);
	    if (ll>=0)
	    {
	      rwm->sqsavvarn = ll;
	      rwm->sqsav = rwlalloc(rwm, sizeof(rwl_sql));
	      if (bit(rwm->m3flags,RWL_P3_ALLIMPLBIN))
		bis(rwm->sqsav->flags, RWL_SQLFLAG_IBUSE);
	      if (bit(rwm->m3flags,RWL_P3_ALLIMPLDEF))
		bis(rwm->sqsav->flags, RWL_SQLFLAG_IDUSE);
	      if (bit(rwm->m3flags,RWL_P3_IMPLCASE))
		bis(rwm->sqsav->flags, RWL_SQLFLAG_ICASE);
	      if (bit(rwm->m3flags,RWL_P3_BINDOUTNAME))
	      {
		bis(rwm->sqsav->flags, RWL_SQLFLAG_BONAM);
		rwm->sqsav->boname = rwm->boname;
	      }
	      rwm->mxq->evar[ll].vdata = rwm->sqsav;
	      rwm->sqsav->sqllino = rwm->mxq->evar[ll].loc.lineno = rwm->sqllino;

	      bis(rwm->sqsav->flags, RWL_SQFLAG_DYNAMIC);
	      rwm->sqsav->vname = rwm->sqname; /* used for error reporting only */
	      if (rwm->codename)
	      {
		if (rwm->lvcount < rwm->maxlocals)
		{
		  rwm->lvsav[rwm->lvcount].aname = rwm->sqname;
		  rwm->lvsav[rwm->lvcount].aguess = ll;
		  rwm->lvsav[rwm->lvcount].atype = RWL_TYPE_SQL;
		  rwm->lvcount++;
		}
		else
		{
                  rwlerror(rwm, RWL_ERROR_TOO_MAY_LOCALS, rwm->maxlocals-1);
                  rwlerrormute(rwm,RWL_ERROR_TOO_MAY_LOCALS, 0);
		}
	      }
	    }
	  }
#line 8377 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 473:
#line 4471 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwl_bindef *bd; 

	    /* count binds and defines */
	    bd = rwm->sqsav->bindef; 
	    while (bd)
	    {
	      switch (bd->bdtyp)
	      {
		case RWL_BIND_POS:
		case RWL_BIND_NAME:
		  rwm->sqsav->bincount++;
		break;

		case RWL_BINDOUT_POS:
		case RWL_BINDOUT_NAME:
		  rwm->sqsav->outcount++;
		break;

	        case RWL_DEFINE:
		  rwm->sqsav->defcount++;
		break;
	      }
	      bd = bd->next;
	    }

	    if (rwm->sqsav->asiz && bit(rwm->sqsav->flags, RWL_SQFLAG_IGNERR))
	      rwlerror(rwm, RWL_ERROR_SQL_ARRAY_AND_IGNERR);

	  }
#line 8412 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 474:
#line 4505 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->m4flags, RWL_P4_AMPERSAND) && rwldynarcheck(rwm))
	    {
	      rwlerror(rwm, RWL_ERROR_CANNOT_AMPREP_HERE, "named sql declaration");
	      rwm->mxq->evar[rwm->sqsavvarn].vtype = RWL_TYPE_CANCELLED;
	      rwm->mxq->evar[rwm->sqsavvarn].stype = "cancelled (sql)";
	    }
	  }
#line 8425 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 476:
#line 4518 "rwlparser.y" /* yacc.c:1646  */
    { 
	    sb4 ll;
	    ub4 iflag = bit(rwm->m3flags, RWL_P3_IMMEDSQL) ? RWL_IDENT_INTERNAL : 0;

	    /* add the identifier */
	    if (rwm->codename) /* local SQL inside procedure/function */
	      ll = rwladdvar2(rwm, rwm->sqname, RWL_TYPE_SQL, iflag|RWL_IDENT_LOCAL, rwm->codename);
	    else
	      ll = rwladdvar(rwm, rwm->sqname, RWL_TYPE_SQL, iflag|rwm->addvarbits);
	    if (ll>=0)
	    {
	      rwm->sqsavvarn = ll;
	      rwm->sqsav = rwlalloc(rwm, sizeof(rwl_sql));
	      if (bit(rwm->m3flags,RWL_P3_ALLIMPLBIN))
		bis(rwm->sqsav->flags, RWL_SQLFLAG_IBUSE);
	      if (bit(rwm->m3flags,RWL_P3_ALLIMPLDEF))
		bis(rwm->sqsav->flags, RWL_SQLFLAG_IDUSE);
	      if (bit(rwm->m3flags,RWL_P3_IMPLCASE))
		bis(rwm->sqsav->flags, RWL_SQLFLAG_ICASE);
	      if (bit(rwm->m3flags,RWL_P3_BINDOUTNAME))
	      {
		bis(rwm->sqsav->flags, RWL_SQLFLAG_BONAM);
		rwm->sqsav->boname = rwm->boname;
	      }
	      rwm->mxq->evar[ll].vdata = rwm->sqsav;
	      if (bit(rwm->m3flags, RWL_P3_IMMISDYN))
	      {
		// immediate sql is dynamic
		bis(rwm->sqsav->flags, RWL_SQFLAG_DYNAMIC | RWL_SQLFLAG_DYIREL);
	      }
	      else
	      {
		// when not dynamic, we have the text
		if (bit(rwm->m2flags, RWL_P2_BADSQLFILTXT))
		{
		  rwm->mxq->evar[ll].vtype = RWL_TYPE_CANCELLED;
		  rwm->mxq->evar[ll].stype = "cancelled (sql)";
		}
		rwm->sqsav->sqllino = rwm->mxq->evar[ll].loc.lineno = rwm->sqllino;
		if (rwm->sqllen) // if read from a file - can contain a zero byte at end
		{
		  rwm->sqsav->sql = rwlalloc(rwm, rwm->sqllen+2); // extra zero at end
		  rwm->sqsav->sqllen = rwm->sqllen;
		  rwm->sqsav->sqlfile = rwm->sqlfile;
		  memcpy(rwm->sqsav->sql, rwm->sqlbuffer, rwm->sqllen);
		}
		else
		{
		  rwm->sqsav->sql = rwlstrdup(rwm, rwm->sqlbuffer); /* sqlbuffer is static and reused */
		  rwm->sqsav->sqllen = rwlstrlen(rwm->sqsav->sql);
		}

		if (bit(rwm->mflags, RWL_P_SQLWASPLS))
		  bis(rwm->sqsav->flags, RWL_SQFLAG_LEXPLS);
	      }
	      rwm->sqsav->vname = rwm->sqname; /* used for error reporting only */
	      if (rwm->codename)
	      {
		if (rwm->lvcount < rwm->maxlocals)
		{
		  rwm->lvsav[rwm->lvcount].aname = rwm->sqname;
		  rwm->lvsav[rwm->lvcount].aguess = ll;
		  rwm->lvsav[rwm->lvcount].atype = RWL_TYPE_SQL;
		  rwm->lvcount++;
		}
		else
		{
                  rwlerror(rwm, RWL_ERROR_TOO_MAY_LOCALS, rwm->maxlocals-1);
                  rwlerrormute(rwm,RWL_ERROR_TOO_MAY_LOCALS, 0);
		}
	      }
	    }
	  }
#line 8503 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 477:
#line 4596 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwl_bindef *bd; 
	    ub4 notyetcount = 0;
	    ub4 tryabinraw = 0;

	    /* count binds and defines */
	    bd = rwm->sqsav->bindef; 
	    while (bd)
	    {
	      switch (bd->bdtyp)
	      {
		case RWL_BIND_POS:
		case RWL_BIND_NAME:
		  rwm->sqsav->bincount++;
		  if (RWL_TYPE_RAW == bd->vtype)
		    tryabinraw++;
		    
		break;

		case RWL_BINDOUT_POS:
		case RWL_BINDOUT_NAME:
		  rwm->sqsav->outcount++;
		break;

	        case RWL_DEFINE:
		  rwm->sqsav->defcount++;

		  // define array only allowed for certain types
		  if (bit(rwm->sqsav->flags, RWL_SQFLAG_ARRAYD))
		  {
		    switch(bd->vtype)
		    {
		      case RWL_TYPE_INT:
		      case RWL_TYPE_DBL:
		      case RWL_TYPE_STR:
		      case RWL_TYPE_CLOB:
			break;

		      default:
			rwlerror(rwm, RWL_ERROR_DEFINE_ARRAY_WRONG_TYPE, bd->vname);
			notyetcount++;
		    }
		    if (bit(rwm->sqsav->flags, RWL_SQLFLAG_IDUSE))
		    {
		      rwlerror(rwm, RWL_ERROR_DEFINE_ARRAY_NOT_IMPLICIT);
		      notyetcount++;
		    }
		  }
		break;
	      }
	      bd = bd->next;
	    }
	    if (notyetcount)
	      bic(rwm->sqsav->flags, RWL_SQFLAG_ARRAYD);

	    if (rwm->sqsav->asiz && bit(rwm->sqsav->flags, RWL_SQFLAG_IGNERR))
	      rwlerror(rwm, RWL_ERROR_SQL_ARRAY_AND_IGNERR);

	    /* array define */
	    if (rwm->sqsav->asiz>0 && bit(rwm->sqsav->flags, RWL_SQFLAG_ARRAYD))
	    {
	      if (!rwm->sqsav->defcount)
	      {
	        rwlerror(rwm, RWL_ERROR_BAD_DEFINE_ARRAY);
		bic(rwm->sqsav->flags, RWL_SQFLAG_ARRAYD);
	      }
	      else
	        rwlallocabd(rwm->mxq, 0, rwm->sqsav);
	    }

	    if (tryabinraw && rwm->sqsav->asiz>0)
	      rwlerror(rwm, RWL_ERROR_NO_BIND_RAW_ARRAY);

	    if (rwm->sqsav->asiz>0   // array set
	        && 0==rwm->sqsav->defcount // no explicit defines
		&& !bit(rwm->sqsav->flags, RWL_SQLFLAG_IDUSE) // not implicit define
		&& 0==tryabinraw // not experimental raw
	       )
	    {
	      if (!bit(rwm->sqsav->flags, RWL_SQLFLAG_IBUSE))
	      { 
		if (rwm->sqsav->outcount>0  || rwm->sqsav->bincount<1)
		  rwlerror(rwm, RWL_ERROR_BAD_BIND_ARRAY);
		else
		{
		  bis(rwm->sqsav->flags,RWL_SQFLAG_ARRAYB);
		  /* allocate array of bind pointers and indicators */
		  rwlallocabd(rwm->mxq, 0, rwm->sqsav);
		}
	      }
	    }
	  }
#line 8600 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 481:
#line 4699 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_BIND); yyerrok; }
#line 8606 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 483:
#line 4703 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_BINDOUT); yyerrok; }
#line 8612 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 485:
#line 4707 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DEFINE); yyerrok; }
#line 8618 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 486:
#line 4709 "rwlparser.y" /* yacc.c:1646  */
    {
		  bis(rwm->sqsav->flags, RWL_SQFLAG_IGNERR);
		}
#line 8626 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 487:
#line 4713 "rwlparser.y" /* yacc.c:1646  */
    {
		  bic(rwm->sqsav->flags, RWL_SQFLAG_NOCURC);
		}
#line 8634 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 488:
#line 4717 "rwlparser.y" /* yacc.c:1646  */
    {
		  bis(rwm->sqsav->flags, RWL_SQFLAG_NOCURC);
		}
#line 8642 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 489:
#line 4722 "rwlparser.y" /* yacc.c:1646  */
    {
		  if (RWL_TYPE_CANCELLED == rwm->pval.vtype)
		  {
		    // Can e.g. error if local variable found
		    // Set a dummy value to avoid unneccsary RWL-050
		    rwm->sqsav->asiz = 1;
		  }
		  else
		  {
		    if (rwm->sqsav->asiz)
		      rwlerror(rwm, RWL_ERROR_SQLARRAY_SET);
		    else if (rwm->pval.ival <= 0)
		      rwlerror(rwm, RWL_ERROR_SQLARRAY_NOTGOOD);
		    else
		      rwm->sqsav->asiz = (ub4)rwm->pval.ival;
		  }
		}
#line 8664 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 490:
#line 4741 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ARRAY); yyerrok; }
#line 8670 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 491:
#line 4746 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_MISSING_SEMICOLON_IN_SQL); }
#line 8676 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 494:
#line 4752 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->sqsav->flags, RWL_SQFLAG_DYNAMIC))
	      rwlerror(rwm, RWL_ERROR_DEFINE_ARRAY_NOT_DYNAMIC);
	    else
	      bis(rwm->sqsav->flags, RWL_SQFLAG_ARRAYD);
	  }
#line 8687 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 497:
#line 4766 "rwlparser.y" /* yacc.c:1646  */
    {
	  // Note that it would not be too hard to replace
	  // the integer constant here by an expression
	  // which would make sense as that is what
	  // can be done with modify sql for dynamic sql
	  rwm->bdpos = rwm->ival; rwm->bdtyp=RWL_DEFINE;
	}
#line 8699 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 499:
#line 4775 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->sqsav->flags, RWL_SQLFLAG_IDUSE))
	      rwlerror(rwm, RWL_ERROR_IMPLICIT_ALREADY, "define");
	    bis(rwm->sqsav->flags, RWL_SQLFLAG_IDUSE);
	  }
#line 8709 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 502:
#line 4789 "rwlparser.y" /* yacc.c:1646  */
    { rwm->bdname = rwm->sval; rwm->bdtyp=RWL_BINDOUT_NAME; }
#line 8715 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 504:
#line 4791 "rwlparser.y" /* yacc.c:1646  */
    { 
	    // We could also use expression here, but we would
	    // of course need to check it was either a non-negative number
	    // or a string starting with :
	    rwm->bdpos = bit(rwm->m2flags,RWL_P2_BINDZERO) ? rwm->ival+1 : rwm->ival;
	    rwm->bdtyp=RWL_BINDOUT_POS; 
	  }
#line 8727 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 506:
#line 4799 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->bdtyp=RWL_BINDOUT_SAME;
	  }
#line 8735 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 508:
#line 4803 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_IMPLICIT_NOT_BINDOUT);
	  }
#line 8743 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 511:
#line 4814 "rwlparser.y" /* yacc.c:1646  */
    { rwm->bdname = rwm->sval; rwm->bdtyp=RWL_BIND_NAME; }
#line 8749 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 513:
#line 4816 "rwlparser.y" /* yacc.c:1646  */
    { 
	    // same comment as above
	    rwm->bdpos = bit(rwm->m2flags,RWL_P2_BINDZERO) ? rwm->ival+1 : rwm->ival;
	    rwm->bdtyp=RWL_BIND_POS; 
	  }
#line 8759 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 515:
#line 4822 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->bdtyp=RWL_BIND_SAME;
	  }
#line 8767 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 517:
#line 4826 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->sqsav->flags, RWL_SQLFLAG_IBUSE))
	      rwlerror(rwm, RWL_ERROR_IMPLICIT_ALREADY, "bind");
	    bis(rwm->sqsav->flags, RWL_SQLFLAG_IBUSE);
	  }
#line 8777 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 518:
#line 4835 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwl_bindef *bd;
	    bd = rwlalloc(rwm, sizeof(rwl_bindef));
	    switch (rwm->bdtyp)
	    {
	      case RWL_BIND_POS:
	      case RWL_BINDOUT_POS:
	      case RWL_DEFINE:
		bd->vname = rwm->inam;
		bd->pos = (ub4)rwm->bdpos; /* define or bind by pos */
		bd->bdtyp = rwm->bdtyp;
	      break;
	      
	      case RWL_BIND_NAME:
	      case RWL_BINDOUT_NAME:
		bd->vname = rwm->inam;
		bd->bname = rwm->bdname; /* bind by name */
		bd->bdtyp = rwm->bdtyp;
	      break;

	      case RWL_BIND_SAME:
		bd->vname = rwm->inam;
		bd->bname = rwm->inam; /* bind by name */
		bd->bdtyp = RWL_BIND_NAME;
	      break;

	      case RWL_BINDOUT_SAME: // same variable and place holder name
		bd->vname = rwm->inam;
		bd->bname = rwm->inam;
	        bd->bdtyp = RWL_BINDOUT_NAME;
	      break;

	      default:
		rwlsevere(rwm, "[rwlparser-badbdtyp:%d]", rwm->bdtyp);
	      break;
	    }
	      
	    // fix bind/define during declaration of a dynamic SQL
	    if (bit(rwm->sqsav->flags, RWL_SQFLAG_DYNAMIC))
	      bis(bd->bdflags, RWL_BDFLAG_FIXED);

	    bd->vguess = rwlfindvar2(rwm->mxq, bd->vname, RWL_VAR_NOGUESS, rwm->codename);
	    if (bd->vguess>=0)
	    {
	      /* is it really a variable ?
	       * if yes, save type and length if string
	       */
	      if (bit(rwm->mxq->evar[bd->vguess].flags,RWL_IDENT_GLOBAL))
		  rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2
		  , rwm->mxq->evar[bd->vguess].stype, bd->vname,"bind/define");
	      else 
	      {
	        switch (rwm->mxq->evar[bd->vguess].vtype)
		{

		  case RWL_TYPE_INT: 
		    bd->vtype = RWL_TYPE_INT;
		  break;

		  case RWL_TYPE_DBL: 
		    bd->vtype = RWL_TYPE_DBL;
		  break;

		  case RWL_TYPE_STR: 
		    if (bit(rwm->m2flags, RWL_P2_BINDRAW))
		    {
		      bd->vtype = RWL_TYPE_RAW;
		    }
		    else
		      bd->vtype = RWL_TYPE_STR;
		    /* space for NULL terminate is considered in rwladdvar */
		    bd->slen = rwm->mxq->evar[bd->vguess].num.slen;
		  break;

		  case RWL_TYPE_BLOB:
		    bd->vtype = RWL_TYPE_BLOB;
		  break;

		  case RWL_TYPE_CLOB:
		    bd->vtype = RWL_TYPE_CLOB;
		  break;

		  default:
		    rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2
		    , rwm->mxq->evar[bd->vguess].stype, bd->vname,"bind/define");
		  break;
		}
	      /* add me to the linked list of the SQL */
	      bd->next = rwm->sqsav->bindef;
	      rwm->sqsav->bindef = bd;
	      }
	    }
	  }
#line 8875 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 519:
#line 4931 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->inam = RWL_DUMMY_VAR;
	    rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2, "function", "runseconds", "bind/define");
	  }
#line 8884 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 520:
#line 4936 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->inam = RWL_DUMMY_VAR;
	    rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2, "function", "epochseconds", "bind/define");
	  }
#line 8893 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 521:
#line 4940 "rwlparser.y" /* yacc.c:1646  */
    { bic(rwm->m2flags,RWL_P2_BINDRAW); }
#line 8899 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 522:
#line 4941 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m2flags,RWL_P2_BINDRAW); }
#line 8905 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 523:
#line 4945 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->modsqlvar>=0)
	    {
	      rwl_sql *sq;
	      sq = rwm->mxq->evar[rwm->modsqlvar].vdata;
	      if (RWL_TYPE_SQL ==rwm->mxq->evar[rwm->modsqlvar].vtype)
	      {
		    if (rwm->codename)
		      rwlcodeaddpu(rwm, RWL_CODE_SQLLEAK, rwm->msqlinam, (ub4)rwm->modsqlvar);
		    else
		    {
		      bis(sq->flags, RWL_SQFLAG_LEAK);
		    }
	      }
	    }
	  }
#line 8926 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 524:
#line 4962 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->modsqlvar>=0)
	    {
	      rwl_sql *sq;
	      sq = rwm->mxq->evar[rwm->modsqlvar].vdata;
	      if (RWL_TYPE_SQL ==rwm->mxq->evar[rwm->modsqlvar].vtype)
	      {
		    if (rwm->codename)
		      rwlcodeaddpu(rwm, RWL_CODE_SQLCCON, rwm->msqlinam, (ub4)rwm->modsqlvar);
		    else
		    {
		      bic(sq->flags, RWL_SQFLAG_NOCURC);
		    }
	      }
	    }
	  }
#line 8947 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 525:
#line 4979 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->modsqlvar>=0)
	    {
	      rwl_sql *sq;
	      sq = rwm->mxq->evar[rwm->modsqlvar].vdata;
	      if (RWL_TYPE_SQL ==rwm->mxq->evar[rwm->modsqlvar].vtype)
	      {
		    if (rwm->codename)
		      rwlcodeaddpu(rwm, RWL_CODE_SQLCCOFF, rwm->msqlinam, (ub4)rwm->modsqlvar);
		    else
		    {
		      bis(sq->flags, RWL_SQFLAG_NOCURC);
		    }
	      }
	    }
	  }
#line 8968 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 526:
#line 4996 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (rwm->modsqlvar>=0)
	    {
	      rwl_sql *sq;
	      sq = rwm->mxq->evar[rwm->modsqlvar].vdata;
	      if (rwm->codename)
	      {
		rwlcodeaddpu(rwm, RWL_CODE_SQLFLUSH, rwm->msqlinam, (ub4)rwm->modsqlvar);
	      }
	      else
	      {
		if (bit(sq->flags,RWL_SQFLAG_ARRAYB))
		{
		  rwldummyonbad(rwm->mxq, rwm->defdb);
		  rwlflushsql(rwm->mxq, &rwm->loc, rwm->mxq->curdb, sq);
		}
		else
		  rwlerror(rwm, RWL_ERROR_ARRAY_EXECUTE_NOT_AB, sq->vname);
		  
	      }
	    }
	  }
#line 8995 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 527:
#line 5018 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 9001 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 528:
#line 5019 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (rwm->modsqlvar>=0)
	    {
	      rwl_sql *sq;
	      sq = rwm->mxq->evar[rwm->modsqlvar].vdata;
	      // Cannot change the size if using array define 
	      // as allocation in rwlallocabd
	      // already has taken place.  To correct this, a change
	      // need to imply de- and re-allocate
	      // However, it will be quite difficult at runtime
	      if (bit(sq->flags, RWL_SQFLAG_ARRAYD))
		rwlerror(rwm, RWL_ERROR_DEFINE_ARRAY_IS_FIXED);
	      else
	      {
		if (rwm->codename)
		{
		  rwl_estack *estk = rwlexprfinish(rwm);
		  rwlcodeaddpup(rwm, RWL_CODE_SQLARRAY, rwm->msqlinam, (ub4)rwm->modsqlvar, estk);
		}
		else
		{
		  rwlexprimmed(rwm);
		  if (rwm->pval.ival<=0)
		    sq->asiz = 0;
		  else
		    sq->asiz = rwm->pval.ival;
		}
	      }
	    }
	  }
#line 9036 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 529:
#line 5050 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->modsqlvar>=0)
	    {
	      rwl_sql *sq;
	      sq = rwm->mxq->evar[rwm->modsqlvar].vdata;
	      if (!bit(sq->flags, RWL_SQFLAG_DYNAMIC))
	      {
	        rwlerror(rwm, RWL_ERROR_STATIC_SQL_NO_MODIFY, "release");
	      }
	      else
	      {
		if (rwm->codename)
		  rwlcodeaddpu(rwm, RWL_CODE_DYNSREL, rwm->msqlinam, (ub4)rwm->modsqlvar);
		else
		{
		  rwldynsrelease(rwm->mxq, &rwm->loc, sq, 0);
		}
	      }
	    }
	  }
#line 9061 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 530:
#line 5070 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 9067 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 531:
#line 5071 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->modsqlvar>=0 && (rwm->msqlstk = rwlexprfinish(rwm)))
	    { 
	      rwl_sql *sq;
	      sq = rwm->mxq->evar[rwm->modsqlvar].vdata;
	      if (!bit(sq->flags, RWL_SQFLAG_DYNAMIC))
	      {
	        rwlerror(rwm, RWL_ERROR_STATIC_SQL_NO_MODIFY, "for");
	      }
	      else
	      {
		if (rwm->codename)
		  rwlcodeaddpup(rwm, RWL_CODE_DYNSTXT, rwm->msqlinam, (ub4) rwm->modsqlvar, rwm->msqlstk);
		else
		{
		  rwlexpreval(rwm->msqlstk, &rwm->loc, rwm->mxq, &rwm->mxq->xqnum);
		  rwldynstext(rwm->mxq, &rwm->loc, sq, &rwm->mxq->xqnum, 0);
		}
	      }
	    }
	  }
#line 9093 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 532:
#line 5093 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (rwm->modsqlvar>=0)
	    { 
	      rwl_sql *sq;
	      sq = rwm->mxq->evar[rwm->modsqlvar].vdata;
	      if (bit(sq->flags, RWL_SQFLAG_DYNAMIC))
		rwm->mqbdtyp = RWL_DEFINE;
	      else
	      {
	        rwlerror(rwm, RWL_ERROR_STATIC_SQL_NO_MODIFY, "define");
		rwm->mqbdtyp = 0;
	      }
	    }
	  }
#line 9112 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 534:
#line 5108 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (rwm->modsqlvar>=0)
	    { 
	      rwl_sql *sq;
	      sq = rwm->mxq->evar[rwm->modsqlvar].vdata;
	      if (bit(sq->flags, RWL_SQFLAG_DYNAMIC))
		rwm->mqbdtyp = RWL_BIND_UNK;
	      else
	      {
	        rwlerror(rwm, RWL_ERROR_STATIC_SQL_NO_MODIFY, "bind");
		rwm->mqbdtyp = 0;
	      }
	    }
	  }
#line 9131 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 536:
#line 5123 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (rwm->modsqlvar>=0)
	    { 
	      rwl_sql *sq;
	      sq = rwm->mxq->evar[rwm->modsqlvar].vdata;
	      if (bit(sq->flags, RWL_SQFLAG_DYNAMIC))
		rwm->mqbdtyp = RWL_BINDOUT_UNK;
	      else
	      {
	        rwlerror(rwm, RWL_ERROR_STATIC_SQL_NO_MODIFY, "bindout");
		rwm->mqbdtyp = 0;
	      }
	    }
	  }
#line 9150 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 540:
#line 5143 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 9156 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 541:
#line 5145 "rwlparser.y" /* yacc.c:1646  */
    { rwm->msqlstk = rwlexprfinish(rwm); }
#line 9162 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 542:
#line 5147 "rwlparser.y" /* yacc.c:1646  */
    {
	    sb4 l2;
	    rwl_sql *sq;
	    rwl_identifier *bdvar = 0;

	    l2 = rwlfindvar2(rwm->mxq, rwm->inam, RWL_VAR_NOGUESS, rwm->codename);
	    if (rwm->msqlstk && rwm->mqbdtyp/*is zero when not dynamic sql*/)
	    { 
	      if (l2>=0)
	      {
		// make sure we can use it for bind/define 
		bdvar = rwm->mxq->evar + l2;
		switch (bdvar->vtype)
		{
		  case RWL_TYPE_INT:
		  case RWL_TYPE_DBL:
		  case RWL_TYPE_STR:
		  case RWL_TYPE_CLOB:
		    // Good!

		  break;

		  default:
		    rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2
		    , bdvar->stype, bdvar->vname,"bind/define");
		    l2 = RWL_VAR_INVALID;
		  break;
		}
	      }

	      if (rwm->modsqlvar>=0 && l2>=0)
	      {
		sq = rwm->mxq->evar[rwm->modsqlvar].vdata;
		if (rwm->codename)
		  rwlcodeaddpupupu(rwm, RWL_CODE_DYNBINDEF
		    , rwm->msqlinam, (ub4)rwm->modsqlvar // The sql variable
		    , rwm->inam, l2	 // The variable to define/bind to
		    , rwm->msqlstk // The expression that has the pos or bindname
		    , rwm->mqbdtyp);
		else
		{
		  rwlexpreval(rwm->msqlstk, &rwm->loc, rwm->mxq, &rwm->mxq->xqnum);
		  rwldynsbindef(rwm->mxq, &rwm->loc, sq, &rwm->mxq->xqnum
		    , l2, rwm->inam, rwm->mqbdtyp, 0);
		}
	      }
	    }
	    else
	      rwlexprclear(rwm);
	  }
#line 9217 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 543:
#line 5200 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwl_cinfo *mdb;
	    rwl_estack *estk;
	    if (!(estk = rwlexprfinish(rwm)))
	      goto dontmoddbcache;
	    // is var good
	    if (rwm->mdbvar < 0)
	      goto dontmoddbcache;
	    // is it anything but connecitonpool
	    mdb = rwm->mxq->evar[rwm->mdbvar].vdata;
	    if (RWL_DBPOOL_CONNECT == mdb->pooltype)
	    {
	      rwlerror(rwm, RWL_ERROR_CPOOL_NO_SESSION, rwm->mxq->evar[rwm->mdbvar].vname);
	      goto dontmoddbcache;
	    }
	    
	    if (rwm->codename)
	      rwlcodeaddpup(rwm, RWL_CODE_MODCCACHE, rwm->mdbnam, (ub4)rwm->mdbvar, estk);
	    else
	    {
	      rwlexpreval(estk, &rwm->loc, rwm->mxq, &rwm->pval);
	      rwldbmodccache(rwm->mxq, &rwm->loc, mdb, 
		rwlcheckminval(rwm->mxq, 0, rwm->pval.ival
                , 0, RWL_DEFAULT_STMTCACHE, (text *) "cursorcache"));
	    }

	  dontmoddbcache:
	    ;
	  }
#line 9251 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 544:
#line 5230 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->mdbsphi = rwm->mdbsplo = rwlexprfinish(rwm);
	    if (!rwm->mdbsplo)
	      rwlexprclear(rwm);
	  }
#line 9261 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 545:
#line 5236 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwl_cinfo *mdb;
	    // are lo/hi good
	    if (!rwm->mdbsphi || !rwm->mdbsplo)
	      goto dontmoddbpool;
	    // is var good
	    if (rwm->mdbvar < 0)
	      goto dontmoddbpool;
	    // is it a sessionpool
	    mdb = rwm->mxq->evar[rwm->mdbvar].vdata;
	    if (RWL_DBPOOL_SESSION != mdb->pooltype)
	    {
	      rwlerror(rwm, RWL_ERROR_DB_NOT_SESSIONPOOL, rwm->mxq->evar[rwm->mdbvar].vname);
	      goto dontmoddbpool;
	    }
	    // cannot be in main
	    if (!rwm->codename)
	    {
	      rwlerror(rwm, RWL_ERROR_NOT_DONE_IN_MAIN, "modify database sessionpool");
	      goto dontmoddbpool;
	    }

	    // all is good
	    rwlcodeaddpupp(rwm, RWL_CODE_MODSESP, rwm->mdbnam, (ub4)rwm->mdbvar, rwm->mdbsplo, rwm->mdbsphi);

	  dontmoddbpool:
	    rwm->mdbsphi = rwm->mdbsplo = 0;
	  }
#line 9294 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 547:
#line 5268 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (!(rwm->mdbsphi = rwlexprfinish(rwm)))
	      rwlexprclear(rwm);
	  }
#line 9303 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 548:
#line 5275 "rwlparser.y" /* yacc.c:1646  */
    {  
	    sb4 l;
	    rwm->filvarn = RWL_VAR_NOTFOUND;
	    /* lookup the file and check it is a file */
	    l = rwlfindvar2(rwm->mxq, RWL_STDOUT_VAR, RWL_VAR_NOGUESS, rwm->codename);
	    if (l>=0 && rwm->mxq->evar[l].vtype == RWL_TYPE_FILE)
	    {
	      rwm->filvarn = l;
	      rwm->filenam = RWL_STDOUT_VAR;
	    }
	    else
	    {
	      if (l<0)
		rwlsevere(rwm, "[rwlparser-printfnostdout:%d]", l);
	      else
		rwlsevere(rwm, "[rwlparser-printfnostdout2:%d:%d]", l, rwm->mxq->evar[l].vtype);
	    }

	  }
#line 9327 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 550:
#line 5298 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m3flags, RWL_P3_SPFCONCAT); }
#line 9333 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 551:
#line 5299 "rwlparser.y" /* yacc.c:1646  */
    { bic(rwm->m3flags, RWL_P3_SPFCONCAT); }
#line 9339 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 552:
#line 5303 "rwlparser.y" /* yacc.c:1646  */
    {  
	  sb4 l;
	  rwm->strvarn = RWL_VAR_NOTFOUND;
	  rwm->strvnam = 0;
	  /* lookup the identifier and check it is a string */
	  l = rwlfindvar2(rwm->mxq, rwm->inam, RWL_VAR_NOGUESS, rwm->codename);
	  if (l>=0)
	  {
	    if (rwm->mxq->evar[l].vtype == RWL_TYPE_STR)
	    {
	      rwm->strvarn = l;
	      rwm->strvnam = rwm->inam;
	    }
	    else
	      rwlerror(rwm,RWL_ERROR_INCORRECT_TYPE2, rwm->mxq->evar[l].stype, rwm->inam, "string");
	  }

	  rwm->conhead = rwm->contail = 0;
	}
#line 9363 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 553:
#line 5323 "rwlparser.y" /* yacc.c:1646  */
    {
	  if (rwm->codename)
	    rwlcodeaddpupu(rwm, RWL_CODE_SPRINTF, rwm->strvnam
	      , rwm->strvarn, rwm->conhead
	      , bit(rwm->m3flags, RWL_P3_SPFCONCAT) ? RWL_TYPE_STREND : RWL_TYPE_STR);
	  else
	  {
	    // sprintf 
	    rwldoprintf(rwm->mxq, 0, rwm->mxq->evar+rwm->strvarn, rwm->conhead
	      , bit(rwm->m3flags, RWL_P3_SPFCONCAT) ? RWL_TYPE_STREND : RWL_TYPE_STR);
	  }
	  ;
	}
#line 9381 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 554:
#line 5341 "rwlparser.y" /* yacc.c:1646  */
    {  
	    sb4 l;
	    rwm->filvarn = RWL_VAR_NOTFOUND;
	    rwm->filenam = 0;
	    /* lookup the file and check it is a file */
	    l = rwlfindvar2(rwm->mxq, rwm->inam, RWL_VAR_NOGUESS, rwm->codename);
	    if (l>=0)
	    {
	      if (rwm->mxq->evar[l].vtype == RWL_TYPE_FILE)
	      {
		rwm->filvarn = l;
		rwm->filenam = rwm->inam;
	      }
	      else
	        rwlerror(rwm,RWL_ERROR_INCORRECT_TYPE2, rwm->mxq->evar[l].stype, rwm->inam, "file");
	    }

	  }
#line 9404 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 556:
#line 5363 "rwlparser.y" /* yacc.c:1646  */
    {
	  rwm->conhead = rwm->contail = 0;
	}
#line 9412 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 557:
#line 5367 "rwlparser.y" /* yacc.c:1646  */
    {
	  if (rwm->codename)
	    rwlcodeaddpup(rwm, RWL_CODE_FPRINTF, rwm->filenam
	      , rwm->filvarn, rwm->conhead);
	  else
	  if (!bit(rwm->m2flags, RWL_P2_NOEXEC))
	  {
	    // fprintf if the file is open
	    if (bit(rwm->mxq->evar[rwm->filvarn].num.valflags, RWL_VALUE_FILE_OPENW))
	      rwldoprintf(rwm->mxq, 0, rwm->mxq->evar+rwm->filvarn, rwm->conhead, RWL_TYPE_FILE);
	    else
	    {
	      if (!bit(rwm->mxq->evar[rwm->filvarn].num.valflags, RWL_VALUE_FILEREPNOTOPEN))
		rwlerror(rwm,RWL_ERROR_WRITE_NOT_OPEN, rwm->mxq->evar[rwm->filvarn].vname);
	      bis(rwm->mxq->evar[rwm->filvarn].num.valflags, RWL_VALUE_FILEREPNOTOPEN);
	    }
	    // TODO rwlfree of conlist
	  }
	  ;
	}
#line 9437 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 560:
#line 5395 "rwlparser.y" /* yacc.c:1646  */
    {
	  rwl_estack *estk;
	  rwl_conlist *newcon;
	  if ((estk = rwlexprfinish(rwm)))
	  {
	    newcon = rwlalloc(rwm, sizeof(rwl_conlist));
	    newcon->estk = estk;
	    if (!rwm->conhead) // the first
	    { 
	      rwm->conhead = rwm->contail = newcon;
	    }
	    else // add to end of list
	    {
	      rwm->contail->connxt = newcon;
	      rwm->contail = newcon;
	    }
	  }
        }
#line 9460 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 561:
#line 5416 "rwlparser.y" /* yacc.c:1646  */
    {  
	    sb4 l;
	    rwm->filvarn = RWL_VAR_NOTFOUND;
	    rwm->filenam = 0;
	    /* lookup the file and check it is a file */
	    l = rwlfindvar2(rwm->mxq, rwm->inam, RWL_VAR_NOGUESS, rwm->codename);
	    if (l>=0)
	    {
	      if (rwm->mxq->evar[l].vtype == RWL_TYPE_FILE)
	      {
		rwm->filvarn = l;
		rwm->filenam = rwm->inam;
		bis(rwm->mflags,RWL_P_PRINTTOFILE);
	      }
	      else
	        rwlerror(rwm,RWL_ERROR_INCORRECT_TYPE2, rwm->mxq->evar[l].stype, rwm->inam, "file");
	    }

	    bic(rwm->mflags,RWL_P_PRINTLINE);
	  }
#line 9485 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 562:
#line 5438 "rwlparser.y" /* yacc.c:1646  */
    {  
	    sb4 l;
	    /* lookup the file and check it is a file */
	    rwm->filvarn = RWL_VAR_NOTFOUND;
	    rwm->filenam = 0;
	    l = rwlfindvar2(rwm->mxq, rwm->inam, RWL_VAR_NOGUESS, rwm->codename);
	    if (l>=0)
	    {
	      if (rwm->mxq->evar[l].vtype == RWL_TYPE_FILE)
	      {
		rwm->filvarn = l;
		rwm->filenam = rwm->inam;
		bis(rwm->mflags,RWL_P_PRINTTOFILE);
	      }
	      else
	        rwlerror(rwm,RWL_ERROR_INCORRECT_TYPE2, rwm->mxq->evar[l].stype, rwm->inam, "file");
	    }
	    bis(rwm->mflags,RWL_P_PRINTLINE);

	  }
#line 9510 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 563:
#line 5462 "rwlparser.y" /* yacc.c:1646  */
    {  
	    bic(rwm->mflags,RWL_P_PRINTLINE);
	    bic(rwm->mflags,RWL_P_PRINTTOFILE);
	  }
#line 9519 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 564:
#line 5467 "rwlparser.y" /* yacc.c:1646  */
    {  
	    bis(rwm->mflags,RWL_P_PRINTLINE);
	    bic(rwm->mflags,RWL_P_PRINTTOFILE);
	  }
#line 9528 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 566:
#line 5475 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->mflags,RWL_P_PRINTBLANK); }
#line 9534 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 568:
#line 5480 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwl_estack *estk;
	      if ((estk = rwlexprfinish(rwm)))
	      {
		if (rwm->codename)
		{
		  if (bit(rwm->mflags, RWL_P_PRINTTOFILE))
		  { /* write to file - give file name and location guess */
		    if (bit(rwm->mflags,RWL_P_PRINTBLANK))
		      rwlcodeaddppu(rwm, RWL_CODE_WRITEBLANK, estk, rwm->filenam, (ub4)rwm->filvarn);
		    else
		      rwlcodeaddppu(rwm, RWL_CODE_WRITE, estk, rwm->filenam, (ub4)rwm->filvarn);
		    bic(rwm->mflags,RWL_P_PRINTBLANK);
		  }
		  else
		  {
		    if (bit(rwm->mflags,RWL_P_PRINTBLANK))
		      rwlcodeaddp(rwm, RWL_CODE_PRINTBLANK, estk);
		    else
		      rwlcodeaddp(rwm, RWL_CODE_PRINT, estk);
		    bic(rwm->mflags,RWL_P_PRINTBLANK);
		  }
		}
		else // directly during parse
		{
		  if (!bit(rwm->m2flags, RWL_P2_NOEXEC))
		  {
		    rwldummyonbad(rwm->mxq, rwm->defdb);
		    if (bit(rwm->mflags, RWL_P_PRINTTOFILE))
		    { 
		      // write to file, check it is open
		      if (bit(rwm->mxq->evar[rwm->filvarn].num.valflags, RWL_VALUE_FILE_OPENW))
		      {
			if (bit(rwm->mflags,RWL_P_PRINTBLANK))
			  fputs(" ", rwm->mxq->evar[rwm->filvarn].num.vptr);
			rwlexprprint(estk,  &rwm->loc, rwm->mxq, rwm->mxq->evar[rwm->filvarn].num.vptr);
		      }
		      else
		      {
			if (!bit(rwm->mxq->evar[rwm->filvarn].num.valflags, RWL_VALUE_FILEREPNOTOPEN))
			  rwlerror(rwm,RWL_ERROR_WRITE_NOT_OPEN, rwm->mxq->evar[rwm->filvarn].vname);
			bis(rwm->mxq->evar[rwm->filvarn].num.valflags, RWL_VALUE_FILEREPNOTOPEN);
		      }
		      bic(rwm->mflags,RWL_P_PRINTBLANK);
		    }
		    else
		    {
		      if (bit(rwm->mflags,RWL_P_PRINTBLANK))
			fputs(" ", stdout);
		      bic(rwm->mflags,RWL_P_PRINTBLANK);
		      rwlexprprint(estk, &rwm->loc, rwm->mxq, stdout);
		    }
		  }
		  rwlexprdestroy(rwm, estk);
		}
	      }
	    }
#line 9596 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 569:
#line 5541 "rwlparser.y" /* yacc.c:1646  */
    {
	      if (bit(rwm->mflags,RWL_P_PRINTLINE))
	      { 
		if (rwm->codename)
		{
		  if (bit(rwm->mflags, RWL_P_PRINTTOFILE))
		    rwlcodeaddpu(rwm, RWL_CODE_NEWLINEFILE, rwm->filenam, (ub4)rwm->filvarn);
		  else
		    rwlcodeadd0(rwm, RWL_CODE_NEWLINE);
		}
		else // directly during parse
		if (!bit(rwm->m2flags, RWL_P2_NOEXEC))
		{
		  if (bit(rwm->mflags, RWL_P_PRINTTOFILE))
		  { 
		    // write to file, check it is open
		    if (bit(rwm->mxq->evar[rwm->filvarn].num.valflags, RWL_VALUE_FILE_OPENW))
		      fputs(bit(rwm->m4flags, RWL_P4_CRNLWRITELINE) ? "\r\n" : "\n", rwm->mxq->evar[rwm->filvarn].num.vptr);
		    else
		    {
		      if (!bit(rwm->mxq->evar[rwm->filvarn].num.valflags, RWL_VALUE_FILEREPNOTOPEN))
			rwlerror(rwm,RWL_ERROR_WRITE_NOT_OPEN, rwm->mxq->evar[rwm->filvarn].vname);
		      bis(rwm->mxq->evar[rwm->filvarn].num.valflags, RWL_VALUE_FILEREPNOTOPEN);
		    }
		  }
		  else
		    fputs(bit(rwm->m4flags, RWL_P4_CRNLWRITELINE) ? "\r\n" : "\n", stdout);
		}
	      }
	      bic(rwm->mflags,RWL_P_PRINTLINE|RWL_P_PRINTBLANK);
	    }
#line 9632 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 570:
#line 5576 "rwlparser.y" /* yacc.c:1646  */
    {
	      if (rwm->codename)
	      {
		;
	      }
	      else // directly during parse
	      {
		;
	      }
	    }
#line 9647 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 571:
#line 5591 "rwlparser.y" /* yacc.c:1646  */
    {
		rwl_estack *estk;
		switch (rwm->assignoper)
		{
		  case RWL_T_ASNSUB:
		    rwlexprpush(rwm, rwm->assignvar, RWL_STACK_ASNSUB);
		  break;
		  case RWL_T_ASNADD:
		    rwlexprpush(rwm, rwm->assignvar, RWL_STACK_ASNADD);
		  break;
		  case RWL_T_ASNBIS:
		    rwlexprpush(rwm, rwm->assignvar, RWL_STACK_ASNBIS);
		  break;
		  case RWL_T_ASNBIC:
		    rwlexprpush(rwm, rwm->assignvar, RWL_STACK_ASNBIC);
		  break;
		  case RWL_T_ASSIGN:
		    rwlexprpush2(rwm, rwm->assignvar, RWL_STACK_ASN, 0);
		  break;
		  case RWL_T_LESSEQ:
		  case RWL_T_GREATEQ:
		  case RWL_T_RSHIFTASSIGN:
		  case RWL_T_PIPETO:
		  case RWL_T_PIPEFROM:
		    rwlexprpush2(rwm, rwm->assignvar, RWL_STACK_ASN, rwm->assignoper);
		  break;
		  case RWL_T_APPEND:
		    rwlexprpush(rwm, rwm->assignvar, RWL_STACK_APP);
		  break;
		  default:
		    rwlsevere(rwm, "[rwlparser-wrongassign:%s]", rwm->assignvar);
		    rwlexprclear(rwm);
		  break;
		} 
	        rwm->assignoper = 0;
		if ((estk = rwlexprfinish(rwm)))
		{
		  if (rwm->codename)
		    rwlcodeaddp(rwm, RWL_CODE_ASSIGN, estk);
		  else
		  {
		    rwldummyonbad(rwm->mxq, rwm->defdb);
		    if (!bit(rwm->m2flags, RWL_P2_NOEXEC))
		      rwlexpreval(estk, &rwm->loc, rwm->mxq, 0);
		    rwlexprdestroy(rwm, estk);
		  }
		}
	      }
#line 9700 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 572:
#line 5640 "rwlparser.y" /* yacc.c:1646  */
    { 
		rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 9710 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 574:
#line 5650 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_MISSING_SEMICOLON);
	    yyerrok;
	  }
#line 9719 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 575:
#line 5657 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_ASSIGN; }
#line 9725 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 576:
#line 5658 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_GREATEQ; }
#line 9731 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 577:
#line 5659 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_RSHIFTASSIGN; }
#line 9737 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 578:
#line 5660 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_LESSEQ; }
#line 9743 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 579:
#line 5661 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_PIPEFROM; }
#line 9749 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 580:
#line 5662 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_PIPETO; }
#line 9755 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 582:
#line 5666 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_APPEND; }
#line 9761 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 583:
#line 5667 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_ASNADD; }
#line 9767 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 584:
#line 5668 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_ASNSUB; }
#line 9773 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 585:
#line 5669 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_ASNBIS; }
#line 9779 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 586:
#line 5670 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_ASNBIC; }
#line 9785 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 587:
#line 5677 "rwlparser.y" /* yacc.c:1646  */
    {
		rwl_estack *estk;
		rwlexprpush(rwm, rwm->assignvar, RWL_STACK_ASN);
		estk = rwlexprfinish(rwm);
		rwlcodeaddp(rwm, RWL_CODE_ASSIGN, estk);
	      }
#line 9796 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 588:
#line 5684 "rwlparser.y" /* yacc.c:1646  */
    {
		rwl_estack *estk;
		sb4 l;
		l = rwlfindvar2(rwm->mxq, rwm->assignvar, RWL_VAR_NOGUESS, rwm->codename);
		if (l>0)
		{
		  switch (rwm->mxq->evar[l].vtype)
		  {
		    case RWL_TYPE_INT:
		      break;
		    default:
		      rwlerror(rwm, RWL_ERROR_COUNTER_LOOP_NOT_INT
			, rwm->assignvar, rwm->mxq->evar[l].stype);
		  }
		}
		// expression2 on stack - turn into IF
		rwlexprpush(rwm, rwm->assignvar, RWL_STACK_VAR);
		rwlexprpush(rwm,0,RWL_STACK_GREATEREQ);
		estk = rwlexprfinish(rwm);
		rwlcodeaddp(rwm, RWL_CODE_IF, estk); // increments rsldepth
		rwm->loopvar[rwm->rsldepth] = rwm->assignvar;
		rwm->rslpcbrk[rwm->rsldepth] = 0;
		rwm->rsllityp[rwm->rsldepth] = RWL_LI_DOTDOT;
		bis(rwm->rslflags[rwm->rsldepth], RWL_RSLFLAG_MAYBRK);
	      }
#line 9826 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 590:
#line 5710 "rwlparser.y" /* yacc.c:1646  */
    {
		rwlcodeadd0(rwm, RWL_CODE_LIBEG);
		rwm->rsllihead[rwm->rsldepth] 
		  = rwm->rsllitail[rwm->rsldepth]
		  = (rwl_lilist *) rwlalloc(rwm, sizeof(rwl_lilist));
		rwm->loopvar[rwm->rsldepth] = rwm->assignvar;
		rwm->rslpcbrk[rwm->rsldepth] = 0;
		rwm->rsllityp[rwm->rsldepth] = RWL_LI_COMMA;
		bis(rwm->rslflags[rwm->rsldepth], RWL_RSLFLAG_MAYBRK);
		rwlexprpush(rwm, rwm->assignvar, RWL_STACK_ASN);
		rwm->rsllitail[rwm->rsldepth]->listk = rwlexprfinish(rwm);
	      }
#line 9843 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 592:
#line 5724 "rwlparser.y" /* yacc.c:1646  */
    { 
		rwlerror(rwm, RWL_ERROR_LOOP);
		rwlexprclear(rwm);
		// prevent attempting endloop code generation
		rwm->loopvar[rwm->rsldepth] = 0;
		rwm->rsllityp[rwm->rsldepth] = RWL_LI_BAD;
		bic(rwm->rslflags[rwm->rsldepth], RWL_RSLFLAG_MAYBRK);
		yyerrok;
	      }
#line 9857 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 595:
#line 5743 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwl_lilist *thisli = rwlalloc(rwm, sizeof(rwl_lilist));
	    rwlexprpush(rwm, rwm->loopvar[rwm->rsldepth], RWL_STACK_ASN);
	    thisli->listk = rwlexprfinish(rwm);
	    rwm->rsllitail[rwm->rsldepth]->linxt = thisli;
	    rwm->rsllitail[rwm->rsldepth] = thisli;
	  }
#line 9869 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 598:
#line 5763 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 9878 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 599:
#line 5768 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 9886 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 602:
#line 5777 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "execute") ; }
#line 9892 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 605:
#line 5784 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "loop") ; }
#line 9898 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 608:
#line 5791 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "if") ; yyerrok; }
#line 9904 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 611:
#line 5798 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (0 != rwlstrcmp(rwm->inam, rwm->sqname))
	      rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END2, "sql", rwm->sqname);
	  }
#line 9913 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 612:
#line 5803 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END2, "sql", rwm->sqname) ; yyerrok; }
#line 9919 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 614:
#line 5809 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (!rwm->rsldepth)
	      rwlsevere(rwm, "[rwlparser-rsldependwhile1]");
	    else
	    {
	      // -1 because we havent put the FORLEND yet
	      if (bit(rwm->rslflags[rwm->rsldepth-1], RWL_RSLFLAG_WHILOP))
		rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "loop");
	    }
	  }
#line 9934 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 615:
#line 5820 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (!rwm->rsldepth)
	      rwlsevere(rwm, "[rwlparser-rsldependwhile2]");
	    else
	    {
	      // -1 because we havent put the FORLEND yet
	      if (!bit(rwm->rslflags[rwm->rsldepth-1], RWL_RSLFLAG_WHILOP))
		rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "while");
	    }
	  }
#line 9949 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 616:
#line 5831 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (bit(rwm->rslflags[rwm->rsldepth-1], RWL_RSLFLAG_WHILOP))
	      rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "loop") ;
	    else
	      rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "while") ;
	    yyerrok;
	  }
#line 9961 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 617:
#line 5842 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->cursorand = 0;
	  }
#line 9969 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 618:
#line 5847 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->cursorand = rwlexprfinish(rwm);
	  }
#line 9977 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 620:
#line 5854 "rwlparser.y" /* yacc.c:1646  */
    {
	    char plsword[6]; /* check for "begin" or "decla" or "--" */
	    ub4 sb, pb, len;
	    if( bit(rwm->m2flags, RWL_P2_SOMEEXPFAIL)) // the concatenation was wrong
	    {
	      bis(rwm->m2flags, RWL_P2_BADSQLFILTXT);
	      rwm->sqlbuffer[0] = 0;
	      len = rwm->sqllen = 0;
	    } 
	    else
	    {
	      len = rwm->sqllen = rwlstrlen(rwm->pval.sval);
	      if (len>=RWL_MAXSQL)
	      {
		rwlsevere(rwm, "[rwlparser-sqllongstring:%d;%d]", len, RWL_MAXSQL);
		len = rwm->sqllen = 0;
		rwm->sqlbuffer[0] = 0;
	      }
	      else
	      {
		rwlstrcpy(rwm->sqlbuffer,rwm->pval.sval);
	      }
	    }
	    bic(rwm->mflags, RWL_P_SQLWASPLS); /* not PL/SQL */

	    // skip blanks before comparison
	    for (sb=0; sb<len; sb++)
	    {
	      switch (rwm->sqlbuffer[sb])
	      {
		case ' ':
		case '\n':
		case '\r':
		case '\t':
		  break;

		default:
		  goto nonblankfoundinstring;
	      }
	    }
	    nonblankfoundinstring: // sb now is index of first non blank

	    /* turn to lowercase for comparison */
	    for (pb=0; pb<sizeof(plsword) ; sb++, pb++)
	      plsword[pb] = tolower(rwm->sqlbuffer[sb]);
	    plsword[sizeof(plsword)-1] = 0;
	    /* and compare */
	    if ( !strcmp(plsword,"begin") 
	      || !strcmp(plsword,"decla") 
	      || !strncmp(plsword,"--",2) 
	      )
	      bis(rwm->mflags,RWL_P_SQLWASPLS); 
	    rwlerror(rwm, RWL_ERROR_WARN_COMPILETIME_SQLTEXT, rwm->sqname);
	  }
#line 10036 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 621:
#line 5911 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->loc.errlin = 0;
	    rwm->sqlfile = 0; /* not from a file */
	  }
#line 10045 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 622:
#line 5916 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprbeg(rwm);
	  }
#line 10053 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 623:
#line 5920 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwl_estack *estk;
	    FILE *f ;
	    ub8 len;
	    char etxt[100];
	    if ((estk = rwlexprfinish(rwm)))
	    {
	      {
		text *rfn;
		rwlexpreval(estk, &rwm->loc, rwm->mxq, &rwm->pval);
		rfn = rwlenvexp(rwm->mxq, &rwm->loc, rwm->pval.sval);
		f = rwlfopen(rwm->mxq, &rwm->loc, rfn,"r");
		if (!f)
		{
		  if (0!=rwlstrerror(errno, etxt, sizeof(etxt)))
		    strcpy(etxt,"unknown");
		  rwlerror(rwm, RWL_ERROR_CANNOTOPEN_FILEREAD, rfn, etxt);
		  rwm->sqlbuffer[0] = 0; // will surely lead so errors later
		  bis(rwm->m2flags, RWL_P2_BADSQLFILTXT);
		}
		else
		{
		  len = fread(rwm->sqlbuffer, 1, RWL_MAXSQL-1, f);
		  if (ferror(f))
		  {
		    if (0!=rwlstrerror(errno, etxt, sizeof(etxt)))
		      strcpy(etxt,"unknown");
		    rwlerror(rwm, RWL_ERROR_CANNOTREAD_FILE, rfn, etxt);
		    rwm->sqlbuffer[0] = 0; 
		    bis(rwm->m2flags, RWL_P2_BADSQLFILTXT);
		  }
		  else if (!feof(f))
		  {
		    rwlsevere(rwm, "[rwlparser-sqllong:%d]", RWL_MAXSQL);
		    rwm->sqlbuffer[RWL_MAXSQL] = 0; 
		    bis(rwm->m2flags, RWL_P2_BADSQLFILTXT);
		  }
		  else
		  {
		    // file was read OK
		    char plsword[6]; /* check for "begin" or "decla" or "--" */
		    ub4 sb, pb;
		    rwm->sqlbuffer[len] = 0;
		    rwm->sqllen = len;
		    rwm->sqlfile = rwlstrdup(rwm, rfn); /* save file name for error printing */
		    bic(rwm->mflags, RWL_P_SQLWASPLS); /* not PL/SQL */

		    // skip blanks before comparison
		    for (sb=0; sb<len; sb++)
		    {
		      switch (rwm->sqlbuffer[sb])
		      {
		        case ' ':
			case '\n':
			case '\r':
			case '\t':
			  break;

			default:
			  goto nonblankfound;
		      }
		    }
		    nonblankfound: // sb now is index of first non blank

		    /* turn to lowercase for comparison */
		    for (pb=0; pb<sizeof(plsword) ; sb++, pb++)
		      plsword[pb] = tolower(rwm->sqlbuffer[sb]);
		    plsword[sizeof(plsword)-1] = 0;
		    /* and compare */
		    if ( !strcmp(plsword,"begin") 
		      || !strcmp(plsword,"decla") 
		      || !strncmp(plsword,"--",2) 
		      )
		      bis(rwm->mflags,RWL_P_SQLWASPLS); 
		  }
		  fclose(f); // just ignore potential error
		}
	      }
	    }
	  }
#line 10138 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 624:
#line 6003 "rwlparser.y" /* yacc.c:1646  */
    {
	    sb4 l;
	    /* lookup the file and check it is a file */
	    rwm->filvarn = RWL_VAR_NOTFOUND;
	    rwm->filenam = 0;
	    l = rwlfindvar2(rwm->mxq, rwm->inam, RWL_VAR_NOGUESS, rwm->codename);
	    if (l>=0)
	    {
	      if (rwm->mxq->evar[l].vtype == RWL_TYPE_FILE)
	      {
		rwm->filvarn = l;
		rwm->filenam = rwm->inam;
	      }
	      else
	        rwlerror(rwm,RWL_ERROR_INCORRECT_TYPE2, rwm->mxq->evar[l].stype, rwm->inam, "file");
	    }
	    // initialize identifier list
	    rwm->idlist = rwm->idtail = 0;
	  }
#line 10162 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 625:
#line 6023 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->filvarn>=0) // everything is good
	    {
	      if (rwm->codename)
		rwlcodeaddpup(rwm, RWL_CODE_READLINE, rwm->filenam
		  , rwm->filvarn, rwm->idlist);
	      else
	      if (!bit(rwm->m2flags, RWL_P2_NOEXEC))
	      {
		// read if the file is open
		if (bit(rwm->mxq->evar[rwm->filvarn].num.valflags, RWL_VALUE_FILE_OPENR))
		  rwlreadline(rwm->mxq, 0, rwm->mxq->evar+rwm->filvarn, rwm->idlist, 0);
		else
		{
		  if (!bit(rwm->mxq->evar[rwm->filvarn].num.valflags, RWL_VALUE_FILEREPNOTOPEN))
		    rwlerror(rwm,RWL_ERROR_WRITE_NOT_OPEN, rwm->mxq->evar[rwm->filvarn].vname);
		  bis(rwm->mxq->evar[rwm->filvarn].num.valflags, RWL_VALUE_FILEREPNOTOPEN);
		}
		// TODO rwlfree of idlist
	      }
	    }
	  }
#line 10189 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 626:
#line 6047 "rwlparser.y" /* yacc.c:1646  */
    { 
		rwlerror(rwm, RWL_ERROR_BAD_READLINE);
		yyerrok;
	      }
#line 10198 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 627:
#line 6054 "rwlparser.y" /* yacc.c:1646  */
    { rwm->reg_estk = rwm->str_estk = rwm->sub_estk = 0; }
#line 10204 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 628:
#line 6056 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->reg_estk = rwlexprfinish(rwm);
	  }
#line 10212 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 629:
#line 6060 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->str_estk = rwlexprfinish(rwm);
	  }
#line 10220 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 630:
#line 6064 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->sub_estk = rwlexprfinish(rwm);
	  }
#line 10228 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 631:
#line 6068 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->reg_estk && rwm->str_estk && rwm->sub_estk) 
	    {
	      sb4 l;
	      l = rwlfindvar2(rwm->mxq, rwm->inam, RWL_VAR_NOGUESS, rwm->codename);
	      if (l>=0)
	      {
		// must be string
		if (RWL_TYPE_STR != rwm->mxq->evar[l].vtype)
		  rwlerror(rwm,RWL_ERROR_INCORRECT_TYPE2, rwm->mxq->evar[l].stype, rwm->inam, "regexsub");
		else
		{
#if RWL_OS != RWL_WINDOWS
		  if (rwm->codename)
		    rwlcodeaddpuppp(rwm
		    , bit(rwm->m2flags, RWL_P2_REGEXSUBG) ? RWL_CODE_REGEXSUBG : RWL_CODE_REGEXSUB
		    , rwm->inam, l, rwm->reg_estk , rwm->str_estk, rwm->sub_estk);
		  else
		  if (!bit(rwm->m2flags, RWL_P2_NOEXEC))
		  {
		    rwlexpreval(rwm->reg_estk, &rwm->loc, rwm->mxq, &rwm->mxq->xqnum);
		    rwlexpreval(rwm->str_estk, &rwm->loc, rwm->mxq, &rwm->mxq->xqnum2);
		    rwlexpreval(rwm->sub_estk, &rwm->loc, rwm->mxq, &rwm->mxq->xqnum3);
		    rwlregexsub(rwm->mxq, 0
		      , rwm->mxq->xqnum.sval
		      , rwm->mxq->xqnum2.sval
		      , rwm->mxq->xqnum3.sval
		      , l, rwm->inam
		      , rwm->m2flags&RWL_P2_REGEXSUBG
		      , 0);
		  }
#else
		  rwlerror(rwm, RWL_ERROR_NOT_ON_WINDOWS, "regular expression");
#endif
		}
	      }
	    }
	  }
#line 10271 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 632:
#line 6107 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprclear(rwm);
	    rwlerror(rwm, RWL_ERROR_BAD_REGEX);
	    yyerrok;
	  }
#line 10281 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 633:
#line 6116 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->m2flags, RWL_P2_REGEXSUBG);
	  }
#line 10289 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 634:
#line 6120 "rwlparser.y" /* yacc.c:1646  */
    {
	    bis(rwm->m2flags, RWL_P2_REGEXSUBG);
	  }
#line 10297 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 635:
#line 6126 "rwlparser.y" /* yacc.c:1646  */
    { rwm->reg_estk = rwm->str_estk = 0; }
#line 10303 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 636:
#line 6128 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->reg_estk = rwlexprfinish(rwm);
	  }
#line 10311 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 637:
#line 6132 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->str_estk = rwlexprfinish(rwm);
	    rwm->idlist = rwm->idtail = 0;
	  }
#line 10320 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 638:
#line 6137 "rwlparser.y" /* yacc.c:1646  */
    {
#if RWL_OS != RWL_WINDOWS
	    if (rwm->reg_estk && rwm->str_estk) 
	    {
	      if (rwm->codename)
		rwlcodeaddppp(rwm, RWL_CODE_REGEXTRACT, rwm->reg_estk , rwm->str_estk, rwm->idlist);
	      else
	      {
	        rwl_idlist *fid = rwm->idlist;
		if (!bit(rwm->m2flags, RWL_P2_NOEXEC))
		{
		  rwlexpreval(rwm->reg_estk, &rwm->loc, rwm->mxq, &rwm->mxq->xqnum);
		  rwlexpreval(rwm->str_estk, &rwm->loc, rwm->mxq, &rwm->mxq->xqnum2);
		  rwlregextract(rwm->mxq, 0
		    , rwm->mxq->xqnum.sval
		    , rwm->mxq->xqnum2.sval
		    , rwm->idlist, 0);
		}
		// free idlist and names
	        while (rwm->idlist)
		{
		  fid = rwm->idlist;
		  rwm->idlist = rwm->idlist->idnxt;
		  rwlfree(rwm, fid->idnam);
		  rwlfree(rwm, fid);
		}
	      }
	    }
#else
		  rwlerror(rwm, RWL_ERROR_NOT_ON_WINDOWS, "regular expression");
#endif
	  }
#line 10357 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 639:
#line 6171 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprclear(rwm);
	    rwlerror(rwm, RWL_ERROR_BAD_REGEX);
	    yyerrok;
	  }
#line 10367 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 640:
#line 6180 "rwlparser.y" /* yacc.c:1646  */
    { rwm->reg_estk = rwm->str_estk = 0; }
#line 10373 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 641:
#line 6182 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->reg_estk = rwlexprfinish(rwm);
	  }
#line 10381 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 642:
#line 6186 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->str_estk = rwlexprfinish(rwm);
	    rwm->idlist = rwm->idtail = 0;
	  }
#line 10390 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 643:
#line 6191 "rwlparser.y" /* yacc.c:1646  */
    {
#if RWL_OS != RWL_WINDOWS
	    if (rwm->reg_estk && rwm->str_estk) 
	    {
	      if (rwm->codename)
		rwlcodeaddppp(rwm, RWL_CODE_REGEX, rwm->reg_estk , rwm->str_estk, rwm->idlist);
	      else
	      {
	        rwl_idlist *fid;
		if (!bit(rwm->m2flags, RWL_P2_NOEXEC))
		{
		  rwlexpreval(rwm->reg_estk, &rwm->loc, rwm->mxq, &rwm->mxq->xqnum);
		  rwlexpreval(rwm->str_estk, &rwm->loc, rwm->mxq, &rwm->mxq->xqnum2);
		  rwlregex(rwm->mxq, 0
		    , rwm->mxq->xqnum.sval
		    , rwm->mxq->xqnum2.sval
		    , rwm->idlist, 0);
		}
		// free idlist and names
	        while (rwm->idlist)
		{
		  fid = rwm->idlist;
		  rwm->idlist = rwm->idlist->idnxt;
		  rwlfree(rwm, fid->idnam);
		  rwlfree(rwm, fid);
		}
	      }
	    }
#else
		  rwlerror(rwm, RWL_ERROR_NOT_ON_WINDOWS, "regular expression");
#endif
	  }
#line 10427 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 644:
#line 6225 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprclear(rwm);
	    rwlerror(rwm, RWL_ERROR_BAD_REGEX);
	    yyerrok;
	  }
#line 10437 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 647:
#line 6238 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwl_idlist *newid = rwlalloc(rwm, sizeof(rwl_idlist));
	    
	    newid->idnam = rwm->inam;
	    newid->idnum = rwlfindvar2(rwm->mxq, rwm->inam, RWL_VAR_NOGUESS, rwm->codename);
	    if (newid->idnum>=0)
	    {
	      // Exists, check the type is good
	      switch (rwm->mxq->evar[newid->idnum].vtype)
	      {
	        case RWL_TYPE_INT:
		case RWL_TYPE_DBL:
		case RWL_TYPE_STR:

		  if (!rwm->idlist) // the first
		  { 
		    rwm->idtail = rwm->idlist = newid;
		  }
		  else // add to end of list
		  {
		    rwm->idtail->idnxt = newid;
		    rwm->idtail = newid;
		  }
		  break;

		default:
	          rwlerror(rwm,RWL_ERROR_INCORRECT_TYPE2
		    , rwm->mxq->evar[newid->idnum].stype, rwm->inam, "readline");
		  rwlfree(rwm, newid);
		  rwm->filvarn = RWL_VAR_INVALID; // continue parse, but avoid generation
	          break;
	      }
	    }
	    else
	    {
	      rwlfree(rwm,newid);
	      rwm->filvarn = RWL_VAR_INVALID; // continue parse, but avoid generation
	    }

	  }
#line 10482 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 648:
#line 6281 "rwlparser.y" /* yacc.c:1646  */
    {
		/* start a dummy assignment such that the system expression gets executed */
		rwm->assignvar = RWL_DUMMY_VAR;
		rwm->assignoper = RWL_T_ASSIGN;
		rwlexprbeg(rwm);
	      }
#line 10493 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 649:
#line 6290 "rwlparser.y" /* yacc.c:1646  */
    {
		rwl_estack *estk;
		if ((estk = rwlexprfinish(rwm)))
		{
		  if (rwm->codename)
		    rwlcodeaddp(rwm, RWL_CODE_ASSIGN, estk);
		  else
		  {
		    rwldummyonbad(rwm->mxq, rwm->defdb);
		    if (!bit(rwm->m2flags, RWL_P2_NOEXEC))
		      rwlexpreval(estk, &rwm->loc, rwm->mxq, 0);
		    rwlexprdestroy(rwm, estk);
		  }
		}
	      }
#line 10513 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 650:
#line 6315 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->threadlist)
	      rwlsevere(rwm, "[rwlparser-thrlistnotclean]");
	    if (!rwm->runloc.fname)
	    {
	      rwm->runloc.fname = rwlstrdup(rwm, rwm->loc.fname);
	      rwm->runloc.lineno = rwm->runloc.errlin = rwm->loc.lineno;
	    }
	    rwm->totthr = 0;
	  }
#line 10528 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 651:
#line 6327 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwl_thrinfo *next;
	    rwm->loc.errlin = rwm->lexlino;
	    if (bit(rwm->mxq->errbits, RWL_ERROR_STOP_BEFORE_RUN))
	      rwlerror(rwm, RWL_ERROR_DONTEXECUTE);
	    else
	      rwlrunthreads(rwm);
	    /* cleanup */
	    rwm->mythr = rwm->threadlist;
	    while (rwm->mythr)
	    {
	      next = rwm->mythr->next;
	      rwlfree(rwm, rwm->mythr);
	      rwm->mythr = next;
	    }
	    rwm->threadlist = rwm->mythr = 0;
	    rwm->loc.errlin = 0;
	  }
#line 10551 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 652:
#line 6346 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ILLEGAL_THREAD); yyerrok; }
#line 10557 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 657:
#line 6360 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->cqnstart = rwm->cqnstop = 0.0;
	    rwm->cqnnow = rwlclock(rwm->mxq,0);
	  }
#line 10566 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 658:
#line 6365 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwl_cinfo *cp;
	    sb4 l;
	    l = rwlfindvar(rwm->mxq, rwm->inam, RWL_VAR_NOGUESS);
	    if (l>=0 // variable exists
		  && ( RWL_TYPE_DB == rwm->mxq->evar[l].vtype) // is db
		  && ((cp = rwm->mxq->evar[l].vdata))
		  &&  RWL_DBPOOL_RETHRDED == cp->pooltype // of type cpool
		)
	    {
#ifdef RWL_USE_CQN
	      rwm->cqnat = rwm->inam;
#else
	      rwm->cqnat = 0;
#endif
	    }
	    else
	    {
	      rwlerror(rwm, RWL_ERROR_CQN_BAD_AT, rwm->inam);
	      rwm->cqnat = 0;
	    }
	    
	  }
#line 10594 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 659:
#line 6390 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->cqnstop = rwm->pval.dval;
	    if (rwm->cqnstop < rwm->cqnstart || rwm->cqnstop < rwm->cqnnow)
	    {
	      rwlerror(rwm, RWL_ERROR_CQN_STOP_BEFORE_START, rwm->cqnstop, rwm->cqnstart, rwm->cqnnow);
	      rwm->cqnat = 0;
	    }
	  }
#line 10607 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 660:
#line 6399 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (!rwm->cqnat)
	    {
	      // error above: make a thread that has 0 entries
	      rwlcodehead(rwm, 0);
	    }
	    else
	    {
	      ub4 rst;
	      rwl_estack *estk = 0;
	      rwl_value xnum = RWL_VALUE_ZERO;
	      text xbuf[RWL_PFBUF];
	      bis(rwm->m4flags, RWL_P4_PROCHASSQL);
	      rwlcodehead(rwm, 1);
	      // Wait until start time
	      xnum.dval = rwm->cqnstart;
	      xnum.ival = (sb8) xnum.dval;
	      xnum.vtype = RWL_TYPE_DBL;
	      rwlsnpdformat(rwm, xbuf, RWL_PFBUF, xnum.dval);
	      xnum.sval = xbuf;
	      xnum.isnull = 0;
	      xnum.vsalloc = RWL_SVALLOC_FIX;
	      xnum.slen = RWL_PFBUF;
	      rwlexprbeg(rwm);
	      rwlexprpush(rwm, &xnum, RWL_STACK_NUM);
	      estk = rwlexprfinish(rwm);
	      rwlcodeaddp(rwm, RWL_CODE_SUSPEND, estk);
	      // Set the cqn to expire 1 minute after user tells us
	      // Note that it will in any case be removed when we 
	      // disconnect from the threads dedicated database used
	      rst = (ub4) floor(rwm->cqnstop - rwm->cqnstart)+60;
	      rwlcodeaddu(rwm, RWL_CODE_CQNREG, rst);
	      /* 
		 This is the PC of RWL_CODE_CQNREG
		 Note that we also need to know at which PC the RWL_CODE_CQNREG
		 is relative to RWL_CODE_SQLHED which was generated
		 in rwlcodehead above. At present, the distance is 2 as we have
		 these:

		 RWL_CODE_SQLHEAD
		 RWL_CODE_SUSPEND
		 RWL_CODE_CQNREG

		 If you make changes here, also change rwlcqncall
	      */
	      rwm->cqnreg = rwm->ccount - 1;
	    }
	    rwm->supsemerr = RWL_SUPSEM_CQNSTART;
	    rwm->rslpcbrk[rwm->rsldepth] = 0;
	    rwm->mythr->dbnam = rwm->cqnat;
	  }
#line 10663 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 661:
#line 6451 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->cqnat) // no errors above
	    {
	      rwl_estack *estk = 0;
	      rwl_value xnum = RWL_VALUE_ZERO;
	      text xbuf[RWL_PFBUF];
	      xnum.dval = rwm->cqnstop;
	      xnum.ival = (sb8) xnum.ival;
	      xnum.vtype = RWL_TYPE_DBL;
	      rwlsnpdformat(rwm, xbuf, RWL_PFBUF, xnum.dval);
	      xnum.sval = xbuf;
	      xnum.isnull = 0;
	      xnum.vsalloc = RWL_SVALLOC_FIX;
	      xnum.slen = RWL_PFBUF;
	      rwlexprbeg(rwm);
	      rwlexprpush(rwm, &xnum, RWL_STACK_NUM);
	      estk = rwlexprfinish(rwm);
	      rwlcodeadd0(rwm, RWL_CODE_CQNREGDONE); // releases the mutex
	      rwlcodeaddp(rwm, RWL_CODE_SUSPEND, estk); // sleep until stop time
	      rwlcodeadd0(rwm, RWL_CODE_CQNUNREG); // will unregister
	      rwlcodetail(rwm);
	    }
	    bic(rwm->m4flags, RWL_P4_PROCHASSQL);
	  }
#line 10692 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 662:
#line 6476 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlcodehead(rwm, 0);
	    if (rwm->cqnat) // No error above
	    {
	      if (rwm->cqnreg>rwm->ccount)
	      {
		rwlsevere(rwm, "[rwlparser-finishcqn1:%s;%d;%d]"
		  , rwm->codename, rwm->cqnreg, rwm->ccount);
	      }
	      else if (rwm->code[rwm->cqnreg].ctyp != RWL_CODE_CQNREG)
	      {
		/* only show if not running out of space */
		if (rwm->ccount < rwm->maxcode-1)
		  rwlsevere(rwm, "[rwlparser-finishcqn2:%s;%d;%d]"
		  , rwm->codename, rwm->cqnreg, rwm->code[rwm->cqnreg].ctyp);
	      }
	      else
	      {
		// Update fields at the PC of RWL_CODE_CQNREG
		rwm->code[rwm->cqnreg].ceint6 = rwm->codeguess;
		rwm->code[rwm->cqnreg].ceptr1 = rwm->codename;
	      }
	      rwlcodeaddu(rwm, RWL_CODE_CQNISCB, 1); // Is in callback
	    }
	    rwm->supsemerr = RWL_SUPSEM_CQNTHEN;
	    rwm->rslpcbrk[rwm->rsldepth] = 0;
	  }
#line 10724 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 663:
#line 6504 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlcodeaddu(rwm, RWL_CODE_CQNISCB, 0); // Is in callback
	    rwlcodetail(rwm);
	  }
#line 10733 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 667:
#line 6515 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "querynotification");
	    yyerrok;
	  }
#line 10742 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 669:
#line 6524 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->cqnstart = rwm->pval.dval;
	  }
#line 10750 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 670:
#line 6531 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->m4flags, RWL_P4_PROCHASSQL);
	    if (rwm->pval.ival < 0)
	    {
	      rwlerror(rwm,RWL_ERROR_THRCOUNT_NEGATIVE, rwm->pval.ival);
	      // Just make a thread that has 0 entries
	      rwlcodehead(rwm, 0);
	    }
	    else
	    {
	      rwlcodehead(rwm, (ub4)rwm->pval.ival);
	    }
	    rwm->supsemerr = RWL_SUPSEM_THREAD;
	    rwm->rslpcbrk[rwm->rsldepth] = 0;
	  }
#line 10770 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 671:
#line 6549 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlcodetail(rwm);
	  }
#line 10778 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 673:
#line 6554 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ILLEGAL_THREAD); yyerrok; }
#line 10784 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 675:
#line 6559 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->mythr->dbnam = rwm->inam;
	  }
#line 10792 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 678:
#line 6568 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "threads") ; }
#line 10798 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 681:
#line 6576 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "run") ; }
#line 10804 "rwlparser.tab.c" /* yacc.c:1646  */
    break;


#line 10808 "rwlparser.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (rwm, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (rwm, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, rwm);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, rwm);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (rwm, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, rwm);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, rwm);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
