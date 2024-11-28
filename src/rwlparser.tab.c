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
#line 161 "rwlparser.y" /* yacc.c:339  */

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
    RWL_T_PROCEDURENAME = 264,
    RWL_T_PRINT = 265,
    RWL_T_PRINTLINE = 266,
    RWL_T_PRINTVAR = 267,
    RWL_T_SHARDKEY = 268,
    RWL_T_SUPERSHK = 269,
    RWL_T_OCISECONDS = 270,
    RWL_T_PROCEDURE = 271,
    RWL_T_BIND = 272,
    RWL_T_DEFINE = 273,
    RWL_T_STRING = 274,
    RWL_T_INTEGER = 275,
    RWL_T_END = 276,
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
#line 479 "rwlparser.y" /* yacc.c:355  */

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
#define YYLAST   5883

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  187
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  300
/* YYNRULES -- Number of rules.  */
#define YYNRULES  686
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1255

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
       0,   541,   541,   548,   552,   554,   553,   569,   570,   571,
     573,   576,   583,   585,   602,   601,   611,   610,   619,   618,
     628,   627,   637,   642,   651,   652,   656,   655,   662,   667,
     675,   676,   680,   679,   687,   686,   759,   764,   765,   777,
     778,   781,   782,   785,   795,   800,   808,   821,   852,   863,
     875,   874,   890,   900,   899,   917,   927,   937,   947,   960,
     961,   964,   972,   982,   993,  1008,  1009,  1013,  1014,  1015,
    1018,  1042,  1066,  1078,  1080,  1079,  1092,  1093,  1099,  1098,
    1126,  1133,  1140,  1141,  1145,  1146,  1149,  1162,  1161,  1213,
    1225,  1224,  1245,  1250,  1257,  1262,  1269,  1354,  1355,  1359,
    1368,  1369,  1373,  1374,  1377,  1378,  1379,  1383,  1384,  1388,
    1416,  1418,  1420,  1422,  1437,  1442,  1447,  1455,  1456,  1458,
    1460,  1479,  1481,  1480,  1496,  1495,  1511,  1510,  1526,  1569,
    1583,  1597,  1611,  1623,  1627,  1628,  1629,  1630,  1631,  1632,
    1633,  1634,  1635,  1636,  1637,  1638,  1639,  1640,  1641,  1643,
    1645,  1647,  1649,  1650,  1653,  1656,  1657,  1661,  1666,  1667,
    1668,  1670,  1672,  1673,  1675,  1686,  1697,  1701,  1707,  1711,
    1717,  1721,  1727,  1732,  1736,  1744,  1742,  1769,  1773,  1777,
    1783,  1789,  1793,  1794,  1798,  1799,  1803,  1808,  1809,  1810,
    1815,  1816,  1817,  1818,  1819,  1823,  1824,  1825,  1826,  1830,
    1831,  1832,  1835,  1836,  1837,  1841,  1842,  1843,  1844,  1845,
    1846,  1850,  1851,  1852,  1856,  1857,  1861,  1862,  1866,  1867,
    1871,  1873,  1872,  1890,  1892,  1891,  1907,  1909,  1918,  1908,
    1933,  1934,  1938,  1939,  1949,  1950,  1954,  1962,  1965,  1964,
    1971,  1974,  1973,  1977,  1979,  1981,  1983,  1986,  1992,  2021,
    2036,  2049,  2051,  2052,  2056,  2058,  2062,  2064,  2069,  2068,
    2075,  2074,  2086,  2091,  2090,  2098,  2102,  2126,  2152,  2150,
    2178,  2176,  2286,  2295,  2294,  2298,  2297,  2302,  2308,  2307,
    2317,  2316,  2325,  2338,  2343,  2337,  2371,  2379,  2384,  2378,
    2413,  2420,  2436,  2435,  2448,  2464,  2475,  2481,  2487,  2499,
    2511,  2521,  2531,  2530,  2543,  2547,  2552,  2556,  2563,  2579,
    2581,  2583,  2583,  2584,  2587,  2589,  2591,  2588,  2593,  2597,
    2596,  2711,  2744,  2752,  2777,  2751,  2828,  2829,  2830,  2831,
    2833,  2834,  2842,  2843,  2851,  2852,  2861,  2864,  2863,  2872,
    2874,  2882,  2890,  2899,  2907,  2909,  2916,  2917,  2928,  2964,
    3001,  3042,  3059,  3041,  3100,  3107,  3114,  3152,  3241,  3240,
    3272,  3273,  3281,  3280,  3328,  3330,  3329,  3339,  3490,  3489,
    3637,  3643,  3646,  3662,  3666,  3670,  3677,  3678,  3682,  3682,
    3696,  3696,  3712,  3712,  3728,  3728,  3742,  3742,  3773,  3774,
    3775,  3778,  3784,  3783,  3793,  3792,  3810,  3809,  3857,  3872,
    3881,  3856,  3918,  3926,  3927,  3927,  3940,  3939,  3946,  3947,
    3948,  3954,  3955,  3959,  3963,  3971,  3975,  3979,  3987,  3988,
    3994,  4000,  4002,  4005,  4006,  4011,  4010,  4112,  4114,  4113,
    4168,  4172,  4176,  4177,  4181,  4196,  4205,  4220,  4229,  4233,
    4239,  4256,  4263,  4273,  4274,  4275,  4279,  4280,  4296,  4306,
    4312,  4320,  4326,  4334,  4340,  4348,  4353,  4360,  4361,  4362,
    4366,  4367,  4366,  4377,  4381,  4382,  4381,  4391,  4398,  4399,
    4402,  4402,  4483,  4481,  4495,  4572,  4669,  4670,  4674,  4675,
    4678,  4679,  4682,  4683,  4686,  4690,  4694,  4698,  4717,  4723,
    4725,  4728,  4729,  4738,  4739,  4744,  4743,  4752,  4762,  4763,
    4767,  4767,  4769,  4768,  4777,  4776,  4780,  4787,  4788,  4792,
    4792,  4794,  4793,  4800,  4799,  4803,  4812,  4908,  4913,  4918,
    4919,  4922,  4939,  4956,  4973,  4996,  4996,  5027,  5048,  5048,
    5071,  5070,  5086,  5085,  5101,  5100,  5117,  5118,  5121,  5123,
    5121,  5177,  5208,  5207,  5244,  5245,  5253,  5252,  5276,  5277,
    5281,  5280,  5319,  5318,  5341,  5341,  5368,  5369,  5372,  5393,
    5415,  5439,  5444,  5452,  5453,  5453,  5457,  5518,  5553,  5568,
    5617,  5626,  5627,  5635,  5636,  5637,  5638,  5639,  5640,  5643,
    5644,  5645,  5646,  5647,  5648,  5655,  5662,  5653,  5688,  5688,
    5701,  5714,  5715,  5719,  5732,  5733,  5740,  5745,  5752,  5753,
    5754,  5759,  5760,  5761,  5766,  5767,  5768,  5773,  5774,  5775,
    5780,  5785,  5786,  5797,  5808,  5819,  5823,  5830,  5831,  5888,
    5894,  5893,  5981,  5980,  6024,  6032,  6034,  6038,  6042,  6031,
    6084,  6093,  6097,  6104,  6106,  6110,  6103,  6148,  6158,  6160,
    6164,  6157,  6202,  6211,  6212,  6215,  6258,  6267,  6293,  6292,
    6323,  6329,  6330,  6333,  6334,  6338,  6343,  6368,  6377,  6429,
    6454,  6482,  6337,  6490,  6491,  6492,  6500,  6501,  6509,  6527,
    6508,  6531,  6535,  6536,  6543,  6544,  6545,  6551,  6552,  6553,
    6558,  6559,  6560,  6561,  6562,  6563,  6564
};
#endif

#if RWLYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "RWL_T_CONNECT", "RWL_T_USERNAME",
  "RWL_T_PASSWORD", "RWL_T_DATABASE", "RWL_T_EPOCHSECONDS",
  "RWL_T_DBSECONDS", "RWL_T_PROCEDURENAME", "RWL_T_PRINT",
  "RWL_T_PRINTLINE", "RWL_T_PRINTVAR", "RWL_T_SHARDKEY", "RWL_T_SUPERSHK",
  "RWL_T_OCISECONDS", "RWL_T_PROCEDURE", "RWL_T_BIND", "RWL_T_DEFINE",
  "RWL_T_STRING", "RWL_T_INTEGER", "RWL_T_END", "RWL_T_FOR", "RWL_T_ARRAY",
  "RWL_T_DATE", "RWL_T_SQRT", "RWL_T_ACCESS", "RWL_T_REGEX",
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
  "maybewait", "$@11", "maybethentimeoutaction", "$@12",
  "compiletime_expression", "compiletime_concatenation",
  "subroutinedeclaration", "isaccepted", "functionhead", "$@13",
  "procedurehead", "$@14", "maybeprivatefunction", "maybeprivateprocedure",
  "codebody", "printvarlist", "printvarelement", "identifierorprocname",
  "maybeemptybrackets", "maybearguments", "formalargumentlist",
  "formalargument", "argumenttype", "maybestatistics", "codeterminator",
  "$@15", "$@16", "$@17", "identifier_or_constant", "$@18",
  "maybe_expression_list", "expression_list", "countexpressions",
  "primary_expression", "unary_expression", "multiplication", "addition",
  "bitwise_shift", "comparison", "equality", "bitwise_and", "bitwise_xor",
  "bitwise_or", "logicaland", "$@19", "logicalor", "$@20", "conditional",
  "$@21", "$@22", "expression", "concatenation", "statementlist",
  "goodorbadstatement", "$@23", "$@24", "statement", "$@25", "$@26",
  "$@27", "$@28", "$@29", "$@30", "$@31", "$@32", "$@33", "$@34", "$@35",
  "$@36", "$@37", "$@38", "$@39", "$@40", "$@41", "$@42", "$@43", "$@44",
  "$@45", "$@46", "$@47", "$@48", "beginofprocedurecall",
  "endofprocedurecall", "writelobhead", "$@49", "maybewritelobtail",
  "readlobhead", "$@50", "maybereadlobtail", "$@51", "docallonesql",
  "dosqlloop", "$@52", "controlloopheader", "controllooplistandend",
  "controlloopheadend", "controllooplist", "controlloopoption", "$@53",
  "$@54", "$@55", "$@56", "$@57", "maybequeue", "callsql", "$@58", "$@59",
  "embeddedsql", "$@60", "immediatesql", "$@61", "$@62", "$@63",
  "getdynamicorinlineimmsql", "$@64", "immediatesqlheader", "$@65",
  "immediatesqlendsqlisok", "immediatesqltail", "immediateatclause",
  "executehead", "maybeatdatabase", "declinitlist", "declinit", "$@66",
  "declinitassign", "$@67", "ifstatements", "elseifstatements",
  "maybeelseiflist", "ifhead", "elseifhead", "whileheadkeyword",
  "whilehead", "whileheadwrongkeyword", "maybethreadsattr",
  "maybeprivatestring", "maybeprivateinteger", "maybeprivatedouble",
  "maybeprivatelob", "eitherlobtype", "sqldeclaration", "$@68", "$@69",
  "$@70", "$@71", "namedsqldeclaration", "dynamicsqlbody", "$@72",
  "staticsqlbody", "$@73", "addsqlvariable", "parsesqlspecifications",
  "sqlspeclist", "sqlspec", "musthaveterminator", "maybearraydefine",
  "definelist", "defineelement", "$@74", "bindoutlist", "bindoutelement",
  "$@75", "$@76", "$@77", "bindlist", "bindelement", "$@78", "$@79",
  "$@80", "bdidentifier", "bdidentname", "modsqlstatement", "$@81", "$@82",
  "$@83", "$@84", "$@85", "modsqlbdlist", "modsqlbd", "$@86", "$@87",
  "moddbstatement", "$@88", "moddbsespmaybedotdot", "printf", "$@89",
  "sprintfheader", "sprintf", "$@90", "fprintf", "$@91",
  "handlefprintflist", "$@92", "printflist", "printfelement", "write",
  "print", "printlist", "$@93", "printelement", "pwterminator",
  "pfterminator", "assignrightside", "assignterminator",
  "declassignoperator", "assignoperator", "loopiterator", "$@94", "$@95",
  "$@96", "commaconcatenationlist", "commaconcatenation",
  "loopiteratorrecover", "maybeprivatefile", "executeterminator",
  "loopterminator", "ifterminator", "sqlterminator", "whileterminator",
  "maybeandexpression", "getstaticsqltext", "getinlinesql", "$@97",
  "readfromfile", "$@98", "regexsub", "$@99", "$@100", "$@101", "$@102",
  "regexsuborsubg", "regextract", "$@103", "$@104", "$@105", "regex",
  "$@106", "$@107", "$@108", "readlist", "readlistelement", "systemstart",
  "systemfinish", "threadexecution", "$@109", "threadlistp", "threadorcqn",
  "cqnthread", "$@110", "$@111", "$@112", "$@113", "$@114", "$@115",
  "$@116", "cqnterminator", "maybecqnstart", "thread", "$@117", "$@118",
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

#define YYPACT_NINF -909

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-909)))

