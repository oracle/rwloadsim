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
#line 478 "rwlparser.y" /* yacc.c:355  */

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
#define YYLAST   5769

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  186
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  298
/* YYNRULES -- Number of rules.  */
#define YYNRULES  682
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1248

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
       0,   540,   540,   547,   551,   553,   552,   568,   569,   570,
     572,   575,   582,   584,   601,   600,   610,   609,   618,   617,
     627,   626,   636,   641,   650,   651,   655,   654,   661,   666,
     674,   675,   679,   678,   686,   685,   758,   763,   764,   776,
     777,   780,   781,   784,   794,   799,   807,   820,   851,   862,
     874,   873,   889,   899,   898,   916,   926,   936,   946,   959,
     960,   963,   971,   981,   992,  1007,  1008,  1012,  1013,  1014,
    1017,  1041,  1065,  1077,  1079,  1078,  1091,  1092,  1098,  1097,
    1125,  1132,  1139,  1140,  1144,  1145,  1148,  1161,  1160,  1212,
    1224,  1223,  1244,  1249,  1256,  1261,  1268,  1354,  1355,  1359,
    1368,  1369,  1372,  1373,  1374,  1378,  1379,  1383,  1411,  1413,
    1415,  1417,  1432,  1437,  1442,  1450,  1451,  1453,  1455,  1474,
    1476,  1475,  1491,  1490,  1506,  1505,  1521,  1564,  1578,  1592,
    1606,  1618,  1622,  1623,  1624,  1625,  1626,  1627,  1628,  1629,
    1630,  1631,  1632,  1633,  1634,  1635,  1636,  1638,  1640,  1642,
    1644,  1645,  1648,  1651,  1652,  1656,  1661,  1662,  1663,  1665,
    1667,  1668,  1670,  1681,  1692,  1696,  1702,  1706,  1712,  1716,
    1722,  1727,  1731,  1739,  1737,  1764,  1768,  1772,  1778,  1784,
    1788,  1789,  1793,  1794,  1798,  1803,  1804,  1805,  1810,  1811,
    1812,  1813,  1814,  1818,  1819,  1820,  1821,  1825,  1826,  1827,
    1830,  1831,  1832,  1836,  1837,  1838,  1839,  1840,  1841,  1845,
    1846,  1847,  1851,  1852,  1856,  1857,  1861,  1862,  1866,  1868,
    1867,  1885,  1887,  1886,  1902,  1904,  1913,  1903,  1928,  1929,
    1933,  1934,  1944,  1945,  1949,  1957,  1960,  1959,  1966,  1969,
    1968,  1972,  1974,  1976,  1978,  1981,  1987,  2016,  2031,  2044,
    2046,  2047,  2051,  2053,  2057,  2059,  2064,  2063,  2070,  2069,
    2081,  2086,  2085,  2093,  2097,  2121,  2147,  2145,  2173,  2171,
    2282,  2291,  2290,  2294,  2293,  2298,  2304,  2303,  2313,  2312,
    2321,  2334,  2339,  2333,  2367,  2375,  2380,  2374,  2409,  2416,
    2432,  2431,  2444,  2460,  2471,  2477,  2483,  2495,  2507,  2517,
    2527,  2526,  2539,  2545,  2543,  2661,  2668,  2684,  2686,  2688,
    2688,  2689,  2692,  2694,  2696,  2693,  2698,  2702,  2701,  2818,
    2851,  2859,  2884,  2858,  2936,  2937,  2938,  2939,  2941,  2942,
    2950,  2951,  2959,  2960,  2969,  2972,  2971,  2980,  2982,  2990,
    2998,  3007,  3015,  3017,  3024,  3025,  3036,  3072,  3109,  3150,
    3167,  3149,  3209,  3216,  3223,  3222,  3254,  3255,  3263,  3262,
    3310,  3312,  3311,  3321,  3472,  3471,  3619,  3625,  3628,  3644,
    3648,  3652,  3659,  3660,  3664,  3664,  3678,  3678,  3694,  3694,
    3710,  3710,  3724,  3724,  3755,  3756,  3757,  3760,  3766,  3765,
    3775,  3774,  3792,  3791,  3839,  3854,  3863,  3838,  3900,  3908,
    3909,  3909,  3922,  3921,  3928,  3929,  3930,  3936,  3937,  3941,
    3945,  3953,  3957,  3961,  3969,  3970,  3976,  3982,  3984,  3987,
    3988,  3993,  3992,  4094,  4096,  4095,  4150,  4154,  4158,  4159,
    4163,  4178,  4187,  4202,  4211,  4215,  4221,  4238,  4245,  4255,
    4256,  4257,  4261,  4262,  4278,  4288,  4294,  4302,  4308,  4316,
    4322,  4330,  4335,  4342,  4343,  4344,  4348,  4349,  4348,  4359,
    4363,  4364,  4363,  4373,  4380,  4381,  4384,  4384,  4465,  4463,
    4477,  4554,  4651,  4652,  4656,  4657,  4660,  4661,  4664,  4665,
    4668,  4672,  4676,  4680,  4699,  4705,  4707,  4710,  4711,  4720,
    4721,  4726,  4725,  4734,  4744,  4745,  4749,  4749,  4751,  4750,
    4759,  4758,  4762,  4769,  4770,  4774,  4774,  4776,  4775,  4782,
    4781,  4785,  4794,  4890,  4895,  4900,  4901,  4904,  4921,  4938,
    4955,  4978,  4978,  5009,  5030,  5030,  5053,  5052,  5068,  5067,
    5083,  5082,  5099,  5100,  5103,  5105,  5103,  5159,  5190,  5189,
    5226,  5227,  5235,  5234,  5258,  5259,  5263,  5262,  5301,  5300,
    5323,  5323,  5350,  5351,  5354,  5375,  5397,  5421,  5426,  5434,
    5435,  5435,  5439,  5500,  5535,  5550,  5599,  5608,  5609,  5617,
    5618,  5619,  5620,  5621,  5622,  5625,  5626,  5627,  5628,  5629,
    5630,  5637,  5644,  5635,  5670,  5670,  5683,  5696,  5697,  5701,
    5714,  5715,  5722,  5727,  5734,  5735,  5736,  5741,  5742,  5743,
    5748,  5749,  5750,  5755,  5756,  5757,  5762,  5767,  5768,  5779,
    5790,  5801,  5805,  5812,  5813,  5870,  5876,  5875,  5963,  5962,
    6006,  6014,  6016,  6020,  6024,  6013,  6066,  6075,  6079,  6086,
    6088,  6092,  6085,  6130,  6140,  6142,  6146,  6139,  6184,  6193,
    6194,  6197,  6240,  6249,  6275,  6274,  6305,  6311,  6312,  6315,
    6316,  6320,  6325,  6350,  6359,  6411,  6436,  6464,  6319,  6472,
    6473,  6474,  6482,  6483,  6491,  6509,  6490,  6513,  6517,  6518,
    6525,  6526,  6527,  6533,  6534,  6535,  6540,  6541,  6542,  6543,
    6544,  6545,  6546
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
  "$@10", "maybemarks", "eithermark", "maybemaxpoolsize", "releaselist",
  "poolrelease", "poolreleasecount", "poolreleaseevery", "poolreleaseidle",
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

#define YYPACT_NINF -965

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-965)))

