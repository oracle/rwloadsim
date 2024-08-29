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
#line 158 "rwlparser.y" /* yacc.c:339  */

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
    RWL_T_BITWISE_LEFT_SHIFT = 417,
    RWL_T_BITWISE_RIGHT_SHIFT = 418,
    RWL_T_UMINUS = 419
  };
#endif

/* Value type.  */
#if ! defined RWLYSTYPE && ! defined RWLYSTYPE_IS_DECLARED

union RWLYSTYPE
{
#line 473 "rwlparser.y" /* yacc.c:355  */

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

#line 599 "rwlparser.tab.c" /* yacc.c:355  */
};

typedef union RWLYSTYPE RWLYSTYPE;
# define RWLYSTYPE_IS_TRIVIAL 1
# define RWLYSTYPE_IS_DECLARED 1
#endif



int rwlyparse (rwl_main *rwm);

#endif /* !YY_RWLY_RWLPARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 615 "rwlparser.tab.c" /* yacc.c:358  */

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
#define YYLAST   5778

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  184
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  294
/* YYNRULES -- Number of rules.  */
#define YYNRULES  674
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1238

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   419

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   175,     2,     2,     2,   174,   166,     2,
     179,   180,   172,   171,   181,   170,     2,   173,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   183,   178,
     168,   167,   169,   182,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   165,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   164,     2,   176,     2,     2,     2,
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
     155,   156,   157,   158,   159,   160,   161,   162,   163,   177
};

#if RWLYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   535,   535,   542,   546,   548,   547,   563,   564,   565,
     567,   570,   577,   579,   596,   595,   605,   604,   613,   612,
     622,   621,   631,   636,   645,   646,   650,   649,   656,   661,
     669,   670,   674,   673,   681,   680,   753,   758,   759,   771,
     772,   775,   776,   779,   789,   794,   802,   815,   846,   857,
     869,   868,   884,   894,   893,   910,   920,   930,   940,   953,
     954,   957,   965,   975,   986,  1001,  1002,  1014,  1016,  1015,
    1028,  1029,  1035,  1034,  1062,  1069,  1076,  1077,  1081,  1082,
    1085,  1098,  1097,  1149,  1161,  1160,  1181,  1186,  1193,  1198,
    1205,  1290,  1291,  1295,  1304,  1305,  1308,  1309,  1310,  1314,
    1315,  1319,  1347,  1349,  1351,  1353,  1368,  1373,  1378,  1386,
    1387,  1389,  1391,  1410,  1412,  1411,  1427,  1426,  1442,  1441,
    1457,  1500,  1514,  1528,  1542,  1554,  1558,  1559,  1560,  1561,
    1562,  1563,  1564,  1565,  1566,  1567,  1568,  1569,  1570,  1571,
    1572,  1574,  1576,  1578,  1580,  1581,  1584,  1587,  1588,  1592,
    1597,  1598,  1599,  1601,  1603,  1604,  1606,  1617,  1628,  1632,
    1638,  1642,  1648,  1652,  1658,  1663,  1667,  1675,  1673,  1700,
    1704,  1708,  1714,  1720,  1724,  1725,  1729,  1730,  1734,  1739,
    1740,  1741,  1746,  1747,  1748,  1749,  1750,  1754,  1755,  1756,
    1757,  1761,  1762,  1763,  1766,  1767,  1768,  1772,  1773,  1774,
    1775,  1776,  1777,  1781,  1782,  1783,  1787,  1788,  1792,  1793,
    1797,  1798,  1802,  1804,  1803,  1821,  1823,  1822,  1838,  1840,
    1849,  1839,  1864,  1865,  1869,  1870,  1880,  1881,  1885,  1893,
    1896,  1895,  1902,  1905,  1904,  1908,  1910,  1912,  1914,  1917,
    1923,  1952,  1967,  1980,  1982,  1983,  1987,  1989,  1993,  1995,
    2000,  1999,  2006,  2005,  2017,  2022,  2021,  2029,  2033,  2057,
    2083,  2081,  2109,  2107,  2217,  2226,  2225,  2229,  2228,  2233,
    2239,  2238,  2248,  2247,  2256,  2269,  2274,  2268,  2302,  2310,
    2315,  2309,  2344,  2351,  2367,  2366,  2379,  2395,  2406,  2412,
    2418,  2430,  2442,  2452,  2462,  2461,  2474,  2480,  2478,  2596,
    2603,  2619,  2621,  2623,  2623,  2624,  2627,  2629,  2631,  2628,
    2633,  2637,  2636,  2751,  2784,  2792,  2817,  2791,  2868,  2869,
    2870,  2871,  2873,  2874,  2882,  2883,  2891,  2892,  2901,  2904,
    2903,  2912,  2914,  2922,  2930,  2939,  2947,  2949,  2956,  2957,
    2968,  3004,  3041,  3082,  3099,  3081,  3140,  3147,  3154,  3153,
    3185,  3186,  3194,  3193,  3241,  3243,  3242,  3252,  3403,  3402,
    3550,  3556,  3559,  3575,  3579,  3583,  3590,  3591,  3595,  3595,
    3609,  3609,  3625,  3625,  3641,  3641,  3655,  3655,  3686,  3687,
    3688,  3691,  3697,  3696,  3706,  3705,  3723,  3722,  3770,  3785,
    3794,  3769,  3831,  3839,  3840,  3840,  3853,  3852,  3859,  3860,
    3861,  3867,  3868,  3872,  3876,  3884,  3888,  3892,  3900,  3901,
    3907,  3913,  3915,  3918,  3919,  3924,  3923,  4025,  4027,  4026,
    4081,  4085,  4089,  4090,  4094,  4109,  4118,  4133,  4142,  4146,
    4152,  4169,  4176,  4186,  4187,  4188,  4192,  4193,  4209,  4219,
    4225,  4233,  4239,  4247,  4253,  4261,  4266,  4273,  4274,  4275,
    4279,  4280,  4279,  4290,  4294,  4295,  4294,  4304,  4311,  4312,
    4315,  4315,  4396,  4394,  4408,  4485,  4582,  4583,  4587,  4588,
    4591,  4592,  4595,  4596,  4599,  4603,  4607,  4611,  4630,  4636,
    4638,  4641,  4642,  4651,  4652,  4657,  4656,  4665,  4675,  4676,
    4680,  4680,  4682,  4681,  4690,  4689,  4693,  4700,  4701,  4705,
    4705,  4707,  4706,  4713,  4712,  4716,  4725,  4821,  4826,  4831,
    4832,  4835,  4852,  4869,  4886,  4909,  4909,  4940,  4961,  4961,
    4984,  4983,  4999,  4998,  5014,  5013,  5030,  5031,  5034,  5036,
    5034,  5090,  5121,  5120,  5157,  5158,  5166,  5165,  5189,  5190,
    5194,  5193,  5232,  5231,  5254,  5254,  5281,  5282,  5285,  5306,
    5328,  5352,  5357,  5365,  5366,  5366,  5370,  5431,  5466,  5481,
    5524,  5533,  5534,  5542,  5543,  5544,  5545,  5546,  5547,  5550,
    5551,  5552,  5553,  5560,  5567,  5558,  5593,  5593,  5606,  5619,
    5620,  5624,  5637,  5638,  5645,  5650,  5657,  5658,  5659,  5664,
    5665,  5666,  5671,  5672,  5673,  5678,  5679,  5680,  5685,  5690,
    5691,  5702,  5713,  5724,  5728,  5735,  5736,  5793,  5799,  5798,
    5886,  5885,  5929,  5937,  5939,  5943,  5947,  5936,  5989,  5998,
    6002,  6009,  6011,  6015,  6008,  6053,  6063,  6065,  6069,  6062,
    6107,  6116,  6117,  6120,  6163,  6172,  6198,  6197,  6228,  6234,
    6235,  6238,  6239,  6243,  6248,  6273,  6282,  6334,  6359,  6387,
    6242,  6395,  6396,  6397,  6405,  6406,  6414,  6432,  6413,  6436,
    6440,  6441,  6448,  6449,  6450,  6456,  6457,  6458,  6463,  6464,
    6465,  6466,  6467,  6468,  6469
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
  "RWL_T_BITWISE_LEFT_SHIFT", "RWL_T_BITWISE_RIGHT_SHIFT", "'|'", "'^'",
  "'&'", "'='", "'<'", "'>'", "'-'", "'+'", "'*'", "'/'", "'%'", "'!'",
  "'~'", "RWL_T_UMINUS", "';'", "'('", "')'", "','", "'?'", "':'",
  "$accept", "rwlyparse", "terminator", "programelementlist", "$@1",
  "programelement", "globaldeclaration", "$@2", "$@3", "$@4", "$@5",
  "ranstringspec", "ranstringlist", "ranstringentry", "$@6",
  "ranidentifierspec", "ranidentifierlist", "ranidentifierentry", "$@7",
  "databasedeclaration", "$@8", "maybejustusername", "maybedbspeclist",
  "dbspeclist", "dbspec", "$@9", "$@10", "maybemarks", "eithermark",
  "maybemaxpoolsize", "mayberelease", "maybewait", "$@11",
  "maybethentimeoutaction", "$@12", "compiletime_expression",
  "compiletime_concatenation", "subroutinedeclaration", "isaccepted",
  "functionhead", "$@13", "procedurehead", "$@14", "maybeprivatefunction",
  "maybeprivateprocedure", "codebody", "printvarlist", "printvarelement",
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
     415,   416,   417,   418,   124,    94,    38,    61,    60,    62,
      45,    43,    42,    47,    37,    33,   126,   419,    59,    40,
      41,    44,    63,    58
};
# endif

#define YYPACT_NINF -967

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-967)))