#define YYTABLE_NINF -670

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -909,   139,   155,  -909,  3439,   -12,    72,  1396,  -909,   -12,
      94,  -909,  -909,  -909,    50,  1854,  2016,  -909,    39,  2083,
     105,   115,   368,  -909,   130,   136,   159,  -909,   -12,  2245,
     300,  5701,   -12,   -12,   -24,  1625,   -12,    80,   -12,   -12,
    -909,   -12,   387,   313,  -909,  -909,  -909,  -909,   228,   261,
    2312,    53,  -909,  -909,    46,  -909,   137,   229,  -909,  -909,
    -909,  -909,  -909,  -909,    48,   293,   293,   140,   141,  -909,
    -909,   -12,   329,   -12,  1558,  -909,   101,  -909,  -909,    49,
      99,   100,   146,  -909,    52,    71,   306,   -12,   -12,  1234,
    2474,   151,  -909,  -909,  2541,  -909,  -909,  5701,  -909,  -909,
     -12,  -909,   -12,  -909,  5701,  -909,  -909,   -12,  -909,   209,
    -909,  -909,   -12,   298,   287,   266,   385,   329,   -12,  5701,
     -12,  5701,   483,   203,   615,   159,   285,   334,   347,   376,
     381,   389,   401,   405,   159,  -909,   410,  5701,   425,   434,
     443,   449,   451,   454,   456,   460,   467,   471,   475,   480,
    -909,   488,  -909,  -909,   493,   499,   504,   505,   506,   507,
     509,   512,   513,  5701,  5701,  5701,  5701,   596,  -909,  -909,
     321,   248,   245,   304,   311,   492,   497,   526,   632,    29,
    -909,    89,   -12,   -12,   -12,  -909,   674,   676,   -12,  -909,
     -12,  -909,   517,   -12,  -909,  2703,   635,   265,   322,   194,
    -909,  -909,   -12,  -909,   -12,  -909,  5701,  -909,   -12,   421,
     563,  -909,  -909,  -909,  -909,  -909,  -909,  -909,   386,  -909,
    -909,   153,  -909,   -12,   525,   527,   528,   529,   -12,  5701,
     -12,   574,  -909,   697,   644,   578,  -909,   -12,   541,   -12,
     580,   479,  -909,   -12,  -909,  -909,  -909,  -909,  -909,  -909,
    -909,  -909,   -12,  -909,   -12,  -909,   539,  -909,   340,  -909,
     -12,  -909,   705,    67,  -909,    55,  -909,  3164,  3570,   -12,
     341,  5701,  -909,   -12,   585,   -12,   585,   -12,  -909,   234,
    -909,   -12,   -12,   -12,  -909,  -909,   -12,  -909,  -909,  -909,
    -909,  -909,   -12,  5701,  -909,  5701,  -909,   -12,  5475,  -909,
     236,  -909,   -12,   585,   -12,  5701,    38,  -909,  5701,  -909,
    5701,    59,   545,  -909,  -909,  -909,   103,  -909,  -909,  -909,
     678,  -909,  -909,  5701,   679,   385,  -909,  -909,  -909,  -909,
    -909,   531,  2770,  -909,   286,  -909,  -909,  -909,  -909,  -909,
    -909,  -909,  -909,  -909,  -909,  -909,   552,   554,  5701,  5701,
    5701,  5701,  5701,  5701,  -909,  5701,  -909,  5701,  5701,  5701,
      43,  5701,  5701,  5701,  5701,   161,   162,    66,  5701,  -909,
    5701,  5701,  5701,  5701,  5701,  5701,  5701,  5701,  5701,  -909,
    -909,  -909,   555,   323,  5701,  5701,  5701,  5701,  5701,  5701,
    5701,  5701,  5701,  5701,  5701,  5701,  5701,  5701,  5701,  5701,
    5701,  -909,  -909,  -909,  5701,  -909,  -909,  -909,  -909,   556,
     598,   599,  -909,  -909,  -909,  -909,   -12,    75,  -909,  -909,
    -909,  -909,  -909,  -909,  -909,  -909,  -909,  -909,   -12,   -12,
    5701,  -909,  -909,   720,   721,   724,   607,  -909,  -909,  5701,
     -12,  -909,  5701,   -12,  -909,  -909,  -909,  -909,  -909,  -909,
    -909,  -909,  -909,  -909,  -909,   700,   610,  -909,  -909,  -909,
    -909,  -909,  -909,  -909,  -909,  -909,  -909,  -909,  -909,  2703,
    -909,  5701,  -909,   -12,   -12,   -12,  -909,  3701,  -909,  -909,
     579,  -909,   579,  -909,  -909,  -909,  -909,  -909,  -909,  -909,
     267,  -909,   685,  -909,  -909,  -909,  -909,  -909,  -909,  -909,
    -909,  -909,  -909,  5701,  -909,  3832,   -12,   -12,  -909,  -909,
    -909,    95,    97,   326,   473,   511,  -909,  -909,   691,    54,
    -909,  -909,  -909,   583,   706,   585,  -909,   234,  -909,   234,
    -909,   339,   585,  -909,  -909,  -909,  -909,  -909,  5701,  -909,
     236,   236,  -909,  -909,  -909,  -909,  -909,   234,  -909,  -909,
     -12,   624,   -12,   308,  -909,  -909,   591,   -12,    68,  -909,
    -909,  -909,  5701,  -909,   556,  2932,   385,   706,  -909,  -909,
     679,   593,   595,  -909,  -909,  -909,  -909,  -909,  -909,   -12,
     754,  -909,   695,    64,  -909,  -909,  -909,    92,   597,    20,
     233,   251,   109,   253,    37,   601,   606,   608,  -909,   609,
     611,    22,   133,   256,   612,   613,   616,   617,   618,   619,
     620,   621,   614,  5701,   149,   257,   268,   269,   270,   271,
     196,   625,   626,  -909,  -909,   726,  -909,  -909,  -909,   321,
     321,   248,   248,   245,   245,   262,   245,   245,   304,   304,
     311,   492,   497,  5701,  5701,  5701,  -909,   650,   327,  -909,
    -909,  -909,  -909,   -12,  -909,  -909,   -12,  -909,  -909,   -12,
      77,   656,   667,   668,  -909,  -909,   669,   706,  -909,  5701,
     706,  -909,   -12,  5249,  -909,  -909,  -909,  -909,  -909,   629,
    -909,  -909,  -909,  -909,  -909,   283,   727,   235,  5701,  5701,
    5701,  5701,  -909,  -909,  -909,  -909,  -909,  -909,  -909,  -909,
    5701,  -909,   634,    73,  -909,  -909,  3963,   -12,   -12,  -909,
     -12,  -909,   -12,   815,   816,   -12,  2999,  -909,  -909,   -12,
     -12,   -12,  -909,  -909,   782,   234,  -909,  -909,  -909,  -909,
    -909,   629,  -909,  -909,  5701,  -909,   636,  -909,  -909,  -909,
    -909,  5634,  5701,  5701,   769,  -909,  5701,  -909,  -909,  -909,
    -909,  5701,  5701,  5701,   -12,   308,  -909,    59,  -909,   -12,
     -12,   -12,  -909,    24,    -9,   790,  -909,   679,  -909,  -909,
    5701,  5701,  -909,   531,   737,   680,   -12,   -12,  -909,  -909,
    -909,  5701,  5701,  -909,  -909,  5701,  -909,   641,  -909,   682,
    5701,  -909,  -909,  -909,  -909,  -909,  5701,  -909,  5701,  -909,
    -909,  -909,  -909,  -909,  -909,  -909,  -909,  -909,  5701,   643,
    5701,  -909,  -909,  -909,  -909,  -909,  5701,  -909,  -909,  -909,
    5701,   526,   632,   642,  -909,  -909,  -909,    42,    45,  -909,
    -909,  -909,  5701,  5701,   -12,  -909,  -909,  -909,   752,  -909,
    -909,  -909,  -909,  -909,   -12,  -909,  -909,  5249,  -909,   646,
    -909,  -909,   651,  -909,  -909,  -909,  -909,  -909,  -909,  -909,
    5701,   649,  -909,  -909,  -909,  -909,  -909,  -909,   247,  -909,
     690,   562,  -909,  -909,  -909,  -909,   706,   706,   706,   706,
    4094,  5701,   -12,  -909,  -909,   -12,   -12,  -909,  -909,    55,
    -909,  -909,  -909,  -909,  5701,  -909,   -12,   -12,  -909,   766,
     470,  3295,  -909,  -909,  -909,  -909,  -909,  5701,  -909,  5701,
     -12,   693,  -909,  -909,  -909,  -909,  -909,   392,  -909,  -909,
    -909,  -909,  -909,  -909,  -909,  -909,  -909,   783,  -909,  -909,
    -909,  -909,   654,  4225,  -909,  4356,  -909,  -909,   -12,   698,
    -909,  -909,  -909,  -909,   272,   278,   279,  -909,   657,   145,
     280,   281,   337,  -909,   294,   295,   245,  -909,   -12,   103,
    -909,   -12,   701,  -909,   706,   706,  -909,  -909,  -909,  5701,
    -909,  5701,  -909,  -909,    42,    45,  -909,  5701,  -909,   482,
    -909,  -909,  5701,  -909,   562,  -909,  -909,    70,   706,  -909,
    -909,    10,   489,  -909,  -909,  -909,  4487,  -909,  -909,  -909,
    -909,  -909,   585,  -909,  -909,  -909,  -909,   392,   811,  -909,
    -909,  -909,   811,  -909,  5701,  5701,    23,  -909,    70,    70,
     556,   556,  -909,  -909,  4618,   761,  -909,  -909,  -909,  -909,
    -909,  5701,  -909,  -909,  -909,  5701,  -909,  -909,  5701,  -909,
     393,  -909,  -909,  -909,  -909,   446,  -909,   814,   662,  -909,
    5701,   662,  -909,   706,   662,  -909,  -909,   706,    16,    57,
    -909,  1787,    31,   -12,   -12,   -12,  -909,  -909,   664,  -909,
     -12,   -12,  -909,  -909,  -909,  -909,  -909,  -909,    64,  4749,
     234,   665,  5701,  -909,  -909,  -909,  -909,  -909,  -909,  -909,
    -909,  -909,   327,   327,   827,  5701,   768,   296,   297,  -909,
     -12,   103,  5701,  5701,   -12,   701,  5701,  -909,  -909,   706,
     -12,  -909,  -909,  -909,  -909,   365,  -909,   -12,  -909,  -909,
     373,  -909,   -12,  -909,  5701,   -12,  -909,  -909,  -909,  -909,
     384,  -909,  -909,  -909,  -909,  -909,  -909,  -909,  -909,   329,
    -909,    69,  -909,  5701,  -909,   277,   747,  4880,   798,  -909,
    -909,    69,  -909,  5701,  -909,  -909,  -909,  -909,  -909,  -909,
    -909,  -909,   706,  -909,   710,  -909,    41,    41,    41,   490,
    -909,  -909,    41,   -16,  -909,  -909,   -12,  -909,    41,    41,
      41,   522,  -909,  -909,   -12,   -12,  -909,  -909,  -909,  5701,
    5408,  -909,  -909,  -909,  -909,  -909,    70,  -909,  -909,  -909,
    -909,  -909,  -909,   743,  -909,  -909,  -909,  -909,  -909,  -909,
    -909,  -909,  -909,  -909,  -909,  -909,  -909,  -909,   671,  -909,
    5701,  5701,  -909,  -909,   763,  -909,   715,   791,  -909,  -909,
    -909,   -12,    84,  -909,  -909,  -909,   681,  -909,  5011,  -909,
     792,  5701,  -909,   683,  -909,  -909,  5142,   841,    90,   -12,
     -12,  -909,  -909,  -909,  -909
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       4,     0,     5,     1,     0,     0,     0,     0,   561,   562,
       0,    95,   450,   452,     0,     0,     0,   454,     0,     0,
       0,     0,     0,   597,     0,     0,   102,   370,   278,     0,
     415,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      93,     0,     0,     0,   646,   457,   458,   459,     0,     0,
       0,     0,   631,   632,     0,   396,     0,     0,   546,     3,
     248,     6,     8,    12,     0,    84,    84,     0,     0,     7,
     351,     0,   311,     0,     0,   319,     0,   234,   234,     0,
       0,     0,     0,   456,     0,     0,     0,     0,     0,     0,
       0,     0,   326,   328,     0,   329,   327,     0,     9,   355,
       0,    34,     0,   356,   182,   343,   101,     0,   100,     0,
      97,    99,     0,     0,   391,     0,   615,   411,     0,     0,
       0,     0,     0,     0,     0,   102,     0,     0,     0,     0,
       0,     0,     0,     0,   102,   133,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     132,   129,   131,   130,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   187,   190,   195,
     199,   202,   205,   211,   214,   216,   218,   220,   223,   226,
     230,     0,     0,     0,     0,   622,     0,     0,     0,   559,
       0,   560,     0,     0,   346,     0,     0,     0,     0,     0,
     298,   299,     0,   348,     0,   282,     0,   249,     0,     0,
       0,   300,   250,   308,    94,   449,   451,   453,     0,   596,
      92,     0,   455,     0,     0,   364,     0,   360,     0,     0,
       0,     0,   549,     0,     0,     0,   474,     0,     0,     0,
     392,     0,   554,     0,   124,   122,   121,   126,    13,    85,
     234,   234,     0,    87,     0,    90,   388,   367,     0,   367,
       0,   367,     0,   404,   234,     0,   268,     0,     0,     0,
       0,     0,   258,     0,     0,     0,     0,     0,   425,     0,
     423,     0,     0,     0,   607,   251,     0,   568,   334,   550,
     332,   330,     0,     0,   567,     0,   336,     0,   232,   566,
       0,   563,     0,     0,     0,     0,     0,    36,    37,   307,
     182,     0,   183,   184,   186,    10,     0,    11,   272,   323,
       0,   406,   316,     0,     0,   615,   412,   642,   639,   637,
     634,   680,     0,   655,     0,   651,   654,   653,   439,   445,
     443,   444,   438,   441,   442,   180,     0,     0,     0,     0,
       0,     0,     0,     0,   179,     0,   193,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   175,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   191,
     192,   194,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   221,   224,   227,     0,   440,   322,   321,   624,     0,
       0,     0,   341,   342,   103,   301,     0,     0,   279,   435,
     434,   416,   417,   291,   347,   286,   284,   304,     0,     0,
       0,   292,   302,     0,     0,     0,     0,   297,   362,     0,
       0,   358,     0,     0,   290,   288,   333,   548,   467,   407,
     465,   397,   331,   552,   354,     0,     0,   573,   576,   574,
     580,   581,   582,   577,   578,   575,   583,   584,   579,     0,
     547,     0,   128,     0,     0,     0,    83,     0,    82,    86,
     104,    89,   104,   384,   380,   378,   382,   389,   390,   352,
     388,   376,     0,   309,   413,   414,   312,   367,   313,   402,
     620,   619,   474,     0,   403,     0,     0,     0,   604,   267,
     234,     0,     0,     0,     0,     0,   235,   236,   430,     0,
     262,   447,   448,     0,    80,     0,   255,     0,   257,     0,
     253,   427,     0,   252,   610,   608,   609,   335,     0,   340,
       0,     0,   345,   233,   564,   344,   265,     0,   630,   626,
       0,     0,     0,    39,    38,    81,     0,     0,     0,   418,
     306,   357,     0,    98,     0,     0,   615,   616,   368,   314,
       0,     0,     0,   682,   686,   683,   685,   681,   684,     0,
       0,   668,     0,     0,   652,   177,   178,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   172,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   182,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   181,   188,     0,   196,   197,   198,   201,
     200,   203,   204,   208,   209,     0,   206,   207,   213,   212,
     215,   217,   219,     0,     0,     0,   231,     0,     0,   643,
      20,    16,   570,     0,   571,   569,     0,   295,   296,     0,
       0,     0,     0,     0,   463,   461,     0,   365,   349,     0,
     361,   350,     0,   470,   554,   393,   395,   281,   558,   555,
     556,   125,   123,   127,    96,     0,     0,   117,     0,     0,
       0,     0,   234,   375,   374,   373,   372,   377,   386,   310,
       0,   399,     0,     0,   606,   605,     0,     0,     0,   241,
       0,   238,     0,     0,     0,     0,     0,   433,   234,     0,
       0,     0,   611,   266,   446,     0,   254,   256,   426,   428,
     424,   551,   339,   338,     0,   264,     0,   277,   275,   647,
     274,     0,     0,     0,     0,    55,     0,    58,    59,    49,
      48,     0,     0,     0,     0,    40,    41,     0,   422,     0,
       0,     0,   185,   615,     0,   588,   234,     0,   234,   318,
       0,     0,   650,   680,   672,     0,     0,     0,   677,   649,
     143,     0,     0,   158,   159,     0,   162,     0,   155,     0,
       0,   147,   174,   173,   152,   136,     0,   138,     0,   142,
     171,   170,   169,   168,   167,   165,   164,   166,     0,     0,
       0,   139,   140,   141,   144,   145,     0,   153,   154,   189,
       0,   222,   225,     0,   645,   623,   644,     0,     0,   572,
     285,   294,     0,     0,     0,   532,   530,   528,   525,   534,
     522,   523,   521,   527,     0,    18,    14,   470,   363,     0,
     359,   289,     0,   466,   469,   476,   468,   474,   617,   553,
       0,   112,   110,   111,   114,   116,   115,   105,     0,   107,
       0,     0,   119,   120,   118,    91,   385,   381,   379,   383,
       0,     0,   489,   476,   405,     0,     0,   598,   320,     0,
     244,   243,   234,   240,     0,   237,     0,     0,   245,     0,
       0,     0,   614,   612,   613,   260,   259,     0,   565,     0,
       0,     0,    46,    43,    44,    59,    53,    56,    52,    50,
      45,    35,    42,   305,   421,   419,   420,     0,   595,   594,
     590,   585,     0,     0,   317,     0,   640,   635,     0,     0,
     234,   656,   679,   678,     0,     0,     0,   157,     0,     0,
       0,     0,     0,   176,     0,     0,   210,   228,     0,     0,
      21,     0,     0,    17,   542,   541,   293,   538,   538,     0,
     524,     0,   538,   303,     0,     0,   462,     0,   618,     0,
     472,   557,     0,   106,     0,   109,    88,     0,   387,   490,
     621,   408,     0,   600,   599,   269,     0,   234,   246,   247,
     437,   436,     0,   429,   627,   276,    47,    57,    63,    62,
      61,    60,    63,   324,     0,     0,     0,   591,     0,     0,
       0,     0,   671,   673,     0,   666,   163,   134,   160,   156,
     150,     0,   135,   137,   148,     0,   161,   146,     0,    29,
       0,    30,    32,    23,    26,     0,    24,   544,   533,   536,
       0,   531,   529,   526,   535,    19,    15,   366,     0,     0,
     471,     0,     0,   489,   489,   489,   477,   476,     0,   108,
       0,     0,   601,   353,   409,   410,   400,   475,     0,     0,
       0,     0,     0,    65,    65,   234,   586,   593,   589,   592,
     271,   369,     0,     0,     0,     0,     0,     0,     0,   229,
       0,     0,     0,     0,     0,     0,     0,   543,   538,   539,
       0,   515,   509,   511,   513,   489,   507,     0,   497,   495,
     489,   493,     0,   492,     0,     0,   506,   500,   502,   504,
     489,   498,   484,   485,   486,   473,   113,   603,   602,   411,
     242,     0,   261,     0,    64,    73,    51,     0,     0,   641,
     636,     0,   667,     0,   151,   149,    28,    31,    33,    27,
      22,    25,   545,   537,     0,   479,     0,     0,     0,     0,
     478,   483,     0,     0,   482,   488,   489,   481,     0,     0,
       0,     0,   480,   401,     0,     0,   674,   239,   628,     0,
       0,    66,    67,    68,    69,    54,     0,   587,   670,   657,
     540,   518,   517,   519,   510,   516,   512,   514,   508,   496,
     494,   487,   501,   503,   505,   499,   676,   675,     0,    74,
       0,     0,    72,   325,     0,   520,     0,    76,    71,    70,
     658,     0,     0,    75,   234,   629,     0,    77,     0,    78,
       0,   182,   660,     0,   234,    79,     0,     0,     0,     0,
       0,   663,   662,   665,   664
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -909,  -909,    -5,  -909,  -909,  -909,  -909,  -909,  -909,  -909,
    -909,  -111,  -909,  -240,  -909,  -107,  -909,  -233,  -909,  -909,
    -909,  -909,  -909,  -909,   114,  -909,  -909,   -43,  -909,  -139,
    -210,  -909,  -909,  -909,  -909,  -909,  -909,  -909,  -909,  -319,
    -297,  -909,   809,  -909,  -909,  -909,  -909,  -909,  -909,   627,
    -909,   560,   -62,    40,   397,  -909,  -101,    11,  -909,  -909,
    -909,  -909,  -909,  -909,  -909,  -305,  -909,   324,  -909,   212,
    -102,   282,  -373,   250,   487,   491,   494,   244,   249,  -909,
    -909,  -909,  -401,  -909,  -909,   238,   429,   -36,  -909,  -909,
    -909,   884,  -909,  -909,  -909,  -909,  -909,  -909,  -909,  -909,
    -909,  -909,  -909,  -909,  -909,  -909,  -909,  -909,  -909,  -909,
    -909,  -909,  -909,  -909,  -909,  -909,   786,   138,  -909,  -909,
    -909,  -909,  -909,  -909,  -909,  -235,  -554,  -909,  -909,  -909,
    -909,  -909,   406,  -909,  -909,  -909,  -909,  -909,  -909,   885,
    -909,  -909,   889,  -909,   793,  -909,  -909,  -909,  -909,  -909,
    -909,  -909,  -909,  -232,   834,  -909,  -909,  -266,   377,  -909,
    -909,  -909,  -909,  -909,  -909,  -909,  -909,   729,  -909,  -909,
     -74,  -909,  -909,  -909,  -909,   -33,  -909,  -909,  -909,  -909,
    -909,    65,  -909,  -909,  -909,  -909,  -488,  -156,    58,  -909,
    -592,  -909,  -909,  -259,  -909,  -909,  -265,  -909,  -909,  -909,
    -909,  -254,  -909,  -909,  -909,  -410,  -909,  -909,  -909,  -909,
    -909,  -909,  -909,  -586,  -191,  -909,  -909,  -909,  -909,  -909,
    -909,  -909,  -909,  -909,  -909,  -909,  -909,   246,  -909,   380,
      61,  -909,  -909,   310,  -909,   185,  -275,   572,   453,  -909,
     394,  -909,  -909,  -909,  -909,  -909,  -909,   -93,  -909,  -909,
    -909,  -908,    35,  -909,  -909,  -313,  -909,   672,  -909,  -909,
    -909,  -909,  -909,  -909,  -909,  -909,  -909,  -909,  -909,  -909,
    -909,  -909,  -909,  -909,  -909,  -563,  -633,  -909,    21,  -909,
    -909,  -909,   600,  -909,  -909,  -909,  -909,  -909,  -909,  -909,
    -909,  -909,  -909,  -909,  -909,  -909,  -909,  -221,  -141,   165
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    60,     2,     4,    61,    62,   975,   828,   974,
     827,   963,  1045,  1046,  1103,   960,  1040,  1041,  1102,    63,
     308,   553,   754,   755,   756,  1012,  1008,   917,  1011,  1083,
    1145,  1191,  1192,  1193,  1194,  1195,  1227,  1233,  1241,   523,
     852,    64,   250,    65,   480,    66,   482,    67,    68,   476,
     109,   110,   111,   193,   686,   868,   869,   870,   875,   248,
     474,   473,   475,   167,   613,   311,   312,   313,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   643,
     179,   644,   180,   645,  1038,   298,   555,   477,   516,   894,
     892,   517,   525,  1002,   303,   510,   320,   552,   910,   195,
     241,   206,   656,   229,   672,   660,   661,   259,   115,   566,
     264,   564,  1085,   295,   256,   692,   104,   560,   227,   669,
     443,   225,   666,   440,   849,   493,   569,   768,    70,   489,
     696,   490,   491,   690,   689,   691,   688,   881,   492,    71,
     455,   456,    72,   236,    73,   263,   883,  1139,   502,   503,
      74,   234,  1076,   325,   326,    75,   561,   279,   280,   531,
     728,   907,    76,   717,   518,    77,   718,   343,    78,   344,
     272,    79,    80,    81,    82,    83,    84,   436,   847,   235,
     673,   853,   854,   855,   856,  1067,   451,   991,   992,  1066,
     990,  1124,  1120,  1121,  1172,  1130,  1131,  1178,  1179,  1180,
    1115,  1116,  1166,  1167,  1168,  1204,  1205,   844,   971,   969,
     968,   967,   972,  1048,  1049,  1050,  1164,   834,  1047,  1107,
      85,   242,    86,    87,   538,    88,   674,   470,   471,   679,
     680,    89,    90,   300,   734,   301,   296,   288,   418,   655,
     468,   469,   766,  1014,  1148,   932,  1016,  1017,   930,    91,
     888,  1073,   509,   285,   723,   324,   857,   858,   700,    92,
     409,    93,   305,   736,  1081,  1218,    94,    95,   121,   572,
    1021,    96,   119,   571,  1020,   648,   649,    97,   740,    98,
     123,   334,   335,   336,   582,  1025,  1224,  1234,  1240,  1244,
    1247,  1252,  1096,   337,   774,  1094,   940,  1187,   779,   579
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      99,   763,   247,   646,   105,   556,   274,   276,   527,   222,
     529,   554,   570,   581,   701,   826,   769,  1110,   633,   634,
     635,   636,   637,   194,   496,   545,   498,   200,   201,   203,
     205,   207,  1125,   211,   212,   356,   213,   547,   787,   550,
     122,   267,   268,   958,   597,   928,   961,   233,  1201,   243,
     269,   112,   106,   281,   230,   719,   506,   106,  1117,   246,
     557,   379,   380,   381,   244,   776,   257,   608,   261,   759,
    1184,  1070,   286,   100,   885,  -648,   653,  1088,  1202,   284,
     287,   208,   287,   287,   294,   270,   209,   404,   323,   404,
     113,  1249,   720,  1236,   402,   307,   707,   309,   709,   777,
     273,   275,   315,   106,   317,  1185,   182,   318,   721,   500,
    1090,  1091,   106,   327,  1118,   329,   184,   609,   610,   760,
     231,  -406,   265,   507,  1071,   832,  -371,   202,  1119,  -371,
     826,   188,  -371,  -371,  -371,   270,   270,   190,   237,     3,
    1074,   252,   254,   338,   558,   245,  1111,   277,   886,   107,
    -371,  -371,   302,  1075,   435,    -2,   404,    59,  1112,   404,
    1113,  1126,   604,   606,   342,   345,   708,   833,   710,    59,
    1237,   266,    59,  1127,   354,  1128,   404,   406,   407,   408,
    -315,    55,   282,   412,  1203,   413,   108,  1118,   415,  -464,
    -648,   108,  -446,   114,   423,   283,   232,   424,   501,   425,
     404,  1119,  1114,   427,   782,   795,   796,  1015,   647,   611,
     210,   761,   404,   934,   403,   101,   404,  1129,   437,  -273,
     788,   789,   551,   444,   959,   446,   598,   962,   505,    59,
     239,   271,   452,    59,   454,    59,    59,   108,   472,   332,
      59,  1250,  -446,  -446,   823,    59,   108,   479,   183,   481,
      59,    59,    59,   767,    59,   497,    59,   181,   185,   725,
     508,   404,   699,   404,   520,   732,   733,   197,   526,   199,
     528,    59,   530,   189,   533,   780,   534,   535,   536,   191,
     238,   537,  -280,   253,   255,   629,   630,   539,  1223,   278,
    -280,  -280,   542,   785,  -263,   294,  -460,   546,   599,   548,
     404,  -280,   861,   862,   605,   607,   559,   583,   809,  -280,
    -280,   741,   742,   743,   240,   863,   797,   798,   404,   223,
     404,   693,   332,   404,   404,   864,   820,   711,  1030,  1031,
     872,   873,   404,   810,   420,   404,   404,   404,   404,   404,
    -270,   192,   694,   483,   744,   404,   404,   404,   404,   484,
     485,   486,   249,  1189,   333,   745,   746,   747,   748,   749,
     750,   404,   404,   404,   404,   391,   392,   487,   488,   980,
     393,   224,   240,   421,   396,    59,  -280,  -280,  -280,   624,
     816,  1190,  1051,   625,   186,   198,  1054,   187,   874,   865,
      59,   494,   457,   316,  -280,  -280,   321,   712,   751,   521,
     458,   459,   433,   214,   226,   434,   215,   216,   389,   390,
    -391,   652,   654,   866,   258,    59,   783,    59,   532,   217,
     544,   387,   388,   657,   658,   389,   390,   916,   218,   219,
     983,   984,   918,   919,   784,   668,   786,   333,   671,   799,
     811,   319,   752,   753,   912,   913,   914,   956,    59,   323,
     927,   812,   813,   814,   815,  1026,   920,  1092,  1093,   826,
     826,  1027,  1028,  1032,  1033,   422,   867,   346,   681,   682,
     683,  1132,  1133,  1134,   706,   394,   395,  1036,  1037,  1154,
    1155,   397,   222,   495,   220,   695,   463,   464,   465,   713,
     289,   522,   714,    45,    46,    47,   384,   385,   386,  1058,
    1059,   704,   705,  1060,   331,  1061,  1058,  1059,    59,   524,
    1077,   647,  1061,   428,   722,  1009,   347,   221,  1010,   299,
    1034,  1035,   726,  1170,   727,   429,   306,  1062,  1174,   348,
     215,   216,   457,   314,  1062,   294,   294,   404,  1182,  1001,
     458,   459,   735,   217,   715,   737,    59,   739,   328,  1169,
     330,   460,   758,   219,    59,  1063,   430,  1173,   349,   461,
     462,   567,  1063,   350,   431,    59,   573,   574,  1181,   575,
     524,   351,  1064,  1065,   772,   997,  1100,  1101,   778,  1064,
    1065,   861,   862,   352,  1211,   576,   587,   353,   589,   590,
     591,   592,   355,   593,   863,   382,   626,   627,   628,   577,
     601,   602,   603,   540,   864,   541,   578,   357,   614,   615,
     616,   617,   618,   619,   620,   483,   358,    45,    46,    47,
    1111,   484,   485,   486,   417,   359,   463,   464,   465,  1104,
    1105,   360,  1112,   361,  1113,   426,   362,  1099,   363,   487,
     488,   221,   364,   825,   466,   467,   638,   639,   829,   365,
     905,   830,  1126,   366,   831,   383,   880,   367,   445,   290,
     291,   398,   368,  1068,  1127,   399,  1128,   851,   865,   338,
     369,   631,   632,   835,   836,   370,  1114,   667,   837,   838,
     670,   371,   901,   339,   340,   341,   372,   373,   374,   375,
     342,   376,   866,   400,   377,   378,   401,   410,   887,   411,
     414,   839,   890,   891,   419,   893,   432,   895,  1129,   438,
     898,   439,   441,   442,   902,   903,   904,   447,   448,   449,
     906,   450,   299,  -394,   299,   453,   499,   543,   278,   562,
     933,   565,   935,   568,   549,   585,  1080,   586,   623,   314,
     647,   650,   651,   662,   663,   664,   840,   841,   842,   921,
     665,   675,   559,   676,   924,   925,   926,  1206,  1207,   929,
     843,   685,  1209,  1144,   698,   716,   724,   738,  1212,  1213,
    1214,   942,   943,   404,   757,   773,  1152,   770,   588,   771,
     775,   781,   819,  1158,  1159,   790,   594,   595,   596,   791,
     600,   792,   793,   824,   794,   800,   801,   612,   808,   802,
     803,   804,   805,   806,   807,  1176,   621,   622,   817,   818,
     845,   846,   848,   860,   871,   884,   896,   897,   270,   915,
     909,   931,   939,   941,   947,   948,   953,   970,   957,   966,
     977,   982,   978,   985,  1199,  1000,  1006,  1013,  1015,   973,
    1029,  1023,  1082,  1044,  1095,  1106,  1108,  1136,  1151,  1143,
    1153,  1190,  1197,  1200,  1225,  1226,   996,  1230,  1231,   659,
    1232,  1242,  1248,  1239,  1056,  1161,  1245,  1055,  1157,   922,
    1219,  1222,  1007,  1084,  1146,   251,   563,   989,   478,   687,
     993,   994,   986,  1069,   508,   640,   762,   821,    69,   310,
     641,   998,   999,   822,   642,   923,   697,  1042,   417,   116,
     678,  1228,  1229,   117,  1024,   739,   260,  1183,   322,   730,
     405,  1135,   976,   979,  1210,  1208,  1215,  1163,   731,   908,
     859,   981,   677,  1089,   995,   729,   876,   877,   878,   879,
    1198,  1005,   702,  1022,   584,   504,  1243,  1140,   938,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1039,   900,     0,  1043,     0,     0,     0,
       0,  1079,     0,     0,     0,     0,     0,   678,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1072,     0,   524,     0,     0,     0,     0,   524,
     524,   314,     0,     0,   765,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1072,  1072,     0,     0,     0,     0,   944,
     945,     0,     0,   946,     0,     0,     0,     0,   949,     0,
       0,     0,     0,     0,   950,     0,   951,     0,     0,  1042,
       0,     0,   314,     0,     0,     0,     0,     0,   954,  1147,
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
       0,     0,     0,   299,     0,     0,     0,     0,     0,     0,
       0,   989,     0,     0,     0,     0,     0,     0,     0,  1216,
    1217,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1072,     0,     0,     0,     0,     0,     0,  1238,   936,
     937,     0,     0,     0,     0,     0,     0,     0,  1246,  1053,
       0,     0,     0,     0,     0,  1057,     0,     0,     0,     0,
     524,     0,     0,     0,     0,     0,  1235,     0,     0,     0,
       0,     0,     0,     0,     0,   292,     0,   952,     0,     0,
       0,  -337,  -337,  1251,  1253,  1254,     0,     0,     0,  -337,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -337,
    -337,     0,     0,  -337,  -337,     0,     0,  -337,  -337,  1097,
       0,  -337,     0,  1098,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1109,   678,
    -337,  -337,     0,     0,  -337,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     524,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   524,     0,     0,  1003,     0,  1004,  -337,
     524,   524,     0,     0,  1162,     0,     0,     0,  -337,     0,
    -337,  -337,  -337,  -337,  -337,  -337,  -337,     0,     0,  -337,
       0,     0,   524,  -337,     0,     0,     0,  -337,     0,     0,
       0,     0,     0,     0,     0,     0,  -337,  -337,  -337,  -337,
       0,     0,     0,     0,     0,     0,  -337,     0,  -337,  -337,
    -337,   524,  -337,  -337,  -337,  -337,  -337,   102,  1052,     0,
       0,     0,     0,  -356,  -356,     0,     0,  -337,     0,     0,
       0,  -356,  -337,  -337,     0,    59,  -337,     0,   293,     0,
       0,  -356,  -356,     0,     0,  -356,  -356,   524,   524,  -356,
    -356,     0,     0,  -356,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1086,  1087,     0,     0,     0,     0,     0,
       0,     0,  -356,  -356,     0,     0,  -356,     0,   524,   524,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -356,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -356,     0,     0,     0,     0,     0,     0,     0,     0,
    -356,     0,  -356,  -356,  -356,  -356,  -356,  -356,  -356,     0,
       0,  -356,     0,     0,     0,  -356,     0,     0,     0,  -356,
       0,     0,     0,     0,     0,     0,     0,     0,  -356,  -356,
    -356,  -356,     0,     0,     0,     0,     0,     0,  -356,     0,
    -356,  -356,  -356,     0,  -356,  -356,  -356,  -356,  -356,   262,
       0,     0,     0,     0,     0,  -398,  -398,     0,     0,  -356,
       0,     0,  1188,  -398,  -356,  -356,     0,  -356,   103,     0,
       0,     0,     0,  -398,  -398,     0,     0,  -398,  -398,     0,
       0,  -398,  -398,     0,     0,  -398,     0,     0,     0,     0,
    -398,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -398,  -398,     0,     0,  -398,     0,
       0,     0,     0,     0,     0,     0,   204,     0,     0,     0,
       0,     0,  -283,  -283,     0,     0,     0,     0,     0,     0,
    -283,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -283,  -283,     0,     0,  -283,  -283,     0,     0,  -283,  -283,
       0,     0,  -283,  -398,     0,     0,     0,     0,     0,     0,
     314,     0,  -398,     0,  -398,  -398,  -398,  -398,  -398,  -398,
    -398,  -283,  -283,  -398,     0,  -283,     0,  -398,     0,  -398,
       0,  -398,     0,     0,     0,     0,     0,     0,     0,     0,
    -398,  -398,  -398,  -398,     0,     0,     0,     0,     0,     0,
    -398,     0,  -398,  -398,  -398,     0,  -398,  -398,  -398,  -398,
    -398,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -283,  -398,     0,     0,     0,     0,  -398,  -398,     0,  -283,
    -398,  -283,  -283,  -283,  -283,  -283,  -283,  -283,     0,     0,
    -283,     0,     0,     0,  -283,     0,     0,     0,  -283,     0,
       0,     0,     0,     0,     0,     0,     0,  -283,  -283,  -283,
    -283,     0,     0,     0,     0,     0,     0,  -283,     0,  -283,
    -283,  -283,     0,  -283,  -283,  -283,  -283,  -283,  1122,     0,
       0,     0,     0,     0,  -491,  -491,     0,     0,  -283,     0,
       0,     0,  -491,  -283,  -283,  1123,    59,  -283,     0,     0,
       0,     0,  -491,  -491,     0,     0,  -491,  -491,     0,     0,
    -491,  -491,     0,     0,  -491,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -491,  -491,     0,     0,  -491,     0,     0,
       0,     0,     0,     0,     0,   118,     0,     0,     0,     0,
       0,  -638,  -638,     0,     0,     0,     0,     0,     0,  -638,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -638,
    -638,     0,     0,  -638,  -638,     0,     0,  -638,  -638,     0,
       0,  -638,  -491,     0,     0,     0,     0,     0,     0,     0,
       0,  -491,     0,  -491,  -491,  -491,  -491,  -491,  -491,  -491,
    -638,  -638,  -491,     0,  -638,     0,  -491,     0,     0,     0,
    -491,     0,     0,     0,     0,     0,     0,     0,     0,  -491,
    -491,  -491,  -491,     0,     0,     0,     0,     0,     0,  -491,
       0,  -491,  -491,  -491,     0,  -491,  -491,  -491,  -491,  -491,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -638,
    -491,     0,     0,     0,     0,  -491,  -491,     0,  -638,  -491,
    -638,  -638,  -638,  -638,  -638,  -638,  -638,     0,     0,  -638,
       0,     0,     0,  -638,     0,     0,     0,  -638,     0,     0,
       0,     0,     0,     0,     0,     0,  -638,  -638,  -638,  -638,
       0,     0,     0,     0,     0,     0,  -638,     0,  -638,  -638,
    -638,     0,  -638,  -638,  -638,  -638,  -638,   120,     0,     0,
       0,     0,     0,  -633,  -633,     0,     0,  -638,     0,     0,
       0,  -633,  -638,  -638,     0,     0,  -638,     0,     0,     0,
       0,  -633,  -633,     0,     0,  -633,  -633,     0,     0,  -633,
    -633,     0,     0,  -633,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -633,  -633,     0,     0,  -633,     0,     0,     0,
       0,     0,     0,     0,   124,     0,     0,     0,     0,     0,
     125,   126,     0,     0,     0,     0,     0,     0,   127,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   128,   129,
       0,     0,   130,   131,     0,     0,   132,   133,     0,     0,
     134,  -633,     0,     0,     0,     0,     0,     0,     0,     0,
    -633,     0,  -633,  -633,  -633,  -633,  -633,  -633,  -633,   135,
     136,  -633,     0,   137,     0,  -633,     0,     0,     0,  -633,
       0,     0,     0,     0,     0,     0,     0,     0,  -633,  -633,
    -633,  -633,     0,     0,     0,     0,     0,     0,  -633,     0,
    -633,  -633,  -633,     0,  -633,  -633,  -633,  -633,  -633,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   138,  -633,
       0,     0,     0,     0,  -633,  -633,     0,   139,  -633,   140,
     141,   142,   143,   144,   145,   146,     0,     0,   147,     0,
       0,     0,   148,     0,     0,     0,   149,     0,     0,     0,
       0,     0,     0,     0,     0,   150,   151,   152,   153,     0,
       0,     0,     0,     0,     0,   154,     0,   155,   156,   157,
       0,   158,   159,   160,   161,   162,   196,     0,     0,     0,
       0,     0,   125,   126,     0,     0,   163,     0,     0,     0,
     127,   164,   165,     0,     0,   166,     0,     0,     0,     0,
     128,   129,     0,     0,   130,   131,     0,     0,   132,   133,
       0,     0,   134,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   135,   136,     0,     0,   137,     0,     0,     0,     0,
       0,     0,     0,   228,     0,     0,     0,     0,     0,  -287,
    -287,     0,     0,     0,     0,     0,     0,  -287,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -287,  -287,     0,
       0,  -287,  -287,     0,     0,  -287,  -287,     0,     0,  -287,
     138,     0,     0,     0,     0,     0,     0,     0,     0,   139,
       0,   140,   141,   142,   143,   144,   145,   146,  -287,  -287,
     147,     0,  -287,     0,   148,     0,     0,     0,   149,     0,
       0,     0,     0,     0,     0,     0,     0,   150,   151,   152,
     153,     0,     0,     0,     0,     0,     0,   154,     0,   155,
     156,   157,     0,   158,   159,   160,   161,   162,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -287,   163,     0,
       0,     0,     0,   164,   165,     0,  -287,   166,  -287,  -287,
    -287,  -287,  -287,  -287,  -287,     0,     0,  -287,     0,     0,
       0,  -287,     0,     0,     0,  -287,     0,     0,     0,     0,
       0,     0,     0,     0,  -287,  -287,  -287,  -287,     0,     0,
       0,     0,     0,     0,  -287,     0,  -287,  -287,  -287,     0,
    -287,  -287,  -287,  -287,  -287,   297,     0,     0,     0,     0,
       0,   125,   126,     0,     0,  -287,     0,     0,     0,   127,
    -287,  -287,     0,     0,  -287,     0,     0,     0,     0,   128,
     129,     0,     0,   130,   131,     0,     0,   132,   133,     0,
       0,   134,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     135,   136,     0,     0,   137,     0,     0,     0,     0,     0,
       0,     0,   304,     0,     0,     0,     0,     0,  -625,  -625,
       0,     0,     0,     0,     0,     0,  -625,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -625,  -625,     0,     0,
    -625,  -625,     0,     0,  -625,  -625,     0,     0,  -625,   138,
       0,     0,     0,     0,     0,     0,     0,     0,   139,     0,
     140,   141,   142,   143,   144,   145,   146,  -625,  -625,   147,
       0,  -625,     0,   148,     0,     0,     0,   149,     0,     0,
       0,     0,     0,     0,     0,     0,   150,   151,   152,   153,
       0,     0,     0,     0,     0,     0,   154,     0,   155,   156,
     157,     0,   158,   159,   160,   161,   162,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -625,   163,     0,     0,
       0,     0,   164,   165,     0,  -625,   166,  -625,  -625,  -625,
    -625,  -625,  -625,  -625,     0,     0,  -625,     0,     0,     0,
    -625,     0,     0,     0,  -625,     0,     0,     0,     0,     0,
       0,     0,     0,  -625,  -625,  -625,  -625,     0,     0,     0,
       0,     0,     0,  -625,     0,  -625,  -625,  -625,     0,  -625,
    -625,  -625,  -625,  -625,   416,     0,     0,     0,     0,     0,
     125,   126,     0,     0,  -625,     0,     0,     0,   127,  -625,
    -625,     0,     0,  -625,     0,     0,     0,     0,   128,   129,
       0,     0,   130,   131,     0,     0,   132,   133,     0,     0,
     134,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   135,
     136,     0,     0,   137,     0,     0,     0,     0,     0,     0,
       0,   580,     0,     0,     0,     0,     0,   125,   126,     0,
       0,     0,     0,     0,     0,   127,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   128,   129,     0,     0,   130,
     131,     0,     0,   132,   133,     0,     0,   134,   138,     0,
       0,     0,     0,     0,     0,     0,     0,   139,     0,   140,
     141,   142,   143,   144,   145,   146,   135,   136,   147,     0,
     137,     0,   148,     0,     0,     0,   149,     0,     0,     0,
       0,     0,     0,     0,     0,   150,   151,   152,   153,     0,
       0,     0,     0,     0,     0,   154,     0,   155,   156,   157,
       0,   158,   159,   160,   161,   162,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   138,   163,     0,     0,     0,
       0,   164,   165,     0,   139,   166,   140,   141,   142,   143,
     144,   145,   146,     0,     0,   147,     0,     0,     0,   148,
       0,     0,     0,   149,     0,     0,     0,     0,     0,     0,
       0,     0,   150,   151,   152,   153,     0,     0,     0,     0,
       0,     0,   154,     0,   155,   156,   157,     0,   158,   159,
     160,   161,   162,   764,     0,     0,     0,     0,     0,   125,
     126,     0,     0,   163,     0,     0,     0,   127,   164,   165,
       0,     0,   166,     0,     0,     0,     0,   128,   129,     0,
       0,   130,   131,     0,     0,   132,   133,     0,     0,   134,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   135,   136,
       0,     0,   137,     0,     0,     0,     0,     0,     0,     0,
     899,     0,     0,     0,     0,     0,   125,   126,     0,     0,
       0,     0,     0,     0,   127,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   128,   129,     0,     0,   130,   131,
       0,     0,   132,   133,     0,     0,   134,   138,     0,     0,
       0,     0,     0,     0,     0,     0,   139,     0,   140,   141,
     142,   143,   144,   145,   146,   135,   136,   147,     0,   137,
       0,   148,     0,     0,     0,   149,     0,     0,     0,     0,
       0,     0,     0,     0,   150,   151,   152,   153,     0,     0,
       0,     0,     0,     0,   154,     0,   155,   156,   157,     0,
     158,   159,   160,   161,   162,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   138,   163,     0,     0,     0,     0,
     164,   165,     0,   139,   166,   140,   141,   142,   143,   144,
     145,   146,     0,     0,   147,     0,     0,     0,   148,     0,
       0,     0,   149,     0,     0,     0,     0,     0,     0,     0,
       0,   150,   151,   152,   153,     0,     0,     0,     0,     0,
       0,   154,     0,   155,   156,   157,     0,   158,   159,   160,
     161,   162,     0,     0,     0,     5,     0,     0,     0,     0,
     511,     0,   163,     7,     8,     9,     0,   164,   165,     0,
       0,   166,     0,    12,    13,  -432,    14,     0,     0,     0,
       0,    15,    16,     0,     0,     0,    17,     0,     0,   512,
     513,     0,    19,    20,    21,   514,    23,    24,    25,     0,
      26,     0,     0,     0,     0,     0,     0,     0,    27,     0,
      28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    29,     0,  -432,     0,     0,     0,  -432,    30,
      31,    32,    33,     0,     0,     0,     0,     0,     0,     0,
      34,    35,    36,    37,     0,     0,     0,    38,     0,     0,
      39,     0,     0,    41,     0,     0,   515,     0,    43,    44,
      45,    46,    47,    48,    49,     0,    50,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    51,     0,
       0,    52,    53,     0,    54,    55,     5,     0,     0,     0,
       0,   511,     0,    56,     7,     8,     9,    57,     0,     0,
      58,     0,     0,     0,    12,    13,  -431,    14,     0,     0,
       0,     0,    15,    16,     0,     0,     0,    17,     0,     0,
     512,   513,     0,    19,    20,    21,   514,    23,    24,    25,
       0,    26,     0,     0,     0,    59,     0,     0,     0,    27,
       0,    28,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    29,     0,  -431,     0,     0,     0,  -431,
      30,    31,    32,    33,     0,     0,     0,     0,     0,     0,
       0,    34,    35,    36,    37,     0,     0,     0,    38,     0,
       0,    39,     0,     0,    41,     0,     0,   515,     0,    43,
      44,    45,    46,    47,    48,    49,     0,    50,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    51,
       0,     0,    52,    53,     0,    54,    55,     0,     0,     0,
       0,     0,     0,     0,    56,     0,     0,     0,    57,     0,
       5,    58,     0,     0,     0,     6,     0,     0,     7,     8,
       9,    10,     0,     0,     0,    11,     0,     0,    12,    13,
       0,    14,     0,     0,     0,     0,    15,    16,     0,     0,
       0,    17,     0,     0,    18,     0,    59,    19,    20,    21,
      22,    23,    24,    25,     0,    26,     0,     0,     0,     0,
       0,     0,     0,    27,     0,    28,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    29,     0,     0,
       0,     0,     0,     0,    30,    31,    32,    33,     0,     0,
       0,     0,     0,     0,     0,    34,    35,    36,    37,     0,
       0,     0,    38,     0,     0,    39,    40,     0,    41,     0,
       0,    42,     0,    43,    44,    45,    46,    47,    48,    49,
       0,    50,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    51,     0,     0,    52,    53,     0,    54,
      55,     5,     0,     0,     0,     0,   511,     0,    56,     7,
       8,     9,    57,     0,     0,    58,     0,     0,     0,    12,
      13,   519,    14,     0,     0,     0,     0,    15,    16,     0,
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
       7,     8,     9,    57,     0,     0,    58,     0,     0,     0,
      12,    13,   684,    14,     0,     0,     0,     0,    15,    16,
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
      56,     7,     8,     9,    57,     0,     0,    58,     0,     0,
       0,    12,    13,   703,    14,     0,     0,     0,     0,    15,
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
       0,    56,     7,     8,     9,    57,     0,     0,    58,     0,
       0,     0,    12,    13,   889,    14,     0,     0,     0,     0,
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
     511,     0,    56,     7,     8,     9,    57,     0,     0,    58,
       0,     0,     0,    12,    13,   987,    14,     0,     0,     0,
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
       0,   511,     0,    56,     7,     8,     9,    57,     0,     0,
      58,     0,     0,     0,    12,    13,  1018,    14,     0,     0,
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
       0,     0,   511,     0,    56,     7,     8,     9,    57,     0,
       0,    58,     0,     0,     0,    12,    13,  1019,    14,     0,
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
       0,     0,     0,   511,     0,    56,     7,     8,     9,    57,
       0,     0,    58,     0,     0,     0,    12,    13,  1078,    14,
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
       0,     0,     0,     0,   511,     0,    56,     7,     8,     9,
      57,     0,     0,    58,     0,     0,     0,    12,    13,  -669,
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
       9,    57,     0,     0,    58,     0,     0,     0,    12,    13,
    1141,    14,     0,     0,     0,     0,    15,    16,     0,     0,
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
       8,     9,    57,     0,     0,    58,     0,     0,     0,    12,
      13,  1196,    14,     0,     0,     0,     0,    15,    16,     0,
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
       7,     8,     9,    57,     0,     0,    58,     0,     0,     0,
      12,    13,     0,    14,     0,     0,     0,     0,    15,    16,
       0,     0,     0,    17,     0,     0,   512,   513,     0,    19,
      20,    21,   514,    23,    24,    25,     0,    26,     0,     0,
       0,    59,     0,     0,     0,    27,     0,    28,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    29,
    -659,     0,     0,     0,     0,     0,    30,    31,    32,    33,
       0,     0,     0,     0,     0,     0,     0,    34,    35,    36,
      37,     0,     0,     0,    38,     0,     0,    39,     0,     0,
      41,     0,     0,   515,     0,    43,    44,    45,    46,    47,
      48,    49,     0,    50,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    51,     0,     0,    52,    53,
       0,    54,    55,     5,     0,     0,     0,     0,   511,     0,
      56,     7,     8,     9,    57,     0,     0,    58,     0,     0,
       0,    12,    13,  -661,    14,     0,     0,     0,     0,    15,
      16,     0,     0,     0,    17,     0,     0,   512,   513,     0,
      19,    20,    21,   514,    23,    24,    25,     0,    26,     0,
       0,     0,    59,     0,     0,     0,    27,     0,    28,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      29,     0,     0,     0,     0,     0,     0,    30,    31,    32,
      33,     0,     0,     0,     0,     0,     0,     0,    34,    35,
      36,    37,     0,     0,     0,    38,     0,     0,    39,     0,
       0,    41,     0,     0,   515,     0,    43,    44,    45,    46,
      47,    48,    49,     0,    50,     0,   125,   126,     0,     0,
       0,     0,     0,     0,   127,     0,    51,     0,     0,    52,
      53,     0,    54,    55,   128,   129,     0,     0,   130,   131,
       0,    56,   132,   133,     0,    57,   134,     0,    58,     0,
       0,   500,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   135,   136,     0,     0,   137,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    59,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   138,     0,     0,     0,     0,     0,
       0,     0,     0,   139,     0,   140,   141,   142,   143,   144,
     145,   146,     0,     0,   147,     0,     0,     0,   148,     0,
     501,     0,   149,     0,     0,     0,     0,     0,     0,     0,
       0,   150,   151,   152,   153,     0,     0,     0,     0,     0,
       0,   154,     0,   155,   156,   157,     0,   158,   159,   160,
     161,   162,     0,     0,     0,   125,   126,     0,     0,     0,
       0,     0,   163,   127,     0,     0,     0,   164,   165,     0,
       0,   166,     0,   128,   129,     0,     0,   130,   131,     0,
       0,   132,   133,     0,     0,   134,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   135,   136,     0,     0,   137,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   125,   126,     0,     0,     0,  1220,     0,     0,
     127,     0,  1221,     0,     0,     0,     0,     0,     0,     0,
     128,   129,     0,     0,   130,   131,     0,     0,   132,   133,
       0,     0,   134,   138,     0,     0,     0,     0,     0,     0,
       0,     0,   139,     0,   140,   141,   142,   143,   144,   145,
     146,   135,   136,   147,     0,   137,     0,   148,     0,     0,
       0,   149,   404,     0,     0,     0,     0,     0,     0,     0,
     150,   151,   152,   153,     0,     0,     0,     0,     0,     0,
     154,     0,   155,   156,   157,     0,   158,   159,   160,   161,
     162,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     138,   163,     0,     0,     0,     0,   164,   165,     0,   139,
     166,   140,   141,   142,   143,   144,   145,   146,     0,     0,
     147,     0,     0,     0,   148,     0,     0,     0,   149,     0,
       0,     0,     0,     0,     0,     0,     0,   150,   151,   152,
     153,     0,     0,     0,     0,     0,     0,   154,     0,   155,
     156,   157,     0,   158,   159,   160,   161,   162,     0,     0,
       0,   125,   126,     0,     0,     0,     0,     0,   163,   127,
       0,     0,     0,   164,   165,     0,     0,   166,     0,   128,
     129,     0,     0,   130,   131,     0,     0,   132,   133,     0,
       0,   134,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     135,   136,     0,     0,   137,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   125,   126,
       0,     0,     0,     0,     0,     0,   127,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   128,   129,     0,     0,
     130,   131,     0,     0,   132,   133,     0,     0,   134,   138,
       0,     0,     0,     0,     0,     0,     0,     0,   139,     0,
     140,   141,   142,   143,   144,   145,   146,   135,   136,   147,
       0,   137,     0,   148,     0,     0,     0,   149,   911,     0,
       0,     0,     0,     0,     0,     0,   150,   151,   152,   153,
       0,     0,     0,     0,     0,     0,   154,     0,   155,   156,
     157,     0,   158,   159,   160,   161,   162,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   138,   163,     0,     0,
       0,     0,   164,   165,     0,   139,   166,   140,   141,   142,
     143,   144,   145,   146,     0,     0,   147,     0,     0,     0,
     148,     0,     0,     0,   149,     0,     0,     0,     0,     0,
       0,     0,     0,   150,   151,   152,   153,     0,     0,     0,
       0,     0,     0,   154,     0,   155,   156,   157,     0,   158,
     159,   160,   161,   162,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   163,     0,     0,     0,     0,   164,
     165,     0,     0,   166
};

