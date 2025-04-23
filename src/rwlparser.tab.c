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
#line 165 "rwlparser.y" /* yacc.c:339  */

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
  , {"RWL_T_RAWNAME", "'raw name'"}
  , {"RWL_T_READ", "'read'"}
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
  // and report if (prev)inam do not exist
  if (!strncmp(in, syer, sizeof(syer)-1))
  {
    sb4 l;
    bic(rwm->m4flags, RWL_P4_YYSYNDIDREP);
    if (rwm->previnam)
    {
      l = rwlfindvar2(rwm->mxq , rwm->previnam , RWL_VAR_NOGUESS, rwm->codename);
      if (l<0)
	bis(rwm->m4flags, RWL_P4_YYSYNDIDREP);
    }
    if (rwm->inam)
    {
      l = rwlfindvar2(rwm->mxq , rwm->inam , RWL_VAR_NOGUESS, rwm->codename);
      if (l<0)
	bis(rwm->m4flags, RWL_P4_YYSYNDIDREP);
    }

    in += sizeof(syer)-1;
  }

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


#line 395 "rwlparser.tab.c" /* yacc.c:339  */

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
    RWL_T_READ = 296,
    RWL_T_RANDOM = 297,
    RWL_T_FILE = 298,
    RWL_T_WRITE = 299,
    RWL_T_WRITELINE = 300,
    RWL_T_BINDOUT = 301,
    RWL_T_GETRUSAGE = 302,
    RWL_T_DRCP = 303,
    RWL_T_SESSIONPOOL = 304,
    RWL_T_RECONNECT = 305,
    RWL_T_DEDICATED = 306,
    RWL_T_DEFAULT = 307,
    RWL_T_RESULTS = 308,
    RWL_T_ASSIGN = 309,
    RWL_T_LOOP = 310,
    RWL_T_ALL = 311,
    RWL_T_NULL = 312,
    RWL_T_ISNULL = 313,
    RWL_T_SUM = 314,
    RWL_T_IS = 315,
    RWL_T_NOT = 316,
    RWL_T_LESSEQ = 317,
    RWL_T_GREATEQ = 318,
    RWL_T_NOTEQ = 319,
    RWL_T_AND = 320,
    RWL_T_OR = 321,
    RWL_T_BETWEEN = 322,
    RWL_T_CONCAT = 323,
    RWL_T_IF = 324,
    RWL_T_THEN = 325,
    RWL_T_ELSE = 326,
    RWL_T_NEVER = 327,
    RWL_T_APPEND = 328,
    RWL_T_IGNOREERROR = 329,
    RWL_T_ELSEIF = 330,
    RWL_T_EXECUTE = 331,
    RWL_T_WAIT = 332,
    RWL_T_COMMIT = 333,
    RWL_T_ROLLBACK = 334,
    RWL_T_EVERY = 335,
    RWL_T_ASNADD = 336,
    RWL_T_ASNSUB = 337,
    RWL_T_STOP = 338,
    RWL_T_START = 339,
    RWL_T_COUNT = 340,
    RWL_T_AT = 341,
    RWL_T_BREAK = 342,
    RWL_T_RETURN = 343,
    RWL_T_ABORT = 344,
    RWL_T_MODIFY = 345,
    RWL_T_CURSORCACHE = 346,
    RWL_T_NOCURSORCACHE = 347,
    RWL_T_LEAK = 348,
    RWL_T_SHIFT = 349,
    RWL_T_WHEN = 350,
    RWL_T_STATISTICS = 351,
    RWL_T_NOSTATISTICS = 352,
    RWL_T_FUNCTION = 353,
    RWL_T_PUBLIC = 354,
    RWL_T_OCIPING = 355,
    RWL_T_QUEUE = 356,
    RWL_T_NOQUEUE = 357,
    RWL_T_PRIVATE = 358,
    RWL_T_BEGIN = 359,
    RWL_T_RELEASE = 360,
    RWL_T_SYSTEM = 361,
    RWL_T_CLOB = 362,
    RWL_T_BLOB = 363,
    RWL_T_NCLOB = 364,
    RWL_T_READLOB = 365,
    RWL_T_WRITELOB = 366,
    RWL_T_RAW = 367,
    RWL_T_EXIT = 368,
    RWL_T_SUBSTR = 369,
    RWL_T_SUBSTRB = 370,
    RWL_T_LENGTH = 371,
    RWL_T_LENGTHB = 372,
    RWL_T_SQL_ID = 373,
    RWL_T_GETENV = 374,
    RWL_T_LOG = 375,
    RWL_T_EXP = 376,
    RWL_T_ROUND = 377,
    RWL_T_ACTIVESESSIONCOUNT = 378,
    RWL_T_REQUESTMARK = 379,
    RWL_T_SPRINTF = 380,
    RWL_T_OPENSESSIONCOUNT = 381,
    RWL_T_STATEMARK = 382,
    RWL_T_REGEXSUB = 383,
    RWL_T_REGEXSUBG = 384,
    RWL_T_SERVERRELEASE = 385,
    RWL_T_SQL = 386,
    RWL_T_SQL_TEXT = 387,
    RWL_T_INSTR = 388,
    RWL_T_INSTRB = 389,
    RWL_T_CONNECTIONPOOL = 390,
    RWL_T_CONNECTIONCLASS = 391,
    RWL_T_UNSIGNED = 392,
    RWL_T_HEXADECIMAL = 393,
    RWL_T_OCTAL = 394,
    RWL_T_FPRINTF = 395,
    RWL_T_ENCODE = 396,
    RWL_T_DECODE = 397,
    RWL_T_STRING_CONST = 398,
    RWL_T_IDENTIFIER = 399,
    RWL_T_INTEGER_CONST = 400,
    RWL_T_DOUBLE_CONST = 401,
    RWL_T_PRINTF = 402,
    RWL_T_PIPEFROM = 403,
    RWL_T_PIPETO = 404,
    RWL_T_RSHIFTASSIGN = 405,
    RWL_T_GLOBAL = 406,
    RWL_T_QUERYNOTIFICATION = 407,
    RWL_T_NORMALRANDOM = 408,
    RWL_T_STATISTICSONLY = 409,
    RWL_T_CEIL = 410,
    RWL_T_TRUNC = 411,
    RWL_T_FLOOR = 412,
    RWL_T_LOBPREFETCH = 413,
    RWL_T_SIN = 414,
    RWL_T_COS = 415,
    RWL_T_ATAN2 = 416,
    RWL_T_WINSLASHF2B = 417,
    RWL_T_WINSLASHF2BB = 418,
    RWL_T_RAWNAME = 419,
    RWL_T_BITWISE_LEFT_SHIFT = 420,
    RWL_T_BITWISE_RIGHT_SHIFT = 421,
    RWL_T_ASNBIS = 422,
    RWL_T_ASNBIC = 423,
    RWL_T_UMINUS = 424
  };
#endif

/* Value type.  */
#if ! defined RWLYSTYPE && ! defined RWLYSTYPE_IS_DECLARED

union RWLYSTYPE
{
#line 504 "rwlparser.y" /* yacc.c:355  */

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

#line 627 "rwlparser.tab.c" /* yacc.c:355  */
};

typedef union RWLYSTYPE RWLYSTYPE;
# define RWLYSTYPE_IS_TRIVIAL 1
# define RWLYSTYPE_IS_DECLARED 1
#endif



int rwlyparse (rwl_main *rwm);

#endif /* !YY_RWLY_RWLPARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 643 "rwlparser.tab.c" /* yacc.c:358  */

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
#define YYLAST   5410

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  189
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  307
/* YYNRULES -- Number of rules.  */
#define YYNRULES  706
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1287

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   424

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   180,     2,     2,     2,   179,   171,     2,
     184,   185,   177,   176,   186,   175,     2,   178,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   188,   183,
     173,   172,   174,   187,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   170,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   169,     2,   181,     2,     2,     2,
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
     165,   166,   167,   168,   182
};

#if RWLYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   566,   566,   573,   583,   593,   595,   594,   610,   611,
     612,   614,   617,   624,   626,   643,   642,   652,   651,   660,
     659,   669,   668,   678,   683,   692,   693,   697,   696,   703,
     708,   716,   717,   721,   720,   728,   727,   800,   805,   806,
     818,   819,   822,   823,   826,   836,   841,   849,   862,   893,
     904,   916,   915,   931,   941,   940,   958,   968,   978,   988,
    1001,  1002,  1005,  1013,  1023,  1034,  1049,  1050,  1054,  1055,
    1056,  1059,  1083,  1107,  1119,  1121,  1120,  1133,  1134,  1139,
    1143,  1150,  1164,  1181,  1188,  1195,  1196,  1200,  1201,  1204,
    1217,  1216,  1275,  1287,  1286,  1307,  1312,  1319,  1324,  1331,
    1417,  1418,  1422,  1431,  1432,  1436,  1437,  1441,  1442,  1445,
    1446,  1447,  1451,  1452,  1456,  1484,  1486,  1488,  1490,  1505,
    1507,  1522,  1527,  1532,  1537,  1545,  1546,  1548,  1550,  1569,
    1570,  1584,  1598,  1613,  1656,  1670,  1684,  1698,  1710,  1714,
    1715,  1716,  1717,  1718,  1719,  1720,  1721,  1722,  1723,  1724,
    1725,  1726,  1727,  1728,  1730,  1732,  1734,  1736,  1737,  1740,
    1743,  1744,  1748,  1753,  1754,  1755,  1757,  1759,  1760,  1762,
    1773,  1784,  1788,  1794,  1798,  1804,  1808,  1814,  1819,  1823,
    1831,  1829,  1856,  1860,  1864,  1870,  1876,  1880,  1881,  1885,
    1886,  1890,  1895,  1896,  1897,  1902,  1903,  1904,  1905,  1906,
    1910,  1911,  1912,  1913,  1917,  1918,  1919,  1922,  1923,  1924,
    1928,  1929,  1930,  1931,  1932,  1933,  1937,  1938,  1939,  1943,
    1944,  1948,  1949,  1953,  1954,  1958,  1960,  1959,  1977,  1979,
    1978,  1994,  1996,  2005,  1995,  2020,  2021,  2025,  2026,  2036,
    2037,  2041,  2049,  2052,  2051,  2058,  2061,  2060,  2064,  2066,
    2068,  2070,  2073,  2079,  2108,  2123,  2136,  2138,  2139,  2143,
    2145,  2149,  2151,  2156,  2155,  2162,  2161,  2173,  2178,  2177,
    2184,  2183,  2195,  2200,  2199,  2210,  2214,  2238,  2264,  2262,
    2290,  2288,  2399,  2408,  2407,  2411,  2410,  2415,  2421,  2420,
    2430,  2429,  2438,  2451,  2456,  2450,  2484,  2492,  2497,  2491,
    2526,  2533,  2549,  2548,  2561,  2577,  2588,  2594,  2600,  2612,
    2624,  2634,  2644,  2657,  2643,  2664,  2668,  2673,  2677,  2684,
    2700,  2702,  2704,  2704,  2705,  2708,  2710,  2712,  2709,  2714,
    2718,  2717,  2834,  2867,  2875,  2918,  2874,  2970,  2971,  2972,
    2973,  2975,  2976,  2984,  2985,  2993,  2994,  3003,  3006,  3005,
    3014,  3016,  3024,  3032,  3041,  3049,  3051,  3058,  3059,  3070,
    3106,  3143,  3184,  3201,  3183,  3243,  3265,  3272,  3310,  3399,
    3398,  3430,  3431,  3439,  3438,  3486,  3488,  3487,  3497,  3648,
    3647,  3795,  3801,  3804,  3820,  3824,  3828,  3835,  3836,  3840,
    3840,  3854,  3854,  3870,  3870,  3886,  3886,  3900,  3900,  3931,
    3932,  3933,  3936,  3942,  3941,  3951,  3950,  3968,  3967,  4015,
    4030,  4039,  4014,  4076,  4084,  4085,  4085,  4098,  4097,  4104,
    4105,  4106,  4112,  4113,  4117,  4121,  4129,  4133,  4137,  4145,
    4146,  4152,  4158,  4160,  4163,  4164,  4169,  4168,  4270,  4272,
    4271,  4349,  4353,  4357,  4358,  4362,  4377,  4386,  4401,  4410,
    4414,  4420,  4437,  4444,  4454,  4455,  4456,  4460,  4461,  4477,
    4487,  4493,  4501,  4507,  4515,  4521,  4529,  4535,  4543,  4548,
    4555,  4556,  4557,  4561,  4562,  4561,  4572,  4576,  4577,  4576,
    4586,  4593,  4594,  4597,  4597,  4678,  4676,  4690,  4767,  4865,
    4866,  4870,  4871,  4874,  4875,  4878,  4879,  4882,  4886,  4890,
    4894,  4913,  4919,  4921,  4924,  4925,  4934,  4935,  4940,  4939,
    4948,  4958,  4959,  4963,  4963,  4965,  4964,  4973,  4972,  4976,
    4983,  4984,  4988,  4988,  4990,  4989,  4996,  4995,  4999,  5008,
    5109,  5114,  5119,  5120,  5129,  5146,  5163,  5180,  5203,  5203,
    5234,  5255,  5255,  5278,  5277,  5293,  5292,  5308,  5307,  5324,
    5325,  5328,  5330,  5328,  5385,  5416,  5415,  5452,  5453,  5461,
    5460,  5484,  5485,  5489,  5488,  5527,  5526,  5549,  5549,  5576,
    5577,  5580,  5601,  5623,  5647,  5652,  5660,  5661,  5661,  5665,
    5714,  5775,  5810,  5824,  5828,  5836,  5885,  5894,  5895,  5903,
    5904,  5905,  5906,  5907,  5908,  5911,  5912,  5913,  5914,  5915,
    5916,  5923,  5930,  5921,  5956,  5956,  5969,  5982,  5983,  5987,
    6000,  6001,  6008,  6013,  6020,  6024,  6030,  6031,  6032,  6037,
    6038,  6039,  6044,  6045,  6046,  6051,  6052,  6053,  6058,  6063,
    6064,  6075,  6086,  6097,  6101,  6108,  6109,  6166,  6172,  6171,
    6259,  6258,  6324,  6332,  6334,  6338,  6342,  6331,  6384,  6393,
    6397,  6404,  6406,  6410,  6403,  6448,  6458,  6460,  6464,  6457,
    6502,  6511,  6512,  6554,  6555,  6558,  6601,  6610,  6636,  6635,
    6666,  6672,  6673,  6676,  6677,  6681,  6686,  6711,  6720,  6772,
    6797,  6825,  6680,  6833,  6834,  6835,  6843,  6844,  6852,  6870,
    6851,  6874,  6878,  6879,  6886,  6887,  6888,  6894,  6895,  6896,
    6901,  6902,  6903,  6904,  6905,  6906,  6907
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
  "RWL_T_READLINE", "RWL_T_READ", "RWL_T_RANDOM", "RWL_T_FILE",
  "RWL_T_WRITE", "RWL_T_WRITELINE", "RWL_T_BINDOUT", "RWL_T_GETRUSAGE",
  "RWL_T_DRCP", "RWL_T_SESSIONPOOL", "RWL_T_RECONNECT", "RWL_T_DEDICATED",
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
  "RWL_T_RAWNAME", "RWL_T_BITWISE_LEFT_SHIFT", "RWL_T_BITWISE_RIGHT_SHIFT",
  "RWL_T_ASNBIS", "RWL_T_ASNBIC", "'|'", "'^'", "'&'", "'='", "'<'", "'>'",
  "'-'", "'+'", "'*'", "'/'", "'%'", "'!'", "'~'", "RWL_T_UMINUS", "';'",
  "'('", "')'", "','", "'?'", "':'", "$accept", "rwlyparse",
  "partterminator", "terminator", "programelementlist", "$@1",
  "programelement", "globaldeclaration", "$@2", "$@3", "$@4", "$@5",
  "ranstringspec", "ranstringlist", "ranstringentry", "$@6",
  "ranidentifierspec", "ranidentifierlist", "ranidentifierentry", "$@7",
  "databasedeclaration", "$@8", "maybejustusername", "maybedbspeclist",
  "dbspeclist", "dbspec", "$@9", "$@10", "maybemarks", "eithermark",
  "maybemaxpoolsize", "releaselist", "poolrelease", "poolreleasecount",
  "poolreleaseevery", "poolreleaseidle", "maybewait", "$@11",
  "maybethentimeoutaction", "thenprocedurenamehead",
  "thenprocedurenametail", "compiletime_expression",
  "compiletime_concatenation", "subroutinedeclaration", "isaccepted",
  "functionhead", "$@12", "procedurehead", "$@13", "maybeprivatefunction",
  "maybeprivateprocedure", "codebody", "printvarlist", "printvarelement",
  "identifierorprocname", "identifierorrawname", "maybeemptybrackets",
  "maybearguments", "formalargumentlist", "formalargument", "argumenttype",
  "maybestatistics", "codeterminator", "identifier_or_constant", "$@14",
  "maybe_expression_list", "expression_list", "countexpressions",
  "primary_expression", "unary_expression", "multiplication", "addition",
  "bitwise_shift", "comparison", "equality", "bitwise_and", "bitwise_xor",
  "bitwise_or", "logicaland", "$@15", "logicalor", "$@16", "conditional",
  "$@17", "$@18", "expression", "concatenation", "statementlist",
  "goodorbadstatement", "$@19", "$@20", "statement", "$@21", "$@22",
  "$@23", "$@24", "$@25", "$@26", "$@27", "$@28", "$@29", "$@30", "$@31",
  "$@32", "$@33", "$@34", "$@35", "$@36", "$@37", "$@38", "$@39", "$@40",
  "$@41", "$@42", "$@43", "$@44", "$@45", "$@46", "$@47",
  "beginofprocedurecall", "endofprocedurecall", "writelobhead", "$@48",
  "maybewritelobtail", "readlobhead", "$@49", "maybereadlobtail", "$@50",
  "docallonesql", "dosqlloop", "$@51", "controlloopheader",
  "controllooplistandend", "controlloopheadend", "controllooplist",
  "controlloopoption", "$@52", "$@53", "$@54", "$@55", "$@56",
  "maybequeue", "callsql", "$@57", "$@58", "embeddedsql", "$@59",
  "immediatesql", "$@60", "$@61", "$@62", "getdynamicorinlineimmsql",
  "$@63", "immediatesqlheader", "$@64", "immediatesqlendsqlisok",
  "immediatesqltail", "immediateatclause", "executehead",
  "maybeatdatabase", "declinitlist", "declinit", "$@65", "declinitassign",
  "$@66", "ifstatements", "elseifstatements", "maybeelseiflist", "ifhead",
  "elseifhead", "whileheadkeyword", "whilehead", "whileheadwrongkeyword",
  "maybethreadsattr", "maybeprivateraw", "maybeprivatestring",
  "maybeprivateinteger", "maybeprivatedouble", "maybeprivatelob",
  "eitherlobtype", "sqldeclaration", "$@67", "$@68", "$@69", "$@70",
  "namedsqldeclaration", "dynamicsqlbody", "$@71", "staticsqlbody", "$@72",
  "addsqlvariable", "parsesqlspecifications", "sqlspeclist", "sqlspec",
  "musthaveterminator", "maybearraydefine", "definelist", "defineelement",
  "$@73", "bindoutlist", "bindoutelement", "$@74", "$@75", "$@76",
  "bindlist", "bindelement", "$@77", "$@78", "$@79", "bdidentifier",
  "bdidentname", "modsqlstatement", "$@80", "$@81", "$@82", "$@83", "$@84",
  "modsqlbdlist", "modsqlbd", "$@85", "$@86", "moddbstatement", "$@87",
  "moddbsespmaybedotdot", "printf", "$@88", "sprintfheader", "sprintf",
  "$@89", "fprintf", "$@90", "handlefprintflist", "$@91", "printflist",
  "printfelement", "write", "print", "writelist", "$@92", "writeelement",
  "pwterminator", "pfterminator", "readorreadline", "assignrightside",
  "assignterminator", "declassignoperator", "assignoperator",
  "loopiterator", "$@93", "$@94", "$@95", "commaconcatenationlist",
  "commaconcatenation", "loopiteratorrecover", "maybeprivatefile",
  "mayberaw", "executeterminator", "loopterminator", "ifterminator",
  "sqlterminator", "whileterminator", "maybeandexpression",
  "getstaticsqltext", "getinlinesql", "$@96", "readfromfile", "$@97",
  "regexsub", "$@98", "$@99", "$@100", "$@101", "regexsuborsubg",
  "regextract", "$@102", "$@103", "$@104", "regex", "$@105", "$@106",
  "$@107", "rawnameorreadlist", "readlist", "readlistelement",
  "systemstart", "systemfinish", "threadexecution", "$@108", "threadlistp",
  "threadorcqn", "cqnthread", "$@109", "$@110", "$@111", "$@112", "$@113",
  "$@114", "$@115", "cqnterminator", "maybecqnstart", "thread", "$@116",
  "$@117", "maybedatabase", "threadsterminator", "runterminator",
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
     415,   416,   417,   418,   419,   420,   421,   422,   423,   124,
      94,    38,    61,    60,    62,    45,    43,    42,    47,    37,
      33,   126,   424,    59,    40,    41,    44,    63,    58
};
# endif

#define YYPACT_NINF -991

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-991)))

