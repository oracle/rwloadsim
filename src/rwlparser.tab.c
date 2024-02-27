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
#line 150 "rwlparser.y" /* yacc.c:339  */

#include "rwl.h"

/*
  rwm is an argument to rwlyparse
*/
#define rwlyrwmscanner rwm->rwlyscanner

struct rwl_yt2txt
{
  const char *ytoken;
  const char *etext;
};

typedef struct rwl_yt2txt rwl_yt2txt;

static const rwl_yt2txt rwlyt2[] = 
{
    {"RWL_T_ABORT", "'abort'"}
  , {"RWL_T_ACCESS", "'access'"}
  , {"RWL_T_ACTIVESESSIONCOUNT", "'activesessioncount'"}
  , {"RWL_T_ALL", "'all'"}
  , {"RWL_T_AND", "'and'"}
  , {"RWL_T_APPEND", "'||='"}
  , {"RWL_T_ARRAY", "'array'"}
  , {"RWL_T_ASNPLUS", "'+='"}
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


#line 366 "rwlparser.tab.c" /* yacc.c:339  */

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
    RWL_T_ASNPLUS = 332,
    RWL_T_STOP = 333,
    RWL_T_START = 334,
    RWL_T_COUNT = 335,
    RWL_T_AT = 336,
    RWL_T_BREAK = 337,
    RWL_T_RETURN = 338,
    RWL_T_ABORT = 339,
    RWL_T_MODIFY = 340,
    RWL_T_CURSORCACHE = 341,
    RWL_T_NOCURSORCACHE = 342,
    RWL_T_LEAK = 343,
    RWL_T_SHIFT = 344,
    RWL_T_WHEN = 345,
    RWL_T_STATISTICS = 346,
    RWL_T_NOSTATISTICS = 347,
    RWL_T_FUNCTION = 348,
    RWL_T_PUBLIC = 349,
    RWL_T_OCIPING = 350,
    RWL_T_QUEUE = 351,
    RWL_T_NOQUEUE = 352,
    RWL_T_PRIVATE = 353,
    RWL_T_BEGIN = 354,
    RWL_T_RELEASE = 355,
    RWL_T_SYSTEM = 356,
    RWL_T_CLOB = 357,
    RWL_T_BLOB = 358,
    RWL_T_NCLOB = 359,
    RWL_T_READLOB = 360,
    RWL_T_WRITELOB = 361,
    RWL_T_RAW = 362,
    RWL_T_EXIT = 363,
    RWL_T_SUBSTR = 364,
    RWL_T_SUBSTRB = 365,
    RWL_T_LENGTH = 366,
    RWL_T_LENGTHB = 367,
    RWL_T_SQL_ID = 368,
    RWL_T_GETENV = 369,
    RWL_T_LOG = 370,
    RWL_T_EXP = 371,
    RWL_T_ROUND = 372,
    RWL_T_ACTIVESESSIONCOUNT = 373,
    RWL_T_REQUESTMARK = 374,
    RWL_T_SPRINTF = 375,
    RWL_T_OPENSESSIONCOUNT = 376,
    RWL_T_STATEMARK = 377,
    RWL_T_REGEXSUB = 378,
    RWL_T_REGEXSUBG = 379,
    RWL_T_SERVERRELEASE = 380,
    RWL_T_SQL = 381,
    RWL_T_SQL_TEXT = 382,
    RWL_T_INSTR = 383,
    RWL_T_INSTRB = 384,
    RWL_T_CONNECTIONPOOL = 385,
    RWL_T_CONNECTIONCLASS = 386,
    RWL_T_UNSIGNED = 387,
    RWL_T_HEXADECIMAL = 388,
    RWL_T_OCTAL = 389,
    RWL_T_FPRINTF = 390,
    RWL_T_ENCODE = 391,
    RWL_T_DECODE = 392,
    RWL_T_STRING_CONST = 393,
    RWL_T_IDENTIFIER = 394,
    RWL_T_INTEGER_CONST = 395,
    RWL_T_DOUBLE_CONST = 396,
    RWL_T_PRINTF = 397,
    RWL_T_PIPEFROM = 398,
    RWL_T_PIPETO = 399,
    RWL_T_RSHIFTASSIGN = 400,
    RWL_T_GLOBAL = 401,
    RWL_T_QUERYNOTIFICATION = 402,
    RWL_T_NORMALRANDOM = 403,
    RWL_T_STATISTICSONLY = 404,
    RWL_T_CEIL = 405,
    RWL_T_TRUNC = 406,
    RWL_T_FLOOR = 407,
    RWL_T_LOBPREFETCH = 408,
    RWL_T_SIN = 409,
    RWL_T_COS = 410,
    RWL_T_ATAN2 = 411,
    RWL_T_WINSLASHF2B = 412,
    RWL_T_WINSLASHF2BB = 413,
    RWL_T_UMINUS = 414
  };
#endif

/* Value type.  */
#if ! defined RWLYSTYPE && ! defined RWLYSTYPE_IS_DECLARED

union RWLYSTYPE
{
#line 459 "rwlparser.y" /* yacc.c:355  */

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

#line 588 "rwlparser.tab.c" /* yacc.c:355  */
};

typedef union RWLYSTYPE RWLYSTYPE;
# define RWLYSTYPE_IS_TRIVIAL 1
# define RWLYSTYPE_IS_DECLARED 1
#endif



int rwlyparse (rwl_main *rwm);

#endif /* !YY_RWLY_RWLPARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 604 "rwlparser.tab.c" /* yacc.c:358  */

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
#define YYLAST   5270

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  175
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  288
/* YYNRULES -- Number of rules.  */
#define YYNRULES  657
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1205

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   414

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   167,     2,     2,     2,   166,     2,     2,
     170,   171,   164,   163,   172,   162,     2,   165,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   174,   169,
     160,   159,   161,   173,     2,     2,     2,     2,     2,     2,
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
     155,   156,   157,   158,   168
};

#if RWLYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   516,   516,   523,   527,   529,   528,   549,   550,   551,
     553,   556,   564,   566,   583,   582,   592,   591,   600,   599,
     609,   608,   618,   623,   632,   633,   637,   636,   643,   648,
     656,   657,   661,   660,   668,   667,   740,   745,   746,   758,
     759,   762,   763,   766,   776,   781,   789,   802,   833,   844,
     894,   893,   909,   919,   918,   935,   945,   955,   965,   978,
     979,   982,   990,  1000,  1011,  1026,  1027,  1039,  1041,  1040,
    1053,  1054,  1060,  1059,  1087,  1094,  1101,  1102,  1106,  1107,
    1110,  1123,  1122,  1174,  1186,  1185,  1206,  1211,  1218,  1223,
    1230,  1315,  1316,  1320,  1329,  1330,  1333,  1334,  1335,  1339,
    1340,  1344,  1372,  1374,  1376,  1378,  1393,  1398,  1403,  1411,
    1412,  1414,  1416,  1435,  1437,  1436,  1452,  1451,  1467,  1466,
    1482,  1525,  1539,  1553,  1567,  1579,  1583,  1584,  1585,  1586,
    1587,  1588,  1589,  1590,  1591,  1592,  1593,  1594,  1595,  1596,
    1597,  1599,  1601,  1603,  1605,  1606,  1609,  1612,  1613,  1617,
    1622,  1623,  1624,  1626,  1628,  1629,  1631,  1642,  1653,  1657,
    1663,  1667,  1673,  1677,  1683,  1688,  1692,  1700,  1698,  1725,
    1731,  1737,  1741,  1742,  1746,  1747,  1751,  1756,  1757,  1758,
    1763,  1764,  1765,  1766,  1770,  1771,  1772,  1773,  1777,  1778,
    1779,  1783,  1784,  1785,  1786,  1787,  1788,  1792,  1793,  1794,
    1798,  1800,  1799,  1817,  1819,  1818,  1834,  1836,  1845,  1835,
    1860,  1861,  1865,  1866,  1876,  1877,  1881,  1889,  1892,  1891,
    1898,  1901,  1900,  1904,  1906,  1908,  1910,  1913,  1919,  1948,
    1965,  1967,  1968,  1972,  1974,  1978,  1980,  1985,  1984,  1991,
    1990,  2002,  2007,  2006,  2014,  2018,  2042,  2068,  2066,  2094,
    2092,  2202,  2211,  2210,  2214,  2213,  2218,  2224,  2223,  2233,
    2232,  2241,  2254,  2259,  2253,  2287,  2295,  2300,  2294,  2329,
    2336,  2352,  2351,  2364,  2380,  2391,  2397,  2403,  2415,  2427,
    2437,  2447,  2446,  2459,  2465,  2463,  2581,  2588,  2604,  2606,
    2608,  2608,  2609,  2612,  2614,  2616,  2613,  2618,  2622,  2621,
    2736,  2769,  2777,  2802,  2776,  2853,  2854,  2855,  2856,  2858,
    2859,  2867,  2868,  2876,  2877,  2886,  2889,  2888,  2897,  2899,
    2907,  2915,  2924,  2932,  2934,  2941,  2942,  2953,  2989,  2990,
    2989,  3046,  3047,  3046,  3091,  3108,  3090,  3149,  3156,  3162,
    3163,  3167,  3318,  3317,  3465,  3471,  3474,  3490,  3494,  3498,
    3505,  3506,  3510,  3510,  3524,  3524,  3540,  3540,  3556,  3556,
    3570,  3570,  3601,  3602,  3603,  3606,  3612,  3611,  3621,  3620,
    3638,  3637,  3685,  3700,  3709,  3684,  3746,  3754,  3755,  3755,
    3768,  3767,  3774,  3775,  3776,  3782,  3783,  3787,  3791,  3799,
    3803,  3807,  3815,  3816,  3822,  3828,  3830,  3833,  3834,  3839,
    3838,  3940,  3942,  3941,  3996,  4000,  4004,  4005,  4009,  4024,
    4033,  4048,  4057,  4061,  4067,  4084,  4091,  4101,  4102,  4103,
    4107,  4108,  4124,  4134,  4140,  4148,  4154,  4162,  4168,  4176,
    4181,  4188,  4189,  4190,  4194,  4195,  4194,  4205,  4209,  4210,
    4209,  4219,  4226,  4227,  4230,  4230,  4311,  4309,  4323,  4400,
    4497,  4498,  4502,  4503,  4506,  4507,  4510,  4511,  4514,  4518,
    4522,  4526,  4545,  4551,  4553,  4556,  4557,  4566,  4567,  4572,
    4571,  4580,  4590,  4591,  4595,  4595,  4597,  4596,  4605,  4604,
    4608,  4615,  4616,  4620,  4620,  4622,  4621,  4628,  4627,  4631,
    4640,  4736,  4741,  4746,  4747,  4750,  4767,  4784,  4801,  4824,
    4824,  4855,  4876,  4876,  4899,  4898,  4914,  4913,  4929,  4928,
    4945,  4946,  4949,  4951,  4949,  5005,  5036,  5035,  5072,  5073,
    5081,  5080,  5104,  5105,  5109,  5108,  5147,  5146,  5169,  5169,
    5196,  5197,  5200,  5221,  5243,  5267,  5272,  5280,  5281,  5281,
    5285,  5346,  5381,  5396,  5436,  5445,  5446,  5454,  5455,  5456,
    5457,  5458,  5459,  5462,  5463,  5464,  5471,  5478,  5469,  5504,
    5504,  5517,  5530,  5531,  5535,  5548,  5549,  5556,  5561,  5568,
    5569,  5570,  5575,  5576,  5577,  5582,  5583,  5584,  5589,  5590,
    5591,  5596,  5601,  5602,  5613,  5624,  5635,  5639,  5646,  5647,
    5704,  5710,  5709,  5797,  5796,  5840,  5848,  5850,  5854,  5858,
    5847,  5900,  5909,  5913,  5920,  5922,  5926,  5919,  5964,  5974,
    5976,  5980,  5973,  6018,  6027,  6028,  6031,  6074,  6083,  6109,
    6108,  6139,  6145,  6146,  6149,  6150,  6154,  6159,  6184,  6193,
    6245,  6270,  6298,  6153,  6306,  6307,  6308,  6316,  6317,  6325,
    6343,  6324,  6347,  6351,  6352,  6359,  6360,  6361,  6367,  6368,
    6369,  6374,  6375,  6376,  6377,  6378,  6379,  6380
};
#endif

#if RWLYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "RWL_T_CONNECT", "RWL_T_USERNAME",
  "RWL_T_PASSWORD", "RWL_T_DATABASE", "RWL_T_EPOCHSECONDS", "RWL_T_PRINT",
  "RWL_T_PRINTLINE", "RWL_T_PRINTVAR", "RWL_T_SHARDKEY", "RWL_T_SUPERSHK",
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
  "RWL_T_COMMIT", "RWL_T_ROLLBACK", "RWL_T_EVERY", "RWL_T_ASNPLUS",
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
  "$@45", "$@46", "$@47", "$@48", "$@49", "$@50", "$@51", "$@52", "$@53",
  "maybecomma", "docallonesql", "dosqlloop", "$@54", "controlloopheader",
  "controllooplistandend", "controlloopheadend", "controllooplist",
  "controlloopoption", "$@55", "$@56", "$@57", "$@58", "$@59",
  "maybequeue", "callsql", "$@60", "$@61", "embeddedsql", "$@62",
  "immediatesql", "$@63", "$@64", "$@65", "getdynamicorinlineimmsql",
  "$@66", "immediatesqlheader", "$@67", "immediatesqlendsqlisok",
  "immediatesqltail", "immediateatclause", "executehead",
  "maybeatdatabase", "declinitlist", "declinit", "$@68", "declinitassign",
  "$@69", "ifstatements", "elseifstatements", "maybeelseiflist", "ifhead",
  "elseifhead", "whileheadkeyword", "whilehead", "whileheadwrongkeyword",
  "maybethreadsattr", "maybeprivatestring", "maybeprivateinteger",
  "maybeprivatedouble", "maybeprivatelob", "eitherlobtype",
  "sqldeclaration", "$@70", "$@71", "$@72", "$@73", "namedsqldeclaration",
  "dynamicsqlbody", "$@74", "staticsqlbody", "$@75", "addsqlvariable",
  "parsesqlspecifications", "sqlspeclist", "sqlspec", "musthaveterminator",
  "maybearraydefine", "definelist", "defineelement", "$@76", "bindoutlist",
  "bindoutelement", "$@77", "$@78", "$@79", "bindlist", "bindelement",
  "$@80", "$@81", "$@82", "bdidentifier", "bdidentname", "modsqlstatement",
  "$@83", "$@84", "$@85", "$@86", "$@87", "modsqlbdlist", "modsqlbd",
  "$@88", "$@89", "moddbstatement", "$@90", "moddbsespmaybedotdot",
  "printf", "$@91", "sprintfheader", "sprintf", "$@92", "fprintf", "$@93",
  "handlefprintflist", "$@94", "printflist", "printfelement", "write",
  "print", "printlist", "$@95", "printelement", "pwterminator",
  "pfterminator", "assignrightside", "assignterminator",
  "declassignoperator", "assignoperator", "loopiterator", "$@96", "$@97",
  "$@98", "commaconcatenationlist", "commaconcatenation",
  "loopiteratorrecover", "maybeprivatefile", "executeterminator",
  "loopterminator", "ifterminator", "sqlterminator", "whileterminator",
  "maybeandexpression", "getstaticsqltext", "getinlinesql", "$@99",
  "readfromfile", "$@100", "regexsub", "$@101", "$@102", "$@103", "$@104",
  "regexsuborsubg", "regextract", "$@105", "$@106", "$@107", "regex",
  "$@108", "$@109", "$@110", "readlist", "readlistelement", "systemstart",
  "systemfinish", "threadexecution", "$@111", "threadlistp", "threadorcqn",
  "cqnthread", "$@112", "$@113", "$@114", "$@115", "$@116", "$@117",
  "$@118", "cqnterminator", "maybecqnstart", "thread", "$@119", "$@120",
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
     405,   406,   407,   408,   409,   410,   411,   412,   413,    61,
      60,    62,    45,    43,    42,    47,    37,    33,   414,    59,
      40,    41,    44,    63,    58
};
# endif

#define YYPACT_NINF -929

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-929)))