static const yytype_int16 yycheck[] =
{
       5,   564,    64,   404,     9,   310,    80,    81,   274,    42,
     276,   308,   325,   332,   502,   648,   570,     1,   391,   392,
     393,   394,   395,    28,   259,   300,   261,    32,    33,    34,
      35,    36,     1,    38,    39,   137,    41,   303,     1,     1,
       1,    77,    78,     1,     1,    54,     1,     1,     7,     1,
       1,     1,     9,     1,     1,     1,     1,     9,     1,    64,
       1,   163,   164,   165,    16,     1,    71,     1,    73,     1,
       1,     1,     1,     1,     1,    36,     1,    54,    37,    84,
      85,     1,    87,    88,    89,    36,     6,    67,    64,    67,
      40,     1,    38,     9,    65,   100,     1,   102,     1,    35,
       1,     1,   107,     9,   109,    36,     1,   112,    54,    42,
    1018,  1019,     9,   118,   130,   120,     1,    51,    52,    51,
      67,    75,    21,    68,    54,    48,    76,   151,   144,    79,
     763,     1,    82,    83,    84,    36,    36,     1,     1,     0,
     130,     1,     1,    54,    85,    97,   130,     1,    75,    55,
     100,   101,     1,   143,     1,     0,    67,   181,   142,    67,
     144,   130,     1,     1,    75,   125,    71,    90,    71,   181,
      86,    70,   181,   142,   134,   144,    67,   182,   183,   184,
     130,   131,   130,   188,   143,   190,   143,   130,   193,   143,
     151,   143,   143,   143,   199,   143,   143,   202,   131,   204,
      67,   144,   186,   208,   184,   183,   184,   184,   184,   143,
     130,   143,    67,   767,   185,   143,    67,   186,   223,   181,
     183,   184,   184,   228,   182,   230,   183,   182,   264,   181,
       1,   182,   237,   181,   239,   181,   181,   143,   243,    36,
     181,   151,   143,   143,   645,   181,   143,   252,   143,   254,
     181,   181,   181,   566,   181,   260,   181,    19,   143,   525,
     265,    67,   497,    67,   269,   540,   541,    29,   273,    31,
     275,   181,   277,   143,   279,   183,   281,   282,   283,   143,
     143,   286,    53,   143,   143,   387,   388,   292,  1196,   143,
      61,    62,   297,   184,   143,   300,   143,   302,   360,   304,
      67,    72,    19,    20,   143,   143,   311,    21,   613,    80,
      81,     3,     4,     5,    85,    32,   183,   184,    67,     6,
      67,    54,    36,    67,    67,    42,    64,     1,   183,   184,
      95,    96,    67,   184,    69,    67,    67,    67,    67,    67,
      53,   182,    75,    76,    36,    67,    67,    67,    67,    82,
      83,    84,    59,    76,   151,    47,    48,    49,    50,    51,
      52,    67,    67,    67,    67,    61,    62,   100,   101,   857,
      66,   143,    85,    51,    63,   181,   147,   148,   149,    56,
     184,   104,   968,    60,    16,    85,   972,    19,   153,   106,
     181,    51,    53,   184,   165,   166,   130,    71,    90,    58,
      61,    62,    16,    16,   143,    19,    19,    20,   163,   164,
     181,   416,   417,   130,    85,   181,   183,   181,   184,    32,
     184,   173,   174,   428,   429,   163,   164,   746,    41,    42,
     183,   184,   751,   752,   183,   440,   183,   151,   443,   183,
     183,   143,   134,   135,   741,   742,   743,   820,   181,    64,
     763,   183,   183,   183,   183,   183,   753,  1020,  1021,  1092,
    1093,   183,   183,   183,   183,   143,   183,   182,   473,   474,
     475,  1063,  1064,  1065,   510,   171,   172,   183,   183,   183,
     183,   170,   515,   143,    97,   490,   147,   148,   149,    16,
     184,   150,    19,   106,   107,   108,   175,   176,   177,    17,
      18,   506,   507,    21,    21,    23,    17,    18,   181,   271,
      21,   184,    23,    92,   519,   123,   182,   130,   126,    90,
     183,   184,   527,  1115,   529,   104,    97,    45,  1120,   182,
      19,    20,    53,   104,    45,   540,   541,    67,  1130,    69,
      61,    62,   547,    32,    71,   550,   181,   552,   119,   184,
     121,    72,   557,    42,   181,    73,   135,   184,   182,    80,
      81,   323,    73,   182,   143,   181,    35,    36,   184,    38,
     332,   182,    90,    91,   579,   894,   183,   184,   583,    90,
      91,    19,    20,   182,  1176,    54,   348,   182,   350,   351,
     352,   353,   182,   355,    32,   166,   384,   385,   386,    68,
     362,   363,   364,   293,    42,   295,    75,   182,   370,   371,
     372,   373,   374,   375,   376,    76,   182,   106,   107,   108,
     130,    82,    83,    84,   195,   182,   147,   148,   149,   183,
     184,   182,   142,   182,   144,   206,   182,  1038,   182,   100,
     101,   130,   182,   648,   165,   166,   396,   397,   653,   182,
     724,   656,   130,   182,   659,    59,   692,   182,   229,    87,
      88,   169,   182,   982,   142,   168,   144,   672,   106,    54,
     182,   389,   390,    17,    18,   182,   186,   439,    22,    23,
     442,   182,   718,    68,    69,    70,   182,   182,   182,   182,
      75,   182,   130,   167,   182,   182,    64,    23,   703,    23,
     183,    45,   707,   708,    69,   710,   143,   712,   186,   184,
     715,   184,   184,   184,   719,   720,   721,   143,    21,    75,
     725,   143,   293,   143,   295,   184,    21,   298,   143,   184,
     766,    53,   768,    54,   305,   183,  1002,   183,   183,   310,
     184,   143,   143,    23,    23,    21,    90,    91,    92,   754,
     143,    51,   757,   143,   759,   760,   761,  1167,  1168,   764,
     104,   182,  1172,  1082,    79,    74,   183,   143,  1178,  1179,
    1180,   776,   777,    67,   183,    21,  1095,   184,   349,   184,
      85,   184,    56,  1102,  1103,   184,   357,   358,   359,   183,
     361,   183,   183,   143,   183,   183,   183,   368,   184,   183,
     183,   183,   183,   183,   183,  1124,   377,   378,   183,   183,
     143,   143,   143,   184,    87,   181,     1,     1,    36,    50,
     184,    31,    85,   143,   183,   143,   183,    75,   186,   834,
     184,   182,   181,   143,  1153,    69,   143,    54,   184,   844,
     183,   143,    31,   142,    83,    31,   184,   183,    21,   184,
      82,   104,    54,   143,   111,   184,   892,    94,   143,   430,
      69,    69,    21,   182,   975,  1105,   183,   974,  1101,   755,
    1189,  1190,   915,  1012,  1084,    66,   316,   882,   251,   482,
     885,   886,   871,   984,   889,   398,   562,   643,     4,   103,
     399,   896,   897,   644,   400,   757,   490,   959,   469,    14,
     471,  1220,  1221,    14,   940,   910,    72,  1139,   115,   532,
     181,  1067,   847,   855,  1173,  1169,  1181,  1108,   538,   734,
     674,   860,   469,  1016,   889,   531,   688,   689,   690,   691,
    1151,   910,   503,   938,   334,   263,  1241,  1078,   773,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   958,   716,    -1,   961,    -1,    -1,    -1,
      -1,   997,    -1,    -1,    -1,    -1,    -1,   538,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   987,    -1,   746,    -1,    -1,    -1,    -1,   751,
     752,   562,    -1,    -1,   565,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1018,  1019,    -1,    -1,    -1,    -1,   781,
     782,    -1,    -1,   785,    -1,    -1,    -1,    -1,   790,    -1,
      -1,    -1,    -1,    -1,   796,    -1,   798,    -1,    -1,  1101,
      -1,    -1,   613,    -1,    -1,    -1,    -1,    -1,   810,  1085,
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
      -1,    -1,    -1,   734,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1184,
    1185,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1196,    -1,    -1,    -1,    -1,    -1,    -1,  1234,   770,
     771,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1244,   971,
      -1,    -1,    -1,    -1,    -1,   977,    -1,    -1,    -1,    -1,
     982,    -1,    -1,    -1,    -1,    -1,  1231,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,   808,    -1,    -1,
      -1,     7,     8,  1248,  1249,  1250,    -1,    -1,    -1,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      26,    -1,    -1,    29,    30,    -1,    -1,    33,    34,  1031,
      -1,    37,    -1,  1035,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1050,   860,
      56,    57,    -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1082,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1095,    -1,    -1,   907,    -1,   909,   105,
    1102,  1103,    -1,    -1,  1106,    -1,    -1,    -1,   114,    -1,
     116,   117,   118,   119,   120,   121,   122,    -1,    -1,   125,
      -1,    -1,  1124,   129,    -1,    -1,    -1,   133,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   142,   143,   144,   145,
      -1,    -1,    -1,    -1,    -1,    -1,   152,    -1,   154,   155,
     156,  1153,   158,   159,   160,   161,   162,     1,   969,    -1,
      -1,    -1,    -1,     7,     8,    -1,    -1,   173,    -1,    -1,
      -1,    15,   178,   179,    -1,   181,   182,    -1,   184,    -1,
      -1,    25,    26,    -1,    -1,    29,    30,  1189,  1190,    33,
      34,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1014,  1015,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    56,    57,    -1,    -1,    60,    -1,  1220,  1221,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     114,    -1,   116,   117,   118,   119,   120,   121,   122,    -1,
      -1,   125,    -1,    -1,    -1,   129,    -1,    -1,    -1,   133,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,
     144,   145,    -1,    -1,    -1,    -1,    -1,    -1,   152,    -1,
     154,   155,   156,    -1,   158,   159,   160,   161,   162,     1,
      -1,    -1,    -1,    -1,    -1,     7,     8,    -1,    -1,   173,
      -1,    -1,  1143,    15,   178,   179,    -1,   181,   182,    -1,
      -1,    -1,    -1,    25,    26,    -1,    -1,    29,    30,    -1,
      -1,    33,    34,    -1,    -1,    37,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    57,    -1,    -1,    60,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,
      -1,    -1,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    26,    -1,    -1,    29,    30,    -1,    -1,    33,    34,
      -1,    -1,    37,   105,    -1,    -1,    -1,    -1,    -1,    -1,
    1241,    -1,   114,    -1,   116,   117,   118,   119,   120,   121,
     122,    56,    57,   125,    -1,    60,    -1,   129,    -1,   131,
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
      -1,    -1,    15,   178,   179,    18,   181,   182,    -1,    -1,
      -1,    -1,    25,    26,    -1,    -1,    29,    30,    -1,    -1,
      33,    34,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    57,    -1,    -1,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,
      -1,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    15,
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
      -1,    15,   178,   179,    -1,    -1,   182,    -1,    -1,    -1,
      -1,    25,    26,    -1,    -1,    29,    30,    -1,    -1,    33,
      34,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    56,    57,    -1,    -1,    60,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    15,    -1,
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
      -1,   158,   159,   160,   161,   162,     1,    -1,    -1,    -1,
      -1,    -1,     7,     8,    -1,    -1,   173,    -1,    -1,    -1,
      15,   178,   179,    -1,    -1,   182,    -1,    -1,    -1,    -1,
      25,    26,    -1,    -1,    29,    30,    -1,    -1,    33,    34,
      -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    57,    -1,    -1,    60,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,
      -1,    29,    30,    -1,    -1,    33,    34,    -1,    -1,    37,
     105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,
      -1,   116,   117,   118,   119,   120,   121,   122,    56,    57,
     125,    -1,    60,    -1,   129,    -1,    -1,    -1,   133,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,   144,
     145,    -1,    -1,    -1,    -1,    -1,    -1,   152,    -1,   154,
     155,   156,    -1,   158,   159,   160,   161,   162,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,   173,    -1,
      -1,    -1,    -1,   178,   179,    -1,   114,   182,   116,   117,
     118,   119,   120,   121,   122,    -1,    -1,   125,    -1,    -1,
      -1,   129,    -1,    -1,    -1,   133,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   142,   143,   144,   145,    -1,    -1,
      -1,    -1,    -1,    -1,   152,    -1,   154,   155,   156,    -1,
     158,   159,   160,   161,   162,     1,    -1,    -1,    -1,    -1,
      -1,     7,     8,    -1,    -1,   173,    -1,    -1,    -1,    15,
     178,   179,    -1,    -1,   182,    -1,    -1,    -1,    -1,    25,
      26,    -1,    -1,    29,    30,    -1,    -1,    33,    34,    -1,
      -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    57,    -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    -1,
      29,    30,    -1,    -1,    33,    34,    -1,    -1,    37,   105,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,
     116,   117,   118,   119,   120,   121,   122,    56,    57,   125,
      -1,    60,    -1,   129,    -1,    -1,    -1,   133,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   142,   143,   144,   145,
      -1,    -1,    -1,    -1,    -1,    -1,   152,    -1,   154,   155,
     156,    -1,   158,   159,   160,   161,   162,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   105,   173,    -1,    -1,
      -1,    -1,   178,   179,    -1,   114,   182,   116,   117,   118,
     119,   120,   121,   122,    -1,    -1,   125,    -1,    -1,    -1,
     129,    -1,    -1,    -1,   133,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   142,   143,   144,   145,    -1,    -1,    -1,
      -1,    -1,    -1,   152,    -1,   154,   155,   156,    -1,   158,
     159,   160,   161,   162,     1,    -1,    -1,    -1,    -1,    -1,
       7,     8,    -1,    -1,   173,    -1,    -1,    -1,    15,   178,
     179,    -1,    -1,   182,    -1,    -1,    -1,    -1,    25,    26,
      -1,    -1,    29,    30,    -1,    -1,    33,    34,    -1,    -1,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      57,    -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,    -1,    -1,    -1,    -1,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    -1,    29,
      30,    -1,    -1,    33,    34,    -1,    -1,    37,   105,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,   116,
     117,   118,   119,   120,   121,   122,    56,    57,   125,    -1,
      60,    -1,   129,    -1,    -1,    -1,   133,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   142,   143,   144,   145,    -1,
      -1,    -1,    -1,    -1,    -1,   152,    -1,   154,   155,   156,
      -1,   158,   159,   160,   161,   162,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   105,   173,    -1,    -1,    -1,
      -1,   178,   179,    -1,   114,   182,   116,   117,   118,   119,
     120,   121,   122,    -1,    -1,   125,    -1,    -1,    -1,   129,
      -1,    -1,    -1,   133,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   142,   143,   144,   145,    -1,    -1,    -1,    -1,
      -1,    -1,   152,    -1,   154,   155,   156,    -1,   158,   159,
     160,   161,   162,     1,    -1,    -1,    -1,    -1,    -1,     7,
       8,    -1,    -1,   173,    -1,    -1,    -1,    15,   178,   179,
      -1,    -1,   182,    -1,    -1,    -1,    -1,    25,    26,    -1,
      -1,    29,    30,    -1,    -1,    33,    34,    -1,    -1,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    57,
      -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,    -1,    -1,    -1,    -1,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    -1,    29,    30,
      -1,    -1,    33,    34,    -1,    -1,    37,   105,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,   116,   117,
     118,   119,   120,   121,   122,    56,    57,   125,    -1,    60,
      -1,   129,    -1,    -1,    -1,   133,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   142,   143,   144,   145,    -1,    -1,
      -1,    -1,    -1,    -1,   152,    -1,   154,   155,   156,    -1,
     158,   159,   160,   161,   162,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   105,   173,    -1,    -1,    -1,    -1,
     178,   179,    -1,   114,   182,   116,   117,   118,   119,   120,
     121,   122,    -1,    -1,   125,    -1,    -1,    -1,   129,    -1,
      -1,    -1,   133,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   142,   143,   144,   145,    -1,    -1,    -1,    -1,    -1,
      -1,   152,    -1,   154,   155,   156,    -1,   158,   159,   160,
     161,   162,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,
       6,    -1,   173,     9,    10,    11,    -1,   178,   179,    -1,
      -1,   182,    -1,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    -1,    -1,    -1,    32,    -1,    -1,    35,
      36,    -1,    38,    39,    40,    41,    42,    43,    44,    -1,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    -1,    70,    -1,    -1,    -1,    74,    75,
      76,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    87,    88,    89,    -1,    -1,    -1,    93,    -1,    -1,
      96,    -1,    -1,    99,    -1,    -1,   102,    -1,   104,   105,
     106,   107,   108,   109,   110,    -1,   112,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,
      -1,   127,   128,    -1,   130,   131,     1,    -1,    -1,    -1,
      -1,     6,    -1,   139,     9,    10,    11,   143,    -1,    -1,
     146,    -1,    -1,    -1,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    27,    28,    -1,    -1,    -1,    32,    -1,    -1,
      35,    36,    -1,    38,    39,    40,    41,    42,    43,    44,
      -1,    46,    -1,    -1,    -1,   181,    -1,    -1,    -1,    54,
      -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    -1,    70,    -1,    -1,    -1,    74,
      75,    76,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    -1,    -1,    -1,    93,    -1,
      -1,    96,    -1,    -1,    99,    -1,    -1,   102,    -1,   104,
     105,   106,   107,   108,   109,   110,    -1,   112,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,
      -1,    -1,   127,   128,    -1,   130,   131,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   139,    -1,    -1,    -1,   143,    -1,
       1,   146,    -1,    -1,    -1,     6,    -1,    -1,     9,    10,
      11,    12,    -1,    -1,    -1,    16,    -1,    -1,    19,    20,
      -1,    22,    -1,    -1,    -1,    -1,    27,    28,    -1,    -1,
      -1,    32,    -1,    -1,    35,    -1,   181,    38,    39,    40,
      41,    42,    43,    44,    -1,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    -1,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    76,    77,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    -1,
      -1,    -1,    93,    -1,    -1,    96,    97,    -1,    99,    -1,
      -1,   102,    -1,   104,   105,   106,   107,   108,   109,   110,
      -1,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   124,    -1,    -1,   127,   128,    -1,   130,
     131,     1,    -1,    -1,    -1,    -1,     6,    -1,   139,     9,
      10,    11,   143,    -1,    -1,   146,    -1,    -1,    -1,    19,
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
       9,    10,    11,   143,    -1,    -1,   146,    -1,    -1,    -1,
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
     139,     9,    10,    11,   143,    -1,    -1,   146,    -1,    -1,
      -1,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,
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
      -1,   139,     9,    10,    11,   143,    -1,    -1,   146,    -1,
      -1,    -1,    19,    20,    21,    22,    -1,    -1,    -1,    -1,
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
       6,    -1,   139,     9,    10,    11,   143,    -1,    -1,   146,
      -1,    -1,    -1,    19,    20,    21,    22,    -1,    -1,    -1,
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
      -1,     6,    -1,   139,     9,    10,    11,   143,    -1,    -1,
     146,    -1,    -1,    -1,    19,    20,    21,    22,    -1,    -1,
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
      -1,    -1,     6,    -1,   139,     9,    10,    11,   143,    -1,
      -1,   146,    -1,    -1,    -1,    19,    20,    21,    22,    -1,
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
      -1,    -1,    -1,     6,    -1,   139,     9,    10,    11,   143,
      -1,    -1,   146,    -1,    -1,    -1,    19,    20,    21,    22,
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
      -1,    -1,    -1,    -1,     6,    -1,   139,     9,    10,    11,
     143,    -1,    -1,   146,    -1,    -1,    -1,    19,    20,    21,
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
      11,   143,    -1,    -1,   146,    -1,    -1,    -1,    19,    20,
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
      10,    11,   143,    -1,    -1,   146,    -1,    -1,    -1,    19,
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
       9,    10,    11,   143,    -1,    -1,   146,    -1,    -1,    -1,
      19,    20,    -1,    22,    -1,    -1,    -1,    -1,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    35,    36,    -1,    38,
      39,    40,    41,    42,    43,    44,    -1,    46,    -1,    -1,
      -1,   181,    -1,    -1,    -1,    54,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      69,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    -1,    -1,    -1,    93,    -1,    -1,    96,    -1,    -1,
      99,    -1,    -1,   102,    -1,   104,   105,   106,   107,   108,
     109,   110,    -1,   112,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,   127,   128,
      -1,   130,   131,     1,    -1,    -1,    -1,    -1,     6,    -1,
     139,     9,    10,    11,   143,    -1,    -1,   146,    -1,    -1,
      -1,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,
      28,    -1,    -1,    -1,    32,    -1,    -1,    35,    36,    -1,
      38,    39,    40,    41,    42,    43,    44,    -1,    46,    -1,
      -1,    -1,   181,    -1,    -1,    -1,    54,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    -1,    -1,    -1,    93,    -1,    -1,    96,    -1,
      -1,    99,    -1,    -1,   102,    -1,   104,   105,   106,   107,
     108,   109,   110,    -1,   112,    -1,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    15,    -1,   124,    -1,    -1,   127,
     128,    -1,   130,   131,    25,    26,    -1,    -1,    29,    30,
      -1,   139,    33,    34,    -1,   143,    37,    -1,   146,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    57,    -1,    -1,    60,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   181,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   114,    -1,   116,   117,   118,   119,   120,
     121,   122,    -1,    -1,   125,    -1,    -1,    -1,   129,    -1,
     131,    -1,   133,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   142,   143,   144,   145,    -1,    -1,    -1,    -1,    -1,
      -1,   152,    -1,   154,   155,   156,    -1,   158,   159,   160,
     161,   162,    -1,    -1,    -1,     7,     8,    -1,    -1,    -1,
      -1,    -1,   173,    15,    -1,    -1,    -1,   178,   179,    -1,
      -1,   182,    -1,    25,    26,    -1,    -1,    29,    30,    -1,
      -1,    33,    34,    -1,    -1,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    57,    -1,    -1,    60,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     7,     8,    -1,    -1,    -1,    79,    -1,    -1,
      15,    -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    26,    -1,    -1,    29,    30,    -1,    -1,    33,    34,
      -1,    -1,    37,   105,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   114,    -1,   116,   117,   118,   119,   120,   121,
     122,    56,    57,   125,    -1,    60,    -1,   129,    -1,    -1,
      -1,   133,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     142,   143,   144,   145,    -1,    -1,    -1,    -1,    -1,    -1,
     152,    -1,   154,   155,   156,    -1,   158,   159,   160,   161,
     162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     105,   173,    -1,    -1,    -1,    -1,   178,   179,    -1,   114,
     182,   116,   117,   118,   119,   120,   121,   122,    -1,    -1,
     125,    -1,    -1,    -1,   129,    -1,    -1,    -1,   133,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,   144,
     145,    -1,    -1,    -1,    -1,    -1,    -1,   152,    -1,   154,
     155,   156,    -1,   158,   159,   160,   161,   162,    -1,    -1,
      -1,     7,     8,    -1,    -1,    -1,    -1,    -1,   173,    15,
      -1,    -1,    -1,   178,   179,    -1,    -1,   182,    -1,    25,
      26,    -1,    -1,    29,    30,    -1,    -1,    33,    34,    -1,
      -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    57,    -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    -1,
      29,    30,    -1,    -1,    33,    34,    -1,    -1,    37,   105,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,
     116,   117,   118,   119,   120,   121,   122,    56,    57,   125,
      -1,    60,    -1,   129,    -1,    -1,    -1,   133,   134,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   142,   143,   144,   145,
      -1,    -1,    -1,    -1,    -1,    -1,   152,    -1,   154,   155,
     156,    -1,   158,   159,   160,   161,   162,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   105,   173,    -1,    -1,
      -1,    -1,   178,   179,    -1,   114,   182,   116,   117,   118,
     119,   120,   121,   122,    -1,    -1,   125,    -1,    -1,    -1,
     129,    -1,    -1,    -1,   133,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   142,   143,   144,   145,    -1,    -1,    -1,
      -1,    -1,    -1,   152,    -1,   154,   155,   156,    -1,   158,
     159,   160,   161,   162,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   173,    -1,    -1,    -1,    -1,   178,
     179,    -1,    -1,   182
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   188,   190,     0,   191,     1,     6,     9,    10,    11,
      12,    16,    19,    20,    22,    27,    28,    32,    35,    38,
      39,    40,    41,    42,    43,    44,    46,    54,    56,    68,
      75,    76,    77,    78,    86,    87,    88,    89,    93,    96,
      97,    99,   102,   104,   105,   106,   107,   108,   109,   110,
     112,   124,   127,   128,   130,   131,   139,   143,   146,   181,
     189,   192,   193,   206,   228,   230,   232,   234,   235,   278,
     315,   326,   329,   331,   337,   342,   349,   352,   355,   358,
     359,   360,   361,   362,   363,   407,   409,   410,   412,   418,
     419,   436,   446,   448,   453,   454,   458,   464,   466,   189,
       1,   143,     1,   182,   303,   189,     9,    55,   143,   237,
     238,   239,     1,    40,   143,   295,   326,   329,     1,   459,
       1,   455,     1,   467,     1,     7,     8,    15,    25,    26,
      29,    30,    33,    34,    37,    56,    57,    60,   105,   114,
     116,   117,   118,   119,   120,   121,   122,   125,   129,   133,
     142,   143,   144,   145,   152,   154,   155,   156,   158,   159,
     160,   161,   162,   173,   178,   179,   182,   250,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   267,
     269,   272,     1,   143,     1,   143,    16,    19,     1,   143,
       1,   143,   182,   240,   189,   286,     1,   272,    85,   272,
     189,   189,   151,   189,     1,   189,   288,   189,     1,     6,
     130,   189,   189,   189,    16,    19,    20,    32,    41,    42,
      97,   130,   362,     6,   143,   308,   143,   305,     1,   290,
       1,    67,   143,     1,   338,   366,   330,     1,   143,     1,
      85,   287,   408,     1,    16,    97,   189,   239,   246,    59,
     229,   229,     1,   143,     1,   143,   301,   189,    85,   294,
     341,   189,     1,   332,   297,    21,    70,   274,   274,     1,
      36,   182,   357,     1,   357,     1,   357,     1,   143,   344,
     345,     1,   130,   143,   189,   440,     1,   189,   424,   184,
     424,   424,     1,   184,   189,   300,   423,     1,   272,   273,
     420,   422,     1,   281,     1,   449,   273,   189,   207,   189,
     303,   252,   253,   254,   273,   189,   184,   189,   189,   143,
     283,   130,   331,    64,   442,   340,   341,   189,   273,   189,
     273,    21,    36,   151,   468,   469,   470,   480,    54,    68,
      69,    70,    75,   354,   356,   240,   182,   182,   182,   182,
     182,   182,   182,   182,   240,   182,   257,   182,   182,   182,
     182,   182,   182,   182,   182,   182,   182,   182,   182,   182,
     182,   182,   182,   182,   182,   182,   182,   182,   182,   257,
     257,   257,   273,    59,   175,   176,   177,   173,   174,   163,
     164,    61,    62,    66,   171,   172,    63,   170,   169,   168,
     167,    64,    65,   185,    67,   354,   189,   189,   189,   447,
      23,    23,   189,   189,   183,   189,     1,   273,   425,    69,
      69,    51,   143,   189,   189,   189,   273,   189,    92,   104,
     135,   143,   143,    16,    19,     1,   364,   189,   184,   184,
     310,   184,   184,   307,   189,   273,   189,   143,    21,    75,
     143,   373,   189,   184,   189,   327,   328,    53,    61,    62,
      72,    80,    81,   147,   148,   149,   165,   166,   427,   428,
     414,   415,   189,   248,   247,   249,   236,   274,   236,   189,
     231,   189,   233,    76,    82,    83,    84,   100,   101,   316,
     318,   319,   325,   312,    51,   143,   312,   189,   312,    21,
      42,   131,   335,   336,   444,   274,     1,    68,   189,   439,
     282,     6,    35,    36,    41,   102,   275,   278,   351,    21,
     189,    58,   150,   226,   272,   279,   189,   344,   189,   344,
     189,   346,   184,   189,   189,   189,   189,   189,   411,   189,
     420,   420,   189,   273,   184,   423,   189,   344,   189,   273,
       1,   184,   284,   208,   227,   273,   252,     1,    85,   189,
     304,   343,   184,   238,   298,    53,   296,   272,    54,   313,
     442,   460,   456,    35,    36,    38,    54,    68,    75,   486,
       1,   226,   471,    21,   469,   183,   183,   272,   273,   272,
     272,   272,   272,   272,   273,   273,   273,     1,   183,   239,
     273,   272,   272,   272,     1,   143,     1,   143,     1,    51,
      52,   143,   273,   251,   272,   272,   272,   272,   272,   272,
     272,   273,   273,   183,    56,    60,   256,   256,   256,   257,
     257,   258,   258,   259,   259,   259,   259,   259,   260,   260,
     261,   262,   263,   266,   268,   270,   269,   184,   462,   463,
     143,   143,   189,     1,   189,   426,   289,   189,   189,   273,
     292,   293,    23,    23,    21,   143,   309,   272,   189,   306,
     272,   189,   291,   367,   413,    51,   143,   425,   273,   416,
     417,   189,   189,   189,    21,   182,   241,   241,   323,   321,
     320,   322,   302,    54,    75,   189,   317,   319,    79,   312,
     445,   373,   273,    21,   189,   189,   274,     1,    71,     1,
      71,     1,    71,    16,    19,    71,    74,   350,   353,     1,
      38,    54,   189,   441,   183,   344,   189,   189,   347,   427,
     345,   416,   423,   423,   421,   189,   450,   189,   143,   189,
     465,     3,     4,     5,    36,    47,    48,    49,    50,    51,
      52,    90,   134,   135,   209,   210,   211,   183,   189,     1,
      51,   143,   254,   462,     1,   273,   429,   442,   314,   313,
     184,   184,   189,    21,   481,    85,     1,    35,   189,   485,
     183,   184,   184,   183,   183,   184,   183,     1,   183,   184,
     184,   183,   183,   183,   183,   183,   184,   183,   184,   183,
     183,   183,   183,   183,   183,   183,   183,   183,   184,   252,
     184,   183,   183,   183,   183,   183,   184,   183,   183,    56,
      64,   264,   265,   269,   143,   189,   463,   197,   195,   189,
     189,   189,    48,    90,   404,    17,    18,    22,    23,    45,
      90,    91,    92,   104,   394,   143,   143,   365,   143,   311,
     273,   189,   227,   368,   369,   370,   371,   443,   444,   414,
     184,    19,    20,    32,    42,   106,   130,   183,   242,   243,
     244,    87,    95,    96,   153,   245,   272,   272,   272,   272,
     274,   324,   273,   333,   181,     1,    75,   189,   437,    21,
     189,   189,   277,   189,   276,   189,     1,     1,   189,     1,
     272,   274,   189,   189,   189,   357,   189,   348,   422,   184,
     285,   134,   227,   227,   227,    50,   226,   214,   226,   226,
     227,   189,   211,   304,   189,   189,   189,   442,    54,   189,
     435,    31,   432,   274,   313,   274,   273,   273,   486,    85,
     483,   143,   189,   189,   272,   272,   272,   183,   143,   272,
     272,   272,   273,   183,   272,   272,   259,   186,     1,   182,
     202,     1,   182,   198,   272,   272,   189,   398,   397,   396,
      75,   395,   399,   189,   196,   194,   368,   184,   181,   375,
     373,   417,   182,   183,   184,   143,   244,    21,   272,   189,
     377,   374,   375,   189,   189,   439,   274,   226,   189,   189,
      69,    69,   280,   273,   273,   465,   143,   214,   213,   123,
     126,   215,   212,    54,   430,   184,   433,   434,    21,    21,
     461,   457,   189,   143,   274,   472,   183,   183,   183,   183,
     183,   184,   183,   183,   183,   184,   183,   183,   271,   189,
     203,   204,   239,   189,   142,   199,   200,   405,   400,   401,
     402,   400,   273,   272,   400,   202,   198,   272,    17,    18,
      21,    23,    45,    73,    90,    91,   376,   372,   226,   243,
       1,    54,   189,   438,   130,   143,   339,    21,    21,   274,
     344,   451,    31,   216,   216,   299,   273,   273,    54,   434,
     438,   438,   462,   462,   482,    83,   479,   272,   272,   269,
     183,   184,   205,   201,   183,   184,    31,   406,   184,   272,
       1,   130,   142,   144,   186,   387,   388,     1,   130,   144,
     379,   380,     1,    18,   378,     1,   130,   142,   144,   186,
     382,   383,   377,   377,   377,   374,   183,   189,   189,   334,
     485,    21,   189,   184,   226,   217,   217,   274,   431,   189,
     189,    21,   226,    82,   183,   183,   189,   204,   226,   226,
     189,   200,   272,   401,   403,   189,   389,   390,   391,   184,
     377,   189,   381,   184,   377,   189,   226,   189,   384,   385,
     386,   184,   377,   340,     1,    36,   189,   484,   273,    76,
     104,   218,   219,   220,   221,   222,    21,    54,   484,   226,
     143,     7,    37,   143,   392,   393,   392,   392,   388,   392,
     380,   377,   392,   392,   392,   383,   189,   189,   452,   226,
      79,    84,   226,   438,   473,   111,   184,   223,   226,   226,
      94,   143,    69,   224,   474,   189,     9,    86,   274,   182,
     475,   225,    69,   252,   476,   183,   274,   477,    21,     1,
     151,   189,   478,   189,   189
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
     219,   220,   221,   222,   223,   222,   224,   224,   225,   224,
     226,   227,   228,   228,   229,   229,   230,   231,   230,   232,
     233,   232,   234,   234,   235,   235,   236,   237,   237,   238,
     239,   239,   240,   240,   241,   241,   241,   242,   242,   243,
     244,   244,   244,   244,   244,   244,   244,   245,   245,   245,
     245,   246,   247,   246,   248,   246,   249,   246,   246,   250,
     250,   250,   250,   250,   250,   250,   250,   250,   250,   250,
     250,   250,   250,   250,   250,   250,   250,   250,   250,   250,
     250,   250,   250,   250,   250,   250,   250,   250,   250,   250,
     250,   250,   250,   250,   250,   250,   250,   250,   250,   250,
     250,   250,   250,   250,   250,   251,   250,   250,   250,   250,
     250,   250,   252,   252,   253,   253,   254,   255,   255,   255,
     256,   256,   256,   256,   256,   257,   257,   257,   257,   258,
     258,   258,   259,   259,   259,   260,   260,   260,   260,   260,
     260,   261,   261,   261,   262,   262,   263,   263,   264,   264,
     265,   266,   265,   267,   268,   267,   269,   270,   271,   269,
     272,   272,   273,   273,   274,   274,   275,   275,   276,   275,
     275,   277,   275,   275,   275,   275,   275,   275,   278,   278,
     278,   278,   278,   278,   278,   278,   278,   278,   279,   278,
     280,   278,   278,   281,   278,   278,   278,   278,   282,   278,
     283,   278,   278,   284,   278,   285,   278,   278,   286,   278,
     287,   278,   278,   288,   289,   278,   278,   290,   291,   278,
     278,   278,   292,   278,   278,   278,   278,   278,   278,   278,
     278,   278,   293,   278,   278,   278,   278,   278,   278,   278,
     278,   294,   278,   278,   278,   295,   296,   278,   278,   297,
     278,   278,   278,   298,   299,   278,   278,   278,   278,   278,
     278,   278,   278,   278,   278,   278,   278,   300,   278,   278,
     278,   278,   278,   278,   278,   278,   278,   278,   278,   278,
     278,   301,   302,   278,   278,   278,   303,   304,   306,   305,
     307,   307,   309,   308,   310,   311,   310,   312,   314,   313,
     315,   315,   316,   317,   317,   317,   318,   318,   320,   319,
     321,   319,   322,   319,   323,   319,   324,   319,   325,   325,
     325,   326,   327,   326,   328,   326,   330,   329,   332,   333,
     334,   331,   331,   335,   336,   335,   338,   337,   339,   339,
     339,   340,   340,   341,   341,   342,   342,   342,   343,   343,
     343,   343,   343,   344,   344,   346,   345,   347,   348,   347,
     349,   350,   351,   351,   352,   352,   353,   353,   354,   354,
     355,   355,   355,   356,   356,   356,   357,   357,   357,   358,
     358,   359,   359,   360,   360,   361,   361,   362,   362,   362,
     364,   365,   363,   363,   366,   367,   363,   363,   368,   368,
     370,   369,   372,   371,   373,   374,   375,   375,   376,   376,
     376,   376,   376,   376,   376,   376,   376,   376,   376,   377,
     377,   378,   378,   379,   379,   381,   380,   380,   382,   382,
     384,   383,   385,   383,   386,   383,   383,   387,   387,   389,
     388,   390,   388,   391,   388,   388,   392,   393,   393,   393,
     393,   394,   394,   394,   394,   395,   394,   394,   396,   394,
     397,   394,   398,   394,   399,   394,   400,   400,   402,   403,
     401,   404,   405,   404,   406,   406,   408,   407,   409,   409,
     411,   410,   413,   412,   415,   414,   416,   416,   417,   418,
     418,   419,   419,   420,   421,   420,   422,   423,   424,   425,
     425,   426,   426,   427,   427,   427,   427,   427,   427,   428,
     428,   428,   428,   428,   428,   430,   431,   429,   432,   429,
     429,   433,   433,   434,   435,   435,   436,   436,   437,   437,
     437,   438,   438,   438,   439,   439,   439,   440,   440,   440,
     440,   441,   441,   441,   441,   442,   442,   443,   443,   444,
     445,   444,   447,   446,   446,   449,   450,   451,   452,   448,
     448,   453,   453,   455,   456,   457,   454,   454,   459,   460,
     461,   458,   458,   462,   462,   463,   464,   465,   467,   466,
     466,   468,   468,   469,   469,   471,   472,   473,   474,   475,
     476,   477,   470,   478,   478,   478,   479,   479,   481,   482,
     480,   480,   483,   483,   484,   484,   484,   485,   485,   485,
     486,   486,   486,   486,   486,   486,   486
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
       3,     3,     2,     0,     0,     4,     0,     2,     0,     6,
       1,     1,     3,     3,     0,     1,     3,     0,     6,     3,
       0,     5,     2,     1,     2,     1,     2,     1,     3,     1,
       1,     1,     0,     2,     0,     2,     3,     1,     3,     2,
       1,     1,     1,     4,     1,     1,     1,     0,     1,     1,
       1,     1,     0,     3,     0,     3,     0,     3,     2,     1,
       1,     1,     1,     1,     6,     6,     4,     6,     4,     4,
       4,     4,     4,     4,     4,     4,     6,     4,     6,     8,
       6,     8,     4,     4,     4,     4,     6,     5,     4,     4,
       6,     6,     4,     6,     4,     4,     4,     4,     4,     4,
       4,     4,     3,     4,     4,     0,     5,     3,     3,     2,
       2,     3,     0,     1,     1,     3,     1,     1,     3,     4,
       1,     2,     2,     2,     2,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       5,     1,     3,     3,     1,     3,     1,     3,     1,     3,
       1,     0,     4,     1,     0,     4,     1,     0,     0,     7,
       1,     3,     1,     2,     0,     2,     1,     3,     0,     7,
       3,     0,     6,     3,     3,     3,     4,     4,     1,     2,
       2,     2,     3,     3,     4,     3,     4,     3,     0,     5,
       0,     8,     3,     0,     4,     3,     4,     3,     0,     6,
       0,     8,     3,     0,     4,     0,     6,     4,     0,     3,
       0,     4,     2,     0,     0,     5,     3,     0,     0,     5,
       3,     3,     0,     6,     5,     4,     4,     3,     2,     2,
       2,     3,     0,     6,     3,     6,     4,     3,     2,     3,
       4,     0,     3,     3,     4,     0,     0,     6,     5,     0,
       5,     3,     3,     0,     0,    11,     1,     1,     1,     1,
       2,     3,     2,     3,     2,     3,     2,     0,     4,     4,
       3,     3,     3,     2,     3,     3,     2,     3,     2,     4,
       4,     0,     0,     7,     3,     2,     0,     1,     0,     4,
       0,     2,     0,     4,     0,     0,     5,     0,     0,     5,
       1,     1,     2,     1,     1,     1,     1,     2,     0,     3,
       0,     3,     0,     3,     0,     3,     0,     4,     0,     1,
       1,     1,     0,     4,     0,     4,     0,     3,     0,     0,
       0,     9,     3,     1,     0,     3,     0,     3,     0,     1,
       1,     0,     1,     2,     2,     1,     3,     3,     1,     3,
       3,     3,     2,     1,     3,     0,     3,     0,     0,     3,
       3,     2,     0,     2,     3,     3,     3,     3,     1,     1,
       3,     3,     3,     1,     1,     1,     0,     2,     2,     2,
       1,     2,     1,     2,     1,     2,     1,     1,     1,     1,
       0,     0,     6,     4,     0,     0,     5,     3,     1,     1,
       0,     3,     0,     4,     0,     2,     0,     2,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     4,     3,     0,
       1,     0,     1,     1,     3,     0,     3,     1,     1,     3,
       0,     3,     0,     3,     0,     3,     1,     1,     3,     0,
       3,     0,     3,     0,     3,     1,     1,     1,     1,     1,
       2,     1,     1,     1,     2,     0,     3,     1,     0,     3,
       0,     3,     0,     3,     0,     3,     1,     3,     0,     0,
       4,     2,     0,     4,     0,     2,     0,     3,     3,     2,
       0,     4,     0,     5,     0,     2,     1,     3,     1,     2,
       2,     1,     1,     1,     0,     4,     1,     1,     1,     2,
       2,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     0,     6,     0,     4,
       2,     1,     2,     2,     1,     1,     2,     1,     1,     2,
       2,     1,     2,     2,     1,     2,     2,     1,     2,     2,
       2,     1,     2,     2,     2,     0,     2,     1,     2,     1,
       0,     4,     0,     5,     3,     0,     0,     0,     0,    13,
       3,     1,     1,     0,     0,     0,     9,     3,     0,     0,
       0,     9,     3,     1,     2,     2,     1,     1,     0,     5,
       5,     1,     2,     1,     1,     0,     0,     0,     0,     0,
       0,     0,    19,     1,     2,     2,     0,     2,     0,     0,
       8,     5,     0,     2,     1,     2,     2,     1,     2,     2,
       0,     1,     1,     1,     1,     1,     1
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
#line 542 "rwlparser.y" /* yacc.c:1646  */
    {
	  ; // we are done!
	}
#line 3649 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 548 "rwlparser.y" /* yacc.c:1646  */
    { if (bit(rwm->mxq->errbits,RWL_ERROR_SEVERE)) YYABORT; }
#line 3655 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 554 "rwlparser.y" /* yacc.c:1646  */
    {  
	    bis(rwm->m2flags, RWL_P2_INTHING);
	    if (bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
	      YYACCEPT;
	  }
#line 3665 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 560 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->m2flags, RWL_P2_INTHING); 
	    if (bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
	      YYACCEPT;
	  }
#line 3675 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 575 "rwlparser.y" /* yacc.c:1646  */
    { rwlprintallvars(rwm); }
#line 3681 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 586 "rwlparser.y" /* yacc.c:1646  */
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
#line 3700 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 602 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->raname = rwm->inam;
	      bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	      bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	      rwm->ravarn = rwladdvar(rwm, rwm->inam, RWL_TYPE_RAST, 0);
	      rwlrastbeg(rwm, rwm->raname, RWL_TYPE_RAST);
	    }
#line 3712 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 611 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->raname = rwm->inam;
	      bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	      rwm->ravarn = rwladdvar(rwm, rwm->inam, RWL_TYPE_RAST, 0);
	      rwlrastbeg(rwm, rwm->raname, RWL_TYPE_RAST);
	    }
