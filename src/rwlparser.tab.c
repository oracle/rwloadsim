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
#line 156 "rwlparser.y" /* yacc.c:339  */

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


#line 372 "rwlparser.tab.c" /* yacc.c:339  */

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
    RWL_T_UMINUS = 417
  };
#endif

/* Value type.  */
#if ! defined RWLYSTYPE && ! defined RWLYSTYPE_IS_DECLARED

union RWLYSTYPE
{
#line 471 "rwlparser.y" /* yacc.c:355  */

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

#line 597 "rwlparser.tab.c" /* yacc.c:355  */
};

typedef union RWLYSTYPE RWLYSTYPE;
# define RWLYSTYPE_IS_TRIVIAL 1
# define RWLYSTYPE_IS_DECLARED 1
#endif



int rwlyparse (rwl_main *rwm);

#endif /* !YY_RWLY_RWLPARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 613 "rwlparser.tab.c" /* yacc.c:358  */

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
#define YYLAST   5787

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  178
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  290
/* YYNRULES -- Number of rules.  */
#define YYNRULES  664
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1222

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   417

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   170,     2,     2,     2,   169,     2,     2,
     173,   174,   167,   166,   175,   165,     2,   168,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   177,   172,
     163,   162,   164,   176,     2,     2,     2,     2,     2,     2,
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
     155,   156,   157,   158,   159,   160,   161,   171
};

#if RWLYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   528,   528,   535,   539,   541,   540,   556,   557,   558,
     560,   563,   570,   572,   589,   588,   598,   597,   606,   605,
     615,   614,   624,   629,   638,   639,   643,   642,   649,   654,
     662,   663,   667,   666,   674,   673,   746,   751,   752,   764,
     765,   768,   769,   772,   782,   787,   795,   808,   839,   850,
     862,   861,   877,   887,   886,   903,   913,   923,   933,   946,
     947,   950,   958,   968,   979,   994,   995,  1007,  1009,  1008,
    1021,  1022,  1028,  1027,  1055,  1062,  1069,  1070,  1074,  1075,
    1078,  1091,  1090,  1142,  1154,  1153,  1174,  1179,  1186,  1191,
    1198,  1283,  1284,  1288,  1297,  1298,  1301,  1302,  1303,  1307,
    1308,  1312,  1340,  1342,  1344,  1346,  1361,  1366,  1371,  1379,
    1380,  1382,  1384,  1403,  1405,  1404,  1420,  1419,  1435,  1434,
    1450,  1493,  1507,  1521,  1535,  1547,  1551,  1552,  1553,  1554,
    1555,  1556,  1557,  1558,  1559,  1560,  1561,  1562,  1563,  1564,
    1565,  1567,  1569,  1571,  1573,  1574,  1577,  1580,  1581,  1585,
    1590,  1591,  1592,  1594,  1596,  1597,  1599,  1610,  1621,  1625,
    1631,  1635,  1641,  1645,  1651,  1656,  1660,  1668,  1666,  1693,
    1697,  1701,  1707,  1713,  1717,  1718,  1722,  1723,  1727,  1732,
    1733,  1734,  1739,  1740,  1741,  1742,  1746,  1747,  1748,  1749,
    1753,  1754,  1755,  1759,  1760,  1761,  1762,  1763,  1764,  1768,
    1769,  1770,  1774,  1776,  1775,  1793,  1795,  1794,  1810,  1812,
    1821,  1811,  1836,  1837,  1841,  1842,  1852,  1853,  1857,  1865,
    1868,  1867,  1874,  1877,  1876,  1880,  1882,  1884,  1886,  1889,
    1895,  1924,  1939,  1952,  1954,  1955,  1959,  1961,  1965,  1967,
    1972,  1971,  1978,  1977,  1989,  1994,  1993,  2001,  2005,  2029,
    2055,  2053,  2081,  2079,  2189,  2198,  2197,  2201,  2200,  2205,
    2211,  2210,  2220,  2219,  2228,  2241,  2246,  2240,  2274,  2282,
    2287,  2281,  2316,  2323,  2339,  2338,  2351,  2367,  2378,  2384,
    2390,  2402,  2414,  2424,  2434,  2433,  2446,  2452,  2450,  2568,
    2575,  2591,  2593,  2595,  2595,  2596,  2599,  2601,  2603,  2600,
    2605,  2609,  2608,  2723,  2756,  2764,  2789,  2763,  2840,  2841,
    2842,  2843,  2845,  2846,  2854,  2855,  2863,  2864,  2873,  2876,
    2875,  2884,  2886,  2894,  2902,  2911,  2919,  2921,  2928,  2929,
    2940,  2976,  3013,  3054,  3071,  3053,  3112,  3119,  3126,  3125,
    3157,  3158,  3166,  3165,  3213,  3215,  3214,  3224,  3375,  3374,
    3522,  3528,  3531,  3547,  3551,  3555,  3562,  3563,  3567,  3567,
    3581,  3581,  3597,  3597,  3613,  3613,  3627,  3627,  3658,  3659,
    3660,  3663,  3669,  3668,  3678,  3677,  3695,  3694,  3742,  3757,
    3766,  3741,  3803,  3811,  3812,  3812,  3825,  3824,  3831,  3832,
    3833,  3839,  3840,  3844,  3848,  3856,  3860,  3864,  3872,  3873,
    3879,  3885,  3887,  3890,  3891,  3896,  3895,  3997,  3999,  3998,
    4053,  4057,  4061,  4062,  4066,  4081,  4090,  4105,  4114,  4118,
    4124,  4141,  4148,  4158,  4159,  4160,  4164,  4165,  4181,  4191,
    4197,  4205,  4211,  4219,  4225,  4233,  4238,  4245,  4246,  4247,
    4251,  4252,  4251,  4262,  4266,  4267,  4266,  4276,  4283,  4284,
    4287,  4287,  4368,  4366,  4380,  4457,  4554,  4555,  4559,  4560,
    4563,  4564,  4567,  4568,  4571,  4575,  4579,  4583,  4602,  4608,
    4610,  4613,  4614,  4623,  4624,  4629,  4628,  4637,  4647,  4648,
    4652,  4652,  4654,  4653,  4662,  4661,  4665,  4672,  4673,  4677,
    4677,  4679,  4678,  4685,  4684,  4688,  4697,  4793,  4798,  4803,
    4804,  4807,  4824,  4841,  4858,  4881,  4881,  4912,  4933,  4933,
    4956,  4955,  4971,  4970,  4986,  4985,  5002,  5003,  5006,  5008,
    5006,  5062,  5093,  5092,  5129,  5130,  5138,  5137,  5161,  5162,
    5166,  5165,  5204,  5203,  5226,  5226,  5253,  5254,  5257,  5278,
    5300,  5324,  5329,  5337,  5338,  5338,  5342,  5403,  5438,  5453,
    5496,  5505,  5506,  5514,  5515,  5516,  5517,  5518,  5519,  5522,
    5523,  5524,  5525,  5532,  5539,  5530,  5565,  5565,  5578,  5591,
    5592,  5596,  5609,  5610,  5617,  5622,  5629,  5630,  5631,  5636,
    5637,  5638,  5643,  5644,  5645,  5650,  5651,  5652,  5657,  5662,
    5663,  5674,  5685,  5696,  5700,  5707,  5708,  5765,  5771,  5770,
    5858,  5857,  5901,  5909,  5911,  5915,  5919,  5908,  5961,  5970,
    5974,  5981,  5983,  5987,  5980,  6025,  6035,  6037,  6041,  6034,
    6079,  6088,  6089,  6092,  6135,  6144,  6170,  6169,  6200,  6206,
    6207,  6210,  6211,  6215,  6220,  6245,  6254,  6306,  6331,  6359,
    6214,  6367,  6368,  6369,  6377,  6378,  6386,  6404,  6385,  6408,
    6412,  6413,  6420,  6421,  6422,  6428,  6429,  6430,  6435,  6436,
    6437,  6438,  6439,  6440,  6441
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
  "'='", "'<'", "'>'", "'-'", "'+'", "'*'", "'/'", "'%'", "'!'",
  "RWL_T_UMINUS", "';'", "'('", "')'", "','", "'?'", "':'", "$accept",
  "rwlyparse", "terminator", "programelementlist", "$@1", "programelement",
  "globaldeclaration", "$@2", "$@3", "$@4", "$@5", "ranstringspec",
  "ranstringlist", "ranstringentry", "$@6", "ranidentifierspec",
  "ranidentifierlist", "ranidentifierentry", "$@7", "databasedeclaration",
  "$@8", "maybejustusername", "maybedbspeclist", "dbspeclist", "dbspec",
  "$@9", "$@10", "maybemarks", "eithermark", "maybemaxpoolsize",
  "mayberelease", "maybewait", "$@11", "maybethentimeoutaction", "$@12",
  "compiletime_expression", "compiletime_concatenation",
  "subroutinedeclaration", "isaccepted", "functionhead", "$@13",
  "procedurehead", "$@14", "maybeprivatefunction", "maybeprivateprocedure",
  "codebody", "printvarlist", "printvarelement", "maybeemptybrackets",
  "maybearguments", "formalargumentlist", "formalargument", "argumenttype",
  "maybestatistics", "codeterminator", "$@15", "$@16", "$@17",
  "identifier_or_constant", "$@18", "maybe_expression_list",
  "expression_list", "countexpressions", "primary_expression",
  "unary_expression", "multiplication", "addition", "comparison",
  "equality", "logicaland", "$@19", "logicalor", "$@20", "conditional",
  "$@21", "$@22", "expression", "concatenation", "statementlist",
  "goodorbadstatement", "$@23", "$@24", "statement", "$@25", "$@26",
  "$@27", "$@28", "$@29", "$@30", "$@31", "$@32", "$@33", "$@34", "$@35",
  "$@36", "$@37", "$@38", "$@39", "$@40", "$@41", "$@42", "$@43", "$@44",
  "$@45", "$@46", "$@47", "$@48", "$@49", "writelobhead", "$@50",
  "maybewritelobtail", "readlobhead", "$@51", "maybereadlobtail", "$@52",
  "docallonesql", "dosqlloop", "$@53", "controlloopheader",
  "controllooplistandend", "controlloopheadend", "controllooplist",
  "controlloopoption", "$@54", "$@55", "$@56", "$@57", "$@58",
  "maybequeue", "callsql", "$@59", "$@60", "embeddedsql", "$@61",
  "immediatesql", "$@62", "$@63", "$@64", "getdynamicorinlineimmsql",
  "$@65", "immediatesqlheader", "$@66", "immediatesqlendsqlisok",
  "immediatesqltail", "immediateatclause", "executehead",
  "maybeatdatabase", "declinitlist", "declinit", "$@67", "declinitassign",
  "$@68", "ifstatements", "elseifstatements", "maybeelseiflist", "ifhead",
  "elseifhead", "whileheadkeyword", "whilehead", "whileheadwrongkeyword",
  "maybethreadsattr", "maybeprivatestring", "maybeprivateinteger",
  "maybeprivatedouble", "maybeprivatelob", "eitherlobtype",
  "sqldeclaration", "$@69", "$@70", "$@71", "$@72", "namedsqldeclaration",
  "dynamicsqlbody", "$@73", "staticsqlbody", "$@74", "addsqlvariable",
  "parsesqlspecifications", "sqlspeclist", "sqlspec", "musthaveterminator",
  "maybearraydefine", "definelist", "defineelement", "$@75", "bindoutlist",
  "bindoutelement", "$@76", "$@77", "$@78", "bindlist", "bindelement",
  "$@79", "$@80", "$@81", "bdidentifier", "bdidentname", "modsqlstatement",
  "$@82", "$@83", "$@84", "$@85", "$@86", "modsqlbdlist", "modsqlbd",
  "$@87", "$@88", "moddbstatement", "$@89", "moddbsespmaybedotdot",
  "printf", "$@90", "sprintfheader", "sprintf", "$@91", "fprintf", "$@92",
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
     415,   416,    61,    60,    62,    45,    43,    42,    47,    37,
      33,   417,    59,    40,    41,    44,    63,    58
};
# endif

#define YYPACT_NINF -964

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-964)))