#define YYTABLE_NINF -658

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -967,    96,   108,  -967,  3511,   -56,   141,  -967,   -56,   290,
    -967,  -967,  -967,   236,  1922,  1989,  -967,    51,  2153,   142,
     143,   388,  -967,   156,   158,   -38,  -967,   -56,  2220,   218,
    5599,   -56,   -56,   243,  1691,   -56,    41,   -56,   -56,  -967,
     -56,   379,   145,  -967,  -967,  -967,  -967,   181,   201,  2384,
      44,  -967,  -967,   132,  -967,   159,    52,  -967,  -967,  -967,
    -967,  -967,  -967,    62,   323,   323,   161,   163,  -967,  -967,
     -56,   303,   -56,  1527,  -967,   356,  -967,  -967,    50,   119,
     120,   165,  -967,    67,    73,   223,   -56,   -56,  1281,  2451,
     167,  -967,  -967,  2615,  -967,  -967,  5599,  -967,  -967,   -56,
    -967,  -967,   -56,  -967,   302,  -967,   -56,   276,   296,   279,
     365,   303,   -56,  5599,   -56,  5599,   428,   104,   606,   -38,
     318,   330,   335,   343,   347,   358,   397,   416,   -38,  -967,
     425,  5599,   429,   438,   441,   443,   444,   445,   448,   449,
     452,   462,   463,   464,  -967,   468,  -967,  -967,   472,   479,
     481,   484,   485,   486,   488,   489,   497,  5599,  5599,  5599,
    5599,   375,  -967,  -967,   189,   -41,   -28,   370,   248,   382,
     289,   317,   495,    29,  -967,   426,   -56,   -56,   -56,  -967,
     545,   656,   -56,  -967,   -56,  -967,   321,   -56,  -967,  2682,
     613,   487,   246,   212,  -967,  -967,   -56,  -967,   -56,  -967,
    5599,  -967,   -56,   415,   540,  -967,  -967,  -967,  -967,  -967,
    -967,  -967,   399,  -967,  -967,   173,  -967,   -56,   502,   505,
     506,   507,   -56,  5599,   -56,   549,  -967,   673,   625,   566,
    -967,   -56,   528,   -56,   568,  1457,   558,  -967,   -56,  -967,
    -967,  -967,  -967,  -967,  -967,  -967,  -967,   -56,  -967,   -56,
    -967,   571,  -967,   274,  -967,   -56,  -967,   691,    46,  -967,
      58,  -967,  3239,  3641,   -56,   298,  5599,  -967,   -56,   570,
     -56,   570,   -56,  -967,   315,  -967,   -56,   -56,   -56,  -967,
    -967,   -56,  -967,  -967,  -967,  -967,  -967,   -56,  5599,  -967,
    5599,  -967,   -56,  5375,  -967,   324,  -967,   -56,   570,   -56,
    5599,    43,  -967,  5599,  -967,   574,  -967,  -967,  -967,   669,
    -967,  -967,  5599,   660,   365,  -967,  -967,  -967,  -967,  -967,
     661,  2846,  -967,    60,  -967,  -967,  -967,  -967,  -967,  -967,
    -967,  -967,  -967,  -967,  -967,   543,   544,  5599,  5599,  5599,
    5599,  5599,  5599,  -967,  5599,  -967,  5599,  5599,  5599,    45,
    5599,  5599,  5599,  5599,   174,   179,   144,  5599,  -967,  5599,
    5599,  5599,  5599,  5599,  5599,  5599,  5599,  5599,  -967,  -967,
    -967,   546,   301,  5599,  5599,  5599,  5599,  5599,  5599,  5599,
    5599,  5599,  5599,  5599,  5599,  5599,  5599,  5599,  5599,  5599,
    -967,  -967,  -967,  5599,  -967,  -967,  -967,  -967,   552,   585,
     592,  -967,  -967,  -967,  -967,   -56,    75,  -967,  -967,  -967,
    -967,  -967,  -967,  -967,  -967,  -967,  -967,   -56,   -56,  5599,
    -967,  -967,   715,   716,   719,   599,  -967,  -967,  5599,   -56,
    -967,  5599,   -56,  -967,  -967,  -967,  -967,  -967,  -967,  -967,
    -967,  -967,  -967,  -967,   692,   602,   -56,  5599,  -967,  -967,
    -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,  2682,  -967,
    5599,  -967,   -56,   -56,   -56,  -967,  3771,  -967,  -967,   567,
    -967,   567,  -967,  -967,  -967,  -967,  -967,  -967,  -967,   259,
    -967,   667,  -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,
    -967,  -967,  5599,  -967,  3901,   -56,   -56,  -967,  -967,  -967,
      54,   305,   312,   408,   458,  -967,  -967,   674,    38,  -967,
    -967,  -967,   569,   682,   570,  -967,   315,  -967,   315,  -967,
     325,   570,  -967,  -967,  -967,  -967,  -967,  5599,  -967,   324,
     324,  -967,  -967,  -967,  -967,  -967,   315,  -967,  -967,   -56,
     608,   -56,   322,  -967,  -967,  -967,   552,  2913,   365,   682,
    -967,  -967,   660,   573,   575,  -967,  -967,  -967,  -967,  -967,
    -967,   -56,   731,  -967,   671,    56,  -967,  -967,  -967,     5,
     576,    32,    72,   124,    34,   225,    42,   577,   579,   580,
     581,  -967,   582,   169,   211,   227,   583,   584,   586,   587,
     588,   589,   591,   593,   594,  5599,   118,   229,   242,   254,
     265,   266,   198,   596,   597,  -967,  -967,   710,  -967,  -967,
    -967,   189,   189,   -41,   -41,   -28,   -28,   -15,   -28,   -28,
     370,   370,   248,   382,   289,  5599,  5599,  5599,  -967,   630,
     338,  -967,  -967,  -967,  -967,   -56,  -967,  -967,   -56,  -967,
    -967,   -56,   275,   640,   632,   639,  -967,  -967,   641,   682,
    -967,  5599,   682,  -967,   -56,  5308,  -967,  -967,  -967,  -967,
     604,   605,  -967,  -967,  -967,  -967,   607,  -967,  -967,  -967,
    -967,  -967,   109,   699,    -6,  5599,  5599,  5599,  5599,  -967,
    -967,  -967,  -967,  -967,  -967,  -967,  -967,  5599,  -967,   609,
      63,  -967,  -967,  4031,   -56,   -56,  -967,   -56,  -967,   -56,
     789,   790,   -56,  3077,  -967,  -967,   -56,   -56,   -56,  -967,
    -967,   757,   315,  -967,  -967,  -967,  -967,  -967,   607,  -967,
    -967,  5599,  -967,   612,  -967,  -967,  -967,  -967,  5532,  5599,
    5599,   745,  -967,  5599,  -967,  -967,  -967,  -967,  5599,  5599,
    5599,   -56,   322,  -967,    21,     3,   765,  -967,   660,  -967,
    -967,  5599,  5599,  -967,   661,   712,   655,   -56,   -56,  -967,
    -967,  -967,  5599,  5599,  -967,  -967,  5599,  -967,   620,  -967,
     659,  5599,  -967,  -967,  -967,  -967,  -967,  5599,  -967,  5599,
    -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,  5599,
     622,  5599,  -967,  -967,  -967,  -967,  -967,  5599,  -967,  -967,
    -967,  5599,   317,   495,   621,  -967,  -967,  -967,    48,    53,
    -967,  -967,  -967,  5599,  5599,   -56,  -967,  -967,  -967,   729,
    -967,  -967,  -967,  -967,  -967,   -56,  -967,  -967,  5308,  -967,
     626,  -967,  -967,   631,  -967,  -967,  -967,  -967,  -967,  -967,
    -967,    68,  5599,  5599,   627,  -967,  -967,  -967,  -967,  -967,
    -967,   262,  -967,   666,   476,  -967,  -967,  -967,  -967,   682,
     682,   682,   682,  4161,  5599,   -56,  -967,  -967,   -56,   -56,
    -967,  -967,    58,  -967,  -967,  -967,  -967,  5599,  -967,   -56,
     -56,  -967,   743,   520,  3369,  -967,  -967,  -967,  -967,  -967,
    5599,  -967,  5599,   -56,   670,  -967,  -967,  -967,  -967,  -967,
     398,  -967,  -967,  -967,  -967,  -967,   760,  -967,  -967,  -967,
    -967,   633,  4291,  -967,  4421,  -967,  -967,   -56,   675,  -967,
    -967,  -967,  -967,   271,   272,   273,  -967,   635,   215,   280,
     281,   362,  -967,   285,   286,   -28,  -967,   -56,   676,  -967,
     -56,   680,  -967,   682,   682,  -967,  -967,  -967,  5599,  -967,
    5599,  -967,  -967,    48,    53,  -967,  5599,  -967,   524,  -967,
     -56,   155,  -967,  -967,  -967,  -967,  5599,  -967,   476,  -967,
    -967,    65,   682,  -967,  -967,   -37,   628,  -967,  -967,  -967,
    4551,  -967,  -967,  -967,  -967,  -967,   570,  -967,  -967,  -967,
    -967,   398,   786,  -967,  -967,  -967,   786,  -967,  5599,  5599,
      -3,  -967,    65,    65,   552,   552,  -967,  -967,  4681,   740,
    -967,  -967,  -967,  -967,  -967,  5599,  -967,  -967,  -967,  5599,
    -967,  -967,  5599,  -967,  -967,   390,  -967,  -967,  -967,   413,
    -967,   793,   643,  -967,  5599,   643,  -967,   682,   643,  -967,
    -967,   682,    20,    40,  -967,  1758,    24,   -56,   -56,   -56,
    -967,  -967,  -967,   -56,   -56,   -56,   645,  -967,   -56,   -56,
    -967,  -967,  -967,  -967,  -967,  -967,    56,  4811,   315,   646,
    5599,   723,   723,  -967,  -967,  -967,  -967,  -967,  -967,  -967,
     338,   338,   808,  5599,   748,   287,   288,  -967,  5599,   -56,
     676,  5599,   -56,   680,  5599,  -967,  -967,   682,   -56,  -967,
    -967,  -967,  -967,   352,  -967,   -56,  -967,  -967,   354,  -967,
     -56,  -967,  5599,   -56,  -967,  -967,  -967,  -967,   373,  -967,
    -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,
     303,  -967,    71,  -967,  5599,  -967,  5599,   755,  -967,  4941,
     778,  -967,  -967,    71,  -967,  5599,  -967,  -967,  -967,  -967,
    -967,  -967,  -967,  -967,   682,  -967,   693,  -967,    66,    66,
      66,   369,  -967,  -967,    66,   -26,  -967,  -967,   -56,  -967,
      66,    66,    66,   386,  -967,  -967,   -56,   -56,  -967,  -967,
    -967,  -967,  5599,  -967,    65,  -967,  -967,  -967,  -967,  -967,
    -967,   724,  -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,
    -967,  -967,  -967,  -967,  -967,  -967,   652,  -967,  -967,   746,
    -967,   696,   773,  -967,   -56,   260,  -967,  -967,  -967,  -967,
     663,  5071,  -967,   775,  5599,  -967,   664,  -967,  -967,  5201,
     825,   110,   -56,   -56,  -967,  -967,  -967,  -967
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       4,     0,     5,     1,     0,     0,     0,   551,   552,     0,
      89,   440,   442,     0,     0,     0,   444,     0,     0,     0,
       0,     0,   585,     0,     0,    94,   360,   270,     0,   405,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    87,
       0,     0,     0,   634,   447,   448,   449,     0,     0,     0,
       0,   619,   620,     0,   386,     0,     0,   536,     3,   240,
       6,     8,    12,     0,    78,    78,     0,     0,     7,   343,
       0,   303,     0,     0,   311,     0,   226,   226,     0,     0,
       0,     0,   446,     0,     0,     0,     0,     0,     0,     0,
       0,   318,   320,     0,   321,   319,     0,     9,   347,     0,
      34,   335,     0,    93,     0,    91,     0,     0,   381,     0,
     603,   401,     0,     0,     0,     0,     0,     0,     0,    94,
       0,     0,     0,     0,     0,     0,     0,     0,    94,   125,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   124,   121,   123,   122,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   179,   182,   187,   191,   194,   197,   203,   206,   208,
     210,   212,   215,   218,   222,     0,     0,     0,     0,   610,
       0,     0,     0,   549,     0,   550,     0,     0,   338,     0,
       0,     0,     0,     0,   290,   291,     0,   340,     0,   274,
       0,   241,     0,     0,     0,   292,   242,   300,    88,   439,
     441,   443,     0,   584,    86,     0,   445,     0,     0,   354,
       0,   350,     0,     0,     0,     0,   539,     0,     0,     0,
     464,     0,     0,     0,   382,     0,     0,   544,     0,   116,
     114,   118,   113,    13,    79,   226,   226,     0,    81,     0,
      84,   378,   357,     0,   357,     0,   357,     0,   394,   226,
       0,   260,     0,     0,     0,     0,     0,   250,     0,     0,
       0,     0,     0,   415,     0,   413,     0,     0,     0,   595,
     243,     0,   558,   326,   540,   324,   322,     0,     0,   557,
       0,   328,     0,   224,   556,     0,   553,     0,     0,     0,
       0,     0,    36,    37,    10,     0,    11,   264,   315,     0,
     396,   308,     0,     0,   603,   402,   630,   627,   625,   622,
     668,     0,   643,     0,   639,   642,   641,   429,   435,   433,
     434,   428,   431,   432,   172,     0,     0,     0,     0,     0,
       0,     0,     0,   171,     0,   185,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   167,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   183,   184,
     186,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     213,   216,   219,     0,   430,   314,   313,   612,     0,     0,
       0,   333,   334,    95,   293,     0,     0,   271,   425,   424,
     406,   407,   283,   339,   278,   276,   296,     0,     0,     0,
     284,   294,     0,     0,     0,     0,   289,   352,     0,     0,
     348,     0,     0,   282,   280,   325,   538,   457,   397,   455,
     387,   323,   542,   346,     0,     0,     0,   174,   563,   566,
     564,   570,   571,   572,   567,   568,   565,   569,     0,   537,
       0,   120,     0,     0,     0,    77,     0,    76,    80,    96,
      83,    96,   374,   370,   368,   372,   379,   380,   344,   378,
     366,     0,   301,   403,   404,   304,   357,   305,   392,   608,
     607,   464,     0,   393,     0,     0,     0,   592,   259,   226,
       0,     0,     0,     0,     0,   227,   228,   420,     0,   254,
     437,   438,     0,    74,     0,   247,     0,   249,     0,   245,
     417,     0,   244,   598,   596,   597,   327,     0,   332,     0,
       0,   337,   225,   554,   336,   257,     0,   618,   614,     0,
       0,     0,    39,    38,    75,    92,     0,     0,   603,   604,
     358,   306,     0,     0,     0,   670,   674,   671,   673,   669,
     672,     0,     0,   656,     0,     0,   640,   169,   170,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   164,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   174,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   173,   180,     0,   188,   189,
     190,   193,   192,   195,   196,   200,   201,     0,   198,   199,
     205,   204,   207,   209,   211,     0,     0,     0,   223,     0,
       0,   631,    20,    16,   560,     0,   561,   559,     0,   287,
     288,     0,     0,     0,     0,     0,   453,   451,     0,   355,
     341,     0,   351,   342,     0,   460,   544,   383,   385,   299,
       0,   175,   176,   178,   273,   548,   545,   546,   117,   115,
     119,    90,     0,     0,   109,     0,     0,     0,     0,   226,
     365,   364,   363,   362,   367,   376,   302,     0,   389,     0,
       0,   594,   593,     0,     0,     0,   233,     0,   230,     0,
       0,     0,     0,     0,   423,   226,     0,     0,     0,   599,
     258,   436,     0,   246,   248,   416,   418,   414,   541,   331,
     330,     0,   256,     0,   269,   267,   635,   266,     0,     0,
       0,     0,    55,     0,    58,    59,    49,    48,     0,     0,
       0,     0,    40,    41,   603,     0,   576,   226,     0,   226,
     310,     0,     0,   638,   668,   660,     0,     0,     0,   665,
     637,   135,     0,     0,   150,   151,     0,   154,     0,   147,
       0,     0,   139,   166,   165,   144,   128,     0,   130,     0,
     134,   163,   162,   161,   160,   159,   157,   156,   158,     0,
       0,     0,   131,   132,   133,   136,   137,     0,   145,   146,
     181,     0,   214,   217,     0,   633,   611,   632,     0,     0,
     562,   277,   286,     0,     0,     0,   522,   520,   518,   515,
     524,   512,   513,   511,   517,     0,    18,    14,   460,   353,
       0,   349,   281,     0,   456,   459,   466,   458,   464,   605,
     543,     0,     0,     0,   104,   102,   103,   106,   108,   107,
      97,     0,    99,     0,     0,   111,   112,   110,    85,   375,
     371,   369,   373,     0,     0,   479,   466,   395,     0,     0,
     586,   312,     0,   236,   235,   226,   232,     0,   229,     0,
       0,   237,     0,     0,     0,   602,   600,   601,   252,   251,
       0,   555,     0,     0,     0,    46,    43,    44,    59,    53,
      56,    52,    50,    45,    35,    42,     0,   583,   582,   578,
     573,     0,     0,   309,     0,   628,   623,     0,     0,   226,
     644,   667,   666,     0,     0,     0,   149,     0,     0,     0,
       0,     0,   168,     0,     0,   202,   220,     0,     0,    21,
       0,     0,    17,   532,   531,   285,   528,   528,     0,   514,
       0,   528,   295,     0,     0,   452,     0,   606,     0,   462,
       0,     0,   408,   298,   177,   547,     0,    98,     0,   101,
      82,     0,   377,   480,   609,   398,     0,   588,   587,   261,
       0,   226,   238,   239,   427,   426,     0,   419,   615,   268,
      47,    57,    63,    62,    61,    60,    63,   316,     0,     0,
       0,   579,     0,     0,     0,     0,   659,   661,     0,   654,
     155,   126,   152,   148,   142,     0,   127,   129,   140,     0,
     153,   138,     0,    29,    32,     0,    30,    23,    26,     0,
      24,   534,   523,   526,     0,   521,   519,   516,   525,    19,
      15,   356,     0,     0,   461,     0,     0,   479,   479,   479,
     467,   466,   412,     0,     0,     0,     0,   100,     0,     0,
     589,   345,   399,   400,   390,   465,     0,     0,     0,     0,
       0,    65,    65,   226,   574,   581,   577,   580,   263,   359,
       0,     0,     0,     0,     0,     0,     0,   221,     0,     0,
       0,     0,     0,     0,     0,   533,   528,   529,     0,   505,
     499,   501,   503,   479,   497,     0,   487,   485,   479,   483,
       0,   482,     0,     0,   496,   490,   492,   494,   479,   488,
     474,   475,   476,   463,   411,   409,   410,   105,   591,   590,
     401,   234,     0,   253,     0,    64,     0,    67,    51,     0,
       0,   629,   624,     0,   655,     0,   143,   141,    33,    28,
      31,    27,    22,    25,   535,   527,     0,   469,     0,     0,
       0,     0,   468,   473,     0,     0,   472,   478,   479,   471,
       0,     0,     0,     0,   470,   391,     0,     0,   662,   231,
     616,    66,     0,    54,     0,   575,   658,   645,   530,   508,
     507,   509,   500,   506,   502,   504,   498,   486,   484,   477,
     491,   493,   495,   489,   664,   663,     0,    68,   317,     0,
     510,     0,    70,   646,     0,     0,    69,   226,   617,    71,
       0,     0,    72,     0,   174,   648,     0,   226,    73,     0,
       0,     0,     0,     0,   651,   650,   653,   652
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -967,  -967,    -5,  -967,  -967,  -967,  -967,  -967,  -967,  -967,
    -967,  -108,  -967,  -246,  -967,  -105,  -967,  -240,  -967,  -967,
    -967,  -967,  -967,  -967,   111,  -967,  -967,   -46,  -967,  -142,
    -217,  -967,  -967,  -967,  -967,  -251,  -290,  -967,   791,  -967,
    -967,  -967,  -967,  -967,  -967,   611,  -967,   553,   255,   391,
    -967,  -109,    11,  -967,  -967,  -967,  -967,  -967,  -967,  -967,
    -585,  -967,    26,  -967,   210,   -97,   228,  -365,   226,   482,
     478,   483,   245,   247,  -967,  -967,  -967,  -388,  -967,  -967,
     238,   432,   -70,  -967,  -967,  -967,   867,  -967,  -967,  -967,
    -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,
    -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,
    -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,  -216,
    -528,  -967,  -967,  -967,  -967,  -967,   401,  -967,  -967,  -967,
    -967,  -967,  -967,   863,  -967,  -967,   864,  -967,   769,  -967,
    -967,  -967,  -967,  -967,  -967,  -967,  -967,  -249,   811,  -967,
    -967,  -267,   363,  -967,  -967,  -967,  -967,  -967,  -967,  -967,
    -967,   708,  -967,  -967,   -71,  -967,  -967,  -967,  -967,   -40,
    -967,  -967,  -967,  -967,  -967,    59,  -967,  -967,  -967,  -967,
    -471,  -165,    55,  -967,  -719,  -967,  -967,  -276,  -967,  -967,
    -280,  -967,  -967,  -967,  -967,  -266,  -967,  -967,  -967,  -598,
    -967,  -967,  -967,  -967,  -967,  -967,  -967,  -832,  -200,  -967,
    -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,
    -967,   241,  -967,   371,    57,  -967,  -967,  -174,  -967,   178,
    -272,   529,   446,  -967,   381,  -967,  -967,  -967,  -967,  -967,
    -967,   -98,  -967,  -967,  -967,  -966,    31,  -967,  -967,  -300,
    -967,   647,  -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,
    -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,  -535,
    -618,  -967,    13,  -967,  -967,  -967,   595,  -967,  -967,  -967,
    -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,
    -967,  -236,  -158,   166
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    59,     2,     4,    60,    61,   954,   809,   953,
     808,   942,  1029,  1030,  1091,   939,  1025,  1026,  1088,    62,
     303,   542,   741,   742,   743,   996,   992,   900,   995,  1071,
    1137,  1183,  1212,  1216,  1224,   512,   833,    63,   245,    64,
     469,    65,   471,    66,    67,   465,   104,   105,   187,   673,
     851,   852,   853,   858,   243,   463,   462,   464,   161,   595,
     660,   661,   662,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   625,   173,   626,   174,   627,  1022,
     293,   544,   466,   505,   877,   875,   506,   514,   986,   298,
     499,   309,   541,   893,   189,   236,   200,   638,   223,   654,
     642,   643,   447,   254,   109,   548,   259,   546,  1073,   290,
     251,   679,   221,   651,   432,   219,   648,   429,   830,   482,
     551,   749,    69,   478,   683,   479,   480,   677,   676,   678,
     675,   864,   481,    70,   444,   445,    71,   230,    72,   258,
     866,  1130,   491,   492,    73,   228,  1064,   314,   315,    74,
     963,   274,   275,   520,   715,   890,    75,   704,   507,    76,
     705,   332,    77,   333,   267,    78,    79,    80,    81,    82,
      83,   425,   828,   229,   655,   834,   835,   836,   837,  1051,
     440,   975,   976,  1050,   974,  1112,  1108,  1109,  1164,  1118,
    1119,  1170,  1171,  1172,  1103,  1104,  1158,  1159,  1160,  1192,
    1193,   825,   950,   948,   947,   946,   951,  1032,  1033,  1034,
    1156,   815,  1031,  1095,    84,   237,    85,    86,   527,    87,
     656,   459,   460,   666,   667,    88,    89,   295,   721,   296,
     291,   283,   407,   637,   457,   458,   747,   998,  1140,   911,
    1000,  1001,   909,    90,   871,  1061,   498,   280,   710,   313,
     838,   839,   687,    91,   398,    92,   300,   723,  1069,  1206,
      93,    94,   115,   554,  1005,    95,   113,   553,  1004,   630,
     631,    96,   727,    97,   117,   323,   324,   325,   564,  1009,
    1209,  1217,  1223,  1227,  1230,  1235,  1084,   326,   755,  1082,
     919,  1179,   760,   561
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      98,   216,   516,   101,   518,   628,   262,   263,   269,   271,
     790,   744,   807,   543,   552,   615,   616,   617,   618,   619,
     688,  1098,   188,   534,   750,  1113,   194,   195,   197,   199,
     201,   536,   205,   206,   345,   207,  1078,  1079,   485,   706,
     487,  1105,   202,   768,   539,   224,   579,   203,   801,   937,
    1076,   264,   116,   233,   940,   694,   907,   757,   242,   495,
     368,   369,   370,   238,   868,   252,  1058,   256,   276,   960,
     563,   393,  1176,  1189,   281,   707,   635,   239,   279,   282,
     565,   282,   282,   289,   312,   265,  -636,   489,   855,   856,
     758,   708,  1062,   391,   302,   321,     3,   304,   393,   306,
     393,   307,  1190,  1106,  -272,  1063,  1177,   316,    -2,   318,
     225,  1232,  -272,  -272,   529,  1035,   530,  1107,  1059,  1038,
     268,   270,    58,  -272,   695,   496,   807,   844,   845,   376,
     377,  -272,  -272,   227,   378,   379,   234,   869,   393,   321,
     846,   186,    99,   176,   178,   590,   857,   378,   379,  1099,
     847,   217,   961,  1114,   265,   265,  1053,   182,   240,   184,
     231,  1100,   247,  1101,   249,  1115,   272,  1116,   297,  1106,
     204,   395,   396,   397,   424,   586,   490,   401,   999,   402,
     588,    58,   404,  1107,   393,   761,   226,   580,   412,   494,
     393,   413,  -436,   414,   591,   592,   277,   416,  -272,  -272,
    -272,  -636,   629,  1102,   241,  1054,  -396,  1117,  1191,   278,
     322,   392,   426,   763,   848,   766,    58,   433,  1208,   435,
     913,  -265,   769,   770,   540,   581,   441,   938,   443,   266,
    -381,   235,   941,   461,    58,   393,    58,   106,   849,   804,
      58,    58,   468,    58,   470,    58,    58,   712,   748,    58,
     486,    58,   764,    58,   322,   497,   175,   719,   720,   509,
    1233,  -436,  -436,   515,   393,   517,   191,   519,   193,   522,
     686,   523,   524,   525,  -454,   107,   526,   393,   393,   611,
     612,   393,   528,   100,   177,   179,   593,   531,    58,   850,
     289,   393,   535,   393,   537,   393,   410,  1055,   183,   791,
     185,   232,   192,   248,   765,   250,   696,   273,   393,  -255,
     385,  -361,   680,   698,  -361,  -450,   587,  -361,  -361,  -361,
     393,   589,   813,   218,   483,   728,   729,   730,  1120,  1121,
    1122,   393,   393,   681,   472,  -361,  -361,   393,   393,   393,
     473,   474,   475,   220,   102,  1219,   393,   393,  -262,   776,
     777,   393,   393,   393,   393,   510,   606,   731,   476,   477,
     607,   373,   374,   375,   814,  -307,    54,   959,   732,   733,
     734,   735,   736,   737,   334,   697,   260,   448,   108,   797,
     234,   244,   699,   343,  1162,   449,   450,   253,   411,  1166,
      58,   778,   779,   196,   208,  1014,  1015,   209,   210,  1174,
     634,   636,  1220,   180,   284,   767,   181,   780,   310,   792,
     211,   738,   639,   640,   422,   386,   484,   423,   308,   212,
     213,    58,   793,   700,   650,   261,   701,   653,   312,   693,
     380,   381,   103,   372,   794,   382,   935,    58,   895,   896,
     897,   659,   967,   968,   906,   795,   796,   511,   320,  1199,
     903,  1010,  1011,  1012,   388,   739,   740,   668,   669,   670,
    1016,  1017,   807,   807,   216,  1020,  1021,  1146,  1147,  1080,
    1081,   454,   455,   456,   682,   214,   209,   210,   702,   327,
      58,   389,   899,   305,    44,    45,    46,   901,   902,   211,
     691,   692,   393,    58,   844,   845,   521,   335,  1099,   213,
     331,   403,    58,   709,   513,   533,   417,   846,   215,   336,
    1100,   713,  1101,   714,   337,  1114,    58,   847,   418,   629,
     993,   294,   338,   994,   289,   289,   339,  1115,   301,  1116,
      58,   722,    58,  1161,   724,  1165,   726,   340,   383,   384,
    1042,  1043,  1018,  1019,  1044,   317,  1045,   319,   387,   419,
     549,    58,  1102,   393,  1173,   409,   753,   420,   390,   513,
     759,  1194,  1195,    44,    45,    46,  1197,   399,  1046,  1117,
    1089,  1090,  1200,  1201,  1202,   569,   341,   571,   572,   573,
     574,   848,   575,   608,   609,   610,   393,   215,   985,   583,
     584,   585,   371,  1092,  1093,   342,  1047,   596,   597,   598,
     599,   600,   601,   602,   344,   849,   613,   614,   346,   863,
     448,   620,   621,  1048,  1049,   285,   286,   347,   449,   450,
     348,   406,   349,   350,   351,   806,   981,   352,   353,   451,
     810,   354,   415,   811,  1087,   884,   812,   452,   453,  1226,
     888,   355,   356,   357,  1042,  1043,   472,   358,  1065,   832,
    1045,   359,   473,   474,   475,   434,   816,   817,   360,   327,
     361,   818,   819,   362,   363,   364,   649,   365,   366,   652,
     476,   477,  1046,   328,   329,   330,   367,   912,   400,   914,
     331,   408,   421,   427,   820,   870,   428,   430,   431,   873,
     874,   436,   876,   437,   878,   555,   556,   881,   557,   438,
    1047,   885,   886,   887,   454,   455,   456,   889,   439,   442,
    -384,   488,   273,   550,   558,  1056,   103,  1048,  1049,  1068,
     294,   547,   294,   567,   568,   532,   605,   632,   559,   821,
     822,   823,   538,   629,   633,   560,   904,   644,   645,   646,
     908,   647,   657,   824,   658,   685,   672,   703,   393,   711,
     725,   754,   921,   922,   751,   756,   752,   762,   771,   772,
     773,   774,   775,   781,   782,   800,   783,   784,   785,   786,
     570,   787,   805,   788,   826,   789,   798,   799,   576,   577,
     578,   827,   582,   829,   841,   854,   842,   867,   843,   594,
     879,   880,   265,   892,   898,   910,   918,   920,   603,   604,
     926,   927,   932,   949,   936,   980,   966,   956,   969,   957,
     945,   984,   990,   997,   999,  1013,  1070,  1007,  1024,  1135,
     952,  1028,  1083,  1094,  1096,  1127,  1136,  1134,  1143,  1145,
    1182,  1185,  1144,  1211,  1210,  1188,   962,  1148,  1214,  1213,
    1151,  1215,  1222,  1225,  1228,  1231,  1040,  1153,  1039,  1008,
    1150,   641,   991,   905,  1072,  1138,   246,   467,   545,  1057,
     973,  1168,   674,   977,   978,   970,   623,   497,   964,   622,
     802,    68,   624,   803,   982,   983,   110,   111,   311,   663,
     684,  1175,   255,   394,   717,  1181,  1123,   955,   726,  1198,
     406,   958,   665,  1203,  1187,  1196,  1155,   840,   718,   891,
     965,   716,  1077,   979,   664,   493,   989,  1186,  1131,     0,
       0,  1067,  1006,   859,   860,   861,   862,     0,   566,     0,
     917,     0,     0,     0,   689,     0,     0,     0,     0,     0,
       0,  1207,  1023,     0,     0,  1027,     0,     0,     0,     0,
       0,   883,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1052,     0,     0,     0,   665,
       0,     0,     0,     0,     0,     0,  1060,     0,     0,     0,
       0,   513,     0,     0,     0,     0,   513,   513,     0,   746,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1060,  1060,     0,
     923,   924,     0,  1139,   925,     0,     0,     0,     0,   928,
       0,     0,     0,     0,     0,   929,     0,   930,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   663,     0,   933,
       0,     0,     0,     0,     0,   934,     0,     0,     0,     0,
       0,     0,   973,   973,   973,     0,     0,     0,  1124,  1125,
    1126,   943,   944,  1128,  1129,     0,     0,     0,     0,     0,
       0,   759,     0,  1133,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1141,  1142,     0,     0,     0,
       0,     0,     0,   831,  1149,     0,     0,  1152,     0,     0,
       0,     0,     0,  1157,     0,     0,     0,     0,   973,     0,
    1163,     0,   972,   973,     0,  1167,     0,     0,  1169,     0,
       0,     0,     0,   973,     0,   513,     0,     0,     0,   865,
       0,     0,     0,     0,     0,     0,     0,  1178,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1178,     0,
       0,     0,     0,     0,     0,     0,     0,  1221,     0,     0,
       0,     0,     0,   294,     0,     0,     0,  1229,     0,     0,
       0,     0,     0,   973,     0,     0,     0,     0,     0,     0,
       0,  1204,  1205,     0,     0,     0,     0,     0,     0,  1060,
       0,     0,     0,   915,   916,     0,     0,     0,  1037,     0,
       0,     0,     0,     0,  1041,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   513,     0,     0,     0,     0,  1218,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   931,     0,     0,     0,     0,  1234,  1236,  1237,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1085,     0,     0,     0,  1086,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1097,     0,   663,   665,     0,     0,     0,     0,
       0,     0,   287,     0,     0,     0,     0,     0,  -329,  -329,
       0,     0,     0,     0,     0,  -329,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -329,  -329,     0,   513,  -329,
    -329,     0,     0,  -329,  -329,     0,     0,  -329,     0,     0,
       0,   513,   987,     0,   988,     0,   513,     0,     0,   513,
       0,     0,  1154,     0,     0,     0,  -329,  -329,     0,     0,
    -329,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     513,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   513,     0,     0,     0,     0,     0,
    1036,     0,     0,   513,     0,  -329,     0,     0,     0,     0,
       0,     0,     0,     0,  -329,     0,  -329,  -329,  -329,  -329,
    -329,  -329,  -329,     0,     0,  -329,     0,     0,     0,  -329,
       0,     0,     0,  -329,     0,     0,     0,     0,     0,     0,
     513,     0,  -329,  -329,  -329,  -329,     0,     0,     0,     0,
    1074,  1075,  -329,     0,  -329,  -329,  -329,     0,  -329,  -329,
    -329,  -329,  -329,     0,     0,     0,     0,     0,     0,     0,
       0,  -329,     0,     0,     0,     0,  -329,  -329,   446,    58,
    -329,     0,   288,     0,  -297,  -297,     0,     0,     0,     0,
       0,  -297,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -297,  -297,     0,     0,  -297,  -297,     0,     0,  -297,
    -297,     0,     0,  -297,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -297,  -297,     0,     0,  -297,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   257,     0,
       0,     0,     0,     0,  -388,  -388,     0,     0,     0,     0,
       0,  -388,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -388,  -388,     0,     0,  -388,  -388,     0,     0,  -388,
    -388,  -297,     0,  -388,     0,     0,  1180,     0,  -388,     0,
    -297,     0,  -297,  -297,  -297,  -297,  -297,  -297,  -297,     0,
       0,  -297,  -388,  -388,     0,  -297,  -388,     0,     0,  -297,
       0,     0,     0,     0,     0,     0,     0,     0,  -297,  -297,
    -297,  -297,     0,     0,     0,     0,     0,     0,  -297,     0,
    -297,  -297,  -297,     0,  -297,  -297,  -297,  -297,  -297,     0,
       0,     0,     0,     0,     0,     0,     0,  -297,     0,     0,
       0,  -388,  -297,  -297,     0,     0,  -297,  -297,     0,     0,
    -388,     0,  -388,  -388,  -388,  -388,  -388,  -388,  -388,     0,
       0,  -388,     0,     0,     0,  -388,   663,  -388,     0,  -388,
       0,     0,     0,     0,     0,     0,     0,     0,  -388,  -388,
    -388,  -388,     0,     0,     0,     0,     0,     0,  -388,     0,
    -388,  -388,  -388,     0,  -388,  -388,  -388,  -388,  -388,     0,
       0,     0,   198,     0,     0,     0,     0,  -388,  -275,  -275,
       0,     0,  -388,  -388,     0,  -275,  -388,     0,     0,     0,
       0,     0,     0,     0,     0,  -275,  -275,     0,     0,  -275,
    -275,     0,     0,  -275,  -275,     0,     0,  -275,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -275,  -275,     0,     0,
    -275,     0,     0,     0,     0,     0,     0,     0,     0,  1110,
       0,     0,     0,     0,     0,  -481,  -481,     0,     0,     0,
       0,     0,  -481,     0,     0,  1111,     0,     0,     0,     0,
       0,     0,  -481,  -481,     0,     0,  -481,  -481,     0,     0,
    -481,  -481,     0,     0,  -481,  -275,     0,     0,     0,     0,
       0,     0,     0,     0,  -275,     0,  -275,  -275,  -275,  -275,
    -275,  -275,  -275,  -481,  -481,  -275,     0,  -481,     0,  -275,
       0,     0,     0,  -275,     0,     0,     0,     0,     0,     0,
       0,     0,  -275,  -275,  -275,  -275,     0,     0,     0,     0,
       0,     0,  -275,     0,  -275,  -275,  -275,     0,  -275,  -275,
    -275,  -275,  -275,     0,     0,     0,     0,     0,     0,     0,
       0,  -275,  -481,     0,     0,     0,  -275,  -275,     0,    58,
    -275,  -481,     0,  -481,  -481,  -481,  -481,  -481,  -481,  -481,
       0,     0,  -481,     0,     0,     0,  -481,     0,     0,     0,
    -481,     0,     0,     0,     0,     0,     0,     0,     0,  -481,
    -481,  -481,  -481,     0,     0,     0,     0,     0,     0,  -481,
       0,  -481,  -481,  -481,     0,  -481,  -481,  -481,  -481,  -481,
       0,     0,     0,   112,     0,     0,     0,     0,  -481,  -626,
    -626,     0,     0,  -481,  -481,     0,  -626,  -481,     0,     0,
       0,     0,     0,     0,     0,     0,  -626,  -626,     0,     0,
    -626,  -626,     0,     0,  -626,  -626,     0,     0,  -626,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -626,  -626,     0,
       0,  -626,     0,     0,     0,     0,     0,     0,     0,     0,
     114,     0,     0,     0,     0,     0,  -621,  -621,     0,     0,
       0,     0,     0,  -621,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -621,  -621,     0,     0,  -621,  -621,     0,
       0,  -621,  -621,     0,     0,  -621,  -626,     0,     0,     0,
       0,     0,     0,     0,     0,  -626,     0,  -626,  -626,  -626,
    -626,  -626,  -626,  -626,  -621,  -621,  -626,     0,  -621,     0,
    -626,     0,     0,     0,  -626,     0,     0,     0,     0,     0,
       0,     0,     0,  -626,  -626,  -626,  -626,     0,     0,     0,
       0,     0,     0,  -626,     0,  -626,  -626,  -626,     0,  -626,
    -626,  -626,  -626,  -626,     0,     0,     0,     0,     0,     0,
       0,     0,  -626,  -621,     0,     0,     0,  -626,  -626,     0,
       0,  -626,  -621,     0,  -621,  -621,  -621,  -621,  -621,  -621,
    -621,     0,     0,  -621,     0,     0,     0,  -621,     0,     0,
       0,  -621,     0,     0,     0,     0,     0,     0,     0,     0,
    -621,  -621,  -621,  -621,     0,     0,     0,     0,     0,     0,
    -621,     0,  -621,  -621,  -621,     0,  -621,  -621,  -621,  -621,
    -621,     0,     0,     0,   118,     0,     0,     0,     0,  -621,
     119,   120,     0,     0,  -621,  -621,     0,   121,  -621,     0,
       0,     0,     0,     0,     0,     0,     0,   122,   123,     0,
       0,   124,   125,     0,     0,   126,   127,     0,     0,   128,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   129,   130,
       0,     0,   131,     0,     0,     0,     0,     0,     0,     0,
       0,   190,     0,     0,     0,     0,     0,   119,   120,     0,
       0,     0,     0,     0,   121,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   122,   123,     0,     0,   124,   125,
       0,     0,   126,   127,     0,     0,   128,   132,     0,     0,
       0,     0,     0,     0,     0,     0,   133,     0,   134,   135,
     136,   137,   138,   139,   140,   129,   130,   141,     0,   131,
       0,   142,     0,     0,     0,   143,     0,     0,     0,     0,
       0,     0,     0,     0,   144,   145,   146,   147,     0,     0,
       0,     0,     0,     0,   148,     0,   149,   150,   151,     0,
     152,   153,   154,   155,   156,     0,     0,     0,     0,     0,
       0,     0,     0,   157,   132,     0,     0,     0,   158,   159,
       0,     0,   160,   133,     0,   134,   135,   136,   137,   138,
     139,   140,     0,     0,   141,     0,     0,     0,   142,     0,
       0,     0,   143,     0,     0,     0,     0,     0,     0,     0,
       0,   144,   145,   146,   147,     0,     0,     0,     0,     0,
       0,   148,     0,   149,   150,   151,     0,   152,   153,   154,
     155,   156,     0,     0,     0,   222,     0,     0,     0,     0,
     157,  -279,  -279,     0,     0,   158,   159,     0,  -279,   160,
       0,     0,     0,     0,     0,     0,     0,     0,  -279,  -279,
       0,     0,  -279,  -279,     0,     0,  -279,  -279,     0,     0,
    -279,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -279,
    -279,     0,     0,  -279,     0,     0,     0,     0,     0,     0,
       0,     0,   292,     0,     0,     0,     0,     0,   119,   120,
       0,     0,     0,     0,     0,   121,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   122,   123,     0,     0,   124,
     125,     0,     0,   126,   127,     0,     0,   128,  -279,     0,
       0,     0,     0,     0,     0,     0,     0,  -279,     0,  -279,
    -279,  -279,  -279,  -279,  -279,  -279,   129,   130,  -279,     0,
     131,     0,  -279,     0,     0,     0,  -279,     0,     0,     0,
       0,     0,     0,     0,     0,  -279,  -279,  -279,  -279,     0,
       0,     0,     0,     0,     0,  -279,     0,  -279,  -279,  -279,
       0,  -279,  -279,  -279,  -279,  -279,     0,     0,     0,     0,
       0,     0,     0,     0,  -279,   132,     0,     0,     0,  -279,
    -279,     0,     0,  -279,   133,     0,   134,   135,   136,   137,
     138,   139,   140,     0,     0,   141,     0,     0,     0,   142,
       0,     0,     0,   143,     0,     0,     0,     0,     0,     0,
       0,     0,   144,   145,   146,   147,     0,     0,     0,     0,
       0,     0,   148,     0,   149,   150,   151,     0,   152,   153,
     154,   155,   156,     0,     0,     0,   299,     0,     0,     0,
       0,   157,  -613,  -613,     0,     0,   158,   159,     0,  -613,
     160,     0,     0,     0,     0,     0,     0,     0,     0,  -613,
    -613,     0,     0,  -613,  -613,     0,     0,  -613,  -613,     0,
       0,  -613,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -613,  -613,     0,     0,  -613,     0,     0,     0,     0,     0,
       0,     0,     0,   405,     0,     0,     0,     0,     0,   119,
     120,     0,     0,     0,     0,     0,   121,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   122,   123,     0,     0,
     124,   125,     0,     0,   126,   127,     0,     0,   128,  -613,
       0,     0,     0,     0,     0,     0,     0,     0,  -613,     0,
    -613,  -613,  -613,  -613,  -613,  -613,  -613,   129,   130,  -613,
       0,   131,     0,  -613,     0,     0,     0,  -613,     0,     0,
       0,     0,     0,     0,     0,     0,  -613,  -613,  -613,  -613,
       0,     0,     0,     0,     0,     0,  -613,     0,  -613,  -613,
    -613,     0,  -613,  -613,  -613,  -613,  -613,     0,     0,     0,
       0,     0,     0,     0,     0,  -613,   132,     0,     0,     0,
    -613,  -613,     0,     0,  -613,   133,     0,   134,   135,   136,
     137,   138,   139,   140,     0,     0,   141,     0,     0,     0,
     142,     0,     0,     0,   143,     0,     0,     0,     0,     0,
       0,     0,     0,   144,   145,   146,   147,     0,     0,     0,
       0,     0,     0,   148,     0,   149,   150,   151,     0,   152,
     153,   154,   155,   156,     0,     0,     0,   562,     0,     0,
       0,     0,   157,   119,   120,     0,     0,   158,   159,     0,
     121,   160,     0,     0,     0,     0,     0,     0,     0,     0,
     122,   123,     0,     0,   124,   125,     0,     0,   126,   127,
       0,     0,   128,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   129,   130,     0,     0,   131,     0,     0,     0,     0,
       0,     0,     0,     0,   745,     0,     0,     0,     0,     0,
     119,   120,     0,     0,     0,     0,     0,   121,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   122,   123,     0,
       0,   124,   125,     0,     0,   126,   127,     0,     0,   128,
     132,     0,     0,     0,     0,     0,     0,     0,     0,   133,
       0,   134,   135,   136,   137,   138,   139,   140,   129,   130,
     141,     0,   131,     0,   142,     0,     0,     0,   143,     0,
       0,     0,     0,     0,     0,     0,     0,   144,   145,   146,
     147,     0,     0,     0,     0,     0,     0,   148,     0,   149,
     150,   151,     0,   152,   153,   154,   155,   156,     0,     0,
       0,     0,     0,     0,     0,     0,   157,   132,     0,     0,
       0,   158,   159,     0,     0,   160,   133,     0,   134,   135,
     136,   137,   138,   139,   140,     0,     0,   141,     0,     0,
       0,   142,     0,     0,     0,   143,     0,     0,     0,     0,
       0,     0,     0,     0,   144,   145,   146,   147,     0,     0,
       0,     0,     0,     0,   148,     0,   149,   150,   151,     0,
     152,   153,   154,   155,   156,     0,     0,     0,   882,     0,
       0,     0,     0,   157,   119,   120,     0,     0,   158,   159,
       0,   121,   160,     0,     0,     0,     0,     0,     0,     0,
       0,   122,   123,     0,     0,   124,   125,     0,     0,   126,
     127,     0,     0,   128,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   129,   130,     0,     0,   131,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   132,     0,     0,     0,     0,     0,     0,     0,     0,
     133,     0,   134,   135,   136,   137,   138,   139,   140,     0,
       0,   141,     0,     0,     0,   142,     0,     0,     0,   143,
       0,     0,     0,     0,     0,     0,     0,     0,   144,   145,
     146,   147,     0,     0,     0,     0,     0,     0,   148,     0,
     149,   150,   151,     0,   152,   153,   154,   155,   156,     0,
       5,     0,     0,     0,     0,   500,     0,   157,     7,     8,
       0,     0,   158,   159,     0,     0,   160,    11,    12,  -422,
      13,     0,     0,     0,     0,    14,    15,     0,     0,     0,
      16,     0,     0,   501,   502,     0,    18,    19,    20,   503,
      22,    23,    24,     0,    25,     0,     0,     0,     0,     0,
       0,     0,    26,     0,    27,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,     0,  -422,     0,
       0,     0,  -422,    29,    30,    31,    32,     0,     0,     0,
       0,     0,     0,     0,    33,    34,    35,    36,     0,     0,
       0,    37,     0,     0,    38,     0,     0,    40,     0,     0,
     504,     0,    42,    43,    44,    45,    46,    47,    48,     0,
      49,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    50,     0,     0,    51,    52,     0,    53,    54,
       5,     0,     0,     0,     0,   500,     0,    55,     7,     8,
       0,    56,     0,     0,    57,     0,     0,    11,    12,  -421,
      13,     0,     0,     0,     0,    14,    15,     0,     0,     0,
      16,     0,     0,   501,   502,     0,    18,    19,    20,   503,
      22,    23,    24,     0,    25,     0,     0,    58,     0,     0,
       0,     0,    26,     0,    27,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,     0,  -421,     0,
       0,     0,  -421,    29,    30,    31,    32,     0,     0,     0,
       0,     0,     0,     0,    33,    34,    35,    36,     0,     0,
       0,    37,     0,     0,    38,     0,     0,    40,     0,     0,
     504,     0,    42,    43,    44,    45,    46,    47,    48,     0,
      49,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    50,     0,     0,    51,    52,     0,    53,    54,
       0,     0,     0,     0,     0,     0,     0,    55,     0,     0,
       0,    56,     5,     0,    57,     0,     0,     6,     0,     0,
       7,     8,     9,     0,     0,     0,    10,     0,     0,    11,
      12,     0,    13,     0,     0,     0,     0,    14,    15,     0,
       0,     0,    16,     0,     0,    17,     0,    58,    18,    19,
      20,    21,    22,    23,    24,     0,    25,     0,     0,     0,
       0,     0,     0,     0,    26,     0,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,     0,
       0,     0,     0,     0,     0,    29,    30,    31,    32,     0,
       0,     0,     0,     0,     0,     0,    33,    34,    35,    36,
       0,     0,     0,    37,     0,     0,    38,    39,     0,    40,
       0,     0,    41,     0,    42,    43,    44,    45,    46,    47,
      48,     0,    49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,    51,    52,     0,
      53,    54,     5,     0,     0,     0,     0,   500,     0,    55,
       7,     8,     0,    56,     0,     0,    57,     0,     0,    11,
      12,   508,    13,     0,     0,     0,     0,    14,    15,     0,
       0,     0,    16,     0,     0,   501,   502,     0,    18,    19,
      20,   503,    22,    23,    24,     0,    25,     0,     0,    58,
       0,     0,     0,     0,    26,     0,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,     0,
       0,     0,     0,     0,     0,    29,    30,    31,    32,     0,
       0,     0,     0,     0,     0,     0,    33,    34,    35,    36,
       0,     0,     0,    37,     0,     0,    38,     0,     0,    40,
       0,     0,   504,     0,    42,    43,    44,    45,    46,    47,
      48,     0,    49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,    51,    52,     0,
      53,    54,     5,     0,     0,     0,     0,   500,     0,    55,
       7,     8,     0,    56,     0,     0,    57,     0,     0,    11,
      12,   671,    13,     0,     0,     0,     0,    14,    15,     0,
       0,     0,    16,     0,     0,   501,   502,     0,    18,    19,
      20,   503,    22,    23,    24,     0,    25,     0,     0,    58,
       0,     0,     0,     0,    26,     0,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,     0,
       0,     0,     0,     0,     0,    29,    30,    31,    32,     0,
       0,     0,     0,     0,     0,     0,    33,    34,    35,    36,
       0,     0,     0,    37,     0,     0,    38,     0,     0,    40,
       0,     0,   504,     0,    42,    43,    44,    45,    46,    47,
      48,     0,    49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,    51,    52,     0,
      53,    54,     5,     0,     0,     0,     0,   500,     0,    55,
       7,     8,     0,    56,     0,     0,    57,     0,     0,    11,
      12,   690,    13,     0,     0,     0,     0,    14,    15,     0,
       0,     0,    16,     0,     0,   501,   502,     0,    18,    19,
      20,   503,    22,    23,    24,     0,    25,     0,     0,    58,
       0,     0,     0,     0,    26,     0,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,     0,
       0,     0,     0,     0,     0,    29,    30,    31,    32,     0,
       0,     0,     0,     0,     0,     0,    33,    34,    35,    36,
       0,     0,     0,    37,     0,     0,    38,     0,     0,    40,
       0,     0,   504,     0,    42,    43,    44,    45,    46,    47,
      48,     0,    49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,    51,    52,     0,
      53,    54,     5,     0,     0,     0,     0,   500,     0,    55,
       7,     8,     0,    56,     0,     0,    57,     0,     0,    11,
      12,   872,    13,     0,     0,     0,     0,    14,    15,     0,
       0,     0,    16,     0,     0,   501,   502,     0,    18,    19,
      20,   503,    22,    23,    24,     0,    25,     0,     0,    58,
       0,     0,     0,     0,    26,     0,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,     0,
       0,     0,     0,     0,     0,    29,    30,    31,    32,     0,
       0,     0,     0,     0,     0,     0,    33,    34,    35,    36,
       0,     0,     0,    37,     0,     0,    38,     0,     0,    40,
       0,     0,   504,     0,    42,    43,    44,    45,    46,    47,
      48,     0,    49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,    51,    52,     0,
      53,    54,     5,     0,     0,     0,     0,   500,     0,    55,
       7,     8,     0,    56,     0,     0,    57,     0,     0,    11,
      12,   971,    13,     0,     0,     0,     0,    14,    15,     0,
       0,     0,    16,     0,     0,   501,   502,     0,    18,    19,
      20,   503,    22,    23,    24,     0,    25,     0,     0,    58,
       0,     0,     0,     0,    26,     0,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,     0,
       0,     0,     0,     0,     0,    29,    30,    31,    32,     0,
       0,     0,     0,     0,     0,     0,    33,    34,    35,    36,
       0,     0,     0,    37,     0,     0,    38,     0,     0,    40,
       0,     0,   504,     0,    42,    43,    44,    45,    46,    47,
      48,     0,    49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,    51,    52,     0,
      53,    54,     5,     0,     0,     0,     0,   500,     0,    55,
       7,     8,     0,    56,     0,     0,    57,     0,     0,    11,
      12,  1002,    13,     0,     0,     0,     0,    14,    15,     0,
       0,     0,    16,     0,     0,   501,   502,     0,    18,    19,
      20,   503,    22,    23,    24,     0,    25,     0,     0,    58,
       0,     0,     0,     0,    26,     0,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,     0,
       0,     0,     0,     0,     0,    29,    30,    31,    32,     0,
       0,     0,     0,     0,     0,     0,    33,    34,    35,    36,
       0,     0,     0,    37,     0,     0,    38,     0,     0,    40,
       0,     0,   504,     0,    42,    43,    44,    45,    46,    47,
      48,     0,    49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,    51,    52,     0,
      53,    54,     5,     0,     0,     0,     0,   500,     0,    55,
       7,     8,     0,    56,     0,     0,    57,     0,     0,    11,
      12,  1003,    13,     0,     0,     0,     0,    14,    15,     0,
       0,     0,    16,     0,     0,   501,   502,     0,    18,    19,
      20,   503,    22,    23,    24,     0,    25,     0,     0,    58,
       0,     0,     0,     0,    26,     0,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,     0,
       0,     0,     0,     0,     0,    29,    30,    31,    32,     0,
       0,     0,     0,     0,     0,     0,    33,    34,    35,    36,
       0,     0,     0,    37,     0,     0,    38,     0,     0,    40,
       0,     0,   504,     0,    42,    43,    44,    45,    46,    47,
      48,     0,    49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,    51,    52,     0,
      53,    54,     5,     0,     0,     0,     0,   500,     0,    55,
       7,     8,     0,    56,     0,     0,    57,     0,     0,    11,
      12,  1066,    13,     0,     0,     0,     0,    14,    15,     0,
       0,     0,    16,     0,     0,   501,   502,     0,    18,    19,
      20,   503,    22,    23,    24,     0,    25,     0,     0,    58,
       0,     0,     0,     0,    26,     0,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,     0,
       0,     0,     0,     0,     0,    29,    30,    31,    32,     0,
       0,     0,     0,     0,     0,     0,    33,    34,    35,    36,
       0,     0,     0,    37,     0,     0,    38,     0,     0,    40,
       0,     0,   504,     0,    42,    43,    44,    45,    46,    47,
      48,     0,    49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,    51,    52,     0,
      53,    54,     5,     0,     0,     0,     0,   500,     0,    55,
       7,     8,     0,    56,     0,     0,    57,     0,     0,    11,
      12,  -657,    13,     0,     0,     0,     0,    14,    15,     0,
       0,     0,    16,     0,     0,   501,   502,     0,    18,    19,
      20,   503,    22,    23,    24,     0,    25,     0,     0,    58,
       0,     0,     0,     0,    26,     0,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,     0,
       0,     0,     0,     0,     0,    29,    30,    31,    32,     0,
       0,     0,     0,     0,     0,     0,    33,    34,    35,    36,
       0,     0,     0,    37,     0,     0,    38,     0,     0,    40,
       0,     0,   504,     0,    42,    43,    44,    45,    46,    47,
      48,     0,    49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,    51,    52,     0,
      53,    54,     5,     0,     0,     0,     0,   500,     0,    55,
       7,     8,     0,    56,     0,     0,    57,     0,     0,    11,
      12,  1132,    13,     0,     0,     0,     0,    14,    15,     0,
       0,     0,    16,     0,     0,   501,   502,     0,    18,    19,
      20,   503,    22,    23,    24,     0,    25,     0,     0,    58,
       0,     0,     0,     0,    26,     0,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,     0,
       0,     0,     0,     0,     0,    29,    30,    31,    32,     0,
       0,     0,     0,     0,     0,     0,    33,    34,    35,    36,
       0,     0,     0,    37,     0,     0,    38,     0,     0,    40,
       0,     0,   504,     0,    42,    43,    44,    45,    46,    47,
      48,     0,    49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,    51,    52,     0,
      53,    54,     5,     0,     0,     0,     0,   500,     0,    55,
       7,     8,     0,    56,     0,     0,    57,     0,     0,    11,
      12,  1184,    13,     0,     0,     0,     0,    14,    15,     0,
       0,     0,    16,     0,     0,   501,   502,     0,    18,    19,
      20,   503,    22,    23,    24,     0,    25,     0,     0,    58,
       0,     0,     0,     0,    26,     0,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,     0,
       0,     0,     0,     0,     0,    29,    30,    31,    32,     0,
       0,     0,     0,     0,     0,     0,    33,    34,    35,    36,
       0,     0,     0,    37,     0,     0,    38,     0,     0,    40,
       0,     0,   504,     0,    42,    43,    44,    45,    46,    47,
      48,     0,    49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,    51,    52,     0,
      53,    54,     5,     0,     0,     0,     0,   500,     0,    55,
       7,     8,     0,    56,     0,     0,    57,     0,     0,    11,
      12,     0,    13,     0,     0,     0,     0,    14,    15,     0,
       0,     0,    16,     0,     0,   501,   502,     0,    18,    19,
      20,   503,    22,    23,    24,     0,    25,     0,     0,    58,
       0,     0,     0,     0,    26,     0,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,  -647,
       0,     0,     0,     0,     0,    29,    30,    31,    32,     0,
       0,     0,     0,     0,     0,     0,    33,    34,    35,    36,
       0,     0,     0,    37,     0,     0,    38,     0,     0,    40,
       0,     0,   504,     0,    42,    43,    44,    45,    46,    47,
      48,     0,    49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,    51,    52,     0,
      53,    54,     5,     0,     0,     0,     0,   500,     0,    55,
       7,     8,     0,    56,     0,     0,    57,     0,     0,    11,
      12,  -649,    13,     0,     0,     0,     0,    14,    15,     0,
       0,     0,    16,     0,     0,   501,   502,     0,    18,    19,
      20,   503,    22,    23,    24,     0,    25,     0,     0,    58,
       0,     0,     0,     0,    26,     0,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,     0,
       0,     0,     0,     0,     0,    29,    30,    31,    32,     0,
       0,     0,     0,     0,     0,     0,    33,    34,    35,    36,
       0,     0,     0,    37,     0,     0,    38,     0,     0,    40,
       0,     0,   504,     0,    42,    43,    44,    45,    46,    47,
      48,     0,    49,     0,     0,   119,   120,     0,     0,     0,
       0,     0,   121,     0,    50,     0,     0,    51,    52,     0,
      53,    54,   122,   123,     0,     0,   124,   125,     0,    55,
     126,   127,     0,    56,   128,     0,    57,     0,     0,   489,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   129,   130,     0,     0,   131,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    58,
       0,     0,   119,   120,     0,     0,     0,     0,     0,   121,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   122,
     123,     0,     0,   124,   125,     0,     0,   126,   127,     0,
       0,   128,   132,     0,     0,     0,     0,     0,     0,     0,
       0,   133,     0,   134,   135,   136,   137,   138,   139,   140,
     129,   130,   141,     0,   131,     0,   142,     0,   490,     0,
     143,   393,     0,     0,     0,     0,     0,     0,     0,   144,
     145,   146,   147,     0,     0,     0,     0,     0,     0,   148,
       0,   149,   150,   151,     0,   152,   153,   154,   155,   156,
       0,     0,     0,     0,     0,     0,     0,     0,   157,   132,
       0,     0,     0,   158,   159,     0,     0,   160,   133,     0,
     134,   135,   136,   137,   138,   139,   140,     0,     0,   141,
       0,     0,     0,   142,     0,     0,     0,   143,     0,     0,
       0,     0,     0,     0,     0,     0,   144,   145,   146,   147,
       0,     0,     0,     0,     0,     0,   148,     0,   149,   150,
     151,     0,   152,   153,   154,   155,   156,     0,     0,   119,
     120,     0,     0,     0,     0,   157,   121,     0,     0,     0,
     158,   159,     0,     0,   160,     0,   122,   123,     0,     0,
     124,   125,     0,     0,   126,   127,     0,     0,   128,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   129,   130,     0,
       0,   131,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,   120,     0,     0,
       0,     0,     0,   121,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   122,   123,     0,     0,   124,   125,     0,
       0,   126,   127,     0,     0,   128,   132,     0,     0,     0,
       0,     0,     0,     0,     0,   133,     0,   134,   135,   136,
     137,   138,   139,   140,   129,   130,   141,     0,   131,     0,
     142,     0,     0,     0,   143,   894,     0,     0,     0,     0,
       0,     0,     0,   144,   145,   146,   147,     0,     0,     0,
       0,     0,     0,   148,     0,   149,   150,   151,     0,   152,
     153,   154,   155,   156,     0,     0,     0,     0,     0,     0,
       0,     0,   157,   132,     0,     0,     0,   158,   159,     0,
       0,   160,   133,     0,   134,   135,   136,   137,   138,   139,
     140,     0,     0,   141,     0,     0,     0,   142,     0,     0,
       0,   143,     0,     0,     0,     0,     0,     0,     0,     0,
     144,   145,   146,   147,     0,     0,     0,     0,     0,     0,
     148,     0,   149,   150,   151,     0,   152,   153,   154,   155,
     156,     0,     0,     0,     0,     0,     0,     0,     0,   157,
       0,     0,     0,     0,   158,   159,     0,     0,   160
};