#line 3723 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 619 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->raname = rwm->inam;
	      bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	      bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	      rwm->ravarn = rwladdvar(rwm, rwm->inam, RWL_TYPE_RAPROC, 0);
	      rwlrastbeg(rwm, rwm->raname, RWL_TYPE_RAPROC);
	    }
#line 3735 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 628 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->raname = rwm->inam;
	      rwm->ravarn = rwladdvar(rwm, rwm->inam, RWL_TYPE_RAPROC, 0);
	      rwlrastbeg(rwm, rwm->raname, RWL_TYPE_RAPROC);
	    }
#line 3745 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 639 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlrastfin(rwm, rwm->raname, (sb4) rwm->ravarn);
	    }
#line 3753 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 643 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlcancelvar(rwm, rwm->raname, (sb4) rwm->ravarn);
	      rwlrastclear(rwm);
	      rwlerror(rwm, RWL_ERROR_DECL_RAST); 
	      yyerrok;
	    }
#line 3764 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 656 "rwlparser.y" /* yacc.c:1646  */
    {rwm->raentry = rwm->sval; }
#line 3770 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 658 "rwlparser.y" /* yacc.c:1646  */
    {rwlrastadd(rwm, rwm->raentry, rwm->pval.dval); }
#line 3776 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 664 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlrastfin(rwm, rwm->raname, (sb4) rwm->ravarn);
	    }