#define YYTABLE_NINF -648

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -964,   136,   325,  -964,  3398,   -51,    49,  -964,   -51,    -1,
    -964,  -964,  -964,   231,  1846,  2001,  -964,    65,  2068,   127,
     131,   476,  -964,   134,   138,   -42,  -964,   -51,  2223,   220,
    5614,   -51,   -51,   -64,  1611,   -51,    84,   -51,   -51,  -964,
     -51,   366,   336,  -964,  -964,  -964,  -964,   204,   217,  2290,
      51,  -964,  -964,    75,  -964,   139,    54,  -964,  -964,  -964,
    -964,  -964,  -964,    48,   292,   292,   144,   149,  -964,  -964,
     -51,   288,   -51,  1544,  -964,   283,  -964,  -964,    33,    94,
     119,   150,  -964,    69,    74,   205,   -51,   -51,  1208,  2445,
     152,  -964,  -964,  2512,  -964,  -964,  5614,  -964,  -964,   -51,
    -964,  -964,   -51,  -964,   321,  -964,   -51,   275,    64,   262,
     362,   288,   -51,  5614,   -51,  5614,   417,   128,   577,   -42,
     280,   368,   375,   379,   393,   415,   421,   437,   -42,  -964,
     440,  5614,   456,   458,   462,   470,   482,   487,   489,   499,
     502,   504,   506,   507,  -964,   509,  -964,  -964,   510,   511,
     515,   516,   517,   519,   520,   521,   522,  5614,  5614,  5614,
     403,  -964,  -964,   485,   -63,   380,    25,   407,    28,  -964,
      45,   -51,   -51,   -51,  -964,   460,   467,   -51,  -964,   -51,
    -964,   343,   -51,  -964,  2667,   454,   471,   250,   227,  -964,
    -964,   -51,  -964,   -51,  -964,  5614,  -964,   -51,   466,   428,
    -964,  -964,  -964,  -964,  -964,  -964,  -964,   497,  -964,  -964,
     155,  -964,   -51,   404,   523,   524,   525,   -51,  5614,   -51,
     554,  -964,   677,   627,   561,  -964,   -51,   527,   -51,   562,
    1383,   475,  -964,   -51,  -964,  -964,  -964,  -964,  -964,  -964,
    -964,  -964,   -51,  -964,   -51,  -964,   559,  -964,   258,  -964,
     -51,  -964,   685,   308,  -964,    46,  -964,  3118,  3538,   -51,
     266,  5614,  -964,   -51,   564,   -51,   564,   -51,  -964,   344,
    -964,   -51,   -51,   -51,  -964,  -964,   -51,  -964,  -964,  -964,
    -964,  -964,   -51,  5614,  -964,  5614,  -964,   -51,  5392,  -964,
     349,  -964,   -51,   564,   -51,  5614,    44,  -964,  5614,  -964,
     565,  -964,  -964,  -964,   656,  -964,  -964,  5614,   657,   362,
    -964,  -964,  -964,  -964,  -964,   538,  2734,  -964,    39,  -964,
    -964,  -964,  -964,  -964,  -964,  -964,  -964,  -964,  -964,  -964,
     535,   537,  5614,  5614,  5614,  5614,  5614,  5614,  -964,  5614,
    -964,  5614,  5614,  5614,    20,  5614,  5614,  5614,  5614,   157,
     159,   233,  5614,  -964,  5614,  5614,  5614,  5614,  5614,  5614,
    5614,  5614,  5614,  -964,  -964,   539,   263,  5614,  5614,  5614,
    5614,  5614,  5614,  5614,  5614,  5614,  5614,  5614,  5614,  -964,
    -964,  -964,  5614,  -964,  -964,  -964,  -964,   540,   570,   574,
    -964,  -964,  -964,  -964,   -51,    79,  -964,  -964,  -964,  -964,
    -964,  -964,  -964,  -964,  -964,  -964,   -51,   -51,  5614,  -964,
    -964,   695,   696,   699,   579,  -964,  -964,  5614,   -51,  -964,
    5614,   -51,  -964,  -964,  -964,  -964,  -964,  -964,  -964,  -964,
    -964,  -964,  -964,   672,   583,   -51,  5614,  -964,  -964,  -964,
    -964,  -964,  -964,  -964,  -964,  -964,  -964,  2667,  -964,  5614,
    -964,   -51,   -51,   -51,  -964,  3678,  -964,  -964,   553,  -964,
     553,  -964,  -964,  -964,  -964,  -964,  -964,  -964,   254,  -964,
     645,  -964,  -964,  -964,  -964,  -964,  -964,  -964,  -964,  -964,
    -964,  5614,  -964,  3818,   -51,   -51,  -964,  -964,  -964,    87,
     103,   309,   112,   314,  -964,  -964,   654,    24,  -964,  -964,
    -964,   555,   662,   564,  -964,   344,  -964,   344,  -964,   414,
     564,  -964,  -964,  -964,  -964,  -964,  5614,  -964,   349,   349,
    -964,  -964,  -964,  -964,  -964,   344,  -964,  -964,   -51,   588,
     -51,   316,  -964,  -964,  -964,   540,  2889,   362,   662,  -964,
    -964,   657,   556,   557,  -964,  -964,  -964,  -964,  -964,  -964,
     -51,   713,  -964,   650,    59,  -964,  -964,  -964,   -10,   563,
       5,    -4,   260,   199,   261,    50,   566,   568,   569,   571,
    -964,   572,   208,   213,   268,   573,   575,   576,   578,   580,
     582,   585,   586,   587,  5614,   229,   278,   281,   282,   290,
     291,   239,   589,   590,  -964,  -964,   680,  -964,  -964,  -964,
     485,   485,   -63,   -63,   212,   -63,   -63,   380,   380,  5614,
    5614,  5614,  -964,   597,   378,  -964,  -964,  -964,  -964,   -51,
    -964,  -964,   -51,  -964,  -964,   -51,   249,   512,   602,   609,
    -964,  -964,   615,   662,  -964,  5614,   662,  -964,   -51,  5325,
    -964,  -964,  -964,  -964,   591,   592,  -964,  -964,  -964,  -964,
     593,  -964,  -964,  -964,  -964,  -964,   124,   683,   246,  5614,
    5614,  5614,  5614,  -964,  -964,  -964,  -964,  -964,  -964,  -964,
    -964,  5614,  -964,   594,    63,  -964,  -964,  3958,   -51,   -51,
    -964,   -51,  -964,   -51,   769,   770,   -51,  2956,  -964,  -964,
     -51,   -51,   -51,  -964,  -964,   738,   344,  -964,  -964,  -964,
    -964,  -964,   593,  -964,  -964,  5614,  -964,   600,  -964,  -964,
    -964,  -964,  5547,  5614,  5614,   727,  -964,  5614,  -964,  -964,
    -964,  -964,  5614,  5614,  5614,   -51,   316,  -964,   115,    38,
     747,  -964,   657,  -964,  -964,  5614,  5614,  -964,   538,   694,
     637,   -51,   -51,  -964,  -964,  -964,  5614,  5614,  -964,  -964,
    5614,  -964,   606,  -964,   639,  5614,  -964,  -964,  -964,  -964,
    -964,  5614,  -964,  5614,  -964,  -964,  -964,  -964,  -964,  -964,
    -964,  -964,  -964,  5614,   610,  5614,  -964,  -964,  -964,  -964,
    -964,  5614,  -964,  -964,  -964,  5614,    25,   407,   608,  -964,
    -964,  -964,    30,    35,  -964,  -964,  -964,  5614,  5614,   -51,
    -964,  -964,  -964,   709,  -964,  -964,  -964,  -964,  -964,   -51,
    -964,  -964,  5325,  -964,   611,  -964,  -964,   616,  -964,  -964,
    -964,  -964,  -964,  -964,  -964,    68,  5614,  5614,   614,  -964,
    -964,  -964,  -964,  -964,  -964,   384,  -964,   648,   413,  -964,
    -964,  -964,  -964,   662,   662,   662,   662,  4098,  5614,   -51,
    -964,  -964,   -51,   -51,  -964,  -964,    46,  -964,  -964,  -964,
    -964,  5614,  -964,   -51,   -51,  -964,   723,   550,  3258,  -964,
    -964,  -964,  -964,  -964,  5614,  -964,  5614,   -51,   651,  -964,
    -964,  -964,  -964,  -964,   359,  -964,  -964,  -964,  -964,  -964,
     739,  -964,  -964,  -964,  -964,   620,  4238,  -964,  4378,  -964,
    -964,   -51,   655,  -964,  -964,  -964,  -964,   302,   303,   304,
    -964,   622,   236,   327,   329,   432,  -964,   330,   356,   -63,
    -964,   -51,   658,  -964,   -51,   660,  -964,   662,   662,  -964,
    -964,  -964,  5614,  -964,  5614,  -964,  -964,    30,    35,  -964,
    5614,  -964,   560,  -964,   -51,   121,  -964,  -964,  -964,  -964,
    5614,  -964,   413,  -964,  -964,    71,   662,  -964,  -964,   182,
     567,  -964,  -964,  -964,  4518,  -964,  -964,  -964,  -964,  -964,
     564,  -964,  -964,  -964,  -964,   359,   768,  -964,  -964,  -964,
     768,  -964,  5614,  5614,     1,  -964,    71,    71,   540,   540,
    -964,  -964,  4658,   717,  -964,  -964,  -964,  -964,  -964,  5614,
    -964,  -964,  -964,  5614,  -964,  -964,  5614,  -964,  -964,   463,
    -964,  -964,  -964,   473,  -964,   772,   628,  -964,  5614,   628,
    -964,   662,   628,  -964,  -964,   662,    18,   109,  -964,  1772,
      56,   -51,   -51,   -51,  -964,  -964,  -964,   -51,   -51,   -51,
     631,  -964,   -51,   -51,  -964,  -964,  -964,  -964,  -964,  -964,
      59,  4798,   344,   632,  5614,   705,   705,  -964,  -964,  -964,
    -964,  -964,  -964,  -964,   378,   378,   789,  5614,   733,   357,
     358,  -964,  5614,   -51,   658,  5614,   -51,   660,  5614,  -964,
    -964,   662,   -51,  -964,  -964,  -964,  -964,   392,  -964,   -51,
    -964,  -964,   406,  -964,   -51,  -964,  5614,   -51,  -964,  -964,
    -964,  -964,   420,  -964,  -964,  -964,  -964,  -964,  -964,  -964,
    -964,  -964,  -964,  -964,   288,  -964,    83,  -964,  5614,  -964,
    5614,   741,  -964,  4938,   764,  -964,  -964,    83,  -964,  5614,
    -964,  -964,  -964,  -964,  -964,  -964,  -964,  -964,   662,  -964,
     679,  -964,   252,   252,   252,   397,  -964,  -964,   252,   -17,
    -964,  -964,   -51,  -964,   252,   252,   252,   422,  -964,  -964,
     -51,   -51,  -964,  -964,  -964,  -964,  5614,  -964,    71,  -964,
    -964,  -964,  -964,  -964,  -964,   712,  -964,  -964,  -964,  -964,
    -964,  -964,  -964,  -964,  -964,  -964,  -964,  -964,  -964,  -964,
     644,  -964,  -964,   730,  -964,   682,   757,  -964,   -51,     4,
    -964,  -964,  -964,  -964,   653,  5078,  -964,   759,  5614,  -964,
     661,  -964,  -964,  5218,   808,    72,   -51,   -51,  -964,  -964,
    -964,  -964
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       4,     0,     5,     1,     0,     0,     0,   541,   542,     0,
      89,   430,   432,     0,     0,     0,   434,     0,     0,     0,
       0,     0,   575,     0,     0,    94,   350,   260,     0,   395,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    87,
       0,     0,     0,   624,   437,   438,   439,     0,     0,     0,
       0,   609,   610,     0,   376,     0,     0,   526,     3,   230,
       6,     8,    12,     0,    78,    78,     0,     0,     7,   333,
       0,   293,     0,     0,   301,     0,   216,   216,     0,     0,
       0,     0,   436,     0,     0,     0,     0,     0,     0,     0,
       0,   308,   310,     0,   311,   309,     0,     9,   337,     0,
      34,   325,     0,    93,     0,    91,     0,     0,   371,     0,
     593,   391,     0,     0,     0,     0,     0,     0,     0,    94,
       0,     0,     0,     0,     0,     0,     0,     0,    94,   125,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   124,   121,   123,   122,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     179,   182,   186,   190,   193,   199,   202,   205,   208,   212,
       0,     0,     0,     0,   600,     0,     0,     0,   539,     0,
     540,     0,     0,   328,     0,     0,     0,     0,     0,   280,
     281,     0,   330,     0,   264,     0,   231,     0,     0,     0,
     282,   232,   290,    88,   429,   431,   433,     0,   574,    86,
       0,   435,     0,     0,   344,     0,   340,     0,     0,     0,
       0,   529,     0,     0,     0,   454,     0,     0,     0,   372,
       0,     0,   534,     0,   116,   114,   118,   113,    13,    79,
     216,   216,     0,    81,     0,    84,   368,   347,     0,   347,
       0,   347,     0,   384,   216,     0,   250,     0,     0,     0,
       0,     0,   240,     0,     0,     0,     0,     0,   405,     0,
     403,     0,     0,     0,   585,   233,     0,   548,   316,   530,
     314,   312,     0,     0,   547,     0,   318,     0,   214,   546,
       0,   543,     0,     0,     0,     0,     0,    36,    37,    10,
       0,    11,   254,   305,     0,   386,   298,     0,     0,   593,
     392,   620,   617,   615,   612,   658,     0,   633,     0,   629,
     632,   631,   419,   425,   423,   424,   418,   421,   422,   172,
       0,     0,     0,     0,     0,     0,     0,     0,   171,     0,
     185,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   167,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   183,   184,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   203,
     206,   209,     0,   420,   304,   303,   602,     0,     0,     0,
     323,   324,    95,   283,     0,     0,   261,   415,   414,   396,
     397,   273,   329,   268,   266,   286,     0,     0,     0,   274,
     284,     0,     0,     0,     0,   279,   342,     0,     0,   338,
       0,     0,   272,   270,   315,   528,   447,   387,   445,   377,
     313,   532,   336,     0,     0,     0,   174,   553,   556,   554,
     560,   561,   562,   557,   558,   555,   559,     0,   527,     0,
     120,     0,     0,     0,    77,     0,    76,    80,    96,    83,
      96,   364,   360,   358,   362,   369,   370,   334,   368,   356,
       0,   291,   393,   394,   294,   347,   295,   382,   598,   597,
     454,     0,   383,     0,     0,     0,   582,   249,   216,     0,
       0,     0,     0,     0,   217,   218,   410,     0,   244,   427,
     428,     0,    74,     0,   237,     0,   239,     0,   235,   407,
       0,   234,   588,   586,   587,   317,     0,   322,     0,     0,
     327,   215,   544,   326,   247,     0,   608,   604,     0,     0,
       0,    39,    38,    75,    92,     0,     0,   593,   594,   348,
     296,     0,     0,     0,   660,   664,   661,   663,   659,   662,
       0,     0,   646,     0,     0,   630,   169,   170,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     164,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   174,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   173,   180,     0,   187,   188,   189,
     192,   191,   196,   197,     0,   194,   195,   201,   200,     0,
       0,     0,   213,     0,     0,   621,    20,    16,   550,     0,
     551,   549,     0,   277,   278,     0,     0,     0,     0,     0,
     443,   441,     0,   345,   331,     0,   341,   332,     0,   450,
     534,   373,   375,   289,     0,   175,   176,   178,   263,   538,
     535,   536,   117,   115,   119,    90,     0,     0,   109,     0,
       0,     0,     0,   216,   355,   354,   353,   352,   357,   366,
     292,     0,   379,     0,     0,   584,   583,     0,     0,     0,
     223,     0,   220,     0,     0,     0,     0,     0,   413,   216,
       0,     0,     0,   589,   248,   426,     0,   236,   238,   406,
     408,   404,   531,   321,   320,     0,   246,     0,   259,   257,
     625,   256,     0,     0,     0,     0,    55,     0,    58,    59,
      49,    48,     0,     0,     0,     0,    40,    41,   593,     0,
     566,   216,     0,   216,   300,     0,     0,   628,   658,   650,
       0,     0,     0,   655,   627,   135,     0,     0,   150,   151,
       0,   154,     0,   147,     0,     0,   139,   166,   165,   144,
     128,     0,   130,     0,   134,   163,   162,   161,   160,   159,
     157,   156,   158,     0,     0,     0,   131,   132,   133,   136,
     137,     0,   145,   146,   181,     0,   204,   207,     0,   623,
     601,   622,     0,     0,   552,   267,   276,     0,     0,     0,
     512,   510,   508,   505,   514,   502,   503,   501,   507,     0,
      18,    14,   450,   343,     0,   339,   271,     0,   446,   449,
     456,   448,   454,   595,   533,     0,     0,     0,   104,   102,
     103,   106,   108,   107,    97,     0,    99,     0,     0,   111,
     112,   110,    85,   365,   361,   359,   363,     0,     0,   469,
     456,   385,     0,     0,   576,   302,     0,   226,   225,   216,
     222,     0,   219,     0,     0,   227,     0,     0,     0,   592,
     590,   591,   242,   241,     0,   545,     0,     0,     0,    46,
      43,    44,    59,    53,    56,    52,    50,    45,    35,    42,
       0,   573,   572,   568,   563,     0,     0,   299,     0,   618,
     613,     0,     0,   216,   634,   657,   656,     0,     0,     0,
     149,     0,     0,     0,     0,     0,   168,     0,     0,   198,
     210,     0,     0,    21,     0,     0,    17,   522,   521,   275,
     518,   518,     0,   504,     0,   518,   285,     0,     0,   442,
       0,   596,     0,   452,     0,     0,   398,   288,   177,   537,
       0,    98,     0,   101,    82,     0,   367,   470,   599,   388,
       0,   578,   577,   251,     0,   216,   228,   229,   417,   416,
       0,   409,   605,   258,    47,    57,    63,    62,    61,    60,
      63,   306,     0,     0,     0,   569,     0,     0,     0,     0,
     649,   651,     0,   644,   155,   126,   152,   148,   142,     0,
     127,   129,   140,     0,   153,   138,     0,    29,    32,     0,
      30,    23,    26,     0,    24,   524,   513,   516,     0,   511,
     509,   506,   515,    19,    15,   346,     0,     0,   451,     0,
       0,   469,   469,   469,   457,   456,   402,     0,     0,     0,
       0,   100,     0,     0,   579,   335,   389,   390,   380,   455,
       0,     0,     0,     0,     0,    65,    65,   216,   564,   571,
     567,   570,   253,   349,     0,     0,     0,     0,     0,     0,
       0,   211,     0,     0,     0,     0,     0,     0,     0,   523,
     518,   519,     0,   495,   489,   491,   493,   469,   487,     0,
     477,   475,   469,   473,     0,   472,     0,     0,   486,   480,
     482,   484,   469,   478,   464,   465,   466,   453,   401,   399,
     400,   105,   581,   580,   391,   224,     0,   243,     0,    64,
       0,    67,    51,     0,     0,   619,   614,     0,   645,     0,
     143,   141,    33,    28,    31,    27,    22,    25,   525,   517,
       0,   459,     0,     0,     0,     0,   458,   463,     0,     0,
     462,   468,   469,   461,     0,     0,     0,     0,   460,   381,
       0,     0,   652,   221,   606,    66,     0,    54,     0,   565,
     648,   635,   520,   498,   497,   499,   490,   496,   492,   494,
     488,   476,   474,   467,   481,   483,   485,   479,   654,   653,
       0,    68,   307,     0,   500,     0,    70,   636,     0,     0,
      69,   216,   607,    71,     0,     0,    72,     0,   174,   638,
       0,   216,    73,     0,     0,     0,     0,     0,   641,   640,
     643,   642
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -964,  -964,    -5,  -964,  -964,  -964,  -964,  -964,  -964,  -964,
    -964,  -109,  -964,  -247,  -964,  -106,  -964,  -242,  -964,  -964,
    -964,  -964,  -964,  -964,   108,  -964,  -964,   -46,  -964,  -143,
    -217,  -964,  -964,  -964,  -964,  -314,  -285,  -964,   775,  -964,
    -964,  -964,  -964,  -964,  -964,   601,  -964,   541,   -23,   385,
    -964,  -103,     8,  -964,  -964,  -964,  -964,  -964,  -964,  -964,
    -580,  -964,    27,  -964,   297,  -114,  -334,   293,   241,   245,
    -964,  -964,  -964,  -381,  -964,  -964,   151,   659,   -70,  -964,
    -964,  -964,   852,  -964,  -964,  -964,  -964,  -964,  -964,  -964,
    -964,  -964,  -964,  -964,  -964,  -964,  -964,  -964,  -964,  -964,
    -964,  -964,  -964,  -964,  -964,  -964,  -964,  -964,  -964,  -964,
    -964,  -964,  -964,  -964,  -964,  -203,  -523,  -964,  -964,  -964,
    -964,  -964,   389,  -964,  -964,  -964,  -964,  -964,  -964,   847,
    -964,  -964,   848,  -964,   753,  -964,  -964,  -964,  -964,  -964,
    -964,  -964,  -964,  -251,   793,  -964,  -964,  -256,   355,  -964,
    -964,  -964,  -964,  -964,  -964,  -964,  -964,   697,  -964,  -964,
     -68,  -964,  -964,  -964,  -964,   -36,  -964,  -964,  -964,  -964,
    -964,    57,  -964,  -964,  -964,  -964,  -464,  -169,    55,  -964,
    -716,  -964,  -964,  -279,  -964,  -964,  -286,  -964,  -964,  -964,
    -964,  -269,  -964,  -964,  -964,  -558,  -964,  -964,  -964,  -964,
    -964,  -964,  -964,  -592,  -202,  -964,  -964,  -964,  -964,  -964,
    -964,  -964,  -964,  -964,  -964,  -964,  -964,   240,  -964,   363,
      58,  -964,  -964,   341,  -964,   176,  -270,   581,   435,  -964,
     374,  -964,  -964,  -964,  -964,  -964,  -964,  -100,  -964,  -964,
    -964,  -963,    31,  -964,  -964,  -295,  -964,   633,  -964,  -964,
    -964,  -964,  -964,  -964,  -964,  -964,  -964,  -964,  -964,  -964,
    -964,  -964,  -964,  -964,  -964,  -520,  -605,  -964,    11,  -964,
    -964,  -964,   584,  -964,  -964,  -964,  -964,  -964,  -964,  -964,
    -964,  -964,  -964,  -964,  -964,  -964,  -964,  -238,  -160,   153
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    59,     2,     4,    60,    61,   938,   793,   937,
     792,   926,  1013,  1014,  1075,   923,  1009,  1010,  1072,    62,
     298,   531,   725,   726,   727,   980,   976,   884,   979,  1055,
    1121,  1167,  1196,  1200,  1208,   501,   817,    63,   240,    64,
     458,    65,   460,    66,    67,   454,   104,   105,   182,   657,
     835,   836,   837,   842,   238,   452,   451,   453,   160,   584,
     644,   645,   646,   161,   162,   163,   164,   165,   166,   167,
     609,   168,   610,   169,   611,  1006,   288,   533,   455,   494,
     861,   859,   495,   503,   970,   293,   488,   304,   530,   877,
     184,   231,   195,   622,   218,   638,   626,   627,   436,   249,
     109,   537,   254,   535,  1057,   285,   246,   663,   216,   635,
     421,   214,   632,   418,   814,   471,   540,   733,    69,   467,
     667,   468,   469,   661,   660,   662,   659,   848,   470,    70,
     433,   434,    71,   225,    72,   253,   850,  1114,   480,   481,
      73,   223,  1048,   309,   310,    74,   947,   269,   270,   509,
     699,   874,    75,   688,   496,    76,   689,   327,    77,   328,
     262,    78,    79,    80,    81,    82,    83,   414,   812,   224,
     639,   818,   819,   820,   821,  1035,   429,   959,   960,  1034,
     958,  1096,  1092,  1093,  1148,  1102,  1103,  1154,  1155,  1156,
    1087,  1088,  1142,  1143,  1144,  1176,  1177,   809,   934,   932,
     931,   930,   935,  1016,  1017,  1018,  1140,   799,  1015,  1079,
      84,   232,    85,    86,   516,    87,   640,   448,   449,   650,
     651,    88,    89,   290,   705,   291,   286,   278,   396,   621,
     446,   447,   731,   982,  1124,   895,   984,   985,   893,    90,
     855,  1045,   487,   275,   694,   308,   822,   823,   671,    91,
     387,    92,   295,   707,  1053,  1190,    93,    94,   115,   543,
     989,    95,   113,   542,   988,   614,   615,    96,   711,    97,
     117,   318,   319,   320,   553,   993,  1193,  1201,  1207,  1211,
    1214,  1219,  1068,   321,   739,  1066,   903,  1163,   744,   550
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      98,   612,   552,   101,   774,   211,   257,   258,   505,   791,
     507,   264,   266,   532,   541,   728,   672,   340,   734,  1082,
     523,   568,   183,  1062,  1063,   690,   189,   190,   192,   194,
     196,   921,   200,   201,   259,   202,   924,   525,   602,   603,
     604,   605,   606,   363,   364,   528,   474,   484,   476,   233,
      99,   752,   219,   102,  1060,   228,   382,  1097,   237,   554,
     741,   691,   382,   234,   852,   247,   116,   251,   260,   944,
     271,   382,  1042,  1216,   316,   276,   222,   692,   274,   277,
     619,   277,   277,   284,  1160,   197,   191,   377,   678,  1203,
     198,   891,   380,   742,   297,   263,   329,   299,   322,   301,
    -626,   302,   370,   371,   680,   338,  -262,   311,    58,   313,
    1089,   382,  1090,   485,  -262,  -262,  -252,   220,  1161,   326,
     265,    58,  1037,   791,  1043,  -262,  1091,   684,   171,   260,
     685,   181,   173,  -262,  -262,   177,     3,   853,   229,   179,
     226,   103,   828,   829,   235,   242,  1204,  1083,   229,  -386,
     244,   267,   945,   292,   260,   830,   413,   679,   575,  1084,
     577,  1085,   569,   316,   745,   831,   384,   385,   386,   170,
     748,  1038,   390,   681,   391,  -426,   983,   393,   307,   186,
     747,   188,   686,   401,   483,  1098,   402,   378,   403,   317,
     236,   100,   405,   221,   570,  1086,    58,  1099,   272,  1100,
    -262,  -262,  -262,   922,   381,  1192,   261,   415,   925,   897,
      58,   273,   422,   199,   424,  -626,  -255,  -444,    58,   529,
      58,   430,  1217,   432,   753,   754,  -371,   230,   450,   832,
     788,    58,   106,  1101,   579,    58,  -426,   457,  1090,   459,
      58,    58,   732,    58,    58,   475,    58,   696,   703,   704,
     486,    58,  1091,   833,   498,    58,   600,   601,   504,  1173,
     506,  -426,   508,  1039,   511,   382,   512,   513,   514,   172,
     107,   515,   670,   174,   382,   785,   178,   517,   317,   382,
     180,   227,   520,   580,   581,   284,   243,   524,  1174,   526,
     613,   245,   268,   382,  -245,   382,   797,  -440,   834,   576,
     399,   578,   382,   255,   187,   382,  -351,   664,   472,  -351,
     682,  1046,  -351,  -351,  -351,  1104,  1105,  1106,   595,   712,
     713,   714,   596,   499,  1047,    -2,   382,   382,   665,   461,
    -351,  -351,   204,   205,   382,   462,   463,   464,   798,  1019,
     839,   840,   212,  1022,   382,   206,   213,   382,   382,   478,
     239,   715,   256,   465,   466,   208,   382,   382,   943,   215,
    -297,    54,   716,   717,   718,   719,   720,   721,   382,   382,
     382,  1146,   248,   108,   750,   582,  1150,   370,   371,   683,
     279,   203,   760,   761,   204,   205,  1158,   762,   763,   618,
     620,   305,   400,   382,  1175,   382,   382,   206,   841,    58,
     473,   623,   624,   883,   775,   722,   207,   208,   885,   886,
     998,   999,   502,   634,   781,   500,   637,   303,   677,    44,
      45,    46,   382,   382,   382,   307,    58,   879,   880,   881,
     643,   828,   829,   890,   749,   751,  1183,   315,   479,   887,
     372,   373,   764,   210,   830,   374,   652,   653,   654,   723,
     724,   919,   776,   330,   831,   777,   778,   211,   538,   791,
     791,   366,   209,   666,   779,   780,   437,   502,  1064,  1065,
     379,    44,    45,    46,   438,   439,   994,   995,   996,   675,
     676,   977,   388,   558,   978,   560,   561,   562,   563,   389,
     564,   175,   693,    58,   176,   210,   300,   572,   573,   574,
     697,  1000,   698,  1001,  1004,   585,   586,   587,   588,   589,
     590,   591,   411,   284,   284,   412,    58,   392,   832,   510,
     706,    58,   397,   708,   522,   710,  1083,   437,   800,   801,
    1005,  1130,  1131,   802,   803,   438,   439,   382,  1084,   398,
    1085,   331,   833,   375,   376,   737,   440,   965,   332,   743,
      58,  1098,   333,   613,   441,   442,   804,   406,   951,   952,
     443,   444,   445,  1099,    58,  1100,   334,  1145,   633,   407,
     410,   636,   544,   545,  1086,   546,  1026,  1027,    58,   416,
    1028,  1149,  1029,  1026,  1027,  1178,  1179,  1049,   335,  1029,
    1181,   547,    58,   847,   336,  1157,  1184,  1185,  1186,  1101,
     408,   805,   806,   807,  1030,   548,  1002,  1003,   409,   790,
     337,  1030,   549,   339,   794,   808,   382,   795,   969,   868,
     796,   443,   444,   445,   518,  1071,   519,   872,  1210,   341,
     322,   342,  1031,   816,   461,   343,  1040,  1073,  1074,  1031,
     462,   463,   464,   344,   323,   324,   325,  1076,  1077,  1032,
    1033,   326,   367,   368,   369,   345,  1032,  1033,   465,   466,
     346,   896,   347,   898,   597,   598,   599,   280,   281,   854,
     607,   608,   348,   857,   858,   349,   860,   350,   862,   351,
     352,   865,   353,   354,   355,   869,   870,   871,   356,   357,
     358,   873,   359,   360,   361,   362,   425,   426,   417,   419,
     420,   427,   431,   428,  -374,   477,   268,   103,   536,   556,
     539,   557,   616,   594,  1052,   613,   617,   628,   629,   630,
     888,   631,   641,   669,   892,   642,   656,   687,   382,   695,
     709,   735,   736,   738,   740,   784,   905,   906,   746,   789,
    1119,   755,   756,   757,   810,   758,   759,   765,   289,   766,
     767,   811,   768,  1128,   769,   296,   770,   813,  1132,   771,
     772,  1135,   773,   782,   783,   825,   851,   826,   827,   838,
     863,   864,   312,   260,   314,   876,   882,   894,   902,   904,
     910,   911,  1152,   933,   916,   920,   940,   950,   941,   964,
     953,   968,   981,   974,   929,   983,   997,   991,  1054,  1067,
    1008,  1012,  1078,  1080,   936,  1111,  1165,  1118,  1120,  1127,
     843,   844,   845,   846,  1129,  1171,  1166,  1169,   365,  1195,
     946,  1172,  1194,  1197,  1198,  1199,  1206,  1209,  1215,  1024,
    1137,  1023,  1134,   992,   889,  1212,   975,  1056,   867,  1122,
     241,   534,   456,   395,   957,   658,   954,   961,   962,  1041,
     786,   486,  1191,   948,   404,   787,    68,   668,   966,   967,
     110,   111,   306,  1159,   250,   701,  1107,   383,   502,   939,
    1182,  1187,   710,   502,   502,   942,  1180,   423,  1139,   702,
     824,   875,   648,   700,  1061,   949,   482,   963,   973,  1170,
    1115,   901,     0,     0,     0,  1051,   990,   907,   908,     0,
       0,   909,   555,     0,     0,     0,   912,     0,     0,     0,
       0,     0,   913,     0,   914,     0,  1007,     0,     0,  1011,
       0,     0,     0,     0,     0,     0,   917,     0,     0,     0,
       0,     0,   918,     0,     0,     0,     0,     0,     0,  1036,
       0,     0,   289,     0,   289,     0,     0,   521,   927,   928,
    1044,     0,     0,     0,   527,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1044,  1044,     0,     0,     0,     0,  1123,     0,     0,
       0,     0,   559,     0,     0,     0,     0,     0,     0,   956,
     565,   566,   567,     0,   571,     0,     0,     0,     0,     0,
       0,   583,   502,     0,     0,     0,     0,     0,     0,     0,
     592,   593,     0,     0,     0,     0,   957,   957,   957,     0,
       0,     0,  1108,  1109,  1110,     0,     0,  1112,  1113,     0,
       0,     0,     0,     0,     0,   743,     0,  1117,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1125,
    1126,     0,     0,     0,     0,     0,     0,   625,  1133,     0,
       0,  1136,     0,     0,     0,     0,     0,  1141,     0,     0,
       0,     0,   957,     0,  1147,  1021,     0,   957,     0,  1151,
       0,  1025,  1153,     0,     0,   647,     0,   957,     0,     0,
       0,   502,     0,     0,     0,     0,   395,     0,   649,     0,
       0,  1162,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1162,     0,     0,     0,     0,     0,     0,     0,
       0,  1205,     0,     0,     0,     0,     0,     0,     0,     0,
     673,  1213,     0,     0,     0,     0,     0,   957,     0,     0,
    1069,     0,     0,     0,  1070,  1188,  1189,     0,     0,     0,
       0,     0,     0,  1044,     0,     0,     0,     0,     0,  1081,
       0,     0,     0,     0,     0,   649,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1202,     0,   730,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   502,     0,     0,     0,   282,
    1218,  1220,  1221,     0,     0,  -319,  -319,     0,   502,     0,
       0,     0,  -319,   502,     0,     0,   502,     0,     0,  1138,
       0,     0,  -319,  -319,     0,     0,  -319,  -319,     0,     0,
    -319,  -319,     0,   647,  -319,     0,     0,   502,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -319,  -319,     0,     0,  -319,     0,     0,
       0,   502,     0,     0,     0,     0,     0,     0,     0,     0,
     502,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   815,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -319,     0,     0,     0,     0,   502,     0,     0,
       0,  -319,     0,  -319,  -319,  -319,  -319,  -319,  -319,  -319,
     849,     0,  -319,     0,     0,     0,  -319,     0,     0,     0,
    -319,     0,     0,     0,     0,     0,     0,     0,     0,  -319,
    -319,  -319,  -319,     0,     0,     0,     0,     0,     0,  -319,
       0,  -319,  -319,  -319,   289,  -319,  -319,  -319,  -319,  -319,
       0,     0,     0,  -319,     0,     0,     0,     0,  -319,     0,
      58,  -319,     0,   283,   435,     0,     0,     0,     0,     0,
    -287,  -287,     0,     0,   899,   900,     0,  -287,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -287,  -287,     0,
       0,  -287,  -287,     0,     0,  -287,  -287,     0,     0,  -287,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   915,     0,     0,     0,     0,     0,  -287,  -287,
       0,     0,  -287,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   647,   649,  -287,     0,     0,
       0,     0,     0,     0,     0,     0,  -287,     0,  -287,  -287,
    -287,  -287,  -287,  -287,  -287,     0,     0,  -287,     0,     0,
       0,  -287,     0,     0,     0,  -287,     0,     0,     0,     0,
       0,     0,     0,     0,  -287,  -287,  -287,  -287,     0,     0,
       0,     0,     0,   971,  -287,   972,  -287,  -287,  -287,     0,
    -287,  -287,  -287,  -287,  -287,   252,     0,     0,  -287,     0,
       0,  -378,  -378,  -287,     0,     0,  -287,  -287,  -378,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -378,  -378,
       0,     0,  -378,  -378,     0,     0,  -378,  -378,     0,     0,
    -378,     0,     0,     0,     0,  -378,     0,     0,     0,     0,
       0,  1020,     0,     0,     0,     0,     0,     0,     0,  -378,
    -378,     0,     0,  -378,     0,     0,     0,     0,     0,     0,
       0,     0,   193,     0,     0,     0,     0,     0,  -265,  -265,
       0,     0,     0,     0,     0,  -265,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -265,  -265,     0,     0,  -265,
    -265,  1058,  1059,  -265,  -265,     0,     0,  -265,  -378,     0,
       0,     0,     0,     0,     0,     0,     0,  -378,     0,  -378,
    -378,  -378,  -378,  -378,  -378,  -378,  -265,  -265,  -378,     0,
    -265,     0,  -378,     0,  -378,     0,  -378,     0,     0,     0,
       0,     0,     0,     0,     0,  -378,  -378,  -378,  -378,     0,
       0,     0,     0,     0,     0,  -378,     0,  -378,  -378,  -378,
       0,  -378,  -378,  -378,  -378,  -378,     0,     0,     0,  -378,
       0,     0,     0,     0,  -378,  -265,     0,  -378,     0,     0,
       0,     0,     0,     0,  -265,     0,  -265,  -265,  -265,  -265,
    -265,  -265,  -265,     0,     0,  -265,     0,     0,     0,  -265,
       0,     0,     0,  -265,     0,     0,     0,     0,     0,     0,
       0,     0,  -265,  -265,  -265,  -265,     0,     0,     0,     0,
       0,     0,  -265,     0,  -265,  -265,  -265,     0,  -265,  -265,
    -265,  -265,  -265,  1094,     0,     0,  -265,  1164,     0,  -471,
    -471,  -265,     0,    58,  -265,     0,  -471,     0,     0,  1095,
       0,     0,     0,     0,     0,     0,  -471,  -471,     0,     0,
    -471,  -471,     0,     0,  -471,  -471,     0,     0,  -471,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -471,  -471,     0,
       0,  -471,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   112,     0,     0,
       0,     0,     0,  -616,  -616,     0,     0,     0,     0,     0,
    -616,     0,     0,     0,     0,     0,     0,   647,     0,     0,
    -616,  -616,     0,     0,  -616,  -616,  -471,     0,  -616,  -616,
       0,     0,  -616,     0,     0,  -471,     0,  -471,  -471,  -471,
    -471,  -471,  -471,  -471,     0,     0,  -471,     0,     0,     0,
    -471,  -616,  -616,     0,  -471,  -616,     0,     0,     0,     0,
       0,     0,     0,  -471,  -471,  -471,  -471,     0,     0,     0,
       0,     0,     0,  -471,     0,  -471,  -471,  -471,     0,  -471,
    -471,  -471,  -471,  -471,     0,     0,     0,  -471,     0,     0,
       0,     0,  -471,     0,     0,  -471,     0,     0,     0,     0,
    -616,     0,     0,     0,     0,     0,     0,     0,     0,  -616,
       0,  -616,  -616,  -616,  -616,  -616,  -616,  -616,     0,     0,
    -616,     0,     0,     0,  -616,     0,     0,     0,  -616,     0,
       0,     0,     0,     0,     0,     0,     0,  -616,  -616,  -616,
    -616,     0,     0,     0,     0,     0,     0,  -616,     0,  -616,
    -616,  -616,   114,  -616,  -616,  -616,  -616,  -616,  -611,  -611,
       0,  -616,     0,     0,     0,  -611,  -616,     0,     0,  -616,
       0,     0,     0,     0,     0,  -611,  -611,     0,     0,  -611,
    -611,     0,     0,  -611,  -611,     0,     0,  -611,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -611,  -611,     0,     0,
    -611,     0,     0,     0,     0,     0,     0,     0,     0,   118,
       0,     0,     0,     0,     0,   119,   120,     0,     0,     0,
       0,     0,   121,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   122,   123,     0,     0,   124,   125,     0,     0,
     126,   127,     0,     0,   128,  -611,     0,     0,     0,     0,
       0,     0,     0,     0,  -611,     0,  -611,  -611,  -611,  -611,
    -611,  -611,  -611,   129,   130,  -611,     0,   131,     0,  -611,
       0,     0,     0,  -611,     0,     0,     0,     0,     0,     0,
       0,     0,  -611,  -611,  -611,  -611,     0,     0,     0,     0,
       0,     0,  -611,     0,  -611,  -611,  -611,     0,  -611,  -611,
    -611,  -611,  -611,     0,     0,     0,  -611,     0,     0,     0,
       0,  -611,   132,     0,  -611,     0,     0,     0,     0,     0,
       0,   133,     0,   134,   135,   136,   137,   138,   139,   140,
       0,     0,   141,     0,     0,     0,   142,     0,     0,     0,
     143,     0,     0,     0,     0,     0,     0,     0,     0,   144,
     145,   146,   147,     0,     0,     0,     0,     0,     0,   148,
       0,   149,   150,   151,   185,   152,   153,   154,   155,   156,
     119,   120,     0,   157,     0,     0,     0,   121,   158,     0,
       0,   159,     0,     0,     0,     0,     0,   122,   123,     0,
       0,   124,   125,     0,     0,   126,   127,     0,     0,   128,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   129,   130,
       0,     0,   131,     0,     0,     0,     0,     0,     0,     0,
       0,   217,     0,     0,     0,     0,     0,  -269,  -269,     0,
       0,     0,     0,     0,  -269,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -269,  -269,     0,     0,  -269,  -269,
       0,     0,  -269,  -269,     0,     0,  -269,   132,     0,     0,
       0,     0,     0,     0,     0,     0,   133,     0,   134,   135,
     136,   137,   138,   139,   140,  -269,  -269,   141,     0,  -269,
       0,   142,     0,     0,     0,   143,     0,     0,     0,     0,
       0,     0,     0,     0,   144,   145,   146,   147,     0,     0,
       0,     0,     0,     0,   148,     0,   149,   150,   151,     0,
     152,   153,   154,   155,   156,     0,     0,     0,   157,     0,
       0,     0,     0,   158,  -269,     0,   159,     0,     0,     0,
       0,     0,     0,  -269,     0,  -269,  -269,  -269,  -269,  -269,
    -269,  -269,     0,     0,  -269,     0,     0,     0,  -269,     0,
       0,     0,  -269,     0,     0,     0,     0,     0,     0,     0,
       0,  -269,  -269,  -269,  -269,     0,     0,     0,     0,     0,
       0,  -269,     0,  -269,  -269,  -269,   287,  -269,  -269,  -269,
    -269,  -269,   119,   120,     0,  -269,     0,     0,     0,   121,
    -269,     0,     0,  -269,     0,     0,     0,     0,     0,   122,
     123,     0,     0,   124,   125,     0,     0,   126,   127,     0,
       0,   128,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     129,   130,     0,     0,   131,     0,     0,     0,     0,     0,
       0,     0,     0,   294,     0,     0,     0,     0,     0,  -603,
    -603,     0,     0,     0,     0,     0,  -603,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -603,  -603,     0,     0,
    -603,  -603,     0,     0,  -603,  -603,     0,     0,  -603,   132,
       0,     0,     0,     0,     0,     0,     0,     0,   133,     0,
     134,   135,   136,   137,   138,   139,   140,  -603,  -603,   141,
       0,  -603,     0,   142,     0,     0,     0,   143,     0,     0,
       0,     0,     0,     0,     0,     0,   144,   145,   146,   147,
       0,     0,     0,     0,     0,     0,   148,     0,   149,   150,
     151,     0,   152,   153,   154,   155,   156,     0,     0,     0,
     157,     0,     0,     0,     0,   158,  -603,     0,   159,     0,
       0,     0,     0,     0,     0,  -603,     0,  -603,  -603,  -603,
    -603,  -603,  -603,  -603,     0,     0,  -603,     0,     0,     0,
    -603,     0,     0,     0,  -603,     0,     0,     0,     0,     0,
       0,     0,     0,  -603,  -603,  -603,  -603,     0,     0,     0,
       0,     0,     0,  -603,     0,  -603,  -603,  -603,   394,  -603,
    -603,  -603,  -603,  -603,   119,   120,     0,  -603,     0,     0,
       0,   121,  -603,     0,     0,  -603,     0,     0,     0,     0,
       0,   122,   123,     0,     0,   124,   125,     0,     0,   126,
     127,     0,     0,   128,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   129,   130,     0,     0,   131,     0,     0,     0,
       0,     0,     0,     0,     0,   551,     0,     0,     0,     0,
       0,   119,   120,     0,     0,     0,     0,     0,   121,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   122,   123,
       0,     0,   124,   125,     0,     0,   126,   127,     0,     0,
     128,   132,     0,     0,     0,     0,     0,     0,     0,     0,
     133,     0,   134,   135,   136,   137,   138,   139,   140,   129,
     130,   141,     0,   131,     0,   142,     0,     0,     0,   143,
       0,     0,     0,     0,     0,     0,     0,     0,   144,   145,
     146,   147,     0,     0,     0,     0,     0,     0,   148,     0,
     149,   150,   151,     0,   152,   153,   154,   155,   156,     0,
       0,     0,   157,     0,     0,     0,     0,   158,   132,     0,
     159,     0,     0,     0,     0,     0,     0,   133,     0,   134,
     135,   136,   137,   138,   139,   140,     0,     0,   141,     0,
       0,     0,   142,     0,     0,     0,   143,     0,     0,     0,
       0,     0,     0,     0,     0,   144,   145,   146,   147,     0,
       0,     0,     0,     0,     0,   148,     0,   149,   150,   151,
     729,   152,   153,   154,   155,   156,   119,   120,     0,   157,
       0,     0,     0,   121,   158,     0,     0,   159,     0,     0,
       0,     0,     0,   122,   123,     0,     0,   124,   125,     0,
       0,   126,   127,     0,     0,   128,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   129,   130,     0,     0,   131,     0,
       0,     0,     0,     0,     0,     0,     0,   866,     0,     0,
       0,     0,     0,   119,   120,     0,     0,     0,     0,     0,
     121,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     122,   123,     0,     0,   124,   125,     0,     0,   126,   127,
       0,     0,   128,   132,     0,     0,     0,     0,     0,     0,
       0,     0,   133,     0,   134,   135,   136,   137,   138,   139,
     140,   129,   130,   141,     0,   131,     0,   142,     0,     0,
       0,   143,     0,     0,     0,     0,     0,     0,     0,     0,
     144,   145,   146,   147,     0,     0,     0,     0,     0,     0,
     148,     0,   149,   150,   151,     0,   152,   153,   154,   155,
     156,     0,     0,     0,   157,     0,     0,     0,     0,   158,
     132,     0,   159,     0,     0,     0,     0,     0,     0,   133,
       0,   134,   135,   136,   137,   138,   139,   140,     0,     0,
     141,     0,     0,     0,   142,     0,     0,     0,   143,     0,
       0,     0,     0,     0,     0,     0,     0,   144,   145,   146,
     147,     0,     0,     0,     0,     0,     0,   148,     0,   149,
     150,   151,     0,   152,   153,   154,   155,   156,     0,     5,
       0,   157,     0,     0,   489,     0,   158,     7,     8,   159,
       0,     0,     0,     0,     0,     0,    11,    12,  -412,    13,
       0,     0,     0,     0,    14,    15,     0,     0,     0,    16,
       0,     0,   490,   491,     0,    18,    19,    20,   492,    22,
      23,    24,     0,    25,     0,     0,     0,     0,     0,     0,
       0,    26,     0,    27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,  -412,     0,     0,
       0,  -412,    29,    30,    31,    32,     0,     0,     0,     0,
       0,     0,     0,    33,    34,    35,    36,     0,     0,     0,
      37,     0,     0,    38,     0,     0,    40,     0,     0,   493,
       0,    42,    43,    44,    45,    46,    47,    48,     0,    49,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,     0,     0,    51,    52,     0,    53,    54,     0,
       0,     0,     0,     0,     0,     0,    55,     0,     0,     5,
      56,     0,     0,    57,   489,     0,     0,     7,     8,     0,
       0,     0,     0,     0,     0,     0,    11,    12,  -411,    13,
       0,     0,     0,     0,    14,    15,     0,     0,     0,    16,
      58,     0,   490,   491,     0,    18,    19,    20,   492,    22,
      23,    24,     0,    25,     0,     0,     0,     0,     0,     0,
       0,    26,     0,    27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,  -411,     0,     0,
       0,  -411,    29,    30,    31,    32,     0,     0,     0,     0,
       0,     0,     0,    33,    34,    35,    36,     0,     0,     0,
      37,     0,     0,    38,     0,     0,    40,     0,     0,   493,
       0,    42,    43,    44,    45,    46,    47,    48,     0,    49,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,     0,     0,    51,    52,     0,    53,    54,     0,
       0,     0,     0,     0,     0,     0,    55,     0,     0,     5,
      56,     0,     0,    57,     6,     0,     0,     7,     8,     9,
       0,     0,     0,    10,     0,     0,    11,    12,     0,    13,
       0,     0,     0,     0,    14,    15,     0,     0,     0,    16,
      58,     0,    17,     0,     0,    18,    19,    20,    21,    22,
      23,    24,     0,    25,     0,     0,     0,     0,     0,     0,
       0,    26,     0,    27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,     0,     0,     0,
       0,     0,    29,    30,    31,    32,     0,     0,     0,     0,
       0,     0,     0,    33,    34,    35,    36,     0,     0,     0,
      37,     0,     0,    38,    39,     0,    40,     0,     0,    41,
       0,    42,    43,    44,    45,    46,    47,    48,     0,    49,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,     0,     0,    51,    52,     0,    53,    54,     0,
       0,     0,     0,     0,     0,     0,    55,     0,     0,     5,
      56,     0,     0,    57,   489,     0,     0,     7,     8,     0,
       0,     0,     0,     0,     0,     0,    11,    12,   497,    13,
       0,     0,     0,     0,    14,    15,     0,     0,     0,    16,
      58,     0,   490,   491,     0,    18,    19,    20,   492,    22,
      23,    24,     0,    25,     0,     0,     0,     0,     0,     0,
       0,    26,     0,    27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,     0,     0,     0,
       0,     0,    29,    30,    31,    32,     0,     0,     0,     0,
       0,     0,     0,    33,    34,    35,    36,     0,     0,     0,
      37,     0,     0,    38,     0,     0,    40,     0,     0,   493,
       0,    42,    43,    44,    45,    46,    47,    48,     0,    49,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,     0,     0,    51,    52,     0,    53,    54,     0,
       0,     0,     0,     0,     0,     0,    55,     0,     0,     5,
      56,     0,     0,    57,   489,     0,     0,     7,     8,     0,
       0,     0,     0,     0,     0,     0,    11,    12,   655,    13,
       0,     0,     0,     0,    14,    15,     0,     0,     0,    16,
      58,     0,   490,   491,     0,    18,    19,    20,   492,    22,
      23,    24,     0,    25,     0,     0,     0,     0,     0,     0,
       0,    26,     0,    27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,     0,     0,     0,
       0,     0,    29,    30,    31,    32,     0,     0,     0,     0,
       0,     0,     0,    33,    34,    35,    36,     0,     0,     0,
      37,     0,     0,    38,     0,     0,    40,     0,     0,   493,
       0,    42,    43,    44,    45,    46,    47,    48,     0,    49,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,     0,     0,    51,    52,     0,    53,    54,     0,
       0,     0,     0,     0,     0,     0,    55,     0,     0,     5,
      56,     0,     0,    57,   489,     0,     0,     7,     8,     0,
       0,     0,     0,     0,     0,     0,    11,    12,   674,    13,
       0,     0,     0,     0,    14,    15,     0,     0,     0,    16,
      58,     0,   490,   491,     0,    18,    19,    20,   492,    22,
      23,    24,     0,    25,     0,     0,     0,     0,     0,     0,
       0,    26,     0,    27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,     0,     0,     0,
       0,     0,    29,    30,    31,    32,     0,     0,     0,     0,
       0,     0,     0,    33,    34,    35,    36,     0,     0,     0,
      37,     0,     0,    38,     0,     0,    40,     0,     0,   493,
       0,    42,    43,    44,    45,    46,    47,    48,     0,    49,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,     0,     0,    51,    52,     0,    53,    54,     0,
       0,     0,     0,     0,     0,     0,    55,     0,     0,     5,
      56,     0,     0,    57,   489,     0,     0,     7,     8,     0,
       0,     0,     0,     0,     0,     0,    11,    12,   856,    13,
       0,     0,     0,     0,    14,    15,     0,     0,     0,    16,
      58,     0,   490,   491,     0,    18,    19,    20,   492,    22,
      23,    24,     0,    25,     0,     0,     0,     0,     0,     0,
       0,    26,     0,    27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,     0,     0,     0,
       0,     0,    29,    30,    31,    32,     0,     0,     0,     0,
       0,     0,     0,    33,    34,    35,    36,     0,     0,     0,
      37,     0,     0,    38,     0,     0,    40,     0,     0,   493,
       0,    42,    43,    44,    45,    46,    47,    48,     0,    49,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,     0,     0,    51,    52,     0,    53,    54,     0,
       0,     0,     0,     0,     0,     0,    55,     0,     0,     5,
      56,     0,     0,    57,   489,     0,     0,     7,     8,     0,
       0,     0,     0,     0,     0,     0,    11,    12,   955,    13,
       0,     0,     0,     0,    14,    15,     0,     0,     0,    16,
      58,     0,   490,   491,     0,    18,    19,    20,   492,    22,
      23,    24,     0,    25,     0,     0,     0,     0,     0,     0,
       0,    26,     0,    27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,     0,     0,     0,
       0,     0,    29,    30,    31,    32,     0,     0,     0,     0,
       0,     0,     0,    33,    34,    35,    36,     0,     0,     0,
      37,     0,     0,    38,     0,     0,    40,     0,     0,   493,
       0,    42,    43,    44,    45,    46,    47,    48,     0,    49,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,     0,     0,    51,    52,     0,    53,    54,     0,
       0,     0,     0,     0,     0,     0,    55,     0,     0,     5,
      56,     0,     0,    57,   489,     0,     0,     7,     8,     0,
       0,     0,     0,     0,     0,     0,    11,    12,   986,    13,
       0,     0,     0,     0,    14,    15,     0,     0,     0,    16,
      58,     0,   490,   491,     0,    18,    19,    20,   492,    22,
      23,    24,     0,    25,     0,     0,     0,     0,     0,     0,
       0,    26,     0,    27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,     0,     0,     0,
       0,     0,    29,    30,    31,    32,     0,     0,     0,     0,
       0,     0,     0,    33,    34,    35,    36,     0,     0,     0,
      37,     0,     0,    38,     0,     0,    40,     0,     0,   493,
       0,    42,    43,    44,    45,    46,    47,    48,     0,    49,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,     0,     0,    51,    52,     0,    53,    54,     0,
       0,     0,     0,     0,     0,     0,    55,     0,     0,     5,
      56,     0,     0,    57,   489,     0,     0,     7,     8,     0,
       0,     0,     0,     0,     0,     0,    11,    12,   987,    13,
       0,     0,     0,     0,    14,    15,     0,     0,     0,    16,
      58,     0,   490,   491,     0,    18,    19,    20,   492,    22,
      23,    24,     0,    25,     0,     0,     0,     0,     0,     0,
       0,    26,     0,    27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,     0,     0,     0,
       0,     0,    29,    30,    31,    32,     0,     0,     0,     0,
       0,     0,     0,    33,    34,    35,    36,     0,     0,     0,
      37,     0,     0,    38,     0,     0,    40,     0,     0,   493,
       0,    42,    43,    44,    45,    46,    47,    48,     0,    49,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,     0,     0,    51,    52,     0,    53,    54,     0,
       0,     0,     0,     0,     0,     0,    55,     0,     0,     5,
      56,     0,     0,    57,   489,     0,     0,     7,     8,     0,
       0,     0,     0,     0,     0,     0,    11,    12,  1050,    13,
       0,     0,     0,     0,    14,    15,     0,     0,     0,    16,
      58,     0,   490,   491,     0,    18,    19,    20,   492,    22,
      23,    24,     0,    25,     0,     0,     0,     0,     0,     0,
       0,    26,     0,    27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,     0,     0,     0,
       0,     0,    29,    30,    31,    32,     0,     0,     0,     0,
       0,     0,     0,    33,    34,    35,    36,     0,     0,     0,
      37,     0,     0,    38,     0,     0,    40,     0,     0,   493,
       0,    42,    43,    44,    45,    46,    47,    48,     0,    49,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,     0,     0,    51,    52,     0,    53,    54,     0,
       0,     0,     0,     0,     0,     0,    55,     0,     0,     5,
      56,     0,     0,    57,   489,     0,     0,     7,     8,     0,
       0,     0,     0,     0,     0,     0,    11,    12,  -647,    13,
       0,     0,     0,     0,    14,    15,     0,     0,     0,    16,
      58,     0,   490,   491,     0,    18,    19,    20,   492,    22,
      23,    24,     0,    25,     0,     0,     0,     0,     0,     0,
       0,    26,     0,    27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,     0,     0,     0,
       0,     0,    29,    30,    31,    32,     0,     0,     0,     0,
       0,     0,     0,    33,    34,    35,    36,     0,     0,     0,
      37,     0,     0,    38,     0,     0,    40,     0,     0,   493,
       0,    42,    43,    44,    45,    46,    47,    48,     0,    49,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,     0,     0,    51,    52,     0,    53,    54,     0,
       0,     0,     0,     0,     0,     0,    55,     0,     0,     5,
      56,     0,     0,    57,   489,     0,     0,     7,     8,     0,
       0,     0,     0,     0,     0,     0,    11,    12,  1116,    13,
       0,     0,     0,     0,    14,    15,     0,     0,     0,    16,
      58,     0,   490,   491,     0,    18,    19,    20,   492,    22,
      23,    24,     0,    25,     0,     0,     0,     0,     0,     0,
       0,    26,     0,    27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,     0,     0,     0,
       0,     0,    29,    30,    31,    32,     0,     0,     0,     0,
       0,     0,     0,    33,    34,    35,    36,     0,     0,     0,
      37,     0,     0,    38,     0,     0,    40,     0,     0,   493,
       0,    42,    43,    44,    45,    46,    47,    48,     0,    49,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,     0,     0,    51,    52,     0,    53,    54,     0,
       0,     0,     0,     0,     0,     0,    55,     0,     0,     5,
      56,     0,     0,    57,   489,     0,     0,     7,     8,     0,
       0,     0,     0,     0,     0,     0,    11,    12,  1168,    13,
       0,     0,     0,     0,    14,    15,     0,     0,     0,    16,
      58,     0,   490,   491,     0,    18,    19,    20,   492,    22,
      23,    24,     0,    25,     0,     0,     0,     0,     0,     0,
       0,    26,     0,    27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,     0,     0,     0,
       0,     0,    29,    30,    31,    32,     0,     0,     0,     0,
       0,     0,     0,    33,    34,    35,    36,     0,     0,     0,
      37,     0,     0,    38,     0,     0,    40,     0,     0,   493,
       0,    42,    43,    44,    45,    46,    47,    48,     0,    49,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,     0,     0,    51,    52,     0,    53,    54,     0,
       0,     0,     0,     0,     0,     0,    55,     0,     0,     5,
      56,     0,     0,    57,   489,     0,     0,     7,     8,     0,
       0,     0,     0,     0,     0,     0,    11,    12,     0,    13,
       0,     0,     0,     0,    14,    15,     0,     0,     0,    16,
      58,     0,   490,   491,     0,    18,    19,    20,   492,    22,
      23,    24,     0,    25,     0,     0,     0,     0,     0,     0,
       0,    26,     0,    27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,  -637,     0,     0,     0,
       0,     0,    29,    30,    31,    32,     0,     0,     0,     0,
       0,     0,     0,    33,    34,    35,    36,     0,     0,     0,
      37,     0,     0,    38,     0,     0,    40,     0,     0,   493,
       0,    42,    43,    44,    45,    46,    47,    48,     0,    49,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,     0,     0,    51,    52,     0,    53,    54,     0,
       0,     0,     0,     0,     0,     0,    55,     0,     0,     5,
      56,     0,     0,    57,   489,     0,     0,     7,     8,     0,
       0,     0,     0,     0,     0,     0,    11,    12,  -639,    13,
       0,     0,     0,     0,    14,    15,     0,     0,     0,    16,
      58,     0,   490,   491,     0,    18,    19,    20,   492,    22,
      23,    24,     0,    25,     0,     0,     0,     0,     0,     0,
       0,    26,     0,    27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,     0,     0,     0,
       0,     0,    29,    30,    31,    32,     0,     0,     0,     0,
       0,     0,     0,    33,    34,    35,    36,     0,     0,     0,
      37,     0,     0,    38,     0,     0,    40,     0,     0,   493,
       0,    42,    43,    44,    45,    46,    47,    48,     0,    49,
       0,     0,   119,   120,     0,     0,     0,     0,     0,   121,
       0,    50,     0,     0,    51,    52,     0,    53,    54,   122,
     123,     0,     0,   124,   125,     0,    55,   126,   127,     0,
      56,   128,     0,    57,     0,     0,   478,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     129,   130,     0,     0,   131,     0,     0,     0,     0,     0,
      58,     0,     0,     0,     0,     0,     0,     0,     0,   119,
     120,     0,     0,     0,     0,     0,   121,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   122,   123,     0,     0,
     124,   125,     0,     0,   126,   127,     0,     0,   128,   132,
       0,     0,     0,     0,     0,     0,     0,     0,   133,     0,
     134,   135,   136,   137,   138,   139,   140,   129,   130,   141,
       0,   131,     0,   142,     0,   479,     0,   143,   382,     0,
       0,     0,     0,     0,     0,     0,   144,   145,   146,   147,
       0,     0,     0,     0,     0,     0,   148,     0,   149,   150,
     151,     0,   152,   153,   154,   155,   156,     0,     0,     0,
     157,     0,     0,     0,     0,   158,   132,     0,   159,     0,
       0,     0,     0,     0,     0,   133,     0,   134,   135,   136,
     137,   138,   139,   140,     0,     0,   141,     0,     0,     0,
     142,     0,     0,     0,   143,     0,     0,     0,     0,     0,
       0,     0,     0,   144,   145,   146,   147,     0,     0,     0,
       0,     0,     0,   148,     0,   149,   150,   151,     0,   152,
     153,   154,   155,   156,   119,   120,     0,   157,     0,     0,
       0,   121,   158,     0,     0,   159,     0,     0,     0,     0,
       0,   122,   123,     0,     0,   124,   125,     0,     0,   126,
     127,     0,     0,   128,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   129,   130,     0,     0,   131,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   119,   120,     0,     0,     0,     0,     0,   121,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   122,   123,
       0,     0,   124,   125,     0,     0,   126,   127,     0,     0,
     128,   132,     0,     0,     0,     0,     0,     0,     0,     0,
     133,     0,   134,   135,   136,   137,   138,   139,   140,   129,
     130,   141,     0,   131,     0,   142,     0,     0,     0,   143,
     878,     0,     0,     0,     0,     0,     0,     0,   144,   145,
     146,   147,     0,     0,     0,     0,     0,     0,   148,     0,
     149,   150,   151,     0,   152,   153,   154,   155,   156,     0,
       0,     0,   157,     0,     0,     0,     0,   158,   132,     0,
     159,     0,     0,     0,     0,     0,     0,   133,     0,   134,
     135,   136,   137,   138,   139,   140,     0,     0,   141,     0,
       0,     0,   142,     0,     0,     0,   143,     0,     0,     0,
       0,     0,     0,     0,     0,   144,   145,   146,   147,     0,
       0,     0,     0,     0,     0,   148,     0,   149,   150,   151,
       0,   152,   153,   154,   155,   156,     0,     0,     0,   157,
       0,     0,     0,     0,   158,     0,     0,   159
};

