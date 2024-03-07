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
#line 153 "rwlparser.y" /* yacc.c:339  */

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
#line 462 "rwlparser.y" /* yacc.c:355  */

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
#define YYLAST   5161

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  175
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  290
/* YYNRULES -- Number of rules.  */
#define YYNRULES  660
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1213

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
       0,   519,   519,   526,   530,   532,   531,   552,   553,   554,
     556,   559,   567,   569,   586,   585,   595,   594,   603,   602,
     612,   611,   621,   626,   635,   636,   640,   639,   646,   651,
     659,   660,   664,   663,   671,   670,   743,   748,   749,   761,
     762,   765,   766,   769,   779,   784,   792,   805,   836,   847,
     897,   896,   912,   922,   921,   938,   948,   958,   968,   981,
     982,   985,   993,  1003,  1014,  1029,  1030,  1042,  1044,  1043,
    1056,  1057,  1063,  1062,  1090,  1097,  1104,  1105,  1109,  1110,
    1113,  1126,  1125,  1177,  1189,  1188,  1209,  1214,  1221,  1226,
    1233,  1318,  1319,  1323,  1332,  1333,  1336,  1337,  1338,  1342,
    1343,  1347,  1375,  1377,  1379,  1381,  1396,  1401,  1406,  1414,
    1415,  1417,  1419,  1438,  1440,  1439,  1455,  1454,  1470,  1469,
    1485,  1528,  1542,  1556,  1570,  1582,  1586,  1587,  1588,  1589,
    1590,  1591,  1592,  1593,  1594,  1595,  1596,  1597,  1598,  1599,
    1600,  1602,  1604,  1606,  1608,  1609,  1612,  1615,  1616,  1620,
    1625,  1626,  1627,  1629,  1631,  1632,  1634,  1645,  1656,  1660,
    1666,  1670,  1676,  1680,  1686,  1691,  1695,  1703,  1701,  1728,
    1734,  1740,  1744,  1745,  1749,  1750,  1754,  1759,  1760,  1761,
    1766,  1767,  1768,  1769,  1773,  1774,  1775,  1776,  1780,  1781,
    1782,  1786,  1787,  1788,  1789,  1790,  1791,  1795,  1796,  1797,
    1801,  1803,  1802,  1820,  1822,  1821,  1837,  1839,  1848,  1838,
    1863,  1864,  1868,  1869,  1879,  1880,  1884,  1892,  1895,  1894,
    1901,  1904,  1903,  1907,  1909,  1911,  1913,  1916,  1922,  1951,
    1968,  1970,  1971,  1975,  1977,  1981,  1983,  1988,  1987,  1994,
    1993,  2005,  2010,  2009,  2017,  2021,  2045,  2071,  2069,  2097,
    2095,  2205,  2214,  2213,  2217,  2216,  2221,  2227,  2226,  2236,
    2235,  2244,  2257,  2262,  2256,  2290,  2298,  2303,  2297,  2332,
    2339,  2355,  2354,  2367,  2383,  2394,  2400,  2406,  2418,  2430,
    2440,  2450,  2449,  2462,  2468,  2466,  2584,  2591,  2607,  2609,
    2611,  2611,  2612,  2615,  2617,  2619,  2616,  2621,  2625,  2624,
    2739,  2772,  2780,  2805,  2779,  2856,  2857,  2858,  2859,  2861,
    2862,  2870,  2871,  2879,  2880,  2889,  2892,  2891,  2900,  2902,
    2910,  2918,  2927,  2935,  2937,  2944,  2945,  2956,  2992,  3029,
    3070,  3087,  3069,  3128,  3135,  3142,  3141,  3173,  3174,  3182,
    3181,  3229,  3231,  3230,  3240,  3391,  3390,  3538,  3544,  3547,
    3563,  3567,  3571,  3578,  3579,  3583,  3583,  3597,  3597,  3613,
    3613,  3629,  3629,  3643,  3643,  3674,  3675,  3676,  3679,  3685,
    3684,  3694,  3693,  3711,  3710,  3758,  3773,  3782,  3757,  3819,
    3827,  3828,  3828,  3841,  3840,  3847,  3848,  3849,  3855,  3856,
    3860,  3864,  3872,  3876,  3880,  3888,  3889,  3895,  3901,  3903,
    3906,  3907,  3912,  3911,  4013,  4015,  4014,  4069,  4073,  4077,
    4078,  4082,  4097,  4106,  4121,  4130,  4134,  4140,  4157,  4164,
    4174,  4175,  4176,  4180,  4181,  4197,  4207,  4213,  4221,  4227,
    4235,  4241,  4249,  4254,  4261,  4262,  4263,  4267,  4268,  4267,
    4278,  4282,  4283,  4282,  4292,  4299,  4300,  4303,  4303,  4384,
    4382,  4396,  4473,  4570,  4571,  4575,  4576,  4579,  4580,  4583,
    4584,  4587,  4591,  4595,  4599,  4618,  4624,  4626,  4629,  4630,
    4639,  4640,  4645,  4644,  4653,  4663,  4664,  4668,  4668,  4670,
    4669,  4678,  4677,  4681,  4688,  4689,  4693,  4693,  4695,  4694,
    4701,  4700,  4704,  4713,  4809,  4814,  4819,  4820,  4823,  4840,
    4857,  4874,  4897,  4897,  4928,  4949,  4949,  4972,  4971,  4987,
    4986,  5002,  5001,  5018,  5019,  5022,  5024,  5022,  5078,  5109,
    5108,  5145,  5146,  5154,  5153,  5177,  5178,  5182,  5181,  5220,
    5219,  5242,  5242,  5269,  5270,  5273,  5294,  5316,  5340,  5345,
    5353,  5354,  5354,  5358,  5419,  5454,  5469,  5509,  5518,  5519,
    5527,  5528,  5529,  5530,  5531,  5532,  5535,  5536,  5537,  5544,
    5551,  5542,  5577,  5577,  5590,  5603,  5604,  5608,  5621,  5622,
    5629,  5634,  5641,  5642,  5643,  5648,  5649,  5650,  5655,  5656,
    5657,  5662,  5663,  5664,  5669,  5674,  5675,  5686,  5697,  5708,
    5712,  5719,  5720,  5777,  5783,  5782,  5870,  5869,  5913,  5921,
    5923,  5927,  5931,  5920,  5973,  5982,  5986,  5993,  5995,  5999,
    5992,  6037,  6047,  6049,  6053,  6046,  6091,  6100,  6101,  6104,
    6147,  6156,  6182,  6181,  6212,  6218,  6219,  6222,  6223,  6227,
    6232,  6257,  6266,  6318,  6343,  6371,  6226,  6379,  6380,  6381,
    6389,  6390,  6398,  6416,  6397,  6420,  6424,  6425,  6432,  6433,
    6434,  6440,  6441,  6442,  6447,  6448,  6449,  6450,  6451,  6452,
    6453
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
     405,   406,   407,   408,   409,   410,   411,   412,   413,    61,
      60,    62,    45,    43,    42,    47,    37,    33,   414,    59,
      40,    41,    44,    63,    58
};
# endif

#define YYPACT_NINF -959

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-959)))