#line 3784 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 668 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlcancelvar(rwm, rwm->raname, (sb4) rwm->ravarn);
	      rwlrastclear(rwm);
	      rwlerror(rwm, RWL_ERROR_DECL_RAPROC); 
	      yyerrok;
	    }
#line 3795 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 680 "rwlparser.y" /* yacc.c:1646  */
    {rwm->raentry = rwm->inam; }
#line 3801 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 682 "rwlparser.y" /* yacc.c:1646  */
    {rwlrastadd(rwm, rwm->raentry, rwm->pval.dval); }
#line 3807 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 687 "rwlparser.y" /* yacc.c:1646  */
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
#line 3828 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 704 "rwlparser.y" /* yacc.c:1646  */
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
#line 3888 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 760 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DATABASE_WRONG); yyerrok; }
#line 3894 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 766 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
	        if (rwm->dbsav->username)
		  rwlerror(rwm, RWL_ERROR_DBSPEC_ALREADY, "username");
		else
		  rwm->dbsav->username = rwlstrdup(rwm, rwm->pval.sval);
	      }
	    }
#line 3908 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 786 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
	        if (rwm->dbsav->username)
		  rwlerror(rwm, RWL_ERROR_DBSPEC_ALREADY, "username");
		else
		  rwm->dbsav->username = rwlstrdup(rwm, rwm->pval.sval);
	      }
	    }
