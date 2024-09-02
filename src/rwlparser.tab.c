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
#line 159 "rwlparser.y" /* yacc.c:339  */

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


#line 374 "rwlparser.tab.c" /* yacc.c:339  */

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
    RWL_T_FOR = 276,
    RWL_T_ARRAY = 277,
    RWL_T_DATE = 278,
    RWL_T_SQRT = 279,
    RWL_T_ACCESS = 280,
    RWL_T_REGEX = 281,
    RWL_T_REGEXTRACT = 282,
    RWL_T_UNIFORM = 283,
    RWL_T_ERLANG = 284,
    RWL_T_DOTDOT = 285,
    RWL_T_DOUBLE = 286,
    RWL_T_ERLANG2 = 287,
    RWL_T_ERLANGK = 288,
    RWL_T_RUN = 289,
    RWL_T_THREADS = 290,
    RWL_T_RUNSECONDS = 291,
    RWL_T_WHILE = 292,
    RWL_T_FFLUSH = 293,
    RWL_T_READLINE = 294,
    RWL_T_RANDOM = 295,
    RWL_T_FILE = 296,
    RWL_T_WRITE = 297,
    RWL_T_WRITELINE = 298,
    RWL_T_BINDOUT = 299,
    RWL_T_GETRUSAGE = 300,
    RWL_T_DRCP = 301,
    RWL_T_SESSIONPOOL = 302,
    RWL_T_RECONNECT = 303,
    RWL_T_DEDICATED = 304,
    RWL_T_DEFAULT = 305,
    RWL_T_RESULTS = 306,
    RWL_T_ASSIGN = 307,
    RWL_T_LOOP = 308,
    RWL_T_ALL = 309,
    RWL_T_NULL = 310,
    RWL_T_ISNULL = 311,
    RWL_T_SUM = 312,
    RWL_T_IS = 313,
    RWL_T_NOT = 314,
    RWL_T_LESSEQ = 315,
    RWL_T_GREATEQ = 316,
    RWL_T_NOTEQ = 317,
    RWL_T_AND = 318,
    RWL_T_OR = 319,
    RWL_T_BETWEEN = 320,
    RWL_T_CONCAT = 321,
    RWL_T_IF = 322,
    RWL_T_THEN = 323,
    RWL_T_ELSE = 324,
    RWL_T_NEVER = 325,
    RWL_T_APPEND = 326,
    RWL_T_IGNOREERROR = 327,
    RWL_T_ELSEIF = 328,
    RWL_T_EXECUTE = 329,
    RWL_T_WAIT = 330,
    RWL_T_COMMIT = 331,
    RWL_T_ROLLBACK = 332,
    RWL_T_EVERY = 333,
    RWL_T_ASNADD = 334,
    RWL_T_ASNSUB = 335,
    RWL_T_STOP = 336,
    RWL_T_START = 337,
    RWL_T_COUNT = 338,
    RWL_T_AT = 339,
    RWL_T_BREAK = 340,
    RWL_T_RETURN = 341,
    RWL_T_ABORT = 342,
    RWL_T_MODIFY = 343,
    RWL_T_CURSORCACHE = 344,
    RWL_T_NOCURSORCACHE = 345,
    RWL_T_LEAK = 346,
    RWL_T_SHIFT = 347,
    RWL_T_WHEN = 348,
    RWL_T_STATISTICS = 349,
    RWL_T_NOSTATISTICS = 350,
    RWL_T_FUNCTION = 351,
    RWL_T_PUBLIC = 352,
    RWL_T_OCIPING = 353,
    RWL_T_QUEUE = 354,
    RWL_T_NOQUEUE = 355,
    RWL_T_PRIVATE = 356,
    RWL_T_BEGIN = 357,
    RWL_T_RELEASE = 358,
    RWL_T_SYSTEM = 359,
    RWL_T_CLOB = 360,
    RWL_T_BLOB = 361,
    RWL_T_NCLOB = 362,
    RWL_T_READLOB = 363,
    RWL_T_WRITELOB = 364,
    RWL_T_RAW = 365,
    RWL_T_EXIT = 366,
    RWL_T_SUBSTR = 367,
    RWL_T_SUBSTRB = 368,
    RWL_T_LENGTH = 369,
    RWL_T_LENGTHB = 370,
    RWL_T_SQL_ID = 371,
    RWL_T_GETENV = 372,
    RWL_T_LOG = 373,
    RWL_T_EXP = 374,
    RWL_T_ROUND = 375,
    RWL_T_ACTIVESESSIONCOUNT = 376,
    RWL_T_REQUESTMARK = 377,
    RWL_T_SPRINTF = 378,
    RWL_T_OPENSESSIONCOUNT = 379,
    RWL_T_STATEMARK = 380,
    RWL_T_REGEXSUB = 381,
    RWL_T_REGEXSUBG = 382,
    RWL_T_SERVERRELEASE = 383,
    RWL_T_SQL = 384,
    RWL_T_SQL_TEXT = 385,
    RWL_T_INSTR = 386,
    RWL_T_INSTRB = 387,
    RWL_T_CONNECTIONPOOL = 388,
    RWL_T_CONNECTIONCLASS = 389,
    RWL_T_UNSIGNED = 390,
    RWL_T_HEXADECIMAL = 391,
    RWL_T_OCTAL = 392,
    RWL_T_FPRINTF = 393,
    RWL_T_ENCODE = 394,
    RWL_T_DECODE = 395,
    RWL_T_STRING_CONST = 396,
    RWL_T_IDENTIFIER = 397,
    RWL_T_INTEGER_CONST = 398,
    RWL_T_DOUBLE_CONST = 399,
    RWL_T_PRINTF = 400,
    RWL_T_PIPEFROM = 401,
    RWL_T_PIPETO = 402,
    RWL_T_RSHIFTASSIGN = 403,
    RWL_T_GLOBAL = 404,
    RWL_T_QUERYNOTIFICATION = 405,
    RWL_T_NORMALRANDOM = 406,
    RWL_T_STATISTICSONLY = 407,
    RWL_T_CEIL = 408,
    RWL_T_TRUNC = 409,
    RWL_T_FLOOR = 410,
    RWL_T_LOBPREFETCH = 411,
    RWL_T_SIN = 412,
    RWL_T_COS = 413,
    RWL_T_ATAN2 = 414,
    RWL_T_WINSLASHF2B = 415,
    RWL_T_WINSLASHF2BB = 416,
    RWL_T_BITWISE_LEFT_SHIFT = 417,
    RWL_T_BITWISE_RIGHT_SHIFT = 418,
    RWL_T_ASNBIS = 419,
    RWL_T_ASNBIC = 420,
    RWL_T_UMINUS = 421
  };
#endif

/* Value type.  */
#if ! defined RWLYSTYPE && ! defined RWLYSTYPE_IS_DECLARED

union RWLYSTYPE
{
#line 476 "rwlparser.y" /* yacc.c:355  */

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

#line 603 "rwlparser.tab.c" /* yacc.c:355  */
};

typedef union RWLYSTYPE RWLYSTYPE;
# define RWLYSTYPE_IS_TRIVIAL 1
# define RWLYSTYPE_IS_DECLARED 1
#endif



int rwlyparse (rwl_main *rwm);

#endif /* !YY_RWLY_RWLPARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 619 "rwlparser.tab.c" /* yacc.c:358  */

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
#define YYLAST   5575

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  186
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  294
/* YYNRULES -- Number of rules.  */
#define YYNRULES  676
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1240

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   421

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   177,     2,     2,     2,   176,   168,     2,
     181,   182,   174,   173,   183,   172,     2,   175,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   185,   180,
     170,   169,   171,   184,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   167,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   166,     2,   178,     2,     2,     2,
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
     165,   179
};

#if RWLYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   538,   538,   545,   549,   551,   550,   566,   567,   568,
     570,   573,   580,   582,   599,   598,   608,   607,   616,   615,
     625,   624,   634,   639,   648,   649,   653,   652,   659,   664,
     672,   673,   677,   676,   684,   683,   756,   761,   762,   774,
     775,   778,   779,   782,   792,   797,   805,   818,   849,   860,
     872,   871,   887,   897,   896,   913,   923,   933,   943,   956,
     957,   960,   968,   978,   989,  1004,  1005,  1017,  1019,  1018,
    1031,  1032,  1038,  1037,  1065,  1072,  1079,  1080,  1084,  1085,
    1088,  1101,  1100,  1152,  1164,  1163,  1184,  1189,  1196,  1201,
    1208,  1293,  1294,  1298,  1307,  1308,  1311,  1312,  1313,  1317,
    1318,  1322,  1350,  1352,  1354,  1356,  1371,  1376,  1381,  1389,
    1390,  1392,  1394,  1413,  1415,  1414,  1430,  1429,  1445,  1444,
    1460,  1503,  1517,  1531,  1545,  1557,  1561,  1562,  1563,  1564,
    1565,  1566,  1567,  1568,  1569,  1570,  1571,  1572,  1573,  1574,
    1575,  1577,  1579,  1581,  1583,  1584,  1587,  1590,  1591,  1595,
    1600,  1601,  1602,  1604,  1606,  1607,  1609,  1620,  1631,  1635,
    1641,  1645,  1651,  1655,  1661,  1666,  1670,  1678,  1676,  1703,
    1707,  1711,  1717,  1723,  1727,  1728,  1732,  1733,  1737,  1742,
    1743,  1744,  1749,  1750,  1751,  1752,  1753,  1757,  1758,  1759,
    1760,  1764,  1765,  1766,  1769,  1770,  1771,  1775,  1776,  1777,
    1778,  1779,  1780,  1784,  1785,  1786,  1790,  1791,  1795,  1796,
    1800,  1801,  1805,  1807,  1806,  1824,  1826,  1825,  1841,  1843,
    1852,  1842,  1867,  1868,  1872,  1873,  1883,  1884,  1888,  1896,
    1899,  1898,  1905,  1908,  1907,  1911,  1913,  1915,  1917,  1920,
    1926,  1955,  1970,  1983,  1985,  1986,  1990,  1992,  1996,  1998,
    2003,  2002,  2009,  2008,  2020,  2025,  2024,  2032,  2036,  2060,
    2086,  2084,  2112,  2110,  2220,  2229,  2228,  2232,  2231,  2236,
    2242,  2241,  2251,  2250,  2259,  2272,  2277,  2271,  2305,  2313,
    2318,  2312,  2347,  2354,  2370,  2369,  2382,  2398,  2409,  2415,
    2421,  2433,  2445,  2455,  2465,  2464,  2477,  2483,  2481,  2599,
    2606,  2622,  2624,  2626,  2626,  2627,  2630,  2632,  2634,  2631,
    2636,  2640,  2639,  2754,  2787,  2795,  2820,  2794,  2871,  2872,
    2873,  2874,  2876,  2877,  2885,  2886,  2894,  2895,  2904,  2907,
    2906,  2915,  2917,  2925,  2933,  2942,  2950,  2952,  2959,  2960,
    2971,  3007,  3044,  3085,  3102,  3084,  3143,  3150,  3157,  3156,
    3188,  3189,  3197,  3196,  3244,  3246,  3245,  3255,  3406,  3405,
    3553,  3559,  3562,  3578,  3582,  3586,  3593,  3594,  3598,  3598,
    3612,  3612,  3628,  3628,  3644,  3644,  3658,  3658,  3689,  3690,
    3691,  3694,  3700,  3699,  3709,  3708,  3726,  3725,  3773,  3788,
    3797,  3772,  3834,  3842,  3843,  3843,  3856,  3855,  3862,  3863,
    3864,  3870,  3871,  3875,  3879,  3887,  3891,  3895,  3903,  3904,
    3910,  3916,  3918,  3921,  3922,  3927,  3926,  4028,  4030,  4029,
    4084,  4088,  4092,  4093,  4097,  4112,  4121,  4136,  4145,  4149,
    4155,  4172,  4179,  4189,  4190,  4191,  4195,  4196,  4212,  4222,
    4228,  4236,  4242,  4250,  4256,  4264,  4269,  4276,  4277,  4278,
    4282,  4283,  4282,  4293,  4297,  4298,  4297,  4307,  4314,  4315,
    4318,  4318,  4399,  4397,  4411,  4488,  4585,  4586,  4590,  4591,
    4594,  4595,  4598,  4599,  4602,  4606,  4610,  4614,  4633,  4639,
    4641,  4644,  4645,  4654,  4655,  4660,  4659,  4668,  4678,  4679,
    4683,  4683,  4685,  4684,  4693,  4692,  4696,  4703,  4704,  4708,
    4708,  4710,  4709,  4716,  4715,  4719,  4728,  4824,  4829,  4834,
    4835,  4838,  4855,  4872,  4889,  4912,  4912,  4943,  4964,  4964,
    4987,  4986,  5002,  5001,  5017,  5016,  5033,  5034,  5037,  5039,
    5037,  5093,  5124,  5123,  5160,  5161,  5169,  5168,  5192,  5193,
    5197,  5196,  5235,  5234,  5257,  5257,  5284,  5285,  5288,  5309,
    5331,  5355,  5360,  5368,  5369,  5369,  5373,  5434,  5469,  5484,
    5533,  5542,  5543,  5551,  5552,  5553,  5554,  5555,  5556,  5559,
    5560,  5561,  5562,  5563,  5564,  5571,  5578,  5569,  5604,  5604,
    5617,  5630,  5631,  5635,  5648,  5649,  5656,  5661,  5668,  5669,
    5670,  5675,  5676,  5677,  5682,  5683,  5684,  5689,  5690,  5691,
    5696,  5701,  5702,  5713,  5724,  5735,  5739,  5746,  5747,  5804,
    5810,  5809,  5897,  5896,  5940,  5948,  5950,  5954,  5958,  5947,
    6000,  6009,  6013,  6020,  6022,  6026,  6019,  6064,  6074,  6076,
    6080,  6073,  6118,  6127,  6128,  6131,  6174,  6183,  6209,  6208,
    6239,  6245,  6246,  6249,  6250,  6254,  6259,  6284,  6293,  6345,
    6370,  6398,  6253,  6406,  6407,  6408,  6416,  6417,  6425,  6443,
    6424,  6447,  6451,  6452,  6459,  6460,  6461,  6467,  6468,  6469,
    6474,  6475,  6476,  6477,  6478,  6479,  6480
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
  "RWL_T_INTEGER", "RWL_T_END", "RWL_T_FOR", "RWL_T_ARRAY", "RWL_T_DATE",
  "RWL_T_SQRT", "RWL_T_ACCESS", "RWL_T_REGEX", "RWL_T_REGEXTRACT",
  "RWL_T_UNIFORM", "RWL_T_ERLANG", "RWL_T_DOTDOT", "RWL_T_DOUBLE",
  "RWL_T_ERLANG2", "RWL_T_ERLANGK", "RWL_T_RUN", "RWL_T_THREADS",
  "RWL_T_RUNSECONDS", "RWL_T_WHILE", "RWL_T_FFLUSH", "RWL_T_READLINE",
  "RWL_T_RANDOM", "RWL_T_FILE", "RWL_T_WRITE", "RWL_T_WRITELINE",
  "RWL_T_BINDOUT", "RWL_T_GETRUSAGE", "RWL_T_DRCP", "RWL_T_SESSIONPOOL",
  "RWL_T_RECONNECT", "RWL_T_DEDICATED", "RWL_T_DEFAULT", "RWL_T_RESULTS",
  "RWL_T_ASSIGN", "RWL_T_LOOP", "RWL_T_ALL", "RWL_T_NULL", "RWL_T_ISNULL",
  "RWL_T_SUM", "RWL_T_IS", "RWL_T_NOT", "RWL_T_LESSEQ", "RWL_T_GREATEQ",
  "RWL_T_NOTEQ", "RWL_T_AND", "RWL_T_OR", "RWL_T_BETWEEN", "RWL_T_CONCAT",
  "RWL_T_IF", "RWL_T_THEN", "RWL_T_ELSE", "RWL_T_NEVER", "RWL_T_APPEND",
  "RWL_T_IGNOREERROR", "RWL_T_ELSEIF", "RWL_T_EXECUTE", "RWL_T_WAIT",
  "RWL_T_COMMIT", "RWL_T_ROLLBACK", "RWL_T_EVERY", "RWL_T_ASNADD",
  "RWL_T_ASNSUB", "RWL_T_STOP", "RWL_T_START", "RWL_T_COUNT", "RWL_T_AT",
  "RWL_T_BREAK", "RWL_T_RETURN", "RWL_T_ABORT", "RWL_T_MODIFY",
  "RWL_T_CURSORCACHE", "RWL_T_NOCURSORCACHE", "RWL_T_LEAK", "RWL_T_SHIFT",
  "RWL_T_WHEN", "RWL_T_STATISTICS", "RWL_T_NOSTATISTICS", "RWL_T_FUNCTION",
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
  "$@10", "maybemarks", "eithermark", "maybemaxpoolsize", "mayberelease",
  "maybewait", "$@11", "maybethentimeoutaction", "$@12",
  "compiletime_expression", "compiletime_concatenation",
  "subroutinedeclaration", "isaccepted", "functionhead", "$@13",
  "procedurehead", "$@14", "maybeprivatefunction", "maybeprivateprocedure",
  "codebody", "printvarlist", "printvarelement", "maybeemptybrackets",
  "maybearguments", "formalargumentlist", "formalargument", "argumenttype",
  "maybestatistics", "codeterminator", "$@15", "$@16", "$@17",
  "identifier_or_constant", "$@18", "maybe_expression_list",
  "expression_list", "countexpressions", "primary_expression",
  "unary_expression", "multiplication", "addition", "bitwise_shift",
  "comparison", "equality", "bitwise_and", "bitwise_xor", "bitwise_or",
  "logicaland", "$@19", "logicalor", "$@20", "conditional", "$@21", "$@22",
  "expression", "concatenation", "statementlist", "goodorbadstatement",
  "$@23", "$@24", "statement", "$@25", "$@26", "$@27", "$@28", "$@29",
  "$@30", "$@31", "$@32", "$@33", "$@34", "$@35", "$@36", "$@37", "$@38",
  "$@39", "$@40", "$@41", "$@42", "$@43", "$@44", "$@45", "$@46", "$@47",
  "$@48", "$@49", "writelobhead", "$@50", "maybewritelobtail",
  "readlobhead", "$@51", "maybereadlobtail", "$@52", "docallonesql",
  "dosqlloop", "$@53", "controlloopheader", "controllooplistandend",
  "controlloopheadend", "controllooplist", "controlloopoption", "$@54",
  "$@55", "$@56", "$@57", "$@58", "maybequeue", "callsql", "$@59", "$@60",
  "embeddedsql", "$@61", "immediatesql", "$@62", "$@63", "$@64",
  "getdynamicorinlineimmsql", "$@65", "immediatesqlheader", "$@66",
  "immediatesqlendsqlisok", "immediatesqltail", "immediateatclause",
  "executehead", "maybeatdatabase", "declinitlist", "declinit", "$@67",
  "declinitassign", "$@68", "ifstatements", "elseifstatements",
  "maybeelseiflist", "ifhead", "elseifhead", "whileheadkeyword",
  "whilehead", "whileheadwrongkeyword", "maybethreadsattr",
  "maybeprivatestring", "maybeprivateinteger", "maybeprivatedouble",
  "maybeprivatelob", "eitherlobtype", "sqldeclaration", "$@69", "$@70",
  "$@71", "$@72", "namedsqldeclaration", "dynamicsqlbody", "$@73",
  "staticsqlbody", "$@74", "addsqlvariable", "parsesqlspecifications",
  "sqlspeclist", "sqlspec", "musthaveterminator", "maybearraydefine",
  "definelist", "defineelement", "$@75", "bindoutlist", "bindoutelement",
  "$@76", "$@77", "$@78", "bindlist", "bindelement", "$@79", "$@80",
  "$@81", "bdidentifier", "bdidentname", "modsqlstatement", "$@82", "$@83",
  "$@84", "$@85", "$@86", "modsqlbdlist", "modsqlbd", "$@87", "$@88",
  "moddbstatement", "$@89", "moddbsespmaybedotdot", "printf", "$@90",
  "sprintfheader", "sprintf", "$@91", "fprintf", "$@92",
  "handlefprintflist", "$@93", "printflist", "printfelement", "write",
  "print", "printlist", "$@94", "printelement", "pwterminator",
  "pfterminator", "assignrightside", "assignterminator",
  "declassignoperator", "assignoperator", "loopiterator", "$@95", "$@96",
  "$@97", "commaconcatenationlist", "commaconcatenation",
  "loopiteratorrecover", "maybeprivatefile", "executeterminator",
  "loopterminator", "ifterminator", "sqlterminator", "whileterminator",
  "maybeandexpression", "getstaticsqltext", "getinlinesql", "$@98",
  "readfromfile", "$@99", "regexsub", "$@100", "$@101", "$@102", "$@103",
  "regexsuborsubg", "regextract", "$@104", "$@105", "$@106", "regex",
  "$@107", "$@108", "$@109", "readlist", "readlistelement", "systemstart",
  "systemfinish", "threadexecution", "$@110", "threadlistp", "threadorcqn",
  "cqnthread", "$@111", "$@112", "$@113", "$@114", "$@115", "$@116",
  "$@117", "cqnterminator", "maybecqnstart", "thread", "$@118", "$@119",
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
     415,   416,   417,   418,   419,   420,   124,    94,    38,    61,
      60,    62,    45,    43,    42,    47,    37,    33,   126,   421,
      59,    40,    41,    44,    63,    58
};
# endif

#define YYPACT_NINF -967

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-967)))