static const yytype_int16 yycheck[] =
{
       5,    41,   269,     8,   271,   393,    76,    77,    79,    80,
     595,   546,   630,   303,   314,   380,   381,   382,   383,   384,
     491,     1,    27,   295,   552,     1,    31,    32,    33,    34,
      35,   298,    37,    38,   131,    40,  1002,  1003,   254,     1,
     256,     1,     1,     1,     1,     1,     1,     6,    63,     1,
      53,     1,     1,     1,     1,     1,    53,     1,    63,     1,
     157,   158,   159,     1,     1,    70,     1,    72,     1,     1,
     321,    66,     1,     7,     1,    37,     1,    15,    83,    84,
      20,    86,    87,    88,    63,    35,    35,    41,    94,    95,
      34,    53,   129,    64,    99,    35,     0,   102,    66,   104,
      66,   106,    36,   129,    52,   142,    35,   112,     0,   114,
      66,     1,    60,    61,   288,   947,   290,   143,    53,   951,
       1,     1,   178,    71,    70,    67,   744,    18,    19,   170,
     171,    79,    80,     1,   162,   163,    84,    74,    66,    35,
      31,   179,     1,     1,     1,     1,   152,   162,   163,   129,
      41,     6,    84,   129,    35,    35,     1,     1,    96,     1,
       1,   141,     1,   143,     1,   141,     1,   143,     1,   129,
     129,   176,   177,   178,     1,     1,   130,   182,   181,   184,
       1,   178,   187,   143,    66,   180,   142,   142,   193,   259,
      66,   196,   142,   198,    50,    51,   129,   202,   146,   147,
     148,   150,   181,   183,   142,    50,    74,   183,   142,   142,
     150,   182,   217,   181,   105,   181,   178,   222,  1184,   224,
     748,   178,   180,   181,   181,   180,   231,   179,   233,   179,
     178,   179,   179,   238,   178,    66,   178,     1,   129,   627,
     178,   178,   247,   178,   249,   178,   178,   514,   548,   178,
     255,   178,   180,   178,   150,   260,    18,   529,   530,   264,
     150,   142,   142,   268,    66,   270,    28,   272,    30,   274,
     486,   276,   277,   278,   142,    39,   281,    66,    66,   376,
     377,    66,   287,   142,   142,   142,   142,   292,   178,   180,
     295,    66,   297,    66,   299,    66,    50,   142,   142,   181,
     142,   142,    84,   142,   180,   142,     1,   142,    66,   142,
      62,    75,    53,     1,    78,   142,   142,    81,    82,    83,
      66,   142,    47,   142,    50,     3,     4,     5,  1047,  1048,
    1049,    66,    66,    74,    75,    99,   100,    66,    66,    66,
      81,    82,    83,   142,    54,    85,    66,    66,    52,   180,
     181,    66,    66,    66,    66,    57,    55,    35,    99,   100,
      59,   172,   173,   174,    89,   129,   130,   838,    46,    47,
      48,    49,    50,    51,   119,    70,    20,    52,   142,   181,
      84,    58,    70,   128,  1103,    60,    61,    84,   142,  1108,
     178,   180,   181,   150,    15,   180,   181,    18,    19,  1118,
     405,   406,   142,    15,   181,   180,    18,   180,   129,   180,
      31,    89,   417,   418,    15,   167,   142,    18,   142,    40,
      41,   178,   180,    15,   429,    69,    18,   432,    63,   499,
      60,    61,   142,    58,   180,    65,   801,   178,   728,   729,
     730,   446,   180,   181,   744,   180,   180,   149,    20,  1168,
     740,   180,   180,   180,   165,   133,   134,   462,   463,   464,
     180,   180,  1080,  1081,   504,   180,   180,   180,   180,  1004,
    1005,   146,   147,   148,   479,    96,    18,    19,    70,    53,
     178,   164,   733,   181,   105,   106,   107,   738,   739,    31,
     495,   496,    66,   178,    18,    19,   181,   179,   129,    41,
      74,   180,   178,   508,   266,   181,    91,    31,   129,   179,
     141,   516,   143,   518,   179,   129,   178,    41,   103,   181,
     122,    89,   179,   125,   529,   530,   179,   141,    96,   143,
     178,   536,   178,   181,   539,   181,   541,   179,   168,   169,
      16,    17,   180,   181,    20,   113,    22,   115,   166,   134,
     312,   178,   183,    66,   181,    68,   561,   142,    63,   321,
     565,  1159,  1160,   105,   106,   107,  1164,    22,    44,   183,
     180,   181,  1170,  1171,  1172,   337,   179,   339,   340,   341,
     342,   105,   344,   373,   374,   375,    66,   129,    68,   351,
     352,   353,   160,   180,   181,   179,    72,   359,   360,   361,
     362,   363,   364,   365,   179,   129,   378,   379,   179,   679,
      52,   385,   386,    89,    90,    86,    87,   179,    60,    61,
     179,   189,   179,   179,   179,   630,   877,   179,   179,    71,
     635,   179,   200,   638,  1022,   705,   641,    79,    80,  1224,
     711,   179,   179,   179,    16,    17,    75,   179,    20,   654,
      22,   179,    81,    82,    83,   223,    16,    17,   179,    53,
     179,    21,    22,   179,   179,   179,   428,   179,   179,   431,
      99,   100,    44,    67,    68,    69,   179,   747,    22,   749,
      74,    68,   142,   181,    44,   690,   181,   181,   181,   694,
     695,   142,   697,    20,   699,    34,    35,   702,    37,    74,
      72,   706,   707,   708,   146,   147,   148,   712,   142,   181,
     142,    20,   142,    53,    53,   966,   142,    89,    90,   986,
     288,    52,   290,   180,   180,   293,   180,   142,    67,    89,
      90,    91,   300,   181,   142,    74,   741,    22,    22,    20,
     745,   142,    50,   103,   142,    78,   179,    73,    66,   180,
     142,    20,   757,   758,   181,    84,   181,   181,   181,   180,
     180,   180,   180,   180,   180,    55,   180,   180,   180,   180,
     338,   180,   142,   180,   142,   181,   180,   180,   346,   347,
     348,   142,   350,   142,   180,    86,   181,   178,   181,   357,
       1,     1,    35,   181,    49,    30,    84,   142,   366,   367,
     180,   142,   180,    74,   183,   875,   179,   181,   142,   178,
     815,    68,   142,    53,   181,   180,    30,   142,   142,  1070,
     825,   141,    82,    30,   181,   180,   103,   181,    20,    81,
      75,    53,  1083,   181,   110,   142,   841,  1088,   142,    93,
    1091,    68,   179,    68,   180,    20,   954,  1093,   953,   919,
    1090,   419,   898,   742,   996,  1072,    65,   246,   305,   968,
     865,  1112,   471,   868,   869,   854,   388,   872,   842,   387,
     625,     4,   389,   626,   879,   880,    13,    13,   109,   447,
     479,  1130,    71,   175,   521,  1136,  1051,   828,   893,  1165,
     458,   836,   460,  1173,  1145,  1161,  1096,   656,   527,   721,
     843,   520,  1000,   872,   458,   258,   893,  1143,  1066,    -1,
      -1,   981,   917,   675,   676,   677,   678,    -1,   323,    -1,
     754,    -1,    -1,    -1,   492,    -1,    -1,    -1,    -1,    -1,
      -1,  1182,   937,    -1,    -1,   940,    -1,    -1,    -1,    -1,
      -1,   703,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   960,    -1,    -1,    -1,   527,
      -1,    -1,    -1,    -1,    -1,    -1,   971,    -1,    -1,    -1,
      -1,   733,    -1,    -1,    -1,    -1,   738,   739,    -1,   547,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1002,  1003,    -1,
     762,   763,    -1,  1073,   766,    -1,    -1,    -1,    -1,   771,
      -1,    -1,    -1,    -1,    -1,   777,    -1,   779,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   595,    -1,   791,
      -1,    -1,    -1,    -1,    -1,   797,    -1,    -1,    -1,    -1,
      -1,    -1,  1047,  1048,  1049,    -1,    -1,    -1,  1053,  1054,
    1055,   813,   814,  1058,  1059,    -1,    -1,    -1,    -1,    -1,
      -1,  1066,    -1,  1068,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1080,  1081,    -1,    -1,    -1,
      -1,    -1,    -1,   651,  1089,    -1,    -1,  1092,    -1,    -1,
      -1,    -1,    -1,  1098,    -1,    -1,    -1,    -1,  1103,    -1,
    1105,    -1,   864,  1108,    -1,  1110,    -1,    -1,  1113,    -1,
      -1,    -1,    -1,  1118,    -1,   877,    -1,    -1,    -1,   687,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1132,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1143,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1217,    -1,    -1,
      -1,    -1,    -1,   721,    -1,    -1,    -1,  1227,    -1,    -1,
      -1,    -1,    -1,  1168,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1176,  1177,    -1,    -1,    -1,    -1,    -1,    -1,  1184,
      -1,    -1,    -1,   751,   752,    -1,    -1,    -1,   950,    -1,
      -1,    -1,    -1,    -1,   956,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   966,    -1,    -1,    -1,    -1,  1214,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   789,    -1,    -1,    -1,    -1,  1231,  1232,  1233,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1015,    -1,    -1,    -1,  1019,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1034,    -1,   842,   843,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,     7,     8,
      -1,    -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    25,    -1,  1070,    28,
      29,    -1,    -1,    32,    33,    -1,    -1,    36,    -1,    -1,
      -1,  1083,   890,    -1,   892,    -1,  1088,    -1,    -1,  1091,
      -1,    -1,  1094,    -1,    -1,    -1,    55,    56,    -1,    -1,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1136,    -1,    -1,    -1,    -1,    -1,
     948,    -1,    -1,  1145,    -1,   104,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   113,    -1,   115,   116,   117,   118,
     119,   120,   121,    -1,    -1,   124,    -1,    -1,    -1,   128,
      -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,
    1182,    -1,   141,   142,   143,   144,    -1,    -1,    -1,    -1,
     998,   999,   151,    -1,   153,   154,   155,    -1,   157,   158,
     159,   160,   161,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   170,    -1,    -1,    -1,    -1,   175,   176,     1,   178,
     179,    -1,   181,    -1,     7,     8,    -1,    -1,    -1,    -1,
      -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    25,    -1,    -1,    28,    29,    -1,    -1,    32,
      33,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    -1,    -1,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
      -1,    -1,    -1,    -1,     7,     8,    -1,    -1,    -1,    -1,
      -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    25,    -1,    -1,    28,    29,    -1,    -1,    32,
      33,   104,    -1,    36,    -1,    -1,  1134,    -1,    41,    -1,
     113,    -1,   115,   116,   117,   118,   119,   120,   121,    -1,
      -1,   124,    55,    56,    -1,   128,    59,    -1,    -1,   132,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,
     143,   144,    -1,    -1,    -1,    -1,    -1,    -1,   151,    -1,
     153,   154,   155,    -1,   157,   158,   159,   160,   161,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   170,    -1,    -1,
      -1,   104,   175,   176,    -1,    -1,   179,   180,    -1,    -1,
     113,    -1,   115,   116,   117,   118,   119,   120,   121,    -1,
      -1,   124,    -1,    -1,    -1,   128,  1224,   130,    -1,   132,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,
     143,   144,    -1,    -1,    -1,    -1,    -1,    -1,   151,    -1,
     153,   154,   155,    -1,   157,   158,   159,   160,   161,    -1,
      -1,    -1,     1,    -1,    -1,    -1,    -1,   170,     7,     8,
      -1,    -1,   175,   176,    -1,    14,   179,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    25,    -1,    -1,    28,
      29,    -1,    -1,    32,    33,    -1,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    -1,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,    -1,    -1,    -1,    -1,     7,     8,    -1,    -1,    -1,
      -1,    -1,    14,    -1,    -1,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    25,    -1,    -1,    28,    29,    -1,    -1,
      32,    33,    -1,    -1,    36,   104,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   113,    -1,   115,   116,   117,   118,
     119,   120,   121,    55,    56,   124,    -1,    59,    -1,   128,
      -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   141,   142,   143,   144,    -1,    -1,    -1,    -1,
      -1,    -1,   151,    -1,   153,   154,   155,    -1,   157,   158,
     159,   160,   161,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   170,   104,    -1,    -1,    -1,   175,   176,    -1,   178,
     179,   113,    -1,   115,   116,   117,   118,   119,   120,   121,
      -1,    -1,   124,    -1,    -1,    -1,   128,    -1,    -1,    -1,
     132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,
     142,   143,   144,    -1,    -1,    -1,    -1,    -1,    -1,   151,
      -1,   153,   154,   155,    -1,   157,   158,   159,   160,   161,
      -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,   170,     7,
       8,    -1,    -1,   175,   176,    -1,    14,   179,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    -1,    -1,
      28,    29,    -1,    -1,    32,    33,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,   170,   104,    -1,    -1,    -1,   175,   176,    -1,
      -1,   179,   113,    -1,   115,   116,   117,   118,   119,   120,
     121,    -1,    -1,   124,    -1,    -1,    -1,   128,    -1,    -1,
      -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,   142,   143,   144,    -1,    -1,    -1,    -1,    -1,    -1,
     151,    -1,   153,   154,   155,    -1,   157,   158,   159,   160,
     161,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,   170,
       7,     8,    -1,    -1,   175,   176,    -1,    14,   179,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    -1,
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
     157,   158,   159,   160,   161,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   170,   104,    -1,    -1,    -1,   175,   176,
      -1,    -1,   179,   113,    -1,   115,   116,   117,   118,   119,
     120,   121,    -1,    -1,   124,    -1,    -1,    -1,   128,    -1,
      -1,    -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   141,   142,   143,   144,    -1,    -1,    -1,    -1,    -1,
      -1,   151,    -1,   153,   154,   155,    -1,   157,   158,   159,
     160,   161,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,
     170,     7,     8,    -1,    -1,   175,   176,    -1,    14,   179,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
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
      -1,    -1,    -1,    -1,   170,   104,    -1,    -1,    -1,   175,
     176,    -1,    -1,   179,   113,    -1,   115,   116,   117,   118,
     119,   120,   121,    -1,    -1,   124,    -1,    -1,    -1,   128,
      -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   141,   142,   143,   144,    -1,    -1,    -1,    -1,
      -1,    -1,   151,    -1,   153,   154,   155,    -1,   157,   158,
     159,   160,   161,    -1,    -1,    -1,     1,    -1,    -1,    -1,
      -1,   170,     7,     8,    -1,    -1,   175,   176,    -1,    14,
     179,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
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
      -1,    -1,    -1,    -1,    -1,   170,   104,    -1,    -1,    -1,
     175,   176,    -1,    -1,   179,   113,    -1,   115,   116,   117,
     118,   119,   120,   121,    -1,    -1,   124,    -1,    -1,    -1,
     128,    -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   141,   142,   143,   144,    -1,    -1,    -1,
      -1,    -1,    -1,   151,    -1,   153,   154,   155,    -1,   157,
     158,   159,   160,   161,    -1,    -1,    -1,     1,    -1,    -1,
      -1,    -1,   170,     7,     8,    -1,    -1,   175,   176,    -1,
      14,   179,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    25,    -1,    -1,    28,    29,    -1,    -1,    32,    33,
      -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    -1,    -1,    59,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,
       7,     8,    -1,    -1,    -1,    -1,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    -1,
      -1,    28,    29,    -1,    -1,    32,    33,    -1,    -1,    36,
     104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
      -1,   115,   116,   117,   118,   119,   120,   121,    55,    56,
     124,    -1,    59,    -1,   128,    -1,    -1,    -1,   132,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,   143,
     144,    -1,    -1,    -1,    -1,    -1,    -1,   151,    -1,   153,
     154,   155,    -1,   157,   158,   159,   160,   161,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   170,   104,    -1,    -1,
      -1,   175,   176,    -1,    -1,   179,   113,    -1,   115,   116,
     117,   118,   119,   120,   121,    -1,    -1,   124,    -1,    -1,
      -1,   128,    -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   141,   142,   143,   144,    -1,    -1,
      -1,    -1,    -1,    -1,   151,    -1,   153,   154,   155,    -1,
     157,   158,   159,   160,   161,    -1,    -1,    -1,     1,    -1,
      -1,    -1,    -1,   170,     7,     8,    -1,    -1,   175,   176,
      -1,    14,   179,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    25,    -1,    -1,    28,    29,    -1,    -1,    32,
      33,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    -1,    -1,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,    -1,   115,   116,   117,   118,   119,   120,   121,    -1,
      -1,   124,    -1,    -1,    -1,   128,    -1,    -1,    -1,   132,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,
     143,   144,    -1,    -1,    -1,    -1,    -1,    -1,   151,    -1,
     153,   154,   155,    -1,   157,   158,   159,   160,   161,    -1,
       1,    -1,    -1,    -1,    -1,     6,    -1,   170,     9,    10,
      -1,    -1,   175,   176,    -1,    -1,   179,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,
      31,    -1,    -1,    34,    35,    -1,    37,    38,    39,    40,
      41,    42,    43,    -1,    45,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    69,    -1,
      -1,    -1,    73,    74,    75,    76,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,    -1,    -1,
      -1,    92,    -1,    -1,    95,    -1,    -1,    98,    -1,    -1,
     101,    -1,   103,   104,   105,   106,   107,   108,   109,    -1,
     111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   123,    -1,    -1,   126,   127,    -1,   129,   130,
       1,    -1,    -1,    -1,    -1,     6,    -1,   138,     9,    10,
      -1,   142,    -1,    -1,   145,    -1,    -1,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,
      31,    -1,    -1,    34,    35,    -1,    37,    38,    39,    40,
      41,    42,    43,    -1,    45,    -1,    -1,   178,    -1,    -1,
      -1,    -1,    53,    -1,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    69,    -1,
      -1,    -1,    73,    74,    75,    76,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,    -1,    -1,
      -1,    92,    -1,    -1,    95,    -1,    -1,    98,    -1,    -1,
     101,    -1,   103,   104,   105,   106,   107,   108,   109,    -1,
     111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   123,    -1,    -1,   126,   127,    -1,   129,   130,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,    -1,    -1,
      -1,   142,     1,    -1,   145,    -1,    -1,     6,    -1,    -1,
       9,    10,    11,    -1,    -1,    -1,    15,    -1,    -1,    18,
      19,    -1,    21,    -1,    -1,    -1,    -1,    26,    27,    -1,
      -1,    -1,    31,    -1,    -1,    34,    -1,   178,    37,    38,
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
      39,    40,    41,    42,    43,    -1,    45,    -1,    -1,   178,
      -1,    -1,    -1,    -1,    53,    -1,    55,    -1,    -1,    -1,
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
      39,    40,    41,    42,    43,    -1,    45,    -1,    -1,   178,
      -1,    -1,    -1,    -1,    53,    -1,    55,    -1,    -1,    -1,
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
      39,    40,    41,    42,    43,    -1,    45,    -1,    -1,   178,
      -1,    -1,    -1,    -1,    53,    -1,    55,    -1,    -1,    -1,
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
      39,    40,    41,    42,    43,    -1,    45,    -1,    -1,   178,
      -1,    -1,    -1,    -1,    53,    -1,    55,    -1,    -1,    -1,
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
      39,    40,    41,    42,    43,    -1,    45,    -1,    -1,   178,
      -1,    -1,    -1,    -1,    53,    -1,    55,    -1,    -1,    -1,
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
      39,    40,    41,    42,    43,    -1,    45,    -1,    -1,   178,
      -1,    -1,    -1,    -1,    53,    -1,    55,    -1,    -1,    -1,
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
      39,    40,    41,    42,    43,    -1,    45,    -1,    -1,   178,
      -1,    -1,    -1,    -1,    53,    -1,    55,    -1,    -1,    -1,
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
      39,    40,    41,    42,    43,    -1,    45,    -1,    -1,   178,
      -1,    -1,    -1,    -1,    53,    -1,    55,    -1,    -1,    -1,
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
      39,    40,    41,    42,    43,    -1,    45,    -1,    -1,   178,
      -1,    -1,    -1,    -1,    53,    -1,    55,    -1,    -1,    -1,
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
      39,    40,    41,    42,    43,    -1,    45,    -1,    -1,   178,
      -1,    -1,    -1,    -1,    53,    -1,    55,    -1,    -1,    -1,
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
      39,    40,    41,    42,    43,    -1,    45,    -1,    -1,   178,
      -1,    -1,    -1,    -1,    53,    -1,    55,    -1,    -1,    -1,
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
      39,    40,    41,    42,    43,    -1,    45,    -1,    -1,   178,
      -1,    -1,    -1,    -1,    53,    -1,    55,    -1,    -1,    -1,
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
      39,    40,    41,    42,    43,    -1,    45,    -1,    -1,   178,
      -1,    -1,    -1,    -1,    53,    -1,    55,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   178,
      -1,    -1,     7,     8,    -1,    -1,    -1,    -1,    -1,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      25,    -1,    -1,    28,    29,    -1,    -1,    32,    33,    -1,
      -1,    36,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,    -1,   115,   116,   117,   118,   119,   120,   121,
      55,    56,   124,    -1,    59,    -1,   128,    -1,   130,    -1,
     132,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,
     142,   143,   144,    -1,    -1,    -1,    -1,    -1,    -1,   151,
      -1,   153,   154,   155,    -1,   157,   158,   159,   160,   161,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   170,   104,
      -1,    -1,    -1,   175,   176,    -1,    -1,   179,   113,    -1,
     115,   116,   117,   118,   119,   120,   121,    -1,    -1,   124,
      -1,    -1,    -1,   128,    -1,    -1,    -1,   132,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   141,   142,   143,   144,
      -1,    -1,    -1,    -1,    -1,    -1,   151,    -1,   153,   154,
     155,    -1,   157,   158,   159,   160,   161,    -1,    -1,     7,
       8,    -1,    -1,    -1,    -1,   170,    14,    -1,    -1,    -1,
     175,   176,    -1,    -1,   179,    -1,    24,    25,    -1,    -1,
      28,    29,    -1,    -1,    32,    33,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    -1,
      -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     7,     8,    -1,    -1,
      -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    25,    -1,    -1,    28,    29,    -1,
      -1,    32,    33,    -1,    -1,    36,   104,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,    -1,   115,   116,   117,
     118,   119,   120,   121,    55,    56,   124,    -1,    59,    -1,
     128,    -1,    -1,    -1,   132,   133,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   141,   142,   143,   144,    -1,    -1,    -1,
      -1,    -1,    -1,   151,    -1,   153,   154,   155,    -1,   157,
     158,   159,   160,   161,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   170,   104,    -1,    -1,    -1,   175,   176,    -1,
      -1,   179,   113,    -1,   115,   116,   117,   118,   119,   120,
     121,    -1,    -1,   124,    -1,    -1,    -1,   128,    -1,    -1,
      -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,   142,   143,   144,    -1,    -1,    -1,    -1,    -1,    -1,
     151,    -1,   153,   154,   155,    -1,   157,   158,   159,   160,
     161,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   170,
      -1,    -1,    -1,    -1,   175,   176,    -1,    -1,   179
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   185,   187,     0,   188,     1,     6,     9,    10,    11,
      15,    18,    19,    21,    26,    27,    31,    34,    37,    38,
      39,    40,    41,    42,    43,    45,    53,    55,    67,    74,
      75,    76,    77,    85,    86,    87,    88,    92,    95,    96,
      98,   101,   103,   104,   105,   106,   107,   108,   109,   111,
     123,   126,   127,   129,   130,   138,   142,   145,   178,   186,
     189,   190,   203,   221,   223,   225,   227,   228,   270,   306,
     317,   320,   322,   328,   333,   340,   343,   346,   349,   350,
     351,   352,   353,   354,   398,   400,   401,   403,   409,   410,
     427,   437,   439,   444,   445,   449,   455,   457,   186,     1,
     142,   186,    54,   142,   230,   231,     1,    39,   142,   288,
     317,   320,     1,   450,     1,   446,     1,   458,     1,     7,
       8,    14,    24,    25,    28,    29,    32,    33,    36,    55,
      56,    59,   104,   113,   115,   116,   117,   118,   119,   120,
     121,   124,   128,   132,   141,   142,   143,   144,   151,   153,
     154,   155,   157,   158,   159,   160,   161,   170,   175,   176,
     179,   242,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   259,   261,   264,     1,   142,     1,   142,
      15,    18,     1,   142,     1,   142,   179,   232,   186,   278,
       1,   264,    84,   264,   186,   186,   150,   186,     1,   186,
     280,   186,     1,     6,   129,   186,   186,   186,    15,    18,
      19,    31,    40,    41,    96,   129,   353,     6,   142,   299,
     142,   296,     1,   282,     1,    66,   142,     1,   329,   357,
     321,     1,   142,     1,    84,   179,   279,   399,     1,    15,
      96,   142,   186,   238,    58,   222,   222,     1,   142,     1,
     142,   294,   186,    84,   287,   332,   186,     1,   323,   290,
      20,    69,   266,   266,     1,    35,   179,   348,     1,   348,
       1,   348,     1,   142,   335,   336,     1,   129,   142,   186,
     431,     1,   186,   415,   181,   415,   415,     1,   181,   186,
     293,   414,     1,   264,   265,   411,   413,     1,   273,     1,
     440,   265,   186,   204,   186,   181,   186,   186,   142,   275,
     129,   322,    63,   433,   331,   332,   186,   265,   186,   265,
      20,    35,   150,   459,   460,   461,   471,    53,    67,    68,
      69,    74,   345,   347,   232,   179,   179,   179,   179,   179,
     179,   179,   179,   232,   179,   249,   179,   179,   179,   179,
     179,   179,   179,   179,   179,   179,   179,   179,   179,   179,
     179,   179,   179,   179,   179,   179,   179,   179,   249,   249,
     249,   265,    58,   172,   173,   174,   170,   171,   162,   163,
      60,    61,    65,   168,   169,    62,   167,   166,   165,   164,
      63,    64,   182,    66,   345,   186,   186,   186,   438,    22,
      22,   186,   186,   180,   186,     1,   265,   416,    68,    68,
      50,   142,   186,   186,   186,   265,   186,    91,   103,   134,
     142,   142,    15,    18,     1,   355,   186,   181,   181,   301,
     181,   181,   298,   186,   265,   186,   142,    20,    74,   142,
     364,   186,   181,   186,   318,   319,     1,   286,    52,    60,
      61,    71,    79,    80,   146,   147,   148,   418,   419,   405,
     406,   186,   240,   239,   241,   229,   266,   229,   186,   224,
     186,   226,    75,    81,    82,    83,    99,   100,   307,   309,
     310,   316,   303,    50,   142,   303,   186,   303,    20,    41,
     130,   326,   327,   435,   266,     1,    67,   186,   430,   274,
       6,    34,    35,    40,   101,   267,   270,   342,    20,   186,
      57,   149,   219,   264,   271,   186,   335,   186,   335,   186,
     337,   181,   186,   186,   186,   186,   186,   402,   186,   411,
     411,   186,   265,   181,   414,   186,   335,   186,   265,     1,
     181,   276,   205,   220,   265,   231,   291,    52,   289,   264,
      53,   304,   433,   451,   447,    34,    35,    37,    53,    67,
      74,   477,     1,   219,   462,    20,   460,   180,   180,   264,
     265,   264,   264,   264,   264,   264,   265,   265,   265,     1,
     142,   180,   265,   264,   264,   264,     1,   142,     1,   142,
       1,    50,    51,   142,   265,   243,   264,   264,   264,   264,
     264,   264,   264,   265,   265,   180,    55,    59,   248,   248,
     248,   249,   249,   250,   250,   251,   251,   251,   251,   251,
     252,   252,   253,   254,   255,   258,   260,   262,   261,   181,
     453,   454,   142,   142,   186,     1,   186,   417,   281,   186,
     186,   265,   284,   285,    22,    22,    20,   142,   300,   264,
     186,   297,   264,   186,   283,   358,   404,    50,   142,   186,
     244,   245,   246,   265,   416,   265,   407,   408,   186,   186,
     186,    20,   179,   233,   233,   314,   312,   311,   313,   295,
      53,    74,   186,   308,   310,    78,   303,   436,   364,   265,
      20,   186,   186,   266,     1,    70,     1,    70,     1,    70,
      15,    18,    70,    73,   341,   344,     1,    37,    53,   186,
     432,   180,   335,   186,   186,   338,   418,   336,   407,   414,
     414,   412,   186,   441,   186,   142,   186,   456,     3,     4,
       5,    35,    46,    47,    48,    49,    50,    51,    89,   133,
     134,   206,   207,   208,   453,     1,   265,   420,   433,   305,
     304,   181,   181,   186,    20,   472,    84,     1,    34,   186,
     476,   180,   181,   181,   180,   180,   181,   180,     1,   180,
     181,   181,   180,   180,   180,   180,   180,   181,   180,   181,
     180,   180,   180,   180,   180,   180,   180,   180,   180,   181,
     244,   181,   180,   180,   180,   180,   180,   181,   180,   180,
      55,    63,   256,   257,   261,   142,   186,   454,   194,   192,
     186,   186,   186,    47,    89,   395,    16,    17,    21,    22,
      44,    89,    90,    91,   103,   385,   142,   142,   356,   142,
     302,   265,   186,   220,   359,   360,   361,   362,   434,   435,
     405,   180,   181,   181,    18,    19,    31,    41,   105,   129,
     180,   234,   235,   236,    86,    94,    95,   152,   237,   264,
     264,   264,   264,   266,   315,   265,   324,   178,     1,    74,
     186,   428,    20,   186,   186,   269,   186,   268,   186,     1,
       1,   186,     1,   264,   266,   186,   186,   186,   348,   186,
     339,   413,   181,   277,   133,   220,   220,   220,    49,   219,
     211,   219,   219,   220,   186,   208,   433,    53,   186,   426,
      30,   423,   266,   304,   266,   265,   265,   477,    84,   474,
     142,   186,   186,   264,   264,   264,   180,   142,   264,   264,
     264,   265,   180,   264,   264,   251,   183,     1,   179,   199,
       1,   179,   195,   264,   264,   186,   389,   388,   387,    74,
     386,   390,   186,   193,   191,   359,   181,   178,   366,   364,
       1,    84,   186,   334,   246,   408,   179,   180,   181,   142,
     236,    20,   264,   186,   368,   365,   366,   186,   186,   430,
     266,   219,   186,   186,    68,    68,   272,   265,   265,   456,
     142,   211,   210,   122,   125,   212,   209,    53,   421,   181,
     424,   425,    20,    20,   452,   448,   186,   142,   266,   463,
     180,   180,   180,   180,   180,   181,   180,   180,   180,   181,
     180,   180,   263,   186,   142,   200,   201,   186,   141,   196,
     197,   396,   391,   392,   393,   391,   265,   264,   391,   199,
     195,   264,    16,    17,    20,    22,    44,    72,    89,    90,
     367,   363,   186,     1,    50,   142,   219,   235,     1,    53,
     186,   429,   129,   142,   330,    20,    20,   266,   335,   442,
      30,   213,   213,   292,   265,   265,    53,   425,   429,   429,
     453,   453,   473,    82,   470,   264,   264,   261,   202,   180,
     181,   198,   180,   181,    30,   397,   181,   264,     1,   129,
     141,   143,   183,   378,   379,     1,   129,   143,   370,   371,
       1,    17,   369,     1,   129,   141,   143,   183,   373,   374,
     368,   368,   368,   365,   186,   186,   186,   180,   186,   186,
     325,   476,    20,   186,   181,   219,   103,   214,   214,   266,
     422,   186,   186,    20,   219,    81,   180,   180,   219,   186,
     201,   219,   186,   197,   264,   392,   394,   186,   380,   381,
     382,   181,   368,   186,   372,   181,   368,   186,   219,   186,
     375,   376,   377,   181,   368,   331,     1,    35,   186,   475,
     265,   219,    75,   215,    20,    53,   475,   219,   142,     7,
      36,   142,   383,   384,   383,   383,   379,   383,   371,   368,
     383,   383,   383,   374,   186,   186,   443,   219,   429,   464,
     110,   181,   216,    93,   142,    68,   217,   465,   186,    85,
     142,   266,   179,   466,   218,    68,   244,   467,   180,   266,
     468,    20,     1,   150,   186,   469,   186,   186
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   184,   185,   186,   187,   188,   187,   189,   189,   189,
     189,   189,   190,   190,   191,   190,   192,   190,   193,   190,
     194,   190,   195,   195,   196,   196,   198,   197,   199,   199,
     200,   200,   202,   201,   204,   203,   203,   205,   205,   206,
     206,   207,   207,   208,   208,   208,   208,   208,   208,   208,
     209,   208,   208,   210,   208,   208,   208,   208,   208,   211,
     211,   212,   212,   213,   213,   214,   214,   215,   216,   215,
     217,   217,   218,   217,   219,   220,   221,   221,   222,   222,
     223,   224,   223,   225,   226,   225,   227,   227,   228,   228,
     229,   230,   230,   231,   232,   232,   233,   233,   233,   234,
     234,   235,   236,   236,   236,   236,   236,   236,   236,   237,
     237,   237,   237,   238,   239,   238,   240,   238,   241,   238,
     238,   242,   242,   242,   242,   242,   242,   242,   242,   242,
     242,   242,   242,   242,   242,   242,   242,   242,   242,   242,
     242,   242,   242,   242,   242,   242,   242,   242,   242,   242,
     242,   242,   242,   242,   242,   242,   242,   242,   242,   242,
     242,   242,   242,   242,   242,   242,   242,   243,   242,   242,
     242,   242,   242,   242,   244,   244,   245,   245,   246,   247,
     247,   247,   248,   248,   248,   248,   248,   249,   249,   249,
     249,   250,   250,   250,   251,   251,   251,   252,   252,   252,
     252,   252,   252,   253,   253,   253,   254,   254,   255,   255,
     256,   256,   257,   258,   257,   259,   260,   259,   261,   262,
     263,   261,   264,   264,   265,   265,   266,   266,   267,   267,
     268,   267,   267,   269,   267,   267,   267,   267,   267,   267,
     270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     271,   270,   272,   270,   270,   273,   270,   270,   270,   270,
     274,   270,   275,   270,   270,   276,   270,   277,   270,   270,
     278,   270,   279,   270,   270,   280,   281,   270,   270,   282,
     283,   270,   270,   270,   284,   270,   270,   270,   270,   270,
     270,   270,   270,   270,   285,   270,   270,   286,   270,   270,
     270,   270,   270,   287,   270,   270,   270,   288,   289,   270,
     270,   290,   270,   270,   270,   291,   292,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   270,   293,
     270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,   294,   295,   270,   270,   270,   297,   296,
     298,   298,   300,   299,   301,   302,   301,   303,   305,   304,
     306,   306,   307,   308,   308,   308,   309,   309,   311,   310,
     312,   310,   313,   310,   314,   310,   315,   310,   316,   316,
     316,   317,   318,   317,   319,   317,   321,   320,   323,   324,
     325,   322,   322,   326,   327,   326,   329,   328,   330,   330,
     330,   331,   331,   332,   332,   333,   333,   333,   334,   334,
     334,   334,   334,   335,   335,   337,   336,   338,   339,   338,
     340,   341,   342,   342,   343,   343,   344,   344,   345,   345,
     346,   346,   346,   347,   347,   347,   348,   348,   348,   349,
     349,   350,   350,   351,   351,   352,   352,   353,   353,   353,
     355,   356,   354,   354,   357,   358,   354,   354,   359,   359,
     361,   360,   363,   362,   364,   365,   366,   366,   367,   367,
     367,   367,   367,   367,   367,   367,   367,   367,   367,   368,
     368,   369,   369,   370,   370,   372,   371,   371,   373,   373,
     375,   374,   376,   374,   377,   374,   374,   378,   378,   380,
     379,   381,   379,   382,   379,   379,   383,   384,   384,   384,
     384,   385,   385,   385,   385,   386,   385,   385,   387,   385,
     388,   385,   389,   385,   390,   385,   391,   391,   393,   394,
     392,   395,   396,   395,   397,   397,   399,   398,   400,   400,
     402,   401,   404,   403,   406,   405,   407,   407,   408,   409,
     409,   410,   410,   411,   412,   411,   413,   414,   415,   416,
     416,   417,   417,   418,   418,   418,   418,   418,   418,   419,
     419,   419,   419,   421,   422,   420,   423,   420,   420,   424,
     424,   425,   426,   426,   427,   427,   428,   428,   428,   429,
     429,   429,   430,   430,   430,   431,   431,   431,   431,   432,
     432,   432,   432,   433,   433,   434,   434,   435,   436,   435,
     438,   437,   437,   440,   441,   442,   443,   439,   439,   444,
     444,   446,   447,   448,   445,   445,   450,   451,   452,   449,
     449,   453,   453,   454,   455,   456,   458,   457,   457,   459,
     459,   460,   460,   462,   463,   464,   465,   466,   467,   468,
     461,   469,   469,   469,   470,   470,   472,   473,   471,   471,
     474,   474,   475,   475,   475,   476,   476,   476,   477,   477,
     477,   477,   477,   477,   477
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
#line 536 "rwlparser.y" /* yacc.c:1646  */
    {
	  ; // we are done!
	}
#line 3607 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 542 "rwlparser.y" /* yacc.c:1646  */
    { if (bit(rwm->mxq->errbits,RWL_ERROR_SEVERE)) YYABORT; }
#line 3613 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 548 "rwlparser.y" /* yacc.c:1646  */
    {  
	    bis(rwm->m2flags, RWL_P2_INTHING);
	    if (bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
	      YYACCEPT;
	  }
#line 3623 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 554 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->m2flags, RWL_P2_INTHING); 
	    if (bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
	      YYACCEPT;
	  }
#line 3633 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 569 "rwlparser.y" /* yacc.c:1646  */
    { rwlprintallvars(rwm); }
#line 3639 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 580 "rwlparser.y" /* yacc.c:1646  */
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
#line 3658 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 596 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->raname = rwm->inam;
	      bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	      bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	      rwm->ravarn = rwladdvar(rwm, rwm->inam, RWL_TYPE_RAST, 0);
	      rwlrastbeg(rwm, rwm->raname, RWL_TYPE_RAST);
	    }
#line 3670 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 605 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->raname = rwm->inam;
	      bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	      rwm->ravarn = rwladdvar(rwm, rwm->inam, RWL_TYPE_RAST, 0);
	      rwlrastbeg(rwm, rwm->raname, RWL_TYPE_RAST);
	    }