#line 3922 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 796 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	        rwm->dbsav->password = rwlstrdup(rwm, rwm->pval.sval);
	    }
#line 3931 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 801 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwlcclassgood(rwm, (rwm->pval.sval)))
	      { 
	        if (rwm->dbsav)
		  rwm->dbsav->cclass = rwlstrdup(rwm, rwm->pval.sval);
	      }
	    }
#line 3943 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 809 "rwlparser.y" /* yacc.c:1646  */
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
#line 3960 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 822 "rwlparser.y" /* yacc.c:1646  */
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
#line 3995 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 853 "rwlparser.y" /* yacc.c:1646  */
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
#line 4010 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 864 "rwlparser.y" /* yacc.c:1646  */
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
#line 4025 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 875 "rwlparser.y" /* yacc.c:1646  */
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
#line 4043 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 891 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      { 
		rwm->dbsav->stmtcache = rwlcheckminval(rwm->mxq, 0, rwm->pval.ival
		  , 0, RWL_DEFAULT_STMTCACHE, (text *)"cursorcache");
		bis(rwm->dbsav->flags, RWL_DB_CCACHUSER);
	      }
	    }
#line 4056 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 900 "rwlparser.y" /* yacc.c:1646  */
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
#line 4075 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 918 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
		if (rwm->dbsav->pooltype)
		  rwlerror(rwm, RWL_ERROR_DBPOOL_ALREADY);
	        rwm->dbsav->pooltype = RWL_DBPOOL_POOLED;
		rwm->dbsav->pooltext = "drcp pooled";
	      }
	    }
#line 4089 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 928 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
		if (rwm->dbsav->pooltype)
		  rwlerror(rwm, RWL_ERROR_DBPOOL_ALREADY);
	        rwm->dbsav->pooltype = RWL_DBPOOL_DEDICATED;
		rwm->dbsav->pooltext = "dedicated";
	      }
	    }
#line 4103 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 938 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
		if (rwm->dbsav->pooltype)
		  rwlerror(rwm, RWL_ERROR_DBPOOL_ALREADY);
	        rwm->dbsav->pooltype = RWL_DBPOOL_RETHRDED;
		rwm->dbsav->pooltext = "threads dedicated";
	      }
	    }
#line 4117 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 948 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
		if (rwm->dbsav->pooltype)
		  rwlerror(rwm, RWL_ERROR_DBPOOL_ALREADY);
	        rwm->dbsav->pooltype = RWL_DBPOOL_RECONNECT;
		rwm->dbsav->pooltext = "reconnect";
	      }
	    }
#line 4131 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 965 "rwlparser.y" /* yacc.c:1646  */
    {
#if (RWL_OCI_VERSION<12)
	    rwlerror(rwm, RWL_ERROR_NOT_SUPPORTED_IN_VERSION, "statemark",RWL_OCI_VERSION);
#else
	    bis(rwm->dbsav->flags,RWL_DB_STATEMARK);
#endif
	  }
#line 4143 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 973 "rwlparser.y" /* yacc.c:1646  */
    {
#if (RWL_OCI_VERSION<12)
	    rwlerror(rwm, RWL_ERROR_NOT_SUPPORTED_IN_VERSION, "requestmark",RWL_OCI_VERSION);
#else
	    bis(rwm->dbsav->flags,RWL_DB_REQMARK);
#endif
	  }
#line 4155 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 983 "rwlparser.y" /* yacc.c:1646  */
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
#line 4170 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 994 "rwlparser.y" /* yacc.c:1646  */
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
#line 4186 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 1019 "rwlparser.y" /* yacc.c:1646  */
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
#line 4211 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 1043 "rwlparser.y" /* yacc.c:1646  */
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
#line 4236 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 1067 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      { 
		rwm->dbsav->ptimeout = rwlcheckminval(rwm->mxq, 0, rwm->pval.ival
		  , RWL_DBPOOL_CONNECT==rwm->dbsav->pooltype ? 0: 1
		  , RWL_DBPOOL_DEFAULT_TIMEOUT, (text *)"release timeout");
	      }
	    }
#line 4249 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 1080 "rwlparser.y" /* yacc.c:1646  */
    { 
#if (OCI_MAJOR_VERSION >= 12)
	      if (rwm->dbsav && rwm->pval.dval >= 0)
		rwm->dbsav->wtimeout = rwm->pval.dval;
#else
	    rwlerror(rwm, RWL_ERROR_NOT_YET_IMPL, "sessionpool wait attribute");
#endif
	    }
#line 4262 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 1094 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->dbsav && rwm->pval.dval >= 0)
	      bis(rwm->dbsav->flags, RWL_DB_SPTOBREAK);
	  }
#line 4271 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 1099 "rwlparser.y" /* yacc.c:1646  */
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
#line 4286 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 1110 "rwlparser.y" /* yacc.c:1646  */
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
#line 4302 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 1127 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprimmed(rwm);
	  }
#line 4310 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 1134 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprimmed(rwm);
	  }
#line 4318 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 1150 "rwlparser.y" /* yacc.c:1646  */
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
#line 4334 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 1162 "rwlparser.y" /* yacc.c:1646  */
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
#line 4353 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 1178 "rwlparser.y" /* yacc.c:1646  */
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
#line 4389 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 1214 "rwlparser.y" /* yacc.c:1646  */
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
#line 4404 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 1225 "rwlparser.y" /* yacc.c:1646  */
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
#line 4420 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 1238 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwm->mxq->evar[rwm->codeguess].v2val = rwm->facnt;
	      rwm->supsemerr = RWL_SUPSEM_PROC;
	    }
#line 4429 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 1246 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 4438 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 1251 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 4446 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 1258 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 4455 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 1263 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 4463 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 1270 "rwlparser.y" /* yacc.c:1646  */
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
	  finishcodebody: ; 
	  }
#line 4549 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 1360 "rwlparser.y" /* yacc.c:1646  */
    {
          sb4 l = rwlfindvar(rwm->mxq, rwm->inam, RWL_VAR_NOGUESS);
          if (l>=0)
            rwlprintvar(rwm->mxq, l);
          }
#line 4559 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 1373 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m3flags, RWL_P3_MISBRACK); }
#line 4565 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 1374 "rwlparser.y" /* yacc.c:1646  */
    { bic(rwm->m3flags, RWL_P3_MISBRACK); }
#line 4571 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 1377 "rwlparser.y" /* yacc.c:1646  */
    { if (!bit(rwm->m2flags, RWL_P2_NOWARNDEP)) rwlerror(rwm, RWL_ERROR_MISSING_DECL_BRACK); }
#line 4577 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 1389 "rwlparser.y" /* yacc.c:1646  */
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
#line 4605 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 1417 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_INT; bic(rwm->addvarbits,RWL_IDENT_THRSPEC); }
#line 4611 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 1419 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_DBL; bic(rwm->addvarbits,RWL_IDENT_THRSPEC); }
#line 4617 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 1421 "rwlparser.y" /* yacc.c:1646  */
    { rwm->declslen=RWL_DEFAULT_STRLEN; rwm->dtype=RWL_TYPE_STR; bic(rwm->addvarbits,RWL_IDENT_THRSPEC); }
#line 4623 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 1423 "rwlparser.y" /* yacc.c:1646  */
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
#line 4642 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1438 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwm->dtype = 0;
	      rwlerror(rwm, RWL_ERROR_BAD_ARGUMENT_TYPE, "file");
	    }
#line 4651 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 1443 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwm->dtype = 0;
	      rwlerror(rwm, RWL_ERROR_BAD_ARGUMENT_TYPE, "sql");
	    }
#line 4660 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 1448 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwm->dtype = 0;
	      rwlerror(rwm, RWL_ERROR_BAD_ARGUMENT_TYPE, "clob");
	    }
#line 4669 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 1457 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m4flags,RWL_P4_STATSONLY); }
#line 4675 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 1459 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m4flags,RWL_P4_PROCHASSQL); }
#line 4681 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 1461 "rwlparser.y" /* yacc.c:1646  */
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
#line 4701 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1481 "rwlparser.y" /* yacc.c:1646  */
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
#line 4719 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1496 "rwlparser.y" /* yacc.c:1646  */
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
#line 4737 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1511 "rwlparser.y" /* yacc.c:1646  */
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
#line 4756 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1527 "rwlparser.y" /* yacc.c:1646  */
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
#line 4776 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1570 "rwlparser.y" /* yacc.c:1646  */
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
#line 4793 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1584 "rwlparser.y" /* yacc.c:1646  */
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
#line 4811 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1598 "rwlparser.y" /* yacc.c:1646  */
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
#line 4829 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1612 "rwlparser.y" /* yacc.c:1646  */
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
#line 4845 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1624 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    }
#line 4853 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1627 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_UNIFORM); }
#line 4859 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1628 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LOGB); }
#line 4865 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1629 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LOG); }
#line 4871 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1630 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_EXPB); }
#line 4877 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1631 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_EXP); }
#line 4883 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1632 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_CEIL); }
#line 4889 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1633 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_TRUNC); }
#line 4895 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1634 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_FLOOR); }
#line 4901 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1635 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ROUND); }
#line 4907 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1636 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SQRT); }
#line 4913 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1637 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SIN); }
#line 4919 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1638 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_COS); }
#line 4925 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1639 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ATAN2); }
#line 4931 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1640 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LENGTHB); }
#line 4937 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1642 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_INSTRB2); }
#line 4943 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1644 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_INSTRB3); }
#line 4949 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1646 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SUBSTRB2); }
#line 4955 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1648 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SUBSTRB3); }
#line 4961 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1649 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_GETENV); }
#line 4967 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1650 "rwlparser.y" /* yacc.c:1646  */
    { 
						    if (bit(rwm->m4flags, RWL_P4_SLASHCONVERT)) rwlexprpush0(rwm,RWL_STACK_WINSLASHF2B);
						  }
#line 4975 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1653 "rwlparser.y" /* yacc.c:1646  */
    { 
						    if (bit(rwm->m4flags, RWL_P4_SLASHCONVERT)) rwlexprpush0(rwm,RWL_STACK_WINSLASHF2BB);
						  }
#line 4983 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1656 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SYSTEM); }
#line 4989 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1658 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprpush(rwm,rwm->inam ,RWL_STACK_SYSTEM2STR);
	  }
#line 4997 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1662 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_SYSTEM_BAD); yyerrok;
	    rwlexprpush0(rwm,RWL_STACK_SYSTEM);
	  }
#line 5006 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1666 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ERLANG); }
#line 5012 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1667 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ERLANG2); }
#line 5018 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1669 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ERLANGK); }
#line 5024 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1671 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_NORMALRANDOM); }
#line 5030 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1672 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ISNULL); }
#line 5036 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1674 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ACCESS); }
#line 5042 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1676 "rwlparser.y" /* yacc.c:1646  */
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
#line 5057 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1687 "rwlparser.y" /* yacc.c:1646  */
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
#line 5072 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1698 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprpush(rwm, rwm->inam, RWL_STACK_SERVERRELEASE);
	  }
#line 5080 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1702 "rwlparser.y" /* yacc.c:1646  */
    {
	    // push RWL_T_NULL to make exprfinish work
	    rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    rwlerror(rwm, RWL_ERROR_DBFUN_NEED_IDENT, "serverrelease"); yyerrok;
	  }
#line 5090 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1708 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprpush(rwm, rwm->inam, RWL_STACK_OPENSESSIONCOUNT);
	  }
#line 5098 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1712 "rwlparser.y" /* yacc.c:1646  */
    {
	    // push RWL_T_NULL to make exprfinish work
	    rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    rwlerror(rwm, RWL_ERROR_DBFUN_NEED_IDENT, "opensessioncount"); yyerrok;
	  }
#line 5108 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1718 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprpush(rwm, rwm->inam, RWL_STACK_ACTIVESESSIONCOUNT);
	  }
#line 5116 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1722 "rwlparser.y" /* yacc.c:1646  */
    {
	    // push RWL_T_NULL to make exprfinish work
	    rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    rwlerror(rwm, RWL_ERROR_DBFUN_NEED_IDENT, "activesessioncount"); yyerrok;
	  }
#line 5126 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1728 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->sqname)
	      rwlexprpush(rwm, rwm->sqname, RWL_STACK_SQL_ID);
	  }
#line 5135 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1733 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprpush(rwm, rwm->inam, RWL_STACK_SQL_ID);
	  }
#line 5143 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1737 "rwlparser.y" /* yacc.c:1646  */
    {
	    // push RWL_T_NULL to make exprfinish work
	    rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    rwlerror(rwm, RWL_ERROR_SQLID_NEED_IDENT); yyerrok;
	  }
#line 5153 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1744 "rwlparser.y" /* yacc.c:1646  */
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
#line 5170 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1758 "rwlparser.y" /* yacc.c:1646  */
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
#line 5186 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1770 "rwlparser.y" /* yacc.c:1646  */
    {
            rwlexprpush(rwm, 0, RWL_STACK_DBSECONDS);
          }
#line 5194 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1774 "rwlparser.y" /* yacc.c:1646  */
    {
            rwlexprpush(rwm, 0, RWL_STACK_OCISECONDS);
          }
#line 5202 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1778 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (!bit(rwm->m2flags, RWL_P2_NOWARNDEP) && bit(rwm->m3flags,RWL_P3_MISBRACK))
	      rwlerror(rwm, RWL_ERROR_MISSING_EMPTY_BRACKETS, "runseconds");
	    rwlexprpush(rwm, 0, RWL_STACK_RUNSECONDS);
	  }
#line 5212 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1784 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (!bit(rwm->m2flags, RWL_P2_NOWARNDEP) && bit(rwm->m3flags,RWL_P3_MISBRACK))
	      rwlerror(rwm, RWL_ERROR_MISSING_EMPTY_BRACKETS, "epochseconds");
	    rwlexprpush(rwm, 0, RWL_STACK_EPOCHSECONDS);
	  }
#line 5222 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1803 "rwlparser.y" /* yacc.c:1646  */
    { rwm->aacnt[rwm->furlev]++; }
#line 5228 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1809 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ISNULL); }
#line 5234 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1810 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ISNOTNULL); }
#line 5240 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1816 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_MINUS); }
#line 5246 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1817 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_NOT); }
#line 5252 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1818 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_NOT); }
#line 5258 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1819 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_BITWISE_NOT); }
#line 5264 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1824 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_MUL); }
#line 5270 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1825 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_DIV); }
#line 5276 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1826 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_MOD); }
#line 5282 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1831 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ADD); }
#line 5288 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1832 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SUB); }
#line 5294 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1836 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_BITWISE_LEFT_SHIFT); }
#line 5300 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1837 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_BITWISE_RIGHT_SHIFT); }
#line 5306 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1842 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LESS); }
#line 5312 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1843 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_GREATER); }
#line 5318 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1844 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LESSEQ); }
#line 5324 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1845 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_GREATEREQ); }
#line 5330 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1846 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_BETWEEN); }
#line 5336 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1851 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_EQUAL); }
#line 5342 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1852 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_NOTEQUAL); }
#line 5348 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1857 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_BITWISE_AND); }
#line 5354 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1862 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_BITWISE_XOR); }
#line 5360 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1867 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_BITWISE_OR); }
#line 5366 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1873 "rwlparser.y" /* yacc.c:1646  */
    { 
	    // With AND (and OR) skipdep is used to mark
	    // the expression element we need to skip until
	    // in case the first condition is false (true for OR)
	    rwm->ptail->branchtype = RWL_EXP_ANDBRANCH;
	    if (rwm->skipdep++ >= UB1MAXVAL)
	      rwlsevere(rwm, "[rwlparser-andskip:%d]", rwm->skipdep);
	    rwm->ptail->skipnxt = rwm->skipdep;
	  }
#line 5380 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1883 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprpush2(rwm,0,RWL_STACK_AND, rwm->skipdep);
	    rwm->skipdep--;
	  }
#line 5389 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1892 "rwlparser.y" /* yacc.c:1646  */
    {  
	    // see comment above
	    rwm->ptail->branchtype = RWL_EXP_ORBRANCH;
	    if (rwm->skipdep++ >= UB1MAXVAL)
	      rwlsevere(rwm, "[rwlparser-orskip:%d]", rwm->skipdep);
	    rwm->ptail->skipnxt = rwm->skipdep;
	  }
#line 5401 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1900 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprpush2(rwm,0,RWL_STACK_OR ,rwm->skipdep);
	    rwm->skipdep--;
	  }