#define YYTABLE_NINF -660

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -967,   146,   186,  -967,  3325,  -128,   120,  -967,  -128,   273,
    -967,  -967,  -967,   247,  1861,  1999,  -967,    49,  2066,   122,
     132,   107,  -967,   133,   135,   -46,  -967,  -128,  2204,   275,
    5394,  -128,  -128,   222,  1632,  -128,   174,  -128,  -128,  -967,
    -128,   480,   309,  -967,  -967,  -967,  -967,   272,   304,  2271,
      71,  -967,  -967,    95,  -967,   141,   239,  -967,  -967,  -967,
    -967,  -967,  -967,    54,   433,   433,   142,   143,  -967,  -967,
    -128,   370,  -128,  1562,  -967,    93,  -967,  -967,    50,   104,
     119,   147,  -967,    24,    65,   320,  -128,  -128,  1240,  2409,
     151,  -967,  -967,  2476,  -967,  -967,  5394,  -967,  -967,  -128,
    -967,  -967,  -128,  -967,   -13,  -967,  -128,   365,    76,   383,
     454,   370,  -128,  5394,  -128,  5394,   510,   167,   552,   -46,
     353,   379,   393,   403,   423,   429,   432,   437,   -46,  -967,
     442,  5394,   447,   448,   460,   462,   463,   464,   465,   466,
     468,   473,   474,   476,  -967,   478,  -967,  -967,   479,   482,
     484,   486,   487,   495,   496,   501,   502,  5394,  5394,  5394,
    5394,   490,  -967,  -967,   389,   171,   245,   319,   152,   355,
     384,   371,   598,    -1,  -967,    64,  -128,  -128,  -128,  -967,
     653,   668,  -128,  -967,  -128,  -967,   511,  -128,  -967,  2614,
     629,   362,   255,     5,  -967,  -967,  -128,  -967,  -128,  -967,
    5394,  -967,  -128,   415,   556,  -967,  -967,  -967,  -967,  -967,
    -967,  -967,   360,  -967,  -967,   154,  -967,  -128,   523,   524,
     527,   528,  -128,  5394,  -128,   570,  -967,   693,   640,   573,
    -967,  -128,   533,  -128,   575,  1424,   554,  -967,  -128,  -967,
    -967,  -967,  -967,  -967,  -967,  -967,  -967,  -128,  -967,  -128,
    -967,   589,  -967,   274,  -967,  -128,  -967,   700,   279,  -967,
      45,  -967,  3050,  3455,  -128,   291,  5394,  -967,  -128,   580,
    -128,   580,  -128,  -967,   208,  -967,  -128,  -128,  -128,  -967,
    -967,  -128,  -967,  -967,  -967,  -967,  -967,  -128,  5394,  -967,
    5394,  -967,  -128,  5189,  -967,   210,  -967,  -128,   580,  -128,
    5394,    35,  -967,  5394,  -967,   581,  -967,  -967,  -967,   675,
    -967,  -967,  5394,   676,   454,  -967,  -967,  -967,  -967,  -967,
     494,  2681,  -967,    73,  -967,  -967,  -967,  -967,  -967,  -967,
    -967,  -967,  -967,  -967,  -967,   546,   548,  5394,  5394,  5394,
    5394,  5394,  5394,  -967,  5394,  -967,  5394,  5394,  5394,    39,
    5394,  5394,  5394,  5394,   155,   156,    53,  5394,  -967,  5394,
    5394,  5394,  5394,  5394,  5394,  5394,  5394,  5394,  -967,  -967,
    -967,   549,   351,  5394,  5394,  5394,  5394,  5394,  5394,  5394,
    5394,  5394,  5394,  5394,  5394,  5394,  5394,  5394,  5394,  5394,
    -967,  -967,  -967,  5394,  -967,  -967,  -967,  -967,   551,   590,
     591,  -967,  -967,  -967,  -967,  -128,    67,  -967,  -967,  -967,
    -967,  -967,  -967,  -967,  -967,  -967,  -967,  -128,  -128,  5394,
    -967,  -967,   714,   715,   719,   599,  -967,  -967,  5394,  -128,
    -967,  5394,  -128,  -967,  -967,  -967,  -967,  -967,  -967,  -967,
    -967,  -967,  -967,  -967,   690,   601,  -128,  5394,  -967,  -967,
    -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,
    2614,  -967,  5394,  -967,  -128,  -128,  -128,  -967,  3585,  -967,
    -967,   563,  -967,   563,  -967,  -967,  -967,  -967,  -967,  -967,
    -967,   258,  -967,   667,  -967,  -967,  -967,  -967,  -967,  -967,
    -967,  -967,  -967,  -967,  5394,  -967,  3715,  -128,  -128,  -967,
    -967,  -967,    75,    79,   114,   356,   380,  -967,  -967,   673,
      36,  -967,  -967,  -967,   565,   682,   580,  -967,   208,  -967,
     208,  -967,   396,   580,  -967,  -967,  -967,  -967,  -967,  5394,
    -967,   210,   210,  -967,  -967,  -967,  -967,  -967,   208,  -967,
    -967,  -128,   607,  -128,   303,  -967,  -967,  -967,   551,  2819,
     454,   682,  -967,  -967,   676,   567,   568,  -967,  -967,  -967,
    -967,  -967,  -967,  -128,   732,  -967,   669,    52,  -967,  -967,
    -967,    40,   574,    11,   235,   236,    98,   243,    23,   576,
     578,   579,   582,  -967,   583,    26,   173,   250,   585,   586,
     587,   588,   592,   593,   594,   595,   597,  5394,   112,   260,
     265,   268,   269,   270,   121,   596,   600,  -967,  -967,   701,
    -967,  -967,  -967,   389,   389,   171,   171,   245,   245,   207,
     245,   245,   319,   319,   152,   355,   384,  5394,  5394,  5394,
    -967,   620,   285,  -967,  -967,  -967,  -967,  -128,  -967,  -967,
    -128,  -967,  -967,  -128,    43,   450,   621,   630,  -967,  -967,
     631,   682,  -967,  5394,   682,  -967,  -128,  5122,  -967,  -967,
    -967,  -967,   603,   605,  -967,  -967,  -967,  -967,   606,  -967,
    -967,  -967,  -967,  -967,    69,   685,   287,  5394,  5394,  5394,
    5394,  -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,  5394,
    -967,   610,    55,  -967,  -967,  3845,  -128,  -128,  -967,  -128,
    -967,  -128,   780,   782,  -128,  2886,  -967,  -967,  -128,  -128,
    -128,  -967,  -967,   751,   208,  -967,  -967,  -967,  -967,  -967,
     606,  -967,  -967,  5394,  -967,   608,  -967,  -967,  -967,  -967,
    5327,  5394,  5394,   743,  -967,  5394,  -967,  -967,  -967,  -967,
    5394,  5394,  5394,  -128,   303,  -967,    28,    21,   763,  -967,
     676,  -967,  -967,  5394,  5394,  -967,   494,   710,   654,  -128,
    -128,  -967,  -967,  -967,  5394,  5394,  -967,  -967,  5394,  -967,
     613,  -967,   655,  5394,  -967,  -967,  -967,  -967,  -967,  5394,
    -967,  5394,  -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,
    -967,  5394,   616,  5394,  -967,  -967,  -967,  -967,  -967,  5394,
    -967,  -967,  -967,  5394,   371,   598,   614,  -967,  -967,  -967,
      46,    48,  -967,  -967,  -967,  5394,  5394,  -128,  -967,  -967,
    -967,   726,  -967,  -967,  -967,  -967,  -967,  -128,  -967,  -967,
    5122,  -967,   618,  -967,  -967,   622,  -967,  -967,  -967,  -967,
    -967,  -967,  -967,    56,  5394,  5394,   623,  -967,  -967,  -967,
    -967,  -967,  -967,   240,  -967,   661,   483,  -967,  -967,  -967,
    -967,   682,   682,   682,   682,  3975,  5394,  -128,  -967,  -967,
    -128,  -128,  -967,  -967,    45,  -967,  -967,  -967,  -967,  5394,
    -967,  -128,  -128,  -967,   737,   503,  3180,  -967,  -967,  -967,
    -967,  -967,  5394,  -967,  5394,  -128,   664,  -967,  -967,  -967,
    -967,  -967,   375,  -967,  -967,  -967,  -967,  -967,   756,  -967,
    -967,  -967,  -967,   627,  4105,  -967,  4235,  -967,  -967,  -128,
     671,  -967,  -967,  -967,  -967,   271,   276,   295,  -967,   632,
     212,   296,   297,   363,  -967,   298,   299,   245,  -967,  -128,
     674,  -967,  -128,   670,  -967,   682,   682,  -967,  -967,  -967,
    5394,  -967,  5394,  -967,  -967,    46,    48,  -967,  5394,  -967,
     550,  -967,  -128,   118,  -967,  -967,  -967,  -967,  5394,  -967,
     483,  -967,  -967,    58,   682,  -967,  -967,   -11,   636,  -967,
    -967,  -967,  4365,  -967,  -967,  -967,  -967,  -967,   580,  -967,
    -967,  -967,  -967,   375,   785,  -967,  -967,  -967,   785,  -967,
    5394,  5394,    17,  -967,    58,    58,   551,   551,  -967,  -967,
    4495,   735,  -967,  -967,  -967,  -967,  -967,  5394,  -967,  -967,
    -967,  5394,  -967,  -967,  5394,  -967,  -967,   410,  -967,  -967,
    -967,   413,  -967,   788,   637,  -967,  5394,   637,  -967,   682,
     637,  -967,  -967,   682,    18,    47,  -967,  1794,    22,  -128,
    -128,  -128,  -967,  -967,  -967,  -128,  -128,  -128,   639,  -967,
    -128,  -128,  -967,  -967,  -967,  -967,  -967,  -967,    52,  4625,
     208,   641,  5394,   716,   716,  -967,  -967,  -967,  -967,  -967,
    -967,  -967,   285,   285,   806,  5394,   746,   300,   301,  -967,
    5394,  -128,   674,  5394,  -128,   670,  5394,  -967,  -967,   682,
    -128,  -967,  -967,  -967,  -967,   336,  -967,  -128,  -967,  -967,
     342,  -967,  -128,  -967,  5394,  -128,  -967,  -967,  -967,  -967,
     352,  -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,
    -967,  -967,   370,  -967,    63,  -967,  5394,  -967,  5394,   754,
    -967,  4755,   777,  -967,  -967,    63,  -967,  5394,  -967,  -967,
    -967,  -967,  -967,  -967,  -967,  -967,   682,  -967,   689,  -967,
      88,    88,    88,   -27,  -967,  -967,    88,    -2,  -967,  -967,
    -128,  -967,    88,    88,    88,   367,  -967,  -967,  -128,  -128,
    -967,  -967,  -967,  -967,  5394,  -967,    58,  -967,  -967,  -967,
    -967,  -967,  -967,   723,  -967,  -967,  -967,  -967,  -967,  -967,
    -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,   651,  -967,
    -967,   744,  -967,   694,   771,  -967,  -128,   203,  -967,  -967,
    -967,  -967,   659,  4885,  -967,   774,  5394,  -967,   662,  -967,
    -967,  5015,   823,    74,  -128,  -128,  -967,  -967,  -967,  -967
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       4,     0,     5,     1,     0,     0,     0,   551,   552,     0,
      89,   440,   442,     0,     0,     0,   444,     0,     0,     0,
       0,     0,   587,     0,     0,    94,   360,   270,     0,   405,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    87,
       0,     0,     0,   636,   447,   448,   449,     0,     0,     0,
       0,   621,   622,     0,   386,     0,     0,   536,     3,   240,
       6,     8,    12,     0,    78,    78,     0,     0,     7,   343,
       0,   303,     0,     0,   311,     0,   226,   226,     0,     0,
       0,     0,   446,     0,     0,     0,     0,     0,     0,     0,
       0,   318,   320,     0,   321,   319,     0,     9,   347,     0,
      34,   335,     0,    93,     0,    91,     0,     0,   381,     0,
     605,   401,     0,     0,     0,     0,     0,     0,     0,    94,
       0,     0,     0,     0,     0,     0,     0,     0,    94,   125,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   124,   121,   123,   122,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   179,   182,   187,   191,   194,   197,   203,   206,   208,
     210,   212,   215,   218,   222,     0,     0,     0,     0,   612,
       0,     0,     0,   549,     0,   550,     0,     0,   338,     0,
       0,     0,     0,     0,   290,   291,     0,   340,     0,   274,
       0,   241,     0,     0,     0,   292,   242,   300,    88,   439,
     441,   443,     0,   586,    86,     0,   445,     0,     0,   354,
       0,   350,     0,     0,     0,     0,   539,     0,     0,     0,
     464,     0,     0,     0,   382,     0,     0,   544,     0,   116,
     114,   118,   113,    13,    79,   226,   226,     0,    81,     0,
      84,   378,   357,     0,   357,     0,   357,     0,   394,   226,
       0,   260,     0,     0,     0,     0,     0,   250,     0,     0,
       0,     0,     0,   415,     0,   413,     0,     0,     0,   597,
     243,     0,   558,   326,   540,   324,   322,     0,     0,   557,
       0,   328,     0,   224,   556,     0,   553,     0,     0,     0,
       0,     0,    36,    37,    10,     0,    11,   264,   315,     0,
     396,   308,     0,     0,   605,   402,   632,   629,   627,   624,
     670,     0,   645,     0,   641,   644,   643,   429,   435,   433,
     434,   428,   431,   432,   172,     0,     0,     0,     0,     0,
       0,     0,     0,   171,     0,   185,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   167,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   183,   184,
     186,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     213,   216,   219,     0,   430,   314,   313,   614,     0,     0,
       0,   333,   334,    95,   293,     0,     0,   271,   425,   424,
     406,   407,   283,   339,   278,   276,   296,     0,     0,     0,
     284,   294,     0,     0,     0,     0,   289,   352,     0,     0,
     348,     0,     0,   282,   280,   325,   538,   457,   397,   455,
     387,   323,   542,   346,     0,     0,     0,   174,   563,   566,
     564,   570,   571,   572,   567,   568,   565,   573,   574,   569,
       0,   537,     0,   120,     0,     0,     0,    77,     0,    76,
      80,    96,    83,    96,   374,   370,   368,   372,   379,   380,
     344,   378,   366,     0,   301,   403,   404,   304,   357,   305,
     392,   610,   609,   464,     0,   393,     0,     0,     0,   594,
     259,   226,     0,     0,     0,     0,     0,   227,   228,   420,
       0,   254,   437,   438,     0,    74,     0,   247,     0,   249,
       0,   245,   417,     0,   244,   600,   598,   599,   327,     0,
     332,     0,     0,   337,   225,   554,   336,   257,     0,   620,
     616,     0,     0,     0,    39,    38,    75,    92,     0,     0,
     605,   606,   358,   306,     0,     0,     0,   672,   676,   673,
     675,   671,   674,     0,     0,   658,     0,     0,   642,   169,
     170,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   164,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   174,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   173,   180,     0,
     188,   189,   190,   193,   192,   195,   196,   200,   201,     0,
     198,   199,   205,   204,   207,   209,   211,     0,     0,     0,
     223,     0,     0,   633,    20,    16,   560,     0,   561,   559,
       0,   287,   288,     0,     0,     0,     0,     0,   453,   451,
       0,   355,   341,     0,   351,   342,     0,   460,   544,   383,
     385,   299,     0,   175,   176,   178,   273,   548,   545,   546,
     117,   115,   119,    90,     0,     0,   109,     0,     0,     0,
       0,   226,   365,   364,   363,   362,   367,   376,   302,     0,
     389,     0,     0,   596,   595,     0,     0,     0,   233,     0,
     230,     0,     0,     0,     0,     0,   423,   226,     0,     0,
       0,   601,   258,   436,     0,   246,   248,   416,   418,   414,
     541,   331,   330,     0,   256,     0,   269,   267,   637,   266,
       0,     0,     0,     0,    55,     0,    58,    59,    49,    48,
       0,     0,     0,     0,    40,    41,   605,     0,   578,   226,
       0,   226,   310,     0,     0,   640,   670,   662,     0,     0,
       0,   667,   639,   135,     0,     0,   150,   151,     0,   154,
       0,   147,     0,     0,   139,   166,   165,   144,   128,     0,
     130,     0,   134,   163,   162,   161,   160,   159,   157,   156,
     158,     0,     0,     0,   131,   132,   133,   136,   137,     0,
     145,   146,   181,     0,   214,   217,     0,   635,   613,   634,
       0,     0,   562,   277,   286,     0,     0,     0,   522,   520,
     518,   515,   524,   512,   513,   511,   517,     0,    18,    14,
     460,   353,     0,   349,   281,     0,   456,   459,   466,   458,
     464,   607,   543,     0,     0,     0,   104,   102,   103,   106,
     108,   107,    97,     0,    99,     0,     0,   111,   112,   110,
      85,   375,   371,   369,   373,     0,     0,   479,   466,   395,
       0,     0,   588,   312,     0,   236,   235,   226,   232,     0,
     229,     0,     0,   237,     0,     0,     0,   604,   602,   603,
     252,   251,     0,   555,     0,     0,     0,    46,    43,    44,
      59,    53,    56,    52,    50,    45,    35,    42,     0,   585,
     584,   580,   575,     0,     0,   309,     0,   630,   625,     0,
       0,   226,   646,   669,   668,     0,     0,     0,   149,     0,
       0,     0,     0,     0,   168,     0,     0,   202,   220,     0,
       0,    21,     0,     0,    17,   532,   531,   285,   528,   528,
       0,   514,     0,   528,   295,     0,     0,   452,     0,   608,
       0,   462,     0,     0,   408,   298,   177,   547,     0,    98,
       0,   101,    82,     0,   377,   480,   611,   398,     0,   590,
     589,   261,     0,   226,   238,   239,   427,   426,     0,   419,
     617,   268,    47,    57,    63,    62,    61,    60,    63,   316,
       0,     0,     0,   581,     0,     0,     0,     0,   661,   663,
       0,   656,   155,   126,   152,   148,   142,     0,   127,   129,
     140,     0,   153,   138,     0,    29,    32,     0,    30,    23,
      26,     0,    24,   534,   523,   526,     0,   521,   519,   516,
     525,    19,    15,   356,     0,     0,   461,     0,     0,   479,
     479,   479,   467,   466,   412,     0,     0,     0,     0,   100,
       0,     0,   591,   345,   399,   400,   390,   465,     0,     0,
       0,     0,     0,    65,    65,   226,   576,   583,   579,   582,
     263,   359,     0,     0,     0,     0,     0,     0,     0,   221,
       0,     0,     0,     0,     0,     0,     0,   533,   528,   529,
       0,   505,   499,   501,   503,   479,   497,     0,   487,   485,
     479,   483,     0,   482,     0,     0,   496,   490,   492,   494,
     479,   488,   474,   475,   476,   463,   411,   409,   410,   105,
     593,   592,   401,   234,     0,   253,     0,    64,     0,    67,
      51,     0,     0,   631,   626,     0,   657,     0,   143,   141,
      33,    28,    31,    27,    22,    25,   535,   527,     0,   469,
       0,     0,     0,     0,   468,   473,     0,     0,   472,   478,
     479,   471,     0,     0,     0,     0,   470,   391,     0,     0,
     664,   231,   618,    66,     0,    54,     0,   577,   660,   647,
     530,   508,   507,   509,   500,   506,   502,   504,   498,   486,
     484,   477,   491,   493,   495,   489,   666,   665,     0,    68,
     317,     0,   510,     0,    70,   648,     0,     0,    69,   226,
     619,    71,     0,     0,    72,     0,   174,   650,     0,   226,
      73,     0,     0,     0,     0,     0,   653,   652,   655,   654
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -967,  -967,    -5,  -967,  -967,  -967,  -967,  -967,  -967,  -967,
    -967,  -111,  -967,  -249,  -967,  -108,  -967,  -244,  -967,  -967,
    -967,  -967,  -967,  -967,   105,  -967,  -967,   -50,  -967,  -146,
    -221,  -967,  -967,  -967,  -967,  -306,  -287,  -967,   789,  -967,
    -967,  -967,  -967,  -967,  -967,   609,  -967,   553,   277,   386,
    -967,  -114,     1,  -967,  -967,  -967,  -967,  -967,  -967,  -967,
    -596,  -967,    16,  -967,   181,   -97,   229,  -339,   231,   477,
     475,   472,   241,   242,  -967,  -967,  -967,  -388,  -967,  -967,
     238,   535,   -70,  -967,  -967,  -967,   863,  -967,  -967,  -967,
    -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,
    -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,
    -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,  -236,
    -540,  -967,  -967,  -967,  -967,  -967,   390,  -967,  -967,  -967,
    -967,  -967,  -967,   859,  -967,  -967,   861,  -967,   766,  -967,
    -967,  -967,  -967,  -967,  -967,  -967,  -967,  -253,   809,  -967,
    -967,  -267,   361,  -967,  -967,  -967,  -967,  -967,  -967,  -967,
    -967,   711,  -967,  -967,   -71,  -967,  -967,  -967,  -967,   -31,
    -967,  -967,  -967,  -967,  -967,    57,  -967,  -967,  -967,  -967,
    -480,  -165,    51,  -967,  -737,  -967,  -967,  -276,  -967,  -967,
    -282,  -967,  -967,  -967,  -967,  -269,  -967,  -967,  -967,  -488,
    -967,  -967,  -967,  -967,  -967,  -967,  -967,  -465,  -203,  -967,
    -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,
    -967,   246,  -967,   368,    60,  -967,  -967,   293,  -967,   175,
    -274,   387,   436,  -967,   377,  -967,  -967,  -967,  -967,  -967,
    -967,  -102,  -967,  -967,  -967,  -966,    29,  -967,  -967,  -297,
    -967,   648,  -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,
    -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,  -537,
    -620,  -967,    12,  -967,  -967,  -967,   602,  -967,  -967,  -967,
    -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,
    -967,  -237,  -159,   163
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    59,     2,     4,    60,    61,   956,   811,   955,
     810,   944,  1031,  1032,  1093,   941,  1027,  1028,  1090,    62,
     303,   544,   743,   744,   745,   998,   994,   902,   997,  1073,
    1139,  1185,  1214,  1218,  1226,   514,   835,    63,   245,    64,
     471,    65,   473,    66,    67,   467,   104,   105,   187,   675,
     853,   854,   855,   860,   243,   465,   464,   466,   161,   597,
     662,   663,   664,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   627,   173,   628,   174,   629,  1024,
     293,   546,   468,   507,   879,   877,   508,   516,   988,   298,
     501,   309,   543,   895,   189,   236,   200,   640,   223,   656,
     644,   645,   447,   254,   109,   550,   259,   548,  1075,   290,
     251,   681,   221,   653,   432,   219,   650,   429,   832,   484,
     553,   751,    69,   480,   685,   481,   482,   679,   678,   680,
     677,   866,   483,    70,   444,   445,    71,   230,    72,   258,
     868,  1132,   493,   494,    73,   228,  1066,   314,   315,    74,
     965,   274,   275,   522,   717,   892,    75,   706,   509,    76,
     707,   332,    77,   333,   267,    78,    79,    80,    81,    82,
      83,   425,   830,   229,   657,   836,   837,   838,   839,  1053,
     440,   977,   978,  1052,   976,  1114,  1110,  1111,  1166,  1120,
    1121,  1172,  1173,  1174,  1105,  1106,  1160,  1161,  1162,  1194,
    1195,   827,   952,   950,   949,   948,   953,  1034,  1035,  1036,
    1158,   817,  1033,  1097,    84,   237,    85,    86,   529,    87,
     658,   461,   462,   668,   669,    88,    89,   295,   723,   296,
     291,   283,   407,   639,   459,   460,   749,  1000,  1142,   913,
    1002,  1003,   911,    90,   873,  1063,   500,   280,   712,   313,
     840,   841,   689,    91,   398,    92,   300,   725,  1071,  1208,
      93,    94,   115,   556,  1007,    95,   113,   555,  1006,   632,
     633,    96,   729,    97,   117,   323,   324,   325,   566,  1011,
    1211,  1219,  1225,  1229,  1232,  1237,  1086,   326,   757,  1084,
     921,  1181,   762,   563
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      98,   792,   518,   101,   520,   630,   262,   263,   269,   271,
     216,   746,   809,   690,   752,   565,   545,   554,   487,  1100,
     489,   536,   188,  1115,   770,   276,   194,   195,   197,   199,
     201,   538,   205,   206,   345,   207,   541,   708,  1080,  1081,
     581,   617,   618,   619,   620,   621,   497,   939,  1107,   942,
     116,   264,    58,   759,   592,   238,   870,   962,   242,  1060,
     368,   369,   370,   391,  1178,   252,   281,   256,   637,   239,
    1078,   393,   224,   709,   909,  1234,   696,   393,   279,   282,
     698,   282,   282,   289,  -638,   265,   760,   846,   847,   710,
     815,   312,   393,   567,   302,  1191,   227,   304,  1179,   306,
     848,   307,  1101,   593,   594,   268,   393,   316,   321,   318,
     849,  1061,   498,   260,  1102,   700,  1103,   327,  1064,  1055,
     270,    99,   180,   176,  1192,   181,   809,  1108,  -262,   871,
     393,  1065,   816,   178,   182,   186,   184,   225,   331,   265,
     963,  1109,   231,   247,   249,   697,     3,  1101,   272,   699,
     240,  1116,   297,   277,   265,   424,   588,   590,  1104,  1102,
     234,  1103,   261,  1117,   393,  1118,   278,    58,  1056,  -396,
     305,   395,   396,   397,   850,   202,  1108,   401,   393,   402,
     203,   582,   404,   392,   701,    58,    -2,   393,   412,   496,
    1109,   413,  -436,   414,   765,   595,   241,   416,   851,  -638,
    1001,    58,   321,  1104,    58,   771,   772,  1119,   778,   779,
     915,   631,   426,   226,   385,  -265,    58,   433,   542,   435,
    1210,   583,   763,   322,  1235,    58,   441,   940,   443,   943,
    1193,   266,    58,   463,    58,    58,    58,  -454,    58,   393,
     233,   806,   470,    58,   472,    58,  -436,    58,   106,   714,
     488,   852,   688,   750,    58,   499,   175,   721,   722,   511,
    1057,  -436,   100,   517,   177,   519,   191,   521,   193,   524,
     803,   525,   526,   527,   179,   183,   528,   185,   393,   613,
     614,   768,   530,   232,   248,   250,   107,   533,  1221,   273,
     289,  -272,   537,  -255,   539,   793,  -450,   589,   591,  -272,
    -272,   393,   393,   204,   799,   410,   730,   731,   732,   393,
    -272,   682,  1122,  1123,  1124,   217,   393,   322,  -272,  -272,
     491,   386,  -361,   234,   485,  -361,   393,   102,  -361,  -361,
    -361,   393,   683,   474,   393,   393,   393,   393,   733,   475,
     476,   477,   393,   376,   377,  1222,  -361,  -361,   512,   734,
     735,   736,   737,   738,   739,   780,   781,   478,   479,   192,
     961,   393,   393,   393,   393,   393,   393,   393,  1164,   378,
     379,   702,   196,  1168,   703,   422,  -307,    54,   423,   380,
     381,   857,   858,  1176,   382,  -272,  -272,  -272,    58,   108,
      58,   523,   740,   535,  1016,  1017,   334,   411,   209,   210,
     636,   638,    58,  -272,  -272,   343,   608,   378,   379,   492,
     609,   211,   641,   642,   218,   103,   486,   766,   767,  -381,
     235,   213,   969,   970,   652,   769,   704,   655,   393,   901,
     409,   695,   782,  1201,   903,   904,   741,   742,    58,   859,
     513,   661,   794,   897,   898,   899,   220,   795,   448,   908,
     796,   797,   798,  1012,   253,   905,   449,   450,  1013,   670,
     671,   672,   809,   809,   937,    58,   818,   819,   631,  1082,
    1083,   820,   821,   285,   286,   216,   684,  1014,  1018,  1019,
    1022,  1023,  1148,  1149,  1037,    44,    45,    46,  1040,   383,
     384,   244,   693,   694,   822,   208,  1116,   995,   209,   210,
     996,   846,   847,   284,   515,   711,   417,   308,  1117,   215,
    1118,   211,   310,   715,   848,   716,    58,   312,   418,  1163,
     212,   213,    58,   387,   849,  1167,   289,   289,   557,   558,
     320,   559,    58,   724,   335,  1175,   726,   389,   728,   823,
     824,   825,   454,   455,   456,  1020,  1021,   560,   372,   419,
     551,   388,  1119,   826,   610,   611,   612,   420,   755,   515,
     336,   561,   761,   373,   374,   375,  1044,  1045,   562,   393,
    1046,   987,  1047,   983,   337,   571,   214,   573,   574,   575,
     576,   531,   577,   532,   338,    44,    45,    46,   850,   585,
     586,   587,  1091,  1092,  1048,  1094,  1095,   598,   599,   600,
     601,   602,   603,   604,   339,   327,   448,   615,   616,   215,
     340,   865,   851,   341,   449,   450,   622,   623,   342,   328,
     329,   330,  1049,   344,   294,   451,   331,   808,   346,   347,
    1228,   301,   812,   452,   453,   813,  1089,   886,   814,  1050,
    1051,   348,   890,   349,   350,   351,   352,   353,   317,   354,
     319,   834,  1044,  1045,   355,   356,  1067,   357,  1047,   358,
     359,   390,  1058,   360,   474,   361,   651,   362,   363,   654,
     475,   476,   477,  1196,  1197,   399,   364,   365,  1199,   914,
    1048,   916,   366,   367,  1202,  1203,  1204,   872,   478,   479,
     400,   875,   876,   403,   878,   371,   880,   408,   421,   883,
     454,   455,   456,   887,   888,   889,   427,   428,  1049,   891,
     430,   431,   436,   437,   438,   439,   442,  -384,   457,   458,
     490,  1070,   273,   103,   406,  1050,  1051,   549,   569,   552,
     570,   607,   634,   635,   631,   415,   646,   647,   906,   648,
     659,   649,   910,   660,   674,   687,   705,   713,   393,   727,
     753,   754,   756,   758,   923,   924,   802,   764,   434,   773,
     774,   775,   807,   828,   776,   777,  1137,   783,   784,   785,
     786,   856,   829,   831,   787,   788,   789,   790,   800,  1146,
     791,   881,   801,   882,  1150,   843,   265,  1153,   844,   845,
     869,   894,   900,   912,   920,   928,   922,   929,   934,   938,
     951,   958,   959,   971,   968,   986,   992,   982,  1170,   999,
    1001,  1030,   947,  1009,  1015,  1072,  1026,  1085,  1096,  1138,
    1098,  1129,   954,   294,  1136,   294,  1145,  1147,   534,  1184,
    1187,  1190,  1183,  1212,  1213,   540,  1216,  1215,   964,  1217,
    1224,  1189,  1227,  1233,  1230,  1042,  1155,  1041,  1152,   907,
     993,  1010,  1074,  1140,   246,   469,  1059,   972,   547,   676,
     966,   626,   975,   625,   624,   979,   980,    68,   804,   499,
     805,   686,   110,   572,   111,   311,   984,   985,  1209,  1177,
     255,   578,   579,   580,   719,   584,   394,   957,  1125,   960,
     728,  1200,   596,  1205,  1198,  1157,   666,   720,   893,   718,
    1079,   605,   606,   981,   842,   967,   495,   991,  1188,  1133,
       0,     0,     0,  1069,  1008,   861,   862,   863,   864,   919,
       0,     0,     0,     0,     0,   568,     0,     0,     0,     0,
       0,     0,     0,     0,  1025,     0,     0,  1029,     0,     0,
       0,     0,     0,   885,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   643,     0,     0,  1054,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1062,     0,
       0,     0,     0,   515,     0,     0,     0,     0,   515,   515,
       0,     0,   665,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   406,     0,   667,     0,  1062,
    1062,     0,   925,   926,     0,  1141,   927,     0,     0,     0,
       0,   930,     0,     0,     0,     0,     0,   931,     0,   932,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   691,
       0,   935,     0,     0,     0,     0,     0,   936,     0,     0,
       0,     0,     0,     0,   975,   975,   975,     0,     0,     0,
    1126,  1127,  1128,   945,   946,  1130,  1131,     0,     0,     0,
       0,     0,     0,   761,   667,  1135,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1143,  1144,     0,
       0,     0,     0,     0,   748,     0,  1151,     0,     0,  1154,
       0,     0,     0,     0,     0,  1159,     0,     0,     0,     0,
     975,     0,  1165,     0,   974,   975,     0,  1169,     0,     0,
    1171,     0,     0,     0,     0,   975,     0,   515,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1180,
       0,     0,   665,     0,     0,     0,     0,     0,     0,     0,
    1180,     0,     0,     0,     0,     0,     0,     0,     0,  1223,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1231,
       0,     0,     0,     0,     0,   975,     0,     0,     0,     0,
       0,     0,     0,  1206,  1207,     0,     0,     0,     0,     0,
       0,  1062,     0,     0,     0,     0,     0,     0,   833,     0,
    1039,     0,     0,     0,     0,     0,  1043,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   515,     0,     0,     0,
       0,  1220,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   867,     0,     0,     0,  1236,  1238,
    1239,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   287,     0,     0,     0,     0,     0,  -329,  -329,     0,
       0,     0,     0,     0,  -329,  1087,     0,     0,   294,  1088,
       0,     0,     0,     0,  -329,  -329,     0,     0,  -329,  -329,
       0,     0,  -329,  -329,  1099,     0,  -329,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   917,   918,
       0,     0,     0,     0,     0,  -329,  -329,     0,     0,  -329,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     515,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   515,     0,     0,   933,     0,   515,     0,
       0,   515,     0,     0,  1156,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -329,     0,     0,     0,     0,     0,
       0,     0,   515,  -329,     0,  -329,  -329,  -329,  -329,  -329,
    -329,  -329,     0,     0,  -329,     0,     0,     0,  -329,     0,
       0,     0,  -329,     0,     0,     0,   515,     0,     0,   665,
     667,  -329,  -329,  -329,  -329,   515,     0,     0,     0,     0,
       0,  -329,     0,  -329,  -329,  -329,     0,  -329,  -329,  -329,
    -329,  -329,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -329,     0,     0,     0,     0,  -329,  -329,     0,
      58,  -329,   515,   288,     0,   446,     0,   989,     0,   990,
       0,  -297,  -297,     0,     0,     0,     0,     0,  -297,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -297,  -297,
       0,     0,  -297,  -297,     0,     0,  -297,  -297,     0,     0,
    -297,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -297,
    -297,     0,     0,  -297,     0,  1038,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -297,     0,
       0,     0,     0,     0,     0,  1076,  1077,  -297,     0,  -297,
    -297,  -297,  -297,  -297,  -297,  -297,     0,     0,  -297,     0,
       0,     0,  -297,     0,     0,     0,  -297,     0,     0,     0,
       0,     0,     0,   257,     0,  -297,  -297,  -297,  -297,  -388,
    -388,     0,     0,     0,     0,  -297,  -388,  -297,  -297,  -297,
       0,  -297,  -297,  -297,  -297,  -297,  -388,  -388,     0,     0,
    -388,  -388,     0,     0,  -388,  -388,  -297,     0,  -388,     0,
       0,  -297,  -297,  -388,     0,  -297,  -297,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -388,  -388,     0,
       0,  -388,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   198,     0,     0,     0,     0,     0,  -275,
    -275,     0,     0,     0,     0,     0,  -275,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -275,  -275,     0,     0,
    -275,  -275,     0,     0,  -275,  -275,  -388,     0,  -275,     0,
       0,  1182,     0,     0,     0,  -388,     0,  -388,  -388,  -388,
    -388,  -388,  -388,  -388,     0,     0,  -388,  -275,  -275,     0,
    -388,  -275,  -388,     0,  -388,     0,     0,     0,     0,     0,
       0,     0,     0,  -388,  -388,  -388,  -388,     0,     0,     0,
       0,     0,     0,  -388,     0,  -388,  -388,  -388,     0,  -388,
    -388,  -388,  -388,  -388,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -388,     0,  -275,     0,     0,  -388,
    -388,     0,     0,  -388,     0,  -275,     0,  -275,  -275,  -275,
    -275,  -275,  -275,  -275,     0,     0,  -275,     0,     0,     0,
    -275,   665,     0,     0,  -275,     0,     0,     0,     0,     0,
       0,     0,     0,  -275,  -275,  -275,  -275,     0,     0,     0,
       0,     0,     0,  -275,     0,  -275,  -275,  -275,     0,  -275,
    -275,  -275,  -275,  -275,     0,  1112,     0,     0,     0,     0,
       0,  -481,  -481,     0,  -275,     0,     0,     0,  -481,  -275,
    -275,  1113,    58,  -275,     0,     0,     0,     0,  -481,  -481,
       0,     0,  -481,  -481,     0,     0,  -481,  -481,     0,     0,
    -481,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -481,
    -481,     0,     0,  -481,     0,     0,     0,     0,     0,     0,
       0,     0,   112,     0,     0,     0,     0,     0,  -628,  -628,
       0,     0,     0,     0,     0,  -628,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -628,  -628,     0,     0,  -628,
    -628,     0,     0,  -628,  -628,     0,     0,  -628,  -481,     0,
       0,     0,     0,     0,     0,     0,     0,  -481,     0,  -481,
    -481,  -481,  -481,  -481,  -481,  -481,  -628,  -628,  -481,     0,
    -628,     0,  -481,     0,     0,     0,  -481,     0,     0,     0,
       0,     0,     0,     0,     0,  -481,  -481,  -481,  -481,     0,
       0,     0,     0,     0,     0,  -481,     0,  -481,  -481,  -481,
       0,  -481,  -481,  -481,  -481,  -481,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -628,  -481,     0,     0,     0,
       0,  -481,  -481,     0,  -628,  -481,  -628,  -628,  -628,  -628,
    -628,  -628,  -628,     0,     0,  -628,     0,     0,     0,  -628,
       0,     0,     0,  -628,     0,     0,     0,     0,     0,     0,
     114,     0,  -628,  -628,  -628,  -628,  -623,  -623,     0,     0,
       0,     0,  -628,  -623,  -628,  -628,  -628,     0,  -628,  -628,
    -628,  -628,  -628,  -623,  -623,     0,     0,  -623,  -623,     0,
       0,  -623,  -623,  -628,     0,  -623,     0,     0,  -628,  -628,
       0,     0,  -628,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -623,  -623,     0,     0,  -623,     0,
       0,     0,     0,     0,     0,     0,     0,   118,     0,     0,
       0,     0,     0,   119,   120,     0,     0,     0,     0,     0,
     121,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     122,   123,     0,     0,   124,   125,     0,     0,   126,   127,
       0,     0,   128,  -623,     0,     0,     0,     0,     0,     0,
       0,     0,  -623,     0,  -623,  -623,  -623,  -623,  -623,  -623,
    -623,   129,   130,  -623,     0,   131,     0,  -623,     0,     0,
       0,  -623,     0,     0,     0,     0,     0,     0,     0,     0,
    -623,  -623,  -623,  -623,     0,     0,     0,     0,     0,     0,
    -623,     0,  -623,  -623,  -623,     0,  -623,  -623,  -623,  -623,
    -623,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     132,  -623,     0,     0,     0,     0,  -623,  -623,     0,   133,
    -623,   134,   135,   136,   137,   138,   139,   140,     0,     0,
     141,     0,     0,     0,   142,     0,     0,     0,   143,     0,
       0,     0,     0,     0,     0,   190,     0,   144,   145,   146,
     147,   119,   120,     0,     0,     0,     0,   148,   121,   149,
     150,   151,     0,   152,   153,   154,   155,   156,   122,   123,
       0,     0,   124,   125,     0,     0,   126,   127,   157,     0,
     128,     0,     0,   158,   159,     0,     0,   160,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   129,
     130,     0,     0,   131,     0,     0,     0,     0,     0,     0,
       0,     0,   222,     0,     0,     0,     0,     0,  -279,  -279,
       0,     0,     0,     0,     0,  -279,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -279,  -279,     0,     0,  -279,
    -279,     0,     0,  -279,  -279,     0,     0,  -279,   132,     0,
       0,     0,     0,     0,     0,     0,     0,   133,     0,   134,
     135,   136,   137,   138,   139,   140,  -279,  -279,   141,     0,
    -279,     0,   142,     0,     0,     0,   143,     0,     0,     0,
       0,     0,     0,     0,     0,   144,   145,   146,   147,     0,
       0,     0,     0,     0,     0,   148,     0,   149,   150,   151,
       0,   152,   153,   154,   155,   156,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -279,   157,     0,     0,     0,
       0,   158,   159,     0,  -279,   160,  -279,  -279,  -279,  -279,
    -279,  -279,  -279,     0,     0,  -279,     0,     0,     0,  -279,
       0,     0,     0,  -279,     0,     0,     0,     0,     0,     0,
     292,     0,  -279,  -279,  -279,  -279,   119,   120,     0,     0,
       0,     0,  -279,   121,  -279,  -279,  -279,     0,  -279,  -279,
    -279,  -279,  -279,   122,   123,     0,     0,   124,   125,     0,
       0,   126,   127,  -279,     0,   128,     0,     0,  -279,  -279,
       0,     0,  -279,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   129,   130,     0,     0,   131,     0,
       0,     0,     0,     0,     0,     0,     0,   299,     0,     0,
       0,     0,     0,  -615,  -615,     0,     0,     0,     0,     0,
    -615,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -615,  -615,     0,     0,  -615,  -615,     0,     0,  -615,  -615,
       0,     0,  -615,   132,     0,     0,     0,     0,     0,     0,
       0,     0,   133,     0,   134,   135,   136,   137,   138,   139,
     140,  -615,  -615,   141,     0,  -615,     0,   142,     0,     0,
       0,   143,     0,     0,     0,     0,     0,     0,     0,     0,
     144,   145,   146,   147,     0,     0,     0,     0,     0,     0,
     148,     0,   149,   150,   151,     0,   152,   153,   154,   155,
     156,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -615,   157,     0,     0,     0,     0,   158,   159,     0,  -615,
     160,  -615,  -615,  -615,  -615,  -615,  -615,  -615,     0,     0,
    -615,     0,     0,     0,  -615,     0,     0,     0,  -615,     0,
       0,     0,     0,     0,     0,   405,     0,  -615,  -615,  -615,
    -615,   119,   120,     0,     0,     0,     0,  -615,   121,  -615,
    -615,  -615,     0,  -615,  -615,  -615,  -615,  -615,   122,   123,
       0,     0,   124,   125,     0,     0,   126,   127,  -615,     0,
     128,     0,     0,  -615,  -615,     0,     0,  -615,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   129,
     130,     0,     0,   131,     0,     0,     0,     0,     0,     0,
       0,     0,   564,     0,     0,     0,     0,     0,   119,   120,
       0,     0,     0,     0,     0,   121,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   122,   123,     0,     0,   124,
     125,     0,     0,   126,   127,     0,     0,   128,   132,     0,
       0,     0,     0,     0,     0,     0,     0,   133,     0,   134,
     135,   136,   137,   138,   139,   140,   129,   130,   141,     0,
     131,     0,   142,     0,     0,     0,   143,     0,     0,     0,
       0,     0,     0,     0,     0,   144,   145,   146,   147,     0,
       0,     0,     0,     0,     0,   148,     0,   149,   150,   151,
       0,   152,   153,   154,   155,   156,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   132,   157,     0,     0,     0,
       0,   158,   159,     0,   133,   160,   134,   135,   136,   137,
     138,   139,   140,     0,     0,   141,     0,     0,     0,   142,
       0,     0,     0,   143,     0,     0,     0,     0,     0,     0,
     747,     0,   144,   145,   146,   147,   119,   120,     0,     0,
       0,     0,   148,   121,   149,   150,   151,     0,   152,   153,
     154,   155,   156,   122,   123,     0,     0,   124,   125,     0,
       0,   126,   127,   157,     0,   128,     0,     0,   158,   159,
       0,     0,   160,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   129,   130,     0,     0,   131,     0,
       0,     0,     0,     0,     0,     0,     0,   884,     0,     0,
       0,     0,     0,   119,   120,     0,     0,     0,     0,     0,
     121,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     122,   123,     0,     0,   124,   125,     0,     0,   126,   127,
       0,     0,   128,   132,     0,     0,     0,     0,     0,     0,
       0,     0,   133,     0,   134,   135,   136,   137,   138,   139,
     140,   129,   130,   141,     0,   131,     0,   142,     0,     0,
       0,   143,     0,     0,     0,     0,     0,     0,     0,     0,
     144,   145,   146,   147,     0,     0,     0,     0,     0,     0,
     148,     0,   149,   150,   151,     0,   152,   153,   154,   155,
     156,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     132,   157,     0,     0,     0,     0,   158,   159,     0,   133,
     160,   134,   135,   136,   137,   138,   139,   140,     0,     0,
     141,     0,     0,     0,   142,     0,     0,     0,   143,     0,
       0,     0,     0,     0,     0,     0,     0,   144,   145,   146,
     147,     0,     0,     0,     0,     0,     0,   148,     0,   149,
     150,   151,     0,   152,   153,   154,   155,   156,     0,     0,
       0,     5,     0,     0,     0,     0,   502,     0,   157,     7,
       8,     0,     0,   158,   159,     0,     0,   160,    11,    12,
    -422,    13,     0,     0,     0,     0,    14,    15,     0,     0,
       0,    16,     0,     0,   503,   504,     0,    18,    19,    20,
     505,    22,    23,    24,     0,    25,     0,     0,     0,     0,
       0,     0,     0,    26,     0,    27,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    28,     0,  -422,
       0,     0,     0,  -422,    29,    30,    31,    32,     0,     0,
       0,     0,     0,     0,     0,    33,    34,    35,    36,     0,
       0,     0,    37,     0,     0,    38,     0,     0,    40,     0,
       0,   506,     0,    42,    43,    44,    45,    46,    47,    48,
       0,    49,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    50,     0,     0,    51,    52,     0,    53,
      54,     5,     0,     0,     0,     0,   502,     0,    55,     7,
       8,     0,    56,     0,     0,    57,     0,     0,    11,    12,
    -421,    13,     0,     0,     0,     0,    14,    15,     0,     0,
       0,    16,     0,     0,   503,   504,     0,    18,    19,    20,
     505,    22,    23,    24,     0,    25,     0,     0,     0,     0,
      58,     0,     0,    26,     0,    27,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    28,     0,  -421,
       0,     0,     0,  -421,    29,    30,    31,    32,     0,     0,
       0,     0,     0,     0,     0,    33,    34,    35,    36,     0,
       0,     0,    37,     0,     0,    38,     0,     0,    40,     0,
       0,   506,     0,    42,    43,    44,    45,    46,    47,    48,
       0,    49,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    50,     0,     0,    51,    52,     0,    53,
      54,     0,     0,     0,     0,     0,     0,     0,    55,     0,
       0,     0,    56,     0,     0,    57,     5,     0,     0,     0,
       0,     6,     0,     0,     7,     8,     9,     0,     0,     0,
      10,     0,     0,    11,    12,     0,    13,     0,     0,     0,
       0,    14,    15,     0,     0,     0,    16,     0,     0,    17,
      58,     0,    18,    19,    20,    21,    22,    23,    24,     0,
      25,     0,     0,     0,     0,     0,     0,     0,    26,     0,
      27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    28,     0,     0,     0,     0,     0,     0,    29,
      30,    31,    32,     0,     0,     0,     0,     0,     0,     0,
      33,    34,    35,    36,     0,     0,     0,    37,     0,     0,
      38,    39,     0,    40,     0,     0,    41,     0,    42,    43,
      44,    45,    46,    47,    48,     0,    49,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,     0,
       0,    51,    52,     0,    53,    54,     5,     0,     0,     0,
       0,   502,     0,    55,     7,     8,     0,    56,     0,     0,
      57,     0,     0,    11,    12,   510,    13,     0,     0,     0,
       0,    14,    15,     0,     0,     0,    16,     0,     0,   503,
     504,     0,    18,    19,    20,   505,    22,    23,    24,     0,
      25,     0,     0,     0,     0,    58,     0,     0,    26,     0,
      27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    28,     0,     0,     0,     0,     0,     0,    29,
      30,    31,    32,     0,     0,     0,     0,     0,     0,     0,
      33,    34,    35,    36,     0,     0,     0,    37,     0,     0,
      38,     0,     0,    40,     0,     0,   506,     0,    42,    43,
      44,    45,    46,    47,    48,     0,    49,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,     0,
       0,    51,    52,     0,    53,    54,     5,     0,     0,     0,
       0,   502,     0,    55,     7,     8,     0,    56,     0,     0,
      57,     0,     0,    11,    12,   673,    13,     0,     0,     0,
       0,    14,    15,     0,     0,     0,    16,     0,     0,   503,
     504,     0,    18,    19,    20,   505,    22,    23,    24,     0,
      25,     0,     0,     0,     0,    58,     0,     0,    26,     0,
      27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    28,     0,     0,     0,     0,     0,     0,    29,
      30,    31,    32,     0,     0,     0,     0,     0,     0,     0,
      33,    34,    35,    36,     0,     0,     0,    37,     0,     0,
      38,     0,     0,    40,     0,     0,   506,     0,    42,    43,
      44,    45,    46,    47,    48,     0,    49,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,     0,
       0,    51,    52,     0,    53,    54,     5,     0,     0,     0,
       0,   502,     0,    55,     7,     8,     0,    56,     0,     0,
      57,     0,     0,    11,    12,   692,    13,     0,     0,     0,
       0,    14,    15,     0,     0,     0,    16,     0,     0,   503,
     504,     0,    18,    19,    20,   505,    22,    23,    24,     0,
      25,     0,     0,     0,     0,    58,     0,     0,    26,     0,
      27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    28,     0,     0,     0,     0,     0,     0,    29,
      30,    31,    32,     0,     0,     0,     0,     0,     0,     0,
      33,    34,    35,    36,     0,     0,     0,    37,     0,     0,
      38,     0,     0,    40,     0,     0,   506,     0,    42,    43,
      44,    45,    46,    47,    48,     0,    49,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,     0,
       0,    51,    52,     0,    53,    54,     5,     0,     0,     0,
       0,   502,     0,    55,     7,     8,     0,    56,     0,     0,
      57,     0,     0,    11,    12,   874,    13,     0,     0,     0,
       0,    14,    15,     0,     0,     0,    16,     0,     0,   503,
     504,     0,    18,    19,    20,   505,    22,    23,    24,     0,
      25,     0,     0,     0,     0,    58,     0,     0,    26,     0,
      27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    28,     0,     0,     0,     0,     0,     0,    29,
      30,    31,    32,     0,     0,     0,     0,     0,     0,     0,
      33,    34,    35,    36,     0,     0,     0,    37,     0,     0,
      38,     0,     0,    40,     0,     0,   506,     0,    42,    43,
      44,    45,    46,    47,    48,     0,    49,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,     0,
       0,    51,    52,     0,    53,    54,     5,     0,     0,     0,
       0,   502,     0,    55,     7,     8,     0,    56,     0,     0,
      57,     0,     0,    11,    12,   973,    13,     0,     0,     0,
       0,    14,    15,     0,     0,     0,    16,     0,     0,   503,
     504,     0,    18,    19,    20,   505,    22,    23,    24,     0,
      25,     0,     0,     0,     0,    58,     0,     0,    26,     0,
      27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    28,     0,     0,     0,     0,     0,     0,    29,
      30,    31,    32,     0,     0,     0,     0,     0,     0,     0,
      33,    34,    35,    36,     0,     0,     0,    37,     0,     0,
      38,     0,     0,    40,     0,     0,   506,     0,    42,    43,
      44,    45,    46,    47,    48,     0,    49,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,     0,
       0,    51,    52,     0,    53,    54,     5,     0,     0,     0,
       0,   502,     0,    55,     7,     8,     0,    56,     0,     0,
      57,     0,     0,    11,    12,  1004,    13,     0,     0,     0,
       0,    14,    15,     0,     0,     0,    16,     0,     0,   503,
     504,     0,    18,    19,    20,   505,    22,    23,    24,     0,
      25,     0,     0,     0,     0,    58,     0,     0,    26,     0,
      27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    28,     0,     0,     0,     0,     0,     0,    29,
      30,    31,    32,     0,     0,     0,     0,     0,     0,     0,
      33,    34,    35,    36,     0,     0,     0,    37,     0,     0,
      38,     0,     0,    40,     0,     0,   506,     0,    42,    43,
      44,    45,    46,    47,    48,     0,    49,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,     0,
       0,    51,    52,     0,    53,    54,     5,     0,     0,     0,
       0,   502,     0,    55,     7,     8,     0,    56,     0,     0,
      57,     0,     0,    11,    12,  1005,    13,     0,     0,     0,
       0,    14,    15,     0,     0,     0,    16,     0,     0,   503,
     504,     0,    18,    19,    20,   505,    22,    23,    24,     0,
      25,     0,     0,     0,     0,    58,     0,     0,    26,     0,
      27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    28,     0,     0,     0,     0,     0,     0,    29,
      30,    31,    32,     0,     0,     0,     0,     0,     0,     0,
      33,    34,    35,    36,     0,     0,     0,    37,     0,     0,
      38,     0,     0,    40,     0,     0,   506,     0,    42,    43,
      44,    45,    46,    47,    48,     0,    49,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,     0,
       0,    51,    52,     0,    53,    54,     5,     0,     0,     0,
       0,   502,     0,    55,     7,     8,     0,    56,     0,     0,
      57,     0,     0,    11,    12,  1068,    13,     0,     0,     0,
       0,    14,    15,     0,     0,     0,    16,     0,     0,   503,
     504,     0,    18,    19,    20,   505,    22,    23,    24,     0,
      25,     0,     0,     0,     0,    58,     0,     0,    26,     0,
      27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    28,     0,     0,     0,     0,     0,     0,    29,
      30,    31,    32,     0,     0,     0,     0,     0,     0,     0,
      33,    34,    35,    36,     0,     0,     0,    37,     0,     0,
      38,     0,     0,    40,     0,     0,   506,     0,    42,    43,
      44,    45,    46,    47,    48,     0,    49,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,     0,
       0,    51,    52,     0,    53,    54,     5,     0,     0,     0,
       0,   502,     0,    55,     7,     8,     0,    56,     0,     0,
      57,     0,     0,    11,    12,  -659,    13,     0,     0,     0,
       0,    14,    15,     0,     0,     0,    16,     0,     0,   503,
     504,     0,    18,    19,    20,   505,    22,    23,    24,     0,
      25,     0,     0,     0,     0,    58,     0,     0,    26,     0,
      27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    28,     0,     0,     0,     0,     0,     0,    29,
      30,    31,    32,     0,     0,     0,     0,     0,     0,     0,
      33,    34,    35,    36,     0,     0,     0,    37,     0,     0,
      38,     0,     0,    40,     0,     0,   506,     0,    42,    43,
      44,    45,    46,    47,    48,     0,    49,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,     0,
       0,    51,    52,     0,    53,    54,     5,     0,     0,     0,
       0,   502,     0,    55,     7,     8,     0,    56,     0,     0,
      57,     0,     0,    11,    12,  1134,    13,     0,     0,     0,
       0,    14,    15,     0,     0,     0,    16,     0,     0,   503,
     504,     0,    18,    19,    20,   505,    22,    23,    24,     0,
      25,     0,     0,     0,     0,    58,     0,     0,    26,     0,
      27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    28,     0,     0,     0,     0,     0,     0,    29,
      30,    31,    32,     0,     0,     0,     0,     0,     0,     0,
      33,    34,    35,    36,     0,     0,     0,    37,     0,     0,
      38,     0,     0,    40,     0,     0,   506,     0,    42,    43,
      44,    45,    46,    47,    48,     0,    49,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,     0,
       0,    51,    52,     0,    53,    54,     5,     0,     0,     0,
       0,   502,     0,    55,     7,     8,     0,    56,     0,     0,
      57,     0,     0,    11,    12,  1186,    13,     0,     0,     0,
       0,    14,    15,     0,     0,     0,    16,     0,     0,   503,
     504,     0,    18,    19,    20,   505,    22,    23,    24,     0,
      25,     0,     0,     0,     0,    58,     0,     0,    26,     0,
      27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    28,     0,     0,     0,     0,     0,     0,    29,
      30,    31,    32,     0,     0,     0,     0,     0,     0,     0,
      33,    34,    35,    36,     0,     0,     0,    37,     0,     0,
      38,     0,     0,    40,     0,     0,   506,     0,    42,    43,
      44,    45,    46,    47,    48,     0,    49,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,     0,
       0,    51,    52,     0,    53,    54,     5,     0,     0,     0,
       0,   502,     0,    55,     7,     8,     0,    56,     0,     0,
      57,     0,     0,    11,    12,     0,    13,     0,     0,     0,
       0,    14,    15,     0,     0,     0,    16,     0,     0,   503,
     504,     0,    18,    19,    20,   505,    22,    23,    24,     0,
      25,     0,     0,     0,     0,    58,     0,     0,    26,     0,
      27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    28,  -649,     0,     0,     0,     0,     0,    29,
      30,    31,    32,     0,     0,     0,     0,     0,     0,     0,
      33,    34,    35,    36,     0,     0,     0,    37,     0,     0,
      38,     0,     0,    40,     0,     0,   506,     0,    42,    43,
      44,    45,    46,    47,    48,     0,    49,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,     0,
       0,    51,    52,     0,    53,    54,     5,     0,     0,     0,
       0,   502,     0,    55,     7,     8,     0,    56,     0,     0,
      57,     0,     0,    11,    12,  -651,    13,     0,     0,     0,
       0,    14,    15,     0,     0,     0,    16,     0,     0,   503,
     504,     0,    18,    19,    20,   505,    22,    23,    24,     0,
      25,     0,     0,     0,     0,    58,     0,     0,    26,     0,
      27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    28,     0,     0,     0,     0,     0,     0,    29,
      30,    31,    32,     0,     0,     0,     0,     0,     0,     0,
      33,    34,    35,    36,     0,     0,     0,    37,     0,     0,
      38,     0,     0,    40,     0,     0,   506,     0,    42,    43,
      44,    45,    46,    47,    48,     0,    49,     0,     0,   119,
     120,     0,     0,     0,     0,     0,   121,     0,    50,     0,
       0,    51,    52,     0,    53,    54,   122,   123,     0,     0,
     124,   125,     0,    55,   126,   127,     0,    56,   128,     0,
      57,     0,     0,   491,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   129,   130,     0,
       0,   131,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    58,   119,   120,     0,     0,
       0,     0,     0,   121,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   122,   123,     0,     0,   124,   125,     0,
       0,   126,   127,     0,     0,   128,   132,     0,     0,     0,
       0,     0,     0,     0,     0,   133,     0,   134,   135,   136,
     137,   138,   139,   140,   129,   130,   141,     0,   131,     0,
     142,     0,   492,     0,   143,   393,     0,     0,     0,     0,
       0,     0,     0,   144,   145,   146,   147,     0,     0,     0,
       0,     0,     0,   148,     0,   149,   150,   151,     0,   152,
     153,   154,   155,   156,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   132,   157,     0,     0,     0,     0,   158,
     159,     0,   133,   160,   134,   135,   136,   137,   138,   139,
     140,     0,     0,   141,     0,     0,     0,   142,     0,     0,
       0,   143,     0,     0,     0,     0,     0,     0,     0,     0,
     144,   145,   146,   147,   119,   120,     0,     0,     0,     0,
     148,   121,   149,   150,   151,     0,   152,   153,   154,   155,
     156,   122,   123,     0,     0,   124,   125,     0,     0,   126,
     127,   157,     0,   128,     0,     0,   158,   159,     0,     0,
     160,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   129,   130,     0,     0,   131,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   119,   120,     0,     0,     0,     0,     0,   121,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   122,   123,
       0,     0,   124,   125,     0,     0,   126,   127,     0,     0,
     128,   132,     0,     0,     0,     0,     0,     0,     0,     0,
     133,     0,   134,   135,   136,   137,   138,   139,   140,   129,
     130,   141,     0,   131,     0,   142,     0,     0,     0,   143,
     896,     0,     0,     0,     0,     0,     0,     0,   144,   145,
     146,   147,     0,     0,     0,     0,     0,     0,   148,     0,
     149,   150,   151,     0,   152,   153,   154,   155,   156,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   132,   157,
       0,     0,     0,     0,   158,   159,     0,   133,   160,   134,
     135,   136,   137,   138,   139,   140,     0,     0,   141,     0,
       0,     0,   142,     0,     0,     0,   143,     0,     0,     0,
       0,     0,     0,     0,     0,   144,   145,   146,   147,     0,
       0,     0,     0,     0,     0,   148,     0,   149,   150,   151,
       0,   152,   153,   154,   155,   156,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   157,     0,     0,     0,
       0,   158,   159,     0,     0,   160
};