#define YYTABLE_NINF -666

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -965,   108,   159,  -965,  3381,   -45,    76,  -965,   -45,   257,
    -965,  -965,  -965,   276,  1917,  1984,  -965,    51,  2122,   132,
     133,   432,  -965,   139,   141,   -38,  -965,   -45,  2189,   115,
    5588,   -45,   -45,   -11,  1709,   -45,    79,   -45,   -45,  -965,
     -45,   459,   319,  -965,  -965,  -965,  -965,   218,   223,  2327,
      53,  -965,  -965,    43,  -965,   143,   239,  -965,  -965,  -965,
    -965,  -965,  -965,    42,   340,   340,   144,   146,  -965,  -965,
     -45,   350,   -45,  1571,  -965,    98,  -965,  -965,    54,    95,
     120,   147,  -965,    52,    71,   290,   -45,   -45,  1340,  2394,
     151,  -965,  -965,  2532,  -965,  -965,  5588,  -965,  -965,   -45,
    -965,  -965,   -45,  -965,   -22,  -965,   -45,   370,    80,   317,
     453,   350,   -45,  5588,   -45,  5588,   498,    55,   551,   -38,
     339,   343,   356,   366,   375,   380,   395,   424,   -38,  -965,
     425,  5588,   427,   428,   429,   431,   433,   441,   442,   445,
     447,   448,   449,   462,  -965,   465,  -965,  -965,   466,   475,
     480,   481,   487,   489,   490,   491,   492,  5588,  5588,  5588,
    5588,   464,  -965,  -965,   215,   -48,   181,   318,    61,   413,
     454,   493,   550,   -16,  -965,   349,   -45,   -45,   -45,  -965,
     654,   655,   -45,  -965,   -45,  -965,   501,   -45,  -965,  2599,
     616,   316,    60,    18,  -965,  -965,   -45,  -965,   -45,  -965,
    5588,  -965,   -45,   400,   543,  -965,  -965,  -965,  -965,  -965,
    -965,  -965,   440,  -965,  -965,   153,  -965,   -45,   503,   505,
     506,   507,   -45,  5588,   -45,   555,  -965,   673,   624,   558,
    -965,   -45,   518,   -45,   564,  1501,   469,  -965,   -45,  -965,
    -965,  -965,  -965,  -965,  -965,  -965,  -965,   -45,  -965,   -45,
    -965,   470,  -965,   272,  -965,   -45,  -965,   687,   264,  -965,
      36,  -965,  3106,  3511,   -45,    34,  5588,  -965,   -45,   566,
     -45,   566,   -45,  -965,   334,  -965,   -45,   -45,   -45,  -965,
    -965,   -45,  -965,  -965,  -965,  -965,  -965,   -45,  5588,  -965,
    5588,  -965,   -45,  5383,  -965,   348,  -965,   -45,   566,   -45,
    5588,    30,  -965,  5588,  -965,   569,  -965,  -965,  -965,   663,
    -965,  -965,  5588,   666,   453,  -965,  -965,  -965,  -965,  -965,
     683,  2737,  -965,    96,  -965,  -965,  -965,  -965,  -965,  -965,
    -965,  -965,  -965,  -965,  -965,   534,   539,  5588,  5588,  5588,
    5588,  5588,  5588,  -965,  5588,  -965,  5588,  5588,  5588,    45,
    5588,  5588,  5588,  5588,   155,   156,    62,  5588,  -965,  5588,
    5588,  5588,  5588,  5588,  5588,  5588,  5588,  5588,  -965,  -965,
    -965,   540,   337,  5588,  5588,  5588,  5588,  5588,  5588,  5588,
    5588,  5588,  5588,  5588,  5588,  5588,  5588,  5588,  5588,  5588,
    -965,  -965,  -965,  5588,  -965,  -965,  -965,  -965,   542,   581,
     589,  -965,  -965,  -965,  -965,   -45,    73,  -965,  -965,  -965,
    -965,  -965,  -965,  -965,  -965,  -965,  -965,   -45,   -45,  5588,
    -965,  -965,   710,   711,   714,   595,  -965,  -965,  5588,   -45,
    -965,  5588,   -45,  -965,  -965,  -965,  -965,  -965,  -965,  -965,
    -965,  -965,  -965,  -965,   689,   598,   -45,  5588,  -965,  -965,
    -965,  -965,  -965,  -965,  -965,  -965,  -965,  -965,  -965,  -965,
    2599,  -965,  5588,  -965,   -45,   -45,   -45,  -965,  3641,  -965,
    -965,   560,  -965,   560,  -965,  -965,  -965,  -965,  -965,  -965,
    -965,   256,  -965,   665,  -965,  -965,  -965,  -965,  -965,  -965,
    -965,  -965,  -965,  -965,  5588,  -965,  3771,   -45,   -45,  -965,
    -965,  -965,   323,   325,   341,   392,   478,  -965,  -965,   671,
      58,  -965,  -965,  -965,   563,   680,   566,  -965,   334,  -965,
     334,  -965,   446,   566,  -965,  -965,  -965,  -965,  -965,  5588,
    -965,   348,   348,  -965,  -965,  -965,  -965,  -965,   334,  -965,
    -965,   -45,   607,   -45,   299,  -965,  -965,  -965,   542,  2804,
     453,   680,  -965,  -965,   666,   568,   573,  -965,  -965,  -965,
    -965,  -965,  -965,   -45,   732,  -965,   675,    68,  -965,  -965,
    -965,   114,   577,    26,   154,   235,    75,   246,    41,   578,
     580,   582,   583,  -965,   585,   134,   145,   247,   586,   587,
     588,   590,   591,   593,   594,   596,   597,  5588,   137,   248,
     255,   263,   267,   269,   149,   599,   600,  -965,  -965,   708,
    -965,  -965,  -965,   215,   215,   -48,   -48,   181,   181,   309,
     181,   181,   318,   318,    61,   413,   454,  5588,  5588,  5588,
    -965,   635,   352,  -965,  -965,  -965,  -965,   -45,  -965,  -965,
     -45,  -965,  -965,   -45,    40,   623,   637,   641,  -965,  -965,
     642,   680,  -965,  5588,   680,  -965,   -45,  5178,  -965,  -965,
    -965,  -965,   603,   604,  -965,  -965,  -965,  -965,   605,  -965,
    -965,  -965,  -965,  -965,    57,   700,   286,  5588,  5588,  5588,
    5588,  -965,  -965,  -965,  -965,  -965,  -965,  -965,  -965,  5588,
    -965,   609,    63,  -965,  -965,  3901,   -45,   -45,  -965,   -45,
    -965,   -45,   789,   790,   -45,  2942,  -965,  -965,   -45,   -45,
     -45,  -965,  -965,   757,   334,  -965,  -965,  -965,  -965,  -965,
     605,  -965,  -965,  5588,  -965,   610,  -965,  -965,  -965,  -965,
    5450,  5588,  5588,   745,  -965,  5588,  -965,  -965,  -965,  -965,
    5588,  5588,  5588,   -45,   299,  -965,    -7,    -6,   766,  -965,
     666,  -965,  -965,  5588,  5588,  -965,   683,   713,   656,   -45,
     -45,  -965,  -965,  -965,  5588,  5588,  -965,  -965,  5588,  -965,
     617,  -965,   659,  5588,  -965,  -965,  -965,  -965,  -965,  5588,
    -965,  5588,  -965,  -965,  -965,  -965,  -965,  -965,  -965,  -965,
    -965,  5588,   618,  5588,  -965,  -965,  -965,  -965,  -965,  5588,
    -965,  -965,  -965,  5588,   493,   550,   619,  -965,  -965,  -965,
      48,    50,  -965,  -965,  -965,  5588,  5588,   -45,  -965,  -965,
    -965,   728,  -965,  -965,  -965,  -965,  -965,   -45,  -965,  -965,
    5178,  -965,   620,  -965,  -965,   625,  -965,  -965,  -965,  -965,
    -965,  -965,  -965,    65,  5588,  5588,   627,  -965,  -965,  -965,
    -965,  -965,  -965,   191,  -965,   664,   434,  -965,  -965,  -965,
    -965,   680,   680,   680,   680,  4031,  5588,   -45,  -965,  -965,
     -45,   -45,  -965,  -965,    36,  -965,  -965,  -965,  -965,  5588,
    -965,   -45,   -45,  -965,   741,   415,  3236,  -965,  -965,  -965,
    -965,  -965,  5588,  -965,  5588,   -45,   668,  -965,  -965,  -965,
    -965,  -965,   419,  -965,  -965,  -965,  -965,  -965,   758,  -965,
    -965,  -965,  -965,   630,  4161,  -965,  4291,  -965,  -965,   -45,
     672,  -965,  -965,  -965,  -965,   274,   275,   297,  -965,   633,
     170,   298,   300,   226,  -965,   302,   303,   181,  -965,   -45,
     674,  -965,   -45,   676,  -965,   680,   680,  -965,  -965,  -965,
    5588,  -965,  5588,  -965,  -965,    48,    50,  -965,  5588,  -965,
     638,  -965,   -45,    72,  -965,  -965,  -965,  -965,  5588,  -965,
     434,  -965,  -965,    67,   680,  -965,  -965,    24,   658,  -965,
    -965,  -965,  4421,  -965,  -965,  -965,  -965,  -965,   566,  -965,
    -965,  -965,  -965,   419,   788,  -965,  -965,  -965,   788,  -965,
    5588,  5588,    -8,  -965,    67,    67,   542,   542,  -965,  -965,
    4551,   737,  -965,  -965,  -965,  -965,  -965,  5588,  -965,  -965,
    -965,  5588,  -965,  -965,  5588,  -965,  -965,   285,  -965,  -965,
    -965,   312,  -965,   791,   643,  -965,  5588,   643,  -965,   680,
     643,  -965,  -965,   680,    22,   135,  -965,  1779,    49,   -45,
     -45,   -45,  -965,  -965,  -965,   -45,   -45,   -45,   647,  -965,
     -45,   -45,  -965,  -965,  -965,  -965,  -965,  -965,    68,  4681,
     334,   648,  5588,  -965,  -965,  -965,  -965,  -965,  -965,  -965,
    -965,  -965,   352,   352,   800,  5588,   743,   304,   305,  -965,
    5588,   -45,   674,  5588,   -45,   676,  5588,  -965,  -965,   680,
     -45,  -965,  -965,  -965,  -965,   363,  -965,   -45,  -965,  -965,
     374,  -965,   -45,  -965,  5588,   -45,  -965,  -965,  -965,  -965,
     388,  -965,  -965,  -965,  -965,  -965,  -965,  -965,  -965,  -965,
    -965,  -965,   350,  -965,    69,  -965,  5588,  -965,   322,   727,
    4811,   779,  -965,  -965,    69,  -965,  5588,  -965,  -965,  -965,
    -965,  -965,  -965,  -965,  -965,   680,  -965,   691,  -965,    64,
      64,    64,   -15,  -965,  -965,    64,    17,  -965,  -965,   -45,
    -965,    64,    64,    64,   382,  -965,  -965,   -45,   -45,  -965,
    -965,  -965,  5588,  5245,  -965,  -965,  -965,  -965,  -965,    67,
    -965,  -965,  -965,  -965,  -965,  -965,   724,  -965,  -965,  -965,
    -965,  -965,  -965,  -965,  -965,  -965,  -965,  -965,  -965,  -965,
    -965,   653,  -965,  5588,  5588,  -965,  -965,   744,  -965,   697,
     772,  -965,  -965,  -965,   -45,     8,  -965,  -965,  -965,  -965,
     660,  4941,  -965,   774,  5588,  -965,   661,  -965,  -965,  5071,
     824,   104,   -45,   -45,  -965,  -965,  -965,  -965
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       4,     0,     5,     1,     0,     0,     0,   557,   558,     0,
      95,   446,   448,     0,     0,     0,   450,     0,     0,     0,
       0,     0,   593,     0,     0,   100,   366,   276,     0,   411,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    93,
       0,     0,     0,   642,   453,   454,   455,     0,     0,     0,
       0,   627,   628,     0,   392,     0,     0,   542,     3,   246,
       6,     8,    12,     0,    84,    84,     0,     0,     7,   349,
       0,   309,     0,     0,   317,     0,   232,   232,     0,     0,
       0,     0,   452,     0,     0,     0,     0,     0,     0,     0,
       0,   324,   326,     0,   327,   325,     0,     9,   353,     0,
      34,   341,     0,    99,     0,    97,     0,     0,   387,     0,
     611,   407,     0,     0,     0,     0,     0,     0,     0,   100,
       0,     0,     0,     0,     0,     0,     0,     0,   100,   131,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   130,   127,   129,   128,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   185,   188,   193,   197,   200,   203,   209,   212,   214,
     216,   218,   221,   224,   228,     0,     0,     0,     0,   618,
       0,     0,     0,   555,     0,   556,     0,     0,   344,     0,
       0,     0,     0,     0,   296,   297,     0,   346,     0,   280,
       0,   247,     0,     0,     0,   298,   248,   306,    94,   445,
     447,   449,     0,   592,    92,     0,   451,     0,     0,   360,
       0,   356,     0,     0,     0,     0,   545,     0,     0,     0,
     470,     0,     0,     0,   388,     0,     0,   550,     0,   122,
     120,   124,   119,    13,    85,   232,   232,     0,    87,     0,
      90,   384,   363,     0,   363,     0,   363,     0,   400,   232,
       0,   266,     0,     0,     0,     0,     0,   256,     0,     0,
       0,     0,     0,   421,     0,   419,     0,     0,     0,   603,
     249,     0,   564,   332,   546,   330,   328,     0,     0,   563,
       0,   334,     0,   230,   562,     0,   559,     0,     0,     0,
       0,     0,    36,    37,    10,     0,    11,   270,   321,     0,
     402,   314,     0,     0,   611,   408,   638,   635,   633,   630,
     676,     0,   651,     0,   647,   650,   649,   435,   441,   439,
     440,   434,   437,   438,   178,     0,     0,     0,     0,     0,
       0,     0,     0,   177,     0,   191,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   173,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   189,   190,
     192,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     219,   222,   225,     0,   436,   320,   319,   620,     0,     0,
       0,   339,   340,   101,   299,     0,     0,   277,   431,   430,
     412,   413,   289,   345,   284,   282,   302,     0,     0,     0,
     290,   300,     0,     0,     0,     0,   295,   358,     0,     0,
     354,     0,     0,   288,   286,   331,   544,   463,   403,   461,
     393,   329,   548,   352,     0,     0,     0,   180,   569,   572,
     570,   576,   577,   578,   573,   574,   571,   579,   580,   575,
       0,   543,     0,   126,     0,     0,     0,    83,     0,    82,
      86,   102,    89,   102,   380,   376,   374,   378,   385,   386,
     350,   384,   372,     0,   307,   409,   410,   310,   363,   311,
     398,   616,   615,   470,     0,   399,     0,     0,     0,   600,
     265,   232,     0,     0,     0,     0,     0,   233,   234,   426,
       0,   260,   443,   444,     0,    80,     0,   253,     0,   255,
       0,   251,   423,     0,   250,   606,   604,   605,   333,     0,
     338,     0,     0,   343,   231,   560,   342,   263,     0,   626,
     622,     0,     0,     0,    39,    38,    81,    98,     0,     0,
     611,   612,   364,   312,     0,     0,     0,   678,   682,   679,
     681,   677,   680,     0,     0,   664,     0,     0,   648,   175,
     176,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   170,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   180,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   179,   186,     0,
     194,   195,   196,   199,   198,   201,   202,   206,   207,     0,
     204,   205,   211,   210,   213,   215,   217,     0,     0,     0,
     229,     0,     0,   639,    20,    16,   566,     0,   567,   565,
       0,   293,   294,     0,     0,     0,     0,     0,   459,   457,
       0,   361,   347,     0,   357,   348,     0,   466,   550,   389,
     391,   305,     0,   181,   182,   184,   279,   554,   551,   552,
     123,   121,   125,    96,     0,     0,   115,     0,     0,     0,
       0,   232,   371,   370,   369,   368,   373,   382,   308,     0,
     395,     0,     0,   602,   601,     0,     0,     0,   239,     0,
     236,     0,     0,     0,     0,     0,   429,   232,     0,     0,
       0,   607,   264,   442,     0,   252,   254,   422,   424,   420,
     547,   337,   336,     0,   262,     0,   275,   273,   643,   272,
       0,     0,     0,     0,    55,     0,    58,    59,    49,    48,
       0,     0,     0,     0,    40,    41,   611,     0,   584,   232,
       0,   232,   316,     0,     0,   646,   676,   668,     0,     0,
       0,   673,   645,   141,     0,     0,   156,   157,     0,   160,
       0,   153,     0,     0,   145,   172,   171,   150,   134,     0,
     136,     0,   140,   169,   168,   167,   166,   165,   163,   162,
     164,     0,     0,     0,   137,   138,   139,   142,   143,     0,
     151,   152,   187,     0,   220,   223,     0,   641,   619,   640,
       0,     0,   568,   283,   292,     0,     0,     0,   528,   526,
     524,   521,   530,   518,   519,   517,   523,     0,    18,    14,
     466,   359,     0,   355,   287,     0,   462,   465,   472,   464,
     470,   613,   549,     0,     0,     0,   110,   108,   109,   112,
     114,   113,   103,     0,   105,     0,     0,   117,   118,   116,
      91,   381,   377,   375,   379,     0,     0,   485,   472,   401,
       0,     0,   594,   318,     0,   242,   241,   232,   238,     0,
     235,     0,     0,   243,     0,     0,     0,   610,   608,   609,
     258,   257,     0,   561,     0,     0,     0,    46,    43,    44,
      59,    53,    56,    52,    50,    45,    35,    42,     0,   591,
     590,   586,   581,     0,     0,   315,     0,   636,   631,     0,
       0,   232,   652,   675,   674,     0,     0,     0,   155,     0,
       0,     0,     0,     0,   174,     0,     0,   208,   226,     0,
       0,    21,     0,     0,    17,   538,   537,   291,   534,   534,
       0,   520,     0,   534,   301,     0,     0,   458,     0,   614,
       0,   468,     0,     0,   414,   304,   183,   553,     0,   104,
       0,   107,    88,     0,   383,   486,   617,   404,     0,   596,
     595,   267,     0,   232,   244,   245,   433,   432,     0,   425,
     623,   274,    47,    57,    63,    62,    61,    60,    63,   322,
       0,     0,     0,   587,     0,     0,     0,     0,   667,   669,
       0,   662,   161,   132,   158,   154,   148,     0,   133,   135,
     146,     0,   159,   144,     0,    29,    32,     0,    30,    23,
      26,     0,    24,   540,   529,   532,     0,   527,   525,   522,
     531,    19,    15,   362,     0,     0,   467,     0,     0,   485,
     485,   485,   473,   472,   418,     0,     0,     0,     0,   106,
       0,     0,   597,   351,   405,   406,   396,   471,     0,     0,
       0,     0,     0,    65,    65,   232,   582,   589,   585,   588,
     269,   365,     0,     0,     0,     0,     0,     0,     0,   227,
       0,     0,     0,     0,     0,     0,     0,   539,   534,   535,
       0,   511,   505,   507,   509,   485,   503,     0,   493,   491,
     485,   489,     0,   488,     0,     0,   502,   496,   498,   500,
     485,   494,   480,   481,   482,   469,   417,   415,   416,   111,
     599,   598,   407,   240,     0,   259,     0,    64,    73,    51,
       0,     0,   637,   632,     0,   663,     0,   149,   147,    33,
      28,    31,    27,    22,    25,   541,   533,     0,   475,     0,
       0,     0,     0,   474,   479,     0,     0,   478,   484,   485,
     477,     0,     0,     0,     0,   476,   397,     0,     0,   670,
     237,   624,     0,     0,    66,    67,    68,    69,    54,     0,
     583,   666,   653,   536,   514,   513,   515,   506,   512,   508,
     510,   504,   492,   490,   483,   497,   499,   501,   495,   672,
     671,     0,    74,     0,     0,    72,   323,     0,   516,     0,
      76,    71,    70,   654,     0,     0,    75,   232,   625,    77,
       0,     0,    78,     0,   180,   656,     0,   232,    79,     0,
       0,     0,     0,     0,   659,   658,   661,   660
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -965,  -965,    -5,  -965,  -965,  -965,  -965,  -965,  -965,  -965,
    -965,  -111,  -965,  -249,  -965,  -108,  -965,  -244,  -965,  -965,
    -965,  -965,  -965,  -965,   105,  -965,  -965,   -50,  -965,  -146,
    -221,  -965,  -965,  -965,  -965,  -965,  -965,  -965,  -965,  -319,
    -288,  -965,   792,  -965,  -965,  -965,  -965,  -965,  -965,   608,
    -965,   553,   -13,   383,  -965,  -115,     3,  -965,  -965,  -965,
    -965,  -965,  -965,  -965,  -593,  -965,    16,  -965,   199,   -97,
     123,  -363,   201,   474,   479,   482,   241,   242,  -965,  -965,
    -965,  -388,  -965,  -965,   238,   535,   -70,  -965,  -965,  -965,
     868,  -965,  -965,  -965,  -965,  -965,  -965,  -965,  -965,  -965,
    -965,  -965,  -965,  -965,  -965,  -965,  -965,  -965,  -965,  -965,
    -965,  -965,  -965,  -965,  -965,  -965,  -965,  -965,  -965,  -965,
    -965,  -965,  -965,  -218,  -529,  -965,  -965,  -965,  -965,  -965,
     393,  -965,  -965,  -965,  -965,  -965,  -965,   862,  -965,  -965,
     865,  -965,   770,  -965,  -965,  -965,  -965,  -965,  -965,  -965,
    -965,  -252,   813,  -965,  -965,  -259,   364,  -965,  -965,  -965,
    -965,  -965,  -965,  -965,  -965,   716,  -965,  -965,   -71,  -965,
    -965,  -965,  -965,   -40,  -965,  -965,  -965,  -965,  -965,    56,
    -965,  -965,  -965,  -965,  -479,  -165,    59,  -965,  -743,  -965,
    -965,  -277,  -965,  -965,  -281,  -965,  -965,  -965,  -965,  -266,
    -965,  -965,  -965,  -508,  -965,  -965,  -965,  -965,  -965,  -965,
    -965,  -514,  -200,  -965,  -965,  -965,  -965,  -965,  -965,  -965,
    -965,  -965,  -965,  -965,  -965,   245,  -965,   371,    66,  -965,
    -965,   220,  -965,   176,  -271,   509,   444,  -965,   384,  -965,
    -965,  -965,  -965,  -965,  -965,   -95,  -965,  -965,  -965,  -964,
      31,  -965,  -965,  -298,  -965,   650,  -965,  -965,  -965,  -965,
    -965,  -965,  -965,  -965,  -965,  -965,  -965,  -965,  -965,  -965,
    -965,  -965,  -965,  -537,  -619,  -965,    14,  -965,  -965,  -965,
     601,  -965,  -965,  -965,  -965,  -965,  -965,  -965,  -965,  -965,
    -965,  -965,  -965,  -965,  -965,  -234,  -156,   163
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    59,     2,     4,    60,    61,   956,   811,   955,
     810,   944,  1031,  1032,  1093,   941,  1027,  1028,  1090,    62,
     303,   544,   743,   744,   745,   998,   994,   902,   997,  1073,
    1138,  1184,  1185,  1186,  1187,  1188,  1220,  1226,  1234,   514,
     835,    63,   245,    64,   471,    65,   473,    66,    67,   467,
     104,   105,   187,   675,   853,   854,   855,   860,   243,   465,
     464,   466,   161,   597,   662,   663,   664,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   627,   173,
     628,   174,   629,  1024,   293,   546,   468,   507,   879,   877,
     508,   516,   988,   298,   501,   309,   543,   895,   189,   236,
     200,   640,   223,   656,   644,   645,   447,   254,   109,   550,
     259,   548,  1075,   290,   251,   681,   221,   653,   432,   219,
     650,   429,   832,   484,   553,   751,    69,   480,   685,   481,
     482,   679,   678,   680,   677,   866,   483,    70,   444,   445,
      71,   230,    72,   258,   868,  1132,   493,   494,    73,   228,
    1066,   314,   315,    74,   965,   274,   275,   522,   717,   892,
      75,   706,   509,    76,   707,   332,    77,   333,   267,    78,
      79,    80,    81,    82,    83,   425,   830,   229,   657,   836,
     837,   838,   839,  1053,   440,   977,   978,  1052,   976,  1114,
    1110,  1111,  1165,  1120,  1121,  1171,  1172,  1173,  1105,  1106,
    1159,  1160,  1161,  1197,  1198,   827,   952,   950,   949,   948,
     953,  1034,  1035,  1036,  1157,   817,  1033,  1097,    84,   237,
      85,    86,   529,    87,   658,   461,   462,   668,   669,    88,
      89,   295,   723,   296,   291,   283,   407,   639,   459,   460,
     749,  1000,  1141,   913,  1002,  1003,   911,    90,   873,  1063,
     500,   280,   712,   313,   840,   841,   689,    91,   398,    92,
     300,   725,  1071,  1211,    93,    94,   115,   556,  1007,    95,
     113,   555,  1006,   632,   633,    96,   729,    97,   117,   323,
     324,   325,   566,  1011,  1217,  1227,  1233,  1237,  1240,  1245,
    1086,   326,   757,  1084,   921,  1180,   762,   563
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      98,   216,   565,   101,   792,   630,   262,   263,   269,   271,
     518,   746,   520,   809,   690,   545,   554,   617,   618,   619,
     620,   621,   188,  1100,   536,   752,   194,   195,   197,   199,
     201,   541,   205,   206,   345,   207,   487,   497,   489,   538,
    1080,  1081,   770,   238,   227,  1078,   581,   909,   391,   939,
    1115,   942,   116,   276,   224,   264,   312,   239,   242,   708,
     368,   369,   370,   592,   870,   252,   962,   256,  1060,   759,
    1177,  1194,   281,  1055,   637,   846,   847,    99,   279,   282,
     202,   282,   282,   289,   393,   203,  -644,   815,   848,   265,
     321,   512,   393,  1229,   302,   709,   268,   304,   849,   306,
    1195,   307,   760,   498,  1178,  1242,   334,   316,     3,   318,
     410,   710,   593,   594,  1101,   343,   567,  -402,   260,   225,
    1061,   270,  1056,   385,   376,   377,  1102,   809,  1103,   816,
     265,   321,  -268,   176,   178,    58,  1107,   871,   240,   196,
     182,   393,   184,   186,   231,   247,  1108,   249,   272,   963,
    1230,  1101,   297,  1064,   424,   265,   588,   590,    58,    -2,
    1109,   305,   850,  1102,   234,  1103,  1065,   261,   392,    58,
    1104,   395,   396,   397,    58,  1001,   631,   401,  1116,   402,
     393,   277,   404,   513,   241,  -460,   851,   582,   412,   496,
    1117,   413,  1118,   414,   278,   226,  -442,   416,    58,   192,
     393,  -644,   411,   393,   595,   322,  1196,  1104,   204,   765,
    -271,   393,   426,   542,  1057,   393,    58,   433,   100,   435,
     393,   915,    58,   771,   772,  1216,   441,   583,   443,   940,
     386,   943,    58,   463,  1119,   266,   393,  -442,    58,   852,
     233,   806,   470,    58,   472,    58,   322,    58,    58,    58,
     488,    58,   750,    58,  1243,   499,   175,   714,   768,   511,
     721,   722,  -442,   517,  1108,   519,   191,   521,   193,   524,
     688,   525,   526,   527,   177,   179,   528,   106,  1109,   613,
     614,   183,   530,   185,    58,   232,   248,   533,   250,   273,
     289,  -278,   537,  -261,   539,  -456,   763,   589,   591,  -278,
    -278,   393,   730,   731,   732,   491,  1122,  1123,  1124,   682,
    -278,   102,   393,   393,   393,   107,   778,   779,  -278,  -278,
     793,   393,   485,   234,   696,   217,   698,   780,   781,   393,
     683,   474,   799,   393,   733,   393,   766,   475,   476,   477,
     393,   393,   700,   378,   379,   734,   735,   736,   737,   738,
     739,  -367,  1016,  1017,  -367,   478,   479,  -367,  -367,  -367,
     218,   961,  1163,   393,   393,   220,   393,  1167,   393,   393,
     393,   393,   803,   969,   970,  -367,  -367,  1175,   380,   381,
     857,   858,   393,   382,   409,  -278,  -278,  -278,   740,   373,
     374,   375,   608,   697,   492,   699,   609,  1182,   244,   103,
     636,   638,   327,  -278,  -278,  -313,    54,   702,  1020,  1021,
     703,   701,   641,   642,   486,   393,   901,   767,   108,  -387,
     235,   903,   904,   331,   652,  1183,  1204,   655,   769,   782,
     794,   695,   741,   742,   253,  1037,    58,   795,   859,  1040,
     937,   661,   897,   898,   899,   796,   310,   180,   908,   797,
     181,   798,   846,   847,   905,   422,  1012,  1013,   423,   670,
     671,   672,   704,   809,   809,   848,   216,  1091,  1092,  1082,
    1083,   378,   379,   284,   208,   849,   684,   209,   210,  1014,
    1018,   393,  1019,   987,  1022,  1023,  1147,  1148,   383,   384,
     211,   417,   693,   694,  1094,  1095,   209,   210,   448,   212,
     213,   615,   616,   418,   515,   711,   449,   450,   531,   211,
     532,  1116,   308,   715,    58,   716,   312,   523,   320,   213,
     335,   448,   372,  1117,   336,  1118,   289,   289,    58,   449,
     450,   535,    58,   724,   419,   631,   726,   337,   728,   850,
     451,   995,   420,    58,   996,   474,  1162,   338,   452,   453,
     551,   475,   476,   477,    58,   214,   339,  1166,   755,   515,
     983,   340,   761,   851,    44,    45,    46,  1119,    58,   478,
     479,  1174,   610,   611,   612,   571,   341,   573,   574,   575,
     576,   387,   577,    44,    45,    46,   622,   623,   215,   585,
     586,   587,   454,   455,   456,   285,   286,   598,   599,   600,
     601,   602,   603,   604,   327,   342,   344,   215,   346,   347,
     348,   865,   349,   390,   350,   454,   455,   456,   328,   329,
     330,   388,   351,   352,   294,   331,   353,   808,   354,   355,
     356,   301,   812,   457,   458,   813,  1089,   886,   814,   818,
     819,  1236,   890,   357,   820,   821,   358,   359,   317,  1058,
     319,   834,  1199,  1200,  1044,  1045,   360,  1202,  1046,   389,
    1047,   361,   362,  1205,  1206,  1207,   651,   822,   363,   654,
     364,   365,   366,   367,  1044,  1045,   399,   400,  1067,   914,
    1047,   916,  1048,   403,   408,   421,   427,   872,   428,   430,
     431,   875,   876,   437,   878,   371,   880,   436,   438,   883,
     439,   442,  1048,   887,   888,   889,  -390,   490,   273,   891,
    1049,   103,   823,   824,   825,   549,   569,   557,   558,   552,
     559,   570,   607,   634,   406,   631,   826,  1050,  1051,  1070,
    1049,   635,   646,   647,   648,   415,   560,   649,   906,   659,
     660,   674,   910,   687,   705,   713,   393,  1050,  1051,   727,
     561,   753,   756,  1137,   923,   924,   754,   562,   434,   758,
     764,   773,   774,   802,   775,   776,  1145,   777,   783,   784,
     785,  1149,   786,   787,  1152,   788,   789,   807,   790,   828,
     791,   800,   801,   829,   831,   843,   856,   844,   845,   869,
     881,   882,   265,   894,   900,  1169,   912,   920,   922,   928,
     934,   929,   951,   958,   938,   959,   971,   982,   968,   986,
     992,   999,   947,  1001,  1009,  1015,  1026,  1030,  1072,  1085,
    1144,  1096,   954,   294,  1146,   294,  1098,  1192,   534,  1129,
    1183,  1136,  1190,  1193,  1218,   540,  1219,  1223,   964,  1224,
    1225,  1232,  1235,  1238,  1241,  1042,  1154,  1041,  1151,   907,
     993,  1010,  1074,  1139,   469,  1059,   676,   246,   547,   972,
     966,   624,   975,  1212,  1215,   979,   980,   625,   804,   499,
     805,   626,    68,   572,   686,   110,   984,   985,   111,   311,
    1176,   578,   579,   580,   255,   584,   957,   719,  1125,  1203,
     728,   394,   596,  1208,  1221,  1222,  1201,   960,  1156,   893,
     720,   605,   606,   842,   666,   981,   718,  1079,   495,   991,
    1191,   967,  1133,  1069,  1008,   861,   862,   863,   864,   919,
       0,     0,     0,     0,   568,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1025,     0,     0,  1029,     0,     0,
       0,     0,     0,   885,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   643,     0,     0,  1054,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1062,     0,
       0,     0,     0,   515,     0,     0,     0,     0,   515,   515,
       0,     0,   665,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   406,     0,   667,     0,  1062,
    1062,     0,   925,   926,     0,  1140,   927,     0,     0,     0,
       0,   930,     0,     0,     0,     0,     0,   931,     0,   932,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   691,
       0,   935,     0,     0,     0,     0,     0,   936,     0,     0,
       0,     0,     0,     0,   975,   975,   975,     0,     0,     0,
    1126,  1127,  1128,   945,   946,  1130,  1131,     0,     0,     0,
       0,     0,     0,   761,   667,  1135,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1142,  1143,     0,
       0,     0,     0,     0,   748,     0,  1150,     0,     0,  1153,
       0,     0,     0,     0,     0,  1158,     0,     0,     0,     0,
     975,     0,  1164,     0,   974,   975,     0,  1168,     0,     0,
    1170,     0,     0,     0,     0,   975,     0,   515,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1179,
       0,     0,   665,     0,     0,     0,     0,     0,     0,  1179,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1231,     0,     0,
       0,     0,     0,     0,   975,     0,     0,  1239,     0,     0,
       0,     0,  1209,  1210,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1062,     0,     0,     0,   833,     0,
    1039,     0,     0,     0,     0,     0,  1043,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   515,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1228,
       0,     0,     0,     0,   867,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1244,  1246,  1247,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1087,     0,     0,   294,  1088,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1099,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   917,   918,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     515,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   515,     0,     0,   933,     0,   515,     0,
       0,   515,     0,     0,  1155,     0,     0,     0,     0,     0,
       0,   287,     0,     0,     0,     0,     0,  -335,  -335,     0,
       0,     0,   515,     0,  -335,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -335,  -335,     0,     0,  -335,  -335,
       0,     0,  -335,  -335,     0,     0,  -335,     0,     0,   665,
     667,     0,     0,     0,   515,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -335,  -335,     0,     0,  -335,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     515,   515,     0,     0,     0,     0,     0,   989,     0,   990,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -335,     0,     0,     0,     0,     0,
       0,   515,   515,  -335,     0,  -335,  -335,  -335,  -335,  -335,
    -335,  -335,     0,     0,  -335,     0,     0,     0,  -335,     0,
       0,     0,  -335,     0,     0,     0,     0,     0,     0,     0,
       0,  -335,  -335,  -335,  -335,  1038,     0,     0,     0,     0,
       0,  -335,     0,  -335,  -335,  -335,     0,  -335,  -335,  -335,
    -335,  -335,   446,     0,     0,     0,     0,     0,  -303,  -303,
       0,     0,  -335,     0,     0,  -303,     0,  -335,  -335,     0,
      58,  -335,     0,   288,     0,  -303,  -303,     0,     0,  -303,
    -303,     0,     0,  -303,  -303,  1076,  1077,  -303,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -303,  -303,     0,     0,
    -303,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   257,     0,     0,     0,     0,     0,  -394,  -394,
       0,     0,     0,     0,     0,  -394,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -394,  -394,     0,     0,  -394,
    -394,     0,     0,  -394,  -394,  -303,     0,  -394,     0,     0,
       0,     0,  -394,     0,  -303,     0,  -303,  -303,  -303,  -303,
    -303,  -303,  -303,     0,     0,  -303,  -394,  -394,     0,  -303,
    -394,     0,     0,  -303,     0,     0,     0,     0,     0,     0,
       0,     0,  -303,  -303,  -303,  -303,     0,     0,     0,     0,
       0,     0,  -303,     0,  -303,  -303,  -303,     0,  -303,  -303,
    -303,  -303,  -303,     0,     0,     0,     0,     0,     0,     0,
       0,  1181,     0,  -303,     0,  -394,     0,     0,  -303,  -303,
       0,     0,  -303,  -303,  -394,     0,  -394,  -394,  -394,  -394,
    -394,  -394,  -394,     0,     0,  -394,     0,     0,     0,  -394,
       0,  -394,     0,  -394,     0,     0,     0,     0,     0,     0,
     198,     0,  -394,  -394,  -394,  -394,  -281,  -281,     0,     0,
       0,     0,  -394,  -281,  -394,  -394,  -394,     0,  -394,  -394,
    -394,  -394,  -394,  -281,  -281,     0,     0,  -281,  -281,     0,
       0,  -281,  -281,  -394,     0,  -281,     0,     0,  -394,  -394,
       0,     0,  -394,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -281,  -281,     0,     0,  -281,   665,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1112,     0,     0,     0,     0,     0,  -487,  -487,     0,     0,
       0,     0,     0,  -487,     0,     0,  1113,     0,     0,     0,
       0,     0,     0,  -487,  -487,     0,     0,  -487,  -487,     0,
       0,  -487,  -487,  -281,     0,  -487,     0,     0,     0,     0,
       0,     0,  -281,     0,  -281,  -281,  -281,  -281,  -281,  -281,
    -281,     0,     0,  -281,  -487,  -487,     0,  -281,  -487,     0,
       0,  -281,     0,     0,     0,     0,     0,     0,     0,     0,
    -281,  -281,  -281,  -281,     0,     0,     0,     0,     0,     0,
    -281,     0,  -281,  -281,  -281,     0,  -281,  -281,  -281,  -281,
    -281,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -281,     0,  -487,     0,     0,  -281,  -281,     0,    58,
    -281,     0,  -487,     0,  -487,  -487,  -487,  -487,  -487,  -487,
    -487,     0,     0,  -487,     0,     0,     0,  -487,     0,     0,
       0,  -487,     0,     0,     0,     0,     0,     0,   112,     0,
    -487,  -487,  -487,  -487,  -634,  -634,     0,     0,     0,     0,
    -487,  -634,  -487,  -487,  -487,     0,  -487,  -487,  -487,  -487,
    -487,  -634,  -634,     0,     0,  -634,  -634,     0,     0,  -634,
    -634,  -487,     0,  -634,     0,     0,  -487,  -487,     0,     0,
    -487,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -634,  -634,     0,     0,  -634,     0,     0,     0,
       0,     0,     0,     0,     0,   114,     0,     0,     0,     0,
       0,  -629,  -629,     0,     0,     0,     0,     0,  -629,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -629,  -629,
       0,     0,  -629,  -629,     0,     0,  -629,  -629,     0,     0,
    -629,  -634,     0,     0,     0,     0,     0,     0,     0,     0,
    -634,     0,  -634,  -634,  -634,  -634,  -634,  -634,  -634,  -629,
    -629,  -634,     0,  -629,     0,  -634,     0,     0,     0,  -634,
       0,     0,     0,     0,     0,     0,     0,     0,  -634,  -634,
    -634,  -634,     0,     0,     0,     0,     0,     0,  -634,     0,
    -634,  -634,  -634,     0,  -634,  -634,  -634,  -634,  -634,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -629,  -634,
       0,     0,     0,     0,  -634,  -634,     0,  -629,  -634,  -629,
    -629,  -629,  -629,  -629,  -629,  -629,     0,     0,  -629,     0,
       0,     0,  -629,     0,     0,     0,  -629,     0,     0,     0,
       0,     0,     0,   118,     0,  -629,  -629,  -629,  -629,   119,
     120,     0,     0,     0,     0,  -629,   121,  -629,  -629,  -629,
       0,  -629,  -629,  -629,  -629,  -629,   122,   123,     0,     0,
     124,   125,     0,     0,   126,   127,  -629,     0,   128,     0,
       0,  -629,  -629,     0,     0,  -629,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   129,   130,     0,
       0,   131,     0,     0,     0,     0,     0,     0,     0,     0,
     190,     0,     0,     0,     0,     0,   119,   120,     0,     0,
       0,     0,     0,   121,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   122,   123,     0,     0,   124,   125,     0,
       0,   126,   127,     0,     0,   128,   132,     0,     0,     0,
       0,     0,     0,     0,     0,   133,     0,   134,   135,   136,
     137,   138,   139,   140,   129,   130,   141,     0,   131,     0,
     142,     0,     0,     0,   143,     0,     0,     0,     0,     0,
       0,     0,     0,   144,   145,   146,   147,     0,     0,     0,
       0,     0,     0,   148,     0,   149,   150,   151,     0,   152,
     153,   154,   155,   156,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   132,   157,     0,     0,     0,     0,   158,
     159,     0,   133,   160,   134,   135,   136,   137,   138,   139,
     140,     0,     0,   141,     0,     0,     0,   142,     0,     0,
       0,   143,     0,     0,     0,     0,     0,     0,   222,     0,
     144,   145,   146,   147,  -285,  -285,     0,     0,     0,     0,
     148,  -285,   149,   150,   151,     0,   152,   153,   154,   155,
     156,  -285,  -285,     0,     0,  -285,  -285,     0,     0,  -285,
    -285,   157,     0,  -285,     0,     0,   158,   159,     0,     0,
     160,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -285,  -285,     0,     0,  -285,     0,     0,     0,
       0,     0,     0,     0,     0,   292,     0,     0,     0,     0,
       0,   119,   120,     0,     0,     0,     0,     0,   121,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   122,   123,
       0,     0,   124,   125,     0,     0,   126,   127,     0,     0,
     128,  -285,     0,     0,     0,     0,     0,     0,     0,     0,
    -285,     0,  -285,  -285,  -285,  -285,  -285,  -285,  -285,   129,
     130,  -285,     0,   131,     0,  -285,     0,     0,     0,  -285,
       0,     0,     0,     0,     0,     0,     0,     0,  -285,  -285,
    -285,  -285,     0,     0,     0,     0,     0,     0,  -285,     0,
    -285,  -285,  -285,     0,  -285,  -285,  -285,  -285,  -285,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   132,  -285,
       0,     0,     0,     0,  -285,  -285,     0,   133,  -285,   134,
     135,   136,   137,   138,   139,   140,     0,     0,   141,     0,
       0,     0,   142,     0,     0,     0,   143,     0,     0,     0,
       0,     0,     0,   299,     0,   144,   145,   146,   147,  -621,
    -621,     0,     0,     0,     0,   148,  -621,   149,   150,   151,
       0,   152,   153,   154,   155,   156,  -621,  -621,     0,     0,
    -621,  -621,     0,     0,  -621,  -621,   157,     0,  -621,     0,
       0,   158,   159,     0,     0,   160,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -621,  -621,     0,
       0,  -621,     0,     0,     0,     0,     0,     0,     0,     0,
     405,     0,     0,     0,     0,     0,   119,   120,     0,     0,
       0,     0,     0,   121,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   122,   123,     0,     0,   124,   125,     0,
       0,   126,   127,     0,     0,   128,  -621,     0,     0,     0,
       0,     0,     0,     0,     0,  -621,     0,  -621,  -621,  -621,
    -621,  -621,  -621,  -621,   129,   130,  -621,     0,   131,     0,
    -621,     0,     0,     0,  -621,     0,     0,     0,     0,     0,
       0,     0,     0,  -621,  -621,  -621,  -621,     0,     0,     0,
       0,     0,     0,  -621,     0,  -621,  -621,  -621,     0,  -621,
    -621,  -621,  -621,  -621,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   132,  -621,     0,     0,     0,     0,  -621,
    -621,     0,   133,  -621,   134,   135,   136,   137,   138,   139,
     140,     0,     0,   141,     0,     0,     0,   142,     0,     0,
       0,   143,     0,     0,     0,     0,     0,     0,   564,     0,
     144,   145,   146,   147,   119,   120,     0,     0,     0,     0,
     148,   121,   149,   150,   151,     0,   152,   153,   154,   155,
     156,   122,   123,     0,     0,   124,   125,     0,     0,   126,
     127,   157,     0,   128,     0,     0,   158,   159,     0,     0,
     160,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   129,   130,     0,     0,   131,     0,     0,     0,
       0,     0,     0,     0,     0,   747,     0,     0,     0,     0,
       0,   119,   120,     0,     0,     0,     0,     0,   121,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   122,   123,
       0,     0,   124,   125,     0,     0,   126,   127,     0,     0,
     128,   132,     0,     0,     0,     0,     0,     0,     0,     0,
     133,     0,   134,   135,   136,   137,   138,   139,   140,   129,
     130,   141,     0,   131,     0,   142,     0,     0,     0,   143,
       0,     0,     0,     0,     0,     0,     0,     0,   144,   145,
     146,   147,     0,     0,     0,     0,     0,     0,   148,     0,
     149,   150,   151,     0,   152,   153,   154,   155,   156,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   132,   157,
       0,     0,     0,     0,   158,   159,     0,   133,   160,   134,
     135,   136,   137,   138,   139,   140,     0,     0,   141,     0,
       0,     0,   142,     0,     0,     0,   143,     0,     0,     0,
       0,     0,     0,   884,     0,   144,   145,   146,   147,   119,
     120,     0,     0,     0,     0,   148,   121,   149,   150,   151,
       0,   152,   153,   154,   155,   156,   122,   123,     0,     0,
     124,   125,     0,     0,   126,   127,   157,     0,   128,     0,
       0,   158,   159,     0,     0,   160,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   129,   130,     0,
       0,   131,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   132,     0,     0,     0,
       0,     0,     0,     0,     0,   133,     0,   134,   135,   136,
     137,   138,   139,   140,     0,     0,   141,     0,     0,     0,
     142,     0,     0,     0,   143,     0,     0,     0,     0,     0,
       0,     0,     0,   144,   145,   146,   147,     0,     0,     0,
       0,     0,     0,   148,     0,   149,   150,   151,     0,   152,
     153,   154,   155,   156,     0,     0,     0,     5,     0,     0,
       0,     0,   502,     0,   157,     7,     8,     0,     0,   158,
     159,     0,     0,   160,    11,    12,  -428,    13,     0,     0,
       0,     0,    14,    15,     0,     0,     0,    16,     0,     0,
     503,   504,     0,    18,    19,    20,   505,    22,    23,    24,
       0,    25,     0,     0,     0,     0,     0,     0,     0,    26,
       0,    27,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    28,     0,  -428,     0,     0,     0,  -428,
      29,    30,    31,    32,     0,     0,     0,     0,     0,     0,
       0,    33,    34,    35,    36,     0,     0,     0,    37,     0,
       0,    38,     0,     0,    40,     0,     0,   506,     0,    42,
      43,    44,    45,    46,    47,    48,     0,    49,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    50,
       0,     0,    51,    52,     0,    53,    54,     5,     0,     0,
       0,     0,   502,     0,    55,     7,     8,     0,    56,     0,
       0,    57,     0,     0,    11,    12,  -427,    13,     0,     0,
       0,     0,    14,    15,     0,     0,     0,    16,     0,     0,
     503,   504,     0,    18,    19,    20,   505,    22,    23,    24,
       0,    25,     0,     0,     0,     0,    58,     0,     0,    26,
       0,    27,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    28,     0,  -427,     0,     0,     0,  -427,
      29,    30,    31,    32,     0,     0,     0,     0,     0,     0,
       0,    33,    34,    35,    36,     0,     0,     0,    37,     0,
       0,    38,     0,     0,    40,     0,     0,   506,     0,    42,
      43,    44,    45,    46,    47,    48,     0,    49,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    50,
       0,     0,    51,    52,     0,    53,    54,     0,     0,     0,
       0,     0,     0,     0,    55,     0,     0,     0,    56,     0,
       0,    57,     5,     0,     0,     0,     0,     6,     0,     0,
       7,     8,     9,     0,     0,     0,    10,     0,     0,    11,
      12,     0,    13,     0,     0,     0,     0,    14,    15,     0,
       0,     0,    16,     0,     0,    17,    58,     0,    18,    19,
      20,    21,    22,    23,    24,     0,    25,     0,     0,     0,
       0,     0,     0,     0,    26,     0,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,     0,
       0,     0,     0,     0,     0,    29,    30,    31,    32,     0,
       0,     0,     0,     0,     0,     0,    33,    34,    35,    36,
       0,     0,     0,    37,     0,     0,    38,    39,     0,    40,
       0,     0,    41,     0,    42,    43,    44,    45,    46,    47,
      48,     0,    49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,    51,    52,     0,
      53,    54,     5,     0,     0,     0,     0,   502,     0,    55,
       7,     8,     0,    56,     0,     0,    57,     0,     0,    11,
      12,   510,    13,     0,     0,     0,     0,    14,    15,     0,
       0,     0,    16,     0,     0,   503,   504,     0,    18,    19,
      20,   505,    22,    23,    24,     0,    25,     0,     0,     0,
       0,    58,     0,     0,    26,     0,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,     0,
       0,     0,     0,     0,     0,    29,    30,    31,    32,     0,
       0,     0,     0,     0,     0,     0,    33,    34,    35,    36,
       0,     0,     0,    37,     0,     0,    38,     0,     0,    40,
       0,     0,   506,     0,    42,    43,    44,    45,    46,    47,
      48,     0,    49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,    51,    52,     0,
      53,    54,     5,     0,     0,     0,     0,   502,     0,    55,
       7,     8,     0,    56,     0,     0,    57,     0,     0,    11,
      12,   673,    13,     0,     0,     0,     0,    14,    15,     0,
       0,     0,    16,     0,     0,   503,   504,     0,    18,    19,
      20,   505,    22,    23,    24,     0,    25,     0,     0,     0,
       0,    58,     0,     0,    26,     0,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,     0,
       0,     0,     0,     0,     0,    29,    30,    31,    32,     0,
       0,     0,     0,     0,     0,     0,    33,    34,    35,    36,
       0,     0,     0,    37,     0,     0,    38,     0,     0,    40,
       0,     0,   506,     0,    42,    43,    44,    45,    46,    47,
      48,     0,    49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,    51,    52,     0,
      53,    54,     5,     0,     0,     0,     0,   502,     0,    55,
       7,     8,     0,    56,     0,     0,    57,     0,     0,    11,
      12,   692,    13,     0,     0,     0,     0,    14,    15,     0,
       0,     0,    16,     0,     0,   503,   504,     0,    18,    19,
      20,   505,    22,    23,    24,     0,    25,     0,     0,     0,
       0,    58,     0,     0,    26,     0,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,     0,
       0,     0,     0,     0,     0,    29,    30,    31,    32,     0,
       0,     0,     0,     0,     0,     0,    33,    34,    35,    36,
       0,     0,     0,    37,     0,     0,    38,     0,     0,    40,
       0,     0,   506,     0,    42,    43,    44,    45,    46,    47,
      48,     0,    49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,    51,    52,     0,
      53,    54,     5,     0,     0,     0,     0,   502,     0,    55,
       7,     8,     0,    56,     0,     0,    57,     0,     0,    11,
      12,   874,    13,     0,     0,     0,     0,    14,    15,     0,
       0,     0,    16,     0,     0,   503,   504,     0,    18,    19,
      20,   505,    22,    23,    24,     0,    25,     0,     0,     0,
       0,    58,     0,     0,    26,     0,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,     0,
       0,     0,     0,     0,     0,    29,    30,    31,    32,     0,
       0,     0,     0,     0,     0,     0,    33,    34,    35,    36,
       0,     0,     0,    37,     0,     0,    38,     0,     0,    40,
       0,     0,   506,     0,    42,    43,    44,    45,    46,    47,
      48,     0,    49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,    51,    52,     0,
      53,    54,     5,     0,     0,     0,     0,   502,     0,    55,
       7,     8,     0,    56,     0,     0,    57,     0,     0,    11,
      12,   973,    13,     0,     0,     0,     0,    14,    15,     0,
       0,     0,    16,     0,     0,   503,   504,     0,    18,    19,
      20,   505,    22,    23,    24,     0,    25,     0,     0,     0,
       0,    58,     0,     0,    26,     0,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,     0,
       0,     0,     0,     0,     0,    29,    30,    31,    32,     0,
       0,     0,     0,     0,     0,     0,    33,    34,    35,    36,
       0,     0,     0,    37,     0,     0,    38,     0,     0,    40,
       0,     0,   506,     0,    42,    43,    44,    45,    46,    47,
      48,     0,    49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,    51,    52,     0,
      53,    54,     5,     0,     0,     0,     0,   502,     0,    55,
       7,     8,     0,    56,     0,     0,    57,     0,     0,    11,
      12,  1004,    13,     0,     0,     0,     0,    14,    15,     0,
       0,     0,    16,     0,     0,   503,   504,     0,    18,    19,
      20,   505,    22,    23,    24,     0,    25,     0,     0,     0,
       0,    58,     0,     0,    26,     0,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,     0,
       0,     0,     0,     0,     0,    29,    30,    31,    32,     0,
       0,     0,     0,     0,     0,     0,    33,    34,    35,    36,
       0,     0,     0,    37,     0,     0,    38,     0,     0,    40,
       0,     0,   506,     0,    42,    43,    44,    45,    46,    47,
      48,     0,    49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,    51,    52,     0,
      53,    54,     5,     0,     0,     0,     0,   502,     0,    55,
       7,     8,     0,    56,     0,     0,    57,     0,     0,    11,
      12,  1005,    13,     0,     0,     0,     0,    14,    15,     0,
       0,     0,    16,     0,     0,   503,   504,     0,    18,    19,
      20,   505,    22,    23,    24,     0,    25,     0,     0,     0,
       0,    58,     0,     0,    26,     0,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,     0,
       0,     0,     0,     0,     0,    29,    30,    31,    32,     0,
       0,     0,     0,     0,     0,     0,    33,    34,    35,    36,
       0,     0,     0,    37,     0,     0,    38,     0,     0,    40,
       0,     0,   506,     0,    42,    43,    44,    45,    46,    47,
      48,     0,    49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,    51,    52,     0,
      53,    54,     5,     0,     0,     0,     0,   502,     0,    55,
       7,     8,     0,    56,     0,     0,    57,     0,     0,    11,
      12,  1068,    13,     0,     0,     0,     0,    14,    15,     0,
       0,     0,    16,     0,     0,   503,   504,     0,    18,    19,
      20,   505,    22,    23,    24,     0,    25,     0,     0,     0,
       0,    58,     0,     0,    26,     0,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,     0,
       0,     0,     0,     0,     0,    29,    30,    31,    32,     0,
       0,     0,     0,     0,     0,     0,    33,    34,    35,    36,
       0,     0,     0,    37,     0,     0,    38,     0,     0,    40,
       0,     0,   506,     0,    42,    43,    44,    45,    46,    47,
      48,     0,    49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,    51,    52,     0,
      53,    54,     5,     0,     0,     0,     0,   502,     0,    55,
       7,     8,     0,    56,     0,     0,    57,     0,     0,    11,
      12,  -665,    13,     0,     0,     0,     0,    14,    15,     0,
       0,     0,    16,     0,     0,   503,   504,     0,    18,    19,
      20,   505,    22,    23,    24,     0,    25,     0,     0,     0,
       0,    58,     0,     0,    26,     0,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,     0,
       0,     0,     0,     0,     0,    29,    30,    31,    32,     0,
       0,     0,     0,     0,     0,     0,    33,    34,    35,    36,
       0,     0,     0,    37,     0,     0,    38,     0,     0,    40,
       0,     0,   506,     0,    42,    43,    44,    45,    46,    47,
      48,     0,    49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,    51,    52,     0,
      53,    54,     5,     0,     0,     0,     0,   502,     0,    55,
       7,     8,     0,    56,     0,     0,    57,     0,     0,    11,
      12,  1134,    13,     0,     0,     0,     0,    14,    15,     0,
       0,     0,    16,     0,     0,   503,   504,     0,    18,    19,
      20,   505,    22,    23,    24,     0,    25,     0,     0,     0,
       0,    58,     0,     0,    26,     0,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,     0,
       0,     0,     0,     0,     0,    29,    30,    31,    32,     0,
       0,     0,     0,     0,     0,     0,    33,    34,    35,    36,
       0,     0,     0,    37,     0,     0,    38,     0,     0,    40,
       0,     0,   506,     0,    42,    43,    44,    45,    46,    47,
      48,     0,    49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,    51,    52,     0,
      53,    54,     5,     0,     0,     0,     0,   502,     0,    55,
       7,     8,     0,    56,     0,     0,    57,     0,     0,    11,
      12,  1189,    13,     0,     0,     0,     0,    14,    15,     0,
       0,     0,    16,     0,     0,   503,   504,     0,    18,    19,
      20,   505,    22,    23,    24,     0,    25,     0,     0,     0,
       0,    58,     0,     0,    26,     0,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,     0,
       0,     0,     0,     0,     0,    29,    30,    31,    32,     0,
       0,     0,     0,     0,     0,     0,    33,    34,    35,    36,
       0,     0,     0,    37,     0,     0,    38,     0,     0,    40,
       0,     0,   506,     0,    42,    43,    44,    45,    46,    47,
      48,     0,    49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,    51,    52,     0,
      53,    54,     5,     0,     0,     0,     0,   502,     0,    55,
       7,     8,     0,    56,     0,     0,    57,     0,     0,    11,
      12,     0,    13,     0,     0,     0,     0,    14,    15,     0,
       0,     0,    16,     0,     0,   503,   504,     0,    18,    19,
      20,   505,    22,    23,    24,     0,    25,     0,     0,     0,
       0,    58,     0,     0,    26,     0,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,  -655,
       0,     0,     0,     0,     0,    29,    30,    31,    32,     0,
       0,     0,     0,     0,     0,     0,    33,    34,    35,    36,
       0,     0,     0,    37,     0,     0,    38,     0,     0,    40,
       0,     0,   506,     0,    42,    43,    44,    45,    46,    47,
      48,     0,    49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,    51,    52,     0,
      53,    54,     5,     0,     0,     0,     0,   502,     0,    55,
       7,     8,     0,    56,     0,     0,    57,     0,     0,    11,
      12,  -657,    13,     0,     0,     0,     0,    14,    15,     0,
       0,     0,    16,     0,     0,   503,   504,     0,    18,    19,
      20,   505,    22,    23,    24,     0,    25,     0,     0,     0,
       0,    58,     0,     0,    26,     0,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,     0,
       0,     0,     0,     0,     0,    29,    30,    31,    32,     0,
       0,     0,     0,     0,     0,     0,    33,    34,    35,    36,
       0,     0,     0,    37,     0,     0,    38,     0,     0,    40,
       0,     0,   506,     0,    42,    43,    44,    45,    46,    47,
      48,     0,    49,     0,     0,   119,   120,     0,     0,     0,
       0,     0,   121,     0,    50,     0,     0,    51,    52,     0,
      53,    54,   122,   123,     0,     0,   124,   125,     0,    55,
     126,   127,     0,    56,   128,     0,    57,     0,     0,   491,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   129,   130,     0,     0,   131,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    58,   119,   120,     0,     0,     0,     0,     0,   121,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   122,
     123,     0,     0,   124,   125,     0,     0,   126,   127,     0,
       0,   128,   132,     0,     0,     0,     0,     0,     0,     0,
       0,   133,     0,   134,   135,   136,   137,   138,   139,   140,
     129,   130,   141,     0,   131,     0,   142,     0,   492,     0,
     143,     0,     0,     0,     0,     0,     0,     0,     0,   144,
     145,   146,   147,  1213,     0,     0,     0,     0,  1214,   148,
       0,   149,   150,   151,     0,   152,   153,   154,   155,   156,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   132,
     157,     0,     0,     0,     0,   158,   159,     0,   133,   160,
     134,   135,   136,   137,   138,   139,   140,     0,     0,   141,
       0,     0,     0,   142,     0,     0,     0,   143,     0,     0,
       0,     0,     0,     0,     0,     0,   144,   145,   146,   147,
     119,   120,     0,     0,     0,     0,   148,   121,   149,   150,
     151,     0,   152,   153,   154,   155,   156,   122,   123,     0,
       0,   124,   125,     0,     0,   126,   127,   157,     0,   128,
       0,     0,   158,   159,     0,     0,   160,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   129,   130,
       0,     0,   131,     0,     0,     0,     0,     0,     0,   393,
       0,     0,     0,     0,     0,     0,     0,   119,   120,     0,
       0,     0,     0,     0,   121,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   122,   123,     0,     0,   124,   125,
       0,     0,   126,   127,     0,     0,   128,   132,     0,     0,
       0,     0,     0,     0,     0,     0,   133,     0,   134,   135,
     136,   137,   138,   139,   140,   129,   130,   141,     0,   131,
       0,   142,     0,     0,     0,   143,     0,     0,     0,     0,
       0,     0,     0,     0,   144,   145,   146,   147,     0,     0,
       0,     0,     0,     0,   148,     0,   149,   150,   151,     0,
     152,   153,   154,   155,   156,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   132,   157,     0,     0,     0,     0,
     158,   159,     0,   133,   160,   134,   135,   136,   137,   138,
     139,   140,     0,     0,   141,     0,     0,     0,   142,     0,
       0,     0,   143,   896,     0,     0,     0,     0,     0,     0,
       0,   144,   145,   146,   147,   119,   120,     0,     0,     0,
       0,   148,   121,   149,   150,   151,     0,   152,   153,   154,
     155,   156,   122,   123,     0,     0,   124,   125,     0,     0,
     126,   127,   157,     0,   128,     0,     0,   158,   159,     0,
       0,   160,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   129,   130,     0,     0,   131,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   132,     0,     0,     0,     0,     0,     0,     0,
       0,   133,     0,   134,   135,   136,   137,   138,   139,   140,
       0,     0,   141,     0,     0,     0,   142,     0,     0,     0,
     143,     0,     0,     0,     0,     0,     0,     0,     0,   144,
     145,   146,   147,     0,     0,     0,     0,     0,     0,   148,
       0,   149,   150,   151,     0,   152,   153,   154,   155,   156,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     157,     0,     0,     0,     0,   158,   159,     0,     0,   160
};