#define YYTABLE_NINF -644

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -959,   117,   173,  -959,  2861,   -67,   120,  -959,   -67,    -8,
    -959,  -959,  -959,   278,  1712,  1785,  -959,    53,  1858,   126,
     133,    81,  -959,   145,   147,    96,  -959,   -67,  1931,   196,
    4991,   -67,   -67,   -43,  1481,   -67,    44,   -67,  -959,   -67,
     488,   287,  -959,  -959,  -959,  -959,   179,   183,  2004,    89,
    -959,  -959,    72,  -959,   148,    61,  -959,  -959,  -959,  -959,
    -959,  -959,    52,   288,   288,   151,   153,  -959,  -959,   -67,
     274,   -67,  1404,  -959,   129,  -959,  -959,    39,   106,   122,
     155,  -959,    86,    83,   156,   -67,   -67,  1110,  2077,   157,
    -959,  -959,  2150,  -959,  -959,  4991,  -959,  -959,   -67,  -959,
    -959,   -67,  -959,   311,  -959,   -67,   276,   328,   323,   339,
     274,   -67,  4991,   -67,  4991,   404,   110,   632,    96,   280,
     305,   309,   324,   386,   401,    96,  -959,   429,  4991,   432,
     437,   439,   440,   455,   456,   458,   462,   464,   466,   474,
     476,  -959,   482,  -959,  -959,   483,   485,   487,   491,   493,
     498,   500,   501,   504,  4991,  4991,  4991,   412,  -959,  -959,
     168,   -30,   394,    -9,   590,    14,  -959,   266,   -67,   -67,
     -67,  -959,   603,   655,   -67,  -959,   -67,  -959,   510,   -67,
    -959,  2223,   618,   434,    -2,   218,  -959,  -959,   -67,  -959,
     -67,  -959,  4991,  -959,   -67,   446,   546,  -959,  -959,  -959,
    -959,  -959,  -959,   486,  -959,  -959,   160,  -959,   -67,   514,
     516,   522,   524,   -67,  4991,   -67,   550,  -959,   682,   633,
     568,  -959,   -67,   536,   -67,   570,  1262,   453,  -959,   -67,
    -959,  -959,  -959,  -959,  -959,  -959,  -959,  -959,   -67,  -959,
     -67,  -959,   562,  -959,   226,  -959,   -67,  -959,   692,   281,
    -959,    47,  -959,  2602,  2996,   -67,   240,  4991,  -959,   -67,
     577,   -67,   577,   -67,  -959,   351,  -959,   -67,   -67,   -67,
    -959,  -959,   -67,  -959,  -959,  -959,  -959,  -959,   -67,  4991,
    -959,  4991,  -959,   -67,  4780,  -959,   352,  -959,   -67,   577,
     -67,  4991,    23,  -959,  4991,  -959,   578,  -959,  -959,  -959,
     669,  -959,  -959,  4991,   670,   339,  -959,  -959,  -959,  -959,
    -959,   615,  2296,  -959,   142,  -959,  -959,  -959,  -959,  -959,
    -959,  -959,  -959,  -959,  -959,  -959,  4991,  4991,  4991,  4991,
    4991,  4991,  -959,  4991,  -959,  4991,  4991,  4991,    51,  4991,
    4991,  4991,  4991,   161,   165,    87,  4991,  -959,  4991,  4991,
    4991,  4991,  4991,  4991,  4991,  4991,  4991,  -959,  -959,   549,
     140,  4991,  4991,  4991,  4991,  4991,  4991,  4991,  4991,  4991,
    4991,  4991,  4991,  -959,  -959,  -959,  4991,  -959,  -959,  -959,
    -959,   551,   583,   585,  -959,  -959,  -959,  -959,   -67,    84,
    -959,  -959,  -959,  -959,  -959,  -959,  -959,  -959,  -959,  -959,
     -67,   -67,  4991,  -959,  -959,   705,   706,   711,   591,  -959,
    -959,  4991,   -67,  -959,  4991,   -67,  -959,  -959,  -959,  -959,
    -959,  -959,  -959,  -959,  -959,  -959,  -959,   683,   593,   -67,
    4991,  -959,  -959,  -959,  -959,  -959,  -959,  -959,  -959,  -959,
    2223,  -959,  4991,  -959,   -67,   -67,   -67,  -959,  3131,  -959,
    -959,   563,  -959,   563,  -959,  -959,  -959,  -959,  -959,  -959,
    -959,   229,  -959,   659,  -959,  -959,  -959,  -959,  -959,  -959,
    -959,  -959,  -959,  -959,  4991,  -959,  3266,   -67,   -67,  -959,
    -959,  -959,    73,   100,   108,   512,   480,  -959,  -959,   665,
      54,  -959,  -959,  -959,   566,   674,   577,  -959,   351,  -959,
     351,  -959,   419,   577,  -959,  -959,  -959,  -959,  -959,  4991,
    -959,   352,   352,  -959,  -959,  -959,  -959,  -959,   351,  -959,
    -959,   -67,   600,   -67,   443,  -959,  -959,  -959,   551,  2369,
     339,   674,  -959,  -959,   670,   569,   571,  -959,  -959,  -959,
    -959,  -959,  -959,   -67,   722,  -959,   661,    60,  -959,   241,
     572,   204,   249,   250,   227,   252,    42,   573,   575,   579,
     580,  -959,   586,    27,   170,   257,   587,   588,   592,   595,
     596,   597,   598,   599,   584,  4991,   239,   260,   263,   265,
     267,   271,   242,   602,   604,  -959,  -959,   696,  -959,  -959,
    -959,   168,   168,   -30,   -30,   298,   -30,   -30,   394,   394,
    4991,  4991,  4991,  -959,   622,   364,  -959,  -959,  -959,  -959,
     -67,  -959,  -959,   -67,  -959,  -959,   -67,    30,   533,   625,
     635,  -959,  -959,   640,   674,  -959,  4991,   674,  -959,   -67,
    4642,  -959,  -959,  -959,  -959,   609,   611,  -959,  -959,  -959,
    -959,   612,  -959,  -959,  -959,  -959,  -959,   259,   688,   390,
    4991,  4991,  4991,  4991,  -959,  -959,  -959,  -959,  -959,  -959,
    -959,  -959,  4991,  -959,   619,    68,  -959,  -959,  3401,   -67,
     -67,  -959,   -67,  -959,   -67,   786,   788,   -67,  2442,  -959,
    -959,   -67,   -67,   -67,  -959,  -959,   757,   351,  -959,  -959,
    -959,  -959,  -959,   612,  -959,  -959,  4991,  -959,   621,  -959,
    -959,  -959,  -959,  4853,  4991,  4991,   744,  -959,  4991,  -959,
    -959,  -959,  -959,  4991,  4991,  4991,   -67,   443,  -959,    64,
     -10,   768,  -959,   670,  -959,  -959,  4991,  4991,  -959,   615,
     716,   660,   -67,   -67,  -959,  -959,  -959,  4991,  4991,  -959,
    -959,  4991,  -959,   627,  -959,   662,  4991,  -959,  -959,  -959,
    -959,  -959,  4991,  -959,  4991,  -959,  -959,  -959,  -959,  -959,
    -959,  -959,  -959,  -959,  4991,   631,  4991,  -959,  -959,  -959,
    -959,  -959,  4991,  -959,  -959,  -959,  4991,    -9,   590,   629,
    -959,  -959,  -959,    24,    48,  -959,  -959,  -959,  4991,  4991,
     -67,  -959,  -959,  -959,   732,  -959,  -959,  -959,  -959,  -959,
     -67,  -959,  -959,  4642,  -959,   638,  -959,  -959,   636,  -959,
    -959,  -959,  -959,  -959,  -959,  -959,    70,  4991,  4991,   637,
    -959,  -959,  -959,  -959,  -959,  -959,   261,  -959,   675,   333,
    -959,  -959,  -959,  -959,   674,   674,   674,   674,  3536,  4991,
     -67,  -959,  -959,   -67,   -67,  -959,  -959,    47,  -959,  -959,
    -959,  -959,  4991,  -959,   -67,   -67,  -959,   747,   444,  2737,
    -959,  -959,  -959,  -959,  -959,  4991,  -959,  4991,   -67,   676,
    -959,  -959,  -959,  -959,  -959,   421,  -959,  -959,  -959,  -959,
    -959,   770,  -959,  -959,  -959,  -959,   647,  3671,  -959,  3806,
    -959,  -959,   -67,   684,  -959,  -959,  -959,  -959,   272,   273,
     284,  -959,   651,   247,   296,   299,   343,  -959,   300,   303,
     -30,  -959,   -67,   685,  -959,   -67,   687,  -959,   674,   674,
    -959,  -959,  -959,  4991,  -959,  4991,  -959,  -959,    24,    48,
    -959,  4991,  -959,   517,  -959,   -67,   109,  -959,  -959,  -959,
    -959,  4991,  -959,   333,  -959,  -959,    78,   674,  -959,  -959,
     184,   552,  -959,  -959,  -959,  3941,  -959,  -959,  -959,  -959,
    -959,   577,  -959,  -959,  -959,  -959,   421,   802,  -959,  -959,
    -959,   802,  -959,  4991,  4991,     5,  -959,    78,    78,   551,
     551,  -959,  -959,  4076,   752,  -959,  -959,  -959,  -959,  -959,
    4991,  -959,  -959,  -959,  4991,  -959,  -959,  4991,  -959,  -959,
     373,  -959,  -959,  -959,   407,  -959,   804,   668,  -959,  4991,
     668,  -959,   674,   668,  -959,  -959,   674,    41,    62,  -959,
    1639,    46,   -67,   -67,   -67,  -959,  -959,  -959,   -67,   -67,
     -67,   663,  -959,   -67,   -67,  -959,  -959,  -959,  -959,  -959,
    -959,    60,  4211,   351,   671,  4991,   733,   733,  -959,  -959,
    -959,  -959,  -959,  -959,  -959,   364,   364,   823,  4991,   766,
     313,   315,  -959,  4991,   -67,   685,  4991,   -67,   687,  4991,
    -959,  -959,   674,   -67,  -959,  -959,  -959,  -959,   388,  -959,
     -67,  -959,  -959,   389,  -959,   -67,  -959,  4991,   -67,  -959,
    -959,  -959,  -959,   396,  -959,  -959,  -959,  -959,  -959,  -959,
    -959,  -959,  -959,  -959,  -959,   274,  -959,    82,  -959,  4991,
    -959,  4991,   772,  -959,  4346,   796,  -959,  -959,    82,  -959,
    4991,  -959,  -959,  -959,  -959,  -959,  -959,  -959,  -959,   674,
    -959,   709,  -959,    88,    88,    88,   475,  -959,  -959,    88,
     -27,  -959,  -959,   -67,  -959,    88,    88,    88,   505,  -959,
    -959,   -67,   -67,  -959,  -959,  -959,  -959,  4991,  -959,    78,
    -959,  -959,  -959,  -959,  -959,  -959,   745,  -959,  -959,  -959,
    -959,  -959,  -959,  -959,  -959,  -959,  -959,  -959,  -959,  -959,
    -959,   679,  -959,  -959,   763,  -959,   715,   789,  -959,   -67,
     -15,  -959,  -959,  -959,  -959,   686,  4470,  -959,   791,  4991,
    -959,   689,  -959,  -959,  4605,   840,   102,   -67,   -67,  -959,
    -959,  -959,  -959
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       4,     0,     5,     1,     0,     0,     0,   538,   539,     0,
      89,   427,   429,     0,     0,     0,   431,     0,     0,     0,
       0,     0,   571,     0,     0,    94,   347,   257,     0,   392,
       0,     0,     0,     0,     0,     0,     0,     0,    87,     0,
       0,     0,   620,   434,   435,   436,     0,     0,     0,     0,
     605,   606,     0,   373,     0,     0,   523,     3,   228,     6,
       8,    12,     0,    78,    78,     0,     0,     7,   330,     0,
     290,     0,     0,   298,     0,   214,   214,     0,     0,     0,
       0,   433,     0,     0,     0,     0,     0,     0,     0,     0,
     305,   307,     0,   308,   306,     0,     9,   334,     0,    34,
     322,     0,    93,     0,    91,     0,     0,   368,     0,   589,
     388,     0,     0,     0,     0,     0,     0,     0,    94,     0,
       0,     0,     0,     0,     0,    94,   125,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   124,   121,   123,   122,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   177,   180,   184,
     188,   191,   197,   200,   203,   206,   210,     0,     0,     0,
       0,   596,     0,     0,     0,   536,     0,   537,     0,     0,
     325,     0,     0,     0,     0,     0,   277,   278,     0,   327,
       0,   261,     0,   229,     0,     0,     0,   279,   287,    88,
     426,   428,   430,     0,   570,    86,     0,   432,     0,     0,
     341,     0,   337,     0,     0,     0,     0,   526,     0,     0,
       0,   451,     0,     0,     0,   369,     0,     0,   531,     0,
     116,   114,   118,   113,    13,    79,   214,   214,     0,    81,
       0,    84,   365,   344,     0,   344,     0,   344,     0,   381,
     214,     0,   247,     0,     0,     0,     0,     0,   237,     0,
       0,     0,     0,     0,   402,     0,   400,     0,     0,     0,
     581,   230,     0,   545,   313,   527,   311,   309,     0,     0,
     544,     0,   315,     0,   212,   543,     0,   540,     0,     0,
       0,     0,     0,    36,    37,    10,     0,    11,   251,   302,
       0,   383,   295,     0,     0,   589,   389,   616,   613,   611,
     608,   654,     0,   629,     0,   625,   628,   627,   416,   422,
     420,   421,   415,   418,   419,   170,     0,     0,     0,     0,
       0,     0,   169,     0,   183,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   167,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   181,   182,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   201,   204,   207,     0,   417,   301,   300,
     598,     0,     0,     0,   320,   321,    95,   280,     0,     0,
     258,   412,   411,   393,   394,   270,   326,   265,   263,   283,
       0,     0,     0,   271,   281,     0,     0,     0,     0,   276,
     339,     0,     0,   335,     0,     0,   269,   267,   312,   525,
     444,   384,   442,   374,   310,   529,   333,     0,     0,     0,
     172,   550,   553,   551,   557,   558,   554,   555,   552,   556,
       0,   524,     0,   120,     0,     0,     0,    77,     0,    76,
      80,    96,    83,    96,   361,   357,   355,   359,   366,   367,
     331,   365,   353,     0,   288,   390,   391,   291,   344,   292,
     379,   594,   593,   451,     0,   380,     0,     0,     0,   578,
     246,   214,     0,     0,     0,     0,     0,   215,   216,   407,
       0,   241,   424,   425,     0,    74,     0,   234,     0,   236,
       0,   232,   404,     0,   231,   584,   582,   583,   314,     0,
     319,     0,     0,   324,   213,   541,   323,   244,     0,   604,
     600,     0,     0,     0,    39,    38,    75,    92,     0,     0,
     589,   590,   345,   293,     0,     0,     0,   656,   660,   657,
     659,   655,   658,     0,     0,   642,     0,     0,   626,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   164,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   172,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   171,   178,     0,   185,   186,
     187,   190,   189,   194,   195,     0,   192,   193,   199,   198,
       0,     0,     0,   211,     0,     0,   617,    20,    16,   547,
       0,   548,   546,     0,   274,   275,     0,     0,     0,     0,
       0,   440,   438,     0,   342,   328,     0,   338,   329,     0,
     447,   531,   370,   372,   286,     0,   173,   174,   176,   260,
     535,   532,   533,   117,   115,   119,    90,     0,     0,   109,
       0,     0,     0,     0,   214,   352,   351,   350,   349,   354,
     363,   289,     0,   376,     0,     0,   580,   579,     0,     0,
       0,   221,     0,   218,     0,     0,     0,     0,     0,   410,
     214,     0,     0,     0,   585,   245,   423,     0,   233,   235,
     403,   405,   401,   528,   318,   317,     0,   243,     0,   256,
     254,   621,   253,     0,     0,     0,     0,    55,     0,    58,
      59,    49,    48,     0,     0,     0,     0,    40,    41,   589,
       0,   562,   214,     0,   214,   297,     0,     0,   624,   654,
     646,     0,     0,     0,   651,   623,   135,     0,     0,   150,
     151,     0,   154,     0,   147,     0,     0,   139,   166,   165,
     144,   128,     0,   130,     0,   134,   163,   162,   161,   160,
     159,   157,   156,   158,     0,     0,     0,   131,   132,   133,
     136,   137,     0,   145,   146,   179,     0,   202,   205,     0,
     619,   597,   618,     0,     0,   549,   264,   273,     0,     0,
       0,   509,   507,   505,   502,   511,   499,   500,   498,   504,
       0,    18,    14,   447,   340,     0,   336,   268,     0,   443,
     446,   453,   445,   451,   591,   530,     0,     0,     0,   104,
     102,   103,   106,   108,   107,    97,     0,    99,     0,     0,
     111,   112,   110,    85,   362,   358,   356,   360,     0,     0,
     466,   453,   382,     0,     0,   572,   299,     0,   224,   223,
     214,   220,     0,   217,     0,     0,   225,     0,     0,     0,
     588,   586,   587,   239,   238,     0,   542,     0,     0,     0,
      46,    43,    44,    59,    53,    56,    52,    50,    45,    35,
      42,     0,   569,   568,   564,   559,     0,     0,   296,     0,
     614,   609,     0,     0,   214,   630,   653,   652,     0,     0,
       0,   149,     0,     0,     0,     0,     0,   168,     0,     0,
     196,   208,     0,     0,    21,     0,     0,    17,   519,   518,
     272,   515,   515,     0,   501,     0,   515,   282,     0,     0,
     439,     0,   592,     0,   449,     0,     0,   395,   285,   175,
     534,     0,    98,     0,   101,    82,     0,   364,   467,   595,
     385,     0,   574,   573,   248,     0,   214,   226,   227,   414,
     413,     0,   406,   601,   255,    47,    57,    63,    62,    61,
      60,    63,   303,     0,     0,     0,   565,     0,     0,     0,
       0,   645,   647,     0,   640,   155,   126,   152,   148,   142,
       0,   127,   129,   140,     0,   153,   138,     0,    29,    32,
       0,    30,    23,    26,     0,    24,   521,   510,   513,     0,
     508,   506,   503,   512,    19,    15,   343,     0,     0,   448,
       0,     0,   466,   466,   466,   454,   453,   399,     0,     0,
       0,     0,   100,     0,     0,   575,   332,   386,   387,   377,
     452,     0,     0,     0,     0,     0,    65,    65,   214,   560,
     567,   563,   566,   250,   346,     0,     0,     0,     0,     0,
       0,     0,   209,     0,     0,     0,     0,     0,     0,     0,
     520,   515,   516,     0,   492,   486,   488,   490,   466,   484,
       0,   474,   472,   466,   470,     0,   469,     0,     0,   483,
     477,   479,   481,   466,   475,   461,   462,   463,   450,   398,
     396,   397,   105,   577,   576,   388,   222,     0,   240,     0,
      64,     0,    67,    51,     0,     0,   615,   610,     0,   641,
       0,   143,   141,    33,    28,    31,    27,    22,    25,   522,
     514,     0,   456,     0,     0,     0,     0,   455,   460,     0,
       0,   459,   465,   466,   458,     0,     0,     0,     0,   457,
     378,     0,     0,   648,   219,   602,    66,     0,    54,     0,
     561,   644,   631,   517,   495,   494,   496,   487,   493,   489,
     491,   485,   473,   471,   464,   478,   480,   482,   476,   650,
     649,     0,    68,   304,     0,   497,     0,    70,   632,     0,
       0,    69,   214,   603,    71,     0,     0,    72,     0,   172,
     634,     0,   214,    73,     0,     0,     0,     0,     0,   637,
     636,   639,   638
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -959,  -959,    -5,  -959,  -959,  -959,  -959,  -959,  -959,  -959,
    -959,   -70,  -959,  -207,  -959,   -66,  -959,  -201,  -959,  -959,
    -959,  -959,  -959,  -959,   149,  -959,  -959,    -6,  -959,  -106,
    -179,  -959,  -959,  -959,  -959,  -311,  -278,  -959,   805,  -959,
    -959,  -959,  -959,  -959,  -959,   634,  -959,   574,   194,   420,
    -959,   -71,    45,  -959,  -959,  -959,  -959,  -959,  -959,  -959,
    -570,  -959,    58,  -959,   188,   -95,  -331,   -32,   277,   275,
    -959,  -959,  -959,  -370,  -959,  -959,    40,   481,   -68,  -959,
    -959,  -959,   874,  -959,  -959,  -959,  -959,  -959,  -959,  -959,
    -959,  -959,  -959,  -959,  -959,  -959,  -959,  -959,  -959,  -959,
    -959,  -959,  -959,  -959,  -959,  -959,  -959,  -959,  -959,  -959,
    -959,  -959,  -959,  -959,  -959,  -224,  -516,  -959,  -959,  -959,
    -959,  -959,   423,  -959,  -959,  -959,  -959,  -959,  -959,   867,
    -959,  -959,   868,  -959,   774,  -959,  -959,  -959,  -959,  -959,
    -959,  -959,  -959,  -220,   816,  -959,  -959,  -258,   387,  -959,
    -959,  -959,  -959,  -959,  -959,  -959,  -959,   724,  -959,  -959,
     -69,  -959,  -959,  -959,  -959,   -28,  -959,  -959,  -959,  -959,
    -959,    90,  -959,  -959,  -959,  -959,  -460,  -137,    85,  -959,
    -677,  -959,  -959,  -246,  -959,  -959,  -253,  -959,  -959,  -959,
    -959,  -239,  -959,  -959,  -959,  -433,  -959,  -959,  -959,  -959,
    -959,  -959,  -959,  -808,  -173,  -959,  -959,  -959,  -959,  -959,
    -959,  -959,  -959,  -959,  -959,  -959,  -959,   268,  -959,   391,
      91,  -959,  -959,   337,  -959,   205,  -269,   503,   463,  -959,
     400,  -959,  -959,  -959,  -959,  -959,  -959,   -63,  -959,  -959,
    -959,  -958,    57,  -959,  -959,  -290,  -959,   656,  -959,  -959,
    -959,  -959,  -959,  -959,  -959,  -959,  -959,  -959,  -959,  -959,
    -959,  -959,  -959,  -959,  -959,  -517,  -591,  -959,    38,  -959,
    -959,  -959,   594,  -959,  -959,  -959,  -959,  -959,  -959,  -959,
    -959,  -959,  -959,  -959,  -959,  -959,  -959,  -205,  -127,   186
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    58,     2,     4,    59,    60,   929,   784,   928,
     783,   917,  1004,  1005,  1066,   914,  1000,  1001,  1063,    61,
     294,   524,   716,   717,   718,   971,   967,   875,   970,  1046,
    1112,  1158,  1187,  1191,  1199,   494,   808,    62,   236,    63,
     451,    64,   453,    65,    66,   447,   103,   104,   179,   648,
     826,   827,   828,   833,   234,   445,   444,   446,   157,   575,
     635,   636,   637,   158,   159,   160,   161,   162,   163,   164,
     600,   165,   601,   166,   602,   997,   284,   526,   448,   487,
     852,   850,   488,   496,   961,   289,   481,   300,   523,   868,
     181,   227,   192,   613,   214,   629,   617,   618,   430,   245,
     108,   530,   250,   528,  1048,   281,   242,   654,   212,   626,
     415,   210,   623,   412,   805,   464,   533,   724,    68,   460,
     658,   461,   462,   652,   651,   653,   650,   839,   463,    69,
     427,   428,    70,   221,    71,   249,   841,  1105,   473,   474,
      72,   219,  1039,   305,   306,    73,   938,   265,   266,   502,
     690,   865,    74,   679,   489,    75,   680,   323,    76,   324,
     258,    77,    78,    79,    80,    81,    82,   408,   803,   220,
     630,   809,   810,   811,   812,  1026,   423,   950,   951,  1025,
     949,  1087,  1083,  1084,  1139,  1093,  1094,  1145,  1146,  1147,
    1078,  1079,  1133,  1134,  1135,  1167,  1168,   800,   925,   923,
     922,   921,   926,  1007,  1008,  1009,  1131,   790,  1006,  1070,
      83,   228,    84,    85,   509,    86,   631,   441,   442,   641,
     642,    87,    88,   286,   696,   287,   282,   274,   390,   612,
     439,   440,   722,   973,  1115,   886,   975,   976,   884,    89,
     846,  1036,   480,   271,   685,   304,   813,   814,   662,    90,
     381,    91,   291,   698,  1044,  1181,    92,    93,   114,   536,
     980,    94,   112,   535,   979,   605,   606,    95,   702,    96,
     116,   314,   315,   316,   546,   984,  1184,  1192,  1198,  1202,
    1205,  1210,  1059,   317,   730,  1057,   894,  1154,   735,   543
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      97,   545,   498,   100,   500,   765,   603,   253,   254,   260,
     262,   719,   207,   663,   782,   534,   525,   516,   725,  1053,
    1054,   467,   180,   469,   521,   912,   186,   187,   189,   191,
     193,   518,   197,   334,   198,   593,   594,   595,   596,   597,
     255,   882,  1073,   743,   101,   194,   393,  1088,   477,   915,
     195,   371,   559,   229,   115,   681,  1051,   233,   167,   357,
     358,   732,   224,  1080,   243,   230,   247,  1194,   183,   843,
     185,   935,   256,   218,   669,   788,   374,   270,   273,  1033,
     273,   273,   280,  1151,   272,   610,  -622,   267,   570,   682,
     215,   376,   733,   293,   172,  1164,   295,   173,   297,  1081,
     298,   671,    57,  1207,   188,   683,   307,   259,   309,   673,
    1028,  -259,   478,  1082,  1010,  1152,   789,     3,  1013,  -259,
    -259,    98,  1165,   261,  1195,   303,    57,   168,   782,  1034,
    -259,   102,   364,   365,   170,   571,   572,   394,  -259,   256,
     844,   670,   225,   312,  -383,   231,   174,   251,   176,   222,
     372,   936,   238,   216,   240,   256,   263,  1029,   288,    57,
     547,   407,   566,   378,   379,   380,   568,  1074,   672,   384,
     196,   385,  1089,    -2,   387,   312,   674,   974,  -423,  1075,
     395,  1076,   476,   396,  1090,   397,  1091,   375,  1081,   399,
     560,   232,  -252,   586,   913,   522,   252,   587,   751,   752,
    -622,  1183,  1082,   409,  -259,  -259,  -259,   888,   416,   257,
     418,  -441,   268,   744,   745,  1077,    57,   424,   916,   426,
    1092,    57,   561,    57,   443,   269,   573,  1166,   217,    57,
    -368,   226,   779,   450,   376,   452,   604,    57,   687,    57,
     723,   468,   694,   695,   661,  -423,   479,    57,  1030,  1208,
     491,    57,    57,    57,   497,    57,   499,   313,   501,    99,
     504,  -423,   505,   506,   507,   169,   178,   508,   376,   591,
     592,    57,   171,   510,   465,   819,   820,   184,   513,   105,
     655,   280,   376,   517,   175,   519,   177,   223,   821,   313,
     239,   376,   241,   208,   264,   492,  -242,   495,   822,  -437,
     567,   656,   454,   376,   569,   376,   376,   455,   456,   457,
    1037,   376,   325,   376,   376,   106,   376,   318,   209,   332,
     471,   376,   211,  1038,   376,   458,   459,   376,   275,   376,
     376,   376,   361,   362,   363,   376,   376,   376,   322,   598,
     599,   753,   754,   531,   235,  1095,  1096,  1097,   376,   819,
     820,  -348,   495,   934,  -348,   244,  -348,  -348,  -348,   776,
     376,   823,   821,   376,   376,   466,   549,   376,   551,   552,
     553,   554,   822,   555,  -348,  -348,   738,   376,  -249,   376,
     563,   564,   565,   609,   611,   824,   493,    57,   576,   577,
     578,   579,   580,   581,   582,   614,   615,   874,    57,   741,
     303,  1137,   876,   877,  -294,    53,  1141,   625,   472,   225,
     628,   766,   736,   668,   772,   299,  1149,   107,   989,   990,
     739,   740,   311,   742,   634,   870,   871,   872,   755,   881,
     825,   767,   942,   943,   768,   823,   769,   878,   770,   643,
     644,   645,   771,   985,   986,   910,   703,   704,   705,   301,
     326,   624,   366,   367,   627,   987,   657,   368,   207,   824,
     364,   365,  1055,  1056,   782,   782,  1174,   991,   360,   431,
     992,   995,   666,   667,   996,   327,   706,   432,   433,   328,
      57,   830,   831,   296,  1121,   684,  1122,   707,   708,   709,
     710,   711,   712,   688,   329,   689,   200,   201,   376,   405,
     392,   199,   406,   431,   200,   201,   280,   280,   376,   202,
     960,   432,   433,   697,   993,   994,   699,   202,   701,   204,
      57,    57,   434,   503,   515,   675,   203,   204,   676,   713,
     435,  1017,  1018,    57,   400,  1019,   604,  1020,   728,   832,
     968,   956,   734,   969,  1064,  1065,   401,   791,   792,   588,
     589,   590,   793,   794,   369,   370,   330,    57,    57,  1021,
    1136,  1140,   436,   437,   438,    57,  1017,  1018,  1148,   285,
    1040,   331,  1020,   714,   715,   795,   292,   402,  1067,  1068,
     677,   205,    43,    44,    45,   403,   838,  1022,   276,   277,
      43,    44,    45,   308,  1021,   310,   436,   437,   438,   333,
     781,  1074,   335,  1023,  1024,   785,   206,   336,   786,   337,
     338,   787,   859,  1075,   206,  1076,   511,   863,   512,   796,
     797,   798,  1022,   382,   807,   339,   340,  1062,   341,  1201,
    1031,  1089,   342,   799,   343,   454,   344,   359,  1023,  1024,
     455,   456,   457,  1090,   345,  1091,   346,   537,   538,  1077,
     539,   373,   347,   348,   887,   349,   889,   350,   458,   459,
     845,   351,   389,   352,   848,   849,   540,   851,   353,   853,
     354,   355,   856,   398,   356,   383,   860,   861,   862,  1092,
     541,   386,   864,   318,   391,   404,   410,   542,   411,   419,
     834,   835,   836,   837,   413,   417,   414,   319,   320,   321,
     420,  1169,  1170,  1043,   322,   421,  1172,   422,   425,  -371,
     470,   879,  1175,  1176,  1177,   883,   264,   102,   858,   529,
     585,   532,   607,   604,   608,   619,   620,   896,   897,   621,
     622,   632,   633,   647,  1110,   660,   678,   686,   376,   700,
     729,   726,   731,   727,   737,   746,   747,  1119,   495,   775,
     748,   749,  1123,   495,   495,  1126,   764,   750,   756,   757,
     285,   780,   285,   758,   801,   514,   759,   760,   761,   762,
     763,   829,   520,   773,   802,   774,  1143,   898,   899,   804,
     816,   900,   955,   817,   818,   920,   903,   854,   842,   855,
     256,   873,   904,   867,   905,   927,   885,   893,   901,   895,
    1156,   902,   907,   911,   924,   932,   908,   941,   550,  1162,
     931,   937,   909,   959,   944,   965,   556,   557,   558,   974,
     562,   972,   988,   982,   999,  1003,   983,   574,   918,   919,
    1045,  1058,  1069,  1111,  1102,   948,   583,   584,   952,   953,
    1071,  1118,   479,  1109,  1120,  1157,  1182,  1160,  1163,   957,
     958,  1186,  1185,  1188,  1189,  1190,  1197,  1200,  1206,  1015,
    1203,  1128,  1014,   701,  1125,  1047,   880,   966,  1113,   237,
     527,   449,  1032,   649,   945,   939,   778,   777,    67,   947,
     109,   110,   302,   616,   659,  1150,   246,   981,  1042,  1098,
     692,   377,   495,   930,  1173,  1178,   933,  1171,  1130,   815,
     693,   866,   691,   639,   954,   475,   964,   998,   548,   940,
    1002,   638,  1052,  1161,  1106,   892,     0,     0,     0,     0,
       0,   389,     0,   640,     0,     0,     0,     0,     0,     0,
    1027,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1035,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   664,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1012,     0,     0,     0,     0,
       0,  1016,  1035,  1035,     0,     0,     0,     0,     0,     0,
    1114,   495,     0,     0,     0,     0,     0,     0,     0,     0,
     640,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     721,     0,     0,     0,     0,     0,     0,   948,   948,   948,
       0,     0,     0,  1099,  1100,  1101,     0,     0,  1103,  1104,
    1060,     0,     0,     0,  1061,     0,   734,     0,  1108,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1072,
    1116,  1117,     0,     0,     0,     0,   638,     0,     0,  1124,
       0,     0,  1127,     0,     0,     0,     0,     0,  1132,     0,
       0,     0,     0,   948,     0,  1138,     0,     0,   948,     0,
    1142,     0,     0,  1144,     0,   495,     0,     0,   948,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   495,     0,
       0,     0,  1153,   495,     0,     0,   495,   806,     0,  1129,
       0,   278,     0,  1153,     0,     0,     0,  -316,     0,     0,
       0,     0,     0,     0,  1196,     0,     0,   495,     0,     0,
       0,     0,  -316,  -316,  1204,     0,  -316,  -316,   948,     0,
    -316,  -316,     0,   840,  -316,     0,  1179,  1180,     0,     0,
       0,   495,     0,     0,  1035,     0,     0,     0,     0,     0,
     495,     0,     0,  -316,  -316,     0,     0,  -316,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   285,     0,     0,
       0,     0,     0,     0,  1193,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   495,     0,     0,
       0,  1209,  1211,  1212,     0,     0,     0,   890,   891,     0,
       0,  -316,     0,     0,     0,     0,     0,     0,     0,     0,
    -316,     0,  -316,  -316,  -316,  -316,  -316,  -316,  -316,     0,
       0,  -316,     0,     0,     0,  -316,     0,     0,     0,  -316,
       0,     0,     0,     0,     0,   906,     0,     0,  -316,  -316,
    -316,  -316,     0,     0,     0,     0,     0,     0,  -316,     0,
    -316,  -316,  -316,   429,  -316,  -316,  -316,  -316,  -316,  -284,
       0,     0,  -316,     0,     0,     0,     0,  -316,     0,    57,
    -316,     0,   279,     0,  -284,  -284,     0,     0,  -284,  -284,
       0,     0,  -284,  -284,     0,     0,  -284,     0,   638,   640,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -284,  -284,     0,     0,  -284,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   962,     0,   963,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -284,     0,     0,     0,     0,     0,     0,
       0,     0,  -284,     0,  -284,  -284,  -284,  -284,  -284,  -284,
    -284,     0,     0,  -284,     0,     0,     0,  -284,     0,     0,
       0,  -284,     0,     0,     0,     0,     0,     0,     0,     0,
    -284,  -284,  -284,  -284,  1011,   248,     0,     0,     0,     0,
    -284,  -375,  -284,  -284,  -284,     0,  -284,  -284,  -284,  -284,
    -284,     0,     0,     0,  -284,     0,  -375,  -375,     0,  -284,
    -375,  -375,  -284,  -284,  -375,  -375,     0,     0,  -375,     0,
       0,     0,     0,  -375,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1049,  1050,     0,  -375,  -375,     0,
       0,  -375,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   190,     0,     0,     0,     0,     0,  -262,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -262,  -262,  -375,     0,  -262,  -262,     0,
       0,  -262,  -262,     0,  -375,  -262,  -375,  -375,  -375,  -375,
    -375,  -375,  -375,     0,     0,  -375,     0,     0,     0,  -375,
       0,  -375,     0,  -375,  -262,  -262,     0,     0,  -262,     0,
       0,     0,  -375,  -375,  -375,  -375,     0,     0,     0,     0,
       0,     0,  -375,     0,  -375,  -375,  -375,     0,  -375,  -375,
    -375,  -375,  -375,     0,     0,     0,  -375,     0,     0,     0,
       0,  -375,     0,     0,  -375,     0,     0,     0,     0,     0,
       0,     0,  -262,     0,     0,     0,     0,     0,     0,     0,
    1155,  -262,     0,  -262,  -262,  -262,  -262,  -262,  -262,  -262,
       0,     0,  -262,     0,     0,     0,  -262,     0,     0,     0,
    -262,     0,     0,     0,     0,     0,     0,     0,     0,  -262,
    -262,  -262,  -262,     0,     0,     0,     0,     0,     0,  -262,
       0,  -262,  -262,  -262,     0,  -262,  -262,  -262,  -262,  -262,
    1085,     0,     0,  -262,     0,     0,  -468,     0,  -262,     0,
      57,  -262,     0,     0,  1086,     0,     0,     0,     0,     0,
       0,  -468,  -468,     0,     0,  -468,  -468,     0,     0,  -468,
    -468,     0,     0,  -468,     0,     0,     0,     0,     0,     0,
     638,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -468,  -468,     0,     0,  -468,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   111,     0,     0,     0,     0,     0,  -612,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -612,  -612,     0,     0,  -612,  -612,
    -468,     0,  -612,  -612,     0,     0,  -612,     0,     0,  -468,
       0,  -468,  -468,  -468,  -468,  -468,  -468,  -468,     0,     0,
    -468,     0,     0,     0,  -468,  -612,  -612,     0,  -468,  -612,
       0,     0,     0,     0,     0,     0,     0,  -468,  -468,  -468,
    -468,     0,     0,     0,     0,     0,   113,  -468,     0,  -468,
    -468,  -468,  -607,  -468,  -468,  -468,  -468,  -468,     0,     0,
       0,  -468,     0,     0,     0,     0,  -468,  -607,  -607,  -468,
       0,  -607,  -607,  -612,     0,  -607,  -607,     0,     0,  -607,
       0,     0,  -612,     0,  -612,  -612,  -612,  -612,  -612,  -612,
    -612,     0,     0,  -612,     0,     0,     0,  -612,  -607,  -607,
       0,  -612,  -607,     0,     0,     0,     0,     0,     0,     0,
    -612,  -612,  -612,  -612,     0,     0,     0,     0,     0,   117,
    -612,     0,  -612,  -612,  -612,   118,  -612,  -612,  -612,  -612,
    -612,     0,     0,     0,  -612,     0,     0,     0,     0,  -612,
     119,   120,  -612,     0,   121,   122,  -607,     0,   123,   124,
       0,     0,   125,     0,     0,  -607,     0,  -607,  -607,  -607,
    -607,  -607,  -607,  -607,     0,     0,  -607,     0,     0,     0,
    -607,   126,   127,     0,  -607,   128,     0,     0,     0,     0,
       0,     0,     0,  -607,  -607,  -607,  -607,     0,     0,     0,
       0,     0,   182,  -607,     0,  -607,  -607,  -607,   118,  -607,
    -607,  -607,  -607,  -607,     0,     0,     0,  -607,     0,     0,
       0,     0,  -607,   119,   120,  -607,     0,   121,   122,   129,
       0,   123,   124,     0,     0,   125,     0,     0,   130,     0,
     131,   132,   133,   134,   135,   136,   137,     0,     0,   138,
       0,     0,     0,   139,   126,   127,     0,   140,   128,     0,
       0,     0,     0,     0,     0,     0,   141,   142,   143,   144,
       0,     0,     0,     0,     0,   213,   145,     0,   146,   147,
     148,  -266,   149,   150,   151,   152,   153,     0,     0,     0,
     154,     0,     0,     0,     0,   155,  -266,  -266,   156,     0,
    -266,  -266,   129,     0,  -266,  -266,     0,     0,  -266,     0,
       0,   130,     0,   131,   132,   133,   134,   135,   136,   137,
       0,     0,   138,     0,     0,     0,   139,  -266,  -266,     0,
     140,  -266,     0,     0,     0,     0,     0,     0,     0,   141,
     142,   143,   144,     0,     0,     0,     0,     0,   283,   145,
       0,   146,   147,   148,   118,   149,   150,   151,   152,   153,
       0,     0,     0,   154,     0,     0,     0,     0,   155,   119,
     120,   156,     0,   121,   122,  -266,     0,   123,   124,     0,
       0,   125,     0,     0,  -266,     0,  -266,  -266,  -266,  -266,
    -266,  -266,  -266,     0,     0,  -266,     0,     0,     0,  -266,
     126,   127,     0,  -266,   128,     0,     0,     0,     0,     0,
       0,     0,  -266,  -266,  -266,  -266,     0,     0,     0,     0,
       0,   290,  -266,     0,  -266,  -266,  -266,  -599,  -266,  -266,
    -266,  -266,  -266,     0,     0,     0,  -266,     0,     0,     0,
       0,  -266,  -599,  -599,  -266,     0,  -599,  -599,   129,     0,
    -599,  -599,     0,     0,  -599,     0,     0,   130,     0,   131,
     132,   133,   134,   135,   136,   137,     0,     0,   138,     0,
       0,     0,   139,  -599,  -599,     0,   140,  -599,     0,     0,
       0,     0,     0,     0,     0,   141,   142,   143,   144,     0,
       0,     0,     0,     0,   388,   145,     0,   146,   147,   148,
     118,   149,   150,   151,   152,   153,     0,     0,     0,   154,
       0,     0,     0,     0,   155,   119,   120,   156,     0,   121,
     122,  -599,     0,   123,   124,     0,     0,   125,     0,     0,
    -599,     0,  -599,  -599,  -599,  -599,  -599,  -599,  -599,     0,
       0,  -599,     0,     0,     0,  -599,   126,   127,     0,  -599,
     128,     0,     0,     0,     0,     0,     0,     0,  -599,  -599,
    -599,  -599,     0,     0,     0,     0,     0,   544,  -599,     0,
    -599,  -599,  -599,   118,  -599,  -599,  -599,  -599,  -599,     0,
       0,     0,  -599,     0,     0,     0,     0,  -599,   119,   120,
    -599,     0,   121,   122,   129,     0,   123,   124,     0,     0,
     125,     0,     0,   130,     0,   131,   132,   133,   134,   135,
     136,   137,     0,     0,   138,     0,     0,     0,   139,   126,
     127,     0,   140,   128,     0,     0,     0,     0,     0,     0,
       0,   141,   142,   143,   144,     0,     0,     0,     0,     0,
     720,   145,     0,   146,   147,   148,   118,   149,   150,   151,
     152,   153,     0,     0,     0,   154,     0,     0,     0,     0,
     155,   119,   120,   156,     0,   121,   122,   129,     0,   123,
     124,     0,     0,   125,     0,     0,   130,     0,   131,   132,
     133,   134,   135,   136,   137,     0,     0,   138,     0,     0,
       0,   139,   126,   127,     0,   140,   128,     0,     0,     0,
       0,     0,     0,     0,   141,   142,   143,   144,     0,     0,
       0,     0,     0,   857,   145,     0,   146,   147,   148,   118,
     149,   150,   151,   152,   153,     0,     0,     0,   154,     0,
       0,     0,     0,   155,   119,   120,   156,     0,   121,   122,
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
       0,   140,     0,     0,     0,     0,     0,     0,     0,     0,
     141,   142,   143,   144,     0,     0,     0,     0,     0,     0,
     145,     0,   146,   147,   148,     0,   149,   150,   151,   152,
     153,     0,     0,     5,   154,     0,     0,     0,   482,   155,
       7,     8,   156,     0,     0,     0,     0,     0,    11,    12,
    -409,    13,     0,     0,     0,     0,    14,    15,     0,     0,
       0,    16,     0,     0,   483,   484,     0,    18,    19,    20,
     485,    22,    23,    24,     0,    25,     0,     0,     0,     0,
       0,     0,     0,    26,     0,    27,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    28,     0,  -409,
       0,     0,     0,  -409,    29,    30,    31,    32,     0,     0,
       0,     0,     0,     0,    33,    34,    35,    36,     0,     0,
       0,    37,     0,     0,     0,     0,     0,    39,     0,     0,
     486,     0,    41,    42,    43,    44,    45,    46,    47,     0,
      48,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    49,     0,     0,    50,    51,     0,    52,    53,
       0,     0,     0,     0,     0,     0,     0,    54,     5,     0,
       0,    55,     0,   482,    56,     7,     8,     0,     0,     0,
       0,     0,     0,    11,    12,  -408,    13,     0,     0,     0,
       0,    14,    15,     0,     0,     0,    16,     0,     0,   483,
     484,    57,    18,    19,    20,   485,    22,    23,    24,     0,
      25,     0,     0,     0,     0,     0,     0,     0,    26,     0,
      27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    28,     0,  -408,     0,     0,     0,  -408,    29,
      30,    31,    32,     0,     0,     0,     0,     0,     0,    33,
      34,    35,    36,     0,     0,     0,    37,     0,     0,     0,
       0,     0,    39,     0,     0,   486,     0,    41,    42,    43,
      44,    45,    46,    47,     0,    48,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    49,     0,     0,
      50,    51,     5,    52,    53,     0,     0,     6,     0,     7,
       8,     9,    54,     0,    10,     0,    55,    11,    12,    56,
      13,     0,     0,     0,     0,    14,    15,     0,     0,     0,
      16,     0,     0,    17,     0,     0,    18,    19,    20,    21,
      22,    23,    24,     0,    25,     0,    57,     0,     0,     0,
       0,     0,    26,     0,    27,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,     0,     0,     0,
       0,     0,     0,    29,    30,    31,    32,     0,     0,     0,
       0,     0,     0,    33,    34,    35,    36,     0,     0,     0,
      37,     0,     0,     0,    38,     0,    39,     0,     0,    40,
       0,    41,    42,    43,    44,    45,    46,    47,     0,    48,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    49,     0,     0,    50,    51,     0,    52,    53,     0,
       0,     0,     0,     0,     0,     0,    54,     5,     0,     0,
      55,     0,   482,    56,     7,     8,     0,     0,     0,     0,
       0,     0,    11,    12,   490,    13,     0,     0,     0,     0,
      14,    15,     0,     0,     0,    16,     0,     0,   483,   484,
      57,    18,    19,    20,   485,    22,    23,    24,     0,    25,
       0,     0,     0,     0,     0,     0,     0,    26,     0,    27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    28,     0,     0,     0,     0,     0,     0,    29,    30,
      31,    32,     0,     0,     0,     0,     0,     0,    33,    34,
      35,    36,     0,     0,     0,    37,     0,     0,     0,     0,
       0,    39,     0,     0,   486,     0,    41,    42,    43,    44,
      45,    46,    47,     0,    48,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    49,     0,     0,    50,
      51,     0,    52,    53,     0,     0,     0,     0,     0,     0,
       0,    54,     5,     0,     0,    55,     0,   482,    56,     7,
       8,     0,     0,     0,     0,     0,     0,    11,    12,   646,
      13,     0,     0,     0,     0,    14,    15,     0,     0,     0,
      16,     0,     0,   483,   484,    57,    18,    19,    20,   485,
      22,    23,    24,     0,    25,     0,     0,     0,     0,     0,
       0,     0,    26,     0,    27,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,     0,     0,     0,
       0,     0,     0,    29,    30,    31,    32,     0,     0,     0,
       0,     0,     0,    33,    34,    35,    36,     0,     0,     0,
      37,     0,     0,     0,     0,     0,    39,     0,     0,   486,
       0,    41,    42,    43,    44,    45,    46,    47,     0,    48,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    49,     0,     0,    50,    51,     0,    52,    53,     0,
       0,     0,     0,     0,     0,     0,    54,     5,     0,     0,
      55,     0,   482,    56,     7,     8,     0,     0,     0,     0,
       0,     0,    11,    12,   665,    13,     0,     0,     0,     0,
      14,    15,     0,     0,     0,    16,     0,     0,   483,   484,
      57,    18,    19,    20,   485,    22,    23,    24,     0,    25,
       0,     0,     0,     0,     0,     0,     0,    26,     0,    27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    28,     0,     0,     0,     0,     0,     0,    29,    30,
      31,    32,     0,     0,     0,     0,     0,     0,    33,    34,
      35,    36,     0,     0,     0,    37,     0,     0,     0,     0,
       0,    39,     0,     0,   486,     0,    41,    42,    43,    44,
      45,    46,    47,     0,    48,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    49,     0,     0,    50,
      51,     0,    52,    53,     0,     0,     0,     0,     0,     0,
       0,    54,     5,     0,     0,    55,     0,   482,    56,     7,
       8,     0,     0,     0,     0,     0,     0,    11,    12,   847,
      13,     0,     0,     0,     0,    14,    15,     0,     0,     0,
      16,     0,     0,   483,   484,    57,    18,    19,    20,   485,
      22,    23,    24,     0,    25,     0,     0,     0,     0,     0,
       0,     0,    26,     0,    27,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,     0,     0,     0,
       0,     0,     0,    29,    30,    31,    32,     0,     0,     0,
       0,     0,     0,    33,    34,    35,    36,     0,     0,     0,
      37,     0,     0,     0,     0,     0,    39,     0,     0,   486,
       0,    41,    42,    43,    44,    45,    46,    47,     0,    48,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    49,     0,     0,    50,    51,     0,    52,    53,     0,
       0,     0,     0,     0,     0,     0,    54,     5,     0,     0,
      55,     0,   482,    56,     7,     8,     0,     0,     0,     0,
       0,     0,    11,    12,   946,    13,     0,     0,     0,     0,
      14,    15,     0,     0,     0,    16,     0,     0,   483,   484,
      57,    18,    19,    20,   485,    22,    23,    24,     0,    25,
       0,     0,     0,     0,     0,     0,     0,    26,     0,    27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    28,     0,     0,     0,     0,     0,     0,    29,    30,
      31,    32,     0,     0,     0,     0,     0,     0,    33,    34,
      35,    36,     0,     0,     0,    37,     0,     0,     0,     0,
       0,    39,     0,     0,   486,     0,    41,    42,    43,    44,
      45,    46,    47,     0,    48,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    49,     0,     0,    50,
      51,     0,    52,    53,     0,     0,     0,     0,     0,     0,
       0,    54,     5,     0,     0,    55,     0,   482,    56,     7,
       8,     0,     0,     0,     0,     0,     0,    11,    12,   977,
      13,     0,     0,     0,     0,    14,    15,     0,     0,     0,
      16,     0,     0,   483,   484,    57,    18,    19,    20,   485,
      22,    23,    24,     0,    25,     0,     0,     0,     0,     0,
       0,     0,    26,     0,    27,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,     0,     0,     0,
       0,     0,     0,    29,    30,    31,    32,     0,     0,     0,
       0,     0,     0,    33,    34,    35,    36,     0,     0,     0,
      37,     0,     0,     0,     0,     0,    39,     0,     0,   486,
       0,    41,    42,    43,    44,    45,    46,    47,     0,    48,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    49,     0,     0,    50,    51,     0,    52,    53,     0,
       0,     0,     0,     0,     0,     0,    54,     5,     0,     0,
      55,     0,   482,    56,     7,     8,     0,     0,     0,     0,
       0,     0,    11,    12,   978,    13,     0,     0,     0,     0,
      14,    15,     0,     0,     0,    16,     0,     0,   483,   484,
      57,    18,    19,    20,   485,    22,    23,    24,     0,    25,
       0,     0,     0,     0,     0,     0,     0,    26,     0,    27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    28,     0,     0,     0,     0,     0,     0,    29,    30,
      31,    32,     0,     0,     0,     0,     0,     0,    33,    34,
      35,    36,     0,     0,     0,    37,     0,     0,     0,     0,
       0,    39,     0,     0,   486,     0,    41,    42,    43,    44,
      45,    46,    47,     0,    48,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    49,     0,     0,    50,
      51,     0,    52,    53,     0,     0,     0,     0,     0,     0,
       0,    54,     5,     0,     0,    55,     0,   482,    56,     7,
       8,     0,     0,     0,     0,     0,     0,    11,    12,  1041,
      13,     0,     0,     0,     0,    14,    15,     0,     0,     0,
      16,     0,     0,   483,   484,    57,    18,    19,    20,   485,
      22,    23,    24,     0,    25,     0,     0,     0,     0,     0,
       0,     0,    26,     0,    27,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,     0,     0,     0,
       0,     0,     0,    29,    30,    31,    32,     0,     0,     0,
       0,     0,     0,    33,    34,    35,    36,     0,     0,     0,
      37,     0,     0,     0,     0,     0,    39,     0,     0,   486,
       0,    41,    42,    43,    44,    45,    46,    47,     0,    48,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    49,     0,     0,    50,    51,     0,    52,    53,     0,
       0,     0,     0,     0,     0,     0,    54,     5,     0,     0,
      55,     0,   482,    56,     7,     8,     0,     0,     0,     0,
       0,     0,    11,    12,  -643,    13,     0,     0,     0,     0,
      14,    15,     0,     0,     0,    16,     0,     0,   483,   484,
      57,    18,    19,    20,   485,    22,    23,    24,     0,    25,
       0,     0,     0,     0,     0,     0,     0,    26,     0,    27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    28,     0,     0,     0,     0,     0,     0,    29,    30,
      31,    32,     0,     0,     0,     0,     0,     0,    33,    34,
      35,    36,     0,     0,     0,    37,     0,     0,     0,     0,
       0,    39,     0,     0,   486,     0,    41,    42,    43,    44,
      45,    46,    47,     0,    48,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    49,     0,     0,    50,
      51,     0,    52,    53,     0,     0,     0,     0,     0,     0,
       0,    54,     5,     0,     0,    55,     0,   482,    56,     7,
       8,     0,     0,     0,     0,     0,     0,    11,    12,  1107,
      13,     0,     0,     0,     0,    14,    15,     0,     0,     0,
      16,     0,     0,   483,   484,    57,    18,    19,    20,   485,
      22,    23,    24,     0,    25,     0,     0,     0,     0,     0,
       0,     0,    26,     0,    27,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,     0,     0,     0,
       0,     0,     0,    29,    30,    31,    32,     0,     0,     0,
       0,     0,     0,    33,    34,    35,    36,     0,     0,     0,
      37,     0,     0,     0,     0,     0,    39,     0,     0,   486,
       0,    41,    42,    43,    44,    45,    46,    47,     0,    48,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    49,     0,     0,    50,    51,     0,    52,    53,     0,
       0,     0,     0,     0,     0,     0,    54,     5,     0,     0,
      55,     0,   482,    56,     7,     8,     0,     0,     0,     0,
       0,     0,    11,    12,  1159,    13,     0,     0,     0,     0,
      14,    15,     0,     0,     0,    16,     0,     0,   483,   484,
      57,    18,    19,    20,   485,    22,    23,    24,     0,    25,
       0,     0,     0,     0,     0,     0,     0,    26,     0,    27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    28,     0,     0,     0,     0,     0,     0,    29,    30,
      31,    32,     0,     0,     0,     0,     0,     0,    33,    34,
      35,    36,     0,     0,     0,    37,     0,     0,     0,     0,
       0,    39,     0,     0,   486,     0,    41,    42,    43,    44,
      45,    46,    47,     0,    48,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    49,     0,     0,    50,
      51,     5,    52,    53,     0,     0,   482,     0,     7,     8,
       0,    54,     0,     0,     0,    55,    11,    12,    56,    13,
       0,     0,     0,     0,    14,    15,     0,     0,     0,    16,
       0,     0,   483,   484,     0,    18,    19,    20,   485,    22,
      23,    24,     0,    25,     0,    57,     0,     0,     0,     0,
       0,    26,     0,    27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,  -633,     0,     0,     0,
       0,     0,    29,    30,    31,    32,     0,     0,     0,     0,
       0,     0,    33,    34,    35,    36,     0,     0,     0,    37,
       0,     0,     0,     0,     0,    39,     0,     0,   486,     0,
      41,    42,    43,    44,    45,    46,    47,     0,    48,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      49,     0,     0,    50,    51,     0,    52,    53,     0,     0,
       0,     0,     0,     0,     0,    54,     5,     0,     0,    55,
       0,   482,    56,     7,     8,     0,     0,     0,     0,     0,
       0,    11,    12,  -635,    13,     0,     0,     0,     0,    14,
      15,     0,     0,     0,    16,     0,     0,   483,   484,    57,
      18,    19,    20,   485,    22,    23,    24,     0,    25,   118,
       0,     0,     0,     0,     0,     0,    26,     0,    27,     0,
       0,     0,     0,     0,   119,   120,     0,     0,   121,   122,
      28,     0,   123,   124,     0,     0,   125,    29,    30,    31,
      32,   471,     0,     0,     0,     0,     0,    33,    34,    35,
      36,     0,     0,     0,    37,   126,   127,     0,     0,   128,
      39,     0,     0,   486,     0,    41,    42,    43,    44,    45,
      46,    47,     0,    48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    49,     0,     0,    50,    51,
       0,    52,    53,     0,     0,     0,     0,     0,     0,     0,
      54,     0,     0,   129,    55,     0,     0,    56,     0,     0,
       0,     0,   130,     0,   131,   132,   133,   134,   135,   136,
     137,     0,     0,   138,     0,     0,     0,   139,     0,   472,
       0,   140,     0,     0,    57,     0,     0,     0,     0,     0,
     141,   142,   143,   144,     0,     0,     0,   118,     0,     0,
     145,     0,   146,   147,   148,     0,   149,   150,   151,   152,
     153,     0,   119,   120,   154,     0,   121,   122,     0,   155,
     123,   124,   156,     0,   125,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   126,   127,     0,     0,   128,     0,     0,
       0,     0,     0,     0,   376,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     118,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   119,   120,     0,     0,   121,
     122,   129,     0,   123,   124,     0,     0,   125,     0,     0,
     130,     0,   131,   132,   133,   134,   135,   136,   137,     0,
       0,   138,     0,     0,     0,   139,   126,   127,     0,   140,
     128,     0,     0,     0,     0,     0,     0,     0,   141,   142,
     143,   144,     0,     0,     0,     0,     0,     0,   145,     0,
     146,   147,   148,     0,   149,   150,   151,   152,   153,     0,
       0,     0,   154,     0,     0,     0,     0,   155,     0,     0,
     156,     0,     0,     0,   129,     0,     0,     0,     0,     0,
       0,     0,     0,   130,     0,   131,   132,   133,   134,   135,
     136,   137,     0,     0,   138,     0,     0,     0,   139,     0,
       0,     0,   140,   869,     0,     0,     0,     0,     0,     0,
       0,   141,   142,   143,   144,     0,     0,     0,   118,     0,
       0,   145,     0,   146,   147,   148,     0,   149,   150,   151,
     152,   153,     0,   119,   120,   154,     0,   121,   122,     0,
     155,   123,   124,   156,     0,   125,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   126,   127,     0,     0,   128,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   129,     0,     0,     0,     0,     0,     0,     0,
       0,   130,     0,   131,   132,   133,   134,   135,   136,   137,
       0,     0,   138,     0,     0,     0,   139,     0,     0,     0,
     140,     0,     0,     0,     0,     0,     0,     0,     0,   141,
     142,   143,   144,     0,     0,     0,     0,     0,     0,   145,
       0,   146,   147,   148,     0,   149,   150,   151,   152,   153,
       0,     0,     0,   154,     0,     0,     0,     0,   155,     0,
       0,   156
};