static const yytype_int16 yycheck[] =
{
       5,   597,   269,     8,   271,   393,    76,    77,    79,    80,
      41,   548,   632,   493,   554,   321,   303,   314,   254,     1,
     256,   295,    27,     1,     1,     1,    31,    32,    33,    34,
      35,   298,    37,    38,   131,    40,     1,     1,  1004,  1005,
       1,   380,   381,   382,   383,   384,     1,     1,     1,     1,
       1,     1,   180,     1,     1,     1,     1,     1,    63,     1,
     157,   158,   159,    64,     1,    70,     1,    72,     1,    15,
      53,    66,     1,    37,    53,     1,     1,    66,    83,    84,
       1,    86,    87,    88,    35,    35,    34,    18,    19,    53,
      47,    63,    66,    20,    99,     7,     1,   102,    35,   104,
      31,   106,   129,    50,    51,     1,    66,   112,    35,   114,
      41,    53,    67,    20,   141,     1,   143,    53,   129,     1,
       1,     1,    15,     1,    36,    18,   746,   129,    52,    74,
      66,   142,    89,     1,     1,   181,     1,    66,    74,    35,
      84,   143,     1,     1,     1,    70,     0,   129,     1,    70,
      96,   129,     1,   129,    35,     1,     1,     1,   185,   141,
      84,   143,    69,   141,    66,   143,   142,   180,    50,    74,
     183,   176,   177,   178,   105,     1,   129,   182,    66,   184,
       6,   142,   187,   184,    70,   180,     0,    66,   193,   259,
     143,   196,   142,   198,   183,   142,   142,   202,   129,   150,
     183,   180,    35,   185,   180,   182,   183,   185,   182,   183,
     750,   183,   217,   142,    62,   180,   180,   222,   183,   224,
    1186,   182,   182,   150,   150,   180,   231,   181,   233,   181,
     142,   181,   180,   238,   180,   180,   180,   142,   180,    66,
       1,   629,   247,   180,   249,   180,   142,   180,     1,   516,
     255,   182,   488,   550,   180,   260,    18,   531,   532,   264,
     142,   142,   142,   268,   142,   270,    28,   272,    30,   274,
      63,   276,   277,   278,   142,   142,   281,   142,    66,   376,
     377,   183,   287,   142,   142,   142,    39,   292,    85,   142,
     295,    52,   297,   142,   299,   183,   142,   142,   142,    60,
      61,    66,    66,   129,   183,    50,     3,     4,     5,    66,
      71,    53,  1049,  1050,  1051,     6,    66,   150,    79,    80,
      41,   169,    75,    84,    50,    78,    66,    54,    81,    82,
      83,    66,    74,    75,    66,    66,    66,    66,    35,    81,
      82,    83,    66,   172,   173,   142,    99,   100,    57,    46,
      47,    48,    49,    50,    51,   182,   183,    99,   100,    84,
     840,    66,    66,    66,    66,    66,    66,    66,  1105,   162,
     163,    15,   150,  1110,    18,    15,   129,   130,    18,    60,
      61,    94,    95,  1120,    65,   146,   147,   148,   180,   142,
     180,   183,    89,   183,   182,   183,   119,   142,    18,    19,
     405,   406,   180,   164,   165,   128,    55,   162,   163,   130,
      59,    31,   417,   418,   142,   142,   142,   182,   182,   180,
     181,    41,   182,   183,   429,   182,    70,   432,    66,   735,
      68,   501,   182,  1170,   740,   741,   133,   134,   180,   152,
     149,   446,   182,   730,   731,   732,   142,   182,    52,   746,
     182,   182,   182,   182,    84,   742,    60,    61,   182,   464,
     465,   466,  1082,  1083,   803,   180,    16,    17,   183,  1006,
    1007,    21,    22,    86,    87,   506,   481,   182,   182,   182,
     182,   182,   182,   182,   949,   105,   106,   107,   953,   170,
     171,    58,   497,   498,    44,    15,   129,   122,    18,    19,
     125,    18,    19,   183,   266,   510,    91,   142,   141,   129,
     143,    31,   129,   518,    31,   520,   180,    63,   103,   183,
      40,    41,   180,   168,    41,   183,   531,   532,    34,    35,
      20,    37,   180,   538,   181,   183,   541,   166,   543,    89,
      90,    91,   146,   147,   148,   182,   183,    53,    58,   134,
     312,   167,   185,   103,   373,   374,   375,   142,   563,   321,
     181,    67,   567,   174,   175,   176,    16,    17,    74,    66,
      20,    68,    22,   879,   181,   337,    96,   339,   340,   341,
     342,   288,   344,   290,   181,   105,   106,   107,   105,   351,
     352,   353,   182,   183,    44,   182,   183,   359,   360,   361,
     362,   363,   364,   365,   181,    53,    52,   378,   379,   129,
     181,   681,   129,   181,    60,    61,   385,   386,   181,    67,
      68,    69,    72,   181,    89,    71,    74,   632,   181,   181,
    1226,    96,   637,    79,    80,   640,  1024,   707,   643,    89,
      90,   181,   713,   181,   181,   181,   181,   181,   113,   181,
     115,   656,    16,    17,   181,   181,    20,   181,    22,   181,
     181,    63,   968,   181,    75,   181,   428,   181,   181,   431,
      81,    82,    83,  1161,  1162,    22,   181,   181,  1166,   749,
      44,   751,   181,   181,  1172,  1173,  1174,   692,    99,   100,
      22,   696,   697,   182,   699,   160,   701,    68,   142,   704,
     146,   147,   148,   708,   709,   710,   183,   183,    72,   714,
     183,   183,   142,    20,    74,   142,   183,   142,   164,   165,
      20,   988,   142,   142,   189,    89,    90,    52,   182,    53,
     182,   182,   142,   142,   183,   200,    22,    22,   743,    20,
      50,   142,   747,   142,   181,    78,    73,   182,    66,   142,
     183,   183,    20,    84,   759,   760,    55,   183,   223,   183,
     182,   182,   142,   142,   182,   182,  1072,   182,   182,   182,
     182,    86,   142,   142,   182,   182,   182,   182,   182,  1085,
     183,     1,   182,     1,  1090,   182,    35,  1093,   183,   183,
     180,   183,    49,    30,    84,   182,   142,   142,   182,   185,
      74,   183,   180,   142,   181,    68,   142,   877,  1114,    53,
     183,   141,   817,   142,   182,    30,   142,    82,    30,   103,
     183,   182,   827,   288,   183,   290,    20,    81,   293,    75,
      53,   142,  1138,   110,   183,   300,   142,    93,   843,    68,
     181,  1147,    68,    20,   182,   956,  1095,   955,  1092,   744,
     900,   921,   998,  1074,    65,   246,   970,   856,   305,   473,
     844,   389,   867,   388,   387,   870,   871,     4,   627,   874,
     628,   481,    13,   338,    13,   109,   881,   882,  1184,  1132,
      71,   346,   347,   348,   523,   350,   175,   830,  1053,   838,
     895,  1167,   357,  1175,  1163,  1098,   460,   529,   723,   522,
    1002,   366,   367,   874,   658,   845,   258,   895,  1145,  1068,
      -1,    -1,    -1,   983,   919,   677,   678,   679,   680,   756,
      -1,    -1,    -1,    -1,    -1,   323,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   939,    -1,    -1,   942,    -1,    -1,
      -1,    -1,    -1,   705,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   419,    -1,    -1,   962,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   973,    -1,
      -1,    -1,    -1,   735,    -1,    -1,    -1,    -1,   740,   741,
      -1,    -1,   447,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   460,    -1,   462,    -1,  1004,
    1005,    -1,   764,   765,    -1,  1075,   768,    -1,    -1,    -1,
      -1,   773,    -1,    -1,    -1,    -1,    -1,   779,    -1,   781,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   494,
      -1,   793,    -1,    -1,    -1,    -1,    -1,   799,    -1,    -1,
      -1,    -1,    -1,    -1,  1049,  1050,  1051,    -1,    -1,    -1,
    1055,  1056,  1057,   815,   816,  1060,  1061,    -1,    -1,    -1,
      -1,    -1,    -1,  1068,   529,  1070,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1082,  1083,    -1,
      -1,    -1,    -1,    -1,   549,    -1,  1091,    -1,    -1,  1094,
      -1,    -1,    -1,    -1,    -1,  1100,    -1,    -1,    -1,    -1,
    1105,    -1,  1107,    -1,   866,  1110,    -1,  1112,    -1,    -1,
    1115,    -1,    -1,    -1,    -1,  1120,    -1,   879,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1134,
      -1,    -1,   597,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1219,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1229,
      -1,    -1,    -1,    -1,    -1,  1170,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1178,  1179,    -1,    -1,    -1,    -1,    -1,
      -1,  1186,    -1,    -1,    -1,    -1,    -1,    -1,   653,    -1,
     952,    -1,    -1,    -1,    -1,    -1,   958,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   968,    -1,    -1,    -1,
      -1,  1216,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   689,    -1,    -1,    -1,  1233,  1234,
    1235,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,    -1,    -1,    -1,    -1,     7,     8,    -1,
      -1,    -1,    -1,    -1,    14,  1017,    -1,    -1,   723,  1021,
      -1,    -1,    -1,    -1,    24,    25,    -1,    -1,    28,    29,
      -1,    -1,    32,    33,  1036,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   753,   754,
      -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    -1,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1072,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1085,    -1,    -1,   791,    -1,  1090,    -1,
      -1,  1093,    -1,    -1,  1096,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1114,   113,    -1,   115,   116,   117,   118,   119,
     120,   121,    -1,    -1,   124,    -1,    -1,    -1,   128,    -1,
      -1,    -1,   132,    -1,    -1,    -1,  1138,    -1,    -1,   844,
     845,   141,   142,   143,   144,  1147,    -1,    -1,    -1,    -1,
      -1,   151,    -1,   153,   154,   155,    -1,   157,   158,   159,
     160,   161,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   172,    -1,    -1,    -1,    -1,   177,   178,    -1,
     180,   181,  1184,   183,    -1,     1,    -1,   892,    -1,   894,
      -1,     7,     8,    -1,    -1,    -1,    -1,    -1,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      -1,    -1,    28,    29,    -1,    -1,    32,    33,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    -1,    -1,    59,    -1,   950,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,    -1,
      -1,    -1,    -1,    -1,    -1,  1000,  1001,   113,    -1,   115,
     116,   117,   118,   119,   120,   121,    -1,    -1,   124,    -1,
      -1,    -1,   128,    -1,    -1,    -1,   132,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,   141,   142,   143,   144,     7,
       8,    -1,    -1,    -1,    -1,   151,    14,   153,   154,   155,
      -1,   157,   158,   159,   160,   161,    24,    25,    -1,    -1,
      28,    29,    -1,    -1,    32,    33,   172,    -1,    36,    -1,
      -1,   177,   178,    41,    -1,   181,   182,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    -1,
      -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,     7,
       8,    -1,    -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    -1,    -1,
      28,    29,    -1,    -1,    32,    33,   104,    -1,    36,    -1,
      -1,  1136,    -1,    -1,    -1,   113,    -1,   115,   116,   117,
     118,   119,   120,   121,    -1,    -1,   124,    55,    56,    -1,
     128,    59,   130,    -1,   132,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   141,   142,   143,   144,    -1,    -1,    -1,
      -1,    -1,    -1,   151,    -1,   153,   154,   155,    -1,   157,
     158,   159,   160,   161,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   172,    -1,   104,    -1,    -1,   177,
     178,    -1,    -1,   181,    -1,   113,    -1,   115,   116,   117,
     118,   119,   120,   121,    -1,    -1,   124,    -1,    -1,    -1,
     128,  1226,    -1,    -1,   132,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   141,   142,   143,   144,    -1,    -1,    -1,
      -1,    -1,    -1,   151,    -1,   153,   154,   155,    -1,   157,
     158,   159,   160,   161,    -1,     1,    -1,    -1,    -1,    -1,
      -1,     7,     8,    -1,   172,    -1,    -1,    -1,    14,   177,
     178,    17,   180,   181,    -1,    -1,    -1,    -1,    24,    25,
      -1,    -1,    28,    29,    -1,    -1,    32,    33,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,     7,     8,
      -1,    -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    25,    -1,    -1,    28,
      29,    -1,    -1,    32,    33,    -1,    -1,    36,   104,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,   115,
     116,   117,   118,   119,   120,   121,    55,    56,   124,    -1,
      59,    -1,   128,    -1,    -1,    -1,   132,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,   142,   143,   144,    -1,
      -1,    -1,    -1,    -1,    -1,   151,    -1,   153,   154,   155,
      -1,   157,   158,   159,   160,   161,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   104,   172,    -1,    -1,    -1,
      -1,   177,   178,    -1,   113,   181,   115,   116,   117,   118,
     119,   120,   121,    -1,    -1,   124,    -1,    -1,    -1,   128,
      -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,   141,   142,   143,   144,     7,     8,    -1,    -1,
      -1,    -1,   151,    14,   153,   154,   155,    -1,   157,   158,
     159,   160,   161,    24,    25,    -1,    -1,    28,    29,    -1,
      -1,    32,    33,   172,    -1,    36,    -1,    -1,   177,   178,
      -1,    -1,   181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    56,    -1,    -1,    59,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,
      -1,    -1,    -1,     7,     8,    -1,    -1,    -1,    -1,    -1,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    25,    -1,    -1,    28,    29,    -1,    -1,    32,    33,
      -1,    -1,    36,   104,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,    -1,   115,   116,   117,   118,   119,   120,
     121,    55,    56,   124,    -1,    59,    -1,   128,    -1,    -1,
      -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,   142,   143,   144,    -1,    -1,    -1,    -1,    -1,    -1,
     151,    -1,   153,   154,   155,    -1,   157,   158,   159,   160,
     161,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     104,   172,    -1,    -1,    -1,    -1,   177,   178,    -1,   113,
     181,   115,   116,   117,   118,   119,   120,   121,    -1,    -1,
     124,    -1,    -1,    -1,   128,    -1,    -1,    -1,   132,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,   141,   142,   143,
     144,     7,     8,    -1,    -1,    -1,    -1,   151,    14,   153,
     154,   155,    -1,   157,   158,   159,   160,   161,    24,    25,
      -1,    -1,    28,    29,    -1,    -1,    32,    33,   172,    -1,
      36,    -1,    -1,   177,   178,    -1,    -1,   181,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,     7,     8,
      -1,    -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    25,    -1,    -1,    28,
      29,    -1,    -1,    32,    33,    -1,    -1,    36,   104,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,   115,
     116,   117,   118,   119,   120,   121,    55,    56,   124,    -1,
      59,    -1,   128,    -1,    -1,    -1,   132,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,   142,   143,   144,    -1,
      -1,    -1,    -1,    -1,    -1,   151,    -1,   153,   154,   155,
      -1,   157,   158,   159,   160,   161,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   104,   172,    -1,    -1,    -1,
      -1,   177,   178,    -1,   113,   181,   115,   116,   117,   118,
     119,   120,   121,    -1,    -1,   124,    -1,    -1,    -1,   128,
      -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,   141,   142,   143,   144,     7,     8,    -1,    -1,
      -1,    -1,   151,    14,   153,   154,   155,    -1,   157,   158,
     159,   160,   161,    24,    25,    -1,    -1,    28,    29,    -1,
      -1,    32,    33,   172,    -1,    36,    -1,    -1,   177,   178,
      -1,    -1,   181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    56,    -1,    -1,    59,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,
      -1,    -1,    -1,     7,     8,    -1,    -1,    -1,    -1,    -1,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    25,    -1,    -1,    28,    29,    -1,    -1,    32,    33,
      -1,    -1,    36,   104,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,    -1,   115,   116,   117,   118,   119,   120,
     121,    55,    56,   124,    -1,    59,    -1,   128,    -1,    -1,
      -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,   142,   143,   144,    -1,    -1,    -1,    -1,    -1,    -1,
     151,    -1,   153,   154,   155,    -1,   157,   158,   159,   160,
     161,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     104,   172,    -1,    -1,    -1,    -1,   177,   178,    -1,   113,
     181,   115,   116,   117,   118,   119,   120,   121,    -1,    -1,
     124,    -1,    -1,    -1,   128,    -1,    -1,    -1,   132,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,   141,   142,   143,
     144,     7,     8,    -1,    -1,    -1,    -1,   151,    14,   153,
     154,   155,    -1,   157,   158,   159,   160,   161,    24,    25,
      -1,    -1,    28,    29,    -1,    -1,    32,    33,   172,    -1,
      36,    -1,    -1,   177,   178,    -1,    -1,   181,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,     7,     8,
      -1,    -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    25,    -1,    -1,    28,
      29,    -1,    -1,    32,    33,    -1,    -1,    36,   104,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,   115,
     116,   117,   118,   119,   120,   121,    55,    56,   124,    -1,
      59,    -1,   128,    -1,    -1,    -1,   132,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,   142,   143,   144,    -1,
      -1,    -1,    -1,    -1,    -1,   151,    -1,   153,   154,   155,
      -1,   157,   158,   159,   160,   161,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   104,   172,    -1,    -1,    -1,
      -1,   177,   178,    -1,   113,   181,   115,   116,   117,   118,
     119,   120,   121,    -1,    -1,   124,    -1,    -1,    -1,   128,
      -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,   141,   142,   143,   144,     7,     8,    -1,    -1,
      -1,    -1,   151,    14,   153,   154,   155,    -1,   157,   158,
     159,   160,   161,    24,    25,    -1,    -1,    28,    29,    -1,
      -1,    32,    33,   172,    -1,    36,    -1,    -1,   177,   178,
      -1,    -1,   181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    56,    -1,    -1,    59,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,
      -1,    -1,    -1,     7,     8,    -1,    -1,    -1,    -1,    -1,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    25,    -1,    -1,    28,    29,    -1,    -1,    32,    33,
      -1,    -1,    36,   104,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,    -1,   115,   116,   117,   118,   119,   120,
     121,    55,    56,   124,    -1,    59,    -1,   128,    -1,    -1,
      -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,   142,   143,   144,    -1,    -1,    -1,    -1,    -1,    -1,
     151,    -1,   153,   154,   155,    -1,   157,   158,   159,   160,
     161,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     104,   172,    -1,    -1,    -1,    -1,   177,   178,    -1,   113,
     181,   115,   116,   117,   118,   119,   120,   121,    -1,    -1,
     124,    -1,    -1,    -1,   128,    -1,    -1,    -1,   132,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,   143,
     144,    -1,    -1,    -1,    -1,    -1,    -1,   151,    -1,   153,
     154,   155,    -1,   157,   158,   159,   160,   161,    -1,    -1,
      -1,     1,    -1,    -1,    -1,    -1,     6,    -1,   172,     9,
      10,    -1,    -1,   177,   178,    -1,    -1,   181,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    26,    27,    -1,    -1,
      -1,    31,    -1,    -1,    34,    35,    -1,    37,    38,    39,
      40,    41,    42,    43,    -1,    45,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    69,
      -1,    -1,    -1,    73,    74,    75,    76,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,    -1,
      -1,    -1,    92,    -1,    -1,    95,    -1,    -1,    98,    -1,
      -1,   101,    -1,   103,   104,   105,   106,   107,   108,   109,
      -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   123,    -1,    -1,   126,   127,    -1,   129,
     130,     1,    -1,    -1,    -1,    -1,     6,    -1,   138,     9,
      10,    -1,   142,    -1,    -1,   145,    -1,    -1,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    26,    27,    -1,    -1,
      -1,    31,    -1,    -1,    34,    35,    -1,    37,    38,    39,
      40,    41,    42,    43,    -1,    45,    -1,    -1,    -1,    -1,
     180,    -1,    -1,    53,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    69,
      -1,    -1,    -1,    73,    74,    75,    76,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,    -1,
      -1,    -1,    92,    -1,    -1,    95,    -1,    -1,    98,    -1,
      -1,   101,    -1,   103,   104,   105,   106,   107,   108,   109,
      -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   123,    -1,    -1,   126,   127,    -1,   129,
     130,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,    -1,
      -1,    -1,   142,    -1,    -1,   145,     1,    -1,    -1,    -1,
      -1,     6,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,
      15,    -1,    -1,    18,    19,    -1,    21,    -1,    -1,    -1,
      -1,    26,    27,    -1,    -1,    -1,    31,    -1,    -1,    34,
     180,    -1,    37,    38,    39,    40,    41,    42,    43,    -1,
      45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      75,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    -1,    -1,    -1,    92,    -1,    -1,
      95,    96,    -1,    98,    -1,    -1,   101,    -1,   103,   104,
     105,   106,   107,   108,   109,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,
      -1,   126,   127,    -1,   129,   130,     1,    -1,    -1,    -1,
      -1,     6,    -1,   138,     9,    10,    -1,   142,    -1,    -1,
     145,    -1,    -1,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    26,    27,    -1,    -1,    -1,    31,    -1,    -1,    34,
      35,    -1,    37,    38,    39,    40,    41,    42,    43,    -1,
      45,    -1,    -1,    -1,    -1,   180,    -1,    -1,    53,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      75,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    -1,    -1,    -1,    92,    -1,    -1,
      95,    -1,    -1,    98,    -1,    -1,   101,    -1,   103,   104,
     105,   106,   107,   108,   109,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,
      -1,   126,   127,    -1,   129,   130,     1,    -1,    -1,    -1,
      -1,     6,    -1,   138,     9,    10,    -1,   142,    -1,    -1,
     145,    -1,    -1,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    26,    27,    -1,    -1,    -1,    31,    -1,    -1,    34,
      35,    -1,    37,    38,    39,    40,    41,    42,    43,    -1,
      45,    -1,    -1,    -1,    -1,   180,    -1,    -1,    53,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      75,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    -1,    -1,    -1,    92,    -1,    -1,
      95,    -1,    -1,    98,    -1,    -1,   101,    -1,   103,   104,
     105,   106,   107,   108,   109,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,
      -1,   126,   127,    -1,   129,   130,     1,    -1,    -1,    -1,
      -1,     6,    -1,   138,     9,    10,    -1,   142,    -1,    -1,
     145,    -1,    -1,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    26,    27,    -1,    -1,    -1,    31,    -1,    -1,    34,
      35,    -1,    37,    38,    39,    40,    41,    42,    43,    -1,
      45,    -1,    -1,    -1,    -1,   180,    -1,    -1,    53,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      75,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    -1,    -1,    -1,    92,    -1,    -1,
      95,    -1,    -1,    98,    -1,    -1,   101,    -1,   103,   104,
     105,   106,   107,   108,   109,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,
      -1,   126,   127,    -1,   129,   130,     1,    -1,    -1,    -1,
      -1,     6,    -1,   138,     9,    10,    -1,   142,    -1,    -1,
     145,    -1,    -1,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    26,    27,    -1,    -1,    -1,    31,    -1,    -1,    34,
      35,    -1,    37,    38,    39,    40,    41,    42,    43,    -1,
      45,    -1,    -1,    -1,    -1,   180,    -1,    -1,    53,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      75,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    -1,    -1,    -1,    92,    -1,    -1,
      95,    -1,    -1,    98,    -1,    -1,   101,    -1,   103,   104,
     105,   106,   107,   108,   109,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,
      -1,   126,   127,    -1,   129,   130,     1,    -1,    -1,    -1,
      -1,     6,    -1,   138,     9,    10,    -1,   142,    -1,    -1,
     145,    -1,    -1,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    26,    27,    -1,    -1,    -1,    31,    -1,    -1,    34,
      35,    -1,    37,    38,    39,    40,    41,    42,    43,    -1,
      45,    -1,    -1,    -1,    -1,   180,    -1,    -1,    53,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      75,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    -1,    -1,    -1,    92,    -1,    -1,
      95,    -1,    -1,    98,    -1,    -1,   101,    -1,   103,   104,
     105,   106,   107,   108,   109,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,
      -1,   126,   127,    -1,   129,   130,     1,    -1,    -1,    -1,
      -1,     6,    -1,   138,     9,    10,    -1,   142,    -1,    -1,
     145,    -1,    -1,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    26,    27,    -1,    -1,    -1,    31,    -1,    -1,    34,
      35,    -1,    37,    38,    39,    40,    41,    42,    43,    -1,
      45,    -1,    -1,    -1,    -1,   180,    -1,    -1,    53,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      75,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    -1,    -1,    -1,    92,    -1,    -1,
      95,    -1,    -1,    98,    -1,    -1,   101,    -1,   103,   104,
     105,   106,   107,   108,   109,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,
      -1,   126,   127,    -1,   129,   130,     1,    -1,    -1,    -1,
      -1,     6,    -1,   138,     9,    10,    -1,   142,    -1,    -1,
     145,    -1,    -1,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    26,    27,    -1,    -1,    -1,    31,    -1,    -1,    34,
      35,    -1,    37,    38,    39,    40,    41,    42,    43,    -1,
      45,    -1,    -1,    -1,    -1,   180,    -1,    -1,    53,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      75,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    -1,    -1,    -1,    92,    -1,    -1,
      95,    -1,    -1,    98,    -1,    -1,   101,    -1,   103,   104,
     105,   106,   107,   108,   109,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,
      -1,   126,   127,    -1,   129,   130,     1,    -1,    -1,    -1,
      -1,     6,    -1,   138,     9,    10,    -1,   142,    -1,    -1,
     145,    -1,    -1,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    26,    27,    -1,    -1,    -1,    31,    -1,    -1,    34,
      35,    -1,    37,    38,    39,    40,    41,    42,    43,    -1,
      45,    -1,    -1,    -1,    -1,   180,    -1,    -1,    53,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      75,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    -1,    -1,    -1,    92,    -1,    -1,
      95,    -1,    -1,    98,    -1,    -1,   101,    -1,   103,   104,
     105,   106,   107,   108,   109,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,
      -1,   126,   127,    -1,   129,   130,     1,    -1,    -1,    -1,
      -1,     6,    -1,   138,     9,    10,    -1,   142,    -1,    -1,
     145,    -1,    -1,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    26,    27,    -1,    -1,    -1,    31,    -1,    -1,    34,
      35,    -1,    37,    38,    39,    40,    41,    42,    43,    -1,
      45,    -1,    -1,    -1,    -1,   180,    -1,    -1,    53,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      75,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    -1,    -1,    -1,    92,    -1,    -1,
      95,    -1,    -1,    98,    -1,    -1,   101,    -1,   103,   104,
     105,   106,   107,   108,   109,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,
      -1,   126,   127,    -1,   129,   130,     1,    -1,    -1,    -1,
      -1,     6,    -1,   138,     9,    10,    -1,   142,    -1,    -1,
     145,    -1,    -1,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    26,    27,    -1,    -1,    -1,    31,    -1,    -1,    34,
      35,    -1,    37,    38,    39,    40,    41,    42,    43,    -1,
      45,    -1,    -1,    -1,    -1,   180,    -1,    -1,    53,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      75,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    -1,    -1,    -1,    92,    -1,    -1,
      95,    -1,    -1,    98,    -1,    -1,   101,    -1,   103,   104,
     105,   106,   107,   108,   109,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,
      -1,   126,   127,    -1,   129,   130,     1,    -1,    -1,    -1,
      -1,     6,    -1,   138,     9,    10,    -1,   142,    -1,    -1,
     145,    -1,    -1,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    26,    27,    -1,    -1,    -1,    31,    -1,    -1,    34,
      35,    -1,    37,    38,    39,    40,    41,    42,    43,    -1,
      45,    -1,    -1,    -1,    -1,   180,    -1,    -1,    53,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      75,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    -1,    -1,    -1,    92,    -1,    -1,
      95,    -1,    -1,    98,    -1,    -1,   101,    -1,   103,   104,
     105,   106,   107,   108,   109,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,
      -1,   126,   127,    -1,   129,   130,     1,    -1,    -1,    -1,
      -1,     6,    -1,   138,     9,    10,    -1,   142,    -1,    -1,
     145,    -1,    -1,    18,    19,    -1,    21,    -1,    -1,    -1,
      -1,    26,    27,    -1,    -1,    -1,    31,    -1,    -1,    34,
      35,    -1,    37,    38,    39,    40,    41,    42,    43,    -1,
      45,    -1,    -1,    -1,    -1,   180,    -1,    -1,    53,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    68,    -1,    -1,    -1,    -1,    -1,    74,
      75,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    -1,    -1,    -1,    92,    -1,    -1,
      95,    -1,    -1,    98,    -1,    -1,   101,    -1,   103,   104,
     105,   106,   107,   108,   109,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,
      -1,   126,   127,    -1,   129,   130,     1,    -1,    -1,    -1,
      -1,     6,    -1,   138,     9,    10,    -1,   142,    -1,    -1,
     145,    -1,    -1,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    26,    27,    -1,    -1,    -1,    31,    -1,    -1,    34,
      35,    -1,    37,    38,    39,    40,    41,    42,    43,    -1,
      45,    -1,    -1,    -1,    -1,   180,    -1,    -1,    53,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      75,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    -1,    -1,    -1,    92,    -1,    -1,
      95,    -1,    -1,    98,    -1,    -1,   101,    -1,   103,   104,
     105,   106,   107,   108,   109,    -1,   111,    -1,    -1,     7,
       8,    -1,    -1,    -1,    -1,    -1,    14,    -1,   123,    -1,
      -1,   126,   127,    -1,   129,   130,    24,    25,    -1,    -1,
      28,    29,    -1,   138,    32,    33,    -1,   142,    36,    -1,
     145,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    -1,
      -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   180,     7,     8,    -1,    -1,
      -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    25,    -1,    -1,    28,    29,    -1,
      -1,    32,    33,    -1,    -1,    36,   104,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,    -1,   115,   116,   117,
     118,   119,   120,   121,    55,    56,   124,    -1,    59,    -1,
     128,    -1,   130,    -1,   132,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   141,   142,   143,   144,    -1,    -1,    -1,
      -1,    -1,    -1,   151,    -1,   153,   154,   155,    -1,   157,
     158,   159,   160,   161,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   104,   172,    -1,    -1,    -1,    -1,   177,
     178,    -1,   113,   181,   115,   116,   117,   118,   119,   120,
     121,    -1,    -1,   124,    -1,    -1,    -1,   128,    -1,    -1,
      -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,   142,   143,   144,     7,     8,    -1,    -1,    -1,    -1,
     151,    14,   153,   154,   155,    -1,   157,   158,   159,   160,
     161,    24,    25,    -1,    -1,    28,    29,    -1,    -1,    32,
      33,   172,    -1,    36,    -1,    -1,   177,   178,    -1,    -1,
     181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    -1,    -1,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     7,     8,    -1,    -1,    -1,    -1,    -1,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      -1,    -1,    28,    29,    -1,    -1,    32,    33,    -1,    -1,
      36,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,    -1,   115,   116,   117,   118,   119,   120,   121,    55,
      56,   124,    -1,    59,    -1,   128,    -1,    -1,    -1,   132,
     133,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,
     143,   144,    -1,    -1,    -1,    -1,    -1,    -1,   151,    -1,
     153,   154,   155,    -1,   157,   158,   159,   160,   161,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,   172,
      -1,    -1,    -1,    -1,   177,   178,    -1,   113,   181,   115,
     116,   117,   118,   119,   120,   121,    -1,    -1,   124,    -1,
      -1,    -1,   128,    -1,    -1,    -1,   132,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,   142,   143,   144,    -1,
      -1,    -1,    -1,    -1,    -1,   151,    -1,   153,   154,   155,
      -1,   157,   158,   159,   160,   161,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   172,    -1,    -1,    -1,
      -1,   177,   178,    -1,    -1,   181
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   187,   189,     0,   190,     1,     6,     9,    10,    11,
      15,    18,    19,    21,    26,    27,    31,    34,    37,    38,
      39,    40,    41,    42,    43,    45,    53,    55,    67,    74,
      75,    76,    77,    85,    86,    87,    88,    92,    95,    96,
      98,   101,   103,   104,   105,   106,   107,   108,   109,   111,
     123,   126,   127,   129,   130,   138,   142,   145,   180,   188,
     191,   192,   205,   223,   225,   227,   229,   230,   272,   308,
     319,   322,   324,   330,   335,   342,   345,   348,   351,   352,
     353,   354,   355,   356,   400,   402,   403,   405,   411,   412,
     429,   439,   441,   446,   447,   451,   457,   459,   188,     1,
     142,   188,    54,   142,   232,   233,     1,    39,   142,   290,
     319,   322,     1,   452,     1,   448,     1,   460,     1,     7,
       8,    14,    24,    25,    28,    29,    32,    33,    36,    55,
      56,    59,   104,   113,   115,   116,   117,   118,   119,   120,
     121,   124,   128,   132,   141,   142,   143,   144,   151,   153,
     154,   155,   157,   158,   159,   160,   161,   172,   177,   178,
     181,   244,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   261,   263,   266,     1,   142,     1,   142,
      15,    18,     1,   142,     1,   142,   181,   234,   188,   280,
       1,   266,    84,   266,   188,   188,   150,   188,     1,   188,
     282,   188,     1,     6,   129,   188,   188,   188,    15,    18,
      19,    31,    40,    41,    96,   129,   355,     6,   142,   301,
     142,   298,     1,   284,     1,    66,   142,     1,   331,   359,
     323,     1,   142,     1,    84,   181,   281,   401,     1,    15,
      96,   142,   188,   240,    58,   224,   224,     1,   142,     1,
     142,   296,   188,    84,   289,   334,   188,     1,   325,   292,
      20,    69,   268,   268,     1,    35,   181,   350,     1,   350,
       1,   350,     1,   142,   337,   338,     1,   129,   142,   188,
     433,     1,   188,   417,   183,   417,   417,     1,   183,   188,
     295,   416,     1,   266,   267,   413,   415,     1,   275,     1,
     442,   267,   188,   206,   188,   183,   188,   188,   142,   277,
     129,   324,    63,   435,   333,   334,   188,   267,   188,   267,
      20,    35,   150,   461,   462,   463,   473,    53,    67,    68,
      69,    74,   347,   349,   234,   181,   181,   181,   181,   181,
     181,   181,   181,   234,   181,   251,   181,   181,   181,   181,
     181,   181,   181,   181,   181,   181,   181,   181,   181,   181,
     181,   181,   181,   181,   181,   181,   181,   181,   251,   251,
     251,   267,    58,   174,   175,   176,   172,   173,   162,   163,
      60,    61,    65,   170,   171,    62,   169,   168,   167,   166,
      63,    64,   184,    66,   347,   188,   188,   188,   440,    22,
      22,   188,   188,   182,   188,     1,   267,   418,    68,    68,
      50,   142,   188,   188,   188,   267,   188,    91,   103,   134,
     142,   142,    15,    18,     1,   357,   188,   183,   183,   303,
     183,   183,   300,   188,   267,   188,   142,    20,    74,   142,
     366,   188,   183,   188,   320,   321,     1,   288,    52,    60,
      61,    71,    79,    80,   146,   147,   148,   164,   165,   420,
     421,   407,   408,   188,   242,   241,   243,   231,   268,   231,
     188,   226,   188,   228,    75,    81,    82,    83,    99,   100,
     309,   311,   312,   318,   305,    50,   142,   305,   188,   305,
      20,    41,   130,   328,   329,   437,   268,     1,    67,   188,
     432,   276,     6,    34,    35,    40,   101,   269,   272,   344,
      20,   188,    57,   149,   221,   266,   273,   188,   337,   188,
     337,   188,   339,   183,   188,   188,   188,   188,   188,   404,
     188,   413,   413,   188,   267,   183,   416,   188,   337,   188,
     267,     1,   183,   278,   207,   222,   267,   233,   293,    52,
     291,   266,    53,   306,   435,   453,   449,    34,    35,    37,
      53,    67,    74,   479,     1,   221,   464,    20,   462,   182,
     182,   266,   267,   266,   266,   266,   266,   266,   267,   267,
     267,     1,   142,   182,   267,   266,   266,   266,     1,   142,
       1,   142,     1,    50,    51,   142,   267,   245,   266,   266,
     266,   266,   266,   266,   266,   267,   267,   182,    55,    59,
     250,   250,   250,   251,   251,   252,   252,   253,   253,   253,
     253,   253,   254,   254,   255,   256,   257,   260,   262,   264,
     263,   183,   455,   456,   142,   142,   188,     1,   188,   419,
     283,   188,   188,   267,   286,   287,    22,    22,    20,   142,
     302,   266,   188,   299,   266,   188,   285,   360,   406,    50,
     142,   188,   246,   247,   248,   267,   418,   267,   409,   410,
     188,   188,   188,    20,   181,   235,   235,   316,   314,   313,
     315,   297,    53,    74,   188,   310,   312,    78,   305,   438,
     366,   267,    20,   188,   188,   268,     1,    70,     1,    70,
       1,    70,    15,    18,    70,    73,   343,   346,     1,    37,
      53,   188,   434,   182,   337,   188,   188,   340,   420,   338,
     409,   416,   416,   414,   188,   443,   188,   142,   188,   458,
       3,     4,     5,    35,    46,    47,    48,    49,    50,    51,
      89,   133,   134,   208,   209,   210,   455,     1,   267,   422,
     435,   307,   306,   183,   183,   188,    20,   474,    84,     1,
      34,   188,   478,   182,   183,   183,   182,   182,   183,   182,
       1,   182,   183,   183,   182,   182,   182,   182,   182,   183,
     182,   183,   182,   182,   182,   182,   182,   182,   182,   182,
     182,   183,   246,   183,   182,   182,   182,   182,   182,   183,
     182,   182,    55,    63,   258,   259,   263,   142,   188,   456,
     196,   194,   188,   188,   188,    47,    89,   397,    16,    17,
      21,    22,    44,    89,    90,    91,   103,   387,   142,   142,
     358,   142,   304,   267,   188,   222,   361,   362,   363,   364,
     436,   437,   407,   182,   183,   183,    18,    19,    31,    41,
     105,   129,   182,   236,   237,   238,    86,    94,    95,   152,
     239,   266,   266,   266,   266,   268,   317,   267,   326,   180,
       1,    74,   188,   430,    20,   188,   188,   271,   188,   270,
     188,     1,     1,   188,     1,   266,   268,   188,   188,   188,
     350,   188,   341,   415,   183,   279,   133,   222,   222,   222,
      49,   221,   213,   221,   221,   222,   188,   210,   435,    53,
     188,   428,    30,   425,   268,   306,   268,   267,   267,   479,
      84,   476,   142,   188,   188,   266,   266,   266,   182,   142,
     266,   266,   266,   267,   182,   266,   266,   253,   185,     1,
     181,   201,     1,   181,   197,   266,   266,   188,   391,   390,
     389,    74,   388,   392,   188,   195,   193,   361,   183,   180,
     368,   366,     1,    84,   188,   336,   248,   410,   181,   182,
     183,   142,   238,    20,   266,   188,   370,   367,   368,   188,
     188,   432,   268,   221,   188,   188,    68,    68,   274,   267,
     267,   458,   142,   213,   212,   122,   125,   214,   211,    53,
     423,   183,   426,   427,    20,    20,   454,   450,   188,   142,
     268,   465,   182,   182,   182,   182,   182,   183,   182,   182,
     182,   183,   182,   182,   265,   188,   142,   202,   203,   188,
     141,   198,   199,   398,   393,   394,   395,   393,   267,   266,
     393,   201,   197,   266,    16,    17,    20,    22,    44,    72,
      89,    90,   369,   365,   188,     1,    50,   142,   221,   237,
       1,    53,   188,   431,   129,   142,   332,    20,    20,   268,
     337,   444,    30,   215,   215,   294,   267,   267,    53,   427,
     431,   431,   455,   455,   475,    82,   472,   266,   266,   263,
     204,   182,   183,   200,   182,   183,    30,   399,   183,   266,
       1,   129,   141,   143,   185,   380,   381,     1,   129,   143,
     372,   373,     1,    17,   371,     1,   129,   141,   143,   185,
     375,   376,   370,   370,   370,   367,   188,   188,   188,   182,
     188,   188,   327,   478,    20,   188,   183,   221,   103,   216,
     216,   268,   424,   188,   188,    20,   221,    81,   182,   182,
     221,   188,   203,   221,   188,   199,   266,   394,   396,   188,
     382,   383,   384,   183,   370,   188,   374,   183,   370,   188,
     221,   188,   377,   378,   379,   183,   370,   333,     1,    35,
     188,   477,   267,   221,    75,   217,    20,    53,   477,   221,
     142,     7,    36,   142,   385,   386,   385,   385,   381,   385,
     373,   370,   385,   385,   385,   376,   188,   188,   445,   221,
     431,   466,   110,   183,   218,    93,   142,    68,   219,   467,
     188,    85,   142,   268,   181,   468,   220,    68,   246,   469,
     182,   268,   470,    20,     1,   150,   188,   471,   188,   188
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   186,   187,   188,   189,   190,   189,   191,   191,   191,
     191,   191,   192,   192,   193,   192,   194,   192,   195,   192,
     196,   192,   197,   197,   198,   198,   200,   199,   201,   201,
     202,   202,   204,   203,   206,   205,   205,   207,   207,   208,
     208,   209,   209,   210,   210,   210,   210,   210,   210,   210,
     211,   210,   210,   212,   210,   210,   210,   210,   210,   213,
     213,   214,   214,   215,   215,   216,   216,   217,   218,   217,
     219,   219,   220,   219,   221,   222,   223,   223,   224,   224,
     225,   226,   225,   227,   228,   227,   229,   229,   230,   230,
     231,   232,   232,   233,   234,   234,   235,   235,   235,   236,
     236,   237,   238,   238,   238,   238,   238,   238,   238,   239,
     239,   239,   239,   240,   241,   240,   242,   240,   243,   240,
     240,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   245,   244,   244,
     244,   244,   244,   244,   246,   246,   247,   247,   248,   249,
     249,   249,   250,   250,   250,   250,   250,   251,   251,   251,
     251,   252,   252,   252,   253,   253,   253,   254,   254,   254,
     254,   254,   254,   255,   255,   255,   256,   256,   257,   257,
     258,   258,   259,   260,   259,   261,   262,   261,   263,   264,
     265,   263,   266,   266,   267,   267,   268,   268,   269,   269,
     270,   269,   269,   271,   269,   269,   269,   269,   269,   269,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     273,   272,   274,   272,   272,   275,   272,   272,   272,   272,
     276,   272,   277,   272,   272,   278,   272,   279,   272,   272,
     280,   272,   281,   272,   272,   282,   283,   272,   272,   284,
     285,   272,   272,   272,   286,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   287,   272,   272,   288,   272,   272,
     272,   272,   272,   289,   272,   272,   272,   290,   291,   272,
     272,   292,   272,   272,   272,   293,   294,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   295,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   296,   297,   272,   272,   272,   299,   298,
     300,   300,   302,   301,   303,   304,   303,   305,   307,   306,
     308,   308,   309,   310,   310,   310,   311,   311,   313,   312,
     314,   312,   315,   312,   316,   312,   317,   312,   318,   318,
     318,   319,   320,   319,   321,   319,   323,   322,   325,   326,
     327,   324,   324,   328,   329,   328,   331,   330,   332,   332,
     332,   333,   333,   334,   334,   335,   335,   335,   336,   336,
     336,   336,   336,   337,   337,   339,   338,   340,   341,   340,
     342,   343,   344,   344,   345,   345,   346,   346,   347,   347,
     348,   348,   348,   349,   349,   349,   350,   350,   350,   351,
     351,   352,   352,   353,   353,   354,   354,   355,   355,   355,
     357,   358,   356,   356,   359,   360,   356,   356,   361,   361,
     363,   362,   365,   364,   366,   367,   368,   368,   369,   369,
     369,   369,   369,   369,   369,   369,   369,   369,   369,   370,
     370,   371,   371,   372,   372,   374,   373,   373,   375,   375,
     377,   376,   378,   376,   379,   376,   376,   380,   380,   382,
     381,   383,   381,   384,   381,   381,   385,   386,   386,   386,
     386,   387,   387,   387,   387,   388,   387,   387,   389,   387,
     390,   387,   391,   387,   392,   387,   393,   393,   395,   396,
     394,   397,   398,   397,   399,   399,   401,   400,   402,   402,
     404,   403,   406,   405,   408,   407,   409,   409,   410,   411,
     411,   412,   412,   413,   414,   413,   415,   416,   417,   418,
     418,   419,   419,   420,   420,   420,   420,   420,   420,   421,
     421,   421,   421,   421,   421,   423,   424,   422,   425,   422,
     422,   426,   426,   427,   428,   428,   429,   429,   430,   430,
     430,   431,   431,   431,   432,   432,   432,   433,   433,   433,
     433,   434,   434,   434,   434,   435,   435,   436,   436,   437,
     438,   437,   440,   439,   439,   442,   443,   444,   445,   441,
     441,   446,   446,   448,   449,   450,   447,   447,   452,   453,
     454,   451,   451,   455,   455,   456,   457,   458,   460,   459,
     459,   461,   461,   462,   462,   464,   465,   466,   467,   468,
     469,   470,   463,   471,   471,   471,   472,   472,   474,   475,
     473,   473,   476,   476,   477,   477,   477,   478,   478,   478,
     479,   479,   479,   479,   479,   479,   479
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
       2,     1,     1,     0,     2,     0,     2,     0,     0,     4,
       0,     2,     0,     6,     1,     1,     3,     3,     0,     1,
       3,     0,     6,     3,     0,     5,     2,     1,     2,     1,
       2,     1,     3,     1,     0,     2,     0,     2,     3,     1,
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
       2,     2,     2,     3,     0,     6,     3,     0,     6,     4,
       2,     3,     4,     0,     3,     3,     4,     0,     0,     6,
       5,     0,     5,     3,     3,     0,     0,    11,     1,     1,
       1,     1,     2,     3,     2,     3,     2,     3,     2,     0,
       4,     4,     3,     3,     3,     2,     3,     3,     2,     3,
       2,     4,     4,     0,     0,     7,     3,     2,     0,     4,
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
#line 539 "rwlparser.y" /* yacc.c:1646  */
    {
	  ; // we are done!
	}
#line 3573 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 545 "rwlparser.y" /* yacc.c:1646  */
    { if (bit(rwm->mxq->errbits,RWL_ERROR_SEVERE)) YYABORT; }
#line 3579 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 551 "rwlparser.y" /* yacc.c:1646  */
    {  
	    bis(rwm->m2flags, RWL_P2_INTHING);
	    if (bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
	      YYACCEPT;
	  }
#line 3589 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 557 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->m2flags, RWL_P2_INTHING); 
	    if (bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
	      YYACCEPT;
	  }
#line 3599 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 572 "rwlparser.y" /* yacc.c:1646  */
    { rwlprintallvars(rwm); }
#line 3605 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 583 "rwlparser.y" /* yacc.c:1646  */
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
#line 3624 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 599 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->raname = rwm->inam;
	      bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	      bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	      rwm->ravarn = rwladdvar(rwm, rwm->inam, RWL_TYPE_RAST, 0);
	      rwlrastbeg(rwm, rwm->raname, RWL_TYPE_RAST);
	    }
#line 3636 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 608 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->raname = rwm->inam;
	      bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	      rwm->ravarn = rwladdvar(rwm, rwm->inam, RWL_TYPE_RAST, 0);
	      rwlrastbeg(rwm, rwm->raname, RWL_TYPE_RAST);
	    }