#define YYTABLE_NINF -641

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -929,    75,   123,  -929,  2970,  -100,   110,  -929,  -100,   284,
    -929,  -929,  -929,   226,  1821,  1894,  -929,    96,  1967,   114,
     129,   501,  -929,   131,   135,   -36,  -929,  -100,  2040,    92,
    5100,  -100,  -100,   -42,  1590,  -100,    86,  -100,  -929,  -100,
     360,   172,  -929,  -929,  -929,  -929,  -929,  -929,  2113,    45,
    -929,  -929,   125,  -929,   136,    66,  -929,  -929,  -929,  -929,
    -929,  -929,    52,    99,    99,   138,   143,  -929,  -929,  -100,
     210,  -100,  1513,  -929,    53,  -929,  -929,    55,   116,   120,
     145,  -929,    60,    69,   128,  -100,  -100,  1207,  2186,   149,
    -929,  -929,  2259,  -929,  -929,  5100,  -929,  -929,  -100,  -929,
    -929,  -100,  -929,   358,  -929,  -100,   195,   336,   219,   313,
     210,  -100,  5100,  -100,  5100,   372,    21,   261,   -36,   240,
     245,   260,   338,   345,   359,   -36,  -929,   385,  5100,   389,
     401,   410,   413,   427,   438,   452,   457,   460,   462,   480,
     484,  -929,   487,  -929,  -929,   496,   500,   507,   509,   510,
     518,   519,   520,   521,  5100,  5100,  5100,   366,  -929,  -929,
     331,   383,   373,   -18,   409,   -12,  -929,   421,  -100,  -100,
    -100,  -929,   441,   499,  -100,  -929,  -100,  -929,   275,  -100,
    -929,  2332,   475,   473,    28,   222,  -929,  -929,  -100,  -929,
    -100,  -929,  5100,  -929,  -100,   411,   485,  -929,  -929,  -929,
    -929,  -929,  -929,   515,  -929,  -929,   150,  -929,  -100,   497,
     553,  -100,  5100,  -100,   555,  -929,   678,   627,   561,  -929,
    -100,   529,  -100,   572,  1371,   466,  -929,  -100,  -929,  -929,
    -929,  -929,  -929,  -929,  -929,  -929,  -100,  -929,  -100,  -929,
     425,  -929,   363,  -929,  -100,  -929,   694,   248,  -929,    24,
    -929,  2711,  3105,  -100,   291,  5100,  -929,  -100,   574,  -100,
     574,  -100,  -929,   388,  -929,  -100,  -100,  -100,  -929,  -929,
    -100,  -929,  -929,  -929,  -929,  -929,  -100,  5100,  -929,  5100,
    -929,  -100,  4889,  -929,   392,  -929,  -100,   574,  -100,  5100,
      23,  -929,  5100,  -929,   576,  -929,  -929,  -929,   666,  -929,
    -929,  5100,   669,   313,  -929,  -929,  -929,  -929,  -929,   613,
    2405,  -929,   214,  -929,  -929,  -929,  -929,  -929,  -929,  -929,
    -929,  -929,  -929,  -929,  5100,  5100,  5100,  5100,  5100,  5100,
    -929,  5100,  -929,  5100,  5100,  5100,    43,  5100,  5100,  5100,
    5100,   151,   156,   139,  5100,  -929,  5100,  5100,  5100,  5100,
    5100,  5100,  5100,  5100,  5100,  -929,  -929,   546,   456,  5100,
    5100,  5100,  5100,  5100,  5100,  5100,  5100,  5100,  5100,  5100,
    5100,  -929,  -929,  -929,  5100,  -929,  -929,  -929,  -929,   549,
     583,   586,  -929,  -929,  -929,  -929,  -100,    73,  -929,  -929,
    -929,  -929,  -929,  -929,  -929,  -929,  -929,  -929,  -100,  -100,
    5100,  -929,  -929,   706,   707,   710,   590,  -929,   558,   558,
    -929,  -929,  -929,  -929,  -929,  -929,  -929,  -929,  -929,  -929,
    -929,   683,   593,  -100,  5100,  -929,  -929,  -929,  -929,  -929,
    -929,  -929,  -929,  -929,  2332,  -929,  5100,  -929,  -100,  -100,
    -100,  -929,  3240,  -929,  -929,   564,  -929,   564,  -929,  -929,
    -929,  -929,  -929,  -929,  -929,   252,  -929,   659,  -929,  -929,
    -929,  -929,  -929,  -929,  -929,  -929,  -929,  -929,  5100,  -929,
    3375,  -100,  -100,  -929,  -929,  -929,   130,   371,   415,   455,
     281,  -929,  -929,   665,    44,  -929,  -929,  -929,   566,   674,
     574,  -929,   388,  -929,   388,  -929,   347,   574,  -929,  -929,
    -929,  -929,  -929,  5100,  -929,   392,   392,  -929,  -929,  -929,
    -929,  -929,   388,  -929,  -929,  -100,   600,  -100,   310,  -929,
    -929,  -929,   549,  2478,   313,   674,  -929,  -929,   669,   568,
     569,  -929,  -929,  -929,  -929,  -929,  -929,  -100,   724,  -929,
     662,    51,  -929,    -1,   573,     9,   209,   221,   247,   232,
      30,   575,   577,   578,   579,  -929,   581,   216,   237,   254,
     582,   584,   585,   587,   588,   591,   592,   594,   595,  5100,
     255,   273,   274,   276,   277,   278,   257,   597,   601,  -929,
    -929,   691,  -929,  -929,  -929,   331,   331,   383,   383,   318,
     383,   383,   373,   373,  5100,  5100,  5100,  -929,   618,   400,
    -929,  -929,  -929,  -929,  -100,  -929,  -929,  -100,  -929,  -929,
    -100,   206,   533,   621,   622,  -929,  -929,  -929,  -929,  -929,
    -100,  4751,  -929,  -929,  -929,  -929,   602,   599,  -929,  -929,
    -929,  -929,   605,  -929,  -929,  -929,  -929,  -929,    74,   681,
      10,  5100,  5100,  5100,  5100,  -929,  -929,  -929,  -929,  -929,
    -929,  -929,  -929,  5100,  -929,   609,    50,  -929,  -929,  3510,
    -100,  -100,  -929,  -100,  -929,  -100,   765,   773,  -100,  2551,
    -929,  -929,  -100,  -100,  -100,  -929,  -929,   746,   388,  -929,
    -929,  -929,  -929,  -929,   605,  -929,  -929,  5100,  -929,   608,
    -929,  -929,  -929,  -929,  4962,  5100,  5100,   734,  -929,  5100,
    -929,  -929,  -929,  -929,  5100,  5100,  5100,  -100,   310,  -929,
       7,    -3,   754,  -929,   669,  -929,  -929,  5100,  5100,  -929,
     613,   702,   645,  -100,  -100,  -929,  -929,  -929,  5100,  5100,
    -929,  -929,  5100,  -929,   614,  -929,   648,  5100,  -929,  -929,
    -929,  -929,  -929,  5100,  -929,  5100,  -929,  -929,  -929,  -929,
    -929,  -929,  -929,  -929,  -929,  5100,   617,  5100,  -929,  -929,
    -929,  -929,  -929,  5100,  -929,  -929,  -929,  5100,   -18,   409,
     615,  -929,  -929,  -929,    46,    48,  -929,  -929,  -929,  5100,
    5100,  -100,  -929,  -929,  -929,   718,  -929,  -929,  -929,  -929,
    -929,  -100,  -929,  -929,  4751,   652,  5100,  -929,   624,  -929,
    -929,  -929,  -929,  -929,  -929,  -929,    57,  5100,  5100,   625,
    -929,  -929,  -929,  -929,  -929,  -929,   446,  -929,   653,   300,
    -929,  -929,  -929,  -929,   674,   674,   674,   674,  3645,  5100,
    -100,  -929,  -929,  -100,  -100,  -929,  -929,    24,  -929,  -929,
    -929,  -929,  5100,  -929,  -100,  -100,  -929,   730,   537,  2846,
    -929,  -929,  -929,  -929,  -929,  5100,  -929,  5100,  -100,   658,
    -929,  -929,  -929,  -929,  -929,   454,  -929,  -929,  -929,  -929,
    -929,   747,  -929,  -929,  -929,  -929,   628,  3780,  -929,  3915,
    -929,  -929,  -100,   663,  -929,  -929,  -929,  -929,   280,   283,
     286,  -929,   632,   271,   298,   302,   463,  -929,   303,   305,
     383,  -929,  -100,   668,  -929,  -100,   667,  -929,   674,   674,
    -929,  -929,  -929,  5100,  -929,  5100,  -929,  -929,    46,    48,
    -929,  -100,  -100,  -929,   611,  -929,  -100,   127,  -929,  -929,
    -929,  -929,  5100,  -929,   300,  -929,  -929,    59,   674,  -929,
    -929,   349,   623,  -929,  -929,  -929,  4050,  -929,  -929,  -929,
    -929,  -929,   574,  -929,  -929,  -929,  -929,   454,   781,  -929,
    -929,  -929,   781,  -929,  5100,  5100,    33,  -929,    59,    59,
     549,   549,  -929,  -929,  4185,   731,  -929,  -929,  -929,  -929,
    -929,  5100,  -929,  -929,  -929,  5100,  -929,  -929,  5100,  -929,
    -929,   468,  -929,  -929,  -929,   490,  -929,   783,   640,  -929,
    5100,   640,  -929,   674,   640,  -929,  -929,  -929,  -929,    16,
      32,  -929,  1748,    22,  -100,  -100,  -100,  -929,  -929,  -929,
    -100,  -100,  -100,   643,  -929,  -100,  -100,  -929,  -929,  -929,
    -929,  -929,  -929,    51,  4320,   388,   644,  5100,   715,   715,
    -929,  -929,  -929,  -929,  -929,  -929,  -929,   400,   400,   799,
    5100,   740,   306,   307,  -929,  5100,  -100,   668,  5100,  -100,
     667,  5100,  -929,  -929,   674,  -100,  -929,  -929,  -929,  -929,
     412,  -929,  -100,  -929,  -929,   424,  -929,  -100,  -929,  5100,
    -100,  -929,  -929,  -929,  -929,   426,  -929,  -929,  -929,  -929,
    -929,  -929,  -929,  -929,  -929,  -929,  -929,   210,  -929,    61,
    -929,  5100,  -929,  5100,   748,  -929,  4455,   768,  -929,  -929,
      61,  -929,  5100,  -929,  -929,  -929,  -929,  -929,  -929,  -929,
    -929,   674,  -929,   684,  -929,    65,    65,    65,   380,  -929,
    -929,    65,    -7,  -929,  -929,  -100,  -929,    65,    65,    65,
     418,  -929,  -929,  -100,  -100,  -929,  -929,  -929,  -929,  5100,
    -929,    59,  -929,  -929,  -929,  -929,  -929,  -929,   713,  -929,
    -929,  -929,  -929,  -929,  -929,  -929,  -929,  -929,  -929,  -929,
    -929,  -929,  -929,   650,  -929,  -929,   736,  -929,   685,   761,
    -929,  -100,   -27,  -929,  -929,  -929,  -929,   660,  4579,  -929,
     767,  5100,  -929,   664,  -929,  -929,  4714,   813,   103,  -100,
    -100,  -929,  -929,  -929,  -929
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       4,     0,     5,     1,     0,     0,     0,   535,   536,     0,
      89,   424,   426,     0,     0,     0,   428,     0,     0,     0,
       0,     0,   568,     0,     0,    94,   344,   257,     0,   389,
       0,     0,     0,     0,     0,     0,     0,     0,    87,     0,
       0,     0,   617,   431,   432,   433,   328,   331,     0,     0,
     602,   603,     0,   370,     0,     0,   520,     3,   228,     6,
       8,    12,     0,    78,    78,     0,     0,     7,   334,     0,
     290,     0,     0,   298,     0,   214,   214,     0,     0,     0,
       0,   430,     0,     0,     0,     0,     0,     0,     0,     0,
     305,   307,     0,   308,   306,     0,     9,   338,     0,    34,
     322,     0,    93,     0,    91,     0,     0,   365,     0,   586,
     385,     0,     0,     0,     0,     0,     0,     0,    94,     0,
       0,     0,     0,     0,     0,    94,   125,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   124,   121,   123,   122,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   177,   180,   184,
     188,   191,   197,   200,   203,   206,   210,     0,     0,     0,
       0,   593,     0,     0,     0,   533,     0,   534,     0,     0,
     325,     0,     0,     0,     0,     0,   277,   278,     0,   327,
       0,   261,     0,   229,     0,     0,     0,   279,   287,    88,
     423,   425,   427,     0,   567,    86,     0,   429,     0,     0,
       0,     0,     0,     0,     0,   523,     0,     0,     0,   448,
       0,     0,     0,   366,     0,     0,   528,     0,   116,   114,
     118,   113,    13,    79,   214,   214,     0,    81,     0,    84,
     362,   341,     0,   341,     0,   341,     0,   378,   214,     0,
     247,     0,     0,     0,     0,     0,   237,     0,     0,     0,
       0,     0,   399,     0,   397,     0,     0,     0,   578,   230,
       0,   542,   313,   524,   311,   309,     0,     0,   541,     0,
     315,     0,   212,   540,     0,   537,     0,     0,     0,     0,
       0,    36,    37,    10,     0,    11,   251,   302,     0,   380,
     295,     0,     0,   586,   386,   613,   610,   608,   605,   651,
       0,   626,     0,   622,   625,   624,   413,   419,   417,   418,
     412,   415,   416,   170,     0,     0,     0,     0,     0,     0,
     169,     0,   183,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   167,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   181,   182,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   201,   204,   207,     0,   414,   301,   300,   595,     0,
       0,     0,   320,   321,    95,   280,     0,     0,   258,   409,
     408,   390,   391,   270,   326,   265,   263,   283,     0,     0,
       0,   271,   281,     0,     0,     0,     0,   276,   339,   339,
     269,   267,   312,   522,   441,   381,   439,   371,   310,   526,
     337,     0,     0,     0,   172,   547,   550,   548,   554,   555,
     551,   552,   549,   553,     0,   521,     0,   120,     0,     0,
       0,    77,     0,    76,    80,    96,    83,    96,   358,   354,
     352,   356,   363,   364,   335,   362,   350,     0,   288,   387,
     388,   291,   341,   292,   376,   591,   590,   448,     0,   377,
       0,     0,     0,   575,   246,   214,     0,     0,     0,     0,
       0,   215,   216,   404,     0,   241,   421,   422,     0,    74,
       0,   234,     0,   236,     0,   232,   401,     0,   231,   581,
     579,   580,   314,     0,   319,     0,     0,   324,   213,   538,
     323,   244,     0,   601,   597,     0,     0,     0,    39,    38,
      75,    92,     0,     0,   586,   587,   342,   293,     0,     0,
       0,   653,   657,   654,   656,   652,   655,     0,     0,   639,
       0,     0,   623,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   164,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   172,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   171,
     178,     0,   185,   186,   187,   190,   189,   194,   195,     0,
     192,   193,   199,   198,     0,     0,     0,   211,     0,     0,
     614,    20,    16,   544,     0,   545,   543,     0,   274,   275,
       0,     0,     0,     0,     0,   437,   435,   340,   329,   332,
       0,   444,   528,   367,   369,   286,     0,   173,   174,   176,
     260,   532,   529,   530,   117,   115,   119,    90,     0,     0,
     109,     0,     0,     0,     0,   214,   349,   348,   347,   346,
     351,   360,   289,     0,   373,     0,     0,   577,   576,     0,
       0,     0,   221,     0,   218,     0,     0,     0,     0,     0,
     407,   214,     0,     0,     0,   582,   245,   420,     0,   233,
     235,   400,   402,   398,   525,   318,   317,     0,   243,     0,
     256,   254,   618,   253,     0,     0,     0,     0,    55,     0,
      58,    59,    49,    48,     0,     0,     0,     0,    40,    41,
     586,     0,   559,   214,     0,   214,   297,     0,     0,   621,
     651,   643,     0,     0,     0,   648,   620,   135,     0,     0,
     150,   151,     0,   154,     0,   147,     0,     0,   139,   166,
     165,   144,   128,     0,   130,     0,   134,   163,   162,   161,
     160,   159,   157,   156,   158,     0,     0,     0,   131,   132,
     133,   136,   137,     0,   145,   146,   179,     0,   202,   205,
       0,   616,   594,   615,     0,     0,   546,   264,   273,     0,
       0,     0,   506,   504,   502,   499,   508,   496,   497,   495,
     501,     0,    18,    14,   444,     0,     0,   268,     0,   440,
     443,   450,   442,   448,   588,   527,     0,     0,     0,   104,
     102,   103,   106,   108,   107,    97,     0,    99,     0,     0,
     111,   112,   110,    85,   359,   355,   353,   357,     0,     0,
     463,   450,   379,     0,     0,   569,   299,     0,   224,   223,
     214,   220,     0,   217,     0,     0,   225,     0,     0,     0,
     585,   583,   584,   239,   238,     0,   539,     0,     0,     0,
      46,    43,    44,    59,    53,    56,    52,    50,    45,    35,
      42,     0,   566,   565,   561,   556,     0,     0,   296,     0,
     611,   606,     0,     0,   214,   627,   650,   649,     0,     0,
       0,   149,     0,     0,     0,     0,     0,   168,     0,     0,
     196,   208,     0,     0,    21,     0,     0,    17,   516,   515,
     272,   512,   512,     0,   498,     0,   512,   282,     0,     0,
     436,     0,     0,   589,     0,   446,     0,     0,   392,   285,
     175,   531,     0,    98,     0,   101,    82,     0,   361,   464,
     592,   382,     0,   571,   570,   248,     0,   214,   226,   227,
     411,   410,     0,   403,   598,   255,    47,    57,    63,    62,
      61,    60,    63,   303,     0,     0,     0,   562,     0,     0,
       0,     0,   642,   644,     0,   637,   155,   126,   152,   148,
     142,     0,   127,   129,   140,     0,   153,   138,     0,    29,
      32,     0,    30,    23,    26,     0,    24,   518,   507,   510,
       0,   505,   503,   500,   509,    19,    15,   330,   333,     0,
       0,   445,     0,     0,   463,   463,   463,   451,   450,   396,
       0,     0,     0,     0,   100,     0,     0,   572,   336,   383,
     384,   374,   449,     0,     0,     0,     0,     0,    65,    65,
     214,   557,   564,   560,   563,   250,   343,     0,     0,     0,
       0,     0,     0,     0,   209,     0,     0,     0,     0,     0,
       0,     0,   517,   512,   513,     0,   489,   483,   485,   487,
     463,   481,     0,   471,   469,   463,   467,     0,   466,     0,
       0,   480,   474,   476,   478,   463,   472,   458,   459,   460,
     447,   395,   393,   394,   105,   574,   573,   385,   222,     0,
     240,     0,    64,     0,    67,    51,     0,     0,   612,   607,
       0,   638,     0,   143,   141,    33,    28,    31,    27,    22,
      25,   519,   511,     0,   453,     0,     0,     0,     0,   452,
     457,     0,     0,   456,   462,   463,   455,     0,     0,     0,
       0,   454,   375,     0,     0,   645,   219,   599,    66,     0,
      54,     0,   558,   641,   628,   514,   492,   491,   493,   484,
     490,   486,   488,   482,   470,   468,   461,   475,   477,   479,
     473,   647,   646,     0,    68,   304,     0,   494,     0,    70,
     629,     0,     0,    69,   214,   600,    71,     0,     0,    72,
       0,   172,   631,     0,   214,    73,     0,     0,     0,     0,
       0,   634,   633,   636,   635
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -929,  -929,    -5,  -929,  -929,  -929,  -929,  -929,  -929,  -929,
    -929,   -85,  -929,  -224,  -929,   -81,  -929,  -216,  -929,  -929,
    -929,  -929,  -929,  -929,   134,  -929,  -929,   -20,  -929,  -118,
    -193,  -929,  -929,  -929,  -929,  -304,  -282,  -929,   784,  -929,
    -929,  -929,  -929,  -929,  -929,   612,  -929,   556,   -11,   402,
    -929,   -83,    35,  -929,  -929,  -929,  -929,  -929,  -929,  -929,
    -568,  -929,    49,  -929,   253,   -69,  -329,   317,   258,   262,
    -929,  -929,  -929,  -372,  -929,  -929,   239,   370,   -71,  -929,
    -929,  -929,   851,  -929,  -929,  -929,  -929,  -929,  -929,  -929,
    -929,  -929,  -929,  -929,  -929,  -929,  -929,  -929,  -929,  -929,
    -929,  -929,  -929,  -929,  -929,  -929,  -929,  -929,  -929,  -929,
    -929,  -929,   449,  -225,  -507,  -929,  -929,  -929,  -929,  -929,
     404,  -929,  -929,  -929,  -929,  -929,  -929,   847,  -929,  -929,
     848,  -929,   755,  -929,  -929,  -929,  -929,  -929,  -929,  -929,
    -929,  -235,   794,  -929,  -929,  -244,   368,  -929,  -929,  -929,
    -929,  -929,  -929,  -929,  -929,   699,  -929,  -929,   -70,  -929,
    -929,  -929,  -929,   -28,  -929,  -929,  -929,  -929,  -929,    76,
    -929,  -929,  -929,  -929,  -452,  -151,    67,  -929,  -707,  -929,
    -929,  -263,  -929,  -929,  -269,  -929,  -929,  -929,  -929,  -256,
    -929,  -929,  -929,  -455,  -929,  -929,  -929,  -929,  -929,  -929,
    -929,  -552,  -189,  -929,  -929,  -929,  -929,  -929,  -929,  -929,
    -929,  -929,  -929,  -929,  -929,   256,  -929,   376,    77,  -929,
    -929,   327,  -929,   188,  -265,   589,   450,  -929,   390,  -929,
    -929,  -929,  -929,  -929,  -929,   -79,  -929,  -929,  -929,  -928,
      54,  -929,  -929,  -290,  -929,   641,  -929,  -929,  -929,  -929,
    -929,  -929,  -929,  -929,  -929,  -929,  -929,  -929,  -929,  -929,
    -929,  -929,  -929,  -511,  -592,  -929,    31,  -929,  -929,  -929,
     580,  -929,  -929,  -929,  -929,  -929,  -929,  -929,  -929,  -929,
    -929,  -929,  -929,  -929,  -929,  -220,  -139,   175
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    58,     2,     4,    59,    60,   919,   775,   918,
     774,   907,   995,   996,  1058,   904,   991,   992,  1055,    61,
     292,   518,   707,   708,   709,   962,   958,   865,   961,  1038,
    1104,  1150,  1179,  1183,  1191,   488,   798,    62,   234,    63,
     445,    64,   447,    65,    66,   441,   103,   104,   179,   639,
     816,   817,   818,   823,   232,   439,   438,   440,   157,   569,
     626,   627,   628,   158,   159,   160,   161,   162,   163,   164,
     594,   165,   595,   166,   596,   988,   282,   520,   442,   481,
     842,   840,   482,   490,   952,   287,   475,   298,   517,   858,
     181,   225,   192,   607,   212,   620,   611,   612,   424,   243,
     108,   524,   248,   522,  1040,   279,   209,   795,   210,   796,
     240,   645,   618,   458,   527,   715,    68,   454,   649,   455,
     456,   643,   642,   644,   641,   829,   457,    69,   421,   422,
      70,   219,    71,   247,   831,  1097,   467,   468,    72,   217,
    1031,   303,   304,    73,   929,   263,   264,   496,   681,   855,
      74,   670,   483,    75,   671,   321,    76,   322,   256,    77,
      78,    79,    80,    81,    82,   406,   794,   218,   621,   799,
     800,   801,   802,  1018,   417,   941,   942,  1017,   940,  1079,
    1075,  1076,  1131,  1085,  1086,  1137,  1138,  1139,  1070,  1071,
    1125,  1126,  1127,  1159,  1160,   791,   915,   913,   912,   911,
     916,   998,   999,  1000,  1123,   781,   997,  1062,    83,   226,
      84,    85,   503,    86,   622,   435,   436,   632,   633,    87,
      88,   284,   687,   285,   280,   272,   388,   606,   433,   434,
     713,   964,  1107,   876,   966,   967,   874,    89,   836,  1028,
     474,   269,   676,   302,   803,   804,   653,    90,   379,    91,
     289,   689,  1036,  1173,    92,    93,   114,   530,   971,    94,
     112,   529,   970,   599,   600,    95,   693,    96,   116,   312,
     313,   314,   540,   975,  1176,  1184,  1190,  1194,  1197,  1202,
    1051,   315,   721,  1049,   884,  1146,   726,   537
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      97,   756,   597,   100,   251,   252,   539,   773,   258,   260,
     519,   710,   207,   528,   492,   654,   494,  1065,   461,   510,
     463,   716,   180,  1080,   515,   471,   186,   187,   189,   191,
     193,   734,   197,  1072,   198,   587,   588,   589,   590,   591,
    1045,  1046,   369,   512,   553,   672,   213,   902,   872,   905,
     372,   833,   723,   227,   310,  1186,   253,   231,   926,   332,
    1025,   265,  1143,   374,   241,   228,   245,   222,   301,    57,
     270,   249,  1156,   374,   604,     3,   391,   268,   271,   673,
     271,   271,   278,   724,  1043,   355,   356,   194,   254,   472,
     809,   810,   195,   291,  1144,   674,   293,   115,   295,  1157,
     296,   820,   821,   811,  1199,   188,   305,   323,   307,   214,
    1026,    98,  1187,   812,   330,   168,  -259,   257,   773,  1073,
     250,   259,   834,    -2,  -259,  -259,   216,    57,  1020,  -619,
     170,   660,   174,  1074,   178,  -259,   176,   220,   927,   236,
     564,   370,  1066,  -259,   238,   229,   261,   223,  1081,   254,
     286,   405,   560,   254,  1067,   233,  1068,   562,  1073,   822,
    1082,   373,  1083,   376,   377,   378,    57,   392,   311,   382,
     727,   383,  1074,   184,   385,  1021,   813,   470,   208,   598,
     393,   729,   554,   394,   215,   395,   266,   565,   566,   397,
    1069,   230,  -252,    57,  -420,   516,  1084,  -380,   661,   267,
     814,   735,   736,   407,  1158,   965,   410,   878,   412,  -259,
    -259,  -259,   196,    57,   555,   418,   903,   420,   906,    57,
      57,    57,   437,  1175,   770,   255,    57,   105,    57,    57,
      57,   444,   541,   446,   714,  -365,   224,   652,    57,   462,
     685,   686,    57,  -619,   473,   815,   678,   310,   485,    99,
    1200,   779,   491,   169,   493,  -420,   495,   167,   498,  -420,
     499,   500,   501,   106,  -438,   502,  1022,   183,   171,   185,
     175,   504,    57,   374,   177,   221,   507,   237,   567,   278,
     374,   511,   239,   513,   262,   374,   374,   465,  -242,  -434,
     561,   242,   780,   585,   586,   563,   374,   200,   201,  -345,
     273,   374,  -345,   646,  -345,  -345,  -345,  1087,  1088,  1089,
     202,   374,   316,   694,   695,   696,   809,   810,   374,   374,
     204,   374,  -345,  -345,   647,   448,   317,   318,   319,   811,
     449,   450,   451,   320,   297,   374,   101,   374,   374,   812,
     374,   374,   374,   697,   374,   299,   486,   374,   452,   453,
     374,   925,  -294,    53,   698,   699,   700,   701,   702,   703,
    1001,   311,   374,  1129,  1004,   107,   374,   374,  1133,   374,
     374,   374,   662,   199,   301,   466,   200,   201,  1141,   767,
     730,   603,   605,    43,    44,    45,  -249,   742,   743,   202,
     309,    57,   731,   608,   609,   864,   704,   425,   203,   204,
     866,   867,   813,   733,   659,   426,   427,   206,   744,   745,
     324,   459,   860,   861,   862,   325,   664,   223,   625,   732,
     871,    57,   358,   102,   868,   746,   814,   757,  1166,   763,
     326,   364,   365,   634,   635,   636,   366,   487,   900,   663,
     705,   706,   980,   981,   758,   759,   384,   760,   761,   762,
     648,   976,   207,   205,   977,   773,   773,   978,   283,  1047,
    1048,   380,    43,    44,    45,   290,   657,   658,   666,   982,
     371,   667,   316,   983,   986,  1029,   987,  1113,  1114,   675,
     362,   363,   306,   665,   308,   374,   206,   679,  1030,   680,
     430,   431,   432,   320,   489,   359,   360,   361,   448,   398,
     278,   278,   460,   449,   450,   451,  1066,   688,   327,   580,
     690,   399,   692,   581,   172,   328,   425,   173,  1067,   381,
    1068,   452,   453,   668,   426,   427,   357,    57,   403,   329,
     294,   404,   719,   367,   368,   428,   725,   374,   947,   390,
     525,   389,   400,   429,  1081,   362,   363,   782,   783,   489,
     401,   387,   784,   785,  1069,   331,  1082,    57,  1083,   333,
     497,    57,   396,   543,   509,   545,   546,   547,   548,    57,
     549,   334,   598,   959,   828,   786,   960,   557,   558,   559,
     335,    57,   411,   336,  1128,   570,   571,   572,   573,   574,
     575,   576,  1084,    57,   772,    57,  1132,   337,  1140,   776,
     849,   374,   777,   951,   505,   778,   506,   853,   338,   430,
     431,   432,   582,   583,   584,   797,  1054,   933,   934,   787,
     788,   789,   339,  1193,   402,  1009,  1010,   340,  1023,  1011,
     341,  1012,   342,   790,   984,   985,   408,  1009,  1010,  1056,
    1057,  1032,   877,  1012,   879,   531,   532,   283,   533,   283,
     343,   835,   508,  1013,   344,   838,   839,   345,   841,   514,
     843,  1059,  1060,   846,   534,  1013,   346,   850,   851,   852,
     347,  1161,  1162,   854,   274,   275,  1164,   348,   535,   349,
     350,  1014,  1167,  1168,  1169,   536,   592,   593,   351,   352,
     353,   354,   409,  1014,   413,   544,   414,  1015,  1016,   415,
     416,   419,   869,   550,   551,   552,   873,   556,  1035,  1015,
    1016,  -368,   464,   262,   568,   102,   523,   579,   886,   887,
     526,   598,   601,   577,   578,   602,   613,   614,   615,   616,
     617,   623,   624,  1102,   638,   651,   669,   677,   374,   691,
     717,   718,   720,   722,   766,   728,  1111,   737,   738,   739,
     740,  1115,   741,   747,  1118,   748,   749,   771,   750,   751,
     792,   793,   752,   753,   819,   754,   844,   755,   764,   946,
     610,   807,   765,   806,   845,  1135,   910,   808,   832,   254,
     857,   863,   875,   883,   885,   891,   917,   892,   897,   901,
     914,   921,   935,   923,   629,   932,   950,   956,   963,  1148,
     965,   928,   973,   979,   387,   994,   631,   990,  1154,  1037,
    1050,  1061,  1063,   974,  1094,  1103,  1101,  1110,  1112,  1152,
    1177,  1149,  1178,  1155,  1181,   939,  1180,  1182,   943,   944,
    1189,  1198,   473,  1192,  1006,  1195,  1120,  1005,   655,   948,
     949,  1117,   870,   957,  1039,  1174,  1105,   443,   235,   640,
     521,  1024,   768,   692,   936,    67,   930,   769,   619,   650,
     109,   110,  1142,   300,   244,   683,   375,  1090,   924,  1165,
     920,  1170,  1163,   631,  1122,   856,  1034,   972,   805,   684,
     824,   825,   826,   827,   630,   931,   682,  1044,   469,   955,
    1153,   945,   542,   712,  1098,   882,     0,   989,     0,     0,
     993,     0,     0,     0,     0,     0,     0,     0,   848,     0,
       0,     0,     0,     0,     0,     0,  1007,  1008,     0,     0,
       0,  1019,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1027,     0,     0,     0,     0,     0,   489,   629,
       0,     0,     0,   489,   489,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1027,  1027,     0,     0,   888,   889,  1106,
       0,   890,     0,     0,     0,     0,   893,     0,     0,     0,
       0,     0,   894,     0,   895,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   898,     0,     0,     0,
       0,     0,   899,     0,     0,     0,     0,     0,     0,   939,
     939,   939,     0,     0,     0,  1091,  1092,  1093,   908,   909,
    1095,  1096,     0,   830,     0,     0,     0,     0,   725,     0,
    1100,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1108,  1109,     0,     0,     0,     0,     0,     0,
       0,  1116,     0,     0,  1119,     0,     0,   283,     0,     0,
    1124,     0,     0,     0,     0,   939,     0,  1130,   938,     0,
     939,     0,  1134,     0,     0,  1136,     0,     0,     0,     0,
     939,   489,     0,     0,     0,     0,     0,   880,   881,     0,
       0,     0,     0,     0,  1145,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1145,     0,     0,     0,     0,
       0,     0,     0,  1188,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1196,     0,   896,     0,     0,     0,     0,
     939,     0,     0,     0,     0,     0,     0,     0,  1171,  1172,
       0,     0,     0,     0,     0,     0,  1027,     0,     0,     0,
       0,     0,     0,     0,  1003,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   922,     0,     0,     0,
       0,   489,     0,     0,     0,     0,  1185,   629,   631,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1201,  1203,  1204,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   276,     0,
       0,     0,     0,     0,  -316,     0,     0,     0,     0,     0,
    1052,     0,     0,     0,  1053,   953,     0,   954,     0,  -316,
    -316,     0,     0,  -316,  -316,     0,     0,  -316,  -316,  1064,
       0,  -316,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -316,  -316,     0,     0,  -316,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   489,     0,     0,     0,
       0,     0,     0,  1002,     0,     0,     0,     0,     0,   489,
       0,     0,     0,     0,   489,     0,     0,   489,     0,     0,
    1121,     0,     0,     0,     0,     0,     0,     0,  -316,     0,
       0,     0,     0,     0,     0,     0,     0,  -316,   489,  -316,
    -316,  -316,  -316,  -316,  -316,  -316,     0,     0,  -316,     0,
       0,     0,  -316,     0,  1041,  1042,  -316,     0,     0,     0,
       0,     0,   489,     0,     0,  -316,  -316,  -316,  -316,     0,
       0,   489,     0,     0,     0,  -316,     0,  -316,  -316,  -316,
       0,  -316,  -316,  -316,  -316,  -316,     0,     0,     0,  -316,
       0,     0,   423,     0,  -316,     0,    57,  -316,  -284,   277,
       0,     0,     0,     0,     0,     0,     0,     0,   489,     0,
       0,     0,     0,  -284,  -284,     0,     0,  -284,  -284,     0,
       0,  -284,  -284,     0,     0,  -284,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -284,  -284,     0,     0,  -284,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1147,  -284,     0,     0,     0,     0,     0,     0,     0,
       0,  -284,     0,  -284,  -284,  -284,  -284,  -284,  -284,  -284,
       0,     0,  -284,     0,     0,     0,  -284,     0,     0,     0,
    -284,     0,     0,     0,     0,     0,     0,     0,     0,  -284,
    -284,  -284,  -284,     0,   246,     0,     0,     0,     0,  -284,
    -372,  -284,  -284,  -284,     0,  -284,  -284,  -284,  -284,  -284,
       0,     0,     0,  -284,     0,  -372,  -372,     0,  -284,  -372,
    -372,  -284,  -284,  -372,  -372,     0,     0,  -372,     0,     0,
       0,     0,  -372,     0,     0,     0,     0,     0,     0,     0,
       0,   629,     0,     0,     0,     0,  -372,  -372,     0,     0,
    -372,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   190,     0,     0,     0,     0,     0,  -262,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -262,  -262,  -372,     0,  -262,  -262,     0,     0,
    -262,  -262,     0,  -372,  -262,  -372,  -372,  -372,  -372,  -372,
    -372,  -372,     0,     0,  -372,     0,     0,     0,  -372,     0,
    -372,     0,  -372,  -262,  -262,     0,     0,  -262,     0,     0,
       0,  -372,  -372,  -372,  -372,     0,     0,     0,     0,     0,
       0,  -372,     0,  -372,  -372,  -372,     0,  -372,  -372,  -372,
    -372,  -372,     0,     0,     0,  -372,     0,     0,     0,     0,
    -372,     0,     0,  -372,     0,     0,     0,     0,     0,     0,
       0,  -262,     0,     0,     0,     0,     0,     0,     0,     0,
    -262,     0,  -262,  -262,  -262,  -262,  -262,  -262,  -262,     0,
       0,  -262,     0,     0,     0,  -262,     0,     0,     0,  -262,
       0,     0,     0,     0,     0,     0,     0,     0,  -262,  -262,
    -262,  -262,     0,     0,     0,     0,     0,     0,  -262,     0,
    -262,  -262,  -262,     0,  -262,  -262,  -262,  -262,  -262,  1077,
       0,     0,  -262,     0,     0,  -465,     0,  -262,     0,    57,
    -262,     0,     0,  1078,     0,     0,     0,     0,     0,     0,
    -465,  -465,     0,     0,  -465,  -465,     0,     0,  -465,  -465,
       0,     0,  -465,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -465,  -465,     0,     0,  -465,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   111,     0,     0,     0,     0,     0,  -609,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -609,  -609,     0,     0,  -609,  -609,  -465,
       0,  -609,  -609,     0,     0,  -609,     0,     0,  -465,     0,
    -465,  -465,  -465,  -465,  -465,  -465,  -465,     0,     0,  -465,
       0,     0,     0,  -465,  -609,  -609,     0,  -465,  -609,     0,
       0,     0,     0,     0,     0,     0,  -465,  -465,  -465,  -465,
       0,     0,     0,     0,     0,   113,  -465,     0,  -465,  -465,
    -465,  -604,  -465,  -465,  -465,  -465,  -465,     0,     0,     0,
    -465,     0,     0,     0,     0,  -465,  -604,  -604,  -465,     0,
    -604,  -604,  -609,     0,  -604,  -604,     0,     0,  -604,     0,
       0,  -609,     0,  -609,  -609,  -609,  -609,  -609,  -609,  -609,
       0,     0,  -609,     0,     0,     0,  -609,  -604,  -604,     0,
    -609,  -604,     0,     0,     0,     0,     0,     0,     0,  -609,
    -609,  -609,  -609,     0,     0,     0,     0,     0,   117,  -609,
       0,  -609,  -609,  -609,   118,  -609,  -609,  -609,  -609,  -609,
       0,     0,     0,  -609,     0,     0,     0,     0,  -609,   119,
     120,  -609,     0,   121,   122,  -604,     0,   123,   124,     0,
       0,   125,     0,     0,  -604,     0,  -604,  -604,  -604,  -604,
    -604,  -604,  -604,     0,     0,  -604,     0,     0,     0,  -604,
     126,   127,     0,  -604,   128,     0,     0,     0,     0,     0,
       0,     0,  -604,  -604,  -604,  -604,     0,     0,     0,     0,
       0,   182,  -604,     0,  -604,  -604,  -604,   118,  -604,  -604,
    -604,  -604,  -604,     0,     0,     0,  -604,     0,     0,     0,
       0,  -604,   119,   120,  -604,     0,   121,   122,   129,     0,
     123,   124,     0,     0,   125,     0,     0,   130,     0,   131,
     132,   133,   134,   135,   136,   137,     0,     0,   138,     0,
       0,     0,   139,   126,   127,     0,   140,   128,     0,     0,
       0,     0,     0,     0,     0,   141,   142,   143,   144,     0,
       0,     0,     0,     0,   211,   145,     0,   146,   147,   148,
    -266,   149,   150,   151,   152,   153,     0,     0,     0,   154,
       0,     0,     0,     0,   155,  -266,  -266,   156,     0,  -266,
    -266,   129,     0,  -266,  -266,     0,     0,  -266,     0,     0,
     130,     0,   131,   132,   133,   134,   135,   136,   137,     0,
       0,   138,     0,     0,     0,   139,  -266,  -266,     0,   140,
    -266,     0,     0,     0,     0,     0,     0,     0,   141,   142,
     143,   144,     0,     0,     0,     0,     0,   281,   145,     0,
     146,   147,   148,   118,   149,   150,   151,   152,   153,     0,
       0,     0,   154,     0,     0,     0,     0,   155,   119,   120,
     156,     0,   121,   122,  -266,     0,   123,   124,     0,     0,
     125,     0,     0,  -266,     0,  -266,  -266,  -266,  -266,  -266,
    -266,  -266,     0,     0,  -266,     0,     0,     0,  -266,   126,
     127,     0,  -266,   128,     0,     0,     0,     0,     0,     0,
       0,  -266,  -266,  -266,  -266,     0,     0,     0,     0,     0,
     288,  -266,     0,  -266,  -266,  -266,  -596,  -266,  -266,  -266,
    -266,  -266,     0,     0,     0,  -266,     0,     0,     0,     0,
    -266,  -596,  -596,  -266,     0,  -596,  -596,   129,     0,  -596,
    -596,     0,     0,  -596,     0,     0,   130,     0,   131,   132,
     133,   134,   135,   136,   137,     0,     0,   138,     0,     0,
       0,   139,  -596,  -596,     0,   140,  -596,     0,     0,     0,
       0,     0,     0,     0,   141,   142,   143,   144,     0,     0,
       0,     0,     0,   386,   145,     0,   146,   147,   148,   118,
     149,   150,   151,   152,   153,     0,     0,     0,   154,     0,
       0,     0,     0,   155,   119,   120,   156,     0,   121,   122,
    -596,     0,   123,   124,     0,     0,   125,     0,     0,  -596,
       0,  -596,  -596,  -596,  -596,  -596,  -596,  -596,     0,     0,
    -596,     0,     0,     0,  -596,   126,   127,     0,  -596,   128,
       0,     0,     0,     0,     0,     0,     0,  -596,  -596,  -596,
    -596,     0,     0,     0,     0,     0,   538,  -596,     0,  -596,
    -596,  -596,   118,  -596,  -596,  -596,  -596,  -596,     0,     0,
       0,  -596,     0,     0,     0,     0,  -596,   119,   120,  -596,
       0,   121,   122,   129,     0,   123,   124,     0,     0,   125,
       0,     0,   130,     0,   131,   132,   133,   134,   135,   136,
     137,     0,     0,   138,     0,     0,     0,   139,   126,   127,
       0,   140,   128,     0,     0,     0,     0,     0,     0,     0,
     141,   142,   143,   144,     0,     0,     0,     0,     0,   711,
     145,     0,   146,   147,   148,   118,   149,   150,   151,   152,
     153,     0,     0,     0,   154,     0,     0,     0,     0,   155,
     119,   120,   156,     0,   121,   122,   129,     0,   123,   124,
       0,     0,   125,     0,     0,   130,     0,   131,   132,   133,
     134,   135,   136,   137,     0,     0,   138,     0,     0,     0,
     139,   126,   127,     0,   140,   128,     0,     0,     0,     0,
       0,     0,     0,   141,   142,   143,   144,     0,     0,     0,
       0,     0,   847,   145,     0,   146,   147,   148,   118,   149,
     150,   151,   152,   153,     0,     0,     0,   154,     0,     0,
       0,     0,   155,   119,   120,   156,     0,   121,   122,   129,
       0,   123,   124,     0,     0,   125,     0,     0,   130,     0,
     131,   132,   133,   134,   135,   136,   137,     0,     0,   138,
       0,     0,     0,   139,   126,   127,     0,   140,   128,     0,
       0,     0,     0,     0,     0,     0,   141,   142,   143,   144,
       0,     0,     0,     0,     0,     0,   145,     0,   146,   147,
     148,     0,   149,   150,   151,   152,   153,     0,     0,     0,
     154,     0,     0,     0,     0,   155,     0,     0,   156,     0,
       0,     0,   129,     0,     0,     0,     0,     0,     0,     0,
       0,   130,     0,   131,   132,   133,   134,   135,   136,   137,
       0,     0,   138,     0,     0,     0,   139,     0,     0,     0,
     140,     0,     0,     0,     0,     0,     0,     0,     0,   141,
     142,   143,   144,     0,     0,     0,     0,     0,     0,   145,
       0,   146,   147,   148,     0,   149,   150,   151,   152,   153,
       0,     0,     5,   154,     0,     0,     0,   476,   155,     7,
       8,   156,     0,     0,     0,     0,     0,    11,    12,  -406,
      13,     0,     0,     0,     0,    14,    15,     0,     0,     0,
      16,     0,     0,   477,   478,     0,    18,    19,    20,   479,
      22,    23,    24,     0,    25,     0,     0,     0,     0,     0,
       0,     0,    26,     0,    27,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,     0,  -406,     0,
       0,     0,  -406,    29,    30,    31,    32,     0,     0,     0,
       0,     0,     0,    33,    34,    35,    36,     0,     0,     0,
      37,     0,     0,     0,     0,     0,    39,     0,     0,   480,
       0,    41,    42,    43,    44,    45,    46,    47,     0,    48,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    49,     0,     0,    50,    51,     0,    52,    53,     0,
       0,     0,     0,     0,     0,     0,    54,     5,     0,     0,
      55,     0,   476,    56,     7,     8,     0,     0,     0,     0,
       0,     0,    11,    12,  -405,    13,     0,     0,     0,     0,
      14,    15,     0,     0,     0,    16,     0,     0,   477,   478,
      57,    18,    19,    20,   479,    22,    23,    24,     0,    25,
       0,     0,     0,     0,     0,     0,     0,    26,     0,    27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    28,     0,  -405,     0,     0,     0,  -405,    29,    30,
      31,    32,     0,     0,     0,     0,     0,     0,    33,    34,
      35,    36,     0,     0,     0,    37,     0,     0,     0,     0,
       0,    39,     0,     0,   480,     0,    41,    42,    43,    44,
      45,    46,    47,     0,    48,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    49,     0,     0,    50,
      51,     5,    52,    53,     0,     0,     6,     0,     7,     8,
       9,    54,     0,    10,     0,    55,    11,    12,    56,    13,
       0,     0,     0,     0,    14,    15,     0,     0,     0,    16,
       0,     0,    17,     0,     0,    18,    19,    20,    21,    22,
      23,    24,     0,    25,     0,    57,     0,     0,     0,     0,
       0,    26,     0,    27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,     0,     0,     0,
       0,     0,    29,    30,    31,    32,     0,     0,     0,     0,
       0,     0,    33,    34,    35,    36,     0,     0,     0,    37,
       0,     0,     0,    38,     0,    39,     0,     0,    40,     0,
      41,    42,    43,    44,    45,    46,    47,     0,    48,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      49,     0,     0,    50,    51,     0,    52,    53,     0,     0,
       0,     0,     0,     0,     0,    54,     5,     0,     0,    55,
       0,   476,    56,     7,     8,     0,     0,     0,     0,     0,
       0,    11,    12,   484,    13,     0,     0,     0,     0,    14,
      15,     0,     0,     0,    16,     0,     0,   477,   478,    57,
      18,    19,    20,   479,    22,    23,    24,     0,    25,     0,
       0,     0,     0,     0,     0,     0,    26,     0,    27,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      28,     0,     0,     0,     0,     0,     0,    29,    30,    31,
      32,     0,     0,     0,     0,     0,     0,    33,    34,    35,
      36,     0,     0,     0,    37,     0,     0,     0,     0,     0,
      39,     0,     0,   480,     0,    41,    42,    43,    44,    45,
      46,    47,     0,    48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    49,     0,     0,    50,    51,
       0,    52,    53,     0,     0,     0,     0,     0,     0,     0,
      54,     5,     0,     0,    55,     0,   476,    56,     7,     8,
       0,     0,     0,     0,     0,     0,    11,    12,   637,    13,
       0,     0,     0,     0,    14,    15,     0,     0,     0,    16,
       0,     0,   477,   478,    57,    18,    19,    20,   479,    22,
      23,    24,     0,    25,     0,     0,     0,     0,     0,     0,
       0,    26,     0,    27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,     0,     0,     0,
       0,     0,    29,    30,    31,    32,     0,     0,     0,     0,
       0,     0,    33,    34,    35,    36,     0,     0,     0,    37,
       0,     0,     0,     0,     0,    39,     0,     0,   480,     0,
      41,    42,    43,    44,    45,    46,    47,     0,    48,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      49,     0,     0,    50,    51,     0,    52,    53,     0,     0,
       0,     0,     0,     0,     0,    54,     5,     0,     0,    55,
       0,   476,    56,     7,     8,     0,     0,     0,     0,     0,
       0,    11,    12,   656,    13,     0,     0,     0,     0,    14,
      15,     0,     0,     0,    16,     0,     0,   477,   478,    57,
      18,    19,    20,   479,    22,    23,    24,     0,    25,     0,
       0,     0,     0,     0,     0,     0,    26,     0,    27,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      28,     0,     0,     0,     0,     0,     0,    29,    30,    31,
      32,     0,     0,     0,     0,     0,     0,    33,    34,    35,
      36,     0,     0,     0,    37,     0,     0,     0,     0,     0,
      39,     0,     0,   480,     0,    41,    42,    43,    44,    45,
      46,    47,     0,    48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    49,     0,     0,    50,    51,
       0,    52,    53,     0,     0,     0,     0,     0,     0,     0,
      54,     5,     0,     0,    55,     0,   476,    56,     7,     8,
       0,     0,     0,     0,     0,     0,    11,    12,   837,    13,
       0,     0,     0,     0,    14,    15,     0,     0,     0,    16,
       0,     0,   477,   478,    57,    18,    19,    20,   479,    22,
      23,    24,     0,    25,     0,     0,     0,     0,     0,     0,
       0,    26,     0,    27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,     0,     0,     0,
       0,     0,    29,    30,    31,    32,     0,     0,     0,     0,
       0,     0,    33,    34,    35,    36,     0,     0,     0,    37,
       0,     0,     0,     0,     0,    39,     0,     0,   480,     0,
      41,    42,    43,    44,    45,    46,    47,     0,    48,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      49,     0,     0,    50,    51,     0,    52,    53,     0,     0,
       0,     0,     0,     0,     0,    54,     5,     0,     0,    55,
       0,   476,    56,     7,     8,     0,     0,     0,     0,     0,
       0,    11,    12,   937,    13,     0,     0,     0,     0,    14,
      15,     0,     0,     0,    16,     0,     0,   477,   478,    57,
      18,    19,    20,   479,    22,    23,    24,     0,    25,     0,
       0,     0,     0,     0,     0,     0,    26,     0,    27,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      28,     0,     0,     0,     0,     0,     0,    29,    30,    31,
      32,     0,     0,     0,     0,     0,     0,    33,    34,    35,
      36,     0,     0,     0,    37,     0,     0,     0,     0,     0,
      39,     0,     0,   480,     0,    41,    42,    43,    44,    45,
      46,    47,     0,    48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    49,     0,     0,    50,    51,
       0,    52,    53,     0,     0,     0,     0,     0,     0,     0,
      54,     5,     0,     0,    55,     0,   476,    56,     7,     8,
       0,     0,     0,     0,     0,     0,    11,    12,   968,    13,
       0,     0,     0,     0,    14,    15,     0,     0,     0,    16,
       0,     0,   477,   478,    57,    18,    19,    20,   479,    22,
      23,    24,     0,    25,     0,     0,     0,     0,     0,     0,
       0,    26,     0,    27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,     0,     0,     0,
       0,     0,    29,    30,    31,    32,     0,     0,     0,     0,
       0,     0,    33,    34,    35,    36,     0,     0,     0,    37,
       0,     0,     0,     0,     0,    39,     0,     0,   480,     0,
      41,    42,    43,    44,    45,    46,    47,     0,    48,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      49,     0,     0,    50,    51,     0,    52,    53,     0,     0,
       0,     0,     0,     0,     0,    54,     5,     0,     0,    55,
       0,   476,    56,     7,     8,     0,     0,     0,     0,     0,
       0,    11,    12,   969,    13,     0,     0,     0,     0,    14,
      15,     0,     0,     0,    16,     0,     0,   477,   478,    57,
      18,    19,    20,   479,    22,    23,    24,     0,    25,     0,
       0,     0,     0,     0,     0,     0,    26,     0,    27,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      28,     0,     0,     0,     0,     0,     0,    29,    30,    31,
      32,     0,     0,     0,     0,     0,     0,    33,    34,    35,
      36,     0,     0,     0,    37,     0,     0,     0,     0,     0,
      39,     0,     0,   480,     0,    41,    42,    43,    44,    45,
      46,    47,     0,    48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    49,     0,     0,    50,    51,
       0,    52,    53,     0,     0,     0,     0,     0,     0,     0,
      54,     5,     0,     0,    55,     0,   476,    56,     7,     8,
       0,     0,     0,     0,     0,     0,    11,    12,  1033,    13,
       0,     0,     0,     0,    14,    15,     0,     0,     0,    16,
       0,     0,   477,   478,    57,    18,    19,    20,   479,    22,
      23,    24,     0,    25,     0,     0,     0,     0,     0,     0,
       0,    26,     0,    27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,     0,     0,     0,
       0,     0,    29,    30,    31,    32,     0,     0,     0,     0,
       0,     0,    33,    34,    35,    36,     0,     0,     0,    37,
       0,     0,     0,     0,     0,    39,     0,     0,   480,     0,
      41,    42,    43,    44,    45,    46,    47,     0,    48,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      49,     0,     0,    50,    51,     0,    52,    53,     0,     0,
       0,     0,     0,     0,     0,    54,     5,     0,     0,    55,
       0,   476,    56,     7,     8,     0,     0,     0,     0,     0,
       0,    11,    12,  -640,    13,     0,     0,     0,     0,    14,
      15,     0,     0,     0,    16,     0,     0,   477,   478,    57,
      18,    19,    20,   479,    22,    23,    24,     0,    25,     0,
       0,     0,     0,     0,     0,     0,    26,     0,    27,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      28,     0,     0,     0,     0,     0,     0,    29,    30,    31,
      32,     0,     0,     0,     0,     0,     0,    33,    34,    35,
      36,     0,     0,     0,    37,     0,     0,     0,     0,     0,
      39,     0,     0,   480,     0,    41,    42,    43,    44,    45,
      46,    47,     0,    48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    49,     0,     0,    50,    51,
       0,    52,    53,     0,     0,     0,     0,     0,     0,     0,
      54,     5,     0,     0,    55,     0,   476,    56,     7,     8,
       0,     0,     0,     0,     0,     0,    11,    12,  1099,    13,
       0,     0,     0,     0,    14,    15,     0,     0,     0,    16,
       0,     0,   477,   478,    57,    18,    19,    20,   479,    22,
      23,    24,     0,    25,     0,     0,     0,     0,     0,     0,
       0,    26,     0,    27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,     0,     0,     0,
       0,     0,    29,    30,    31,    32,     0,     0,     0,     0,
       0,     0,    33,    34,    35,    36,     0,     0,     0,    37,
       0,     0,     0,     0,     0,    39,     0,     0,   480,     0,
      41,    42,    43,    44,    45,    46,    47,     0,    48,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      49,     0,     0,    50,    51,     0,    52,    53,     0,     0,
       0,     0,     0,     0,     0,    54,     5,     0,     0,    55,
       0,   476,    56,     7,     8,     0,     0,     0,     0,     0,
       0,    11,    12,  1151,    13,     0,     0,     0,     0,    14,
      15,     0,     0,     0,    16,     0,     0,   477,   478,    57,
      18,    19,    20,   479,    22,    23,    24,     0,    25,     0,
       0,     0,     0,     0,     0,     0,    26,     0,    27,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      28,     0,     0,     0,     0,     0,     0,    29,    30,    31,
      32,     0,     0,     0,     0,     0,     0,    33,    34,    35,
      36,     0,     0,     0,    37,     0,     0,     0,     0,     0,
      39,     0,     0,   480,     0,    41,    42,    43,    44,    45,
      46,    47,     0,    48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    49,     0,     0,    50,    51,
       5,    52,    53,     0,     0,   476,     0,     7,     8,     0,
      54,     0,     0,     0,    55,    11,    12,    56,    13,     0,
       0,     0,     0,    14,    15,     0,     0,     0,    16,     0,
       0,   477,   478,     0,    18,    19,    20,   479,    22,    23,
      24,     0,    25,     0,    57,     0,     0,     0,     0,     0,
      26,     0,    27,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    28,  -630,     0,     0,     0,     0,
       0,    29,    30,    31,    32,     0,     0,     0,     0,     0,
       0,    33,    34,    35,    36,     0,     0,     0,    37,     0,
       0,     0,     0,     0,    39,     0,     0,   480,     0,    41,
      42,    43,    44,    45,    46,    47,     0,    48,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    49,
       0,     0,    50,    51,     0,    52,    53,     0,     0,     0,
       0,     0,     0,     0,    54,     5,     0,     0,    55,     0,
     476,    56,     7,     8,     0,     0,     0,     0,     0,     0,
      11,    12,  -632,    13,     0,     0,     0,     0,    14,    15,
       0,     0,     0,    16,     0,     0,   477,   478,    57,    18,
      19,    20,   479,    22,    23,    24,     0,    25,   118,     0,
       0,     0,     0,     0,     0,    26,     0,    27,     0,     0,
       0,     0,     0,   119,   120,     0,     0,   121,   122,    28,
       0,   123,   124,     0,     0,   125,    29,    30,    31,    32,
     465,     0,     0,     0,     0,     0,    33,    34,    35,    36,
       0,     0,     0,    37,   126,   127,     0,     0,   128,    39,
       0,     0,   480,     0,    41,    42,    43,    44,    45,    46,
      47,     0,    48,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    49,     0,     0,    50,    51,     0,
      52,    53,     0,     0,     0,     0,     0,     0,     0,    54,
       0,     0,   129,    55,     0,     0,    56,     0,     0,     0,
       0,   130,     0,   131,   132,   133,   134,   135,   136,   137,
       0,     0,   138,     0,     0,     0,   139,     0,   466,     0,
     140,     0,     0,    57,     0,     0,     0,     0,     0,   141,
     142,   143,   144,     0,     0,     0,   118,     0,     0,   145,
       0,   146,   147,   148,     0,   149,   150,   151,   152,   153,
       0,   119,   120,   154,     0,   121,   122,     0,   155,   123,
     124,   156,     0,   125,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   126,   127,     0,     0,   128,     0,     0,     0,
       0,     0,     0,   374,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   118,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   119,   120,     0,     0,   121,   122,
     129,     0,   123,   124,     0,     0,   125,     0,     0,   130,
       0,   131,   132,   133,   134,   135,   136,   137,     0,     0,
     138,     0,     0,     0,   139,   126,   127,     0,   140,   128,
       0,     0,     0,     0,     0,     0,     0,   141,   142,   143,
     144,     0,     0,     0,     0,     0,     0,   145,     0,   146,
     147,   148,     0,   149,   150,   151,   152,   153,     0,     0,
       0,   154,     0,     0,     0,     0,   155,     0,     0,   156,
       0,     0,     0,   129,     0,     0,     0,     0,     0,     0,
       0,     0,   130,     0,   131,   132,   133,   134,   135,   136,
     137,     0,     0,   138,     0,     0,     0,   139,     0,     0,
       0,   140,   859,     0,     0,     0,     0,     0,     0,     0,
     141,   142,   143,   144,     0,     0,     0,   118,     0,     0,
     145,     0,   146,   147,   148,     0,   149,   150,   151,   152,
     153,     0,   119,   120,   154,     0,   121,   122,     0,   155,
     123,   124,   156,     0,   125,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   126,   127,     0,     0,   128,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   129,     0,     0,     0,     0,     0,     0,     0,     0,
     130,     0,   131,   132,   133,   134,   135,   136,   137,     0,
       0,   138,     0,     0,     0,   139,     0,     0,     0,   140,
       0,     0,     0,     0,     0,     0,     0,     0,   141,   142,
     143,   144,     0,     0,     0,     0,     0,     0,   145,     0,
     146,   147,   148,     0,   149,   150,   151,   152,   153,     0,
       0,     0,   154,     0,     0,     0,     0,   155,     0,     0,
     156
};

