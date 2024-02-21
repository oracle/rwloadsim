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
#line 149 "rwlparser.y" /* yacc.c:339  */

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


#line 364 "rwlparser.tab.c" /* yacc.c:339  */

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
    RWL_T_UMINUS = 412
  };
#endif

/* Value type.  */
#if ! defined RWLYSTYPE && ! defined RWLYSTYPE_IS_DECLARED

union RWLYSTYPE
{
#line 456 "rwlparser.y" /* yacc.c:355  */

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

#line 584 "rwlparser.tab.c" /* yacc.c:355  */
};

typedef union RWLYSTYPE RWLYSTYPE;
# define RWLYSTYPE_IS_TRIVIAL 1
# define RWLYSTYPE_IS_DECLARED 1
#endif



int rwlyparse (rwl_main *rwm);

#endif /* !YY_RWLY_RWLPARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 600 "rwlparser.tab.c" /* yacc.c:358  */

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
#define YYLAST   5376

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  173
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  288
/* YYNRULES -- Number of rules.  */
#define YYNRULES  654
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1196

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   412

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   165,     2,     2,     2,   164,     2,     2,
     168,   169,   162,   161,   170,   160,     2,   163,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   172,   167,
     158,   157,   159,   171,     2,     2,     2,     2,     2,     2,
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
     155,   156,   166
};

#if RWLYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   513,   513,   520,   524,   526,   525,   546,   547,   548,
     550,   553,   561,   563,   580,   579,   589,   588,   597,   596,
     606,   605,   615,   620,   629,   630,   634,   633,   640,   645,
     653,   654,   658,   657,   665,   664,   737,   742,   743,   755,
     756,   759,   760,   763,   773,   778,   786,   799,   830,   841,
     891,   890,   906,   916,   915,   932,   942,   952,   962,   975,
     976,   979,   987,   997,  1008,  1023,  1024,  1036,  1038,  1037,
    1050,  1051,  1057,  1056,  1084,  1091,  1098,  1099,  1103,  1104,
    1107,  1120,  1119,  1171,  1183,  1182,  1203,  1208,  1215,  1220,
    1227,  1312,  1313,  1317,  1326,  1327,  1330,  1331,  1332,  1336,
    1337,  1341,  1369,  1371,  1373,  1375,  1390,  1395,  1400,  1408,
    1409,  1411,  1413,  1432,  1434,  1433,  1449,  1448,  1464,  1463,
    1479,  1522,  1536,  1550,  1564,  1576,  1580,  1581,  1582,  1583,
    1584,  1585,  1586,  1587,  1588,  1589,  1590,  1591,  1592,  1593,
    1594,  1596,  1598,  1600,  1602,  1603,  1604,  1608,  1613,  1614,
    1615,  1617,  1619,  1620,  1622,  1633,  1644,  1648,  1654,  1658,
    1664,  1668,  1674,  1678,  1686,  1684,  1711,  1717,  1723,  1727,
    1728,  1732,  1733,  1737,  1742,  1743,  1744,  1749,  1750,  1751,
    1752,  1756,  1757,  1758,  1759,  1763,  1764,  1765,  1769,  1770,
    1771,  1772,  1773,  1774,  1778,  1779,  1780,  1784,  1786,  1785,
    1803,  1805,  1804,  1820,  1822,  1831,  1821,  1846,  1847,  1851,
    1852,  1862,  1863,  1867,  1875,  1878,  1877,  1884,  1887,  1886,
    1890,  1892,  1894,  1896,  1899,  1905,  1934,  1951,  1953,  1954,
    1958,  1960,  1964,  1966,  1971,  1970,  1977,  1976,  1988,  1993,
    1992,  2000,  2004,  2028,  2054,  2052,  2080,  2078,  2188,  2197,
    2196,  2200,  2199,  2204,  2210,  2209,  2219,  2218,  2227,  2240,
    2245,  2239,  2273,  2281,  2286,  2280,  2315,  2322,  2338,  2337,
    2350,  2366,  2377,  2383,  2389,  2401,  2413,  2423,  2433,  2432,
    2445,  2451,  2449,  2567,  2574,  2590,  2592,  2594,  2594,  2595,
    2598,  2600,  2602,  2599,  2604,  2608,  2607,  2722,  2755,  2763,
    2788,  2762,  2839,  2840,  2841,  2842,  2844,  2845,  2853,  2854,
    2862,  2863,  2872,  2875,  2874,  2883,  2885,  2893,  2901,  2910,
    2918,  2920,  2927,  2928,  2939,  2975,  2976,  2975,  3032,  3033,
    3032,  3077,  3094,  3076,  3135,  3142,  3148,  3149,  3153,  3304,
    3303,  3451,  3457,  3460,  3476,  3480,  3484,  3491,  3492,  3496,
    3496,  3510,  3510,  3526,  3526,  3542,  3542,  3556,  3556,  3587,
    3588,  3589,  3592,  3598,  3597,  3607,  3606,  3624,  3623,  3671,
    3686,  3695,  3670,  3732,  3740,  3741,  3741,  3754,  3753,  3760,
    3761,  3762,  3768,  3769,  3773,  3777,  3785,  3789,  3793,  3801,
    3802,  3808,  3814,  3816,  3819,  3820,  3825,  3824,  3926,  3928,
    3927,  3982,  3986,  3990,  3991,  3995,  4010,  4019,  4034,  4043,
    4047,  4053,  4070,  4077,  4087,  4088,  4089,  4093,  4094,  4110,
    4120,  4126,  4134,  4140,  4148,  4154,  4162,  4167,  4174,  4175,
    4176,  4180,  4181,  4180,  4191,  4195,  4196,  4195,  4205,  4212,
    4213,  4216,  4216,  4297,  4295,  4309,  4386,  4483,  4484,  4488,
    4489,  4492,  4493,  4496,  4497,  4500,  4504,  4508,  4512,  4531,
    4537,  4539,  4542,  4543,  4552,  4553,  4558,  4557,  4566,  4576,
    4577,  4581,  4581,  4583,  4582,  4591,  4590,  4594,  4601,  4602,
    4606,  4606,  4608,  4607,  4614,  4613,  4617,  4626,  4722,  4727,
    4732,  4733,  4736,  4753,  4770,  4787,  4810,  4810,  4841,  4862,
    4862,  4885,  4884,  4900,  4899,  4915,  4914,  4931,  4932,  4935,
    4937,  4935,  4991,  5022,  5021,  5058,  5059,  5067,  5066,  5090,
    5091,  5095,  5094,  5133,  5132,  5155,  5155,  5182,  5183,  5186,
    5207,  5229,  5253,  5258,  5266,  5267,  5267,  5271,  5332,  5367,
    5382,  5422,  5431,  5432,  5440,  5441,  5442,  5443,  5444,  5445,
    5448,  5449,  5450,  5457,  5464,  5455,  5490,  5490,  5503,  5516,
    5517,  5521,  5534,  5535,  5542,  5547,  5554,  5555,  5556,  5561,
    5562,  5563,  5568,  5569,  5570,  5575,  5576,  5577,  5582,  5587,
    5588,  5599,  5610,  5621,  5625,  5632,  5633,  5690,  5696,  5695,
    5783,  5782,  5826,  5834,  5836,  5840,  5844,  5833,  5886,  5895,
    5899,  5906,  5908,  5912,  5905,  5950,  5960,  5962,  5966,  5959,
    6004,  6013,  6014,  6017,  6060,  6069,  6095,  6094,  6125,  6131,
    6132,  6135,  6136,  6140,  6145,  6170,  6179,  6231,  6256,  6284,
    6139,  6292,  6293,  6294,  6302,  6303,  6311,  6329,  6310,  6333,
    6337,  6338,  6345,  6346,  6347,  6353,  6354,  6355,  6360,  6361,
    6362,  6363,  6364,  6365,  6366
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
  "RWL_T_COS", "RWL_T_ATAN2", "'='", "'<'", "'>'", "'-'", "'+'", "'*'",
  "'/'", "'%'", "'!'", "RWL_T_UMINUS", "';'", "'('", "')'", "','", "'?'",
  "':'", "$accept", "rwlyparse", "terminator", "programelementlist", "$@1",
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
  "comparison", "equality", "logicaland", "$@19", "logicalor", "$@20",
  "conditional", "$@21", "$@22", "expression", "concatenation",
  "statementlist", "goodorbadstatement", "$@23", "$@24", "statement",
  "$@25", "$@26", "$@27", "$@28", "$@29", "$@30", "$@31", "$@32", "$@33",
  "$@34", "$@35", "$@36", "$@37", "$@38", "$@39", "$@40", "$@41", "$@42",
  "$@43", "$@44", "$@45", "$@46", "$@47", "$@48", "$@49", "$@50", "$@51",
  "$@52", "$@53", "maybecomma", "docallonesql", "dosqlloop", "$@54",
  "controlloopheader", "controllooplistandend", "controlloopheadend",
  "controllooplist", "controlloopoption", "$@55", "$@56", "$@57", "$@58",
  "$@59", "maybequeue", "callsql", "$@60", "$@61", "embeddedsql", "$@62",
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
     405,   406,   407,   408,   409,   410,   411,    61,    60,    62,
      45,    43,    42,    47,    37,    33,   412,    59,    40,    41,
      44,    63,    58
};
# endif

#define YYPACT_NINF -924

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-924)))