#line 3647 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 616 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->raname = rwm->inam;
	      bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	      bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	      rwm->ravarn = rwladdvar(rwm, rwm->inam, RWL_TYPE_RAPROC, 0);
	      rwlrastbeg(rwm, rwm->raname, RWL_TYPE_RAPROC);
	    }
#line 3659 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 625 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->raname = rwm->inam;
	      rwm->ravarn = rwladdvar(rwm, rwm->inam, RWL_TYPE_RAPROC, 0);
	      rwlrastbeg(rwm, rwm->raname, RWL_TYPE_RAPROC);
	    }
#line 3669 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 636 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlrastfin(rwm, rwm->raname, (sb4) rwm->ravarn);
	    }
#line 3677 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 640 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlcancelvar(rwm, rwm->raname, (sb4) rwm->ravarn);
	      rwlrastclear(rwm);
	      rwlerror(rwm, RWL_ERROR_DECL_RAST); 
	      yyerrok;
	    }
#line 3688 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 653 "rwlparser.y" /* yacc.c:1646  */
    {rwm->raentry = rwm->sval; }
#line 3694 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 655 "rwlparser.y" /* yacc.c:1646  */
    {rwlrastadd(rwm, rwm->raentry, rwm->pval.dval); }
#line 3700 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 661 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlrastfin(rwm, rwm->raname, (sb4) rwm->ravarn);
	    }