#line 3681 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 613 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->raname = rwm->inam;
	      bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	      bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	      rwm->ravarn = rwladdvar(rwm, rwm->inam, RWL_TYPE_RAPROC, 0);
	      rwlrastbeg(rwm, rwm->raname, RWL_TYPE_RAPROC);
	    }
#line 3693 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 622 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->raname = rwm->inam;
	      rwm->ravarn = rwladdvar(rwm, rwm->inam, RWL_TYPE_RAPROC, 0);
	      rwlrastbeg(rwm, rwm->raname, RWL_TYPE_RAPROC);
	    }
#line 3703 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 633 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlrastfin(rwm, rwm->raname, (sb4) rwm->ravarn);
	    }
#line 3711 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 637 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlcancelvar(rwm, rwm->raname, (sb4) rwm->ravarn);
	      rwlrastclear(rwm);
	      rwlerror(rwm, RWL_ERROR_DECL_RAST); 
	      yyerrok;
	    }
#line 3722 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 650 "rwlparser.y" /* yacc.c:1646  */
    {rwm->raentry = rwm->sval; }
#line 3728 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 652 "rwlparser.y" /* yacc.c:1646  */
    {rwlrastadd(rwm, rwm->raentry, rwm->pval.dval); }
#line 3734 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 658 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlrastfin(rwm, rwm->raname, (sb4) rwm->ravarn);
	    }