#define YYTABLE_NINF -638

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -924,    76,    84,  -924,  3119,  -115,    64,  -924,  -115,   263,
    -924,  -924,  -924,   362,  1677,  1813,  -924,    37,  1879,    68,
      87,   332,  -924,    91,   131,   -46,  -924,  -115,  2015,   239,
    5208,  -115,  -115,   -53,  1455,  -115,   272,  -115,  -924,  -115,
     572,   124,  -924,  -924,  -924,  -924,  -924,  -924,  2081,    57,
    -924,  -924,    47,  -924,   133,    54,  -924,  -924,  -924,  -924,
    -924,  -924,    61,   280,   280,   141,   144,  -924,  -924,  -115,
     277,  -115,  1389,  -924,    81,  -924,  -924,    50,    52,    53,
     149,  -924,   108,    90,   181,  -115,  -115,  1180,  2217,   151,
    -924,  -924,  2283,  -924,  -924,  5208,  -924,  -924,  -115,  -924,
    -924,  -115,  -924,   342,  -924,  -115,   245,    55,   254,   325,
     277,  -115,  5208,  -115,  5208,   374,   160,   571,   -46,   229,
     255,   281,   293,   302,   308,   -46,  -924,   365,  5208,   376,
     422,   426,   450,   457,   465,   474,   478,   482,   486,   490,
     491,  -924,   495,  -924,  -924,   496,   499,   502,   505,   509,
     512,   513,  5208,  5208,  5208,   398,  -924,  -924,   412,   391,
     414,   246,   405,   -16,  -924,    56,  -115,  -115,  -115,  -924,
     480,   542,  -115,  -924,  -115,  -924,   417,  -115,  -924,  2419,
     540,    80,   265,     8,  -924,  -924,  -115,  -924,  -115,  -924,
    5208,  -924,  -115,   410,   481,  -924,  -924,  -924,  -924,  -924,
    -924,   498,  -924,  -924,   152,  -924,  -115,   544,   548,  -115,
    5208,  -115,   551,  -924,   673,   620,   555,  -924,  -115,   523,
    -115,   557,  1253,   436,  -924,  -115,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -115,  -924,  -115,  -924,   641,  -924,
     285,  -924,  -115,  -924,   679,   344,  -924,    78,  -924,  2845,
    3256,  -115,   291,  5208,  -924,  -115,   561,  -115,   561,  -115,
    -924,   356,  -924,  -115,  -115,  -115,  -924,  -924,  -115,  -924,
    -924,  -924,  -924,  -924,  -115,  5208,  -924,  5208,  -924,  -115,
    5006,  -924,   357,  -924,  -115,   561,  -115,  5208,    38,  -924,
    5208,  -924,   566,  -924,  -924,  -924,   657,  -924,  -924,  5208,
     659,   325,  -924,  -924,  -924,  -924,  -924,   653,  2485,  -924,
     286,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  5208,  5208,  5208,  5208,  5208,  5208,  -924,  5208,
    -924,  5208,  5208,  5208,   156,  5208,  5208,  5208,  5208,   158,
     159,   125,  5208,  -924,  5208,  5208,  5208,  5208,  5208,  5208,
    5208,  -924,  -924,   539,   297,  5208,  5208,  5208,  5208,  5208,
    5208,  5208,  5208,  5208,  5208,  5208,  5208,  -924,  -924,  -924,
    5208,  -924,  -924,  -924,  -924,   543,   577,   578,  -924,  -924,
    -924,  -924,  -115,   101,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -115,  -115,  5208,  -924,  -924,   702,
     703,   706,   587,  -924,   560,   560,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,   684,   588,  -115,
    5208,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    2419,  -924,  5208,  -924,  -115,  -115,  -115,  -924,  3393,  -924,
    -924,   567,  -924,   567,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,   238,  -924,   660,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  5208,  -924,  3530,  -115,  -115,  -924,
    -924,  -924,    96,   102,   354,   466,   452,  -924,  -924,   671,
      60,  -924,  -924,  -924,   574,   681,   561,  -924,   356,  -924,
     356,  -924,   472,   561,  -924,  -924,  -924,  -924,  -924,  5208,
    -924,   357,   357,  -924,  -924,  -924,  -924,  -924,   356,  -924,
    -924,  -115,   607,  -115,   320,  -924,  -924,  -924,   543,  2621,
     325,   681,  -924,  -924,   659,   583,   584,  -924,  -924,  -924,
    -924,  -924,  -924,  -115,   729,  -924,   674,    86,  -924,   -20,
     586,   241,     7,    26,   250,   207,    40,   591,   589,   593,
     594,   595,   161,   257,   244,   596,   597,   599,   600,   602,
     603,   605,   606,   608,  5208,   258,   248,   278,   279,   288,
     295,   264,  -924,  -924,   704,  -924,  -924,  -924,   412,   412,
     391,   391,   355,   391,   391,   414,   414,  5208,  5208,  5208,
    -924,   637,   368,  -924,  -924,  -924,  -924,  -115,  -924,  -924,
    -115,  -924,  -924,  -115,   284,   615,   640,   642,  -924,  -924,
    -924,  -924,  -924,  -115,  4937,  -924,  -924,  -924,  -924,   611,
     612,  -924,  -924,  -924,  -924,   613,  -924,  -924,  -924,  -924,
    -924,   270,   701,   283,  5208,  5208,  5208,  5208,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  5208,  -924,   618,    66,
    -924,  -924,  3667,  -115,  -115,  -924,  -115,  -924,  -115,   785,
     786,  -115,  2687,  -924,  -924,  -115,  -115,  -115,  -924,  -924,
     755,   356,  -924,  -924,  -924,  -924,  -924,   613,  -924,  -924,
    5208,  -924,   619,  -924,  -924,  -924,  -924,  5142,  5208,  5208,
     743,  -924,  5208,  -924,  -924,  -924,  -924,  5208,  5208,  5208,
    -115,   320,  -924,   162,    -9,   763,  -924,   659,  -924,  -924,
    5208,  5208,  -924,   653,   712,   655,  -115,  -115,  -924,  -924,
    -924,  5208,  5208,  -924,  -924,  5208,  -924,   626,  -924,   661,
    5208,  -924,  -924,  -924,  -924,  -924,  5208,  -924,  5208,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  5208,   627,
    5208,  -924,  -924,  -924,  -924,  -924,  5208,  -924,  5208,   246,
     405,   629,  -924,  -924,  -924,    44,    49,  -924,  -924,  -924,
    5208,  5208,  -115,  -924,  -924,  -924,   726,  -924,  -924,  -924,
    -924,  -924,  -115,  -924,  -924,  4937,   663,  5208,  -924,   632,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,   109,  5208,  5208,
     635,  -924,  -924,  -924,  -924,  -924,  -924,   348,  -924,   665,
     310,  -924,  -924,  -924,  -924,   681,   681,   681,   681,  3804,
    5208,  -115,  -924,  -924,  -115,  -115,  -924,  -924,    78,  -924,
    -924,  -924,  -924,  5208,  -924,  -115,  -115,  -924,   739,   438,
    2982,  -924,  -924,  -924,  -924,  -924,  5208,  -924,  5208,  -115,
     669,  -924,  -924,  -924,  -924,  -924,   418,  -924,  -924,  -924,
    -924,  -924,   759,  -924,  -924,  -924,  -924,   643,  3941,  -924,
    4078,  -924,  -924,  -115,   672,  -924,  -924,  -924,  -924,   296,
     298,   309,  -924,   646,   274,   315,   318,   435,  -924,   321,
     323,   391,  -924,  -115,   678,  -924,  -115,   680,  -924,   681,
     681,  -924,  -924,  -924,  5208,  -924,  5208,  -924,  -924,    44,
      49,  -924,  -115,  -115,  -924,   582,  -924,  -115,   146,  -924,
    -924,  -924,  -924,  5208,  -924,   310,  -924,  -924,    88,   681,
    -924,  -924,    -2,   664,  -924,  -924,  -924,  4215,  -924,  -924,
    -924,  -924,  -924,   561,  -924,  -924,  -924,  -924,   418,   784,
    -924,  -924,  -924,   784,  -924,  5208,  5208,    -4,  -924,    88,
      88,   543,   543,  -924,  -924,  4352,   742,  -924,  -924,  -924,
    -924,  -924,  5208,  -924,  -924,  -924,  5208,  -924,  -924,  5208,
    -924,  -924,   443,  -924,  -924,  -924,   458,  -924,   794,   654,
    -924,  5208,   654,  -924,   681,   654,  -924,  -924,  -924,  -924,
      39,    62,  -924,  1611,    42,  -115,  -115,  -115,  -924,  -924,
    -924,  -115,  -115,  -115,   656,  -924,  -115,  -115,  -924,  -924,
    -924,  -924,  -924,  -924,    86,  4489,   356,   658,  5208,   727,
     727,  -924,  -924,  -924,  -924,  -924,  -924,  -924,   368,   368,
     808,  5208,   751,   324,   330,  -924,  5208,  -115,   678,  5208,
    -115,   680,  5208,  -924,  -924,   681,  -115,  -924,  -924,  -924,
    -924,   372,  -924,  -115,  -924,  -924,   393,  -924,  -115,  -924,
    5208,  -115,  -924,  -924,  -924,  -924,   394,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,   277,  -924,
     100,  -924,  5208,  -924,  5208,   760,  -924,  4626,   781,  -924,
    -924,   100,  -924,  5208,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,   681,  -924,   695,  -924,   122,   122,   122,   381,
    -924,  -924,   122,     1,  -924,  -924,  -115,  -924,   122,   122,
     122,   483,  -924,  -924,  -115,  -115,  -924,  -924,  -924,  -924,
    5208,  -924,    88,  -924,  -924,  -924,  -924,  -924,  -924,   728,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,   666,  -924,  -924,   747,  -924,   699,
     773,  -924,  -115,   -14,  -924,  -924,  -924,  -924,   677,  4763,
    -924,   774,  5208,  -924,   682,  -924,  -924,  4900,   823,   115,
    -115,  -115,  -924,  -924,  -924,  -924
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       4,     0,     5,     1,     0,     0,     0,   532,   533,     0,
      89,   421,   423,     0,     0,     0,   425,     0,     0,     0,
       0,     0,   565,     0,     0,    94,   341,   254,     0,   386,
       0,     0,     0,     0,     0,     0,     0,     0,    87,     0,
       0,     0,   614,   428,   429,   430,   325,   328,     0,     0,
     599,   600,     0,   367,     0,     0,   517,     3,   225,     6,
       8,    12,     0,    78,    78,     0,     0,     7,   331,     0,
     287,     0,     0,   295,     0,   211,   211,     0,     0,     0,
       0,   427,     0,     0,     0,     0,     0,     0,     0,     0,
     302,   304,     0,   305,   303,     0,     9,   335,     0,    34,
     319,     0,    93,     0,    91,     0,     0,   362,     0,   583,
     382,     0,     0,     0,     0,     0,     0,     0,    94,     0,
       0,     0,     0,     0,     0,    94,   125,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   124,   121,   123,   122,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   174,   177,   181,   185,   188,
     194,   197,   200,   203,   207,     0,     0,     0,     0,   590,
       0,     0,     0,   530,     0,   531,     0,     0,   322,     0,
       0,     0,     0,     0,   274,   275,     0,   324,     0,   258,
       0,   226,     0,     0,     0,   276,   284,    88,   420,   422,
     424,     0,   564,    86,     0,   426,     0,     0,     0,     0,
       0,     0,     0,   520,     0,     0,     0,   445,     0,     0,
       0,   363,     0,     0,   525,     0,   116,   114,   118,   113,
      13,    79,   211,   211,     0,    81,     0,    84,   359,   338,
       0,   338,     0,   338,     0,   375,   211,     0,   244,     0,
       0,     0,     0,     0,   234,     0,     0,     0,     0,     0,
     396,     0,   394,     0,     0,     0,   575,   227,     0,   539,
     310,   521,   308,   306,     0,     0,   538,     0,   312,     0,
     209,   537,     0,   534,     0,     0,     0,     0,     0,    36,
      37,    10,     0,    11,   248,   299,     0,   377,   292,     0,
       0,   583,   383,   610,   607,   605,   602,   648,     0,   623,
       0,   619,   622,   621,   410,   416,   414,   415,   409,   412,
     413,   167,     0,     0,     0,     0,     0,     0,   166,     0,
     180,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   164,     0,     0,     0,     0,     0,     0,
       0,   178,   179,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   198,   201,   204,
       0,   411,   298,   297,   592,     0,     0,     0,   317,   318,
      95,   277,     0,     0,   255,   406,   405,   387,   388,   267,
     323,   262,   260,   280,     0,     0,     0,   268,   278,     0,
       0,     0,     0,   273,   336,   336,   266,   264,   309,   519,
     438,   378,   436,   368,   307,   523,   334,     0,     0,     0,
     169,   544,   547,   545,   551,   552,   548,   549,   546,   550,
       0,   518,     0,   120,     0,     0,     0,    77,     0,    76,
      80,    96,    83,    96,   355,   351,   349,   353,   360,   361,
     332,   359,   347,     0,   285,   384,   385,   288,   338,   289,
     373,   588,   587,   445,     0,   374,     0,     0,     0,   572,
     243,   211,     0,     0,     0,     0,     0,   212,   213,   401,
       0,   238,   418,   419,     0,    74,     0,   231,     0,   233,
       0,   229,   398,     0,   228,   578,   576,   577,   311,     0,
     316,     0,     0,   321,   210,   535,   320,   241,     0,   598,
     594,     0,     0,     0,    39,    38,    75,    92,     0,     0,
     583,   584,   339,   290,     0,     0,     0,   650,   654,   651,
     653,   649,   652,     0,     0,   636,     0,     0,   620,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   169,     0,     0,     0,     0,     0,
       0,     0,   168,   175,     0,   182,   183,   184,   187,   186,
     191,   192,     0,   189,   190,   196,   195,     0,     0,     0,
     208,     0,     0,   611,    20,    16,   541,     0,   542,   540,
       0,   271,   272,     0,     0,     0,     0,     0,   434,   432,
     337,   326,   329,     0,   441,   525,   364,   366,   283,     0,
     170,   171,   173,   257,   529,   526,   527,   117,   115,   119,
      90,     0,     0,   109,     0,     0,     0,     0,   211,   346,
     345,   344,   343,   348,   357,   286,     0,   370,     0,     0,
     574,   573,     0,     0,     0,   218,     0,   215,     0,     0,
       0,     0,     0,   404,   211,     0,     0,     0,   579,   242,
     417,     0,   230,   232,   397,   399,   395,   522,   315,   314,
       0,   240,     0,   253,   251,   615,   250,     0,     0,     0,
       0,    55,     0,    58,    59,    49,    48,     0,     0,     0,
       0,    40,    41,   583,     0,   556,   211,     0,   211,   294,
       0,     0,   618,   648,   640,     0,     0,     0,   645,   617,
     135,     0,     0,   148,   149,     0,   152,     0,   145,     0,
       0,   139,   163,   162,   144,   128,     0,   130,     0,   134,
     161,   160,   159,   158,   157,   155,   154,   156,     0,     0,
       0,   131,   132,   133,   136,   137,     0,   176,     0,   199,
     202,     0,   613,   591,   612,     0,     0,   543,   261,   270,
       0,     0,     0,   503,   501,   499,   496,   505,   493,   494,
     492,   498,     0,    18,    14,   441,     0,     0,   265,     0,
     437,   440,   447,   439,   445,   585,   524,     0,     0,     0,
     104,   102,   103,   106,   108,   107,    97,     0,    99,     0,
       0,   111,   112,   110,    85,   356,   352,   350,   354,     0,
       0,   460,   447,   376,     0,     0,   566,   296,     0,   221,
     220,   211,   217,     0,   214,     0,     0,   222,     0,     0,
       0,   582,   580,   581,   236,   235,     0,   536,     0,     0,
       0,    46,    43,    44,    59,    53,    56,    52,    50,    45,
      35,    42,     0,   563,   562,   558,   553,     0,     0,   293,
       0,   608,   603,     0,     0,   211,   624,   647,   646,     0,
       0,     0,   147,     0,     0,     0,     0,     0,   165,     0,
       0,   193,   205,     0,     0,    21,     0,     0,    17,   513,
     512,   269,   509,   509,     0,   495,     0,   509,   279,     0,
       0,   433,     0,     0,   586,     0,   443,     0,     0,   389,
     282,   172,   528,     0,    98,     0,   101,    82,     0,   358,
     461,   589,   379,     0,   568,   567,   245,     0,   211,   223,
     224,   408,   407,     0,   400,   595,   252,    47,    57,    63,
      62,    61,    60,    63,   300,     0,     0,     0,   559,     0,
       0,     0,     0,   639,   641,     0,   634,   153,   126,   150,
     146,   142,     0,   127,   129,   140,     0,   151,   138,     0,
      29,    32,     0,    30,    23,    26,     0,    24,   515,   504,
     507,     0,   502,   500,   497,   506,    19,    15,   327,   330,
       0,     0,   442,     0,     0,   460,   460,   460,   448,   447,
     393,     0,     0,     0,     0,   100,     0,     0,   569,   333,
     380,   381,   371,   446,     0,     0,     0,     0,     0,    65,
      65,   211,   554,   561,   557,   560,   247,   340,     0,     0,
       0,     0,     0,     0,     0,   206,     0,     0,     0,     0,
       0,     0,     0,   514,   509,   510,     0,   486,   480,   482,
     484,   460,   478,     0,   468,   466,   460,   464,     0,   463,
       0,     0,   477,   471,   473,   475,   460,   469,   455,   456,
     457,   444,   392,   390,   391,   105,   571,   570,   382,   219,
       0,   237,     0,    64,     0,    67,    51,     0,     0,   609,
     604,     0,   635,     0,   143,   141,    33,    28,    31,    27,
      22,    25,   516,   508,     0,   450,     0,     0,     0,     0,
     449,   454,     0,     0,   453,   459,   460,   452,     0,     0,
       0,     0,   451,   372,     0,     0,   642,   216,   596,    66,
       0,    54,     0,   555,   638,   625,   511,   489,   488,   490,
     481,   487,   483,   485,   479,   467,   465,   458,   472,   474,
     476,   470,   644,   643,     0,    68,   301,     0,   491,     0,
      70,   626,     0,     0,    69,   211,   597,    71,     0,     0,
      72,     0,   169,   628,     0,   211,    73,     0,     0,     0,
       0,     0,   631,   630,   633,   632
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -924,  -924,    -5,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,   -68,  -924,  -205,  -924,   -62,  -924,  -200,  -924,  -924,
    -924,  -924,  -924,  -924,   148,  -924,  -924,    -1,  -924,  -103,
    -178,  -924,  -924,  -924,  -924,  -297,  -280,  -924,   790,  -924,
    -924,  -924,  -924,  -924,  -924,   628,  -924,   568,   222,   416,
    -924,   -63,    59,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -563,  -924,    65,  -924,   227,   -93,  -343,   266,   287,   276,
    -924,  -924,  -924,  -365,  -924,  -924,   221,   -39,   -61,  -924,
    -924,  -924,   862,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,   462,  -218,  -491,  -924,  -924,  -924,  -924,  -924,
     419,  -924,  -924,  -924,  -924,  -924,  -924,   858,  -924,  -924,
     859,  -924,   765,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -213,   806,  -924,  -924,  -254,   385,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,   714,  -924,  -924,   -71,  -924,
    -924,  -924,  -924,   -31,  -924,  -924,  -924,  -924,  -924,    95,
    -924,  -924,  -924,  -924,  -450,  -128,    92,  -924,  -705,  -924,
    -924,  -241,  -924,  -924,  -246,  -924,  -924,  -924,  -924,  -233,
    -924,  -924,  -924,  -389,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -566,  -167,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,   275,  -924,   390,    93,  -924,
    -924,   316,  -924,   213,  -258,   554,   464,  -924,   403,  -924,
    -924,  -924,  -924,  -924,  -924,   -60,  -924,  -924,  -924,  -923,
      70,  -924,  -924,  -285,  -924,   651,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -506,  -586,  -924,    51,  -924,  -924,  -924,
     592,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -202,  -123,   190
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    58,     2,     4,    59,    60,   910,   766,   909,
     765,   898,   986,   987,  1049,   895,   982,   983,  1046,    61,
     290,   514,   700,   701,   702,   953,   949,   856,   952,  1029,
    1095,  1141,  1170,  1174,  1182,   484,   789,    62,   232,    63,
     441,    64,   443,    65,    66,   437,   103,   104,   177,   632,
     807,   808,   809,   814,   230,   435,   434,   436,   155,   564,
     619,   620,   621,   156,   157,   158,   159,   160,   161,   162,
     587,   163,   588,   164,   589,   979,   280,   516,   438,   477,
     833,   831,   478,   486,   943,   285,   471,   296,   513,   849,
     179,   223,   190,   600,   210,   613,   604,   605,   420,   241,
     108,   520,   246,   518,  1031,   277,   207,   786,   208,   787,
     238,   638,   611,   454,   523,   708,    68,   450,   642,   451,
     452,   636,   635,   637,   634,   820,   453,    69,   417,   418,
      70,   217,    71,   245,   822,  1088,   463,   464,    72,   215,
    1022,   301,   302,    73,   920,   261,   262,   492,   674,   846,
      74,   663,   479,    75,   664,   319,    76,   320,   254,    77,
      78,    79,    80,    81,    82,   402,   785,   216,   614,   790,
     791,   792,   793,  1009,   413,   932,   933,  1008,   931,  1070,
    1066,  1067,  1122,  1076,  1077,  1128,  1129,  1130,  1061,  1062,
    1116,  1117,  1118,  1150,  1151,   782,   906,   904,   903,   902,
     907,   989,   990,   991,  1114,   772,   988,  1053,    83,   224,
      84,    85,   499,    86,   615,   431,   432,   625,   626,    87,
      88,   282,   680,   283,   278,   270,   384,   599,   429,   430,
     706,   955,  1098,   867,   957,   958,   865,    89,   827,  1019,
     470,   267,   669,   300,   794,   795,   646,    90,   375,    91,
     287,   682,  1027,  1164,    92,    93,   114,   526,   962,    94,
     112,   525,   961,   592,   593,    95,   686,    96,   116,   310,
     311,   312,   536,   966,  1167,  1175,  1181,  1185,  1188,  1193,
    1042,   313,   714,  1040,   875,  1137,   719,   533
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      97,   749,   488,   100,   490,   590,   764,   256,   258,   205,
     515,   535,   703,   647,   249,   250,   524,   580,   581,   582,
     583,   584,   178,   457,   506,   459,   184,   185,   187,   189,
     191,   508,   195,   709,   196,   330,  1036,  1037,   115,   511,
    1056,   727,   863,  1071,   370,   893,   368,  1034,   214,   281,
     896,   251,    57,   255,   257,   220,   288,   229,   211,   351,
     352,   665,   225,  1063,   239,    98,   243,   824,  1177,   166,
    -616,   370,   370,   304,   226,   306,     3,   266,   269,   467,
     269,   269,   276,   252,    -2,   252,   252,   716,   168,  1016,
     370,   268,   172,   289,   186,   666,   291,   653,   293,   247,
     294,  1134,   597,   655,  -256,  -246,   303,   314,   305,   263,
     917,   667,  -256,  -256,    57,   353,  1190,   764,   717,  -377,
     370,   212,   176,  -256,  1020,  1178,   559,  1064,   318,  1147,
     206,  -256,   174,  1135,   218,   221,   221,  1021,   825,  1017,
     383,  1065,   234,   468,   370,   236,   386,  1011,   248,   720,
     259,   392,   284,   401,   227,   369,  1148,   549,    57,   555,
     557,   372,   373,   374,   654,  1057,   956,   378,  1072,   379,
     656,   407,   381,   560,   561,    57,   723,  1058,   389,  1059,
    1073,   390,  1074,   391,  -616,   466,  -435,   393,  1064,  -417,
     918,  -417,  -417,   308,  1012,   724,   213,  -256,  -256,  -256,
     228,   403,  1065,    99,   406,  -249,   408,   167,   512,   728,
     729,  1060,   894,   414,  1075,   416,   869,   897,   253,  1166,
     433,  -362,   222,   299,   761,   370,   169,    57,    57,   440,
     173,   442,   671,    57,   264,   707,   281,   458,   281,   165,
     645,   504,   469,   678,   679,    57,   481,   265,   510,   181,
     487,   183,   489,    57,   491,    57,   494,    57,   495,   496,
     497,  1149,  1191,   498,   562,   578,   579,    57,    57,   500,
     175,   370,   219,   192,   503,    57,    57,   276,   193,   507,
     235,   509,    57,   237,   540,  1013,   800,   801,   260,   639,
    -239,  -431,   546,   547,   548,   550,   551,   556,   558,   802,
    1078,  1079,  1080,   563,   537,   370,   365,   309,   370,   803,
     640,   444,   370,   387,   370,   101,   445,   446,   447,   308,
     182,   370,   370,   687,   688,   689,   800,   801,   370,   770,
     735,   736,   591,   455,   448,   449,   231,   992,   370,   802,
     321,   995,   370,   370,   916,   170,   482,   328,   171,   803,
     573,   271,   370,   690,   574,   657,  1120,   603,   240,   370,
     370,  1124,   370,   105,   691,   692,   693,   694,   695,   696,
     771,  1132,   804,   370,   811,   812,   726,   596,   598,   370,
     297,   622,   370,   461,   295,   370,   299,   370,   370,   601,
     602,   383,   307,   624,   370,   855,   805,   322,   194,   106,
     857,   858,   102,   366,   388,    57,   697,   851,   852,   853,
     652,   722,   804,   739,   618,   891,   758,   751,   862,   859,
     725,  1157,   658,   323,   456,   648,   737,   738,   750,   627,
     628,   629,   813,   309,   756,  -342,   805,   483,  -342,   806,
    -342,  -342,  -342,   971,   972,   205,   641,   752,   753,   324,
     698,   699,   764,   764,   354,  1038,  1039,   754,  -342,  -342,
     624,   325,   650,   651,   755,   967,   367,   968,   198,   199,
     326,   462,   360,   361,   485,   668,   327,   362,   969,   659,
     705,   200,   660,   672,   973,   673,   421,   974,  -291,    53,
     977,   202,   978,  1104,   422,   423,   276,   276,   394,  1105,
     376,   107,   370,   681,   942,   424,   683,  1057,   685,    57,
     395,   399,   292,   425,   400,   358,   359,   924,   925,  1058,
     521,  1059,   421,    57,    57,   622,   493,   505,   712,   485,
     422,   423,   718,   329,   661,    57,   938,   950,   591,    57,
     951,   396,  1119,   539,   331,   541,   542,   543,   544,   397,
     545,   358,   359,  1060,    43,    44,    45,   552,   553,   554,
      57,    57,   377,  1123,  1131,   565,   566,   567,   568,   569,
     570,   571,   363,   364,   355,   356,   357,   819,   204,   426,
     427,   428,   575,   576,   577,   197,   380,   763,   198,   199,
     332,   501,   767,   502,   333,   768,  1000,  1001,   769,   844,
    1002,   200,  1003,   840,   975,   976,   385,   821,   788,  1072,
     201,   202,  1047,  1048,  1045,   426,   427,   428,   334,  1184,
     398,  1073,   314,  1074,  1004,   335,  1014,  1050,  1051,   773,
     774,   585,   586,   336,   775,   776,   315,   316,   317,   272,
     273,   281,   337,   318,   826,   868,   338,   870,   829,   830,
     339,   832,  1005,   834,   340,  1075,   837,   777,   341,   342,
     841,   842,   843,   343,   344,   203,   845,   345,  1006,  1007,
     346,   871,   872,   347,    43,    44,    45,   348,  1000,  1001,
     349,   350,  1023,   404,  1003,   527,   528,   405,   529,  1026,
     409,   410,   411,   415,   412,   860,  -365,   460,   204,   864,
     260,   778,   779,   780,   530,   102,  1004,   519,   572,   887,
     522,   877,   878,   591,   444,   781,   594,   595,   531,   445,
     446,   447,   606,   607,   608,   532,   609,   617,  1152,  1153,
     610,  1093,   616,  1155,  1005,   631,   644,   448,   449,  1158,
    1159,  1160,   662,   670,  1102,   370,   684,   713,   913,  1106,
    1006,  1007,  1109,   710,   711,   715,   721,   757,   731,   622,
     624,   730,   732,   733,   734,   740,   741,   901,   742,   743,
     937,   744,   745,  1126,   746,   747,   762,   908,   748,   783,
     797,   784,   798,   799,   810,   823,   835,   836,   252,   848,
     854,   866,   919,   874,   876,   882,   888,  1139,   905,   914,
     883,   892,   912,   923,   926,   941,  1145,   944,   947,   945,
     954,   964,  1028,   956,   965,   970,   930,   981,   985,   934,
     935,  1041,  1052,   469,  1054,  1085,  1101,  1094,  1092,  1103,
     939,   940,  1143,  1140,  1146,  1168,  1169,  1171,  1172,  1173,
    1183,  1189,   997,  1165,   685,  1180,  1111,   996,  1108,   861,
    1030,  1186,  1096,   948,   233,   815,   816,   817,   818,   633,
     517,   439,  1015,   921,   760,   993,    67,   612,   963,   927,
     643,   109,   110,   298,   759,  1133,   242,  1025,   676,   371,
     911,  1081,  1156,   839,   915,  1161,  1154,  1113,   980,   677,
     796,   984,   922,   847,   623,   675,   465,  1035,   936,  1144,
     946,  1089,   538,   873,     0,     0,     0,   998,   999,     0,
       0,     0,  1010,   485,     0,     0,  1032,  1033,   485,   485,
       0,     0,     0,  1018,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   879,   880,     0,     0,   881,     0,     0,     0,
       0,   884,     0,     0,  1018,  1018,     0,   885,     0,   886,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1097,   889,     0,     0,     0,     0,     0,   890,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   899,   900,     0,     0,     0,     0,     0,     0,     0,
     930,   930,   930,     0,     0,     0,  1082,  1083,  1084,     0,
       0,  1086,  1087,     0,     0,     0,     0,     0,     0,   718,
       0,  1091,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1099,  1100,     0,     0,     0,     0,     0,
       0,   929,  1107,     0,     0,  1110,     0,     0,     0,     0,
       0,  1115,     0,  1138,   485,     0,   930,     0,  1121,     0,
       0,   930,     0,  1125,     0,     0,  1127,     0,     0,     0,
       0,   930,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1136,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1136,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1179,     0,     0,     0,     0,     0,
       0,   930,     0,     0,  1187,     0,     0,   994,     0,  1162,
    1163,     0,     0,     0,     0,     0,     0,  1018,     0,     0,
       0,     0,     0,   622,   485,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1176,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   274,     0,     0,  1192,  1194,  1195,  -313,     0,     0,
       0,     0,     0,  1043,     0,     0,     0,  1044,     0,     0,
       0,     0,  -313,  -313,     0,     0,  -313,  -313,     0,     0,
    -313,  -313,  1055,     0,  -313,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -313,  -313,     0,     0,  -313,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   485,
       0,     0,     0,     0,   419,     0,     0,     0,     0,     0,
    -281,     0,   485,     0,     0,     0,     0,   485,     0,     0,
     485,     0,     0,  1112,     0,  -281,  -281,     0,     0,  -281,
    -281,  -313,     0,  -281,  -281,     0,     0,  -281,     0,     0,
    -313,   485,  -313,  -313,  -313,  -313,  -313,  -313,  -313,     0,
       0,  -313,     0,     0,     0,  -313,  -281,  -281,     0,  -313,
    -281,     0,     0,     0,     0,   485,     0,     0,  -313,  -313,
    -313,  -313,     0,     0,   485,     0,     0,     0,  -313,     0,
    -313,  -313,  -313,     0,  -313,  -313,  -313,     0,     0,     0,
    -313,     0,     0,     0,     0,  -313,     0,    57,  -313,     0,
     275,     0,     0,     0,  -281,     0,     0,     0,     0,     0,
       0,   485,     0,  -281,     0,  -281,  -281,  -281,  -281,  -281,
    -281,  -281,     0,     0,  -281,     0,     0,     0,  -281,     0,
       0,     0,  -281,     0,     0,     0,     0,     0,     0,     0,
     244,  -281,  -281,  -281,  -281,     0,  -369,     0,     0,     0,
       0,  -281,     0,  -281,  -281,  -281,     0,  -281,  -281,  -281,
       0,  -369,  -369,  -281,     0,  -369,  -369,     0,  -281,  -369,
    -369,  -281,  -281,  -369,     0,     0,     0,     0,  -369,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -369,  -369,     0,     0,  -369,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   188,     0,     0,     0,
       0,     0,  -259,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -259,  -259,     0,
       0,  -259,  -259,     0,     0,  -259,  -259,     0,     0,  -259,
    -369,     0,     0,     0,     0,     0,     0,     0,     0,  -369,
       0,  -369,  -369,  -369,  -369,  -369,  -369,  -369,  -259,  -259,
    -369,     0,  -259,     0,  -369,     0,  -369,     0,  -369,     0,
       0,     0,     0,     0,     0,     0,     0,  -369,  -369,  -369,
    -369,     0,     0,     0,     0,     0,     0,  -369,     0,  -369,
    -369,  -369,     0,  -369,  -369,  -369,     0,     0,     0,  -369,
       0,     0,     0,     0,  -369,     0,  -259,  -369,     0,     0,
       0,     0,     0,     0,     0,  -259,     0,  -259,  -259,  -259,
    -259,  -259,  -259,  -259,     0,     0,  -259,     0,     0,     0,
    -259,     0,     0,     0,  -259,     0,     0,     0,     0,     0,
       0,     0,     0,  -259,  -259,  -259,  -259,     0,     0,     0,
       0,     0,     0,  -259,     0,  -259,  -259,  -259,     0,  -259,
    -259,  -259,  1068,     0,     0,  -259,     0,     0,  -462,     0,
    -259,     0,    57,  -259,     0,     0,  1069,     0,     0,     0,
       0,     0,     0,  -462,  -462,     0,     0,  -462,  -462,     0,
       0,  -462,  -462,     0,     0,  -462,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -462,  -462,     0,     0,  -462,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   111,     0,
       0,     0,     0,     0,  -606,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -606,
    -606,     0,     0,  -606,  -606,     0,     0,  -606,  -606,     0,
       0,  -606,  -462,     0,     0,     0,     0,     0,     0,     0,
       0,  -462,     0,  -462,  -462,  -462,  -462,  -462,  -462,  -462,
    -606,  -606,  -462,     0,  -606,     0,  -462,     0,     0,     0,
    -462,     0,     0,     0,     0,     0,     0,     0,     0,  -462,
    -462,  -462,  -462,     0,     0,     0,     0,     0,     0,  -462,
       0,  -462,  -462,  -462,     0,  -462,  -462,  -462,     0,     0,
       0,  -462,     0,     0,     0,     0,  -462,     0,  -606,  -462,
       0,     0,     0,     0,     0,     0,     0,  -606,     0,  -606,
    -606,  -606,  -606,  -606,  -606,  -606,     0,     0,  -606,     0,
       0,     0,  -606,     0,     0,     0,  -606,     0,     0,     0,
       0,     0,     0,     0,   113,  -606,  -606,  -606,  -606,     0,
    -601,     0,     0,     0,     0,  -606,     0,  -606,  -606,  -606,
       0,  -606,  -606,  -606,     0,  -601,  -601,  -606,     0,  -601,
    -601,     0,  -606,  -601,  -601,  -606,     0,  -601,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -601,  -601,     0,     0,
    -601,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     117,     0,     0,     0,     0,     0,   118,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   119,   120,     0,     0,   121,   122,     0,     0,   123,
     124,     0,     0,   125,  -601,     0,     0,     0,     0,     0,
       0,     0,     0,  -601,     0,  -601,  -601,  -601,  -601,  -601,
    -601,  -601,   126,   127,  -601,     0,   128,     0,  -601,     0,
       0,     0,  -601,     0,     0,     0,     0,     0,     0,     0,
       0,  -601,  -601,  -601,  -601,     0,     0,     0,     0,     0,
       0,  -601,     0,  -601,  -601,  -601,     0,  -601,  -601,  -601,
       0,     0,     0,  -601,     0,     0,     0,     0,  -601,     0,
     129,  -601,     0,     0,     0,     0,     0,     0,     0,   130,
       0,   131,   132,   133,   134,   135,   136,   137,     0,     0,
     138,     0,     0,     0,   139,     0,     0,     0,   140,     0,
       0,     0,     0,     0,     0,     0,   180,   141,   142,   143,
     144,     0,   118,     0,     0,     0,     0,   145,     0,   146,
     147,   148,     0,   149,   150,   151,     0,   119,   120,   152,
       0,   121,   122,     0,   153,   123,   124,   154,     0,   125,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   126,   127,
       0,     0,   128,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   209,     0,     0,     0,     0,     0,  -263,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -263,  -263,     0,     0,  -263,  -263,     0,
       0,  -263,  -263,     0,     0,  -263,   129,     0,     0,     0,
       0,     0,     0,     0,     0,   130,     0,   131,   132,   133,
     134,   135,   136,   137,  -263,  -263,   138,     0,  -263,     0,
     139,     0,     0,     0,   140,     0,     0,     0,     0,     0,
       0,     0,     0,   141,   142,   143,   144,     0,     0,     0,
       0,     0,     0,   145,     0,   146,   147,   148,     0,   149,
     150,   151,     0,     0,     0,   152,     0,     0,     0,     0,
     153,     0,  -263,   154,     0,     0,     0,     0,     0,     0,
       0,  -263,     0,  -263,  -263,  -263,  -263,  -263,  -263,  -263,
       0,     0,  -263,     0,     0,     0,  -263,     0,     0,     0,
    -263,     0,     0,     0,     0,     0,     0,     0,   279,  -263,
    -263,  -263,  -263,     0,   118,     0,     0,     0,     0,  -263,
       0,  -263,  -263,  -263,     0,  -263,  -263,  -263,     0,   119,
     120,  -263,     0,   121,   122,     0,  -263,   123,   124,  -263,
       0,   125,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     126,   127,     0,     0,   128,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   286,     0,     0,     0,     0,     0,
    -593,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -593,  -593,     0,     0,  -593,
    -593,     0,     0,  -593,  -593,     0,     0,  -593,   129,     0,
       0,     0,     0,     0,     0,     0,     0,   130,     0,   131,
     132,   133,   134,   135,   136,   137,  -593,  -593,   138,     0,
    -593,     0,   139,     0,     0,     0,   140,     0,     0,     0,
       0,     0,     0,     0,     0,   141,   142,   143,   144,     0,
       0,     0,     0,     0,     0,   145,     0,   146,   147,   148,
       0,   149,   150,   151,     0,     0,     0,   152,     0,     0,
       0,     0,   153,     0,  -593,   154,     0,     0,     0,     0,
       0,     0,     0,  -593,     0,  -593,  -593,  -593,  -593,  -593,
    -593,  -593,     0,     0,  -593,     0,     0,     0,  -593,     0,
       0,     0,  -593,     0,     0,     0,     0,     0,     0,     0,
     382,  -593,  -593,  -593,  -593,     0,   118,     0,     0,     0,
       0,  -593,     0,  -593,  -593,  -593,     0,  -593,  -593,  -593,
       0,   119,   120,  -593,     0,   121,   122,     0,  -593,   123,
     124,  -593,     0,   125,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   126,   127,     0,     0,   128,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   534,     0,     0,     0,
       0,     0,   118,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   119,   120,     0,
       0,   121,   122,     0,     0,   123,   124,     0,     0,   125,
     129,     0,     0,     0,     0,     0,     0,     0,     0,   130,
       0,   131,   132,   133,   134,   135,   136,   137,   126,   127,
     138,     0,   128,     0,   139,     0,     0,     0,   140,     0,
       0,     0,     0,     0,     0,     0,     0,   141,   142,   143,
     144,     0,     0,     0,     0,     0,     0,   145,     0,   146,
     147,   148,     0,   149,   150,   151,     0,     0,     0,   152,
       0,     0,     0,     0,   153,     0,   129,   154,     0,     0,
       0,     0,     0,     0,     0,   130,     0,   131,   132,   133,
     134,   135,   136,   137,     0,     0,   138,     0,     0,     0,
     139,     0,     0,     0,   140,     0,     0,     0,     0,     0,
       0,     0,   704,   141,   142,   143,   144,     0,   118,     0,
       0,     0,     0,   145,     0,   146,   147,   148,     0,   149,
     150,   151,     0,   119,   120,   152,     0,   121,   122,     0,
     153,   123,   124,   154,     0,   125,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   126,   127,     0,     0,   128,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   838,     0,
       0,     0,     0,     0,   118,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
     120,     0,     0,   121,   122,     0,     0,   123,   124,     0,
       0,   125,   129,     0,     0,     0,     0,     0,     0,     0,
       0,   130,     0,   131,   132,   133,   134,   135,   136,   137,
     126,   127,   138,     0,   128,     0,   139,     0,     0,     0,
     140,     0,     0,     0,     0,     0,     0,     0,     0,   141,
     142,   143,   144,     0,     0,     0,     0,     0,     0,   145,
       0,   146,   147,   148,     0,   149,   150,   151,     0,     0,
       0,   152,     0,     0,     0,     0,   153,     0,   129,   154,
       0,     0,     0,     0,     0,     0,     0,   130,     0,   131,
     132,   133,   134,   135,   136,   137,     0,     0,   138,     0,
       0,     0,   139,     0,     0,     0,   140,     0,     0,     0,
       0,     0,     0,     0,     0,   141,   142,   143,   144,     0,
       0,     0,     0,     0,     0,   145,     0,   146,   147,   148,
       0,   149,   150,   151,     0,     0,     5,   152,     0,     0,
       0,   472,   153,     7,     8,   154,     0,     0,     0,     0,
       0,    11,    12,  -403,    13,     0,     0,     0,     0,    14,
      15,     0,     0,     0,    16,     0,     0,   473,   474,     0,
      18,    19,    20,   475,    22,    23,    24,     0,    25,     0,
       0,     0,     0,     0,     0,     0,    26,     0,    27,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      28,     0,  -403,     0,     0,     0,  -403,    29,    30,    31,
      32,     0,     0,     0,     0,     0,     0,    33,    34,    35,
      36,     0,     0,     0,    37,     0,     0,     0,     0,     0,
      39,     0,     0,   476,     0,    41,    42,    43,    44,    45,
      46,    47,     0,    48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    49,     0,     0,    50,    51,
       0,    52,    53,     0,     0,     0,     0,     0,     0,     0,
      54,     0,     0,     5,    55,     0,     0,    56,   472,     0,
       7,     8,     0,     0,     0,     0,     0,     0,    11,    12,
    -402,    13,     0,     0,     0,     0,    14,    15,     0,     0,
       0,    16,    57,     0,   473,   474,     0,    18,    19,    20,
     475,    22,    23,    24,     0,    25,     0,     0,     0,     0,
       0,     0,     0,    26,     0,    27,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    28,     0,  -402,
       0,     0,     0,  -402,    29,    30,    31,    32,     0,     0,
       0,     0,     0,     0,    33,    34,    35,    36,     0,     0,
       0,    37,     0,     0,     0,     0,     0,    39,     0,     0,
     476,     0,    41,    42,    43,    44,    45,    46,    47,     0,
      48,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    49,     0,     0,    50,    51,     0,    52,    53,
       0,     0,     0,     0,     0,     0,     0,    54,     0,     0,
       5,    55,     0,     0,    56,     6,     0,     7,     8,     9,
       0,     0,    10,     0,     0,    11,    12,     0,    13,     0,
       0,     0,     0,    14,    15,     0,     0,     0,    16,    57,
       0,    17,     0,     0,    18,    19,    20,    21,    22,    23,
      24,     0,    25,     0,     0,     0,     0,     0,     0,     0,
      26,     0,    27,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    28,     0,     0,     0,     0,     0,
       0,    29,    30,    31,    32,     0,     0,     0,     0,     0,
       0,    33,    34,    35,    36,     0,     0,     0,    37,     0,
       0,     0,    38,     0,    39,     0,     0,    40,     0,    41,
      42,    43,    44,    45,    46,    47,     0,    48,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    49,
       0,     0,    50,    51,     0,    52,    53,     0,     0,     0,
       0,     0,     0,     0,    54,     0,     0,     5,    55,     0,
       0,    56,   472,     0,     7,     8,     0,     0,     0,     0,
       0,     0,    11,    12,   480,    13,     0,     0,     0,     0,
      14,    15,     0,     0,     0,    16,    57,     0,   473,   474,
       0,    18,    19,    20,   475,    22,    23,    24,     0,    25,
       0,     0,     0,     0,     0,     0,     0,    26,     0,    27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    28,     0,     0,     0,     0,     0,     0,    29,    30,
      31,    32,     0,     0,     0,     0,     0,     0,    33,    34,
      35,    36,     0,     0,     0,    37,     0,     0,     0,     0,
       0,    39,     0,     0,   476,     0,    41,    42,    43,    44,
      45,    46,    47,     0,    48,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    49,     0,     0,    50,
      51,     0,    52,    53,     0,     0,     0,     0,     0,     0,
       0,    54,     0,     0,     5,    55,     0,     0,    56,   472,
       0,     7,     8,     0,     0,     0,     0,     0,     0,    11,
      12,   630,    13,     0,     0,     0,     0,    14,    15,     0,
       0,     0,    16,    57,     0,   473,   474,     0,    18,    19,
      20,   475,    22,    23,    24,     0,    25,     0,     0,     0,
       0,     0,     0,     0,    26,     0,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,     0,
       0,     0,     0,     0,     0,    29,    30,    31,    32,     0,
       0,     0,     0,     0,     0,    33,    34,    35,    36,     0,
       0,     0,    37,     0,     0,     0,     0,     0,    39,     0,
       0,   476,     0,    41,    42,    43,    44,    45,    46,    47,
       0,    48,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    49,     0,     0,    50,    51,     0,    52,
      53,     0,     0,     0,     0,     0,     0,     0,    54,     0,
       0,     5,    55,     0,     0,    56,   472,     0,     7,     8,
       0,     0,     0,     0,     0,     0,    11,    12,   649,    13,
       0,     0,     0,     0,    14,    15,     0,     0,     0,    16,
      57,     0,   473,   474,     0,    18,    19,    20,   475,    22,
      23,    24,     0,    25,     0,     0,     0,     0,     0,     0,
       0,    26,     0,    27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,     0,     0,     0,
       0,     0,    29,    30,    31,    32,     0,     0,     0,     0,
       0,     0,    33,    34,    35,    36,     0,     0,     0,    37,
       0,     0,     0,     0,     0,    39,     0,     0,   476,     0,
      41,    42,    43,    44,    45,    46,    47,     0,    48,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      49,     0,     0,    50,    51,     0,    52,    53,     0,     0,
       0,     0,     0,     0,     0,    54,     0,     0,     5,    55,
       0,     0,    56,   472,     0,     7,     8,     0,     0,     0,
       0,     0,     0,    11,    12,   828,    13,     0,     0,     0,
       0,    14,    15,     0,     0,     0,    16,    57,     0,   473,
     474,     0,    18,    19,    20,   475,    22,    23,    24,     0,
      25,     0,     0,     0,     0,     0,     0,     0,    26,     0,
      27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    28,     0,     0,     0,     0,     0,     0,    29,
      30,    31,    32,     0,     0,     0,     0,     0,     0,    33,
      34,    35,    36,     0,     0,     0,    37,     0,     0,     0,
       0,     0,    39,     0,     0,   476,     0,    41,    42,    43,
      44,    45,    46,    47,     0,    48,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    49,     0,     0,
      50,    51,     0,    52,    53,     0,     0,     0,     0,     0,
       0,     0,    54,     0,     0,     5,    55,     0,     0,    56,
     472,     0,     7,     8,     0,     0,     0,     0,     0,     0,
      11,    12,   928,    13,     0,     0,     0,     0,    14,    15,
       0,     0,     0,    16,    57,     0,   473,   474,     0,    18,
      19,    20,   475,    22,    23,    24,     0,    25,     0,     0,
       0,     0,     0,     0,     0,    26,     0,    27,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    28,
       0,     0,     0,     0,     0,     0,    29,    30,    31,    32,
       0,     0,     0,     0,     0,     0,    33,    34,    35,    36,
       0,     0,     0,    37,     0,     0,     0,     0,     0,    39,
       0,     0,   476,     0,    41,    42,    43,    44,    45,    46,
      47,     0,    48,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    49,     0,     0,    50,    51,     0,
      52,    53,     0,     0,     0,     0,     0,     0,     0,    54,
       0,     0,     5,    55,     0,     0,    56,   472,     0,     7,
       8,     0,     0,     0,     0,     0,     0,    11,    12,   959,
      13,     0,     0,     0,     0,    14,    15,     0,     0,     0,
      16,    57,     0,   473,   474,     0,    18,    19,    20,   475,
      22,    23,    24,     0,    25,     0,     0,     0,     0,     0,
       0,     0,    26,     0,    27,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,     0,     0,     0,
       0,     0,     0,    29,    30,    31,    32,     0,     0,     0,
       0,     0,     0,    33,    34,    35,    36,     0,     0,     0,
      37,     0,     0,     0,     0,     0,    39,     0,     0,   476,
       0,    41,    42,    43,    44,    45,    46,    47,     0,    48,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    49,     0,     0,    50,    51,     0,    52,    53,     0,
       0,     0,     0,     0,     0,     0,    54,     0,     0,     5,
      55,     0,     0,    56,   472,     0,     7,     8,     0,     0,
       0,     0,     0,     0,    11,    12,   960,    13,     0,     0,
       0,     0,    14,    15,     0,     0,     0,    16,    57,     0,
     473,   474,     0,    18,    19,    20,   475,    22,    23,    24,
       0,    25,     0,     0,     0,     0,     0,     0,     0,    26,
       0,    27,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    28,     0,     0,     0,     0,     0,     0,
      29,    30,    31,    32,     0,     0,     0,     0,     0,     0,
      33,    34,    35,    36,     0,     0,     0,    37,     0,     0,
       0,     0,     0,    39,     0,     0,   476,     0,    41,    42,
      43,    44,    45,    46,    47,     0,    48,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    49,     0,
       0,    50,    51,     0,    52,    53,     0,     0,     0,     0,
       0,     0,     0,    54,     0,     0,     5,    55,     0,     0,
      56,   472,     0,     7,     8,     0,     0,     0,     0,     0,
       0,    11,    12,  1024,    13,     0,     0,     0,     0,    14,
      15,     0,     0,     0,    16,    57,     0,   473,   474,     0,
      18,    19,    20,   475,    22,    23,    24,     0,    25,     0,
       0,     0,     0,     0,     0,     0,    26,     0,    27,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      28,     0,     0,     0,     0,     0,     0,    29,    30,    31,
      32,     0,     0,     0,     0,     0,     0,    33,    34,    35,
      36,     0,     0,     0,    37,     0,     0,     0,     0,     0,
      39,     0,     0,   476,     0,    41,    42,    43,    44,    45,
      46,    47,     0,    48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    49,     0,     0,    50,    51,
       0,    52,    53,     0,     0,     0,     0,     0,     0,     0,
      54,     0,     0,     5,    55,     0,     0,    56,   472,     0,
       7,     8,     0,     0,     0,     0,     0,     0,    11,    12,
    -637,    13,     0,     0,     0,     0,    14,    15,     0,     0,
       0,    16,    57,     0,   473,   474,     0,    18,    19,    20,
     475,    22,    23,    24,     0,    25,     0,     0,     0,     0,
       0,     0,     0,    26,     0,    27,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    28,     0,     0,
       0,     0,     0,     0,    29,    30,    31,    32,     0,     0,
       0,     0,     0,     0,    33,    34,    35,    36,     0,     0,
       0,    37,     0,     0,     0,     0,     0,    39,     0,     0,
     476,     0,    41,    42,    43,    44,    45,    46,    47,     0,
      48,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    49,     0,     0,    50,    51,     0,    52,    53,
       0,     0,     0,     0,     0,     0,     0,    54,     0,     0,
       5,    55,     0,     0,    56,   472,     0,     7,     8,     0,
       0,     0,     0,     0,     0,    11,    12,  1090,    13,     0,
       0,     0,     0,    14,    15,     0,     0,     0,    16,    57,
       0,   473,   474,     0,    18,    19,    20,   475,    22,    23,
      24,     0,    25,     0,     0,     0,     0,     0,     0,     0,
      26,     0,    27,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    28,     0,     0,     0,     0,     0,
       0,    29,    30,    31,    32,     0,     0,     0,     0,     0,
       0,    33,    34,    35,    36,     0,     0,     0,    37,     0,
       0,     0,     0,     0,    39,     0,     0,   476,     0,    41,
      42,    43,    44,    45,    46,    47,     0,    48,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    49,
       0,     0,    50,    51,     0,    52,    53,     0,     0,     0,
       0,     0,     0,     0,    54,     0,     0,     5,    55,     0,
       0,    56,   472,     0,     7,     8,     0,     0,     0,     0,
       0,     0,    11,    12,  1142,    13,     0,     0,     0,     0,
      14,    15,     0,     0,     0,    16,    57,     0,   473,   474,
       0,    18,    19,    20,   475,    22,    23,    24,     0,    25,
       0,     0,     0,     0,     0,     0,     0,    26,     0,    27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    28,     0,     0,     0,     0,     0,     0,    29,    30,
      31,    32,     0,     0,     0,     0,     0,     0,    33,    34,
      35,    36,     0,     0,     0,    37,     0,     0,     0,     0,
       0,    39,     0,     0,   476,     0,    41,    42,    43,    44,
      45,    46,    47,     0,    48,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    49,     0,     0,    50,
      51,     0,    52,    53,     0,     0,     0,     0,     0,     0,
       0,    54,     0,     0,     5,    55,     0,     0,    56,   472,
       0,     7,     8,     0,     0,     0,     0,     0,     0,    11,
      12,     0,    13,     0,     0,     0,     0,    14,    15,     0,
       0,     0,    16,    57,     0,   473,   474,     0,    18,    19,
      20,   475,    22,    23,    24,     0,    25,     0,     0,     0,
       0,     0,     0,     0,    26,     0,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,  -627,
       0,     0,     0,     0,     0,    29,    30,    31,    32,     0,
       0,     0,     0,     0,     0,    33,    34,    35,    36,     0,
       0,     0,    37,     0,     0,     0,     0,     0,    39,     0,
       0,   476,     0,    41,    42,    43,    44,    45,    46,    47,
       0,    48,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    49,     0,     0,    50,    51,     0,    52,
      53,     0,     0,     0,     0,     0,     0,     0,    54,     0,
       0,     5,    55,     0,     0,    56,   472,     0,     7,     8,
       0,     0,     0,     0,     0,     0,    11,    12,  -629,    13,
       0,     0,     0,     0,    14,    15,     0,     0,     0,    16,
      57,     0,   473,   474,     0,    18,    19,    20,   475,    22,
      23,    24,     0,    25,   118,     0,     0,     0,     0,     0,
       0,    26,     0,    27,     0,     0,     0,     0,     0,   119,
     120,     0,     0,   121,   122,    28,     0,   123,   124,     0,
       0,   125,    29,    30,    31,    32,   461,     0,     0,     0,
       0,     0,    33,    34,    35,    36,     0,     0,     0,    37,
     126,   127,     0,     0,   128,    39,     0,     0,   476,     0,
      41,    42,    43,    44,    45,    46,    47,     0,    48,     0,
       0,     0,     0,   118,     0,     0,     0,     0,     0,     0,
      49,     0,     0,    50,    51,     0,    52,    53,   119,   120,
       0,     0,   121,   122,     0,    54,   123,   124,   129,    55,
     125,     0,    56,     0,     0,     0,     0,   130,     0,   131,
     132,   133,   134,   135,   136,   137,     0,     0,   138,   126,
     127,     0,   139,   128,   462,     0,   140,    57,     0,     0,
     370,     0,     0,     0,     0,   141,   142,   143,   144,     0,
       0,     0,     0,     0,     0,   145,     0,   146,   147,   148,
       0,   149,   150,   151,     0,     0,     0,   152,     0,     0,
       0,     0,   153,     0,     0,   154,     0,   129,     0,     0,
       0,     0,     0,     0,     0,     0,   130,     0,   131,   132,
     133,   134,   135,   136,   137,     0,     0,   138,     0,     0,
       0,   139,     0,     0,     0,   140,     0,     0,     0,     0,
       0,     0,     0,     0,   141,   142,   143,   144,     0,   118,
       0,     0,     0,     0,   145,     0,   146,   147,   148,     0,
     149,   150,   151,     0,   119,   120,   152,     0,   121,   122,
       0,   153,   123,   124,   154,     0,   125,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   126,   127,     0,     0,   128,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   118,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,   120,     0,     0,   121,   122,     0,     0,   123,   124,
       0,     0,   125,   129,     0,     0,     0,     0,     0,     0,
       0,     0,   130,     0,   131,   132,   133,   134,   135,   136,
     137,   126,   127,   138,     0,   128,     0,   139,     0,     0,
       0,   140,   850,     0,     0,     0,     0,     0,     0,     0,
     141,   142,   143,   144,     0,     0,     0,     0,     0,     0,
     145,     0,   146,   147,   148,     0,   149,   150,   151,     0,
       0,     0,   152,     0,     0,     0,     0,   153,     0,   129,
     154,     0,     0,     0,     0,     0,     0,     0,   130,     0,
     131,   132,   133,   134,   135,   136,   137,     0,     0,   138,
       0,     0,     0,   139,     0,     0,     0,   140,     0,     0,
       0,     0,     0,     0,     0,     0,   141,   142,   143,   144,
       0,     0,     0,     0,     0,     0,   145,     0,   146,   147,
     148,     0,   149,   150,   151,     0,     0,     0,   152,     0,
       0,     0,     0,   153,     0,     0,   154
};