#line 3708 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 665 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlcancelvar(rwm, rwm->raname, (sb4) rwm->ravarn);
	      rwlrastclear(rwm);
	      rwlerror(rwm, RWL_ERROR_DECL_RAPROC); 
	      yyerrok;
	    }
#line 3719 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 677 "rwlparser.y" /* yacc.c:1646  */
    {rwm->raentry = rwm->inam; }
#line 3725 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 679 "rwlparser.y" /* yacc.c:1646  */
    {rwlrastadd(rwm, rwm->raentry, rwm->pval.dval); }
#line 3731 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 684 "rwlparser.y" /* yacc.c:1646  */
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
#line 3752 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 701 "rwlparser.y" /* yacc.c:1646  */
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
#line 3812 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 757 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DATABASE_WRONG); yyerrok; }
#line 3818 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 763 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
	        if (rwm->dbsav->username)
		  rwlerror(rwm, RWL_ERROR_DBSPEC_ALREADY, "username");
		else
		  rwm->dbsav->username = rwlstrdup(rwm, rwm->pval.sval);
	      }
	    }
#line 3832 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 783 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
	        if (rwm->dbsav->username)
		  rwlerror(rwm, RWL_ERROR_DBSPEC_ALREADY, "username");
		else
		  rwm->dbsav->username = rwlstrdup(rwm, rwm->pval.sval);
	      }
	    }