static const yytype_int16 yycheck[] =
{
       5,   569,   374,     8,    75,    76,   310,   599,    78,    79,
     292,   522,    40,   303,   258,   467,   260,     1,   243,   284,
     245,   528,    27,     1,     1,     1,    31,    32,    33,    34,
      35,     1,    37,     1,    39,   364,   365,   366,   367,   368,
     968,   969,    60,   287,     1,     1,     1,     1,    51,     1,
      62,     1,     1,     1,    33,    82,     1,    62,     1,   128,
       1,     1,     1,    64,    69,    13,    71,     1,    61,   169,
       1,    18,     7,    64,     1,     0,    48,    82,    83,    35,
      85,    86,    87,    32,    51,   154,   155,     1,    33,    65,
      16,    17,     6,    98,    33,    51,   101,     1,   103,    34,
     105,    91,    92,    29,     1,   147,   111,   118,   113,    64,
      51,     1,   139,    39,   125,     1,    50,     1,   710,   126,
      67,     1,    72,     0,    58,    59,     1,   169,     1,    33,
       1,     1,     1,   140,   170,    69,     1,     1,    81,     1,
       1,   159,   126,    77,     1,    93,     1,    81,   126,    33,
       1,     1,     1,    33,   138,    56,   140,     1,   126,   149,
     138,   173,   140,   168,   169,   170,   169,   139,   147,   174,
     171,   176,   140,    81,   179,    48,   102,   248,     6,   172,
     185,   172,   139,   188,   139,   190,   126,    48,    49,   194,
     174,   139,   169,   169,   139,   172,   174,    72,    68,   139,
     126,   171,   172,   208,   139,   172,   211,   714,   213,   143,
     144,   145,   126,   169,   171,   220,   170,   222,   170,   169,
     169,   169,   227,  1151,   596,   170,   169,     1,   169,   169,
     169,   236,    18,   238,   524,   169,   170,   462,   169,   244,
     505,   506,   169,   147,   249,   171,   490,    33,   253,   139,
     147,    45,   257,   139,   259,   139,   261,    18,   263,   139,
     265,   266,   267,    37,   139,   270,   139,    28,   139,    30,
     139,   276,   169,    64,   139,   139,   281,   139,   139,   284,
      64,   286,   139,   288,   139,    64,    64,    39,   139,   139,
     139,    81,    86,   362,   363,   139,    64,    16,    17,    73,
     172,    64,    76,    51,    78,    79,    80,  1014,  1015,  1016,
      29,    64,    51,     3,     4,     5,    16,    17,    64,    64,
      39,    64,    96,    97,    72,    73,    65,    66,    67,    29,
      78,    79,    80,    72,   139,    64,    52,    64,    64,    39,
      64,    64,    64,    33,    64,   126,    55,    64,    96,    97,
      64,   803,   126,   127,    44,    45,    46,    47,    48,    49,
     912,   147,    64,  1070,   916,   139,    64,    64,  1075,    64,
      64,    64,     1,    13,    61,   127,    16,    17,  1085,    61,
     171,   386,   387,   102,   103,   104,    50,   171,   172,    29,
      18,   169,   171,   398,   399,   699,    86,    50,    38,    39,
     704,   705,   102,   171,   475,    58,    59,   126,   171,   172,
     170,    48,   694,   695,   696,   170,     1,    81,   423,   172,
     710,   169,    56,   139,   706,   171,   126,   172,  1135,   172,
     170,    58,    59,   438,   439,   440,    63,   146,   767,    68,
     130,   131,   171,   172,   171,   171,   171,   171,   171,   171,
     455,   171,   480,    93,   171,  1047,  1048,   171,    88,   970,
     971,    20,   102,   103,   104,    95,   471,   472,    13,   171,
      61,    16,    51,   171,   171,   126,   171,   171,   171,   484,
     162,   163,   112,    68,   114,    64,   126,   492,   139,   494,
     143,   144,   145,    72,   255,   164,   165,   166,    73,    88,
     505,   506,   139,    78,    79,    80,   126,   512,   170,    53,
     515,   100,   517,    57,    13,   170,    50,    16,   138,    20,
     140,    96,    97,    68,    58,    59,   156,   169,    13,   170,
     172,    16,   537,   160,   161,    69,   541,    64,   842,    66,
     301,    66,   131,    77,   126,   162,   163,    14,    15,   310,
     139,   181,    19,    20,   174,   170,   138,   169,   140,   170,
     172,   169,   192,   324,   172,   326,   327,   328,   329,   169,
     331,   170,   172,   119,   645,    42,   122,   338,   339,   340,
     170,   169,   212,   170,   172,   346,   347,   348,   349,   350,
     351,   352,   174,   169,   599,   169,   172,   170,   172,   604,
     671,    64,   607,    66,   277,   610,   279,   677,   170,   143,
     144,   145,   359,   360,   361,   620,   988,   171,   172,    86,
      87,    88,   170,  1191,   139,    14,    15,   170,   932,    18,
     170,    20,   170,   100,   171,   172,   139,    14,    15,   171,
     172,    18,   713,    20,   715,    32,    33,   277,    35,   279,
     170,   656,   282,    42,   170,   660,   661,   170,   663,   289,
     665,   171,   172,   668,    51,    42,   170,   672,   673,   674,
     170,  1126,  1127,   678,    85,    86,  1131,   170,    65,   170,
     170,    70,  1137,  1138,  1139,    72,   369,   370,   170,   170,
     170,   170,   139,    70,   139,   325,    18,    86,    87,    72,
     139,   172,   707,   333,   334,   335,   711,   337,   952,    86,
      87,   139,    18,   139,   344,   139,    50,   171,   723,   724,
      51,   172,   139,   353,   354,   139,    20,    20,    18,   139,
     172,    48,   139,  1037,   170,    76,    71,   171,    64,   139,
     172,   172,    18,    81,    53,   172,  1050,   172,   171,   171,
     171,  1055,   171,   171,  1058,   171,   171,   139,   171,   171,
     139,   139,   171,   171,    83,   171,     1,   172,   171,   840,
     400,   172,   171,   171,     1,  1079,   781,   172,   169,    33,
     172,    47,    28,    81,   139,   171,   791,   139,   171,   174,
      72,   139,   139,   169,   424,   170,    66,   139,    51,  1103,
     172,   806,   139,   171,   434,   138,   436,   139,  1112,    28,
      79,    28,   172,   884,   171,   100,   172,    18,    78,    51,
     107,    73,   172,   139,   139,   830,    90,    66,   833,   834,
     170,    18,   837,    66,   919,   171,  1060,   918,   468,   844,
     845,  1057,   708,   863,   962,  1149,  1039,   235,    64,   447,
     294,   934,   594,   858,   819,     4,   807,   595,   409,   455,
      13,    13,  1097,   108,    70,   497,   167,  1018,   801,  1132,
     794,  1140,  1128,   503,  1063,   687,   947,   882,   622,   503,
     641,   642,   643,   644,   434,   808,   496,   966,   247,   858,
    1110,   837,   312,   523,  1033,   720,    -1,   902,    -1,    -1,
     905,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   669,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   921,   922,    -1,    -1,
      -1,   926,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   937,    -1,    -1,    -1,    -1,    -1,   699,   569,
      -1,    -1,    -1,   704,   705,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   968,   969,    -1,    -1,   728,   729,  1040,
      -1,   732,    -1,    -1,    -1,    -1,   737,    -1,    -1,    -1,
      -1,    -1,   743,    -1,   745,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   757,    -1,    -1,    -1,
      -1,    -1,   763,    -1,    -1,    -1,    -1,    -1,    -1,  1014,
    1015,  1016,    -1,    -1,    -1,  1020,  1021,  1022,   779,   780,
    1025,  1026,    -1,   653,    -1,    -1,    -1,    -1,  1033,    -1,
    1035,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1047,  1048,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1056,    -1,    -1,  1059,    -1,    -1,   687,    -1,    -1,
    1065,    -1,    -1,    -1,    -1,  1070,    -1,  1072,   829,    -1,
    1075,    -1,  1077,    -1,    -1,  1080,    -1,    -1,    -1,    -1,
    1085,   842,    -1,    -1,    -1,    -1,    -1,   717,   718,    -1,
      -1,    -1,    -1,    -1,  1099,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1110,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1184,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1194,    -1,   755,    -1,    -1,    -1,    -1,
    1135,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1143,  1144,
      -1,    -1,    -1,    -1,    -1,    -1,  1151,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   915,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   796,    -1,    -1,    -1,
      -1,   932,    -1,    -1,    -1,    -1,  1181,   807,   808,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1198,  1199,  1200,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
      -1,    -1,    -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,
     981,    -1,    -1,    -1,   985,   855,    -1,   857,    -1,    22,
      23,    -1,    -1,    26,    27,    -1,    -1,    30,    31,  1000,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    54,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1037,    -1,    -1,    -1,
      -1,    -1,    -1,   913,    -1,    -1,    -1,    -1,    -1,  1050,
      -1,    -1,    -1,    -1,  1055,    -1,    -1,  1058,    -1,    -1,
    1061,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,  1079,   112,
     113,   114,   115,   116,   117,   118,    -1,    -1,   121,    -1,
      -1,    -1,   125,    -1,   964,   965,   129,    -1,    -1,    -1,
      -1,    -1,  1103,    -1,    -1,   138,   139,   140,   141,    -1,
      -1,  1112,    -1,    -1,    -1,   148,    -1,   150,   151,   152,
      -1,   154,   155,   156,   157,   158,    -1,    -1,    -1,   162,
      -1,    -1,     1,    -1,   167,    -1,   169,   170,     7,   172,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1149,    -1,
      -1,    -1,    -1,    22,    23,    -1,    -1,    26,    27,    -1,
      -1,    30,    31,    -1,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    54,    -1,    -1,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1101,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   110,    -1,   112,   113,   114,   115,   116,   117,   118,
      -1,    -1,   121,    -1,    -1,    -1,   125,    -1,    -1,    -1,
     129,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,
     139,   140,   141,    -1,     1,    -1,    -1,    -1,    -1,   148,
       7,   150,   151,   152,    -1,   154,   155,   156,   157,   158,
      -1,    -1,    -1,   162,    -1,    22,    23,    -1,   167,    26,
      27,   170,   171,    30,    31,    -1,    -1,    34,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1191,    -1,    -1,    -1,    -1,    53,    54,    -1,    -1,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,    -1,    -1,    -1,    -1,     7,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,   101,    -1,    26,    27,    -1,    -1,
      30,    31,    -1,   110,    34,   112,   113,   114,   115,   116,
     117,   118,    -1,    -1,   121,    -1,    -1,    -1,   125,    -1,
     127,    -1,   129,    53,    54,    -1,    -1,    57,    -1,    -1,
      -1,   138,   139,   140,   141,    -1,    -1,    -1,    -1,    -1,
      -1,   148,    -1,   150,   151,   152,    -1,   154,   155,   156,
     157,   158,    -1,    -1,    -1,   162,    -1,    -1,    -1,    -1,
     167,    -1,    -1,   170,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     110,    -1,   112,   113,   114,   115,   116,   117,   118,    -1,
      -1,   121,    -1,    -1,    -1,   125,    -1,    -1,    -1,   129,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,   139,
     140,   141,    -1,    -1,    -1,    -1,    -1,    -1,   148,    -1,
     150,   151,   152,    -1,   154,   155,   156,   157,   158,     1,
      -1,    -1,   162,    -1,    -1,     7,    -1,   167,    -1,   169,
     170,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    -1,    -1,    26,    27,    -1,    -1,    30,    31,
      -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    54,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,     7,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    -1,    -1,    26,    27,   101,
      -1,    30,    31,    -1,    -1,    34,    -1,    -1,   110,    -1,
     112,   113,   114,   115,   116,   117,   118,    -1,    -1,   121,
      -1,    -1,    -1,   125,    53,    54,    -1,   129,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   138,   139,   140,   141,
      -1,    -1,    -1,    -1,    -1,     1,   148,    -1,   150,   151,
     152,     7,   154,   155,   156,   157,   158,    -1,    -1,    -1,
     162,    -1,    -1,    -1,    -1,   167,    22,    23,   170,    -1,
      26,    27,   101,    -1,    30,    31,    -1,    -1,    34,    -1,
      -1,   110,    -1,   112,   113,   114,   115,   116,   117,   118,
      -1,    -1,   121,    -1,    -1,    -1,   125,    53,    54,    -1,
     129,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,
     139,   140,   141,    -1,    -1,    -1,    -1,    -1,     1,   148,
      -1,   150,   151,   152,     7,   154,   155,   156,   157,   158,
      -1,    -1,    -1,   162,    -1,    -1,    -1,    -1,   167,    22,
      23,   170,    -1,    26,    27,   101,    -1,    30,    31,    -1,
      -1,    34,    -1,    -1,   110,    -1,   112,   113,   114,   115,
     116,   117,   118,    -1,    -1,   121,    -1,    -1,    -1,   125,
      53,    54,    -1,   129,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   138,   139,   140,   141,    -1,    -1,    -1,    -1,
      -1,     1,   148,    -1,   150,   151,   152,     7,   154,   155,
     156,   157,   158,    -1,    -1,    -1,   162,    -1,    -1,    -1,
      -1,   167,    22,    23,   170,    -1,    26,    27,   101,    -1,
      30,    31,    -1,    -1,    34,    -1,    -1,   110,    -1,   112,
     113,   114,   115,   116,   117,   118,    -1,    -1,   121,    -1,
      -1,    -1,   125,    53,    54,    -1,   129,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   138,   139,   140,   141,    -1,
      -1,    -1,    -1,    -1,     1,   148,    -1,   150,   151,   152,
       7,   154,   155,   156,   157,   158,    -1,    -1,    -1,   162,
      -1,    -1,    -1,    -1,   167,    22,    23,   170,    -1,    26,
      27,   101,    -1,    30,    31,    -1,    -1,    34,    -1,    -1,
     110,    -1,   112,   113,   114,   115,   116,   117,   118,    -1,
      -1,   121,    -1,    -1,    -1,   125,    53,    54,    -1,   129,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,   139,
     140,   141,    -1,    -1,    -1,    -1,    -1,     1,   148,    -1,
     150,   151,   152,     7,   154,   155,   156,   157,   158,    -1,
      -1,    -1,   162,    -1,    -1,    -1,    -1,   167,    22,    23,
     170,    -1,    26,    27,   101,    -1,    30,    31,    -1,    -1,
      34,    -1,    -1,   110,    -1,   112,   113,   114,   115,   116,
     117,   118,    -1,    -1,   121,    -1,    -1,    -1,   125,    53,
      54,    -1,   129,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   138,   139,   140,   141,    -1,    -1,    -1,    -1,    -1,
       1,   148,    -1,   150,   151,   152,     7,   154,   155,   156,
     157,   158,    -1,    -1,    -1,   162,    -1,    -1,    -1,    -1,
     167,    22,    23,   170,    -1,    26,    27,   101,    -1,    30,
      31,    -1,    -1,    34,    -1,    -1,   110,    -1,   112,   113,
     114,   115,   116,   117,   118,    -1,    -1,   121,    -1,    -1,
      -1,   125,    53,    54,    -1,   129,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   138,   139,   140,   141,    -1,    -1,
      -1,    -1,    -1,     1,   148,    -1,   150,   151,   152,     7,
     154,   155,   156,   157,   158,    -1,    -1,    -1,   162,    -1,
      -1,    -1,    -1,   167,    22,    23,   170,    -1,    26,    27,
     101,    -1,    30,    31,    -1,    -1,    34,    -1,    -1,   110,
      -1,   112,   113,   114,   115,   116,   117,   118,    -1,    -1,
     121,    -1,    -1,    -1,   125,    53,    54,    -1,   129,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,   139,   140,
     141,    -1,    -1,    -1,    -1,    -1,     1,   148,    -1,   150,
     151,   152,     7,   154,   155,   156,   157,   158,    -1,    -1,
      -1,   162,    -1,    -1,    -1,    -1,   167,    22,    23,   170,
      -1,    26,    27,   101,    -1,    30,    31,    -1,    -1,    34,
      -1,    -1,   110,    -1,   112,   113,   114,   115,   116,   117,
     118,    -1,    -1,   121,    -1,    -1,    -1,   125,    53,    54,
      -1,   129,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     138,   139,   140,   141,    -1,    -1,    -1,    -1,    -1,     1,
     148,    -1,   150,   151,   152,     7,   154,   155,   156,   157,
     158,    -1,    -1,    -1,   162,    -1,    -1,    -1,    -1,   167,
      22,    23,   170,    -1,    26,    27,   101,    -1,    30,    31,
      -1,    -1,    34,    -1,    -1,   110,    -1,   112,   113,   114,
     115,   116,   117,   118,    -1,    -1,   121,    -1,    -1,    -1,
     125,    53,    54,    -1,   129,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   138,   139,   140,   141,    -1,    -1,    -1,
      -1,    -1,     1,   148,    -1,   150,   151,   152,     7,   154,
     155,   156,   157,   158,    -1,    -1,    -1,   162,    -1,    -1,
      -1,    -1,   167,    22,    23,   170,    -1,    26,    27,   101,
      -1,    30,    31,    -1,    -1,    34,    -1,    -1,   110,    -1,
     112,   113,   114,   115,   116,   117,   118,    -1,    -1,   121,
      -1,    -1,    -1,   125,    53,    54,    -1,   129,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   138,   139,   140,   141,
      -1,    -1,    -1,    -1,    -1,    -1,   148,    -1,   150,   151,
     152,    -1,   154,   155,   156,   157,   158,    -1,    -1,    -1,
     162,    -1,    -1,    -1,    -1,   167,    -1,    -1,   170,    -1,
      -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   110,    -1,   112,   113,   114,   115,   116,   117,   118,
      -1,    -1,   121,    -1,    -1,    -1,   125,    -1,    -1,    -1,
     129,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,
     139,   140,   141,    -1,    -1,    -1,    -1,    -1,    -1,   148,
      -1,   150,   151,   152,    -1,   154,   155,   156,   157,   158,
      -1,    -1,     1,   162,    -1,    -1,    -1,     6,   167,     8,
       9,   170,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    24,    25,    -1,    -1,    -1,
      29,    -1,    -1,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    67,    -1,
      -1,    -1,    71,    72,    73,    74,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    83,    84,    85,    -1,    -1,    -1,
      89,    -1,    -1,    -1,    -1,    -1,    95,    -1,    -1,    98,
      -1,   100,   101,   102,   103,   104,   105,   106,    -1,   108,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   120,    -1,    -1,   123,   124,    -1,   126,   127,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   135,     1,    -1,    -1,
     139,    -1,     6,   142,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      24,    25,    -1,    -1,    -1,    29,    -1,    -1,    32,    33,
     169,    35,    36,    37,    38,    39,    40,    41,    -1,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    65,    -1,    67,    -1,    -1,    -1,    71,    72,    73,
      74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    82,    83,
      84,    85,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,
      -1,    95,    -1,    -1,    98,    -1,   100,   101,   102,   103,
     104,   105,   106,    -1,   108,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,   123,
     124,     1,   126,   127,    -1,    -1,     6,    -1,     8,     9,
      10,   135,    -1,    13,    -1,   139,    16,    17,   142,    19,
      -1,    -1,    -1,    -1,    24,    25,    -1,    -1,    -1,    29,
      -1,    -1,    32,    -1,    -1,    35,    36,    37,    38,    39,
      40,    41,    -1,    43,    -1,   169,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    74,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    83,    84,    85,    -1,    -1,    -1,    89,
      -1,    -1,    -1,    93,    -1,    95,    -1,    -1,    98,    -1,
     100,   101,   102,   103,   104,   105,   106,    -1,   108,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     120,    -1,    -1,   123,   124,    -1,   126,   127,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,     1,    -1,    -1,   139,
      -1,     6,   142,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,
      25,    -1,    -1,    -1,    29,    -1,    -1,    32,    33,   169,
      35,    36,    37,    38,    39,    40,    41,    -1,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    82,    83,    84,
      85,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,
      95,    -1,    -1,    98,    -1,   100,   101,   102,   103,   104,
     105,   106,    -1,   108,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,   123,   124,
      -1,   126,   127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     135,     1,    -1,    -1,   139,    -1,     6,   142,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    24,    25,    -1,    -1,    -1,    29,
      -1,    -1,    32,    33,   169,    35,    36,    37,    38,    39,
      40,    41,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    74,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    83,    84,    85,    -1,    -1,    -1,    89,
      -1,    -1,    -1,    -1,    -1,    95,    -1,    -1,    98,    -1,
     100,   101,   102,   103,   104,   105,   106,    -1,   108,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     120,    -1,    -1,   123,   124,    -1,   126,   127,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,     1,    -1,    -1,   139,
      -1,     6,   142,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,
      25,    -1,    -1,    -1,    29,    -1,    -1,    32,    33,   169,
      35,    36,    37,    38,    39,    40,    41,    -1,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    82,    83,    84,
      85,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,
      95,    -1,    -1,    98,    -1,   100,   101,   102,   103,   104,
     105,   106,    -1,   108,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,   123,   124,
      -1,   126,   127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     135,     1,    -1,    -1,   139,    -1,     6,   142,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    24,    25,    -1,    -1,    -1,    29,
      -1,    -1,    32,    33,   169,    35,    36,    37,    38,    39,
      40,    41,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    74,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    83,    84,    85,    -1,    -1,    -1,    89,
      -1,    -1,    -1,    -1,    -1,    95,    -1,    -1,    98,    -1,
     100,   101,   102,   103,   104,   105,   106,    -1,   108,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     120,    -1,    -1,   123,   124,    -1,   126,   127,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,     1,    -1,    -1,   139,
      -1,     6,   142,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,
      25,    -1,    -1,    -1,    29,    -1,    -1,    32,    33,   169,
      35,    36,    37,    38,    39,    40,    41,    -1,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    82,    83,    84,
      85,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,
      95,    -1,    -1,    98,    -1,   100,   101,   102,   103,   104,
     105,   106,    -1,   108,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,   123,   124,
      -1,   126,   127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     135,     1,    -1,    -1,   139,    -1,     6,   142,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    24,    25,    -1,    -1,    -1,    29,
      -1,    -1,    32,    33,   169,    35,    36,    37,    38,    39,
      40,    41,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    74,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    83,    84,    85,    -1,    -1,    -1,    89,
      -1,    -1,    -1,    -1,    -1,    95,    -1,    -1,    98,    -1,
     100,   101,   102,   103,   104,   105,   106,    -1,   108,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     120,    -1,    -1,   123,   124,    -1,   126,   127,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,     1,    -1,    -1,   139,
      -1,     6,   142,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,
      25,    -1,    -1,    -1,    29,    -1,    -1,    32,    33,   169,
      35,    36,    37,    38,    39,    40,    41,    -1,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    82,    83,    84,
      85,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,
      95,    -1,    -1,    98,    -1,   100,   101,   102,   103,   104,
     105,   106,    -1,   108,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,   123,   124,
      -1,   126,   127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     135,     1,    -1,    -1,   139,    -1,     6,   142,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    24,    25,    -1,    -1,    -1,    29,
      -1,    -1,    32,    33,   169,    35,    36,    37,    38,    39,
      40,    41,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    74,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    83,    84,    85,    -1,    -1,    -1,    89,
      -1,    -1,    -1,    -1,    -1,    95,    -1,    -1,    98,    -1,
     100,   101,   102,   103,   104,   105,   106,    -1,   108,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     120,    -1,    -1,   123,   124,    -1,   126,   127,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,     1,    -1,    -1,   139,
      -1,     6,   142,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,
      25,    -1,    -1,    -1,    29,    -1,    -1,    32,    33,   169,
      35,    36,    37,    38,    39,    40,    41,    -1,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    82,    83,    84,
      85,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,
      95,    -1,    -1,    98,    -1,   100,   101,   102,   103,   104,
     105,   106,    -1,   108,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,   123,   124,
      -1,   126,   127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     135,     1,    -1,    -1,   139,    -1,     6,   142,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    24,    25,    -1,    -1,    -1,    29,
      -1,    -1,    32,    33,   169,    35,    36,    37,    38,    39,
      40,    41,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    74,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    83,    84,    85,    -1,    -1,    -1,    89,
      -1,    -1,    -1,    -1,    -1,    95,    -1,    -1,    98,    -1,
     100,   101,   102,   103,   104,   105,   106,    -1,   108,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     120,    -1,    -1,   123,   124,    -1,   126,   127,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,     1,    -1,    -1,   139,
      -1,     6,   142,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,
      25,    -1,    -1,    -1,    29,    -1,    -1,    32,    33,   169,
      35,    36,    37,    38,    39,    40,    41,    -1,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    82,    83,    84,
      85,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,
      95,    -1,    -1,    98,    -1,   100,   101,   102,   103,   104,
     105,   106,    -1,   108,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,   123,   124,
       1,   126,   127,    -1,    -1,     6,    -1,     8,     9,    -1,
     135,    -1,    -1,    -1,   139,    16,    17,   142,    19,    -1,
      -1,    -1,    -1,    24,    25,    -1,    -1,    -1,    29,    -1,
      -1,    32,    33,    -1,    35,    36,    37,    38,    39,    40,
      41,    -1,    43,    -1,   169,    -1,    -1,    -1,    -1,    -1,
      51,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    66,    -1,    -1,    -1,    -1,
      -1,    72,    73,    74,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    82,    83,    84,    85,    -1,    -1,    -1,    89,    -1,
      -1,    -1,    -1,    -1,    95,    -1,    -1,    98,    -1,   100,
     101,   102,   103,   104,   105,   106,    -1,   108,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,
      -1,    -1,   123,   124,    -1,   126,   127,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   135,     1,    -1,    -1,   139,    -1,
       6,   142,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,    25,
      -1,    -1,    -1,    29,    -1,    -1,    32,    33,   169,    35,
      36,    37,    38,    39,    40,    41,    -1,    43,     7,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    22,    23,    -1,    -1,    26,    27,    65,
      -1,    30,    31,    -1,    -1,    34,    72,    73,    74,    75,
      39,    -1,    -1,    -1,    -1,    -1,    82,    83,    84,    85,
      -1,    -1,    -1,    89,    53,    54,    -1,    -1,    57,    95,
      -1,    -1,    98,    -1,   100,   101,   102,   103,   104,   105,
     106,    -1,   108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   120,    -1,    -1,   123,   124,    -1,
     126,   127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
      -1,    -1,   101,   139,    -1,    -1,   142,    -1,    -1,    -1,
      -1,   110,    -1,   112,   113,   114,   115,   116,   117,   118,
      -1,    -1,   121,    -1,    -1,    -1,   125,    -1,   127,    -1,
     129,    -1,    -1,   169,    -1,    -1,    -1,    -1,    -1,   138,
     139,   140,   141,    -1,    -1,    -1,     7,    -1,    -1,   148,
      -1,   150,   151,   152,    -1,   154,   155,   156,   157,   158,
      -1,    22,    23,   162,    -1,    26,    27,    -1,   167,    30,
      31,   170,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    54,    -1,    -1,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,    27,
     101,    -1,    30,    31,    -1,    -1,    34,    -1,    -1,   110,
      -1,   112,   113,   114,   115,   116,   117,   118,    -1,    -1,
     121,    -1,    -1,    -1,   125,    53,    54,    -1,   129,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,   139,   140,
     141,    -1,    -1,    -1,    -1,    -1,    -1,   148,    -1,   150,
     151,   152,    -1,   154,   155,   156,   157,   158,    -1,    -1,
      -1,   162,    -1,    -1,    -1,    -1,   167,    -1,    -1,   170,
      -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   110,    -1,   112,   113,   114,   115,   116,   117,
     118,    -1,    -1,   121,    -1,    -1,    -1,   125,    -1,    -1,
      -1,   129,   130,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     138,   139,   140,   141,    -1,    -1,    -1,     7,    -1,    -1,
     148,    -1,   150,   151,   152,    -1,   154,   155,   156,   157,
     158,    -1,    22,    23,   162,    -1,    26,    27,    -1,   167,
      30,    31,   170,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    54,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     110,    -1,   112,   113,   114,   115,   116,   117,   118,    -1,
      -1,   121,    -1,    -1,    -1,   125,    -1,    -1,    -1,   129,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,   139,
     140,   141,    -1,    -1,    -1,    -1,    -1,    -1,   148,    -1,
     150,   151,   152,    -1,   154,   155,   156,   157,   158,    -1,
      -1,    -1,   162,    -1,    -1,    -1,    -1,   167,    -1,    -1,
     170
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   176,   178,     0,   179,     1,     6,     8,     9,    10,
      13,    16,    17,    19,    24,    25,    29,    32,    35,    36,
      37,    38,    39,    40,    41,    43,    51,    53,    65,    72,
      73,    74,    75,    82,    83,    84,    85,    89,    93,    95,
      98,   100,   101,   102,   103,   104,   105,   106,   108,   120,
     123,   124,   126,   127,   135,   139,   142,   169,   177,   180,
     181,   194,   212,   214,   216,   218,   219,   257,   291,   302,
     305,   307,   313,   318,   325,   328,   331,   334,   335,   336,
     337,   338,   339,   383,   385,   386,   388,   394,   395,   412,
     422,   424,   429,   430,   434,   440,   442,   177,     1,   139,
     177,    52,   139,   221,   222,     1,    37,   139,   275,   302,
     305,     1,   435,     1,   431,     1,   443,     1,     7,    22,
      23,    26,    27,    30,    31,    34,    53,    54,    57,   101,
     110,   112,   113,   114,   115,   116,   117,   118,   121,   125,
     129,   138,   139,   140,   141,   148,   150,   151,   152,   154,
     155,   156,   157,   158,   162,   167,   170,   233,   238,   239,
     240,   241,   242,   243,   244,   246,   248,   251,     1,   139,
       1,   139,    13,    16,     1,   139,     1,   139,   170,   223,
     177,   265,     1,   251,    81,   251,   177,   177,   147,   177,
       1,   177,   267,   177,     1,     6,   126,   177,   177,    13,
      16,    17,    29,    38,    39,    93,   126,   338,     6,   281,
     283,     1,   269,     1,    64,   139,     1,   314,   342,   306,
       1,   139,     1,    81,   170,   266,   384,     1,    13,    93,
     139,   177,   229,    56,   213,   213,     1,   139,     1,   139,
     285,   177,    81,   274,   317,   177,     1,   308,   277,    18,
      67,   253,   253,     1,    33,   170,   333,     1,   333,     1,
     333,     1,   139,   320,   321,     1,   126,   139,   177,   416,
       1,   177,   400,   172,   400,   400,     1,   172,   177,   280,
     399,     1,   251,   252,   396,   398,     1,   260,     1,   425,
     252,   177,   195,   177,   172,   177,   177,   139,   262,   126,
     307,    61,   418,   316,   317,   177,   252,   177,   252,    18,
      33,   147,   444,   445,   446,   456,    51,    65,    66,    67,
      72,   330,   332,   223,   170,   170,   170,   170,   170,   170,
     223,   170,   240,   170,   170,   170,   170,   170,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   170,
     170,   170,   170,   170,   170,   240,   240,   252,    56,   164,
     165,   166,   162,   163,    58,    59,    63,   160,   161,    60,
     159,    61,    62,   173,    64,   330,   177,   177,   177,   423,
      20,    20,   177,   177,   171,   177,     1,   252,   401,    66,
      66,    48,   139,   177,   177,   177,   252,   177,    88,   100,
     131,   139,   139,    13,    16,     1,   340,   177,   139,   139,
     177,   252,   177,   139,    18,    72,   139,   349,   177,   172,
     177,   303,   304,     1,   273,    50,    58,    59,    69,    77,
     143,   144,   145,   403,   404,   390,   391,   177,   231,   230,
     232,   220,   253,   220,   177,   215,   177,   217,    73,    78,
      79,    80,    96,    97,   292,   294,   295,   301,   288,    48,
     139,   288,   177,   288,    18,    39,   127,   311,   312,   420,
     253,     1,    65,   177,   415,   261,     6,    32,    33,    38,
      98,   254,   257,   327,    18,   177,    55,   146,   210,   251,
     258,   177,   320,   177,   320,   177,   322,   172,   177,   177,
     177,   177,   177,   387,   177,   396,   396,   177,   252,   172,
     399,   177,   320,   177,   252,     1,   172,   263,   196,   211,
     252,   222,   278,    50,   276,   251,    51,   289,   418,   436,
     432,    32,    33,    35,    51,    65,    72,   462,     1,   210,
     447,    18,   445,   251,   252,   251,   251,   251,   251,   251,
     252,   252,   252,     1,   139,   171,   252,   251,   251,   251,
       1,   139,     1,   139,     1,    48,    49,   139,   252,   234,
     251,   251,   251,   251,   251,   251,   251,   252,   252,   171,
      53,    57,   239,   239,   239,   240,   240,   241,   241,   241,
     241,   241,   242,   242,   245,   247,   249,   248,   172,   438,
     439,   139,   139,   177,     1,   177,   402,   268,   177,   177,
     252,   271,   272,    20,    20,    18,   139,   172,   287,   287,
     270,   343,   389,    48,   139,   177,   235,   236,   237,   252,
     401,   252,   392,   393,   177,   177,   177,    18,   170,   224,
     224,   299,   297,   296,   298,   286,    51,    72,   177,   293,
     295,    76,   288,   421,   349,   252,    18,   177,   177,   253,
       1,    68,     1,    68,     1,    68,    13,    16,    68,    71,
     326,   329,     1,    35,    51,   177,   417,   171,   320,   177,
     177,   323,   403,   321,   392,   399,   399,   397,   177,   426,
     177,   139,   177,   441,     3,     4,     5,    33,    44,    45,
      46,    47,    48,    49,    86,   130,   131,   197,   198,   199,
     438,     1,   252,   405,   418,   290,   289,   172,   172,   177,
      18,   457,    81,     1,    32,   177,   461,   171,   172,   172,
     171,   171,   172,   171,     1,   171,   172,   172,   171,   171,
     171,   171,   171,   172,   171,   172,   171,   171,   171,   171,
     171,   171,   171,   171,   171,   172,   235,   172,   171,   171,
     171,   171,   171,   172,   171,   171,    53,    61,   243,   244,
     248,   139,   177,   439,   185,   183,   177,   177,   177,    45,
      86,   380,    14,    15,    19,    20,    42,    86,    87,    88,
     100,   370,   139,   139,   341,   282,   284,   177,   211,   344,
     345,   346,   347,   419,   420,   390,   171,   172,   172,    16,
      17,    29,    39,   102,   126,   171,   225,   226,   227,    83,
      91,    92,   149,   228,   251,   251,   251,   251,   253,   300,
     252,   309,   169,     1,    72,   177,   413,    18,   177,   177,
     256,   177,   255,   177,     1,     1,   177,     1,   251,   253,
     177,   177,   177,   333,   177,   324,   398,   172,   264,   130,
     211,   211,   211,    47,   210,   202,   210,   210,   211,   177,
     199,   418,    51,   177,   411,    28,   408,   253,   289,   253,
     252,   252,   462,    81,   459,   139,   177,   177,   251,   251,
     251,   171,   139,   251,   251,   251,   252,   171,   251,   251,
     241,   174,     1,   170,   190,     1,   170,   186,   251,   251,
     177,   374,   373,   372,    72,   371,   375,   177,   184,   182,
     344,   139,   252,   169,   351,   349,     1,    81,   177,   319,
     237,   393,   170,   171,   172,   139,   227,    18,   251,   177,
     353,   350,   351,   177,   177,   415,   253,   210,   177,   177,
      66,    66,   259,   252,   252,   441,   139,   202,   201,   119,
     122,   203,   200,    51,   406,   172,   409,   410,    18,    18,
     437,   433,   177,   139,   253,   448,   171,   171,   171,   171,
     171,   172,   171,   171,   171,   172,   171,   171,   250,   177,
     139,   191,   192,   177,   138,   187,   188,   381,   376,   377,
     378,   376,   252,   251,   376,   190,   186,   177,   177,    14,
      15,    18,    20,    42,    70,    86,    87,   352,   348,   177,
       1,    48,   139,   210,   226,     1,    51,   177,   414,   126,
     139,   315,    18,    18,   253,   320,   427,    28,   204,   204,
     279,   252,   252,    51,   410,   414,   414,   438,   438,   458,
      79,   455,   251,   251,   248,   193,   171,   172,   189,   171,
     172,    28,   382,   172,   251,     1,   126,   138,   140,   174,
     363,   364,     1,   126,   140,   355,   356,     1,    15,   354,
       1,   126,   138,   140,   174,   358,   359,   353,   353,   353,
     350,   177,   177,   177,   171,   177,   177,   310,   461,    18,
     177,   172,   210,   100,   205,   205,   253,   407,   177,   177,
      18,   210,    78,   171,   171,   210,   177,   192,   210,   177,
     188,   251,   377,   379,   177,   365,   366,   367,   172,   353,
     177,   357,   172,   353,   177,   210,   177,   360,   361,   362,
     172,   353,   316,     1,    33,   177,   460,   252,   210,    73,
     206,    18,    51,   460,   210,   139,     7,    34,   139,   368,
     369,   368,   368,   364,   368,   356,   353,   368,   368,   368,
     359,   177,   177,   428,   210,   414,   449,   107,   172,   207,
      90,   139,    66,   208,   450,   177,    82,   139,   253,   170,
     451,   209,    66,   235,   452,   171,   253,   453,    18,     1,
     147,   177,   454,   177,   177
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   175,   176,   177,   178,   179,   178,   180,   180,   180,
     180,   180,   181,   181,   182,   181,   183,   181,   184,   181,
     185,   181,   186,   186,   187,   187,   189,   188,   190,   190,
     191,   191,   193,   192,   195,   194,   194,   196,   196,   197,
     197,   198,   198,   199,   199,   199,   199,   199,   199,   199,
     200,   199,   199,   201,   199,   199,   199,   199,   199,   202,
     202,   203,   203,   204,   204,   205,   205,   206,   207,   206,
     208,   208,   209,   208,   210,   211,   212,   212,   213,   213,
     214,   215,   214,   216,   217,   216,   218,   218,   219,   219,
     220,   221,   221,   222,   223,   223,   224,   224,   224,   225,
     225,   226,   227,   227,   227,   227,   227,   227,   227,   228,
     228,   228,   228,   229,   230,   229,   231,   229,   232,   229,
     229,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   234,   233,   233,
     233,   233,   235,   235,   236,   236,   237,   238,   238,   238,
     239,   239,   239,   239,   240,   240,   240,   240,   241,   241,
     241,   242,   242,   242,   242,   242,   242,   243,   243,   243,
     244,   245,   244,   246,   247,   246,   248,   249,   250,   248,
     251,   251,   252,   252,   253,   253,   254,   254,   255,   254,
     254,   256,   254,   254,   254,   254,   254,   254,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   258,   257,   259,
     257,   257,   260,   257,   257,   257,   257,   261,   257,   262,
     257,   257,   263,   257,   264,   257,   257,   265,   257,   266,
     257,   257,   267,   268,   257,   257,   269,   270,   257,   257,
     257,   271,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   272,   257,   257,   273,   257,   257,   257,   257,   257,
     274,   257,   257,   257,   275,   276,   257,   257,   277,   257,
     257,   257,   278,   279,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   280,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   281,   282,
     257,   283,   284,   257,   285,   286,   257,   257,   257,   287,
     287,   288,   290,   289,   291,   291,   292,   293,   293,   293,
     294,   294,   296,   295,   297,   295,   298,   295,   299,   295,
     300,   295,   301,   301,   301,   302,   303,   302,   304,   302,
     306,   305,   308,   309,   310,   307,   307,   311,   312,   311,
     314,   313,   315,   315,   315,   316,   316,   317,   317,   318,
     318,   318,   319,   319,   319,   319,   319,   320,   320,   322,
     321,   323,   324,   323,   325,   326,   327,   327,   328,   328,
     329,   329,   330,   330,   331,   331,   331,   332,   332,   332,
     333,   333,   333,   334,   334,   335,   335,   336,   336,   337,
     337,   338,   338,   338,   340,   341,   339,   339,   342,   343,
     339,   339,   344,   344,   346,   345,   348,   347,   349,   350,
     351,   351,   352,   352,   352,   352,   352,   352,   352,   352,
     352,   352,   352,   353,   353,   354,   354,   355,   355,   357,
     356,   356,   358,   358,   360,   359,   361,   359,   362,   359,
     359,   363,   363,   365,   364,   366,   364,   367,   364,   364,
     368,   369,   369,   369,   369,   370,   370,   370,   370,   371,
     370,   370,   372,   370,   373,   370,   374,   370,   375,   370,
     376,   376,   378,   379,   377,   380,   381,   380,   382,   382,
     384,   383,   385,   385,   387,   386,   389,   388,   391,   390,
     392,   392,   393,   394,   394,   395,   395,   396,   397,   396,
     398,   399,   400,   401,   401,   402,   402,   403,   403,   403,
     403,   403,   403,   404,   404,   404,   406,   407,   405,   408,
     405,   405,   409,   409,   410,   411,   411,   412,   412,   413,
     413,   413,   414,   414,   414,   415,   415,   415,   416,   416,
     416,   416,   417,   417,   417,   417,   418,   418,   419,   419,
     420,   421,   420,   423,   422,   422,   425,   426,   427,   428,
     424,   424,   429,   429,   431,   432,   433,   430,   430,   435,
     436,   437,   434,   434,   438,   438,   439,   440,   441,   443,
     442,   442,   444,   444,   445,   445,   447,   448,   449,   450,
     451,   452,   453,   446,   454,   454,   454,   455,   455,   457,
     458,   456,   456,   459,   459,   460,   460,   460,   461,   461,
     461,   462,   462,   462,   462,   462,   462,   462
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
       4,     4,     4,     4,     3,     4,     4,     0,     5,     2,
       2,     3,     0,     1,     1,     3,     1,     1,     3,     4,
       1,     2,     2,     2,     1,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     5,     1,     3,     3,
       1,     0,     4,     1,     0,     4,     1,     0,     0,     7,
       1,     3,     1,     2,     0,     2,     1,     3,     0,     7,
       3,     0,     6,     3,     3,     3,     4,     4,     1,     2,
       2,     3,     3,     4,     3,     4,     3,     0,     5,     0,
       8,     3,     0,     4,     3,     4,     3,     0,     6,     0,
       8,     3,     0,     4,     0,     6,     4,     0,     3,     0,
       4,     2,     0,     0,     5,     3,     0,     0,     5,     3,
       3,     0,     6,     5,     4,     4,     3,     2,     2,     2,
       3,     0,     6,     3,     0,     6,     4,     2,     3,     4,
       0,     3,     3,     4,     0,     0,     6,     5,     0,     5,
       3,     3,     0,     0,    11,     1,     1,     1,     1,     2,
       3,     2,     3,     2,     3,     2,     0,     4,     4,     3,
       3,     3,     2,     3,     3,     2,     3,     2,     0,     0,
       7,     0,     0,     7,     0,     0,     7,     3,     2,     0,
       1,     0,     0,     5,     1,     1,     2,     1,     1,     1,
       1,     2,     0,     3,     0,     3,     0,     3,     0,     3,
       0,     4,     0,     1,     1,     1,     0,     4,     0,     4,
       0,     3,     0,     0,     0,     9,     3,     1,     0,     3,
       0,     3,     0,     1,     1,     0,     1,     2,     2,     1,
       3,     3,     1,     3,     3,     3,     2,     1,     3,     0,
       3,     0,     0,     3,     3,     2,     0,     2,     3,     3,
       3,     3,     1,     1,     3,     3,     3,     1,     1,     1,
       0,     2,     2,     2,     1,     2,     1,     2,     1,     2,
       1,     1,     1,     1,     0,     0,     6,     4,     0,     0,
       5,     3,     1,     1,     0,     3,     0,     4,     0,     2,
       0,     2,     3,     3,     3,     3,     3,     3,     2,     2,
       2,     4,     3,     0,     1,     0,     1,     1,     3,     0,
       3,     1,     1,     3,     0,     3,     0,     3,     0,     3,
       1,     1,     3,     0,     3,     0,     3,     0,     3,     1,
       1,     1,     1,     1,     2,     1,     1,     1,     2,     0,
       3,     1,     0,     3,     0,     3,     0,     3,     0,     3,
       1,     3,     0,     0,     4,     2,     0,     4,     0,     2,
       0,     3,     3,     2,     0,     4,     0,     5,     0,     2,
       1,     3,     1,     2,     2,     1,     1,     1,     0,     4,
       1,     1,     1,     2,     2,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     0,     6,     0,
       4,     2,     1,     2,     2,     1,     1,     2,     1,     1,
       2,     2,     1,     2,     2,     1,     2,     2,     1,     2,
       2,     2,     1,     2,     2,     2,     0,     2,     1,     2,
       1,     0,     4,     0,     5,     3,     0,     0,     0,     0,
      13,     3,     1,     1,     0,     0,     0,     9,     3,     0,
       0,     0,     9,     3,     1,     2,     2,     1,     1,     0,
       5,     5,     1,     2,     1,     1,     0,     0,     0,     0,
       0,     0,     0,    19,     1,     2,     2,     0,     2,     0,
       0,     8,     5,     0,     2,     1,     2,     2,     1,     2,
       2,     0,     1,     1,     1,     1,     1,     1
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
#line 517 "rwlparser.y" /* yacc.c:1646  */
    {
	  ; // we are done!
	}
#line 3474 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 523 "rwlparser.y" /* yacc.c:1646  */
    { if (bit(rwm->mxq->errbits,RWL_ERROR_SEVERE)) YYABORT; }
#line 3480 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 529 "rwlparser.y" /* yacc.c:1646  */
    {  
	    bis(rwm->m2flags, RWL_P2_INTHING);
	    if (bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
	      YYACCEPT;
	  }
#line 3490 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 535 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->m2flags, RWL_P2_INTHING); 
	    if (bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
	      YYACCEPT;
	  }
#line 3500 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 555 "rwlparser.y" /* yacc.c:1646  */
    { rwlprintallvars(rwm); }
#line 3506 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 567 "rwlparser.y" /* yacc.c:1646  */
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
#line 3525 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 583 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->raname = rwm->inam;
	      bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	      bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	      rwm->ravarn = rwladdvar(rwm, rwm->inam, RWL_TYPE_RAST, 0);
	      rwlrastbeg(rwm, rwm->raname, RWL_TYPE_RAST);
	    }
#line 3537 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 592 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->raname = rwm->inam;
	      bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	      rwm->ravarn = rwladdvar(rwm, rwm->inam, RWL_TYPE_RAST, 0);
	      rwlrastbeg(rwm, rwm->raname, RWL_TYPE_RAST);
	    }