static const yytype_int16 yycheck[] =
{
       5,    41,   321,     8,   597,   393,    76,    77,    79,    80,
     269,   548,   271,   632,   493,   303,   314,   380,   381,   382,
     383,   384,    27,     1,   295,   554,    31,    32,    33,    34,
      35,     1,    37,    38,   131,    40,   254,     1,   256,   298,
    1004,  1005,     1,     1,     1,    53,     1,    53,    64,     1,
       1,     1,     1,     1,     1,     1,    63,    15,    63,     1,
     157,   158,   159,     1,     1,    70,     1,    72,     1,     1,
       1,     7,     1,     1,     1,    18,    19,     1,    83,    84,
       1,    86,    87,    88,    66,     6,    35,    47,    31,    35,
      35,    57,    66,    85,    99,    37,     1,   102,    41,   104,
      36,   106,    34,    67,    35,     1,   119,   112,     0,   114,
      50,    53,    50,    51,   129,   128,    20,    74,    20,    66,
      53,     1,    50,    62,   172,   173,   141,   746,   143,    89,
      35,    35,    52,     1,     1,   180,     1,    74,    96,   150,
       1,    66,     1,   181,     1,     1,   129,     1,     1,    84,
     142,   129,     1,   129,     1,    35,     1,     1,   180,     0,
     143,   183,   105,   141,    84,   143,   142,    69,   184,   180,
     185,   176,   177,   178,   180,   183,   183,   182,   129,   184,
      66,   129,   187,   149,   142,   142,   129,   142,   193,   259,
     141,   196,   143,   198,   142,   142,   142,   202,   180,    84,
      66,   150,   142,    66,   142,   150,   142,   185,   129,   183,
     180,    66,   217,   183,   142,    66,   180,   222,   142,   224,
      66,   750,   180,   182,   183,  1189,   231,   182,   233,   181,
     169,   181,   180,   238,   185,   181,    66,   142,   180,   182,
       1,   629,   247,   180,   249,   180,   150,   180,   180,   180,
     255,   180,   550,   180,   150,   260,    18,   516,   183,   264,
     531,   532,   142,   268,   129,   270,    28,   272,    30,   274,
     488,   276,   277,   278,   142,   142,   281,     1,   143,   376,
     377,   142,   287,   142,   180,   142,   142,   292,   142,   142,
     295,    52,   297,   142,   299,   142,   182,   142,   142,    60,
      61,    66,     3,     4,     5,    41,  1049,  1050,  1051,    53,
      71,    54,    66,    66,    66,    39,   182,   183,    79,    80,
     183,    66,    50,    84,     1,     6,     1,   182,   183,    66,
      74,    75,   183,    66,    35,    66,   182,    81,    82,    83,
      66,    66,     1,   162,   163,    46,    47,    48,    49,    50,
      51,    75,   182,   183,    78,    99,   100,    81,    82,    83,
     142,   840,  1105,    66,    66,   142,    66,  1110,    66,    66,
      66,    66,    63,   182,   183,    99,   100,  1120,    60,    61,
      94,    95,    66,    65,    68,   146,   147,   148,    89,   174,
     175,   176,    55,    70,   130,    70,    59,    75,    58,   142,
     405,   406,    53,   164,   165,   129,   130,    15,   182,   183,
      18,    70,   417,   418,   142,    66,   735,   182,   142,   180,
     181,   740,   741,    74,   429,   103,  1169,   432,   182,   182,
     182,   501,   133,   134,    84,   949,   180,   182,   152,   953,
     803,   446,   730,   731,   732,   182,   129,    15,   746,   182,
      18,   182,    18,    19,   742,    15,   182,   182,    18,   464,
     465,   466,    70,  1082,  1083,    31,   506,   182,   183,  1006,
    1007,   162,   163,   183,    15,    41,   481,    18,    19,   182,
     182,    66,   182,    68,   182,   182,   182,   182,   170,   171,
      31,    91,   497,   498,   182,   183,    18,    19,    52,    40,
      41,   378,   379,   103,   266,   510,    60,    61,   288,    31,
     290,   129,   142,   518,   180,   520,    63,   183,    20,    41,
     181,    52,    58,   141,   181,   143,   531,   532,   180,    60,
      61,   183,   180,   538,   134,   183,   541,   181,   543,   105,
      71,   122,   142,   180,   125,    75,   183,   181,    79,    80,
     312,    81,    82,    83,   180,    96,   181,   183,   563,   321,
     879,   181,   567,   129,   105,   106,   107,   185,   180,    99,
     100,   183,   373,   374,   375,   337,   181,   339,   340,   341,
     342,   168,   344,   105,   106,   107,   385,   386,   129,   351,
     352,   353,   146,   147,   148,    86,    87,   359,   360,   361,
     362,   363,   364,   365,    53,   181,   181,   129,   181,   181,
     181,   681,   181,    63,   181,   146,   147,   148,    67,    68,
      69,   167,   181,   181,    89,    74,   181,   632,   181,   181,
     181,    96,   637,   164,   165,   640,  1024,   707,   643,    16,
      17,  1234,   713,   181,    21,    22,   181,   181,   113,   968,
     115,   656,  1160,  1161,    16,    17,   181,  1165,    20,   166,
      22,   181,   181,  1171,  1172,  1173,   428,    44,   181,   431,
     181,   181,   181,   181,    16,    17,    22,    22,    20,   749,
      22,   751,    44,   182,    68,   142,   183,   692,   183,   183,
     183,   696,   697,    20,   699,   160,   701,   142,    74,   704,
     142,   183,    44,   708,   709,   710,   142,    20,   142,   714,
      72,   142,    89,    90,    91,    52,   182,    34,    35,    53,
      37,   182,   182,   142,   189,   183,   103,    89,    90,   988,
      72,   142,    22,    22,    20,   200,    53,   142,   743,    50,
     142,   181,   747,    78,    73,   182,    66,    89,    90,   142,
      67,   183,    20,  1072,   759,   760,   183,    74,   223,    84,
     183,   183,   182,    55,   182,   182,  1085,   182,   182,   182,
     182,  1090,   182,   182,  1093,   182,   182,   142,   182,   142,
     183,   182,   182,   142,   142,   182,    86,   183,   183,   180,
       1,     1,    35,   183,    49,  1114,    30,    84,   142,   182,
     182,   142,    74,   183,   185,   180,   142,   877,   181,    68,
     142,    53,   817,   183,   142,   182,   142,   141,    30,    82,
      20,    30,   827,   288,    81,   290,   183,  1146,   293,   182,
     103,   183,    53,   142,   110,   300,   183,    93,   843,   142,
      68,   181,    68,   182,    20,   956,  1095,   955,  1092,   744,
     900,   921,   998,  1074,   246,   970,   473,    65,   305,   856,
     844,   387,   867,  1182,  1183,   870,   871,   388,   627,   874,
     628,   389,     4,   338,   481,    13,   881,   882,    13,   109,
    1132,   346,   347,   348,    71,   350,   830,   523,  1053,  1166,
     895,   175,   357,  1174,  1213,  1214,  1162,   838,  1098,   723,
     529,   366,   367,   658,   460,   874,   522,  1002,   258,   895,
    1144,   845,  1068,   983,   919,   677,   678,   679,   680,   756,
      -1,    -1,    -1,    -1,   323,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,   597,    -1,    -1,    -1,    -1,    -1,    -1,  1144,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1227,    -1,    -1,
      -1,    -1,    -1,    -1,  1169,    -1,    -1,  1237,    -1,    -1,
      -1,    -1,  1177,  1178,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1189,    -1,    -1,    -1,   653,    -1,
     952,    -1,    -1,    -1,    -1,    -1,   958,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   968,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1224,
      -1,    -1,    -1,    -1,   689,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1241,  1242,  1243,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1017,    -1,    -1,   723,  1021,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1036,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   753,   754,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1072,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1085,    -1,    -1,   791,    -1,  1090,    -1,
      -1,  1093,    -1,    -1,  1096,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,    -1,    -1,    -1,    -1,     7,     8,    -1,
      -1,    -1,  1114,    -1,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    25,    -1,    -1,    28,    29,
      -1,    -1,    32,    33,    -1,    -1,    36,    -1,    -1,   844,
     845,    -1,    -1,    -1,  1146,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    -1,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1182,  1183,    -1,    -1,    -1,    -1,    -1,   892,    -1,   894,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,    -1,    -1,
      -1,  1213,  1214,   113,    -1,   115,   116,   117,   118,   119,
     120,   121,    -1,    -1,   124,    -1,    -1,    -1,   128,    -1,
      -1,    -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   141,   142,   143,   144,   950,    -1,    -1,    -1,    -1,
      -1,   151,    -1,   153,   154,   155,    -1,   157,   158,   159,
     160,   161,     1,    -1,    -1,    -1,    -1,    -1,     7,     8,
      -1,    -1,   172,    -1,    -1,    14,    -1,   177,   178,    -1,
     180,   181,    -1,   183,    -1,    24,    25,    -1,    -1,    28,
      29,    -1,    -1,    32,    33,  1000,  1001,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    -1,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,     7,     8,
      -1,    -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    25,    -1,    -1,    28,
      29,    -1,    -1,    32,    33,   104,    -1,    36,    -1,    -1,
      -1,    -1,    41,    -1,   113,    -1,   115,   116,   117,   118,
     119,   120,   121,    -1,    -1,   124,    55,    56,    -1,   128,
      59,    -1,    -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   141,   142,   143,   144,    -1,    -1,    -1,    -1,
      -1,    -1,   151,    -1,   153,   154,   155,    -1,   157,   158,
     159,   160,   161,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1136,    -1,   172,    -1,   104,    -1,    -1,   177,   178,
      -1,    -1,   181,   182,   113,    -1,   115,   116,   117,   118,
     119,   120,   121,    -1,    -1,   124,    -1,    -1,    -1,   128,
      -1,   130,    -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,   141,   142,   143,   144,     7,     8,    -1,    -1,
      -1,    -1,   151,    14,   153,   154,   155,    -1,   157,   158,
     159,   160,   161,    24,    25,    -1,    -1,    28,    29,    -1,
      -1,    32,    33,   172,    -1,    36,    -1,    -1,   177,   178,
      -1,    -1,   181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    56,    -1,    -1,    59,  1234,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,    -1,    -1,    -1,    -1,     7,     8,    -1,    -1,
      -1,    -1,    -1,    14,    -1,    -1,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    25,    -1,    -1,    28,    29,    -1,
      -1,    32,    33,   104,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,   113,    -1,   115,   116,   117,   118,   119,   120,
     121,    -1,    -1,   124,    55,    56,    -1,   128,    59,    -1,
      -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,   142,   143,   144,    -1,    -1,    -1,    -1,    -1,    -1,
     151,    -1,   153,   154,   155,    -1,   157,   158,   159,   160,
     161,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   172,    -1,   104,    -1,    -1,   177,   178,    -1,   180,
     181,    -1,   113,    -1,   115,   116,   117,   118,   119,   120,
     121,    -1,    -1,   124,    -1,    -1,    -1,   128,    -1,    -1,
      -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
     141,   142,   143,   144,     7,     8,    -1,    -1,    -1,    -1,
     151,    14,   153,   154,   155,    -1,   157,   158,   159,   160,
     161,    24,    25,    -1,    -1,    28,    29,    -1,    -1,    32,
      33,   172,    -1,    36,    -1,    -1,   177,   178,    -1,    -1,
     181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    -1,    -1,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,
      -1,     7,     8,    -1,    -1,    -1,    -1,    -1,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      -1,    -1,    28,    29,    -1,    -1,    32,    33,    -1,    -1,
      36,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,    -1,   115,   116,   117,   118,   119,   120,   121,    55,
      56,   124,    -1,    59,    -1,   128,    -1,    -1,    -1,   132,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,
     143,   144,    -1,    -1,    -1,    -1,    -1,    -1,   151,    -1,
     153,   154,   155,    -1,   157,   158,   159,   160,   161,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,   172,
      -1,    -1,    -1,    -1,   177,   178,    -1,   113,   181,   115,
     116,   117,   118,   119,   120,   121,    -1,    -1,   124,    -1,
      -1,    -1,   128,    -1,    -1,    -1,   132,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,   141,   142,   143,   144,     7,
       8,    -1,    -1,    -1,    -1,   151,    14,   153,   154,   155,
      -1,   157,   158,   159,   160,   161,    24,    25,    -1,    -1,
      28,    29,    -1,    -1,    32,    33,   172,    -1,    36,    -1,
      -1,   177,   178,    -1,    -1,   181,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    -1,
      -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,    -1,    -1,    -1,    -1,     7,     8,    -1,    -1,
      -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    25,    -1,    -1,    28,    29,    -1,
      -1,    32,    33,    -1,    -1,    36,   104,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,    -1,   115,   116,   117,
     118,   119,   120,   121,    55,    56,   124,    -1,    59,    -1,
     128,    -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   141,   142,   143,   144,    -1,    -1,    -1,
      -1,    -1,    -1,   151,    -1,   153,   154,   155,    -1,   157,
     158,   159,   160,   161,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   104,   172,    -1,    -1,    -1,    -1,   177,
     178,    -1,   113,   181,   115,   116,   117,   118,   119,   120,
     121,    -1,    -1,   124,    -1,    -1,    -1,   128,    -1,    -1,
      -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
     141,   142,   143,   144,     7,     8,    -1,    -1,    -1,    -1,
     151,    14,   153,   154,   155,    -1,   157,   158,   159,   160,
     161,    24,    25,    -1,    -1,    28,    29,    -1,    -1,    32,
      33,   172,    -1,    36,    -1,    -1,   177,   178,    -1,    -1,
     181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    -1,    -1,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,
      -1,     7,     8,    -1,    -1,    -1,    -1,    -1,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      -1,    -1,    28,    29,    -1,    -1,    32,    33,    -1,    -1,
      36,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,    -1,   115,   116,   117,   118,   119,   120,   121,    55,
      56,   124,    -1,    59,    -1,   128,    -1,    -1,    -1,   132,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,
     143,   144,    -1,    -1,    -1,    -1,    -1,    -1,   151,    -1,
     153,   154,   155,    -1,   157,   158,   159,   160,   161,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,   172,
      -1,    -1,    -1,    -1,   177,   178,    -1,   113,   181,   115,
     116,   117,   118,   119,   120,   121,    -1,    -1,   124,    -1,
      -1,    -1,   128,    -1,    -1,    -1,   132,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,   141,   142,   143,   144,     7,
       8,    -1,    -1,    -1,    -1,   151,    14,   153,   154,   155,
      -1,   157,   158,   159,   160,   161,    24,    25,    -1,    -1,
      28,    29,    -1,    -1,    32,    33,   172,    -1,    36,    -1,
      -1,   177,   178,    -1,    -1,   181,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    -1,
      -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,    -1,    -1,    -1,    -1,     7,     8,    -1,    -1,
      -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    25,    -1,    -1,    28,    29,    -1,
      -1,    32,    33,    -1,    -1,    36,   104,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,    -1,   115,   116,   117,
     118,   119,   120,   121,    55,    56,   124,    -1,    59,    -1,
     128,    -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   141,   142,   143,   144,    -1,    -1,    -1,
      -1,    -1,    -1,   151,    -1,   153,   154,   155,    -1,   157,
     158,   159,   160,   161,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   104,   172,    -1,    -1,    -1,    -1,   177,
     178,    -1,   113,   181,   115,   116,   117,   118,   119,   120,
     121,    -1,    -1,   124,    -1,    -1,    -1,   128,    -1,    -1,
      -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
     141,   142,   143,   144,     7,     8,    -1,    -1,    -1,    -1,
     151,    14,   153,   154,   155,    -1,   157,   158,   159,   160,
     161,    24,    25,    -1,    -1,    28,    29,    -1,    -1,    32,
      33,   172,    -1,    36,    -1,    -1,   177,   178,    -1,    -1,
     181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    -1,    -1,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,
      -1,     7,     8,    -1,    -1,    -1,    -1,    -1,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      -1,    -1,    28,    29,    -1,    -1,    32,    33,    -1,    -1,
      36,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,    -1,   115,   116,   117,   118,   119,   120,   121,    55,
      56,   124,    -1,    59,    -1,   128,    -1,    -1,    -1,   132,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,
     143,   144,    -1,    -1,    -1,    -1,    -1,    -1,   151,    -1,
     153,   154,   155,    -1,   157,   158,   159,   160,   161,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,   172,
      -1,    -1,    -1,    -1,   177,   178,    -1,   113,   181,   115,
     116,   117,   118,   119,   120,   121,    -1,    -1,   124,    -1,
      -1,    -1,   128,    -1,    -1,    -1,   132,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,   141,   142,   143,   144,     7,
       8,    -1,    -1,    -1,    -1,   151,    14,   153,   154,   155,
      -1,   157,   158,   159,   160,   161,    24,    25,    -1,    -1,
      28,    29,    -1,    -1,    32,    33,   172,    -1,    36,    -1,
      -1,   177,   178,    -1,    -1,   181,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    -1,
      -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,    -1,   115,   116,   117,
     118,   119,   120,   121,    -1,    -1,   124,    -1,    -1,    -1,
     128,    -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   141,   142,   143,   144,    -1,    -1,    -1,
      -1,    -1,    -1,   151,    -1,   153,   154,   155,    -1,   157,
     158,   159,   160,   161,    -1,    -1,    -1,     1,    -1,    -1,
      -1,    -1,     6,    -1,   172,     9,    10,    -1,    -1,   177,
     178,    -1,    -1,   181,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    26,    27,    -1,    -1,    -1,    31,    -1,    -1,
      34,    35,    -1,    37,    38,    39,    40,    41,    42,    43,
      -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    -1,    69,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    86,    87,    88,    -1,    -1,    -1,    92,    -1,
      -1,    95,    -1,    -1,    98,    -1,    -1,   101,    -1,   103,
     104,   105,   106,   107,   108,   109,    -1,   111,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,
      -1,    -1,   126,   127,    -1,   129,   130,     1,    -1,    -1,
      -1,    -1,     6,    -1,   138,     9,    10,    -1,   142,    -1,
      -1,   145,    -1,    -1,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    26,    27,    -1,    -1,    -1,    31,    -1,    -1,
      34,    35,    -1,    37,    38,    39,    40,    41,    42,    43,
      -1,    45,    -1,    -1,    -1,    -1,   180,    -1,    -1,    53,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    -1,    69,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    86,    87,    88,    -1,    -1,    -1,    92,    -1,
      -1,    95,    -1,    -1,    98,    -1,    -1,   101,    -1,   103,
     104,   105,   106,   107,   108,   109,    -1,   111,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,
      -1,    -1,   126,   127,    -1,   129,   130,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   138,    -1,    -1,    -1,   142,    -1,
      -1,   145,     1,    -1,    -1,    -1,    -1,     6,    -1,    -1,
       9,    10,    11,    -1,    -1,    -1,    15,    -1,    -1,    18,
      19,    -1,    21,    -1,    -1,    -1,    -1,    26,    27,    -1,
      -1,    -1,    31,    -1,    -1,    34,   180,    -1,    37,    38,
      39,    40,    41,    42,    43,    -1,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    75,    76,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      -1,    -1,    -1,    92,    -1,    -1,    95,    96,    -1,    98,
      -1,    -1,   101,    -1,   103,   104,   105,   106,   107,   108,
     109,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,    -1,    -1,   126,   127,    -1,
     129,   130,     1,    -1,    -1,    -1,    -1,     6,    -1,   138,
       9,    10,    -1,   142,    -1,    -1,   145,    -1,    -1,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    26,    27,    -1,
      -1,    -1,    31,    -1,    -1,    34,    35,    -1,    37,    38,
      39,    40,    41,    42,    43,    -1,    45,    -1,    -1,    -1,
      -1,   180,    -1,    -1,    53,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    75,    76,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      -1,    -1,    -1,    92,    -1,    -1,    95,    -1,    -1,    98,
      -1,    -1,   101,    -1,   103,   104,   105,   106,   107,   108,
     109,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,    -1,    -1,   126,   127,    -1,
     129,   130,     1,    -1,    -1,    -1,    -1,     6,    -1,   138,
       9,    10,    -1,   142,    -1,    -1,   145,    -1,    -1,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    26,    27,    -1,
      -1,    -1,    31,    -1,    -1,    34,    35,    -1,    37,    38,
      39,    40,    41,    42,    43,    -1,    45,    -1,    -1,    -1,
      -1,   180,    -1,    -1,    53,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    75,    76,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      -1,    -1,    -1,    92,    -1,    -1,    95,    -1,    -1,    98,
      -1,    -1,   101,    -1,   103,   104,   105,   106,   107,   108,
     109,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,    -1,    -1,   126,   127,    -1,
     129,   130,     1,    -1,    -1,    -1,    -1,     6,    -1,   138,
       9,    10,    -1,   142,    -1,    -1,   145,    -1,    -1,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    26,    27,    -1,
      -1,    -1,    31,    -1,    -1,    34,    35,    -1,    37,    38,
      39,    40,    41,    42,    43,    -1,    45,    -1,    -1,    -1,
      -1,   180,    -1,    -1,    53,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    75,    76,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      -1,    -1,    -1,    92,    -1,    -1,    95,    -1,    -1,    98,
      -1,    -1,   101,    -1,   103,   104,   105,   106,   107,   108,
     109,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,    -1,    -1,   126,   127,    -1,
     129,   130,     1,    -1,    -1,    -1,    -1,     6,    -1,   138,
       9,    10,    -1,   142,    -1,    -1,   145,    -1,    -1,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    26,    27,    -1,
      -1,    -1,    31,    -1,    -1,    34,    35,    -1,    37,    38,
      39,    40,    41,    42,    43,    -1,    45,    -1,    -1,    -1,
      -1,   180,    -1,    -1,    53,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    75,    76,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      -1,    -1,    -1,    92,    -1,    -1,    95,    -1,    -1,    98,
      -1,    -1,   101,    -1,   103,   104,   105,   106,   107,   108,
     109,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,    -1,    -1,   126,   127,    -1,
     129,   130,     1,    -1,    -1,    -1,    -1,     6,    -1,   138,
       9,    10,    -1,   142,    -1,    -1,   145,    -1,    -1,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    26,    27,    -1,
      -1,    -1,    31,    -1,    -1,    34,    35,    -1,    37,    38,
      39,    40,    41,    42,    43,    -1,    45,    -1,    -1,    -1,
      -1,   180,    -1,    -1,    53,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    75,    76,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      -1,    -1,    -1,    92,    -1,    -1,    95,    -1,    -1,    98,
      -1,    -1,   101,    -1,   103,   104,   105,   106,   107,   108,
     109,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,    -1,    -1,   126,   127,    -1,
     129,   130,     1,    -1,    -1,    -1,    -1,     6,    -1,   138,
       9,    10,    -1,   142,    -1,    -1,   145,    -1,    -1,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    26,    27,    -1,
      -1,    -1,    31,    -1,    -1,    34,    35,    -1,    37,    38,
      39,    40,    41,    42,    43,    -1,    45,    -1,    -1,    -1,
      -1,   180,    -1,    -1,    53,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    75,    76,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      -1,    -1,    -1,    92,    -1,    -1,    95,    -1,    -1,    98,
      -1,    -1,   101,    -1,   103,   104,   105,   106,   107,   108,
     109,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,    -1,    -1,   126,   127,    -1,
     129,   130,     1,    -1,    -1,    -1,    -1,     6,    -1,   138,
       9,    10,    -1,   142,    -1,    -1,   145,    -1,    -1,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    26,    27,    -1,
      -1,    -1,    31,    -1,    -1,    34,    35,    -1,    37,    38,
      39,    40,    41,    42,    43,    -1,    45,    -1,    -1,    -1,
      -1,   180,    -1,    -1,    53,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    75,    76,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      -1,    -1,    -1,    92,    -1,    -1,    95,    -1,    -1,    98,
      -1,    -1,   101,    -1,   103,   104,   105,   106,   107,   108,
     109,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,    -1,    -1,   126,   127,    -1,
     129,   130,     1,    -1,    -1,    -1,    -1,     6,    -1,   138,
       9,    10,    -1,   142,    -1,    -1,   145,    -1,    -1,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    26,    27,    -1,
      -1,    -1,    31,    -1,    -1,    34,    35,    -1,    37,    38,
      39,    40,    41,    42,    43,    -1,    45,    -1,    -1,    -1,
      -1,   180,    -1,    -1,    53,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    75,    76,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      -1,    -1,    -1,    92,    -1,    -1,    95,    -1,    -1,    98,
      -1,    -1,   101,    -1,   103,   104,   105,   106,   107,   108,
     109,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,    -1,    -1,   126,   127,    -1,
     129,   130,     1,    -1,    -1,    -1,    -1,     6,    -1,   138,
       9,    10,    -1,   142,    -1,    -1,   145,    -1,    -1,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    26,    27,    -1,
      -1,    -1,    31,    -1,    -1,    34,    35,    -1,    37,    38,
      39,    40,    41,    42,    43,    -1,    45,    -1,    -1,    -1,
      -1,   180,    -1,    -1,    53,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    75,    76,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      -1,    -1,    -1,    92,    -1,    -1,    95,    -1,    -1,    98,
      -1,    -1,   101,    -1,   103,   104,   105,   106,   107,   108,
     109,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,    -1,    -1,   126,   127,    -1,
     129,   130,     1,    -1,    -1,    -1,    -1,     6,    -1,   138,
       9,    10,    -1,   142,    -1,    -1,   145,    -1,    -1,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    26,    27,    -1,
      -1,    -1,    31,    -1,    -1,    34,    35,    -1,    37,    38,
      39,    40,    41,    42,    43,    -1,    45,    -1,    -1,    -1,
      -1,   180,    -1,    -1,    53,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    75,    76,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      -1,    -1,    -1,    92,    -1,    -1,    95,    -1,    -1,    98,
      -1,    -1,   101,    -1,   103,   104,   105,   106,   107,   108,
     109,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,    -1,    -1,   126,   127,    -1,
     129,   130,     1,    -1,    -1,    -1,    -1,     6,    -1,   138,
       9,    10,    -1,   142,    -1,    -1,   145,    -1,    -1,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    26,    27,    -1,
      -1,    -1,    31,    -1,    -1,    34,    35,    -1,    37,    38,
      39,    40,    41,    42,    43,    -1,    45,    -1,    -1,    -1,
      -1,   180,    -1,    -1,    53,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    75,    76,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      -1,    -1,    -1,    92,    -1,    -1,    95,    -1,    -1,    98,
      -1,    -1,   101,    -1,   103,   104,   105,   106,   107,   108,
     109,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,    -1,    -1,   126,   127,    -1,
     129,   130,     1,    -1,    -1,    -1,    -1,     6,    -1,   138,
       9,    10,    -1,   142,    -1,    -1,   145,    -1,    -1,    18,
      19,    -1,    21,    -1,    -1,    -1,    -1,    26,    27,    -1,
      -1,    -1,    31,    -1,    -1,    34,    35,    -1,    37,    38,
      39,    40,    41,    42,    43,    -1,    45,    -1,    -1,    -1,
      -1,   180,    -1,    -1,    53,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,
      -1,    -1,    -1,    -1,    -1,    74,    75,    76,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      -1,    -1,    -1,    92,    -1,    -1,    95,    -1,    -1,    98,
      -1,    -1,   101,    -1,   103,   104,   105,   106,   107,   108,
     109,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,    -1,    -1,   126,   127,    -1,
     129,   130,     1,    -1,    -1,    -1,    -1,     6,    -1,   138,
       9,    10,    -1,   142,    -1,    -1,   145,    -1,    -1,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    26,    27,    -1,
      -1,    -1,    31,    -1,    -1,    34,    35,    -1,    37,    38,
      39,    40,    41,    42,    43,    -1,    45,    -1,    -1,    -1,
      -1,   180,    -1,    -1,    53,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    75,    76,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      -1,    -1,    -1,    92,    -1,    -1,    95,    -1,    -1,    98,
      -1,    -1,   101,    -1,   103,   104,   105,   106,   107,   108,
     109,    -1,   111,    -1,    -1,     7,     8,    -1,    -1,    -1,
      -1,    -1,    14,    -1,   123,    -1,    -1,   126,   127,    -1,
     129,   130,    24,    25,    -1,    -1,    28,    29,    -1,   138,
      32,    33,    -1,   142,    36,    -1,   145,    -1,    -1,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    -1,    -1,    59,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   180,     7,     8,    -1,    -1,    -1,    -1,    -1,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      25,    -1,    -1,    28,    29,    -1,    -1,    32,    33,    -1,
      -1,    36,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,    -1,   115,   116,   117,   118,   119,   120,   121,
      55,    56,   124,    -1,    59,    -1,   128,    -1,   130,    -1,
     132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,
     142,   143,   144,    78,    -1,    -1,    -1,    -1,    83,   151,
      -1,   153,   154,   155,    -1,   157,   158,   159,   160,   161,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,
     172,    -1,    -1,    -1,    -1,   177,   178,    -1,   113,   181,
     115,   116,   117,   118,   119,   120,   121,    -1,    -1,   124,
      -1,    -1,    -1,   128,    -1,    -1,    -1,   132,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   141,   142,   143,   144,
       7,     8,    -1,    -1,    -1,    -1,   151,    14,   153,   154,
     155,    -1,   157,   158,   159,   160,   161,    24,    25,    -1,
      -1,    28,    29,    -1,    -1,    32,    33,   172,    -1,    36,
      -1,    -1,   177,   178,    -1,    -1,   181,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,
      -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,     8,    -1,
      -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    25,    -1,    -1,    28,    29,
      -1,    -1,    32,    33,    -1,    -1,    36,   104,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,   115,   116,
     117,   118,   119,   120,   121,    55,    56,   124,    -1,    59,
      -1,   128,    -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   141,   142,   143,   144,    -1,    -1,
      -1,    -1,    -1,    -1,   151,    -1,   153,   154,   155,    -1,
     157,   158,   159,   160,   161,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   104,   172,    -1,    -1,    -1,    -1,
     177,   178,    -1,   113,   181,   115,   116,   117,   118,   119,
     120,   121,    -1,    -1,   124,    -1,    -1,    -1,   128,    -1,
      -1,    -1,   132,   133,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   141,   142,   143,   144,     7,     8,    -1,    -1,    -1,
      -1,   151,    14,   153,   154,   155,    -1,   157,   158,   159,
     160,   161,    24,    25,    -1,    -1,    28,    29,    -1,    -1,
      32,    33,   172,    -1,    36,    -1,    -1,   177,   178,    -1,
      -1,   181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    -1,    -1,    59,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,    -1,   115,   116,   117,   118,   119,   120,   121,
      -1,    -1,   124,    -1,    -1,    -1,   128,    -1,    -1,    -1,
     132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,
     142,   143,   144,    -1,    -1,    -1,    -1,    -1,    -1,   151,
      -1,   153,   154,   155,    -1,   157,   158,   159,   160,   161,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     172,    -1,    -1,    -1,    -1,   177,   178,    -1,    -1,   181
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
     191,   192,   205,   227,   229,   231,   233,   234,   276,   312,
     323,   326,   328,   334,   339,   346,   349,   352,   355,   356,
     357,   358,   359,   360,   404,   406,   407,   409,   415,   416,
     433,   443,   445,   450,   451,   455,   461,   463,   188,     1,
     142,   188,    54,   142,   236,   237,     1,    39,   142,   294,
     323,   326,     1,   456,     1,   452,     1,   464,     1,     7,
       8,    14,    24,    25,    28,    29,    32,    33,    36,    55,
      56,    59,   104,   113,   115,   116,   117,   118,   119,   120,
     121,   124,   128,   132,   141,   142,   143,   144,   151,   153,
     154,   155,   157,   158,   159,   160,   161,   172,   177,   178,
     181,   248,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   265,   267,   270,     1,   142,     1,   142,
      15,    18,     1,   142,     1,   142,   181,   238,   188,   284,
       1,   270,    84,   270,   188,   188,   150,   188,     1,   188,
     286,   188,     1,     6,   129,   188,   188,   188,    15,    18,
      19,    31,    40,    41,    96,   129,   359,     6,   142,   305,
     142,   302,     1,   288,     1,    66,   142,     1,   335,   363,
     327,     1,   142,     1,    84,   181,   285,   405,     1,    15,
      96,   142,   188,   244,    58,   228,   228,     1,   142,     1,
     142,   300,   188,    84,   293,   338,   188,     1,   329,   296,
      20,    69,   272,   272,     1,    35,   181,   354,     1,   354,
       1,   354,     1,   142,   341,   342,     1,   129,   142,   188,
     437,     1,   188,   421,   183,   421,   421,     1,   183,   188,
     299,   420,     1,   270,   271,   417,   419,     1,   279,     1,
     446,   271,   188,   206,   188,   183,   188,   188,   142,   281,
     129,   328,    63,   439,   337,   338,   188,   271,   188,   271,
      20,    35,   150,   465,   466,   467,   477,    53,    67,    68,
      69,    74,   351,   353,   238,   181,   181,   181,   181,   181,
     181,   181,   181,   238,   181,   255,   181,   181,   181,   181,
     181,   181,   181,   181,   181,   181,   181,   181,   181,   181,
     181,   181,   181,   181,   181,   181,   181,   181,   255,   255,
     255,   271,    58,   174,   175,   176,   172,   173,   162,   163,
      60,    61,    65,   170,   171,    62,   169,   168,   167,   166,
      63,    64,   184,    66,   351,   188,   188,   188,   444,    22,
      22,   188,   188,   182,   188,     1,   271,   422,    68,    68,
      50,   142,   188,   188,   188,   271,   188,    91,   103,   134,
     142,   142,    15,    18,     1,   361,   188,   183,   183,   307,
     183,   183,   304,   188,   271,   188,   142,    20,    74,   142,
     370,   188,   183,   188,   324,   325,     1,   292,    52,    60,
      61,    71,    79,    80,   146,   147,   148,   164,   165,   424,
     425,   411,   412,   188,   246,   245,   247,   235,   272,   235,
     188,   230,   188,   232,    75,    81,    82,    83,    99,   100,
     313,   315,   316,   322,   309,    50,   142,   309,   188,   309,
      20,    41,   130,   332,   333,   441,   272,     1,    67,   188,
     436,   280,     6,    34,    35,    40,   101,   273,   276,   348,
      20,   188,    57,   149,   225,   270,   277,   188,   341,   188,
     341,   188,   343,   183,   188,   188,   188,   188,   188,   408,
     188,   417,   417,   188,   271,   183,   420,   188,   341,   188,
     271,     1,   183,   282,   207,   226,   271,   237,   297,    52,
     295,   270,    53,   310,   439,   457,   453,    34,    35,    37,
      53,    67,    74,   483,     1,   225,   468,    20,   466,   182,
     182,   270,   271,   270,   270,   270,   270,   270,   271,   271,
     271,     1,   142,   182,   271,   270,   270,   270,     1,   142,
       1,   142,     1,    50,    51,   142,   271,   249,   270,   270,
     270,   270,   270,   270,   270,   271,   271,   182,    55,    59,
     254,   254,   254,   255,   255,   256,   256,   257,   257,   257,
     257,   257,   258,   258,   259,   260,   261,   264,   266,   268,
     267,   183,   459,   460,   142,   142,   188,     1,   188,   423,
     287,   188,   188,   271,   290,   291,    22,    22,    20,   142,
     306,   270,   188,   303,   270,   188,   289,   364,   410,    50,
     142,   188,   250,   251,   252,   271,   422,   271,   413,   414,
     188,   188,   188,    20,   181,   239,   239,   320,   318,   317,
     319,   301,    53,    74,   188,   314,   316,    78,   309,   442,
     370,   271,    20,   188,   188,   272,     1,    70,     1,    70,
       1,    70,    15,    18,    70,    73,   347,   350,     1,    37,
      53,   188,   438,   182,   341,   188,   188,   344,   424,   342,
     413,   420,   420,   418,   188,   447,   188,   142,   188,   462,
       3,     4,     5,    35,    46,    47,    48,    49,    50,    51,
      89,   133,   134,   208,   209,   210,   459,     1,   271,   426,
     439,   311,   310,   183,   183,   188,    20,   478,    84,     1,
      34,   188,   482,   182,   183,   183,   182,   182,   183,   182,
       1,   182,   183,   183,   182,   182,   182,   182,   182,   183,
     182,   183,   182,   182,   182,   182,   182,   182,   182,   182,
     182,   183,   250,   183,   182,   182,   182,   182,   182,   183,
     182,   182,    55,    63,   262,   263,   267,   142,   188,   460,
     196,   194,   188,   188,   188,    47,    89,   401,    16,    17,
      21,    22,    44,    89,    90,    91,   103,   391,   142,   142,
     362,   142,   308,   271,   188,   226,   365,   366,   367,   368,
     440,   441,   411,   182,   183,   183,    18,    19,    31,    41,
     105,   129,   182,   240,   241,   242,    86,    94,    95,   152,
     243,   270,   270,   270,   270,   272,   321,   271,   330,   180,
       1,    74,   188,   434,    20,   188,   188,   275,   188,   274,
     188,     1,     1,   188,     1,   270,   272,   188,   188,   188,
     354,   188,   345,   419,   183,   283,   133,   226,   226,   226,
      49,   225,   213,   225,   225,   226,   188,   210,   439,    53,
     188,   432,    30,   429,   272,   310,   272,   271,   271,   483,
      84,   480,   142,   188,   188,   270,   270,   270,   182,   142,
     270,   270,   270,   271,   182,   270,   270,   257,   185,     1,
     181,   201,     1,   181,   197,   270,   270,   188,   395,   394,
     393,    74,   392,   396,   188,   195,   193,   365,   183,   180,
     372,   370,     1,    84,   188,   340,   252,   414,   181,   182,
     183,   142,   242,    20,   270,   188,   374,   371,   372,   188,
     188,   436,   272,   225,   188,   188,    68,    68,   278,   271,
     271,   462,   142,   213,   212,   122,   125,   214,   211,    53,
     427,   183,   430,   431,    20,    20,   458,   454,   188,   142,
     272,   469,   182,   182,   182,   182,   182,   183,   182,   182,
     182,   183,   182,   182,   269,   188,   142,   202,   203,   188,
     141,   198,   199,   402,   397,   398,   399,   397,   271,   270,
     397,   201,   197,   270,    16,    17,    20,    22,    44,    72,
      89,    90,   373,   369,   188,     1,    50,   142,   225,   241,
       1,    53,   188,   435,   129,   142,   336,    20,    20,   272,
     341,   448,    30,   215,   215,   298,   271,   271,    53,   431,
     435,   435,   459,   459,   479,    82,   476,   270,   270,   267,
     204,   182,   183,   200,   182,   183,    30,   403,   183,   270,
       1,   129,   141,   143,   185,   384,   385,     1,   129,   143,
     376,   377,     1,    17,   375,     1,   129,   141,   143,   185,
     379,   380,   374,   374,   374,   371,   188,   188,   188,   182,
     188,   188,   331,   482,    20,   188,   183,   225,   216,   216,
     272,   428,   188,   188,    20,   225,    81,   182,   182,   225,
     188,   203,   225,   188,   199,   270,   398,   400,   188,   386,
     387,   388,   183,   374,   188,   378,   183,   374,   188,   225,
     188,   381,   382,   383,   183,   374,   337,     1,    35,   188,
     481,   271,    75,   103,   217,   218,   219,   220,   221,    20,
      53,   481,   225,   142,     7,    36,   142,   389,   390,   389,
     389,   385,   389,   377,   374,   389,   389,   389,   380,   188,
     188,   449,   225,    78,    83,   225,   435,   470,   110,   183,
     222,   225,   225,    93,   142,    68,   223,   471,   188,    85,
     142,   272,   181,   472,   224,    68,   250,   473,   182,   272,
     474,    20,     1,   150,   188,   475,   188,   188
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
     213,   214,   214,   215,   215,   216,   216,   217,   217,   217,
     218,   219,   220,   221,   222,   221,   223,   223,   224,   223,
     225,   226,   227,   227,   228,   228,   229,   230,   229,   231,
     232,   231,   233,   233,   234,   234,   235,   236,   236,   237,
     238,   238,   239,   239,   239,   240,   240,   241,   242,   242,
     242,   242,   242,   242,   242,   243,   243,   243,   243,   244,
     245,   244,   246,   244,   247,   244,   244,   248,   248,   248,
     248,   248,   248,   248,   248,   248,   248,   248,   248,   248,
     248,   248,   248,   248,   248,   248,   248,   248,   248,   248,
     248,   248,   248,   248,   248,   248,   248,   248,   248,   248,
     248,   248,   248,   248,   248,   248,   248,   248,   248,   248,
     248,   248,   248,   249,   248,   248,   248,   248,   248,   248,
     250,   250,   251,   251,   252,   253,   253,   253,   254,   254,
     254,   254,   254,   255,   255,   255,   255,   256,   256,   256,
     257,   257,   257,   258,   258,   258,   258,   258,   258,   259,
     259,   259,   260,   260,   261,   261,   262,   262,   263,   264,
     263,   265,   266,   265,   267,   268,   269,   267,   270,   270,
     271,   271,   272,   272,   273,   273,   274,   273,   273,   275,
     273,   273,   273,   273,   273,   273,   276,   276,   276,   276,
     276,   276,   276,   276,   276,   276,   277,   276,   278,   276,
     276,   279,   276,   276,   276,   276,   280,   276,   281,   276,
     276,   282,   276,   283,   276,   276,   284,   276,   285,   276,
     276,   286,   287,   276,   276,   288,   289,   276,   276,   276,
     290,   276,   276,   276,   276,   276,   276,   276,   276,   276,
     291,   276,   276,   292,   276,   276,   276,   276,   276,   293,
     276,   276,   276,   294,   295,   276,   276,   296,   276,   276,
     276,   297,   298,   276,   276,   276,   276,   276,   276,   276,
     276,   276,   276,   276,   276,   299,   276,   276,   276,   276,
     276,   276,   276,   276,   276,   276,   276,   276,   276,   300,
     301,   276,   276,   276,   303,   302,   304,   304,   306,   305,
     307,   308,   307,   309,   311,   310,   312,   312,   313,   314,
     314,   314,   315,   315,   317,   316,   318,   316,   319,   316,
     320,   316,   321,   316,   322,   322,   322,   323,   324,   323,
     325,   323,   327,   326,   329,   330,   331,   328,   328,   332,
     333,   332,   335,   334,   336,   336,   336,   337,   337,   338,
     338,   339,   339,   339,   340,   340,   340,   340,   340,   341,
     341,   343,   342,   344,   345,   344,   346,   347,   348,   348,
     349,   349,   350,   350,   351,   351,   352,   352,   352,   353,
     353,   353,   354,   354,   354,   355,   355,   356,   356,   357,
     357,   358,   358,   359,   359,   359,   361,   362,   360,   360,
     363,   364,   360,   360,   365,   365,   367,   366,   369,   368,
     370,   371,   372,   372,   373,   373,   373,   373,   373,   373,
     373,   373,   373,   373,   373,   374,   374,   375,   375,   376,
     376,   378,   377,   377,   379,   379,   381,   380,   382,   380,
     383,   380,   380,   384,   384,   386,   385,   387,   385,   388,
     385,   385,   389,   390,   390,   390,   390,   391,   391,   391,
     391,   392,   391,   391,   393,   391,   394,   391,   395,   391,
     396,   391,   397,   397,   399,   400,   398,   401,   402,   401,
     403,   403,   405,   404,   406,   406,   408,   407,   410,   409,
     412,   411,   413,   413,   414,   415,   415,   416,   416,   417,
     418,   417,   419,   420,   421,   422,   422,   423,   423,   424,
     424,   424,   424,   424,   424,   425,   425,   425,   425,   425,
     425,   427,   428,   426,   429,   426,   426,   430,   430,   431,
     432,   432,   433,   433,   434,   434,   434,   435,   435,   435,
     436,   436,   436,   437,   437,   437,   437,   438,   438,   438,
     438,   439,   439,   440,   440,   441,   442,   441,   444,   443,
     443,   446,   447,   448,   449,   445,   445,   450,   450,   452,
     453,   454,   451,   451,   456,   457,   458,   455,   455,   459,
     459,   460,   461,   462,   464,   463,   463,   465,   465,   466,
     466,   468,   469,   470,   471,   472,   473,   474,   467,   475,
     475,   475,   476,   476,   478,   479,   477,   477,   480,   480,
     481,   481,   481,   482,   482,   482,   483,   483,   483,   483,
     483,   483,   483
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
       0,     2,     0,     2,     3,     1,     3,     2,     1,     1,
       1,     4,     1,     1,     1,     0,     1,     1,     1,     1,
       0,     3,     0,     3,     0,     3,     2,     1,     1,     1,
       1,     1,     6,     6,     4,     6,     4,     4,     4,     4,
       4,     4,     4,     4,     6,     4,     6,     8,     6,     8,
       4,     4,     4,     4,     6,     5,     4,     4,     6,     6,
       4,     6,     4,     4,     4,     4,     4,     4,     4,     4,
       3,     4,     4,     0,     5,     3,     3,     2,     2,     3,
       0,     1,     1,     3,     1,     1,     3,     4,     1,     2,
       2,     2,     2,     1,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     5,     1,
       3,     3,     1,     3,     1,     3,     1,     3,     1,     0,
       4,     1,     0,     4,     1,     0,     0,     7,     1,     3,
       1,     2,     0,     2,     1,     3,     0,     7,     3,     0,
       6,     3,     3,     3,     4,     4,     1,     2,     2,     2,
       3,     3,     4,     3,     4,     3,     0,     5,     0,     8,
       3,     0,     4,     3,     4,     3,     0,     6,     0,     8,
       3,     0,     4,     0,     6,     4,     0,     3,     0,     4,
       2,     0,     0,     5,     3,     0,     0,     5,     3,     3,
       0,     6,     5,     4,     4,     3,     2,     2,     2,     3,
       0,     6,     3,     0,     6,     4,     2,     3,     4,     0,
       3,     3,     4,     0,     0,     6,     5,     0,     5,     3,
       3,     0,     0,    11,     1,     1,     1,     1,     2,     3,
       2,     3,     2,     3,     2,     0,     4,     4,     3,     3,
       3,     2,     3,     3,     2,     3,     2,     4,     4,     0,
       0,     7,     3,     2,     0,     4,     0,     2,     0,     4,
       0,     0,     5,     0,     0,     5,     1,     1,     2,     1,
       1,     1,     1,     2,     0,     3,     0,     3,     0,     3,
       0,     3,     0,     4,     0,     1,     1,     1,     0,     4,
       0,     4,     0,     3,     0,     0,     0,     9,     3,     1,
       0,     3,     0,     3,     0,     1,     1,     0,     1,     2,
       2,     1,     3,     3,     1,     3,     3,     3,     2,     1,
       3,     0,     3,     0,     0,     3,     3,     2,     0,     2,
       3,     3,     3,     3,     1,     1,     3,     3,     3,     1,
       1,     1,     0,     2,     2,     2,     1,     2,     1,     2,
       1,     2,     1,     1,     1,     1,     0,     0,     6,     4,
       0,     0,     5,     3,     1,     1,     0,     3,     0,     4,
       0,     2,     0,     2,     3,     3,     3,     3,     3,     3,
       2,     2,     2,     4,     3,     0,     1,     0,     1,     1,
       3,     0,     3,     1,     1,     3,     0,     3,     0,     3,
       0,     3,     1,     1,     3,     0,     3,     0,     3,     0,
       3,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       2,     0,     3,     1,     0,     3,     0,     3,     0,     3,
       0,     3,     1,     3,     0,     0,     4,     2,     0,     4,
       0,     2,     0,     3,     3,     2,     0,     4,     0,     5,
       0,     2,     1,     3,     1,     2,     2,     1,     1,     1,
       0,     4,     1,     1,     1,     2,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     0,     6,     0,     4,     2,     1,     2,     2,
       1,     1,     2,     1,     1,     2,     2,     1,     2,     2,
       1,     2,     2,     1,     2,     2,     2,     1,     2,     2,
       2,     0,     2,     1,     2,     1,     0,     4,     0,     5,
       3,     0,     0,     0,     0,    13,     3,     1,     1,     0,
       0,     0,     9,     3,     0,     0,     0,     9,     3,     1,
       2,     2,     1,     1,     0,     5,     5,     1,     2,     1,
       1,     0,     0,     0,     0,     0,     0,     0,    19,     1,
       2,     2,     0,     2,     0,     0,     8,     5,     0,     2,
       1,     2,     2,     1,     2,     2,     0,     1,     1,     1,
       1,     1,     1
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
#line 541 "rwlparser.y" /* yacc.c:1646  */
    {
	  ; // we are done!
	}
#line 3618 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 547 "rwlparser.y" /* yacc.c:1646  */
    { if (bit(rwm->mxq->errbits,RWL_ERROR_SEVERE)) YYABORT; }
#line 3624 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 553 "rwlparser.y" /* yacc.c:1646  */
    {  
	    bis(rwm->m2flags, RWL_P2_INTHING);
	    if (bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
	      YYACCEPT;
	  }
#line 3634 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 559 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->m2flags, RWL_P2_INTHING); 
	    if (bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
	      YYACCEPT;
	  }
#line 3644 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 574 "rwlparser.y" /* yacc.c:1646  */
    { rwlprintallvars(rwm); }
#line 3650 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 585 "rwlparser.y" /* yacc.c:1646  */
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
#line 3669 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 601 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->raname = rwm->inam;
	      bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	      bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	      rwm->ravarn = rwladdvar(rwm, rwm->inam, RWL_TYPE_RAST, 0);
	      rwlrastbeg(rwm, rwm->raname, RWL_TYPE_RAST);
	    }
#line 3681 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 610 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->raname = rwm->inam;
	      bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	      rwm->ravarn = rwladdvar(rwm, rwm->inam, RWL_TYPE_RAST, 0);
	      rwlrastbeg(rwm, rwm->raname, RWL_TYPE_RAST);
	    }