#line 3846 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 793 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	        rwm->dbsav->password = rwlstrdup(rwm, rwm->pval.sval);
	    }
#line 3855 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 798 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwlcclassgood(rwm, (rwm->pval.sval)))
	      { 
	        if (rwm->dbsav)
		  rwm->dbsav->cclass = rwlstrdup(rwm, rwm->pval.sval);
	      }
	    }
#line 3867 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 806 "rwlparser.y" /* yacc.c:1646  */
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
#line 3884 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 819 "rwlparser.y" /* yacc.c:1646  */
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
#line 3919 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 850 "rwlparser.y" /* yacc.c:1646  */
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
#line 3934 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 861 "rwlparser.y" /* yacc.c:1646  */
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
#line 3949 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 872 "rwlparser.y" /* yacc.c:1646  */
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
#line 3967 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 888 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      { 
		rwm->dbsav->stmtcache = rwlcheckminval(rwm->mxq, 0, rwm->pval.ival
		  , 0, RWL_DEFAULT_STMTCACHE, (text *)"cursorcache");
		bis(rwm->dbsav->flags, RWL_DB_CCACHUSER);
	      }
	    }
#line 3980 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 897 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      { 
		if (rwm->dbsav->pooltype)
		  rwlerror(rwm, RWL_ERROR_DBPOOL_ALREADY);
	        rwm->dbsav->pooltype = RWL_DBPOOL_SESSION;
		rwm->dbsav->poolmin = 
		  rwlcheckminval(rwm->mxq, 0, rwm->pval.ival,0,0, (text *)"sessionpool min size");
		rwm->dbsav->ptimeout = RWL_DBPOOL_DEFAULT_TIMEOUT;
		rwm->dbsav->pooltext = "session pool";
		rwm->misctxt = (text *)"sessionpool max size";
	      }
	    }
#line 3998 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 914 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
		if (rwm->dbsav->pooltype)
		  rwlerror(rwm, RWL_ERROR_DBPOOL_ALREADY);
	        rwm->dbsav->pooltype = RWL_DBPOOL_POOLED;
		rwm->dbsav->pooltext = "drcp pooled";
	      }
	    }
#line 4012 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 924 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
		if (rwm->dbsav->pooltype)
		  rwlerror(rwm, RWL_ERROR_DBPOOL_ALREADY);
	        rwm->dbsav->pooltype = RWL_DBPOOL_DEDICATED;
		rwm->dbsav->pooltext = "dedicated";
	      }
	    }
#line 4026 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 934 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
		if (rwm->dbsav->pooltype)
		  rwlerror(rwm, RWL_ERROR_DBPOOL_ALREADY);
	        rwm->dbsav->pooltype = RWL_DBPOOL_RETHRDED;
		rwm->dbsav->pooltext = "threads dedicated";
	      }
	    }
#line 4040 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 944 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
		if (rwm->dbsav->pooltype)
		  rwlerror(rwm, RWL_ERROR_DBPOOL_ALREADY);
	        rwm->dbsav->pooltype = RWL_DBPOOL_RECONNECT;
		rwm->dbsav->pooltext = "reconnect";
	      }
	    }
#line 4054 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 961 "rwlparser.y" /* yacc.c:1646  */
    {
#if (RWL_OCI_VERSION<12)
	    rwlerror(rwm, RWL_ERROR_NOT_SUPPORTED_IN_VERSION, "statemark",RWL_OCI_VERSION);
#else
	    bis(rwm->dbsav->flags,RWL_DB_STATEMARK);
#endif
	  }
#line 4066 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 969 "rwlparser.y" /* yacc.c:1646  */
    {
#if (RWL_OCI_VERSION<12)
	    rwlerror(rwm, RWL_ERROR_NOT_SUPPORTED_IN_VERSION, "requestmark",RWL_OCI_VERSION);
#else
	    bis(rwm->dbsav->flags,RWL_DB_REQMARK);
#endif
	  }
#line 4078 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 979 "rwlparser.y" /* yacc.c:1646  */
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
#line 4093 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 990 "rwlparser.y" /* yacc.c:1646  */
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
#line 4109 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 1006 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      { 
		rwm->dbsav->ptimeout = rwlcheckminval(rwm->mxq, 0, rwm->pval.ival
		  , RWL_DBPOOL_CONNECT==rwm->dbsav->pooltype ? 0: 1
		  , RWL_DBPOOL_DEFAULT_TIMEOUT, (text *)"release timeout");
	      }
	    }
#line 4122 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 1019 "rwlparser.y" /* yacc.c:1646  */
    { 
#if (OCI_MAJOR_VERSION >= 12)
	      if (rwm->dbsav && rwm->pval.dval >= 0)
		rwm->dbsav->wtimeout = rwm->pval.dval;
#else
	    rwlerror(rwm, RWL_ERROR_NOT_YET_IMPL, "sessionpool wait attribute");
#endif
	    }
#line 4135 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 1033 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->dbsav && rwm->pval.dval >= 0)
	      bis(rwm->dbsav->flags, RWL_DB_SPTOBREAK);
	  }
#line 4144 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 1038 "rwlparser.y" /* yacc.c:1646  */
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
#line 4159 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 1049 "rwlparser.y" /* yacc.c:1646  */
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
#line 4175 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 1066 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprimmed(rwm);
	  }
#line 4183 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 1073 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprimmed(rwm);
	  }
#line 4191 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 1089 "rwlparser.y" /* yacc.c:1646  */
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
#line 4207 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 1101 "rwlparser.y" /* yacc.c:1646  */
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
#line 4226 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 1117 "rwlparser.y" /* yacc.c:1646  */
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
#line 4262 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 1153 "rwlparser.y" /* yacc.c:1646  */
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
#line 4277 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 1164 "rwlparser.y" /* yacc.c:1646  */
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
#line 4293 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 1177 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwm->mxq->evar[rwm->codeguess].v2val = rwm->facnt;
	      rwm->supsemerr = RWL_SUPSEM_PROC;
	    }
#line 4302 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 1185 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 4311 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 1190 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 4319 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 1197 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 4328 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 1202 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 4336 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 1209 "rwlparser.y" /* yacc.c:1646  */
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
#line 4422 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 1299 "rwlparser.y" /* yacc.c:1646  */
    {
          sb4 l = rwlfindvar(rwm->mxq, rwm->inam, RWL_VAR_NOGUESS);
          if (l>=0)
            rwlprintvar(rwm->mxq, l);
          }
#line 4432 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 1307 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m3flags, RWL_P3_MISBRACK); }
#line 4438 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 1308 "rwlparser.y" /* yacc.c:1646  */
    { bic(rwm->m3flags, RWL_P3_MISBRACK); }
#line 4444 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 1311 "rwlparser.y" /* yacc.c:1646  */
    { if (!bit(rwm->m2flags, RWL_P2_NOWARNDEP)) rwlerror(rwm, RWL_ERROR_MISSING_DECL_BRACK); }
#line 4450 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 1323 "rwlparser.y" /* yacc.c:1646  */
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
#line 4478 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 1351 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_INT; bic(rwm->addvarbits,RWL_IDENT_THRSPEC); }
#line 4484 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 1353 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_DBL; bic(rwm->addvarbits,RWL_IDENT_THRSPEC); }
#line 4490 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 1355 "rwlparser.y" /* yacc.c:1646  */
    { rwm->declslen=RWL_DEFAULT_STRLEN; rwm->dtype=RWL_TYPE_STR; bic(rwm->addvarbits,RWL_IDENT_THRSPEC); }
#line 4496 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 1357 "rwlparser.y" /* yacc.c:1646  */
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
#line 4515 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 1372 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwm->dtype = 0;
	      rwlerror(rwm, RWL_ERROR_BAD_ARGUMENT_TYPE, "file");
	    }
#line 4524 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 1377 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwm->dtype = 0;
	      rwlerror(rwm, RWL_ERROR_BAD_ARGUMENT_TYPE, "sql");
	    }
#line 4533 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 1382 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwm->dtype = 0;
	      rwlerror(rwm, RWL_ERROR_BAD_ARGUMENT_TYPE, "clob");
	    }
#line 4542 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 1391 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m4flags,RWL_P4_STATSONLY); }
#line 4548 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 1393 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m4flags,RWL_P4_PROCHASSQL); }
#line 4554 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 1395 "rwlparser.y" /* yacc.c:1646  */
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
#line 4574 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1415 "rwlparser.y" /* yacc.c:1646  */
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
#line 4592 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 1430 "rwlparser.y" /* yacc.c:1646  */
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
#line 4610 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 1445 "rwlparser.y" /* yacc.c:1646  */
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
#line 4629 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 1461 "rwlparser.y" /* yacc.c:1646  */
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
#line 4649 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 1504 "rwlparser.y" /* yacc.c:1646  */
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
#line 4666 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1518 "rwlparser.y" /* yacc.c:1646  */
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
#line 4684 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 1532 "rwlparser.y" /* yacc.c:1646  */
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
#line 4702 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1546 "rwlparser.y" /* yacc.c:1646  */
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
#line 4718 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 1558 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    }
#line 4726 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1561 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_UNIFORM); }
#line 4732 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 1562 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LOGB); }
#line 4738 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1563 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LOG); }
#line 4744 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1564 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_EXPB); }
#line 4750 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1565 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_EXP); }
#line 4756 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1566 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_CEIL); }
#line 4762 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1567 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_TRUNC); }
#line 4768 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1568 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_FLOOR); }
#line 4774 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1569 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ROUND); }
#line 4780 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1570 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SQRT); }
#line 4786 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1571 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SIN); }
#line 4792 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1572 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_COS); }
#line 4798 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1573 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ATAN2); }
#line 4804 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1574 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LENGTHB); }
#line 4810 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1576 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_INSTRB2); }
#line 4816 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1578 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_INSTRB3); }
#line 4822 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1580 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SUBSTRB2); }
#line 4828 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1582 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SUBSTRB3); }
#line 4834 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1583 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_GETENV); }
#line 4840 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1584 "rwlparser.y" /* yacc.c:1646  */
    { 
						    if (bit(rwm->m4flags, RWL_P4_SLASHCONVERT)) rwlexprpush0(rwm,RWL_STACK_WINSLASHF2B);
						  }
#line 4848 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1587 "rwlparser.y" /* yacc.c:1646  */
    { 
						    if (bit(rwm->m4flags, RWL_P4_SLASHCONVERT)) rwlexprpush0(rwm,RWL_STACK_WINSLASHF2BB);
						  }
#line 4856 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1590 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SYSTEM); }
#line 4862 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1592 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprpush(rwm,rwm->inam ,RWL_STACK_SYSTEM2STR);
	  }
#line 4870 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1596 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_SYSTEM_BAD); yyerrok;
	    rwlexprpush0(rwm,RWL_STACK_SYSTEM);
	  }
#line 4879 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1600 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ERLANG); }
#line 4885 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1601 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ERLANG2); }
#line 4891 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1603 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ERLANGK); }
#line 4897 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1605 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_NORMALRANDOM); }
#line 4903 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1606 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ISNULL); }
#line 4909 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1608 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ACCESS); }
#line 4915 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1610 "rwlparser.y" /* yacc.c:1646  */
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
#line 4930 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1621 "rwlparser.y" /* yacc.c:1646  */
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
#line 4945 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1632 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprpush(rwm, rwm->inam, RWL_STACK_SERVERRELEASE);
	  }
#line 4953 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1636 "rwlparser.y" /* yacc.c:1646  */
    {
	    // push RWL_T_NULL to make exprfinish work
	    rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    rwlerror(rwm, RWL_ERROR_DBFUN_NEED_IDENT, "serverrelease"); yyerrok;
	  }
#line 4963 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1642 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprpush(rwm, rwm->inam, RWL_STACK_OPENSESSIONCOUNT);
	  }
#line 4971 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1646 "rwlparser.y" /* yacc.c:1646  */
    {
	    // push RWL_T_NULL to make exprfinish work
	    rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    rwlerror(rwm, RWL_ERROR_DBFUN_NEED_IDENT, "opensessioncount"); yyerrok;
	  }
#line 4981 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1652 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprpush(rwm, rwm->inam, RWL_STACK_ACTIVESESSIONCOUNT);
	  }
#line 4989 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1656 "rwlparser.y" /* yacc.c:1646  */
    {
	    // push RWL_T_NULL to make exprfinish work
	    rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    rwlerror(rwm, RWL_ERROR_DBFUN_NEED_IDENT, "activesessioncount"); yyerrok;
	  }