#line 5410 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1909 "rwlparser.y" /* yacc.c:1646  */
    {  
	    // With conditional execution we mark the condition
	    // with RWL_EXP_CONDBRANCH1
	    rwm->ptail->branchtype = RWL_EXP_CONDBRANCH1;
	    if (rwm->skipdep++ >= UB1MAXVAL)
	      rwlsevere(rwm, "[rwlparser-condskip:%d]", rwm->skipdep);
	    rwm->ptail->skipnxt = rwm->skipdep;
	  }
#line 5423 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1918 "rwlparser.y" /* yacc.c:1646  */
    {
	    // and the place of ':' (really ELSE) with 
	    // RWL_EXP_CONDBRANCH2
	    rwm->ptail->branchtype = RWL_EXP_CONDBRANCH2;
	    rwm->ptail->skipnxt = rwm->skipdep;
	  }
#line 5434 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1925 "rwlparser.y" /* yacc.c:1646  */
    {  
	    // And the actual conditional is the "end if" place
	    rwlexprpush2(rwm,0,RWL_STACK_CONDITIONAL, rwm->skipdep);
	    rwm->skipdep--;
	  }
#line 5444 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1934 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_CONCAT); }
#line 5450 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1939 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_CONCAT); }
#line 5456 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 1950 "rwlparser.y" /* yacc.c:1646  */
    { rwm->supsemerr = 0; }
#line 5462 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1955 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
	    {
	      rwm->ifdirdep = 0; // since we may be skipping over $else, $endif
	      YYACCEPT;
	    }
	  }
#line 5474 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 1963 "rwlparser.y" /* yacc.c:1646  */
    { yyerrok; }
#line 5480 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 1965 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_COMMAND_NOT_LOCAL, "threads"); yyerrok; }
#line 5486 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 1972 "rwlparser.y" /* yacc.c:1646  */
    { yyerrok; }
#line 5492 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 1974 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_COMMAND_NOT_LOCAL, "run"); yyerrok; }
#line 5498 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 1978 "rwlparser.y" /* yacc.c:1646  */
    { yyerrok; }
#line 5504 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 1980 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_NOT_LOCAL, "database"); yyerrok; }
#line 5510 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 1982 "rwlparser.y" /* yacc.c:1646  */
    { yyerrok ; }
#line 5516 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 1985 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_NOT_LOCAL, "random procedure array"); yyerrok; }
#line 5522 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 1988 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_NOT_LOCAL, "random string array"); yyerrok; }
#line 5528 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 1993 "rwlparser.y" /* yacc.c:1646  */
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
#line 5561 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 2022 "rwlparser.y" /* yacc.c:1646  */
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
#line 5580 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 2037 "rwlparser.y" /* yacc.c:1646  */
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
#line 5595 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 2054 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_LOB); yyerrok; }
#line 5601 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 2061 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_INT); yyerrok; }
#line 5607 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 2067 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_DBL); yyerrok; }
#line 5613 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 2069 "rwlparser.y" /* yacc.c:1646  */
    { 
		rwm->declslen=RWL_DEFAULT_STRLEN;
	      }
#line 5621 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 2075 "rwlparser.y" /* yacc.c:1646  */
    {
	      if (RWL_TYPE_CANCELLED == rwm->pval.vtype)
		rwm->declslen = 1; // kind of a kludge, but this prevents doube
				   // error reporting if using local variable
	      else
	      {
		rwm->declslen = rwm->pval.ival;
	      }
	    }
#line 5635 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 2089 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_STR); yyerrok; }
#line 5641 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 2091 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dtype=RWL_TYPE_FILE;
	    //if (rwm->codename)
	    //  rwlerror(rwm, RWL_ERROR_NOT_LOCAL, "file");
	  }
#line 5651 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 2100 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_FILE); yyerrok; }
#line 5657 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 2105 "rwlparser.y" /* yacc.c:1646  */
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
#line 5682 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 2128 "rwlparser.y" /* yacc.c:1646  */
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
#line 5709 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 2152 "rwlparser.y" /* yacc.c:1646  */
    { if (!rwm->rslerror) rwlcodeadd0(rwm, RWL_CODE_ELSE); }
#line 5715 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 2155 "rwlparser.y" /* yacc.c:1646  */
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
#line 5740 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 2178 "rwlparser.y" /* yacc.c:1646  */
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
		  rwlcodehead(rwm, 1 /*thrcount*/);
		}
		rwlexprbeg(rwm);
	      }
#line 5781 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 2219 "rwlparser.y" /* yacc.c:1646  */
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
#line 5853 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 2288 "rwlparser.y" /* yacc.c:1646  */
    { 
		  rwlerror(rwm, RWL_ERROR_LOOP);
		  rwm->rsllityp[rwm->rsldepth] = RWL_LI_BAD;
		  yyerrok;
		}
#line 5863 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 2295 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SYSTEM); }
#line 5869 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 2298 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprpush(rwm,rwm->inam ,RWL_STACK_SYSTEM2STR);
	  }
#line 5877 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 2303 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_SYSTEM_BAD); yyerrok;
	    rwlexprclear(rwm);
	  }
#line 5886 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 2308 "rwlparser.y" /* yacc.c:1646  */
    {
		/* start a dummy assignment such that expression gets executed */
		rwm->assignvar = RWL_DUMMY_VAR;
		rwm->assignoper = RWL_T_ASSIGN;
		rwlexprbeg(rwm);
	      }
#line 5897 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 2317 "rwlparser.y" /* yacc.c:1646  */
    {
		/* start expression for assign */
		rwm->assignvar = rwm->inam;
		rwlexprbeg(rwm);
	      }
#line 5907 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 2326 "rwlparser.y" /* yacc.c:1646  */
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
#line 5923 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 2338 "rwlparser.y" /* yacc.c:1646  */
    {
	        rwm->assignvar = rwm->codename;
		rwlexprbeg(rwm);
	      }
#line 5932 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 2343 "rwlparser.y" /* yacc.c:1646  */
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
#line 5965 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 2372 "rwlparser.y" /* yacc.c:1646  */
    { 
		  rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		  rwlexprclear(rwm);
		  yyerrok;
		}
#line 5975 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 2379 "rwlparser.y" /* yacc.c:1646  */
    {
	        rwm->assignvar = rwm->codename;
		rwlexprbeg(rwm);
	      }
#line 5984 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 2384 "rwlparser.y" /* yacc.c:1646  */
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
#line 6017 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 2414 "rwlparser.y" /* yacc.c:1646  */
    { 
		  rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		  rwlexprclear(rwm);
		  yyerrok;
		}
#line 6027 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 2422 "rwlparser.y" /* yacc.c:1646  */
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
#line 6045 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 2436 "rwlparser.y" /* yacc.c:1646  */
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
#line 6060 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 2450 "rwlparser.y" /* yacc.c:1646  */
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
#line 6078 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 2466 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (!rwm->codename)
	    {
	      rwlerror(rwm, RWL_ERROR_NOT_DONE_IN_MAIN, "modify database leak");
	      goto dontmoddbpool;
	    }
	    else
	      rwlcodeadd0(rwm, RWL_CODE_MODDBLEAK);
	  }
#line 6092 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 2477 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->codename)
	      rwlcodeadd0(rwm, RWL_CODE_SESRELDROP);
	  }
#line 6101 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 2483 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->codename)
	      rwlcodeadd0(rwm, RWL_CODE_SESRELDROP);
	  }
#line 6110 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 2489 "rwlparser.y" /* yacc.c:1646  */
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
#line 6125 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 2501 "rwlparser.y" /* yacc.c:1646  */
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
#line 6140 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 2513 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->codename)
	      rwlcodeadd0(rwm, RWL_CODE_SHIFT);
	    else
	      if (!bit(rwm->m2flags, RWL_P2_NOEXEC))
		rwlshiftdollar(rwm->mxq, &rwm->loc);
	  }
#line 6152 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 2522 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->codename)
	      rwlcodeadd0(rwm, RWL_CODE_GETRUSAGE);
	    else
	      if (!bit(rwm->m2flags, RWL_P2_NOEXEC))
		rwlgetrusage(rwm->mxq, 0);
	  }
#line 6164 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 2531 "rwlparser.y" /* yacc.c:1646  */
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
#line 6179 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 2544 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_MODIFY); yyerrok; }
#line 6185 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 2557 "rwlparser.y" /* yacc.c:1646  */
    {
	      /* This code can cause lookahead */
	      rwlerror(rwm, RWL_ERROR_BAD_ARG_LIST);
	      rwlexprclear(rwm);
	      yyerrok;
	    }
#line 6196 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 2564 "rwlparser.y" /* yacc.c:1646  */
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
#line 6215 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 2583 "rwlparser.y" /* yacc.c:1646  */
    { rwm->supsemerr = RWL_SUPSEM_EMBSQL; }
#line 6221 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 2589 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m3flags, RWL_P3_IMMPARSEFOR); }
#line 6227 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 2591 "rwlparser.y" /* yacc.c:1646  */
    { bic(rwm->m3flags, RWL_P3_IMMPARSEFOR); }
#line 6233 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 2597 "rwlparser.y" /* yacc.c:1646  */
    {

	      rwm->rslmisc[rwm->rsldepth] = RWL_VAR_NOGUESS;  // see finish wrapper test below
	      bic(rwm->m4flags,RWL_P4_PROCHASSQL); 
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
#line 6320 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 2682 "rwlparser.y" /* yacc.c:1646  */
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
#line 6353 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 2712 "rwlparser.y" /* yacc.c:1646  */
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
#line 6389 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 2745 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_NO_FILE_FOR_FFLUSH);
	    yyerrok;
	  }
#line 6398 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 2752 "rwlparser.y" /* yacc.c:1646  */
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
#line 6425 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 2777 "rwlparser.y" /* yacc.c:1646  */
    {
	      if (rwm->filvarn>=0)
	      {
		if (!rwm->codename) // generating code in main for direct execution
		{
		  rwm->totthr = 0;
		  
		  bis(rwm->mflags, RWL_P_DXEQMAIN);
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
#line 6458 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 2808 "rwlparser.y" /* yacc.c:1646  */
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
#line 6481 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 2836 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_FILE_FOR_WRITE);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6492 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 2845 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_STRING_FOR_SPRINTF);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6503 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 2854 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6514 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 337:
#line 2864 "rwlparser.y" /* yacc.c:1646  */
    {
	      // Note that we do not document this syntax without comma
	      if (rwm->filenam)
		rwlerror(rwm, RWL_ERROR_COMMA_IS_RECOMMENDED, rwm->filenam
		, bit(rwm->mflags,RWL_P_PRINTLINE) ? "writeline" : "write");
	    }
#line 6525 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 340:
#line 2876 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6536 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 341:
#line 2884 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_FILE_FOR_WRITE);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6547 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 342:
#line 2892 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_FILE_FOR_WRITE);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6558 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 343:
#line 2900 "rwlparser.y" /* yacc.c:1646  */
    { 
		if (rwm->codename)
		  rwlcodeadd0(rwm, RWL_CODE_NEWLINE);
		else
		  fputs(bit(rwm->m4flags, RWL_P4_CRNLWRITELINE) ? "\r\n" : "\n", stdout);
		bic(rwm->mflags,RWL_P_PRINTLINE|RWL_P_PRINTBLANK);
	      }
#line 6570 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 345:
#line 2910 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6581 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 347:
#line 2918 "rwlparser.y" /* yacc.c:1646  */
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
#line 6596 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 348:
#line 2929 "rwlparser.y" /* yacc.c:1646  */
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
#line 6635 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 2965 "rwlparser.y" /* yacc.c:1646  */
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
#line 6675 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 350:
#line 3002 "rwlparser.y" /* yacc.c:1646  */
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
#line 6718 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 351:
#line 3042 "rwlparser.y" /* yacc.c:1646  */
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
#line 6739 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 352:
#line 3059 "rwlparser.y" /* yacc.c:1646  */
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
		  bis(rwm->mflags, RWL_P_DXEQMAIN);
		  rwlcodehead(rwm, 1 /*thrcount*/);
		}
	        rwlloophead(rwm);
	      }
	      rwm->rslpcbrk[rwm->rsldepth] = 0;
	      bis(rwm->rslflags[rwm->rsldepth], RWL_RSLFLAG_MAYBRK);
	    }
#line 6764 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 353:
#line 3082 "rwlparser.y" /* yacc.c:1646  */
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
#line 6786 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 354:
#line 3101 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlerror(rwm, RWL_ERROR_UNEXPECTED_AFTER_IDENTIFIER);
	      yyerrok;
	    }
#line 6795 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 355:
#line 3108 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_MISSING_SEMICOLON); yyerrok; }
#line 6801 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 356:
#line 3115 "rwlparser.y" /* yacc.c:1646  */
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
#line 6840 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 357:
#line 3153 "rwlparser.y" /* yacc.c:1646  */
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
#line 6929 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 3241 "rwlparser.y" /* yacc.c:1646  */
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
#line 6957 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 3265 "rwlparser.y" /* yacc.c:1646  */
    {
	  rwm->lobwritedata = rwlexprfinish(rwm);
	  rwm->loboffset = 0;
	}
#line 6966 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 361:
#line 3274 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->loboffset = rwlexprfinish(rwm);
	  }
#line 6974 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 362:
#line 3281 "rwlparser.y" /* yacc.c:1646  */
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
#line 7001 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 363:
#line 3304 "rwlparser.y" /* yacc.c:1646  */
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
#line 7027 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 365:
#line 3330 "rwlparser.y" /* yacc.c:1646  */
    {
	  rwm->lobreadlength = rwlexprfinish(rwm);
	}
#line 7035 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 366:
#line 3334 "rwlparser.y" /* yacc.c:1646  */
    {
	  rwm->loboffset = rwlexprfinish(rwm);
	}
#line 7043 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 367:
#line 3340 "rwlparser.y" /* yacc.c:1646  */
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
#line 7193 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 368:
#line 3490 "rwlparser.y" /* yacc.c:1646  */
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
#line 7307 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 369:
#line 3602 "rwlparser.y" /* yacc.c:1646  */
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
#line 7344 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 370:
#line 3638 "rwlparser.y" /* yacc.c:1646  */
    {  
	    // This syntax is not documented
	    bic(rwm->m3flags, RWL_P3_CLHEADFOR);
	    rwlerror(rwm, RWL_ERROR_LEGACY_CONTROLLOOP_SYNTAX);
	  }
#line 7354 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 371:
#line 3643 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m3flags, RWL_P3_CLHEADFOR); }
#line 7360 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 372:
#line 3647 "rwlparser.y" /* yacc.c:1646  */
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
#line 7377 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 373:
#line 3663 "rwlparser.y" /* yacc.c:1646  */
    { if (bit(rwm->m3flags, RWL_P3_CLHEADFOR))
	      rwlerror(rwm, RWL_ERROR_MIX_LEGACY_CLOOP);
	  }
#line 7385 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 374:
#line 3667 "rwlparser.y" /* yacc.c:1646  */
    { if (bit(rwm->m3flags, RWL_P3_CLHEADFOR))
	      rwlerror(rwm, RWL_ERROR_MIX_LEGACY_CLOOP);
	  }
#line 7393 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 375:
#line 3671 "rwlparser.y" /* yacc.c:1646  */
    { if (!bit(rwm->m3flags, RWL_P3_CLHEADFOR))
	      rwlerror(rwm, RWL_ERROR_MIX_LEGACY_CLOOP);
	  }
#line 7401 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 378:
#line 3682 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7407 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 379:
#line 3684 "rwlparser.y" /* yacc.c:1646  */
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
#line 7424 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 380:
#line 3696 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7430 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 381:
#line 3698 "rwlparser.y" /* yacc.c:1646  */
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
#line 7449 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 382:
#line 3712 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7455 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 383:
#line 3714 "rwlparser.y" /* yacc.c:1646  */
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
#line 7474 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 384:
#line 3728 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7480 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 385:
#line 3730 "rwlparser.y" /* yacc.c:1646  */
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
#line 7497 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 386:
#line 3742 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7503 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 387:
#line 3744 "rwlparser.y" /* yacc.c:1646  */
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
#line 7533 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 388:
#line 3773 "rwlparser.y" /* yacc.c:1646  */
    { rwm->ynqueue = 0; }
#line 7539 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 389:
#line 3774 "rwlparser.y" /* yacc.c:1646  */
    { rwm->ynqueue = RWL_QUEUE_EVERY; }
#line 7545 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 390:
#line 3775 "rwlparser.y" /* yacc.c:1646  */
    { rwm->ynqueue = RWL_NOQUEUE_EVERY; }
#line 7551 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 391:
#line 3779 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->scname = rwm->inam; 
	    bic(rwm->m2flags, RWL_P2_AT|RWL_P2_ATDEFAULT);
	  }
#line 7560 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 392:
#line 3784 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->scname = rwm->inam;
	    bic(rwm->m2flags, RWL_P2_AT|RWL_P2_ATDEFAULT);
	  }
#line 7569 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 393:
#line 3789 "rwlparser.y" /* yacc.c:1646  */
    { 
	      bis(rwm->m2flags, RWL_P2_ATDEFAULT);
	    }
#line 7577 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 394:
#line 3793 "rwlparser.y" /* yacc.c:1646  */
    {
	      bic(rwm->m2flags, RWL_P2_AT|RWL_P2_ATDEFAULT);
	      // lookahead may have consumed the next identifier
	      rwm->scname = (yychar == RWL_T_IDENTIFIER)
	        ? rwm->previnam
	        : rwm->inam;
	    }
#line 7589 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 395:
#line 3801 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->dbname = rwm->inam; 
	      bis(rwm->m2flags, RWL_P2_AT);
	    }
#line 7598 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 396:
#line 3810 "rwlparser.y" /* yacc.c:1646  */
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
#line 7617 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 397:
#line 3825 "rwlparser.y" /* yacc.c:1646  */
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
#line 7649 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 398:
#line 3857 "rwlparser.y" /* yacc.c:1646  */
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
#line 7667 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 399:
#line 3872 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->m3flags, RWL_P3_IMMEDSQL); 
	    bis(rwm->sqsav->flags, RWL_SQLFLAG_IBUSE);
	    bis(rwm->sqsav->flags, RWL_SQLFLAG_IDUSE);
	    if (bit(rwm->m3flags,RWL_P3_IMPLCASE))
	      bis(rwm->sqsav->flags, RWL_SQLFLAG_ICASE);
	  }
#line 7679 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 400:
#line 3881 "rwlparser.y" /* yacc.c:1646  */
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
#line 7720 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 402:
#line 3919 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_SQL_WRONG) ;
	    yyerrok;
	  }
#line 7729 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 404:
#line 3927 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7735 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 405:
#line 3928 "rwlparser.y" /* yacc.c:1646  */
    {
	    if ((rwm->msqlstk = rwlexprfinish(rwm)))
	      bis(rwm->m3flags, RWL_P3_IMMISDYN); // now dynamic
	    else
	    {
	      rwm->mxq->evar[rwm->sqsavvarn].vtype = RWL_TYPE_CANCELLED;
	      rwm->mxq->evar[rwm->sqsavvarn].stype = "cancelled (sql)";
	    }
	  }
#line 7749 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 406:
#line 3940 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->sqllino = rwm->loc.lineno;
	  }
#line 7757 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 410:
#line 3949 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "sql") ;
	  }
#line 7765 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 413:
#line 3960 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bis(rwm->m2flags, RWL_P2_ATDEFAULT);
	  }
#line 7773 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 414:
#line 3964 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dbname = rwm->inam; 
	    bis(rwm->m2flags, RWL_P2_AT);
	  }
#line 7782 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 415:
#line 3972 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->m2flags, RWL_P2_AT|RWL_P2_ATDEFAULT);
	  }
#line 7790 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 416:
#line 3976 "rwlparser.y" /* yacc.c:1646  */
    { 
	      bis(rwm->m2flags, RWL_P2_ATDEFAULT);
	    }
#line 7798 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 417:
#line 3980 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->dbname = rwm->inam; 
	      bis(rwm->m2flags, RWL_P2_AT);
	    }
#line 7807 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 419:
#line 3990 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->dbname = 0;
	      bis(rwm->m2flags, RWL_P2_ATDEFAULT); /* explict choose standard DB */
	    }
#line 7816 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 420:
#line 3996 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->dbname = rwm->inam;
	      bis(rwm->m2flags, RWL_P2_AT); /* named DB */
	    }
#line 7825 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 421:
#line 4001 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_NO_DATABASE_NAME); yyerrok; }
#line 7831 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 422:
#line 4003 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_MISSING_SEMICOLON); yyerrok; }
#line 7837 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 425:
#line 4011 "rwlparser.y" /* yacc.c:1646  */
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
#line 7867 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 426:
#line 4037 "rwlparser.y" /* yacc.c:1646  */
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
#line 7944 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 428:
#line 4114 "rwlparser.y" /* yacc.c:1646  */
    {
		  rwm->assignvar = rwm->inam;
		  rwlexprbeg(rwm);
		}
#line 7953 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 429:
#line 4119 "rwlparser.y" /* yacc.c:1646  */
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
#line 8004 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 434:
#line 4182 "rwlparser.y" /* yacc.c:1646  */
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
#line 8023 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 435:
#line 4197 "rwlparser.y" /* yacc.c:1646  */
    {
              rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
              rwlexprclear(rwm);
              rwm->rslerror++; // to prevent attempting else/endif code generation
              yyerrok;
            }
#line 8034 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 436:
#line 4206 "rwlparser.y" /* yacc.c:1646  */
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
#line 8053 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 437:
#line 4221 "rwlparser.y" /* yacc.c:1646  */
    {
              rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
              rwlexprclear(rwm);
              rwm->rslerror++; // to prevent attempting else/endif code generation
              yyerrok;
            }
#line 8064 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 438:
#line 4230 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_LEGACY_WHILE_SYNTAX);
	  }
#line 8072 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 439:
#line 4234 "rwlparser.y" /* yacc.c:1646  */
    {
	    bis(rwm->rslflags[rwm->rsldepth], RWL_RSLFLAG_WHILOP);
	  }
#line 8080 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 440:
#line 4240 "rwlparser.y" /* yacc.c:1646  */
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
#line 8101 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 441:
#line 4257 "rwlparser.y" /* yacc.c:1646  */
    {
              rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
              rwlexprclear(rwm);
              rwm->rslerror++; // to prevent attempting else/endif code generation
              yyerrok;
            }