static const yytype_int16 yycheck[] =
{
       5,   382,   316,     8,   584,    41,    76,    77,   264,   614,
     266,    79,    80,   298,   309,   535,   480,   131,   541,     1,
     290,     1,    27,   986,   987,     1,    31,    32,    33,    34,
      35,     1,    37,    38,     1,    40,     1,   293,   372,   373,
     374,   375,   376,   157,   158,     1,   249,     1,   251,     1,
       1,     1,     1,    54,    53,     1,    66,     1,    63,    20,
       1,    37,    66,    15,     1,    70,     1,    72,    35,     1,
       1,    66,     1,     1,    35,     1,     1,    53,    83,    84,
       1,    86,    87,    88,     1,     1,   150,    62,     1,    85,
       6,    53,    64,    34,    99,     1,   119,   102,    53,   104,
      35,   106,   165,   166,     1,   128,    52,   112,   172,   114,
       1,    66,   129,    67,    60,    61,    52,    66,    35,    74,
       1,   172,     1,   728,    53,    71,   143,    15,     1,    35,
      18,   173,     1,    79,    80,     1,     0,    74,    84,     1,
       1,   142,    18,    19,    96,     1,   142,   129,    84,    74,
       1,     1,    84,     1,    35,    31,     1,    70,     1,   141,
       1,   143,   142,    35,   174,    41,   171,   172,   173,    18,
     174,    50,   177,    70,   179,   142,   175,   182,    63,    28,
     175,    30,    70,   188,   254,   129,   191,   162,   193,   150,
     142,   142,   197,   142,   174,   177,   172,   141,   129,   143,
     146,   147,   148,   173,   176,  1168,   173,   212,   173,   732,
     172,   142,   217,   129,   219,   150,   172,   142,   172,   175,
     172,   226,   150,   228,   174,   175,   172,   173,   233,   105,
     611,   172,     1,   177,     1,   172,   142,   242,   129,   244,
     172,   172,   537,   172,   172,   250,   172,   503,   518,   519,
     255,   172,   143,   129,   259,   172,   370,   371,   263,     7,
     265,   142,   267,   142,   269,    66,   271,   272,   273,   142,
      39,   276,   475,   142,    66,    63,   142,   282,   150,    66,
     142,   142,   287,    50,    51,   290,   142,   292,    36,   294,
     175,   142,   142,    66,   142,    66,    47,   142,   174,   142,
      50,   142,    66,    20,    84,    66,    75,    53,    50,    78,
       1,   129,    81,    82,    83,  1031,  1032,  1033,    55,     3,
       4,     5,    59,    57,   142,     0,    66,    66,    74,    75,
      99,   100,    18,    19,    66,    81,    82,    83,    89,   931,
      94,    95,     6,   935,    66,    31,   142,    66,    66,    41,
      58,    35,    69,    99,   100,    41,    66,    66,   822,   142,
     129,   130,    46,    47,    48,    49,    50,    51,    66,    66,
      66,  1087,    84,   142,   175,   142,  1092,   165,   166,    70,
     175,    15,   174,   175,    18,    19,  1102,   174,   175,   394,
     395,   129,   142,    66,   142,    66,    66,    31,   152,   172,
     142,   406,   407,   717,   175,    89,    40,    41,   722,   723,
     174,   175,   261,   418,   175,   149,   421,   142,   488,   105,
     106,   107,    66,    66,    66,    63,   172,   712,   713,   714,
     435,    18,    19,   728,   174,   174,  1152,    20,   130,   724,
      60,    61,   174,   129,    31,    65,   451,   452,   453,   133,
     134,   785,   174,   173,    41,   174,   174,   493,   307,  1064,
    1065,    58,    96,   468,   174,   174,    52,   316,   988,   989,
      63,   105,   106,   107,    60,    61,   174,   174,   174,   484,
     485,   122,    22,   332,   125,   334,   335,   336,   337,    22,
     339,    15,   497,   172,    18,   129,   175,   346,   347,   348,
     505,   174,   507,   174,   174,   354,   355,   356,   357,   358,
     359,   360,    15,   518,   519,    18,   172,   174,   105,   175,
     525,   172,    68,   528,   175,   530,   129,    52,    16,    17,
     174,   174,   174,    21,    22,    60,    61,    66,   141,    68,
     143,   173,   129,   163,   164,   550,    71,   861,   173,   554,
     172,   129,   173,   175,    79,    80,    44,    91,   174,   175,
     146,   147,   148,   141,   172,   143,   173,   175,   417,   103,
     142,   420,    34,    35,   177,    37,    16,    17,   172,   175,
      20,   175,    22,    16,    17,  1143,  1144,    20,   173,    22,
    1148,    53,   172,   663,   173,   175,  1154,  1155,  1156,   177,
     134,    89,    90,    91,    44,    67,   174,   175,   142,   614,
     173,    44,    74,   173,   619,   103,    66,   622,    68,   689,
     625,   146,   147,   148,   283,  1006,   285,   695,  1208,   173,
      53,   173,    72,   638,    75,   173,   950,   174,   175,    72,
      81,    82,    83,   173,    67,    68,    69,   174,   175,    89,
      90,    74,   167,   168,   169,   173,    89,    90,    99,   100,
     173,   731,   173,   733,   367,   368,   369,    86,    87,   674,
     377,   378,   173,   678,   679,   173,   681,   173,   683,   173,
     173,   686,   173,   173,   173,   690,   691,   692,   173,   173,
     173,   696,   173,   173,   173,   173,   142,    20,   175,   175,
     175,    74,   175,   142,   142,    20,   142,   142,    52,   174,
      53,   174,   142,   174,   970,   175,   142,    22,    22,    20,
     725,   142,    50,    78,   729,   142,   173,    73,    66,   174,
     142,   175,   175,    20,    84,    55,   741,   742,   175,   142,
    1054,   175,   174,   174,   142,   174,   174,   174,    89,   174,
     174,   142,   174,  1067,   174,    96,   174,   142,  1072,   174,
     174,  1075,   175,   174,   174,   174,   172,   175,   175,    86,
       1,     1,   113,    35,   115,   175,    49,    30,    84,   142,
     174,   142,  1096,    74,   174,   177,   175,   173,   172,   859,
     142,    68,    53,   142,   799,   175,   174,   142,    30,    82,
     142,   141,    30,   175,   809,   174,  1120,   175,   103,    20,
     659,   660,   661,   662,    81,  1129,    75,    53,   159,   175,
     825,   142,   110,    93,   142,    68,   173,    68,    20,   938,
    1077,   937,  1074,   903,   726,   174,   882,   980,   687,  1056,
      65,   300,   241,   184,   849,   460,   838,   852,   853,   952,
     609,   856,  1166,   826,   195,   610,     4,   468,   863,   864,
      13,    13,   109,  1114,    71,   510,  1035,   170,   717,   812,
    1149,  1157,   877,   722,   723,   820,  1145,   218,  1080,   516,
     640,   705,   447,   509,   984,   827,   253,   856,   877,  1127,
    1050,   738,    -1,    -1,    -1,   965,   901,   746,   747,    -1,
      -1,   750,   318,    -1,    -1,    -1,   755,    -1,    -1,    -1,
      -1,    -1,   761,    -1,   763,    -1,   921,    -1,    -1,   924,
      -1,    -1,    -1,    -1,    -1,    -1,   775,    -1,    -1,    -1,
      -1,    -1,   781,    -1,    -1,    -1,    -1,    -1,    -1,   944,
      -1,    -1,   283,    -1,   285,    -1,    -1,   288,   797,   798,
     955,    -1,    -1,    -1,   295,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   986,   987,    -1,    -1,    -1,    -1,  1057,    -1,    -1,
      -1,    -1,   333,    -1,    -1,    -1,    -1,    -1,    -1,   848,
     341,   342,   343,    -1,   345,    -1,    -1,    -1,    -1,    -1,
      -1,   352,   861,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     361,   362,    -1,    -1,    -1,    -1,  1031,  1032,  1033,    -1,
      -1,    -1,  1037,  1038,  1039,    -1,    -1,  1042,  1043,    -1,
      -1,    -1,    -1,    -1,    -1,  1050,    -1,  1052,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1064,
    1065,    -1,    -1,    -1,    -1,    -1,    -1,   408,  1073,    -1,
      -1,  1076,    -1,    -1,    -1,    -1,    -1,  1082,    -1,    -1,
      -1,    -1,  1087,    -1,  1089,   934,    -1,  1092,    -1,  1094,
      -1,   940,  1097,    -1,    -1,   436,    -1,  1102,    -1,    -1,
      -1,   950,    -1,    -1,    -1,    -1,   447,    -1,   449,    -1,
      -1,  1116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1201,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     481,  1211,    -1,    -1,    -1,    -1,    -1,  1152,    -1,    -1,
     999,    -1,    -1,    -1,  1003,  1160,  1161,    -1,    -1,    -1,
      -1,    -1,    -1,  1168,    -1,    -1,    -1,    -1,    -1,  1018,
      -1,    -1,    -1,    -1,    -1,   516,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1198,    -1,   536,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1054,    -1,    -1,    -1,     1,
    1215,  1216,  1217,    -1,    -1,     7,     8,    -1,  1067,    -1,
      -1,    -1,    14,  1072,    -1,    -1,  1075,    -1,    -1,  1078,
      -1,    -1,    24,    25,    -1,    -1,    28,    29,    -1,    -1,
      32,    33,    -1,   584,    36,    -1,    -1,  1096,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    -1,    -1,    59,    -1,    -1,
      -1,  1120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1129,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   635,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   104,    -1,    -1,    -1,    -1,  1166,    -1,    -1,
      -1,   113,    -1,   115,   116,   117,   118,   119,   120,   121,
     671,    -1,   124,    -1,    -1,    -1,   128,    -1,    -1,    -1,
     132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,
     142,   143,   144,    -1,    -1,    -1,    -1,    -1,    -1,   151,
      -1,   153,   154,   155,   705,   157,   158,   159,   160,   161,
      -1,    -1,    -1,   165,    -1,    -1,    -1,    -1,   170,    -1,
     172,   173,    -1,   175,     1,    -1,    -1,    -1,    -1,    -1,
       7,     8,    -1,    -1,   735,   736,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    -1,
      -1,    28,    29,    -1,    -1,    32,    33,    -1,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   773,    -1,    -1,    -1,    -1,    -1,    55,    56,
      -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   826,   827,   104,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,   115,   116,
     117,   118,   119,   120,   121,    -1,    -1,   124,    -1,    -1,
      -1,   128,    -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   141,   142,   143,   144,    -1,    -1,
      -1,    -1,    -1,   874,   151,   876,   153,   154,   155,    -1,
     157,   158,   159,   160,   161,     1,    -1,    -1,   165,    -1,
      -1,     7,     8,   170,    -1,    -1,   173,   174,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      -1,    -1,    28,    29,    -1,    -1,    32,    33,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,   932,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,     7,     8,
      -1,    -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    25,    -1,    -1,    28,
      29,   982,   983,    32,    33,    -1,    -1,    36,   104,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,   115,
     116,   117,   118,   119,   120,   121,    55,    56,   124,    -1,
      59,    -1,   128,    -1,   130,    -1,   132,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,   142,   143,   144,    -1,
      -1,    -1,    -1,    -1,    -1,   151,    -1,   153,   154,   155,
      -1,   157,   158,   159,   160,   161,    -1,    -1,    -1,   165,
      -1,    -1,    -1,    -1,   170,   104,    -1,   173,    -1,    -1,
      -1,    -1,    -1,    -1,   113,    -1,   115,   116,   117,   118,
     119,   120,   121,    -1,    -1,   124,    -1,    -1,    -1,   128,
      -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   141,   142,   143,   144,    -1,    -1,    -1,    -1,
      -1,    -1,   151,    -1,   153,   154,   155,    -1,   157,   158,
     159,   160,   161,     1,    -1,    -1,   165,  1118,    -1,     7,
       8,   170,    -1,   172,   173,    -1,    14,    -1,    -1,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    -1,    -1,
      28,    29,    -1,    -1,    32,    33,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    -1,
      -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,
      -1,    -1,    -1,     7,     8,    -1,    -1,    -1,    -1,    -1,
      14,    -1,    -1,    -1,    -1,    -1,    -1,  1208,    -1,    -1,
      24,    25,    -1,    -1,    28,    29,   104,    -1,    32,    33,
      -1,    -1,    36,    -1,    -1,   113,    -1,   115,   116,   117,
     118,   119,   120,   121,    -1,    -1,   124,    -1,    -1,    -1,
     128,    55,    56,    -1,   132,    59,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   141,   142,   143,   144,    -1,    -1,    -1,
      -1,    -1,    -1,   151,    -1,   153,   154,   155,    -1,   157,
     158,   159,   160,   161,    -1,    -1,    -1,   165,    -1,    -1,
      -1,    -1,   170,    -1,    -1,   173,    -1,    -1,    -1,    -1,
     104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
      -1,   115,   116,   117,   118,   119,   120,   121,    -1,    -1,
     124,    -1,    -1,    -1,   128,    -1,    -1,    -1,   132,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,   143,
     144,    -1,    -1,    -1,    -1,    -1,    -1,   151,    -1,   153,
     154,   155,     1,   157,   158,   159,   160,   161,     7,     8,
      -1,   165,    -1,    -1,    -1,    14,   170,    -1,    -1,   173,
      -1,    -1,    -1,    -1,    -1,    24,    25,    -1,    -1,    28,
      29,    -1,    -1,    32,    33,    -1,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    -1,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,    -1,    -1,    -1,    -1,     7,     8,    -1,    -1,    -1,
      -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    25,    -1,    -1,    28,    29,    -1,    -1,
      32,    33,    -1,    -1,    36,   104,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   113,    -1,   115,   116,   117,   118,
     119,   120,   121,    55,    56,   124,    -1,    59,    -1,   128,
      -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   141,   142,   143,   144,    -1,    -1,    -1,    -1,
      -1,    -1,   151,    -1,   153,   154,   155,    -1,   157,   158,
     159,   160,   161,    -1,    -1,    -1,   165,    -1,    -1,    -1,
      -1,   170,   104,    -1,   173,    -1,    -1,    -1,    -1,    -1,
      -1,   113,    -1,   115,   116,   117,   118,   119,   120,   121,
      -1,    -1,   124,    -1,    -1,    -1,   128,    -1,    -1,    -1,
     132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,
     142,   143,   144,    -1,    -1,    -1,    -1,    -1,    -1,   151,
      -1,   153,   154,   155,     1,   157,   158,   159,   160,   161,
       7,     8,    -1,   165,    -1,    -1,    -1,    14,   170,    -1,
      -1,   173,    -1,    -1,    -1,    -1,    -1,    24,    25,    -1,
      -1,    28,    29,    -1,    -1,    32,    33,    -1,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,
      -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,    -1,    -1,    -1,    -1,     7,     8,    -1,
      -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    25,    -1,    -1,    28,    29,
      -1,    -1,    32,    33,    -1,    -1,    36,   104,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,   115,   116,
     117,   118,   119,   120,   121,    55,    56,   124,    -1,    59,
      -1,   128,    -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   141,   142,   143,   144,    -1,    -1,
      -1,    -1,    -1,    -1,   151,    -1,   153,   154,   155,    -1,
     157,   158,   159,   160,   161,    -1,    -1,    -1,   165,    -1,
      -1,    -1,    -1,   170,   104,    -1,   173,    -1,    -1,    -1,
      -1,    -1,    -1,   113,    -1,   115,   116,   117,   118,   119,
     120,   121,    -1,    -1,   124,    -1,    -1,    -1,   128,    -1,
      -1,    -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   141,   142,   143,   144,    -1,    -1,    -1,    -1,    -1,
      -1,   151,    -1,   153,   154,   155,     1,   157,   158,   159,
     160,   161,     7,     8,    -1,   165,    -1,    -1,    -1,    14,
     170,    -1,    -1,   173,    -1,    -1,    -1,    -1,    -1,    24,
      25,    -1,    -1,    28,    29,    -1,    -1,    32,    33,    -1,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,    -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,     7,
       8,    -1,    -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    -1,    -1,
      28,    29,    -1,    -1,    32,    33,    -1,    -1,    36,   104,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,
     115,   116,   117,   118,   119,   120,   121,    55,    56,   124,
      -1,    59,    -1,   128,    -1,    -1,    -1,   132,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   141,   142,   143,   144,
      -1,    -1,    -1,    -1,    -1,    -1,   151,    -1,   153,   154,
     155,    -1,   157,   158,   159,   160,   161,    -1,    -1,    -1,
     165,    -1,    -1,    -1,    -1,   170,   104,    -1,   173,    -1,
      -1,    -1,    -1,    -1,    -1,   113,    -1,   115,   116,   117,
     118,   119,   120,   121,    -1,    -1,   124,    -1,    -1,    -1,
     128,    -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   141,   142,   143,   144,    -1,    -1,    -1,
      -1,    -1,    -1,   151,    -1,   153,   154,   155,     1,   157,
     158,   159,   160,   161,     7,     8,    -1,   165,    -1,    -1,
      -1,    14,   170,    -1,    -1,   173,    -1,    -1,    -1,    -1,
      -1,    24,    25,    -1,    -1,    28,    29,    -1,    -1,    32,
      33,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,   165,    -1,    -1,    -1,    -1,   170,   104,    -1,
     173,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,   115,
     116,   117,   118,   119,   120,   121,    -1,    -1,   124,    -1,
      -1,    -1,   128,    -1,    -1,    -1,   132,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,   142,   143,   144,    -1,
      -1,    -1,    -1,    -1,    -1,   151,    -1,   153,   154,   155,
       1,   157,   158,   159,   160,   161,     7,     8,    -1,   165,
      -1,    -1,    -1,    14,   170,    -1,    -1,   173,    -1,    -1,
      -1,    -1,    -1,    24,    25,    -1,    -1,    28,    29,    -1,
      -1,    32,    33,    -1,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     161,    -1,    -1,    -1,   165,    -1,    -1,    -1,    -1,   170,
     104,    -1,   173,    -1,    -1,    -1,    -1,    -1,    -1,   113,
      -1,   115,   116,   117,   118,   119,   120,   121,    -1,    -1,
     124,    -1,    -1,    -1,   128,    -1,    -1,    -1,   132,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,   143,
     144,    -1,    -1,    -1,    -1,    -1,    -1,   151,    -1,   153,
     154,   155,    -1,   157,   158,   159,   160,   161,    -1,     1,
      -1,   165,    -1,    -1,     6,    -1,   170,     9,    10,   173,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    34,    35,    -1,    37,    38,    39,    40,    41,
      42,    43,    -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    -1,    69,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    87,    88,    -1,    -1,    -1,
      92,    -1,    -1,    95,    -1,    -1,    98,    -1,    -1,   101,
      -1,   103,   104,   105,   106,   107,   108,   109,    -1,   111,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   123,    -1,    -1,   126,   127,    -1,   129,   130,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   138,    -1,    -1,     1,
     142,    -1,    -1,   145,     6,    -1,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,
     172,    -1,    34,    35,    -1,    37,    38,    39,    40,    41,
      42,    43,    -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    -1,    69,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    87,    88,    -1,    -1,    -1,
      92,    -1,    -1,    95,    -1,    -1,    98,    -1,    -1,   101,
      -1,   103,   104,   105,   106,   107,   108,   109,    -1,   111,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   123,    -1,    -1,   126,   127,    -1,   129,   130,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   138,    -1,    -1,     1,
     142,    -1,    -1,   145,     6,    -1,    -1,     9,    10,    11,
      -1,    -1,    -1,    15,    -1,    -1,    18,    19,    -1,    21,
      -1,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,
     172,    -1,    34,    -1,    -1,    37,    38,    39,    40,    41,
      42,    43,    -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    74,    75,    76,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    87,    88,    -1,    -1,    -1,
      92,    -1,    -1,    95,    96,    -1,    98,    -1,    -1,   101,
      -1,   103,   104,   105,   106,   107,   108,   109,    -1,   111,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   123,    -1,    -1,   126,   127,    -1,   129,   130,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   138,    -1,    -1,     1,
     142,    -1,    -1,   145,     6,    -1,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,
     172,    -1,    34,    35,    -1,    37,    38,    39,    40,    41,
      42,    43,    -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    74,    75,    76,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    87,    88,    -1,    -1,    -1,
      92,    -1,    -1,    95,    -1,    -1,    98,    -1,    -1,   101,
      -1,   103,   104,   105,   106,   107,   108,   109,    -1,   111,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   123,    -1,    -1,   126,   127,    -1,   129,   130,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   138,    -1,    -1,     1,
     142,    -1,    -1,   145,     6,    -1,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,
     172,    -1,    34,    35,    -1,    37,    38,    39,    40,    41,
      42,    43,    -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    74,    75,    76,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    87,    88,    -1,    -1,    -1,
      92,    -1,    -1,    95,    -1,    -1,    98,    -1,    -1,   101,
      -1,   103,   104,   105,   106,   107,   108,   109,    -1,   111,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   123,    -1,    -1,   126,   127,    -1,   129,   130,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   138,    -1,    -1,     1,
     142,    -1,    -1,   145,     6,    -1,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,
     172,    -1,    34,    35,    -1,    37,    38,    39,    40,    41,
      42,    43,    -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    74,    75,    76,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    87,    88,    -1,    -1,    -1,
      92,    -1,    -1,    95,    -1,    -1,    98,    -1,    -1,   101,
      -1,   103,   104,   105,   106,   107,   108,   109,    -1,   111,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   123,    -1,    -1,   126,   127,    -1,   129,   130,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   138,    -1,    -1,     1,
     142,    -1,    -1,   145,     6,    -1,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,
     172,    -1,    34,    35,    -1,    37,    38,    39,    40,    41,
      42,    43,    -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    74,    75,    76,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    87,    88,    -1,    -1,    -1,
      92,    -1,    -1,    95,    -1,    -1,    98,    -1,    -1,   101,
      -1,   103,   104,   105,   106,   107,   108,   109,    -1,   111,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   123,    -1,    -1,   126,   127,    -1,   129,   130,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   138,    -1,    -1,     1,
     142,    -1,    -1,   145,     6,    -1,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,
     172,    -1,    34,    35,    -1,    37,    38,    39,    40,    41,
      42,    43,    -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    74,    75,    76,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    87,    88,    -1,    -1,    -1,
      92,    -1,    -1,    95,    -1,    -1,    98,    -1,    -1,   101,
      -1,   103,   104,   105,   106,   107,   108,   109,    -1,   111,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   123,    -1,    -1,   126,   127,    -1,   129,   130,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   138,    -1,    -1,     1,
     142,    -1,    -1,   145,     6,    -1,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,
     172,    -1,    34,    35,    -1,    37,    38,    39,    40,    41,
      42,    43,    -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    74,    75,    76,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    87,    88,    -1,    -1,    -1,
      92,    -1,    -1,    95,    -1,    -1,    98,    -1,    -1,   101,
      -1,   103,   104,   105,   106,   107,   108,   109,    -1,   111,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   123,    -1,    -1,   126,   127,    -1,   129,   130,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   138,    -1,    -1,     1,
     142,    -1,    -1,   145,     6,    -1,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,
     172,    -1,    34,    35,    -1,    37,    38,    39,    40,    41,
      42,    43,    -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    74,    75,    76,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    87,    88,    -1,    -1,    -1,
      92,    -1,    -1,    95,    -1,    -1,    98,    -1,    -1,   101,
      -1,   103,   104,   105,   106,   107,   108,   109,    -1,   111,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   123,    -1,    -1,   126,   127,    -1,   129,   130,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   138,    -1,    -1,     1,
     142,    -1,    -1,   145,     6,    -1,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,
     172,    -1,    34,    35,    -1,    37,    38,    39,    40,    41,
      42,    43,    -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    74,    75,    76,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    87,    88,    -1,    -1,    -1,
      92,    -1,    -1,    95,    -1,    -1,    98,    -1,    -1,   101,
      -1,   103,   104,   105,   106,   107,   108,   109,    -1,   111,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   123,    -1,    -1,   126,   127,    -1,   129,   130,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   138,    -1,    -1,     1,
     142,    -1,    -1,   145,     6,    -1,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,
     172,    -1,    34,    35,    -1,    37,    38,    39,    40,    41,
      42,    43,    -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    74,    75,    76,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    87,    88,    -1,    -1,    -1,
      92,    -1,    -1,    95,    -1,    -1,    98,    -1,    -1,   101,
      -1,   103,   104,   105,   106,   107,   108,   109,    -1,   111,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   123,    -1,    -1,   126,   127,    -1,   129,   130,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   138,    -1,    -1,     1,
     142,    -1,    -1,   145,     6,    -1,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,
     172,    -1,    34,    35,    -1,    37,    38,    39,    40,    41,
      42,    43,    -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    74,    75,    76,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    87,    88,    -1,    -1,    -1,
      92,    -1,    -1,    95,    -1,    -1,    98,    -1,    -1,   101,
      -1,   103,   104,   105,   106,   107,   108,   109,    -1,   111,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   123,    -1,    -1,   126,   127,    -1,   129,   130,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   138,    -1,    -1,     1,
     142,    -1,    -1,   145,     6,    -1,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,
     172,    -1,    34,    35,    -1,    37,    38,    39,    40,    41,
      42,    43,    -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    74,    75,    76,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    87,    88,    -1,    -1,    -1,
      92,    -1,    -1,    95,    -1,    -1,    98,    -1,    -1,   101,
      -1,   103,   104,   105,   106,   107,   108,   109,    -1,   111,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   123,    -1,    -1,   126,   127,    -1,   129,   130,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   138,    -1,    -1,     1,
     142,    -1,    -1,   145,     6,    -1,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    -1,    21,
      -1,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,
     172,    -1,    34,    35,    -1,    37,    38,    39,    40,    41,
      42,    43,    -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    68,    -1,    -1,    -1,
      -1,    -1,    74,    75,    76,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    87,    88,    -1,    -1,    -1,
      92,    -1,    -1,    95,    -1,    -1,    98,    -1,    -1,   101,
      -1,   103,   104,   105,   106,   107,   108,   109,    -1,   111,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   123,    -1,    -1,   126,   127,    -1,   129,   130,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   138,    -1,    -1,     1,
     142,    -1,    -1,   145,     6,    -1,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,
     172,    -1,    34,    35,    -1,    37,    38,    39,    40,    41,
      42,    43,    -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    74,    75,    76,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    87,    88,    -1,    -1,    -1,
      92,    -1,    -1,    95,    -1,    -1,    98,    -1,    -1,   101,
      -1,   103,   104,   105,   106,   107,   108,   109,    -1,   111,
      -1,    -1,     7,     8,    -1,    -1,    -1,    -1,    -1,    14,
      -1,   123,    -1,    -1,   126,   127,    -1,   129,   130,    24,
      25,    -1,    -1,    28,    29,    -1,   138,    32,    33,    -1,
     142,    36,    -1,   145,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,    -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,
     172,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,
       8,    -1,    -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    -1,    -1,
      28,    29,    -1,    -1,    32,    33,    -1,    -1,    36,   104,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,
     115,   116,   117,   118,   119,   120,   121,    55,    56,   124,
      -1,    59,    -1,   128,    -1,   130,    -1,   132,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   141,   142,   143,   144,
      -1,    -1,    -1,    -1,    -1,    -1,   151,    -1,   153,   154,
     155,    -1,   157,   158,   159,   160,   161,    -1,    -1,    -1,
     165,    -1,    -1,    -1,    -1,   170,   104,    -1,   173,    -1,
      -1,    -1,    -1,    -1,    -1,   113,    -1,   115,   116,   117,
     118,   119,   120,   121,    -1,    -1,   124,    -1,    -1,    -1,
     128,    -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   141,   142,   143,   144,    -1,    -1,    -1,
      -1,    -1,    -1,   151,    -1,   153,   154,   155,    -1,   157,
     158,   159,   160,   161,     7,     8,    -1,   165,    -1,    -1,
      -1,    14,   170,    -1,    -1,   173,    -1,    -1,    -1,    -1,
      -1,    24,    25,    -1,    -1,    28,    29,    -1,    -1,    32,
      33,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,   165,    -1,    -1,    -1,    -1,   170,   104,    -1,
     173,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,   115,
     116,   117,   118,   119,   120,   121,    -1,    -1,   124,    -1,
      -1,    -1,   128,    -1,    -1,    -1,   132,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,   142,   143,   144,    -1,
      -1,    -1,    -1,    -1,    -1,   151,    -1,   153,   154,   155,
      -1,   157,   158,   159,   160,   161,    -1,    -1,    -1,   165,
      -1,    -1,    -1,    -1,   170,    -1,    -1,   173
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   179,   181,     0,   182,     1,     6,     9,    10,    11,
      15,    18,    19,    21,    26,    27,    31,    34,    37,    38,
      39,    40,    41,    42,    43,    45,    53,    55,    67,    74,
      75,    76,    77,    85,    86,    87,    88,    92,    95,    96,
      98,   101,   103,   104,   105,   106,   107,   108,   109,   111,
     123,   126,   127,   129,   130,   138,   142,   145,   172,   180,
     183,   184,   197,   215,   217,   219,   221,   222,   260,   296,
     307,   310,   312,   318,   323,   330,   333,   336,   339,   340,
     341,   342,   343,   344,   388,   390,   391,   393,   399,   400,
     417,   427,   429,   434,   435,   439,   445,   447,   180,     1,
     142,   180,    54,   142,   224,   225,     1,    39,   142,   278,
     307,   310,     1,   440,     1,   436,     1,   448,     1,     7,
       8,    14,    24,    25,    28,    29,    32,    33,    36,    55,
      56,    59,   104,   113,   115,   116,   117,   118,   119,   120,
     121,   124,   128,   132,   141,   142,   143,   144,   151,   153,
     154,   155,   157,   158,   159,   160,   161,   165,   170,   173,
     236,   241,   242,   243,   244,   245,   246,   247,   249,   251,
     254,     1,   142,     1,   142,    15,    18,     1,   142,     1,
     142,   173,   226,   180,   268,     1,   254,    84,   254,   180,
     180,   150,   180,     1,   180,   270,   180,     1,     6,   129,
     180,   180,   180,    15,    18,    19,    31,    40,    41,    96,
     129,   343,     6,   142,   289,   142,   286,     1,   272,     1,
      66,   142,     1,   319,   347,   311,     1,   142,     1,    84,
     173,   269,   389,     1,    15,    96,   142,   180,   232,    58,
     216,   216,     1,   142,     1,   142,   284,   180,    84,   277,
     322,   180,     1,   313,   280,    20,    69,   256,   256,     1,
      35,   173,   338,     1,   338,     1,   338,     1,   142,   325,
     326,     1,   129,   142,   180,   421,     1,   180,   405,   175,
     405,   405,     1,   175,   180,   283,   404,     1,   254,   255,
     401,   403,     1,   263,     1,   430,   255,   180,   198,   180,
     175,   180,   180,   142,   265,   129,   312,    63,   423,   321,
     322,   180,   255,   180,   255,    20,    35,   150,   449,   450,
     451,   461,    53,    67,    68,    69,    74,   335,   337,   226,
     173,   173,   173,   173,   173,   173,   173,   173,   226,   173,
     243,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   243,   243,   255,    58,   167,   168,   169,
     165,   166,    60,    61,    65,   163,   164,    62,   162,    63,
      64,   176,    66,   335,   180,   180,   180,   428,    22,    22,
     180,   180,   174,   180,     1,   255,   406,    68,    68,    50,
     142,   180,   180,   180,   255,   180,    91,   103,   134,   142,
     142,    15,    18,     1,   345,   180,   175,   175,   291,   175,
     175,   288,   180,   255,   180,   142,    20,    74,   142,   354,
     180,   175,   180,   308,   309,     1,   276,    52,    60,    61,
      71,    79,    80,   146,   147,   148,   408,   409,   395,   396,
     180,   234,   233,   235,   223,   256,   223,   180,   218,   180,
     220,    75,    81,    82,    83,    99,   100,   297,   299,   300,
     306,   293,    50,   142,   293,   180,   293,    20,    41,   130,
     316,   317,   425,   256,     1,    67,   180,   420,   264,     6,
      34,    35,    40,   101,   257,   260,   332,    20,   180,    57,
     149,   213,   254,   261,   180,   325,   180,   325,   180,   327,
     175,   180,   180,   180,   180,   180,   392,   180,   401,   401,
     180,   255,   175,   404,   180,   325,   180,   255,     1,   175,
     266,   199,   214,   255,   225,   281,    52,   279,   254,    53,
     294,   423,   441,   437,    34,    35,    37,    53,    67,    74,
     467,     1,   213,   452,    20,   450,   174,   174,   254,   255,
     254,   254,   254,   254,   254,   255,   255,   255,     1,   142,
     174,   255,   254,   254,   254,     1,   142,     1,   142,     1,
      50,    51,   142,   255,   237,   254,   254,   254,   254,   254,
     254,   254,   255,   255,   174,    55,    59,   242,   242,   242,
     243,   243,   244,   244,   244,   244,   244,   245,   245,   248,
     250,   252,   251,   175,   443,   444,   142,   142,   180,     1,
     180,   407,   271,   180,   180,   255,   274,   275,    22,    22,
      20,   142,   290,   254,   180,   287,   254,   180,   273,   348,
     394,    50,   142,   180,   238,   239,   240,   255,   406,   255,
     397,   398,   180,   180,   180,    20,   173,   227,   227,   304,
     302,   301,   303,   285,    53,    74,   180,   298,   300,    78,
     293,   426,   354,   255,    20,   180,   180,   256,     1,    70,
       1,    70,     1,    70,    15,    18,    70,    73,   331,   334,
       1,    37,    53,   180,   422,   174,   325,   180,   180,   328,
     408,   326,   397,   404,   404,   402,   180,   431,   180,   142,
     180,   446,     3,     4,     5,    35,    46,    47,    48,    49,
      50,    51,    89,   133,   134,   200,   201,   202,   443,     1,
     255,   410,   423,   295,   294,   175,   175,   180,    20,   462,
      84,     1,    34,   180,   466,   174,   175,   175,   174,   174,
     175,   174,     1,   174,   175,   175,   174,   174,   174,   174,
     174,   175,   174,   175,   174,   174,   174,   174,   174,   174,
     174,   174,   174,   175,   238,   175,   174,   174,   174,   174,
     174,   175,   174,   174,    55,    63,   246,   247,   251,   142,
     180,   444,   188,   186,   180,   180,   180,    47,    89,   385,
      16,    17,    21,    22,    44,    89,    90,    91,   103,   375,
     142,   142,   346,   142,   292,   255,   180,   214,   349,   350,
     351,   352,   424,   425,   395,   174,   175,   175,    18,    19,
      31,    41,   105,   129,   174,   228,   229,   230,    86,    94,
      95,   152,   231,   254,   254,   254,   254,   256,   305,   255,
     314,   172,     1,    74,   180,   418,    20,   180,   180,   259,
     180,   258,   180,     1,     1,   180,     1,   254,   256,   180,
     180,   180,   338,   180,   329,   403,   175,   267,   133,   214,
     214,   214,    49,   213,   205,   213,   213,   214,   180,   202,
     423,    53,   180,   416,    30,   413,   256,   294,   256,   255,
     255,   467,    84,   464,   142,   180,   180,   254,   254,   254,
     174,   142,   254,   254,   254,   255,   174,   254,   254,   244,
     177,     1,   173,   193,     1,   173,   189,   254,   254,   180,
     379,   378,   377,    74,   376,   380,   180,   187,   185,   349,
     175,   172,   356,   354,     1,    84,   180,   324,   240,   398,
     173,   174,   175,   142,   230,    20,   254,   180,   358,   355,
     356,   180,   180,   420,   256,   213,   180,   180,    68,    68,
     262,   255,   255,   446,   142,   205,   204,   122,   125,   206,
     203,    53,   411,   175,   414,   415,    20,    20,   442,   438,
     180,   142,   256,   453,   174,   174,   174,   174,   174,   175,
     174,   174,   174,   175,   174,   174,   253,   180,   142,   194,
     195,   180,   141,   190,   191,   386,   381,   382,   383,   381,
     255,   254,   381,   193,   189,   254,    16,    17,    20,    22,
      44,    72,    89,    90,   357,   353,   180,     1,    50,   142,
     213,   229,     1,    53,   180,   419,   129,   142,   320,    20,
      20,   256,   325,   432,    30,   207,   207,   282,   255,   255,
      53,   415,   419,   419,   443,   443,   463,    82,   460,   254,
     254,   251,   196,   174,   175,   192,   174,   175,    30,   387,
     175,   254,     1,   129,   141,   143,   177,   368,   369,     1,
     129,   143,   360,   361,     1,    17,   359,     1,   129,   141,
     143,   177,   363,   364,   358,   358,   358,   355,   180,   180,
     180,   174,   180,   180,   315,   466,    20,   180,   175,   213,
     103,   208,   208,   256,   412,   180,   180,    20,   213,    81,
     174,   174,   213,   180,   195,   213,   180,   191,   254,   382,
     384,   180,   370,   371,   372,   175,   358,   180,   362,   175,
     358,   180,   213,   180,   365,   366,   367,   175,   358,   321,
       1,    35,   180,   465,   255,   213,    75,   209,    20,    53,
     465,   213,   142,     7,    36,   142,   373,   374,   373,   373,
     369,   373,   361,   358,   373,   373,   373,   364,   180,   180,
     433,   213,   419,   454,   110,   175,   210,    93,   142,    68,
     211,   455,   180,    85,   142,   256,   173,   456,   212,    68,
     238,   457,   174,   256,   458,    20,     1,   150,   180,   459,
     180,   180
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   178,   179,   180,   181,   182,   181,   183,   183,   183,
     183,   183,   184,   184,   185,   184,   186,   184,   187,   184,
     188,   184,   189,   189,   190,   190,   192,   191,   193,   193,
     194,   194,   196,   195,   198,   197,   197,   199,   199,   200,
     200,   201,   201,   202,   202,   202,   202,   202,   202,   202,
     203,   202,   202,   204,   202,   202,   202,   202,   202,   205,
     205,   206,   206,   207,   207,   208,   208,   209,   210,   209,
     211,   211,   212,   211,   213,   214,   215,   215,   216,   216,
     217,   218,   217,   219,   220,   219,   221,   221,   222,   222,
     223,   224,   224,   225,   226,   226,   227,   227,   227,   228,
     228,   229,   230,   230,   230,   230,   230,   230,   230,   231,
     231,   231,   231,   232,   233,   232,   234,   232,   235,   232,
     232,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   237,   236,   236,
     236,   236,   236,   236,   238,   238,   239,   239,   240,   241,
     241,   241,   242,   242,   242,   242,   243,   243,   243,   243,
     244,   244,   244,   245,   245,   245,   245,   245,   245,   246,
     246,   246,   247,   248,   247,   249,   250,   249,   251,   252,
     253,   251,   254,   254,   255,   255,   256,   256,   257,   257,
     258,   257,   257,   259,   257,   257,   257,   257,   257,   257,
     260,   260,   260,   260,   260,   260,   260,   260,   260,   260,
     261,   260,   262,   260,   260,   263,   260,   260,   260,   260,
     264,   260,   265,   260,   260,   266,   260,   267,   260,   260,
     268,   260,   269,   260,   260,   270,   271,   260,   260,   272,
     273,   260,   260,   260,   274,   260,   260,   260,   260,   260,
     260,   260,   260,   260,   275,   260,   260,   276,   260,   260,
     260,   260,   260,   277,   260,   260,   260,   278,   279,   260,
     260,   280,   260,   260,   260,   281,   282,   260,   260,   260,
     260,   260,   260,   260,   260,   260,   260,   260,   260,   283,
     260,   260,   260,   260,   260,   260,   260,   260,   260,   260,
     260,   260,   260,   284,   285,   260,   260,   260,   287,   286,
     288,   288,   290,   289,   291,   292,   291,   293,   295,   294,
     296,   296,   297,   298,   298,   298,   299,   299,   301,   300,
     302,   300,   303,   300,   304,   300,   305,   300,   306,   306,
     306,   307,   308,   307,   309,   307,   311,   310,   313,   314,
     315,   312,   312,   316,   317,   316,   319,   318,   320,   320,
     320,   321,   321,   322,   322,   323,   323,   323,   324,   324,
     324,   324,   324,   325,   325,   327,   326,   328,   329,   328,
     330,   331,   332,   332,   333,   333,   334,   334,   335,   335,
     336,   336,   336,   337,   337,   337,   338,   338,   338,   339,
     339,   340,   340,   341,   341,   342,   342,   343,   343,   343,
     345,   346,   344,   344,   347,   348,   344,   344,   349,   349,
     351,   350,   353,   352,   354,   355,   356,   356,   357,   357,
     357,   357,   357,   357,   357,   357,   357,   357,   357,   358,
     358,   359,   359,   360,   360,   362,   361,   361,   363,   363,
     365,   364,   366,   364,   367,   364,   364,   368,   368,   370,
     369,   371,   369,   372,   369,   369,   373,   374,   374,   374,
     374,   375,   375,   375,   375,   376,   375,   375,   377,   375,
     378,   375,   379,   375,   380,   375,   381,   381,   383,   384,
     382,   385,   386,   385,   387,   387,   389,   388,   390,   390,
     392,   391,   394,   393,   396,   395,   397,   397,   398,   399,
     399,   400,   400,   401,   402,   401,   403,   404,   405,   406,
     406,   407,   407,   408,   408,   408,   408,   408,   408,   409,
     409,   409,   409,   411,   412,   410,   413,   410,   410,   414,
     414,   415,   416,   416,   417,   417,   418,   418,   418,   419,
     419,   419,   420,   420,   420,   421,   421,   421,   421,   422,
     422,   422,   422,   423,   423,   424,   424,   425,   426,   425,
     428,   427,   427,   430,   431,   432,   433,   429,   429,   434,
     434,   436,   437,   438,   435,   435,   440,   441,   442,   439,
     439,   443,   443,   444,   445,   446,   448,   447,   447,   449,
     449,   450,   450,   452,   453,   454,   455,   456,   457,   458,
     451,   459,   459,   459,   460,   460,   462,   463,   461,   461,
     464,   464,   465,   465,   465,   466,   466,   466,   467,   467,
     467,   467,   467,   467,   467
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
       3,     4,     1,     2,     2,     2,     1,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     5,     1,
       3,     3,     1,     0,     4,     1,     0,     4,     1,     0,
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
       1,     1,     1,     0,     0,     6,     0,     4,     2,     1,
       2,     2,     1,     1,     2,     1,     1,     2,     2,     1,
       2,     2,     1,     2,     2,     1,     2,     2,     2,     1,
       2,     2,     2,     0,     2,     1,     2,     1,     0,     4,
       0,     5,     3,     0,     0,     0,     0,    13,     3,     1,
       1,     0,     0,     0,     9,     3,     0,     0,     0,     9,
       3,     1,     2,     2,     1,     1,     0,     5,     5,     1,
       2,     1,     1,     0,     0,     0,     0,     0,     0,     0,
      19,     1,     2,     2,     0,     2,     0,     0,     8,     5,
       0,     2,     1,     2,     2,     1,     2,     2,     0,     1,
       1,     1,     1,     1,     1
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
#line 529 "rwlparser.y" /* yacc.c:1646  */
    {
	  ; // we are done!
	}
#line 3596 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 535 "rwlparser.y" /* yacc.c:1646  */
    { if (bit(rwm->mxq->errbits,RWL_ERROR_SEVERE)) YYABORT; }
#line 3602 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 541 "rwlparser.y" /* yacc.c:1646  */
    {  
	    bis(rwm->m2flags, RWL_P2_INTHING);
	    if (bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
	      YYACCEPT;
	  }
#line 3612 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 547 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->m2flags, RWL_P2_INTHING); 
	    if (bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
	      YYACCEPT;
	  }
#line 3622 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 562 "rwlparser.y" /* yacc.c:1646  */
    { rwlprintallvars(rwm); }
#line 3628 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 573 "rwlparser.y" /* yacc.c:1646  */
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
#line 3647 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 589 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->raname = rwm->inam;
	      bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	      bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	      rwm->ravarn = rwladdvar(rwm, rwm->inam, RWL_TYPE_RAST, 0);
	      rwlrastbeg(rwm, rwm->raname, RWL_TYPE_RAST);
	    }
#line 3659 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 598 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->raname = rwm->inam;
	      bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	      rwm->ravarn = rwladdvar(rwm, rwm->inam, RWL_TYPE_RAST, 0);
	      rwlrastbeg(rwm, rwm->raname, RWL_TYPE_RAST);
	    }