#line 3692 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 618 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->raname = rwm->inam;
	      bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	      bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	      rwm->ravarn = rwladdvar(rwm, rwm->inam, RWL_TYPE_RAPROC, 0);
	      rwlrastbeg(rwm, rwm->raname, RWL_TYPE_RAPROC);
	    }
#line 3704 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 627 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->raname = rwm->inam;
	      rwm->ravarn = rwladdvar(rwm, rwm->inam, RWL_TYPE_RAPROC, 0);
	      rwlrastbeg(rwm, rwm->raname, RWL_TYPE_RAPROC);
	    }
#line 3714 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 638 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlrastfin(rwm, rwm->raname, (sb4) rwm->ravarn);
	    }
#line 3722 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 642 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlcancelvar(rwm, rwm->raname, (sb4) rwm->ravarn);
	      rwlrastclear(rwm);
	      rwlerror(rwm, RWL_ERROR_DECL_RAST); 
	      yyerrok;
	    }
#line 3733 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 655 "rwlparser.y" /* yacc.c:1646  */
    {rwm->raentry = rwm->sval; }
#line 3739 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 657 "rwlparser.y" /* yacc.c:1646  */
    {rwlrastadd(rwm, rwm->raentry, rwm->pval.dval); }
#line 3745 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 663 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlrastfin(rwm, rwm->raname, (sb4) rwm->ravarn);
	    }