static const yytype_int16 yycheck[] =
{
       5,   564,   256,     8,   258,   370,   592,    78,    79,    40,
     290,   308,   518,   463,    75,    76,   301,   360,   361,   362,
     363,   364,    27,   241,   282,   243,    31,    32,    33,    34,
      35,   285,    37,   524,    39,   128,   959,   960,     1,     1,
       1,     1,    51,     1,    64,     1,    62,    51,     1,    88,
       1,     1,   167,     1,     1,     1,    95,    62,     1,   152,
     153,     1,     1,     1,    69,     1,    71,     1,    82,     1,
      33,    64,    64,   112,    13,   114,     0,    82,    83,     1,
      85,    86,    87,    33,     0,    33,    33,     1,     1,     1,
      64,     1,     1,    98,   147,    35,   101,     1,   103,    18,
     105,     1,     1,     1,    50,    50,   111,    51,   113,     1,
       1,    51,    58,    59,   167,   154,     1,   703,    32,    72,
      64,    64,   168,    69,   126,   139,     1,   126,    72,     7,
       6,    77,     1,    33,     1,    81,    81,   139,    72,    51,
     179,   140,     1,    65,    64,     1,    66,     1,    67,   169,
       1,   190,     1,     1,    93,   171,    34,     1,   167,     1,
       1,   166,   167,   168,    68,   126,   170,   172,   126,   174,
      68,   210,   177,    48,    49,   167,   169,   138,   183,   140,
     138,   186,   140,   188,   147,   246,   139,   192,   126,   139,
      81,   139,   139,    33,    48,   169,   139,   143,   144,   145,
     139,   206,   140,   139,   209,   167,   211,   139,   170,   169,
     170,   172,   168,   218,   172,   220,   707,   168,   168,  1142,
     225,   167,   168,    61,   589,    64,   139,   167,   167,   234,
     139,   236,   486,   167,   126,   520,   275,   242,   277,    18,
     458,   280,   247,   501,   502,   167,   251,   139,   287,    28,
     255,    30,   257,   167,   259,   167,   261,   167,   263,   264,
     265,   139,   147,   268,   139,   358,   359,   167,   167,   274,
     139,    64,   139,     1,   279,   167,   167,   282,     6,   284,
     139,   286,   167,   139,   323,   139,    16,    17,   139,    51,
     139,   139,   331,   332,   333,   139,   335,   139,   139,    29,
    1005,  1006,  1007,   342,    18,    64,    60,   147,    64,    39,
      72,    73,    64,    48,    64,    52,    78,    79,    80,    33,
      81,    64,    64,     3,     4,     5,    16,    17,    64,    45,
     169,   170,   170,    48,    96,    97,    56,   903,    64,    29,
     118,   907,    64,    64,   794,    13,    55,   125,    16,    39,
      53,   170,    64,    33,    57,     1,  1061,   396,    81,    64,
      64,  1066,    64,     1,    44,    45,    46,    47,    48,    49,
      86,  1076,   102,    64,    91,    92,   169,   382,   383,    64,
     126,   420,    64,    39,   139,    64,    61,    64,    64,   394,
     395,   430,    18,   432,    64,   692,   126,   168,   126,    37,
     697,   698,   139,   157,   139,   167,    86,   687,   688,   689,
     471,   170,   102,   169,   419,   758,    61,   169,   703,   699,
     170,  1126,    68,   168,   139,   464,   169,   170,   170,   434,
     435,   436,   149,   147,   170,    73,   126,   146,    76,   169,
      78,    79,    80,   169,   170,   476,   451,   169,   169,   168,
     130,   131,  1038,  1039,    56,   961,   962,   169,    96,    97,
     499,   168,   467,   468,   169,   169,    61,   169,    16,    17,
     168,   127,    58,    59,   253,   480,   168,    63,   169,    13,
     519,    29,    16,   488,   169,   490,    50,   169,   126,   127,
     169,    39,   169,   169,    58,    59,   501,   502,    88,   169,
      20,   139,    64,   508,    66,    69,   511,   126,   513,   167,
     100,    13,   170,    77,    16,   160,   161,   169,   170,   138,
     299,   140,    50,   167,   167,   564,   170,   170,   533,   308,
      58,    59,   537,   168,    68,   167,   833,   119,   170,   167,
     122,   131,   170,   322,   168,   324,   325,   326,   327,   139,
     329,   160,   161,   172,   102,   103,   104,   336,   337,   338,
     167,   167,    20,   170,   170,   344,   345,   346,   347,   348,
     349,   350,   158,   159,   162,   163,   164,   638,   126,   143,
     144,   145,   355,   356,   357,    13,   169,   592,    16,    17,
     168,   275,   597,   277,   168,   600,    14,    15,   603,   670,
      18,    29,    20,   664,   169,   170,    66,   646,   613,   126,
      38,    39,   169,   170,   979,   143,   144,   145,   168,  1182,
     139,   138,    51,   140,    42,   168,   923,   169,   170,    14,
      15,   365,   366,   168,    19,    20,    65,    66,    67,    85,
      86,   680,   168,    72,   649,   706,   168,   708,   653,   654,
     168,   656,    70,   658,   168,   172,   661,    42,   168,   168,
     665,   666,   667,   168,   168,    93,   671,   168,    86,    87,
     168,   710,   711,   168,   102,   103,   104,   168,    14,    15,
     168,   168,    18,   139,    20,    32,    33,   139,    35,   943,
     139,    18,    72,   170,   139,   700,   139,    18,   126,   704,
     139,    86,    87,    88,    51,   139,    42,    50,   169,   748,
      51,   716,   717,   170,    73,   100,   139,   139,    65,    78,
      79,    80,    20,    20,    18,    72,   139,   139,  1117,  1118,
     170,  1028,    48,  1122,    70,   168,    76,    96,    97,  1128,
    1129,  1130,    71,   169,  1041,    64,   139,    18,   787,  1046,
      86,    87,  1049,   170,   170,    81,   170,    53,   169,   798,
     799,   170,   169,   169,   169,   169,   169,   772,   169,   169,
     831,   169,   169,  1070,   169,   169,   139,   782,   170,   139,
     169,   139,   170,   170,    83,   167,     1,     1,    33,   170,
      47,    28,   797,    81,   139,   169,   169,  1094,    72,   167,
     139,   172,   139,   168,   139,    66,  1103,   846,   139,   848,
      51,   139,    28,   170,   875,   169,   821,   139,   138,   824,
     825,    79,    28,   828,   170,   169,    18,   100,   170,    78,
     835,   836,    51,    73,   139,   107,   170,    90,   139,    66,
      66,    18,   910,  1140,   849,   168,  1051,   909,  1048,   701,
     953,   169,  1030,   854,    64,   634,   635,   636,   637,   443,
     292,   233,   925,   798,   588,   904,     4,   405,   873,   810,
     451,    13,    13,   108,   587,  1088,    70,   938,   493,   165,
     785,  1009,  1123,   662,   792,  1131,  1119,  1054,   893,   499,
     615,   896,   799,   680,   430,   492,   245,   957,   828,  1101,
     849,  1024,   310,   713,    -1,    -1,    -1,   912,   913,    -1,
      -1,    -1,   917,   692,    -1,    -1,   955,   956,   697,   698,
      -1,    -1,    -1,   928,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   721,   722,    -1,    -1,   725,    -1,    -1,    -1,
      -1,   730,    -1,    -1,   959,   960,    -1,   736,    -1,   738,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1031,   750,    -1,    -1,    -1,    -1,    -1,   756,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   770,   771,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1005,  1006,  1007,    -1,    -1,    -1,  1011,  1012,  1013,    -1,
      -1,  1016,  1017,    -1,    -1,    -1,    -1,    -1,    -1,  1024,
      -1,  1026,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1038,  1039,    -1,    -1,    -1,    -1,    -1,
      -1,   820,  1047,    -1,    -1,  1050,    -1,    -1,    -1,    -1,
      -1,  1056,    -1,  1092,   833,    -1,  1061,    -1,  1063,    -1,
      -1,  1066,    -1,  1068,    -1,    -1,  1071,    -1,    -1,    -1,
      -1,  1076,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1090,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1101,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1175,    -1,    -1,    -1,    -1,    -1,
      -1,  1126,    -1,    -1,  1185,    -1,    -1,   906,    -1,  1134,
    1135,    -1,    -1,    -1,    -1,    -1,    -1,  1142,    -1,    -1,
      -1,    -1,    -1,  1182,   923,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1172,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,    -1,  1189,  1190,  1191,     7,    -1,    -1,
      -1,    -1,    -1,   972,    -1,    -1,    -1,   976,    -1,    -1,
      -1,    -1,    22,    23,    -1,    -1,    26,    27,    -1,    -1,
      30,    31,   991,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    54,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1028,
      -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,
       7,    -1,  1041,    -1,    -1,    -1,    -1,  1046,    -1,    -1,
    1049,    -1,    -1,  1052,    -1,    22,    23,    -1,    -1,    26,
      27,   101,    -1,    30,    31,    -1,    -1,    34,    -1,    -1,
     110,  1070,   112,   113,   114,   115,   116,   117,   118,    -1,
      -1,   121,    -1,    -1,    -1,   125,    53,    54,    -1,   129,
      57,    -1,    -1,    -1,    -1,  1094,    -1,    -1,   138,   139,
     140,   141,    -1,    -1,  1103,    -1,    -1,    -1,   148,    -1,
     150,   151,   152,    -1,   154,   155,   156,    -1,    -1,    -1,
     160,    -1,    -1,    -1,    -1,   165,    -1,   167,   168,    -1,
     170,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,
      -1,  1140,    -1,   110,    -1,   112,   113,   114,   115,   116,
     117,   118,    -1,    -1,   121,    -1,    -1,    -1,   125,    -1,
      -1,    -1,   129,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,   138,   139,   140,   141,    -1,     7,    -1,    -1,    -1,
      -1,   148,    -1,   150,   151,   152,    -1,   154,   155,   156,
      -1,    22,    23,   160,    -1,    26,    27,    -1,   165,    30,
      31,   168,   169,    34,    -1,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    54,    -1,    -1,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,
      -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,
      -1,    26,    27,    -1,    -1,    30,    31,    -1,    -1,    34,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,
      -1,   112,   113,   114,   115,   116,   117,   118,    53,    54,
     121,    -1,    57,    -1,   125,    -1,   127,    -1,   129,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,   139,   140,
     141,    -1,    -1,    -1,    -1,    -1,    -1,   148,    -1,   150,
     151,   152,    -1,   154,   155,   156,    -1,    -1,    -1,   160,
      -1,    -1,    -1,    -1,   165,    -1,   101,   168,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   110,    -1,   112,   113,   114,
     115,   116,   117,   118,    -1,    -1,   121,    -1,    -1,    -1,
     125,    -1,    -1,    -1,   129,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   138,   139,   140,   141,    -1,    -1,    -1,
      -1,    -1,    -1,   148,    -1,   150,   151,   152,    -1,   154,
     155,   156,     1,    -1,    -1,   160,    -1,    -1,     7,    -1,
     165,    -1,   167,   168,    -1,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    -1,    -1,    26,    27,    -1,
      -1,    30,    31,    -1,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    54,    -1,    -1,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
      -1,    -1,    -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    -1,    -1,    26,    27,    -1,    -1,    30,    31,    -1,
      -1,    34,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   110,    -1,   112,   113,   114,   115,   116,   117,   118,
      53,    54,   121,    -1,    57,    -1,   125,    -1,    -1,    -1,
     129,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,
     139,   140,   141,    -1,    -1,    -1,    -1,    -1,    -1,   148,
      -1,   150,   151,   152,    -1,   154,   155,   156,    -1,    -1,
      -1,   160,    -1,    -1,    -1,    -1,   165,    -1,   101,   168,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,   112,
     113,   114,   115,   116,   117,   118,    -1,    -1,   121,    -1,
      -1,    -1,   125,    -1,    -1,    -1,   129,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,   138,   139,   140,   141,    -1,
       7,    -1,    -1,    -1,    -1,   148,    -1,   150,   151,   152,
      -1,   154,   155,   156,    -1,    22,    23,   160,    -1,    26,
      27,    -1,   165,    30,    31,   168,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    54,    -1,    -1,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,    -1,    -1,    -1,    -1,     7,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    -1,    -1,    26,    27,    -1,    -1,    30,
      31,    -1,    -1,    34,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   110,    -1,   112,   113,   114,   115,   116,
     117,   118,    53,    54,   121,    -1,    57,    -1,   125,    -1,
      -1,    -1,   129,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   138,   139,   140,   141,    -1,    -1,    -1,    -1,    -1,
      -1,   148,    -1,   150,   151,   152,    -1,   154,   155,   156,
      -1,    -1,    -1,   160,    -1,    -1,    -1,    -1,   165,    -1,
     101,   168,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,
      -1,   112,   113,   114,   115,   116,   117,   118,    -1,    -1,
     121,    -1,    -1,    -1,   125,    -1,    -1,    -1,   129,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,   138,   139,   140,
     141,    -1,     7,    -1,    -1,    -1,    -1,   148,    -1,   150,
     151,   152,    -1,   154,   155,   156,    -1,    22,    23,   160,
      -1,    26,    27,    -1,   165,    30,    31,   168,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    54,
      -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,     7,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    -1,    -1,    26,    27,    -1,
      -1,    30,    31,    -1,    -1,    34,   101,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   110,    -1,   112,   113,   114,
     115,   116,   117,   118,    53,    54,   121,    -1,    57,    -1,
     125,    -1,    -1,    -1,   129,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   138,   139,   140,   141,    -1,    -1,    -1,
      -1,    -1,    -1,   148,    -1,   150,   151,   152,    -1,   154,
     155,   156,    -1,    -1,    -1,   160,    -1,    -1,    -1,    -1,
     165,    -1,   101,   168,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   110,    -1,   112,   113,   114,   115,   116,   117,   118,
      -1,    -1,   121,    -1,    -1,    -1,   125,    -1,    -1,    -1,
     129,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,   138,
     139,   140,   141,    -1,     7,    -1,    -1,    -1,    -1,   148,
      -1,   150,   151,   152,    -1,   154,   155,   156,    -1,    22,
      23,   160,    -1,    26,    27,    -1,   165,    30,    31,   168,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    54,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,
       7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,
      27,    -1,    -1,    30,    31,    -1,    -1,    34,   101,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,   112,
     113,   114,   115,   116,   117,   118,    53,    54,   121,    -1,
      57,    -1,   125,    -1,    -1,    -1,   129,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   138,   139,   140,   141,    -1,
      -1,    -1,    -1,    -1,    -1,   148,    -1,   150,   151,   152,
      -1,   154,   155,   156,    -1,    -1,    -1,   160,    -1,    -1,
      -1,    -1,   165,    -1,   101,   168,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   110,    -1,   112,   113,   114,   115,   116,
     117,   118,    -1,    -1,   121,    -1,    -1,    -1,   125,    -1,
      -1,    -1,   129,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,   138,   139,   140,   141,    -1,     7,    -1,    -1,    -1,
      -1,   148,    -1,   150,   151,   152,    -1,   154,   155,   156,
      -1,    22,    23,   160,    -1,    26,    27,    -1,   165,    30,
      31,   168,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    54,    -1,    -1,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,
      -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,
      -1,    26,    27,    -1,    -1,    30,    31,    -1,    -1,    34,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,
      -1,   112,   113,   114,   115,   116,   117,   118,    53,    54,
     121,    -1,    57,    -1,   125,    -1,    -1,    -1,   129,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,   139,   140,
     141,    -1,    -1,    -1,    -1,    -1,    -1,   148,    -1,   150,
     151,   152,    -1,   154,   155,   156,    -1,    -1,    -1,   160,
      -1,    -1,    -1,    -1,   165,    -1,   101,   168,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   110,    -1,   112,   113,   114,
     115,   116,   117,   118,    -1,    -1,   121,    -1,    -1,    -1,
     125,    -1,    -1,    -1,   129,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,   138,   139,   140,   141,    -1,     7,    -1,
      -1,    -1,    -1,   148,    -1,   150,   151,   152,    -1,   154,
     155,   156,    -1,    22,    23,   160,    -1,    26,    27,    -1,
     165,    30,    31,   168,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    54,    -1,    -1,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
      -1,    -1,    -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    -1,    -1,    26,    27,    -1,    -1,    30,    31,    -1,
      -1,    34,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   110,    -1,   112,   113,   114,   115,   116,   117,   118,
      53,    54,   121,    -1,    57,    -1,   125,    -1,    -1,    -1,
     129,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,
     139,   140,   141,    -1,    -1,    -1,    -1,    -1,    -1,   148,
      -1,   150,   151,   152,    -1,   154,   155,   156,    -1,    -1,
      -1,   160,    -1,    -1,    -1,    -1,   165,    -1,   101,   168,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,   112,
     113,   114,   115,   116,   117,   118,    -1,    -1,   121,    -1,
      -1,    -1,   125,    -1,    -1,    -1,   129,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   138,   139,   140,   141,    -1,
      -1,    -1,    -1,    -1,    -1,   148,    -1,   150,   151,   152,
      -1,   154,   155,   156,    -1,    -1,     1,   160,    -1,    -1,
      -1,     6,   165,     8,     9,   168,    -1,    -1,    -1,    -1,
      -1,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,
      25,    -1,    -1,    -1,    29,    -1,    -1,    32,    33,    -1,
      35,    36,    37,    38,    39,    40,    41,    -1,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    -1,    67,    -1,    -1,    -1,    71,    72,    73,    74,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    82,    83,    84,
      85,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,
      95,    -1,    -1,    98,    -1,   100,   101,   102,   103,   104,
     105,   106,    -1,   108,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,   123,   124,
      -1,   126,   127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     135,    -1,    -1,     1,   139,    -1,    -1,   142,     6,    -1,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    24,    25,    -1,    -1,
      -1,    29,   167,    -1,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    -1,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    51,    -1,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    67,
      -1,    -1,    -1,    71,    72,    73,    74,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    83,    84,    85,    -1,    -1,
      -1,    89,    -1,    -1,    -1,    -1,    -1,    95,    -1,    -1,
      98,    -1,   100,   101,   102,   103,   104,   105,   106,    -1,
     108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   120,    -1,    -1,   123,   124,    -1,   126,   127,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,    -1,    -1,
       1,   139,    -1,    -1,   142,     6,    -1,     8,     9,    10,
      -1,    -1,    13,    -1,    -1,    16,    17,    -1,    19,    -1,
      -1,    -1,    -1,    24,    25,    -1,    -1,    -1,    29,   167,
      -1,    32,    -1,    -1,    35,    36,    37,    38,    39,    40,
      41,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    73,    74,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    82,    83,    84,    85,    -1,    -1,    -1,    89,    -1,
      -1,    -1,    93,    -1,    95,    -1,    -1,    98,    -1,   100,
     101,   102,   103,   104,   105,   106,    -1,   108,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,
      -1,    -1,   123,   124,    -1,   126,   127,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   135,    -1,    -1,     1,   139,    -1,
      -1,   142,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      24,    25,    -1,    -1,    -1,    29,   167,    -1,    32,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,    -1,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,
      74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    82,    83,
      84,    85,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,
      -1,    95,    -1,    -1,    98,    -1,   100,   101,   102,   103,
     104,   105,   106,    -1,   108,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,   123,
     124,    -1,   126,   127,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   135,    -1,    -1,     1,   139,    -1,    -1,   142,     6,
      -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    24,    25,    -1,
      -1,    -1,    29,   167,    -1,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    73,    74,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    83,    84,    85,    -1,
      -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,    95,    -1,
      -1,    98,    -1,   100,   101,   102,   103,   104,   105,   106,
      -1,   108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   120,    -1,    -1,   123,   124,    -1,   126,
     127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,    -1,
      -1,     1,   139,    -1,    -1,   142,     6,    -1,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    24,    25,    -1,    -1,    -1,    29,
     167,    -1,    32,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    74,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    83,    84,    85,    -1,    -1,    -1,    89,
      -1,    -1,    -1,    -1,    -1,    95,    -1,    -1,    98,    -1,
     100,   101,   102,   103,   104,   105,   106,    -1,   108,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     120,    -1,    -1,   123,   124,    -1,   126,   127,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,    -1,    -1,     1,   139,
      -1,    -1,   142,     6,    -1,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    24,    25,    -1,    -1,    -1,    29,   167,    -1,    32,
      33,    -1,    35,    36,    37,    38,    39,    40,    41,    -1,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      73,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      83,    84,    85,    -1,    -1,    -1,    89,    -1,    -1,    -1,
      -1,    -1,    95,    -1,    -1,    98,    -1,   100,   101,   102,
     103,   104,   105,   106,    -1,   108,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,
     123,   124,    -1,   126,   127,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   135,    -1,    -1,     1,   139,    -1,    -1,   142,
       6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,    25,
      -1,    -1,    -1,    29,   167,    -1,    32,    33,    -1,    35,
      36,    37,    38,    39,    40,    41,    -1,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    82,    83,    84,    85,
      -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,    95,
      -1,    -1,    98,    -1,   100,   101,   102,   103,   104,   105,
     106,    -1,   108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   120,    -1,    -1,   123,   124,    -1,
     126,   127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
      -1,    -1,     1,   139,    -1,    -1,   142,     6,    -1,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    24,    25,    -1,    -1,    -1,
      29,   167,    -1,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    74,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    83,    84,    85,    -1,    -1,    -1,
      89,    -1,    -1,    -1,    -1,    -1,    95,    -1,    -1,    98,
      -1,   100,   101,   102,   103,   104,   105,   106,    -1,   108,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   120,    -1,    -1,   123,   124,    -1,   126,   127,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   135,    -1,    -1,     1,
     139,    -1,    -1,   142,     6,    -1,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    24,    25,    -1,    -1,    -1,    29,   167,    -1,
      32,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
      -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    73,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    83,    84,    85,    -1,    -1,    -1,    89,    -1,    -1,
      -1,    -1,    -1,    95,    -1,    -1,    98,    -1,   100,   101,
     102,   103,   104,   105,   106,    -1,   108,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,
      -1,   123,   124,    -1,   126,   127,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   135,    -1,    -1,     1,   139,    -1,    -1,
     142,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,
      25,    -1,    -1,    -1,    29,   167,    -1,    32,    33,    -1,
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
     135,    -1,    -1,     1,   139,    -1,    -1,   142,     6,    -1,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    24,    25,    -1,    -1,
      -1,    29,   167,    -1,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    -1,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    51,    -1,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    73,    74,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    83,    84,    85,    -1,    -1,
      -1,    89,    -1,    -1,    -1,    -1,    -1,    95,    -1,    -1,
      98,    -1,   100,   101,   102,   103,   104,   105,   106,    -1,
     108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   120,    -1,    -1,   123,   124,    -1,   126,   127,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,    -1,    -1,
       1,   139,    -1,    -1,   142,     6,    -1,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    24,    25,    -1,    -1,    -1,    29,   167,
      -1,    32,    33,    -1,    35,    36,    37,    38,    39,    40,
      41,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    73,    74,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    82,    83,    84,    85,    -1,    -1,    -1,    89,    -1,
      -1,    -1,    -1,    -1,    95,    -1,    -1,    98,    -1,   100,
     101,   102,   103,   104,   105,   106,    -1,   108,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,
      -1,    -1,   123,   124,    -1,   126,   127,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   135,    -1,    -1,     1,   139,    -1,
      -1,   142,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      24,    25,    -1,    -1,    -1,    29,   167,    -1,    32,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,    -1,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,
      74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    82,    83,
      84,    85,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,
      -1,    95,    -1,    -1,    98,    -1,   100,   101,   102,   103,
     104,   105,   106,    -1,   108,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,   123,
     124,    -1,   126,   127,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   135,    -1,    -1,     1,   139,    -1,    -1,   142,     6,
      -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    16,
      17,    -1,    19,    -1,    -1,    -1,    -1,    24,    25,    -1,
      -1,    -1,    29,   167,    -1,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    66,
      -1,    -1,    -1,    -1,    -1,    72,    73,    74,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    83,    84,    85,    -1,
      -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,    95,    -1,
      -1,    98,    -1,   100,   101,   102,   103,   104,   105,   106,
      -1,   108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   120,    -1,    -1,   123,   124,    -1,   126,
     127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,    -1,
      -1,     1,   139,    -1,    -1,   142,     6,    -1,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    24,    25,    -1,    -1,    -1,    29,
     167,    -1,    32,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,    -1,    43,     7,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    53,    -1,    -1,    -1,    -1,    -1,    22,
      23,    -1,    -1,    26,    27,    65,    -1,    30,    31,    -1,
      -1,    34,    72,    73,    74,    75,    39,    -1,    -1,    -1,
      -1,    -1,    82,    83,    84,    85,    -1,    -1,    -1,    89,
      53,    54,    -1,    -1,    57,    95,    -1,    -1,    98,    -1,
     100,   101,   102,   103,   104,   105,   106,    -1,   108,    -1,
      -1,    -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,
     120,    -1,    -1,   123,   124,    -1,   126,   127,    22,    23,
      -1,    -1,    26,    27,    -1,   135,    30,    31,   101,   139,
      34,    -1,   142,    -1,    -1,    -1,    -1,   110,    -1,   112,
     113,   114,   115,   116,   117,   118,    -1,    -1,   121,    53,
      54,    -1,   125,    57,   127,    -1,   129,   167,    -1,    -1,
      64,    -1,    -1,    -1,    -1,   138,   139,   140,   141,    -1,
      -1,    -1,    -1,    -1,    -1,   148,    -1,   150,   151,   152,
      -1,   154,   155,   156,    -1,    -1,    -1,   160,    -1,    -1,
      -1,    -1,   165,    -1,    -1,   168,    -1,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,   112,   113,
     114,   115,   116,   117,   118,    -1,    -1,   121,    -1,    -1,
      -1,   125,    -1,    -1,    -1,   129,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   138,   139,   140,   141,    -1,     7,
      -1,    -1,    -1,    -1,   148,    -1,   150,   151,   152,    -1,
     154,   155,   156,    -1,    22,    23,   160,    -1,    26,    27,
      -1,   165,    30,    31,   168,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    54,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     7,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    -1,    -1,    26,    27,    -1,    -1,    30,    31,
      -1,    -1,    34,   101,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   110,    -1,   112,   113,   114,   115,   116,   117,
     118,    53,    54,   121,    -1,    57,    -1,   125,    -1,    -1,
      -1,   129,   130,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     138,   139,   140,   141,    -1,    -1,    -1,    -1,    -1,    -1,
     148,    -1,   150,   151,   152,    -1,   154,   155,   156,    -1,
      -1,    -1,   160,    -1,    -1,    -1,    -1,   165,    -1,   101,
     168,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,
     112,   113,   114,   115,   116,   117,   118,    -1,    -1,   121,
      -1,    -1,    -1,   125,    -1,    -1,    -1,   129,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   138,   139,   140,   141,
      -1,    -1,    -1,    -1,    -1,    -1,   148,    -1,   150,   151,
     152,    -1,   154,   155,   156,    -1,    -1,    -1,   160,    -1,
      -1,    -1,    -1,   165,    -1,    -1,   168
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   174,   176,     0,   177,     1,     6,     8,     9,    10,
      13,    16,    17,    19,    24,    25,    29,    32,    35,    36,
      37,    38,    39,    40,    41,    43,    51,    53,    65,    72,
      73,    74,    75,    82,    83,    84,    85,    89,    93,    95,
      98,   100,   101,   102,   103,   104,   105,   106,   108,   120,
     123,   124,   126,   127,   135,   139,   142,   167,   175,   178,
     179,   192,   210,   212,   214,   216,   217,   255,   289,   300,
     303,   305,   311,   316,   323,   326,   329,   332,   333,   334,
     335,   336,   337,   381,   383,   384,   386,   392,   393,   410,
     420,   422,   427,   428,   432,   438,   440,   175,     1,   139,
     175,    52,   139,   219,   220,     1,    37,   139,   273,   300,
     303,     1,   433,     1,   429,     1,   441,     1,     7,    22,
      23,    26,    27,    30,    31,    34,    53,    54,    57,   101,
     110,   112,   113,   114,   115,   116,   117,   118,   121,   125,
     129,   138,   139,   140,   141,   148,   150,   151,   152,   154,
     155,   156,   160,   165,   168,   231,   236,   237,   238,   239,
     240,   241,   242,   244,   246,   249,     1,   139,     1,   139,
      13,    16,     1,   139,     1,   139,   168,   221,   175,   263,
       1,   249,    81,   249,   175,   175,   147,   175,     1,   175,
     265,   175,     1,     6,   126,   175,   175,    13,    16,    17,
      29,    38,    39,    93,   126,   336,     6,   279,   281,     1,
     267,     1,    64,   139,     1,   312,   340,   304,     1,   139,
       1,    81,   168,   264,   382,     1,    13,    93,   139,   175,
     227,    56,   211,   211,     1,   139,     1,   139,   283,   175,
      81,   272,   315,   175,     1,   306,   275,    18,    67,   251,
     251,     1,    33,   168,   331,     1,   331,     1,   331,     1,
     139,   318,   319,     1,   126,   139,   175,   414,     1,   175,
     398,   170,   398,   398,     1,   170,   175,   278,   397,     1,
     249,   250,   394,   396,     1,   258,     1,   423,   250,   175,
     193,   175,   170,   175,   175,   139,   260,   126,   305,    61,
     416,   314,   315,   175,   250,   175,   250,    18,    33,   147,
     442,   443,   444,   454,    51,    65,    66,    67,    72,   328,
     330,   221,   168,   168,   168,   168,   168,   168,   221,   168,
     238,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   238,   238,   250,    56,   162,   163,   164,   160,   161,
      58,    59,    63,   158,   159,    60,   157,    61,    62,   171,
      64,   328,   175,   175,   175,   421,    20,    20,   175,   175,
     169,   175,     1,   250,   399,    66,    66,    48,   139,   175,
     175,   175,   250,   175,    88,   100,   131,   139,   139,    13,
      16,     1,   338,   175,   139,   139,   175,   250,   175,   139,
      18,    72,   139,   347,   175,   170,   175,   301,   302,     1,
     271,    50,    58,    59,    69,    77,   143,   144,   145,   401,
     402,   388,   389,   175,   229,   228,   230,   218,   251,   218,
     175,   213,   175,   215,    73,    78,    79,    80,    96,    97,
     290,   292,   293,   299,   286,    48,   139,   286,   175,   286,
      18,    39,   127,   309,   310,   418,   251,     1,    65,   175,
     413,   259,     6,    32,    33,    38,    98,   252,   255,   325,
      18,   175,    55,   146,   208,   249,   256,   175,   318,   175,
     318,   175,   320,   170,   175,   175,   175,   175,   175,   385,
     175,   394,   394,   175,   250,   170,   397,   175,   318,   175,
     250,     1,   170,   261,   194,   209,   250,   220,   276,    50,
     274,   249,    51,   287,   416,   434,   430,    32,    33,    35,
      51,    65,    72,   460,     1,   208,   445,    18,   443,   249,
     250,   249,   249,   249,   249,   249,   250,   250,   250,     1,
     139,   250,   249,   249,   249,     1,   139,     1,   139,     1,
      48,    49,   139,   250,   232,   249,   249,   249,   249,   249,
     249,   249,   169,    53,    57,   237,   237,   237,   238,   238,
     239,   239,   239,   239,   239,   240,   240,   243,   245,   247,
     246,   170,   436,   437,   139,   139,   175,     1,   175,   400,
     266,   175,   175,   250,   269,   270,    20,    20,    18,   139,
     170,   285,   285,   268,   341,   387,    48,   139,   175,   233,
     234,   235,   250,   399,   250,   390,   391,   175,   175,   175,
      18,   168,   222,   222,   297,   295,   294,   296,   284,    51,
      72,   175,   291,   293,    76,   286,   419,   347,   250,    18,
     175,   175,   251,     1,    68,     1,    68,     1,    68,    13,
      16,    68,    71,   324,   327,     1,    35,    51,   175,   415,
     169,   318,   175,   175,   321,   401,   319,   390,   397,   397,
     395,   175,   424,   175,   139,   175,   439,     3,     4,     5,
      33,    44,    45,    46,    47,    48,    49,    86,   130,   131,
     195,   196,   197,   436,     1,   250,   403,   416,   288,   287,
     170,   170,   175,    18,   455,    81,     1,    32,   175,   459,
     169,   170,   170,   169,   169,   170,   169,     1,   169,   170,
     170,   169,   169,   169,   169,   169,   170,   169,   170,   169,
     169,   169,   169,   169,   169,   169,   169,   169,   170,   233,
     170,   169,   169,   169,   169,   169,   170,    53,    61,   241,
     242,   246,   139,   175,   437,   183,   181,   175,   175,   175,
      45,    86,   378,    14,    15,    19,    20,    42,    86,    87,
      88,   100,   368,   139,   139,   339,   280,   282,   175,   209,
     342,   343,   344,   345,   417,   418,   388,   169,   170,   170,
      16,    17,    29,    39,   102,   126,   169,   223,   224,   225,
      83,    91,    92,   149,   226,   249,   249,   249,   249,   251,
     298,   250,   307,   167,     1,    72,   175,   411,    18,   175,
     175,   254,   175,   253,   175,     1,     1,   175,     1,   249,
     251,   175,   175,   175,   331,   175,   322,   396,   170,   262,
     130,   209,   209,   209,    47,   208,   200,   208,   208,   209,
     175,   197,   416,    51,   175,   409,    28,   406,   251,   287,
     251,   250,   250,   460,    81,   457,   139,   175,   175,   249,
     249,   249,   169,   139,   249,   249,   249,   250,   169,   249,
     249,   239,   172,     1,   168,   188,     1,   168,   184,   249,
     249,   175,   372,   371,   370,    72,   369,   373,   175,   182,
     180,   342,   139,   250,   167,   349,   347,     1,    81,   175,
     317,   235,   391,   168,   169,   170,   139,   225,    18,   249,
     175,   351,   348,   349,   175,   175,   413,   251,   208,   175,
     175,    66,    66,   257,   250,   250,   439,   139,   200,   199,
     119,   122,   201,   198,    51,   404,   170,   407,   408,    18,
      18,   435,   431,   175,   139,   251,   446,   169,   169,   169,
     169,   169,   170,   169,   169,   169,   170,   169,   169,   248,
     175,   139,   189,   190,   175,   138,   185,   186,   379,   374,
     375,   376,   374,   250,   249,   374,   188,   184,   175,   175,
      14,    15,    18,    20,    42,    70,    86,    87,   350,   346,
     175,     1,    48,   139,   208,   224,     1,    51,   175,   412,
     126,   139,   313,    18,    18,   251,   318,   425,    28,   202,
     202,   277,   250,   250,    51,   408,   412,   412,   436,   436,
     456,    79,   453,   249,   249,   246,   191,   169,   170,   187,
     169,   170,    28,   380,   170,   249,     1,   126,   138,   140,
     172,   361,   362,     1,   126,   140,   353,   354,     1,    15,
     352,     1,   126,   138,   140,   172,   356,   357,   351,   351,
     351,   348,   175,   175,   175,   169,   175,   175,   308,   459,
      18,   175,   170,   208,   100,   203,   203,   251,   405,   175,
     175,    18,   208,    78,   169,   169,   208,   175,   190,   208,
     175,   186,   249,   375,   377,   175,   363,   364,   365,   170,
     351,   175,   355,   170,   351,   175,   208,   175,   358,   359,
     360,   170,   351,   314,     1,    33,   175,   458,   250,   208,
      73,   204,    18,    51,   458,   208,   139,     7,    34,   139,
     366,   367,   366,   366,   362,   366,   354,   351,   366,   366,
     366,   357,   175,   175,   426,   208,   412,   447,   107,   170,
     205,    90,   139,    66,   206,   448,   175,    82,   139,   251,
     168,   449,   207,    66,   233,   450,   169,   251,   451,    18,
       1,   147,   175,   452,   175,   175
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   173,   174,   175,   176,   177,   176,   178,   178,   178,
     178,   178,   179,   179,   180,   179,   181,   179,   182,   179,
     183,   179,   184,   184,   185,   185,   187,   186,   188,   188,
     189,   189,   191,   190,   193,   192,   192,   194,   194,   195,
     195,   196,   196,   197,   197,   197,   197,   197,   197,   197,
     198,   197,   197,   199,   197,   197,   197,   197,   197,   200,
     200,   201,   201,   202,   202,   203,   203,   204,   205,   204,
     206,   206,   207,   206,   208,   209,   210,   210,   211,   211,
     212,   213,   212,   214,   215,   214,   216,   216,   217,   217,
     218,   219,   219,   220,   221,   221,   222,   222,   222,   223,
     223,   224,   225,   225,   225,   225,   225,   225,   225,   226,
     226,   226,   226,   227,   228,   227,   229,   227,   230,   227,
     227,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   232,   231,   231,   231,   231,   233,
     233,   234,   234,   235,   236,   236,   236,   237,   237,   237,
     237,   238,   238,   238,   238,   239,   239,   239,   240,   240,
     240,   240,   240,   240,   241,   241,   241,   242,   243,   242,
     244,   245,   244,   246,   247,   248,   246,   249,   249,   250,
     250,   251,   251,   252,   252,   253,   252,   252,   254,   252,
     252,   252,   252,   252,   252,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   256,   255,   257,   255,   255,   258,
     255,   255,   255,   255,   259,   255,   260,   255,   255,   261,
     255,   262,   255,   255,   263,   255,   264,   255,   255,   265,
     266,   255,   255,   267,   268,   255,   255,   255,   269,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   270,   255,
     255,   271,   255,   255,   255,   255,   255,   272,   255,   255,
     255,   273,   274,   255,   255,   275,   255,   255,   255,   276,
     277,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   278,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   279,   280,   255,   281,   282,
     255,   283,   284,   255,   255,   255,   285,   285,   286,   288,
     287,   289,   289,   290,   291,   291,   291,   292,   292,   294,
     293,   295,   293,   296,   293,   297,   293,   298,   293,   299,
     299,   299,   300,   301,   300,   302,   300,   304,   303,   306,
     307,   308,   305,   305,   309,   310,   309,   312,   311,   313,
     313,   313,   314,   314,   315,   315,   316,   316,   316,   317,
     317,   317,   317,   317,   318,   318,   320,   319,   321,   322,
     321,   323,   324,   325,   325,   326,   326,   327,   327,   328,
     328,   329,   329,   329,   330,   330,   330,   331,   331,   331,
     332,   332,   333,   333,   334,   334,   335,   335,   336,   336,
     336,   338,   339,   337,   337,   340,   341,   337,   337,   342,
     342,   344,   343,   346,   345,   347,   348,   349,   349,   350,
     350,   350,   350,   350,   350,   350,   350,   350,   350,   350,
     351,   351,   352,   352,   353,   353,   355,   354,   354,   356,
     356,   358,   357,   359,   357,   360,   357,   357,   361,   361,
     363,   362,   364,   362,   365,   362,   362,   366,   367,   367,
     367,   367,   368,   368,   368,   368,   369,   368,   368,   370,
     368,   371,   368,   372,   368,   373,   368,   374,   374,   376,
     377,   375,   378,   379,   378,   380,   380,   382,   381,   383,
     383,   385,   384,   387,   386,   389,   388,   390,   390,   391,
     392,   392,   393,   393,   394,   395,   394,   396,   397,   398,
     399,   399,   400,   400,   401,   401,   401,   401,   401,   401,
     402,   402,   402,   404,   405,   403,   406,   403,   403,   407,
     407,   408,   409,   409,   410,   410,   411,   411,   411,   412,
     412,   412,   413,   413,   413,   414,   414,   414,   414,   415,
     415,   415,   415,   416,   416,   417,   417,   418,   419,   418,
     421,   420,   420,   423,   424,   425,   426,   422,   422,   427,
     427,   429,   430,   431,   428,   428,   433,   434,   435,   432,
     432,   436,   436,   437,   438,   439,   441,   440,   440,   442,
     442,   443,   443,   445,   446,   447,   448,   449,   450,   451,
     444,   452,   452,   452,   453,   453,   455,   456,   454,   454,
     457,   457,   458,   458,   458,   459,   459,   459,   460,   460,
     460,   460,   460,   460,   460
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
       6,     8,     6,     8,     4,     4,     6,     5,     4,     4,
       6,     6,     4,     6,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     0,     5,     2,     2,     3,     0,
       1,     1,     3,     1,     1,     3,     4,     1,     2,     2,
       2,     1,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     5,     1,     3,     3,     1,     0,     4,
       1,     0,     4,     1,     0,     0,     7,     1,     3,     1,
       2,     0,     2,     1,     3,     0,     7,     3,     0,     6,
       3,     3,     3,     4,     4,     1,     2,     2,     3,     3,
       4,     3,     4,     3,     0,     5,     0,     8,     3,     0,
       4,     3,     4,     3,     0,     6,     0,     8,     3,     0,
       4,     0,     6,     4,     0,     3,     0,     4,     2,     0,
       0,     5,     3,     0,     0,     5,     3,     3,     0,     6,
       5,     4,     4,     3,     2,     2,     2,     3,     0,     6,
       3,     0,     6,     4,     2,     3,     4,     0,     3,     3,
       4,     0,     0,     6,     5,     0,     5,     3,     3,     0,
       0,    11,     1,     1,     1,     1,     2,     3,     2,     3,
       2,     3,     2,     0,     4,     4,     3,     3,     3,     2,
       3,     3,     2,     3,     2,     0,     0,     7,     0,     0,
       7,     0,     0,     7,     3,     2,     0,     1,     0,     0,
       5,     1,     1,     2,     1,     1,     1,     1,     2,     0,
       3,     0,     3,     0,     3,     0,     3,     0,     4,     0,
       1,     1,     1,     0,     4,     0,     4,     0,     3,     0,
       0,     0,     9,     3,     1,     0,     3,     0,     3,     0,
       1,     1,     0,     1,     2,     2,     1,     3,     3,     1,
       3,     3,     3,     2,     1,     3,     0,     3,     0,     0,
       3,     3,     2,     0,     2,     3,     3,     3,     3,     1,
       1,     3,     3,     3,     1,     1,     1,     0,     2,     2,
       2,     1,     2,     1,     2,     1,     2,     1,     1,     1,
       1,     0,     0,     6,     4,     0,     0,     5,     3,     1,
       1,     0,     3,     0,     4,     0,     2,     0,     2,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     4,     3,
       0,     1,     0,     1,     1,     3,     0,     3,     1,     1,
       3,     0,     3,     0,     3,     0,     3,     1,     1,     3,
       0,     3,     0,     3,     0,     3,     1,     1,     1,     1,
       1,     2,     1,     1,     1,     2,     0,     3,     1,     0,
       3,     0,     3,     0,     3,     0,     3,     1,     3,     0,
       0,     4,     2,     0,     4,     0,     2,     0,     3,     3,
       2,     0,     4,     0,     5,     0,     2,     1,     3,     1,
       2,     2,     1,     1,     1,     0,     4,     1,     1,     1,
       2,     2,     1,     2,     1,     1,     1,     1,     1,     1,
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
#line 514 "rwlparser.y" /* yacc.c:1646  */
    {
	  ; // we are done!
	}
#line 3486 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 520 "rwlparser.y" /* yacc.c:1646  */
    { if (bit(rwm->mxq->errbits,RWL_ERROR_SEVERE)) YYABORT; }
#line 3492 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 526 "rwlparser.y" /* yacc.c:1646  */
    {  
	    bis(rwm->m2flags, RWL_P2_INTHING);
	    if (bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
	      YYACCEPT;
	  }
#line 3502 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 532 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->m2flags, RWL_P2_INTHING); 
	    if (bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
	      YYACCEPT;
	  }
#line 3512 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 552 "rwlparser.y" /* yacc.c:1646  */
    { rwlprintallvars(rwm); }
#line 3518 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 564 "rwlparser.y" /* yacc.c:1646  */
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
#line 3537 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 580 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->raname = rwm->inam;
	      bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	      bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	      rwm->ravarn = rwladdvar(rwm, rwm->inam, RWL_TYPE_RAST, 0);
	      rwlrastbeg(rwm, rwm->raname, RWL_TYPE_RAST);
	    }
#line 3549 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 589 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->raname = rwm->inam;
	      bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	      rwm->ravarn = rwladdvar(rwm, rwm->inam, RWL_TYPE_RAST, 0);
	      rwlrastbeg(rwm, rwm->raname, RWL_TYPE_RAST);
	    }