#define YYTABLE_NINF -690

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -991,   125,   144,  -991,  2982,   -74,    51,  -991,   -74,   296,
    -991,  -991,  -991,  1355,   295,  1906,  1976,  -991,    92,  2046,
      88,  -991,  -991,   475,   130,   138,   200,  -991,   -74,  2116,
     139,  5226,   -74,   -74,   -54,  1601,   -74,   132,   -74,   -74,
    -991,   -74,   489,   345,  -991,  -991,  -991,  -991,     6,   182,
     301,  2186,    69,  -991,  -991,    58,  -991,   141,   175,  -991,
    -991,  -991,  -991,  -991,  -991,    56,   331,   331,   145,   146,
    -991,  -991,   215,   318,   215,  1426,  -991,    77,  -991,  -991,
      50,    36,   109,   115,   157,  -991,    75,    86,   348,   -74,
     -74,  1174,  1671,   158,   162,   495,  -991,  -991,  2256,  -991,
    -991,  5226,  -991,  -991,   -74,  -991,  -991,  -991,   -74,  -991,
     -26,  -991,  -991,   -74,  -991,  5226,   -74,    67,   419,   488,
     318,   422,   -74,  5226,   -74,  5226,   554,    30,   510,   200,
     398,   401,   404,   411,   424,   434,   443,   446,   200,  -991,
     449,  5226,   452,   455,   465,   472,   477,   478,   481,   483,
     490,   493,   494,   496,  -991,   498,  -991,  -991,   508,   511,
     512,   514,   518,   520,   522,   524,   526,  5226,  5226,  5226,
    5226,   612,  -991,  -991,   399,   240,   259,   367,   265,   502,
     523,   515,   616,   -10,  -991,   327,   -74,   215,   690,   692,
     -74,  -991,   -74,  -991,   532,   -74,  -991,  2326,   648,   418,
      17,   236,  -991,  -991,   -74,  -991,   -74,  -991,  5226,  -991,
     -74,   420,   577,  -991,  -991,  -991,  -991,  -991,  -991,  -991,
     499,  -991,   301,   164,  -991,   679,   -74,   540,   541,   542,
     544,   -74,  5226,   -74,   589,  -991,   718,   663,   596,  -991,
     -74,   555,   215,   601,   521,  -991,   -74,   -74,   -74,  -991,
     215,  -991,  -991,  -991,  -991,   -74,  -991,   -74,  -991,   652,
    -991,  -991,   278,  -991,   215,  -991,   723,    40,  -991,    53,
    -991,  2703,  3114,   -74,  5226,   603,   -74,   272,  5226,  -991,
     -74,   603,   -74,   603,   -74,  -991,   337,  -991,   -74,   -74,
     215,  -991,  -991,   -74,  -991,  -991,  -991,  -991,  -991,   -74,
    5016,  -991,  5016,  -991,   -74,  -991,  5086,  -991,   347,  -991,
     -74,  -991,   -74,   603,  -991,   -74,  5226,    25,  -991,  5226,
    -991,    70,  -991,  -991,  5226,    63,   563,  -991,  -991,  -991,
     697,  -991,  -991,  5226,   700,   488,  -991,  -991,  -991,  -991,
    -991,  -991,   599,  2396,  -991,   292,  -991,  -991,  -991,  -991,
    -991,  -991,  -991,  -991,  -991,  -991,  -991,   567,   571,  5226,
    5226,  5226,  5226,  5226,  5226,  -991,  5226,  -991,  5226,  5226,
    5226,    45,  5226,  5226,  5226,  5226,   167,   169,    54,  5226,
    -991,  5226,  5226,  5226,  5226,  5226,  5226,  5226,  5226,  5226,
    -991,  -991,  -991,   572,   352,  5226,  5226,  5226,  5226,  5226,
    5226,  5226,  5226,  5226,  5226,  5226,  5226,  5226,  5226,  5226,
    5226,  5226,  -991,  -991,  -991,  5226,  -991,  -991,  -991,   614,
     617,  -991,  -991,  -991,  -991,   -74,    87,  -991,  -991,  -991,
    -991,  -991,  -991,  -991,  -991,  -991,  -991,   -74,   -74,  5226,
    -991,  -991,   739,   740,   754,   631,  -991,  -991,  -991,  5226,
     -74,  -991,  5226,   -74,  -991,  -991,  -991,  -991,  -991,  -991,
    -991,  -991,  -991,  -991,  -991,   725,   634,  -991,  -991,  -991,
    -991,  -991,  -991,  -991,  -991,  -991,  -991,  -991,  -991,  2326,
    -991,  5226,  -991,  -991,  -991,  -991,  -991,  3246,  -991,  -991,
     595,  -991,   595,  -991,  -991,  -991,  -991,  -991,  -991,  -991,
     316,  -991,   701,  -991,  -991,  -991,  -991,  -991,  -991,  -991,
    -991,  -991,  -991,  5226,  -991,  3378,   -74,   -74,  -991,  -991,
    -991,   101,   333,   338,   322,   497,  -991,  -991,   705,    57,
    -991,   600,   720,   337,  -991,  -991,  -991,   604,   603,  -991,
     337,  -991,   337,  -991,   509,   603,  -991,  -991,  -991,  -991,
    -991,  5226,  -991,   347,   347,  -991,  -991,  -991,  -991,  -991,
     605,  -991,   337,  -991,  -991,   -74,   646,   -74,   311,  -991,
    -991,  -991,   611,   -74,    78,  -991,  -991,  -991,  5226,  2466,
     488,   720,  -991,  -991,   700,   605,   613,   615,  -991,  -991,
    -991,  -991,  -991,  -991,   -74,   778,  -991,   714,    66,  -991,
    -991,  -991,   142,   619,     0,   227,   229,     7,   250,    31,
     620,   618,   622,   623,  -991,   624,   136,   147,   251,   625,
     626,   630,   632,   633,   636,   637,   639,   640,  5226,    68,
     270,   282,   287,   288,   289,    94,   642,   644,  -991,  -991,
     745,  -991,  -991,  -991,   399,   399,   240,   240,   259,   259,
     276,   259,   259,   367,   367,   265,   502,   523,  5226,  5226,
    5226,  -991,  -991,  -991,  -991,   -74,  -991,  -991,   -74,  -991,
    -991,   -74,    83,   594,   675,   681,  -991,  -991,   686,   720,
    -991,  5226,   720,  -991,   -74,  4806,  -991,  -991,  -991,  -991,
    -991,   645,  -991,  -991,   160,   746,   257,  5226,  5226,  5226,
    5226,  -991,  -991,  -991,  -991,  -991,  -991,  -991,  -991,  5226,
    -991,   215,    64,  -991,  -991,  3510,   -74,   -74,  -991,   -74,
    -991,   -74,   834,   835,   -74,  2536,  -991,  -991,   -74,   -74,
     -74,  -991,  -991,  -991,  -991,   801,   337,  -991,  -991,  -991,
    -991,  -991,   645,  -991,  -991,  5016,   -21,   -74,   653,  -991,
    -991,   654,  -991,  -991,  -991,  -991,  5156,  5226,  5226,   791,
    -991,  5226,  -991,  -991,  -991,  -991,  5226,  5226,  5226,   -74,
     311,  -991,    63,  -991,   -74,   -74,   215,  -991,    41,   812,
    -991,   700,  -991,  -991,   488,  5226,  5226,  -991,   599,   758,
     702,   -74,   -74,  -991,  -991,  -991,  5226,  5226,  -991,  -991,
    5226,  -991,   660,  -991,   703,  5226,  -991,  -991,  -991,  -991,
    -991,  5226,  -991,  5226,  -991,  -991,  -991,  -991,  -991,  -991,
    -991,  -991,  -991,  5226,   664,  5226,  -991,  -991,  -991,  -991,
    -991,  5226,  -991,  -991,  -991,  5226,   515,   616,   662,    23,
      43,  -991,  -991,  -991,  5226,  5226,   -74,  -991,  -991,  -991,
     772,  -991,  -991,  -991,  -991,  -991,  -991,  -991,  -991,  4806,
    -991,   666,  -991,  -991,   215,  -991,  -991,  -991,  -991,  -991,
    -991,  -991,  5226,   669,  -991,  -991,  -991,  -991,     4,  -991,
    -991,   264,  -991,   710,   500,  -991,  -991,  -991,  -991,   720,
     720,   720,   720,  3642,  5226,   -74,  -991,  -991,   -74,   -74,
    -991,  -991,    53,  -991,  -991,  -991,  -991,  5226,  -991,   -74,
     -74,  -991,   785,   545,  2835,  -991,  -991,  -991,   603,  -991,
    -991,  5226,  -991,  -991,  -991,  -991,   713,  -991,  5226,   -74,
     716,  -991,  -991,  -991,  -991,  -991,   415,  -991,  -991,  -991,
    -991,  -991,  -991,  -991,  -991,  -991,  -991,  -991,  -991,  -991,
     677,  3774,  -991,  3906,   809,  -991,  -991,   -74,   721,  -991,
    -991,  -991,  -991,   298,   299,   300,  -991,   682,   163,   302,
     309,   324,  -991,   315,   317,   259,  -991,   -74,    70,  -991,
     -74,   726,  -991,   720,   720,  -991,  -991,  -991,  5226,  -991,
    5226,  -991,   -74,    23,    43,  -991,  5226,  -991,   609,  -991,
    -991,  5226,  -991,  5226,  -991,   500,  -991,  -991,    72,   720,
    -991,  -991,   -31,   674,  -991,  -991,  -991,  4038,  -991,  -991,
    -991,  -991,  -991,   337,   603,  -991,  -991,  -991,  -991,   415,
     837,  -991,  -991,  -991,   837,  5226,  5226,    -2,  -991,    72,
      72,  -991,   653,   653,  -991,  -991,  4170,   782,  -991,  -991,
    -991,  -991,  -991,  5226,  -991,  -991,  -991,  5226,  -991,  -991,
    5226,  -991,   341,  -991,  -991,  -991,  -991,   414,  -991,   839,
     685,  -991,  5226,   685,  -991,   720,   685,  -991,  -991,  -991,
     720,    21,   155,  -991,  1836,    24,   -74,   -74,   -74,  -991,
    -991,   687,   688,  -991,   -74,   -74,  -991,  -991,  -991,  -991,
    -991,  -991,    66,  4302,  -991,   337,   689,  5226,  -991,  -991,
    -991,  -991,  -991,  -991,  -991,  -991,  -991,   368,   368,   854,
    5226,   793,   320,   321,  -991,   -74,    70,  5226,  5226,   -74,
     726,  5226,  -991,  -991,   720,   -74,  -991,  -991,  -991,  -991,
     369,  -991,   -74,  -991,  -991,   375,  -991,   -74,  -991,  5226,
     -74,  -991,  -991,  -991,  -991,   387,  -991,  -991,  -991,  -991,
    -991,  -991,  -991,  -991,  -991,   318,  -991,    79,  -991,  5226,
    -991,   269,   773,   822,  4434,  -991,  -991,    79,  -991,  5226,
    -991,  -991,  -991,  -991,  -991,  -991,  -991,  -991,   720,  -991,
     735,  -991,   134,   134,   134,   -53,  -991,  -991,   134,   -27,
    -991,  -991,   -74,  -991,   134,   134,   134,   358,  -991,  -991,
     -74,   -74,  -991,  -991,  -991,  5226,  4946,  -991,  -991,  -991,
    -991,  -991,  -991,    72,  -991,  -991,  -991,  -991,  -991,   769,
    -991,  -991,  -991,  -991,  -991,  -991,  -991,  -991,  -991,  -991,
    -991,  -991,  -991,  -991,  -991,  -991,   698,  -991,  5226,  5226,
    -991,  -991,   790,  -991,   742,   817,  -991,  -991,  -991,   215,
     344,  -991,  -991,  -991,   704,  -991,  4566,  -991,  5226,   819,
    5226,  -991,  -991,   711,  -991,  -991,  -991,  4698,  -991,   878,
      93,   -74,   -74,  -991,  -991,  -991,  -991
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,     0,     6,     1,     0,     0,     0,   574,   575,     0,
      98,   463,   465,     0,     0,     0,     0,   467,     0,     0,
       0,   584,   583,     0,     0,     0,   107,   381,   288,     0,
     426,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      96,     0,   614,     0,   666,   470,   471,   472,     0,     0,
     461,     0,     0,   649,   650,     0,   407,     0,     0,   559,
       4,   253,     7,     9,    13,     0,    87,    87,     0,     0,
       8,   362,     0,   322,     0,     0,   330,     0,   239,   239,
       0,     0,     0,     0,     0,   469,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   337,   339,     0,   340,
     338,     0,    10,   366,     0,    35,   354,   104,     0,   103,
       0,   100,   102,     0,   367,   187,     0,   402,     0,   633,
     422,     0,     0,     0,     0,     0,     0,     0,     0,   107,
       0,     0,     0,     0,     0,     0,     0,     0,   107,   138,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   137,   134,   136,   135,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   192,   195,   200,   204,   207,   210,   216,   219,   221,
     223,   225,   228,   231,   235,     0,     0,     0,     0,     0,
       0,   572,     0,   573,     0,     0,   357,     0,     0,     0,
       0,     0,   308,   309,     0,   359,     0,   292,     0,   254,
       0,     0,     0,   310,   255,   319,    97,   462,   464,   466,
       0,    95,   460,     0,   468,     0,     0,     0,   375,     0,
     371,     0,     0,     0,     0,   562,     0,     0,     0,   487,
       0,     0,     0,   403,     0,   567,     0,     0,     0,   129,
       0,    14,    88,   239,   239,     0,    90,     0,    93,   399,
       3,   378,     0,   378,     0,   378,     0,   415,   239,     0,
     278,     0,     0,     0,     0,     0,     0,     0,     0,   263,
       0,     0,     0,     0,     0,   436,     0,   434,     0,     0,
       0,   625,   256,     0,   582,   345,   563,   343,   341,     0,
       0,   581,     0,   347,     0,   579,   237,   580,     0,   576,
       0,   640,     0,     0,   613,     0,     0,     0,    37,    38,
      11,     0,    12,   318,   187,     0,   188,   189,   191,   282,
       0,   417,   327,     0,     0,   633,   423,   334,   660,   657,
     655,   652,   700,     0,   675,     0,   671,   674,   673,   450,
     456,   454,   455,   449,   452,   453,   185,     0,     0,     0,
       0,     0,     0,     0,     0,   184,     0,   198,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     180,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     196,   197,   199,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   226,   229,   232,     0,   451,   333,   332,     0,
       0,   352,   353,   108,   311,     0,     0,   289,   446,   445,
     427,   428,   301,   358,   296,   294,   315,     0,     0,     0,
     302,   312,     0,     0,     0,     0,   612,   307,   373,     0,
       0,   369,     0,     0,   300,   298,   344,   561,   480,   418,
     478,   408,   342,   565,   365,     0,     0,   589,   592,   590,
     596,   597,   598,   593,   594,   591,   599,   600,   595,     0,
     560,     0,   133,   131,   130,   132,    86,     0,    85,    89,
     109,    92,   109,   395,   391,   389,   393,   400,   401,   363,
     399,   387,     0,   320,   424,   425,   323,   378,   324,   413,
     638,   637,   487,     0,   414,     0,     0,     0,   622,   277,
     239,     0,     0,     0,     0,   614,   240,   241,   441,     0,
     272,     0,    83,     0,   267,   458,   459,     0,     0,   260,
       0,   262,     0,   258,   438,     0,   257,   628,   626,   627,
     346,     0,   351,     0,     0,   356,   238,   577,   355,   642,
       0,   275,     0,   648,   644,     0,     0,     0,    40,    39,
      84,   101,     0,     0,     0,   429,   317,   368,     0,     0,
     633,   634,   379,   325,     0,     0,     0,     0,   702,   706,
     703,   705,   701,   704,     0,     0,   688,     0,     0,   672,
     182,   183,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   177,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   187,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   186,   193,
       0,   201,   202,   203,   206,   205,   208,   209,   213,   214,
       0,   211,   212,   218,   217,   220,   222,   224,     0,     0,
       0,   236,    21,    17,   586,     0,   587,   585,     0,   305,
     306,     0,     0,     0,     0,     0,   476,   474,     0,   376,
     360,     0,   372,   361,     0,   483,   567,   404,   406,   291,
     571,   568,   569,    99,     0,     0,   125,     0,     0,     0,
       0,   239,   386,   385,   384,   383,   388,   397,   321,     0,
     410,     0,     0,   624,   623,     0,     0,     0,   246,     0,
     243,     0,     0,     0,     0,     0,   444,   239,     0,     0,
       0,   629,   276,   270,   269,   457,     0,   259,   261,   437,
     439,   435,   564,   350,   349,     0,     0,     0,   661,   663,
     274,     0,   287,   285,   667,   284,     0,     0,     0,     0,
      56,     0,    59,    60,    50,    49,     0,     0,     0,     0,
      41,    42,     0,   433,     0,     0,     0,   190,     0,   604,
     239,     0,   239,   329,   633,     0,     0,   670,   700,   692,
       0,     0,     0,   697,   669,   148,     0,     0,   163,   164,
       0,   167,     0,   160,     0,     0,   152,   179,   178,   157,
     141,     0,   143,     0,   147,   176,   175,   174,   173,   172,
     170,   169,   171,     0,     0,     0,   144,   145,   146,   149,
     150,     0,   158,   159,   194,     0,   227,   230,     0,     0,
       0,   588,   295,   304,     0,     0,     0,   545,   543,   541,
     538,   547,   535,   536,   534,   540,   313,    19,    15,   483,
     374,     0,   370,   299,     0,   479,   482,   489,   481,   487,
     635,   566,     0,   117,   115,   116,   122,   124,   119,   123,
     110,     0,   112,     0,     0,   127,   128,   126,    94,   396,
     392,   390,   394,     0,     0,   502,   489,   416,     0,     0,
     616,   331,     0,   249,   248,   239,   245,     0,   242,     0,
       0,   250,     0,     0,     0,   632,   630,   631,     0,   265,
     264,     0,   578,   665,   662,   641,     0,   664,     0,     0,
       0,    47,    44,    45,    60,    54,    57,    53,    51,    46,
      36,    43,   316,   432,   430,   431,   611,   610,   606,   601,
       0,     0,   328,     0,     0,   658,   653,     0,     0,   239,
     676,   699,   698,     0,     0,     0,   162,     0,     0,     0,
       0,     0,   181,     0,     0,   215,   233,     0,     0,    22,
       0,     0,    18,   555,   554,   303,   551,   551,     0,   537,
       0,   551,     0,     0,     0,   475,     0,   636,     0,   485,
     570,     0,   121,     0,   111,     0,   114,    91,     0,   398,
     503,   639,   419,     0,   618,   617,   279,     0,   239,   251,
     252,   448,   447,     0,     0,   440,   645,   286,    48,    58,
      64,    63,    62,    61,    64,     0,     0,     0,   607,     0,
       0,   335,     0,     0,   691,   693,     0,   686,   168,   139,
     165,   161,   155,     0,   140,   142,   153,     0,   166,   151,
       0,    30,     0,    31,    33,    24,    27,     0,    25,   557,
     546,   549,     0,   544,   542,   539,   548,   314,    20,    16,
     377,     0,     0,   484,     0,     0,   502,   502,   502,   490,
     489,     0,     0,   113,     0,     0,   619,   364,   420,   421,
     411,   488,     0,     0,   271,     0,     0,     0,    66,    66,
     602,   609,   605,   608,   281,   380,   239,     0,     0,     0,
       0,     0,     0,     0,   234,     0,     0,     0,     0,     0,
       0,     0,   556,   551,   552,     0,   528,   522,   524,   526,
     502,   520,     0,   510,   508,   502,   506,     0,   505,     0,
       0,   519,   513,   515,   517,   502,   511,   497,   498,   499,
     486,   118,   120,   621,   620,   422,   247,     0,   266,     0,
      65,    74,    52,     0,     0,   659,   654,     0,   687,     0,
     156,   154,    29,    32,    34,    28,    23,    26,   558,   550,
       0,   492,     0,     0,     0,     0,   491,   496,     0,     0,
     495,   501,   502,   494,     0,     0,     0,     0,   493,   412,
       0,     0,   694,   244,   646,     0,     0,    67,    68,    69,
      70,    55,   603,     0,   690,   677,   553,   531,   530,   105,
     106,   532,   523,   529,   525,   527,   521,   509,   507,   500,
     514,   516,   518,   512,   696,   695,     0,    75,     0,     0,
      73,   336,     0,   533,     0,    77,    72,    71,   678,     0,
       0,    76,   239,   647,    81,    78,     0,    81,   187,     0,
     187,    82,   680,     0,    79,   239,    82,     0,    80,     0,
       0,     0,     0,   683,   682,   685,   684
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -991,  -991,   -67,    -5,  -991,  -991,  -991,  -991,  -991,  -991,
    -991,  -991,   -95,  -991,  -229,  -991,   -91,  -991,  -223,  -991,
    -991,  -991,  -991,  -991,  -991,   137,  -991,  -991,   -25,  -991,
    -123,  -197,  -991,  -991,  -991,  -991,  -991,  -991,  -991,  -354,
    -362,  -269,  -305,  -991,   848,  -991,  -991,  -991,  -991,  -991,
    -991,   665,  -991,   597,   -61,  -991,   252,   429,  -991,   -89,
      38,  -991,  -991,  -991,  -991,  -319,  -991,   349,  -991,   195,
    -106,   222,  -364,   235,   519,   525,   527,   271,   273,  -991,
    -991,  -991,  -409,  -991,  -991,    95,   444,   -77,  -991,  -991,
    -991,   926,  -991,  -991,  -991,  -991,  -991,  -991,  -991,  -991,
    -991,  -991,  -991,  -991,  -991,  -991,  -991,  -991,  -991,  -991,
    -991,  -991,  -991,  -991,  -991,  -991,  -991,  -991,  -991,   820,
     159,  -991,  -991,  -991,  -991,  -991,  -991,  -991,  -220,  -563,
    -991,  -991,  -991,  -991,  -991,   433,  -991,  -991,  -991,  -991,
    -991,  -991,   922,  -991,  -991,   923,  -991,   824,  -991,  -991,
    -991,  -991,  -991,  -991,  -991,  -991,  -222,   871,  -991,  -991,
    -265,   400,  -991,  -991,  -991,  -991,  -991,  -991,  -991,  -991,
     763,  -991,  -991,   -71,  -991,  -991,  -991,  -991,  -991,   -34,
    -991,  -991,  -991,  -991,  -991,    91,  -991,  -991,  -991,  -991,
    -493,  -137,    89,  -991,  -680,  -991,  -991,  -245,  -991,  -991,
    -252,  -991,  -991,  -991,  -991,  -237,  -991,  -991,  -991,  -422,
    -991,  -991,  -991,  -991,  -991,  -991,  -991,  -525,  -174,  -991,
    -991,  -991,  -991,  -991,  -991,  -991,  -991,  -991,  -991,  -991,
    -991,   274,  -991,   410,    90,  -991,  -991,   319,  -991,   218,
    -288,   556,   950,   486,  -991,   423,  -991,  -991,  -991,  -991,
    -991,  -991,   -69,  -991,  -991,   -29,  -991,  -990,    71,  -991,
    -991,  -320,  -991,   699,  -991,  -991,  -991,  -991,  -991,  -991,
    -991,  -991,  -991,  -991,  -991,  -991,  -991,  -991,  -991,  -991,
    -991,   384,  -395,  -731,  -991,    42,  -991,  -991,  -991,   629,
    -991,  -991,  -991,  -991,  -991,  -991,  -991,  -991,  -991,  -991,
    -991,  -991,  -991,  -991,  -207,  -126,   189
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   261,    61,     2,     4,    62,    63,   994,   840,
     993,   839,   982,  1067,  1068,  1128,   979,  1062,  1063,  1127,
      64,   319,   568,   769,   770,   771,  1034,  1030,   936,  1033,
    1108,  1171,  1217,  1218,  1219,  1220,  1221,  1255,  1261,  1268,
    1274,   531,   864,    65,   253,    66,   490,    67,   492,    68,
      69,   486,   110,   111,   112,  1231,   195,   695,   881,   882,
     883,   888,   251,   171,   628,   325,   326,   327,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   658,
     183,   659,   184,   660,  1060,   306,   570,   487,   526,   907,
     905,   527,   538,  1024,   275,   918,   313,   520,   330,   567,
     929,   197,   244,   208,   668,   232,   684,   672,   673,   992,
     263,   118,   580,   268,   585,  1116,   302,   259,   701,   115,
     576,   230,   681,   453,   228,   678,   450,   861,   503,   583,
     782,    71,   499,   705,   500,   501,   699,   698,   700,   697,
     894,   502,    72,   465,   466,    73,   239,    74,   267,   896,
    1165,   512,   513,    75,   237,  1100,   335,   336,    76,   577,
     286,   287,   544,   739,   921,    77,   726,   528,    78,   727,
     354,    79,   355,   279,    80,    81,    82,    83,    84,    85,
      86,   445,   859,   238,   685,   865,   866,   867,   868,  1090,
     461,  1012,  1013,  1089,  1011,  1149,  1145,  1146,  1198,  1155,
    1156,  1204,  1205,  1206,  1140,  1141,  1192,  1193,  1194,  1232,
    1233,   856,   990,   988,   987,   986,   991,  1070,  1071,  1072,
    1190,   846,  1069,  1132,    87,   245,    88,    89,   551,    90,
     686,   480,   481,   691,   692,    91,    92,   308,   745,   309,
     303,   295,    93,   427,   667,   478,   479,   780,  1035,  1173,
     950,  1037,  1038,   948,    94,    95,   901,  1097,   519,   292,
     732,   334,   869,   870,   709,    96,   560,    97,   316,   751,
    1106,  1246,    98,    99,   125,   587,  1043,   100,   123,   586,
    1042,   747,   748,   749,   101,   755,   102,   127,   345,   346,
     347,   597,  1047,  1252,  1262,  1269,  1275,  1279,  1284,  1121,
     348,   789,  1119,   959,  1213,   794,   594
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     103,   271,   272,   106,   250,   572,   661,   265,   224,   537,
     533,   281,   283,   225,   569,   584,   540,   927,   542,   710,
     558,   783,  1135,   196,   977,  1150,   565,   202,   203,   205,
     207,   209,   802,   213,   214,   367,   215,   276,   648,   649,
     650,   651,   652,   506,   980,   508,   612,  1002,   562,  1114,
    1115,   273,   104,  1112,   516,   623,   413,   246,   728,   236,
     249,   390,   391,   392,   573,   898,   343,   791,   415,   430,
     233,   247,   277,  1094,   596,   415,   288,   107,  1136,   774,
    1210,   291,   294,   510,   294,   294,   301,   293,   665,   186,
    1137,   107,  1138,   126,  1281,   729,   946,   269,   204,   318,
    1098,   792,   716,   320,  1143,   322,   624,   625,   323,    60,
     280,   329,   730,  1099,   185,  1211,   282,   338,  1144,   340,
     418,  -280,   517,   923,   199,     3,   201,  1095,  -668,    60,
     775,   190,   844,   210,  -417,  1139,   415,   234,   211,   192,
     899,  1227,   240,   924,    -2,   277,   255,   257,   270,   574,
     227,   277,  1136,   243,   248,  1151,  1142,    60,   284,   310,
     321,   431,   415,   312,  1137,   444,  1138,  1152,   619,  1153,
     621,  1228,   511,   717,   845,   464,   242,   414,   873,   874,
    -457,   417,   344,   485,  1036,   421,   797,   422,  1003,   613,
     424,   515,   875,   800,  -268,   105,   432,   507,   626,   433,
     109,   434,  -477,   876,   415,   436,   289,   978,  -283,  1139,
     415,   566,  1154,   235,   109,   415,   803,   804,   952,   290,
     278,   447,   776,   549,    60,   200,   454,   981,   456,  -290,
     614,   415,   187,  1251,   274,   462,    60,  -290,  -290,    60,
      60,   482,   483,   484,  -668,  1282,    60,    60,  -290,    60,
     489,   838,   491,  -457,   825,    60,  -290,  -290,    60,  -457,
     781,   243,    60,   212,   518,   743,   744,   877,   530,    60,
      60,   534,   878,   736,   191,   539,    60,   541,  1229,   543,
     831,   546,   193,   547,   548,   241,  1143,   708,   550,   256,
     258,   879,   644,   645,   552,   415,   116,   415,  1230,   555,
    1144,   285,   311,   301,   415,   559,  -273,   561,  -473,   824,
     563,   620,   598,   622,   756,   757,   758,   107,   415,   415,
     575,   810,   811,  -290,  -290,  -290,   229,   795,   343,   407,
     504,   535,   812,   813,   718,    21,    22,   722,   415,   720,
     723,   835,  -290,  -290,  -615,   880,  1215,   759,  1052,  1053,
     415,   226,   108,   885,   886,   415,   415,   415,  -402,   760,
     761,   762,   763,   764,   765,  1264,   415,   415,   415,   532,
     415,   702,  -382,   532,  1216,  -382,   999,   415,  -382,  -382,
    -382,   356,   349,   415,   194,   415,   927,   927,   415,   415,
     365,   252,   703,   493,   724,   415,  -382,  -382,   260,   494,
     495,   496,   766,   353,   262,   719,  1157,  1158,  1159,   639,
     721,   887,   798,   640,   799,   398,   399,   497,   498,    60,
     664,   666,   505,   536,   400,   401,  -326,    56,   581,   402,
     403,  1265,   669,   670,   404,   801,   814,   408,   532,   117,
     109,   400,   401,   715,   344,   680,   767,   768,   683,  1004,
    1005,   931,   932,   933,   602,   826,   604,   605,   606,   607,
    1196,   608,  1073,   939,   954,  1200,  1076,   827,   616,   617,
     618,   975,   828,   829,   830,  1208,   629,   630,   631,   632,
     633,   634,   635,  1048,  1049,  1050,   415,  1054,   429,  1151,
     188,   224,   935,   189,  1055,   704,   225,   937,   938,    60,
    1058,  1152,  1059,  1153,   216,  1180,  1181,   217,   218,  1056,
    1057,   713,   714,   437,   442,   217,   218,   443,   873,   874,
      60,   219,  1239,   545,   731,   438,  1125,  1126,   734,   219,
      60,   220,   875,   557,   296,   737,   307,   738,   314,  1031,
     405,   406,  1032,   876,   679,   317,  1154,   682,   301,   301,
     331,    60,    60,   333,   926,  1195,   439,   750,    60,   328,
     752,  1199,   754,   467,   440,   349,   337,   339,   773,   341,
      60,   468,   469,  1207,   342,   467,   395,   396,   397,   350,
     351,   352,   357,   468,   469,   358,   353,   221,   359,   787,
     641,   642,   643,   793,   470,   360,    45,    46,    47,  1129,
    1130,   222,   471,   472,    45,    46,    47,   877,   361,   222,
     847,   848,   878,   415,   393,  1022,   849,   850,   362,   553,
     223,   554,   646,   647,   893,  1081,  1082,   363,   223,  1083,
     364,   879,  1084,   366,   588,   589,   368,   590,  1018,   369,
     851,   426,   653,   654,   897,   297,   298,  1117,  1118,   370,
     914,  1124,   435,  1023,   591,  1085,   371,   473,   474,   475,
     841,   372,   373,   842,   919,   374,   843,   375,   592,   473,
     474,   475,   394,   409,   376,   593,   455,   377,   378,   863,
     379,   412,   380,  1086,   411,   852,   853,   854,   476,   477,
    1081,  1082,   381,   410,  1101,   382,   383,  1084,   384,   855,
    1087,  1088,   385,   951,   386,   953,   387,   900,   388,   945,
     389,   903,   904,   419,   906,   420,   908,   423,   428,   911,
    1085,   441,   446,   915,   916,   917,   448,   449,   451,   493,
     452,   920,  1091,   457,  1092,   494,   495,   496,   458,   459,
     460,   463,   925,   509,   307,  -405,   307,   285,  1086,   578,
     556,   579,   600,   497,   498,   582,   601,   638,   662,  1105,
     564,   663,   674,   675,   940,  1087,  1088,   575,   328,   943,
     944,  1234,  1235,   947,   676,   677,  1237,   687,   688,   694,
     725,   707,  1240,  1241,  1242,   733,   961,   962,   415,   735,
     753,   746,   889,   890,   891,   892,   772,   997,   788,   785,
     790,   786,   834,   806,   603,   796,   805,   807,   808,   809,
     815,   816,   609,   610,   611,   817,   615,   818,   819,   857,
     913,   820,   821,   627,   822,   858,   823,   832,  1017,   833,
     860,   872,   636,   637,   884,   909,   910,   277,  1170,   926,
     928,   985,   934,   949,   958,   966,   960,   967,   989,   972,
     976,  1178,   996,  1001,  1006,  1021,   532,   923,  1184,  1185,
    1028,   532,   532,  1036,  1041,  1045,  1120,  1051,  1107,  1066,
    1131,  1133,  1161,  1162,  1177,  1169,  1179,  1222,  1216,  1226,
    1202,  1253,  1046,   671,  1254,  1258,  1259,  1260,  1267,  1272,
    1010,   963,   964,  1014,  1015,   965,  1276,   518,  1280,  1079,
     968,  1187,  1078,  1183,  1019,  1020,   969,   941,   970,  1029,
    1225,  1109,  1172,  1270,  1278,   254,  1093,  1064,   571,   488,
     973,   696,  1007,   426,   754,   690,   974,   777,   655,   836,
      70,   942,   837,   706,   324,   656,   119,   120,   657,   983,
     984,  1103,   332,  1209,   264,   741,  1247,  1250,   416,  1271,
     995,  1273,  1044,  1160,  1238,  1243,   998,   711,  1236,  1189,
     871,   742,  1000,   922,   121,   689,   514,   740,  1113,   784,
    1224,  1027,  1061,  1016,   599,  1065,  1166,   957,     0,  1256,
    1257,     0,     0,     0,     0,     0,     0,  1077,     0,  1009,
       0,     0,     0,     0,     0,   690,     0,     0,     0,     0,
       0,     0,   532,  1096,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1104,     0,
       0,     0,   328,   779,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1096,  1096,     0,     0,     0,  1174,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1064,     0,     0,     0,     0,
       0,     0,   328,     0,     0,     0,     0,     0,     0,     0,
       0,  1010,  1010,  1010,     0,  1075,     0,     0,     0,  1163,
    1164,  1080,     0,     0,     0,     0,   532,   793,   532,     0,
    1168,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1175,  1176,     0,     0,     0,     0,     0,     0,
    1182,     0,     0,     0,  1186,   862,     0,     0,     0,     0,
    1191,     0,     0,     0,     0,  1010,     0,  1197,     0,     0,
    1010,     0,  1201,     0,     0,  1203,     0,     0,  1122,     0,
    1010,     0,  1123,   895,     0,     0,     0,     0,     0,     0,
       0,     0,  1212,     0,     0,     0,     0,  1134,     0,     0,
       0,     0,  1212,     0,     0,   299,     0,     0,     0,     0,
       0,  -348,  -348,     0,     0,  1266,     0,     0,  -348,   307,
       0,     0,  1263,     0,     0,     0,     0,  1010,  1277,  -348,
    -348,     0,   532,  -348,  -348,  1244,  1245,  -348,  -348,     0,
       0,  -348,     0,     0,     0,   532,     0,     0,  1096,     0,
       0,     0,   532,   532,     0,     0,  1188,     0,     0,   955,
     956,  -348,  -348,     0,     0,  -348,     0,     0,     0,     0,
       0,     0,     0,     0,   532,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   971,     0,     0,
       0,     0,     0,     0,   532,  1283,  1285,  1286,     0,     0,
    -348,     0,     0,     0,     0,     0,     0,     0,     0,  -348,
       0,  -348,  -348,  -348,  -348,  -348,  -348,  -348,     0,     0,
    -348,     0,     0,     0,  -348,     0,     0,     0,  -348,     0,
     532,   532,     0,     0,     0,     0,   690,  -348,  -348,  -348,
    -348,     0,     0,     0,     0,     0,     0,  -348,     0,  -348,
    -348,  -348,     0,  -348,  -348,  -348,  -348,  -348,  -348,     0,
       0,     0,     0,   532,   532,     0,     0,     0,     0,  -348,
       0,     0,     0,     0,  -348,  -348,   113,    60,  -348,     0,
     300,     0,  -367,  -367,     0,  1025,     0,     0,     0,  -367,
       0,     0,  1026,     0,     0,     0,     0,     0,     0,     0,
    -367,  -367,     0,     0,  -367,  -367,     0,     0,  -367,  -367,
       0,     0,  -367,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -367,  -367,     0,     0,  -367,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   266,     0,     0,
       0,     0,  1074,  -409,  -409,     0,     0,     0,     0,     0,
    -409,  -367,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -409,  -409,     0,     0,  -409,  -409,     0,     0,  -409,
    -409,  -367,     0,  -409,     0,     0,     0,     0,     0,  -409,
    -367,     0,  -367,  -367,  -367,  -367,  -367,  -367,  -367,  1110,
    1111,  -367,     0,  -409,  -409,  -367,     0,  -409,     0,  -367,
       0,     0,     0,     0,     0,     0,     0,     0,  -367,  -367,
    -367,  -367,     0,     0,     0,     0,     0,     0,  -367,     0,
    -367,  -367,  -367,     0,  -367,  -367,  -367,  -367,  -367,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -367,     0,  -409,     0,     0,  -367,  -367,     0,  -367,   114,
       0,  -409,     0,  -409,  -409,  -409,  -409,  -409,  -409,  -409,
       0,     0,  -409,     0,     0,     0,  -409,     0,  -409,     0,
    -409,     0,     0,     0,     0,     0,     0,     0,     0,  -409,
    -409,  -409,  -409,     0,     0,     0,     0,     0,     0,  -409,
       0,  -409,  -409,  -409,     0,  -409,  -409,  -409,  -409,  -409,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -409,   206,     0,     0,     0,  -409,  -409,  -293,  -293,
    -409,     0,     0,  1214,     0,  -293,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -293,  -293,     0,     0,
    -293,  -293,     0,     0,  -293,  -293,     0,     0,  -293,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -293,  -293,
       0,     0,  -293,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   304,     0,     0,     0,     0,     0,   129,   130,
       0,     0,     0,     0,     0,   131,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   132,   133,     0,     0,
     134,   135,     0,     0,   136,   137,     0,  -293,   138,     0,
       0,     0,   328,     0,   328,     0,  -293,     0,  -293,  -293,
    -293,  -293,  -293,  -293,  -293,     0,     0,  -293,   139,   140,
       0,  -293,   141,     0,     0,  -293,     0,     0,     0,     0,
       0,     0,     0,     0,  -293,  -293,  -293,  -293,     0,     0,
       0,     0,     0,     0,  -293,     0,  -293,  -293,  -293,     0,
    -293,  -293,  -293,  -293,  -293,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -293,   142,     0,     0,
       0,  -293,  -293,     0,    60,  -293,   143,     0,   144,   145,
     146,   147,   148,   149,   150,     0,     0,   151,     0,     0,
       0,   152,     0,     0,     0,   153,     0,     0,     0,     0,
       0,     0,     0,     0,   154,   155,   156,   157,     0,     0,
       0,     0,     0,     0,   158,     0,   159,   160,   161,     0,
     162,   163,   164,   165,   166,   305,     0,  1147,     0,     0,
       0,     0,     0,  -504,  -504,     0,   167,     0,     0,     0,
    -504,   168,   169,  1148,     0,   170,     0,     0,     0,     0,
       0,  -504,  -504,     0,     0,  -504,  -504,     0,     0,  -504,
    -504,     0,     0,  -504,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -504,  -504,     0,     0,  -504,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   122,     0,     0,
       0,     0,     0,  -656,  -656,     0,     0,     0,     0,     0,
    -656,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -656,  -656,     0,     0,  -656,  -656,     0,     0,  -656,
    -656,     0,  -504,  -656,     0,     0,     0,     0,     0,     0,
       0,  -504,     0,  -504,  -504,  -504,  -504,  -504,  -504,  -504,
       0,     0,  -504,  -656,  -656,     0,  -504,  -656,     0,     0,
    -504,     0,     0,     0,     0,     0,     0,   124,     0,  -504,
    -504,  -504,  -504,  -651,  -651,     0,     0,     0,     0,  -504,
    -651,  -504,  -504,  -504,     0,  -504,  -504,  -504,  -504,  -504,
       0,  -651,  -651,     0,     0,  -651,  -651,     0,     0,  -651,
    -651,  -504,  -656,  -651,     0,     0,  -504,  -504,     0,     0,
    -504,  -656,     0,  -656,  -656,  -656,  -656,  -656,  -656,  -656,
       0,     0,  -656,  -651,  -651,     0,  -656,  -651,     0,     0,
    -656,     0,     0,     0,     0,     0,     0,   128,     0,  -656,
    -656,  -656,  -656,   129,   130,     0,     0,     0,     0,  -656,
     131,  -656,  -656,  -656,     0,  -656,  -656,  -656,  -656,  -656,
       0,   132,   133,     0,     0,   134,   135,     0,     0,   136,
     137,  -656,  -651,   138,     0,     0,  -656,  -656,     0,     0,
    -656,  -651,     0,  -651,  -651,  -651,  -651,  -651,  -651,  -651,
       0,     0,  -651,   139,   140,     0,  -651,   141,     0,     0,
    -651,     0,     0,     0,     0,     0,     0,   198,     0,  -651,
    -651,  -651,  -651,   129,   130,     0,     0,     0,     0,  -651,
     131,  -651,  -651,  -651,     0,  -651,  -651,  -651,  -651,  -651,
       0,   132,   133,     0,     0,   134,   135,     0,     0,   136,
     137,  -651,   142,   138,     0,     0,  -651,  -651,     0,     0,
    -651,   143,     0,   144,   145,   146,   147,   148,   149,   150,
       0,     0,   151,   139,   140,     0,   152,   141,     0,     0,
     153,     0,     0,     0,     0,     0,     0,   231,     0,   154,
     155,   156,   157,  -297,  -297,     0,     0,     0,     0,   158,
    -297,   159,   160,   161,     0,   162,   163,   164,   165,   166,
       0,  -297,  -297,     0,     0,  -297,  -297,     0,     0,  -297,
    -297,   167,   142,  -297,     0,     0,   168,   169,     0,     0,
     170,   143,     0,   144,   145,   146,   147,   148,   149,   150,
       0,     0,   151,  -297,  -297,     0,   152,  -297,     0,     0,
     153,     0,     0,     0,     0,     0,     0,   315,     0,   154,
     155,   156,   157,  -643,  -643,     0,     0,     0,     0,   158,
    -643,   159,   160,   161,     0,   162,   163,   164,   165,   166,
       0,  -643,  -643,     0,     0,  -643,  -643,     0,     0,  -643,
    -643,   167,  -297,  -643,     0,     0,   168,   169,     0,     0,
     170,  -297,     0,  -297,  -297,  -297,  -297,  -297,  -297,  -297,
       0,     0,  -297,  -643,  -643,     0,  -297,  -643,     0,     0,
    -297,     0,     0,     0,     0,     0,     0,   425,     0,  -297,
    -297,  -297,  -297,   129,   130,     0,     0,     0,     0,  -297,
     131,  -297,  -297,  -297,     0,  -297,  -297,  -297,  -297,  -297,
       0,   132,   133,     0,     0,   134,   135,     0,     0,   136,
     137,  -297,  -643,   138,     0,     0,  -297,  -297,     0,     0,
    -297,  -643,     0,  -643,  -643,  -643,  -643,  -643,  -643,  -643,
       0,     0,  -643,   139,   140,     0,  -643,   141,     0,     0,
    -643,     0,     0,     0,     0,     0,     0,   595,     0,  -643,
    -643,  -643,  -643,   129,   130,     0,     0,     0,     0,  -643,
     131,  -643,  -643,  -643,     0,  -643,  -643,  -643,  -643,  -643,
       0,   132,   133,     0,     0,   134,   135,     0,     0,   136,
     137,  -643,   142,   138,     0,     0,  -643,  -643,     0,     0,
    -643,   143,     0,   144,   145,   146,   147,   148,   149,   150,
       0,     0,   151,   139,   140,     0,   152,   141,     0,     0,
     153,     0,     0,     0,     0,     0,     0,   778,     0,   154,
     155,   156,   157,   129,   130,     0,     0,     0,     0,   158,
     131,   159,   160,   161,     0,   162,   163,   164,   165,   166,
       0,   132,   133,     0,     0,   134,   135,     0,     0,   136,
     137,   167,   142,   138,     0,     0,   168,   169,     0,     0,
     170,   143,     0,   144,   145,   146,   147,   148,   149,   150,
       0,     0,   151,   139,   140,     0,   152,   141,     0,     0,
     153,     0,     0,     0,     0,     0,     0,   912,     0,   154,
     155,   156,   157,   129,   130,     0,     0,     0,     0,   158,
     131,   159,   160,   161,     0,   162,   163,   164,   165,   166,
       0,   132,   133,     0,     0,   134,   135,     0,     0,   136,
     137,   167,   142,   138,     0,     0,   168,   169,     0,     0,
     170,   143,     0,   144,   145,   146,   147,   148,   149,   150,
       0,     0,   151,   139,   140,     0,   152,   141,     0,     0,
     153,     0,     0,     0,     0,     0,     0,     0,     0,   154,
     155,   156,   157,     0,     0,     0,     0,     0,     0,   158,
       0,   159,   160,   161,     0,   162,   163,   164,   165,   166,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   167,   142,     0,     0,     0,   168,   169,     0,     0,
     170,   143,     0,   144,   145,   146,   147,   148,   149,   150,
       0,     0,   151,     0,     0,     0,   152,     0,     0,     0,
     153,     0,     0,     0,     0,     0,     0,     0,     0,   154,
     155,   156,   157,     0,     0,     0,     0,     0,     0,   158,
       0,   159,   160,   161,     0,   162,   163,   164,   165,   166,
       0,     0,     0,     0,     5,     0,     0,     0,     0,   521,
       0,   167,     7,     8,     0,     0,   168,   169,     0,     0,
     170,    11,    12,  -443,    13,    14,     0,     0,     0,     0,
      15,    16,     0,     0,     0,    17,     0,     0,   522,   523,
       0,    19,    20,    21,    22,   524,  -614,    24,    25,     0,
      26,     0,     0,     0,     0,     0,     0,     0,    27,     0,
      28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    29,     0,  -443,     0,     0,     0,  -443,    30,
      31,    32,    33,     0,     0,     0,     0,     0,     0,     0,
      34,    35,    36,    37,     0,     0,     0,    38,     0,     0,
      39,     0,     0,    41,     0,     0,   525,     0,    43,    44,
      45,    46,    47,    48,    49,    50,    51,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    52,     0,
       0,    53,    54,     0,    55,    56,     5,     0,     0,     0,
       0,   521,     0,    57,     7,     8,     0,    58,     0,     0,
      59,     0,     0,    11,    12,  -442,    13,    14,     0,     0,
       0,     0,    15,    16,     0,     0,     0,    17,     0,     0,
     522,   523,     0,    19,    20,    21,    22,   524,  -614,    24,
      25,     0,    26,     0,     0,     0,    60,     0,     0,     0,
      27,     0,    28,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    29,     0,  -442,     0,     0,     0,
    -442,    30,    31,    32,    33,     0,     0,     0,     0,     0,
       0,     0,    34,    35,    36,    37,     0,     0,     0,    38,
       0,     0,    39,     0,     0,    41,     0,     0,   525,     0,
      43,    44,    45,    46,    47,    48,    49,    50,    51,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      52,     0,     0,    53,    54,     0,    55,    56,     0,     0,
       0,     0,     0,     0,     0,    57,     0,     0,     0,    58,
       0,     0,    59,     5,     0,     0,     0,     0,     6,     0,
       0,     7,     8,     9,     0,     0,     0,    10,     0,     0,
      11,    12,     0,    13,    14,     0,     0,     0,     0,    15,
      16,     0,     0,     0,    17,     0,     0,    18,    60,     0,
      19,    20,    21,    22,    23,  -614,    24,    25,     0,    26,
       0,     0,     0,     0,     0,     0,     0,    27,     0,    28,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    29,     0,     0,     0,     0,     0,     0,    30,    31,
      32,    33,     0,     0,     0,     0,     0,     0,     0,    34,
      35,    36,    37,     0,     0,     0,    38,     0,     0,    39,
      40,     0,    41,     0,     0,    42,     0,    43,    44,    45,
      46,    47,    48,    49,    50,    51,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    52,     0,     0,
      53,    54,     0,    55,    56,     5,     0,     0,     0,     0,
     521,     0,    57,     7,     8,     0,    58,     0,     0,    59,
       0,     0,    11,    12,   529,    13,    14,     0,     0,     0,
       0,    15,    16,     0,     0,     0,    17,     0,     0,   522,
     523,     0,    19,    20,    21,    22,   524,  -614,    24,    25,
       0,    26,     0,     0,     0,    60,     0,     0,     0,    27,
       0,    28,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    29,     0,     0,     0,     0,     0,     0,
      30,    31,    32,    33,     0,     0,     0,     0,     0,     0,
       0,    34,    35,    36,    37,     0,     0,     0,    38,     0,
       0,    39,     0,     0,    41,     0,     0,   525,     0,    43,
      44,    45,    46,    47,    48,    49,    50,    51,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    52,
       0,     0,    53,    54,     0,    55,    56,     5,     0,     0,
       0,     0,   521,     0,    57,     7,     8,     0,    58,     0,
       0,    59,     0,     0,    11,    12,   693,    13,    14,     0,
       0,     0,     0,    15,    16,     0,     0,     0,    17,     0,
       0,   522,   523,     0,    19,    20,    21,    22,   524,  -614,
      24,    25,     0,    26,     0,     0,     0,    60,     0,     0,
       0,    27,     0,    28,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    29,     0,     0,     0,     0,
       0,     0,    30,    31,    32,    33,     0,     0,     0,     0,
       0,     0,     0,    34,    35,    36,    37,     0,     0,     0,
      38,     0,     0,    39,     0,     0,    41,     0,     0,   525,
       0,    43,    44,    45,    46,    47,    48,    49,    50,    51,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    52,     0,     0,    53,    54,     0,    55,    56,     5,
       0,     0,     0,     0,   521,     0,    57,     7,     8,     0,
      58,     0,     0,    59,     0,     0,    11,    12,   712,    13,
      14,     0,     0,     0,     0,    15,    16,     0,     0,     0,
      17,     0,     0,   522,   523,     0,    19,    20,    21,    22,
     524,  -614,    24,    25,     0,    26,     0,     0,     0,    60,
       0,     0,     0,    27,     0,    28,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    29,     0,     0,
       0,     0,     0,     0,    30,    31,    32,    33,     0,     0,
       0,     0,     0,     0,     0,    34,    35,    36,    37,     0,
       0,     0,    38,     0,     0,    39,     0,     0,    41,     0,
       0,   525,     0,    43,    44,    45,    46,    47,    48,    49,
      50,    51,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    52,     0,     0,    53,    54,     0,    55,
      56,     5,     0,     0,     0,     0,   521,     0,    57,     7,
       8,     0,    58,     0,     0,    59,     0,     0,    11,    12,
     902,    13,    14,     0,     0,     0,     0,    15,    16,     0,
       0,     0,    17,     0,     0,   522,   523,     0,    19,    20,
      21,    22,   524,  -614,    24,    25,     0,    26,     0,     0,
       0,    60,     0,     0,     0,    27,     0,    28,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    29,
       0,     0,     0,     0,     0,     0,    30,    31,    32,    33,
       0,     0,     0,     0,     0,     0,     0,    34,    35,    36,
      37,     0,     0,     0,    38,     0,     0,    39,     0,     0,
      41,     0,     0,   525,     0,    43,    44,    45,    46,    47,
      48,    49,    50,    51,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    52,     0,     0,    53,    54,
       0,    55,    56,     5,     0,     0,     0,     0,   521,     0,
      57,     7,     8,     0,    58,     0,     0,    59,     0,     0,
      11,    12,  1008,    13,    14,     0,     0,     0,     0,    15,
      16,     0,     0,     0,    17,     0,     0,   522,   523,     0,
      19,    20,    21,    22,   524,  -614,    24,    25,     0,    26,
       0,     0,     0,    60,     0,     0,     0,    27,     0,    28,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    29,     0,     0,     0,     0,     0,     0,    30,    31,
      32,    33,     0,     0,     0,     0,     0,     0,     0,    34,
      35,    36,    37,     0,     0,     0,    38,     0,     0,    39,
       0,     0,    41,     0,     0,   525,     0,    43,    44,    45,
      46,    47,    48,    49,    50,    51,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    52,     0,     0,
      53,    54,     0,    55,    56,     5,     0,     0,     0,     0,
     521,     0,    57,     7,     8,     0,    58,     0,     0,    59,
       0,     0,    11,    12,  1039,    13,    14,     0,     0,     0,
       0,    15,    16,     0,     0,     0,    17,     0,     0,   522,
     523,     0,    19,    20,    21,    22,   524,  -614,    24,    25,
       0,    26,     0,     0,     0,    60,     0,     0,     0,    27,
       0,    28,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    29,     0,     0,     0,     0,     0,     0,
      30,    31,    32,    33,     0,     0,     0,     0,     0,     0,
       0,    34,    35,    36,    37,     0,     0,     0,    38,     0,
       0,    39,     0,     0,    41,     0,     0,   525,     0,    43,
      44,    45,    46,    47,    48,    49,    50,    51,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    52,
       0,     0,    53,    54,     0,    55,    56,     5,     0,     0,
       0,     0,   521,     0,    57,     7,     8,     0,    58,     0,
       0,    59,     0,     0,    11,    12,  1040,    13,    14,     0,
       0,     0,     0,    15,    16,     0,     0,     0,    17,     0,
       0,   522,   523,     0,    19,    20,    21,    22,   524,  -614,
      24,    25,     0,    26,     0,     0,     0,    60,     0,     0,
       0,    27,     0,    28,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    29,     0,     0,     0,     0,
       0,     0,    30,    31,    32,    33,     0,     0,     0,     0,
       0,     0,     0,    34,    35,    36,    37,     0,     0,     0,
      38,     0,     0,    39,     0,     0,    41,     0,     0,   525,
       0,    43,    44,    45,    46,    47,    48,    49,    50,    51,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    52,     0,     0,    53,    54,     0,    55,    56,     5,
       0,     0,     0,     0,   521,     0,    57,     7,     8,     0,
      58,     0,     0,    59,     0,     0,    11,    12,  1102,    13,
      14,     0,     0,     0,     0,    15,    16,     0,     0,     0,
      17,     0,     0,   522,   523,     0,    19,    20,    21,    22,
     524,  -614,    24,    25,     0,    26,     0,     0,     0,    60,
       0,     0,     0,    27,     0,    28,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    29,     0,     0,
       0,     0,     0,     0,    30,    31,    32,    33,     0,     0,
       0,     0,     0,     0,     0,    34,    35,    36,    37,     0,
       0,     0,    38,     0,     0,    39,     0,     0,    41,     0,
       0,   525,     0,    43,    44,    45,    46,    47,    48,    49,
      50,    51,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    52,     0,     0,    53,    54,     0,    55,
      56,     5,     0,     0,     0,     0,   521,     0,    57,     7,
       8,     0,    58,     0,     0,    59,     0,     0,    11,    12,
    -689,    13,    14,     0,     0,     0,     0,    15,    16,     0,
       0,     0,    17,     0,     0,   522,   523,     0,    19,    20,
      21,    22,   524,  -614,    24,    25,     0,    26,     0,     0,
       0,    60,     0,     0,     0,    27,     0,    28,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    29,
       0,     0,     0,     0,     0,     0,    30,    31,    32,    33,
       0,     0,     0,     0,     0,     0,     0,    34,    35,    36,
      37,     0,     0,     0,    38,     0,     0,    39,     0,     0,
      41,     0,     0,   525,     0,    43,    44,    45,    46,    47,
      48,    49,    50,    51,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    52,     0,     0,    53,    54,
       0,    55,    56,     5,     0,     0,     0,     0,   521,     0,
      57,     7,     8,     0,    58,     0,     0,    59,     0,     0,
      11,    12,  1167,    13,    14,     0,     0,     0,     0,    15,
      16,     0,     0,     0,    17,     0,     0,   522,   523,     0,
      19,    20,    21,    22,   524,  -614,    24,    25,     0,    26,
       0,     0,     0,    60,     0,     0,     0,    27,     0,    28,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    29,     0,     0,     0,     0,     0,     0,    30,    31,
      32,    33,     0,     0,     0,     0,     0,     0,     0,    34,
      35,    36,    37,     0,     0,     0,    38,     0,     0,    39,
       0,     0,    41,     0,     0,   525,     0,    43,    44,    45,
      46,    47,    48,    49,    50,    51,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    52,     0,     0,
      53,    54,     0,    55,    56,     5,     0,     0,     0,     0,
     521,     0,    57,     7,     8,     0,    58,     0,     0,    59,
       0,     0,    11,    12,  1223,    13,    14,     0,     0,     0,
       0,    15,    16,     0,     0,     0,    17,     0,     0,   522,
     523,     0,    19,    20,    21,    22,   524,  -614,    24,    25,
       0,    26,     0,     0,     0,    60,     0,     0,     0,    27,
       0,    28,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    29,     0,     0,     0,     0,     0,     0,
      30,    31,    32,    33,     0,     0,     0,     0,     0,     0,
       0,    34,    35,    36,    37,     0,     0,     0,    38,     0,
       0,    39,     0,     0,    41,     0,     0,   525,     0,    43,
      44,    45,    46,    47,    48,    49,    50,    51,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    52,
       0,     0,    53,    54,     0,    55,    56,     5,     0,     0,
       0,     0,   521,     0,    57,     7,     8,     0,    58,     0,
       0,    59,     0,     0,    11,    12,     0,    13,    14,     0,
       0,     0,     0,    15,    16,     0,     0,     0,    17,     0,
       0,   522,   523,     0,    19,    20,    21,    22,   524,  -614,
      24,    25,     0,    26,     0,     0,     0,    60,     0,     0,
       0,    27,     0,    28,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    29,  -679,     0,     0,     0,
       0,     0,    30,    31,    32,    33,     0,     0,     0,     0,
       0,     0,     0,    34,    35,    36,    37,     0,     0,     0,
      38,     0,     0,    39,     0,     0,    41,     0,     0,   525,
       0,    43,    44,    45,    46,    47,    48,    49,    50,    51,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    52,     0,     0,    53,    54,     0,    55,    56,     5,
       0,     0,     0,     0,   521,     0,    57,     7,     8,     0,
      58,     0,     0,    59,     0,     0,    11,    12,  -681,    13,
      14,     0,     0,     0,     0,    15,    16,     0,     0,     0,
      17,     0,     0,   522,   523,     0,    19,    20,    21,    22,
     524,  -614,    24,    25,     0,    26,     0,     0,     0,    60,
       0,     0,     0,    27,     0,    28,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    29,     0,     0,
       0,     0,     0,     0,    30,    31,    32,    33,     0,     0,
       0,     0,     0,     0,     0,    34,    35,    36,    37,     0,
       0,     0,    38,     0,     0,    39,     0,     0,    41,     0,
       0,   525,     0,    43,    44,    45,    46,    47,    48,    49,
      50,    51,     0,   129,   130,     0,     0,     0,     0,     0,
     131,     0,     0,    52,     0,     0,    53,    54,     0,    55,
      56,   132,   133,     0,     0,   134,   135,     0,    57,   136,
     137,     0,    58,   138,     0,    59,     0,     0,     0,   510,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   139,   140,     0,     0,   141,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    60,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   142,     0,     0,     0,     0,     0,     0,     0,
       0,   143,     0,   144,   145,   146,   147,   148,   149,   150,
       0,     0,   151,     0,     0,     0,   152,     0,   511,     0,
     153,     0,     0,     0,     0,     0,     0,     0,     0,   154,
     155,   156,   157,   129,   130,     0,     0,     0,     0,   158,
     131,   159,   160,   161,     0,   162,   163,   164,   165,   166,
       0,   132,   133,     0,     0,   134,   135,     0,     0,   136,
     137,   167,     0,   138,     0,     0,   168,   169,     0,     0,
     170,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   139,   140,     0,     0,   141,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   129,   130,     0,  1248,     0,     0,     0,
     131,  1249,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   132,   133,     0,     0,   134,   135,     0,     0,   136,
     137,     0,   142,   138,     0,     0,     0,     0,     0,     0,
       0,   143,     0,   144,   145,   146,   147,   148,   149,   150,
       0,     0,   151,   139,   140,     0,   152,   141,     0,     0,
     153,     0,     0,     0,     0,     0,     0,     0,     0,   154,
     155,   156,   157,   129,   130,     0,     0,     0,     0,   158,
     131,   159,   160,   161,     0,   162,   163,   164,   165,   166,
       0,   132,   133,     0,     0,   134,   135,     0,     0,   136,
     137,   167,   142,   138,     0,     0,   168,   169,     0,     0,
     170,   143,     0,   144,   145,   146,   147,   148,   149,   150,
       0,     0,   151,   139,   140,     0,   152,   141,     0,     0,
     153,     0,     0,     0,   415,     0,     0,     0,     0,   154,
     155,   156,   157,   129,   130,     0,     0,     0,     0,   158,
     131,   159,   160,   161,     0,   162,   163,   164,   165,   166,
     305,   132,   133,     0,     0,   134,   135,     0,     0,   136,
     137,   167,   142,   138,     0,     0,   168,   169,     0,     0,
     170,   143,     0,   144,   145,   146,   147,   148,   149,   150,
       0,     0,   151,   139,   140,     0,   152,   141,     0,     0,
     153,     0,     0,     0,     0,     0,     0,     0,     0,   154,
     155,   156,   157,   129,   130,     0,     0,     0,     0,   158,
     131,   159,   160,   161,     0,   162,   163,   164,   165,   166,
       0,   132,   133,     0,     0,   134,   135,     0,     0,   136,
     137,   167,   142,   138,     0,     0,   168,   169,     0,     0,
     170,   143,     0,   144,   145,   146,   147,   148,   149,   150,
       0,     0,   151,   139,   140,     0,   152,   141,     0,     0,
     153,   930,     0,     0,     0,     0,     0,     0,     0,   154,
     155,   156,   157,     0,     0,     0,     0,     0,     0,   158,
       0,   159,   160,   161,     0,   162,   163,   164,   165,   166,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   167,   142,     0,     0,     0,   168,   169,     0,     0,
     170,   143,     0,   144,   145,   146,   147,   148,   149,   150,
       0,     0,   151,     0,     0,     0,   152,     0,     0,     0,
     153,     0,     0,     0,     0,     0,     0,     0,     0,   154,
     155,   156,   157,     0,     0,     0,     0,     0,     0,   158,
       0,   159,   160,   161,     0,   162,   163,   164,   165,   166,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   167,     0,     0,     0,     0,   168,   169,     0,     0,
     170
};