#line 4999 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1662 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->sqname)
	      rwlexprpush(rwm, rwm->sqname, RWL_STACK_SQL_ID);
	  }
#line 5008 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1667 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprpush(rwm, rwm->inam, RWL_STACK_SQL_ID);
	  }
#line 5016 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1671 "rwlparser.y" /* yacc.c:1646  */
    {
	    // push RWL_T_NULL to make exprfinish work
	    rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    rwlerror(rwm, RWL_ERROR_SQLID_NEED_IDENT); yyerrok;
	  }
#line 5026 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1678 "rwlparser.y" /* yacc.c:1646  */
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
#line 5043 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1692 "rwlparser.y" /* yacc.c:1646  */
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
#line 5059 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1704 "rwlparser.y" /* yacc.c:1646  */
    {
            rwlexprpush(rwm, 0, RWL_STACK_DBSECONDS);
          }
#line 5067 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1708 "rwlparser.y" /* yacc.c:1646  */
    {
            rwlexprpush(rwm, 0, RWL_STACK_OCISECONDS);
          }
#line 5075 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1712 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (!bit(rwm->m2flags, RWL_P2_NOWARNDEP) && bit(rwm->m3flags,RWL_P3_MISBRACK))
	      rwlerror(rwm, RWL_ERROR_MISSING_EMPTY_BRACKETS, "runseconds");
	    rwlexprpush(rwm, 0, RWL_STACK_RUNSECONDS);
	  }
#line 5085 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1718 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (!bit(rwm->m2flags, RWL_P2_NOWARNDEP) && bit(rwm->m3flags,RWL_P3_MISBRACK))
	      rwlerror(rwm, RWL_ERROR_MISSING_EMPTY_BRACKETS, "epochseconds");
	    rwlexprpush(rwm, 0, RWL_STACK_EPOCHSECONDS);
	  }
#line 5095 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1737 "rwlparser.y" /* yacc.c:1646  */
    { rwm->aacnt[rwm->furlev]++; }
#line 5101 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1743 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ISNULL); }
#line 5107 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1744 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ISNOTNULL); }
#line 5113 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1750 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_MINUS); }
#line 5119 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1751 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_NOT); }
#line 5125 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1752 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_NOT); }
#line 5131 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1753 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_BITWISE_NOT); }
#line 5137 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1758 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_MUL); }
#line 5143 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1759 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_DIV); }
#line 5149 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1760 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_MOD); }
#line 5155 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1765 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ADD); }
#line 5161 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1766 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SUB); }
#line 5167 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1770 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_BITWISE_LEFT_SHIFT); }
#line 5173 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1771 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_BITWISE_RIGHT_SHIFT); }
#line 5179 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1776 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LESS); }
#line 5185 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1777 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_GREATER); }
#line 5191 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1778 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LESSEQ); }
#line 5197 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1779 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_GREATEREQ); }
#line 5203 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1780 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_BETWEEN); }
#line 5209 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1785 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_EQUAL); }
#line 5215 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1786 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_NOTEQUAL); }
#line 5221 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1791 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_BITWISE_AND); }
#line 5227 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1796 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_BITWISE_XOR); }
#line 5233 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1801 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_BITWISE_OR); }
#line 5239 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1807 "rwlparser.y" /* yacc.c:1646  */
    { 
	    // With AND (and OR) skipdep is used to mark
	    // the expression element we need to skip until
	    // in case the first condition is false (true for OR)
	    rwm->ptail->branchtype = RWL_EXP_ANDBRANCH;
	    if (rwm->skipdep++ >= UB1MAXVAL)
	      rwlsevere(rwm, "[rwlparser-andskip:%d]", rwm->skipdep);
	    rwm->ptail->skipnxt = rwm->skipdep;
	  }
#line 5253 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1817 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprpush2(rwm,0,RWL_STACK_AND, rwm->skipdep);
	    rwm->skipdep--;
	  }
#line 5262 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1826 "rwlparser.y" /* yacc.c:1646  */
    {  
	    // see comment above
	    rwm->ptail->branchtype = RWL_EXP_ORBRANCH;
	    if (rwm->skipdep++ >= UB1MAXVAL)
	      rwlsevere(rwm, "[rwlparser-orskip:%d]", rwm->skipdep);
	    rwm->ptail->skipnxt = rwm->skipdep;
	  }
#line 5274 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1834 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprpush2(rwm,0,RWL_STACK_OR ,rwm->skipdep);
	    rwm->skipdep--;
	  }
#line 5283 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1843 "rwlparser.y" /* yacc.c:1646  */
    {  
	    // With conditional execution we mark the condition
	    // with RWL_EXP_CONDBRANCH1
	    rwm->ptail->branchtype = RWL_EXP_CONDBRANCH1;
	    if (rwm->skipdep++ >= UB1MAXVAL)
	      rwlsevere(rwm, "[rwlparser-condskip:%d]", rwm->skipdep);
	    rwm->ptail->skipnxt = rwm->skipdep;
	  }
#line 5296 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1852 "rwlparser.y" /* yacc.c:1646  */
    {
	    // and the place of ':' (really ELSE) with 
	    // RWL_EXP_CONDBRANCH2
	    rwm->ptail->branchtype = RWL_EXP_CONDBRANCH2;
	    rwm->ptail->skipnxt = rwm->skipdep;
	  }
#line 5307 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1859 "rwlparser.y" /* yacc.c:1646  */
    {  
	    // And the actual conditional is the "end if" place
	    rwlexprpush2(rwm,0,RWL_STACK_CONDITIONAL, rwm->skipdep);
	    rwm->skipdep--;
	  }
#line 5317 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1868 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_CONCAT); }
#line 5323 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1873 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_CONCAT); }
#line 5329 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1884 "rwlparser.y" /* yacc.c:1646  */
    { rwm->supsemerr = 0; }
#line 5335 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1889 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
	    {
	      rwm->ifdirdep = 0; // since we may be skipping over $else, $endif
	      YYACCEPT;
	    }
	  }
#line 5347 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1897 "rwlparser.y" /* yacc.c:1646  */
    { yyerrok; }
#line 5353 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1899 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_COMMAND_NOT_LOCAL, "threads"); yyerrok; }
#line 5359 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1906 "rwlparser.y" /* yacc.c:1646  */
    { yyerrok; }
#line 5365 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1908 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_COMMAND_NOT_LOCAL, "run"); yyerrok; }
#line 5371 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 1912 "rwlparser.y" /* yacc.c:1646  */
    { yyerrok; }
#line 5377 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1914 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_NOT_LOCAL, "database"); yyerrok; }
#line 5383 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 1916 "rwlparser.y" /* yacc.c:1646  */
    { yyerrok ; }
#line 5389 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 1919 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_NOT_LOCAL, "random procedure array"); yyerrok; }
#line 5395 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 1922 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_NOT_LOCAL, "random string array"); yyerrok; }
#line 5401 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 1927 "rwlparser.y" /* yacc.c:1646  */
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
#line 5434 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 1956 "rwlparser.y" /* yacc.c:1646  */
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
#line 5453 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 1971 "rwlparser.y" /* yacc.c:1646  */
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
#line 5468 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 1988 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_LOB); yyerrok; }
#line 5474 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 1995 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_INT); yyerrok; }
#line 5480 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 2001 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_DBL); yyerrok; }
#line 5486 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 2003 "rwlparser.y" /* yacc.c:1646  */
    { 
		rwm->declslen=RWL_DEFAULT_STRLEN;
	      }
#line 5494 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 2009 "rwlparser.y" /* yacc.c:1646  */
    {
	      if (RWL_TYPE_CANCELLED == rwm->pval.vtype)
		rwm->declslen = 1; // kind of a kludge, but this prevents doube
				   // error reporting if using local variable
	      else
	      {
		rwm->declslen = rwm->pval.ival;
	      }
	    }
#line 5508 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 2023 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_STR); yyerrok; }
#line 5514 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 2025 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dtype=RWL_TYPE_FILE;
	    //if (rwm->codename)
	    //  rwlerror(rwm, RWL_ERROR_NOT_LOCAL, "file");
	  }
#line 5524 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 2034 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_FILE); yyerrok; }
#line 5530 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 2039 "rwlparser.y" /* yacc.c:1646  */
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
#line 5555 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 2062 "rwlparser.y" /* yacc.c:1646  */
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
#line 5582 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 2086 "rwlparser.y" /* yacc.c:1646  */
    { if (!rwm->rslerror) rwlcodeadd0(rwm, RWL_CODE_ELSE); }
#line 5588 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 2089 "rwlparser.y" /* yacc.c:1646  */
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
#line 5613 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 2112 "rwlparser.y" /* yacc.c:1646  */
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
#line 5654 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 2153 "rwlparser.y" /* yacc.c:1646  */
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
#line 5726 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 2222 "rwlparser.y" /* yacc.c:1646  */
    { 
		  rwlerror(rwm, RWL_ERROR_LOOP);
		  rwm->rsllityp[rwm->rsldepth] = RWL_LI_BAD;
		  yyerrok;
		}
#line 5736 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 2229 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SYSTEM); }
#line 5742 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 2232 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprpush(rwm,rwm->inam ,RWL_STACK_SYSTEM2STR);
	  }
#line 5750 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 2237 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_SYSTEM_BAD); yyerrok;
	    rwlexprclear(rwm);
	  }
#line 5759 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 2242 "rwlparser.y" /* yacc.c:1646  */
    {
		/* start a dummy assignment such that expression gets executed */
		rwm->assignvar = RWL_DUMMY_VAR;
		rwm->assignoper = RWL_T_ASSIGN;
		rwlexprbeg(rwm);
	      }
#line 5770 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 2251 "rwlparser.y" /* yacc.c:1646  */
    {
		/* start expression for assign */
		rwm->assignvar = rwm->inam;
		rwlexprbeg(rwm);
	      }
#line 5780 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 2260 "rwlparser.y" /* yacc.c:1646  */
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
#line 5796 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 2272 "rwlparser.y" /* yacc.c:1646  */
    {
	        rwm->assignvar = rwm->codename;
		rwlexprbeg(rwm);
	      }
#line 5805 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 2277 "rwlparser.y" /* yacc.c:1646  */
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
#line 5838 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 2306 "rwlparser.y" /* yacc.c:1646  */
    { 
		  rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		  rwlexprclear(rwm);
		  yyerrok;
		}
#line 5848 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 2313 "rwlparser.y" /* yacc.c:1646  */
    {
	        rwm->assignvar = rwm->codename;
		rwlexprbeg(rwm);
	      }
#line 5857 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 2318 "rwlparser.y" /* yacc.c:1646  */
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
#line 5890 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 2348 "rwlparser.y" /* yacc.c:1646  */
    { 
		  rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		  rwlexprclear(rwm);
		  yyerrok;
		}
#line 5900 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 2356 "rwlparser.y" /* yacc.c:1646  */
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
#line 5918 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 2370 "rwlparser.y" /* yacc.c:1646  */
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
#line 5933 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 2384 "rwlparser.y" /* yacc.c:1646  */
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
#line 5951 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 2400 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (!rwm->codename)
	    {
	      rwlerror(rwm, RWL_ERROR_NOT_DONE_IN_MAIN, "modify database leak");
	      goto dontmoddbpool;
	    }
	    else
	      rwlcodeadd0(rwm, RWL_CODE_MODDBLEAK);
	  }
#line 5965 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 2411 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->codename)
	      rwlcodeadd0(rwm, RWL_CODE_SESRELDROP);
	  }
#line 5974 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 2417 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->codename)
	      rwlcodeadd0(rwm, RWL_CODE_SESRELDROP);
	  }
#line 5983 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 2423 "rwlparser.y" /* yacc.c:1646  */
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
#line 5998 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 2435 "rwlparser.y" /* yacc.c:1646  */
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
#line 6013 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 2447 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->codename)
	      rwlcodeadd0(rwm, RWL_CODE_SHIFT);
	    else
	      if (!bit(rwm->m2flags, RWL_P2_NOEXEC))
		rwlshiftdollar(rwm->mxq, &rwm->loc);
	  }
#line 6025 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 2456 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->codename)
	      rwlcodeadd0(rwm, RWL_CODE_GETRUSAGE);
	    else
	      if (!bit(rwm->m2flags, RWL_P2_NOEXEC))
		rwlgetrusage(rwm->mxq, 0);
	  }
#line 6037 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 2465 "rwlparser.y" /* yacc.c:1646  */
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
#line 6052 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 2478 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_MODIFY); yyerrok; }
#line 6058 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 2483 "rwlparser.y" /* yacc.c:1646  */
    { 
	    /* handle procedure call with arguments
	     * as if it were a function call 
	     */
	    if (0 != rwm->furlev)
	      rwlsevere(rwm,"[rwlparser-recurse2:%d]", rwm->furlev);
	    bic(rwm->m2flags, RWL_P2_AT|RWL_P2_ATDEFAULT); /* default DB */
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
	    rwm->funcn[0] = (yychar == RWL_T_IDENTIFIER) 
	      ? rwm->previnam
	      : rwm->inam;
	    rwlexprbeg(rwm);
	    }
#line 6092 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 2515 "rwlparser.y" /* yacc.c:1646  */
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
#line 6181 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 2600 "rwlparser.y" /* yacc.c:1646  */
    {
	      /* This code can cause lookahead */
	      rwlerror(rwm, RWL_ERROR_BAD_ARG_LIST);
	      rwlexprclear(rwm);
	      yyerrok;
	    }
#line 6192 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 2607 "rwlparser.y" /* yacc.c:1646  */
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
#line 6211 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 2626 "rwlparser.y" /* yacc.c:1646  */
    { rwm->supsemerr = RWL_SUPSEM_EMBSQL; }
#line 6217 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 2632 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m3flags, RWL_P3_IMMPARSEFOR); }
#line 6223 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 2634 "rwlparser.y" /* yacc.c:1646  */
    { bic(rwm->m3flags, RWL_P3_IMMPARSEFOR); }
#line 6229 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 2640 "rwlparser.y" /* yacc.c:1646  */
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
#line 6316 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 2725 "rwlparser.y" /* yacc.c:1646  */
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
#line 6349 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 2755 "rwlparser.y" /* yacc.c:1646  */
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
#line 6385 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 2788 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_NO_FILE_FOR_FFLUSH);
	    yyerrok;
	  }
#line 6394 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 2795 "rwlparser.y" /* yacc.c:1646  */
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
#line 6421 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 2820 "rwlparser.y" /* yacc.c:1646  */
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
#line 6454 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 317:
#line 2851 "rwlparser.y" /* yacc.c:1646  */
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
#line 6477 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 2879 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_FILE_FOR_WRITE);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6488 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 2888 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_STRING_FOR_SPRINTF);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6499 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 2897 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6510 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 2907 "rwlparser.y" /* yacc.c:1646  */
    {
	      // Note that we do not document this syntax without comma
	      if (rwm->filenam)
		rwlerror(rwm, RWL_ERROR_COMMA_IS_RECOMMENDED, rwm->filenam
		, bit(rwm->mflags,RWL_P_PRINTLINE) ? "writeline" : "write");
	    }
#line 6521 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 2919 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6532 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 2927 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_FILE_FOR_WRITE);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6543 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 2935 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_FILE_FOR_WRITE);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6554 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 2943 "rwlparser.y" /* yacc.c:1646  */
    { 
		if (rwm->codename)
		  rwlcodeadd0(rwm, RWL_CODE_NEWLINE);
		else
		  fputs(bit(rwm->m4flags, RWL_P4_CRNLWRITELINE) ? "\r\n" : "\n", stdout);
		bic(rwm->mflags,RWL_P_PRINTLINE|RWL_P_PRINTBLANK);
	      }
#line 6566 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 337:
#line 2953 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6577 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 339:
#line 2961 "rwlparser.y" /* yacc.c:1646  */
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
#line 6592 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 340:
#line 2972 "rwlparser.y" /* yacc.c:1646  */
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
#line 6631 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 341:
#line 3008 "rwlparser.y" /* yacc.c:1646  */
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
#line 6671 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 342:
#line 3045 "rwlparser.y" /* yacc.c:1646  */
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
#line 6714 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 343:
#line 3085 "rwlparser.y" /* yacc.c:1646  */
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
#line 6735 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 3102 "rwlparser.y" /* yacc.c:1646  */
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
#line 6760 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 345:
#line 3125 "rwlparser.y" /* yacc.c:1646  */
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
#line 6782 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 346:
#line 3144 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlerror(rwm, RWL_ERROR_UNEXPECTED_AFTER_IDENTIFIER);
	      yyerrok;
	    }
#line 6791 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 347:
#line 3151 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_MISSING_SEMICOLON); yyerrok; }
#line 6797 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 348:
#line 3157 "rwlparser.y" /* yacc.c:1646  */
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
#line 6825 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 3181 "rwlparser.y" /* yacc.c:1646  */
    {
	  rwm->lobwritedata = rwlexprfinish(rwm);
	  rwm->loboffset = 0;
	}
#line 6834 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 351:
#line 3190 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->loboffset = rwlexprfinish(rwm);
	  }
#line 6842 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 352:
#line 3197 "rwlparser.y" /* yacc.c:1646  */
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
#line 6869 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 353:
#line 3220 "rwlparser.y" /* yacc.c:1646  */
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
#line 6895 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 355:
#line 3246 "rwlparser.y" /* yacc.c:1646  */
    {
	  rwm->lobreadlength = rwlexprfinish(rwm);
	}
#line 6903 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 356:
#line 3250 "rwlparser.y" /* yacc.c:1646  */
    {
	  rwm->loboffset = rwlexprfinish(rwm);
	}
#line 6911 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 357:
#line 3256 "rwlparser.y" /* yacc.c:1646  */
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
#line 7061 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 3406 "rwlparser.y" /* yacc.c:1646  */
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
#line 7175 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 3518 "rwlparser.y" /* yacc.c:1646  */
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
#line 7212 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 3554 "rwlparser.y" /* yacc.c:1646  */
    {  
	    // This syntax is not documented
	    bic(rwm->m3flags, RWL_P3_CLHEADFOR);
	    rwlerror(rwm, RWL_ERROR_LEGACY_CONTROLLOOP_SYNTAX);
	  }
#line 7222 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 361:
#line 3559 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m3flags, RWL_P3_CLHEADFOR); }
#line 7228 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 362:
#line 3563 "rwlparser.y" /* yacc.c:1646  */
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
#line 7245 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 363:
#line 3579 "rwlparser.y" /* yacc.c:1646  */
    { if (bit(rwm->m3flags, RWL_P3_CLHEADFOR))
	      rwlerror(rwm, RWL_ERROR_MIX_LEGACY_CLOOP);
	  }
#line 7253 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 364:
#line 3583 "rwlparser.y" /* yacc.c:1646  */
    { if (bit(rwm->m3flags, RWL_P3_CLHEADFOR))
	      rwlerror(rwm, RWL_ERROR_MIX_LEGACY_CLOOP);
	  }
#line 7261 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 365:
#line 3587 "rwlparser.y" /* yacc.c:1646  */
    { if (!bit(rwm->m3flags, RWL_P3_CLHEADFOR))
	      rwlerror(rwm, RWL_ERROR_MIX_LEGACY_CLOOP);
	  }
#line 7269 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 368:
#line 3598 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7275 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 369:
#line 3600 "rwlparser.y" /* yacc.c:1646  */
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
#line 7292 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 370:
#line 3612 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7298 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 371:
#line 3614 "rwlparser.y" /* yacc.c:1646  */
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
#line 7317 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 372:
#line 3628 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7323 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 373:
#line 3630 "rwlparser.y" /* yacc.c:1646  */
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
#line 7342 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 374:
#line 3644 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7348 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 375:
#line 3646 "rwlparser.y" /* yacc.c:1646  */
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
#line 7365 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 376:
#line 3658 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7371 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 377:
#line 3660 "rwlparser.y" /* yacc.c:1646  */
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
#line 7401 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 378:
#line 3689 "rwlparser.y" /* yacc.c:1646  */
    { rwm->ynqueue = 0; }
#line 7407 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 379:
#line 3690 "rwlparser.y" /* yacc.c:1646  */
    { rwm->ynqueue = RWL_QUEUE_EVERY; }
#line 7413 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 380:
#line 3691 "rwlparser.y" /* yacc.c:1646  */
    { rwm->ynqueue = RWL_NOQUEUE_EVERY; }
#line 7419 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 381:
#line 3695 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->scname = rwm->inam; 
	    bic(rwm->m2flags, RWL_P2_AT|RWL_P2_ATDEFAULT);
	  }
#line 7428 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 382:
#line 3700 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->scname = rwm->inam;
	    bic(rwm->m2flags, RWL_P2_AT|RWL_P2_ATDEFAULT);
	  }
#line 7437 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 383:
#line 3705 "rwlparser.y" /* yacc.c:1646  */
    { 
	      bis(rwm->m2flags, RWL_P2_ATDEFAULT);
	    }
#line 7445 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 384:
#line 3709 "rwlparser.y" /* yacc.c:1646  */
    {
	      bic(rwm->m2flags, RWL_P2_AT|RWL_P2_ATDEFAULT);
	      // lookahead may have consumed the next identifier
	      rwm->scname = (yychar == RWL_T_IDENTIFIER)
	        ? rwm->previnam
	        : rwm->inam;
	    }
#line 7457 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 385:
#line 3717 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->dbname = rwm->inam; 
	      bis(rwm->m2flags, RWL_P2_AT);
	    }
#line 7466 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 386:
#line 3726 "rwlparser.y" /* yacc.c:1646  */
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
#line 7485 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 387:
#line 3741 "rwlparser.y" /* yacc.c:1646  */
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
#line 7517 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 388:
#line 3773 "rwlparser.y" /* yacc.c:1646  */
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
#line 7535 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 389:
#line 3788 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->m3flags, RWL_P3_IMMEDSQL); 
	    bis(rwm->sqsav->flags, RWL_SQLFLAG_IBUSE);
	    bis(rwm->sqsav->flags, RWL_SQLFLAG_IDUSE);
	    if (bit(rwm->m3flags,RWL_P3_IMPLCASE))
	      bis(rwm->sqsav->flags, RWL_SQLFLAG_ICASE);
	  }
#line 7547 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 390:
#line 3797 "rwlparser.y" /* yacc.c:1646  */
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
#line 7588 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 392:
#line 3835 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_SQL_WRONG) ;
	    yyerrok;
	  }
#line 7597 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 394:
#line 3843 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7603 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 395:
#line 3844 "rwlparser.y" /* yacc.c:1646  */
    {
	    if ((rwm->msqlstk = rwlexprfinish(rwm)))
	      bis(rwm->m3flags, RWL_P3_IMMISDYN); // now dynamic
	    else
	    {
	      rwm->mxq->evar[rwm->sqsavvarn].vtype = RWL_TYPE_CANCELLED;
	      rwm->mxq->evar[rwm->sqsavvarn].stype = "cancelled (sql)";
	    }
	  }
#line 7617 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 396:
#line 3856 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->sqllino = rwm->loc.lineno;
	  }
#line 7625 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 400:
#line 3865 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "sql") ;
	  }
#line 7633 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 403:
#line 3876 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bis(rwm->m2flags, RWL_P2_ATDEFAULT);
	  }
#line 7641 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 404:
#line 3880 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dbname = rwm->inam; 
	    bis(rwm->m2flags, RWL_P2_AT);
	  }
#line 7650 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 405:
#line 3888 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->m2flags, RWL_P2_AT|RWL_P2_ATDEFAULT);
	  }
#line 7658 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 406:
#line 3892 "rwlparser.y" /* yacc.c:1646  */
    { 
	      bis(rwm->m2flags, RWL_P2_ATDEFAULT);
	    }
#line 7666 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 407:
#line 3896 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->dbname = rwm->inam; 
	      bis(rwm->m2flags, RWL_P2_AT);
	    }
#line 7675 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 409:
#line 3906 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->dbname = 0;
	      bis(rwm->m2flags, RWL_P2_ATDEFAULT); /* explict choose standard DB */
	    }
#line 7684 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 410:
#line 3912 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->dbname = rwm->inam;
	      bis(rwm->m2flags, RWL_P2_AT); /* named DB */
	    }