#line 3560 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 597 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->raname = rwm->inam;
	      bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	      bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	      rwm->ravarn = rwladdvar(rwm, rwm->inam, RWL_TYPE_RAPROC, 0);
	      rwlrastbeg(rwm, rwm->raname, RWL_TYPE_RAPROC);
	    }
#line 3572 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 606 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->raname = rwm->inam;
	      rwm->ravarn = rwladdvar(rwm, rwm->inam, RWL_TYPE_RAPROC, 0);
	      rwlrastbeg(rwm, rwm->raname, RWL_TYPE_RAPROC);
	    }
#line 3582 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 617 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlrastfin(rwm, rwm->raname, (sb4) rwm->ravarn);
	    }
#line 3590 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 621 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlcancelvar(rwm, rwm->raname, (sb4) rwm->ravarn);
	      rwlrastclear(rwm);
	      rwlerror(rwm, RWL_ERROR_DECL_RAST); 
	      yyerrok;
	    }
#line 3601 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 634 "rwlparser.y" /* yacc.c:1646  */
    {rwm->raentry = rwm->sval; }
#line 3607 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 636 "rwlparser.y" /* yacc.c:1646  */
    {rwlrastadd(rwm, rwm->raentry, rwm->pval.dval); }
#line 3613 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 642 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlrastfin(rwm, rwm->raname, (sb4) rwm->ravarn);
	    }