static const yytype_int16 yycheck[] =
{
       5,    78,    79,     8,    65,   324,   415,    74,    42,   278,
     275,    82,    83,    42,   319,   335,   281,   748,   283,   512,
     308,   584,     1,    28,     1,     1,     1,    32,    33,    34,
      35,    36,     1,    38,    39,   141,    41,     1,   402,   403,
     404,   405,   406,   263,     1,   265,     1,    43,   313,  1039,
    1040,     1,     1,    55,     1,     1,    66,     1,     1,     1,
      65,   167,   168,   169,     1,     1,    36,     1,    68,    52,
       1,    15,    36,     1,   343,    68,     1,    21,   131,     1,
       1,    86,    87,    43,    89,    90,    91,     1,     1,     1,
     143,    21,   145,     1,     1,    38,    55,    20,   152,   104,
     131,    35,     1,   108,   131,   110,    52,    53,   113,   183,
       1,   116,    55,   144,    19,    36,     1,   122,   145,   124,
     187,    54,    69,   144,    29,     0,    31,    55,    36,   183,
      52,     1,    49,     1,    76,   188,    68,    68,     6,     1,
      76,     7,     1,   164,     0,    36,     1,     1,    71,    86,
     144,    36,   131,    86,    98,   131,     1,   183,     1,     1,
     186,   144,    68,     1,   143,     1,   145,   143,     1,   145,
       1,    37,   132,    72,    91,   242,     1,   187,    18,    19,
     144,   186,   152,   250,   186,   190,   186,   192,   184,   144,
     195,   268,    32,   186,   144,   144,   201,   264,   144,   204,
     144,   206,   144,    43,    68,   210,   131,   184,   183,   188,
      68,   186,   188,   144,   144,    68,   185,   186,   781,   144,
     184,   226,   144,   290,   183,    86,   231,   184,   233,    54,
     185,    68,   144,  1223,   184,   240,   183,    62,    63,   183,
     183,   246,   247,   248,   152,   152,   183,   183,    73,   183,
     255,   660,   257,   144,   186,   183,    81,    82,   183,   144,
     580,    86,   183,   131,   269,   553,   554,   107,   273,   183,
     183,   276,   112,   538,   144,   280,   183,   282,   144,   284,
     186,   286,   144,   288,   289,   144,   131,   507,   293,   144,
     144,   131,   398,   399,   299,    68,     1,    68,   164,   304,
     145,   144,   144,   308,    68,   310,   144,   312,   144,   628,
     315,   144,    20,   144,     3,     4,     5,    21,    68,    68,
     325,   185,   186,   148,   149,   150,   144,   185,    36,    64,
      52,    59,   185,   186,     1,    40,    41,    15,    68,     1,
      18,    65,   167,   168,    43,   185,    77,    36,   185,   186,
      68,     6,    56,    96,    97,    68,    68,    68,   183,    48,
      49,    50,    51,    52,    53,    21,    68,    68,    68,   274,
      68,    55,    77,   278,   105,    80,   869,    68,    83,    84,
      85,   129,    55,    68,   184,    68,  1117,  1118,    68,    68,
     138,    60,    76,    77,    72,    68,   101,   102,   183,    83,
      84,    85,    91,    76,    86,    72,  1086,  1087,  1088,    57,
      72,   154,   185,    61,   185,   175,   176,   101,   102,   183,
     425,   426,   144,   151,   165,   166,   131,   132,   333,    62,
      63,    87,   437,   438,    67,   185,   185,   172,   343,   144,
     144,   165,   166,   520,   152,   450,   135,   136,   453,   185,
     186,   756,   757,   758,   359,   185,   361,   362,   363,   364,
    1140,   366,   987,   768,   784,  1145,   991,   185,   373,   374,
     375,   835,   185,   185,   185,  1155,   381,   382,   383,   384,
     385,   386,   387,   185,   185,   185,    68,   185,    70,   131,
      15,   525,   761,    18,   185,   500,   525,   766,   767,   183,
     185,   143,   185,   145,    15,   185,   185,    18,    19,   185,
     186,   516,   517,    93,    15,    18,    19,    18,    18,    19,
     183,    32,  1202,   186,   529,   105,   185,   186,   533,    32,
     183,    42,    32,   186,   186,   540,    92,   542,    43,   124,
     173,   174,   127,    43,   449,   101,   188,   452,   553,   554,
     131,   183,   183,    65,   186,   186,   136,   562,   183,   115,
     565,   186,   567,    54,   144,    55,   144,   123,   573,   125,
     183,    62,    63,   186,    20,    54,   177,   178,   179,    69,
      70,    71,   184,    62,    63,   184,    76,    98,   184,   594,
     395,   396,   397,   598,    73,   184,   107,   108,   109,   185,
     186,   112,    81,    82,   107,   108,   109,   107,   184,   112,
      16,    17,   112,    68,   170,    70,    22,    23,   184,   300,
     131,   302,   400,   401,   701,    16,    17,   184,   131,    20,
     184,   131,    23,   184,    35,    36,   184,    38,   907,   184,
      46,   197,   407,   408,   711,    89,    90,  1042,  1043,   184,
     727,  1060,   208,   918,    55,    46,   184,   148,   149,   150,
     665,   184,   184,   668,   735,   184,   671,   184,    69,   148,
     149,   150,    60,   171,   184,    76,   232,   184,   184,   684,
     184,    65,   184,    74,   169,    91,    92,    93,   167,   168,
      16,    17,   184,   170,    20,   184,   184,    23,   184,   105,
      91,    92,   184,   780,   184,   782,   184,   712,   184,   776,
     184,   716,   717,    23,   719,    23,   721,   185,    70,   724,
      46,   144,    43,   728,   729,   730,   186,   186,   186,    77,
     186,   736,  1001,   144,  1003,    83,    84,    85,    20,    76,
     144,   186,   747,    20,   300,   144,   302,   144,    74,   186,
     306,    54,   185,   101,   102,    55,   185,   185,   144,  1024,
     316,   144,    23,    23,   769,    91,    92,   772,   324,   774,
     775,  1193,  1194,   778,    20,   144,  1198,    52,   144,   184,
      75,    80,  1204,  1205,  1206,   185,   791,   792,    68,   185,
     144,   186,   697,   698,   699,   700,   185,   864,    20,   186,
      86,   186,    57,   185,   360,   186,   186,   185,   185,   185,
     185,   185,   368,   369,   370,   185,   372,   185,   185,   144,
     725,   185,   185,   379,   185,   144,   186,   185,   905,   185,
     144,   186,   388,   389,    88,     1,     1,    36,  1107,   186,
     186,   846,    51,    31,    86,   185,   144,   144,    76,   185,
     188,  1120,   186,   184,   144,    70,   761,   144,  1127,  1128,
     144,   766,   767,   186,    55,   144,    84,   185,    31,   143,
      31,   186,   185,   185,    20,   186,    83,    55,   105,   144,
    1149,   112,   959,   439,   186,    95,   144,    70,   184,    70,
     895,   796,   797,   898,   899,   800,   185,   902,    20,   994,
     805,  1130,   993,  1126,   909,   910,   811,   770,   813,   934,
    1179,  1034,  1109,  1267,  1276,    67,  1005,   978,   321,   254,
     825,   492,   884,   479,   929,   481,   831,   578,   409,   658,
       4,   772,   659,   500,   114,   410,    14,    14,   411,   844,
     845,  1018,   118,  1165,    73,   545,  1215,  1216,   185,  1268,
     859,  1270,   957,  1090,  1199,  1207,   867,   513,  1195,  1133,
     686,   551,   872,   745,    14,   479,   267,   544,  1037,   585,
    1177,   929,   977,   902,   345,   980,  1102,   788,    -1,  1248,
    1249,    -1,    -1,    -1,    -1,    -1,    -1,   992,    -1,   894,
      -1,    -1,    -1,    -1,    -1,   551,    -1,    -1,    -1,    -1,
      -1,    -1,   907,  1008,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1023,    -1,
      -1,    -1,   578,   579,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1039,  1040,    -1,    -1,    -1,  1116,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1126,    -1,    -1,    -1,    -1,
      -1,    -1,   628,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1086,  1087,  1088,    -1,   990,    -1,    -1,    -1,  1094,
    1095,   996,    -1,    -1,    -1,    -1,  1001,  1102,  1003,    -1,
    1105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1117,  1118,    -1,    -1,    -1,    -1,    -1,    -1,
    1125,    -1,    -1,    -1,  1129,   681,    -1,    -1,    -1,    -1,
    1135,    -1,    -1,    -1,    -1,  1140,    -1,  1142,    -1,    -1,
    1145,    -1,  1147,    -1,    -1,  1150,    -1,    -1,  1053,    -1,
    1155,    -1,  1057,   709,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1167,    -1,    -1,    -1,    -1,  1072,    -1,    -1,
      -1,    -1,  1177,    -1,    -1,     1,    -1,    -1,    -1,    -1,
      -1,     7,     8,    -1,    -1,  1262,    -1,    -1,    14,   745,
      -1,    -1,  1259,    -1,    -1,    -1,    -1,  1202,  1275,    25,
      26,    -1,  1107,    29,    30,  1210,  1211,    33,    34,    -1,
      -1,    37,    -1,    -1,    -1,  1120,    -1,    -1,  1223,    -1,
      -1,    -1,  1127,  1128,    -1,    -1,  1131,    -1,    -1,   785,
     786,    57,    58,    -1,    -1,    61,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1149,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   823,    -1,    -1,
      -1,    -1,    -1,    -1,  1179,  1280,  1281,  1282,    -1,    -1,
     106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,
      -1,   117,   118,   119,   120,   121,   122,   123,    -1,    -1,
     126,    -1,    -1,    -1,   130,    -1,    -1,    -1,   134,    -1,
    1215,  1216,    -1,    -1,    -1,    -1,   872,   143,   144,   145,
     146,    -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,   155,
     156,   157,    -1,   159,   160,   161,   162,   163,   164,    -1,
      -1,    -1,    -1,  1248,  1249,    -1,    -1,    -1,    -1,   175,
      -1,    -1,    -1,    -1,   180,   181,     1,   183,   184,    -1,
     186,    -1,     7,     8,    -1,   921,    -1,    -1,    -1,    14,
      -1,    -1,   928,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    26,    -1,    -1,    29,    30,    -1,    -1,    33,    34,
      -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    58,    -1,    -1,    61,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,
      -1,    -1,   988,     7,     8,    -1,    -1,    -1,    -1,    -1,
      14,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    26,    -1,    -1,    29,    30,    -1,    -1,    33,
      34,   106,    -1,    37,    -1,    -1,    -1,    -1,    -1,    43,
     115,    -1,   117,   118,   119,   120,   121,   122,   123,  1035,
    1036,   126,    -1,    57,    58,   130,    -1,    61,    -1,   134,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,   144,
     145,   146,    -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,
     155,   156,   157,    -1,   159,   160,   161,   162,   163,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     175,    -1,   106,    -1,    -1,   180,   181,    -1,   183,   184,
      -1,   115,    -1,   117,   118,   119,   120,   121,   122,   123,
      -1,    -1,   126,    -1,    -1,    -1,   130,    -1,   132,    -1,
     134,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,
     144,   145,   146,    -1,    -1,    -1,    -1,    -1,    -1,   153,
      -1,   155,   156,   157,    -1,   159,   160,   161,   162,   163,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   175,     1,    -1,    -1,    -1,   180,   181,     7,     8,
     184,    -1,    -1,  1169,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    -1,
      29,    30,    -1,    -1,    33,    34,    -1,    -1,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,
      -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,     7,     8,
      -1,    -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    -1,
      29,    30,    -1,    -1,    33,    34,    -1,   106,    37,    -1,
      -1,    -1,  1268,    -1,  1270,    -1,   115,    -1,   117,   118,
     119,   120,   121,   122,   123,    -1,    -1,   126,    57,    58,
      -1,   130,    61,    -1,    -1,   134,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   143,   144,   145,   146,    -1,    -1,
      -1,    -1,    -1,    -1,   153,    -1,   155,   156,   157,    -1,
     159,   160,   161,   162,   163,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   175,   106,    -1,    -1,
      -1,   180,   181,    -1,   183,   184,   115,    -1,   117,   118,
     119,   120,   121,   122,   123,    -1,    -1,   126,    -1,    -1,
      -1,   130,    -1,    -1,    -1,   134,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   143,   144,   145,   146,    -1,    -1,
      -1,    -1,    -1,    -1,   153,    -1,   155,   156,   157,    -1,
     159,   160,   161,   162,   163,   164,    -1,     1,    -1,    -1,
      -1,    -1,    -1,     7,     8,    -1,   175,    -1,    -1,    -1,
      14,   180,   181,    17,    -1,   184,    -1,    -1,    -1,    -1,
      -1,    25,    26,    -1,    -1,    29,    30,    -1,    -1,    33,
      34,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    58,    -1,    -1,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,
      -1,    -1,    -1,     7,     8,    -1,    -1,    -1,    -1,    -1,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    26,    -1,    -1,    29,    30,    -1,    -1,    33,
      34,    -1,   106,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   115,    -1,   117,   118,   119,   120,   121,   122,   123,
      -1,    -1,   126,    57,    58,    -1,   130,    61,    -1,    -1,
     134,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,   143,
     144,   145,   146,     7,     8,    -1,    -1,    -1,    -1,   153,
      14,   155,   156,   157,    -1,   159,   160,   161,   162,   163,
      -1,    25,    26,    -1,    -1,    29,    30,    -1,    -1,    33,
      34,   175,   106,    37,    -1,    -1,   180,   181,    -1,    -1,
     184,   115,    -1,   117,   118,   119,   120,   121,   122,   123,
      -1,    -1,   126,    57,    58,    -1,   130,    61,    -1,    -1,
     134,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,   143,
     144,   145,   146,     7,     8,    -1,    -1,    -1,    -1,   153,
      14,   155,   156,   157,    -1,   159,   160,   161,   162,   163,
      -1,    25,    26,    -1,    -1,    29,    30,    -1,    -1,    33,
      34,   175,   106,    37,    -1,    -1,   180,   181,    -1,    -1,
     184,   115,    -1,   117,   118,   119,   120,   121,   122,   123,
      -1,    -1,   126,    57,    58,    -1,   130,    61,    -1,    -1,
     134,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,   143,
     144,   145,   146,     7,     8,    -1,    -1,    -1,    -1,   153,
      14,   155,   156,   157,    -1,   159,   160,   161,   162,   163,
      -1,    25,    26,    -1,    -1,    29,    30,    -1,    -1,    33,
      34,   175,   106,    37,    -1,    -1,   180,   181,    -1,    -1,
     184,   115,    -1,   117,   118,   119,   120,   121,   122,   123,
      -1,    -1,   126,    57,    58,    -1,   130,    61,    -1,    -1,
     134,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,   143,
     144,   145,   146,     7,     8,    -1,    -1,    -1,    -1,   153,
      14,   155,   156,   157,    -1,   159,   160,   161,   162,   163,
      -1,    25,    26,    -1,    -1,    29,    30,    -1,    -1,    33,
      34,   175,   106,    37,    -1,    -1,   180,   181,    -1,    -1,
     184,   115,    -1,   117,   118,   119,   120,   121,   122,   123,
      -1,    -1,   126,    57,    58,    -1,   130,    61,    -1,    -1,
     134,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,   143,
     144,   145,   146,     7,     8,    -1,    -1,    -1,    -1,   153,
      14,   155,   156,   157,    -1,   159,   160,   161,   162,   163,
      -1,    25,    26,    -1,    -1,    29,    30,    -1,    -1,    33,
      34,   175,   106,    37,    -1,    -1,   180,   181,    -1,    -1,
     184,   115,    -1,   117,   118,   119,   120,   121,   122,   123,
      -1,    -1,   126,    57,    58,    -1,   130,    61,    -1,    -1,
     134,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,   143,
     144,   145,   146,     7,     8,    -1,    -1,    -1,    -1,   153,
      14,   155,   156,   157,    -1,   159,   160,   161,   162,   163,
      -1,    25,    26,    -1,    -1,    29,    30,    -1,    -1,    33,
      34,   175,   106,    37,    -1,    -1,   180,   181,    -1,    -1,
     184,   115,    -1,   117,   118,   119,   120,   121,   122,   123,
      -1,    -1,   126,    57,    58,    -1,   130,    61,    -1,    -1,
     134,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,   143,
     144,   145,   146,     7,     8,    -1,    -1,    -1,    -1,   153,
      14,   155,   156,   157,    -1,   159,   160,   161,   162,   163,
      -1,    25,    26,    -1,    -1,    29,    30,    -1,    -1,    33,
      34,   175,   106,    37,    -1,    -1,   180,   181,    -1,    -1,
     184,   115,    -1,   117,   118,   119,   120,   121,   122,   123,
      -1,    -1,   126,    57,    58,    -1,   130,    61,    -1,    -1,
     134,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,   143,
     144,   145,   146,     7,     8,    -1,    -1,    -1,    -1,   153,
      14,   155,   156,   157,    -1,   159,   160,   161,   162,   163,
      -1,    25,    26,    -1,    -1,    29,    30,    -1,    -1,    33,
      34,   175,   106,    37,    -1,    -1,   180,   181,    -1,    -1,
     184,   115,    -1,   117,   118,   119,   120,   121,   122,   123,
      -1,    -1,   126,    57,    58,    -1,   130,    61,    -1,    -1,
     134,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,   143,
     144,   145,   146,     7,     8,    -1,    -1,    -1,    -1,   153,
      14,   155,   156,   157,    -1,   159,   160,   161,   162,   163,
      -1,    25,    26,    -1,    -1,    29,    30,    -1,    -1,    33,
      34,   175,   106,    37,    -1,    -1,   180,   181,    -1,    -1,
     184,   115,    -1,   117,   118,   119,   120,   121,   122,   123,
      -1,    -1,   126,    57,    58,    -1,   130,    61,    -1,    -1,
     134,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,
     144,   145,   146,    -1,    -1,    -1,    -1,    -1,    -1,   153,
      -1,   155,   156,   157,    -1,   159,   160,   161,   162,   163,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   175,   106,    -1,    -1,    -1,   180,   181,    -1,    -1,
     184,   115,    -1,   117,   118,   119,   120,   121,   122,   123,
      -1,    -1,   126,    -1,    -1,    -1,   130,    -1,    -1,    -1,
     134,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,
     144,   145,   146,    -1,    -1,    -1,    -1,    -1,    -1,   153,
      -1,   155,   156,   157,    -1,   159,   160,   161,   162,   163,
      -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,     6,
      -1,   175,     9,    10,    -1,    -1,   180,   181,    -1,    -1,
     184,    18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,
      27,    28,    -1,    -1,    -1,    32,    -1,    -1,    35,    36,
      -1,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    71,    -1,    -1,    -1,    75,    76,
      77,    78,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    88,    89,    90,    -1,    -1,    -1,    94,    -1,    -1,
      97,    -1,    -1,   100,    -1,    -1,   103,    -1,   105,   106,
     107,   108,   109,   110,   111,   112,   113,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,
      -1,   128,   129,    -1,   131,   132,     1,    -1,    -1,    -1,
      -1,     6,    -1,   140,     9,    10,    -1,   144,    -1,    -1,
     147,    -1,    -1,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    27,    28,    -1,    -1,    -1,    32,    -1,    -1,
      35,    36,    -1,    38,    39,    40,    41,    42,    43,    44,
      45,    -1,    47,    -1,    -1,    -1,   183,    -1,    -1,    -1,
      55,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    -1,    -1,
      75,    76,    77,    78,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    88,    89,    90,    -1,    -1,    -1,    94,
      -1,    -1,    97,    -1,    -1,   100,    -1,    -1,   103,    -1,
     105,   106,   107,   108,   109,   110,   111,   112,   113,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     125,    -1,    -1,   128,   129,    -1,   131,   132,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   140,    -1,    -1,    -1,   144,
      -1,    -1,   147,     1,    -1,    -1,    -1,    -1,     6,    -1,
      -1,     9,    10,    11,    -1,    -1,    -1,    15,    -1,    -1,
      18,    19,    -1,    21,    22,    -1,    -1,    -1,    -1,    27,
      28,    -1,    -1,    -1,    32,    -1,    -1,    35,   183,    -1,
      38,    39,    40,    41,    42,    43,    44,    45,    -1,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,
      78,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      88,    89,    90,    -1,    -1,    -1,    94,    -1,    -1,    97,
      98,    -1,   100,    -1,    -1,   103,    -1,   105,   106,   107,
     108,   109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,
     128,   129,    -1,   131,   132,     1,    -1,    -1,    -1,    -1,
       6,    -1,   140,     9,    10,    -1,   144,    -1,    -1,   147,
      -1,    -1,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    -1,    -1,    -1,    32,    -1,    -1,    35,
      36,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      -1,    47,    -1,    -1,    -1,   183,    -1,    -1,    -1,    55,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    77,    78,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    88,    89,    90,    -1,    -1,    -1,    94,    -1,
      -1,    97,    -1,    -1,   100,    -1,    -1,   103,    -1,   105,
     106,   107,   108,   109,   110,   111,   112,   113,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,
      -1,    -1,   128,   129,    -1,   131,   132,     1,    -1,    -1,
      -1,    -1,     6,    -1,   140,     9,    10,    -1,   144,    -1,
      -1,   147,    -1,    -1,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    35,    36,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    -1,    47,    -1,    -1,    -1,   183,    -1,    -1,
      -1,    55,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    76,    77,    78,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    88,    89,    90,    -1,    -1,    -1,
      94,    -1,    -1,    97,    -1,    -1,   100,    -1,    -1,   103,
      -1,   105,   106,   107,   108,   109,   110,   111,   112,   113,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   125,    -1,    -1,   128,   129,    -1,   131,   132,     1,
      -1,    -1,    -1,    -1,     6,    -1,   140,     9,    10,    -1,
     144,    -1,    -1,   147,    -1,    -1,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    27,    28,    -1,    -1,    -1,
      32,    -1,    -1,    35,    36,    -1,    38,    39,    40,    41,
      42,    43,    44,    45,    -1,    47,    -1,    -1,    -1,   183,
      -1,    -1,    -1,    55,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    77,    78,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    88,    89,    90,    -1,
      -1,    -1,    94,    -1,    -1,    97,    -1,    -1,   100,    -1,
      -1,   103,    -1,   105,   106,   107,   108,   109,   110,   111,
     112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   125,    -1,    -1,   128,   129,    -1,   131,
     132,     1,    -1,    -1,    -1,    -1,     6,    -1,   140,     9,
      10,    -1,   144,    -1,    -1,   147,    -1,    -1,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    27,    28,    -1,
      -1,    -1,    32,    -1,    -1,    35,    36,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    -1,    47,    -1,    -1,
      -1,   183,    -1,    -1,    -1,    55,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,
      90,    -1,    -1,    -1,    94,    -1,    -1,    97,    -1,    -1,
     100,    -1,    -1,   103,    -1,   105,   106,   107,   108,   109,
     110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,   128,   129,
      -1,   131,   132,     1,    -1,    -1,    -1,    -1,     6,    -1,
     140,     9,    10,    -1,   144,    -1,    -1,   147,    -1,    -1,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,
      28,    -1,    -1,    -1,    32,    -1,    -1,    35,    36,    -1,
      38,    39,    40,    41,    42,    43,    44,    45,    -1,    47,
      -1,    -1,    -1,   183,    -1,    -1,    -1,    55,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,
      78,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      88,    89,    90,    -1,    -1,    -1,    94,    -1,    -1,    97,
      -1,    -1,   100,    -1,    -1,   103,    -1,   105,   106,   107,
     108,   109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,
     128,   129,    -1,   131,   132,     1,    -1,    -1,    -1,    -1,
       6,    -1,   140,     9,    10,    -1,   144,    -1,    -1,   147,
      -1,    -1,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    -1,    -1,    -1,    32,    -1,    -1,    35,
      36,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      -1,    47,    -1,    -1,    -1,   183,    -1,    -1,    -1,    55,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    77,    78,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    88,    89,    90,    -1,    -1,    -1,    94,    -1,
      -1,    97,    -1,    -1,   100,    -1,    -1,   103,    -1,   105,
     106,   107,   108,   109,   110,   111,   112,   113,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,
      -1,    -1,   128,   129,    -1,   131,   132,     1,    -1,    -1,
      -1,    -1,     6,    -1,   140,     9,    10,    -1,   144,    -1,
      -1,   147,    -1,    -1,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    35,    36,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    -1,    47,    -1,    -1,    -1,   183,    -1,    -1,
      -1,    55,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    76,    77,    78,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    88,    89,    90,    -1,    -1,    -1,
      94,    -1,    -1,    97,    -1,    -1,   100,    -1,    -1,   103,
      -1,   105,   106,   107,   108,   109,   110,   111,   112,   113,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   125,    -1,    -1,   128,   129,    -1,   131,   132,     1,
      -1,    -1,    -1,    -1,     6,    -1,   140,     9,    10,    -1,
     144,    -1,    -1,   147,    -1,    -1,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    27,    28,    -1,    -1,    -1,
      32,    -1,    -1,    35,    36,    -1,    38,    39,    40,    41,
      42,    43,    44,    45,    -1,    47,    -1,    -1,    -1,   183,
      -1,    -1,    -1,    55,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    77,    78,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    88,    89,    90,    -1,
      -1,    -1,    94,    -1,    -1,    97,    -1,    -1,   100,    -1,
      -1,   103,    -1,   105,   106,   107,   108,   109,   110,   111,
     112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   125,    -1,    -1,   128,   129,    -1,   131,
     132,     1,    -1,    -1,    -1,    -1,     6,    -1,   140,     9,
      10,    -1,   144,    -1,    -1,   147,    -1,    -1,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    27,    28,    -1,
      -1,    -1,    32,    -1,    -1,    35,    36,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    -1,    47,    -1,    -1,
      -1,   183,    -1,    -1,    -1,    55,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,
      90,    -1,    -1,    -1,    94,    -1,    -1,    97,    -1,    -1,
     100,    -1,    -1,   103,    -1,   105,   106,   107,   108,   109,
     110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,   128,   129,
      -1,   131,   132,     1,    -1,    -1,    -1,    -1,     6,    -1,
     140,     9,    10,    -1,   144,    -1,    -1,   147,    -1,    -1,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,
      28,    -1,    -1,    -1,    32,    -1,    -1,    35,    36,    -1,
      38,    39,    40,    41,    42,    43,    44,    45,    -1,    47,
      -1,    -1,    -1,   183,    -1,    -1,    -1,    55,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,
      78,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      88,    89,    90,    -1,    -1,    -1,    94,    -1,    -1,    97,
      -1,    -1,   100,    -1,    -1,   103,    -1,   105,   106,   107,
     108,   109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,
     128,   129,    -1,   131,   132,     1,    -1,    -1,    -1,    -1,
       6,    -1,   140,     9,    10,    -1,   144,    -1,    -1,   147,
      -1,    -1,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    -1,    -1,    -1,    32,    -1,    -1,    35,
      36,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      -1,    47,    -1,    -1,    -1,   183,    -1,    -1,    -1,    55,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    77,    78,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    88,    89,    90,    -1,    -1,    -1,    94,    -1,
      -1,    97,    -1,    -1,   100,    -1,    -1,   103,    -1,   105,
     106,   107,   108,   109,   110,   111,   112,   113,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,
      -1,    -1,   128,   129,    -1,   131,   132,     1,    -1,    -1,
      -1,    -1,     6,    -1,   140,     9,    10,    -1,   144,    -1,
      -1,   147,    -1,    -1,    18,    19,    -1,    21,    22,    -1,
      -1,    -1,    -1,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    35,    36,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    -1,    47,    -1,    -1,    -1,   183,    -1,    -1,
      -1,    55,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    70,    -1,    -1,    -1,
      -1,    -1,    76,    77,    78,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    88,    89,    90,    -1,    -1,    -1,
      94,    -1,    -1,    97,    -1,    -1,   100,    -1,    -1,   103,
      -1,   105,   106,   107,   108,   109,   110,   111,   112,   113,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   125,    -1,    -1,   128,   129,    -1,   131,   132,     1,
      -1,    -1,    -1,    -1,     6,    -1,   140,     9,    10,    -1,
     144,    -1,    -1,   147,    -1,    -1,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    27,    28,    -1,    -1,    -1,
      32,    -1,    -1,    35,    36,    -1,    38,    39,    40,    41,
      42,    43,    44,    45,    -1,    47,    -1,    -1,    -1,   183,
      -1,    -1,    -1,    55,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    77,    78,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    88,    89,    90,    -1,
      -1,    -1,    94,    -1,    -1,    97,    -1,    -1,   100,    -1,
      -1,   103,    -1,   105,   106,   107,   108,   109,   110,   111,
     112,   113,    -1,     7,     8,    -1,    -1,    -1,    -1,    -1,
      14,    -1,    -1,   125,    -1,    -1,   128,   129,    -1,   131,
     132,    25,    26,    -1,    -1,    29,    30,    -1,   140,    33,
      34,    -1,   144,    37,    -1,   147,    -1,    -1,    -1,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    58,    -1,    -1,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   183,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   115,    -1,   117,   118,   119,   120,   121,   122,   123,
      -1,    -1,   126,    -1,    -1,    -1,   130,    -1,   132,    -1,
     134,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,
     144,   145,   146,     7,     8,    -1,    -1,    -1,    -1,   153,
      14,   155,   156,   157,    -1,   159,   160,   161,   162,   163,
      -1,    25,    26,    -1,    -1,    29,    30,    -1,    -1,    33,
      34,   175,    -1,    37,    -1,    -1,   180,   181,    -1,    -1,
     184,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    58,    -1,    -1,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     7,     8,    -1,    80,    -1,    -1,    -1,
      14,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    26,    -1,    -1,    29,    30,    -1,    -1,    33,
      34,    -1,   106,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   115,    -1,   117,   118,   119,   120,   121,   122,   123,
      -1,    -1,   126,    57,    58,    -1,   130,    61,    -1,    -1,
     134,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,
     144,   145,   146,     7,     8,    -1,    -1,    -1,    -1,   153,
      14,   155,   156,   157,    -1,   159,   160,   161,   162,   163,
      -1,    25,    26,    -1,    -1,    29,    30,    -1,    -1,    33,
      34,   175,   106,    37,    -1,    -1,   180,   181,    -1,    -1,
     184,   115,    -1,   117,   118,   119,   120,   121,   122,   123,
      -1,    -1,   126,    57,    58,    -1,   130,    61,    -1,    -1,
     134,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,   143,
     144,   145,   146,     7,     8,    -1,    -1,    -1,    -1,   153,
      14,   155,   156,   157,    -1,   159,   160,   161,   162,   163,
     164,    25,    26,    -1,    -1,    29,    30,    -1,    -1,    33,
      34,   175,   106,    37,    -1,    -1,   180,   181,    -1,    -1,
     184,   115,    -1,   117,   118,   119,   120,   121,   122,   123,
      -1,    -1,   126,    57,    58,    -1,   130,    61,    -1,    -1,
     134,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,
     144,   145,   146,     7,     8,    -1,    -1,    -1,    -1,   153,
      14,   155,   156,   157,    -1,   159,   160,   161,   162,   163,
      -1,    25,    26,    -1,    -1,    29,    30,    -1,    -1,    33,
      34,   175,   106,    37,    -1,    -1,   180,   181,    -1,    -1,
     184,   115,    -1,   117,   118,   119,   120,   121,   122,   123,
      -1,    -1,   126,    57,    58,    -1,   130,    61,    -1,    -1,
     134,   135,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,
     144,   145,   146,    -1,    -1,    -1,    -1,    -1,    -1,   153,
      -1,   155,   156,   157,    -1,   159,   160,   161,   162,   163,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   175,   106,    -1,    -1,    -1,   180,   181,    -1,    -1,
     184,   115,    -1,   117,   118,   119,   120,   121,   122,   123,
      -1,    -1,   126,    -1,    -1,    -1,   130,    -1,    -1,    -1,
     134,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,
     144,   145,   146,    -1,    -1,    -1,    -1,    -1,    -1,   153,
      -1,   155,   156,   157,    -1,   159,   160,   161,   162,   163,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   175,    -1,    -1,    -1,    -1,   180,   181,    -1,    -1,
     184
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   190,   193,     0,   194,     1,     6,     9,    10,    11,
      15,    18,    19,    21,    22,    27,    28,    32,    35,    38,
      39,    40,    41,    42,    44,    45,    47,    55,    57,    69,
      76,    77,    78,    79,    87,    88,    89,    90,    94,    97,
      98,   100,   103,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   125,   128,   129,   131,   132,   140,   144,   147,
     183,   192,   195,   196,   209,   232,   234,   236,   238,   239,
     280,   320,   331,   334,   336,   342,   347,   354,   357,   360,
     363,   364,   365,   366,   367,   368,   369,   413,   415,   416,
     418,   424,   425,   431,   443,   444,   454,   456,   461,   462,
     466,   473,   475,   192,     1,   144,   192,    21,    56,   144,
     241,   242,   243,     1,   184,   308,     1,   144,   300,   331,
     334,   431,     1,   467,     1,   463,     1,   476,     1,     7,
       8,    14,    25,    26,    29,    30,    33,    34,    37,    57,
      58,    61,   106,   115,   117,   118,   119,   120,   121,   122,
     123,   126,   130,   134,   143,   144,   145,   146,   153,   155,
     156,   157,   159,   160,   161,   162,   163,   175,   180,   181,
     184,   252,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   269,   271,   274,     1,   144,    15,    18,
       1,   144,     1,   144,   184,   245,   192,   290,     1,   274,
      86,   274,   192,   192,   152,   192,     1,   192,   292,   192,
       1,     6,   131,   192,   192,   192,    15,    18,    19,    32,
      42,    98,   112,   131,   368,   444,     6,   144,   313,   144,
     310,     1,   294,     1,    68,   144,     1,   343,   372,   335,
       1,   144,     1,    86,   291,   414,     1,    15,    98,   192,
     243,   251,    60,   233,   233,     1,   144,     1,   144,   306,
     183,   191,    86,   299,   346,   191,     1,   337,   302,    20,
      71,   276,   276,     1,   184,   283,     1,    36,   184,   362,
       1,   362,     1,   362,     1,   144,   349,   350,     1,   131,
     144,   192,   448,     1,   192,   430,   186,   430,   430,     1,
     186,   192,   305,   429,     1,   164,   274,   275,   426,   428,
       1,   144,     1,   285,    43,     1,   457,   275,   192,   210,
     192,   186,   192,   192,   308,   254,   255,   256,   275,   192,
     287,   131,   336,    65,   450,   345,   346,   144,   192,   275,
     192,   275,    20,    36,   152,   477,   478,   479,   489,    55,
      69,    70,    71,    76,   359,   361,   245,   184,   184,   184,
     184,   184,   184,   184,   184,   245,   184,   259,   184,   184,
     184,   184,   184,   184,   184,   184,   184,   184,   184,   184,
     184,   184,   184,   184,   184,   184,   184,   184,   184,   184,
     259,   259,   259,   275,    60,   177,   178,   179,   175,   176,
     165,   166,    62,    63,    67,   173,   174,    64,   172,   171,
     170,   169,    65,    66,   187,    68,   359,   192,   191,    23,
      23,   192,   192,   185,   192,     1,   275,   432,    70,    70,
      52,   144,   192,   192,   192,   275,   192,    93,   105,   136,
     144,   144,    15,    18,     1,   370,    43,   192,   186,   186,
     315,   186,   186,   312,   192,   275,   192,   144,    20,    76,
     144,   379,   192,   186,   191,   332,   333,    54,    62,    63,
      73,    81,    82,   148,   149,   150,   167,   168,   434,   435,
     420,   421,   192,   192,   192,   191,   240,   276,   240,   192,
     235,   192,   237,    77,    83,    84,    85,   101,   102,   321,
     323,   324,   330,   317,    52,   144,   317,   191,   317,    20,
      43,   132,   340,   341,   452,   276,     1,    69,   192,   447,
     286,     6,    35,    36,    42,   103,   277,   280,   356,    20,
     192,   230,   274,   349,   192,    59,   151,   230,   281,   192,
     349,   192,   349,   192,   351,   186,   192,   192,   192,   191,
     192,   417,   192,   426,   426,   192,   275,   186,   429,   192,
     455,   192,   349,   192,   275,     1,   186,   288,   211,   231,
     275,   242,   254,     1,    86,   192,   309,   348,   186,    54,
     301,   274,    55,   318,   450,   303,   468,   464,    35,    36,
      38,    55,    69,    76,   495,     1,   230,   480,    20,   478,
     185,   185,   274,   275,   274,   274,   274,   274,   274,   275,
     275,   275,     1,   144,   185,   275,   274,   274,   274,     1,
     144,     1,   144,     1,    52,    53,   144,   275,   253,   274,
     274,   274,   274,   274,   274,   274,   275,   275,   185,    57,
      61,   258,   258,   258,   259,   259,   260,   260,   261,   261,
     261,   261,   261,   262,   262,   263,   264,   265,   268,   270,
     272,   271,   144,   144,   192,     1,   192,   433,   293,   192,
     192,   275,   296,   297,    23,    23,    20,   144,   314,   274,
     192,   311,   274,   192,   295,   373,   419,    52,   144,   432,
     275,   422,   423,    20,   184,   246,   246,   328,   326,   325,
     327,   307,    55,    76,   192,   322,   324,    80,   317,   453,
     379,   275,    20,   192,   192,   276,     1,    72,     1,    72,
       1,    72,    15,    18,    72,    75,   355,   358,     1,    38,
      55,   192,   449,   185,   192,   185,   349,   192,   192,   352,
     434,   350,   422,   429,   429,   427,   186,   470,   471,   472,
     192,   458,   192,   144,   192,   474,     3,     4,     5,    36,
      48,    49,    50,    51,    52,    53,    91,   135,   136,   212,
     213,   214,   185,   192,     1,    52,   144,   256,     1,   275,
     436,   450,   319,   318,   470,   186,   186,   192,    20,   490,
      86,     1,    35,   192,   494,   185,   186,   186,   185,   185,
     186,   185,     1,   185,   186,   186,   185,   185,   185,   185,
     185,   186,   185,   186,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   186,   254,   186,   185,   185,   185,   185,
     185,   186,   185,   185,    57,    65,   266,   267,   271,   200,
     198,   192,   192,   192,    49,    91,   410,    16,    17,    22,
      23,    46,    91,    92,    93,   105,   400,   144,   144,   371,
     144,   316,   275,   192,   231,   374,   375,   376,   377,   451,
     452,   420,   186,    18,    19,    32,    43,   107,   112,   131,
     185,   247,   248,   249,    88,    96,    97,   154,   250,   274,
     274,   274,   274,   276,   329,   275,   338,   191,     1,    76,
     192,   445,    20,   192,   192,   279,   192,   278,   192,     1,
       1,   192,     1,   274,   276,   192,   192,   192,   284,   362,
     192,   353,   428,   144,   164,   192,   186,   472,   186,   289,
     135,   231,   231,   231,    51,   230,   217,   230,   230,   231,
     192,   214,   309,   192,   192,   191,    55,   192,   442,    31,
     439,   276,   318,   276,   450,   275,   275,   495,    86,   492,
     144,   192,   192,   274,   274,   274,   185,   144,   274,   274,
     274,   275,   185,   274,   274,   261,   188,     1,   184,   205,
       1,   184,   201,   274,   274,   192,   404,   403,   402,    76,
     401,   405,   298,   199,   197,   374,   186,   191,   381,   379,
     423,   184,    43,   184,   185,   186,   144,   249,    20,   274,
     192,   383,   380,   381,   192,   192,   447,   276,   230,   192,
     192,    70,    70,   349,   282,   275,   275,   474,   144,   217,
     216,   124,   127,   218,   215,   437,   186,   440,   441,    20,
      20,    55,   469,   465,   192,   144,   276,   481,   185,   185,
     185,   185,   185,   186,   185,   185,   185,   186,   185,   185,
     273,   192,   206,   207,   243,   192,   143,   202,   203,   411,
     406,   407,   408,   406,   275,   274,   406,   192,   205,   201,
     274,    16,    17,    20,    23,    46,    74,    91,    92,   382,
     378,   230,   230,   248,     1,    55,   192,   446,   131,   144,
     344,    20,    20,   276,   192,   349,   459,    31,   219,   219,
     275,   275,    55,   441,   446,   446,   304,   471,   471,   491,
      84,   488,   274,   274,   271,   185,   186,   208,   204,   185,
     186,    31,   412,   186,   274,     1,   131,   143,   145,   188,
     393,   394,     1,   131,   145,   385,   386,     1,    17,   384,
       1,   131,   143,   145,   188,   388,   389,   383,   383,   383,
     380,   185,   185,   192,   192,   339,   494,    20,   192,   186,
     230,   220,   220,   438,   276,   192,   192,    20,   230,    83,
     185,   185,   192,   207,   230,   230,   192,   203,   274,   407,
     409,   192,   395,   396,   397,   186,   383,   192,   387,   186,
     383,   192,   230,   192,   390,   391,   392,   186,   383,   345,
       1,    36,   192,   493,   275,    77,   105,   221,   222,   223,
     224,   225,    55,    20,   493,   230,   144,     7,    37,   144,
     164,   244,   398,   399,   398,   398,   394,   398,   386,   383,
     398,   398,   398,   389,   192,   192,   460,   230,    80,    85,
     230,   446,   482,   112,   186,   226,   230,   230,    95,   144,
      70,   227,   483,   191,    21,    87,   276,   184,   228,   484,
     228,   254,    70,   254,   229,   485,   185,   276,   229,   486,
      20,     1,   152,   192,   487,   192,   192
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   189,   190,   191,   192,   193,   194,   193,   195,   195,
     195,   195,   195,   196,   196,   197,   196,   198,   196,   199,
     196,   200,   196,   201,   201,   202,   202,   204,   203,   205,
     205,   206,   206,   208,   207,   210,   209,   209,   211,   211,
     212,   212,   213,   213,   214,   214,   214,   214,   214,   214,
     214,   215,   214,   214,   216,   214,   214,   214,   214,   214,
     217,   217,   218,   218,   219,   219,   220,   220,   221,   221,
     221,   222,   223,   224,   225,   226,   225,   227,   227,   227,
     227,   228,   229,   230,   231,   232,   232,   233,   233,   234,
     235,   234,   236,   237,   236,   238,   238,   239,   239,   240,
     241,   241,   242,   243,   243,   244,   244,   245,   245,   246,
     246,   246,   247,   247,   248,   249,   249,   249,   249,   249,
     249,   249,   249,   249,   249,   250,   250,   250,   250,   251,
     251,   251,   251,   251,   252,   252,   252,   252,   252,   252,
     252,   252,   252,   252,   252,   252,   252,   252,   252,   252,
     252,   252,   252,   252,   252,   252,   252,   252,   252,   252,
     252,   252,   252,   252,   252,   252,   252,   252,   252,   252,
     252,   252,   252,   252,   252,   252,   252,   252,   252,   252,
     253,   252,   252,   252,   252,   252,   252,   254,   254,   255,
     255,   256,   257,   257,   257,   258,   258,   258,   258,   258,
     259,   259,   259,   259,   260,   260,   260,   261,   261,   261,
     262,   262,   262,   262,   262,   262,   263,   263,   263,   264,
     264,   265,   265,   266,   266,   267,   268,   267,   269,   270,
     269,   271,   272,   273,   271,   274,   274,   275,   275,   276,
     276,   277,   277,   278,   277,   277,   279,   277,   277,   277,
     277,   277,   277,   280,   280,   280,   280,   280,   280,   280,
     280,   280,   280,   281,   280,   282,   280,   280,   283,   280,
     284,   280,   280,   285,   280,   280,   280,   280,   286,   280,
     287,   280,   280,   288,   280,   289,   280,   280,   290,   280,
     291,   280,   280,   292,   293,   280,   280,   294,   295,   280,
     280,   280,   296,   280,   280,   280,   280,   280,   280,   280,
     280,   280,   297,   298,   280,   280,   280,   280,   280,   280,
     280,   280,   299,   280,   280,   280,   300,   301,   280,   280,
     302,   280,   280,   280,   303,   304,   280,   280,   280,   280,
     280,   280,   280,   280,   280,   280,   280,   280,   305,   280,
     280,   280,   280,   280,   280,   280,   280,   280,   280,   280,
     280,   280,   306,   307,   280,   280,   280,   308,   309,   311,
     310,   312,   312,   314,   313,   315,   316,   315,   317,   319,
     318,   320,   320,   321,   322,   322,   322,   323,   323,   325,
     324,   326,   324,   327,   324,   328,   324,   329,   324,   330,
     330,   330,   331,   332,   331,   333,   331,   335,   334,   337,
     338,   339,   336,   336,   340,   341,   340,   343,   342,   344,
     344,   344,   345,   345,   346,   346,   347,   347,   347,   348,
     348,   348,   348,   348,   349,   349,   351,   350,   352,   353,
     352,   354,   355,   356,   356,   357,   357,   358,   358,   359,
     359,   360,   360,   360,   361,   361,   361,   362,   362,   362,
     363,   363,   364,   364,   365,   365,   366,   366,   367,   367,
     368,   368,   368,   370,   371,   369,   369,   372,   373,   369,
     369,   374,   374,   376,   375,   378,   377,   379,   380,   381,
     381,   382,   382,   382,   382,   382,   382,   382,   382,   382,
     382,   382,   383,   383,   384,   384,   385,   385,   387,   386,
     386,   388,   388,   390,   389,   391,   389,   392,   389,   389,
     393,   393,   395,   394,   396,   394,   397,   394,   394,   398,
     399,   399,   399,   399,   400,   400,   400,   400,   401,   400,
     400,   402,   400,   403,   400,   404,   400,   405,   400,   406,
     406,   408,   409,   407,   410,   411,   410,   412,   412,   414,
     413,   415,   415,   417,   416,   419,   418,   421,   420,   422,
     422,   423,   424,   424,   425,   425,   426,   427,   426,   428,
     428,   429,   430,   431,   431,   432,   432,   433,   433,   434,
     434,   434,   434,   434,   434,   435,   435,   435,   435,   435,
     435,   437,   438,   436,   439,   436,   436,   440,   440,   441,
     442,   442,   443,   443,   444,   444,   445,   445,   445,   446,
     446,   446,   447,   447,   447,   448,   448,   448,   448,   449,
     449,   449,   449,   450,   450,   451,   451,   452,   453,   452,
     455,   454,   454,   457,   458,   459,   460,   456,   456,   461,
     461,   463,   464,   465,   462,   462,   467,   468,   469,   466,
     466,   470,   470,   471,   471,   472,   473,   474,   476,   475,
     475,   477,   477,   478,   478,   480,   481,   482,   483,   484,
     485,   486,   479,   487,   487,   487,   488,   488,   490,   491,
     489,   489,   492,   492,   493,   493,   493,   494,   494,   494,
     495,   495,   495,   495,   495,   495,   495
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     0,     0,     3,     1,     1,
       1,     3,     3,     1,     2,     0,     7,     0,     6,     0,
       7,     0,     6,     4,     2,     1,     3,     0,     3,     4,
       2,     1,     3,     0,     3,     0,     6,     3,     0,     1,
       0,     1,     1,     2,     2,     2,     2,     2,     3,     1,
       1,     0,     5,     2,     0,     6,     1,     2,     3,     1,
       0,     2,     1,     1,     0,     2,     0,     2,     1,     1,
       1,     3,     3,     2,     0,     0,     4,     0,     2,     5,
       7,     0,     0,     1,     1,     3,     3,     0,     1,     3,
       0,     6,     3,     0,     5,     2,     1,     2,     1,     2,
       1,     3,     1,     1,     1,     1,     1,     0,     2,     0,
       2,     3,     1,     3,     2,     1,     1,     1,     4,     1,
       4,     2,     1,     1,     1,     0,     1,     1,     1,     1,
       2,     2,     2,     2,     1,     1,     1,     1,     1,     6,
       6,     4,     6,     4,     4,     4,     4,     4,     4,     4,
       4,     6,     4,     6,     8,     6,     8,     4,     4,     4,
       4,     6,     5,     4,     4,     6,     6,     4,     6,     4,
       4,     4,     4,     4,     4,     4,     4,     3,     4,     4,
       0,     5,     3,     3,     2,     2,     3,     0,     1,     1,
       3,     1,     1,     3,     4,     1,     2,     2,     2,     2,
       1,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     5,     1,     3,     3,     1,
       3,     1,     3,     1,     3,     1,     0,     4,     1,     0,
       4,     1,     0,     0,     7,     1,     3,     1,     2,     0,
       2,     1,     3,     0,     7,     3,     0,     6,     3,     3,
       3,     4,     4,     1,     2,     2,     2,     3,     3,     4,
       3,     4,     3,     0,     5,     0,     8,     3,     0,     4,
       0,     7,     3,     0,     4,     3,     4,     3,     0,     6,
       0,     8,     3,     0,     4,     0,     6,     4,     0,     3,
       0,     4,     2,     0,     0,     5,     3,     0,     0,     5,
       3,     3,     0,     6,     5,     4,     4,     3,     2,     2,
       2,     3,     0,     0,     7,     3,     6,     4,     3,     2,
       3,     4,     0,     3,     3,     4,     0,     0,     6,     5,
       0,     5,     3,     3,     0,     0,    11,     1,     1,     1,
       1,     2,     3,     2,     3,     2,     3,     2,     0,     4,
       4,     3,     3,     3,     2,     3,     3,     2,     3,     2,
       4,     4,     0,     0,     7,     3,     2,     0,     1,     0,
       4,     0,     2,     0,     4,     0,     0,     5,     0,     0,
       5,     1,     1,     2,     1,     1,     1,     1,     2,     0,
       3,     0,     3,     0,     3,     0,     3,     0,     4,     0,
       1,     1,     1,     0,     4,     0,     4,     0,     3,     0,
       0,     0,     9,     3,     1,     0,     3,     0,     3,     0,
       1,     1,     0,     1,     2,     2,     1,     3,     3,     1,
       3,     3,     3,     2,     1,     3,     0,     3,     0,     0,
       3,     3,     2,     0,     2,     3,     3,     3,     3,     1,
       1,     3,     3,     3,     1,     1,     1,     0,     2,     2,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       1,     1,     1,     0,     0,     6,     4,     0,     0,     5,
       3,     1,     1,     0,     3,     0,     4,     0,     2,     0,
       2,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       4,     3,     0,     1,     0,     1,     1,     3,     0,     3,
       1,     1,     3,     0,     3,     0,     3,     0,     3,     1,
       1,     3,     0,     3,     0,     3,     0,     3,     1,     1,
       1,     1,     1,     2,     1,     1,     1,     2,     0,     3,
       1,     0,     3,     0,     3,     0,     3,     0,     3,     1,
       3,     0,     0,     4,     2,     0,     4,     0,     2,     0,
       3,     3,     2,     0,     4,     0,     5,     0,     2,     1,
       3,     1,     2,     2,     1,     1,     1,     0,     4,     1,
       1,     1,     1,     1,     1,     2,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     0,     6,     0,     4,     2,     1,     2,     2,
       1,     1,     3,     2,     0,     1,     1,     2,     2,     1,
       2,     2,     1,     2,     2,     1,     2,     2,     2,     1,
       2,     2,     2,     0,     2,     1,     2,     1,     0,     4,
       0,     5,     3,     0,     0,     0,     0,    13,     3,     1,
       1,     0,     0,     0,     9,     3,     0,     0,     0,     9,
       3,     1,     2,     1,     2,     2,     1,     1,     0,     5,
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
#line 567 "rwlparser.y" /* yacc.c:1646  */
    {
	  ; // we are done!
	}
#line 3596 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 574 "rwlparser.y" /* yacc.c:1646  */
    {
	    // this is used when we read a semicolon but still are 
	    // partly though something, where the values of
	    // inam and/or previnam still may be needed
	    if (bit(rwm->mxq->errbits,RWL_ERROR_SEVERE)) YYABORT;
	  }
#line 3607 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 584 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->mxq->errbits,RWL_ERROR_SEVERE)) YYABORT;
	    rwm->inam = rwm->previnam = 0;
	    // after this, we must start from the beginning of something
	    // as neither inam nor previnam exist
	  }