#line 3753 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 667 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlcancelvar(rwm, rwm->raname, (sb4) rwm->ravarn);
	      rwlrastclear(rwm);
	      rwlerror(rwm, RWL_ERROR_DECL_RAPROC); 
	      yyerrok;
	    }
#line 3764 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 679 "rwlparser.y" /* yacc.c:1646  */
    {rwm->raentry = rwm->inam; }
#line 3770 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 681 "rwlparser.y" /* yacc.c:1646  */
    {rwlrastadd(rwm, rwm->raentry, rwm->pval.dval); }
#line 3776 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 686 "rwlparser.y" /* yacc.c:1646  */
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
#line 3797 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 703 "rwlparser.y" /* yacc.c:1646  */
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
#line 3857 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 759 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DATABASE_WRONG); yyerrok; }
#line 3863 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 765 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
	        if (rwm->dbsav->username)
		  rwlerror(rwm, RWL_ERROR_DBSPEC_ALREADY, "username");
		else
		  rwm->dbsav->username = rwlstrdup(rwm, rwm->pval.sval);
	      }
	    }
#line 3877 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 785 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
	        if (rwm->dbsav->username)
		  rwlerror(rwm, RWL_ERROR_DBSPEC_ALREADY, "username");
		else
		  rwm->dbsav->username = rwlstrdup(rwm, rwm->pval.sval);
	      }
	    }