static const yytype_int16 yycheck[] =
{
       5,   312,   260,     8,   262,   575,   376,    75,    76,    78,
      79,   528,    40,   473,   605,   305,   294,   286,   534,   977,
     978,   245,    27,   247,     1,     1,    31,    32,    33,    34,
      35,   289,    37,   128,    39,   366,   367,   368,   369,   370,
       1,    51,     1,     1,    52,     1,    48,     1,     1,     1,
       6,    60,     1,     1,     1,     1,    51,    62,    18,   154,
     155,     1,     1,     1,    69,    13,    71,    82,    28,     1,
      30,     1,    33,     1,     1,    45,    62,    82,    83,     1,
      85,    86,    87,     1,     1,     1,    33,     1,     1,    35,
       1,    64,    32,    98,    13,     7,   101,    16,   103,   126,
     105,     1,   169,     1,   147,    51,   111,     1,   113,     1,
       1,    50,    65,   140,   922,    33,    86,     0,   926,    58,
      59,     1,    34,     1,   139,    61,   169,     1,   719,    51,
      69,   139,   162,   163,     1,    48,    49,   139,    77,    33,
      72,    68,    81,    33,    72,    93,     1,    18,     1,     1,
     159,    81,     1,    64,     1,    33,     1,    48,     1,   169,
      18,     1,     1,   168,   169,   170,     1,   126,    68,   174,
     126,   176,   126,     0,   179,    33,    68,   172,   139,   138,
     185,   140,   250,   188,   138,   190,   140,   173,   126,   194,
     139,   139,   169,    53,   170,   172,    67,    57,   171,   172,
     147,  1159,   140,   208,   143,   144,   145,   723,   213,   170,
     215,   139,   126,   171,   172,   174,   169,   222,   170,   224,
     174,   169,   171,   169,   229,   139,   139,   139,   139,   169,
     169,   170,   602,   238,    64,   240,   172,   169,   496,   169,
     530,   246,   511,   512,   468,   139,   251,   169,   139,   147,
     255,   169,   169,   169,   259,   169,   261,   147,   263,   139,
     265,   139,   267,   268,   269,   139,   170,   272,    64,   364,
     365,   169,   139,   278,    48,    16,    17,    81,   283,     1,
      51,   286,    64,   288,   139,   290,   139,   139,    29,   147,
     139,    64,   139,     6,   139,    55,   139,   257,    39,   139,
     139,    72,    73,    64,   139,    64,    64,    78,    79,    80,
     126,    64,   118,    64,    64,    37,    64,    51,   139,   125,
      39,    64,   139,   139,    64,    96,    97,    64,   172,    64,
      64,    64,   164,   165,   166,    64,    64,    64,    72,   371,
     372,   171,   172,   303,    56,  1022,  1023,  1024,    64,    16,
      17,    73,   312,   813,    76,    81,    78,    79,    80,    61,
      64,   102,    29,    64,    64,   139,   326,    64,   328,   329,
     330,   331,    39,   333,    96,    97,   172,    64,    50,    64,
     340,   341,   342,   388,   389,   126,   146,   169,   348,   349,
     350,   351,   352,   353,   354,   400,   401,   708,   169,   172,
      61,  1078,   713,   714,   126,   127,  1083,   412,   127,    81,
     415,   172,   171,   481,   172,   139,  1093,   139,   171,   172,
     171,   171,    18,   171,   429,   703,   704,   705,   171,   719,
     171,   171,   171,   172,   171,   102,   171,   715,   171,   444,
     445,   446,   171,   171,   171,   776,     3,     4,     5,   126,
     170,   411,    58,    59,   414,   171,   461,    63,   486,   126,
     162,   163,   979,   980,  1055,  1056,  1143,   171,    56,    50,
     171,   171,   477,   478,   171,   170,    33,    58,    59,   170,
     169,    91,    92,   172,   171,   490,   171,    44,    45,    46,
      47,    48,    49,   498,   170,   500,    16,    17,    64,    13,
      66,    13,    16,    50,    16,    17,   511,   512,    64,    29,
      66,    58,    59,   518,   171,   172,   521,    29,   523,    39,
     169,   169,    69,   172,   172,    13,    38,    39,    16,    86,
      77,    14,    15,   169,    88,    18,   172,    20,   543,   149,
     119,   852,   547,   122,   171,   172,   100,    14,    15,   361,
     362,   363,    19,    20,   160,   161,   170,   169,   169,    42,
     172,   172,   143,   144,   145,   169,    14,    15,   172,    88,
      18,   170,    20,   130,   131,    42,    95,   131,   171,   172,
      68,    93,   102,   103,   104,   139,   654,    70,    85,    86,
     102,   103,   104,   112,    42,   114,   143,   144,   145,   170,
     605,   126,   170,    86,    87,   610,   126,   170,   613,   170,
     170,   616,   680,   138,   126,   140,   279,   686,   281,    86,
      87,    88,    70,    20,   629,   170,   170,   997,   170,  1199,
     941,   126,   170,   100,   170,    73,   170,   156,    86,    87,
      78,    79,    80,   138,   170,   140,   170,    32,    33,   174,
      35,    61,   170,   170,   722,   170,   724,   170,    96,    97,
     665,   170,   181,   170,   669,   670,    51,   672,   170,   674,
     170,   170,   677,   192,   170,    20,   681,   682,   683,   174,
      65,   171,   687,    51,    66,   139,   172,    72,   172,   139,
     650,   651,   652,   653,   172,   214,   172,    65,    66,    67,
      18,  1134,  1135,   961,    72,    72,  1139,   139,   172,   139,
      18,   716,  1145,  1146,  1147,   720,   139,   139,   678,    50,
     171,    51,   139,   172,   139,    20,    20,   732,   733,    18,
     139,    48,   139,   170,  1045,    76,    71,   171,    64,   139,
      18,   172,    81,   172,   172,   172,   171,  1058,   708,    53,
     171,   171,  1063,   713,   714,  1066,   172,   171,   171,   171,
     279,   139,   281,   171,   139,   284,   171,   171,   171,   171,
     171,    83,   291,   171,   139,   171,  1087,   737,   738,   139,
     171,   741,   850,   172,   172,   790,   746,     1,   169,     1,
      33,    47,   752,   172,   754,   800,    28,    81,   171,   139,
    1111,   139,   171,   174,    72,   169,   766,   170,   327,  1120,
     172,   816,   772,    66,   139,   139,   335,   336,   337,   172,
     339,    51,   171,   139,   139,   138,   894,   346,   788,   789,
      28,    79,    28,   100,   171,   840,   355,   356,   843,   844,
     172,    18,   847,   172,    78,    73,  1157,    51,   139,   854,
     855,   172,   107,    90,   139,    66,   170,    66,    18,   929,
     171,  1068,   928,   868,  1065,   971,   717,   873,  1047,    64,
     296,   237,   943,   453,   829,   817,   601,   600,     4,   839,
      13,    13,   108,   402,   461,  1105,    70,   892,   956,  1026,
     503,   167,   852,   803,  1140,  1148,   811,  1136,  1071,   631,
     509,   696,   502,   440,   847,   249,   868,   912,   314,   818,
     915,   430,   975,  1118,  1041,   729,    -1,    -1,    -1,    -1,
      -1,   440,    -1,   442,    -1,    -1,    -1,    -1,    -1,    -1,
     935,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   946,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   474,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   925,    -1,    -1,    -1,    -1,
      -1,   931,   977,   978,    -1,    -1,    -1,    -1,    -1,    -1,
    1048,   941,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     509,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     529,    -1,    -1,    -1,    -1,    -1,    -1,  1022,  1023,  1024,
      -1,    -1,    -1,  1028,  1029,  1030,    -1,    -1,  1033,  1034,
     990,    -1,    -1,    -1,   994,    -1,  1041,    -1,  1043,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1009,
    1055,  1056,    -1,    -1,    -1,    -1,   575,    -1,    -1,  1064,
      -1,    -1,  1067,    -1,    -1,    -1,    -1,    -1,  1073,    -1,
      -1,    -1,    -1,  1078,    -1,  1080,    -1,    -1,  1083,    -1,
    1085,    -1,    -1,  1088,    -1,  1045,    -1,    -1,  1093,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1058,    -1,
      -1,    -1,  1107,  1063,    -1,    -1,  1066,   626,    -1,  1069,
      -1,     1,    -1,  1118,    -1,    -1,    -1,     7,    -1,    -1,
      -1,    -1,    -1,    -1,  1192,    -1,    -1,  1087,    -1,    -1,
      -1,    -1,    22,    23,  1202,    -1,    26,    27,  1143,    -1,
      30,    31,    -1,   662,    34,    -1,  1151,  1152,    -1,    -1,
      -1,  1111,    -1,    -1,  1159,    -1,    -1,    -1,    -1,    -1,
    1120,    -1,    -1,    53,    54,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   696,    -1,    -1,
      -1,    -1,    -1,    -1,  1189,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1157,    -1,    -1,
      -1,  1206,  1207,  1208,    -1,    -1,    -1,   726,   727,    -1,
      -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     110,    -1,   112,   113,   114,   115,   116,   117,   118,    -1,
      -1,   121,    -1,    -1,    -1,   125,    -1,    -1,    -1,   129,
      -1,    -1,    -1,    -1,    -1,   764,    -1,    -1,   138,   139,
     140,   141,    -1,    -1,    -1,    -1,    -1,    -1,   148,    -1,
     150,   151,   152,     1,   154,   155,   156,   157,   158,     7,
      -1,    -1,   162,    -1,    -1,    -1,    -1,   167,    -1,   169,
     170,    -1,   172,    -1,    22,    23,    -1,    -1,    26,    27,
      -1,    -1,    30,    31,    -1,    -1,    34,    -1,   817,   818,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    54,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   865,    -1,   867,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   110,    -1,   112,   113,   114,   115,   116,   117,
     118,    -1,    -1,   121,    -1,    -1,    -1,   125,    -1,    -1,
      -1,   129,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     138,   139,   140,   141,   923,     1,    -1,    -1,    -1,    -1,
     148,     7,   150,   151,   152,    -1,   154,   155,   156,   157,
     158,    -1,    -1,    -1,   162,    -1,    22,    23,    -1,   167,
      26,    27,   170,   171,    30,    31,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   973,   974,    -1,    53,    54,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,     7,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,   101,    -1,    26,    27,    -1,
      -1,    30,    31,    -1,   110,    34,   112,   113,   114,   115,
     116,   117,   118,    -1,    -1,   121,    -1,    -1,    -1,   125,
      -1,   127,    -1,   129,    53,    54,    -1,    -1,    57,    -1,
      -1,    -1,   138,   139,   140,   141,    -1,    -1,    -1,    -1,
      -1,    -1,   148,    -1,   150,   151,   152,    -1,   154,   155,
     156,   157,   158,    -1,    -1,    -1,   162,    -1,    -1,    -1,
      -1,   167,    -1,    -1,   170,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1109,   110,    -1,   112,   113,   114,   115,   116,   117,   118,
      -1,    -1,   121,    -1,    -1,    -1,   125,    -1,    -1,    -1,
     129,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,
     139,   140,   141,    -1,    -1,    -1,    -1,    -1,    -1,   148,
      -1,   150,   151,   152,    -1,   154,   155,   156,   157,   158,
       1,    -1,    -1,   162,    -1,    -1,     7,    -1,   167,    -1,
     169,   170,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    -1,    -1,    26,    27,    -1,    -1,    30,
      31,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,
    1199,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    54,    -1,    -1,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,     7,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,    27,
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
     141,    -1,    -1,    -1,    -1,    -1,    -1,   148,    -1,   150,
     151,   152,    -1,   154,   155,   156,   157,   158,    -1,    -1,
      -1,   162,    -1,    -1,    -1,    -1,   167,    -1,    -1,   170,
      -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   110,    -1,   112,   113,   114,   115,   116,   117,
     118,    -1,    -1,   121,    -1,    -1,    -1,   125,    -1,    -1,
      -1,   129,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     138,   139,   140,   141,    -1,    -1,    -1,    -1,    -1,    -1,
     148,    -1,   150,   151,   152,    -1,   154,   155,   156,   157,
     158,    -1,    -1,     1,   162,    -1,    -1,    -1,     6,   167,
       8,     9,   170,    -1,    -1,    -1,    -1,    -1,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    24,    25,    -1,    -1,
      -1,    29,    -1,    -1,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    -1,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    51,    -1,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    67,
      -1,    -1,    -1,    71,    72,    73,    74,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    83,    84,    85,    -1,    -1,
      -1,    89,    -1,    -1,    -1,    -1,    -1,    95,    -1,    -1,
      98,    -1,   100,   101,   102,   103,   104,   105,   106,    -1,
     108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   120,    -1,    -1,   123,   124,    -1,   126,   127,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,     1,    -1,
      -1,   139,    -1,     6,   142,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    24,    25,    -1,    -1,    -1,    29,    -1,    -1,    32,
      33,   169,    35,    36,    37,    38,    39,    40,    41,    -1,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    -1,    67,    -1,    -1,    -1,    71,    72,
      73,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      83,    84,    85,    -1,    -1,    -1,    89,    -1,    -1,    -1,
      -1,    -1,    95,    -1,    -1,    98,    -1,   100,   101,   102,
     103,   104,   105,   106,    -1,   108,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,
     123,   124,     1,   126,   127,    -1,    -1,     6,    -1,     8,
       9,    10,   135,    -1,    13,    -1,   139,    16,    17,   142,
      19,    -1,    -1,    -1,    -1,    24,    25,    -1,    -1,    -1,
      29,    -1,    -1,    32,    -1,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    43,    -1,   169,    -1,    -1,    -1,
      -1,    -1,    51,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    74,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    83,    84,    85,    -1,    -1,    -1,
      89,    -1,    -1,    -1,    93,    -1,    95,    -1,    -1,    98,
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
      -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,
      74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    82,    83,
      84,    85,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,
      -1,    95,    -1,    -1,    98,    -1,   100,   101,   102,   103,
     104,   105,   106,    -1,   108,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,   123,
     124,    -1,   126,   127,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   135,     1,    -1,    -1,   139,    -1,     6,   142,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    24,    25,    -1,    -1,    -1,
      29,    -1,    -1,    32,    33,   169,    35,    36,    37,    38,
      39,    40,    41,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    74,    75,    -1,    -1,    -1,
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
      -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,
      74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    82,    83,
      84,    85,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,
      -1,    95,    -1,    -1,    98,    -1,   100,   101,   102,   103,
     104,   105,   106,    -1,   108,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,   123,
     124,    -1,   126,   127,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   135,     1,    -1,    -1,   139,    -1,     6,   142,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    24,    25,    -1,    -1,    -1,
      29,    -1,    -1,    32,    33,   169,    35,    36,    37,    38,
      39,    40,    41,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    74,    75,    -1,    -1,    -1,
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
      -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,
      74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    82,    83,
      84,    85,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,
      -1,    95,    -1,    -1,    98,    -1,   100,   101,   102,   103,
     104,   105,   106,    -1,   108,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,   123,
     124,    -1,   126,   127,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   135,     1,    -1,    -1,   139,    -1,     6,   142,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    24,    25,    -1,    -1,    -1,
      29,    -1,    -1,    32,    33,   169,    35,    36,    37,    38,
      39,    40,    41,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    74,    75,    -1,    -1,    -1,
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
      -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,
      74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    82,    83,
      84,    85,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,
      -1,    95,    -1,    -1,    98,    -1,   100,   101,   102,   103,
     104,   105,   106,    -1,   108,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,   123,
     124,    -1,   126,   127,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   135,     1,    -1,    -1,   139,    -1,     6,   142,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    24,    25,    -1,    -1,    -1,
      29,    -1,    -1,    32,    33,   169,    35,    36,    37,    38,
      39,    40,    41,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    74,    75,    -1,    -1,    -1,
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
      -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,
      74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    82,    83,
      84,    85,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,
      -1,    95,    -1,    -1,    98,    -1,   100,   101,   102,   103,
     104,   105,   106,    -1,   108,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,   123,
     124,    -1,   126,   127,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   135,     1,    -1,    -1,   139,    -1,     6,   142,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    24,    25,    -1,    -1,    -1,
      29,    -1,    -1,    32,    33,   169,    35,    36,    37,    38,
      39,    40,    41,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    74,    75,    -1,    -1,    -1,
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
      -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,
      74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    82,    83,
      84,    85,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,
      -1,    95,    -1,    -1,    98,    -1,   100,   101,   102,   103,
     104,   105,   106,    -1,   108,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,   123,
     124,     1,   126,   127,    -1,    -1,     6,    -1,     8,     9,
      -1,   135,    -1,    -1,    -1,   139,    16,    17,   142,    19,
      -1,    -1,    -1,    -1,    24,    25,    -1,    -1,    -1,    29,
      -1,    -1,    32,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,    -1,    43,    -1,   169,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    66,    -1,    -1,    -1,
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
      35,    36,    37,    38,    39,    40,    41,    -1,    43,     7,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,    27,
      65,    -1,    30,    31,    -1,    -1,    34,    72,    73,    74,
      75,    39,    -1,    -1,    -1,    -1,    -1,    82,    83,    84,
      85,    -1,    -1,    -1,    89,    53,    54,    -1,    -1,    57,
      95,    -1,    -1,    98,    -1,   100,   101,   102,   103,   104,
     105,   106,    -1,   108,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,   123,   124,
      -1,   126,   127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     135,    -1,    -1,   101,   139,    -1,    -1,   142,    -1,    -1,
      -1,    -1,   110,    -1,   112,   113,   114,   115,   116,   117,
     118,    -1,    -1,   121,    -1,    -1,    -1,   125,    -1,   127,
      -1,   129,    -1,    -1,   169,    -1,    -1,    -1,    -1,    -1,
     138,   139,   140,   141,    -1,    -1,    -1,     7,    -1,    -1,
     148,    -1,   150,   151,   152,    -1,   154,   155,   156,   157,
     158,    -1,    22,    23,   162,    -1,    26,    27,    -1,   167,
      30,    31,   170,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    54,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,
      27,   101,    -1,    30,    31,    -1,    -1,    34,    -1,    -1,
     110,    -1,   112,   113,   114,   115,   116,   117,   118,    -1,
      -1,   121,    -1,    -1,    -1,   125,    53,    54,    -1,   129,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,   139,
     140,   141,    -1,    -1,    -1,    -1,    -1,    -1,   148,    -1,
     150,   151,   152,    -1,   154,   155,   156,   157,   158,    -1,
      -1,    -1,   162,    -1,    -1,    -1,    -1,   167,    -1,    -1,
     170,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   110,    -1,   112,   113,   114,   115,   116,
     117,   118,    -1,    -1,   121,    -1,    -1,    -1,   125,    -1,
      -1,    -1,   129,   130,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   138,   139,   140,   141,    -1,    -1,    -1,     7,    -1,
      -1,   148,    -1,   150,   151,   152,    -1,   154,   155,   156,
     157,   158,    -1,    22,    23,   162,    -1,    26,    27,    -1,
     167,    30,    31,   170,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    54,    -1,    -1,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   110,    -1,   112,   113,   114,   115,   116,   117,   118,
      -1,    -1,   121,    -1,    -1,    -1,   125,    -1,    -1,    -1,
     129,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,
     139,   140,   141,    -1,    -1,    -1,    -1,    -1,    -1,   148,
      -1,   150,   151,   152,    -1,   154,   155,   156,   157,   158,
      -1,    -1,    -1,   162,    -1,    -1,    -1,    -1,   167,    -1,
      -1,   170
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
     181,   194,   212,   214,   216,   218,   219,   257,   293,   304,
     307,   309,   315,   320,   327,   330,   333,   336,   337,   338,
     339,   340,   341,   385,   387,   388,   390,   396,   397,   414,
     424,   426,   431,   432,   436,   442,   444,   177,     1,   139,
     177,    52,   139,   221,   222,     1,    37,   139,   275,   304,
     307,     1,   437,     1,   433,     1,   445,     1,     7,    22,
      23,    26,    27,    30,    31,    34,    53,    54,    57,   101,
     110,   112,   113,   114,   115,   116,   117,   118,   121,   125,
     129,   138,   139,   140,   141,   148,   150,   151,   152,   154,
     155,   156,   157,   158,   162,   167,   170,   233,   238,   239,
     240,   241,   242,   243,   244,   246,   248,   251,     1,   139,
       1,   139,    13,    16,     1,   139,     1,   139,   170,   223,
     177,   265,     1,   251,    81,   251,   177,   177,   147,   177,
       1,   177,   267,   177,     1,     6,   126,   177,   177,    13,
      16,    17,    29,    38,    39,    93,   126,   340,     6,   139,
     286,   139,   283,     1,   269,     1,    64,   139,     1,   316,
     344,   308,     1,   139,     1,    81,   170,   266,   386,     1,
      13,    93,   139,   177,   229,    56,   213,   213,     1,   139,
       1,   139,   281,   177,    81,   274,   319,   177,     1,   310,
     277,    18,    67,   253,   253,     1,    33,   170,   335,     1,
     335,     1,   335,     1,   139,   322,   323,     1,   126,   139,
     177,   418,     1,   177,   402,   172,   402,   402,     1,   172,
     177,   280,   401,     1,   251,   252,   398,   400,     1,   260,
       1,   427,   252,   177,   195,   177,   172,   177,   177,   139,
     262,   126,   309,    61,   420,   318,   319,   177,   252,   177,
     252,    18,    33,   147,   446,   447,   448,   458,    51,    65,
      66,    67,    72,   332,   334,   223,   170,   170,   170,   170,
     170,   170,   223,   170,   240,   170,   170,   170,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   240,   240,   252,
      56,   164,   165,   166,   162,   163,    58,    59,    63,   160,
     161,    60,   159,    61,    62,   173,    64,   332,   177,   177,
     177,   425,    20,    20,   177,   177,   171,   177,     1,   252,
     403,    66,    66,    48,   139,   177,   177,   177,   252,   177,
      88,   100,   131,   139,   139,    13,    16,     1,   342,   177,
     172,   172,   288,   172,   172,   285,   177,   252,   177,   139,
      18,    72,   139,   351,   177,   172,   177,   305,   306,     1,
     273,    50,    58,    59,    69,    77,   143,   144,   145,   405,
     406,   392,   393,   177,   231,   230,   232,   220,   253,   220,
     177,   215,   177,   217,    73,    78,    79,    80,    96,    97,
     294,   296,   297,   303,   290,    48,   139,   290,   177,   290,
      18,    39,   127,   313,   314,   422,   253,     1,    65,   177,
     417,   261,     6,    32,    33,    38,    98,   254,   257,   329,
      18,   177,    55,   146,   210,   251,   258,   177,   322,   177,
     322,   177,   324,   172,   177,   177,   177,   177,   177,   389,
     177,   398,   398,   177,   252,   172,   401,   177,   322,   177,
     252,     1,   172,   263,   196,   211,   252,   222,   278,    50,
     276,   251,    51,   291,   420,   438,   434,    32,    33,    35,
      51,    65,    72,   464,     1,   210,   449,    18,   447,   251,
     252,   251,   251,   251,   251,   251,   252,   252,   252,     1,
     139,   171,   252,   251,   251,   251,     1,   139,     1,   139,
       1,    48,    49,   139,   252,   234,   251,   251,   251,   251,
     251,   251,   251,   252,   252,   171,    53,    57,   239,   239,
     239,   240,   240,   241,   241,   241,   241,   241,   242,   242,
     245,   247,   249,   248,   172,   440,   441,   139,   139,   177,
       1,   177,   404,   268,   177,   177,   252,   271,   272,    20,
      20,    18,   139,   287,   251,   177,   284,   251,   177,   270,
     345,   391,    48,   139,   177,   235,   236,   237,   252,   403,
     252,   394,   395,   177,   177,   177,    18,   170,   224,   224,
     301,   299,   298,   300,   282,    51,    72,   177,   295,   297,
      76,   290,   423,   351,   252,    18,   177,   177,   253,     1,
      68,     1,    68,     1,    68,    13,    16,    68,    71,   328,
     331,     1,    35,    51,   177,   419,   171,   322,   177,   177,
     325,   405,   323,   394,   401,   401,   399,   177,   428,   177,
     139,   177,   443,     3,     4,     5,    33,    44,    45,    46,
      47,    48,    49,    86,   130,   131,   197,   198,   199,   440,
       1,   252,   407,   420,   292,   291,   172,   172,   177,    18,
     459,    81,     1,    32,   177,   463,   171,   172,   172,   171,
     171,   172,   171,     1,   171,   172,   172,   171,   171,   171,
     171,   171,   172,   171,   172,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   172,   235,   172,   171,   171,   171,
     171,   171,   172,   171,   171,    53,    61,   243,   244,   248,
     139,   177,   441,   185,   183,   177,   177,   177,    45,    86,
     382,    14,    15,    19,    20,    42,    86,    87,    88,   100,
     372,   139,   139,   343,   139,   289,   252,   177,   211,   346,
     347,   348,   349,   421,   422,   392,   171,   172,   172,    16,
      17,    29,    39,   102,   126,   171,   225,   226,   227,    83,
      91,    92,   149,   228,   251,   251,   251,   251,   253,   302,
     252,   311,   169,     1,    72,   177,   415,    18,   177,   177,
     256,   177,   255,   177,     1,     1,   177,     1,   251,   253,
     177,   177,   177,   335,   177,   326,   400,   172,   264,   130,
     211,   211,   211,    47,   210,   202,   210,   210,   211,   177,
     199,   420,    51,   177,   413,    28,   410,   253,   291,   253,
     252,   252,   464,    81,   461,   139,   177,   177,   251,   251,
     251,   171,   139,   251,   251,   251,   252,   171,   251,   251,
     241,   174,     1,   170,   190,     1,   170,   186,   251,   251,
     177,   376,   375,   374,    72,   373,   377,   177,   184,   182,
     346,   172,   169,   353,   351,     1,    81,   177,   321,   237,
     395,   170,   171,   172,   139,   227,    18,   251,   177,   355,
     352,   353,   177,   177,   417,   253,   210,   177,   177,    66,
      66,   259,   252,   252,   443,   139,   202,   201,   119,   122,
     203,   200,    51,   408,   172,   411,   412,    18,    18,   439,
     435,   177,   139,   253,   450,   171,   171,   171,   171,   171,
     172,   171,   171,   171,   172,   171,   171,   250,   177,   139,
     191,   192,   177,   138,   187,   188,   383,   378,   379,   380,
     378,   252,   251,   378,   190,   186,   251,    14,    15,    18,
      20,    42,    70,    86,    87,   354,   350,   177,     1,    48,
     139,   210,   226,     1,    51,   177,   416,   126,   139,   317,
      18,    18,   253,   322,   429,    28,   204,   204,   279,   252,
     252,    51,   412,   416,   416,   440,   440,   460,    79,   457,
     251,   251,   248,   193,   171,   172,   189,   171,   172,    28,
     384,   172,   251,     1,   126,   138,   140,   174,   365,   366,
       1,   126,   140,   357,   358,     1,    15,   356,     1,   126,
     138,   140,   174,   360,   361,   355,   355,   355,   352,   177,
     177,   177,   171,   177,   177,   312,   463,    18,   177,   172,
     210,   100,   205,   205,   253,   409,   177,   177,    18,   210,
      78,   171,   171,   210,   177,   192,   210,   177,   188,   251,
     379,   381,   177,   367,   368,   369,   172,   355,   177,   359,
     172,   355,   177,   210,   177,   362,   363,   364,   172,   355,
     318,     1,    33,   177,   462,   252,   210,    73,   206,    18,
      51,   462,   210,   139,     7,    34,   139,   370,   371,   370,
     370,   366,   370,   358,   355,   370,   370,   370,   361,   177,
     177,   430,   210,   416,   451,   107,   172,   207,    90,   139,
      66,   208,   452,   177,    82,   139,   253,   170,   453,   209,
      66,   235,   454,   171,   253,   455,    18,     1,   147,   177,
     456,   177,   177
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
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     281,   282,   257,   257,   257,   284,   283,   285,   285,   287,
     286,   288,   289,   288,   290,   292,   291,   293,   293,   294,
     295,   295,   295,   296,   296,   298,   297,   299,   297,   300,
     297,   301,   297,   302,   297,   303,   303,   303,   304,   305,
     304,   306,   304,   308,   307,   310,   311,   312,   309,   309,
     313,   314,   313,   316,   315,   317,   317,   317,   318,   318,
     319,   319,   320,   320,   320,   321,   321,   321,   321,   321,
     322,   322,   324,   323,   325,   326,   325,   327,   328,   329,
     329,   330,   330,   331,   331,   332,   332,   333,   333,   333,
     334,   334,   334,   335,   335,   335,   336,   336,   337,   337,
     338,   338,   339,   339,   340,   340,   340,   342,   343,   341,
     341,   344,   345,   341,   341,   346,   346,   348,   347,   350,
     349,   351,   352,   353,   353,   354,   354,   354,   354,   354,
     354,   354,   354,   354,   354,   354,   355,   355,   356,   356,
     357,   357,   359,   358,   358,   360,   360,   362,   361,   363,
     361,   364,   361,   361,   365,   365,   367,   366,   368,   366,
     369,   366,   366,   370,   371,   371,   371,   371,   372,   372,
     372,   372,   373,   372,   372,   374,   372,   375,   372,   376,
     372,   377,   372,   378,   378,   380,   381,   379,   382,   383,
     382,   384,   384,   386,   385,   387,   387,   389,   388,   391,
     390,   393,   392,   394,   394,   395,   396,   396,   397,   397,
     398,   399,   398,   400,   401,   402,   403,   403,   404,   404,
     405,   405,   405,   405,   405,   405,   406,   406,   406,   408,
     409,   407,   410,   407,   407,   411,   411,   412,   413,   413,
     414,   414,   415,   415,   415,   416,   416,   416,   417,   417,
     417,   418,   418,   418,   418,   419,   419,   419,   419,   420,
     420,   421,   421,   422,   423,   422,   425,   424,   424,   427,
     428,   429,   430,   426,   426,   431,   431,   433,   434,   435,
     432,   432,   437,   438,   439,   436,   436,   440,   440,   441,
     442,   443,   445,   444,   444,   446,   446,   447,   447,   449,
     450,   451,   452,   453,   454,   455,   448,   456,   456,   456,
     457,   457,   459,   460,   458,   458,   461,   461,   462,   462,
     462,   463,   463,   463,   464,   464,   464,   464,   464,   464,
     464
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
       3,     3,     2,     3,     3,     2,     3,     2,     4,     4,
       0,     0,     7,     3,     2,     0,     4,     0,     2,     0,
       4,     0,     0,     5,     0,     0,     5,     1,     1,     2,
       1,     1,     1,     1,     2,     0,     3,     0,     3,     0,
       3,     0,     3,     0,     4,     0,     1,     1,     1,     0,
       4,     0,     4,     0,     3,     0,     0,     0,     9,     3,
       1,     0,     3,     0,     3,     0,     1,     1,     0,     1,
       2,     2,     1,     3,     3,     1,     3,     3,     3,     2,
       1,     3,     0,     3,     0,     0,     3,     3,     2,     0,
       2,     3,     3,     3,     3,     1,     1,     3,     3,     3,
       1,     1,     1,     0,     2,     2,     2,     1,     2,     1,
       2,     1,     2,     1,     1,     1,     1,     0,     0,     6,
       4,     0,     0,     5,     3,     1,     1,     0,     3,     0,
       4,     0,     2,     0,     2,     3,     3,     3,     3,     3,
       3,     2,     2,     2,     4,     3,     0,     1,     0,     1,
       1,     3,     0,     3,     1,     1,     3,     0,     3,     0,
       3,     0,     3,     1,     1,     3,     0,     3,     0,     3,
       0,     3,     1,     1,     1,     1,     1,     2,     1,     1,
       1,     2,     0,     3,     1,     0,     3,     0,     3,     0,
       3,     0,     3,     1,     3,     0,     0,     4,     2,     0,
       4,     0,     2,     0,     3,     3,     2,     0,     4,     0,
       5,     0,     2,     1,     3,     1,     2,     2,     1,     1,
       1,     0,     4,     1,     1,     1,     2,     2,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       0,     6,     0,     4,     2,     1,     2,     2,     1,     1,
       2,     1,     1,     2,     2,     1,     2,     2,     1,     2,
       2,     1,     2,     2,     2,     1,     2,     2,     2,     0,
       2,     1,     2,     1,     0,     4,     0,     5,     3,     0,
       0,     0,     0,    13,     3,     1,     1,     0,     0,     0,
       9,     3,     0,     0,     0,     9,     3,     1,     2,     2,
       1,     1,     0,     5,     5,     1,     2,     1,     1,     0,
       0,     0,     0,     0,     0,     0,    19,     1,     2,     2,
       0,     2,     0,     0,     8,     5,     0,     2,     1,     2,
       2,     1,     2,     2,     0,     1,     1,     1,     1,     1,
       1
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
#line 520 "rwlparser.y" /* yacc.c:1646  */
    {
	  ; // we are done!
	}
#line 3459 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 526 "rwlparser.y" /* yacc.c:1646  */
    { if (bit(rwm->mxq->errbits,RWL_ERROR_SEVERE)) YYABORT; }
#line 3465 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 532 "rwlparser.y" /* yacc.c:1646  */
    {  
	    bis(rwm->m2flags, RWL_P2_INTHING);
	    if (bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
	      YYACCEPT;
	  }
#line 3475 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 538 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->m2flags, RWL_P2_INTHING); 
	    if (bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
	      YYACCEPT;
	  }
#line 3485 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 558 "rwlparser.y" /* yacc.c:1646  */
    { rwlprintallvars(rwm); }
#line 3491 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 570 "rwlparser.y" /* yacc.c:1646  */
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
#line 3510 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 586 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->raname = rwm->inam;
	      bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	      bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	      rwm->ravarn = rwladdvar(rwm, rwm->inam, RWL_TYPE_RAST, 0);
	      rwlrastbeg(rwm, rwm->raname, RWL_TYPE_RAST);
	    }
#line 3522 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 595 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->raname = rwm->inam;
	      bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	      rwm->ravarn = rwladdvar(rwm, rwm->inam, RWL_TYPE_RAST, 0);
	      rwlrastbeg(rwm, rwm->raname, RWL_TYPE_RAST);
	    }