#line 3621 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 646 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlcancelvar(rwm, rwm->raname, (sb4) rwm->ravarn);
	      rwlrastclear(rwm);
	      rwlerror(rwm, RWL_ERROR_DECL_RAPROC); 
	      yyerrok;
	    }
#line 3632 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 658 "rwlparser.y" /* yacc.c:1646  */
    {rwm->raentry = rwm->inam; }
#line 3638 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 660 "rwlparser.y" /* yacc.c:1646  */
    {rwlrastadd(rwm, rwm->raentry, rwm->pval.dval); }
#line 3644 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 665 "rwlparser.y" /* yacc.c:1646  */
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
#line 3665 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 682 "rwlparser.y" /* yacc.c:1646  */
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
#line 3725 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 738 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DATABASE_WRONG); yyerrok; }
#line 3731 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 744 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
	        if (rwm->dbsav->username)
		  rwlerror(rwm, RWL_ERROR_DBSPEC_ALREADY, "username");
		else
		  rwm->dbsav->username = rwlstrdup(rwm, rwm->pval.sval);
	      }
	    }
#line 3745 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 764 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
	        if (rwm->dbsav->username)
		  rwlerror(rwm, RWL_ERROR_DBSPEC_ALREADY, "username");
		else
		  rwm->dbsav->username = rwlstrdup(rwm, rwm->pval.sval);
	      }
	    }