#line 3548 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 600 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->raname = rwm->inam;
	      bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	      bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	      rwm->ravarn = rwladdvar(rwm, rwm->inam, RWL_TYPE_RAPROC, 0);
	      rwlrastbeg(rwm, rwm->raname, RWL_TYPE_RAPROC);
	    }
#line 3560 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 609 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->raname = rwm->inam;
	      rwm->ravarn = rwladdvar(rwm, rwm->inam, RWL_TYPE_RAPROC, 0);
	      rwlrastbeg(rwm, rwm->raname, RWL_TYPE_RAPROC);
	    }
#line 3570 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 620 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlrastfin(rwm, rwm->raname, (sb4) rwm->ravarn);
	    }
#line 3578 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 624 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlcancelvar(rwm, rwm->raname, (sb4) rwm->ravarn);
	      rwlrastclear(rwm);
	      rwlerror(rwm, RWL_ERROR_DECL_RAST); 
	      yyerrok;
	    }
#line 3589 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 637 "rwlparser.y" /* yacc.c:1646  */
    {rwm->raentry = rwm->sval; }
#line 3595 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 639 "rwlparser.y" /* yacc.c:1646  */
    {rwlrastadd(rwm, rwm->raentry, rwm->pval.dval); }
#line 3601 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 645 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlrastfin(rwm, rwm->raname, (sb4) rwm->ravarn);
	    }