#line 3533 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 603 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->raname = rwm->inam;
	      bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	      bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	      rwm->ravarn = rwladdvar(rwm, rwm->inam, RWL_TYPE_RAPROC, 0);
	      rwlrastbeg(rwm, rwm->raname, RWL_TYPE_RAPROC);
	    }
#line 3545 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 612 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->raname = rwm->inam;
	      rwm->ravarn = rwladdvar(rwm, rwm->inam, RWL_TYPE_RAPROC, 0);
	      rwlrastbeg(rwm, rwm->raname, RWL_TYPE_RAPROC);
	    }
#line 3555 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 623 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlrastfin(rwm, rwm->raname, (sb4) rwm->ravarn);
	    }
#line 3563 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 627 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlcancelvar(rwm, rwm->raname, (sb4) rwm->ravarn);
	      rwlrastclear(rwm);
	      rwlerror(rwm, RWL_ERROR_DECL_RAST); 
	      yyerrok;
	    }
#line 3574 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 640 "rwlparser.y" /* yacc.c:1646  */
    {rwm->raentry = rwm->sval; }
#line 3580 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 642 "rwlparser.y" /* yacc.c:1646  */
    {rwlrastadd(rwm, rwm->raentry, rwm->pval.dval); }
#line 3586 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 648 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlrastfin(rwm, rwm->raname, (sb4) rwm->ravarn);
	    }