#line 3670 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 606 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->raname = rwm->inam;
	      bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	      bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	      rwm->ravarn = rwladdvar(rwm, rwm->inam, RWL_TYPE_RAPROC, 0);
	      rwlrastbeg(rwm, rwm->raname, RWL_TYPE_RAPROC);
	    }
#line 3682 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 615 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->raname = rwm->inam;
	      rwm->ravarn = rwladdvar(rwm, rwm->inam, RWL_TYPE_RAPROC, 0);
	      rwlrastbeg(rwm, rwm->raname, RWL_TYPE_RAPROC);
	    }
#line 3692 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 626 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlrastfin(rwm, rwm->raname, (sb4) rwm->ravarn);
	    }
#line 3700 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 630 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlcancelvar(rwm, rwm->raname, (sb4) rwm->ravarn);
	      rwlrastclear(rwm);
	      rwlerror(rwm, RWL_ERROR_DECL_RAST); 
	      yyerrok;
	    }
#line 3711 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 643 "rwlparser.y" /* yacc.c:1646  */
    {rwm->raentry = rwm->sval; }
#line 3717 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 645 "rwlparser.y" /* yacc.c:1646  */
    {rwlrastadd(rwm, rwm->raentry, rwm->pval.dval); }
#line 3723 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 651 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlrastfin(rwm, rwm->raname, (sb4) rwm->ravarn);
	    }