#line 3609 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 649 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlcancelvar(rwm, rwm->raname, (sb4) rwm->ravarn);
	      rwlrastclear(rwm);
	      rwlerror(rwm, RWL_ERROR_DECL_RAPROC); 
	      yyerrok;
	    }
#line 3620 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 661 "rwlparser.y" /* yacc.c:1646  */
    {rwm->raentry = rwm->inam; }
#line 3626 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 663 "rwlparser.y" /* yacc.c:1646  */
    {rwlrastadd(rwm, rwm->raentry, rwm->pval.dval); }
#line 3632 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 668 "rwlparser.y" /* yacc.c:1646  */
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
#line 3653 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 685 "rwlparser.y" /* yacc.c:1646  */
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
#line 3713 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 741 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DATABASE_WRONG); yyerrok; }
#line 3719 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 747 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
	        if (rwm->dbsav->username)
		  rwlerror(rwm, RWL_ERROR_DBSPEC_ALREADY, "username");
		else
		  rwm->dbsav->username = rwlstrdup(rwm, rwm->pval.sval);
	      }
	    }
#line 3733 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 767 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
	        if (rwm->dbsav->username)
		  rwlerror(rwm, RWL_ERROR_DBSPEC_ALREADY, "username");
		else
		  rwm->dbsav->username = rwlstrdup(rwm, rwm->pval.sval);
	      }
	    }