#line 3891 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 795 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	        rwm->dbsav->password = rwlstrdup(rwm, rwm->pval.sval);
	    }
#line 3900 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 800 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwlcclassgood(rwm, (rwm->pval.sval)))
	      { 
	        if (rwm->dbsav)
		  rwm->dbsav->cclass = rwlstrdup(rwm, rwm->pval.sval);
	      }
	    }
#line 3912 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 808 "rwlparser.y" /* yacc.c:1646  */
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
#line 3929 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 821 "rwlparser.y" /* yacc.c:1646  */
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
#line 3964 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 852 "rwlparser.y" /* yacc.c:1646  */
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
#line 3979 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 863 "rwlparser.y" /* yacc.c:1646  */
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
#line 3994 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 874 "rwlparser.y" /* yacc.c:1646  */
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
#line 4012 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 890 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      { 
		rwm->dbsav->stmtcache = rwlcheckminval(rwm->mxq, 0, rwm->pval.ival
		  , 0, RWL_DEFAULT_STMTCACHE, (text *)"cursorcache");
		bis(rwm->dbsav->flags, RWL_DB_CCACHUSER);
	      }
	    }
#line 4025 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 899 "rwlparser.y" /* yacc.c:1646  */
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
#line 4044 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 917 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
		if (rwm->dbsav->pooltype)
		  rwlerror(rwm, RWL_ERROR_DBPOOL_ALREADY);
	        rwm->dbsav->pooltype = RWL_DBPOOL_POOLED;
		rwm->dbsav->pooltext = "drcp pooled";
	      }
	    }
#line 4058 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 927 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
		if (rwm->dbsav->pooltype)
		  rwlerror(rwm, RWL_ERROR_DBPOOL_ALREADY);
	        rwm->dbsav->pooltype = RWL_DBPOOL_DEDICATED;
		rwm->dbsav->pooltext = "dedicated";
	      }
	    }
#line 4072 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 937 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
		if (rwm->dbsav->pooltype)
		  rwlerror(rwm, RWL_ERROR_DBPOOL_ALREADY);
	        rwm->dbsav->pooltype = RWL_DBPOOL_RETHRDED;
		rwm->dbsav->pooltext = "threads dedicated";
	      }
	    }
#line 4086 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 947 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
		if (rwm->dbsav->pooltype)
		  rwlerror(rwm, RWL_ERROR_DBPOOL_ALREADY);
	        rwm->dbsav->pooltype = RWL_DBPOOL_RECONNECT;
		rwm->dbsav->pooltext = "reconnect";
	      }
	    }
#line 4100 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 964 "rwlparser.y" /* yacc.c:1646  */
    {
#if (RWL_OCI_VERSION<12)
	    rwlerror(rwm, RWL_ERROR_NOT_SUPPORTED_IN_VERSION, "statemark",RWL_OCI_VERSION);
#else
	    bis(rwm->dbsav->flags,RWL_DB_STATEMARK);
#endif
	  }
#line 4112 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 972 "rwlparser.y" /* yacc.c:1646  */
    {
#if (RWL_OCI_VERSION<12)
	    rwlerror(rwm, RWL_ERROR_NOT_SUPPORTED_IN_VERSION, "requestmark",RWL_OCI_VERSION);
#else
	    bis(rwm->dbsav->flags,RWL_DB_REQMARK);
#endif
	  }
#line 4124 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 982 "rwlparser.y" /* yacc.c:1646  */
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
#line 4139 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 993 "rwlparser.y" /* yacc.c:1646  */
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
#line 4155 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 1018 "rwlparser.y" /* yacc.c:1646  */
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
#line 4180 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 1042 "rwlparser.y" /* yacc.c:1646  */
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
#line 4205 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 1066 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      { 
		rwm->dbsav->ptimeout = rwlcheckminval(rwm->mxq, 0, rwm->pval.ival
		  , RWL_DBPOOL_CONNECT==rwm->dbsav->pooltype ? 0: 1
		  , RWL_DBPOOL_DEFAULT_TIMEOUT, (text *)"release timeout");
	      }
	    }
#line 4218 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 1079 "rwlparser.y" /* yacc.c:1646  */
    { 
#if (OCI_MAJOR_VERSION >= 12)
	      if (rwm->dbsav && rwm->pval.dval >= 0)
		rwm->dbsav->wtimeout = rwm->pval.dval;
#else
	    rwlerror(rwm, RWL_ERROR_NOT_YET_IMPL, "sessionpool wait attribute");
#endif
	    }
#line 4231 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 1093 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->dbsav && rwm->pval.dval >= 0)
	      bis(rwm->dbsav->flags, RWL_DB_SPTOBREAK);
	  }
#line 4240 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 1098 "rwlparser.y" /* yacc.c:1646  */
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
#line 4255 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 1109 "rwlparser.y" /* yacc.c:1646  */
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
#line 4271 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 1126 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprimmed(rwm);
	  }
#line 4279 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 1133 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprimmed(rwm);
	  }
#line 4287 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 1149 "rwlparser.y" /* yacc.c:1646  */
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
#line 4303 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 1161 "rwlparser.y" /* yacc.c:1646  */
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
#line 4322 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 1177 "rwlparser.y" /* yacc.c:1646  */
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
#line 4358 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 1213 "rwlparser.y" /* yacc.c:1646  */
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
#line 4373 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 1224 "rwlparser.y" /* yacc.c:1646  */
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
#line 4389 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 1237 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwm->mxq->evar[rwm->codeguess].v2val = rwm->facnt;
	      rwm->supsemerr = RWL_SUPSEM_PROC;
	    }
#line 4398 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 1245 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 4407 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 1250 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 4415 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 1257 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 4424 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 1262 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 4432 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 1269 "rwlparser.y" /* yacc.c:1646  */
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
#line 4519 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 1360 "rwlparser.y" /* yacc.c:1646  */
    {
          sb4 l = rwlfindvar(rwm->mxq, rwm->inam, RWL_VAR_NOGUESS);
          if (l>=0)
            rwlprintvar(rwm->mxq, l);
          }
#line 4529 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 1368 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m3flags, RWL_P3_MISBRACK); }
#line 4535 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 1369 "rwlparser.y" /* yacc.c:1646  */
    { bic(rwm->m3flags, RWL_P3_MISBRACK); }
#line 4541 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 1372 "rwlparser.y" /* yacc.c:1646  */
    { if (!bit(rwm->m2flags, RWL_P2_NOWARNDEP)) rwlerror(rwm, RWL_ERROR_MISSING_DECL_BRACK); }
#line 4547 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 1384 "rwlparser.y" /* yacc.c:1646  */
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
#line 4575 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 1412 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_INT; bic(rwm->addvarbits,RWL_IDENT_THRSPEC); }
#line 4581 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 1414 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_DBL; bic(rwm->addvarbits,RWL_IDENT_THRSPEC); }
#line 4587 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 1416 "rwlparser.y" /* yacc.c:1646  */
    { rwm->declslen=RWL_DEFAULT_STRLEN; rwm->dtype=RWL_TYPE_STR; bic(rwm->addvarbits,RWL_IDENT_THRSPEC); }
#line 4593 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 1418 "rwlparser.y" /* yacc.c:1646  */
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
#line 4612 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 1433 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwm->dtype = 0;
	      rwlerror(rwm, RWL_ERROR_BAD_ARGUMENT_TYPE, "file");
	    }
#line 4621 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 1438 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwm->dtype = 0;
	      rwlerror(rwm, RWL_ERROR_BAD_ARGUMENT_TYPE, "sql");
	    }
#line 4630 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1443 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwm->dtype = 0;
	      rwlerror(rwm, RWL_ERROR_BAD_ARGUMENT_TYPE, "clob");
	    }
#line 4639 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 1452 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m4flags,RWL_P4_STATSONLY); }
#line 4645 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 1454 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m4flags,RWL_P4_PROCHASSQL); }
#line 4651 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 1456 "rwlparser.y" /* yacc.c:1646  */
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
#line 4671 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 1476 "rwlparser.y" /* yacc.c:1646  */
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
#line 4689 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1491 "rwlparser.y" /* yacc.c:1646  */
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
#line 4707 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1506 "rwlparser.y" /* yacc.c:1646  */
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
#line 4726 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1522 "rwlparser.y" /* yacc.c:1646  */
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
#line 4746 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 1565 "rwlparser.y" /* yacc.c:1646  */
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
#line 4763 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1579 "rwlparser.y" /* yacc.c:1646  */
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
#line 4781 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1593 "rwlparser.y" /* yacc.c:1646  */
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
#line 4799 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1607 "rwlparser.y" /* yacc.c:1646  */
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
#line 4815 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1619 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    }
#line 4823 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1622 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_UNIFORM); }
#line 4829 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1623 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LOGB); }
#line 4835 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1624 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LOG); }
#line 4841 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1625 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_EXPB); }
#line 4847 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1626 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_EXP); }
#line 4853 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1627 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_CEIL); }
#line 4859 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1628 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_TRUNC); }
#line 4865 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1629 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_FLOOR); }
#line 4871 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1630 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ROUND); }
#line 4877 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1631 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SQRT); }
#line 4883 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1632 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SIN); }
#line 4889 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1633 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_COS); }
#line 4895 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1634 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ATAN2); }
#line 4901 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1635 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LENGTHB); }
#line 4907 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1637 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_INSTRB2); }
#line 4913 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1639 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_INSTRB3); }
#line 4919 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1641 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SUBSTRB2); }
#line 4925 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1643 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SUBSTRB3); }
#line 4931 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1644 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_GETENV); }
#line 4937 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1645 "rwlparser.y" /* yacc.c:1646  */
    { 
						    if (bit(rwm->m4flags, RWL_P4_SLASHCONVERT)) rwlexprpush0(rwm,RWL_STACK_WINSLASHF2B);
						  }
#line 4945 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1648 "rwlparser.y" /* yacc.c:1646  */
    { 
						    if (bit(rwm->m4flags, RWL_P4_SLASHCONVERT)) rwlexprpush0(rwm,RWL_STACK_WINSLASHF2BB);
						  }
#line 4953 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1651 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SYSTEM); }
#line 4959 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1653 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprpush(rwm,rwm->inam ,RWL_STACK_SYSTEM2STR);
	  }
#line 4967 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1657 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_SYSTEM_BAD); yyerrok;
	    rwlexprpush0(rwm,RWL_STACK_SYSTEM);
	  }
#line 4976 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1661 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ERLANG); }
#line 4982 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1662 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ERLANG2); }
#line 4988 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1664 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ERLANGK); }
#line 4994 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1666 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_NORMALRANDOM); }
#line 5000 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1667 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ISNULL); }
#line 5006 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1669 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ACCESS); }
#line 5012 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1671 "rwlparser.y" /* yacc.c:1646  */
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
#line 5027 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1682 "rwlparser.y" /* yacc.c:1646  */
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
#line 5042 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1693 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprpush(rwm, rwm->inam, RWL_STACK_SERVERRELEASE);
	  }
#line 5050 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1697 "rwlparser.y" /* yacc.c:1646  */
    {
	    // push RWL_T_NULL to make exprfinish work
	    rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    rwlerror(rwm, RWL_ERROR_DBFUN_NEED_IDENT, "serverrelease"); yyerrok;
	  }
#line 5060 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1703 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprpush(rwm, rwm->inam, RWL_STACK_OPENSESSIONCOUNT);
	  }
#line 5068 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1707 "rwlparser.y" /* yacc.c:1646  */
    {
	    // push RWL_T_NULL to make exprfinish work
	    rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    rwlerror(rwm, RWL_ERROR_DBFUN_NEED_IDENT, "opensessioncount"); yyerrok;
	  }
#line 5078 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1713 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprpush(rwm, rwm->inam, RWL_STACK_ACTIVESESSIONCOUNT);
	  }
#line 5086 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1717 "rwlparser.y" /* yacc.c:1646  */
    {
	    // push RWL_T_NULL to make exprfinish work
	    rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    rwlerror(rwm, RWL_ERROR_DBFUN_NEED_IDENT, "activesessioncount"); yyerrok;
	  }
#line 5096 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1723 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->sqname)
	      rwlexprpush(rwm, rwm->sqname, RWL_STACK_SQL_ID);
	  }
#line 5105 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1728 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprpush(rwm, rwm->inam, RWL_STACK_SQL_ID);
	  }
#line 5113 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1732 "rwlparser.y" /* yacc.c:1646  */
    {
	    // push RWL_T_NULL to make exprfinish work
	    rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    rwlerror(rwm, RWL_ERROR_SQLID_NEED_IDENT); yyerrok;
	  }
#line 5123 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1739 "rwlparser.y" /* yacc.c:1646  */
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
#line 5140 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1753 "rwlparser.y" /* yacc.c:1646  */
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
#line 5156 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1765 "rwlparser.y" /* yacc.c:1646  */
    {
            rwlexprpush(rwm, 0, RWL_STACK_DBSECONDS);
          }
#line 5164 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1769 "rwlparser.y" /* yacc.c:1646  */
    {
            rwlexprpush(rwm, 0, RWL_STACK_OCISECONDS);
          }
#line 5172 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1773 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (!bit(rwm->m2flags, RWL_P2_NOWARNDEP) && bit(rwm->m3flags,RWL_P3_MISBRACK))
	      rwlerror(rwm, RWL_ERROR_MISSING_EMPTY_BRACKETS, "runseconds");
	    rwlexprpush(rwm, 0, RWL_STACK_RUNSECONDS);
	  }
#line 5182 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1779 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (!bit(rwm->m2flags, RWL_P2_NOWARNDEP) && bit(rwm->m3flags,RWL_P3_MISBRACK))
	      rwlerror(rwm, RWL_ERROR_MISSING_EMPTY_BRACKETS, "epochseconds");
	    rwlexprpush(rwm, 0, RWL_STACK_EPOCHSECONDS);
	  }
#line 5192 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1798 "rwlparser.y" /* yacc.c:1646  */
    { rwm->aacnt[rwm->furlev]++; }