#line 3731 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 655 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlcancelvar(rwm, rwm->raname, (sb4) rwm->ravarn);
	      rwlrastclear(rwm);
	      rwlerror(rwm, RWL_ERROR_DECL_RAPROC); 
	      yyerrok;
	    }
#line 3742 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 667 "rwlparser.y" /* yacc.c:1646  */
    {rwm->raentry = rwm->inam; }
#line 3748 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 669 "rwlparser.y" /* yacc.c:1646  */
    {rwlrastadd(rwm, rwm->raentry, rwm->pval.dval); }
#line 3754 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 674 "rwlparser.y" /* yacc.c:1646  */
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
#line 3775 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 691 "rwlparser.y" /* yacc.c:1646  */
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
#line 3835 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 747 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DATABASE_WRONG); yyerrok; }
#line 3841 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 753 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
	        if (rwm->dbsav->username)
		  rwlerror(rwm, RWL_ERROR_DBSPEC_ALREADY, "username");
		else
		  rwm->dbsav->username = rwlstrdup(rwm, rwm->pval.sval);
	      }
	    }
#line 3855 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 773 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
	        if (rwm->dbsav->username)
		  rwlerror(rwm, RWL_ERROR_DBSPEC_ALREADY, "username");
		else
		  rwm->dbsav->username = rwlstrdup(rwm, rwm->pval.sval);
	      }
	    }