#line 3747 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 777 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	        rwm->dbsav->password = rwlstrdup(rwm, rwm->pval.sval);
	    }
#line 3756 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 782 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwlcclassgood(rwm, (rwm->pval.sval)))
	      { 
	        if (rwm->dbsav)
		  rwm->dbsav->cclass = rwlstrdup(rwm, rwm->pval.sval);
	      }
	    }
#line 3768 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 790 "rwlparser.y" /* yacc.c:1646  */
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
#line 3785 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 803 "rwlparser.y" /* yacc.c:1646  */
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
#line 3820 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 834 "rwlparser.y" /* yacc.c:1646  */
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
#line 3835 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 845 "rwlparser.y" /* yacc.c:1646  */
    {
	      if (rwm->defdb)
	        rwlerror(rwm, RWL_ERROR_DBALREADY, "default", rwm->defdb);
	      else
	      {
	        if (rwm->dbsav)
		  bis(rwm->dbsav->flags, RWL_DB_DEFAULT);
	        rwm->defdb = rwm->dbname;
#ifdef NEVER
		// The default database should pick up any -X, -Y, -G, -g arguments
		if (rwm->argX)
		{
		  rwm->dbsav->poolmax = rwm->argX;
		  if (rwm->argY)
		    rwm->dbsav->poolmin = rwm->argY;
		  else
		    rwm->dbsav->poolmin = 1;
		  rwm->dbsav->pooltype = RWL_DBPOOL_SESSION;
		  rwm->dbsav->pooltext = "sessionpool";
		  if (bit(rwm->m3flags, RWL_P3_DEFRECONN|RWL_P3_DEFTHRDED))
		    rwlerror(rwm, RWL_ERROR_DBPOOL_ALREADY);
		    
		}     
		else
		{ 
		  if (rwm->argY)
		    rwlerror(rwm, RWL_ERROR_ONLY_POOL_MIN_SET);
		  if (bit(rwm->m3flags, RWL_P3_DEFRECONN))
		  {
		    rwm->dbsav->pooltype = RWL_DBPOOL_RECONNECT;
		    rwm->dbsav->pooltext = "reconnect";
		    if (bit(rwm->m3flags, RWL_P3_DEFTHRDED))
		      rwlerror(rwm, RWL_ERROR_DBPOOL_ALREADY);
		  }
		  else if (bit(rwm->m3flags, RWL_P3_DEFTHRDED))
		  {
		    rwm->dbsav->pooltype = RWL_DBPOOL_RETHRDED;
		    rwm->dbsav->pooltext = "threads dedicated";
		  }
		  else
		  {
		    rwm->dbsav->pooltype = RWL_DBPOOL_DEDICATED;
		    rwm->dbsav->pooltext = "dedicated";
		  }
		}
#endif
	      }
	    }
#line 3888 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 894 "rwlparser.y" /* yacc.c:1646  */
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
#line 3906 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 910 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      { 
		rwm->dbsav->stmtcache = rwlcheckminval(rwm->mxq, 0, rwm->pval.ival
		  , 0, RWL_DEFAULT_STMTCACHE, (text *)"cursorcache");
		bis(rwm->dbsav->flags, RWL_DB_CCACHUSER);
	      }
	    }
#line 3919 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 919 "rwlparser.y" /* yacc.c:1646  */
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
#line 3937 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 936 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
		if (rwm->dbsav->pooltype)
		  rwlerror(rwm, RWL_ERROR_DBPOOL_ALREADY);
	        rwm->dbsav->pooltype = RWL_DBPOOL_POOLED;
		rwm->dbsav->pooltext = "drcp pooled";
	      }
	    }
#line 3951 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 946 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
		if (rwm->dbsav->pooltype)
		  rwlerror(rwm, RWL_ERROR_DBPOOL_ALREADY);
	        rwm->dbsav->pooltype = RWL_DBPOOL_DEDICATED;
		rwm->dbsav->pooltext = "dedicated";
	      }
	    }
#line 3965 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 956 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
		if (rwm->dbsav->pooltype)
		  rwlerror(rwm, RWL_ERROR_DBPOOL_ALREADY);
	        rwm->dbsav->pooltype = RWL_DBPOOL_RETHRDED;
		rwm->dbsav->pooltext = "threads dedicated";
	      }
	    }
#line 3979 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 966 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
		if (rwm->dbsav->pooltype)
		  rwlerror(rwm, RWL_ERROR_DBPOOL_ALREADY);
	        rwm->dbsav->pooltype = RWL_DBPOOL_RECONNECT;
		rwm->dbsav->pooltext = "reconnect";
	      }
	    }
#line 3993 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 983 "rwlparser.y" /* yacc.c:1646  */
    {
#if (RWL_OCI_VERSION<12)
	    rwlerror(rwm, RWL_ERROR_NOT_SUPPORTED_IN_VERSION, "statemark",RWL_OCI_VERSION);
#else
	    bis(rwm->dbsav->flags,RWL_DB_STATEMARK);
#endif
	  }
#line 4005 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 991 "rwlparser.y" /* yacc.c:1646  */
    {
#if (RWL_OCI_VERSION<12)
	    rwlerror(rwm, RWL_ERROR_NOT_SUPPORTED_IN_VERSION, "requestmark",RWL_OCI_VERSION);
#else
	    bis(rwm->dbsav->flags,RWL_DB_REQMARK);
#endif
	  }
#line 4017 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 1001 "rwlparser.y" /* yacc.c:1646  */
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
#line 4032 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 1012 "rwlparser.y" /* yacc.c:1646  */
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
#line 4048 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 1028 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      { 
		rwm->dbsav->ptimeout = rwlcheckminval(rwm->mxq, 0, rwm->pval.ival
		  , RWL_DBPOOL_CONNECT==rwm->dbsav->pooltype ? 0: 1
		  , RWL_DBPOOL_DEFAULT_TIMEOUT, (text *)"release timeout");
	      }
	    }
#line 4061 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 1041 "rwlparser.y" /* yacc.c:1646  */
    { 
#if (OCI_MAJOR_VERSION >= 12)
	      if (rwm->dbsav && rwm->pval.dval >= 0)
		rwm->dbsav->wtimeout = rwm->pval.dval;
#else
	    rwlerror(rwm, RWL_ERROR_NOT_YET_IMPL, "sessionpool wait attribute");
#endif
	    }
#line 4074 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 1055 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->dbsav && rwm->pval.dval >= 0)
	      bis(rwm->dbsav->flags, RWL_DB_SPTOBREAK);
	  }
#line 4083 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 1060 "rwlparser.y" /* yacc.c:1646  */
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
#line 4098 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 1071 "rwlparser.y" /* yacc.c:1646  */
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
#line 4114 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 1088 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprimmed(rwm);
	  }
#line 4122 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 1095 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprimmed(rwm);
	  }
#line 4130 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 1111 "rwlparser.y" /* yacc.c:1646  */
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
#line 4146 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 1123 "rwlparser.y" /* yacc.c:1646  */
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
#line 4165 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 1139 "rwlparser.y" /* yacc.c:1646  */
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
#line 4201 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 1175 "rwlparser.y" /* yacc.c:1646  */
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
#line 4216 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 1186 "rwlparser.y" /* yacc.c:1646  */
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
#line 4232 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 1199 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwm->mxq->evar[rwm->codeguess].v2val = rwm->facnt;
	      rwm->supsemerr = RWL_SUPSEM_PROC;
	    }
#line 4241 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 1207 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 4250 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 1212 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 4258 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 1219 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 4267 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 1224 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 4275 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 1231 "rwlparser.y" /* yacc.c:1646  */
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
#line 4361 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 1321 "rwlparser.y" /* yacc.c:1646  */
    {
          sb4 l = rwlfindvar(rwm->mxq, rwm->inam, RWL_VAR_NOGUESS);
          if (l>=0)
            rwlprintvar(rwm->mxq, l);
          }
#line 4371 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 1329 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m3flags, RWL_P3_MISBRACK); }
#line 4377 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 1330 "rwlparser.y" /* yacc.c:1646  */
    { bic(rwm->m3flags, RWL_P3_MISBRACK); }
#line 4383 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 1333 "rwlparser.y" /* yacc.c:1646  */
    { if (!bit(rwm->m2flags, RWL_P2_NOWARNDEP)) rwlerror(rwm, RWL_ERROR_MISSING_DECL_BRACK); }
#line 4389 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 1345 "rwlparser.y" /* yacc.c:1646  */
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
#line 4417 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 1373 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_INT; bic(rwm->addvarbits,RWL_IDENT_THRSPEC); }
#line 4423 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 1375 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_DBL; bic(rwm->addvarbits,RWL_IDENT_THRSPEC); }
#line 4429 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 1377 "rwlparser.y" /* yacc.c:1646  */
    { rwm->declslen=RWL_DEFAULT_STRLEN; rwm->dtype=RWL_TYPE_STR; bic(rwm->addvarbits,RWL_IDENT_THRSPEC); }
#line 4435 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 1379 "rwlparser.y" /* yacc.c:1646  */
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
#line 4454 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 1394 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwm->dtype = 0;
	      rwlerror(rwm, RWL_ERROR_BAD_ARGUMENT_TYPE, "file");
	    }
#line 4463 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 1399 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwm->dtype = 0;
	      rwlerror(rwm, RWL_ERROR_BAD_ARGUMENT_TYPE, "sql");
	    }
#line 4472 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 1404 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwm->dtype = 0;
	      rwlerror(rwm, RWL_ERROR_BAD_ARGUMENT_TYPE, "clob");
	    }
#line 4481 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 1413 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m4flags,RWL_P4_STATSONLY); }
#line 4487 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 1415 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m4flags,RWL_P4_PROCHASSQL); }
#line 4493 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 1417 "rwlparser.y" /* yacc.c:1646  */
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
#line 4513 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1437 "rwlparser.y" /* yacc.c:1646  */
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
#line 4531 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 1452 "rwlparser.y" /* yacc.c:1646  */
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
#line 4549 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 1467 "rwlparser.y" /* yacc.c:1646  */
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
#line 4568 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 1483 "rwlparser.y" /* yacc.c:1646  */
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
#line 4588 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 1526 "rwlparser.y" /* yacc.c:1646  */
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
#line 4605 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1540 "rwlparser.y" /* yacc.c:1646  */
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
#line 4623 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 1554 "rwlparser.y" /* yacc.c:1646  */
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
#line 4641 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1568 "rwlparser.y" /* yacc.c:1646  */
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
#line 4657 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 1580 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    }
#line 4665 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1583 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_UNIFORM); }
#line 4671 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 1584 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LOGB); }
#line 4677 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1585 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LOG); }
#line 4683 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1586 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_EXPB); }
#line 4689 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1587 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_EXP); }
#line 4695 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1588 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_CEIL); }
#line 4701 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1589 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_TRUNC); }
#line 4707 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1590 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_FLOOR); }
#line 4713 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1591 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ROUND); }
#line 4719 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1592 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SQRT); }
#line 4725 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1593 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SIN); }
#line 4731 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1594 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_COS); }
#line 4737 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1595 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ATAN2); }
#line 4743 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1596 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LENGTHB); }
#line 4749 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1598 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_INSTRB2); }
#line 4755 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1600 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_INSTRB3); }
#line 4761 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1602 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SUBSTRB2); }
#line 4767 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1604 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SUBSTRB3); }
#line 4773 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1605 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_GETENV); }
#line 4779 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1606 "rwlparser.y" /* yacc.c:1646  */
    { 
						    if (bit(rwm->m4flags, RWL_P4_SLASHCONVERT)) rwlexprpush0(rwm,RWL_STACK_WINSLASHF2B);
						  }
#line 4787 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1609 "rwlparser.y" /* yacc.c:1646  */
    { 
						    if (bit(rwm->m4flags, RWL_P4_SLASHCONVERT)) rwlexprpush0(rwm,RWL_STACK_WINSLASHF2BB);
						  }
#line 4795 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1612 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SYSTEM); }
#line 4801 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1614 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprpush(rwm,rwm->inam ,RWL_STACK_SYSTEM2STR);
	  }
#line 4809 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1618 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_SYSTEM_BAD); yyerrok;
	    rwlexprpush0(rwm,RWL_STACK_SYSTEM);
	  }
#line 4818 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1622 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ERLANG); }
#line 4824 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1623 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ERLANG2); }
#line 4830 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1625 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ERLANGK); }
#line 4836 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1627 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_NORMALRANDOM); }
#line 4842 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1628 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ISNULL); }
#line 4848 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1630 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ACCESS); }
#line 4854 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1632 "rwlparser.y" /* yacc.c:1646  */
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
#line 4869 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1643 "rwlparser.y" /* yacc.c:1646  */
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
#line 4884 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1654 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprpush(rwm, rwm->inam, RWL_STACK_SERVERRELEASE);
	  }
#line 4892 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1658 "rwlparser.y" /* yacc.c:1646  */
    {
	    // push RWL_T_NULL to make exprfinish work
	    rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    rwlerror(rwm, RWL_ERROR_DBFUN_NEED_IDENT, "serverrelease"); yyerrok;
	  }
#line 4902 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1664 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprpush(rwm, rwm->inam, RWL_STACK_OPENSESSIONCOUNT);
	  }
#line 4910 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1668 "rwlparser.y" /* yacc.c:1646  */
    {
	    // push RWL_T_NULL to make exprfinish work
	    rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    rwlerror(rwm, RWL_ERROR_DBFUN_NEED_IDENT, "opensessioncount"); yyerrok;
	  }
#line 4920 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1674 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprpush(rwm, rwm->inam, RWL_STACK_ACTIVESESSIONCOUNT);
	  }
#line 4928 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1678 "rwlparser.y" /* yacc.c:1646  */
    {
	    // push RWL_T_NULL to make exprfinish work
	    rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    rwlerror(rwm, RWL_ERROR_DBFUN_NEED_IDENT, "activesessioncount"); yyerrok;
	  }
#line 4938 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1684 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->sqname)
	      rwlexprpush(rwm, rwm->sqname, RWL_STACK_SQL_ID);
	  }
#line 4947 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1689 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprpush(rwm, rwm->inam, RWL_STACK_SQL_ID);
	  }
#line 4955 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1693 "rwlparser.y" /* yacc.c:1646  */
    {
	    // push RWL_T_NULL to make exprfinish work
	    rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    rwlerror(rwm, RWL_ERROR_SQLID_NEED_IDENT); yyerrok;
	  }
#line 4965 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1700 "rwlparser.y" /* yacc.c:1646  */
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
#line 4982 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1714 "rwlparser.y" /* yacc.c:1646  */
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
#line 4998 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1726 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (!bit(rwm->m2flags, RWL_P2_NOWARNDEP) && bit(rwm->m3flags,RWL_P3_MISBRACK))
	      rwlerror(rwm, RWL_ERROR_MISSING_EMPTY_BRACKETS, "runseconds");
	    rwlexprpush(rwm, 0, RWL_STACK_RUNSECONDS);
	  }
#line 5008 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1732 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (!bit(rwm->m2flags, RWL_P2_NOWARNDEP) && bit(rwm->m3flags,RWL_P3_MISBRACK))
	      rwlerror(rwm, RWL_ERROR_MISSING_EMPTY_BRACKETS, "epochseconds");
	    rwlexprpush(rwm, 0, RWL_STACK_EPOCHSECONDS);
	  }
#line 5018 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1751 "rwlparser.y" /* yacc.c:1646  */
    { rwm->aacnt[rwm->furlev]++; }