#line 3618 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 595 "rwlparser.y" /* yacc.c:1646  */
    {  
	    bis(rwm->m2flags, RWL_P2_INTHING);
	    if (bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
	      YYACCEPT;
	  }
#line 3628 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 601 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->m2flags, RWL_P2_INTHING); 
	    if (bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
	      YYACCEPT;
	  }
#line 3638 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 616 "rwlparser.y" /* yacc.c:1646  */
    { rwlprintallvars(rwm); }
#line 3644 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 627 "rwlparser.y" /* yacc.c:1646  */
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
#line 3663 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 643 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->raname = rwm->inam;
	      bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	      bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	      rwm->ravarn = rwladdvar(rwm, rwm->inam, RWL_TYPE_RAST, 0);
	      rwlrastbeg(rwm, rwm->raname, RWL_TYPE_RAST);
	    }
#line 3675 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 652 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->raname = rwm->inam;
	      bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	      rwm->ravarn = rwladdvar(rwm, rwm->inam, RWL_TYPE_RAST, 0);
	      rwlrastbeg(rwm, rwm->raname, RWL_TYPE_RAST);
	    }
#line 3686 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 660 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->raname = rwm->inam;
	      bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	      bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	      rwm->ravarn = rwladdvar(rwm, rwm->inam, RWL_TYPE_RAPROC, 0);
	      rwlrastbeg(rwm, rwm->raname, RWL_TYPE_RAPROC);
	    }