#line 3869 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 783 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	        rwm->dbsav->password = rwlstrdup(rwm, rwm->pval.sval);
	    }
#line 3878 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 788 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwlcclassgood(rwm, (rwm->pval.sval)))
	      { 
	        if (rwm->dbsav)
		  rwm->dbsav->cclass = rwlstrdup(rwm, rwm->pval.sval);
	      }
	    }
#line 3890 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 796 "rwlparser.y" /* yacc.c:1646  */
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
#line 3907 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 809 "rwlparser.y" /* yacc.c:1646  */
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
#line 3942 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 840 "rwlparser.y" /* yacc.c:1646  */
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
#line 3957 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 851 "rwlparser.y" /* yacc.c:1646  */
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
#line 3972 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 862 "rwlparser.y" /* yacc.c:1646  */
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
#line 3990 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 878 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      { 
		rwm->dbsav->stmtcache = rwlcheckminval(rwm->mxq, 0, rwm->pval.ival
		  , 0, RWL_DEFAULT_STMTCACHE, (text *)"cursorcache");
		bis(rwm->dbsav->flags, RWL_DB_CCACHUSER);
	      }
	    }
#line 4003 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 887 "rwlparser.y" /* yacc.c:1646  */
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
#line 4021 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 904 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
		if (rwm->dbsav->pooltype)
		  rwlerror(rwm, RWL_ERROR_DBPOOL_ALREADY);
	        rwm->dbsav->pooltype = RWL_DBPOOL_POOLED;
		rwm->dbsav->pooltext = "drcp pooled";
	      }
	    }
#line 4035 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 914 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
		if (rwm->dbsav->pooltype)
		  rwlerror(rwm, RWL_ERROR_DBPOOL_ALREADY);
	        rwm->dbsav->pooltype = RWL_DBPOOL_DEDICATED;
		rwm->dbsav->pooltext = "dedicated";
	      }
	    }
#line 4049 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 924 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
		if (rwm->dbsav->pooltype)
		  rwlerror(rwm, RWL_ERROR_DBPOOL_ALREADY);
	        rwm->dbsav->pooltype = RWL_DBPOOL_RETHRDED;
		rwm->dbsav->pooltext = "threads dedicated";
	      }
	    }
#line 4063 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 934 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
		if (rwm->dbsav->pooltype)
		  rwlerror(rwm, RWL_ERROR_DBPOOL_ALREADY);
	        rwm->dbsav->pooltype = RWL_DBPOOL_RECONNECT;
		rwm->dbsav->pooltext = "reconnect";
	      }
	    }
#line 4077 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 951 "rwlparser.y" /* yacc.c:1646  */
    {
#if (RWL_OCI_VERSION<12)
	    rwlerror(rwm, RWL_ERROR_NOT_SUPPORTED_IN_VERSION, "statemark",RWL_OCI_VERSION);
#else
	    bis(rwm->dbsav->flags,RWL_DB_STATEMARK);
#endif
	  }
#line 4089 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 959 "rwlparser.y" /* yacc.c:1646  */
    {
#if (RWL_OCI_VERSION<12)
	    rwlerror(rwm, RWL_ERROR_NOT_SUPPORTED_IN_VERSION, "requestmark",RWL_OCI_VERSION);
#else
	    bis(rwm->dbsav->flags,RWL_DB_REQMARK);
#endif
	  }
#line 4101 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 969 "rwlparser.y" /* yacc.c:1646  */
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
#line 4116 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 980 "rwlparser.y" /* yacc.c:1646  */
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
#line 4132 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 996 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      { 
		rwm->dbsav->ptimeout = rwlcheckminval(rwm->mxq, 0, rwm->pval.ival
		  , RWL_DBPOOL_CONNECT==rwm->dbsav->pooltype ? 0: 1
		  , RWL_DBPOOL_DEFAULT_TIMEOUT, (text *)"release timeout");
	      }
	    }
#line 4145 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 1009 "rwlparser.y" /* yacc.c:1646  */
    { 
#if (OCI_MAJOR_VERSION >= 12)
	      if (rwm->dbsav && rwm->pval.dval >= 0)
		rwm->dbsav->wtimeout = rwm->pval.dval;
#else
	    rwlerror(rwm, RWL_ERROR_NOT_YET_IMPL, "sessionpool wait attribute");
#endif
	    }
#line 4158 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 1023 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->dbsav && rwm->pval.dval >= 0)
	      bis(rwm->dbsav->flags, RWL_DB_SPTOBREAK);
	  }
#line 4167 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 1028 "rwlparser.y" /* yacc.c:1646  */
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
#line 4182 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 1039 "rwlparser.y" /* yacc.c:1646  */
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
#line 4198 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 1056 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprimmed(rwm);
	  }
#line 4206 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 1063 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprimmed(rwm);
	  }
#line 4214 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 1079 "rwlparser.y" /* yacc.c:1646  */
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
#line 4230 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 1091 "rwlparser.y" /* yacc.c:1646  */
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
#line 4249 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 1107 "rwlparser.y" /* yacc.c:1646  */
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
#line 4285 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 1143 "rwlparser.y" /* yacc.c:1646  */
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
#line 4300 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 1154 "rwlparser.y" /* yacc.c:1646  */
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
#line 4316 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 1167 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwm->mxq->evar[rwm->codeguess].v2val = rwm->facnt;
	      rwm->supsemerr = RWL_SUPSEM_PROC;
	    }
#line 4325 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 1175 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 4334 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 1180 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 4342 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 1187 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 4351 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 1192 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 4359 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 1199 "rwlparser.y" /* yacc.c:1646  */
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
#line 4445 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 1289 "rwlparser.y" /* yacc.c:1646  */
    {
          sb4 l = rwlfindvar(rwm->mxq, rwm->inam, RWL_VAR_NOGUESS);
          if (l>=0)
            rwlprintvar(rwm->mxq, l);
          }
#line 4455 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 1297 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m3flags, RWL_P3_MISBRACK); }
#line 4461 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 1298 "rwlparser.y" /* yacc.c:1646  */
    { bic(rwm->m3flags, RWL_P3_MISBRACK); }
#line 4467 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 1301 "rwlparser.y" /* yacc.c:1646  */
    { if (!bit(rwm->m2flags, RWL_P2_NOWARNDEP)) rwlerror(rwm, RWL_ERROR_MISSING_DECL_BRACK); }
#line 4473 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 1313 "rwlparser.y" /* yacc.c:1646  */
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
#line 4501 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 1341 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_INT; bic(rwm->addvarbits,RWL_IDENT_THRSPEC); }
#line 4507 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 1343 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_DBL; bic(rwm->addvarbits,RWL_IDENT_THRSPEC); }
#line 4513 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 1345 "rwlparser.y" /* yacc.c:1646  */
    { rwm->declslen=RWL_DEFAULT_STRLEN; rwm->dtype=RWL_TYPE_STR; bic(rwm->addvarbits,RWL_IDENT_THRSPEC); }
#line 4519 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 1347 "rwlparser.y" /* yacc.c:1646  */
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
#line 4538 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 1362 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwm->dtype = 0;
	      rwlerror(rwm, RWL_ERROR_BAD_ARGUMENT_TYPE, "file");
	    }
#line 4547 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 1367 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwm->dtype = 0;
	      rwlerror(rwm, RWL_ERROR_BAD_ARGUMENT_TYPE, "sql");
	    }
#line 4556 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 1372 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwm->dtype = 0;
	      rwlerror(rwm, RWL_ERROR_BAD_ARGUMENT_TYPE, "clob");
	    }
#line 4565 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 1381 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m4flags,RWL_P4_STATSONLY); }
#line 4571 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 1383 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m4flags,RWL_P4_PROCHASSQL); }
#line 4577 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 1385 "rwlparser.y" /* yacc.c:1646  */
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
#line 4597 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1405 "rwlparser.y" /* yacc.c:1646  */
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
#line 4615 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 1420 "rwlparser.y" /* yacc.c:1646  */
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
#line 4633 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 1435 "rwlparser.y" /* yacc.c:1646  */
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
#line 4652 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 1451 "rwlparser.y" /* yacc.c:1646  */
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
#line 4672 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 1494 "rwlparser.y" /* yacc.c:1646  */
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
#line 4689 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1508 "rwlparser.y" /* yacc.c:1646  */
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
#line 4707 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 1522 "rwlparser.y" /* yacc.c:1646  */
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
#line 4725 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1536 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwl_value num;
	      num.sval = rwm->sval; /* no strdup as RWL_T_STRING_CONST from lexer already is strdup'ed */
	      num.vsalloc = RWL_SVALLOC_CONST;
	      num.slen = rwlstrlen(num.sval)+1;
	      num.ival = rwlatosb8(num.sval);
	      num.dval = rwlatof(num.sval);
	      num.isnull = 0;
	      num.vtype = RWL_TYPE_STR;
	      rwlexprpush(rwm, &num, RWL_STACK_NUM);
	    }
#line 4741 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 1548 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    }
#line 4749 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1551 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_UNIFORM); }
#line 4755 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 1552 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LOGB); }
#line 4761 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1553 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LOG); }
#line 4767 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1554 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_EXPB); }
#line 4773 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1555 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_EXP); }
#line 4779 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1556 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_CEIL); }
#line 4785 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1557 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_TRUNC); }
#line 4791 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1558 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_FLOOR); }
#line 4797 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1559 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ROUND); }
#line 4803 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1560 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SQRT); }
#line 4809 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1561 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SIN); }
#line 4815 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1562 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_COS); }
#line 4821 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1563 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ATAN2); }
#line 4827 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1564 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LENGTHB); }
#line 4833 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1566 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_INSTRB2); }
#line 4839 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1568 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_INSTRB3); }
#line 4845 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1570 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SUBSTRB2); }
#line 4851 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1572 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SUBSTRB3); }
#line 4857 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1573 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_GETENV); }
#line 4863 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1574 "rwlparser.y" /* yacc.c:1646  */
    { 
						    if (bit(rwm->m4flags, RWL_P4_SLASHCONVERT)) rwlexprpush0(rwm,RWL_STACK_WINSLASHF2B);
						  }
#line 4871 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1577 "rwlparser.y" /* yacc.c:1646  */
    { 
						    if (bit(rwm->m4flags, RWL_P4_SLASHCONVERT)) rwlexprpush0(rwm,RWL_STACK_WINSLASHF2BB);
						  }
#line 4879 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1580 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SYSTEM); }
#line 4885 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1582 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprpush(rwm,rwm->inam ,RWL_STACK_SYSTEM2STR);
	  }
#line 4893 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1586 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_SYSTEM_BAD); yyerrok;
	    rwlexprpush0(rwm,RWL_STACK_SYSTEM);
	  }
#line 4902 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1590 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ERLANG); }
#line 4908 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1591 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ERLANG2); }
#line 4914 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1593 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ERLANGK); }
#line 4920 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1595 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_NORMALRANDOM); }
#line 4926 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1596 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ISNULL); }
#line 4932 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1598 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ACCESS); }
#line 4938 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1600 "rwlparser.y" /* yacc.c:1646  */
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
#line 4953 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1611 "rwlparser.y" /* yacc.c:1646  */
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
#line 4968 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1622 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprpush(rwm, rwm->inam, RWL_STACK_SERVERRELEASE);
	  }
#line 4976 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1626 "rwlparser.y" /* yacc.c:1646  */
    {
	    // push RWL_T_NULL to make exprfinish work
	    rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    rwlerror(rwm, RWL_ERROR_DBFUN_NEED_IDENT, "serverrelease"); yyerrok;
	  }
#line 4986 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1632 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprpush(rwm, rwm->inam, RWL_STACK_OPENSESSIONCOUNT);
	  }
#line 4994 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1636 "rwlparser.y" /* yacc.c:1646  */
    {
	    // push RWL_T_NULL to make exprfinish work
	    rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    rwlerror(rwm, RWL_ERROR_DBFUN_NEED_IDENT, "opensessioncount"); yyerrok;
	  }
#line 5004 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1642 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprpush(rwm, rwm->inam, RWL_STACK_ACTIVESESSIONCOUNT);
	  }
#line 5012 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1646 "rwlparser.y" /* yacc.c:1646  */
    {
	    // push RWL_T_NULL to make exprfinish work
	    rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    rwlerror(rwm, RWL_ERROR_DBFUN_NEED_IDENT, "activesessioncount"); yyerrok;
	  }
#line 5022 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1652 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->sqname)
	      rwlexprpush(rwm, rwm->sqname, RWL_STACK_SQL_ID);
	  }
#line 5031 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1657 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprpush(rwm, rwm->inam, RWL_STACK_SQL_ID);
	  }
#line 5039 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1661 "rwlparser.y" /* yacc.c:1646  */
    {
	    // push RWL_T_NULL to make exprfinish work
	    rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    rwlerror(rwm, RWL_ERROR_SQLID_NEED_IDENT); yyerrok;
	  }
#line 5049 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1668 "rwlparser.y" /* yacc.c:1646  */
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
#line 5066 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1682 "rwlparser.y" /* yacc.c:1646  */
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
#line 5082 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1694 "rwlparser.y" /* yacc.c:1646  */
    {
            rwlexprpush(rwm, 0, RWL_STACK_DBSECONDS);
          }
#line 5090 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1698 "rwlparser.y" /* yacc.c:1646  */
    {
            rwlexprpush(rwm, 0, RWL_STACK_OCISECONDS);
          }
#line 5098 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1702 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (!bit(rwm->m2flags, RWL_P2_NOWARNDEP) && bit(rwm->m3flags,RWL_P3_MISBRACK))
	      rwlerror(rwm, RWL_ERROR_MISSING_EMPTY_BRACKETS, "runseconds");
	    rwlexprpush(rwm, 0, RWL_STACK_RUNSECONDS);
	  }