#line 3742 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 662 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlcancelvar(rwm, rwm->raname, (sb4) rwm->ravarn);
	      rwlrastclear(rwm);
	      rwlerror(rwm, RWL_ERROR_DECL_RAPROC); 
	      yyerrok;
	    }
#line 3753 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 674 "rwlparser.y" /* yacc.c:1646  */
    {rwm->raentry = rwm->inam; }
#line 3759 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 676 "rwlparser.y" /* yacc.c:1646  */
    {rwlrastadd(rwm, rwm->raentry, rwm->pval.dval); }
#line 3765 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 681 "rwlparser.y" /* yacc.c:1646  */
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
#line 3786 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 698 "rwlparser.y" /* yacc.c:1646  */
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
#line 3846 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 754 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DATABASE_WRONG); yyerrok; }
#line 3852 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 760 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
	        if (rwm->dbsav->username)
		  rwlerror(rwm, RWL_ERROR_DBSPEC_ALREADY, "username");
		else
		  rwm->dbsav->username = rwlstrdup(rwm, rwm->pval.sval);
	      }
	    }
#line 3866 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 780 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
	        if (rwm->dbsav->username)
		  rwlerror(rwm, RWL_ERROR_DBSPEC_ALREADY, "username");
		else
		  rwm->dbsav->username = rwlstrdup(rwm, rwm->pval.sval);
	      }
	    }