#line 3698 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 669 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->raname = rwm->inam;
	      rwm->ravarn = rwladdvar(rwm, rwm->inam, RWL_TYPE_RAPROC, 0);
	      rwlrastbeg(rwm, rwm->raname, RWL_TYPE_RAPROC);
	    }
#line 3708 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 680 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlrastfin(rwm, rwm->raname, (sb4) rwm->ravarn);
	    }
#line 3716 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 684 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlcancelvar(rwm, rwm->raname, (sb4) rwm->ravarn);
	      rwlrastclear(rwm);
	      rwlerror(rwm, RWL_ERROR_DECL_RAST); 
	      yyerrok;
	    }
#line 3727 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 697 "rwlparser.y" /* yacc.c:1646  */
    {rwm->raentry = rwm->sval; }
#line 3733 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 699 "rwlparser.y" /* yacc.c:1646  */
    {rwlrastadd(rwm, rwm->raentry, rwm->pval.dval); }
#line 3739 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 705 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlrastfin(rwm, rwm->raname, (sb4) rwm->ravarn);
	    }
#line 3747 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 709 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlcancelvar(rwm, rwm->raname, (sb4) rwm->ravarn);
	      rwlrastclear(rwm);
	      rwlerror(rwm, RWL_ERROR_DECL_RAPROC); 
	      yyerrok;
	    }