#line 5108 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1708 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (!bit(rwm->m2flags, RWL_P2_NOWARNDEP) && bit(rwm->m3flags,RWL_P3_MISBRACK))
	      rwlerror(rwm, RWL_ERROR_MISSING_EMPTY_BRACKETS, "epochseconds");
	    rwlexprpush(rwm, 0, RWL_STACK_EPOCHSECONDS);
	  }
#line 5118 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1727 "rwlparser.y" /* yacc.c:1646  */
    { rwm->aacnt[rwm->furlev]++; }
#line 5124 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1733 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ISNULL); }
#line 5130 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1734 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ISNOTNULL); }
#line 5136 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1740 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_MINUS); }
#line 5142 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1741 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_NOT); }
#line 5148 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1742 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_NOT); }
#line 5154 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1747 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_MUL); }
#line 5160 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1748 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_DIV); }
#line 5166 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1749 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_MOD); }
#line 5172 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1754 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ADD); }
#line 5178 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1755 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SUB); }
#line 5184 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1760 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LESS); }
#line 5190 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1761 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_GREATER); }
#line 5196 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1762 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LESSEQ); }
#line 5202 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1763 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_GREATEREQ); }
#line 5208 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1764 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_BETWEEN); }
#line 5214 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1769 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_EQUAL); }
#line 5220 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1770 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_NOTEQUAL); }
#line 5226 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1776 "rwlparser.y" /* yacc.c:1646  */
    { 
	    // With AND (and OR) skipdep is used to mark
	    // the expression element we need to skip until
	    // in case the first condition is false (true for OR)
	    rwm->ptail->branchtype = RWL_EXP_ANDBRANCH;
	    if (rwm->skipdep++ >= UB1MAXVAL)
	      rwlsevere(rwm, "[rwlparser-andskip:%d]", rwm->skipdep);
	    rwm->ptail->skipnxt = rwm->skipdep;
	  }
#line 5240 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1786 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprpush2(rwm,0,RWL_STACK_AND, rwm->skipdep);
	    rwm->skipdep--;
	  }
#line 5249 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1795 "rwlparser.y" /* yacc.c:1646  */
    {  
	    // see comment above
	    rwm->ptail->branchtype = RWL_EXP_ORBRANCH;
	    if (rwm->skipdep++ >= UB1MAXVAL)
	      rwlsevere(rwm, "[rwlparser-orskip:%d]", rwm->skipdep);
	    rwm->ptail->skipnxt = rwm->skipdep;
	  }
#line 5261 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1803 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprpush2(rwm,0,RWL_STACK_OR ,rwm->skipdep);
	    rwm->skipdep--;
	  }
#line 5270 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1812 "rwlparser.y" /* yacc.c:1646  */
    {  
	    // With conditional execution we mark the condition
	    // with RWL_EXP_CONDBRANCH1
	    rwm->ptail->branchtype = RWL_EXP_CONDBRANCH1;
	    if (rwm->skipdep++ >= UB1MAXVAL)
	      rwlsevere(rwm, "[rwlparser-condskip:%d]", rwm->skipdep);
	    rwm->ptail->skipnxt = rwm->skipdep;
	  }
#line 5283 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1821 "rwlparser.y" /* yacc.c:1646  */
    {
	    // and the place of ':' (really ELSE) with 
	    // RWL_EXP_CONDBRANCH2
	    rwm->ptail->branchtype = RWL_EXP_CONDBRANCH2;
	    rwm->ptail->skipnxt = rwm->skipdep;
	  }
#line 5294 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1828 "rwlparser.y" /* yacc.c:1646  */
    {  
	    // And the actual conditional is the "end if" place
	    rwlexprpush2(rwm,0,RWL_STACK_CONDITIONAL, rwm->skipdep);
	    rwm->skipdep--;
	  }
#line 5304 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1837 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_CONCAT); }
#line 5310 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1842 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_CONCAT); }
#line 5316 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1853 "rwlparser.y" /* yacc.c:1646  */
    { rwm->supsemerr = 0; }
#line 5322 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1858 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
	    {
	      rwm->ifdirdep = 0; // since we may be skipping over $else, $endif
	      YYACCEPT;
	    }
	  }
#line 5334 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1866 "rwlparser.y" /* yacc.c:1646  */
    { yyerrok; }
#line 5340 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1868 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_COMMAND_NOT_LOCAL, "threads"); yyerrok; }
#line 5346 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1875 "rwlparser.y" /* yacc.c:1646  */
    { yyerrok; }
#line 5352 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1877 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_COMMAND_NOT_LOCAL, "run"); yyerrok; }
#line 5358 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1881 "rwlparser.y" /* yacc.c:1646  */
    { yyerrok; }
#line 5364 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1883 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_NOT_LOCAL, "database"); yyerrok; }
#line 5370 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1885 "rwlparser.y" /* yacc.c:1646  */
    { yyerrok ; }
#line 5376 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1888 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_NOT_LOCAL, "random procedure array"); yyerrok; }
#line 5382 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1891 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_NOT_LOCAL, "random string array"); yyerrok; }
#line 5388 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1896 "rwlparser.y" /* yacc.c:1646  */
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
#line 5421 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1925 "rwlparser.y" /* yacc.c:1646  */
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
#line 5440 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1940 "rwlparser.y" /* yacc.c:1646  */
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
#line 5455 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 1957 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_LOB); yyerrok; }
#line 5461 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 1964 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_INT); yyerrok; }
#line 5467 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 1970 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_DBL); yyerrok; }
#line 5473 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 1972 "rwlparser.y" /* yacc.c:1646  */
    { 
		rwm->declslen=RWL_DEFAULT_STRLEN;
	      }
#line 5481 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 1978 "rwlparser.y" /* yacc.c:1646  */
    {
	      if (RWL_TYPE_CANCELLED == rwm->pval.vtype)
		rwm->declslen = 1; // kind of a kludge, but this prevents doube
				   // error reporting if using local variable
	      else
	      {
		rwm->declslen = rwm->pval.ival;
	      }
	    }
#line 5495 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 1992 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_STR); yyerrok; }
#line 5501 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 1994 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dtype=RWL_TYPE_FILE;
	    //if (rwm->codename)
	    //  rwlerror(rwm, RWL_ERROR_NOT_LOCAL, "file");
	  }
#line 5511 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 2003 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_FILE); yyerrok; }
#line 5517 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 2008 "rwlparser.y" /* yacc.c:1646  */
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
#line 5542 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 2031 "rwlparser.y" /* yacc.c:1646  */
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
#line 5569 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 2055 "rwlparser.y" /* yacc.c:1646  */
    { if (!rwm->rslerror) rwlcodeadd0(rwm, RWL_CODE_ELSE); }
#line 5575 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 2058 "rwlparser.y" /* yacc.c:1646  */
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
#line 5600 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 2081 "rwlparser.y" /* yacc.c:1646  */
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
#line 5641 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 2122 "rwlparser.y" /* yacc.c:1646  */
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
#line 5713 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 2191 "rwlparser.y" /* yacc.c:1646  */
    { 
		  rwlerror(rwm, RWL_ERROR_LOOP);
		  rwm->rsllityp[rwm->rsldepth] = RWL_LI_BAD;
		  yyerrok;
		}
#line 5723 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 2198 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SYSTEM); }
#line 5729 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 2201 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprpush(rwm,rwm->inam ,RWL_STACK_SYSTEM2STR);
	  }
#line 5737 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 2206 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_SYSTEM_BAD); yyerrok;
	    rwlexprclear(rwm);
	  }
#line 5746 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 2211 "rwlparser.y" /* yacc.c:1646  */
    {
		/* start a dummy assignment such that expression gets executed */
		rwm->assignvar = RWL_DUMMY_VAR;
		rwm->assignoper = RWL_T_ASSIGN;
		rwlexprbeg(rwm);
	      }
#line 5757 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 2220 "rwlparser.y" /* yacc.c:1646  */
    {
		/* start expression for assign */
		rwm->assignvar = rwm->inam;
		rwlexprbeg(rwm);
	      }
#line 5767 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 2229 "rwlparser.y" /* yacc.c:1646  */
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
#line 5783 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 2241 "rwlparser.y" /* yacc.c:1646  */
    {
	        rwm->assignvar = rwm->codename;
		rwlexprbeg(rwm);
	      }
#line 5792 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 2246 "rwlparser.y" /* yacc.c:1646  */
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
#line 5825 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 2275 "rwlparser.y" /* yacc.c:1646  */
    { 
		  rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		  rwlexprclear(rwm);
		  yyerrok;
		}
#line 5835 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 2282 "rwlparser.y" /* yacc.c:1646  */
    {
	        rwm->assignvar = rwm->codename;
		rwlexprbeg(rwm);
	      }
#line 5844 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 2287 "rwlparser.y" /* yacc.c:1646  */
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
#line 5877 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 2317 "rwlparser.y" /* yacc.c:1646  */
    { 
		  rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		  rwlexprclear(rwm);
		  yyerrok;
		}
#line 5887 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 2325 "rwlparser.y" /* yacc.c:1646  */
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
#line 5905 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 2339 "rwlparser.y" /* yacc.c:1646  */
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
#line 5920 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 2353 "rwlparser.y" /* yacc.c:1646  */
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
#line 5938 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 2369 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (!rwm->codename)
	    {
	      rwlerror(rwm, RWL_ERROR_NOT_DONE_IN_MAIN, "modify database leak");
	      goto dontmoddbpool;
	    }
	    else
	      rwlcodeadd0(rwm, RWL_CODE_MODDBLEAK);
	  }
#line 5952 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 2380 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->codename)
	      rwlcodeadd0(rwm, RWL_CODE_SESRELDROP);
	  }
#line 5961 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 2386 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->codename)
	      rwlcodeadd0(rwm, RWL_CODE_SESRELDROP);
	  }
#line 5970 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 2392 "rwlparser.y" /* yacc.c:1646  */
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
#line 5985 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 2404 "rwlparser.y" /* yacc.c:1646  */
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
#line 6000 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 2416 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->codename)
	      rwlcodeadd0(rwm, RWL_CODE_SHIFT);
	    else
	      if (!bit(rwm->m2flags, RWL_P2_NOEXEC))
		rwlshiftdollar(rwm->mxq, &rwm->loc);
	  }
#line 6012 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 2425 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->codename)
	      rwlcodeadd0(rwm, RWL_CODE_GETRUSAGE);
	    else
	      if (!bit(rwm->m2flags, RWL_P2_NOEXEC))
		rwlgetrusage(rwm->mxq, 0);
	  }
#line 6024 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 2434 "rwlparser.y" /* yacc.c:1646  */
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
#line 6039 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 2447 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_MODIFY); yyerrok; }
#line 6045 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 2452 "rwlparser.y" /* yacc.c:1646  */
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
#line 6079 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 2484 "rwlparser.y" /* yacc.c:1646  */
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
#line 6168 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 2569 "rwlparser.y" /* yacc.c:1646  */
    {
	      /* This code can cause lookahead */
	      rwlerror(rwm, RWL_ERROR_BAD_ARG_LIST);
	      rwlexprclear(rwm);
	      yyerrok;
	    }
#line 6179 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 2576 "rwlparser.y" /* yacc.c:1646  */
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
#line 6198 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 2595 "rwlparser.y" /* yacc.c:1646  */
    { rwm->supsemerr = RWL_SUPSEM_EMBSQL; }
#line 6204 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 2601 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m3flags, RWL_P3_IMMPARSEFOR); }
#line 6210 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 2603 "rwlparser.y" /* yacc.c:1646  */
    { bic(rwm->m3flags, RWL_P3_IMMPARSEFOR); }
#line 6216 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 2609 "rwlparser.y" /* yacc.c:1646  */
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
#line 6303 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 2694 "rwlparser.y" /* yacc.c:1646  */
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
#line 6336 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 2724 "rwlparser.y" /* yacc.c:1646  */
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
#line 6372 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 2757 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_NO_FILE_FOR_FFLUSH);
	    yyerrok;
	  }
#line 6381 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 2764 "rwlparser.y" /* yacc.c:1646  */
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
#line 6408 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 2789 "rwlparser.y" /* yacc.c:1646  */
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
#line 6441 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 2820 "rwlparser.y" /* yacc.c:1646  */
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
#line 6464 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 2848 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_FILE_FOR_WRITE);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6475 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 2857 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_STRING_FOR_SPRINTF);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6486 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 317:
#line 2866 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6497 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 2876 "rwlparser.y" /* yacc.c:1646  */
    {
	      // Note that we do not document this syntax without comma
	      if (rwm->filenam)
		rwlerror(rwm, RWL_ERROR_COMMA_IS_RECOMMENDED, rwm->filenam
		, bit(rwm->mflags,RWL_P_PRINTLINE) ? "writeline" : "write");
	    }
#line 6508 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 2888 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6519 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 2896 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_FILE_FOR_WRITE);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6530 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 2904 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_FILE_FOR_WRITE);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6541 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 2912 "rwlparser.y" /* yacc.c:1646  */
    { 
		if (rwm->codename)
		  rwlcodeadd0(rwm, RWL_CODE_NEWLINE);
		else
		  fputs(bit(rwm->m4flags, RWL_P4_CRNLWRITELINE) ? "\r\n" : "\n", stdout);
		bic(rwm->mflags,RWL_P_PRINTLINE|RWL_P_PRINTBLANK);
	      }
#line 6553 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 2922 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6564 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 2930 "rwlparser.y" /* yacc.c:1646  */
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
#line 6579 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 330:
#line 2941 "rwlparser.y" /* yacc.c:1646  */
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
#line 6618 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 2977 "rwlparser.y" /* yacc.c:1646  */
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
#line 6658 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 3014 "rwlparser.y" /* yacc.c:1646  */
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
#line 6701 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 3054 "rwlparser.y" /* yacc.c:1646  */
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
#line 6722 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 3071 "rwlparser.y" /* yacc.c:1646  */
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
#line 6747 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 3094 "rwlparser.y" /* yacc.c:1646  */
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
#line 6769 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 336:
#line 3113 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlerror(rwm, RWL_ERROR_UNEXPECTED_AFTER_IDENTIFIER);
	      yyerrok;
	    }
#line 6778 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 337:
#line 3120 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_MISSING_SEMICOLON); yyerrok; }
#line 6784 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 338:
#line 3126 "rwlparser.y" /* yacc.c:1646  */
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
#line 6812 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 339:
#line 3150 "rwlparser.y" /* yacc.c:1646  */
    {
	  rwm->lobwritedata = rwlexprfinish(rwm);
	  rwm->loboffset = 0;
	}
#line 6821 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 341:
#line 3159 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->loboffset = rwlexprfinish(rwm);
	  }
#line 6829 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 342:
#line 3166 "rwlparser.y" /* yacc.c:1646  */
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
#line 6856 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 343:
#line 3189 "rwlparser.y" /* yacc.c:1646  */
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
#line 6882 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 345:
#line 3215 "rwlparser.y" /* yacc.c:1646  */
    {
	  rwm->lobreadlength = rwlexprfinish(rwm);
	}
#line 6890 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 346:
#line 3219 "rwlparser.y" /* yacc.c:1646  */
    {
	  rwm->loboffset = rwlexprfinish(rwm);
	}
#line 6898 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 347:
#line 3225 "rwlparser.y" /* yacc.c:1646  */
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
#line 7048 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 348:
#line 3375 "rwlparser.y" /* yacc.c:1646  */
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
#line 7162 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 3487 "rwlparser.y" /* yacc.c:1646  */
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
#line 7199 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 350:
#line 3523 "rwlparser.y" /* yacc.c:1646  */
    {  
	    // This syntax is not documented
	    bic(rwm->m3flags, RWL_P3_CLHEADFOR);
	    rwlerror(rwm, RWL_ERROR_LEGACY_CONTROLLOOP_SYNTAX);
	  }
#line 7209 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 351:
#line 3528 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m3flags, RWL_P3_CLHEADFOR); }
#line 7215 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 352:
#line 3532 "rwlparser.y" /* yacc.c:1646  */
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
#line 7232 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 353:
#line 3548 "rwlparser.y" /* yacc.c:1646  */
    { if (bit(rwm->m3flags, RWL_P3_CLHEADFOR))
	      rwlerror(rwm, RWL_ERROR_MIX_LEGACY_CLOOP);
	  }
#line 7240 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 354:
#line 3552 "rwlparser.y" /* yacc.c:1646  */
    { if (bit(rwm->m3flags, RWL_P3_CLHEADFOR))
	      rwlerror(rwm, RWL_ERROR_MIX_LEGACY_CLOOP);
	  }
#line 7248 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 355:
#line 3556 "rwlparser.y" /* yacc.c:1646  */
    { if (!bit(rwm->m3flags, RWL_P3_CLHEADFOR))
	      rwlerror(rwm, RWL_ERROR_MIX_LEGACY_CLOOP);
	  }
#line 7256 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 3567 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7262 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 3569 "rwlparser.y" /* yacc.c:1646  */
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
#line 7279 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 3581 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7285 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 361:
#line 3583 "rwlparser.y" /* yacc.c:1646  */
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
#line 7304 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 362:
#line 3597 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7310 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 363:
#line 3599 "rwlparser.y" /* yacc.c:1646  */
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
#line 7329 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 364:
#line 3613 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7335 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 365:
#line 3615 "rwlparser.y" /* yacc.c:1646  */
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
#line 7352 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 366:
#line 3627 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7358 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 367:
#line 3629 "rwlparser.y" /* yacc.c:1646  */
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
#line 7388 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 368:
#line 3658 "rwlparser.y" /* yacc.c:1646  */
    { rwm->ynqueue = 0; }
#line 7394 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 369:
#line 3659 "rwlparser.y" /* yacc.c:1646  */
    { rwm->ynqueue = RWL_QUEUE_EVERY; }
#line 7400 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 370:
#line 3660 "rwlparser.y" /* yacc.c:1646  */
    { rwm->ynqueue = RWL_NOQUEUE_EVERY; }
#line 7406 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 371:
#line 3664 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->scname = rwm->inam; 
	    bic(rwm->m2flags, RWL_P2_AT|RWL_P2_ATDEFAULT);
	  }
#line 7415 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 372:
#line 3669 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->scname = rwm->inam;
	    bic(rwm->m2flags, RWL_P2_AT|RWL_P2_ATDEFAULT);
	  }
#line 7424 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 373:
#line 3674 "rwlparser.y" /* yacc.c:1646  */
    { 
	      bis(rwm->m2flags, RWL_P2_ATDEFAULT);
	    }
#line 7432 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 374:
#line 3678 "rwlparser.y" /* yacc.c:1646  */
    {
	      bic(rwm->m2flags, RWL_P2_AT|RWL_P2_ATDEFAULT);
	      // lookahead may have consumed the next identifier
	      rwm->scname = (yychar == RWL_T_IDENTIFIER)
	        ? rwm->previnam
	        : rwm->inam;
	    }
#line 7444 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 375:
#line 3686 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->dbname = rwm->inam; 
	      bis(rwm->m2flags, RWL_P2_AT);
	    }
#line 7453 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 376:
#line 3695 "rwlparser.y" /* yacc.c:1646  */
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
#line 7472 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 377:
#line 3710 "rwlparser.y" /* yacc.c:1646  */
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
#line 7504 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 378:
#line 3742 "rwlparser.y" /* yacc.c:1646  */
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
#line 7522 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 379:
#line 3757 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->m3flags, RWL_P3_IMMEDSQL); 
	    bis(rwm->sqsav->flags, RWL_SQLFLAG_IBUSE);
	    bis(rwm->sqsav->flags, RWL_SQLFLAG_IDUSE);
	    if (bit(rwm->m3flags,RWL_P3_IMPLCASE))
	      bis(rwm->sqsav->flags, RWL_SQLFLAG_ICASE);
	  }
#line 7534 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 380:
#line 3766 "rwlparser.y" /* yacc.c:1646  */
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
#line 7575 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 382:
#line 3804 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_SQL_WRONG) ;
	    yyerrok;
	  }
#line 7584 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 384:
#line 3812 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7590 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 385:
#line 3813 "rwlparser.y" /* yacc.c:1646  */
    {
	    if ((rwm->msqlstk = rwlexprfinish(rwm)))
	      bis(rwm->m3flags, RWL_P3_IMMISDYN); // now dynamic
	    else
	    {
	      rwm->mxq->evar[rwm->sqsavvarn].vtype = RWL_TYPE_CANCELLED;
	      rwm->mxq->evar[rwm->sqsavvarn].stype = "cancelled (sql)";
	    }
	  }
#line 7604 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 386:
#line 3825 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->sqllino = rwm->loc.lineno;
	  }
#line 7612 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 390:
#line 3834 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "sql") ;
	  }
#line 7620 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 393:
#line 3845 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bis(rwm->m2flags, RWL_P2_ATDEFAULT);
	  }
#line 7628 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 394:
#line 3849 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dbname = rwm->inam; 
	    bis(rwm->m2flags, RWL_P2_AT);
	  }
#line 7637 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 395:
#line 3857 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->m2flags, RWL_P2_AT|RWL_P2_ATDEFAULT);
	  }
#line 7645 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 396:
#line 3861 "rwlparser.y" /* yacc.c:1646  */
    { 
	      bis(rwm->m2flags, RWL_P2_ATDEFAULT);
	    }
#line 7653 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 397:
#line 3865 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->dbname = rwm->inam; 
	      bis(rwm->m2flags, RWL_P2_AT);
	    }
#line 7662 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 399:
#line 3875 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->dbname = 0;
	      bis(rwm->m2flags, RWL_P2_ATDEFAULT); /* explict choose standard DB */
	    }
#line 7671 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 400:
#line 3881 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->dbname = rwm->inam;
	      bis(rwm->m2flags, RWL_P2_AT); /* named DB */
	    }
#line 7680 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 401:
#line 3886 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_NO_DATABASE_NAME); yyerrok; }
#line 7686 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 402:
#line 3888 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_MISSING_SEMICOLON); yyerrok; }
#line 7692 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 405:
#line 3896 "rwlparser.y" /* yacc.c:1646  */
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
#line 7722 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 406:
#line 3922 "rwlparser.y" /* yacc.c:1646  */
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
			  num.ival = rwlatosb8(num.sval);
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
#line 7799 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 408:
#line 3999 "rwlparser.y" /* yacc.c:1646  */
    {
		  rwm->assignvar = rwm->inam;
		  rwlexprbeg(rwm);
		}
#line 7808 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 409:
#line 4004 "rwlparser.y" /* yacc.c:1646  */
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
#line 7859 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 414:
#line 4067 "rwlparser.y" /* yacc.c:1646  */
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
#line 7878 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 415:
#line 4082 "rwlparser.y" /* yacc.c:1646  */
    {
              rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
              rwlexprclear(rwm);
              rwm->rslerror++; // to prevent attempting else/endif code generation
              yyerrok;
            }