#line 5024 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1757 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ISNULL); }
#line 5030 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1758 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ISNOTNULL); }
#line 5036 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1764 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_MINUS); }
#line 5042 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1765 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_NOT); }
#line 5048 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1766 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_NOT); }
#line 5054 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1771 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_MUL); }
#line 5060 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1772 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_DIV); }
#line 5066 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1773 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_MOD); }
#line 5072 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1778 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ADD); }
#line 5078 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1779 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SUB); }
#line 5084 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1784 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LESS); }
#line 5090 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1785 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_GREATER); }
#line 5096 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1786 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LESSEQ); }
#line 5102 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1787 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_GREATEREQ); }
#line 5108 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1788 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_BETWEEN); }
#line 5114 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1793 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_EQUAL); }
#line 5120 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1794 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_NOTEQUAL); }
#line 5126 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1800 "rwlparser.y" /* yacc.c:1646  */
    { 
	    // With AND (and OR) skipdep is used to mark
	    // the expression element we need to skip until
	    // in case the first condition is false (true for OR)
	    rwm->ptail->branchtype = RWL_EXP_ANDBRANCH;
	    if (rwm->skipdep++ >= UB1MAXVAL)
	      rwlsevere(rwm, "[rwlparser-andskip:%d]", rwm->skipdep);
	    rwm->ptail->skipnxt = rwm->skipdep;
	  }
#line 5140 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1810 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprpush2(rwm,0,RWL_STACK_AND, rwm->skipdep);
	    rwm->skipdep--;
	  }
#line 5149 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1819 "rwlparser.y" /* yacc.c:1646  */
    {  
	    // see comment above
	    rwm->ptail->branchtype = RWL_EXP_ORBRANCH;
	    if (rwm->skipdep++ >= UB1MAXVAL)
	      rwlsevere(rwm, "[rwlparser-orskip:%d]", rwm->skipdep);
	    rwm->ptail->skipnxt = rwm->skipdep;
	  }
#line 5161 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1827 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprpush2(rwm,0,RWL_STACK_OR ,rwm->skipdep);
	    rwm->skipdep--;
	  }
#line 5170 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1836 "rwlparser.y" /* yacc.c:1646  */
    {  
	    // With conditional execution we mark the condition
	    // with RWL_EXP_CONDBRANCH1
	    rwm->ptail->branchtype = RWL_EXP_CONDBRANCH1;
	    if (rwm->skipdep++ >= UB1MAXVAL)
	      rwlsevere(rwm, "[rwlparser-condskip:%d]", rwm->skipdep);
	    rwm->ptail->skipnxt = rwm->skipdep;
	  }
#line 5183 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1845 "rwlparser.y" /* yacc.c:1646  */
    {
	    // and the place of ':' (really ELSE) with 
	    // RWL_EXP_CONDBRANCH2
	    rwm->ptail->branchtype = RWL_EXP_CONDBRANCH2;
	    rwm->ptail->skipnxt = rwm->skipdep;
	  }
#line 5194 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1852 "rwlparser.y" /* yacc.c:1646  */
    {  
	    // And the actual conditional is the "end if" place
	    rwlexprpush2(rwm,0,RWL_STACK_CONDITIONAL, rwm->skipdep);
	    rwm->skipdep--;
	  }
#line 5204 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1861 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_CONCAT); }
#line 5210 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1866 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_CONCAT); }
#line 5216 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1877 "rwlparser.y" /* yacc.c:1646  */
    { rwm->supsemerr = 0; }
#line 5222 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1882 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
	    {
	      rwm->ifdirdep = 0; // since we may be skipping over $else, $endif
	      YYACCEPT;
	    }
	  }
#line 5234 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1890 "rwlparser.y" /* yacc.c:1646  */
    { yyerrok; }
#line 5240 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1892 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_COMMAND_NOT_LOCAL, "threads"); yyerrok; }
#line 5246 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1899 "rwlparser.y" /* yacc.c:1646  */
    { yyerrok; }
#line 5252 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1901 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_COMMAND_NOT_LOCAL, "run"); yyerrok; }
#line 5258 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1905 "rwlparser.y" /* yacc.c:1646  */
    { yyerrok; }
#line 5264 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1907 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_NOT_LOCAL, "database"); yyerrok; }
#line 5270 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1909 "rwlparser.y" /* yacc.c:1646  */
    { yyerrok ; }
#line 5276 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1912 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_NOT_LOCAL, "random procedure array"); yyerrok; }
#line 5282 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1915 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_NOT_LOCAL, "random string array"); yyerrok; }
#line 5288 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1920 "rwlparser.y" /* yacc.c:1646  */
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
#line 5321 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1949 "rwlparser.y" /* yacc.c:1646  */
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
#line 5340 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1970 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_LOB); yyerrok; }
#line 5346 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 1977 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_INT); yyerrok; }
#line 5352 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1983 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_DBL); yyerrok; }
#line 5358 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 1985 "rwlparser.y" /* yacc.c:1646  */
    { 
		rwm->declslen=RWL_DEFAULT_STRLEN;
	      }
#line 5366 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 1991 "rwlparser.y" /* yacc.c:1646  */
    {
	      if (RWL_TYPE_CANCELLED == rwm->pval.vtype)
		rwm->declslen = 1; // kind of a kludge, but this prevents doube
				   // error reporting if using local variable
	      else
	      {
		rwm->declslen = rwm->pval.ival;
	      }
	    }
#line 5380 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 2005 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_STR); yyerrok; }
#line 5386 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 2007 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dtype=RWL_TYPE_FILE;
	    //if (rwm->codename)
	    //  rwlerror(rwm, RWL_ERROR_NOT_LOCAL, "file");
	  }
#line 5396 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 2016 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_FILE); yyerrok; }
#line 5402 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 2021 "rwlparser.y" /* yacc.c:1646  */
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
#line 5427 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 2044 "rwlparser.y" /* yacc.c:1646  */
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
#line 5454 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 2068 "rwlparser.y" /* yacc.c:1646  */
    { if (!rwm->rslerror) rwlcodeadd0(rwm, RWL_CODE_ELSE); }
#line 5460 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 2071 "rwlparser.y" /* yacc.c:1646  */
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
#line 5485 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 2094 "rwlparser.y" /* yacc.c:1646  */
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
#line 5526 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 2135 "rwlparser.y" /* yacc.c:1646  */
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
#line 5598 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 2204 "rwlparser.y" /* yacc.c:1646  */
    { 
		  rwlerror(rwm, RWL_ERROR_LOOP);
		  rwm->rsllityp[rwm->rsldepth] = RWL_LI_BAD;
		  yyerrok;
		}
#line 5608 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 2211 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SYSTEM); }
#line 5614 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 2214 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprpush(rwm,rwm->inam ,RWL_STACK_SYSTEM2STR);
	  }
#line 5622 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 2219 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_SYSTEM_BAD); yyerrok;
	    rwlexprclear(rwm);
	  }
#line 5631 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 2224 "rwlparser.y" /* yacc.c:1646  */
    {
		/* start a dummy assignment such that expression gets executed */
		rwm->assignvar = RWL_DUMMY_VAR;
		rwm->assignoper = RWL_T_ASSIGN;
		rwlexprbeg(rwm);
	      }
#line 5642 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 2233 "rwlparser.y" /* yacc.c:1646  */
    {
		/* start expression for assign */
		rwm->assignvar = rwm->inam;
		rwlexprbeg(rwm);
	      }
#line 5652 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 2242 "rwlparser.y" /* yacc.c:1646  */
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
#line 5668 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 2254 "rwlparser.y" /* yacc.c:1646  */
    {
	        rwm->assignvar = rwm->codename;
		rwlexprbeg(rwm);
	      }
#line 5677 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 2259 "rwlparser.y" /* yacc.c:1646  */
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
#line 5710 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 2288 "rwlparser.y" /* yacc.c:1646  */
    { 
		  rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		  rwlexprclear(rwm);
		  yyerrok;
		}
#line 5720 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 2295 "rwlparser.y" /* yacc.c:1646  */
    {
	        rwm->assignvar = rwm->codename;
		rwlexprbeg(rwm);
	      }
#line 5729 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 2300 "rwlparser.y" /* yacc.c:1646  */
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
#line 5762 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 2330 "rwlparser.y" /* yacc.c:1646  */
    { 
		  rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		  rwlexprclear(rwm);
		  yyerrok;
		}
#line 5772 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 2338 "rwlparser.y" /* yacc.c:1646  */
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
#line 5790 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 2352 "rwlparser.y" /* yacc.c:1646  */
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
#line 5805 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 2366 "rwlparser.y" /* yacc.c:1646  */
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
#line 5823 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 2382 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (!rwm->codename)
	    {
	      rwlerror(rwm, RWL_ERROR_NOT_DONE_IN_MAIN, "modify database leak");
	      goto dontmoddbpool;
	    }
	    else
	      rwlcodeadd0(rwm, RWL_CODE_MODDBLEAK);
	  }
#line 5837 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 2393 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->codename)
	      rwlcodeadd0(rwm, RWL_CODE_SESRELDROP);
	  }
#line 5846 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 2399 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->codename)
	      rwlcodeadd0(rwm, RWL_CODE_SESRELDROP);
	  }
#line 5855 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 2405 "rwlparser.y" /* yacc.c:1646  */
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
#line 5870 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 2417 "rwlparser.y" /* yacc.c:1646  */
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
#line 5885 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 2429 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->codename)
	      rwlcodeadd0(rwm, RWL_CODE_SHIFT);
	    else
	      if (!bit(rwm->m2flags, RWL_P2_NOEXEC))
		rwlshiftdollar(rwm->mxq, &rwm->loc);
	  }
#line 5897 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 2438 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->codename)
	      rwlcodeadd0(rwm, RWL_CODE_GETRUSAGE);
	    else
	      if (!bit(rwm->m2flags, RWL_P2_NOEXEC))
		rwlgetrusage(rwm->mxq, 0);
	  }
#line 5909 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 2447 "rwlparser.y" /* yacc.c:1646  */
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
#line 5924 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 2460 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_MODIFY); yyerrok; }
#line 5930 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 2465 "rwlparser.y" /* yacc.c:1646  */
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
#line 5964 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 2497 "rwlparser.y" /* yacc.c:1646  */
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
#line 6053 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 2582 "rwlparser.y" /* yacc.c:1646  */
    {
	      /* This code can cause lookahead */
	      rwlerror(rwm, RWL_ERROR_BAD_ARG_LIST);
	      rwlexprclear(rwm);
	      yyerrok;
	    }
#line 6064 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 2589 "rwlparser.y" /* yacc.c:1646  */
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
#line 6083 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 2608 "rwlparser.y" /* yacc.c:1646  */
    { rwm->supsemerr = RWL_SUPSEM_EMBSQL; }
#line 6089 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 2614 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m3flags, RWL_P3_IMMPARSEFOR); }
#line 6095 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 2616 "rwlparser.y" /* yacc.c:1646  */
    { bic(rwm->m3flags, RWL_P3_IMMPARSEFOR); }
#line 6101 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 2622 "rwlparser.y" /* yacc.c:1646  */
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
#line 6188 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 2707 "rwlparser.y" /* yacc.c:1646  */
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
#line 6221 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 2737 "rwlparser.y" /* yacc.c:1646  */
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
#line 6257 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 2770 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_NO_FILE_FOR_FFLUSH);
	    yyerrok;
	  }
#line 6266 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 2777 "rwlparser.y" /* yacc.c:1646  */
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
#line 6293 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 2802 "rwlparser.y" /* yacc.c:1646  */
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
#line 6326 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 2833 "rwlparser.y" /* yacc.c:1646  */
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
#line 6349 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 2861 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_FILE_FOR_WRITE);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6360 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 2870 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_STRING_FOR_SPRINTF);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6371 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 2879 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6382 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 2889 "rwlparser.y" /* yacc.c:1646  */
    {
	      // Note that we do not document this syntax without comma
	      if (rwm->filenam)
		rwlerror(rwm, RWL_ERROR_COMMA_IS_RECOMMENDED, rwm->filenam
		, bit(rwm->mflags,RWL_P_PRINTLINE) ? "writeline" : "write");
	    }
#line 6393 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 2901 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6404 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 2909 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_FILE_FOR_WRITE);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6415 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 2917 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_FILE_FOR_WRITE);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6426 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 2925 "rwlparser.y" /* yacc.c:1646  */
    { 
		if (rwm->codename)
		  rwlcodeadd0(rwm, RWL_CODE_NEWLINE);
		else
		  fputs(bit(rwm->m4flags, RWL_P4_CRNLWRITELINE) ? "\r\n" : "\n", stdout);
		bic(rwm->mflags,RWL_P_PRINTLINE|RWL_P_PRINTBLANK);
	      }
#line 6438 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 2935 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6449 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 2943 "rwlparser.y" /* yacc.c:1646  */
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
#line 6464 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 2954 "rwlparser.y" /* yacc.c:1646  */
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
#line 6503 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 2989 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m2flags, RWL_P2_MAYBECOMMAW); }
#line 6509 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 2990 "rwlparser.y" /* yacc.c:1646  */
    {
            sb4 l;
            rwm->lobvarn = RWL_VAR_NOTFOUND;
	    rwm->lobnam = (yychar == RWL_T_IDENTIFIER)
	      ? rwm->previnam
	      : rwm->inam;
	    if (bit(rwm->m2flags, RWL_P2_MAYBECOMMAW))
	      rwlerror(rwm, RWL_ERROR_COMMA_IS_RECOMMENDED, rwm->lobnam, "readlob");
            /* lookup the file and check it is a lob */
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
                  rwlerror(rwm,RWL_ERROR_INCORRECT_TYPE2, rwm->mxq->evar[l].stype, rwm->lobnam, "lob");
                break;
              }
            }
	  }
#line 6539 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 330:
#line 3016 "rwlparser.y" /* yacc.c:1646  */
    {
            sb4 l;
            /* lookup the variable and check it is a string */
            l = rwlfindvar2(rwm->mxq, rwm->inam, RWL_VAR_NOGUESS, rwm->codename);
            if (l>=0)
            {
              switch (rwm->mxq->evar[l].vtype)
              {
                case RWL_TYPE_STR:
		  if (rwm->codename)
		    rwlcodeaddpupu(rwm, RWL_CODE_READLOB
		      , rwm->lobnam, rwm->lobvarn, rwm->inam, l);
		  else
		  if (!bit(rwm->m2flags, RWL_P2_NOEXEC))
		  {
		    if (rwm->maindb)
		      rwlreadlob(rwm->mxq, rwm->mxq->evar[rwm->lobvarn].num.vptr, rwm->maindb
		      , &rwm->mxq->evar[l].num, &rwm->loc, 0);
		    else
		      rwlerror(rwm, RWL_ERROR_NOT_DONE_IN_MAIN, "readlob");
		  }
                break;

                default:
                  rwlerror(rwm,RWL_ERROR_INCORRECT_TYPE2
		    , rwm->mxq->evar[l].stype, rwm->inam, "string");
                break;
              }
            }
	  }
#line 6574 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 3046 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m2flags, RWL_P2_MAYBECOMMAW); }
#line 6580 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 3047 "rwlparser.y" /* yacc.c:1646  */
    {
            sb4 l;
            rwm->lobvarn = RWL_VAR_NOTFOUND;
	    rwm->lobnam = rwm->inam;
	    if (bit(rwm->m2flags, RWL_P2_MAYBECOMMAW))
	      rwlerror(rwm, RWL_ERROR_COMMA_IS_RECOMMENDED, rwm->lobnam, "writelob");
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
		    , rwm->mxq->evar[l].stype, rwm->lobnam, "lob");
                break;
              }
            }
	  }
#line 6609 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 3072 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwl_estack *estk;
	    estk = rwlexprfinish(rwm);
	    if (rwm->codename)
	      rwlcodeaddpup(rwm, RWL_CODE_WRITELOB, rwm->lobnam
		, rwm->lobvarn, estk);
	    else
	    if (!bit(rwm->m2flags, RWL_P2_NOEXEC))
	    {
	      rwlexpreval(estk, &rwm->loc, rwm->mxq, &rwm->mxq->xqnum);
	      if (rwm->maindb)
		rwlwritelob(rwm->mxq, rwm->mxq->evar[rwm->lobvarn].num.vptr, rwm->maindb
		, &rwm->mxq->xqnum, &rwm->loc, 0);
	      else
		rwlerror(rwm, RWL_ERROR_NOT_DONE_IN_MAIN, "writelob");
	    }
	  }
#line 6631 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 3091 "rwlparser.y" /* yacc.c:1646  */
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
#line 6652 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 3108 "rwlparser.y" /* yacc.c:1646  */
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
#line 6677 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 336:
#line 3131 "rwlparser.y" /* yacc.c:1646  */
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
#line 6699 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 337:
#line 3150 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlerror(rwm, RWL_ERROR_UNEXPECTED_AFTER_IDENTIFIER);
	      yyerrok;
	    }
#line 6708 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 338:
#line 3157 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_MISSING_SEMICOLON); yyerrok; }
#line 6714 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 340:
#line 3163 "rwlparser.y" /* yacc.c:1646  */
    { bic(rwm->m2flags, RWL_P2_MAYBECOMMAW); }
#line 6720 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 341:
#line 3168 "rwlparser.y" /* yacc.c:1646  */
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
#line 6870 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 342:
#line 3318 "rwlparser.y" /* yacc.c:1646  */
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
#line 6984 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 343:
#line 3430 "rwlparser.y" /* yacc.c:1646  */
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
#line 7021 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 3466 "rwlparser.y" /* yacc.c:1646  */
    {  
	    // This syntax is not documented
	    bic(rwm->m3flags, RWL_P3_CLHEADFOR);
	    rwlerror(rwm, RWL_ERROR_LEGACY_CONTROLLOOP_SYNTAX);
	  }
#line 7031 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 345:
#line 3471 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m3flags, RWL_P3_CLHEADFOR); }
#line 7037 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 346:
#line 3475 "rwlparser.y" /* yacc.c:1646  */
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
#line 7054 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 347:
#line 3491 "rwlparser.y" /* yacc.c:1646  */
    { if (bit(rwm->m3flags, RWL_P3_CLHEADFOR))
	      rwlerror(rwm, RWL_ERROR_MIX_LEGACY_CLOOP);
	  }
#line 7062 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 348:
#line 3495 "rwlparser.y" /* yacc.c:1646  */
    { if (bit(rwm->m3flags, RWL_P3_CLHEADFOR))
	      rwlerror(rwm, RWL_ERROR_MIX_LEGACY_CLOOP);
	  }
#line 7070 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 3499 "rwlparser.y" /* yacc.c:1646  */
    { if (!bit(rwm->m3flags, RWL_P3_CLHEADFOR))
	      rwlerror(rwm, RWL_ERROR_MIX_LEGACY_CLOOP);
	  }
#line 7078 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 352:
#line 3510 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7084 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 353:
#line 3512 "rwlparser.y" /* yacc.c:1646  */
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
#line 7101 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 354:
#line 3524 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7107 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 355:
#line 3526 "rwlparser.y" /* yacc.c:1646  */
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
#line 7126 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 356:
#line 3540 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7132 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 357:
#line 3542 "rwlparser.y" /* yacc.c:1646  */
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
#line 7151 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 3556 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7157 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 3558 "rwlparser.y" /* yacc.c:1646  */
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
#line 7174 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 3570 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7180 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 361:
#line 3572 "rwlparser.y" /* yacc.c:1646  */
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
#line 7210 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 362:
#line 3601 "rwlparser.y" /* yacc.c:1646  */
    { rwm->ynqueue = 0; }
#line 7216 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 363:
#line 3602 "rwlparser.y" /* yacc.c:1646  */
    { rwm->ynqueue = RWL_QUEUE_EVERY; }
#line 7222 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 364:
#line 3603 "rwlparser.y" /* yacc.c:1646  */
    { rwm->ynqueue = RWL_NOQUEUE_EVERY; }
#line 7228 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 365:
#line 3607 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->scname = rwm->inam; 
	    bic(rwm->m2flags, RWL_P2_AT|RWL_P2_ATDEFAULT);
	  }
#line 7237 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 366:
#line 3612 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->scname = rwm->inam;
	    bic(rwm->m2flags, RWL_P2_AT|RWL_P2_ATDEFAULT);
	  }
#line 7246 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 367:
#line 3617 "rwlparser.y" /* yacc.c:1646  */
    { 
	      bis(rwm->m2flags, RWL_P2_ATDEFAULT);
	    }
#line 7254 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 368:
#line 3621 "rwlparser.y" /* yacc.c:1646  */
    {
	      bic(rwm->m2flags, RWL_P2_AT|RWL_P2_ATDEFAULT);
	      // lookahead may have consumed the next identifier
	      rwm->scname = (yychar == RWL_T_IDENTIFIER)
	        ? rwm->previnam
	        : rwm->inam;
	    }
#line 7266 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 369:
#line 3629 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->dbname = rwm->inam; 
	      bis(rwm->m2flags, RWL_P2_AT);
	    }
#line 7275 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 370:
#line 3638 "rwlparser.y" /* yacc.c:1646  */
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
#line 7294 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 371:
#line 3653 "rwlparser.y" /* yacc.c:1646  */
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
#line 7326 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 372:
#line 3685 "rwlparser.y" /* yacc.c:1646  */
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
#line 7344 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 373:
#line 3700 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->m3flags, RWL_P3_IMMEDSQL); 
	    bis(rwm->sqsav->flags, RWL_SQLFLAG_IBUSE);
	    bis(rwm->sqsav->flags, RWL_SQLFLAG_IDUSE);
	    if (bit(rwm->m3flags,RWL_P3_IMPLCASE))
	      bis(rwm->sqsav->flags, RWL_SQLFLAG_ICASE);
	  }
#line 7356 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 374:
#line 3709 "rwlparser.y" /* yacc.c:1646  */
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
#line 7397 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 376:
#line 3747 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_SQL_WRONG) ;
	    yyerrok;
	  }
#line 7406 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 378:
#line 3755 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7412 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 379:
#line 3756 "rwlparser.y" /* yacc.c:1646  */
    {
	    if ((rwm->msqlstk = rwlexprfinish(rwm)))
	      bis(rwm->m3flags, RWL_P3_IMMISDYN); // now dynamic
	    else
	    {
	      rwm->mxq->evar[rwm->sqsavvarn].vtype = RWL_TYPE_CANCELLED;
	      rwm->mxq->evar[rwm->sqsavvarn].stype = "cancelled (sql)";
	    }
	  }
#line 7426 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 380:
#line 3768 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->sqllino = rwm->loc.lineno;
	  }
#line 7434 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 384:
#line 3777 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "sql") ;
	  }
#line 7442 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 387:
#line 3788 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bis(rwm->m2flags, RWL_P2_ATDEFAULT);
	  }
#line 7450 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 388:
#line 3792 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dbname = rwm->inam; 
	    bis(rwm->m2flags, RWL_P2_AT);
	  }
#line 7459 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 389:
#line 3800 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->m2flags, RWL_P2_AT|RWL_P2_ATDEFAULT);
	  }
#line 7467 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 390:
#line 3804 "rwlparser.y" /* yacc.c:1646  */
    { 
	      bis(rwm->m2flags, RWL_P2_ATDEFAULT);
	    }
#line 7475 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 391:
#line 3808 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->dbname = rwm->inam; 
	      bis(rwm->m2flags, RWL_P2_AT);
	    }
#line 7484 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 393:
#line 3818 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->dbname = 0;
	      bis(rwm->m2flags, RWL_P2_ATDEFAULT); /* explict choose standard DB */
	    }
#line 7493 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 394:
#line 3824 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->dbname = rwm->inam;
	      bis(rwm->m2flags, RWL_P2_AT); /* named DB */
	    }
#line 7502 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 395:
#line 3829 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_NO_DATABASE_NAME); yyerrok; }
#line 7508 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 396:
#line 3831 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_MISSING_SEMICOLON); yyerrok; }
#line 7514 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 399:
#line 3839 "rwlparser.y" /* yacc.c:1646  */
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
#line 7544 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 400:
#line 3865 "rwlparser.y" /* yacc.c:1646  */
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
#line 7621 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 402:
#line 3942 "rwlparser.y" /* yacc.c:1646  */
    {
		  rwm->assignvar = rwm->inam;
		  rwlexprbeg(rwm);
		}