#line 3758 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 721 "rwlparser.y" /* yacc.c:1646  */
    {rwm->raentry = rwm->inam; }
#line 3764 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 723 "rwlparser.y" /* yacc.c:1646  */
    {rwlrastadd(rwm, rwm->raentry, rwm->pval.dval); }
#line 3770 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 728 "rwlparser.y" /* yacc.c:1646  */
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
#line 3791 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 745 "rwlparser.y" /* yacc.c:1646  */
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
#line 3851 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 801 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DATABASE_WRONG); yyerrok; }
#line 3857 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 807 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
	        if (rwm->dbsav->username)
		  rwlerror(rwm, RWL_ERROR_DBSPEC_ALREADY, "username");
		else
		  rwm->dbsav->username = rwlstrdup(rwm, rwm->pval.sval);
	      }
	    }
#line 3871 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 827 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
	        if (rwm->dbsav->username)
		  rwlerror(rwm, RWL_ERROR_DBSPEC_ALREADY, "username");
		else
		  rwm->dbsav->username = rwlstrdup(rwm, rwm->pval.sval);
	      }
	    }
#line 3885 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 837 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	        rwm->dbsav->password = rwlstrdup(rwm, rwm->pval.sval);
	    }
#line 3894 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 842 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwlcclassgood(rwm, (rwm->pval.sval)))
	      { 
	        if (rwm->dbsav)
		  rwm->dbsav->cclass = rwlstrdup(rwm, rwm->pval.sval);
	      }
	    }
#line 3906 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 850 "rwlparser.y" /* yacc.c:1646  */
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
#line 3923 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 863 "rwlparser.y" /* yacc.c:1646  */
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
#line 3958 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 894 "rwlparser.y" /* yacc.c:1646  */
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
#line 3973 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 905 "rwlparser.y" /* yacc.c:1646  */
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
#line 3988 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 916 "rwlparser.y" /* yacc.c:1646  */
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
#line 4006 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 932 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      { 
		rwm->dbsav->stmtcache = rwlcheckminval(rwm->mxq, 0, rwm->pval.ival
		  , 0, RWL_DEFAULT_STMTCACHE, (text *)"cursorcache");
		bis(rwm->dbsav->flags, RWL_DB_CCACHUSER);
	      }
	    }
#line 4019 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 941 "rwlparser.y" /* yacc.c:1646  */
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
#line 4038 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 959 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
		if (rwm->dbsav->pooltype)
		  rwlerror(rwm, RWL_ERROR_DBPOOL_ALREADY);
	        rwm->dbsav->pooltype = RWL_DBPOOL_POOLED;
		rwm->dbsav->pooltext = "drcp pooled";
	      }
	    }
#line 4052 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 969 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
		if (rwm->dbsav->pooltype)
		  rwlerror(rwm, RWL_ERROR_DBPOOL_ALREADY);
	        rwm->dbsav->pooltype = RWL_DBPOOL_DEDICATED;
		rwm->dbsav->pooltext = "dedicated";
	      }
	    }
#line 4066 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 979 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
		if (rwm->dbsav->pooltype)
		  rwlerror(rwm, RWL_ERROR_DBPOOL_ALREADY);
	        rwm->dbsav->pooltype = RWL_DBPOOL_RETHRDED;
		rwm->dbsav->pooltext = "threads dedicated";
	      }
	    }
#line 4080 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 989 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
		if (rwm->dbsav->pooltype)
		  rwlerror(rwm, RWL_ERROR_DBPOOL_ALREADY);
	        rwm->dbsav->pooltype = RWL_DBPOOL_RECONNECT;
		rwm->dbsav->pooltext = "reconnect";
	      }
	    }
#line 4094 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 1006 "rwlparser.y" /* yacc.c:1646  */
    {
#if (RWL_OCI_VERSION<12)
	    rwlerror(rwm, RWL_ERROR_NOT_SUPPORTED_IN_VERSION, "statemark",RWL_OCI_VERSION);
#else
	    bis(rwm->dbsav->flags,RWL_DB_STATEMARK);
#endif
	  }
#line 4106 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 1014 "rwlparser.y" /* yacc.c:1646  */
    {
#if (RWL_OCI_VERSION<12)
	    rwlerror(rwm, RWL_ERROR_NOT_SUPPORTED_IN_VERSION, "requestmark",RWL_OCI_VERSION);
#else
	    bis(rwm->dbsav->flags,RWL_DB_REQMARK);
#endif
	  }
#line 4118 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 1024 "rwlparser.y" /* yacc.c:1646  */
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
#line 4133 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 1035 "rwlparser.y" /* yacc.c:1646  */
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
#line 4149 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 1060 "rwlparser.y" /* yacc.c:1646  */
    { 
#if (RWL_OCI_VERSION > 12)
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
#line 4174 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 1084 "rwlparser.y" /* yacc.c:1646  */
    { 
#if (RWL_OCI_VERSION > 12)
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
#line 4199 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 1108 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      { 
		rwm->dbsav->ptimeout = rwlcheckminval(rwm->mxq, 0, rwm->pval.ival
		  , RWL_DBPOOL_CONNECT==rwm->dbsav->pooltype ? 0: 1
		  , RWL_DBPOOL_DEFAULT_TIMEOUT, (text *)"release timeout");
	      }
	    }
#line 4212 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 1121 "rwlparser.y" /* yacc.c:1646  */
    { 
#if (RWL_OCI_VERSION >= 12)
	      if (rwm->dbsav && rwm->pval.dval >= 0)
		rwm->dbsav->wtimeout = rwm->pval.dval;
#else
	    rwlerror(rwm, RWL_ERROR_NOT_YET_IMPL, "sessionpool wait attribute");
#endif
	    }
#line 4225 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 1135 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->dbsav && rwm->pval.dval >= 0)
	      bis(rwm->dbsav->flags, RWL_DB_SPTOBREAK);
	  }
#line 4234 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 1151 "rwlparser.y" /* yacc.c:1646  */
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
#line 4249 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 1165 "rwlparser.y" /* yacc.c:1646  */
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
#line 4265 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 1182 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprimmed(rwm);
	  }
#line 4273 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 1189 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprimmed(rwm);
	  }
#line 4281 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 1205 "rwlparser.y" /* yacc.c:1646  */
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
#line 4297 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 1217 "rwlparser.y" /* yacc.c:1646  */
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
#line 4316 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 1233 "rwlparser.y" /* yacc.c:1646  */
    {
	      /* codeguess was set en rwlcodeaddp */
	      if (rwm->codeguess>=0 && rwm->dtype)
	      {
	        bis(rwm->mxq->evar[rwm->codeguess].flags, RWL_IDENT_NOSTATS);
		rwm->mxq->evar[rwm->codeguess].v2val = rwm->facnt;
		/* similar code as in addvar for a scalar */
		switch (rwm->dtype)
		{
		  case RWL_TYPE_RAW:
		    //rwm->mxq->evar[rwm->codeguess].vtype = RWL_TYPE_FUNC;
		    rwm->mxq->evar[rwm->codeguess].num.vtype = RWL_TYPE_RAW;
		    rwm->mxq->evar[rwm->codeguess].num.slen = (ub8) rwm->declslen;
		    rwm->mxq->evar[rwm->codeguess].stype = "raw function";
		    rwm->mxq->evar[rwm->codeguess].num.vsalloc = RWL_SVALLOC_NOT;
		  break;
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
#line 4359 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 1276 "rwlparser.y" /* yacc.c:1646  */
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
#line 4374 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 1287 "rwlparser.y" /* yacc.c:1646  */
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
#line 4390 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 1300 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwm->mxq->evar[rwm->codeguess].v2val = rwm->facnt;
	      rwm->supsemerr = RWL_SUPSEM_PROC;
	    }
#line 4399 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 1308 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 4408 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 1313 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 4416 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 1320 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 4425 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 1325 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 4433 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 1332 "rwlparser.y" /* yacc.c:1646  */
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
#line 4520 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 1423 "rwlparser.y" /* yacc.c:1646  */
    {
          sb4 l = rwlfindvar(rwm->mxq, rwm->inam, RWL_VAR_NOGUESS);
          if (l>=0)
            rwlprintvar(rwm->mxq, l);
          }
#line 4530 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 1441 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m3flags, RWL_P3_MISBRACK); }
#line 4536 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 1442 "rwlparser.y" /* yacc.c:1646  */
    { bic(rwm->m3flags, RWL_P3_MISBRACK); }
#line 4542 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 1445 "rwlparser.y" /* yacc.c:1646  */
    { if (!bit(rwm->m2flags, RWL_P2_NOWARNDEP)) rwlerror(rwm, RWL_ERROR_MISSING_DECL_BRACK); }
#line 4548 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1457 "rwlparser.y" /* yacc.c:1646  */
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
#line 4576 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 1485 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_INT; bic(rwm->addvarbits,RWL_IDENT_THRSPEC); }
#line 4582 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 1487 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_DBL; bic(rwm->addvarbits,RWL_IDENT_THRSPEC); }
#line 4588 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 1489 "rwlparser.y" /* yacc.c:1646  */
    { rwm->declslen=RWL_DEFAULT_STRLEN; rwm->dtype=RWL_TYPE_STR; bic(rwm->addvarbits,RWL_IDENT_THRSPEC); }
#line 4594 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 1491 "rwlparser.y" /* yacc.c:1646  */
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
#line 4613 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 1506 "rwlparser.y" /* yacc.c:1646  */
    { rwm->declslen=RWL_DEFAULT_RAWLEN; rwm->dtype=RWL_TYPE_RAW; bic(rwm->addvarbits,RWL_IDENT_THRSPEC); }
#line 4619 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 1508 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->dtype=RWL_TYPE_RAW;
	      bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
              if (RWL_TYPE_CANCELLED == rwm->pval.vtype)
                rwm->declslen = 1; // kind of a kludge, but this prevents doube
                                   // error reporting if using local variable
              else
                rwm->declslen = rwm->pval.ival;
	      if (rwm->declslen>RWL_MAX_RAW_LENGTH)
	      {
		rwlerror(rwm, RWL_ERROR_RAW_TOO_LONG, RWL_MAX_RAW_LENGTH);
		rwm->declslen=RWL_MAX_RAW_LENGTH;
	      }
	    }
#line 4638 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 1523 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwm->dtype = 0;
	      rwlerror(rwm, RWL_ERROR_BAD_ARGUMENT_TYPE, "raw file");
	    }
#line 4647 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1528 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwm->dtype = 0;
	      rwlerror(rwm, RWL_ERROR_BAD_ARGUMENT_TYPE, "file");
	    }
#line 4656 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 1533 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwm->dtype = 0;
	      rwlerror(rwm, RWL_ERROR_BAD_ARGUMENT_TYPE, "sql");
	    }
#line 4665 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1538 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwm->dtype = 0;
	      rwlerror(rwm, RWL_ERROR_BAD_ARGUMENT_TYPE, "clob");
	    }
#line 4674 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1547 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m4flags,RWL_P4_STATSONLY); }
#line 4680 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 1549 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m4flags,RWL_P4_PROCHASSQL); }
#line 4686 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1551 "rwlparser.y" /* yacc.c:1646  */
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
#line 4706 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1571 "rwlparser.y" /* yacc.c:1646  */
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
#line 4724 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1585 "rwlparser.y" /* yacc.c:1646  */
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
#line 4742 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1599 "rwlparser.y" /* yacc.c:1646  */
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
#line 4761 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1614 "rwlparser.y" /* yacc.c:1646  */
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
#line 4781 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1657 "rwlparser.y" /* yacc.c:1646  */
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
#line 4798 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1671 "rwlparser.y" /* yacc.c:1646  */
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
#line 4816 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1685 "rwlparser.y" /* yacc.c:1646  */
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
#line 4834 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1699 "rwlparser.y" /* yacc.c:1646  */
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
#line 4850 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1711 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    }
#line 4858 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1714 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_UNIFORM); }
#line 4864 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1715 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LOGB); }
#line 4870 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1716 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LOG); }
#line 4876 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1717 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_EXPB); }
#line 4882 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1718 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_EXP); }
#line 4888 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1719 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_CEIL); }
#line 4894 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1720 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_TRUNC); }
#line 4900 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1721 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_FLOOR); }
#line 4906 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1722 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ROUND); }
#line 4912 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1723 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SQRT); }
#line 4918 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1724 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SIN); }
#line 4924 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1725 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_COS); }
#line 4930 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1726 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ATAN2); }
#line 4936 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1727 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LENGTHB); }
#line 4942 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1729 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_INSTRB2); }
#line 4948 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1731 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_INSTRB3); }
#line 4954 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1733 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SUBSTRB2); }
#line 4960 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1735 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SUBSTRB3); }
#line 4966 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1736 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_GETENV); }
#line 4972 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1737 "rwlparser.y" /* yacc.c:1646  */
    { 
						    if (bit(rwm->m4flags, RWL_P4_SLASHCONVERT)) rwlexprpush0(rwm,RWL_STACK_WINSLASHF2B);
						  }
#line 4980 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1740 "rwlparser.y" /* yacc.c:1646  */
    { 
						    if (bit(rwm->m4flags, RWL_P4_SLASHCONVERT)) rwlexprpush0(rwm,RWL_STACK_WINSLASHF2BB);
						  }
#line 4988 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1743 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SYSTEM); }
#line 4994 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1745 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprpush(rwm,rwm->inam ,RWL_STACK_SYSTEM2STR);
	  }
#line 5002 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1749 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_SYSTEM_BAD); yyerrok;
	    rwlexprpush0(rwm,RWL_STACK_SYSTEM);
	  }
#line 5011 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1753 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ERLANG); }
#line 5017 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1754 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ERLANG2); }
#line 5023 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1756 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ERLANGK); }
#line 5029 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1758 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_NORMALRANDOM); }
#line 5035 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1759 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ISNULL); }
#line 5041 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1761 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ACCESS); }
#line 5047 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1763 "rwlparser.y" /* yacc.c:1646  */
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
#line 5062 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1774 "rwlparser.y" /* yacc.c:1646  */
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
#line 5077 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1785 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprpush(rwm, rwm->inam, RWL_STACK_SERVERRELEASE);
	  }
#line 5085 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1789 "rwlparser.y" /* yacc.c:1646  */
    {
	    // push RWL_T_NULL to make exprfinish work
	    rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    rwlerror(rwm, RWL_ERROR_DBFUN_NEED_IDENT, "serverrelease"); yyerrok;
	  }
#line 5095 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1795 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprpush(rwm, rwm->inam, RWL_STACK_OPENSESSIONCOUNT);
	  }
#line 5103 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1799 "rwlparser.y" /* yacc.c:1646  */
    {
	    // push RWL_T_NULL to make exprfinish work
	    rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    rwlerror(rwm, RWL_ERROR_DBFUN_NEED_IDENT, "opensessioncount"); yyerrok;
	  }
#line 5113 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1805 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprpush(rwm, rwm->inam, RWL_STACK_ACTIVESESSIONCOUNT);
	  }
#line 5121 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1809 "rwlparser.y" /* yacc.c:1646  */
    {
	    // push RWL_T_NULL to make exprfinish work
	    rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    rwlerror(rwm, RWL_ERROR_DBFUN_NEED_IDENT, "activesessioncount"); yyerrok;
	  }
#line 5131 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1815 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->sqname)
	      rwlexprpush(rwm, rwm->sqname, RWL_STACK_SQL_ID);
	  }
#line 5140 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1820 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprpush(rwm, rwm->inam, RWL_STACK_SQL_ID);
	  }
#line 5148 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1824 "rwlparser.y" /* yacc.c:1646  */
    {
	    // push RWL_T_NULL to make exprfinish work
	    rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    rwlerror(rwm, RWL_ERROR_SQLID_NEED_IDENT); yyerrok;
	  }
#line 5158 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1831 "rwlparser.y" /* yacc.c:1646  */
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
#line 5175 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1845 "rwlparser.y" /* yacc.c:1646  */
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
#line 5191 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1857 "rwlparser.y" /* yacc.c:1646  */
    {
            rwlexprpush(rwm, 0, RWL_STACK_DBSECONDS);
          }
#line 5199 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1861 "rwlparser.y" /* yacc.c:1646  */
    {
            rwlexprpush(rwm, 0, RWL_STACK_OCISECONDS);
          }
#line 5207 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1865 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (!bit(rwm->m2flags, RWL_P2_NOWARNDEP) && bit(rwm->m3flags,RWL_P3_MISBRACK))
	      rwlerror(rwm, RWL_ERROR_MISSING_EMPTY_BRACKETS, "runseconds");
	    rwlexprpush(rwm, 0, RWL_STACK_RUNSECONDS);
	  }
#line 5217 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1871 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (!bit(rwm->m2flags, RWL_P2_NOWARNDEP) && bit(rwm->m3flags,RWL_P3_MISBRACK))
	      rwlerror(rwm, RWL_ERROR_MISSING_EMPTY_BRACKETS, "epochseconds");
	    rwlexprpush(rwm, 0, RWL_STACK_EPOCHSECONDS);
	  }
#line 5227 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1890 "rwlparser.y" /* yacc.c:1646  */
    { rwm->aacnt[rwm->furlev]++; }
#line 5233 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1896 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ISNULL); }
#line 5239 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1897 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ISNOTNULL); }
#line 5245 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1903 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_MINUS); }
#line 5251 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1904 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_NOT); }
#line 5257 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1905 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_NOT); }
#line 5263 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1906 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_BITWISE_NOT); }
#line 5269 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1911 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_MUL); }
#line 5275 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1912 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_DIV); }
#line 5281 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1913 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_MOD); }
#line 5287 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1918 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ADD); }
#line 5293 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1919 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SUB); }
#line 5299 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1923 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_BITWISE_LEFT_SHIFT); }
#line 5305 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1924 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_BITWISE_RIGHT_SHIFT); }
#line 5311 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1929 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LESS); }
#line 5317 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1930 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_GREATER); }
#line 5323 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1931 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LESSEQ); }
#line 5329 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1932 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_GREATEREQ); }
#line 5335 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1933 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_BETWEEN); }
#line 5341 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1938 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_EQUAL); }
#line 5347 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1939 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_NOTEQUAL); }
#line 5353 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1944 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_BITWISE_AND); }
#line 5359 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1949 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_BITWISE_XOR); }
#line 5365 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1954 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_BITWISE_OR); }
#line 5371 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1960 "rwlparser.y" /* yacc.c:1646  */
    { 
	    // With AND (and OR) skipdep is used to mark
	    // the expression element we need to skip until
	    // in case the first condition is false (true for OR)
	    rwm->ptail->branchtype = RWL_EXP_ANDBRANCH;
	    if (rwm->skipdep++ >= UB1MAXVAL)
	      rwlsevere(rwm, "[rwlparser-andskip:%d]", rwm->skipdep);
	    rwm->ptail->skipnxt = rwm->skipdep;
	  }
#line 5385 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1970 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprpush2(rwm,0,RWL_STACK_AND, rwm->skipdep);
	    rwm->skipdep--;
	  }
#line 5394 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1979 "rwlparser.y" /* yacc.c:1646  */
    {  
	    // see comment above
	    rwm->ptail->branchtype = RWL_EXP_ORBRANCH;
	    if (rwm->skipdep++ >= UB1MAXVAL)
	      rwlsevere(rwm, "[rwlparser-orskip:%d]", rwm->skipdep);
	    rwm->ptail->skipnxt = rwm->skipdep;
	  }
#line 5406 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1987 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprpush2(rwm,0,RWL_STACK_OR ,rwm->skipdep);
	    rwm->skipdep--;
	  }
#line 5415 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1996 "rwlparser.y" /* yacc.c:1646  */
    {  
	    // With conditional execution we mark the condition
	    // with RWL_EXP_CONDBRANCH1
	    rwm->ptail->branchtype = RWL_EXP_CONDBRANCH1;
	    if (rwm->skipdep++ >= UB1MAXVAL)
	      rwlsevere(rwm, "[rwlparser-condskip:%d]", rwm->skipdep);
	    rwm->ptail->skipnxt = rwm->skipdep;
	  }
#line 5428 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 2005 "rwlparser.y" /* yacc.c:1646  */
    {
	    // and the place of ':' (really ELSE) with 
	    // RWL_EXP_CONDBRANCH2
	    rwm->ptail->branchtype = RWL_EXP_CONDBRANCH2;
	    rwm->ptail->skipnxt = rwm->skipdep;
	  }
#line 5439 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 2012 "rwlparser.y" /* yacc.c:1646  */
    {  
	    // And the actual conditional is the "end if" place
	    rwlexprpush2(rwm,0,RWL_STACK_CONDITIONAL, rwm->skipdep);
	    rwm->skipdep--;
	  }
#line 5449 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 2021 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_CONCAT); }
#line 5455 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 2026 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_CONCAT); }
#line 5461 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 2037 "rwlparser.y" /* yacc.c:1646  */
    { rwm->supsemerr = 0; }
#line 5467 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 2042 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
	    {
	      rwm->ifdirdep = 0; // since we may be skipping over $else, $endif
	      YYACCEPT;
	    }
	  }
#line 5479 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 2050 "rwlparser.y" /* yacc.c:1646  */
    { yyerrok; }
#line 5485 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 2052 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_COMMAND_NOT_LOCAL, "threads"); yyerrok; }
#line 5491 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 2059 "rwlparser.y" /* yacc.c:1646  */
    { yyerrok; }
#line 5497 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 2061 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_COMMAND_NOT_LOCAL, "run"); yyerrok; }
#line 5503 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 2065 "rwlparser.y" /* yacc.c:1646  */
    { yyerrok; }
#line 5509 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 2067 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_NOT_LOCAL, "database"); yyerrok; }
#line 5515 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 2069 "rwlparser.y" /* yacc.c:1646  */
    { yyerrok ; }
#line 5521 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 2072 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_NOT_LOCAL, "random procedure array"); yyerrok; }
#line 5527 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 2075 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_NOT_LOCAL, "random string array"); yyerrok; }
#line 5533 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 2080 "rwlparser.y" /* yacc.c:1646  */
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
#line 5566 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 2109 "rwlparser.y" /* yacc.c:1646  */
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
#line 5585 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 2124 "rwlparser.y" /* yacc.c:1646  */
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
#line 5600 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 2141 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_LOB); yyerrok; }
#line 5606 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 2148 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_INT); yyerrok; }
#line 5612 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 2154 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_DBL); yyerrok; }
#line 5618 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 2156 "rwlparser.y" /* yacc.c:1646  */
    { 
		rwm->declslen=RWL_DEFAULT_STRLEN;
	      }
#line 5626 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 2162 "rwlparser.y" /* yacc.c:1646  */
    {
	      if (RWL_TYPE_CANCELLED == rwm->pval.vtype)
		rwm->declslen = 1; // kind of a kludge, but this prevents doube
				   // error reporting if using local variable
	      else
	      {
		rwm->declslen = rwm->pval.ival;
	      }
	    }
#line 5640 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 2176 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_STR); yyerrok; }
#line 5646 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 2178 "rwlparser.y" /* yacc.c:1646  */
    { 
		rwm->declslen=RWL_DEFAULT_RAWLEN;
	      }
#line 5654 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 2184 "rwlparser.y" /* yacc.c:1646  */
    {
	      if (RWL_TYPE_CANCELLED == rwm->pval.vtype)
		rwm->declslen = 1; // kind of a kludge, but this prevents doube
				   // error reporting if using local variable
	      else
	      {
		rwm->declslen = rwm->pval.ival;
	      }
	    }
#line 5668 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 2198 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_RAW); yyerrok; }
#line 5674 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 2200 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (bit(rwm->m4flags, RWL_P4_FILEISRAW))
	      rwm->dtype=RWL_TYPE_RAWFILE;
	    else
	      rwm->dtype=RWL_TYPE_FILE;
	    //if (rwm->codename)
	    //  rwlerror(rwm, RWL_ERROR_NOT_LOCAL, "file");
	  }
#line 5687 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 2212 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_FILE); yyerrok; }
#line 5693 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 2217 "rwlparser.y" /* yacc.c:1646  */
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
#line 5718 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 2240 "rwlparser.y" /* yacc.c:1646  */
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
#line 5745 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 2264 "rwlparser.y" /* yacc.c:1646  */
    { if (!rwm->rslerror) rwlcodeadd0(rwm, RWL_CODE_ELSE); }
#line 5751 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 2267 "rwlparser.y" /* yacc.c:1646  */
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
#line 5776 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 2290 "rwlparser.y" /* yacc.c:1646  */
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
#line 5818 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 2332 "rwlparser.y" /* yacc.c:1646  */
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
#line 5890 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 2401 "rwlparser.y" /* yacc.c:1646  */
    { 
		  rwlerror(rwm, RWL_ERROR_LOOP);
		  rwm->rsllityp[rwm->rsldepth] = RWL_LI_BAD;
		  yyerrok;
		}
#line 5900 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 2408 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SYSTEM); }
#line 5906 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 2411 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprpush(rwm,rwm->inam ,RWL_STACK_SYSTEM2STR);
	  }
#line 5914 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 2416 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_SYSTEM_BAD); yyerrok;
	    rwlexprclear(rwm);
	  }
#line 5923 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 2421 "rwlparser.y" /* yacc.c:1646  */
    {
		/* start a dummy assignment such that expression gets executed */
		rwm->assignvar = RWL_DUMMY_VAR;
		rwm->assignoper = RWL_T_ASSIGN;
		rwlexprbeg(rwm);
	      }
#line 5934 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 2430 "rwlparser.y" /* yacc.c:1646  */
    {
		/* start expression for assign */
		rwm->assignvar = rwm->inam;
		rwlexprbeg(rwm);
	      }