#line 3880 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 790 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	        rwm->dbsav->password = rwlstrdup(rwm, rwm->pval.sval);
	    }
#line 3889 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 795 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwlcclassgood(rwm, (rwm->pval.sval)))
	      { 
	        if (rwm->dbsav)
		  rwm->dbsav->cclass = rwlstrdup(rwm, rwm->pval.sval);
	      }
	    }
#line 3901 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 803 "rwlparser.y" /* yacc.c:1646  */
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
#line 3918 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 816 "rwlparser.y" /* yacc.c:1646  */
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
#line 3953 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 847 "rwlparser.y" /* yacc.c:1646  */
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
#line 3968 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 858 "rwlparser.y" /* yacc.c:1646  */
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
#line 3983 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 869 "rwlparser.y" /* yacc.c:1646  */
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
#line 4001 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 885 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      { 
		rwm->dbsav->stmtcache = rwlcheckminval(rwm->mxq, 0, rwm->pval.ival
		  , 0, RWL_DEFAULT_STMTCACHE, (text *)"cursorcache");
		bis(rwm->dbsav->flags, RWL_DB_CCACHUSER);
	      }
	    }
#line 4014 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 894 "rwlparser.y" /* yacc.c:1646  */
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
#line 4032 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 911 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
		if (rwm->dbsav->pooltype)
		  rwlerror(rwm, RWL_ERROR_DBPOOL_ALREADY);
	        rwm->dbsav->pooltype = RWL_DBPOOL_POOLED;
		rwm->dbsav->pooltext = "drcp pooled";
	      }
	    }
#line 4046 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 921 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
		if (rwm->dbsav->pooltype)
		  rwlerror(rwm, RWL_ERROR_DBPOOL_ALREADY);
	        rwm->dbsav->pooltype = RWL_DBPOOL_DEDICATED;
		rwm->dbsav->pooltext = "dedicated";
	      }
	    }
#line 4060 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 931 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
		if (rwm->dbsav->pooltype)
		  rwlerror(rwm, RWL_ERROR_DBPOOL_ALREADY);
	        rwm->dbsav->pooltype = RWL_DBPOOL_RETHRDED;
		rwm->dbsav->pooltext = "threads dedicated";
	      }
	    }
#line 4074 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 941 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
		if (rwm->dbsav->pooltype)
		  rwlerror(rwm, RWL_ERROR_DBPOOL_ALREADY);
	        rwm->dbsav->pooltype = RWL_DBPOOL_RECONNECT;
		rwm->dbsav->pooltext = "reconnect";
	      }
	    }
#line 4088 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 958 "rwlparser.y" /* yacc.c:1646  */
    {
#if (RWL_OCI_VERSION<12)
	    rwlerror(rwm, RWL_ERROR_NOT_SUPPORTED_IN_VERSION, "statemark",RWL_OCI_VERSION);
#else
	    bis(rwm->dbsav->flags,RWL_DB_STATEMARK);
#endif
	  }
#line 4100 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 966 "rwlparser.y" /* yacc.c:1646  */
    {
#if (RWL_OCI_VERSION<12)
	    rwlerror(rwm, RWL_ERROR_NOT_SUPPORTED_IN_VERSION, "requestmark",RWL_OCI_VERSION);
#else
	    bis(rwm->dbsav->flags,RWL_DB_REQMARK);
#endif
	  }
#line 4112 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 976 "rwlparser.y" /* yacc.c:1646  */
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
#line 4127 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 987 "rwlparser.y" /* yacc.c:1646  */
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
#line 4143 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 1003 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      { 
		rwm->dbsav->ptimeout = rwlcheckminval(rwm->mxq, 0, rwm->pval.ival
		  , RWL_DBPOOL_CONNECT==rwm->dbsav->pooltype ? 0: 1
		  , RWL_DBPOOL_DEFAULT_TIMEOUT, (text *)"release timeout");
	      }
	    }
#line 4156 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 1016 "rwlparser.y" /* yacc.c:1646  */
    { 
#if (OCI_MAJOR_VERSION >= 12)
	      if (rwm->dbsav && rwm->pval.dval >= 0)
		rwm->dbsav->wtimeout = rwm->pval.dval;
#else
	    rwlerror(rwm, RWL_ERROR_NOT_YET_IMPL, "sessionpool wait attribute");
#endif
	    }
#line 4169 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 1030 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->dbsav && rwm->pval.dval >= 0)
	      bis(rwm->dbsav->flags, RWL_DB_SPTOBREAK);
	  }
#line 4178 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 1035 "rwlparser.y" /* yacc.c:1646  */
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
#line 4193 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 1046 "rwlparser.y" /* yacc.c:1646  */
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
#line 4209 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 1063 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprimmed(rwm);
	  }
#line 4217 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 1070 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprimmed(rwm);
	  }
#line 4225 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 1086 "rwlparser.y" /* yacc.c:1646  */
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
#line 4241 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 1098 "rwlparser.y" /* yacc.c:1646  */
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
#line 4260 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 1114 "rwlparser.y" /* yacc.c:1646  */
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
#line 4296 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 1150 "rwlparser.y" /* yacc.c:1646  */
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
#line 4311 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 1161 "rwlparser.y" /* yacc.c:1646  */
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
#line 4327 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 1174 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwm->mxq->evar[rwm->codeguess].v2val = rwm->facnt;
	      rwm->supsemerr = RWL_SUPSEM_PROC;
	    }
#line 4336 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 1182 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 4345 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 1187 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 4353 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 1194 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 4362 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 1199 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 4370 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 1206 "rwlparser.y" /* yacc.c:1646  */
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
#line 4456 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 1296 "rwlparser.y" /* yacc.c:1646  */
    {
          sb4 l = rwlfindvar(rwm->mxq, rwm->inam, RWL_VAR_NOGUESS);
          if (l>=0)
            rwlprintvar(rwm->mxq, l);
          }
#line 4466 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 1304 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m3flags, RWL_P3_MISBRACK); }
#line 4472 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 1305 "rwlparser.y" /* yacc.c:1646  */
    { bic(rwm->m3flags, RWL_P3_MISBRACK); }
#line 4478 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 1308 "rwlparser.y" /* yacc.c:1646  */
    { if (!bit(rwm->m2flags, RWL_P2_NOWARNDEP)) rwlerror(rwm, RWL_ERROR_MISSING_DECL_BRACK); }
#line 4484 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 1320 "rwlparser.y" /* yacc.c:1646  */
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
#line 4512 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 1348 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_INT; bic(rwm->addvarbits,RWL_IDENT_THRSPEC); }
#line 4518 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 1350 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_DBL; bic(rwm->addvarbits,RWL_IDENT_THRSPEC); }
#line 4524 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 1352 "rwlparser.y" /* yacc.c:1646  */
    { rwm->declslen=RWL_DEFAULT_STRLEN; rwm->dtype=RWL_TYPE_STR; bic(rwm->addvarbits,RWL_IDENT_THRSPEC); }
#line 4530 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 1354 "rwlparser.y" /* yacc.c:1646  */
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
#line 4549 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 1369 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwm->dtype = 0;
	      rwlerror(rwm, RWL_ERROR_BAD_ARGUMENT_TYPE, "file");
	    }
#line 4558 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 1374 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwm->dtype = 0;
	      rwlerror(rwm, RWL_ERROR_BAD_ARGUMENT_TYPE, "sql");
	    }
#line 4567 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 1379 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwm->dtype = 0;
	      rwlerror(rwm, RWL_ERROR_BAD_ARGUMENT_TYPE, "clob");
	    }
#line 4576 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 1388 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m4flags,RWL_P4_STATSONLY); }
#line 4582 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 1390 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m4flags,RWL_P4_PROCHASSQL); }
#line 4588 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 1392 "rwlparser.y" /* yacc.c:1646  */
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
#line 4608 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1412 "rwlparser.y" /* yacc.c:1646  */
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
#line 4626 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 1427 "rwlparser.y" /* yacc.c:1646  */
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
#line 4644 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 1442 "rwlparser.y" /* yacc.c:1646  */
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
#line 4663 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 1458 "rwlparser.y" /* yacc.c:1646  */
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
#line 4683 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 1501 "rwlparser.y" /* yacc.c:1646  */
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
#line 4700 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1515 "rwlparser.y" /* yacc.c:1646  */
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
#line 4718 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 1529 "rwlparser.y" /* yacc.c:1646  */
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
#line 4736 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1543 "rwlparser.y" /* yacc.c:1646  */
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
#line 4752 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 1555 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    }
#line 4760 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1558 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_UNIFORM); }
#line 4766 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 1559 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LOGB); }
#line 4772 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1560 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LOG); }
#line 4778 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1561 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_EXPB); }
#line 4784 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1562 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_EXP); }
#line 4790 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1563 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_CEIL); }
#line 4796 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1564 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_TRUNC); }
#line 4802 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1565 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_FLOOR); }
#line 4808 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1566 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ROUND); }
#line 4814 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1567 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SQRT); }
#line 4820 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1568 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SIN); }
#line 4826 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1569 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_COS); }
#line 4832 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1570 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ATAN2); }
#line 4838 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1571 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LENGTHB); }
#line 4844 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1573 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_INSTRB2); }
#line 4850 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1575 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_INSTRB3); }
#line 4856 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1577 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SUBSTRB2); }
#line 4862 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1579 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SUBSTRB3); }
#line 4868 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1580 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_GETENV); }
#line 4874 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1581 "rwlparser.y" /* yacc.c:1646  */
    { 
						    if (bit(rwm->m4flags, RWL_P4_SLASHCONVERT)) rwlexprpush0(rwm,RWL_STACK_WINSLASHF2B);
						  }
#line 4882 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1584 "rwlparser.y" /* yacc.c:1646  */
    { 
						    if (bit(rwm->m4flags, RWL_P4_SLASHCONVERT)) rwlexprpush0(rwm,RWL_STACK_WINSLASHF2BB);
						  }
#line 4890 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1587 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SYSTEM); }
#line 4896 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1589 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprpush(rwm,rwm->inam ,RWL_STACK_SYSTEM2STR);
	  }
#line 4904 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1593 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_SYSTEM_BAD); yyerrok;
	    rwlexprpush0(rwm,RWL_STACK_SYSTEM);
	  }
#line 4913 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1597 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ERLANG); }
#line 4919 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1598 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ERLANG2); }
#line 4925 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1600 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ERLANGK); }
#line 4931 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1602 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_NORMALRANDOM); }
#line 4937 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1603 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ISNULL); }
#line 4943 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1605 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ACCESS); }
#line 4949 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1607 "rwlparser.y" /* yacc.c:1646  */
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
#line 4964 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1618 "rwlparser.y" /* yacc.c:1646  */
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
#line 4979 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1629 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprpush(rwm, rwm->inam, RWL_STACK_SERVERRELEASE);
	  }
#line 4987 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1633 "rwlparser.y" /* yacc.c:1646  */
    {
	    // push RWL_T_NULL to make exprfinish work
	    rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    rwlerror(rwm, RWL_ERROR_DBFUN_NEED_IDENT, "serverrelease"); yyerrok;
	  }
#line 4997 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1639 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprpush(rwm, rwm->inam, RWL_STACK_OPENSESSIONCOUNT);
	  }
#line 5005 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1643 "rwlparser.y" /* yacc.c:1646  */
    {
	    // push RWL_T_NULL to make exprfinish work
	    rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    rwlerror(rwm, RWL_ERROR_DBFUN_NEED_IDENT, "opensessioncount"); yyerrok;
	  }
#line 5015 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1649 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprpush(rwm, rwm->inam, RWL_STACK_ACTIVESESSIONCOUNT);
	  }
#line 5023 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1653 "rwlparser.y" /* yacc.c:1646  */
    {
	    // push RWL_T_NULL to make exprfinish work
	    rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    rwlerror(rwm, RWL_ERROR_DBFUN_NEED_IDENT, "activesessioncount"); yyerrok;
	  }
#line 5033 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1659 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->sqname)
	      rwlexprpush(rwm, rwm->sqname, RWL_STACK_SQL_ID);
	  }
#line 5042 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1664 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprpush(rwm, rwm->inam, RWL_STACK_SQL_ID);
	  }
#line 5050 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1668 "rwlparser.y" /* yacc.c:1646  */
    {
	    // push RWL_T_NULL to make exprfinish work
	    rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    rwlerror(rwm, RWL_ERROR_SQLID_NEED_IDENT); yyerrok;
	  }
#line 5060 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1675 "rwlparser.y" /* yacc.c:1646  */
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
#line 5077 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1689 "rwlparser.y" /* yacc.c:1646  */
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
#line 5093 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1701 "rwlparser.y" /* yacc.c:1646  */
    {
            rwlexprpush(rwm, 0, RWL_STACK_DBSECONDS);
          }
#line 5101 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1705 "rwlparser.y" /* yacc.c:1646  */
    {
            rwlexprpush(rwm, 0, RWL_STACK_OCISECONDS);
          }
#line 5109 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1709 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (!bit(rwm->m2flags, RWL_P2_NOWARNDEP) && bit(rwm->m3flags,RWL_P3_MISBRACK))
	      rwlerror(rwm, RWL_ERROR_MISSING_EMPTY_BRACKETS, "runseconds");
	    rwlexprpush(rwm, 0, RWL_STACK_RUNSECONDS);
	  }
#line 5119 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1715 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (!bit(rwm->m2flags, RWL_P2_NOWARNDEP) && bit(rwm->m3flags,RWL_P3_MISBRACK))
	      rwlerror(rwm, RWL_ERROR_MISSING_EMPTY_BRACKETS, "epochseconds");
	    rwlexprpush(rwm, 0, RWL_STACK_EPOCHSECONDS);
	  }
#line 5129 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1734 "rwlparser.y" /* yacc.c:1646  */
    { rwm->aacnt[rwm->furlev]++; }
#line 5135 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1740 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ISNULL); }
#line 5141 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1741 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ISNOTNULL); }
#line 5147 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1747 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_MINUS); }
#line 5153 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1748 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_NOT); }
#line 5159 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1749 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_NOT); }
#line 5165 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1750 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_BITWISE_NOT); }
#line 5171 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1755 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_MUL); }
#line 5177 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1756 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_DIV); }
#line 5183 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1757 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_MOD); }
#line 5189 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1762 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ADD); }
#line 5195 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1763 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SUB); }
#line 5201 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1767 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_BITWISE_LEFT_SHIFT); }
#line 5207 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1768 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_BITWISE_RIGHT_SHIFT); }
#line 5213 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1773 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LESS); }
#line 5219 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1774 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_GREATER); }
#line 5225 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1775 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LESSEQ); }
#line 5231 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1776 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_GREATEREQ); }
#line 5237 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1777 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_BETWEEN); }
#line 5243 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1782 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_EQUAL); }
#line 5249 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1783 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_NOTEQUAL); }
#line 5255 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1788 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_BITWISE_AND); }
#line 5261 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1793 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_BITWISE_XOR); }
#line 5267 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1798 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_BITWISE_OR); }
#line 5273 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1804 "rwlparser.y" /* yacc.c:1646  */
    { 
	    // With AND (and OR) skipdep is used to mark
	    // the expression element we need to skip until
	    // in case the first condition is false (true for OR)
	    rwm->ptail->branchtype = RWL_EXP_ANDBRANCH;
	    if (rwm->skipdep++ >= UB1MAXVAL)
	      rwlsevere(rwm, "[rwlparser-andskip:%d]", rwm->skipdep);
	    rwm->ptail->skipnxt = rwm->skipdep;
	  }
#line 5287 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1814 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprpush2(rwm,0,RWL_STACK_AND, rwm->skipdep);
	    rwm->skipdep--;
	  }
#line 5296 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1823 "rwlparser.y" /* yacc.c:1646  */
    {  
	    // see comment above
	    rwm->ptail->branchtype = RWL_EXP_ORBRANCH;
	    if (rwm->skipdep++ >= UB1MAXVAL)
	      rwlsevere(rwm, "[rwlparser-orskip:%d]", rwm->skipdep);
	    rwm->ptail->skipnxt = rwm->skipdep;
	  }
#line 5308 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1831 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprpush2(rwm,0,RWL_STACK_OR ,rwm->skipdep);
	    rwm->skipdep--;
	  }