#line 3594 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 652 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlcancelvar(rwm, rwm->raname, (sb4) rwm->ravarn);
	      rwlrastclear(rwm);
	      rwlerror(rwm, RWL_ERROR_DECL_RAPROC); 
	      yyerrok;
	    }
#line 3605 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 664 "rwlparser.y" /* yacc.c:1646  */
    {rwm->raentry = rwm->inam; }
#line 3611 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 666 "rwlparser.y" /* yacc.c:1646  */
    {rwlrastadd(rwm, rwm->raentry, rwm->pval.dval); }
#line 3617 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 671 "rwlparser.y" /* yacc.c:1646  */
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
#line 3638 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 688 "rwlparser.y" /* yacc.c:1646  */
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
#line 3698 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 744 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DATABASE_WRONG); yyerrok; }
#line 3704 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 750 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
	        if (rwm->dbsav->username)
		  rwlerror(rwm, RWL_ERROR_DBSPEC_ALREADY, "username");
		else
		  rwm->dbsav->username = rwlstrdup(rwm, rwm->pval.sval);
	      }
	    }
#line 3718 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 770 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
	        if (rwm->dbsav->username)
		  rwlerror(rwm, RWL_ERROR_DBSPEC_ALREADY, "username");
		else
		  rwm->dbsav->username = rwlstrdup(rwm, rwm->pval.sval);
	      }
	    }