#line 3759 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 774 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	        rwm->dbsav->password = rwlstrdup(rwm, rwm->pval.sval);
	    }
#line 3768 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 779 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwlcclassgood(rwm, (rwm->pval.sval)))
	      { 
	        if (rwm->dbsav)
		  rwm->dbsav->cclass = rwlstrdup(rwm, rwm->pval.sval);
	      }
	    }
#line 3780 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 787 "rwlparser.y" /* yacc.c:1646  */
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
#line 3797 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 800 "rwlparser.y" /* yacc.c:1646  */
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
#line 3832 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 831 "rwlparser.y" /* yacc.c:1646  */
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
#line 3847 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 842 "rwlparser.y" /* yacc.c:1646  */
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
#line 3900 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 891 "rwlparser.y" /* yacc.c:1646  */
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
#line 3918 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 907 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      { 
		rwm->dbsav->stmtcache = rwlcheckminval(rwm->mxq, 0, rwm->pval.ival
		  , 0, RWL_DEFAULT_STMTCACHE, (text *)"cursorcache");
		bis(rwm->dbsav->flags, RWL_DB_CCACHUSER);
	      }
	    }
#line 3931 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 916 "rwlparser.y" /* yacc.c:1646  */
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
#line 3949 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 933 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
		if (rwm->dbsav->pooltype)
		  rwlerror(rwm, RWL_ERROR_DBPOOL_ALREADY);
	        rwm->dbsav->pooltype = RWL_DBPOOL_POOLED;
		rwm->dbsav->pooltext = "drcp pooled";
	      }
	    }
#line 3963 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 943 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
		if (rwm->dbsav->pooltype)
		  rwlerror(rwm, RWL_ERROR_DBPOOL_ALREADY);
	        rwm->dbsav->pooltype = RWL_DBPOOL_DEDICATED;
		rwm->dbsav->pooltext = "dedicated";
	      }
	    }
#line 3977 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 953 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
		if (rwm->dbsav->pooltype)
		  rwlerror(rwm, RWL_ERROR_DBPOOL_ALREADY);
	        rwm->dbsav->pooltype = RWL_DBPOOL_RETHRDED;
		rwm->dbsav->pooltext = "threads dedicated";
	      }
	    }
#line 3991 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 963 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
		if (rwm->dbsav->pooltype)
		  rwlerror(rwm, RWL_ERROR_DBPOOL_ALREADY);
	        rwm->dbsav->pooltype = RWL_DBPOOL_RECONNECT;
		rwm->dbsav->pooltext = "reconnect";
	      }
	    }
#line 4005 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 980 "rwlparser.y" /* yacc.c:1646  */
    {
#if (RWL_OCI_VERSION<12)
	    rwlerror(rwm, RWL_ERROR_NOT_SUPPORTED_IN_VERSION, "statemark",RWL_OCI_VERSION);
#else
	    bis(rwm->dbsav->flags,RWL_DB_STATEMARK);
#endif
	  }
#line 4017 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 988 "rwlparser.y" /* yacc.c:1646  */
    {
#if (RWL_OCI_VERSION<12)
	    rwlerror(rwm, RWL_ERROR_NOT_SUPPORTED_IN_VERSION, "requestmark",RWL_OCI_VERSION);
#else
	    bis(rwm->dbsav->flags,RWL_DB_REQMARK);
#endif
	  }
#line 4029 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 998 "rwlparser.y" /* yacc.c:1646  */
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
#line 4044 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 1009 "rwlparser.y" /* yacc.c:1646  */
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
#line 4060 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 1025 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      { 
		rwm->dbsav->ptimeout = rwlcheckminval(rwm->mxq, 0, rwm->pval.ival
		  , RWL_DBPOOL_CONNECT==rwm->dbsav->pooltype ? 0: 1
		  , RWL_DBPOOL_DEFAULT_TIMEOUT, (text *)"release timeout");
	      }
	    }
#line 4073 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 1038 "rwlparser.y" /* yacc.c:1646  */
    { 
#if (OCI_MAJOR_VERSION >= 12)
	      if (rwm->dbsav && rwm->pval.dval >= 0)
		rwm->dbsav->wtimeout = rwm->pval.dval;
#else
	    rwlerror(rwm, RWL_ERROR_NOT_YET_IMPL, "sessionpool wait attribute");
#endif
	    }
#line 4086 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 1052 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->dbsav && rwm->pval.dval >= 0)
	      bis(rwm->dbsav->flags, RWL_DB_SPTOBREAK);
	  }
#line 4095 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 1057 "rwlparser.y" /* yacc.c:1646  */
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
#line 4110 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 1068 "rwlparser.y" /* yacc.c:1646  */
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
#line 4126 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 1085 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprimmed(rwm);
	  }
#line 4134 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 1092 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprimmed(rwm);
	  }
#line 4142 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 1108 "rwlparser.y" /* yacc.c:1646  */
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
#line 4158 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 1120 "rwlparser.y" /* yacc.c:1646  */
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
#line 4177 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 1136 "rwlparser.y" /* yacc.c:1646  */
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
#line 4213 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 1172 "rwlparser.y" /* yacc.c:1646  */
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
#line 4228 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 1183 "rwlparser.y" /* yacc.c:1646  */
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
#line 4244 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 1196 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwm->mxq->evar[rwm->codeguess].v2val = rwm->facnt;
	      rwm->supsemerr = RWL_SUPSEM_PROC;
	    }
#line 4253 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 1204 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 4262 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 1209 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 4270 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 1216 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 4279 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 1221 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 4287 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 1228 "rwlparser.y" /* yacc.c:1646  */
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
#line 4373 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 1318 "rwlparser.y" /* yacc.c:1646  */
    {
          sb4 l = rwlfindvar(rwm->mxq, rwm->inam, RWL_VAR_NOGUESS);
          if (l>=0)
            rwlprintvar(rwm->mxq, l);
          }
#line 4383 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 1326 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m3flags, RWL_P3_MISBRACK); }
#line 4389 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 1327 "rwlparser.y" /* yacc.c:1646  */
    { bic(rwm->m3flags, RWL_P3_MISBRACK); }
#line 4395 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 1330 "rwlparser.y" /* yacc.c:1646  */
    { if (!bit(rwm->m2flags, RWL_P2_NOWARNDEP)) rwlerror(rwm, RWL_ERROR_MISSING_DECL_BRACK); }
#line 4401 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 1342 "rwlparser.y" /* yacc.c:1646  */
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
#line 4429 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 1370 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_INT; bic(rwm->addvarbits,RWL_IDENT_THRSPEC); }
#line 4435 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 1372 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_DBL; bic(rwm->addvarbits,RWL_IDENT_THRSPEC); }
#line 4441 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 1374 "rwlparser.y" /* yacc.c:1646  */
    { rwm->declslen=RWL_DEFAULT_STRLEN; rwm->dtype=RWL_TYPE_STR; bic(rwm->addvarbits,RWL_IDENT_THRSPEC); }
#line 4447 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 1376 "rwlparser.y" /* yacc.c:1646  */
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
#line 4466 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 1391 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwm->dtype = 0;
	      rwlerror(rwm, RWL_ERROR_BAD_ARGUMENT_TYPE, "file");
	    }
#line 4475 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 1396 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwm->dtype = 0;
	      rwlerror(rwm, RWL_ERROR_BAD_ARGUMENT_TYPE, "sql");
	    }
#line 4484 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 1401 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwm->dtype = 0;
	      rwlerror(rwm, RWL_ERROR_BAD_ARGUMENT_TYPE, "clob");
	    }
#line 4493 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 1410 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m4flags,RWL_P4_STATSONLY); }
#line 4499 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 1412 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m4flags,RWL_P4_PROCHASSQL); }
#line 4505 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 1414 "rwlparser.y" /* yacc.c:1646  */
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
#line 4525 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1434 "rwlparser.y" /* yacc.c:1646  */
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
#line 4543 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 1449 "rwlparser.y" /* yacc.c:1646  */
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
#line 4561 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 1464 "rwlparser.y" /* yacc.c:1646  */
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
#line 4580 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 1480 "rwlparser.y" /* yacc.c:1646  */
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
#line 4600 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 1523 "rwlparser.y" /* yacc.c:1646  */
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
#line 4617 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1537 "rwlparser.y" /* yacc.c:1646  */
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
#line 4635 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 1551 "rwlparser.y" /* yacc.c:1646  */
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
#line 4653 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1565 "rwlparser.y" /* yacc.c:1646  */
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
#line 4669 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 1577 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    }
#line 4677 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1580 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_UNIFORM); }
#line 4683 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 1581 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LOGB); }
#line 4689 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1582 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LOG); }
#line 4695 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1583 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_EXPB); }
#line 4701 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1584 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_EXP); }
#line 4707 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1585 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_CEIL); }
#line 4713 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1586 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_TRUNC); }
#line 4719 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1587 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_FLOOR); }
#line 4725 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1588 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ROUND); }
#line 4731 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1589 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SQRT); }
#line 4737 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1590 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SIN); }
#line 4743 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1591 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_COS); }
#line 4749 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1592 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ATAN2); }
#line 4755 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1593 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LENGTHB); }
#line 4761 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1595 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_INSTRB2); }
#line 4767 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1597 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_INSTRB3); }
#line 4773 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1599 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SUBSTRB2); }
#line 4779 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1601 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SUBSTRB3); }
#line 4785 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1602 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_GETENV); }
#line 4791 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1603 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SYSTEM); }
#line 4797 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1605 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprpush(rwm,rwm->inam ,RWL_STACK_SYSTEM2STR);
	  }
#line 4805 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1609 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_SYSTEM_BAD); yyerrok;
	    rwlexprpush0(rwm,RWL_STACK_SYSTEM);
	  }
#line 4814 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1613 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ERLANG); }
#line 4820 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1614 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ERLANG2); }
#line 4826 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1616 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ERLANGK); }
#line 4832 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1618 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_NORMALRANDOM); }
#line 4838 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1619 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ISNULL); }
#line 4844 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1621 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ACCESS); }
#line 4850 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1623 "rwlparser.y" /* yacc.c:1646  */
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
#line 4865 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1634 "rwlparser.y" /* yacc.c:1646  */
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
#line 4880 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1645 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprpush(rwm, rwm->inam, RWL_STACK_SERVERRELEASE);
	  }
#line 4888 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1649 "rwlparser.y" /* yacc.c:1646  */
    {
	    // push RWL_T_NULL to make exprfinish work
	    rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    rwlerror(rwm, RWL_ERROR_DBFUN_NEED_IDENT, "serverrelease"); yyerrok;
	  }
#line 4898 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1655 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprpush(rwm, rwm->inam, RWL_STACK_OPENSESSIONCOUNT);
	  }
#line 4906 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1659 "rwlparser.y" /* yacc.c:1646  */
    {
	    // push RWL_T_NULL to make exprfinish work
	    rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    rwlerror(rwm, RWL_ERROR_DBFUN_NEED_IDENT, "opensessioncount"); yyerrok;
	  }
#line 4916 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1665 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprpush(rwm, rwm->inam, RWL_STACK_ACTIVESESSIONCOUNT);
	  }
#line 4924 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1669 "rwlparser.y" /* yacc.c:1646  */
    {
	    // push RWL_T_NULL to make exprfinish work
	    rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    rwlerror(rwm, RWL_ERROR_DBFUN_NEED_IDENT, "activesessioncount"); yyerrok;
	  }
#line 4934 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1675 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprpush(rwm, rwm->inam, RWL_STACK_SQL_ID);
	  }
#line 4942 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1679 "rwlparser.y" /* yacc.c:1646  */
    {
	    // push RWL_T_NULL to make exprfinish work
	    rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    rwlerror(rwm, RWL_ERROR_SQLID_NEED_IDENT); yyerrok;
	  }
#line 4952 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1686 "rwlparser.y" /* yacc.c:1646  */
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
#line 4969 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1700 "rwlparser.y" /* yacc.c:1646  */
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
#line 4985 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1712 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (!bit(rwm->m2flags, RWL_P2_NOWARNDEP) && bit(rwm->m3flags,RWL_P3_MISBRACK))
	      rwlerror(rwm, RWL_ERROR_MISSING_EMPTY_BRACKETS, "runseconds");
	    rwlexprpush(rwm, 0, RWL_STACK_RUNSECONDS);
	  }
#line 4995 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1718 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (!bit(rwm->m2flags, RWL_P2_NOWARNDEP) && bit(rwm->m3flags,RWL_P3_MISBRACK))
	      rwlerror(rwm, RWL_ERROR_MISSING_EMPTY_BRACKETS, "epochseconds");
	    rwlexprpush(rwm, 0, RWL_STACK_EPOCHSECONDS);
	  }
#line 5005 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1737 "rwlparser.y" /* yacc.c:1646  */
    { rwm->aacnt[rwm->furlev]++; }
#line 5011 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1743 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ISNULL); }
#line 5017 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1744 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ISNOTNULL); }
#line 5023 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1750 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_MINUS); }
#line 5029 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1751 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_NOT); }
#line 5035 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1752 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_NOT); }
#line 5041 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1757 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_MUL); }
#line 5047 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1758 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_DIV); }
#line 5053 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1759 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_MOD); }
#line 5059 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1764 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ADD); }
#line 5065 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1765 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SUB); }
#line 5071 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1770 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LESS); }
#line 5077 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1771 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_GREATER); }
#line 5083 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1772 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LESSEQ); }
#line 5089 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1773 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_GREATEREQ); }
#line 5095 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1774 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_BETWEEN); }
#line 5101 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1779 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_EQUAL); }
#line 5107 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1780 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_NOTEQUAL); }
#line 5113 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1786 "rwlparser.y" /* yacc.c:1646  */
    { 
	    // With AND (and OR) skipdep is used to mark
	    // the expression element we need to skip until
	    // in case the first condition is false (true for OR)
	    rwm->ptail->branchtype = RWL_EXP_ANDBRANCH;
	    if (rwm->skipdep++ >= UB1MAXVAL)
	      rwlsevere(rwm, "[rwlparser-andskip:%d]", rwm->skipdep);
	    rwm->ptail->skipnxt = rwm->skipdep;
	  }
#line 5127 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1796 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprpush2(rwm,0,RWL_STACK_AND, rwm->skipdep);
	    rwm->skipdep--;
	  }