#line 5317 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1840 "rwlparser.y" /* yacc.c:1646  */
    {  
	    // With conditional execution we mark the condition
	    // with RWL_EXP_CONDBRANCH1
	    rwm->ptail->branchtype = RWL_EXP_CONDBRANCH1;
	    if (rwm->skipdep++ >= UB1MAXVAL)
	      rwlsevere(rwm, "[rwlparser-condskip:%d]", rwm->skipdep);
	    rwm->ptail->skipnxt = rwm->skipdep;
	  }
#line 5330 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1849 "rwlparser.y" /* yacc.c:1646  */
    {
	    // and the place of ':' (really ELSE) with 
	    // RWL_EXP_CONDBRANCH2
	    rwm->ptail->branchtype = RWL_EXP_CONDBRANCH2;
	    rwm->ptail->skipnxt = rwm->skipdep;
	  }
#line 5341 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1856 "rwlparser.y" /* yacc.c:1646  */
    {  
	    // And the actual conditional is the "end if" place
	    rwlexprpush2(rwm,0,RWL_STACK_CONDITIONAL, rwm->skipdep);
	    rwm->skipdep--;
	  }
#line 5351 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1865 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_CONCAT); }
#line 5357 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1870 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_CONCAT); }
#line 5363 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1881 "rwlparser.y" /* yacc.c:1646  */
    { rwm->supsemerr = 0; }
#line 5369 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1886 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
	    {
	      rwm->ifdirdep = 0; // since we may be skipping over $else, $endif
	      YYACCEPT;
	    }
	  }
#line 5381 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1894 "rwlparser.y" /* yacc.c:1646  */
    { yyerrok; }
#line 5387 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1896 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_COMMAND_NOT_LOCAL, "threads"); yyerrok; }
#line 5393 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1903 "rwlparser.y" /* yacc.c:1646  */
    { yyerrok; }
#line 5399 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1905 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_COMMAND_NOT_LOCAL, "run"); yyerrok; }
#line 5405 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 1909 "rwlparser.y" /* yacc.c:1646  */
    { yyerrok; }
#line 5411 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1911 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_NOT_LOCAL, "database"); yyerrok; }
#line 5417 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 1913 "rwlparser.y" /* yacc.c:1646  */
    { yyerrok ; }
#line 5423 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 1916 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_NOT_LOCAL, "random procedure array"); yyerrok; }
#line 5429 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 1919 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_NOT_LOCAL, "random string array"); yyerrok; }
#line 5435 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 1924 "rwlparser.y" /* yacc.c:1646  */
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
#line 5468 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 1953 "rwlparser.y" /* yacc.c:1646  */
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
#line 5487 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 1968 "rwlparser.y" /* yacc.c:1646  */
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
#line 5502 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 1985 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_LOB); yyerrok; }
#line 5508 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 1992 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_INT); yyerrok; }
#line 5514 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 1998 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_DBL); yyerrok; }
#line 5520 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 2000 "rwlparser.y" /* yacc.c:1646  */
    { 
		rwm->declslen=RWL_DEFAULT_STRLEN;
	      }
#line 5528 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 2006 "rwlparser.y" /* yacc.c:1646  */
    {
	      if (RWL_TYPE_CANCELLED == rwm->pval.vtype)
		rwm->declslen = 1; // kind of a kludge, but this prevents doube
				   // error reporting if using local variable
	      else
	      {
		rwm->declslen = rwm->pval.ival;
	      }
	    }
#line 5542 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 2020 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_STR); yyerrok; }
#line 5548 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 2022 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dtype=RWL_TYPE_FILE;
	    //if (rwm->codename)
	    //  rwlerror(rwm, RWL_ERROR_NOT_LOCAL, "file");
	  }
#line 5558 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 2031 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_FILE); yyerrok; }
#line 5564 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 2036 "rwlparser.y" /* yacc.c:1646  */
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
#line 5589 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 2059 "rwlparser.y" /* yacc.c:1646  */
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
#line 5616 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 2083 "rwlparser.y" /* yacc.c:1646  */
    { if (!rwm->rslerror) rwlcodeadd0(rwm, RWL_CODE_ELSE); }
#line 5622 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 2086 "rwlparser.y" /* yacc.c:1646  */
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
#line 5647 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 2109 "rwlparser.y" /* yacc.c:1646  */
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
#line 5688 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 2150 "rwlparser.y" /* yacc.c:1646  */
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
#line 5760 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 2219 "rwlparser.y" /* yacc.c:1646  */
    { 
		  rwlerror(rwm, RWL_ERROR_LOOP);
		  rwm->rsllityp[rwm->rsldepth] = RWL_LI_BAD;
		  yyerrok;
		}
#line 5770 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 2226 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SYSTEM); }
#line 5776 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 2229 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprpush(rwm,rwm->inam ,RWL_STACK_SYSTEM2STR);
	  }
#line 5784 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 2234 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_SYSTEM_BAD); yyerrok;
	    rwlexprclear(rwm);
	  }
#line 5793 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 2239 "rwlparser.y" /* yacc.c:1646  */
    {
		/* start a dummy assignment such that expression gets executed */
		rwm->assignvar = RWL_DUMMY_VAR;
		rwm->assignoper = RWL_T_ASSIGN;
		rwlexprbeg(rwm);
	      }
#line 5804 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 2248 "rwlparser.y" /* yacc.c:1646  */
    {
		/* start expression for assign */
		rwm->assignvar = rwm->inam;
		rwlexprbeg(rwm);
	      }
#line 5814 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 2257 "rwlparser.y" /* yacc.c:1646  */
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
#line 5830 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 2269 "rwlparser.y" /* yacc.c:1646  */
    {
	        rwm->assignvar = rwm->codename;
		rwlexprbeg(rwm);
	      }
#line 5839 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 2274 "rwlparser.y" /* yacc.c:1646  */
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
#line 5872 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 2303 "rwlparser.y" /* yacc.c:1646  */
    { 
		  rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		  rwlexprclear(rwm);
		  yyerrok;
		}
#line 5882 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 2310 "rwlparser.y" /* yacc.c:1646  */
    {
	        rwm->assignvar = rwm->codename;
		rwlexprbeg(rwm);
	      }
#line 5891 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 2315 "rwlparser.y" /* yacc.c:1646  */
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
#line 5924 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 2345 "rwlparser.y" /* yacc.c:1646  */
    { 
		  rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		  rwlexprclear(rwm);
		  yyerrok;
		}
#line 5934 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 2353 "rwlparser.y" /* yacc.c:1646  */
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
#line 5952 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 2367 "rwlparser.y" /* yacc.c:1646  */
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
#line 5967 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 2381 "rwlparser.y" /* yacc.c:1646  */
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
#line 5985 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 2397 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (!rwm->codename)
	    {
	      rwlerror(rwm, RWL_ERROR_NOT_DONE_IN_MAIN, "modify database leak");
	      goto dontmoddbpool;
	    }
	    else
	      rwlcodeadd0(rwm, RWL_CODE_MODDBLEAK);
	  }
#line 5999 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 2408 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->codename)
	      rwlcodeadd0(rwm, RWL_CODE_SESRELDROP);
	  }
#line 6008 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 2414 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->codename)
	      rwlcodeadd0(rwm, RWL_CODE_SESRELDROP);
	  }
#line 6017 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 2420 "rwlparser.y" /* yacc.c:1646  */
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
#line 6032 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 2432 "rwlparser.y" /* yacc.c:1646  */
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
#line 6047 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 2444 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->codename)
	      rwlcodeadd0(rwm, RWL_CODE_SHIFT);
	    else
	      if (!bit(rwm->m2flags, RWL_P2_NOEXEC))
		rwlshiftdollar(rwm->mxq, &rwm->loc);
	  }
#line 6059 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 2453 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->codename)
	      rwlcodeadd0(rwm, RWL_CODE_GETRUSAGE);
	    else
	      if (!bit(rwm->m2flags, RWL_P2_NOEXEC))
		rwlgetrusage(rwm->mxq, 0);
	  }
#line 6071 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 2462 "rwlparser.y" /* yacc.c:1646  */
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
#line 6086 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 2475 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_MODIFY); yyerrok; }
#line 6092 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 2480 "rwlparser.y" /* yacc.c:1646  */
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
#line 6126 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 2512 "rwlparser.y" /* yacc.c:1646  */
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
#line 6215 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 2597 "rwlparser.y" /* yacc.c:1646  */
    {
	      /* This code can cause lookahead */
	      rwlerror(rwm, RWL_ERROR_BAD_ARG_LIST);
	      rwlexprclear(rwm);
	      yyerrok;
	    }
#line 6226 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 2604 "rwlparser.y" /* yacc.c:1646  */
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
#line 6245 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 2623 "rwlparser.y" /* yacc.c:1646  */
    { rwm->supsemerr = RWL_SUPSEM_EMBSQL; }
#line 6251 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 2629 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m3flags, RWL_P3_IMMPARSEFOR); }
#line 6257 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 2631 "rwlparser.y" /* yacc.c:1646  */
    { bic(rwm->m3flags, RWL_P3_IMMPARSEFOR); }
#line 6263 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 2637 "rwlparser.y" /* yacc.c:1646  */
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
#line 6350 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 2722 "rwlparser.y" /* yacc.c:1646  */
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
#line 6383 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 2752 "rwlparser.y" /* yacc.c:1646  */
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
#line 6419 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 2785 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_NO_FILE_FOR_FFLUSH);
	    yyerrok;
	  }
#line 6428 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 2792 "rwlparser.y" /* yacc.c:1646  */
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
#line 6455 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 2817 "rwlparser.y" /* yacc.c:1646  */
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
#line 6488 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 317:
#line 2848 "rwlparser.y" /* yacc.c:1646  */
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
#line 6511 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 2876 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_FILE_FOR_WRITE);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6522 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 2885 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_STRING_FOR_SPRINTF);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6533 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 2894 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6544 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 2904 "rwlparser.y" /* yacc.c:1646  */
    {
	      // Note that we do not document this syntax without comma
	      if (rwm->filenam)
		rwlerror(rwm, RWL_ERROR_COMMA_IS_RECOMMENDED, rwm->filenam
		, bit(rwm->mflags,RWL_P_PRINTLINE) ? "writeline" : "write");
	    }
#line 6555 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 2916 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6566 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 2924 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_FILE_FOR_WRITE);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6577 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 2932 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_FILE_FOR_WRITE);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6588 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 2940 "rwlparser.y" /* yacc.c:1646  */
    { 
		if (rwm->codename)
		  rwlcodeadd0(rwm, RWL_CODE_NEWLINE);
		else
		  fputs(bit(rwm->m4flags, RWL_P4_CRNLWRITELINE) ? "\r\n" : "\n", stdout);
		bic(rwm->mflags,RWL_P_PRINTLINE|RWL_P_PRINTBLANK);
	      }
#line 6600 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 337:
#line 2950 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6611 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 339:
#line 2958 "rwlparser.y" /* yacc.c:1646  */
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
#line 6626 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 340:
#line 2969 "rwlparser.y" /* yacc.c:1646  */
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
#line 6665 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 341:
#line 3005 "rwlparser.y" /* yacc.c:1646  */
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
#line 6705 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 342:
#line 3042 "rwlparser.y" /* yacc.c:1646  */
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
#line 6748 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 343:
#line 3082 "rwlparser.y" /* yacc.c:1646  */
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
#line 6769 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 3099 "rwlparser.y" /* yacc.c:1646  */
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
#line 6794 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 345:
#line 3122 "rwlparser.y" /* yacc.c:1646  */
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
#line 6816 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 346:
#line 3141 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlerror(rwm, RWL_ERROR_UNEXPECTED_AFTER_IDENTIFIER);
	      yyerrok;
	    }
#line 6825 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 347:
#line 3148 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_MISSING_SEMICOLON); yyerrok; }
#line 6831 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 348:
#line 3154 "rwlparser.y" /* yacc.c:1646  */
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
#line 6859 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 3178 "rwlparser.y" /* yacc.c:1646  */
    {
	  rwm->lobwritedata = rwlexprfinish(rwm);
	  rwm->loboffset = 0;
	}
#line 6868 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 351:
#line 3187 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->loboffset = rwlexprfinish(rwm);
	  }
#line 6876 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 352:
#line 3194 "rwlparser.y" /* yacc.c:1646  */
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
#line 6903 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 353:
#line 3217 "rwlparser.y" /* yacc.c:1646  */
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
#line 6929 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 355:
#line 3243 "rwlparser.y" /* yacc.c:1646  */
    {
	  rwm->lobreadlength = rwlexprfinish(rwm);
	}
#line 6937 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 356:
#line 3247 "rwlparser.y" /* yacc.c:1646  */
    {
	  rwm->loboffset = rwlexprfinish(rwm);
	}
#line 6945 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 357:
#line 3253 "rwlparser.y" /* yacc.c:1646  */
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
#line 7095 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 3403 "rwlparser.y" /* yacc.c:1646  */
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
#line 7209 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 3515 "rwlparser.y" /* yacc.c:1646  */
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
#line 7246 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 3551 "rwlparser.y" /* yacc.c:1646  */
    {  
	    // This syntax is not documented
	    bic(rwm->m3flags, RWL_P3_CLHEADFOR);
	    rwlerror(rwm, RWL_ERROR_LEGACY_CONTROLLOOP_SYNTAX);
	  }
#line 7256 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 361:
#line 3556 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m3flags, RWL_P3_CLHEADFOR); }
#line 7262 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 362:
#line 3560 "rwlparser.y" /* yacc.c:1646  */
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
#line 7279 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 363:
#line 3576 "rwlparser.y" /* yacc.c:1646  */
    { if (bit(rwm->m3flags, RWL_P3_CLHEADFOR))
	      rwlerror(rwm, RWL_ERROR_MIX_LEGACY_CLOOP);
	  }
#line 7287 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 364:
#line 3580 "rwlparser.y" /* yacc.c:1646  */
    { if (bit(rwm->m3flags, RWL_P3_CLHEADFOR))
	      rwlerror(rwm, RWL_ERROR_MIX_LEGACY_CLOOP);
	  }
#line 7295 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 365:
#line 3584 "rwlparser.y" /* yacc.c:1646  */
    { if (!bit(rwm->m3flags, RWL_P3_CLHEADFOR))
	      rwlerror(rwm, RWL_ERROR_MIX_LEGACY_CLOOP);
	  }
#line 7303 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 368:
#line 3595 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7309 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 369:
#line 3597 "rwlparser.y" /* yacc.c:1646  */
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
#line 7326 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 370:
#line 3609 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7332 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 371:
#line 3611 "rwlparser.y" /* yacc.c:1646  */
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
#line 7351 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 372:
#line 3625 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7357 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 373:
#line 3627 "rwlparser.y" /* yacc.c:1646  */
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
#line 7376 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 374:
#line 3641 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7382 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 375:
#line 3643 "rwlparser.y" /* yacc.c:1646  */
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
#line 7399 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 376:
#line 3655 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7405 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 377:
#line 3657 "rwlparser.y" /* yacc.c:1646  */
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
#line 7435 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 378:
#line 3686 "rwlparser.y" /* yacc.c:1646  */
    { rwm->ynqueue = 0; }
#line 7441 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 379:
#line 3687 "rwlparser.y" /* yacc.c:1646  */
    { rwm->ynqueue = RWL_QUEUE_EVERY; }
#line 7447 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 380:
#line 3688 "rwlparser.y" /* yacc.c:1646  */
    { rwm->ynqueue = RWL_NOQUEUE_EVERY; }
#line 7453 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 381:
#line 3692 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->scname = rwm->inam; 
	    bic(rwm->m2flags, RWL_P2_AT|RWL_P2_ATDEFAULT);
	  }
#line 7462 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 382:
#line 3697 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->scname = rwm->inam;
	    bic(rwm->m2flags, RWL_P2_AT|RWL_P2_ATDEFAULT);
	  }
#line 7471 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 383:
#line 3702 "rwlparser.y" /* yacc.c:1646  */
    { 
	      bis(rwm->m2flags, RWL_P2_ATDEFAULT);
	    }
#line 7479 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 384:
#line 3706 "rwlparser.y" /* yacc.c:1646  */
    {
	      bic(rwm->m2flags, RWL_P2_AT|RWL_P2_ATDEFAULT);
	      // lookahead may have consumed the next identifier
	      rwm->scname = (yychar == RWL_T_IDENTIFIER)
	        ? rwm->previnam
	        : rwm->inam;
	    }
#line 7491 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 385:
#line 3714 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->dbname = rwm->inam; 
	      bis(rwm->m2flags, RWL_P2_AT);
	    }
#line 7500 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 386:
#line 3723 "rwlparser.y" /* yacc.c:1646  */
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
#line 7519 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 387:
#line 3738 "rwlparser.y" /* yacc.c:1646  */
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
#line 7551 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 388:
#line 3770 "rwlparser.y" /* yacc.c:1646  */
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
#line 7569 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 389:
#line 3785 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->m3flags, RWL_P3_IMMEDSQL); 
	    bis(rwm->sqsav->flags, RWL_SQLFLAG_IBUSE);
	    bis(rwm->sqsav->flags, RWL_SQLFLAG_IDUSE);
	    if (bit(rwm->m3flags,RWL_P3_IMPLCASE))
	      bis(rwm->sqsav->flags, RWL_SQLFLAG_ICASE);
	  }
#line 7581 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 390:
#line 3794 "rwlparser.y" /* yacc.c:1646  */
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
#line 7622 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 392:
#line 3832 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_SQL_WRONG) ;
	    yyerrok;
	  }
#line 7631 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 394:
#line 3840 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7637 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 395:
#line 3841 "rwlparser.y" /* yacc.c:1646  */
    {
	    if ((rwm->msqlstk = rwlexprfinish(rwm)))
	      bis(rwm->m3flags, RWL_P3_IMMISDYN); // now dynamic
	    else
	    {
	      rwm->mxq->evar[rwm->sqsavvarn].vtype = RWL_TYPE_CANCELLED;
	      rwm->mxq->evar[rwm->sqsavvarn].stype = "cancelled (sql)";
	    }
	  }
#line 7651 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 396:
#line 3853 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->sqllino = rwm->loc.lineno;
	  }
#line 7659 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 400:
#line 3862 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "sql") ;
	  }
#line 7667 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 403:
#line 3873 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bis(rwm->m2flags, RWL_P2_ATDEFAULT);
	  }
#line 7675 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 404:
#line 3877 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dbname = rwm->inam; 
	    bis(rwm->m2flags, RWL_P2_AT);
	  }
#line 7684 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 405:
#line 3885 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->m2flags, RWL_P2_AT|RWL_P2_ATDEFAULT);
	  }
#line 7692 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 406:
#line 3889 "rwlparser.y" /* yacc.c:1646  */
    { 
	      bis(rwm->m2flags, RWL_P2_ATDEFAULT);
	    }
#line 7700 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 407:
#line 3893 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->dbname = rwm->inam; 
	      bis(rwm->m2flags, RWL_P2_AT);
	    }
#line 7709 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 409:
#line 3903 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->dbname = 0;
	      bis(rwm->m2flags, RWL_P2_ATDEFAULT); /* explict choose standard DB */
	    }
#line 7718 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 410:
#line 3909 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->dbname = rwm->inam;
	      bis(rwm->m2flags, RWL_P2_AT); /* named DB */
	    }
#line 7727 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 411:
#line 3914 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_NO_DATABASE_NAME); yyerrok; }
#line 7733 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 412:
#line 3916 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_MISSING_SEMICOLON); yyerrok; }
#line 7739 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 415:
#line 3924 "rwlparser.y" /* yacc.c:1646  */
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
#line 7769 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 416:
#line 3950 "rwlparser.y" /* yacc.c:1646  */
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
#line 7846 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 418:
#line 4027 "rwlparser.y" /* yacc.c:1646  */
    {
		  rwm->assignvar = rwm->inam;
		  rwlexprbeg(rwm);
		}
#line 7855 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 419:
#line 4032 "rwlparser.y" /* yacc.c:1646  */
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
#line 7906 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 424:
#line 4095 "rwlparser.y" /* yacc.c:1646  */
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
#line 7925 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 425:
#line 4110 "rwlparser.y" /* yacc.c:1646  */
    {
              rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
              rwlexprclear(rwm);
              rwm->rslerror++; // to prevent attempting else/endif code generation
              yyerrok;
            }
#line 7936 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 426:
#line 4119 "rwlparser.y" /* yacc.c:1646  */
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
#line 7955 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 427:
#line 4134 "rwlparser.y" /* yacc.c:1646  */
    {
              rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
              rwlexprclear(rwm);
              rwm->rslerror++; // to prevent attempting else/endif code generation
              yyerrok;
            }
#line 7966 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 428:
#line 4143 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_LEGACY_WHILE_SYNTAX);
	  }
#line 7974 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 429:
#line 4147 "rwlparser.y" /* yacc.c:1646  */
    {
	    bis(rwm->rslflags[rwm->rsldepth], RWL_RSLFLAG_WHILOP);
	  }
#line 7982 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 430:
#line 4153 "rwlparser.y" /* yacc.c:1646  */
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
#line 8003 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 431:
#line 4170 "rwlparser.y" /* yacc.c:1646  */
    {
              rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
              rwlexprclear(rwm);
              rwm->rslerror++; // to prevent attempting else/endif code generation
              yyerrok;
            }
#line 8014 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 432:
#line 4177 "rwlparser.y" /* yacc.c:1646  */
    {
              rwlerror(rwm, RWL_ERROR_UNEXPECTED_KEYWORD, "loop");
              rwlexprclear(rwm);
              rwm->rslerror++; // to prevent attempting else/endif code generation
              yyerrok;
            }