#line 5944 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 2439 "rwlparser.y" /* yacc.c:1646  */
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
#line 5960 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 2451 "rwlparser.y" /* yacc.c:1646  */
    {
	        rwm->assignvar = rwm->codename;
		rwlexprbeg(rwm);
	      }
#line 5969 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 2456 "rwlparser.y" /* yacc.c:1646  */
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
#line 6002 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 2485 "rwlparser.y" /* yacc.c:1646  */
    { 
		  rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		  rwlexprclear(rwm);
		  yyerrok;
		}
#line 6012 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 2492 "rwlparser.y" /* yacc.c:1646  */
    {
	        rwm->assignvar = rwm->codename;
		rwlexprbeg(rwm);
	      }
#line 6021 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 2497 "rwlparser.y" /* yacc.c:1646  */
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
#line 6054 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 2527 "rwlparser.y" /* yacc.c:1646  */
    { 
		  rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		  rwlexprclear(rwm);
		  yyerrok;
		}
#line 6064 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 2535 "rwlparser.y" /* yacc.c:1646  */
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
#line 6082 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 2549 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->mdbnam = rwm->inam; 
	      rwm->mdbvar = rwlfindvar2(rwm->mxq, rwm->mdbnam, RWL_VAR_NOGUESS, rwm->codename);
	      if (rwm->mdbvar>=0 && RWL_TYPE_DB != rwm->mxq->evar[rwm->mdbvar].vtype)
	      {
		rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2
		  , rwm->mxq->evar[rwm->mdbvar].stype, rwm->inam, "modify database");
		rwm->mdbvar = RWL_VAR_INVALID;
	      }
	    }
#line 6097 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 2563 "rwlparser.y" /* yacc.c:1646  */
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
#line 6115 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 2579 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (!rwm->codename)
	    {
	      rwlerror(rwm, RWL_ERROR_NOT_DONE_IN_MAIN, "modify database leak");
	      goto dontmoddbpool;
	    }
	    else
	      rwlcodeadd0(rwm, RWL_CODE_MODDBLEAK);
	  }
#line 6129 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 2590 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->codename)
	      rwlcodeadd0(rwm, RWL_CODE_SESRELDROP);
	  }
#line 6138 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 2596 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->codename)
	      rwlcodeadd0(rwm, RWL_CODE_SESRELDROP);
	  }
#line 6147 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 2602 "rwlparser.y" /* yacc.c:1646  */
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
#line 6162 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 2614 "rwlparser.y" /* yacc.c:1646  */
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
#line 6177 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 2626 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->codename)
	      rwlcodeadd0(rwm, RWL_CODE_SHIFT);
	    else
	      if (!bit(rwm->m2flags, RWL_P2_NOEXEC))
		rwlshiftdollar(rwm->mxq, &rwm->loc);
	  }
#line 6189 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 2635 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->codename)
	      rwlcodeadd0(rwm, RWL_CODE_GETRUSAGE);
	    else
	      if (!bit(rwm->m2flags, RWL_P2_NOEXEC))
		rwlgetrusage(rwm->mxq, 0);
	  }
#line 6201 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 2644 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->msqlinam = rwm->inam; rwm->mqbdtyp = 0;
	      bis(rwm->mxq->tflags, RWL_P_FINDVAR_NOERR);
	      rwm->modsqlvar = rwlfindvar2(rwm->mxq, rwm->msqlinam, RWL_VAR_NOGUESS, rwm->codename);
	      bic(rwm->mxq->tflags, RWL_P_FINDVAR_NOERR);
	      if (rwm->modsqlvar>=0 && RWL_TYPE_SQL != rwm->mxq->evar[rwm->modsqlvar].vtype)
	      {
		rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2
		  , rwm->mxq->evar[rwm->modsqlvar].stype, rwm->inam, "modify sql");
		rwm->modsqlvar = RWL_VAR_INVALID;
	      }
	    }
#line 6218 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 2657 "rwlparser.y" /* yacc.c:1646  */
    {
	      // since we didn't show the error above, show it now
	      if(rwm->modsqlvar < 0)
	        (void)rwlfindvar2(rwm->mxq, rwm->msqlinam, RWL_VAR_NOGUESS, rwm->codename);
	    }
#line 6228 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 2665 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_MODIFY); yyerrok; }
#line 6234 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 2678 "rwlparser.y" /* yacc.c:1646  */
    {
	      /* This code can cause lookahead */
	      rwlerror(rwm, RWL_ERROR_BAD_ARG_LIST);
	      rwlexprclear(rwm);
	      yyerrok;
	    }
#line 6245 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 2685 "rwlparser.y" /* yacc.c:1646  */
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
#line 6264 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 2704 "rwlparser.y" /* yacc.c:1646  */
    { rwm->supsemerr = RWL_SUPSEM_EMBSQL; }
#line 6270 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 2710 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m3flags, RWL_P3_IMMPARSEFOR); }
#line 6276 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 2712 "rwlparser.y" /* yacc.c:1646  */
    { bic(rwm->m3flags, RWL_P3_IMMPARSEFOR); }
#line 6282 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 330:
#line 2718 "rwlparser.y" /* yacc.c:1646  */
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
#line 6371 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 2805 "rwlparser.y" /* yacc.c:1646  */
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
#line 6404 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 2835 "rwlparser.y" /* yacc.c:1646  */
    { 
	    sb4 l;
	    /* lookup the file and check it is a file */
	    l = rwlfindvar(rwm->mxq, rwm->inam, RWL_VAR_NOGUESS);
	    if (l>=0)
	    {
	      if (rwlisfile(rwm->mxq->evar[l].vtype))
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
#line 6440 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 2868 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_NO_FILE_FOR_FFLUSH);
	    yyerrok;
	  }
#line 6449 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 2875 "rwlparser.y" /* yacc.c:1646  */
    {
	      sb4 l;
	      /* lookup the file and check it is a file */
	      rwm->filvarn = RWL_VAR_NOTFOUND;
	      rwm->filenam = 0;
	      l = rwlfindvar2(rwm->mxq, rwm->inam, RWL_VAR_NOGUESS, rwm->codename);
	      if (l>=0)
	      {
		if (bit(rwm->m4flags,RWL_P4_RWPLINE))
		{
		  // readline, i.e. to string, etc
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
		else
		{
		  // read, i.e. to raw
		  if (rwm->mxq->evar[l].vtype == RWL_TYPE_RAWFILE)
		  {
		    rwm->filvarn = l;
		    rwm->filenam = rwm->inam;
		  }
		  else
		  {
		    rwlerror(rwm,RWL_ERROR_INCORRECT_TYPE2, rwm->mxq->evar[l].stype, rwm->inam, "raw file");
		    rwm->rslerror++; /* prevent end generation */
		  }
		}
	      }
	      // initialize identifier list
	      rwm->idlist = rwm->idtail = 0;
	    }
#line 6494 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 2918 "rwlparser.y" /* yacc.c:1646  */
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
#line 6528 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 336:
#line 2950 "rwlparser.y" /* yacc.c:1646  */
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
#line 6551 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 342:
#line 2978 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->m4flags,RWL_P4_RWPLINE);
		rwlerror(rwm, RWL_ERROR_NO_FILE_FOR_WRITE);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6562 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 2987 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->m4flags,RWL_P4_RWPLINE);
		rwlerror(rwm, RWL_ERROR_NO_STRING_FOR_SPRINTF);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6573 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 346:
#line 2996 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->m4flags,RWL_P4_RWPLINE);
		rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6584 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 348:
#line 3006 "rwlparser.y" /* yacc.c:1646  */
    {
	      // Note that we do not document this syntax without comma
	      if (rwm->filenam)
		rwlerror(rwm, RWL_ERROR_COMMA_IS_RECOMMENDED, rwm->filenam
		, bit(rwm->m4flags,RWL_P4_RWPLINE) ? "writeline" : "write");
	    }
#line 6595 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 351:
#line 3018 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->m4flags,RWL_P4_RWPLINE);
		rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6606 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 352:
#line 3026 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->m4flags,RWL_P4_RWPLINE);
		rwlerror(rwm, RWL_ERROR_NO_FILE_FOR_WRITE);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6617 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 353:
#line 3034 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->m4flags,RWL_P4_RWPLINE);
		rwlerror(rwm, RWL_ERROR_NO_FILE_FOR_WRITE);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6628 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 354:
#line 3042 "rwlparser.y" /* yacc.c:1646  */
    { 
		if (rwm->codename)
		  rwlcodeadd0(rwm, RWL_CODE_NEWLINE);
		else
		  fputs(bit(rwm->m4flags, RWL_P4_CRNLWRITELINE) ? "\r\n" : "\n", stdout);
		bic(rwm->m4flags,RWL_P4_RWPLINE|RWL_P4_PRINTBLANK);
	      }
#line 6640 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 356:
#line 3052 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->m4flags,RWL_P4_RWPLINE);
		rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6651 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 3060 "rwlparser.y" /* yacc.c:1646  */
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
#line 6666 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 3071 "rwlparser.y" /* yacc.c:1646  */
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
#line 6705 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 3107 "rwlparser.y" /* yacc.c:1646  */
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
#line 6745 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 361:
#line 3144 "rwlparser.y" /* yacc.c:1646  */
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
#line 6788 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 362:
#line 3184 "rwlparser.y" /* yacc.c:1646  */
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
#line 6809 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 363:
#line 3201 "rwlparser.y" /* yacc.c:1646  */
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
#line 6835 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 364:
#line 3225 "rwlparser.y" /* yacc.c:1646  */
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
#line 6857 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 365:
#line 3244 "rwlparser.y" /* yacc.c:1646  */
    { 
	      // we may come here because user was using a non-declared
	      // procedure name as if it existed
	      // this is the code where partterminator really is needed
	      // such we can find the name of the identifier that brought
	      // us into this siuation.
	      // Note that in other cases, just checking yychar is fine,
	      // but in the error case, it cannot be used.
	      // it really is a bit of a hack, but let us attempt
	      // providing a useful error

	      // Only report error here if rwlyerror hasn't reported
	      // an error on missing identifier
	      if (!bit(rwm->m4flags, RWL_P4_YYSYNDIDREP))
		rwlerror(rwm, RWL_ERROR_UNEXPECTED_AFTER_IDENTIFIER);
	      bic(rwm->m4flags, RWL_P4_YYSYNDIDREP);
	      rwm->loc.errlin = 0;
	      yyerrok;
	    }
#line 6881 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 366:
#line 3266 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_MISSING_SEMICOLON); yyerrok; }
#line 6887 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 367:
#line 3273 "rwlparser.y" /* yacc.c:1646  */
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
#line 6926 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 368:
#line 3311 "rwlparser.y" /* yacc.c:1646  */
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
#line 7015 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 369:
#line 3399 "rwlparser.y" /* yacc.c:1646  */
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
#line 7043 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 370:
#line 3423 "rwlparser.y" /* yacc.c:1646  */
    {
	  rwm->lobwritedata = rwlexprfinish(rwm);
	  rwm->loboffset = 0;
	}
#line 7052 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 372:
#line 3432 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->loboffset = rwlexprfinish(rwm);
	  }
#line 7060 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 373:
#line 3439 "rwlparser.y" /* yacc.c:1646  */
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
#line 7087 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 374:
#line 3462 "rwlparser.y" /* yacc.c:1646  */
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
#line 7113 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 376:
#line 3488 "rwlparser.y" /* yacc.c:1646  */
    {
	  rwm->lobreadlength = rwlexprfinish(rwm);
	}
#line 7121 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 377:
#line 3492 "rwlparser.y" /* yacc.c:1646  */
    {
	  rwm->loboffset = rwlexprfinish(rwm);
	}
#line 7129 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 378:
#line 3498 "rwlparser.y" /* yacc.c:1646  */
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
#line 7279 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 379:
#line 3648 "rwlparser.y" /* yacc.c:1646  */
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
#line 7393 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 380:
#line 3760 "rwlparser.y" /* yacc.c:1646  */
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
#line 7430 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 381:
#line 3796 "rwlparser.y" /* yacc.c:1646  */
    {  
	    // This syntax is not documented
	    bic(rwm->m3flags, RWL_P3_CLHEADFOR);
	    rwlerror(rwm, RWL_ERROR_LEGACY_CONTROLLOOP_SYNTAX);
	  }
#line 7440 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 382:
#line 3801 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m3flags, RWL_P3_CLHEADFOR); }
#line 7446 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 383:
#line 3805 "rwlparser.y" /* yacc.c:1646  */
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
#line 7463 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 384:
#line 3821 "rwlparser.y" /* yacc.c:1646  */
    { if (bit(rwm->m3flags, RWL_P3_CLHEADFOR))
	      rwlerror(rwm, RWL_ERROR_MIX_LEGACY_CLOOP);
	  }
#line 7471 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 385:
#line 3825 "rwlparser.y" /* yacc.c:1646  */
    { if (bit(rwm->m3flags, RWL_P3_CLHEADFOR))
	      rwlerror(rwm, RWL_ERROR_MIX_LEGACY_CLOOP);
	  }
#line 7479 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 386:
#line 3829 "rwlparser.y" /* yacc.c:1646  */
    { if (!bit(rwm->m3flags, RWL_P3_CLHEADFOR))
	      rwlerror(rwm, RWL_ERROR_MIX_LEGACY_CLOOP);
	  }
#line 7487 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 389:
#line 3840 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7493 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 390:
#line 3842 "rwlparser.y" /* yacc.c:1646  */
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
#line 7510 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 391:
#line 3854 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7516 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 392:
#line 3856 "rwlparser.y" /* yacc.c:1646  */
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
#line 7535 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 393:
#line 3870 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7541 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 394:
#line 3872 "rwlparser.y" /* yacc.c:1646  */
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
#line 7560 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 395:
#line 3886 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7566 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 396:
#line 3888 "rwlparser.y" /* yacc.c:1646  */
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
#line 7583 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 397:
#line 3900 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7589 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 398:
#line 3902 "rwlparser.y" /* yacc.c:1646  */
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
#line 7619 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 399:
#line 3931 "rwlparser.y" /* yacc.c:1646  */
    { rwm->ynqueue = 0; }
#line 7625 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 400:
#line 3932 "rwlparser.y" /* yacc.c:1646  */
    { rwm->ynqueue = RWL_QUEUE_EVERY; }
#line 7631 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 401:
#line 3933 "rwlparser.y" /* yacc.c:1646  */
    { rwm->ynqueue = RWL_NOQUEUE_EVERY; }
#line 7637 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 402:
#line 3937 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->scname = rwm->inam; 
	    bic(rwm->m2flags, RWL_P2_AT|RWL_P2_ATDEFAULT);
	  }
#line 7646 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 403:
#line 3942 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->scname = rwm->inam;
	    bic(rwm->m2flags, RWL_P2_AT|RWL_P2_ATDEFAULT);
	  }
#line 7655 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 404:
#line 3947 "rwlparser.y" /* yacc.c:1646  */
    { 
	      bis(rwm->m2flags, RWL_P2_ATDEFAULT);
	    }
#line 7663 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 405:
#line 3951 "rwlparser.y" /* yacc.c:1646  */
    {
	      bic(rwm->m2flags, RWL_P2_AT|RWL_P2_ATDEFAULT);
	      // lookahead may have consumed the next identifier
	      rwm->scname = (yychar == RWL_T_IDENTIFIER)
	        ? rwm->previnam
	        : rwm->inam;
	    }
#line 7675 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 406:
#line 3959 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->dbname = rwm->inam; 
	      bis(rwm->m2flags, RWL_P2_AT);
	    }
#line 7684 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 407:
#line 3968 "rwlparser.y" /* yacc.c:1646  */
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
#line 7703 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 408:
#line 3983 "rwlparser.y" /* yacc.c:1646  */
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
#line 7735 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 409:
#line 4015 "rwlparser.y" /* yacc.c:1646  */
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
#line 7753 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 410:
#line 4030 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->m3flags, RWL_P3_IMMEDSQL); 
	    bis(rwm->sqsav->flags, RWL_SQLFLAG_IBUSE);
	    bis(rwm->sqsav->flags, RWL_SQLFLAG_IDUSE);
	    if (bit(rwm->m3flags,RWL_P3_IMPLCASE))
	      bis(rwm->sqsav->flags, RWL_SQLFLAG_ICASE);
	  }
#line 7765 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 411:
#line 4039 "rwlparser.y" /* yacc.c:1646  */
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
#line 7806 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 413:
#line 4077 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_SQL_WRONG) ;
	    yyerrok;
	  }
#line 7815 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 415:
#line 4085 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7821 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 416:
#line 4086 "rwlparser.y" /* yacc.c:1646  */
    {
	    if ((rwm->msqlstk = rwlexprfinish(rwm)))
	      bis(rwm->m3flags, RWL_P3_IMMISDYN); // now dynamic
	    else
	    {
	      rwm->mxq->evar[rwm->sqsavvarn].vtype = RWL_TYPE_CANCELLED;
	      rwm->mxq->evar[rwm->sqsavvarn].stype = "cancelled (sql)";
	    }
	  }
#line 7835 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 417:
#line 4098 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->sqllino = rwm->loc.lineno;
	  }
#line 7843 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 421:
#line 4107 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "sql") ;
	  }
#line 7851 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 424:
#line 4118 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bis(rwm->m2flags, RWL_P2_ATDEFAULT);
	  }
#line 7859 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 425:
#line 4122 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dbname = rwm->inam; 
	    bis(rwm->m2flags, RWL_P2_AT);
	  }
#line 7868 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 426:
#line 4130 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->m2flags, RWL_P2_AT|RWL_P2_ATDEFAULT);
	  }
#line 7876 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 427:
#line 4134 "rwlparser.y" /* yacc.c:1646  */
    { 
	      bis(rwm->m2flags, RWL_P2_ATDEFAULT);
	    }
#line 7884 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 428:
#line 4138 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->dbname = rwm->inam; 
	      bis(rwm->m2flags, RWL_P2_AT);
	    }
#line 7893 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 430:
#line 4148 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->dbname = 0;
	      bis(rwm->m2flags, RWL_P2_ATDEFAULT); /* explict choose standard DB */
	    }
#line 7902 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 431:
#line 4154 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->dbname = rwm->inam;
	      bis(rwm->m2flags, RWL_P2_AT); /* named DB */
	    }
#line 7911 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 432:
#line 4159 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_NO_DATABASE_NAME); yyerrok; }
#line 7917 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 433:
#line 4161 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_MISSING_SEMICOLON); yyerrok; }
#line 7923 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 436:
#line 4169 "rwlparser.y" /* yacc.c:1646  */
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
#line 7953 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 437:
#line 4195 "rwlparser.y" /* yacc.c:1646  */
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
#line 8030 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 439:
#line 4272 "rwlparser.y" /* yacc.c:1646  */
    {
		  rwm->assignvar = rwm->inam;
		  rwlexprbeg(rwm);
		  // Is the variable allowed to assign to
		  switch (rwm->dtype)
		  {
		    case RWL_TYPE_BLOB:
		    case RWL_TYPE_CLOB:
		    case RWL_TYPE_RAW:
		    case RWL_TYPE_RAWFILE:
		      if (rwm->decvarn>=0)
		        rwlerror(rwm, RWL_ERROR_NO_DECL_ASSIGN
			  , rwm->assignvar, rwm->mxq->evar[rwm->decvarn].stype);
		      else
			rwlsevere(rwm, "[rwlparser-badtype1:%s;%d]", rwm->assignvar, rwm->dtype);
		      break;

		    default:
		      break;
		  }

		}
#line 8057 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 440:
#line 4295 "rwlparser.y" /* yacc.c:1646  */
    {
		  rwl_estack *estk;
		  switch (rwm->dtype)
		  {
		    default:
		      rwlsevere(rwm, "[rwlparser-badtype2:%s;%d]", rwm->assignvar, rwm->dtype);
		      //FALLTHROUGH
		    case RWL_TYPE_BLOB:
		    case RWL_TYPE_CLOB:
		    case RWL_TYPE_RAW:
		    case RWL_TYPE_RAWFILE:
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
#line 8113 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 445:
#line 4363 "rwlparser.y" /* yacc.c:1646  */
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
#line 8132 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 446:
#line 4378 "rwlparser.y" /* yacc.c:1646  */
    {
              rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
              rwlexprclear(rwm);
              rwm->rslerror++; // to prevent attempting else/endif code generation
              yyerrok;
            }
#line 8143 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 447:
#line 4387 "rwlparser.y" /* yacc.c:1646  */
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
#line 8162 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 448:
#line 4402 "rwlparser.y" /* yacc.c:1646  */
    {
              rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
              rwlexprclear(rwm);
              rwm->rslerror++; // to prevent attempting else/endif code generation
              yyerrok;
            }
#line 8173 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 449:
#line 4411 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_LEGACY_WHILE_SYNTAX);
	  }
#line 8181 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 450:
#line 4415 "rwlparser.y" /* yacc.c:1646  */
    {
	    bis(rwm->rslflags[rwm->rsldepth], RWL_RSLFLAG_WHILOP);
	  }
#line 8189 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 451:
#line 4421 "rwlparser.y" /* yacc.c:1646  */
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
#line 8210 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 452:
#line 4438 "rwlparser.y" /* yacc.c:1646  */
    {
              rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
              rwlexprclear(rwm);
              rwm->rslerror++; // to prevent attempting else/endif code generation
              yyerrok;
            }
#line 8221 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 453:
#line 4445 "rwlparser.y" /* yacc.c:1646  */
    {
              rwlerror(rwm, RWL_ERROR_UNEXPECTED_KEYWORD, "loop");
              rwlexprclear(rwm);
              rwm->rslerror++; // to prevent attempting else/endif code generation
              yyerrok;
            }
#line 8232 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 458:
#line 4462 "rwlparser.y" /* yacc.c:1646  */
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
#line 8252 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 459:
#line 4478 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (rwm->codename)
	      rwlerror(rwm, RWL_ERROR_NO_LOCAL_SUMGLOB);
	    else
	      bis(rwm->addvarbits,RWL_IDENT_GLOBAL);
	  }
#line 8263 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 460:
#line 4488 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dtype=RWL_TYPE_RAW;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 8273 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 461:
#line 4494 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->dtype=RWL_TYPE_RAW;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 8282 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 462:
#line 4502 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dtype=RWL_TYPE_STR;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 8292 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 463:
#line 4508 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->dtype=RWL_TYPE_STR;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 8301 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 464:
#line 4516 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dtype=RWL_TYPE_INT;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 8311 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 465:
#line 4522 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->dtype=RWL_TYPE_INT;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 8320 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 466:
#line 4530 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dtype=RWL_TYPE_DBL;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 8330 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 467:
#line 4536 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->dtype=RWL_TYPE_DBL;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 8339 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 468:
#line 4544 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 8348 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 469:
#line 4549 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 8356 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 470:
#line 4555 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_CLOB; }
#line 8362 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 471:
#line 4556 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_BLOB; }
#line 8368 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 472:
#line 4557 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_NCLOB; }
#line 8374 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 473:
#line 4561 "rwlparser.y" /* yacc.c:1646  */
    { rwm->sqllino = rwm->loc.lineno;}
#line 8380 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 474:
#line 4562 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	    bic(rwm->m2flags, RWL_P2_BADSQLFILTXT);
	    bic(rwm->m3flags, RWL_P3_IMMEDSQL); 
	    bic(rwm->m3flags, RWL_P3_IMMISDYN); 
	    rwm->sqllen = 0;
	    rwm->sqname = rwm->inam;
	  }
#line 8394 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 476:
#line 4573 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_SQL_WRONG); yyerrok;
	  }
#line 8402 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 477:
#line 4576 "rwlparser.y" /* yacc.c:1646  */
    { rwm->sqllino = rwm->loc.lineno;}
#line 8408 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 478:
#line 4577 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bic(rwm->m2flags, RWL_P2_BADSQLFILTXT);
	    bic(rwm->m3flags, RWL_P3_IMMEDSQL); 
	    bic(rwm->m3flags, RWL_P3_IMMISDYN); 
	    rwm->sqllen = 0;
	    rwm->sqname = rwm->inam;
	  }
#line 8421 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 480:
#line 4587 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_SQL_WRONG); yyerrok;
	  }
#line 8429 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 483:
#line 4597 "rwlparser.y" /* yacc.c:1646  */
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
#line 8479 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 484:
#line 4644 "rwlparser.y" /* yacc.c:1646  */
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
#line 8514 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 485:
#line 4678 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->m4flags, RWL_P4_AMPERSAND) && rwldynarcheck(rwm))
	    {
	      rwlerror(rwm, RWL_ERROR_CANNOT_AMPREP_HERE, "named sql declaration");
	      rwm->mxq->evar[rwm->sqsavvarn].vtype = RWL_TYPE_CANCELLED;
	      rwm->mxq->evar[rwm->sqsavvarn].stype = "cancelled (sql)";
	    }
	  }
#line 8527 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 487:
#line 4691 "rwlparser.y" /* yacc.c:1646  */
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
#line 8605 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 488:
#line 4769 "rwlparser.y" /* yacc.c:1646  */
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
		  if (RWL_TYPE_RAWBD == bd->vtype)
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
		      case RWL_TYPE_RAW:
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
#line 8703 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 492:
#line 4873 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_BIND); yyerrok; }
#line 8709 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 494:
#line 4877 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_BINDOUT); yyerrok; }
#line 8715 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 496:
#line 4881 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DEFINE); yyerrok; }
#line 8721 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 497:
#line 4883 "rwlparser.y" /* yacc.c:1646  */
    {
		  bis(rwm->sqsav->flags, RWL_SQFLAG_IGNERR);
		}
#line 8729 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 498:
#line 4887 "rwlparser.y" /* yacc.c:1646  */
    {
		  bic(rwm->sqsav->flags, RWL_SQFLAG_NOCURC);
		}
#line 8737 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 499:
#line 4891 "rwlparser.y" /* yacc.c:1646  */
    {
		  bis(rwm->sqsav->flags, RWL_SQFLAG_NOCURC);
		}
#line 8745 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 500:
#line 4896 "rwlparser.y" /* yacc.c:1646  */
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
#line 8767 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 501:
#line 4915 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ARRAY); yyerrok; }
#line 8773 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 502:
#line 4920 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_MISSING_SEMICOLON_IN_SQL); }
#line 8779 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 505:
#line 4926 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->sqsav->flags, RWL_SQFLAG_DYNAMIC))
	      rwlerror(rwm, RWL_ERROR_DEFINE_ARRAY_NOT_DYNAMIC);
	    else
	      bis(rwm->sqsav->flags, RWL_SQFLAG_ARRAYD);
	  }
#line 8790 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 508:
#line 4940 "rwlparser.y" /* yacc.c:1646  */
    {
	  // Note that it would not be too hard to replace
	  // the integer constant here by an expression
	  // which would make sense as that is what
	  // can be done with modify sql for dynamic sql
	  rwm->bdpos = rwm->ival; rwm->bdtyp=RWL_DEFINE;
	}
#line 8802 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 510:
#line 4949 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->sqsav->flags, RWL_SQLFLAG_IDUSE))
	      rwlerror(rwm, RWL_ERROR_IMPLICIT_ALREADY, "define");
	    bis(rwm->sqsav->flags, RWL_SQLFLAG_IDUSE);
	  }
#line 8812 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 513:
#line 4963 "rwlparser.y" /* yacc.c:1646  */
    { rwm->bdname = rwm->sval; rwm->bdtyp=RWL_BINDOUT_NAME; }