#line 5136 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1805 "rwlparser.y" /* yacc.c:1646  */
    {  
	    // see comment above
	    rwm->ptail->branchtype = RWL_EXP_ORBRANCH;
	    if (rwm->skipdep++ >= UB1MAXVAL)
	      rwlsevere(rwm, "[rwlparser-orskip:%d]", rwm->skipdep);
	    rwm->ptail->skipnxt = rwm->skipdep;
	  }
#line 5148 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1813 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprpush2(rwm,0,RWL_STACK_OR ,rwm->skipdep);
	    rwm->skipdep--;
	  }
#line 5157 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1822 "rwlparser.y" /* yacc.c:1646  */
    {  
	    // With conditional execution we mark the condition
	    // with RWL_EXP_CONDBRANCH1
	    rwm->ptail->branchtype = RWL_EXP_CONDBRANCH1;
	    if (rwm->skipdep++ >= UB1MAXVAL)
	      rwlsevere(rwm, "[rwlparser-condskip:%d]", rwm->skipdep);
	    rwm->ptail->skipnxt = rwm->skipdep;
	  }
#line 5170 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1831 "rwlparser.y" /* yacc.c:1646  */
    {
	    // and the place of ':' (really ELSE) with 
	    // RWL_EXP_CONDBRANCH2
	    rwm->ptail->branchtype = RWL_EXP_CONDBRANCH2;
	    rwm->ptail->skipnxt = rwm->skipdep;
	  }
#line 5181 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1838 "rwlparser.y" /* yacc.c:1646  */
    {  
	    // And the actual conditional is the "end if" place
	    rwlexprpush2(rwm,0,RWL_STACK_CONDITIONAL, rwm->skipdep);
	    rwm->skipdep--;
	  }
#line 5191 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1847 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_CONCAT); }
#line 5197 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1852 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_CONCAT); }
#line 5203 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1863 "rwlparser.y" /* yacc.c:1646  */
    { rwm->supsemerr = 0; }
#line 5209 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1868 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
	    {
	      rwm->ifdirdep = 0; // since we may be skipping over $else, $endif
	      YYACCEPT;
	    }
	  }
#line 5221 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1876 "rwlparser.y" /* yacc.c:1646  */
    { yyerrok; }
#line 5227 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1878 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_COMMAND_NOT_LOCAL, "threads"); yyerrok; }
#line 5233 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1885 "rwlparser.y" /* yacc.c:1646  */
    { yyerrok; }
#line 5239 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1887 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_COMMAND_NOT_LOCAL, "run"); yyerrok; }
#line 5245 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1891 "rwlparser.y" /* yacc.c:1646  */
    { yyerrok; }
#line 5251 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1893 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_NOT_LOCAL, "database"); yyerrok; }
#line 5257 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1895 "rwlparser.y" /* yacc.c:1646  */
    { yyerrok ; }
#line 5263 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1898 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_NOT_LOCAL, "random procedure array"); yyerrok; }
#line 5269 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1901 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_NOT_LOCAL, "random string array"); yyerrok; }
#line 5275 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1906 "rwlparser.y" /* yacc.c:1646  */
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
#line 5308 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1935 "rwlparser.y" /* yacc.c:1646  */
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
#line 5327 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1956 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_LOB); yyerrok; }
#line 5333 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1963 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_INT); yyerrok; }
#line 5339 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1969 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_DBL); yyerrok; }
#line 5345 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 1971 "rwlparser.y" /* yacc.c:1646  */
    { 
		rwm->declslen=RWL_DEFAULT_STRLEN;
	      }
#line 5353 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1977 "rwlparser.y" /* yacc.c:1646  */
    {
	      if (RWL_TYPE_CANCELLED == rwm->pval.vtype)
		rwm->declslen = 1; // kind of a kludge, but this prevents doube
				   // error reporting if using local variable
	      else
	      {
		rwm->declslen = rwm->pval.ival;
	      }
	    }
#line 5367 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 1991 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_STR); yyerrok; }
#line 5373 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 1993 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dtype=RWL_TYPE_FILE;
	    //if (rwm->codename)
	    //  rwlerror(rwm, RWL_ERROR_NOT_LOCAL, "file");
	  }
#line 5383 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 2002 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_FILE); yyerrok; }
#line 5389 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 2007 "rwlparser.y" /* yacc.c:1646  */
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
#line 5414 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 2030 "rwlparser.y" /* yacc.c:1646  */
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
#line 5441 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 2054 "rwlparser.y" /* yacc.c:1646  */
    { if (!rwm->rslerror) rwlcodeadd0(rwm, RWL_CODE_ELSE); }
#line 5447 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 2057 "rwlparser.y" /* yacc.c:1646  */
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
#line 5472 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 2080 "rwlparser.y" /* yacc.c:1646  */
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
#line 5513 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 2121 "rwlparser.y" /* yacc.c:1646  */
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
#line 5585 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 2190 "rwlparser.y" /* yacc.c:1646  */
    { 
		  rwlerror(rwm, RWL_ERROR_LOOP);
		  rwm->rsllityp[rwm->rsldepth] = RWL_LI_BAD;
		  yyerrok;
		}
#line 5595 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 2197 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SYSTEM); }
#line 5601 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 2200 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprpush(rwm,rwm->inam ,RWL_STACK_SYSTEM2STR);
	  }
#line 5609 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 2205 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_SYSTEM_BAD); yyerrok;
	    rwlexprclear(rwm);
	  }
#line 5618 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 2210 "rwlparser.y" /* yacc.c:1646  */
    {
		/* start a dummy assignment such that expression gets executed */
		rwm->assignvar = RWL_DUMMY_VAR;
		rwm->assignoper = RWL_T_ASSIGN;
		rwlexprbeg(rwm);
	      }
#line 5629 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 2219 "rwlparser.y" /* yacc.c:1646  */
    {
		/* start expression for assign */
		rwm->assignvar = rwm->inam;
		rwlexprbeg(rwm);
	      }
#line 5639 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 2228 "rwlparser.y" /* yacc.c:1646  */
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
#line 5655 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 2240 "rwlparser.y" /* yacc.c:1646  */
    {
	        rwm->assignvar = rwm->codename;
		rwlexprbeg(rwm);
	      }
#line 5664 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 2245 "rwlparser.y" /* yacc.c:1646  */
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
#line 5697 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 2274 "rwlparser.y" /* yacc.c:1646  */
    { 
		  rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		  rwlexprclear(rwm);
		  yyerrok;
		}
#line 5707 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 2281 "rwlparser.y" /* yacc.c:1646  */
    {
	        rwm->assignvar = rwm->codename;
		rwlexprbeg(rwm);
	      }
#line 5716 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 2286 "rwlparser.y" /* yacc.c:1646  */
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
#line 5749 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 2316 "rwlparser.y" /* yacc.c:1646  */
    { 
		  rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		  rwlexprclear(rwm);
		  yyerrok;
		}
#line 5759 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 2324 "rwlparser.y" /* yacc.c:1646  */
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
#line 5777 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 2338 "rwlparser.y" /* yacc.c:1646  */
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
#line 5792 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 2352 "rwlparser.y" /* yacc.c:1646  */
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
#line 5810 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 2368 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (!rwm->codename)
	    {
	      rwlerror(rwm, RWL_ERROR_NOT_DONE_IN_MAIN, "modify database leak");
	      goto dontmoddbpool;
	    }
	    else
	      rwlcodeadd0(rwm, RWL_CODE_MODDBLEAK);
	  }
#line 5824 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 2379 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->codename)
	      rwlcodeadd0(rwm, RWL_CODE_SESRELDROP);
	  }
#line 5833 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 2385 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->codename)
	      rwlcodeadd0(rwm, RWL_CODE_SESRELDROP);
	  }
#line 5842 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 2391 "rwlparser.y" /* yacc.c:1646  */
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
#line 5857 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 2403 "rwlparser.y" /* yacc.c:1646  */
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
#line 5872 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 2415 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->codename)
	      rwlcodeadd0(rwm, RWL_CODE_SHIFT);
	    else
	      if (!bit(rwm->m2flags, RWL_P2_NOEXEC))
		rwlshiftdollar(rwm->mxq, &rwm->loc);
	  }
#line 5884 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 2424 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->codename)
	      rwlcodeadd0(rwm, RWL_CODE_GETRUSAGE);
	    else
	      if (!bit(rwm->m2flags, RWL_P2_NOEXEC))
		rwlgetrusage(rwm->mxq, 0);
	  }
#line 5896 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 2433 "rwlparser.y" /* yacc.c:1646  */
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
#line 5911 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 2446 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_MODIFY); yyerrok; }
#line 5917 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 2451 "rwlparser.y" /* yacc.c:1646  */
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
#line 5951 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 2483 "rwlparser.y" /* yacc.c:1646  */
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
#line 6040 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 2568 "rwlparser.y" /* yacc.c:1646  */
    {
	      /* This code can cause lookahead */
	      rwlerror(rwm, RWL_ERROR_BAD_ARG_LIST);
	      rwlexprclear(rwm);
	      yyerrok;
	    }
#line 6051 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 2575 "rwlparser.y" /* yacc.c:1646  */
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
#line 6070 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 2594 "rwlparser.y" /* yacc.c:1646  */
    { rwm->supsemerr = RWL_SUPSEM_EMBSQL; }
#line 6076 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 2600 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m3flags, RWL_P3_IMMPARSEFOR); }
#line 6082 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 2602 "rwlparser.y" /* yacc.c:1646  */
    { bic(rwm->m3flags, RWL_P3_IMMPARSEFOR); }
#line 6088 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 2608 "rwlparser.y" /* yacc.c:1646  */
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
#line 6175 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 2693 "rwlparser.y" /* yacc.c:1646  */
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
#line 6208 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 2723 "rwlparser.y" /* yacc.c:1646  */
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
#line 6244 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 2756 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_NO_FILE_FOR_FFLUSH);
	    yyerrok;
	  }
#line 6253 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 2763 "rwlparser.y" /* yacc.c:1646  */
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
#line 6280 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 2788 "rwlparser.y" /* yacc.c:1646  */
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
#line 6313 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 2819 "rwlparser.y" /* yacc.c:1646  */
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
#line 6336 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 2847 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_FILE_FOR_WRITE);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6347 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 2856 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_STRING_FOR_SPRINTF);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6358 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 2865 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6369 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 2875 "rwlparser.y" /* yacc.c:1646  */
    {
	      // Note that we do not document this syntax without comma
	      if (rwm->filenam)
		rwlerror(rwm, RWL_ERROR_COMMA_IS_RECOMMENDED, rwm->filenam
		, bit(rwm->mflags,RWL_P_PRINTLINE) ? "writeline" : "write");
	    }
#line 6380 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 2887 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6391 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 317:
#line 2895 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_FILE_FOR_WRITE);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6402 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 2903 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_FILE_FOR_WRITE);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6413 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 2911 "rwlparser.y" /* yacc.c:1646  */
    { 
		if (rwm->codename)
		  rwlcodeadd0(rwm, RWL_CODE_NEWLINE);
		else
		  fputs(bit(rwm->m4flags, RWL_P4_CRNLWRITELINE) ? "\r\n" : "\n", stdout);
		bic(rwm->mflags,RWL_P_PRINTLINE|RWL_P_PRINTBLANK);
	      }
#line 6425 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 2921 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6436 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 2929 "rwlparser.y" /* yacc.c:1646  */
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
#line 6451 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 2940 "rwlparser.y" /* yacc.c:1646  */
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
#line 6490 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 2975 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m2flags, RWL_P2_MAYBECOMMAW); }
#line 6496 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 2976 "rwlparser.y" /* yacc.c:1646  */
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
#line 6526 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 3002 "rwlparser.y" /* yacc.c:1646  */
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
#line 6561 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 3032 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m2flags, RWL_P2_MAYBECOMMAW); }
#line 6567 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 3033 "rwlparser.y" /* yacc.c:1646  */
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
#line 6596 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 330:
#line 3058 "rwlparser.y" /* yacc.c:1646  */
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
#line 6618 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 3077 "rwlparser.y" /* yacc.c:1646  */
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
#line 6639 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 3094 "rwlparser.y" /* yacc.c:1646  */
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
#line 6664 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 3117 "rwlparser.y" /* yacc.c:1646  */
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
#line 6686 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 3136 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlerror(rwm, RWL_ERROR_UNEXPECTED_AFTER_IDENTIFIER);
	      yyerrok;
	    }
#line 6695 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 3143 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_MISSING_SEMICOLON); yyerrok; }
#line 6701 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 337:
#line 3149 "rwlparser.y" /* yacc.c:1646  */
    { bic(rwm->m2flags, RWL_P2_MAYBECOMMAW); }
#line 6707 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 338:
#line 3154 "rwlparser.y" /* yacc.c:1646  */
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
#line 6857 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 339:
#line 3304 "rwlparser.y" /* yacc.c:1646  */
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
#line 6971 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 340:
#line 3416 "rwlparser.y" /* yacc.c:1646  */
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
#line 7008 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 341:
#line 3452 "rwlparser.y" /* yacc.c:1646  */
    {  
	    // This syntax is not documented
	    bic(rwm->m3flags, RWL_P3_CLHEADFOR);
	    rwlerror(rwm, RWL_ERROR_LEGACY_CONTROLLOOP_SYNTAX);
	  }
#line 7018 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 342:
#line 3457 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m3flags, RWL_P3_CLHEADFOR); }
#line 7024 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 343:
#line 3461 "rwlparser.y" /* yacc.c:1646  */
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
#line 7041 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 3477 "rwlparser.y" /* yacc.c:1646  */
    { if (bit(rwm->m3flags, RWL_P3_CLHEADFOR))
	      rwlerror(rwm, RWL_ERROR_MIX_LEGACY_CLOOP);
	  }
#line 7049 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 345:
#line 3481 "rwlparser.y" /* yacc.c:1646  */
    { if (bit(rwm->m3flags, RWL_P3_CLHEADFOR))
	      rwlerror(rwm, RWL_ERROR_MIX_LEGACY_CLOOP);
	  }
#line 7057 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 346:
#line 3485 "rwlparser.y" /* yacc.c:1646  */
    { if (!bit(rwm->m3flags, RWL_P3_CLHEADFOR))
	      rwlerror(rwm, RWL_ERROR_MIX_LEGACY_CLOOP);
	  }
#line 7065 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 3496 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7071 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 350:
#line 3498 "rwlparser.y" /* yacc.c:1646  */
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
#line 7088 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 351:
#line 3510 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7094 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 352:
#line 3512 "rwlparser.y" /* yacc.c:1646  */
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
#line 7113 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 353:
#line 3526 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7119 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 354:
#line 3528 "rwlparser.y" /* yacc.c:1646  */
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
#line 7138 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 355:
#line 3542 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7144 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 356:
#line 3544 "rwlparser.y" /* yacc.c:1646  */
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
#line 7161 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 357:
#line 3556 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7167 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 3558 "rwlparser.y" /* yacc.c:1646  */
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
#line 7197 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 3587 "rwlparser.y" /* yacc.c:1646  */
    { rwm->ynqueue = 0; }
#line 7203 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 3588 "rwlparser.y" /* yacc.c:1646  */
    { rwm->ynqueue = RWL_QUEUE_EVERY; }
#line 7209 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 361:
#line 3589 "rwlparser.y" /* yacc.c:1646  */
    { rwm->ynqueue = RWL_NOQUEUE_EVERY; }
#line 7215 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 362:
#line 3593 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->scname = rwm->inam; 
	    bic(rwm->m2flags, RWL_P2_AT|RWL_P2_ATDEFAULT);
	  }
#line 7224 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 363:
#line 3598 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->scname = rwm->inam;
	    bic(rwm->m2flags, RWL_P2_AT|RWL_P2_ATDEFAULT);
	  }
#line 7233 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 364:
#line 3603 "rwlparser.y" /* yacc.c:1646  */
    { 
	      bis(rwm->m2flags, RWL_P2_ATDEFAULT);
	    }
#line 7241 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 365:
#line 3607 "rwlparser.y" /* yacc.c:1646  */
    {
	      bic(rwm->m2flags, RWL_P2_AT|RWL_P2_ATDEFAULT);
	      // lookahead may have consumed the next identifier
	      rwm->scname = (yychar == RWL_T_IDENTIFIER)
	        ? rwm->previnam
	        : rwm->inam;
	    }
#line 7253 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 366:
#line 3615 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->dbname = rwm->inam; 
	      bis(rwm->m2flags, RWL_P2_AT);
	    }
#line 7262 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 367:
#line 3624 "rwlparser.y" /* yacc.c:1646  */
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
#line 7281 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 368:
#line 3639 "rwlparser.y" /* yacc.c:1646  */
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
#line 7313 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 369:
#line 3671 "rwlparser.y" /* yacc.c:1646  */
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
#line 7331 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 370:
#line 3686 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->m3flags, RWL_P3_IMMEDSQL); 
	    bis(rwm->sqsav->flags, RWL_SQLFLAG_IBUSE);
	    bis(rwm->sqsav->flags, RWL_SQLFLAG_IDUSE);
	    if (bit(rwm->m3flags,RWL_P3_IMPLCASE))
	      bis(rwm->sqsav->flags, RWL_SQLFLAG_ICASE);
	  }
#line 7343 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 371:
#line 3695 "rwlparser.y" /* yacc.c:1646  */
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
#line 7384 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 373:
#line 3733 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_SQL_WRONG) ;
	    yyerrok;
	  }
#line 7393 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 375:
#line 3741 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7399 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 376:
#line 3742 "rwlparser.y" /* yacc.c:1646  */
    {
	    if ((rwm->msqlstk = rwlexprfinish(rwm)))
	      bis(rwm->m3flags, RWL_P3_IMMISDYN); // now dynamic
	    else
	    {
	      rwm->mxq->evar[rwm->sqsavvarn].vtype = RWL_TYPE_CANCELLED;
	      rwm->mxq->evar[rwm->sqsavvarn].stype = "cancelled (sql)";
	    }
	  }
#line 7413 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 377:
#line 3754 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->sqllino = rwm->loc.lineno;
	  }
#line 7421 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 381:
#line 3763 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "sql") ;
	  }
#line 7429 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 384:
#line 3774 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bis(rwm->m2flags, RWL_P2_ATDEFAULT);
	  }
#line 7437 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 385:
#line 3778 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dbname = rwm->inam; 
	    bis(rwm->m2flags, RWL_P2_AT);
	  }
#line 7446 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 386:
#line 3786 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->m2flags, RWL_P2_AT|RWL_P2_ATDEFAULT);
	  }
#line 7454 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 387:
#line 3790 "rwlparser.y" /* yacc.c:1646  */
    { 
	      bis(rwm->m2flags, RWL_P2_ATDEFAULT);
	    }
#line 7462 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 388:
#line 3794 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->dbname = rwm->inam; 
	      bis(rwm->m2flags, RWL_P2_AT);
	    }
#line 7471 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 390:
#line 3804 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->dbname = 0;
	      bis(rwm->m2flags, RWL_P2_ATDEFAULT); /* explict choose standard DB */
	    }
#line 7480 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 391:
#line 3810 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->dbname = rwm->inam;
	      bis(rwm->m2flags, RWL_P2_AT); /* named DB */
	    }
#line 7489 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 392:
#line 3815 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_NO_DATABASE_NAME); yyerrok; }
#line 7495 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 393:
#line 3817 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_MISSING_SEMICOLON); yyerrok; }
#line 7501 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 396:
#line 3825 "rwlparser.y" /* yacc.c:1646  */
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
#line 7531 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 397:
#line 3851 "rwlparser.y" /* yacc.c:1646  */
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
#line 7608 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 399:
#line 3928 "rwlparser.y" /* yacc.c:1646  */
    {
		  rwm->assignvar = rwm->inam;
		  rwlexprbeg(rwm);
		}
#line 7617 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 400:
#line 3933 "rwlparser.y" /* yacc.c:1646  */
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
#line 7668 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 405:
#line 3996 "rwlparser.y" /* yacc.c:1646  */
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
#line 7687 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 406:
#line 4011 "rwlparser.y" /* yacc.c:1646  */
    {
              rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
              rwlexprclear(rwm);
              rwm->rslerror++; // to prevent attempting else/endif code generation
              yyerrok;
            }
#line 7698 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 407:
#line 4020 "rwlparser.y" /* yacc.c:1646  */
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
#line 7717 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 408:
#line 4035 "rwlparser.y" /* yacc.c:1646  */
    {
              rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
              rwlexprclear(rwm);
              rwm->rslerror++; // to prevent attempting else/endif code generation
              yyerrok;
            }
#line 7728 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 409:
#line 4044 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_LEGACY_WHILE_SYNTAX);
	  }
#line 7736 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 410:
#line 4048 "rwlparser.y" /* yacc.c:1646  */
    {
	    bis(rwm->rslflags[rwm->rsldepth], RWL_RSLFLAG_WHILOP);
	  }
#line 7744 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 411:
#line 4054 "rwlparser.y" /* yacc.c:1646  */
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
#line 7765 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 412:
#line 4071 "rwlparser.y" /* yacc.c:1646  */
    {
              rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
              rwlexprclear(rwm);
              rwm->rslerror++; // to prevent attempting else/endif code generation
              yyerrok;
            }
#line 7776 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 413:
#line 4078 "rwlparser.y" /* yacc.c:1646  */
    {
              rwlerror(rwm, RWL_ERROR_UNEXPECTED_KEYWORD, "loop");
              rwlexprclear(rwm);
              rwm->rslerror++; // to prevent attempting else/endif code generation
              yyerrok;
            }