#line 7693 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 411:
#line 3917 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_NO_DATABASE_NAME); yyerrok; }
#line 7699 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 412:
#line 3919 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_MISSING_SEMICOLON); yyerrok; }
#line 7705 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 415:
#line 3927 "rwlparser.y" /* yacc.c:1646  */
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
#line 7735 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 416:
#line 3953 "rwlparser.y" /* yacc.c:1646  */
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
#line 7812 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 418:
#line 4030 "rwlparser.y" /* yacc.c:1646  */
    {
		  rwm->assignvar = rwm->inam;
		  rwlexprbeg(rwm);
		}
#line 7821 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 419:
#line 4035 "rwlparser.y" /* yacc.c:1646  */
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
#line 7872 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 424:
#line 4098 "rwlparser.y" /* yacc.c:1646  */
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
#line 7891 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 425:
#line 4113 "rwlparser.y" /* yacc.c:1646  */
    {
              rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
              rwlexprclear(rwm);
              rwm->rslerror++; // to prevent attempting else/endif code generation
              yyerrok;
            }
#line 7902 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 426:
#line 4122 "rwlparser.y" /* yacc.c:1646  */
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
#line 7921 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 427:
#line 4137 "rwlparser.y" /* yacc.c:1646  */
    {
              rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
              rwlexprclear(rwm);
              rwm->rslerror++; // to prevent attempting else/endif code generation
              yyerrok;
            }
#line 7932 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 428:
#line 4146 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_LEGACY_WHILE_SYNTAX);
	  }
#line 7940 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 429:
#line 4150 "rwlparser.y" /* yacc.c:1646  */
    {
	    bis(rwm->rslflags[rwm->rsldepth], RWL_RSLFLAG_WHILOP);
	  }
#line 7948 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 430:
#line 4156 "rwlparser.y" /* yacc.c:1646  */
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
#line 7969 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 431:
#line 4173 "rwlparser.y" /* yacc.c:1646  */
    {
              rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
              rwlexprclear(rwm);
              rwm->rslerror++; // to prevent attempting else/endif code generation
              yyerrok;
            }
#line 7980 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 432:
#line 4180 "rwlparser.y" /* yacc.c:1646  */
    {
              rwlerror(rwm, RWL_ERROR_UNEXPECTED_KEYWORD, "loop");
              rwlexprclear(rwm);
              rwm->rslerror++; // to prevent attempting else/endif code generation
              yyerrok;
            }
#line 7991 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 437:
#line 4197 "rwlparser.y" /* yacc.c:1646  */
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
#line 8011 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 438:
#line 4213 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (rwm->codename)
	      rwlerror(rwm, RWL_ERROR_NO_LOCAL_SUMGLOB);
	    else
	      bis(rwm->addvarbits,RWL_IDENT_GLOBAL);
	  }
#line 8022 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 439:
#line 4223 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dtype=RWL_TYPE_STR;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 8032 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 440:
#line 4229 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->dtype=RWL_TYPE_STR;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 8041 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 441:
#line 4237 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dtype=RWL_TYPE_INT;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 8051 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 442:
#line 4243 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->dtype=RWL_TYPE_INT;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 8060 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 443:
#line 4251 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dtype=RWL_TYPE_DBL;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 8070 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 444:
#line 4257 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->dtype=RWL_TYPE_DBL;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 8079 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 445:
#line 4265 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 8088 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 446:
#line 4270 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 8096 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 447:
#line 4276 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_CLOB; }
#line 8102 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 448:
#line 4277 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_BLOB; }
#line 8108 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 449:
#line 4278 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_NCLOB; }
#line 8114 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 450:
#line 4282 "rwlparser.y" /* yacc.c:1646  */
    { rwm->sqllino = rwm->loc.lineno;}
#line 8120 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 451:
#line 4283 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	    bic(rwm->m2flags, RWL_P2_BADSQLFILTXT);
	    bic(rwm->m3flags, RWL_P3_IMMEDSQL); 
	    bic(rwm->m3flags, RWL_P3_IMMISDYN); 
	    rwm->sqllen = 0;
	    rwm->sqname = rwm->inam;
	  }
#line 8134 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 453:
#line 4294 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_SQL_WRONG); yyerrok;
	  }
#line 8142 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 454:
#line 4297 "rwlparser.y" /* yacc.c:1646  */
    { rwm->sqllino = rwm->loc.lineno;}
#line 8148 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 455:
#line 4298 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bic(rwm->m2flags, RWL_P2_BADSQLFILTXT);
	    bic(rwm->m3flags, RWL_P3_IMMEDSQL); 
	    bic(rwm->m3flags, RWL_P3_IMMISDYN); 
	    rwm->sqllen = 0;
	    rwm->sqname = rwm->inam;
	  }
#line 8161 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 457:
#line 4308 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_SQL_WRONG); yyerrok;
	  }
#line 8169 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 460:
#line 4318 "rwlparser.y" /* yacc.c:1646  */
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
#line 8219 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 461:
#line 4365 "rwlparser.y" /* yacc.c:1646  */
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
#line 8254 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 462:
#line 4399 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->m4flags, RWL_P4_AMPERSAND) && rwldynarcheck(rwm))
	    {
	      rwlerror(rwm, RWL_ERROR_CANNOT_AMPREP_HERE, "named sql declaration");
	      rwm->mxq->evar[rwm->sqsavvarn].vtype = RWL_TYPE_CANCELLED;
	      rwm->mxq->evar[rwm->sqsavvarn].stype = "cancelled (sql)";
	    }
	  }
#line 8267 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 464:
#line 4412 "rwlparser.y" /* yacc.c:1646  */
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
#line 8345 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 465:
#line 4490 "rwlparser.y" /* yacc.c:1646  */
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
#line 8442 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 469:
#line 4593 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_BIND); yyerrok; }
#line 8448 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 471:
#line 4597 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_BINDOUT); yyerrok; }
#line 8454 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 473:
#line 4601 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DEFINE); yyerrok; }
#line 8460 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 474:
#line 4603 "rwlparser.y" /* yacc.c:1646  */
    {
		  bis(rwm->sqsav->flags, RWL_SQFLAG_IGNERR);
		}
#line 8468 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 475:
#line 4607 "rwlparser.y" /* yacc.c:1646  */
    {
		  bic(rwm->sqsav->flags, RWL_SQFLAG_NOCURC);
		}
#line 8476 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 476:
#line 4611 "rwlparser.y" /* yacc.c:1646  */
    {
		  bis(rwm->sqsav->flags, RWL_SQFLAG_NOCURC);
		}
#line 8484 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 477:
#line 4616 "rwlparser.y" /* yacc.c:1646  */
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
#line 8506 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 478:
#line 4635 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ARRAY); yyerrok; }
#line 8512 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 479:
#line 4640 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_MISSING_SEMICOLON_IN_SQL); }
#line 8518 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 482:
#line 4646 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->sqsav->flags, RWL_SQFLAG_DYNAMIC))
	      rwlerror(rwm, RWL_ERROR_DEFINE_ARRAY_NOT_DYNAMIC);
	    else
	      bis(rwm->sqsav->flags, RWL_SQFLAG_ARRAYD);
	  }
#line 8529 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 485:
#line 4660 "rwlparser.y" /* yacc.c:1646  */
    {
	  // Note that it would not be too hard to replace
	  // the integer constant here by an expression
	  // which would make sense as that is what
	  // can be done with modify sql for dynamic sql
	  rwm->bdpos = rwm->ival; rwm->bdtyp=RWL_DEFINE;
	}
#line 8541 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 487:
#line 4669 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->sqsav->flags, RWL_SQLFLAG_IDUSE))
	      rwlerror(rwm, RWL_ERROR_IMPLICIT_ALREADY, "define");
	    bis(rwm->sqsav->flags, RWL_SQLFLAG_IDUSE);
	  }
#line 8551 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 490:
#line 4683 "rwlparser.y" /* yacc.c:1646  */
    { rwm->bdname = rwm->sval; rwm->bdtyp=RWL_BINDOUT_NAME; }
#line 8557 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 492:
#line 4685 "rwlparser.y" /* yacc.c:1646  */
    { 
	    // We could also use expression here, but we would
	    // of course need to check it was either a non-negative number
	    // or a string starting with :
	    rwm->bdpos = bit(rwm->m2flags,RWL_P2_BINDZERO) ? rwm->ival+1 : rwm->ival;
	    rwm->bdtyp=RWL_BINDOUT_POS; 
	  }
#line 8569 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 494:
#line 4693 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->bdtyp=RWL_BINDOUT_SAME;
	  }
#line 8577 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 496:
#line 4697 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_IMPLICIT_NOT_BINDOUT);
	  }
#line 8585 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 499:
#line 4708 "rwlparser.y" /* yacc.c:1646  */
    { rwm->bdname = rwm->sval; rwm->bdtyp=RWL_BIND_NAME; }
#line 8591 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 501:
#line 4710 "rwlparser.y" /* yacc.c:1646  */
    { 
	    // same comment as above
	    rwm->bdpos = bit(rwm->m2flags,RWL_P2_BINDZERO) ? rwm->ival+1 : rwm->ival;
	    rwm->bdtyp=RWL_BIND_POS; 
	  }
#line 8601 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 503:
#line 4716 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->bdtyp=RWL_BIND_SAME;
	  }
#line 8609 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 505:
#line 4720 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->sqsav->flags, RWL_SQLFLAG_IBUSE))
	      rwlerror(rwm, RWL_ERROR_IMPLICIT_ALREADY, "bind");
	    bis(rwm->sqsav->flags, RWL_SQLFLAG_IBUSE);
	  }
#line 8619 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 506:
#line 4729 "rwlparser.y" /* yacc.c:1646  */
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
#line 8717 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 507:
#line 4825 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->inam = RWL_DUMMY_VAR;
	    rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2, "function", "runseconds", "bind/define");
	  }
#line 8726 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 508:
#line 4830 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->inam = RWL_DUMMY_VAR;
	    rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2, "function", "epochseconds", "bind/define");
	  }
#line 8735 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 509:
#line 4834 "rwlparser.y" /* yacc.c:1646  */
    { bic(rwm->m2flags,RWL_P2_BINDRAW); }
#line 8741 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 510:
#line 4835 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m2flags,RWL_P2_BINDRAW); }
#line 8747 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 511:
#line 4839 "rwlparser.y" /* yacc.c:1646  */
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
#line 8768 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 512:
#line 4856 "rwlparser.y" /* yacc.c:1646  */
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
#line 8789 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 513:
#line 4873 "rwlparser.y" /* yacc.c:1646  */
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
#line 8810 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 514:
#line 4890 "rwlparser.y" /* yacc.c:1646  */
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
#line 8837 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 515:
#line 4912 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 8843 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 516:
#line 4913 "rwlparser.y" /* yacc.c:1646  */
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
#line 8878 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 517:
#line 4944 "rwlparser.y" /* yacc.c:1646  */
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
#line 8903 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 518:
#line 4964 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 8909 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 519:
#line 4965 "rwlparser.y" /* yacc.c:1646  */
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
#line 8935 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 520:
#line 4987 "rwlparser.y" /* yacc.c:1646  */
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
#line 8954 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 522:
#line 5002 "rwlparser.y" /* yacc.c:1646  */
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
#line 8973 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 524:
#line 5017 "rwlparser.y" /* yacc.c:1646  */
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
#line 8992 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 528:
#line 5037 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 8998 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 529:
#line 5039 "rwlparser.y" /* yacc.c:1646  */
    { rwm->msqlstk = rwlexprfinish(rwm); }
#line 9004 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 530:
#line 5041 "rwlparser.y" /* yacc.c:1646  */
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
#line 9059 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 531:
#line 5094 "rwlparser.y" /* yacc.c:1646  */
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
#line 9093 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 532:
#line 5124 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->mdbsphi = rwm->mdbsplo = rwlexprfinish(rwm);
	    if (!rwm->mdbsplo)
	      rwlexprclear(rwm);
	  }
#line 9103 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 533:
#line 5130 "rwlparser.y" /* yacc.c:1646  */
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
#line 9136 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 535:
#line 5162 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (!(rwm->mdbsphi = rwlexprfinish(rwm)))
	      rwlexprclear(rwm);
	  }
#line 9145 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 536:
#line 5169 "rwlparser.y" /* yacc.c:1646  */
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
#line 9169 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 538:
#line 5192 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m3flags, RWL_P3_SPFCONCAT); }
#line 9175 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 539:
#line 5193 "rwlparser.y" /* yacc.c:1646  */
    { bic(rwm->m3flags, RWL_P3_SPFCONCAT); }
#line 9181 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 540:
#line 5197 "rwlparser.y" /* yacc.c:1646  */
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
#line 9205 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 541:
#line 5217 "rwlparser.y" /* yacc.c:1646  */
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
#line 9223 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 542:
#line 5235 "rwlparser.y" /* yacc.c:1646  */
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
#line 9246 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 544:
#line 5257 "rwlparser.y" /* yacc.c:1646  */
    {
	  rwm->conhead = rwm->contail = 0;
	}
#line 9254 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 545:
#line 5261 "rwlparser.y" /* yacc.c:1646  */
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
#line 9279 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 548:
#line 5289 "rwlparser.y" /* yacc.c:1646  */
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
#line 9302 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 549:
#line 5310 "rwlparser.y" /* yacc.c:1646  */
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
#line 9327 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 550:
#line 5332 "rwlparser.y" /* yacc.c:1646  */
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
#line 9352 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 551:
#line 5356 "rwlparser.y" /* yacc.c:1646  */
    {  
	    bic(rwm->mflags,RWL_P_PRINTLINE);
	    bic(rwm->mflags,RWL_P_PRINTTOFILE);
	  }
#line 9361 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 552:
#line 5361 "rwlparser.y" /* yacc.c:1646  */
    {  
	    bis(rwm->mflags,RWL_P_PRINTLINE);
	    bic(rwm->mflags,RWL_P_PRINTTOFILE);
	  }
#line 9370 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 554:
#line 5369 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->mflags,RWL_P_PRINTBLANK); }
#line 9376 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 556:
#line 5374 "rwlparser.y" /* yacc.c:1646  */
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
#line 9438 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 557:
#line 5435 "rwlparser.y" /* yacc.c:1646  */
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
#line 9474 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 558:
#line 5470 "rwlparser.y" /* yacc.c:1646  */
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
#line 9489 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 559:
#line 5485 "rwlparser.y" /* yacc.c:1646  */
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
#line 9542 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 560:
#line 5534 "rwlparser.y" /* yacc.c:1646  */
    { 
		rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 9552 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 562:
#line 5544 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_MISSING_SEMICOLON);
	    yyerrok;
	  }
#line 9561 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 563:
#line 5551 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_ASSIGN; }
#line 9567 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 564:
#line 5552 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_GREATEQ; }
#line 9573 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 565:
#line 5553 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_RSHIFTASSIGN; }
#line 9579 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 566:
#line 5554 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_LESSEQ; }
#line 9585 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 567:
#line 5555 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_PIPEFROM; }
#line 9591 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 568:
#line 5556 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_PIPETO; }
#line 9597 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 570:
#line 5560 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_APPEND; }
#line 9603 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 571:
#line 5561 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_ASNADD; }
#line 9609 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 572:
#line 5562 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_ASNSUB; }
#line 9615 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 573:
#line 5563 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_ASNBIS; }
#line 9621 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 574:
#line 5564 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_ASNBIC; }
#line 9627 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 575:
#line 5571 "rwlparser.y" /* yacc.c:1646  */
    {
		rwl_estack *estk;
		rwlexprpush(rwm, rwm->assignvar, RWL_STACK_ASN);
		estk = rwlexprfinish(rwm);
		rwlcodeaddp(rwm, RWL_CODE_ASSIGN, estk);
	      }
#line 9638 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 576:
#line 5578 "rwlparser.y" /* yacc.c:1646  */
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
#line 9668 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 578:
#line 5604 "rwlparser.y" /* yacc.c:1646  */
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
#line 9685 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 580:
#line 5618 "rwlparser.y" /* yacc.c:1646  */
    { 
		rwlerror(rwm, RWL_ERROR_LOOP);
		rwlexprclear(rwm);
		// prevent attempting endloop code generation
		rwm->loopvar[rwm->rsldepth] = 0;
		rwm->rsllityp[rwm->rsldepth] = RWL_LI_BAD;
		bic(rwm->rslflags[rwm->rsldepth], RWL_RSLFLAG_MAYBRK);
		yyerrok;
	      }
#line 9699 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 583:
#line 5637 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwl_lilist *thisli = rwlalloc(rwm, sizeof(rwl_lilist));
	    rwlexprpush(rwm, rwm->loopvar[rwm->rsldepth], RWL_STACK_ASN);
	    thisli->listk = rwlexprfinish(rwm);
	    rwm->rsllitail[rwm->rsldepth]->linxt = thisli;
	    rwm->rsllitail[rwm->rsldepth] = thisli;
	  }
#line 9711 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 586:
#line 5657 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 9720 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 587:
#line 5662 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 9728 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 590:
#line 5671 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "execute") ; }
#line 9734 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 593:
#line 5678 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "loop") ; }
#line 9740 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 596:
#line 5685 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "if") ; yyerrok; }
#line 9746 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 599:
#line 5692 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (0 != rwlstrcmp(rwm->inam, rwm->sqname))
	      rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END2, "sql", rwm->sqname);
	  }
#line 9755 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 600:
#line 5697 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END2, "sql", rwm->sqname) ; yyerrok; }
#line 9761 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 602:
#line 5703 "rwlparser.y" /* yacc.c:1646  */
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
#line 9776 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 603:
#line 5714 "rwlparser.y" /* yacc.c:1646  */
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
#line 9791 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 604:
#line 5725 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (bit(rwm->rslflags[rwm->rsldepth-1], RWL_RSLFLAG_WHILOP))
	      rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "loop") ;
	    else
	      rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "while") ;
	    yyerrok;
	  }
#line 9803 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 605:
#line 5736 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->cursorand = 0;
	  }
#line 9811 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 606:
#line 5741 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->cursorand = rwlexprfinish(rwm);
	  }
#line 9819 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 608:
#line 5748 "rwlparser.y" /* yacc.c:1646  */
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
#line 9878 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 609:
#line 5805 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->loc.errlin = 0;
	    rwm->sqlfile = 0; /* not from a file */
	  }
#line 9887 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 610:
#line 5810 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprbeg(rwm);
	  }
#line 9895 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 611:
#line 5814 "rwlparser.y" /* yacc.c:1646  */
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
#line 9980 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 612:
#line 5897 "rwlparser.y" /* yacc.c:1646  */
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
#line 10004 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 613:
#line 5917 "rwlparser.y" /* yacc.c:1646  */
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
#line 10031 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 614:
#line 5941 "rwlparser.y" /* yacc.c:1646  */
    { 
		rwlerror(rwm, RWL_ERROR_BAD_READLINE);
		yyerrok;
	      }
#line 10040 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 615:
#line 5948 "rwlparser.y" /* yacc.c:1646  */
    { rwm->reg_estk = rwm->str_estk = rwm->sub_estk = 0; }
#line 10046 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 616:
#line 5950 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->reg_estk = rwlexprfinish(rwm);
	  }
#line 10054 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 617:
#line 5954 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->str_estk = rwlexprfinish(rwm);
	  }
#line 10062 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 618:
#line 5958 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->sub_estk = rwlexprfinish(rwm);
	  }
#line 10070 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 619:
#line 5962 "rwlparser.y" /* yacc.c:1646  */
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
#line 10113 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 620:
#line 6001 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprclear(rwm);
	    rwlerror(rwm, RWL_ERROR_BAD_REGEX);
	    yyerrok;
	  }
#line 10123 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 621:
#line 6010 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->m2flags, RWL_P2_REGEXSUBG);
	  }
#line 10131 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 622:
#line 6014 "rwlparser.y" /* yacc.c:1646  */
    {
	    bis(rwm->m2flags, RWL_P2_REGEXSUBG);
	  }
#line 10139 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 623:
#line 6020 "rwlparser.y" /* yacc.c:1646  */
    { rwm->reg_estk = rwm->str_estk = 0; }
#line 10145 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 624:
#line 6022 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->reg_estk = rwlexprfinish(rwm);
	  }
#line 10153 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 625:
#line 6026 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->str_estk = rwlexprfinish(rwm);
	    rwm->idlist = rwm->idtail = 0;
	  }
#line 10162 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 626:
#line 6031 "rwlparser.y" /* yacc.c:1646  */
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
#line 10199 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 627:
#line 6065 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprclear(rwm);
	    rwlerror(rwm, RWL_ERROR_BAD_REGEX);
	    yyerrok;
	  }
#line 10209 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 628:
#line 6074 "rwlparser.y" /* yacc.c:1646  */
    { rwm->reg_estk = rwm->str_estk = 0; }
#line 10215 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 629:
#line 6076 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->reg_estk = rwlexprfinish(rwm);
	  }
#line 10223 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 630:
#line 6080 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->str_estk = rwlexprfinish(rwm);
	    rwm->idlist = rwm->idtail = 0;
	  }
#line 10232 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 631:
#line 6085 "rwlparser.y" /* yacc.c:1646  */
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
#line 10269 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 632:
#line 6119 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprclear(rwm);
	    rwlerror(rwm, RWL_ERROR_BAD_REGEX);
	    yyerrok;
	  }
#line 10279 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 635:
#line 6132 "rwlparser.y" /* yacc.c:1646  */
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
#line 10324 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 636:
#line 6175 "rwlparser.y" /* yacc.c:1646  */
    {
		/* start a dummy assignment such that the system expression gets executed */
		rwm->assignvar = RWL_DUMMY_VAR;
		rwm->assignoper = RWL_T_ASSIGN;
		rwlexprbeg(rwm);
	      }
#line 10335 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 637:
#line 6184 "rwlparser.y" /* yacc.c:1646  */
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
#line 10355 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 638:
#line 6209 "rwlparser.y" /* yacc.c:1646  */
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
#line 10370 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 639:
#line 6221 "rwlparser.y" /* yacc.c:1646  */
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
#line 10393 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 640:
#line 6240 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ILLEGAL_THREAD); yyerrok; }
#line 10399 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 645:
#line 6254 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->cqnstart = rwm->cqnstop = 0.0;
	    rwm->cqnnow = rwlclock(rwm->mxq,0);
	  }
#line 10408 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 646:
#line 6259 "rwlparser.y" /* yacc.c:1646  */
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
#line 10436 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 647:
#line 6284 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->cqnstop = rwm->pval.dval;
	    if (rwm->cqnstop < rwm->cqnstart || rwm->cqnstop < rwm->cqnnow)
	    {
	      rwlerror(rwm, RWL_ERROR_CQN_STOP_BEFORE_START, rwm->cqnstop, rwm->cqnstart, rwm->cqnnow);
	      rwm->cqnat = 0;
	    }
	  }
#line 10449 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 648:
#line 6293 "rwlparser.y" /* yacc.c:1646  */
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
#line 10505 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 649:
#line 6345 "rwlparser.y" /* yacc.c:1646  */
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
#line 10534 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 650:
#line 6370 "rwlparser.y" /* yacc.c:1646  */
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
#line 10566 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 651:
#line 6398 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlcodeaddu(rwm, RWL_CODE_CQNISCB, 0); // Is in callback
	    rwlcodetail(rwm);
	  }
#line 10575 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 655:
#line 6409 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "querynotification");
	    yyerrok;
	  }
#line 10584 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 657:
#line 6418 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->cqnstart = rwm->pval.dval;
	  }
#line 10592 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 658:
#line 6425 "rwlparser.y" /* yacc.c:1646  */
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
#line 10612 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 659:
#line 6443 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlcodetail(rwm);
	  }
#line 10620 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 661:
#line 6448 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ILLEGAL_THREAD); yyerrok; }
#line 10626 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 663:
#line 6453 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->mythr->dbnam = rwm->inam;
	  }
#line 10634 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 666:
#line 6462 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "threads") ; }
#line 10640 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 669:
#line 6470 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "run") ; }
#line 10646 "rwlparser.tab.c" /* yacc.c:1646  */
    break;


#line 10650 "rwlparser.tab.c" /* yacc.c:1646  */
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