#line 3732 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 780 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	        rwm->dbsav->password = rwlstrdup(rwm, rwm->pval.sval);
	    }
#line 3741 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 785 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwlcclassgood(rwm, (rwm->pval.sval)))
	      { 
	        if (rwm->dbsav)
		  rwm->dbsav->cclass = rwlstrdup(rwm, rwm->pval.sval);
	      }
	    }
#line 3753 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 793 "rwlparser.y" /* yacc.c:1646  */
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
#line 3770 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 806 "rwlparser.y" /* yacc.c:1646  */
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
#line 3805 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 837 "rwlparser.y" /* yacc.c:1646  */
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
#line 3820 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 848 "rwlparser.y" /* yacc.c:1646  */
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
#line 3873 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 897 "rwlparser.y" /* yacc.c:1646  */
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
#line 3891 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 913 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      { 
		rwm->dbsav->stmtcache = rwlcheckminval(rwm->mxq, 0, rwm->pval.ival
		  , 0, RWL_DEFAULT_STMTCACHE, (text *)"cursorcache");
		bis(rwm->dbsav->flags, RWL_DB_CCACHUSER);
	      }
	    }
#line 3904 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 922 "rwlparser.y" /* yacc.c:1646  */
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
#line 3922 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 939 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
		if (rwm->dbsav->pooltype)
		  rwlerror(rwm, RWL_ERROR_DBPOOL_ALREADY);
	        rwm->dbsav->pooltype = RWL_DBPOOL_POOLED;
		rwm->dbsav->pooltext = "drcp pooled";
	      }
	    }
#line 3936 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 949 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
		if (rwm->dbsav->pooltype)
		  rwlerror(rwm, RWL_ERROR_DBPOOL_ALREADY);
	        rwm->dbsav->pooltype = RWL_DBPOOL_DEDICATED;
		rwm->dbsav->pooltext = "dedicated";
	      }
	    }
#line 3950 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 959 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
		if (rwm->dbsav->pooltype)
		  rwlerror(rwm, RWL_ERROR_DBPOOL_ALREADY);
	        rwm->dbsav->pooltype = RWL_DBPOOL_RETHRDED;
		rwm->dbsav->pooltext = "threads dedicated";
	      }
	    }
#line 3964 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 969 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
		if (rwm->dbsav->pooltype)
		  rwlerror(rwm, RWL_ERROR_DBPOOL_ALREADY);
	        rwm->dbsav->pooltype = RWL_DBPOOL_RECONNECT;
		rwm->dbsav->pooltext = "reconnect";
	      }
	    }
#line 3978 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 986 "rwlparser.y" /* yacc.c:1646  */
    {
#if (RWL_OCI_VERSION<12)
	    rwlerror(rwm, RWL_ERROR_NOT_SUPPORTED_IN_VERSION, "statemark",RWL_OCI_VERSION);
#else
	    bis(rwm->dbsav->flags,RWL_DB_STATEMARK);
#endif
	  }
#line 3990 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 994 "rwlparser.y" /* yacc.c:1646  */
    {
#if (RWL_OCI_VERSION<12)
	    rwlerror(rwm, RWL_ERROR_NOT_SUPPORTED_IN_VERSION, "requestmark",RWL_OCI_VERSION);
#else
	    bis(rwm->dbsav->flags,RWL_DB_REQMARK);
#endif
	  }
#line 4002 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 1004 "rwlparser.y" /* yacc.c:1646  */
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
#line 4017 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 1015 "rwlparser.y" /* yacc.c:1646  */
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
#line 4033 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 1031 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      { 
		rwm->dbsav->ptimeout = rwlcheckminval(rwm->mxq, 0, rwm->pval.ival
		  , RWL_DBPOOL_CONNECT==rwm->dbsav->pooltype ? 0: 1
		  , RWL_DBPOOL_DEFAULT_TIMEOUT, (text *)"release timeout");
	      }
	    }
#line 4046 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 1044 "rwlparser.y" /* yacc.c:1646  */
    { 
#if (OCI_MAJOR_VERSION >= 12)
	      if (rwm->dbsav && rwm->pval.dval >= 0)
		rwm->dbsav->wtimeout = rwm->pval.dval;
#else
	    rwlerror(rwm, RWL_ERROR_NOT_YET_IMPL, "sessionpool wait attribute");
#endif
	    }
#line 4059 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 1058 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->dbsav && rwm->pval.dval >= 0)
	      bis(rwm->dbsav->flags, RWL_DB_SPTOBREAK);
	  }
#line 4068 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 1063 "rwlparser.y" /* yacc.c:1646  */
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
#line 4083 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 1074 "rwlparser.y" /* yacc.c:1646  */
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
#line 4099 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 1091 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprimmed(rwm);
	  }
#line 4107 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 1098 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprimmed(rwm);
	  }
#line 4115 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 1114 "rwlparser.y" /* yacc.c:1646  */
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
#line 4131 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 1126 "rwlparser.y" /* yacc.c:1646  */
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
#line 4150 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 1142 "rwlparser.y" /* yacc.c:1646  */
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
#line 4186 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 1178 "rwlparser.y" /* yacc.c:1646  */
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
#line 4201 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 1189 "rwlparser.y" /* yacc.c:1646  */
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
#line 4217 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 1202 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwm->mxq->evar[rwm->codeguess].v2val = rwm->facnt;
	      rwm->supsemerr = RWL_SUPSEM_PROC;
	    }
#line 4226 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 1210 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 4235 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 1215 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 4243 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 1222 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 4252 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 1227 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 4260 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 1234 "rwlparser.y" /* yacc.c:1646  */
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
#line 4346 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 1324 "rwlparser.y" /* yacc.c:1646  */
    {
          sb4 l = rwlfindvar(rwm->mxq, rwm->inam, RWL_VAR_NOGUESS);
          if (l>=0)
            rwlprintvar(rwm->mxq, l);
          }
#line 4356 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 1332 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m3flags, RWL_P3_MISBRACK); }
#line 4362 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 1333 "rwlparser.y" /* yacc.c:1646  */
    { bic(rwm->m3flags, RWL_P3_MISBRACK); }
#line 4368 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 1336 "rwlparser.y" /* yacc.c:1646  */
    { if (!bit(rwm->m2flags, RWL_P2_NOWARNDEP)) rwlerror(rwm, RWL_ERROR_MISSING_DECL_BRACK); }
#line 4374 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 1348 "rwlparser.y" /* yacc.c:1646  */
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
#line 4402 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 1376 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_INT; bic(rwm->addvarbits,RWL_IDENT_THRSPEC); }
#line 4408 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 1378 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_DBL; bic(rwm->addvarbits,RWL_IDENT_THRSPEC); }
#line 4414 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 1380 "rwlparser.y" /* yacc.c:1646  */
    { rwm->declslen=RWL_DEFAULT_STRLEN; rwm->dtype=RWL_TYPE_STR; bic(rwm->addvarbits,RWL_IDENT_THRSPEC); }
#line 4420 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 1382 "rwlparser.y" /* yacc.c:1646  */
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
#line 4439 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 1397 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwm->dtype = 0;
	      rwlerror(rwm, RWL_ERROR_BAD_ARGUMENT_TYPE, "file");
	    }
#line 4448 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 1402 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwm->dtype = 0;
	      rwlerror(rwm, RWL_ERROR_BAD_ARGUMENT_TYPE, "sql");
	    }
#line 4457 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 1407 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwm->dtype = 0;
	      rwlerror(rwm, RWL_ERROR_BAD_ARGUMENT_TYPE, "clob");
	    }
#line 4466 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 1416 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m4flags,RWL_P4_STATSONLY); }
#line 4472 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 1418 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m4flags,RWL_P4_PROCHASSQL); }
#line 4478 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 1420 "rwlparser.y" /* yacc.c:1646  */
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
#line 4498 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1440 "rwlparser.y" /* yacc.c:1646  */
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
#line 4516 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 1455 "rwlparser.y" /* yacc.c:1646  */
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
#line 4534 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 1470 "rwlparser.y" /* yacc.c:1646  */
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
#line 4553 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 1486 "rwlparser.y" /* yacc.c:1646  */
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
#line 4573 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 1529 "rwlparser.y" /* yacc.c:1646  */
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
#line 4590 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1543 "rwlparser.y" /* yacc.c:1646  */
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
#line 4608 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 1557 "rwlparser.y" /* yacc.c:1646  */
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
#line 4626 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1571 "rwlparser.y" /* yacc.c:1646  */
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
#line 4642 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 1583 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    }
#line 4650 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1586 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_UNIFORM); }
#line 4656 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 1587 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LOGB); }
#line 4662 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1588 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LOG); }
#line 4668 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1589 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_EXPB); }
#line 4674 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1590 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_EXP); }
#line 4680 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1591 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_CEIL); }
#line 4686 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1592 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_TRUNC); }
#line 4692 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1593 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_FLOOR); }
#line 4698 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1594 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ROUND); }
#line 4704 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1595 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SQRT); }
#line 4710 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1596 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SIN); }
#line 4716 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1597 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_COS); }
#line 4722 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1598 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ATAN2); }
#line 4728 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1599 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LENGTHB); }
#line 4734 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1601 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_INSTRB2); }
#line 4740 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1603 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_INSTRB3); }
#line 4746 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1605 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SUBSTRB2); }
#line 4752 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1607 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SUBSTRB3); }
#line 4758 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1608 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_GETENV); }
#line 4764 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1609 "rwlparser.y" /* yacc.c:1646  */
    { 
						    if (bit(rwm->m4flags, RWL_P4_SLASHCONVERT)) rwlexprpush0(rwm,RWL_STACK_WINSLASHF2B);
						  }
#line 4772 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1612 "rwlparser.y" /* yacc.c:1646  */
    { 
						    if (bit(rwm->m4flags, RWL_P4_SLASHCONVERT)) rwlexprpush0(rwm,RWL_STACK_WINSLASHF2BB);
						  }
#line 4780 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1615 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SYSTEM); }
#line 4786 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1617 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprpush(rwm,rwm->inam ,RWL_STACK_SYSTEM2STR);
	  }
#line 4794 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1621 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_SYSTEM_BAD); yyerrok;
	    rwlexprpush0(rwm,RWL_STACK_SYSTEM);
	  }
#line 4803 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1625 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ERLANG); }
#line 4809 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1626 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ERLANG2); }
#line 4815 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1628 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ERLANGK); }
#line 4821 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1630 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_NORMALRANDOM); }
#line 4827 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1631 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ISNULL); }
#line 4833 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1633 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ACCESS); }
#line 4839 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1635 "rwlparser.y" /* yacc.c:1646  */
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
#line 4854 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1646 "rwlparser.y" /* yacc.c:1646  */
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
#line 4869 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1657 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprpush(rwm, rwm->inam, RWL_STACK_SERVERRELEASE);
	  }
#line 4877 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1661 "rwlparser.y" /* yacc.c:1646  */
    {
	    // push RWL_T_NULL to make exprfinish work
	    rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    rwlerror(rwm, RWL_ERROR_DBFUN_NEED_IDENT, "serverrelease"); yyerrok;
	  }
#line 4887 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1667 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprpush(rwm, rwm->inam, RWL_STACK_OPENSESSIONCOUNT);
	  }
#line 4895 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1671 "rwlparser.y" /* yacc.c:1646  */
    {
	    // push RWL_T_NULL to make exprfinish work
	    rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    rwlerror(rwm, RWL_ERROR_DBFUN_NEED_IDENT, "opensessioncount"); yyerrok;
	  }
#line 4905 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1677 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprpush(rwm, rwm->inam, RWL_STACK_ACTIVESESSIONCOUNT);
	  }
#line 4913 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1681 "rwlparser.y" /* yacc.c:1646  */
    {
	    // push RWL_T_NULL to make exprfinish work
	    rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    rwlerror(rwm, RWL_ERROR_DBFUN_NEED_IDENT, "activesessioncount"); yyerrok;
	  }
#line 4923 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1687 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->sqname)
	      rwlexprpush(rwm, rwm->sqname, RWL_STACK_SQL_ID);
	  }
#line 4932 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1692 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprpush(rwm, rwm->inam, RWL_STACK_SQL_ID);
	  }
#line 4940 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1696 "rwlparser.y" /* yacc.c:1646  */
    {
	    // push RWL_T_NULL to make exprfinish work
	    rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    rwlerror(rwm, RWL_ERROR_SQLID_NEED_IDENT); yyerrok;
	  }
#line 4950 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1703 "rwlparser.y" /* yacc.c:1646  */
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
#line 4967 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1717 "rwlparser.y" /* yacc.c:1646  */
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
#line 4983 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1729 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (!bit(rwm->m2flags, RWL_P2_NOWARNDEP) && bit(rwm->m3flags,RWL_P3_MISBRACK))
	      rwlerror(rwm, RWL_ERROR_MISSING_EMPTY_BRACKETS, "runseconds");
	    rwlexprpush(rwm, 0, RWL_STACK_RUNSECONDS);
	  }
#line 4993 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1735 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (!bit(rwm->m2flags, RWL_P2_NOWARNDEP) && bit(rwm->m3flags,RWL_P3_MISBRACK))
	      rwlerror(rwm, RWL_ERROR_MISSING_EMPTY_BRACKETS, "epochseconds");
	    rwlexprpush(rwm, 0, RWL_STACK_EPOCHSECONDS);
	  }
#line 5003 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1754 "rwlparser.y" /* yacc.c:1646  */
    { rwm->aacnt[rwm->furlev]++; }
#line 5009 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1760 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ISNULL); }
#line 5015 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1761 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ISNOTNULL); }
#line 5021 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1767 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_MINUS); }
#line 5027 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1768 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_NOT); }
#line 5033 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1769 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_NOT); }
#line 5039 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1774 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_MUL); }
#line 5045 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1775 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_DIV); }
#line 5051 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1776 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_MOD); }
#line 5057 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1781 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ADD); }
#line 5063 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1782 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SUB); }
#line 5069 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1787 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LESS); }
#line 5075 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1788 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_GREATER); }
#line 5081 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1789 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LESSEQ); }
#line 5087 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1790 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_GREATEREQ); }
#line 5093 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1791 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_BETWEEN); }
#line 5099 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1796 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_EQUAL); }
#line 5105 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1797 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_NOTEQUAL); }
#line 5111 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1803 "rwlparser.y" /* yacc.c:1646  */
    { 
	    // With AND (and OR) skipdep is used to mark
	    // the expression element we need to skip until
	    // in case the first condition is false (true for OR)
	    rwm->ptail->branchtype = RWL_EXP_ANDBRANCH;
	    if (rwm->skipdep++ >= UB1MAXVAL)
	      rwlsevere(rwm, "[rwlparser-andskip:%d]", rwm->skipdep);
	    rwm->ptail->skipnxt = rwm->skipdep;
	  }
#line 5125 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1813 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprpush2(rwm,0,RWL_STACK_AND, rwm->skipdep);
	    rwm->skipdep--;
	  }
#line 5134 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1822 "rwlparser.y" /* yacc.c:1646  */
    {  
	    // see comment above
	    rwm->ptail->branchtype = RWL_EXP_ORBRANCH;
	    if (rwm->skipdep++ >= UB1MAXVAL)
	      rwlsevere(rwm, "[rwlparser-orskip:%d]", rwm->skipdep);
	    rwm->ptail->skipnxt = rwm->skipdep;
	  }
#line 5146 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1830 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprpush2(rwm,0,RWL_STACK_OR ,rwm->skipdep);
	    rwm->skipdep--;
	  }
#line 5155 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1839 "rwlparser.y" /* yacc.c:1646  */
    {  
	    // With conditional execution we mark the condition
	    // with RWL_EXP_CONDBRANCH1
	    rwm->ptail->branchtype = RWL_EXP_CONDBRANCH1;
	    if (rwm->skipdep++ >= UB1MAXVAL)
	      rwlsevere(rwm, "[rwlparser-condskip:%d]", rwm->skipdep);
	    rwm->ptail->skipnxt = rwm->skipdep;
	  }
#line 5168 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1848 "rwlparser.y" /* yacc.c:1646  */
    {
	    // and the place of ':' (really ELSE) with 
	    // RWL_EXP_CONDBRANCH2
	    rwm->ptail->branchtype = RWL_EXP_CONDBRANCH2;
	    rwm->ptail->skipnxt = rwm->skipdep;
	  }
#line 5179 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1855 "rwlparser.y" /* yacc.c:1646  */
    {  
	    // And the actual conditional is the "end if" place
	    rwlexprpush2(rwm,0,RWL_STACK_CONDITIONAL, rwm->skipdep);
	    rwm->skipdep--;
	  }
#line 5189 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1864 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_CONCAT); }
#line 5195 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1869 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_CONCAT); }
#line 5201 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1880 "rwlparser.y" /* yacc.c:1646  */
    { rwm->supsemerr = 0; }
#line 5207 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1885 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
	    {
	      rwm->ifdirdep = 0; // since we may be skipping over $else, $endif
	      YYACCEPT;
	    }
	  }
#line 5219 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1893 "rwlparser.y" /* yacc.c:1646  */
    { yyerrok; }
#line 5225 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1895 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_COMMAND_NOT_LOCAL, "threads"); yyerrok; }
#line 5231 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1902 "rwlparser.y" /* yacc.c:1646  */
    { yyerrok; }
#line 5237 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1904 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_COMMAND_NOT_LOCAL, "run"); yyerrok; }
#line 5243 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1908 "rwlparser.y" /* yacc.c:1646  */
    { yyerrok; }
#line 5249 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1910 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_NOT_LOCAL, "database"); yyerrok; }
#line 5255 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1912 "rwlparser.y" /* yacc.c:1646  */
    { yyerrok ; }