#line 8112 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 442:
#line 4264 "rwlparser.y" /* yacc.c:1646  */
    {
              rwlerror(rwm, RWL_ERROR_UNEXPECTED_KEYWORD, "loop");
              rwlexprclear(rwm);
              rwm->rslerror++; // to prevent attempting else/endif code generation
              yyerrok;
            }
#line 8123 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 447:
#line 4281 "rwlparser.y" /* yacc.c:1646  */
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
#line 8143 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 448:
#line 4297 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (rwm->codename)
	      rwlerror(rwm, RWL_ERROR_NO_LOCAL_SUMGLOB);
	    else
	      bis(rwm->addvarbits,RWL_IDENT_GLOBAL);
	  }
#line 8154 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 449:
#line 4307 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dtype=RWL_TYPE_STR;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 8164 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 450:
#line 4313 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->dtype=RWL_TYPE_STR;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 8173 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 451:
#line 4321 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dtype=RWL_TYPE_INT;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 8183 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 452:
#line 4327 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->dtype=RWL_TYPE_INT;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 8192 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 453:
#line 4335 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dtype=RWL_TYPE_DBL;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 8202 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 454:
#line 4341 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->dtype=RWL_TYPE_DBL;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 8211 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 455:
#line 4349 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 8220 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 456:
#line 4354 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 8228 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 457:
#line 4360 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_CLOB; }
#line 8234 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 458:
#line 4361 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_BLOB; }
#line 8240 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 459:
#line 4362 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_NCLOB; }
#line 8246 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 460:
#line 4366 "rwlparser.y" /* yacc.c:1646  */
    { rwm->sqllino = rwm->loc.lineno;}
#line 8252 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 461:
#line 4367 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	    bic(rwm->m2flags, RWL_P2_BADSQLFILTXT);
	    bic(rwm->m3flags, RWL_P3_IMMEDSQL); 
	    bic(rwm->m3flags, RWL_P3_IMMISDYN); 
	    rwm->sqllen = 0;
	    rwm->sqname = rwm->inam;
	  }
#line 8266 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 463:
#line 4378 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_SQL_WRONG); yyerrok;
	  }
#line 8274 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 464:
#line 4381 "rwlparser.y" /* yacc.c:1646  */
    { rwm->sqllino = rwm->loc.lineno;}
#line 8280 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 465:
#line 4382 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bic(rwm->m2flags, RWL_P2_BADSQLFILTXT);
	    bic(rwm->m3flags, RWL_P3_IMMEDSQL); 
	    bic(rwm->m3flags, RWL_P3_IMMISDYN); 
	    rwm->sqllen = 0;
	    rwm->sqname = rwm->inam;
	  }
#line 8293 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 467:
#line 4392 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_SQL_WRONG); yyerrok;
	  }
#line 8301 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 470:
#line 4402 "rwlparser.y" /* yacc.c:1646  */
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
#line 8351 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 471:
#line 4449 "rwlparser.y" /* yacc.c:1646  */
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
#line 8386 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 472:
#line 4483 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->m4flags, RWL_P4_AMPERSAND) && rwldynarcheck(rwm))
	    {
	      rwlerror(rwm, RWL_ERROR_CANNOT_AMPREP_HERE, "named sql declaration");
	      rwm->mxq->evar[rwm->sqsavvarn].vtype = RWL_TYPE_CANCELLED;
	      rwm->mxq->evar[rwm->sqsavvarn].stype = "cancelled (sql)";
	    }
	  }
#line 8399 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 474:
#line 4496 "rwlparser.y" /* yacc.c:1646  */
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
#line 8477 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 475:
#line 4574 "rwlparser.y" /* yacc.c:1646  */
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
#line 8574 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 479:
#line 4677 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_BIND); yyerrok; }
#line 8580 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 481:
#line 4681 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_BINDOUT); yyerrok; }
#line 8586 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 483:
#line 4685 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DEFINE); yyerrok; }
#line 8592 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 484:
#line 4687 "rwlparser.y" /* yacc.c:1646  */
    {
		  bis(rwm->sqsav->flags, RWL_SQFLAG_IGNERR);
		}
#line 8600 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 485:
#line 4691 "rwlparser.y" /* yacc.c:1646  */
    {
		  bic(rwm->sqsav->flags, RWL_SQFLAG_NOCURC);
		}
#line 8608 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 486:
#line 4695 "rwlparser.y" /* yacc.c:1646  */
    {
		  bis(rwm->sqsav->flags, RWL_SQFLAG_NOCURC);
		}
#line 8616 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 487:
#line 4700 "rwlparser.y" /* yacc.c:1646  */
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
#line 8638 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 488:
#line 4719 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ARRAY); yyerrok; }
#line 8644 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 489:
#line 4724 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_MISSING_SEMICOLON_IN_SQL); }
#line 8650 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 492:
#line 4730 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->sqsav->flags, RWL_SQFLAG_DYNAMIC))
	      rwlerror(rwm, RWL_ERROR_DEFINE_ARRAY_NOT_DYNAMIC);
	    else
	      bis(rwm->sqsav->flags, RWL_SQFLAG_ARRAYD);
	  }
#line 8661 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 495:
#line 4744 "rwlparser.y" /* yacc.c:1646  */
    {
	  // Note that it would not be too hard to replace
	  // the integer constant here by an expression
	  // which would make sense as that is what
	  // can be done with modify sql for dynamic sql
	  rwm->bdpos = rwm->ival; rwm->bdtyp=RWL_DEFINE;
	}
#line 8673 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 497:
#line 4753 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->sqsav->flags, RWL_SQLFLAG_IDUSE))
	      rwlerror(rwm, RWL_ERROR_IMPLICIT_ALREADY, "define");
	    bis(rwm->sqsav->flags, RWL_SQLFLAG_IDUSE);
	  }
#line 8683 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 500:
#line 4767 "rwlparser.y" /* yacc.c:1646  */
    { rwm->bdname = rwm->sval; rwm->bdtyp=RWL_BINDOUT_NAME; }
#line 8689 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 502:
#line 4769 "rwlparser.y" /* yacc.c:1646  */
    { 
	    // We could also use expression here, but we would
	    // of course need to check it was either a non-negative number
	    // or a string starting with :
	    rwm->bdpos = bit(rwm->m2flags,RWL_P2_BINDZERO) ? rwm->ival+1 : rwm->ival;
	    rwm->bdtyp=RWL_BINDOUT_POS; 
	  }
#line 8701 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 504:
#line 4777 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->bdtyp=RWL_BINDOUT_SAME;
	  }
#line 8709 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 506:
#line 4781 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_IMPLICIT_NOT_BINDOUT);
	  }
#line 8717 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 509:
#line 4792 "rwlparser.y" /* yacc.c:1646  */
    { rwm->bdname = rwm->sval; rwm->bdtyp=RWL_BIND_NAME; }
#line 8723 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 511:
#line 4794 "rwlparser.y" /* yacc.c:1646  */
    { 
	    // same comment as above
	    rwm->bdpos = bit(rwm->m2flags,RWL_P2_BINDZERO) ? rwm->ival+1 : rwm->ival;
	    rwm->bdtyp=RWL_BIND_POS; 
	  }
#line 8733 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 513:
#line 4800 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->bdtyp=RWL_BIND_SAME;
	  }
#line 8741 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 515:
#line 4804 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->sqsav->flags, RWL_SQLFLAG_IBUSE))
	      rwlerror(rwm, RWL_ERROR_IMPLICIT_ALREADY, "bind");
	    bis(rwm->sqsav->flags, RWL_SQLFLAG_IBUSE);
	  }
#line 8751 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 516:
#line 4813 "rwlparser.y" /* yacc.c:1646  */
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
#line 8849 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 517:
#line 4909 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->inam = RWL_DUMMY_VAR;
	    rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2, "function", "runseconds", "bind/define");
	  }
#line 8858 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 518:
#line 4914 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->inam = RWL_DUMMY_VAR;
	    rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2, "function", "epochseconds", "bind/define");
	  }
#line 8867 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 519:
#line 4918 "rwlparser.y" /* yacc.c:1646  */
    { bic(rwm->m2flags,RWL_P2_BINDRAW); }
#line 8873 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 520:
#line 4919 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m2flags,RWL_P2_BINDRAW); }
#line 8879 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 521:
#line 4923 "rwlparser.y" /* yacc.c:1646  */
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
#line 8900 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 522:
#line 4940 "rwlparser.y" /* yacc.c:1646  */
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
#line 8921 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 523:
#line 4957 "rwlparser.y" /* yacc.c:1646  */
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
#line 8942 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 524:
#line 4974 "rwlparser.y" /* yacc.c:1646  */
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
#line 8969 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 525:
#line 4996 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 8975 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 526:
#line 4997 "rwlparser.y" /* yacc.c:1646  */
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
#line 9010 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 527:
#line 5028 "rwlparser.y" /* yacc.c:1646  */
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
#line 9035 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 528:
#line 5048 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 9041 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 529:
#line 5049 "rwlparser.y" /* yacc.c:1646  */
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
#line 9067 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 530:
#line 5071 "rwlparser.y" /* yacc.c:1646  */
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
#line 9086 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 532:
#line 5086 "rwlparser.y" /* yacc.c:1646  */
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
#line 9105 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 534:
#line 5101 "rwlparser.y" /* yacc.c:1646  */
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
#line 9124 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 538:
#line 5121 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 9130 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 539:
#line 5123 "rwlparser.y" /* yacc.c:1646  */
    { rwm->msqlstk = rwlexprfinish(rwm); }
#line 9136 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 540:
#line 5125 "rwlparser.y" /* yacc.c:1646  */
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
#line 9191 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 541:
#line 5178 "rwlparser.y" /* yacc.c:1646  */
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
#line 9225 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 542:
#line 5208 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->mdbsphi = rwm->mdbsplo = rwlexprfinish(rwm);
	    if (!rwm->mdbsplo)
	      rwlexprclear(rwm);
	  }
#line 9235 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 543:
#line 5214 "rwlparser.y" /* yacc.c:1646  */
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
#line 9268 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 545:
#line 5246 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (!(rwm->mdbsphi = rwlexprfinish(rwm)))
	      rwlexprclear(rwm);
	  }
#line 9277 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 546:
#line 5253 "rwlparser.y" /* yacc.c:1646  */
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
#line 9301 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 548:
#line 5276 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m3flags, RWL_P3_SPFCONCAT); }
#line 9307 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 549:
#line 5277 "rwlparser.y" /* yacc.c:1646  */
    { bic(rwm->m3flags, RWL_P3_SPFCONCAT); }
#line 9313 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 550:
#line 5281 "rwlparser.y" /* yacc.c:1646  */
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
#line 9337 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 551:
#line 5301 "rwlparser.y" /* yacc.c:1646  */
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
#line 9355 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 552:
#line 5319 "rwlparser.y" /* yacc.c:1646  */
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
#line 9378 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 554:
#line 5341 "rwlparser.y" /* yacc.c:1646  */
    {
	  rwm->conhead = rwm->contail = 0;
	}
#line 9386 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 555:
#line 5345 "rwlparser.y" /* yacc.c:1646  */
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
#line 9411 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 558:
#line 5373 "rwlparser.y" /* yacc.c:1646  */
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
#line 9434 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 559:
#line 5394 "rwlparser.y" /* yacc.c:1646  */
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
#line 9459 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 560:
#line 5416 "rwlparser.y" /* yacc.c:1646  */
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
#line 9484 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 561:
#line 5440 "rwlparser.y" /* yacc.c:1646  */
    {  
	    bic(rwm->mflags,RWL_P_PRINTLINE);
	    bic(rwm->mflags,RWL_P_PRINTTOFILE);
	  }
#line 9493 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 562:
#line 5445 "rwlparser.y" /* yacc.c:1646  */
    {  
	    bis(rwm->mflags,RWL_P_PRINTLINE);
	    bic(rwm->mflags,RWL_P_PRINTTOFILE);
	  }
#line 9502 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 564:
#line 5453 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->mflags,RWL_P_PRINTBLANK); }
#line 9508 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 566:
#line 5458 "rwlparser.y" /* yacc.c:1646  */
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
#line 9570 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 567:
#line 5519 "rwlparser.y" /* yacc.c:1646  */
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
#line 9606 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 568:
#line 5554 "rwlparser.y" /* yacc.c:1646  */
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
#line 9621 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 569:
#line 5569 "rwlparser.y" /* yacc.c:1646  */
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
#line 9674 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 570:
#line 5618 "rwlparser.y" /* yacc.c:1646  */
    { 
		rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 9684 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 572:
#line 5628 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_MISSING_SEMICOLON);
	    yyerrok;
	  }
#line 9693 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 573:
#line 5635 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_ASSIGN; }
#line 9699 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 574:
#line 5636 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_GREATEQ; }
#line 9705 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 575:
#line 5637 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_RSHIFTASSIGN; }
#line 9711 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 576:
#line 5638 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_LESSEQ; }
#line 9717 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 577:
#line 5639 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_PIPEFROM; }
#line 9723 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 578:
#line 5640 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_PIPETO; }
#line 9729 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 580:
#line 5644 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_APPEND; }
#line 9735 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 581:
#line 5645 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_ASNADD; }
#line 9741 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 582:
#line 5646 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_ASNSUB; }
#line 9747 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 583:
#line 5647 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_ASNBIS; }
#line 9753 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 584:
#line 5648 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_ASNBIC; }
#line 9759 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 585:
#line 5655 "rwlparser.y" /* yacc.c:1646  */
    {
		rwl_estack *estk;
		rwlexprpush(rwm, rwm->assignvar, RWL_STACK_ASN);
		estk = rwlexprfinish(rwm);
		rwlcodeaddp(rwm, RWL_CODE_ASSIGN, estk);
	      }
#line 9770 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 586:
#line 5662 "rwlparser.y" /* yacc.c:1646  */
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
#line 9800 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 588:
#line 5688 "rwlparser.y" /* yacc.c:1646  */
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
#line 9817 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 590:
#line 5702 "rwlparser.y" /* yacc.c:1646  */
    { 
		rwlerror(rwm, RWL_ERROR_LOOP);
		rwlexprclear(rwm);
		// prevent attempting endloop code generation
		rwm->loopvar[rwm->rsldepth] = 0;
		rwm->rsllityp[rwm->rsldepth] = RWL_LI_BAD;
		bic(rwm->rslflags[rwm->rsldepth], RWL_RSLFLAG_MAYBRK);
		yyerrok;
	      }
#line 9831 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 593:
#line 5721 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwl_lilist *thisli = rwlalloc(rwm, sizeof(rwl_lilist));
	    rwlexprpush(rwm, rwm->loopvar[rwm->rsldepth], RWL_STACK_ASN);
	    thisli->listk = rwlexprfinish(rwm);
	    rwm->rsllitail[rwm->rsldepth]->linxt = thisli;
	    rwm->rsllitail[rwm->rsldepth] = thisli;
	  }
#line 9843 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 596:
#line 5741 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 9852 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 597:
#line 5746 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 9860 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 600:
#line 5755 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "execute") ; }
#line 9866 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 603:
#line 5762 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "loop") ; }
#line 9872 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 606:
#line 5769 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "if") ; yyerrok; }
#line 9878 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 609:
#line 5776 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (0 != rwlstrcmp(rwm->inam, rwm->sqname))
	      rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END2, "sql", rwm->sqname);
	  }
#line 9887 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 610:
#line 5781 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END2, "sql", rwm->sqname) ; yyerrok; }
#line 9893 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 612:
#line 5787 "rwlparser.y" /* yacc.c:1646  */
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
#line 9908 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 613:
#line 5798 "rwlparser.y" /* yacc.c:1646  */
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
#line 9923 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 614:
#line 5809 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (bit(rwm->rslflags[rwm->rsldepth-1], RWL_RSLFLAG_WHILOP))
	      rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "loop") ;
	    else
	      rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "while") ;
	    yyerrok;
	  }
#line 9935 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 615:
#line 5820 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->cursorand = 0;
	  }
#line 9943 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 616:
#line 5825 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->cursorand = rwlexprfinish(rwm);
	  }
#line 9951 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 618:
#line 5832 "rwlparser.y" /* yacc.c:1646  */
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
#line 10010 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 619:
#line 5889 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->loc.errlin = 0;
	    rwm->sqlfile = 0; /* not from a file */
	  }
#line 10019 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 620:
#line 5894 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprbeg(rwm);
	  }
#line 10027 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 621:
#line 5898 "rwlparser.y" /* yacc.c:1646  */
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
#line 10112 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 622:
#line 5981 "rwlparser.y" /* yacc.c:1646  */
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
#line 10136 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 623:
#line 6001 "rwlparser.y" /* yacc.c:1646  */
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
#line 10163 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 624:
#line 6025 "rwlparser.y" /* yacc.c:1646  */
    { 
		rwlerror(rwm, RWL_ERROR_BAD_READLINE);
		yyerrok;
	      }
#line 10172 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 625:
#line 6032 "rwlparser.y" /* yacc.c:1646  */
    { rwm->reg_estk = rwm->str_estk = rwm->sub_estk = 0; }
#line 10178 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 626:
#line 6034 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->reg_estk = rwlexprfinish(rwm);
	  }
#line 10186 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 627:
#line 6038 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->str_estk = rwlexprfinish(rwm);
	  }
#line 10194 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 628:
#line 6042 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->sub_estk = rwlexprfinish(rwm);
	  }
#line 10202 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 629:
#line 6046 "rwlparser.y" /* yacc.c:1646  */
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
#line 10245 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 630:
#line 6085 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprclear(rwm);
	    rwlerror(rwm, RWL_ERROR_BAD_REGEX);
	    yyerrok;
	  }
#line 10255 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 631:
#line 6094 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->m2flags, RWL_P2_REGEXSUBG);
	  }
#line 10263 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 632:
#line 6098 "rwlparser.y" /* yacc.c:1646  */
    {
	    bis(rwm->m2flags, RWL_P2_REGEXSUBG);
	  }
#line 10271 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 633:
#line 6104 "rwlparser.y" /* yacc.c:1646  */
    { rwm->reg_estk = rwm->str_estk = 0; }
#line 10277 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 634:
#line 6106 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->reg_estk = rwlexprfinish(rwm);
	  }
#line 10285 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 635:
#line 6110 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->str_estk = rwlexprfinish(rwm);
	    rwm->idlist = rwm->idtail = 0;
	  }
#line 10294 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 636:
#line 6115 "rwlparser.y" /* yacc.c:1646  */
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
#line 10331 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 637:
#line 6149 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprclear(rwm);
	    rwlerror(rwm, RWL_ERROR_BAD_REGEX);
	    yyerrok;
	  }
#line 10341 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 638:
#line 6158 "rwlparser.y" /* yacc.c:1646  */
    { rwm->reg_estk = rwm->str_estk = 0; }
#line 10347 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 639:
#line 6160 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->reg_estk = rwlexprfinish(rwm);
	  }
#line 10355 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 640:
#line 6164 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->str_estk = rwlexprfinish(rwm);
	    rwm->idlist = rwm->idtail = 0;
	  }
#line 10364 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 641:
#line 6169 "rwlparser.y" /* yacc.c:1646  */
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
#line 10401 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 642:
#line 6203 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprclear(rwm);
	    rwlerror(rwm, RWL_ERROR_BAD_REGEX);
	    yyerrok;
	  }
#line 10411 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 645:
#line 6216 "rwlparser.y" /* yacc.c:1646  */
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
#line 10456 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 646:
#line 6259 "rwlparser.y" /* yacc.c:1646  */
    {
		/* start a dummy assignment such that the system expression gets executed */
		rwm->assignvar = RWL_DUMMY_VAR;
		rwm->assignoper = RWL_T_ASSIGN;
		rwlexprbeg(rwm);
	      }
#line 10467 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 647:
#line 6268 "rwlparser.y" /* yacc.c:1646  */
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
#line 10487 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 648:
#line 6293 "rwlparser.y" /* yacc.c:1646  */
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
#line 10502 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 649:
#line 6305 "rwlparser.y" /* yacc.c:1646  */
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
#line 10525 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 650:
#line 6324 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ILLEGAL_THREAD); yyerrok; }
#line 10531 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 655:
#line 6338 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->cqnstart = rwm->cqnstop = 0.0;
	    rwm->cqnnow = rwlclock(rwm->mxq,0);
	  }
#line 10540 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 656:
#line 6343 "rwlparser.y" /* yacc.c:1646  */
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
#line 10568 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 657:
#line 6368 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->cqnstop = rwm->pval.dval;
	    if (rwm->cqnstop < rwm->cqnstart || rwm->cqnstop < rwm->cqnnow)
	    {
	      rwlerror(rwm, RWL_ERROR_CQN_STOP_BEFORE_START, rwm->cqnstop, rwm->cqnstart, rwm->cqnnow);
	      rwm->cqnat = 0;
	    }
	  }
#line 10581 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 658:
#line 6377 "rwlparser.y" /* yacc.c:1646  */
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
#line 10637 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 659:
#line 6429 "rwlparser.y" /* yacc.c:1646  */
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
#line 10666 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 660:
#line 6454 "rwlparser.y" /* yacc.c:1646  */
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
#line 10698 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 661:
#line 6482 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlcodeaddu(rwm, RWL_CODE_CQNISCB, 0); // Is in callback
	    rwlcodetail(rwm);
	  }
#line 10707 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 665:
#line 6493 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "querynotification");
	    yyerrok;
	  }
#line 10716 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 667:
#line 6502 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->cqnstart = rwm->pval.dval;
	  }
#line 10724 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 668:
#line 6509 "rwlparser.y" /* yacc.c:1646  */
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
#line 10744 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 669:
#line 6527 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlcodetail(rwm);
	  }
#line 10752 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 671:
#line 6532 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ILLEGAL_THREAD); yyerrok; }
#line 10758 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 673:
#line 6537 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->mythr->dbnam = rwm->inam;
	  }
#line 10766 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 676:
#line 6546 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "threads") ; }
#line 10772 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 679:
#line 6554 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "run") ; }
#line 10778 "rwlparser.tab.c" /* yacc.c:1646  */
    break;


#line 10782 "rwlparser.tab.c" /* yacc.c:1646  */
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