#line 8818 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 515:
#line 4965 "rwlparser.y" /* yacc.c:1646  */
    { 
	    // We could also use expression here, but we would
	    // of course need to check it was either a non-negative number
	    // or a string starting with :
	    rwm->bdpos = bit(rwm->m2flags,RWL_P2_BINDZERO) ? rwm->ival+1 : rwm->ival;
	    rwm->bdtyp=RWL_BINDOUT_POS; 
	  }
#line 8830 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 517:
#line 4973 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->bdtyp=RWL_BINDOUT_SAME;
	  }
#line 8838 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 519:
#line 4977 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_IMPLICIT_NOT_BINDOUT);
	  }
#line 8846 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 522:
#line 4988 "rwlparser.y" /* yacc.c:1646  */
    { rwm->bdname = rwm->sval; rwm->bdtyp=RWL_BIND_NAME; }
#line 8852 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 524:
#line 4990 "rwlparser.y" /* yacc.c:1646  */
    { 
	    // same comment as above
	    rwm->bdpos = bit(rwm->m2flags,RWL_P2_BINDZERO) ? rwm->ival+1 : rwm->ival;
	    rwm->bdtyp=RWL_BIND_POS; 
	  }
#line 8862 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 526:
#line 4996 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->bdtyp=RWL_BIND_SAME;
	  }
#line 8870 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 528:
#line 5000 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->sqsav->flags, RWL_SQLFLAG_IBUSE))
	      rwlerror(rwm, RWL_ERROR_IMPLICIT_ALREADY, "bind");
	    bis(rwm->sqsav->flags, RWL_SQLFLAG_IBUSE);
	  }
#line 8880 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 529:
#line 5009 "rwlparser.y" /* yacc.c:1646  */
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

		  case RWL_TYPE_RAW: 
		    bd->vtype = RWL_TYPE_RAW;
		    bd->slen = rwm->mxq->evar[bd->vguess].num.slen;
		  break;

                  case RWL_TYPE_STR:
                    if (bit(rwm->m2flags, RWL_P2_BINDRAW))
                    {
                      bd->vtype = RWL_TYPE_RAW;
                    }
                    else
                      bd->vtype = RWL_TYPE_STR;
		    bd->slen = rwm->mxq->evar[bd->vguess].num.slen;
                    /* space for NULL terminate is considered in rwladdvar */
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
#line 8983 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 530:
#line 5110 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->inam = RWL_DUMMY_VAR;
	    rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2, "function", "runseconds", "bind/define");
	  }
#line 8992 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 531:
#line 5115 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->inam = RWL_DUMMY_VAR;
	    rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2, "function", "epochseconds", "bind/define");
	  }
#line 9001 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 532:
#line 5119 "rwlparser.y" /* yacc.c:1646  */
    { bic(rwm->m2flags,RWL_P2_BINDRAW); }
#line 9007 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 533:
#line 5121 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (bit(rwm->mflags,RWL_DEBUG_ALLOWHACK))
	      bis(rwm->m2flags,RWL_P2_BINDRAW);
	    else
	      rwlerror(rwm, RWL_ERROR_RESERVED_FOR_FUTURE, "raw");
	  }
#line 9018 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 534:
#line 5130 "rwlparser.y" /* yacc.c:1646  */
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
#line 9039 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 535:
#line 5147 "rwlparser.y" /* yacc.c:1646  */
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
#line 9060 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 536:
#line 5164 "rwlparser.y" /* yacc.c:1646  */
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
#line 9081 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 537:
#line 5181 "rwlparser.y" /* yacc.c:1646  */
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
#line 9108 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 538:
#line 5203 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 9114 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 539:
#line 5204 "rwlparser.y" /* yacc.c:1646  */
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
#line 9149 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 540:
#line 5235 "rwlparser.y" /* yacc.c:1646  */
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
#line 9174 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 541:
#line 5255 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 9180 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 542:
#line 5256 "rwlparser.y" /* yacc.c:1646  */
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
#line 9206 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 543:
#line 5278 "rwlparser.y" /* yacc.c:1646  */
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
#line 9225 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 545:
#line 5293 "rwlparser.y" /* yacc.c:1646  */
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
#line 9244 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 547:
#line 5308 "rwlparser.y" /* yacc.c:1646  */
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
#line 9263 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 551:
#line 5328 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 9269 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 552:
#line 5330 "rwlparser.y" /* yacc.c:1646  */
    { rwm->msqlstk = rwlexprfinish(rwm); }
#line 9275 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 553:
#line 5332 "rwlparser.y" /* yacc.c:1646  */
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
		  case RWL_TYPE_RAW:
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
#line 9331 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 554:
#line 5386 "rwlparser.y" /* yacc.c:1646  */
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
#line 9365 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 555:
#line 5416 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->mdbsphi = rwm->mdbsplo = rwlexprfinish(rwm);
	    if (!rwm->mdbsplo)
	      rwlexprclear(rwm);
	  }
#line 9375 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 556:
#line 5422 "rwlparser.y" /* yacc.c:1646  */
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
#line 9408 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 558:
#line 5454 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (!(rwm->mdbsphi = rwlexprfinish(rwm)))
	      rwlexprclear(rwm);
	  }
#line 9417 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 559:
#line 5461 "rwlparser.y" /* yacc.c:1646  */
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
#line 9441 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 561:
#line 5484 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m3flags, RWL_P3_SPFCONCAT); }
#line 9447 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 562:
#line 5485 "rwlparser.y" /* yacc.c:1646  */
    { bic(rwm->m3flags, RWL_P3_SPFCONCAT); }
#line 9453 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 563:
#line 5489 "rwlparser.y" /* yacc.c:1646  */
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
#line 9477 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 564:
#line 5509 "rwlparser.y" /* yacc.c:1646  */
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
#line 9495 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 565:
#line 5527 "rwlparser.y" /* yacc.c:1646  */
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
#line 9518 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 567:
#line 5549 "rwlparser.y" /* yacc.c:1646  */
    {
	  rwm->conhead = rwm->contail = 0;
	}
#line 9526 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 568:
#line 5553 "rwlparser.y" /* yacc.c:1646  */
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
#line 9551 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 571:
#line 5581 "rwlparser.y" /* yacc.c:1646  */
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
#line 9574 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 572:
#line 5602 "rwlparser.y" /* yacc.c:1646  */
    {  
	    sb4 l;
	    rwm->filvarn = RWL_VAR_NOTFOUND;
	    rwm->filenam = 0;
	    /* lookup the file and check it is a file */
	    l = rwlfindvar2(rwm->mxq, rwm->inam, RWL_VAR_NOGUESS, rwm->codename);
	    if (l>=0)
	    {
	      if (rwlisfile(rwm->mxq->evar[l].vtype))
	      {
		rwm->filvarn = l;
		rwm->filenam = rwm->inam;
		bis(rwm->m4flags,RWL_P4_PRINTTOFILE);
	      }
	      else
	        rwlerror(rwm,RWL_ERROR_INCORRECT_TYPE2, rwm->mxq->evar[l].stype, rwm->inam, "file");
	    }

	    bic(rwm->m4flags,RWL_P4_RWPLINE);
	  }
#line 9599 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 573:
#line 5624 "rwlparser.y" /* yacc.c:1646  */
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
		bis(rwm->m4flags,RWL_P4_PRINTTOFILE);
	      }
	      else
	        rwlerror(rwm,RWL_ERROR_INCORRECT_TYPE2, rwm->mxq->evar[l].stype, rwm->inam, "file");
	    }
	    bis(rwm->m4flags,RWL_P4_RWPLINE);

	  }
#line 9624 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 574:
#line 5648 "rwlparser.y" /* yacc.c:1646  */
    {  
	    bic(rwm->m4flags,RWL_P4_RWPLINE);
	    bic(rwm->m4flags,RWL_P4_PRINTTOFILE);
	  }
#line 9633 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 575:
#line 5653 "rwlparser.y" /* yacc.c:1646  */
    {  
	    bis(rwm->m4flags,RWL_P4_RWPLINE);
	    bic(rwm->m4flags,RWL_P4_PRINTTOFILE);
	  }
#line 9642 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 577:
#line 5661 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m4flags,RWL_P4_PRINTBLANK); }
#line 9648 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 579:
#line 5666 "rwlparser.y" /* yacc.c:1646  */
    {
	    // we need to make sure code does not need to change when we have a complete implementation
	    // of a raw expression. As a result, the actual call that does the raw write will right
	    // now just take the name of the raw as an argument, but eventually it will take
	    // an rwl_estack in stead. The call is the same we use for line oriented write
	    // as it knows how to deal with RWL_TYPE_FILE vs RWL_TYPE_RAWFILE
#ifdef RWL_NO_RAW_EXPRESSION
	    sb4 l2;
	    l2 = rwlfindvar2(rwm->mxq, rwm->inam, RWL_VAR_NOGUESS, rwm->codename);
	    if (l2<0 || rwm->mxq->evar[l2].vtype != RWL_TYPE_RAW)
	      rwlsevere(rwm, "[rwlparser-badrawwrite:%s,%d]", rwm->inam, l2);
	    else if (rwm->mxq->evar[rwm->filvarn].vtype != RWL_TYPE_RAWFILE)
	    {
	        rwlerror(rwm,RWL_ERROR_INCORRECT_TYPE2, rwm->mxq->evar[rwm->filvarn].stype
		  , rwm->mxq->evar[rwm->filvarn].vname, "raw write");
	    }
	    else
	    {
	      if (rwm->codename)
	      {
		rwlcodeaddpupu(rwm, RWL_CODE_WRITE, rwm->inam, l2, rwm->filenam, (ub4)rwm->filvarn);
	      }
	      else
	      {
		FILE *f = rwm->mxq->evar[rwm->filvarn].num.vptr;
		if (bit(rwm->mxq->evar[rwm->filvarn].num.valflags, RWL_VALUE_FILE_OPENW))
		{
		  rwl_alen_t byt = fwrite(rwm->mxq->evar[l2].num.sval, 1, rwm->mxq->evar[l2].num.alen, f);
		  if (ferror(f) || byt != rwm->mxq->evar[l2].num.alen)
		  {
		    char etxt[100];
		    if (0!=rwlstrerror(errno, etxt, sizeof(etxt)))
		      strcpy(etxt,"unknown");
		    rwlerror(rwm, RWL_ERROR_CANNOTWRITE_FILE, rwm->filenam, etxt);
		  }
		}
		else
		{
		  if (!bit(rwm->mxq->evar[rwm->filvarn].num.valflags, RWL_VALUE_FILEREPNOTOPEN))
		    rwlerror(rwm,RWL_ERROR_WRITE_NOT_OPEN, rwm->mxq->evar[rwm->filvarn].vname);
		  bis(rwm->mxq->evar[rwm->filvarn].num.valflags, RWL_VALUE_FILEREPNOTOPEN);
		}
	      }
	    }
#else
#           error "You need to write this code"
#endif
	  }
#line 9701 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 580:
#line 5715 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwl_estack *estk;
	    if ((estk = rwlexprfinish(rwm)))
	    {
	      if (rwm->codename)
	      {
		if (bit(rwm->m4flags, RWL_P4_PRINTTOFILE))
		{ /* write to file - give file name and location guess */
		  if (bit(rwm->m4flags,RWL_P4_PRINTBLANK))
		    rwlcodeaddppu(rwm, RWL_CODE_WRITEBLANK, estk, rwm->filenam, (ub4)rwm->filvarn);
		  else
		    rwlcodeaddppu(rwm, RWL_CODE_WRITE, estk, rwm->filenam, (ub4)rwm->filvarn);
		  bic(rwm->m4flags,RWL_P4_PRINTBLANK);
		}
		else
		{
		  if (bit(rwm->m4flags,RWL_P4_PRINTBLANK))
		    rwlcodeaddp(rwm, RWL_CODE_PRINTBLANK, estk);
		  else
		    rwlcodeaddp(rwm, RWL_CODE_PRINT, estk);
		  bic(rwm->m4flags,RWL_P4_PRINTBLANK);
		}
	      }
	      else // directly during parse
	      {
		if (!bit(rwm->m2flags, RWL_P2_NOEXEC))
		{
		  rwldummyonbad(rwm->mxq, rwm->defdb);
		  if (bit(rwm->m4flags, RWL_P4_PRINTTOFILE))
		  { 
		    // write to file, check it is open
		    if (bit(rwm->mxq->evar[rwm->filvarn].num.valflags, RWL_VALUE_FILE_OPENW))
		    {
		      if (bit(rwm->m4flags,RWL_P4_PRINTBLANK))
			fputs(" ", rwm->mxq->evar[rwm->filvarn].num.vptr);
		      rwlexprprint(estk,  &rwm->loc, rwm->mxq, rwm->mxq->evar[rwm->filvarn].num.vptr);
		    }
		    else
		    {
		      if (!bit(rwm->mxq->evar[rwm->filvarn].num.valflags, RWL_VALUE_FILEREPNOTOPEN))
			rwlerror(rwm,RWL_ERROR_WRITE_NOT_OPEN, rwm->mxq->evar[rwm->filvarn].vname);
		      bis(rwm->mxq->evar[rwm->filvarn].num.valflags, RWL_VALUE_FILEREPNOTOPEN);
		    }
		    bic(rwm->m4flags,RWL_P4_PRINTBLANK);
		  }
		  else
		  {
		    if (bit(rwm->m4flags,RWL_P4_PRINTBLANK))
		      fputs(" ", stdout);
		    bic(rwm->m4flags,RWL_P4_PRINTBLANK);
		    rwlexprprint(estk, &rwm->loc, rwm->mxq, stdout);
		  }
		}
		rwlexprdestroy(rwm, estk);
	      }
	    }
	  }
#line 9763 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 581:
#line 5776 "rwlparser.y" /* yacc.c:1646  */
    {
	      if (bit(rwm->m4flags,RWL_P4_RWPLINE))
	      { 
		if (rwm->codename)
		{
		  if (bit(rwm->m4flags, RWL_P4_PRINTTOFILE))
		    rwlcodeaddpu(rwm, RWL_CODE_NEWLINEFILE, rwm->filenam, (ub4)rwm->filvarn);
		  else
		    rwlcodeadd0(rwm, RWL_CODE_NEWLINE);
		}
		else // directly during parse
		if (!bit(rwm->m2flags, RWL_P2_NOEXEC))
		{
		  if (bit(rwm->m4flags, RWL_P4_PRINTTOFILE))
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
	      bic(rwm->m4flags,RWL_P4_RWPLINE|RWL_P4_PRINTBLANK);
	    }
#line 9799 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 582:
#line 5811 "rwlparser.y" /* yacc.c:1646  */
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
#line 9814 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 583:
#line 5825 "rwlparser.y" /* yacc.c:1646  */
    {  
	    bic(rwm->m4flags,RWL_P4_RWPLINE);
	  }
#line 9822 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 584:
#line 5829 "rwlparser.y" /* yacc.c:1646  */
    {  
	    bis(rwm->m4flags,RWL_P4_RWPLINE);
	  }
#line 9830 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 585:
#line 5837 "rwlparser.y" /* yacc.c:1646  */
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
#line 9883 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 586:
#line 5886 "rwlparser.y" /* yacc.c:1646  */
    { 
		rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 9893 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 588:
#line 5896 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_MISSING_SEMICOLON);
	    yyerrok;
	  }
#line 9902 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 589:
#line 5903 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_ASSIGN; }
#line 9908 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 590:
#line 5904 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_GREATEQ; }
#line 9914 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 591:
#line 5905 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_RSHIFTASSIGN; }
#line 9920 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 592:
#line 5906 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_LESSEQ; }
#line 9926 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 593:
#line 5907 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_PIPEFROM; }
#line 9932 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 594:
#line 5908 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_PIPETO; }
#line 9938 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 596:
#line 5912 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_APPEND; }
#line 9944 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 597:
#line 5913 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_ASNADD; }
#line 9950 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 598:
#line 5914 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_ASNSUB; }
#line 9956 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 599:
#line 5915 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_ASNBIS; }
#line 9962 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 600:
#line 5916 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_ASNBIC; }
#line 9968 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 601:
#line 5923 "rwlparser.y" /* yacc.c:1646  */
    {
		rwl_estack *estk;
		rwlexprpush(rwm, rwm->assignvar, RWL_STACK_ASN);
		estk = rwlexprfinish(rwm);
		rwlcodeaddp(rwm, RWL_CODE_ASSIGN, estk);
	      }
#line 9979 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 602:
#line 5930 "rwlparser.y" /* yacc.c:1646  */
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
#line 10009 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 604:
#line 5956 "rwlparser.y" /* yacc.c:1646  */
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
#line 10026 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 606:
#line 5970 "rwlparser.y" /* yacc.c:1646  */
    { 
		rwlerror(rwm, RWL_ERROR_LOOP);
		rwlexprclear(rwm);
		// prevent attempting endloop code generation
		rwm->loopvar[rwm->rsldepth] = 0;
		rwm->rsllityp[rwm->rsldepth] = RWL_LI_BAD;
		bic(rwm->rslflags[rwm->rsldepth], RWL_RSLFLAG_MAYBRK);
		yyerrok;
	      }
#line 10040 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 609:
#line 5989 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwl_lilist *thisli = rwlalloc(rwm, sizeof(rwl_lilist));
	    rwlexprpush(rwm, rwm->loopvar[rwm->rsldepth], RWL_STACK_ASN);
	    thisli->listk = rwlexprfinish(rwm);
	    rwm->rsllitail[rwm->rsldepth]->linxt = thisli;
	    rwm->rsllitail[rwm->rsldepth] = thisli;
	  }
#line 10052 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 612:
#line 6009 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 10061 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 613:
#line 6014 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 10069 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 614:
#line 6021 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->m4flags, RWL_P4_FILEISRAW);
	  }
#line 10077 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 615:
#line 6025 "rwlparser.y" /* yacc.c:1646  */
    {
	    bis(rwm->m4flags, RWL_P4_FILEISRAW);
	  }
#line 10085 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 618:
#line 6033 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "execute") ; }
#line 10091 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 621:
#line 6040 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "loop") ; }
#line 10097 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 624:
#line 6047 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "if") ; yyerrok; }
#line 10103 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 627:
#line 6054 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (0 != rwlstrcmp(rwm->inam, rwm->sqname))
	      rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END2, "sql", rwm->sqname);
	  }
#line 10112 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 628:
#line 6059 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END2, "sql", rwm->sqname) ; yyerrok; }
#line 10118 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 630:
#line 6065 "rwlparser.y" /* yacc.c:1646  */
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
#line 10133 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 631:
#line 6076 "rwlparser.y" /* yacc.c:1646  */
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
#line 10148 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 632:
#line 6087 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (bit(rwm->rslflags[rwm->rsldepth-1], RWL_RSLFLAG_WHILOP))
	      rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "loop") ;
	    else
	      rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "while") ;
	    yyerrok;
	  }
#line 10160 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 633:
#line 6098 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->cursorand = 0;
	  }
#line 10168 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 634:
#line 6103 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->cursorand = rwlexprfinish(rwm);
	  }
#line 10176 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 636:
#line 6110 "rwlparser.y" /* yacc.c:1646  */
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
#line 10235 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 637:
#line 6167 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->loc.errlin = 0;
	    rwm->sqlfile = 0; /* not from a file */
	  }
#line 10244 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 638:
#line 6172 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprbeg(rwm);
	  }
#line 10252 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 639:
#line 6176 "rwlparser.y" /* yacc.c:1646  */
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
#line 10337 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 640:
#line 6259 "rwlparser.y" /* yacc.c:1646  */
    {
	    sb4 l;
	    /* lookup the file and check it is a file */
	    rwm->filvarn = RWL_VAR_NOTFOUND;
	    rwm->filenam = 0;
	    l = rwlfindvar2(rwm->mxq, rwm->inam, RWL_VAR_NOGUESS, rwm->codename);
	    if (l>=0)
	    {
	      if (rwlisfile(rwm->mxq->evar[l].vtype))
	      {
		rwm->filvarn = l;
		rwm->filenam = rwm->inam;
	      }
	      else
	      {
	        rwlerror(rwm,RWL_ERROR_INCORRECT_TYPE2, rwm->mxq->evar[l].stype, rwm->inam
		, bit(rwm->m4flags,RWL_P4_RWPLINE) ? "file" : "raw file");
	      }
	    }
	    // initialize identifier list
	    rwm->idlist = rwm->idtail = 0;
	  }
#line 10364 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 641:
#line 6282 "rwlparser.y" /* yacc.c:1646  */
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
		{
		  if (RWL_TYPE_FILE == rwm->mxq->evar[rwm->filvarn].vtype) // readline text file
		    rwlreadline(rwm->mxq, 0, rwm->mxq->evar+rwm->filvarn, rwm->idlist, 0);
		  else
		  {
		    // read bytes from raw file
		    rwl_value *nn2 = &rwm->mxq->evar[rwm->idlist->idnum].num;
		    FILE *f = rwm->mxq->evar[rwm->filvarn].num.vptr;
		    if (RWL_SVALLOC_NOT == nn2->vsalloc)
		      rwlinitrawvar(rwm->mxq, nn2);
		    nn2->alen = (rwl_alen_t) fread(nn2->sval, 1, nn2->slen, f);
		    if (ferror(f))
		    {
		      char etxt[100];
		      if (0!=rwlstrerror(errno, etxt, sizeof(etxt)))
			strcpy(etxt,"unknown");
		      rwlerror(rwm, RWL_ERROR_CANNOTREAD_FILE, rwm->filenam, etxt);
		    }
		  }
		}
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
#line 10410 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 642:
#line 6325 "rwlparser.y" /* yacc.c:1646  */
    { 
		rwlerror(rwm, RWL_ERROR_BAD_READLINE);
		yyerrok;
	      }
#line 10419 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 643:
#line 6332 "rwlparser.y" /* yacc.c:1646  */
    { rwm->reg_estk = rwm->str_estk = rwm->sub_estk = 0; }
#line 10425 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 644:
#line 6334 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->reg_estk = rwlexprfinish(rwm);
	  }
#line 10433 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 645:
#line 6338 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->str_estk = rwlexprfinish(rwm);
	  }
#line 10441 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 646:
#line 6342 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->sub_estk = rwlexprfinish(rwm);
	  }
#line 10449 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 647:
#line 6346 "rwlparser.y" /* yacc.c:1646  */
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
#line 10492 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 648:
#line 6385 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprclear(rwm);
	    rwlerror(rwm, RWL_ERROR_BAD_REGEX);
	    yyerrok;
	  }
#line 10502 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 649:
#line 6394 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->m2flags, RWL_P2_REGEXSUBG);
	  }
#line 10510 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 650:
#line 6398 "rwlparser.y" /* yacc.c:1646  */
    {
	    bis(rwm->m2flags, RWL_P2_REGEXSUBG);
	  }
#line 10518 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 651:
#line 6404 "rwlparser.y" /* yacc.c:1646  */
    { rwm->reg_estk = rwm->str_estk = 0; }
#line 10524 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 652:
#line 6406 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->reg_estk = rwlexprfinish(rwm);
	  }
#line 10532 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 653:
#line 6410 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->str_estk = rwlexprfinish(rwm);
	    rwm->idlist = rwm->idtail = 0;
	  }
#line 10541 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 654:
#line 6415 "rwlparser.y" /* yacc.c:1646  */
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
#line 10578 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 655:
#line 6449 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprclear(rwm);
	    rwlerror(rwm, RWL_ERROR_BAD_REGEX);
	    yyerrok;
	  }
#line 10588 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 656:
#line 6458 "rwlparser.y" /* yacc.c:1646  */
    { rwm->reg_estk = rwm->str_estk = 0; }
#line 10594 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 657:
#line 6460 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->reg_estk = rwlexprfinish(rwm);
	  }
#line 10602 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 658:
#line 6464 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->str_estk = rwlexprfinish(rwm);
	    rwm->idlist = rwm->idtail = 0;
	  }
#line 10611 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 659:
#line 6469 "rwlparser.y" /* yacc.c:1646  */
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
#line 10648 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 660:
#line 6503 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprclear(rwm);
	    rwlerror(rwm, RWL_ERROR_BAD_REGEX);
	    yyerrok;
	  }
#line 10658 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 662:
#line 6513 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwl_idlist *newid = rwlalloc(rwm, sizeof(rwl_idlist));
	    
	    newid->idnam = rwm->inam;
	    newid->idnum = rwlfindvar2(rwm->mxq, rwm->inam, RWL_VAR_NOGUESS, rwm->codename);
	    if (newid->idnum>=0)
	    {
	      // Exists, check the type is good
	      switch (rwm->mxq->evar[newid->idnum].vtype)
	      {
	        case RWL_TYPE_RAW:

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
		    , rwm->mxq->evar[newid->idnum].stype, rwm->inam, "read");
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
#line 10701 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 665:
#line 6559 "rwlparser.y" /* yacc.c:1646  */
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
#line 10746 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 666:
#line 6602 "rwlparser.y" /* yacc.c:1646  */
    {
		/* start a dummy assignment such that the system expression gets executed */
		rwm->assignvar = RWL_DUMMY_VAR;
		rwm->assignoper = RWL_T_ASSIGN;
		rwlexprbeg(rwm);
	      }
#line 10757 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 667:
#line 6611 "rwlparser.y" /* yacc.c:1646  */
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
#line 10777 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 668:
#line 6636 "rwlparser.y" /* yacc.c:1646  */
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
#line 10792 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 669:
#line 6648 "rwlparser.y" /* yacc.c:1646  */
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
#line 10815 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 670:
#line 6667 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ILLEGAL_THREAD); yyerrok; }
#line 10821 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 675:
#line 6681 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->cqnstart = rwm->cqnstop = 0.0;
	    rwm->cqnnow = rwlclock(rwm->mxq,0);
	  }
#line 10830 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 676:
#line 6686 "rwlparser.y" /* yacc.c:1646  */
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
#line 10858 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 677:
#line 6711 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->cqnstop = rwm->pval.dval;
	    if (rwm->cqnstop < rwm->cqnstart || rwm->cqnstop < rwm->cqnnow)
	    {
	      rwlerror(rwm, RWL_ERROR_CQN_STOP_BEFORE_START, rwm->cqnstop, rwm->cqnstart, rwm->cqnnow);
	      rwm->cqnat = 0;
	    }
	  }
#line 10871 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 678:
#line 6720 "rwlparser.y" /* yacc.c:1646  */
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
#line 10927 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 679:
#line 6772 "rwlparser.y" /* yacc.c:1646  */
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
#line 10956 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 680:
#line 6797 "rwlparser.y" /* yacc.c:1646  */
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
#line 10988 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 681:
#line 6825 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlcodeaddu(rwm, RWL_CODE_CQNISCB, 0); // Is in callback
	    rwlcodetail(rwm);
	  }
#line 10997 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 685:
#line 6836 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "querynotification");
	    yyerrok;
	  }
#line 11006 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 687:
#line 6845 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->cqnstart = rwm->pval.dval;
	  }
#line 11014 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 688:
#line 6852 "rwlparser.y" /* yacc.c:1646  */
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
#line 11034 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 689:
#line 6870 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlcodetail(rwm);
	  }
#line 11042 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 691:
#line 6875 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ILLEGAL_THREAD); yyerrok; }
#line 11048 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 693:
#line 6880 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->mythr->dbnam = rwm->inam;
	  }
#line 11056 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 696:
#line 6889 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "threads") ; }
#line 11062 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 699:
#line 6897 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "run") ; }
#line 11068 "rwlparser.tab.c" /* yacc.c:1646  */
    break;


#line 11072 "rwlparser.tab.c" /* yacc.c:1646  */
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