#line 7787 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 418:
#line 4095 "rwlparser.y" /* yacc.c:1646  */
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
#line 7807 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 419:
#line 4111 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (rwm->codename)
	      rwlerror(rwm, RWL_ERROR_NO_LOCAL_SUMGLOB);
	    else
	      bis(rwm->addvarbits,RWL_IDENT_GLOBAL);
	  }
#line 7818 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 420:
#line 4121 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dtype=RWL_TYPE_STR;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 7828 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 421:
#line 4127 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->dtype=RWL_TYPE_STR;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 7837 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 422:
#line 4135 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dtype=RWL_TYPE_INT;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 7847 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 423:
#line 4141 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->dtype=RWL_TYPE_INT;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 7856 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 424:
#line 4149 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dtype=RWL_TYPE_DBL;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 7866 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 425:
#line 4155 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->dtype=RWL_TYPE_DBL;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 7875 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 426:
#line 4163 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 7884 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 427:
#line 4168 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 7892 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 428:
#line 4174 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_CLOB; }
#line 7898 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 429:
#line 4175 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_BLOB; }
#line 7904 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 430:
#line 4176 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_NCLOB; }
#line 7910 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 431:
#line 4180 "rwlparser.y" /* yacc.c:1646  */
    { rwm->sqllino = rwm->loc.lineno;}
#line 7916 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 432:
#line 4181 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	    bic(rwm->m2flags, RWL_P2_BADSQLFILTXT);
	    bic(rwm->m3flags, RWL_P3_IMMEDSQL); 
	    bic(rwm->m3flags, RWL_P3_IMMISDYN); 
	    rwm->sqllen = 0;
	    rwm->sqname = rwm->inam;
	  }
#line 7930 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 434:
#line 4192 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_SQL_WRONG); yyerrok;
	  }
#line 7938 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 435:
#line 4195 "rwlparser.y" /* yacc.c:1646  */
    { rwm->sqllino = rwm->loc.lineno;}
#line 7944 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 436:
#line 4196 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bic(rwm->m2flags, RWL_P2_BADSQLFILTXT);
	    bic(rwm->m3flags, RWL_P3_IMMEDSQL); 
	    bic(rwm->m3flags, RWL_P3_IMMISDYN); 
	    rwm->sqllen = 0;
	    rwm->sqname = rwm->inam;
	  }
#line 7957 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 438:
#line 4206 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_SQL_WRONG); yyerrok;
	  }
#line 7965 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 441:
#line 4216 "rwlparser.y" /* yacc.c:1646  */
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
#line 8015 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 442:
#line 4263 "rwlparser.y" /* yacc.c:1646  */
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
#line 8050 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 443:
#line 4297 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->m4flags, RWL_P4_AMPERSAND) && rwldynarcheck(rwm))
	    {
	      rwlerror(rwm, RWL_ERROR_CANNOT_AMPREP_HERE, "named sql declaration");
	      rwm->mxq->evar[rwm->sqsavvarn].vtype = RWL_TYPE_CANCELLED;
	      rwm->mxq->evar[rwm->sqsavvarn].stype = "cancelled (sql)";
	    }
	  }
#line 8063 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 445:
#line 4310 "rwlparser.y" /* yacc.c:1646  */
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
#line 8141 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 446:
#line 4388 "rwlparser.y" /* yacc.c:1646  */
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
#line 8238 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 450:
#line 4491 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_BIND); yyerrok; }
#line 8244 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 452:
#line 4495 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_BINDOUT); yyerrok; }
#line 8250 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 454:
#line 4499 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DEFINE); yyerrok; }
#line 8256 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 455:
#line 4501 "rwlparser.y" /* yacc.c:1646  */
    {
		  bis(rwm->sqsav->flags, RWL_SQFLAG_IGNERR);
		}
#line 8264 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 456:
#line 4505 "rwlparser.y" /* yacc.c:1646  */
    {
		  bic(rwm->sqsav->flags, RWL_SQFLAG_NOCURC);
		}
#line 8272 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 457:
#line 4509 "rwlparser.y" /* yacc.c:1646  */
    {
		  bis(rwm->sqsav->flags, RWL_SQFLAG_NOCURC);
		}
#line 8280 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 458:
#line 4514 "rwlparser.y" /* yacc.c:1646  */
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
#line 8302 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 459:
#line 4533 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ARRAY); yyerrok; }
#line 8308 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 460:
#line 4538 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_MISSING_SEMICOLON_IN_SQL); }
#line 8314 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 463:
#line 4544 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->sqsav->flags, RWL_SQFLAG_DYNAMIC))
	      rwlerror(rwm, RWL_ERROR_DEFINE_ARRAY_NOT_DYNAMIC);
	    else
	      bis(rwm->sqsav->flags, RWL_SQFLAG_ARRAYD);
	  }
#line 8325 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 466:
#line 4558 "rwlparser.y" /* yacc.c:1646  */
    {
	  // Note that it would not be too hard to replace
	  // the integer constant here by an expression
	  // which would make sense as that is what
	  // can be done with modify sql for dynamic sql
	  rwm->bdpos = rwm->ival; rwm->bdtyp=RWL_DEFINE;
	}
#line 8337 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 468:
#line 4567 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->sqsav->flags, RWL_SQLFLAG_IDUSE))
	      rwlerror(rwm, RWL_ERROR_IMPLICIT_ALREADY, "define");
	    bis(rwm->sqsav->flags, RWL_SQLFLAG_IDUSE);
	  }
#line 8347 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 471:
#line 4581 "rwlparser.y" /* yacc.c:1646  */
    { rwm->bdname = rwm->sval; rwm->bdtyp=RWL_BINDOUT_NAME; }
#line 8353 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 473:
#line 4583 "rwlparser.y" /* yacc.c:1646  */
    { 
	    // We could also use expression here, but we would
	    // of course need to check it was either a non-negative number
	    // or a string starting with :
	    rwm->bdpos = bit(rwm->m2flags,RWL_P2_BINDZERO) ? rwm->ival+1 : rwm->ival;
	    rwm->bdtyp=RWL_BINDOUT_POS; 
	  }
#line 8365 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 475:
#line 4591 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->bdtyp=RWL_BINDOUT_SAME;
	  }
#line 8373 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 477:
#line 4595 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_IMPLICIT_NOT_BINDOUT);
	  }
#line 8381 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 480:
#line 4606 "rwlparser.y" /* yacc.c:1646  */
    { rwm->bdname = rwm->sval; rwm->bdtyp=RWL_BIND_NAME; }
#line 8387 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 482:
#line 4608 "rwlparser.y" /* yacc.c:1646  */
    { 
	    // same comment as above
	    rwm->bdpos = bit(rwm->m2flags,RWL_P2_BINDZERO) ? rwm->ival+1 : rwm->ival;
	    rwm->bdtyp=RWL_BIND_POS; 
	  }
#line 8397 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 484:
#line 4614 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->bdtyp=RWL_BIND_SAME;
	  }
#line 8405 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 486:
#line 4618 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->sqsav->flags, RWL_SQLFLAG_IBUSE))
	      rwlerror(rwm, RWL_ERROR_IMPLICIT_ALREADY, "bind");
	    bis(rwm->sqsav->flags, RWL_SQLFLAG_IBUSE);
	  }
#line 8415 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 487:
#line 4627 "rwlparser.y" /* yacc.c:1646  */
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
#line 8513 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 488:
#line 4723 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->inam = RWL_DUMMY_VAR;
	    rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2, "function", "runseconds", "bind/define");
	  }
#line 8522 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 489:
#line 4728 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->inam = RWL_DUMMY_VAR;
	    rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2, "function", "epochseconds", "bind/define");
	  }
#line 8531 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 490:
#line 4732 "rwlparser.y" /* yacc.c:1646  */
    { bic(rwm->m2flags,RWL_P2_BINDRAW); }
#line 8537 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 491:
#line 4733 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m2flags,RWL_P2_BINDRAW); }
#line 8543 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 492:
#line 4737 "rwlparser.y" /* yacc.c:1646  */
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
#line 8564 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 493:
#line 4754 "rwlparser.y" /* yacc.c:1646  */
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
#line 8585 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 494:
#line 4771 "rwlparser.y" /* yacc.c:1646  */
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
#line 8606 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 495:
#line 4788 "rwlparser.y" /* yacc.c:1646  */
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
#line 8633 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 496:
#line 4810 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 8639 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 497:
#line 4811 "rwlparser.y" /* yacc.c:1646  */
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
#line 8674 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 498:
#line 4842 "rwlparser.y" /* yacc.c:1646  */
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
#line 8699 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 499:
#line 4862 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 8705 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 500:
#line 4863 "rwlparser.y" /* yacc.c:1646  */
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
#line 8731 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 501:
#line 4885 "rwlparser.y" /* yacc.c:1646  */
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
#line 8750 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 503:
#line 4900 "rwlparser.y" /* yacc.c:1646  */
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
#line 8769 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 505:
#line 4915 "rwlparser.y" /* yacc.c:1646  */
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
#line 8788 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 509:
#line 4935 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 8794 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 510:
#line 4937 "rwlparser.y" /* yacc.c:1646  */
    { rwm->msqlstk = rwlexprfinish(rwm); }
#line 8800 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 511:
#line 4939 "rwlparser.y" /* yacc.c:1646  */
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
#line 8855 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 512:
#line 4992 "rwlparser.y" /* yacc.c:1646  */
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
#line 8889 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 513:
#line 5022 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->mdbsphi = rwm->mdbsplo = rwlexprfinish(rwm);
	    if (!rwm->mdbsplo)
	      rwlexprclear(rwm);
	  }
#line 8899 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 514:
#line 5028 "rwlparser.y" /* yacc.c:1646  */
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
#line 8932 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 516:
#line 5060 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (!(rwm->mdbsphi = rwlexprfinish(rwm)))
	      rwlexprclear(rwm);
	  }
#line 8941 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 517:
#line 5067 "rwlparser.y" /* yacc.c:1646  */
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
#line 8965 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 519:
#line 5090 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m3flags, RWL_P3_SPFCONCAT); }
#line 8971 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 520:
#line 5091 "rwlparser.y" /* yacc.c:1646  */
    { bic(rwm->m3flags, RWL_P3_SPFCONCAT); }
#line 8977 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 521:
#line 5095 "rwlparser.y" /* yacc.c:1646  */
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
#line 9001 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 522:
#line 5115 "rwlparser.y" /* yacc.c:1646  */
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
#line 9019 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 523:
#line 5133 "rwlparser.y" /* yacc.c:1646  */
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
#line 9042 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 525:
#line 5155 "rwlparser.y" /* yacc.c:1646  */
    {
	  rwm->conhead = rwm->contail = 0;
	}
#line 9050 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 526:
#line 5159 "rwlparser.y" /* yacc.c:1646  */
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
#line 9075 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 529:
#line 5187 "rwlparser.y" /* yacc.c:1646  */
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
#line 9098 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 530:
#line 5208 "rwlparser.y" /* yacc.c:1646  */
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
#line 9123 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 531:
#line 5230 "rwlparser.y" /* yacc.c:1646  */
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
#line 9148 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 532:
#line 5254 "rwlparser.y" /* yacc.c:1646  */
    {  
	    bic(rwm->mflags,RWL_P_PRINTLINE);
	    bic(rwm->mflags,RWL_P_PRINTTOFILE);
	  }
#line 9157 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 533:
#line 5259 "rwlparser.y" /* yacc.c:1646  */
    {  
	    bis(rwm->mflags,RWL_P_PRINTLINE);
	    bic(rwm->mflags,RWL_P_PRINTTOFILE);
	  }
#line 9166 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 535:
#line 5267 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->mflags,RWL_P_PRINTBLANK); }
#line 9172 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 537:
#line 5272 "rwlparser.y" /* yacc.c:1646  */
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
#line 9234 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 538:
#line 5333 "rwlparser.y" /* yacc.c:1646  */
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
#line 9270 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 539:
#line 5368 "rwlparser.y" /* yacc.c:1646  */
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
#line 9285 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 540:
#line 5383 "rwlparser.y" /* yacc.c:1646  */
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
#line 9329 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 541:
#line 5423 "rwlparser.y" /* yacc.c:1646  */
    { 
		rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 9339 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 543:
#line 5433 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_MISSING_SEMICOLON);
	    yyerrok;
	  }
#line 9348 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 544:
#line 5440 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_ASSIGN; }
#line 9354 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 545:
#line 5441 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_GREATEQ; }
#line 9360 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 546:
#line 5442 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_RSHIFTASSIGN; }
#line 9366 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 547:
#line 5443 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_LESSEQ; }
#line 9372 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 548:
#line 5444 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_PIPEFROM; }
#line 9378 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 549:
#line 5445 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_PIPETO; }
#line 9384 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 551:
#line 5449 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_APPEND; }
#line 9390 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 552:
#line 5450 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_ASNPLUS; }
#line 9396 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 553:
#line 5457 "rwlparser.y" /* yacc.c:1646  */
    {
		rwl_estack *estk;
		rwlexprpush(rwm, rwm->assignvar, RWL_STACK_ASN);
		estk = rwlexprfinish(rwm);
		rwlcodeaddp(rwm, RWL_CODE_ASSIGN, estk);
	      }
#line 9407 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 554:
#line 5464 "rwlparser.y" /* yacc.c:1646  */
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
#line 9437 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 556:
#line 5490 "rwlparser.y" /* yacc.c:1646  */
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
#line 9454 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 558:
#line 5504 "rwlparser.y" /* yacc.c:1646  */
    { 
		rwlerror(rwm, RWL_ERROR_LOOP);
		rwlexprclear(rwm);
		// prevent attempting endloop code generation
		rwm->loopvar[rwm->rsldepth] = 0;
		rwm->rsllityp[rwm->rsldepth] = RWL_LI_BAD;
		bic(rwm->rslflags[rwm->rsldepth], RWL_RSLFLAG_MAYBRK);
		yyerrok;
	      }
#line 9468 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 561:
#line 5523 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwl_lilist *thisli = rwlalloc(rwm, sizeof(rwl_lilist));
	    rwlexprpush(rwm, rwm->loopvar[rwm->rsldepth], RWL_STACK_ASN);
	    thisli->listk = rwlexprfinish(rwm);
	    rwm->rsllitail[rwm->rsldepth]->linxt = thisli;
	    rwm->rsllitail[rwm->rsldepth] = thisli;
	  }
#line 9480 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 564:
#line 5543 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 9489 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 565:
#line 5548 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 9497 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 568:
#line 5557 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "execute") ; }
#line 9503 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 571:
#line 5564 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "loop") ; }
#line 9509 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 574:
#line 5571 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "if") ; yyerrok; }
#line 9515 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 577:
#line 5578 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (0 != rwlstrcmp(rwm->inam, rwm->sqname))
	      rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END2, "sql", rwm->sqname);
	  }
#line 9524 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 578:
#line 5583 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END2, "sql", rwm->sqname) ; yyerrok; }
#line 9530 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 580:
#line 5589 "rwlparser.y" /* yacc.c:1646  */
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
#line 9545 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 581:
#line 5600 "rwlparser.y" /* yacc.c:1646  */
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
#line 9560 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 582:
#line 5611 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (bit(rwm->rslflags[rwm->rsldepth-1], RWL_RSLFLAG_WHILOP))
	      rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "loop") ;
	    else
	      rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "while") ;
	    yyerrok;
	  }
#line 9572 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 583:
#line 5622 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->cursorand = 0;
	  }
#line 9580 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 584:
#line 5627 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->cursorand = rwlexprfinish(rwm);
	  }
#line 9588 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 586:
#line 5634 "rwlparser.y" /* yacc.c:1646  */
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
#line 9647 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 587:
#line 5691 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->loc.errlin = 0;
	    rwm->sqlfile = 0; /* not from a file */
	  }
#line 9656 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 588:
#line 5696 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprbeg(rwm);
	  }
#line 9664 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 589:
#line 5700 "rwlparser.y" /* yacc.c:1646  */
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
#line 9749 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 590:
#line 5783 "rwlparser.y" /* yacc.c:1646  */
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
#line 9773 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 591:
#line 5803 "rwlparser.y" /* yacc.c:1646  */
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
#line 9800 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 592:
#line 5827 "rwlparser.y" /* yacc.c:1646  */
    { 
		rwlerror(rwm, RWL_ERROR_BAD_READLINE);
		yyerrok;
	      }
#line 9809 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 593:
#line 5834 "rwlparser.y" /* yacc.c:1646  */
    { rwm->reg_estk = rwm->str_estk = rwm->sub_estk = 0; }
#line 9815 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 594:
#line 5836 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->reg_estk = rwlexprfinish(rwm);
	  }
#line 9823 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 595:
#line 5840 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->str_estk = rwlexprfinish(rwm);
	  }
#line 9831 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 596:
#line 5844 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->sub_estk = rwlexprfinish(rwm);
	  }
#line 9839 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 597:
#line 5848 "rwlparser.y" /* yacc.c:1646  */
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
#line 9882 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 598:
#line 5887 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprclear(rwm);
	    rwlerror(rwm, RWL_ERROR_BAD_REGEX);
	    yyerrok;
	  }
#line 9892 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 599:
#line 5896 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->m2flags, RWL_P2_REGEXSUBG);
	  }
#line 9900 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 600:
#line 5900 "rwlparser.y" /* yacc.c:1646  */
    {
	    bis(rwm->m2flags, RWL_P2_REGEXSUBG);
	  }
#line 9908 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 601:
#line 5906 "rwlparser.y" /* yacc.c:1646  */
    { rwm->reg_estk = rwm->str_estk = 0; }
#line 9914 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 602:
#line 5908 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->reg_estk = rwlexprfinish(rwm);
	  }
#line 9922 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 603:
#line 5912 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->str_estk = rwlexprfinish(rwm);
	    rwm->idlist = rwm->idtail = 0;
	  }
#line 9931 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 604:
#line 5917 "rwlparser.y" /* yacc.c:1646  */
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
#line 9968 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 605:
#line 5951 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprclear(rwm);
	    rwlerror(rwm, RWL_ERROR_BAD_REGEX);
	    yyerrok;
	  }
#line 9978 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 606:
#line 5960 "rwlparser.y" /* yacc.c:1646  */
    { rwm->reg_estk = rwm->str_estk = 0; }
#line 9984 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 607:
#line 5962 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->reg_estk = rwlexprfinish(rwm);
	  }
#line 9992 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 608:
#line 5966 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->str_estk = rwlexprfinish(rwm);
	    rwm->idlist = rwm->idtail = 0;
	  }
#line 10001 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 609:
#line 5971 "rwlparser.y" /* yacc.c:1646  */
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
#line 10038 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 610:
#line 6005 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprclear(rwm);
	    rwlerror(rwm, RWL_ERROR_BAD_REGEX);
	    yyerrok;
	  }
#line 10048 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 613:
#line 6018 "rwlparser.y" /* yacc.c:1646  */
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
#line 10093 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 614:
#line 6061 "rwlparser.y" /* yacc.c:1646  */
    {
		/* start a dummy assignment such that the system expression gets executed */
		rwm->assignvar = RWL_DUMMY_VAR;
		rwm->assignoper = RWL_T_ASSIGN;
		rwlexprbeg(rwm);
	      }
#line 10104 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 615:
#line 6070 "rwlparser.y" /* yacc.c:1646  */
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
#line 10124 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 616:
#line 6095 "rwlparser.y" /* yacc.c:1646  */
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
#line 10139 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 617:
#line 6107 "rwlparser.y" /* yacc.c:1646  */
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
#line 10162 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 618:
#line 6126 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ILLEGAL_THREAD); yyerrok; }
#line 10168 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 623:
#line 6140 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->cqnstart = rwm->cqnstop = 0.0;
	    rwm->cqnnow = rwlclock(rwm->mxq,0);
	  }
#line 10177 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 624:
#line 6145 "rwlparser.y" /* yacc.c:1646  */
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
#line 10205 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 625:
#line 6170 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->cqnstop = rwm->pval.dval;
	    if (rwm->cqnstop < rwm->cqnstart || rwm->cqnstop < rwm->cqnnow)
	    {
	      rwlerror(rwm, RWL_ERROR_CQN_STOP_BEFORE_START, rwm->cqnstop, rwm->cqnstart, rwm->cqnnow);
	      rwm->cqnat = 0;
	    }
	  }
#line 10218 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 626:
#line 6179 "rwlparser.y" /* yacc.c:1646  */
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
	      rwl_value xnum;
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
#line 10274 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 627:
#line 6231 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->cqnat) // no errors above
	    {
	      rwl_estack *estk = 0;
	      rwl_value xnum;
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
#line 10303 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 628:
#line 6256 "rwlparser.y" /* yacc.c:1646  */
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
#line 10335 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 629:
#line 6284 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlcodeaddu(rwm, RWL_CODE_CQNISCB, 0); // Is in callback
	    rwlcodetail(rwm);
	  }
#line 10344 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 633:
#line 6295 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "querynotification");
	    yyerrok;
	  }
#line 10353 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 635:
#line 6304 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->cqnstart = rwm->pval.dval;
	  }
#line 10361 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 636:
#line 6311 "rwlparser.y" /* yacc.c:1646  */
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
#line 10381 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 637:
#line 6329 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlcodetail(rwm);
	  }
#line 10389 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 639:
#line 6334 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ILLEGAL_THREAD); yyerrok; }
#line 10395 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 641:
#line 6339 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->mythr->dbnam = rwm->inam;
	  }
#line 10403 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 644:
#line 6348 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "threads") ; }
#line 10409 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 647:
#line 6356 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "run") ; }
#line 10415 "rwlparser.tab.c" /* yacc.c:1646  */
    break;


#line 10419 "rwlparser.tab.c" /* yacc.c:1646  */
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