#line 5198 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1804 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ISNULL); }
#line 5204 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1805 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ISNOTNULL); }
#line 5210 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1811 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_MINUS); }
#line 5216 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1812 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_NOT); }
#line 5222 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1813 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_NOT); }
#line 5228 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1814 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_BITWISE_NOT); }
#line 5234 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1819 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_MUL); }
#line 5240 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1820 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_DIV); }
#line 5246 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1821 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_MOD); }
#line 5252 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1826 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ADD); }
#line 5258 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1827 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SUB); }
#line 5264 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1831 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_BITWISE_LEFT_SHIFT); }
#line 5270 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1832 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_BITWISE_RIGHT_SHIFT); }
#line 5276 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1837 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LESS); }
#line 5282 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1838 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_GREATER); }
#line 5288 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1839 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LESSEQ); }
#line 5294 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1840 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_GREATEREQ); }
#line 5300 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1841 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_BETWEEN); }
#line 5306 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1846 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_EQUAL); }
#line 5312 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1847 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_NOTEQUAL); }
#line 5318 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1852 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_BITWISE_AND); }
#line 5324 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1857 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_BITWISE_XOR); }
#line 5330 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1862 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_BITWISE_OR); }
#line 5336 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1868 "rwlparser.y" /* yacc.c:1646  */
    { 
	    // With AND (and OR) skipdep is used to mark
	    // the expression element we need to skip until
	    // in case the first condition is false (true for OR)
	    rwm->ptail->branchtype = RWL_EXP_ANDBRANCH;
	    if (rwm->skipdep++ >= UB1MAXVAL)
	      rwlsevere(rwm, "[rwlparser-andskip:%d]", rwm->skipdep);
	    rwm->ptail->skipnxt = rwm->skipdep;
	  }
#line 5350 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1878 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprpush2(rwm,0,RWL_STACK_AND, rwm->skipdep);
	    rwm->skipdep--;
	  }
#line 5359 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1887 "rwlparser.y" /* yacc.c:1646  */
    {  
	    // see comment above
	    rwm->ptail->branchtype = RWL_EXP_ORBRANCH;
	    if (rwm->skipdep++ >= UB1MAXVAL)
	      rwlsevere(rwm, "[rwlparser-orskip:%d]", rwm->skipdep);
	    rwm->ptail->skipnxt = rwm->skipdep;
	  }
#line 5371 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1895 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprpush2(rwm,0,RWL_STACK_OR ,rwm->skipdep);
	    rwm->skipdep--;
	  }
#line 5380 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1904 "rwlparser.y" /* yacc.c:1646  */
    {  
	    // With conditional execution we mark the condition
	    // with RWL_EXP_CONDBRANCH1
	    rwm->ptail->branchtype = RWL_EXP_CONDBRANCH1;
	    if (rwm->skipdep++ >= UB1MAXVAL)
	      rwlsevere(rwm, "[rwlparser-condskip:%d]", rwm->skipdep);
	    rwm->ptail->skipnxt = rwm->skipdep;
	  }
#line 5393 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1913 "rwlparser.y" /* yacc.c:1646  */
    {
	    // and the place of ':' (really ELSE) with 
	    // RWL_EXP_CONDBRANCH2
	    rwm->ptail->branchtype = RWL_EXP_CONDBRANCH2;
	    rwm->ptail->skipnxt = rwm->skipdep;
	  }
#line 5404 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1920 "rwlparser.y" /* yacc.c:1646  */
    {  
	    // And the actual conditional is the "end if" place
	    rwlexprpush2(rwm,0,RWL_STACK_CONDITIONAL, rwm->skipdep);
	    rwm->skipdep--;
	  }
#line 5414 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1929 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_CONCAT); }
#line 5420 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1934 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_CONCAT); }
#line 5426 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1945 "rwlparser.y" /* yacc.c:1646  */
    { rwm->supsemerr = 0; }
#line 5432 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 1950 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
	    {
	      rwm->ifdirdep = 0; // since we may be skipping over $else, $endif
	      YYACCEPT;
	    }
	  }
#line 5444 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 1958 "rwlparser.y" /* yacc.c:1646  */
    { yyerrok; }
#line 5450 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1960 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_COMMAND_NOT_LOCAL, "threads"); yyerrok; }
#line 5456 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 1967 "rwlparser.y" /* yacc.c:1646  */
    { yyerrok; }
#line 5462 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 1969 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_COMMAND_NOT_LOCAL, "run"); yyerrok; }
#line 5468 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 1973 "rwlparser.y" /* yacc.c:1646  */
    { yyerrok; }
#line 5474 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 1975 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_NOT_LOCAL, "database"); yyerrok; }
#line 5480 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 1977 "rwlparser.y" /* yacc.c:1646  */
    { yyerrok ; }
#line 5486 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 1980 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_NOT_LOCAL, "random procedure array"); yyerrok; }
#line 5492 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 1983 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_NOT_LOCAL, "random string array"); yyerrok; }
#line 5498 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 1988 "rwlparser.y" /* yacc.c:1646  */
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
#line 5531 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 2017 "rwlparser.y" /* yacc.c:1646  */
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
#line 5550 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 2032 "rwlparser.y" /* yacc.c:1646  */
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
#line 5565 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 2049 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_LOB); yyerrok; }
#line 5571 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 2056 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_INT); yyerrok; }
#line 5577 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 2062 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_DBL); yyerrok; }
#line 5583 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 2064 "rwlparser.y" /* yacc.c:1646  */
    { 
		rwm->declslen=RWL_DEFAULT_STRLEN;
	      }
#line 5591 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 2070 "rwlparser.y" /* yacc.c:1646  */
    {
	      if (RWL_TYPE_CANCELLED == rwm->pval.vtype)
		rwm->declslen = 1; // kind of a kludge, but this prevents doube
				   // error reporting if using local variable
	      else
	      {
		rwm->declslen = rwm->pval.ival;
	      }
	    }
#line 5605 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 2084 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_STR); yyerrok; }
#line 5611 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 2086 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dtype=RWL_TYPE_FILE;
	    //if (rwm->codename)
	    //  rwlerror(rwm, RWL_ERROR_NOT_LOCAL, "file");
	  }
#line 5621 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 2095 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_FILE); yyerrok; }
#line 5627 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 2100 "rwlparser.y" /* yacc.c:1646  */
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
#line 5652 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 2123 "rwlparser.y" /* yacc.c:1646  */
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
#line 5679 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 2147 "rwlparser.y" /* yacc.c:1646  */
    { if (!rwm->rslerror) rwlcodeadd0(rwm, RWL_CODE_ELSE); }
#line 5685 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 2150 "rwlparser.y" /* yacc.c:1646  */
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
#line 5710 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 2173 "rwlparser.y" /* yacc.c:1646  */
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
#line 5752 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 2215 "rwlparser.y" /* yacc.c:1646  */
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
#line 5824 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 2284 "rwlparser.y" /* yacc.c:1646  */
    { 
		  rwlerror(rwm, RWL_ERROR_LOOP);
		  rwm->rsllityp[rwm->rsldepth] = RWL_LI_BAD;
		  yyerrok;
		}
#line 5834 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 2291 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SYSTEM); }
#line 5840 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 2294 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprpush(rwm,rwm->inam ,RWL_STACK_SYSTEM2STR);
	  }
#line 5848 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 2299 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_SYSTEM_BAD); yyerrok;
	    rwlexprclear(rwm);
	  }
#line 5857 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 2304 "rwlparser.y" /* yacc.c:1646  */
    {
		/* start a dummy assignment such that expression gets executed */
		rwm->assignvar = RWL_DUMMY_VAR;
		rwm->assignoper = RWL_T_ASSIGN;
		rwlexprbeg(rwm);
	      }
#line 5868 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 2313 "rwlparser.y" /* yacc.c:1646  */
    {
		/* start expression for assign */
		rwm->assignvar = rwm->inam;
		rwlexprbeg(rwm);
	      }
#line 5878 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 2322 "rwlparser.y" /* yacc.c:1646  */
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
#line 5894 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 2334 "rwlparser.y" /* yacc.c:1646  */
    {
	        rwm->assignvar = rwm->codename;
		rwlexprbeg(rwm);
	      }
#line 5903 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 2339 "rwlparser.y" /* yacc.c:1646  */
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
#line 5936 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 2368 "rwlparser.y" /* yacc.c:1646  */
    { 
		  rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		  rwlexprclear(rwm);
		  yyerrok;
		}
#line 5946 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 2375 "rwlparser.y" /* yacc.c:1646  */
    {
	        rwm->assignvar = rwm->codename;
		rwlexprbeg(rwm);
	      }
#line 5955 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 2380 "rwlparser.y" /* yacc.c:1646  */
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
#line 5988 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 2410 "rwlparser.y" /* yacc.c:1646  */
    { 
		  rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		  rwlexprclear(rwm);
		  yyerrok;
		}
#line 5998 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 2418 "rwlparser.y" /* yacc.c:1646  */
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
#line 6016 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 2432 "rwlparser.y" /* yacc.c:1646  */
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
#line 6031 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 2446 "rwlparser.y" /* yacc.c:1646  */
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
#line 6049 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 2462 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (!rwm->codename)
	    {
	      rwlerror(rwm, RWL_ERROR_NOT_DONE_IN_MAIN, "modify database leak");
	      goto dontmoddbpool;
	    }
	    else
	      rwlcodeadd0(rwm, RWL_CODE_MODDBLEAK);
	  }
#line 6063 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 2473 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->codename)
	      rwlcodeadd0(rwm, RWL_CODE_SESRELDROP);
	  }
#line 6072 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 2479 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->codename)
	      rwlcodeadd0(rwm, RWL_CODE_SESRELDROP);
	  }
#line 6081 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 2485 "rwlparser.y" /* yacc.c:1646  */
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
#line 6096 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 2497 "rwlparser.y" /* yacc.c:1646  */
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
#line 6111 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 2509 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->codename)
	      rwlcodeadd0(rwm, RWL_CODE_SHIFT);
	    else
	      if (!bit(rwm->m2flags, RWL_P2_NOEXEC))
		rwlshiftdollar(rwm->mxq, &rwm->loc);
	  }
#line 6123 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 2518 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->codename)
	      rwlcodeadd0(rwm, RWL_CODE_GETRUSAGE);
	    else
	      if (!bit(rwm->m2flags, RWL_P2_NOEXEC))
		rwlgetrusage(rwm->mxq, 0);
	  }
#line 6135 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 2527 "rwlparser.y" /* yacc.c:1646  */
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
#line 6150 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 2540 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_MODIFY); yyerrok; }
#line 6156 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 2545 "rwlparser.y" /* yacc.c:1646  */
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
#line 6190 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 2577 "rwlparser.y" /* yacc.c:1646  */
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
#line 6279 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 2662 "rwlparser.y" /* yacc.c:1646  */
    {
	      /* This code can cause lookahead */
	      rwlerror(rwm, RWL_ERROR_BAD_ARG_LIST);
	      rwlexprclear(rwm);
	      yyerrok;
	    }
#line 6290 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 2669 "rwlparser.y" /* yacc.c:1646  */
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
#line 6309 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 2688 "rwlparser.y" /* yacc.c:1646  */
    { rwm->supsemerr = RWL_SUPSEM_EMBSQL; }
#line 6315 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 2694 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m3flags, RWL_P3_IMMPARSEFOR); }
#line 6321 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 2696 "rwlparser.y" /* yacc.c:1646  */
    { bic(rwm->m3flags, RWL_P3_IMMPARSEFOR); }
#line 6327 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 317:
#line 2702 "rwlparser.y" /* yacc.c:1646  */
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
#line 6416 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 2789 "rwlparser.y" /* yacc.c:1646  */
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
#line 6449 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 2819 "rwlparser.y" /* yacc.c:1646  */
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
#line 6485 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 2852 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_NO_FILE_FOR_FFLUSH);
	    yyerrok;
	  }
#line 6494 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 2859 "rwlparser.y" /* yacc.c:1646  */
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
#line 6521 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 2884 "rwlparser.y" /* yacc.c:1646  */
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
#line 6555 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 2916 "rwlparser.y" /* yacc.c:1646  */
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
#line 6578 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 2944 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_FILE_FOR_WRITE);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6589 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 2953 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_STRING_FOR_SPRINTF);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6600 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 2962 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6611 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 2972 "rwlparser.y" /* yacc.c:1646  */
    {
	      // Note that we do not document this syntax without comma
	      if (rwm->filenam)
		rwlerror(rwm, RWL_ERROR_COMMA_IS_RECOMMENDED, rwm->filenam
		, bit(rwm->mflags,RWL_P_PRINTLINE) ? "writeline" : "write");
	    }
#line 6622 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 338:
#line 2984 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6633 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 339:
#line 2992 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_FILE_FOR_WRITE);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6644 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 340:
#line 3000 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_FILE_FOR_WRITE);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6655 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 341:
#line 3008 "rwlparser.y" /* yacc.c:1646  */
    { 
		if (rwm->codename)
		  rwlcodeadd0(rwm, RWL_CODE_NEWLINE);
		else
		  fputs(bit(rwm->m4flags, RWL_P4_CRNLWRITELINE) ? "\r\n" : "\n", stdout);
		bic(rwm->mflags,RWL_P_PRINTLINE|RWL_P_PRINTBLANK);
	      }
#line 6667 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 343:
#line 3018 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6678 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 345:
#line 3026 "rwlparser.y" /* yacc.c:1646  */
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
#line 6693 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 346:
#line 3037 "rwlparser.y" /* yacc.c:1646  */
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
#line 6732 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 347:
#line 3073 "rwlparser.y" /* yacc.c:1646  */
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
#line 6772 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 348:
#line 3110 "rwlparser.y" /* yacc.c:1646  */
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
#line 6815 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 3150 "rwlparser.y" /* yacc.c:1646  */
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
#line 6836 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 350:
#line 3167 "rwlparser.y" /* yacc.c:1646  */
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
#line 6862 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 351:
#line 3191 "rwlparser.y" /* yacc.c:1646  */
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
#line 6884 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 352:
#line 3210 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlerror(rwm, RWL_ERROR_UNEXPECTED_AFTER_IDENTIFIER);
	      yyerrok;
	    }
#line 6893 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 353:
#line 3217 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_MISSING_SEMICOLON); yyerrok; }
#line 6899 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 354:
#line 3223 "rwlparser.y" /* yacc.c:1646  */
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
#line 6927 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 355:
#line 3247 "rwlparser.y" /* yacc.c:1646  */
    {
	  rwm->lobwritedata = rwlexprfinish(rwm);
	  rwm->loboffset = 0;
	}
#line 6936 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 357:
#line 3256 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->loboffset = rwlexprfinish(rwm);
	  }
#line 6944 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 3263 "rwlparser.y" /* yacc.c:1646  */
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
#line 6971 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 3286 "rwlparser.y" /* yacc.c:1646  */
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
#line 6997 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 361:
#line 3312 "rwlparser.y" /* yacc.c:1646  */
    {
	  rwm->lobreadlength = rwlexprfinish(rwm);
	}
#line 7005 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 362:
#line 3316 "rwlparser.y" /* yacc.c:1646  */
    {
	  rwm->loboffset = rwlexprfinish(rwm);
	}
#line 7013 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 363:
#line 3322 "rwlparser.y" /* yacc.c:1646  */
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
#line 7163 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 364:
#line 3472 "rwlparser.y" /* yacc.c:1646  */
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
#line 7277 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 365:
#line 3584 "rwlparser.y" /* yacc.c:1646  */
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
#line 7314 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 366:
#line 3620 "rwlparser.y" /* yacc.c:1646  */
    {  
	    // This syntax is not documented
	    bic(rwm->m3flags, RWL_P3_CLHEADFOR);
	    rwlerror(rwm, RWL_ERROR_LEGACY_CONTROLLOOP_SYNTAX);
	  }
#line 7324 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 367:
#line 3625 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m3flags, RWL_P3_CLHEADFOR); }
#line 7330 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 368:
#line 3629 "rwlparser.y" /* yacc.c:1646  */
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
#line 7347 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 369:
#line 3645 "rwlparser.y" /* yacc.c:1646  */
    { if (bit(rwm->m3flags, RWL_P3_CLHEADFOR))
	      rwlerror(rwm, RWL_ERROR_MIX_LEGACY_CLOOP);
	  }
#line 7355 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 370:
#line 3649 "rwlparser.y" /* yacc.c:1646  */
    { if (bit(rwm->m3flags, RWL_P3_CLHEADFOR))
	      rwlerror(rwm, RWL_ERROR_MIX_LEGACY_CLOOP);
	  }
#line 7363 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 371:
#line 3653 "rwlparser.y" /* yacc.c:1646  */
    { if (!bit(rwm->m3flags, RWL_P3_CLHEADFOR))
	      rwlerror(rwm, RWL_ERROR_MIX_LEGACY_CLOOP);
	  }
#line 7371 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 374:
#line 3664 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7377 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 375:
#line 3666 "rwlparser.y" /* yacc.c:1646  */
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
#line 7394 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 376:
#line 3678 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7400 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 377:
#line 3680 "rwlparser.y" /* yacc.c:1646  */
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
#line 7419 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 378:
#line 3694 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7425 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 379:
#line 3696 "rwlparser.y" /* yacc.c:1646  */
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
#line 7444 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 380:
#line 3710 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7450 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 381:
#line 3712 "rwlparser.y" /* yacc.c:1646  */
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
#line 7467 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 382:
#line 3724 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7473 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 383:
#line 3726 "rwlparser.y" /* yacc.c:1646  */
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
#line 7503 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 384:
#line 3755 "rwlparser.y" /* yacc.c:1646  */
    { rwm->ynqueue = 0; }
#line 7509 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 385:
#line 3756 "rwlparser.y" /* yacc.c:1646  */
    { rwm->ynqueue = RWL_QUEUE_EVERY; }
#line 7515 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 386:
#line 3757 "rwlparser.y" /* yacc.c:1646  */
    { rwm->ynqueue = RWL_NOQUEUE_EVERY; }
#line 7521 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 387:
#line 3761 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->scname = rwm->inam; 
	    bic(rwm->m2flags, RWL_P2_AT|RWL_P2_ATDEFAULT);
	  }
#line 7530 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 388:
#line 3766 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->scname = rwm->inam;
	    bic(rwm->m2flags, RWL_P2_AT|RWL_P2_ATDEFAULT);
	  }
#line 7539 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 389:
#line 3771 "rwlparser.y" /* yacc.c:1646  */
    { 
	      bis(rwm->m2flags, RWL_P2_ATDEFAULT);
	    }
#line 7547 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 390:
#line 3775 "rwlparser.y" /* yacc.c:1646  */
    {
	      bic(rwm->m2flags, RWL_P2_AT|RWL_P2_ATDEFAULT);
	      // lookahead may have consumed the next identifier
	      rwm->scname = (yychar == RWL_T_IDENTIFIER)
	        ? rwm->previnam
	        : rwm->inam;
	    }
#line 7559 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 391:
#line 3783 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->dbname = rwm->inam; 
	      bis(rwm->m2flags, RWL_P2_AT);
	    }
#line 7568 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 392:
#line 3792 "rwlparser.y" /* yacc.c:1646  */
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
#line 7587 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 393:
#line 3807 "rwlparser.y" /* yacc.c:1646  */
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
#line 7619 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 394:
#line 3839 "rwlparser.y" /* yacc.c:1646  */
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
#line 7637 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 395:
#line 3854 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->m3flags, RWL_P3_IMMEDSQL); 
	    bis(rwm->sqsav->flags, RWL_SQLFLAG_IBUSE);
	    bis(rwm->sqsav->flags, RWL_SQLFLAG_IDUSE);
	    if (bit(rwm->m3flags,RWL_P3_IMPLCASE))
	      bis(rwm->sqsav->flags, RWL_SQLFLAG_ICASE);
	  }
#line 7649 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 396:
#line 3863 "rwlparser.y" /* yacc.c:1646  */
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
#line 7690 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 398:
#line 3901 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_SQL_WRONG) ;
	    yyerrok;
	  }
#line 7699 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 400:
#line 3909 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7705 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 401:
#line 3910 "rwlparser.y" /* yacc.c:1646  */
    {
	    if ((rwm->msqlstk = rwlexprfinish(rwm)))
	      bis(rwm->m3flags, RWL_P3_IMMISDYN); // now dynamic
	    else
	    {
	      rwm->mxq->evar[rwm->sqsavvarn].vtype = RWL_TYPE_CANCELLED;
	      rwm->mxq->evar[rwm->sqsavvarn].stype = "cancelled (sql)";
	    }
	  }
#line 7719 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 402:
#line 3922 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->sqllino = rwm->loc.lineno;
	  }
#line 7727 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 406:
#line 3931 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "sql") ;
	  }
#line 7735 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 409:
#line 3942 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bis(rwm->m2flags, RWL_P2_ATDEFAULT);
	  }
#line 7743 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 410:
#line 3946 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dbname = rwm->inam; 
	    bis(rwm->m2flags, RWL_P2_AT);
	  }
#line 7752 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 411:
#line 3954 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->m2flags, RWL_P2_AT|RWL_P2_ATDEFAULT);
	  }
#line 7760 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 412:
#line 3958 "rwlparser.y" /* yacc.c:1646  */
    { 
	      bis(rwm->m2flags, RWL_P2_ATDEFAULT);
	    }
#line 7768 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 413:
#line 3962 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->dbname = rwm->inam; 
	      bis(rwm->m2flags, RWL_P2_AT);
	    }
#line 7777 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 415:
#line 3972 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->dbname = 0;
	      bis(rwm->m2flags, RWL_P2_ATDEFAULT); /* explict choose standard DB */
	    }
#line 7786 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 416:
#line 3978 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->dbname = rwm->inam;
	      bis(rwm->m2flags, RWL_P2_AT); /* named DB */
	    }
#line 7795 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 417:
#line 3983 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_NO_DATABASE_NAME); yyerrok; }
#line 7801 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 418:
#line 3985 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_MISSING_SEMICOLON); yyerrok; }
#line 7807 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 421:
#line 3993 "rwlparser.y" /* yacc.c:1646  */
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
#line 7837 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 422:
#line 4019 "rwlparser.y" /* yacc.c:1646  */
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
#line 7914 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 424:
#line 4096 "rwlparser.y" /* yacc.c:1646  */
    {
		  rwm->assignvar = rwm->inam;
		  rwlexprbeg(rwm);
		}
#line 7923 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 425:
#line 4101 "rwlparser.y" /* yacc.c:1646  */
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
#line 7974 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 430:
#line 4164 "rwlparser.y" /* yacc.c:1646  */
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
#line 7993 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 431:
#line 4179 "rwlparser.y" /* yacc.c:1646  */
    {
              rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
              rwlexprclear(rwm);
              rwm->rslerror++; // to prevent attempting else/endif code generation
              yyerrok;
            }
#line 8004 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 432:
#line 4188 "rwlparser.y" /* yacc.c:1646  */
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
#line 8023 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 433:
#line 4203 "rwlparser.y" /* yacc.c:1646  */
    {
              rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
              rwlexprclear(rwm);
              rwm->rslerror++; // to prevent attempting else/endif code generation
              yyerrok;
            }