#line 5261 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1915 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_NOT_LOCAL, "random procedure array"); yyerrok; }
#line 5267 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1918 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_NOT_LOCAL, "random string array"); yyerrok; }
#line 5273 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1923 "rwlparser.y" /* yacc.c:1646  */
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
#line 5306 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1952 "rwlparser.y" /* yacc.c:1646  */
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
#line 5325 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1973 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_LOB); yyerrok; }
#line 5331 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 1980 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_INT); yyerrok; }
#line 5337 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1986 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_DBL); yyerrok; }
#line 5343 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 1988 "rwlparser.y" /* yacc.c:1646  */
    { 
		rwm->declslen=RWL_DEFAULT_STRLEN;
	      }
#line 5351 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 1994 "rwlparser.y" /* yacc.c:1646  */
    {
	      if (RWL_TYPE_CANCELLED == rwm->pval.vtype)
		rwm->declslen = 1; // kind of a kludge, but this prevents doube
				   // error reporting if using local variable
	      else
	      {
		rwm->declslen = rwm->pval.ival;
	      }
	    }
#line 5365 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 2008 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_STR); yyerrok; }
#line 5371 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 2010 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dtype=RWL_TYPE_FILE;
	    //if (rwm->codename)
	    //  rwlerror(rwm, RWL_ERROR_NOT_LOCAL, "file");
	  }
#line 5381 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 2019 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_FILE); yyerrok; }
#line 5387 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 2024 "rwlparser.y" /* yacc.c:1646  */
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
#line 5412 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 2047 "rwlparser.y" /* yacc.c:1646  */
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
#line 5439 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 2071 "rwlparser.y" /* yacc.c:1646  */
    { if (!rwm->rslerror) rwlcodeadd0(rwm, RWL_CODE_ELSE); }
#line 5445 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 2074 "rwlparser.y" /* yacc.c:1646  */
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
#line 5470 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 2097 "rwlparser.y" /* yacc.c:1646  */
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
#line 5511 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 2138 "rwlparser.y" /* yacc.c:1646  */
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
#line 5583 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 2207 "rwlparser.y" /* yacc.c:1646  */
    { 
		  rwlerror(rwm, RWL_ERROR_LOOP);
		  rwm->rsllityp[rwm->rsldepth] = RWL_LI_BAD;
		  yyerrok;
		}
#line 5593 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 2214 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SYSTEM); }
#line 5599 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 2217 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprpush(rwm,rwm->inam ,RWL_STACK_SYSTEM2STR);
	  }
#line 5607 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 2222 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_SYSTEM_BAD); yyerrok;
	    rwlexprclear(rwm);
	  }
#line 5616 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 2227 "rwlparser.y" /* yacc.c:1646  */
    {
		/* start a dummy assignment such that expression gets executed */
		rwm->assignvar = RWL_DUMMY_VAR;
		rwm->assignoper = RWL_T_ASSIGN;
		rwlexprbeg(rwm);
	      }
#line 5627 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 2236 "rwlparser.y" /* yacc.c:1646  */
    {
		/* start expression for assign */
		rwm->assignvar = rwm->inam;
		rwlexprbeg(rwm);
	      }
#line 5637 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 2245 "rwlparser.y" /* yacc.c:1646  */
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
#line 5653 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 2257 "rwlparser.y" /* yacc.c:1646  */
    {
	        rwm->assignvar = rwm->codename;
		rwlexprbeg(rwm);
	      }
#line 5662 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 2262 "rwlparser.y" /* yacc.c:1646  */
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
#line 5695 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 2291 "rwlparser.y" /* yacc.c:1646  */
    { 
		  rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		  rwlexprclear(rwm);
		  yyerrok;
		}
#line 5705 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 2298 "rwlparser.y" /* yacc.c:1646  */
    {
	        rwm->assignvar = rwm->codename;
		rwlexprbeg(rwm);
	      }
#line 5714 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 2303 "rwlparser.y" /* yacc.c:1646  */
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
#line 5747 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 2333 "rwlparser.y" /* yacc.c:1646  */
    { 
		  rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		  rwlexprclear(rwm);
		  yyerrok;
		}
#line 5757 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 2341 "rwlparser.y" /* yacc.c:1646  */
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
#line 5775 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 2355 "rwlparser.y" /* yacc.c:1646  */
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
#line 5790 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 2369 "rwlparser.y" /* yacc.c:1646  */
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
#line 5808 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 2385 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (!rwm->codename)
	    {
	      rwlerror(rwm, RWL_ERROR_NOT_DONE_IN_MAIN, "modify database leak");
	      goto dontmoddbpool;
	    }
	    else
	      rwlcodeadd0(rwm, RWL_CODE_MODDBLEAK);
	  }
#line 5822 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 2396 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->codename)
	      rwlcodeadd0(rwm, RWL_CODE_SESRELDROP);
	  }
#line 5831 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 2402 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->codename)
	      rwlcodeadd0(rwm, RWL_CODE_SESRELDROP);
	  }
#line 5840 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 2408 "rwlparser.y" /* yacc.c:1646  */
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
#line 5855 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 2420 "rwlparser.y" /* yacc.c:1646  */
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
#line 5870 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 2432 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->codename)
	      rwlcodeadd0(rwm, RWL_CODE_SHIFT);
	    else
	      if (!bit(rwm->m2flags, RWL_P2_NOEXEC))
		rwlshiftdollar(rwm->mxq, &rwm->loc);
	  }
#line 5882 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 2441 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->codename)
	      rwlcodeadd0(rwm, RWL_CODE_GETRUSAGE);
	    else
	      if (!bit(rwm->m2flags, RWL_P2_NOEXEC))
		rwlgetrusage(rwm->mxq, 0);
	  }
#line 5894 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 2450 "rwlparser.y" /* yacc.c:1646  */
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
#line 5909 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 2463 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_MODIFY); yyerrok; }
#line 5915 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 2468 "rwlparser.y" /* yacc.c:1646  */
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
#line 5949 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 2500 "rwlparser.y" /* yacc.c:1646  */
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
#line 6038 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 2585 "rwlparser.y" /* yacc.c:1646  */
    {
	      /* This code can cause lookahead */
	      rwlerror(rwm, RWL_ERROR_BAD_ARG_LIST);
	      rwlexprclear(rwm);
	      yyerrok;
	    }
#line 6049 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 2592 "rwlparser.y" /* yacc.c:1646  */
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
#line 6068 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 2611 "rwlparser.y" /* yacc.c:1646  */
    { rwm->supsemerr = RWL_SUPSEM_EMBSQL; }
#line 6074 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 2617 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m3flags, RWL_P3_IMMPARSEFOR); }
#line 6080 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 2619 "rwlparser.y" /* yacc.c:1646  */
    { bic(rwm->m3flags, RWL_P3_IMMPARSEFOR); }
#line 6086 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 2625 "rwlparser.y" /* yacc.c:1646  */
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
#line 6173 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 2710 "rwlparser.y" /* yacc.c:1646  */
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
#line 6206 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 2740 "rwlparser.y" /* yacc.c:1646  */
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
#line 6242 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 2773 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_NO_FILE_FOR_FFLUSH);
	    yyerrok;
	  }
#line 6251 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 2780 "rwlparser.y" /* yacc.c:1646  */
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
#line 6278 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 2805 "rwlparser.y" /* yacc.c:1646  */
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
#line 6311 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 2836 "rwlparser.y" /* yacc.c:1646  */
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
#line 6334 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 2864 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_FILE_FOR_WRITE);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6345 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 2873 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_STRING_FOR_SPRINTF);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6356 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 2882 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6367 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 2892 "rwlparser.y" /* yacc.c:1646  */
    {
	      // Note that we do not document this syntax without comma
	      if (rwm->filenam)
		rwlerror(rwm, RWL_ERROR_COMMA_IS_RECOMMENDED, rwm->filenam
		, bit(rwm->mflags,RWL_P_PRINTLINE) ? "writeline" : "write");
	    }
#line 6378 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 2904 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6389 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 2912 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_FILE_FOR_WRITE);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6400 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 2920 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_FILE_FOR_WRITE);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6411 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 2928 "rwlparser.y" /* yacc.c:1646  */
    { 
		if (rwm->codename)
		  rwlcodeadd0(rwm, RWL_CODE_NEWLINE);
		else
		  fputs(bit(rwm->m4flags, RWL_P4_CRNLWRITELINE) ? "\r\n" : "\n", stdout);
		bic(rwm->mflags,RWL_P_PRINTLINE|RWL_P_PRINTBLANK);
	      }
#line 6423 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 2938 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6434 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 2946 "rwlparser.y" /* yacc.c:1646  */
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
#line 6449 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 2957 "rwlparser.y" /* yacc.c:1646  */
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
#line 6488 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 2993 "rwlparser.y" /* yacc.c:1646  */
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
#line 6528 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 3030 "rwlparser.y" /* yacc.c:1646  */
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
#line 6571 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 330:
#line 3070 "rwlparser.y" /* yacc.c:1646  */
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
#line 6592 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 3087 "rwlparser.y" /* yacc.c:1646  */
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
#line 6617 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 3110 "rwlparser.y" /* yacc.c:1646  */
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
#line 6639 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 3129 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlerror(rwm, RWL_ERROR_UNEXPECTED_AFTER_IDENTIFIER);
	      yyerrok;
	    }
#line 6648 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 3136 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_MISSING_SEMICOLON); yyerrok; }
#line 6654 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 3142 "rwlparser.y" /* yacc.c:1646  */
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
#line 6682 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 336:
#line 3166 "rwlparser.y" /* yacc.c:1646  */
    {
	  rwm->lobwritedata = rwlexprfinish(rwm);
	  rwm->loboffset = 0;
	}
#line 6691 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 338:
#line 3175 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->loboffset = rwlexprfinish(rwm);
	  }
#line 6699 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 339:
#line 3182 "rwlparser.y" /* yacc.c:1646  */
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
#line 6726 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 340:
#line 3205 "rwlparser.y" /* yacc.c:1646  */
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
#line 6752 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 342:
#line 3231 "rwlparser.y" /* yacc.c:1646  */
    {
	  rwm->lobreadlength = rwlexprfinish(rwm);
	}
#line 6760 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 343:
#line 3235 "rwlparser.y" /* yacc.c:1646  */
    {
	  rwm->loboffset = rwlexprfinish(rwm);
	}
#line 6768 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 3241 "rwlparser.y" /* yacc.c:1646  */
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
#line 6918 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 345:
#line 3391 "rwlparser.y" /* yacc.c:1646  */
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
#line 7032 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 346:
#line 3503 "rwlparser.y" /* yacc.c:1646  */
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
#line 7069 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 347:
#line 3539 "rwlparser.y" /* yacc.c:1646  */
    {  
	    // This syntax is not documented
	    bic(rwm->m3flags, RWL_P3_CLHEADFOR);
	    rwlerror(rwm, RWL_ERROR_LEGACY_CONTROLLOOP_SYNTAX);
	  }
#line 7079 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 348:
#line 3544 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m3flags, RWL_P3_CLHEADFOR); }
#line 7085 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 3548 "rwlparser.y" /* yacc.c:1646  */
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
#line 7102 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 350:
#line 3564 "rwlparser.y" /* yacc.c:1646  */
    { if (bit(rwm->m3flags, RWL_P3_CLHEADFOR))
	      rwlerror(rwm, RWL_ERROR_MIX_LEGACY_CLOOP);
	  }
#line 7110 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 351:
#line 3568 "rwlparser.y" /* yacc.c:1646  */
    { if (bit(rwm->m3flags, RWL_P3_CLHEADFOR))
	      rwlerror(rwm, RWL_ERROR_MIX_LEGACY_CLOOP);
	  }
#line 7118 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 352:
#line 3572 "rwlparser.y" /* yacc.c:1646  */
    { if (!bit(rwm->m3flags, RWL_P3_CLHEADFOR))
	      rwlerror(rwm, RWL_ERROR_MIX_LEGACY_CLOOP);
	  }
#line 7126 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 355:
#line 3583 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7132 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 356:
#line 3585 "rwlparser.y" /* yacc.c:1646  */
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
#line 7149 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 357:
#line 3597 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7155 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 3599 "rwlparser.y" /* yacc.c:1646  */
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
#line 7174 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 3613 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7180 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 3615 "rwlparser.y" /* yacc.c:1646  */
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
#line 7199 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 361:
#line 3629 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7205 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 362:
#line 3631 "rwlparser.y" /* yacc.c:1646  */
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
#line 7222 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 363:
#line 3643 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7228 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 364:
#line 3645 "rwlparser.y" /* yacc.c:1646  */
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
#line 7258 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 365:
#line 3674 "rwlparser.y" /* yacc.c:1646  */
    { rwm->ynqueue = 0; }
#line 7264 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 366:
#line 3675 "rwlparser.y" /* yacc.c:1646  */
    { rwm->ynqueue = RWL_QUEUE_EVERY; }
#line 7270 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 367:
#line 3676 "rwlparser.y" /* yacc.c:1646  */
    { rwm->ynqueue = RWL_NOQUEUE_EVERY; }
#line 7276 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 368:
#line 3680 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->scname = rwm->inam; 
	    bic(rwm->m2flags, RWL_P2_AT|RWL_P2_ATDEFAULT);
	  }
#line 7285 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 369:
#line 3685 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->scname = rwm->inam;
	    bic(rwm->m2flags, RWL_P2_AT|RWL_P2_ATDEFAULT);
	  }
#line 7294 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 370:
#line 3690 "rwlparser.y" /* yacc.c:1646  */
    { 
	      bis(rwm->m2flags, RWL_P2_ATDEFAULT);
	    }
#line 7302 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 371:
#line 3694 "rwlparser.y" /* yacc.c:1646  */
    {
	      bic(rwm->m2flags, RWL_P2_AT|RWL_P2_ATDEFAULT);
	      // lookahead may have consumed the next identifier
	      rwm->scname = (yychar == RWL_T_IDENTIFIER)
	        ? rwm->previnam
	        : rwm->inam;
	    }
#line 7314 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 372:
#line 3702 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->dbname = rwm->inam; 
	      bis(rwm->m2flags, RWL_P2_AT);
	    }
#line 7323 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 373:
#line 3711 "rwlparser.y" /* yacc.c:1646  */
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
#line 7342 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 374:
#line 3726 "rwlparser.y" /* yacc.c:1646  */
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
#line 7374 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 375:
#line 3758 "rwlparser.y" /* yacc.c:1646  */
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
#line 7392 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 376:
#line 3773 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->m3flags, RWL_P3_IMMEDSQL); 
	    bis(rwm->sqsav->flags, RWL_SQLFLAG_IBUSE);
	    bis(rwm->sqsav->flags, RWL_SQLFLAG_IDUSE);
	    if (bit(rwm->m3flags,RWL_P3_IMPLCASE))
	      bis(rwm->sqsav->flags, RWL_SQLFLAG_ICASE);
	  }
#line 7404 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 377:
#line 3782 "rwlparser.y" /* yacc.c:1646  */
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
#line 7445 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 379:
#line 3820 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_SQL_WRONG) ;
	    yyerrok;
	  }
#line 7454 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 381:
#line 3828 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7460 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 382:
#line 3829 "rwlparser.y" /* yacc.c:1646  */
    {
	    if ((rwm->msqlstk = rwlexprfinish(rwm)))
	      bis(rwm->m3flags, RWL_P3_IMMISDYN); // now dynamic
	    else
	    {
	      rwm->mxq->evar[rwm->sqsavvarn].vtype = RWL_TYPE_CANCELLED;
	      rwm->mxq->evar[rwm->sqsavvarn].stype = "cancelled (sql)";
	    }
	  }
#line 7474 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 383:
#line 3841 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->sqllino = rwm->loc.lineno;
	  }
#line 7482 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 387:
#line 3850 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "sql") ;
	  }
#line 7490 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 390:
#line 3861 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bis(rwm->m2flags, RWL_P2_ATDEFAULT);
	  }
#line 7498 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 391:
#line 3865 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dbname = rwm->inam; 
	    bis(rwm->m2flags, RWL_P2_AT);
	  }
#line 7507 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 392:
#line 3873 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->m2flags, RWL_P2_AT|RWL_P2_ATDEFAULT);
	  }
#line 7515 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 393:
#line 3877 "rwlparser.y" /* yacc.c:1646  */
    { 
	      bis(rwm->m2flags, RWL_P2_ATDEFAULT);
	    }
#line 7523 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 394:
#line 3881 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->dbname = rwm->inam; 
	      bis(rwm->m2flags, RWL_P2_AT);
	    }
#line 7532 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 396:
#line 3891 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->dbname = 0;
	      bis(rwm->m2flags, RWL_P2_ATDEFAULT); /* explict choose standard DB */
	    }
#line 7541 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 397:
#line 3897 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->dbname = rwm->inam;
	      bis(rwm->m2flags, RWL_P2_AT); /* named DB */
	    }
#line 7550 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 398:
#line 3902 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_NO_DATABASE_NAME); yyerrok; }
#line 7556 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 399:
#line 3904 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_MISSING_SEMICOLON); yyerrok; }
#line 7562 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 402:
#line 3912 "rwlparser.y" /* yacc.c:1646  */
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
#line 7592 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 403:
#line 3938 "rwlparser.y" /* yacc.c:1646  */
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
#line 7669 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 405:
#line 4015 "rwlparser.y" /* yacc.c:1646  */
    {
		  rwm->assignvar = rwm->inam;
		  rwlexprbeg(rwm);
		}
#line 7678 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 406:
#line 4020 "rwlparser.y" /* yacc.c:1646  */
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
#line 7729 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 411:
#line 4083 "rwlparser.y" /* yacc.c:1646  */
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
#line 7748 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 412:
#line 4098 "rwlparser.y" /* yacc.c:1646  */
    {
              rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
              rwlexprclear(rwm);
              rwm->rslerror++; // to prevent attempting else/endif code generation
              yyerrok;
            }
#line 7759 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 413:
#line 4107 "rwlparser.y" /* yacc.c:1646  */
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
#line 7778 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 414:
#line 4122 "rwlparser.y" /* yacc.c:1646  */
    {
              rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
              rwlexprclear(rwm);
              rwm->rslerror++; // to prevent attempting else/endif code generation
              yyerrok;
            }
#line 7789 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 415:
#line 4131 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_LEGACY_WHILE_SYNTAX);
	  }
#line 7797 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 416:
#line 4135 "rwlparser.y" /* yacc.c:1646  */
    {
	    bis(rwm->rslflags[rwm->rsldepth], RWL_RSLFLAG_WHILOP);
	  }
#line 7805 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 417:
#line 4141 "rwlparser.y" /* yacc.c:1646  */
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
#line 7826 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 418:
#line 4158 "rwlparser.y" /* yacc.c:1646  */
    {
              rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
              rwlexprclear(rwm);
              rwm->rslerror++; // to prevent attempting else/endif code generation
              yyerrok;
            }
#line 7837 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 419:
#line 4165 "rwlparser.y" /* yacc.c:1646  */
    {
              rwlerror(rwm, RWL_ERROR_UNEXPECTED_KEYWORD, "loop");
              rwlexprclear(rwm);
              rwm->rslerror++; // to prevent attempting else/endif code generation
              yyerrok;
            }
#line 7848 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 424:
#line 4182 "rwlparser.y" /* yacc.c:1646  */
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
#line 7868 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 425:
#line 4198 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (rwm->codename)
	      rwlerror(rwm, RWL_ERROR_NO_LOCAL_SUMGLOB);
	    else
	      bis(rwm->addvarbits,RWL_IDENT_GLOBAL);
	  }
#line 7879 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 426:
#line 4208 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dtype=RWL_TYPE_STR;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 7889 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 427:
#line 4214 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->dtype=RWL_TYPE_STR;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 7898 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 428:
#line 4222 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dtype=RWL_TYPE_INT;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 7908 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 429:
#line 4228 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->dtype=RWL_TYPE_INT;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 7917 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 430:
#line 4236 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dtype=RWL_TYPE_DBL;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 7927 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 431:
#line 4242 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->dtype=RWL_TYPE_DBL;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 7936 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 432:
#line 4250 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 7945 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 433:
#line 4255 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 7953 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 434:
#line 4261 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_CLOB; }
#line 7959 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 435:
#line 4262 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_BLOB; }
#line 7965 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 436:
#line 4263 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_NCLOB; }
#line 7971 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 437:
#line 4267 "rwlparser.y" /* yacc.c:1646  */
    { rwm->sqllino = rwm->loc.lineno;}