#line 7630 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 403:
#line 3947 "rwlparser.y" /* yacc.c:1646  */
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
#line 7681 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 408:
#line 4010 "rwlparser.y" /* yacc.c:1646  */
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
#line 7700 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 409:
#line 4025 "rwlparser.y" /* yacc.c:1646  */
    {
              rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
              rwlexprclear(rwm);
              rwm->rslerror++; // to prevent attempting else/endif code generation
              yyerrok;
            }
#line 7711 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 410:
#line 4034 "rwlparser.y" /* yacc.c:1646  */
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
#line 7730 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 411:
#line 4049 "rwlparser.y" /* yacc.c:1646  */
    {
              rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
              rwlexprclear(rwm);
              rwm->rslerror++; // to prevent attempting else/endif code generation
              yyerrok;
            }
#line 7741 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 412:
#line 4058 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_LEGACY_WHILE_SYNTAX);
	  }
#line 7749 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 413:
#line 4062 "rwlparser.y" /* yacc.c:1646  */
    {
	    bis(rwm->rslflags[rwm->rsldepth], RWL_RSLFLAG_WHILOP);
	  }
#line 7757 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 414:
#line 4068 "rwlparser.y" /* yacc.c:1646  */
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
#line 7778 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 415:
#line 4085 "rwlparser.y" /* yacc.c:1646  */
    {
              rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
              rwlexprclear(rwm);
              rwm->rslerror++; // to prevent attempting else/endif code generation
              yyerrok;
            }
#line 7789 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 416:
#line 4092 "rwlparser.y" /* yacc.c:1646  */
    {
              rwlerror(rwm, RWL_ERROR_UNEXPECTED_KEYWORD, "loop");
              rwlexprclear(rwm);
              rwm->rslerror++; // to prevent attempting else/endif code generation
              yyerrok;
            }
#line 7800 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 421:
#line 4109 "rwlparser.y" /* yacc.c:1646  */
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
#line 7820 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 422:
#line 4125 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (rwm->codename)
	      rwlerror(rwm, RWL_ERROR_NO_LOCAL_SUMGLOB);
	    else
	      bis(rwm->addvarbits,RWL_IDENT_GLOBAL);
	  }
#line 7831 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 423:
#line 4135 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dtype=RWL_TYPE_STR;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 7841 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 424:
#line 4141 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->dtype=RWL_TYPE_STR;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 7850 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 425:
#line 4149 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dtype=RWL_TYPE_INT;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 7860 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 426:
#line 4155 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->dtype=RWL_TYPE_INT;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 7869 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 427:
#line 4163 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dtype=RWL_TYPE_DBL;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 7879 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 428:
#line 4169 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->dtype=RWL_TYPE_DBL;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 7888 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 429:
#line 4177 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 7897 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 430:
#line 4182 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 7905 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 431:
#line 4188 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_CLOB; }
#line 7911 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 432:
#line 4189 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_BLOB; }
#line 7917 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 433:
#line 4190 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_NCLOB; }
#line 7923 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 434:
#line 4194 "rwlparser.y" /* yacc.c:1646  */
    { rwm->sqllino = rwm->loc.lineno;}
#line 7929 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 435:
#line 4195 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	    bic(rwm->m2flags, RWL_P2_BADSQLFILTXT);
	    bic(rwm->m3flags, RWL_P3_IMMEDSQL); 
	    bic(rwm->m3flags, RWL_P3_IMMISDYN); 
	    rwm->sqllen = 0;
	    rwm->sqname = rwm->inam;
	  }
#line 7943 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 437:
#line 4206 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_SQL_WRONG); yyerrok;
	  }
#line 7951 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 438:
#line 4209 "rwlparser.y" /* yacc.c:1646  */
    { rwm->sqllino = rwm->loc.lineno;}
#line 7957 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 439:
#line 4210 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bic(rwm->m2flags, RWL_P2_BADSQLFILTXT);
	    bic(rwm->m3flags, RWL_P3_IMMEDSQL); 
	    bic(rwm->m3flags, RWL_P3_IMMISDYN); 
	    rwm->sqllen = 0;
	    rwm->sqname = rwm->inam;
	  }
#line 7970 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 441:
#line 4220 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_SQL_WRONG); yyerrok;
	  }
#line 7978 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 444:
#line 4230 "rwlparser.y" /* yacc.c:1646  */
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
#line 8028 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 445:
#line 4277 "rwlparser.y" /* yacc.c:1646  */
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
#line 8063 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 446:
#line 4311 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->m4flags, RWL_P4_AMPERSAND) && rwldynarcheck(rwm))
	    {
	      rwlerror(rwm, RWL_ERROR_CANNOT_AMPREP_HERE, "named sql declaration");
	      rwm->mxq->evar[rwm->sqsavvarn].vtype = RWL_TYPE_CANCELLED;
	      rwm->mxq->evar[rwm->sqsavvarn].stype = "cancelled (sql)";
	    }
	  }
#line 8076 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 448:
#line 4324 "rwlparser.y" /* yacc.c:1646  */
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
#line 8154 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 449:
#line 4402 "rwlparser.y" /* yacc.c:1646  */
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
#line 8251 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 453:
#line 4505 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_BIND); yyerrok; }
#line 8257 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 455:
#line 4509 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_BINDOUT); yyerrok; }
#line 8263 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 457:
#line 4513 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DEFINE); yyerrok; }
#line 8269 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 458:
#line 4515 "rwlparser.y" /* yacc.c:1646  */
    {
		  bis(rwm->sqsav->flags, RWL_SQFLAG_IGNERR);
		}
#line 8277 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 459:
#line 4519 "rwlparser.y" /* yacc.c:1646  */
    {
		  bic(rwm->sqsav->flags, RWL_SQFLAG_NOCURC);
		}
#line 8285 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 460:
#line 4523 "rwlparser.y" /* yacc.c:1646  */
    {
		  bis(rwm->sqsav->flags, RWL_SQFLAG_NOCURC);
		}
#line 8293 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 461:
#line 4528 "rwlparser.y" /* yacc.c:1646  */
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
#line 8315 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 462:
#line 4547 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ARRAY); yyerrok; }
#line 8321 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 463:
#line 4552 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_MISSING_SEMICOLON_IN_SQL); }
#line 8327 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 466:
#line 4558 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->sqsav->flags, RWL_SQFLAG_DYNAMIC))
	      rwlerror(rwm, RWL_ERROR_DEFINE_ARRAY_NOT_DYNAMIC);
	    else
	      bis(rwm->sqsav->flags, RWL_SQFLAG_ARRAYD);
	  }
#line 8338 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 469:
#line 4572 "rwlparser.y" /* yacc.c:1646  */
    {
	  // Note that it would not be too hard to replace
	  // the integer constant here by an expression
	  // which would make sense as that is what
	  // can be done with modify sql for dynamic sql
	  rwm->bdpos = rwm->ival; rwm->bdtyp=RWL_DEFINE;
	}
#line 8350 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 471:
#line 4581 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->sqsav->flags, RWL_SQLFLAG_IDUSE))
	      rwlerror(rwm, RWL_ERROR_IMPLICIT_ALREADY, "define");
	    bis(rwm->sqsav->flags, RWL_SQLFLAG_IDUSE);
	  }
#line 8360 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 474:
#line 4595 "rwlparser.y" /* yacc.c:1646  */
    { rwm->bdname = rwm->sval; rwm->bdtyp=RWL_BINDOUT_NAME; }
#line 8366 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 476:
#line 4597 "rwlparser.y" /* yacc.c:1646  */
    { 
	    // We could also use expression here, but we would
	    // of course need to check it was either a non-negative number
	    // or a string starting with :
	    rwm->bdpos = bit(rwm->m2flags,RWL_P2_BINDZERO) ? rwm->ival+1 : rwm->ival;
	    rwm->bdtyp=RWL_BINDOUT_POS; 
	  }
#line 8378 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 478:
#line 4605 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->bdtyp=RWL_BINDOUT_SAME;
	  }
#line 8386 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 480:
#line 4609 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_IMPLICIT_NOT_BINDOUT);
	  }
#line 8394 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 483:
#line 4620 "rwlparser.y" /* yacc.c:1646  */
    { rwm->bdname = rwm->sval; rwm->bdtyp=RWL_BIND_NAME; }
#line 8400 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 485:
#line 4622 "rwlparser.y" /* yacc.c:1646  */
    { 
	    // same comment as above
	    rwm->bdpos = bit(rwm->m2flags,RWL_P2_BINDZERO) ? rwm->ival+1 : rwm->ival;
	    rwm->bdtyp=RWL_BIND_POS; 
	  }
#line 8410 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 487:
#line 4628 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->bdtyp=RWL_BIND_SAME;
	  }
#line 8418 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 489:
#line 4632 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->sqsav->flags, RWL_SQLFLAG_IBUSE))
	      rwlerror(rwm, RWL_ERROR_IMPLICIT_ALREADY, "bind");
	    bis(rwm->sqsav->flags, RWL_SQLFLAG_IBUSE);
	  }
#line 8428 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 490:
#line 4641 "rwlparser.y" /* yacc.c:1646  */
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
#line 8526 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 491:
#line 4737 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->inam = RWL_DUMMY_VAR;
	    rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2, "function", "runseconds", "bind/define");
	  }
#line 8535 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 492:
#line 4742 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->inam = RWL_DUMMY_VAR;
	    rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2, "function", "epochseconds", "bind/define");
	  }
#line 8544 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 493:
#line 4746 "rwlparser.y" /* yacc.c:1646  */
    { bic(rwm->m2flags,RWL_P2_BINDRAW); }
#line 8550 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 494:
#line 4747 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m2flags,RWL_P2_BINDRAW); }
#line 8556 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 495:
#line 4751 "rwlparser.y" /* yacc.c:1646  */
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
#line 8577 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 496:
#line 4768 "rwlparser.y" /* yacc.c:1646  */
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
#line 8598 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 497:
#line 4785 "rwlparser.y" /* yacc.c:1646  */
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
#line 8619 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 498:
#line 4802 "rwlparser.y" /* yacc.c:1646  */
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
#line 8646 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 499:
#line 4824 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 8652 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 500:
#line 4825 "rwlparser.y" /* yacc.c:1646  */
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
#line 8687 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 501:
#line 4856 "rwlparser.y" /* yacc.c:1646  */
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
#line 8712 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 502:
#line 4876 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 8718 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 503:
#line 4877 "rwlparser.y" /* yacc.c:1646  */
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
#line 8744 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 504:
#line 4899 "rwlparser.y" /* yacc.c:1646  */
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
#line 8763 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 506:
#line 4914 "rwlparser.y" /* yacc.c:1646  */
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
#line 8782 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 508:
#line 4929 "rwlparser.y" /* yacc.c:1646  */
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
#line 8801 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 512:
#line 4949 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 8807 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 513:
#line 4951 "rwlparser.y" /* yacc.c:1646  */
    { rwm->msqlstk = rwlexprfinish(rwm); }
#line 8813 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 514:
#line 4953 "rwlparser.y" /* yacc.c:1646  */
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
#line 8868 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 515:
#line 5006 "rwlparser.y" /* yacc.c:1646  */
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
#line 8902 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 516:
#line 5036 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->mdbsphi = rwm->mdbsplo = rwlexprfinish(rwm);
	    if (!rwm->mdbsplo)
	      rwlexprclear(rwm);
	  }
#line 8912 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 517:
#line 5042 "rwlparser.y" /* yacc.c:1646  */
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
#line 8945 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 519:
#line 5074 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (!(rwm->mdbsphi = rwlexprfinish(rwm)))
	      rwlexprclear(rwm);
	  }
#line 8954 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 520:
#line 5081 "rwlparser.y" /* yacc.c:1646  */
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
#line 8978 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 522:
#line 5104 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m3flags, RWL_P3_SPFCONCAT); }
#line 8984 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 523:
#line 5105 "rwlparser.y" /* yacc.c:1646  */
    { bic(rwm->m3flags, RWL_P3_SPFCONCAT); }
#line 8990 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 524:
#line 5109 "rwlparser.y" /* yacc.c:1646  */
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
#line 9014 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 525:
#line 5129 "rwlparser.y" /* yacc.c:1646  */
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
#line 9032 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 526:
#line 5147 "rwlparser.y" /* yacc.c:1646  */
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
#line 9055 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 528:
#line 5169 "rwlparser.y" /* yacc.c:1646  */
    {
	  rwm->conhead = rwm->contail = 0;
	}
#line 9063 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 529:
#line 5173 "rwlparser.y" /* yacc.c:1646  */
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
#line 9088 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 532:
#line 5201 "rwlparser.y" /* yacc.c:1646  */
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
#line 9111 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 533:
#line 5222 "rwlparser.y" /* yacc.c:1646  */
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
#line 9136 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 534:
#line 5244 "rwlparser.y" /* yacc.c:1646  */
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
#line 9161 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 535:
#line 5268 "rwlparser.y" /* yacc.c:1646  */
    {  
	    bic(rwm->mflags,RWL_P_PRINTLINE);
	    bic(rwm->mflags,RWL_P_PRINTTOFILE);
	  }
#line 9170 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 536:
#line 5273 "rwlparser.y" /* yacc.c:1646  */
    {  
	    bis(rwm->mflags,RWL_P_PRINTLINE);
	    bic(rwm->mflags,RWL_P_PRINTTOFILE);
	  }
#line 9179 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 538:
#line 5281 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->mflags,RWL_P_PRINTBLANK); }
#line 9185 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 540:
#line 5286 "rwlparser.y" /* yacc.c:1646  */
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
#line 9247 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 541:
#line 5347 "rwlparser.y" /* yacc.c:1646  */
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
#line 9283 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 542:
#line 5382 "rwlparser.y" /* yacc.c:1646  */
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
#line 9298 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 543:
#line 5397 "rwlparser.y" /* yacc.c:1646  */
    {
		rwl_estack *estk;
		switch (rwm->assignoper)
		{
		  case RWL_T_ASNPLUS:
		    rwlexprpush(rwm, rwm->assignvar, RWL_STACK_ASNPLUS);
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
#line 9342 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 544:
#line 5437 "rwlparser.y" /* yacc.c:1646  */
    { 
		rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 9352 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 546:
#line 5447 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_MISSING_SEMICOLON);
	    yyerrok;
	  }
#line 9361 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 547:
#line 5454 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_ASSIGN; }
#line 9367 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 548:
#line 5455 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_GREATEQ; }
#line 9373 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 549:
#line 5456 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_RSHIFTASSIGN; }
#line 9379 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 550:
#line 5457 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_LESSEQ; }
#line 9385 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 551:
#line 5458 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_PIPEFROM; }
#line 9391 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 552:
#line 5459 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_PIPETO; }
#line 9397 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 554:
#line 5463 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_APPEND; }
#line 9403 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 555:
#line 5464 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_ASNPLUS; }
#line 9409 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 556:
#line 5471 "rwlparser.y" /* yacc.c:1646  */
    {
		rwl_estack *estk;
		rwlexprpush(rwm, rwm->assignvar, RWL_STACK_ASN);
		estk = rwlexprfinish(rwm);
		rwlcodeaddp(rwm, RWL_CODE_ASSIGN, estk);
	      }
#line 9420 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 557:
#line 5478 "rwlparser.y" /* yacc.c:1646  */
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
#line 9450 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 559:
#line 5504 "rwlparser.y" /* yacc.c:1646  */
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
#line 9467 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 561:
#line 5518 "rwlparser.y" /* yacc.c:1646  */
    { 
		rwlerror(rwm, RWL_ERROR_LOOP);
		rwlexprclear(rwm);
		// prevent attempting endloop code generation
		rwm->loopvar[rwm->rsldepth] = 0;
		rwm->rsllityp[rwm->rsldepth] = RWL_LI_BAD;
		bic(rwm->rslflags[rwm->rsldepth], RWL_RSLFLAG_MAYBRK);
		yyerrok;
	      }
#line 9481 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 564:
#line 5537 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwl_lilist *thisli = rwlalloc(rwm, sizeof(rwl_lilist));
	    rwlexprpush(rwm, rwm->loopvar[rwm->rsldepth], RWL_STACK_ASN);
	    thisli->listk = rwlexprfinish(rwm);
	    rwm->rsllitail[rwm->rsldepth]->linxt = thisli;
	    rwm->rsllitail[rwm->rsldepth] = thisli;
	  }
#line 9493 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 567:
#line 5557 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 9502 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 568:
#line 5562 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 9510 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 571:
#line 5571 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "execute") ; }
#line 9516 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 574:
#line 5578 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "loop") ; }
#line 9522 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 577:
#line 5585 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "if") ; yyerrok; }
#line 9528 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 580:
#line 5592 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (0 != rwlstrcmp(rwm->inam, rwm->sqname))
	      rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END2, "sql", rwm->sqname);
	  }
#line 9537 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 581:
#line 5597 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END2, "sql", rwm->sqname) ; yyerrok; }
#line 9543 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 583:
#line 5603 "rwlparser.y" /* yacc.c:1646  */
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
#line 9558 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 584:
#line 5614 "rwlparser.y" /* yacc.c:1646  */
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
#line 9573 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 585:
#line 5625 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (bit(rwm->rslflags[rwm->rsldepth-1], RWL_RSLFLAG_WHILOP))
	      rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "loop") ;
	    else
	      rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "while") ;
	    yyerrok;
	  }
#line 9585 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 586:
#line 5636 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->cursorand = 0;
	  }
#line 9593 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 587:
#line 5641 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->cursorand = rwlexprfinish(rwm);
	  }
#line 9601 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 589:
#line 5648 "rwlparser.y" /* yacc.c:1646  */
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
#line 9660 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 590:
#line 5705 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->loc.errlin = 0;
	    rwm->sqlfile = 0; /* not from a file */
	  }
#line 9669 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 591:
#line 5710 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprbeg(rwm);
	  }
#line 9677 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 592:
#line 5714 "rwlparser.y" /* yacc.c:1646  */
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
#line 9762 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 593:
#line 5797 "rwlparser.y" /* yacc.c:1646  */
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
#line 9786 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 594:
#line 5817 "rwlparser.y" /* yacc.c:1646  */
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
#line 9813 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 595:
#line 5841 "rwlparser.y" /* yacc.c:1646  */
    { 
		rwlerror(rwm, RWL_ERROR_BAD_READLINE);
		yyerrok;
	      }
#line 9822 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 596:
#line 5848 "rwlparser.y" /* yacc.c:1646  */
    { rwm->reg_estk = rwm->str_estk = rwm->sub_estk = 0; }
#line 9828 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 597:
#line 5850 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->reg_estk = rwlexprfinish(rwm);
	  }
#line 9836 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 598:
#line 5854 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->str_estk = rwlexprfinish(rwm);
	  }
#line 9844 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 599:
#line 5858 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->sub_estk = rwlexprfinish(rwm);
	  }
#line 9852 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 600:
#line 5862 "rwlparser.y" /* yacc.c:1646  */
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
#line 9895 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 601:
#line 5901 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprclear(rwm);
	    rwlerror(rwm, RWL_ERROR_BAD_REGEX);
	    yyerrok;
	  }
#line 9905 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 602:
#line 5910 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->m2flags, RWL_P2_REGEXSUBG);
	  }
#line 9913 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 603:
#line 5914 "rwlparser.y" /* yacc.c:1646  */
    {
	    bis(rwm->m2flags, RWL_P2_REGEXSUBG);
	  }
#line 9921 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 604:
#line 5920 "rwlparser.y" /* yacc.c:1646  */
    { rwm->reg_estk = rwm->str_estk = 0; }
#line 9927 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 605:
#line 5922 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->reg_estk = rwlexprfinish(rwm);
	  }
#line 9935 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 606:
#line 5926 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->str_estk = rwlexprfinish(rwm);
	    rwm->idlist = rwm->idtail = 0;
	  }
#line 9944 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 607:
#line 5931 "rwlparser.y" /* yacc.c:1646  */
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
#line 9981 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 608:
#line 5965 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprclear(rwm);
	    rwlerror(rwm, RWL_ERROR_BAD_REGEX);
	    yyerrok;
	  }
#line 9991 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 609:
#line 5974 "rwlparser.y" /* yacc.c:1646  */
    { rwm->reg_estk = rwm->str_estk = 0; }
#line 9997 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 610:
#line 5976 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->reg_estk = rwlexprfinish(rwm);
	  }
#line 10005 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 611:
#line 5980 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->str_estk = rwlexprfinish(rwm);
	    rwm->idlist = rwm->idtail = 0;
	  }
#line 10014 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 612:
#line 5985 "rwlparser.y" /* yacc.c:1646  */
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
#line 10051 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 613:
#line 6019 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprclear(rwm);
	    rwlerror(rwm, RWL_ERROR_BAD_REGEX);
	    yyerrok;
	  }
#line 10061 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 616:
#line 6032 "rwlparser.y" /* yacc.c:1646  */
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
#line 10106 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 617:
#line 6075 "rwlparser.y" /* yacc.c:1646  */
    {
		/* start a dummy assignment such that the system expression gets executed */
		rwm->assignvar = RWL_DUMMY_VAR;
		rwm->assignoper = RWL_T_ASSIGN;
		rwlexprbeg(rwm);
	      }
#line 10117 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 618:
#line 6084 "rwlparser.y" /* yacc.c:1646  */
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
#line 10137 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 619:
#line 6109 "rwlparser.y" /* yacc.c:1646  */
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
#line 10152 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 620:
#line 6121 "rwlparser.y" /* yacc.c:1646  */
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
#line 10175 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 621:
#line 6140 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ILLEGAL_THREAD); yyerrok; }
#line 10181 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 626:
#line 6154 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->cqnstart = rwm->cqnstop = 0.0;
	    rwm->cqnnow = rwlclock(rwm->mxq,0);
	  }
#line 10190 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 627:
#line 6159 "rwlparser.y" /* yacc.c:1646  */
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
#line 10218 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 628:
#line 6184 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->cqnstop = rwm->pval.dval;
	    if (rwm->cqnstop < rwm->cqnstart || rwm->cqnstop < rwm->cqnnow)
	    {
	      rwlerror(rwm, RWL_ERROR_CQN_STOP_BEFORE_START, rwm->cqnstop, rwm->cqnstart, rwm->cqnnow);
	      rwm->cqnat = 0;
	    }
	  }
#line 10231 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 629:
#line 6193 "rwlparser.y" /* yacc.c:1646  */
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
#line 10287 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 630:
#line 6245 "rwlparser.y" /* yacc.c:1646  */
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
#line 10316 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 631:
#line 6270 "rwlparser.y" /* yacc.c:1646  */
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
#line 10348 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 632:
#line 6298 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlcodeaddu(rwm, RWL_CODE_CQNISCB, 0); // Is in callback
	    rwlcodetail(rwm);
	  }
#line 10357 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 636:
#line 6309 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "querynotification");
	    yyerrok;
	  }
#line 10366 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 638:
#line 6318 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->cqnstart = rwm->pval.dval;
	  }
#line 10374 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 639:
#line 6325 "rwlparser.y" /* yacc.c:1646  */
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
#line 10394 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 640:
#line 6343 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlcodetail(rwm);
	  }
#line 10402 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 642:
#line 6348 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ILLEGAL_THREAD); yyerrok; }
#line 10408 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 644:
#line 6353 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->mythr->dbnam = rwm->inam;
	  }
#line 10416 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 647:
#line 6362 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "threads") ; }
#line 10422 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 650:
#line 6370 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "run") ; }
#line 10428 "rwlparser.tab.c" /* yacc.c:1646  */
    break;


#line 10432 "rwlparser.tab.c" /* yacc.c:1646  */
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