#line 8034 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 434:
#line 4212 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_LEGACY_WHILE_SYNTAX);
	  }
#line 8042 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 435:
#line 4216 "rwlparser.y" /* yacc.c:1646  */
    {
	    bis(rwm->rslflags[rwm->rsldepth], RWL_RSLFLAG_WHILOP);
	  }
#line 8050 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 436:
#line 4222 "rwlparser.y" /* yacc.c:1646  */
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
#line 8071 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 437:
#line 4239 "rwlparser.y" /* yacc.c:1646  */
    {
              rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
              rwlexprclear(rwm);
              rwm->rslerror++; // to prevent attempting else/endif code generation
              yyerrok;
            }
#line 8082 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 438:
#line 4246 "rwlparser.y" /* yacc.c:1646  */
    {
              rwlerror(rwm, RWL_ERROR_UNEXPECTED_KEYWORD, "loop");
              rwlexprclear(rwm);
              rwm->rslerror++; // to prevent attempting else/endif code generation
              yyerrok;
            }
#line 8093 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 443:
#line 4263 "rwlparser.y" /* yacc.c:1646  */
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
#line 8113 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 444:
#line 4279 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (rwm->codename)
	      rwlerror(rwm, RWL_ERROR_NO_LOCAL_SUMGLOB);
	    else
	      bis(rwm->addvarbits,RWL_IDENT_GLOBAL);
	  }
#line 8124 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 445:
#line 4289 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dtype=RWL_TYPE_STR;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 8134 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 446:
#line 4295 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->dtype=RWL_TYPE_STR;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 8143 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 447:
#line 4303 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dtype=RWL_TYPE_INT;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 8153 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 448:
#line 4309 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->dtype=RWL_TYPE_INT;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 8162 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 449:
#line 4317 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dtype=RWL_TYPE_DBL;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 8172 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 450:
#line 4323 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->dtype=RWL_TYPE_DBL;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 8181 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 451:
#line 4331 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 8190 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 452:
#line 4336 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 8198 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 453:
#line 4342 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_CLOB; }
#line 8204 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 454:
#line 4343 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_BLOB; }
#line 8210 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 455:
#line 4344 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_NCLOB; }
#line 8216 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 456:
#line 4348 "rwlparser.y" /* yacc.c:1646  */
    { rwm->sqllino = rwm->loc.lineno;}
#line 8222 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 457:
#line 4349 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	    bic(rwm->m2flags, RWL_P2_BADSQLFILTXT);
	    bic(rwm->m3flags, RWL_P3_IMMEDSQL); 
	    bic(rwm->m3flags, RWL_P3_IMMISDYN); 
	    rwm->sqllen = 0;
	    rwm->sqname = rwm->inam;
	  }
#line 8236 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 459:
#line 4360 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_SQL_WRONG); yyerrok;
	  }
#line 8244 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 460:
#line 4363 "rwlparser.y" /* yacc.c:1646  */
    { rwm->sqllino = rwm->loc.lineno;}
#line 8250 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 461:
#line 4364 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bic(rwm->m2flags, RWL_P2_BADSQLFILTXT);
	    bic(rwm->m3flags, RWL_P3_IMMEDSQL); 
	    bic(rwm->m3flags, RWL_P3_IMMISDYN); 
	    rwm->sqllen = 0;
	    rwm->sqname = rwm->inam;
	  }
#line 8263 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 463:
#line 4374 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_SQL_WRONG); yyerrok;
	  }
#line 8271 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 466:
#line 4384 "rwlparser.y" /* yacc.c:1646  */
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
#line 8321 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 467:
#line 4431 "rwlparser.y" /* yacc.c:1646  */
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
#line 8356 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 468:
#line 4465 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->m4flags, RWL_P4_AMPERSAND) && rwldynarcheck(rwm))
	    {
	      rwlerror(rwm, RWL_ERROR_CANNOT_AMPREP_HERE, "named sql declaration");
	      rwm->mxq->evar[rwm->sqsavvarn].vtype = RWL_TYPE_CANCELLED;
	      rwm->mxq->evar[rwm->sqsavvarn].stype = "cancelled (sql)";
	    }
	  }
#line 8369 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 470:
#line 4478 "rwlparser.y" /* yacc.c:1646  */
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
#line 8447 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 471:
#line 4556 "rwlparser.y" /* yacc.c:1646  */
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
#line 8544 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 475:
#line 4659 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_BIND); yyerrok; }
#line 8550 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 477:
#line 4663 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_BINDOUT); yyerrok; }
#line 8556 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 479:
#line 4667 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DEFINE); yyerrok; }
#line 8562 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 480:
#line 4669 "rwlparser.y" /* yacc.c:1646  */
    {
		  bis(rwm->sqsav->flags, RWL_SQFLAG_IGNERR);
		}
#line 8570 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 481:
#line 4673 "rwlparser.y" /* yacc.c:1646  */
    {
		  bic(rwm->sqsav->flags, RWL_SQFLAG_NOCURC);
		}
#line 8578 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 482:
#line 4677 "rwlparser.y" /* yacc.c:1646  */
    {
		  bis(rwm->sqsav->flags, RWL_SQFLAG_NOCURC);
		}
#line 8586 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 483:
#line 4682 "rwlparser.y" /* yacc.c:1646  */
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
#line 8608 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 484:
#line 4701 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ARRAY); yyerrok; }
#line 8614 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 485:
#line 4706 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_MISSING_SEMICOLON_IN_SQL); }
#line 8620 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 488:
#line 4712 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->sqsav->flags, RWL_SQFLAG_DYNAMIC))
	      rwlerror(rwm, RWL_ERROR_DEFINE_ARRAY_NOT_DYNAMIC);
	    else
	      bis(rwm->sqsav->flags, RWL_SQFLAG_ARRAYD);
	  }
#line 8631 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 491:
#line 4726 "rwlparser.y" /* yacc.c:1646  */
    {
	  // Note that it would not be too hard to replace
	  // the integer constant here by an expression
	  // which would make sense as that is what
	  // can be done with modify sql for dynamic sql
	  rwm->bdpos = rwm->ival; rwm->bdtyp=RWL_DEFINE;
	}
#line 8643 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 493:
#line 4735 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->sqsav->flags, RWL_SQLFLAG_IDUSE))
	      rwlerror(rwm, RWL_ERROR_IMPLICIT_ALREADY, "define");
	    bis(rwm->sqsav->flags, RWL_SQLFLAG_IDUSE);
	  }
#line 8653 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 496:
#line 4749 "rwlparser.y" /* yacc.c:1646  */
    { rwm->bdname = rwm->sval; rwm->bdtyp=RWL_BINDOUT_NAME; }
#line 8659 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 498:
#line 4751 "rwlparser.y" /* yacc.c:1646  */
    { 
	    // We could also use expression here, but we would
	    // of course need to check it was either a non-negative number
	    // or a string starting with :
	    rwm->bdpos = bit(rwm->m2flags,RWL_P2_BINDZERO) ? rwm->ival+1 : rwm->ival;
	    rwm->bdtyp=RWL_BINDOUT_POS; 
	  }
#line 8671 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 500:
#line 4759 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->bdtyp=RWL_BINDOUT_SAME;
	  }
#line 8679 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 502:
#line 4763 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_IMPLICIT_NOT_BINDOUT);
	  }
#line 8687 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 505:
#line 4774 "rwlparser.y" /* yacc.c:1646  */
    { rwm->bdname = rwm->sval; rwm->bdtyp=RWL_BIND_NAME; }
#line 8693 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 507:
#line 4776 "rwlparser.y" /* yacc.c:1646  */
    { 
	    // same comment as above
	    rwm->bdpos = bit(rwm->m2flags,RWL_P2_BINDZERO) ? rwm->ival+1 : rwm->ival;
	    rwm->bdtyp=RWL_BIND_POS; 
	  }
#line 8703 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 509:
#line 4782 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->bdtyp=RWL_BIND_SAME;
	  }
#line 8711 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 511:
#line 4786 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->sqsav->flags, RWL_SQLFLAG_IBUSE))
	      rwlerror(rwm, RWL_ERROR_IMPLICIT_ALREADY, "bind");
	    bis(rwm->sqsav->flags, RWL_SQLFLAG_IBUSE);
	  }
#line 8721 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 512:
#line 4795 "rwlparser.y" /* yacc.c:1646  */
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
#line 8819 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 513:
#line 4891 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->inam = RWL_DUMMY_VAR;
	    rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2, "function", "runseconds", "bind/define");
	  }
#line 8828 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 514:
#line 4896 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->inam = RWL_DUMMY_VAR;
	    rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2, "function", "epochseconds", "bind/define");
	  }
#line 8837 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 515:
#line 4900 "rwlparser.y" /* yacc.c:1646  */
    { bic(rwm->m2flags,RWL_P2_BINDRAW); }
#line 8843 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 516:
#line 4901 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m2flags,RWL_P2_BINDRAW); }
#line 8849 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 517:
#line 4905 "rwlparser.y" /* yacc.c:1646  */
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
#line 8870 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 518:
#line 4922 "rwlparser.y" /* yacc.c:1646  */
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
#line 8891 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 519:
#line 4939 "rwlparser.y" /* yacc.c:1646  */
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
#line 8912 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 520:
#line 4956 "rwlparser.y" /* yacc.c:1646  */
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
#line 8939 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 521:
#line 4978 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 8945 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 522:
#line 4979 "rwlparser.y" /* yacc.c:1646  */
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
#line 8980 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 523:
#line 5010 "rwlparser.y" /* yacc.c:1646  */
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
#line 9005 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 524:
#line 5030 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 9011 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 525:
#line 5031 "rwlparser.y" /* yacc.c:1646  */
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
#line 9037 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 526:
#line 5053 "rwlparser.y" /* yacc.c:1646  */
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
#line 9056 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 528:
#line 5068 "rwlparser.y" /* yacc.c:1646  */
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
#line 9075 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 530:
#line 5083 "rwlparser.y" /* yacc.c:1646  */
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
#line 9094 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 534:
#line 5103 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 9100 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 535:
#line 5105 "rwlparser.y" /* yacc.c:1646  */
    { rwm->msqlstk = rwlexprfinish(rwm); }
#line 9106 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 536:
#line 5107 "rwlparser.y" /* yacc.c:1646  */
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
#line 9161 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 537:
#line 5160 "rwlparser.y" /* yacc.c:1646  */
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
#line 9195 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 538:
#line 5190 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->mdbsphi = rwm->mdbsplo = rwlexprfinish(rwm);
	    if (!rwm->mdbsplo)
	      rwlexprclear(rwm);
	  }
#line 9205 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 539:
#line 5196 "rwlparser.y" /* yacc.c:1646  */
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
#line 9238 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 541:
#line 5228 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (!(rwm->mdbsphi = rwlexprfinish(rwm)))
	      rwlexprclear(rwm);
	  }
#line 9247 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 542:
#line 5235 "rwlparser.y" /* yacc.c:1646  */
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
#line 9271 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 544:
#line 5258 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m3flags, RWL_P3_SPFCONCAT); }
#line 9277 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 545:
#line 5259 "rwlparser.y" /* yacc.c:1646  */
    { bic(rwm->m3flags, RWL_P3_SPFCONCAT); }
#line 9283 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 546:
#line 5263 "rwlparser.y" /* yacc.c:1646  */
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
#line 9307 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 547:
#line 5283 "rwlparser.y" /* yacc.c:1646  */
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
#line 9325 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 548:
#line 5301 "rwlparser.y" /* yacc.c:1646  */
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
#line 9348 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 550:
#line 5323 "rwlparser.y" /* yacc.c:1646  */
    {
	  rwm->conhead = rwm->contail = 0;
	}
#line 9356 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 551:
#line 5327 "rwlparser.y" /* yacc.c:1646  */
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
#line 9381 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 554:
#line 5355 "rwlparser.y" /* yacc.c:1646  */
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
#line 9404 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 555:
#line 5376 "rwlparser.y" /* yacc.c:1646  */
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
#line 9429 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 556:
#line 5398 "rwlparser.y" /* yacc.c:1646  */
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
#line 9454 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 557:
#line 5422 "rwlparser.y" /* yacc.c:1646  */
    {  
	    bic(rwm->mflags,RWL_P_PRINTLINE);
	    bic(rwm->mflags,RWL_P_PRINTTOFILE);
	  }
#line 9463 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 558:
#line 5427 "rwlparser.y" /* yacc.c:1646  */
    {  
	    bis(rwm->mflags,RWL_P_PRINTLINE);
	    bic(rwm->mflags,RWL_P_PRINTTOFILE);
	  }
#line 9472 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 560:
#line 5435 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->mflags,RWL_P_PRINTBLANK); }
#line 9478 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 562:
#line 5440 "rwlparser.y" /* yacc.c:1646  */
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
#line 9540 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 563:
#line 5501 "rwlparser.y" /* yacc.c:1646  */
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
#line 9576 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 564:
#line 5536 "rwlparser.y" /* yacc.c:1646  */
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
#line 9591 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 565:
#line 5551 "rwlparser.y" /* yacc.c:1646  */
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
#line 9644 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 566:
#line 5600 "rwlparser.y" /* yacc.c:1646  */
    { 
		rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 9654 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 568:
#line 5610 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_MISSING_SEMICOLON);
	    yyerrok;
	  }
#line 9663 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 569:
#line 5617 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_ASSIGN; }
#line 9669 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 570:
#line 5618 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_GREATEQ; }
#line 9675 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 571:
#line 5619 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_RSHIFTASSIGN; }
#line 9681 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 572:
#line 5620 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_LESSEQ; }
#line 9687 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 573:
#line 5621 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_PIPEFROM; }
#line 9693 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 574:
#line 5622 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_PIPETO; }
#line 9699 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 576:
#line 5626 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_APPEND; }
#line 9705 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 577:
#line 5627 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_ASNADD; }
#line 9711 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 578:
#line 5628 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_ASNSUB; }
#line 9717 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 579:
#line 5629 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_ASNBIS; }
#line 9723 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 580:
#line 5630 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_ASNBIC; }
#line 9729 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 581:
#line 5637 "rwlparser.y" /* yacc.c:1646  */
    {
		rwl_estack *estk;
		rwlexprpush(rwm, rwm->assignvar, RWL_STACK_ASN);
		estk = rwlexprfinish(rwm);
		rwlcodeaddp(rwm, RWL_CODE_ASSIGN, estk);
	      }
#line 9740 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 582:
#line 5644 "rwlparser.y" /* yacc.c:1646  */
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
#line 9770 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 584:
#line 5670 "rwlparser.y" /* yacc.c:1646  */
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
#line 9787 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 586:
#line 5684 "rwlparser.y" /* yacc.c:1646  */
    { 
		rwlerror(rwm, RWL_ERROR_LOOP);
		rwlexprclear(rwm);
		// prevent attempting endloop code generation
		rwm->loopvar[rwm->rsldepth] = 0;
		rwm->rsllityp[rwm->rsldepth] = RWL_LI_BAD;
		bic(rwm->rslflags[rwm->rsldepth], RWL_RSLFLAG_MAYBRK);
		yyerrok;
	      }
#line 9801 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 589:
#line 5703 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwl_lilist *thisli = rwlalloc(rwm, sizeof(rwl_lilist));
	    rwlexprpush(rwm, rwm->loopvar[rwm->rsldepth], RWL_STACK_ASN);
	    thisli->listk = rwlexprfinish(rwm);
	    rwm->rsllitail[rwm->rsldepth]->linxt = thisli;
	    rwm->rsllitail[rwm->rsldepth] = thisli;
	  }
#line 9813 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 592:
#line 5723 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 9822 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 593:
#line 5728 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 9830 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 596:
#line 5737 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "execute") ; }
#line 9836 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 599:
#line 5744 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "loop") ; }
#line 9842 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 602:
#line 5751 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "if") ; yyerrok; }
#line 9848 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 605:
#line 5758 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (0 != rwlstrcmp(rwm->inam, rwm->sqname))
	      rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END2, "sql", rwm->sqname);
	  }
#line 9857 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 606:
#line 5763 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END2, "sql", rwm->sqname) ; yyerrok; }
#line 9863 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 608:
#line 5769 "rwlparser.y" /* yacc.c:1646  */
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
#line 9878 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 609:
#line 5780 "rwlparser.y" /* yacc.c:1646  */
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
#line 9893 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 610:
#line 5791 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (bit(rwm->rslflags[rwm->rsldepth-1], RWL_RSLFLAG_WHILOP))
	      rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "loop") ;
	    else
	      rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "while") ;
	    yyerrok;
	  }
#line 9905 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 611:
#line 5802 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->cursorand = 0;
	  }
#line 9913 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 612:
#line 5807 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->cursorand = rwlexprfinish(rwm);
	  }
#line 9921 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 614:
#line 5814 "rwlparser.y" /* yacc.c:1646  */
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
#line 9980 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 615:
#line 5871 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->loc.errlin = 0;
	    rwm->sqlfile = 0; /* not from a file */
	  }
#line 9989 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 616:
#line 5876 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprbeg(rwm);
	  }
#line 9997 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 617:
#line 5880 "rwlparser.y" /* yacc.c:1646  */
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
#line 10082 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 618:
#line 5963 "rwlparser.y" /* yacc.c:1646  */
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
#line 10106 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 619:
#line 5983 "rwlparser.y" /* yacc.c:1646  */
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
#line 10133 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 620:
#line 6007 "rwlparser.y" /* yacc.c:1646  */
    { 
		rwlerror(rwm, RWL_ERROR_BAD_READLINE);
		yyerrok;
	      }
#line 10142 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 621:
#line 6014 "rwlparser.y" /* yacc.c:1646  */
    { rwm->reg_estk = rwm->str_estk = rwm->sub_estk = 0; }
#line 10148 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 622:
#line 6016 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->reg_estk = rwlexprfinish(rwm);
	  }
#line 10156 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 623:
#line 6020 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->str_estk = rwlexprfinish(rwm);
	  }
#line 10164 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 624:
#line 6024 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->sub_estk = rwlexprfinish(rwm);
	  }
#line 10172 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 625:
#line 6028 "rwlparser.y" /* yacc.c:1646  */
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
#line 10215 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 626:
#line 6067 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprclear(rwm);
	    rwlerror(rwm, RWL_ERROR_BAD_REGEX);
	    yyerrok;
	  }
#line 10225 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 627:
#line 6076 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->m2flags, RWL_P2_REGEXSUBG);
	  }
#line 10233 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 628:
#line 6080 "rwlparser.y" /* yacc.c:1646  */
    {
	    bis(rwm->m2flags, RWL_P2_REGEXSUBG);
	  }
#line 10241 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 629:
#line 6086 "rwlparser.y" /* yacc.c:1646  */
    { rwm->reg_estk = rwm->str_estk = 0; }
#line 10247 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 630:
#line 6088 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->reg_estk = rwlexprfinish(rwm);
	  }
#line 10255 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 631:
#line 6092 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->str_estk = rwlexprfinish(rwm);
	    rwm->idlist = rwm->idtail = 0;
	  }
#line 10264 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 632:
#line 6097 "rwlparser.y" /* yacc.c:1646  */
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
#line 10301 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 633:
#line 6131 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprclear(rwm);
	    rwlerror(rwm, RWL_ERROR_BAD_REGEX);
	    yyerrok;
	  }
#line 10311 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 634:
#line 6140 "rwlparser.y" /* yacc.c:1646  */
    { rwm->reg_estk = rwm->str_estk = 0; }
#line 10317 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 635:
#line 6142 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->reg_estk = rwlexprfinish(rwm);
	  }
#line 10325 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 636:
#line 6146 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->str_estk = rwlexprfinish(rwm);
	    rwm->idlist = rwm->idtail = 0;
	  }
#line 10334 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 637:
#line 6151 "rwlparser.y" /* yacc.c:1646  */
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
#line 10371 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 638:
#line 6185 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprclear(rwm);
	    rwlerror(rwm, RWL_ERROR_BAD_REGEX);
	    yyerrok;
	  }
#line 10381 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 641:
#line 6198 "rwlparser.y" /* yacc.c:1646  */
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
#line 10426 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 642:
#line 6241 "rwlparser.y" /* yacc.c:1646  */
    {
		/* start a dummy assignment such that the system expression gets executed */
		rwm->assignvar = RWL_DUMMY_VAR;
		rwm->assignoper = RWL_T_ASSIGN;
		rwlexprbeg(rwm);
	      }
#line 10437 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 643:
#line 6250 "rwlparser.y" /* yacc.c:1646  */
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
#line 10457 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 644:
#line 6275 "rwlparser.y" /* yacc.c:1646  */
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
#line 10472 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 645:
#line 6287 "rwlparser.y" /* yacc.c:1646  */
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
#line 10495 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 646:
#line 6306 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ILLEGAL_THREAD); yyerrok; }
#line 10501 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 651:
#line 6320 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->cqnstart = rwm->cqnstop = 0.0;
	    rwm->cqnnow = rwlclock(rwm->mxq,0);
	  }
#line 10510 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 652:
#line 6325 "rwlparser.y" /* yacc.c:1646  */
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
#line 10538 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 653:
#line 6350 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->cqnstop = rwm->pval.dval;
	    if (rwm->cqnstop < rwm->cqnstart || rwm->cqnstop < rwm->cqnnow)
	    {
	      rwlerror(rwm, RWL_ERROR_CQN_STOP_BEFORE_START, rwm->cqnstop, rwm->cqnstart, rwm->cqnnow);
	      rwm->cqnat = 0;
	    }
	  }
#line 10551 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 654:
#line 6359 "rwlparser.y" /* yacc.c:1646  */
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
#line 10607 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 655:
#line 6411 "rwlparser.y" /* yacc.c:1646  */
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
#line 10636 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 656:
#line 6436 "rwlparser.y" /* yacc.c:1646  */
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
#line 10668 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 657:
#line 6464 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlcodeaddu(rwm, RWL_CODE_CQNISCB, 0); // Is in callback
	    rwlcodetail(rwm);
	  }
#line 10677 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 661:
#line 6475 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "querynotification");
	    yyerrok;
	  }
#line 10686 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 663:
#line 6484 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->cqnstart = rwm->pval.dval;
	  }
#line 10694 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 664:
#line 6491 "rwlparser.y" /* yacc.c:1646  */
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
#line 10714 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 665:
#line 6509 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlcodetail(rwm);
	  }
#line 10722 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 667:
#line 6514 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ILLEGAL_THREAD); yyerrok; }
#line 10728 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 669:
#line 6519 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->mythr->dbnam = rwm->inam;
	  }
#line 10736 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 672:
#line 6528 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "threads") ; }
#line 10742 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 675:
#line 6536 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "run") ; }
#line 10748 "rwlparser.tab.c" /* yacc.c:1646  */
    break;


#line 10752 "rwlparser.tab.c" /* yacc.c:1646  */
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