#line 7977 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 438:
#line 4268 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	    bic(rwm->m2flags, RWL_P2_BADSQLFILTXT);
	    bic(rwm->m3flags, RWL_P3_IMMEDSQL); 
	    bic(rwm->m3flags, RWL_P3_IMMISDYN); 
	    rwm->sqllen = 0;
	    rwm->sqname = rwm->inam;
	  }
#line 7991 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 440:
#line 4279 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_SQL_WRONG); yyerrok;
	  }
#line 7999 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 441:
#line 4282 "rwlparser.y" /* yacc.c:1646  */
    { rwm->sqllino = rwm->loc.lineno;}
#line 8005 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 442:
#line 4283 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bic(rwm->m2flags, RWL_P2_BADSQLFILTXT);
	    bic(rwm->m3flags, RWL_P3_IMMEDSQL); 
	    bic(rwm->m3flags, RWL_P3_IMMISDYN); 
	    rwm->sqllen = 0;
	    rwm->sqname = rwm->inam;
	  }
#line 8018 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 444:
#line 4293 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_SQL_WRONG); yyerrok;
	  }
#line 8026 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 447:
#line 4303 "rwlparser.y" /* yacc.c:1646  */
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
#line 8076 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 448:
#line 4350 "rwlparser.y" /* yacc.c:1646  */
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
#line 8111 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 449:
#line 4384 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->m4flags, RWL_P4_AMPERSAND) && rwldynarcheck(rwm))
	    {
	      rwlerror(rwm, RWL_ERROR_CANNOT_AMPREP_HERE, "named sql declaration");
	      rwm->mxq->evar[rwm->sqsavvarn].vtype = RWL_TYPE_CANCELLED;
	      rwm->mxq->evar[rwm->sqsavvarn].stype = "cancelled (sql)";
	    }
	  }
#line 8124 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 451:
#line 4397 "rwlparser.y" /* yacc.c:1646  */
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
#line 8202 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 452:
#line 4475 "rwlparser.y" /* yacc.c:1646  */
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
#line 8299 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 456:
#line 4578 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_BIND); yyerrok; }
#line 8305 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 458:
#line 4582 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_BINDOUT); yyerrok; }
#line 8311 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 460:
#line 4586 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DEFINE); yyerrok; }
#line 8317 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 461:
#line 4588 "rwlparser.y" /* yacc.c:1646  */
    {
		  bis(rwm->sqsav->flags, RWL_SQFLAG_IGNERR);
		}
#line 8325 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 462:
#line 4592 "rwlparser.y" /* yacc.c:1646  */
    {
		  bic(rwm->sqsav->flags, RWL_SQFLAG_NOCURC);
		}
#line 8333 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 463:
#line 4596 "rwlparser.y" /* yacc.c:1646  */
    {
		  bis(rwm->sqsav->flags, RWL_SQFLAG_NOCURC);
		}
#line 8341 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 464:
#line 4601 "rwlparser.y" /* yacc.c:1646  */
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
#line 8363 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 465:
#line 4620 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ARRAY); yyerrok; }
#line 8369 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 466:
#line 4625 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_MISSING_SEMICOLON_IN_SQL); }
#line 8375 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 469:
#line 4631 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->sqsav->flags, RWL_SQFLAG_DYNAMIC))
	      rwlerror(rwm, RWL_ERROR_DEFINE_ARRAY_NOT_DYNAMIC);
	    else
	      bis(rwm->sqsav->flags, RWL_SQFLAG_ARRAYD);
	  }
#line 8386 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 472:
#line 4645 "rwlparser.y" /* yacc.c:1646  */
    {
	  // Note that it would not be too hard to replace
	  // the integer constant here by an expression
	  // which would make sense as that is what
	  // can be done with modify sql for dynamic sql
	  rwm->bdpos = rwm->ival; rwm->bdtyp=RWL_DEFINE;
	}
#line 8398 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 474:
#line 4654 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->sqsav->flags, RWL_SQLFLAG_IDUSE))
	      rwlerror(rwm, RWL_ERROR_IMPLICIT_ALREADY, "define");
	    bis(rwm->sqsav->flags, RWL_SQLFLAG_IDUSE);
	  }
#line 8408 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 477:
#line 4668 "rwlparser.y" /* yacc.c:1646  */
    { rwm->bdname = rwm->sval; rwm->bdtyp=RWL_BINDOUT_NAME; }
#line 8414 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 479:
#line 4670 "rwlparser.y" /* yacc.c:1646  */
    { 
	    // We could also use expression here, but we would
	    // of course need to check it was either a non-negative number
	    // or a string starting with :
	    rwm->bdpos = bit(rwm->m2flags,RWL_P2_BINDZERO) ? rwm->ival+1 : rwm->ival;
	    rwm->bdtyp=RWL_BINDOUT_POS; 
	  }
#line 8426 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 481:
#line 4678 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->bdtyp=RWL_BINDOUT_SAME;
	  }
#line 8434 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 483:
#line 4682 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_IMPLICIT_NOT_BINDOUT);
	  }
#line 8442 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 486:
#line 4693 "rwlparser.y" /* yacc.c:1646  */
    { rwm->bdname = rwm->sval; rwm->bdtyp=RWL_BIND_NAME; }
#line 8448 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 488:
#line 4695 "rwlparser.y" /* yacc.c:1646  */
    { 
	    // same comment as above
	    rwm->bdpos = bit(rwm->m2flags,RWL_P2_BINDZERO) ? rwm->ival+1 : rwm->ival;
	    rwm->bdtyp=RWL_BIND_POS; 
	  }
#line 8458 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 490:
#line 4701 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->bdtyp=RWL_BIND_SAME;
	  }
#line 8466 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 492:
#line 4705 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->sqsav->flags, RWL_SQLFLAG_IBUSE))
	      rwlerror(rwm, RWL_ERROR_IMPLICIT_ALREADY, "bind");
	    bis(rwm->sqsav->flags, RWL_SQLFLAG_IBUSE);
	  }
#line 8476 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 493:
#line 4714 "rwlparser.y" /* yacc.c:1646  */
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
#line 8574 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 494:
#line 4810 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->inam = RWL_DUMMY_VAR;
	    rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2, "function", "runseconds", "bind/define");
	  }
#line 8583 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 495:
#line 4815 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->inam = RWL_DUMMY_VAR;
	    rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2, "function", "epochseconds", "bind/define");
	  }
#line 8592 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 496:
#line 4819 "rwlparser.y" /* yacc.c:1646  */
    { bic(rwm->m2flags,RWL_P2_BINDRAW); }
#line 8598 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 497:
#line 4820 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m2flags,RWL_P2_BINDRAW); }
#line 8604 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 498:
#line 4824 "rwlparser.y" /* yacc.c:1646  */
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
#line 8625 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 499:
#line 4841 "rwlparser.y" /* yacc.c:1646  */
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
#line 8646 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 500:
#line 4858 "rwlparser.y" /* yacc.c:1646  */
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
#line 8667 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 501:
#line 4875 "rwlparser.y" /* yacc.c:1646  */
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
#line 8694 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 502:
#line 4897 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 8700 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 503:
#line 4898 "rwlparser.y" /* yacc.c:1646  */
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
#line 8735 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 504:
#line 4929 "rwlparser.y" /* yacc.c:1646  */
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
#line 8760 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 505:
#line 4949 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 8766 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 506:
#line 4950 "rwlparser.y" /* yacc.c:1646  */
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
#line 8792 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 507:
#line 4972 "rwlparser.y" /* yacc.c:1646  */
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
#line 8811 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 509:
#line 4987 "rwlparser.y" /* yacc.c:1646  */
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
#line 8830 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 511:
#line 5002 "rwlparser.y" /* yacc.c:1646  */
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
#line 8849 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 515:
#line 5022 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 8855 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 516:
#line 5024 "rwlparser.y" /* yacc.c:1646  */
    { rwm->msqlstk = rwlexprfinish(rwm); }
#line 8861 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 517:
#line 5026 "rwlparser.y" /* yacc.c:1646  */
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
#line 8916 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 518:
#line 5079 "rwlparser.y" /* yacc.c:1646  */
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
#line 8950 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 519:
#line 5109 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->mdbsphi = rwm->mdbsplo = rwlexprfinish(rwm);
	    if (!rwm->mdbsplo)
	      rwlexprclear(rwm);
	  }
#line 8960 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 520:
#line 5115 "rwlparser.y" /* yacc.c:1646  */
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
#line 8993 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 522:
#line 5147 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (!(rwm->mdbsphi = rwlexprfinish(rwm)))
	      rwlexprclear(rwm);
	  }
#line 9002 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 523:
#line 5154 "rwlparser.y" /* yacc.c:1646  */
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
#line 9026 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 525:
#line 5177 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m3flags, RWL_P3_SPFCONCAT); }
#line 9032 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 526:
#line 5178 "rwlparser.y" /* yacc.c:1646  */
    { bic(rwm->m3flags, RWL_P3_SPFCONCAT); }
#line 9038 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 527:
#line 5182 "rwlparser.y" /* yacc.c:1646  */
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
#line 9062 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 528:
#line 5202 "rwlparser.y" /* yacc.c:1646  */
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
#line 9080 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 529:
#line 5220 "rwlparser.y" /* yacc.c:1646  */
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
#line 9103 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 531:
#line 5242 "rwlparser.y" /* yacc.c:1646  */
    {
	  rwm->conhead = rwm->contail = 0;
	}
#line 9111 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 532:
#line 5246 "rwlparser.y" /* yacc.c:1646  */
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
#line 9136 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 535:
#line 5274 "rwlparser.y" /* yacc.c:1646  */
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
#line 9159 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 536:
#line 5295 "rwlparser.y" /* yacc.c:1646  */
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
#line 9184 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 537:
#line 5317 "rwlparser.y" /* yacc.c:1646  */
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
#line 9209 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 538:
#line 5341 "rwlparser.y" /* yacc.c:1646  */
    {  
	    bic(rwm->mflags,RWL_P_PRINTLINE);
	    bic(rwm->mflags,RWL_P_PRINTTOFILE);
	  }
#line 9218 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 539:
#line 5346 "rwlparser.y" /* yacc.c:1646  */
    {  
	    bis(rwm->mflags,RWL_P_PRINTLINE);
	    bic(rwm->mflags,RWL_P_PRINTTOFILE);
	  }
#line 9227 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 541:
#line 5354 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->mflags,RWL_P_PRINTBLANK); }
#line 9233 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 543:
#line 5359 "rwlparser.y" /* yacc.c:1646  */
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
#line 9295 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 544:
#line 5420 "rwlparser.y" /* yacc.c:1646  */
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
#line 9331 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 545:
#line 5455 "rwlparser.y" /* yacc.c:1646  */
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
#line 9346 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 546:
#line 5470 "rwlparser.y" /* yacc.c:1646  */
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
#line 9390 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 547:
#line 5510 "rwlparser.y" /* yacc.c:1646  */
    { 
		rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 9400 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 549:
#line 5520 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_MISSING_SEMICOLON);
	    yyerrok;
	  }
#line 9409 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 550:
#line 5527 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_ASSIGN; }
#line 9415 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 551:
#line 5528 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_GREATEQ; }
#line 9421 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 552:
#line 5529 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_RSHIFTASSIGN; }
#line 9427 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 553:
#line 5530 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_LESSEQ; }
#line 9433 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 554:
#line 5531 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_PIPEFROM; }
#line 9439 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 555:
#line 5532 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_PIPETO; }
#line 9445 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 557:
#line 5536 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_APPEND; }
#line 9451 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 558:
#line 5537 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_ASNPLUS; }
#line 9457 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 559:
#line 5544 "rwlparser.y" /* yacc.c:1646  */
    {
		rwl_estack *estk;
		rwlexprpush(rwm, rwm->assignvar, RWL_STACK_ASN);
		estk = rwlexprfinish(rwm);
		rwlcodeaddp(rwm, RWL_CODE_ASSIGN, estk);
	      }
#line 9468 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 560:
#line 5551 "rwlparser.y" /* yacc.c:1646  */
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
#line 9498 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 562:
#line 5577 "rwlparser.y" /* yacc.c:1646  */
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
#line 9515 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 564:
#line 5591 "rwlparser.y" /* yacc.c:1646  */
    { 
		rwlerror(rwm, RWL_ERROR_LOOP);
		rwlexprclear(rwm);
		// prevent attempting endloop code generation
		rwm->loopvar[rwm->rsldepth] = 0;
		rwm->rsllityp[rwm->rsldepth] = RWL_LI_BAD;
		bic(rwm->rslflags[rwm->rsldepth], RWL_RSLFLAG_MAYBRK);
		yyerrok;
	      }
#line 9529 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 567:
#line 5610 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwl_lilist *thisli = rwlalloc(rwm, sizeof(rwl_lilist));
	    rwlexprpush(rwm, rwm->loopvar[rwm->rsldepth], RWL_STACK_ASN);
	    thisli->listk = rwlexprfinish(rwm);
	    rwm->rsllitail[rwm->rsldepth]->linxt = thisli;
	    rwm->rsllitail[rwm->rsldepth] = thisli;
	  }
#line 9541 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 570:
#line 5630 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 9550 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 571:
#line 5635 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 9558 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 574:
#line 5644 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "execute") ; }
#line 9564 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 577:
#line 5651 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "loop") ; }
#line 9570 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 580:
#line 5658 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "if") ; yyerrok; }
#line 9576 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 583:
#line 5665 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (0 != rwlstrcmp(rwm->inam, rwm->sqname))
	      rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END2, "sql", rwm->sqname);
	  }
#line 9585 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 584:
#line 5670 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END2, "sql", rwm->sqname) ; yyerrok; }
#line 9591 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 586:
#line 5676 "rwlparser.y" /* yacc.c:1646  */
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
#line 9606 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 587:
#line 5687 "rwlparser.y" /* yacc.c:1646  */
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
#line 9621 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 588:
#line 5698 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (bit(rwm->rslflags[rwm->rsldepth-1], RWL_RSLFLAG_WHILOP))
	      rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "loop") ;
	    else
	      rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "while") ;
	    yyerrok;
	  }
#line 9633 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 589:
#line 5709 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->cursorand = 0;
	  }
#line 9641 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 590:
#line 5714 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->cursorand = rwlexprfinish(rwm);
	  }
#line 9649 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 592:
#line 5721 "rwlparser.y" /* yacc.c:1646  */
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
#line 9708 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 593:
#line 5778 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->loc.errlin = 0;
	    rwm->sqlfile = 0; /* not from a file */
	  }
#line 9717 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 594:
#line 5783 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprbeg(rwm);
	  }
#line 9725 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 595:
#line 5787 "rwlparser.y" /* yacc.c:1646  */
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
#line 9810 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 596:
#line 5870 "rwlparser.y" /* yacc.c:1646  */
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
#line 9834 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 597:
#line 5890 "rwlparser.y" /* yacc.c:1646  */
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
#line 9861 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 598:
#line 5914 "rwlparser.y" /* yacc.c:1646  */
    { 
		rwlerror(rwm, RWL_ERROR_BAD_READLINE);
		yyerrok;
	      }
#line 9870 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 599:
#line 5921 "rwlparser.y" /* yacc.c:1646  */
    { rwm->reg_estk = rwm->str_estk = rwm->sub_estk = 0; }
#line 9876 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 600:
#line 5923 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->reg_estk = rwlexprfinish(rwm);
	  }
#line 9884 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 601:
#line 5927 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->str_estk = rwlexprfinish(rwm);
	  }
#line 9892 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 602:
#line 5931 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->sub_estk = rwlexprfinish(rwm);
	  }
#line 9900 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 603:
#line 5935 "rwlparser.y" /* yacc.c:1646  */
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
#line 9943 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 604:
#line 5974 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprclear(rwm);
	    rwlerror(rwm, RWL_ERROR_BAD_REGEX);
	    yyerrok;
	  }
#line 9953 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 605:
#line 5983 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->m2flags, RWL_P2_REGEXSUBG);
	  }
#line 9961 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 606:
#line 5987 "rwlparser.y" /* yacc.c:1646  */
    {
	    bis(rwm->m2flags, RWL_P2_REGEXSUBG);
	  }
#line 9969 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 607:
#line 5993 "rwlparser.y" /* yacc.c:1646  */
    { rwm->reg_estk = rwm->str_estk = 0; }
#line 9975 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 608:
#line 5995 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->reg_estk = rwlexprfinish(rwm);
	  }
#line 9983 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 609:
#line 5999 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->str_estk = rwlexprfinish(rwm);
	    rwm->idlist = rwm->idtail = 0;
	  }
#line 9992 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 610:
#line 6004 "rwlparser.y" /* yacc.c:1646  */
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
#line 10029 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 611:
#line 6038 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprclear(rwm);
	    rwlerror(rwm, RWL_ERROR_BAD_REGEX);
	    yyerrok;
	  }
#line 10039 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 612:
#line 6047 "rwlparser.y" /* yacc.c:1646  */
    { rwm->reg_estk = rwm->str_estk = 0; }
#line 10045 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 613:
#line 6049 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->reg_estk = rwlexprfinish(rwm);
	  }
#line 10053 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 614:
#line 6053 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->str_estk = rwlexprfinish(rwm);
	    rwm->idlist = rwm->idtail = 0;
	  }
#line 10062 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 615:
#line 6058 "rwlparser.y" /* yacc.c:1646  */
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
#line 10099 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 616:
#line 6092 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprclear(rwm);
	    rwlerror(rwm, RWL_ERROR_BAD_REGEX);
	    yyerrok;
	  }
#line 10109 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 619:
#line 6105 "rwlparser.y" /* yacc.c:1646  */
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
#line 10154 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 620:
#line 6148 "rwlparser.y" /* yacc.c:1646  */
    {
		/* start a dummy assignment such that the system expression gets executed */
		rwm->assignvar = RWL_DUMMY_VAR;
		rwm->assignoper = RWL_T_ASSIGN;
		rwlexprbeg(rwm);
	      }
#line 10165 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 621:
#line 6157 "rwlparser.y" /* yacc.c:1646  */
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
#line 10185 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 622:
#line 6182 "rwlparser.y" /* yacc.c:1646  */
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
#line 10200 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 623:
#line 6194 "rwlparser.y" /* yacc.c:1646  */
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
#line 10223 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 624:
#line 6213 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ILLEGAL_THREAD); yyerrok; }
#line 10229 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 629:
#line 6227 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->cqnstart = rwm->cqnstop = 0.0;
	    rwm->cqnnow = rwlclock(rwm->mxq,0);
	  }
#line 10238 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 630:
#line 6232 "rwlparser.y" /* yacc.c:1646  */
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
#line 10266 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 631:
#line 6257 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->cqnstop = rwm->pval.dval;
	    if (rwm->cqnstop < rwm->cqnstart || rwm->cqnstop < rwm->cqnnow)
	    {
	      rwlerror(rwm, RWL_ERROR_CQN_STOP_BEFORE_START, rwm->cqnstop, rwm->cqnstart, rwm->cqnnow);
	      rwm->cqnat = 0;
	    }
	  }
#line 10279 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 632:
#line 6266 "rwlparser.y" /* yacc.c:1646  */
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
#line 10335 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 633:
#line 6318 "rwlparser.y" /* yacc.c:1646  */
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
#line 10364 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 634:
#line 6343 "rwlparser.y" /* yacc.c:1646  */
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
#line 10396 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 635:
#line 6371 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlcodeaddu(rwm, RWL_CODE_CQNISCB, 0); // Is in callback
	    rwlcodetail(rwm);
	  }
#line 10405 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 639:
#line 6382 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "querynotification");
	    yyerrok;
	  }
#line 10414 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 641:
#line 6391 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->cqnstart = rwm->pval.dval;
	  }
#line 10422 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 642:
#line 6398 "rwlparser.y" /* yacc.c:1646  */
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
#line 10442 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 643:
#line 6416 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlcodetail(rwm);
	  }
#line 10450 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 645:
#line 6421 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ILLEGAL_THREAD); yyerrok; }
#line 10456 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 647:
#line 6426 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->mythr->dbnam = rwm->inam;
	  }
#line 10464 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 650:
#line 6435 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "threads") ; }
#line 10470 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 653:
#line 6443 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "run") ; }
#line 10476 "rwlparser.tab.c" /* yacc.c:1646  */
    break;


#line 10480 "rwlparser.tab.c" /* yacc.c:1646  */
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