#line 7889 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 416:
#line 4091 "rwlparser.y" /* yacc.c:1646  */
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
#line 7908 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 417:
#line 4106 "rwlparser.y" /* yacc.c:1646  */
    {
              rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
              rwlexprclear(rwm);
              rwm->rslerror++; // to prevent attempting else/endif code generation
              yyerrok;
            }
#line 7919 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 418:
#line 4115 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_LEGACY_WHILE_SYNTAX);
	  }
#line 7927 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 419:
#line 4119 "rwlparser.y" /* yacc.c:1646  */
    {
	    bis(rwm->rslflags[rwm->rsldepth], RWL_RSLFLAG_WHILOP);
	  }
#line 7935 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 420:
#line 4125 "rwlparser.y" /* yacc.c:1646  */
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
#line 7956 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 421:
#line 4142 "rwlparser.y" /* yacc.c:1646  */
    {
              rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
              rwlexprclear(rwm);
              rwm->rslerror++; // to prevent attempting else/endif code generation
              yyerrok;
            }
#line 7967 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 422:
#line 4149 "rwlparser.y" /* yacc.c:1646  */
    {
              rwlerror(rwm, RWL_ERROR_UNEXPECTED_KEYWORD, "loop");
              rwlexprclear(rwm);
              rwm->rslerror++; // to prevent attempting else/endif code generation
              yyerrok;
            }
#line 7978 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 427:
#line 4166 "rwlparser.y" /* yacc.c:1646  */
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
#line 7998 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 428:
#line 4182 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (rwm->codename)
	      rwlerror(rwm, RWL_ERROR_NO_LOCAL_SUMGLOB);
	    else
	      bis(rwm->addvarbits,RWL_IDENT_GLOBAL);
	  }
#line 8009 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 429:
#line 4192 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dtype=RWL_TYPE_STR;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 8019 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 430:
#line 4198 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->dtype=RWL_TYPE_STR;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 8028 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 431:
#line 4206 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dtype=RWL_TYPE_INT;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 8038 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 432:
#line 4212 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->dtype=RWL_TYPE_INT;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 8047 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 433:
#line 4220 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dtype=RWL_TYPE_DBL;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 8057 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 434:
#line 4226 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->dtype=RWL_TYPE_DBL;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 8066 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 435:
#line 4234 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 8075 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 436:
#line 4239 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 8083 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 437:
#line 4245 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_CLOB; }
#line 8089 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 438:
#line 4246 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_BLOB; }
#line 8095 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 439:
#line 4247 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_NCLOB; }
#line 8101 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 440:
#line 4251 "rwlparser.y" /* yacc.c:1646  */
    { rwm->sqllino = rwm->loc.lineno;}
#line 8107 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 441:
#line 4252 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	    bic(rwm->m2flags, RWL_P2_BADSQLFILTXT);
	    bic(rwm->m3flags, RWL_P3_IMMEDSQL); 
	    bic(rwm->m3flags, RWL_P3_IMMISDYN); 
	    rwm->sqllen = 0;
	    rwm->sqname = rwm->inam;
	  }
#line 8121 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 443:
#line 4263 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_SQL_WRONG); yyerrok;
	  }
#line 8129 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 444:
#line 4266 "rwlparser.y" /* yacc.c:1646  */
    { rwm->sqllino = rwm->loc.lineno;}
#line 8135 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 445:
#line 4267 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bic(rwm->m2flags, RWL_P2_BADSQLFILTXT);
	    bic(rwm->m3flags, RWL_P3_IMMEDSQL); 
	    bic(rwm->m3flags, RWL_P3_IMMISDYN); 
	    rwm->sqllen = 0;
	    rwm->sqname = rwm->inam;
	  }
#line 8148 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 447:
#line 4277 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_SQL_WRONG); yyerrok;
	  }
#line 8156 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 450:
#line 4287 "rwlparser.y" /* yacc.c:1646  */
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
#line 8206 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 451:
#line 4334 "rwlparser.y" /* yacc.c:1646  */
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
#line 8241 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 452:
#line 4368 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->m4flags, RWL_P4_AMPERSAND) && rwldynarcheck(rwm))
	    {
	      rwlerror(rwm, RWL_ERROR_CANNOT_AMPREP_HERE, "named sql declaration");
	      rwm->mxq->evar[rwm->sqsavvarn].vtype = RWL_TYPE_CANCELLED;
	      rwm->mxq->evar[rwm->sqsavvarn].stype = "cancelled (sql)";
	    }
	  }
#line 8254 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 454:
#line 4381 "rwlparser.y" /* yacc.c:1646  */
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
#line 8332 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 455:
#line 4459 "rwlparser.y" /* yacc.c:1646  */
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
#line 8429 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 459:
#line 4562 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_BIND); yyerrok; }
#line 8435 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 461:
#line 4566 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_BINDOUT); yyerrok; }
#line 8441 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 463:
#line 4570 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DEFINE); yyerrok; }
#line 8447 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 464:
#line 4572 "rwlparser.y" /* yacc.c:1646  */
    {
		  bis(rwm->sqsav->flags, RWL_SQFLAG_IGNERR);
		}
#line 8455 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 465:
#line 4576 "rwlparser.y" /* yacc.c:1646  */
    {
		  bic(rwm->sqsav->flags, RWL_SQFLAG_NOCURC);
		}
#line 8463 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 466:
#line 4580 "rwlparser.y" /* yacc.c:1646  */
    {
		  bis(rwm->sqsav->flags, RWL_SQFLAG_NOCURC);
		}
#line 8471 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 467:
#line 4585 "rwlparser.y" /* yacc.c:1646  */
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
#line 8493 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 468:
#line 4604 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ARRAY); yyerrok; }
#line 8499 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 469:
#line 4609 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_MISSING_SEMICOLON_IN_SQL); }
#line 8505 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 472:
#line 4615 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->sqsav->flags, RWL_SQFLAG_DYNAMIC))
	      rwlerror(rwm, RWL_ERROR_DEFINE_ARRAY_NOT_DYNAMIC);
	    else
	      bis(rwm->sqsav->flags, RWL_SQFLAG_ARRAYD);
	  }
#line 8516 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 475:
#line 4629 "rwlparser.y" /* yacc.c:1646  */
    {
	  // Note that it would not be too hard to replace
	  // the integer constant here by an expression
	  // which would make sense as that is what
	  // can be done with modify sql for dynamic sql
	  rwm->bdpos = rwm->ival; rwm->bdtyp=RWL_DEFINE;
	}
#line 8528 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 477:
#line 4638 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->sqsav->flags, RWL_SQLFLAG_IDUSE))
	      rwlerror(rwm, RWL_ERROR_IMPLICIT_ALREADY, "define");
	    bis(rwm->sqsav->flags, RWL_SQLFLAG_IDUSE);
	  }
#line 8538 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 480:
#line 4652 "rwlparser.y" /* yacc.c:1646  */
    { rwm->bdname = rwm->sval; rwm->bdtyp=RWL_BINDOUT_NAME; }
#line 8544 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 482:
#line 4654 "rwlparser.y" /* yacc.c:1646  */
    { 
	    // We could also use expression here, but we would
	    // of course need to check it was either a non-negative number
	    // or a string starting with :
	    rwm->bdpos = bit(rwm->m2flags,RWL_P2_BINDZERO) ? rwm->ival+1 : rwm->ival;
	    rwm->bdtyp=RWL_BINDOUT_POS; 
	  }
#line 8556 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 484:
#line 4662 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->bdtyp=RWL_BINDOUT_SAME;
	  }
#line 8564 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 486:
#line 4666 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_IMPLICIT_NOT_BINDOUT);
	  }
#line 8572 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 489:
#line 4677 "rwlparser.y" /* yacc.c:1646  */
    { rwm->bdname = rwm->sval; rwm->bdtyp=RWL_BIND_NAME; }
#line 8578 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 491:
#line 4679 "rwlparser.y" /* yacc.c:1646  */
    { 
	    // same comment as above
	    rwm->bdpos = bit(rwm->m2flags,RWL_P2_BINDZERO) ? rwm->ival+1 : rwm->ival;
	    rwm->bdtyp=RWL_BIND_POS; 
	  }
#line 8588 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 493:
#line 4685 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->bdtyp=RWL_BIND_SAME;
	  }
#line 8596 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 495:
#line 4689 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->sqsav->flags, RWL_SQLFLAG_IBUSE))
	      rwlerror(rwm, RWL_ERROR_IMPLICIT_ALREADY, "bind");
	    bis(rwm->sqsav->flags, RWL_SQLFLAG_IBUSE);
	  }
#line 8606 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 496:
#line 4698 "rwlparser.y" /* yacc.c:1646  */
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
#line 8704 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 497:
#line 4794 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->inam = RWL_DUMMY_VAR;
	    rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2, "function", "runseconds", "bind/define");
	  }
#line 8713 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 498:
#line 4799 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->inam = RWL_DUMMY_VAR;
	    rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2, "function", "epochseconds", "bind/define");
	  }
#line 8722 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 499:
#line 4803 "rwlparser.y" /* yacc.c:1646  */
    { bic(rwm->m2flags,RWL_P2_BINDRAW); }
#line 8728 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 500:
#line 4804 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m2flags,RWL_P2_BINDRAW); }
#line 8734 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 501:
#line 4808 "rwlparser.y" /* yacc.c:1646  */
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
#line 8755 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 502:
#line 4825 "rwlparser.y" /* yacc.c:1646  */
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
#line 8776 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 503:
#line 4842 "rwlparser.y" /* yacc.c:1646  */
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
#line 8797 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 504:
#line 4859 "rwlparser.y" /* yacc.c:1646  */
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
#line 8824 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 505:
#line 4881 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 8830 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 506:
#line 4882 "rwlparser.y" /* yacc.c:1646  */
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
#line 8865 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 507:
#line 4913 "rwlparser.y" /* yacc.c:1646  */
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
#line 8890 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 508:
#line 4933 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 8896 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 509:
#line 4934 "rwlparser.y" /* yacc.c:1646  */
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
#line 8922 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 510:
#line 4956 "rwlparser.y" /* yacc.c:1646  */
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
#line 8941 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 512:
#line 4971 "rwlparser.y" /* yacc.c:1646  */
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
#line 8960 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 514:
#line 4986 "rwlparser.y" /* yacc.c:1646  */
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
#line 8979 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 518:
#line 5006 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 8985 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 519:
#line 5008 "rwlparser.y" /* yacc.c:1646  */
    { rwm->msqlstk = rwlexprfinish(rwm); }
#line 8991 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 520:
#line 5010 "rwlparser.y" /* yacc.c:1646  */
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
#line 9046 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 521:
#line 5063 "rwlparser.y" /* yacc.c:1646  */
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
#line 9080 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 522:
#line 5093 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->mdbsphi = rwm->mdbsplo = rwlexprfinish(rwm);
	    if (!rwm->mdbsplo)
	      rwlexprclear(rwm);
	  }
#line 9090 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 523:
#line 5099 "rwlparser.y" /* yacc.c:1646  */
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
#line 9123 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 525:
#line 5131 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (!(rwm->mdbsphi = rwlexprfinish(rwm)))
	      rwlexprclear(rwm);
	  }
#line 9132 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 526:
#line 5138 "rwlparser.y" /* yacc.c:1646  */
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
#line 9156 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 528:
#line 5161 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m3flags, RWL_P3_SPFCONCAT); }
#line 9162 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 529:
#line 5162 "rwlparser.y" /* yacc.c:1646  */
    { bic(rwm->m3flags, RWL_P3_SPFCONCAT); }
#line 9168 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 530:
#line 5166 "rwlparser.y" /* yacc.c:1646  */
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
#line 9192 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 531:
#line 5186 "rwlparser.y" /* yacc.c:1646  */
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
#line 9210 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 532:
#line 5204 "rwlparser.y" /* yacc.c:1646  */
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
#line 9233 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 534:
#line 5226 "rwlparser.y" /* yacc.c:1646  */
    {
	  rwm->conhead = rwm->contail = 0;
	}
#line 9241 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 535:
#line 5230 "rwlparser.y" /* yacc.c:1646  */
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
#line 9266 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 538:
#line 5258 "rwlparser.y" /* yacc.c:1646  */
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
#line 9289 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 539:
#line 5279 "rwlparser.y" /* yacc.c:1646  */
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
#line 9314 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 540:
#line 5301 "rwlparser.y" /* yacc.c:1646  */
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
#line 9339 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 541:
#line 5325 "rwlparser.y" /* yacc.c:1646  */
    {  
	    bic(rwm->mflags,RWL_P_PRINTLINE);
	    bic(rwm->mflags,RWL_P_PRINTTOFILE);
	  }
#line 9348 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 542:
#line 5330 "rwlparser.y" /* yacc.c:1646  */
    {  
	    bis(rwm->mflags,RWL_P_PRINTLINE);
	    bic(rwm->mflags,RWL_P_PRINTTOFILE);
	  }
#line 9357 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 544:
#line 5338 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->mflags,RWL_P_PRINTBLANK); }
#line 9363 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 546:
#line 5343 "rwlparser.y" /* yacc.c:1646  */
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
#line 9425 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 547:
#line 5404 "rwlparser.y" /* yacc.c:1646  */
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
#line 9461 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 548:
#line 5439 "rwlparser.y" /* yacc.c:1646  */
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
#line 9476 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 549:
#line 5454 "rwlparser.y" /* yacc.c:1646  */
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
#line 9523 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 550:
#line 5497 "rwlparser.y" /* yacc.c:1646  */
    { 
		rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 9533 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 552:
#line 5507 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_MISSING_SEMICOLON);
	    yyerrok;
	  }
#line 9542 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 553:
#line 5514 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_ASSIGN; }
#line 9548 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 554:
#line 5515 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_GREATEQ; }
#line 9554 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 555:
#line 5516 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_RSHIFTASSIGN; }
#line 9560 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 556:
#line 5517 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_LESSEQ; }
#line 9566 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 557:
#line 5518 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_PIPEFROM; }
#line 9572 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 558:
#line 5519 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_PIPETO; }
#line 9578 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 560:
#line 5523 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_APPEND; }
#line 9584 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 561:
#line 5524 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_ASNADD; }
#line 9590 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 562:
#line 5525 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_ASNSUB; }
#line 9596 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 563:
#line 5532 "rwlparser.y" /* yacc.c:1646  */
    {
		rwl_estack *estk;
		rwlexprpush(rwm, rwm->assignvar, RWL_STACK_ASN);
		estk = rwlexprfinish(rwm);
		rwlcodeaddp(rwm, RWL_CODE_ASSIGN, estk);
	      }
#line 9607 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 564:
#line 5539 "rwlparser.y" /* yacc.c:1646  */
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
#line 9637 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 566:
#line 5565 "rwlparser.y" /* yacc.c:1646  */
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
#line 9654 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 568:
#line 5579 "rwlparser.y" /* yacc.c:1646  */
    { 
		rwlerror(rwm, RWL_ERROR_LOOP);
		rwlexprclear(rwm);
		// prevent attempting endloop code generation
		rwm->loopvar[rwm->rsldepth] = 0;
		rwm->rsllityp[rwm->rsldepth] = RWL_LI_BAD;
		bic(rwm->rslflags[rwm->rsldepth], RWL_RSLFLAG_MAYBRK);
		yyerrok;
	      }
#line 9668 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 571:
#line 5598 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwl_lilist *thisli = rwlalloc(rwm, sizeof(rwl_lilist));
	    rwlexprpush(rwm, rwm->loopvar[rwm->rsldepth], RWL_STACK_ASN);
	    thisli->listk = rwlexprfinish(rwm);
	    rwm->rsllitail[rwm->rsldepth]->linxt = thisli;
	    rwm->rsllitail[rwm->rsldepth] = thisli;
	  }
#line 9680 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 574:
#line 5618 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 9689 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 575:
#line 5623 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 9697 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 578:
#line 5632 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "execute") ; }
#line 9703 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 581:
#line 5639 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "loop") ; }
#line 9709 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 584:
#line 5646 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "if") ; yyerrok; }
#line 9715 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 587:
#line 5653 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (0 != rwlstrcmp(rwm->inam, rwm->sqname))
	      rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END2, "sql", rwm->sqname);
	  }
#line 9724 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 588:
#line 5658 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END2, "sql", rwm->sqname) ; yyerrok; }
#line 9730 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 590:
#line 5664 "rwlparser.y" /* yacc.c:1646  */
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
#line 9745 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 591:
#line 5675 "rwlparser.y" /* yacc.c:1646  */
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
#line 9760 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 592:
#line 5686 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (bit(rwm->rslflags[rwm->rsldepth-1], RWL_RSLFLAG_WHILOP))
	      rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "loop") ;
	    else
	      rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "while") ;
	    yyerrok;
	  }
#line 9772 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 593:
#line 5697 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->cursorand = 0;
	  }
#line 9780 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 594:
#line 5702 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->cursorand = rwlexprfinish(rwm);
	  }
#line 9788 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 596:
#line 5709 "rwlparser.y" /* yacc.c:1646  */
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
#line 9847 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 597:
#line 5766 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->loc.errlin = 0;
	    rwm->sqlfile = 0; /* not from a file */
	  }
#line 9856 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 598:
#line 5771 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprbeg(rwm);
	  }
#line 9864 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 599:
#line 5775 "rwlparser.y" /* yacc.c:1646  */
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
#line 9949 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 600:
#line 5858 "rwlparser.y" /* yacc.c:1646  */
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
#line 9973 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 601:
#line 5878 "rwlparser.y" /* yacc.c:1646  */
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
#line 10000 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 602:
#line 5902 "rwlparser.y" /* yacc.c:1646  */
    { 
		rwlerror(rwm, RWL_ERROR_BAD_READLINE);
		yyerrok;
	      }
#line 10009 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 603:
#line 5909 "rwlparser.y" /* yacc.c:1646  */
    { rwm->reg_estk = rwm->str_estk = rwm->sub_estk = 0; }
#line 10015 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 604:
#line 5911 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->reg_estk = rwlexprfinish(rwm);
	  }
#line 10023 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 605:
#line 5915 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->str_estk = rwlexprfinish(rwm);
	  }
#line 10031 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 606:
#line 5919 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->sub_estk = rwlexprfinish(rwm);
	  }
#line 10039 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 607:
#line 5923 "rwlparser.y" /* yacc.c:1646  */
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
#line 10082 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 608:
#line 5962 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprclear(rwm);
	    rwlerror(rwm, RWL_ERROR_BAD_REGEX);
	    yyerrok;
	  }
#line 10092 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 609:
#line 5971 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->m2flags, RWL_P2_REGEXSUBG);
	  }
#line 10100 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 610:
#line 5975 "rwlparser.y" /* yacc.c:1646  */
    {
	    bis(rwm->m2flags, RWL_P2_REGEXSUBG);
	  }
#line 10108 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 611:
#line 5981 "rwlparser.y" /* yacc.c:1646  */
    { rwm->reg_estk = rwm->str_estk = 0; }
#line 10114 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 612:
#line 5983 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->reg_estk = rwlexprfinish(rwm);
	  }
#line 10122 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 613:
#line 5987 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->str_estk = rwlexprfinish(rwm);
	    rwm->idlist = rwm->idtail = 0;
	  }
#line 10131 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 614:
#line 5992 "rwlparser.y" /* yacc.c:1646  */
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
#line 10168 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 615:
#line 6026 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprclear(rwm);
	    rwlerror(rwm, RWL_ERROR_BAD_REGEX);
	    yyerrok;
	  }
#line 10178 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 616:
#line 6035 "rwlparser.y" /* yacc.c:1646  */
    { rwm->reg_estk = rwm->str_estk = 0; }
#line 10184 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 617:
#line 6037 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->reg_estk = rwlexprfinish(rwm);
	  }
#line 10192 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 618:
#line 6041 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->str_estk = rwlexprfinish(rwm);
	    rwm->idlist = rwm->idtail = 0;
	  }
#line 10201 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 619:
#line 6046 "rwlparser.y" /* yacc.c:1646  */
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
#line 10238 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 620:
#line 6080 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprclear(rwm);
	    rwlerror(rwm, RWL_ERROR_BAD_REGEX);
	    yyerrok;
	  }
#line 10248 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 623:
#line 6093 "rwlparser.y" /* yacc.c:1646  */
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
#line 10293 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 624:
#line 6136 "rwlparser.y" /* yacc.c:1646  */
    {
		/* start a dummy assignment such that the system expression gets executed */
		rwm->assignvar = RWL_DUMMY_VAR;
		rwm->assignoper = RWL_T_ASSIGN;
		rwlexprbeg(rwm);
	      }
#line 10304 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 625:
#line 6145 "rwlparser.y" /* yacc.c:1646  */
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
#line 10324 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 626:
#line 6170 "rwlparser.y" /* yacc.c:1646  */
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
#line 10339 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 627:
#line 6182 "rwlparser.y" /* yacc.c:1646  */
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
#line 10362 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 628:
#line 6201 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ILLEGAL_THREAD); yyerrok; }
#line 10368 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 633:
#line 6215 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->cqnstart = rwm->cqnstop = 0.0;
	    rwm->cqnnow = rwlclock(rwm->mxq,0);
	  }
#line 10377 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 634:
#line 6220 "rwlparser.y" /* yacc.c:1646  */
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
#line 10405 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 635:
#line 6245 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->cqnstop = rwm->pval.dval;
	    if (rwm->cqnstop < rwm->cqnstart || rwm->cqnstop < rwm->cqnnow)
	    {
	      rwlerror(rwm, RWL_ERROR_CQN_STOP_BEFORE_START, rwm->cqnstop, rwm->cqnstart, rwm->cqnnow);
	      rwm->cqnat = 0;
	    }
	  }
#line 10418 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 636:
#line 6254 "rwlparser.y" /* yacc.c:1646  */
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
#line 10474 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 637:
#line 6306 "rwlparser.y" /* yacc.c:1646  */
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
#line 10503 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 638:
#line 6331 "rwlparser.y" /* yacc.c:1646  */
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
#line 10535 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 639:
#line 6359 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlcodeaddu(rwm, RWL_CODE_CQNISCB, 0); // Is in callback
	    rwlcodetail(rwm);
	  }
#line 10544 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 643:
#line 6370 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "querynotification");
	    yyerrok;
	  }
#line 10553 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 645:
#line 6379 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->cqnstart = rwm->pval.dval;
	  }
#line 10561 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 646:
#line 6386 "rwlparser.y" /* yacc.c:1646  */
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
#line 10581 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 647:
#line 6404 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlcodetail(rwm);
	  }
#line 10589 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 649:
#line 6409 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ILLEGAL_THREAD); yyerrok; }
#line 10595 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 651:
#line 6414 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->mythr->dbnam = rwm->inam;
	  }
#line 10603 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 654:
#line 6423 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "threads") ; }
#line 10609 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 657:
#line 6431 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "run") ; }
#line 10615 "rwlparser.tab.c" /* yacc.c:1646  */
    break;


#line 10619 "rwlparser.tab.c" /* yacc.c:1646  */
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