#line 8025 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 437:
#line 4194 "rwlparser.y" /* yacc.c:1646  */
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
#line 8045 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 438:
#line 4210 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (rwm->codename)
	      rwlerror(rwm, RWL_ERROR_NO_LOCAL_SUMGLOB);
	    else
	      bis(rwm->addvarbits,RWL_IDENT_GLOBAL);
	  }
#line 8056 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 439:
#line 4220 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dtype=RWL_TYPE_STR;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 8066 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 440:
#line 4226 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->dtype=RWL_TYPE_STR;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 8075 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 441:
#line 4234 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dtype=RWL_TYPE_INT;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 8085 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 442:
#line 4240 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->dtype=RWL_TYPE_INT;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 8094 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 443:
#line 4248 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dtype=RWL_TYPE_DBL;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 8104 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 444:
#line 4254 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->dtype=RWL_TYPE_DBL;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 8113 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 445:
#line 4262 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 8122 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 446:
#line 4267 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 8130 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 447:
#line 4273 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_CLOB; }
#line 8136 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 448:
#line 4274 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_BLOB; }
#line 8142 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 449:
#line 4275 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_NCLOB; }
#line 8148 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 450:
#line 4279 "rwlparser.y" /* yacc.c:1646  */
    { rwm->sqllino = rwm->loc.lineno;}
#line 8154 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 451:
#line 4280 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	    bic(rwm->m2flags, RWL_P2_BADSQLFILTXT);
	    bic(rwm->m3flags, RWL_P3_IMMEDSQL); 
	    bic(rwm->m3flags, RWL_P3_IMMISDYN); 
	    rwm->sqllen = 0;
	    rwm->sqname = rwm->inam;
	  }
#line 8168 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 453:
#line 4291 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_SQL_WRONG); yyerrok;
	  }
#line 8176 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 454:
#line 4294 "rwlparser.y" /* yacc.c:1646  */
    { rwm->sqllino = rwm->loc.lineno;}
#line 8182 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 455:
#line 4295 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bic(rwm->m2flags, RWL_P2_BADSQLFILTXT);
	    bic(rwm->m3flags, RWL_P3_IMMEDSQL); 
	    bic(rwm->m3flags, RWL_P3_IMMISDYN); 
	    rwm->sqllen = 0;
	    rwm->sqname = rwm->inam;
	  }
#line 8195 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 457:
#line 4305 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_SQL_WRONG); yyerrok;
	  }
#line 8203 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 460:
#line 4315 "rwlparser.y" /* yacc.c:1646  */
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
#line 8253 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 461:
#line 4362 "rwlparser.y" /* yacc.c:1646  */
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
#line 8288 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 462:
#line 4396 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->m4flags, RWL_P4_AMPERSAND) && rwldynarcheck(rwm))
	    {
	      rwlerror(rwm, RWL_ERROR_CANNOT_AMPREP_HERE, "named sql declaration");
	      rwm->mxq->evar[rwm->sqsavvarn].vtype = RWL_TYPE_CANCELLED;
	      rwm->mxq->evar[rwm->sqsavvarn].stype = "cancelled (sql)";
	    }
	  }
#line 8301 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 464:
#line 4409 "rwlparser.y" /* yacc.c:1646  */
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
#line 8379 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 465:
#line 4487 "rwlparser.y" /* yacc.c:1646  */
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
#line 8476 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 469:
#line 4590 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_BIND); yyerrok; }
#line 8482 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 471:
#line 4594 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_BINDOUT); yyerrok; }
#line 8488 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 473:
#line 4598 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DEFINE); yyerrok; }
#line 8494 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 474:
#line 4600 "rwlparser.y" /* yacc.c:1646  */
    {
		  bis(rwm->sqsav->flags, RWL_SQFLAG_IGNERR);
		}
#line 8502 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 475:
#line 4604 "rwlparser.y" /* yacc.c:1646  */
    {
		  bic(rwm->sqsav->flags, RWL_SQFLAG_NOCURC);
		}
#line 8510 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 476:
#line 4608 "rwlparser.y" /* yacc.c:1646  */
    {
		  bis(rwm->sqsav->flags, RWL_SQFLAG_NOCURC);
		}
#line 8518 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 477:
#line 4613 "rwlparser.y" /* yacc.c:1646  */
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
#line 8540 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 478:
#line 4632 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ARRAY); yyerrok; }
#line 8546 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 479:
#line 4637 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_MISSING_SEMICOLON_IN_SQL); }
#line 8552 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 482:
#line 4643 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->sqsav->flags, RWL_SQFLAG_DYNAMIC))
	      rwlerror(rwm, RWL_ERROR_DEFINE_ARRAY_NOT_DYNAMIC);
	    else
	      bis(rwm->sqsav->flags, RWL_SQFLAG_ARRAYD);
	  }
#line 8563 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 485:
#line 4657 "rwlparser.y" /* yacc.c:1646  */
    {
	  // Note that it would not be too hard to replace
	  // the integer constant here by an expression
	  // which would make sense as that is what
	  // can be done with modify sql for dynamic sql
	  rwm->bdpos = rwm->ival; rwm->bdtyp=RWL_DEFINE;
	}
#line 8575 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 487:
#line 4666 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->sqsav->flags, RWL_SQLFLAG_IDUSE))
	      rwlerror(rwm, RWL_ERROR_IMPLICIT_ALREADY, "define");
	    bis(rwm->sqsav->flags, RWL_SQLFLAG_IDUSE);
	  }
#line 8585 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 490:
#line 4680 "rwlparser.y" /* yacc.c:1646  */
    { rwm->bdname = rwm->sval; rwm->bdtyp=RWL_BINDOUT_NAME; }
#line 8591 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 492:
#line 4682 "rwlparser.y" /* yacc.c:1646  */
    { 
	    // We could also use expression here, but we would
	    // of course need to check it was either a non-negative number
	    // or a string starting with :
	    rwm->bdpos = bit(rwm->m2flags,RWL_P2_BINDZERO) ? rwm->ival+1 : rwm->ival;
	    rwm->bdtyp=RWL_BINDOUT_POS; 
	  }
#line 8603 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 494:
#line 4690 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->bdtyp=RWL_BINDOUT_SAME;
	  }
#line 8611 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 496:
#line 4694 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_IMPLICIT_NOT_BINDOUT);
	  }
#line 8619 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 499:
#line 4705 "rwlparser.y" /* yacc.c:1646  */
    { rwm->bdname = rwm->sval; rwm->bdtyp=RWL_BIND_NAME; }
#line 8625 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 501:
#line 4707 "rwlparser.y" /* yacc.c:1646  */
    { 
	    // same comment as above
	    rwm->bdpos = bit(rwm->m2flags,RWL_P2_BINDZERO) ? rwm->ival+1 : rwm->ival;
	    rwm->bdtyp=RWL_BIND_POS; 
	  }
#line 8635 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 503:
#line 4713 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->bdtyp=RWL_BIND_SAME;
	  }
#line 8643 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 505:
#line 4717 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->sqsav->flags, RWL_SQLFLAG_IBUSE))
	      rwlerror(rwm, RWL_ERROR_IMPLICIT_ALREADY, "bind");
	    bis(rwm->sqsav->flags, RWL_SQLFLAG_IBUSE);
	  }
#line 8653 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 506:
#line 4726 "rwlparser.y" /* yacc.c:1646  */
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
#line 8751 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 507:
#line 4822 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->inam = RWL_DUMMY_VAR;
	    rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2, "function", "runseconds", "bind/define");
	  }
#line 8760 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 508:
#line 4827 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->inam = RWL_DUMMY_VAR;
	    rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2, "function", "epochseconds", "bind/define");
	  }
#line 8769 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 509:
#line 4831 "rwlparser.y" /* yacc.c:1646  */
    { bic(rwm->m2flags,RWL_P2_BINDRAW); }
#line 8775 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 510:
#line 4832 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m2flags,RWL_P2_BINDRAW); }
#line 8781 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 511:
#line 4836 "rwlparser.y" /* yacc.c:1646  */
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
#line 8802 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 512:
#line 4853 "rwlparser.y" /* yacc.c:1646  */
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
#line 8823 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 513:
#line 4870 "rwlparser.y" /* yacc.c:1646  */
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
#line 8844 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 514:
#line 4887 "rwlparser.y" /* yacc.c:1646  */
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
#line 8871 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 515:
#line 4909 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 8877 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 516:
#line 4910 "rwlparser.y" /* yacc.c:1646  */
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
#line 8912 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 517:
#line 4941 "rwlparser.y" /* yacc.c:1646  */
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
#line 8937 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 518:
#line 4961 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 8943 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 519:
#line 4962 "rwlparser.y" /* yacc.c:1646  */
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
#line 8969 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 520:
#line 4984 "rwlparser.y" /* yacc.c:1646  */
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
#line 8988 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 522:
#line 4999 "rwlparser.y" /* yacc.c:1646  */
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
#line 9007 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 524:
#line 5014 "rwlparser.y" /* yacc.c:1646  */
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
#line 9026 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 528:
#line 5034 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 9032 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 529:
#line 5036 "rwlparser.y" /* yacc.c:1646  */
    { rwm->msqlstk = rwlexprfinish(rwm); }
#line 9038 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 530:
#line 5038 "rwlparser.y" /* yacc.c:1646  */
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
#line 9093 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 531:
#line 5091 "rwlparser.y" /* yacc.c:1646  */
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
#line 9127 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 532:
#line 5121 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->mdbsphi = rwm->mdbsplo = rwlexprfinish(rwm);
	    if (!rwm->mdbsplo)
	      rwlexprclear(rwm);
	  }
#line 9137 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 533:
#line 5127 "rwlparser.y" /* yacc.c:1646  */
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
#line 9170 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 535:
#line 5159 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (!(rwm->mdbsphi = rwlexprfinish(rwm)))
	      rwlexprclear(rwm);
	  }
#line 9179 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 536:
#line 5166 "rwlparser.y" /* yacc.c:1646  */
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
#line 9203 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 538:
#line 5189 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m3flags, RWL_P3_SPFCONCAT); }
#line 9209 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 539:
#line 5190 "rwlparser.y" /* yacc.c:1646  */
    { bic(rwm->m3flags, RWL_P3_SPFCONCAT); }
#line 9215 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 540:
#line 5194 "rwlparser.y" /* yacc.c:1646  */
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
#line 9239 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 541:
#line 5214 "rwlparser.y" /* yacc.c:1646  */
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
#line 9257 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 542:
#line 5232 "rwlparser.y" /* yacc.c:1646  */
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
#line 9280 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 544:
#line 5254 "rwlparser.y" /* yacc.c:1646  */
    {
	  rwm->conhead = rwm->contail = 0;
	}
#line 9288 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 545:
#line 5258 "rwlparser.y" /* yacc.c:1646  */
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
#line 9313 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 548:
#line 5286 "rwlparser.y" /* yacc.c:1646  */
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
#line 9336 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 549:
#line 5307 "rwlparser.y" /* yacc.c:1646  */
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
#line 9361 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 550:
#line 5329 "rwlparser.y" /* yacc.c:1646  */
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
#line 9386 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 551:
#line 5353 "rwlparser.y" /* yacc.c:1646  */
    {  
	    bic(rwm->mflags,RWL_P_PRINTLINE);
	    bic(rwm->mflags,RWL_P_PRINTTOFILE);
	  }
#line 9395 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 552:
#line 5358 "rwlparser.y" /* yacc.c:1646  */
    {  
	    bis(rwm->mflags,RWL_P_PRINTLINE);
	    bic(rwm->mflags,RWL_P_PRINTTOFILE);
	  }
#line 9404 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 554:
#line 5366 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->mflags,RWL_P_PRINTBLANK); }
#line 9410 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 556:
#line 5371 "rwlparser.y" /* yacc.c:1646  */
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
#line 9472 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 557:
#line 5432 "rwlparser.y" /* yacc.c:1646  */
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
#line 9508 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 558:
#line 5467 "rwlparser.y" /* yacc.c:1646  */
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
#line 9523 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 559:
#line 5482 "rwlparser.y" /* yacc.c:1646  */
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
#line 9570 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 560:
#line 5525 "rwlparser.y" /* yacc.c:1646  */
    { 
		rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 9580 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 562:
#line 5535 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_MISSING_SEMICOLON);
	    yyerrok;
	  }
#line 9589 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 563:
#line 5542 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_ASSIGN; }
#line 9595 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 564:
#line 5543 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_GREATEQ; }
#line 9601 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 565:
#line 5544 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_RSHIFTASSIGN; }
#line 9607 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 566:
#line 5545 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_LESSEQ; }
#line 9613 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 567:
#line 5546 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_PIPEFROM; }
#line 9619 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 568:
#line 5547 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_PIPETO; }
#line 9625 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 570:
#line 5551 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_APPEND; }
#line 9631 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 571:
#line 5552 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_ASNADD; }
#line 9637 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 572:
#line 5553 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_ASNSUB; }
#line 9643 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 573:
#line 5560 "rwlparser.y" /* yacc.c:1646  */
    {
		rwl_estack *estk;
		rwlexprpush(rwm, rwm->assignvar, RWL_STACK_ASN);
		estk = rwlexprfinish(rwm);
		rwlcodeaddp(rwm, RWL_CODE_ASSIGN, estk);
	      }
#line 9654 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 574:
#line 5567 "rwlparser.y" /* yacc.c:1646  */
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
#line 9684 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 576:
#line 5593 "rwlparser.y" /* yacc.c:1646  */
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
#line 9701 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 578:
#line 5607 "rwlparser.y" /* yacc.c:1646  */
    { 
		rwlerror(rwm, RWL_ERROR_LOOP);
		rwlexprclear(rwm);
		// prevent attempting endloop code generation
		rwm->loopvar[rwm->rsldepth] = 0;
		rwm->rsllityp[rwm->rsldepth] = RWL_LI_BAD;
		bic(rwm->rslflags[rwm->rsldepth], RWL_RSLFLAG_MAYBRK);
		yyerrok;
	      }
#line 9715 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 581:
#line 5626 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwl_lilist *thisli = rwlalloc(rwm, sizeof(rwl_lilist));
	    rwlexprpush(rwm, rwm->loopvar[rwm->rsldepth], RWL_STACK_ASN);
	    thisli->listk = rwlexprfinish(rwm);
	    rwm->rsllitail[rwm->rsldepth]->linxt = thisli;
	    rwm->rsllitail[rwm->rsldepth] = thisli;
	  }
#line 9727 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 584:
#line 5646 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 9736 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 585:
#line 5651 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 9744 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 588:
#line 5660 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "execute") ; }
#line 9750 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 591:
#line 5667 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "loop") ; }
#line 9756 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 594:
#line 5674 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "if") ; yyerrok; }
#line 9762 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 597:
#line 5681 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (0 != rwlstrcmp(rwm->inam, rwm->sqname))
	      rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END2, "sql", rwm->sqname);
	  }
#line 9771 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 598:
#line 5686 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END2, "sql", rwm->sqname) ; yyerrok; }
#line 9777 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 600:
#line 5692 "rwlparser.y" /* yacc.c:1646  */
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
#line 9792 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 601:
#line 5703 "rwlparser.y" /* yacc.c:1646  */
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
#line 9807 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 602:
#line 5714 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (bit(rwm->rslflags[rwm->rsldepth-1], RWL_RSLFLAG_WHILOP))
	      rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "loop") ;
	    else
	      rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "while") ;
	    yyerrok;
	  }
#line 9819 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 603:
#line 5725 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->cursorand = 0;
	  }
#line 9827 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 604:
#line 5730 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->cursorand = rwlexprfinish(rwm);
	  }
#line 9835 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 606:
#line 5737 "rwlparser.y" /* yacc.c:1646  */
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
#line 9894 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 607:
#line 5794 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->loc.errlin = 0;
	    rwm->sqlfile = 0; /* not from a file */
	  }
#line 9903 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 608:
#line 5799 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprbeg(rwm);
	  }
#line 9911 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 609:
#line 5803 "rwlparser.y" /* yacc.c:1646  */
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
#line 9996 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 610:
#line 5886 "rwlparser.y" /* yacc.c:1646  */
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
#line 10020 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 611:
#line 5906 "rwlparser.y" /* yacc.c:1646  */
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
#line 10047 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 612:
#line 5930 "rwlparser.y" /* yacc.c:1646  */
    { 
		rwlerror(rwm, RWL_ERROR_BAD_READLINE);
		yyerrok;
	      }
#line 10056 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 613:
#line 5937 "rwlparser.y" /* yacc.c:1646  */
    { rwm->reg_estk = rwm->str_estk = rwm->sub_estk = 0; }
#line 10062 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 614:
#line 5939 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->reg_estk = rwlexprfinish(rwm);
	  }
#line 10070 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 615:
#line 5943 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->str_estk = rwlexprfinish(rwm);
	  }
#line 10078 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 616:
#line 5947 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->sub_estk = rwlexprfinish(rwm);
	  }
#line 10086 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 617:
#line 5951 "rwlparser.y" /* yacc.c:1646  */
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
#line 10129 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 618:
#line 5990 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprclear(rwm);
	    rwlerror(rwm, RWL_ERROR_BAD_REGEX);
	    yyerrok;
	  }
#line 10139 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 619:
#line 5999 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->m2flags, RWL_P2_REGEXSUBG);
	  }
#line 10147 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 620:
#line 6003 "rwlparser.y" /* yacc.c:1646  */
    {
	    bis(rwm->m2flags, RWL_P2_REGEXSUBG);
	  }
#line 10155 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 621:
#line 6009 "rwlparser.y" /* yacc.c:1646  */
    { rwm->reg_estk = rwm->str_estk = 0; }
#line 10161 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 622:
#line 6011 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->reg_estk = rwlexprfinish(rwm);
	  }
#line 10169 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 623:
#line 6015 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->str_estk = rwlexprfinish(rwm);
	    rwm->idlist = rwm->idtail = 0;
	  }
#line 10178 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 624:
#line 6020 "rwlparser.y" /* yacc.c:1646  */
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
#line 10215 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 625:
#line 6054 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprclear(rwm);
	    rwlerror(rwm, RWL_ERROR_BAD_REGEX);
	    yyerrok;
	  }
#line 10225 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 626:
#line 6063 "rwlparser.y" /* yacc.c:1646  */
    { rwm->reg_estk = rwm->str_estk = 0; }
#line 10231 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 627:
#line 6065 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->reg_estk = rwlexprfinish(rwm);
	  }
#line 10239 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 628:
#line 6069 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->str_estk = rwlexprfinish(rwm);
	    rwm->idlist = rwm->idtail = 0;
	  }
#line 10248 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 629:
#line 6074 "rwlparser.y" /* yacc.c:1646  */
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
#line 10285 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 630:
#line 6108 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprclear(rwm);
	    rwlerror(rwm, RWL_ERROR_BAD_REGEX);
	    yyerrok;
	  }
#line 10295 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 633:
#line 6121 "rwlparser.y" /* yacc.c:1646  */
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
#line 10340 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 634:
#line 6164 "rwlparser.y" /* yacc.c:1646  */
    {
		/* start a dummy assignment such that the system expression gets executed */
		rwm->assignvar = RWL_DUMMY_VAR;
		rwm->assignoper = RWL_T_ASSIGN;
		rwlexprbeg(rwm);
	      }
#line 10351 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 635:
#line 6173 "rwlparser.y" /* yacc.c:1646  */
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
#line 10371 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 636:
#line 6198 "rwlparser.y" /* yacc.c:1646  */
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
#line 10386 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 637:
#line 6210 "rwlparser.y" /* yacc.c:1646  */
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
#line 10409 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 638:
#line 6229 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ILLEGAL_THREAD); yyerrok; }
#line 10415 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 643:
#line 6243 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->cqnstart = rwm->cqnstop = 0.0;
	    rwm->cqnnow = rwlclock(rwm->mxq,0);
	  }
#line 10424 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 644:
#line 6248 "rwlparser.y" /* yacc.c:1646  */
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
#line 10452 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 645:
#line 6273 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->cqnstop = rwm->pval.dval;
	    if (rwm->cqnstop < rwm->cqnstart || rwm->cqnstop < rwm->cqnnow)
	    {
	      rwlerror(rwm, RWL_ERROR_CQN_STOP_BEFORE_START, rwm->cqnstop, rwm->cqnstart, rwm->cqnnow);
	      rwm->cqnat = 0;
	    }
	  }
#line 10465 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 646:
#line 6282 "rwlparser.y" /* yacc.c:1646  */
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
#line 10521 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 647:
#line 6334 "rwlparser.y" /* yacc.c:1646  */
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
#line 10550 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 648:
#line 6359 "rwlparser.y" /* yacc.c:1646  */
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
#line 10582 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 649:
#line 6387 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlcodeaddu(rwm, RWL_CODE_CQNISCB, 0); // Is in callback
	    rwlcodetail(rwm);
	  }
#line 10591 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 653:
#line 6398 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "querynotification");
	    yyerrok;
	  }
#line 10600 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 655:
#line 6407 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->cqnstart = rwm->pval.dval;
	  }
#line 10608 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 656:
#line 6414 "rwlparser.y" /* yacc.c:1646  */
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
#line 10628 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 657:
#line 6432 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlcodetail(rwm);
	  }
#line 10636 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 659:
#line 6437 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ILLEGAL_THREAD); yyerrok; }
#line 10642 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 661:
#line 6442 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->mythr->dbnam = rwm->inam;
	  }
#line 10650 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 664:
#line 6451 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "threads") ; }
#line 10656 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 667:
#line 6459 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "run") ; }
#line 10662 "rwlparser.tab.c" /* yacc.c:1646  */
    break;


#line 10666 "rwlparser.tab.c" /* yacc.c:1646  */
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
