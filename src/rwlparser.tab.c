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
#line 155 "rwlparser.y" /* yacc.c:339  */

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


#line 370 "rwlparser.tab.c" /* yacc.c:339  */

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
    RWL_T_ASNADD = 332,
    RWL_T_ASNSUB = 333,
    RWL_T_STOP = 334,
    RWL_T_START = 335,
    RWL_T_COUNT = 336,
    RWL_T_AT = 337,
    RWL_T_BREAK = 338,
    RWL_T_RETURN = 339,
    RWL_T_ABORT = 340,
    RWL_T_MODIFY = 341,
    RWL_T_CURSORCACHE = 342,
    RWL_T_NOCURSORCACHE = 343,
    RWL_T_LEAK = 344,
    RWL_T_SHIFT = 345,
    RWL_T_WHEN = 346,
    RWL_T_STATISTICS = 347,
    RWL_T_NOSTATISTICS = 348,
    RWL_T_FUNCTION = 349,
    RWL_T_PUBLIC = 350,
    RWL_T_OCIPING = 351,
    RWL_T_QUEUE = 352,
    RWL_T_NOQUEUE = 353,
    RWL_T_PRIVATE = 354,
    RWL_T_BEGIN = 355,
    RWL_T_RELEASE = 356,
    RWL_T_SYSTEM = 357,
    RWL_T_CLOB = 358,
    RWL_T_BLOB = 359,
    RWL_T_NCLOB = 360,
    RWL_T_READLOB = 361,
    RWL_T_WRITELOB = 362,
    RWL_T_RAW = 363,
    RWL_T_EXIT = 364,
    RWL_T_SUBSTR = 365,
    RWL_T_SUBSTRB = 366,
    RWL_T_LENGTH = 367,
    RWL_T_LENGTHB = 368,
    RWL_T_SQL_ID = 369,
    RWL_T_GETENV = 370,
    RWL_T_LOG = 371,
    RWL_T_EXP = 372,
    RWL_T_ROUND = 373,
    RWL_T_ACTIVESESSIONCOUNT = 374,
    RWL_T_REQUESTMARK = 375,
    RWL_T_SPRINTF = 376,
    RWL_T_OPENSESSIONCOUNT = 377,
    RWL_T_STATEMARK = 378,
    RWL_T_REGEXSUB = 379,
    RWL_T_REGEXSUBG = 380,
    RWL_T_SERVERRELEASE = 381,
    RWL_T_SQL = 382,
    RWL_T_SQL_TEXT = 383,
    RWL_T_INSTR = 384,
    RWL_T_INSTRB = 385,
    RWL_T_CONNECTIONPOOL = 386,
    RWL_T_CONNECTIONCLASS = 387,
    RWL_T_UNSIGNED = 388,
    RWL_T_HEXADECIMAL = 389,
    RWL_T_OCTAL = 390,
    RWL_T_FPRINTF = 391,
    RWL_T_ENCODE = 392,
    RWL_T_DECODE = 393,
    RWL_T_STRING_CONST = 394,
    RWL_T_IDENTIFIER = 395,
    RWL_T_INTEGER_CONST = 396,
    RWL_T_DOUBLE_CONST = 397,
    RWL_T_PRINTF = 398,
    RWL_T_PIPEFROM = 399,
    RWL_T_PIPETO = 400,
    RWL_T_RSHIFTASSIGN = 401,
    RWL_T_GLOBAL = 402,
    RWL_T_QUERYNOTIFICATION = 403,
    RWL_T_NORMALRANDOM = 404,
    RWL_T_STATISTICSONLY = 405,
    RWL_T_CEIL = 406,
    RWL_T_TRUNC = 407,
    RWL_T_FLOOR = 408,
    RWL_T_LOBPREFETCH = 409,
    RWL_T_SIN = 410,
    RWL_T_COS = 411,
    RWL_T_ATAN2 = 412,
    RWL_T_WINSLASHF2B = 413,
    RWL_T_WINSLASHF2BB = 414,
    RWL_T_UMINUS = 415
  };
#endif

/* Value type.  */
#if ! defined RWLYSTYPE && ! defined RWLYSTYPE_IS_DECLARED

union RWLYSTYPE
{
#line 468 "rwlparser.y" /* yacc.c:355  */

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

#line 593 "rwlparser.tab.c" /* yacc.c:355  */
};

typedef union RWLYSTYPE RWLYSTYPE;
# define RWLYSTYPE_IS_TRIVIAL 1
# define RWLYSTYPE_IS_DECLARED 1
#endif



int rwlyparse (rwl_main *rwm);

#endif /* !YY_RWLY_RWLPARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 609 "rwlparser.tab.c" /* yacc.c:358  */

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
#define YYLAST   5515

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  176
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  290
/* YYNRULES -- Number of rules.  */
#define YYNRULES  662
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1216

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   415

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   168,     2,     2,     2,   167,     2,     2,
     171,   172,   165,   164,   173,   163,     2,   166,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   175,   170,
     161,   160,   162,   174,     2,     2,     2,     2,     2,     2,
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
     155,   156,   157,   158,   159,   169
};

#if RWLYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   525,   525,   532,   536,   538,   537,   553,   554,   555,
     557,   560,   567,   569,   586,   585,   595,   594,   603,   602,
     612,   611,   621,   626,   635,   636,   640,   639,   646,   651,
     659,   660,   664,   663,   671,   670,   743,   748,   749,   761,
     762,   765,   766,   769,   779,   784,   792,   805,   836,   847,
     859,   858,   874,   884,   883,   900,   910,   920,   930,   943,
     944,   947,   955,   965,   976,   991,   992,  1004,  1006,  1005,
    1018,  1019,  1025,  1024,  1052,  1059,  1066,  1067,  1071,  1072,
    1075,  1088,  1087,  1139,  1151,  1150,  1171,  1176,  1183,  1188,
    1195,  1280,  1281,  1285,  1294,  1295,  1298,  1299,  1300,  1304,
    1305,  1309,  1337,  1339,  1341,  1343,  1358,  1363,  1368,  1376,
    1377,  1379,  1381,  1400,  1402,  1401,  1417,  1416,  1432,  1431,
    1447,  1490,  1504,  1518,  1532,  1544,  1548,  1549,  1550,  1551,
    1552,  1553,  1554,  1555,  1556,  1557,  1558,  1559,  1560,  1561,
    1562,  1564,  1566,  1568,  1570,  1571,  1574,  1577,  1578,  1582,
    1587,  1588,  1589,  1591,  1593,  1594,  1596,  1607,  1618,  1622,
    1628,  1632,  1638,  1642,  1648,  1653,  1657,  1665,  1663,  1690,
    1696,  1702,  1706,  1707,  1711,  1712,  1716,  1721,  1722,  1723,
    1728,  1729,  1730,  1731,  1735,  1736,  1737,  1738,  1742,  1743,
    1744,  1748,  1749,  1750,  1751,  1752,  1753,  1757,  1758,  1759,
    1763,  1765,  1764,  1782,  1784,  1783,  1799,  1801,  1810,  1800,
    1825,  1826,  1830,  1831,  1841,  1842,  1846,  1854,  1857,  1856,
    1863,  1866,  1865,  1869,  1871,  1873,  1875,  1878,  1884,  1913,
    1928,  1941,  1943,  1944,  1948,  1950,  1954,  1956,  1961,  1960,
    1967,  1966,  1978,  1983,  1982,  1990,  1994,  2018,  2044,  2042,
    2070,  2068,  2178,  2187,  2186,  2190,  2189,  2194,  2200,  2199,
    2209,  2208,  2217,  2230,  2235,  2229,  2263,  2271,  2276,  2270,
    2305,  2312,  2328,  2327,  2340,  2356,  2367,  2373,  2379,  2391,
    2403,  2413,  2423,  2422,  2435,  2441,  2439,  2557,  2564,  2580,
    2582,  2584,  2584,  2585,  2588,  2590,  2592,  2589,  2594,  2598,
    2597,  2712,  2745,  2753,  2778,  2752,  2829,  2830,  2831,  2832,
    2834,  2835,  2843,  2844,  2852,  2853,  2862,  2865,  2864,  2873,
    2875,  2883,  2891,  2900,  2908,  2910,  2917,  2918,  2929,  2965,
    3002,  3043,  3060,  3042,  3101,  3108,  3115,  3114,  3146,  3147,
    3155,  3154,  3202,  3204,  3203,  3213,  3364,  3363,  3511,  3517,
    3520,  3536,  3540,  3544,  3551,  3552,  3556,  3556,  3570,  3570,
    3586,  3586,  3602,  3602,  3616,  3616,  3647,  3648,  3649,  3652,
    3658,  3657,  3667,  3666,  3684,  3683,  3731,  3746,  3755,  3730,
    3792,  3800,  3801,  3801,  3814,  3813,  3820,  3821,  3822,  3828,
    3829,  3833,  3837,  3845,  3849,  3853,  3861,  3862,  3868,  3874,
    3876,  3879,  3880,  3885,  3884,  3986,  3988,  3987,  4042,  4046,
    4050,  4051,  4055,  4070,  4079,  4094,  4103,  4107,  4113,  4130,
    4137,  4147,  4148,  4149,  4153,  4154,  4170,  4180,  4186,  4194,
    4200,  4208,  4214,  4222,  4227,  4234,  4235,  4236,  4240,  4241,
    4240,  4251,  4255,  4256,  4255,  4265,  4272,  4273,  4276,  4276,
    4357,  4355,  4369,  4446,  4543,  4544,  4548,  4549,  4552,  4553,
    4556,  4557,  4560,  4564,  4568,  4572,  4591,  4597,  4599,  4602,
    4603,  4612,  4613,  4618,  4617,  4626,  4636,  4637,  4641,  4641,
    4643,  4642,  4651,  4650,  4654,  4661,  4662,  4666,  4666,  4668,
    4667,  4674,  4673,  4677,  4686,  4782,  4787,  4792,  4793,  4796,
    4813,  4830,  4847,  4870,  4870,  4901,  4922,  4922,  4945,  4944,
    4960,  4959,  4975,  4974,  4991,  4992,  4995,  4997,  4995,  5051,
    5082,  5081,  5118,  5119,  5127,  5126,  5150,  5151,  5155,  5154,
    5193,  5192,  5215,  5215,  5242,  5243,  5246,  5267,  5289,  5313,
    5318,  5326,  5327,  5327,  5331,  5392,  5427,  5442,  5485,  5494,
    5495,  5503,  5504,  5505,  5506,  5507,  5508,  5511,  5512,  5513,
    5514,  5521,  5528,  5519,  5554,  5554,  5567,  5580,  5581,  5585,
    5598,  5599,  5606,  5611,  5618,  5619,  5620,  5625,  5626,  5627,
    5632,  5633,  5634,  5639,  5640,  5641,  5646,  5651,  5652,  5663,
    5674,  5685,  5689,  5696,  5697,  5754,  5760,  5759,  5847,  5846,
    5890,  5898,  5900,  5904,  5908,  5897,  5950,  5959,  5963,  5970,
    5972,  5976,  5969,  6014,  6024,  6026,  6030,  6023,  6068,  6077,
    6078,  6081,  6124,  6133,  6159,  6158,  6189,  6195,  6196,  6199,
    6200,  6204,  6209,  6234,  6243,  6295,  6320,  6348,  6203,  6356,
    6357,  6358,  6366,  6367,  6375,  6393,  6374,  6397,  6401,  6402,
    6409,  6410,  6411,  6417,  6418,  6419,  6424,  6425,  6426,  6427,
    6428,  6429,  6430
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
      61,    60,    62,    45,    43,    42,    47,    37,    33,   415,
      59,    40,    41,    44,    63,    58
};
# endif

#define YYPACT_NINF -941

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-941)))

#define YYTABLE_NINF -646

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -941,    77,   105,  -941,  3207,   -40,    43,  -941,   -40,    22,
    -941,  -941,  -941,   280,  1735,  1878,  -941,    58,  1945,   102,
     107,    76,  -941,   117,   131,   -30,  -941,   -40,  2088,   181,
    5344,   -40,   -40,   -35,  1509,   -40,   152,   -40,   -40,  -941,
     -40,   455,   130,  -941,  -941,  -941,  -941,   169,   207,  2155,
      51,  -941,  -941,    56,  -941,   132,   245,  -941,  -941,  -941,
    -941,  -941,  -941,    60,   212,   212,   136,   137,  -941,  -941,
     -40,   275,   -40,  1442,  -941,    62,  -941,  -941,    33,    67,
      94,   138,  -941,    71,    89,   197,   -40,   -40,  1216,  2298,
     142,  -941,  -941,  2365,  -941,  -941,  5344,  -941,  -941,   -40,
    -941,  -941,   -40,  -941,   -48,  -941,   -40,   248,   252,   277,
     374,   275,   -40,  5344,   -40,  5344,   451,    81,   472,   -30,
     303,   328,   333,   340,   400,   418,   -30,  -941,   436,  5344,
     444,   453,   461,   473,   477,   483,   486,   490,   491,   502,
     503,   505,  -941,   511,  -941,  -941,   512,   513,   515,   516,
     517,   518,   520,   521,   523,  5344,  5344,  5344,   497,  -941,
    -941,   464,   188,   459,    11,   496,   -11,  -941,   484,   -40,
     -40,   -40,  -941,   556,   606,   -40,  -941,   -40,  -941,   471,
     -40,  -941,  2508,   590,   415,   271,    38,  -941,  -941,   -40,
    -941,   -40,  -941,  5344,  -941,   -40,   414,   557,  -941,  -941,
    -941,  -941,  -941,  -941,  -941,   386,  -941,  -941,   148,  -941,
     -40,   522,   526,   528,   529,   -40,  5344,   -40,   563,  -941,
     678,   626,   566,  -941,   -40,   534,   -40,   568,  1283,   492,
    -941,   -40,  -941,  -941,  -941,  -941,  -941,  -941,  -941,  -941,
     -40,  -941,   -40,  -941,   525,  -941,   296,  -941,   -40,  -941,
     691,     6,  -941,    55,  -941,  2946,  3343,   -40,   299,  5344,
    -941,   -40,   570,   -40,   570,   -40,  -941,   356,  -941,   -40,
     -40,   -40,  -941,  -941,   -40,  -941,  -941,  -941,  -941,  -941,
     -40,  5344,  -941,  5344,  -941,   -40,  5138,  -941,   363,  -941,
     -40,   570,   -40,  5344,    24,  -941,  5344,  -941,   571,  -941,
    -941,  -941,   662,  -941,  -941,  5344,   664,   374,  -941,  -941,
    -941,  -941,  -941,   530,  2575,  -941,    88,  -941,  -941,  -941,
    -941,  -941,  -941,  -941,  -941,  -941,  -941,  -941,  5344,  5344,
    5344,  5344,  5344,  5344,  -941,  5344,  -941,  5344,  5344,  5344,
      37,  5344,  5344,  5344,  5344,   150,   151,    63,  5344,  -941,
    5344,  5344,  5344,  5344,  5344,  5344,  5344,  5344,  5344,  -941,
    -941,   541,   272,  5344,  5344,  5344,  5344,  5344,  5344,  5344,
    5344,  5344,  5344,  5344,  5344,  -941,  -941,  -941,  5344,  -941,
    -941,  -941,  -941,   543,   577,   579,  -941,  -941,  -941,  -941,
     -40,    97,  -941,  -941,  -941,  -941,  -941,  -941,  -941,  -941,
    -941,  -941,   -40,   -40,  5344,  -941,  -941,   700,   705,   708,
     587,  -941,  -941,  5344,   -40,  -941,  5344,   -40,  -941,  -941,
    -941,  -941,  -941,  -941,  -941,  -941,  -941,  -941,  -941,   680,
     589,   -40,  5344,  -941,  -941,  -941,  -941,  -941,  -941,  -941,
    -941,  -941,  -941,  2508,  -941,  5344,  -941,   -40,   -40,   -40,
    -941,  3479,  -941,  -941,   561,  -941,   561,  -941,  -941,  -941,
    -941,  -941,  -941,  -941,   410,  -941,   659,  -941,  -941,  -941,
    -941,  -941,  -941,  -941,  -941,  -941,  -941,  5344,  -941,  3615,
     -40,   -40,  -941,  -941,  -941,   314,   362,   366,   432,   291,
    -941,  -941,   665,    53,  -941,  -941,  -941,   565,   676,   570,
    -941,   356,  -941,   356,  -941,   447,   570,  -941,  -941,  -941,
    -941,  -941,  5344,  -941,   363,   363,  -941,  -941,  -941,  -941,
    -941,   356,  -941,  -941,   -40,   601,   -40,   293,  -941,  -941,
    -941,   543,  2718,   374,   676,  -941,  -941,   664,   569,   572,
    -941,  -941,  -941,  -941,  -941,  -941,   -40,   725,  -941,   666,
      54,  -941,   112,   573,   -18,   114,   241,   206,   242,    42,
     580,   583,   584,   585,  -941,   586,    29,   163,   260,   588,
     594,   595,   596,   604,   605,   607,   608,   609,  5344,   230,
     268,   269,   279,   281,   282,   237,   611,   612,  -941,  -941,
     706,  -941,  -941,  -941,   464,   464,   188,   188,   367,   188,
     188,   459,   459,  5344,  5344,  5344,  -941,   638,   370,  -941,
    -941,  -941,  -941,   -40,  -941,  -941,   -40,  -941,  -941,   -40,
     244,   558,   641,   645,  -941,  -941,   647,   676,  -941,  5344,
     676,  -941,   -40,  5071,  -941,  -941,  -941,  -941,   617,   618,
    -941,  -941,  -941,  -941,   619,  -941,  -941,  -941,  -941,  -941,
     128,   660,   256,  5344,  5344,  5344,  5344,  -941,  -941,  -941,
    -941,  -941,  -941,  -941,  -941,  5344,  -941,   620,    68,  -941,
    -941,  3751,   -40,   -40,  -941,   -40,  -941,   -40,   792,   794,
     -40,  2785,  -941,  -941,   -40,   -40,   -40,  -941,  -941,   763,
     356,  -941,  -941,  -941,  -941,  -941,   619,  -941,  -941,  5344,
    -941,   624,  -941,  -941,  -941,  -941,  5277,  5344,  5344,   752,
    -941,  5344,  -941,  -941,  -941,  -941,  5344,  5344,  5344,   -40,
     293,  -941,    26,    19,   772,  -941,   664,  -941,  -941,  5344,
    5344,  -941,   530,   719,   663,   -40,   -40,  -941,  -941,  -941,
    5344,  5344,  -941,  -941,  5344,  -941,   632,  -941,   668,  5344,
    -941,  -941,  -941,  -941,  -941,  5344,  -941,  5344,  -941,  -941,
    -941,  -941,  -941,  -941,  -941,  -941,  -941,  5344,   633,  5344,
    -941,  -941,  -941,  -941,  -941,  5344,  -941,  -941,  -941,  5344,
      11,   496,   631,  -941,  -941,  -941,    47,    49,  -941,  -941,
    -941,  5344,  5344,   -40,  -941,  -941,  -941,   737,  -941,  -941,
    -941,  -941,  -941,   -40,  -941,  -941,  5071,  -941,   637,  -941,
    -941,   643,  -941,  -941,  -941,  -941,  -941,  -941,  -941,    74,
    5344,  5344,   640,  -941,  -941,  -941,  -941,  -941,  -941,   411,
    -941,   677,   485,  -941,  -941,  -941,  -941,   676,   676,   676,
     676,  3887,  5344,   -40,  -941,  -941,   -40,   -40,  -941,  -941,
      55,  -941,  -941,  -941,  -941,  5344,  -941,   -40,   -40,  -941,
     750,   421,  3082,  -941,  -941,  -941,  -941,  -941,  5344,  -941,
    5344,   -40,   679,  -941,  -941,  -941,  -941,  -941,   405,  -941,
    -941,  -941,  -941,  -941,   767,  -941,  -941,  -941,  -941,   648,
    4023,  -941,  4159,  -941,  -941,   -40,   682,  -941,  -941,  -941,
    -941,   286,   294,   298,  -941,   652,   228,   301,   305,   437,
    -941,   320,   323,   188,  -941,   -40,   683,  -941,   -40,   681,
    -941,   676,   676,  -941,  -941,  -941,  5344,  -941,  5344,  -941,
    -941,    47,    49,  -941,  5344,  -941,   635,  -941,   -40,    48,
    -941,  -941,  -941,  -941,  5344,  -941,   485,  -941,  -941,    75,
     676,  -941,  -941,   -17,   651,  -941,  -941,  -941,  4295,  -941,
    -941,  -941,  -941,  -941,   570,  -941,  -941,  -941,  -941,   405,
     797,  -941,  -941,  -941,   797,  -941,  5344,  5344,    -4,  -941,
      75,    75,   543,   543,  -941,  -941,  4431,   746,  -941,  -941,
    -941,  -941,  -941,  5344,  -941,  -941,  -941,  5344,  -941,  -941,
    5344,  -941,  -941,   446,  -941,  -941,  -941,   467,  -941,   799,
     655,  -941,  5344,   655,  -941,   676,   655,  -941,  -941,   676,
      20,    52,  -941,  1668,    41,   -40,   -40,   -40,  -941,  -941,
    -941,   -40,   -40,   -40,   657,  -941,   -40,   -40,  -941,  -941,
    -941,  -941,  -941,  -941,    54,  4567,   356,   658,  5344,   732,
     732,  -941,  -941,  -941,  -941,  -941,  -941,  -941,   370,   370,
     816,  5344,   758,   341,   355,  -941,  5344,   -40,   683,  5344,
     -40,   681,  5344,  -941,  -941,   676,   -40,  -941,  -941,  -941,
    -941,   382,  -941,   -40,  -941,  -941,   424,  -941,   -40,  -941,
    5344,   -40,  -941,  -941,  -941,  -941,   426,  -941,  -941,  -941,
    -941,  -941,  -941,  -941,  -941,  -941,  -941,  -941,   275,  -941,
      83,  -941,  5344,  -941,  5344,   766,  -941,  4703,   789,  -941,
    -941,    83,  -941,  5344,  -941,  -941,  -941,  -941,  -941,  -941,
    -941,  -941,   676,  -941,   703,  -941,   153,   153,   153,   311,
    -941,  -941,   153,   172,  -941,  -941,   -40,  -941,   153,   153,
     153,   393,  -941,  -941,   -40,   -40,  -941,  -941,  -941,  -941,
    5344,  -941,    75,  -941,  -941,  -941,  -941,  -941,  -941,   736,
    -941,  -941,  -941,  -941,  -941,  -941,  -941,  -941,  -941,  -941,
    -941,  -941,  -941,  -941,   673,  -941,  -941,   756,  -941,   709,
     782,  -941,   -40,    34,  -941,  -941,  -941,  -941,   686,  4828,
    -941,   784,  5344,  -941,   687,  -941,  -941,  4964,   833,    84,
     -40,   -40,  -941,  -941,  -941,  -941
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       4,     0,     5,     1,     0,     0,     0,   539,   540,     0,
      89,   428,   430,     0,     0,     0,   432,     0,     0,     0,
       0,     0,   573,     0,     0,    94,   348,   258,     0,   393,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    87,
       0,     0,     0,   622,   435,   436,   437,     0,     0,     0,
       0,   607,   608,     0,   374,     0,     0,   524,     3,   228,
       6,     8,    12,     0,    78,    78,     0,     0,     7,   331,
       0,   291,     0,     0,   299,     0,   214,   214,     0,     0,
       0,     0,   434,     0,     0,     0,     0,     0,     0,     0,
       0,   306,   308,     0,   309,   307,     0,     9,   335,     0,
      34,   323,     0,    93,     0,    91,     0,     0,   369,     0,
     591,   389,     0,     0,     0,     0,     0,     0,     0,    94,
       0,     0,     0,     0,     0,     0,    94,   125,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   124,   121,   123,   122,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   177,   180,
     184,   188,   191,   197,   200,   203,   206,   210,     0,     0,
       0,     0,   598,     0,     0,     0,   537,     0,   538,     0,
       0,   326,     0,     0,     0,     0,     0,   278,   279,     0,
     328,     0,   262,     0,   229,     0,     0,     0,   280,   230,
     288,    88,   427,   429,   431,     0,   572,    86,     0,   433,
       0,     0,   342,     0,   338,     0,     0,     0,     0,   527,
       0,     0,     0,   452,     0,     0,     0,   370,     0,     0,
     532,     0,   116,   114,   118,   113,    13,    79,   214,   214,
       0,    81,     0,    84,   366,   345,     0,   345,     0,   345,
       0,   382,   214,     0,   248,     0,     0,     0,     0,     0,
     238,     0,     0,     0,     0,     0,   403,     0,   401,     0,
       0,     0,   583,   231,     0,   546,   314,   528,   312,   310,
       0,     0,   545,     0,   316,     0,   212,   544,     0,   541,
       0,     0,     0,     0,     0,    36,    37,    10,     0,    11,
     252,   303,     0,   384,   296,     0,     0,   591,   390,   618,
     615,   613,   610,   656,     0,   631,     0,   627,   630,   629,
     417,   423,   421,   422,   416,   419,   420,   170,     0,     0,
       0,     0,     0,     0,   169,     0,   183,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   167,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   181,
     182,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   201,   204,   207,     0,   418,
     302,   301,   600,     0,     0,     0,   321,   322,    95,   281,
       0,     0,   259,   413,   412,   394,   395,   271,   327,   266,
     264,   284,     0,     0,     0,   272,   282,     0,     0,     0,
       0,   277,   340,     0,     0,   336,     0,     0,   270,   268,
     313,   526,   445,   385,   443,   375,   311,   530,   334,     0,
       0,     0,   172,   551,   554,   552,   558,   559,   560,   555,
     556,   553,   557,     0,   525,     0,   120,     0,     0,     0,
      77,     0,    76,    80,    96,    83,    96,   362,   358,   356,
     360,   367,   368,   332,   366,   354,     0,   289,   391,   392,
     292,   345,   293,   380,   596,   595,   452,     0,   381,     0,
       0,     0,   580,   247,   214,     0,     0,     0,     0,     0,
     215,   216,   408,     0,   242,   425,   426,     0,    74,     0,
     235,     0,   237,     0,   233,   405,     0,   232,   586,   584,
     585,   315,     0,   320,     0,     0,   325,   213,   542,   324,
     245,     0,   606,   602,     0,     0,     0,    39,    38,    75,
      92,     0,     0,   591,   592,   346,   294,     0,     0,     0,
     658,   662,   659,   661,   657,   660,     0,     0,   644,     0,
       0,   628,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   164,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   172,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   171,   178,
       0,   185,   186,   187,   190,   189,   194,   195,     0,   192,
     193,   199,   198,     0,     0,     0,   211,     0,     0,   619,
      20,    16,   548,     0,   549,   547,     0,   275,   276,     0,
       0,     0,     0,     0,   441,   439,     0,   343,   329,     0,
     339,   330,     0,   448,   532,   371,   373,   287,     0,   173,
     174,   176,   261,   536,   533,   534,   117,   115,   119,    90,
       0,     0,   109,     0,     0,     0,     0,   214,   353,   352,
     351,   350,   355,   364,   290,     0,   377,     0,     0,   582,
     581,     0,     0,     0,   221,     0,   218,     0,     0,     0,
       0,     0,   411,   214,     0,     0,     0,   587,   246,   424,
       0,   234,   236,   404,   406,   402,   529,   319,   318,     0,
     244,     0,   257,   255,   623,   254,     0,     0,     0,     0,
      55,     0,    58,    59,    49,    48,     0,     0,     0,     0,
      40,    41,   591,     0,   564,   214,     0,   214,   298,     0,
       0,   626,   656,   648,     0,     0,     0,   653,   625,   135,
       0,     0,   150,   151,     0,   154,     0,   147,     0,     0,
     139,   166,   165,   144,   128,     0,   130,     0,   134,   163,
     162,   161,   160,   159,   157,   156,   158,     0,     0,     0,
     131,   132,   133,   136,   137,     0,   145,   146,   179,     0,
     202,   205,     0,   621,   599,   620,     0,     0,   550,   265,
     274,     0,     0,     0,   510,   508,   506,   503,   512,   500,
     501,   499,   505,     0,    18,    14,   448,   341,     0,   337,
     269,     0,   444,   447,   454,   446,   452,   593,   531,     0,
       0,     0,   104,   102,   103,   106,   108,   107,    97,     0,
      99,     0,     0,   111,   112,   110,    85,   363,   359,   357,
     361,     0,     0,   467,   454,   383,     0,     0,   574,   300,
       0,   224,   223,   214,   220,     0,   217,     0,     0,   225,
       0,     0,     0,   590,   588,   589,   240,   239,     0,   543,
       0,     0,     0,    46,    43,    44,    59,    53,    56,    52,
      50,    45,    35,    42,     0,   571,   570,   566,   561,     0,
       0,   297,     0,   616,   611,     0,     0,   214,   632,   655,
     654,     0,     0,     0,   149,     0,     0,     0,     0,     0,
     168,     0,     0,   196,   208,     0,     0,    21,     0,     0,
      17,   520,   519,   273,   516,   516,     0,   502,     0,   516,
     283,     0,     0,   440,     0,   594,     0,   450,     0,     0,
     396,   286,   175,   535,     0,    98,     0,   101,    82,     0,
     365,   468,   597,   386,     0,   576,   575,   249,     0,   214,
     226,   227,   415,   414,     0,   407,   603,   256,    47,    57,
      63,    62,    61,    60,    63,   304,     0,     0,     0,   567,
       0,     0,     0,     0,   647,   649,     0,   642,   155,   126,
     152,   148,   142,     0,   127,   129,   140,     0,   153,   138,
       0,    29,    32,     0,    30,    23,    26,     0,    24,   522,
     511,   514,     0,   509,   507,   504,   513,    19,    15,   344,
       0,     0,   449,     0,     0,   467,   467,   467,   455,   454,
     400,     0,     0,     0,     0,   100,     0,     0,   577,   333,
     387,   388,   378,   453,     0,     0,     0,     0,     0,    65,
      65,   214,   562,   569,   565,   568,   251,   347,     0,     0,
       0,     0,     0,     0,     0,   209,     0,     0,     0,     0,
       0,     0,     0,   521,   516,   517,     0,   493,   487,   489,
     491,   467,   485,     0,   475,   473,   467,   471,     0,   470,
       0,     0,   484,   478,   480,   482,   467,   476,   462,   463,
     464,   451,   399,   397,   398,   105,   579,   578,   389,   222,
       0,   241,     0,    64,     0,    67,    51,     0,     0,   617,
     612,     0,   643,     0,   143,   141,    33,    28,    31,    27,
      22,    25,   523,   515,     0,   457,     0,     0,     0,     0,
     456,   461,     0,     0,   460,   466,   467,   459,     0,     0,
       0,     0,   458,   379,     0,     0,   650,   219,   604,    66,
       0,    54,     0,   563,   646,   633,   518,   496,   495,   497,
     488,   494,   490,   492,   486,   474,   472,   465,   479,   481,
     483,   477,   652,   651,     0,    68,   305,     0,   498,     0,
      70,   634,     0,     0,    69,   214,   605,    71,     0,     0,
      72,     0,   172,   636,     0,   214,    73,     0,     0,     0,
       0,     0,   639,   638,   641,   640
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -941,  -941,    -5,  -941,  -941,  -941,  -941,  -941,  -941,  -941,
    -941,   -78,  -941,  -213,  -941,   -70,  -941,  -206,  -941,  -941,
    -941,  -941,  -941,  -941,   143,  -941,  -941,   -12,  -941,  -109,
    -183,  -941,  -941,  -941,  -941,  -254,  -285,  -941,   803,  -941,
    -941,  -941,  -941,  -941,  -941,   634,  -941,   574,   249,   420,
    -941,   -76,    39,  -941,  -941,  -941,  -941,  -941,  -941,  -941,
    -577,  -941,    57,  -941,   270,   -93,  -352,   278,   276,   274,
    -941,  -941,  -941,  -372,  -941,  -941,   419,    35,   -67,  -941,
    -941,  -941,   870,  -941,  -941,  -941,  -941,  -941,  -941,  -941,
    -941,  -941,  -941,  -941,  -941,  -941,  -941,  -941,  -941,  -941,
    -941,  -941,  -941,  -941,  -941,  -941,  -941,  -941,  -941,  -941,
    -941,  -941,  -941,  -941,  -941,  -210,  -513,  -941,  -941,  -941,
    -941,  -941,   416,  -941,  -941,  -941,  -941,  -941,  -941,   862,
    -941,  -941,   868,  -941,   773,  -941,  -941,  -941,  -941,  -941,
    -941,  -941,  -941,  -225,   813,  -941,  -941,  -260,   379,  -941,
    -941,  -941,  -941,  -941,  -941,  -941,  -941,   718,  -941,  -941,
     -72,  -941,  -941,  -941,  -941,   -29,  -941,  -941,  -941,  -941,
    -941,    82,  -941,  -941,  -941,  -941,  -461,  -142,    79,  -941,
    -715,  -941,  -941,  -252,  -941,  -941,  -262,  -941,  -941,  -941,
    -941,  -245,  -941,  -941,  -941,  -563,  -941,  -941,  -941,  -941,
    -941,  -941,  -941,  -783,  -179,  -941,  -941,  -941,  -941,  -941,
    -941,  -941,  -941,  -941,  -941,  -941,  -941,   262,  -941,   385,
      78,  -941,  -941,   283,  -941,   199,  -265,   555,   457,  -941,
     396,  -941,  -941,  -941,  -941,  -941,  -941,   -74,  -941,  -941,
    -941,  -940,    59,  -941,  -941,  -293,  -941,   656,  -941,  -941,
    -941,  -941,  -941,  -941,  -941,  -941,  -941,  -941,  -941,  -941,
    -941,  -941,  -941,  -941,  -941,  -518,  -603,  -941,    31,  -941,
    -941,  -941,   592,  -941,  -941,  -941,  -941,  -941,  -941,  -941,
    -941,  -941,  -941,  -941,  -941,  -941,  -941,  -209,  -133,   182
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    59,     2,     4,    60,    61,   932,   787,   931,
     786,   920,  1007,  1008,  1069,   917,  1003,  1004,  1066,    62,
     296,   527,   719,   720,   721,   974,   970,   878,   973,  1049,
    1115,  1161,  1190,  1194,  1202,   497,   811,    63,   238,    64,
     454,    65,   456,    66,    67,   450,   104,   105,   180,   651,
     829,   830,   831,   836,   236,   448,   447,   449,   158,   578,
     638,   639,   640,   159,   160,   161,   162,   163,   164,   165,
     603,   166,   604,   167,   605,  1000,   286,   529,   451,   490,
     855,   853,   491,   499,   964,   291,   484,   302,   526,   871,
     182,   229,   193,   616,   216,   632,   620,   621,   432,   247,
     109,   533,   252,   531,  1051,   283,   244,   657,   214,   629,
     417,   212,   626,   414,   808,   467,   536,   727,    69,   463,
     661,   464,   465,   655,   654,   656,   653,   842,   466,    70,
     429,   430,    71,   223,    72,   251,   844,  1108,   476,   477,
      73,   221,  1042,   307,   308,    74,   941,   267,   268,   505,
     693,   868,    75,   682,   492,    76,   683,   325,    77,   326,
     260,    78,    79,    80,    81,    82,    83,   410,   806,   222,
     633,   812,   813,   814,   815,  1029,   425,   953,   954,  1028,
     952,  1090,  1086,  1087,  1142,  1096,  1097,  1148,  1149,  1150,
    1081,  1082,  1136,  1137,  1138,  1170,  1171,   803,   928,   926,
     925,   924,   929,  1010,  1011,  1012,  1134,   793,  1009,  1073,
      84,   230,    85,    86,   512,    87,   634,   444,   445,   644,
     645,    88,    89,   288,   699,   289,   284,   276,   392,   615,
     442,   443,   725,   976,  1118,   889,   978,   979,   887,    90,
     849,  1039,   483,   273,   688,   306,   816,   817,   665,    91,
     383,    92,   293,   701,  1047,  1184,    93,    94,   115,   539,
     983,    95,   113,   538,   982,   608,   609,    96,   705,    97,
     117,   316,   317,   318,   549,   987,  1187,  1195,  1201,  1205,
    1208,  1213,  1062,   319,   733,  1060,   897,  1157,   738,   546
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      98,   768,   501,   101,   503,   785,   606,   262,   264,   255,
     256,   528,   209,   722,   537,   666,   596,   597,   598,   599,
     600,  1076,   181,   519,   728,   524,   187,   188,   190,   192,
     194,   521,   198,   199,   257,   200,   336,   470,   562,   472,
    1056,  1057,  1091,   746,    99,   474,   378,  1054,   915,  1031,
     918,   376,   217,  1083,   684,   735,   480,   220,   235,   116,
     548,   231,   359,   360,   573,   245,   258,   249,   261,   846,
     885,   373,   269,   232,   102,   938,  1036,     3,   272,   275,
     253,   275,   275,   282,  1154,  1210,   736,   305,   685,   173,
     274,  -624,   174,   378,   295,   263,  1032,   297,   613,   299,
     258,   300,   378,   169,   686,    -2,   550,   309,   171,   311,
    1040,   574,   575,   189,   314,   218,  1155,  1197,   175,   785,
     481,   314,    58,  1041,   287,   298,  1037,   258,  -384,   254,
      58,   294,   177,   224,   475,    58,   210,   240,   242,   265,
     847,   179,  1013,   290,   822,   823,  1016,  1077,   310,   409,
     312,   569,   571,   195,   233,   741,   939,   824,   196,  1078,
    1167,  1079,   103,   377,   380,   381,   382,   825,  1092,   977,
     386,   374,   387,  -424,  1198,   389,   378,   563,   378,  1084,
    1093,   397,  1094,   100,   398,   479,   399,  1168,  1033,    58,
     401,   219,   361,  1085,  -253,  1080,  -442,   525,   270,   607,
     234,   754,   755,   576,   259,   411,  -624,  -424,    58,   564,
     418,   271,   420,   891,   747,   748,  1095,   391,   916,   426,
     919,   428,  1186,    58,    58,    58,   446,   378,   400,   315,
      58,   826,  1211,   782,  -424,   453,   315,   455,    58,   690,
     726,    58,   170,   471,    58,    58,   226,   172,   482,   697,
     698,   419,   494,    58,    58,   827,   500,   176,   502,    58,
     504,   664,   507,   185,   508,   509,   510,    58,   237,   511,
     378,   178,   225,   594,   595,   513,   241,   243,   266,   197,
     516,   106,  -243,   282,   739,   520,   742,   522,  -438,   791,
     570,   572,   378,  1169,   378,  -260,   706,   707,   708,  1084,
     828,   378,  -250,  -260,  -260,   378,   378,   202,   203,   211,
    1098,  1099,  1100,  1085,  -260,   672,   287,   107,   287,   395,
     204,   517,  -260,  -260,   378,   589,   709,   227,   523,   590,
     206,   792,   378,   378,   227,   756,   757,   710,   711,   712,
     713,   714,   715,   378,   468,   378,   378,   213,   833,   834,
     378,   366,   367,  -349,   495,   937,  -349,   246,   378,  -349,
    -349,  -349,   378,   674,   553,   378,  1140,   676,   327,   378,
     277,  1144,   559,   560,   561,   334,   565,  -349,  -349,   744,
     716,  1152,   673,   577,   378,   612,   614,   378,   301,  -260,
    -260,  -260,   586,   587,    44,    45,    46,   617,   618,   407,
     992,   993,   408,   769,   303,   378,   835,  -295,    54,   628,
     775,   396,   631,   743,   745,  -369,   228,   671,   208,   378,
     108,   873,   874,   875,   717,   718,   637,   913,   779,   884,
     675,  1177,   758,   881,   677,   305,   469,   168,  1077,   619,
     770,   771,   646,   647,   648,   678,   496,   184,   679,   186,
    1078,   772,  1079,   773,   774,   785,   785,   877,   988,   660,
     209,   658,   879,   880,  1058,  1059,   989,   641,   201,   313,
     990,   202,   203,   994,   328,   669,   670,   995,   391,   378,
     643,   394,   659,   457,   204,   378,  1080,   963,   687,   458,
     459,   460,   998,   205,   206,   999,   691,   433,   692,   329,
     680,   822,   823,   402,   330,   434,   435,   461,   462,   282,
     282,   331,   667,  1124,   824,   403,   700,   368,   369,   702,
    1092,   704,   370,   320,   825,   971,    58,  1125,   972,   506,
     366,   367,  1093,    58,  1094,   320,   518,   321,   322,   323,
      58,   731,   433,   607,   324,   737,   404,   643,   378,   207,
     434,   435,    58,   362,   405,  1139,   324,   375,    44,    45,
      46,   436,   540,   541,   514,   542,   515,   724,  1095,   437,
     438,   332,   794,   795,  1172,  1173,   384,   796,   797,  1175,
      58,   543,   208,   945,   946,  1178,  1179,  1180,   826,   333,
     841,   439,   440,   441,    58,   544,    58,  1143,   457,  1151,
     798,   959,   545,   784,   458,   459,   460,   335,   788,   996,
     997,   789,   827,   641,   790,   337,   862,   866,  1067,  1068,
     371,   372,   461,   462,   338,  1204,   385,   810,  1065,   363,
     364,   365,   339,   591,   592,   593,   439,   440,   441,  1070,
    1071,   278,   279,   388,   340,   799,   800,   801,   341,  1020,
    1021,   601,   602,  1022,   342,  1023,   393,   343,   890,   802,
     892,   344,   345,   848,   809,  1020,  1021,   851,   852,  1043,
     854,  1023,   856,   346,   347,   859,   348,  1024,   498,   863,
     864,   865,   349,   350,   351,   867,   352,   353,   354,   355,
    1034,   356,   357,  1024,   358,   412,   422,   406,   423,   413,
     843,   415,   416,   421,  1046,  1025,   424,   427,  -372,   473,
     266,   103,   532,   588,   882,   535,   607,   610,   886,   611,
     622,  1025,  1026,  1027,   534,   623,   624,   625,   635,   636,
     899,   900,   650,   498,   287,   663,   681,   689,  1026,  1027,
     378,   703,   729,   732,   832,   730,   740,   552,   734,   554,
     555,   556,   557,   749,   558,   750,   751,   752,   753,   778,
     759,   566,   567,   568,   893,   894,   760,   761,   762,   579,
     580,   581,   582,   583,   584,   585,   763,   764,   783,   765,
     766,   804,   767,   776,   777,   805,   958,   807,   923,   819,
     845,   820,   821,   857,  1113,   858,   258,   870,   930,   876,
     888,   896,   909,   898,   904,   910,   914,  1122,   905,   927,
     934,   944,  1126,   935,   940,  1129,   962,   947,   975,   968,
    1006,   977,   985,  1002,   991,  1048,  1061,  1072,  1074,  1105,
     986,  1112,   627,  1114,  1121,   630,  1146,  1123,   951,  1160,
    1163,   955,   956,  1166,  1188,   482,  1189,  1191,  1193,  1192,
    1203,  1209,   960,   961,  1018,   641,   643,  1200,  1131,  1206,
    1159,  1017,  1128,   883,   969,  1050,   704,  1116,   239,  1165,
    1035,   948,   530,   452,    68,   110,   652,   942,   781,   780,
     662,   111,   304,  1153,   248,   695,   379,  1101,   933,  1181,
     984,  1176,  1045,   936,  1174,  1133,   818,   696,   869,   943,
     642,   694,   967,   965,  1055,   966,  1185,   478,   551,   957,
    1001,  1109,  1164,  1005,   895,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1030,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1038,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1014,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1038,  1038,     0,     0,     0,
       0,     0,     0,     0,  1117,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1052,  1053,     0,     0,     0,     0,     0,     0,     0,
     951,   951,   951,     0,     0,     0,  1102,  1103,  1104,     0,
       0,  1106,  1107,     0,     0,     0,     0,     0,     0,   737,
       0,  1111,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1119,  1120,     0,     0,     0,     0,     0,
       0,     0,  1127,     0,     0,  1130,     0,     0,     0,     0,
       0,  1135,   837,   838,   839,   840,   951,     0,  1141,     0,
       0,   951,     0,  1145,     0,     0,  1147,     0,     0,     0,
       0,   951,     0,     0,     0,     0,     0,     0,     0,     0,
     861,     0,     0,     0,     0,  1156,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1156,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1199,     0,
     498,     0,     0,     0,     0,   498,   498,     0,  1207,     0,
       0,   951,     0,     0,     0,     0,     0,  1158,     0,  1182,
    1183,     0,     0,     0,     0,     0,     0,  1038,     0,   901,
     902,     0,     0,   903,     0,     0,     0,     0,   906,     0,
       0,     0,     0,     0,   907,     0,   908,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1196,   911,     0,
       0,     0,     0,     0,   912,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1212,  1214,  1215,     0,     0,     0,
     921,   922,     0,     0,     0,     0,     0,   280,     0,     0,
       0,     0,     0,  -317,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   641,  -317,  -317,
       0,     0,  -317,  -317,     0,     0,  -317,  -317,     0,     0,
    -317,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   950,     0,     0,     0,     0,     0,     0,     0,  -317,
    -317,     0,     0,  -317,   498,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   431,     0,     0,     0,     0,     0,
    -285,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -285,  -285,     0,     0,  -285,
    -285,     0,     0,  -285,  -285,     0,     0,  -285,  -317,     0,
       0,     0,     0,     0,     0,     0,     0,  -317,     0,  -317,
    -317,  -317,  -317,  -317,  -317,  -317,  -285,  -285,  -317,     0,
    -285,     0,  -317,     0,     0,     0,  -317,  1015,     0,     0,
       0,     0,     0,  1019,     0,  -317,  -317,  -317,  -317,     0,
       0,     0,     0,   498,     0,  -317,     0,  -317,  -317,  -317,
       0,  -317,  -317,  -317,  -317,  -317,     0,     0,     0,  -317,
       0,     0,     0,     0,  -317,  -285,    58,  -317,     0,   281,
       0,     0,     0,     0,  -285,     0,  -285,  -285,  -285,  -285,
    -285,  -285,  -285,     0,     0,  -285,     0,     0,     0,  -285,
       0,     0,  1063,  -285,     0,     0,  1064,     0,     0,     0,
       0,     0,  -285,  -285,  -285,  -285,     0,     0,     0,     0,
       0,  1075,  -285,     0,  -285,  -285,  -285,     0,  -285,  -285,
    -285,  -285,  -285,   250,     0,     0,  -285,     0,     0,  -376,
       0,  -285,     0,     0,  -285,  -285,     0,     0,     0,     0,
       0,     0,     0,     0,  -376,  -376,     0,   498,  -376,  -376,
       0,     0,  -376,  -376,     0,     0,  -376,     0,     0,     0,
     498,  -376,     0,     0,     0,   498,     0,     0,   498,     0,
       0,  1132,     0,     0,     0,  -376,  -376,     0,     0,  -376,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   498,
     191,     0,     0,     0,     0,     0,  -263,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -263,  -263,   498,     0,  -263,  -263,     0,     0,  -263,
    -263,     0,   498,  -263,  -376,     0,     0,     0,     0,     0,
       0,     0,     0,  -376,     0,  -376,  -376,  -376,  -376,  -376,
    -376,  -376,  -263,  -263,  -376,     0,  -263,     0,  -376,     0,
    -376,     0,  -376,     0,     0,     0,     0,     0,     0,   498,
       0,  -376,  -376,  -376,  -376,     0,     0,     0,     0,     0,
       0,  -376,     0,  -376,  -376,  -376,     0,  -376,  -376,  -376,
    -376,  -376,     0,     0,     0,  -376,     0,     0,     0,     0,
    -376,  -263,     0,  -376,     0,     0,     0,     0,     0,     0,
    -263,     0,  -263,  -263,  -263,  -263,  -263,  -263,  -263,     0,
       0,  -263,     0,     0,     0,  -263,     0,     0,     0,  -263,
       0,     0,     0,     0,     0,     0,     0,     0,  -263,  -263,
    -263,  -263,     0,     0,     0,     0,     0,     0,  -263,     0,
    -263,  -263,  -263,     0,  -263,  -263,  -263,  -263,  -263,  1088,
       0,     0,  -263,     0,     0,  -469,     0,  -263,     0,    58,
    -263,     0,     0,  1089,     0,     0,     0,     0,     0,     0,
    -469,  -469,     0,     0,  -469,  -469,     0,     0,  -469,  -469,
       0,     0,  -469,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -469,  -469,     0,     0,  -469,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   112,     0,     0,     0,
       0,     0,  -614,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -614,  -614,     0,
       0,  -614,  -614,     0,     0,  -614,  -614,     0,     0,  -614,
    -469,     0,     0,     0,     0,     0,     0,     0,     0,  -469,
       0,  -469,  -469,  -469,  -469,  -469,  -469,  -469,  -614,  -614,
    -469,     0,  -614,     0,  -469,     0,     0,     0,  -469,     0,
       0,     0,     0,     0,     0,     0,     0,  -469,  -469,  -469,
    -469,     0,     0,     0,     0,     0,     0,  -469,     0,  -469,
    -469,  -469,     0,  -469,  -469,  -469,  -469,  -469,     0,     0,
       0,  -469,     0,     0,     0,     0,  -469,  -614,     0,  -469,
       0,     0,     0,     0,     0,     0,  -614,     0,  -614,  -614,
    -614,  -614,  -614,  -614,  -614,     0,     0,  -614,     0,     0,
       0,  -614,     0,     0,     0,  -614,     0,     0,     0,     0,
       0,     0,     0,     0,  -614,  -614,  -614,  -614,     0,   114,
       0,     0,     0,     0,  -614,  -609,  -614,  -614,  -614,     0,
    -614,  -614,  -614,  -614,  -614,     0,     0,     0,  -614,     0,
    -609,  -609,     0,  -614,  -609,  -609,  -614,     0,  -609,  -609,
       0,     0,  -609,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -609,  -609,     0,     0,  -609,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   118,     0,     0,     0,
       0,     0,   119,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   120,   121,     0,
       0,   122,   123,     0,     0,   124,   125,     0,     0,   126,
    -609,     0,     0,     0,     0,     0,     0,     0,     0,  -609,
       0,  -609,  -609,  -609,  -609,  -609,  -609,  -609,   127,   128,
    -609,     0,   129,     0,  -609,     0,     0,     0,  -609,     0,
       0,     0,     0,     0,     0,     0,     0,  -609,  -609,  -609,
    -609,     0,     0,     0,     0,     0,     0,  -609,     0,  -609,
    -609,  -609,     0,  -609,  -609,  -609,  -609,  -609,     0,     0,
       0,  -609,     0,     0,     0,     0,  -609,   130,     0,  -609,
       0,     0,     0,     0,     0,     0,   131,     0,   132,   133,
     134,   135,   136,   137,   138,     0,     0,   139,     0,     0,
       0,   140,     0,     0,     0,   141,     0,     0,     0,     0,
       0,     0,     0,     0,   142,   143,   144,   145,     0,   183,
       0,     0,     0,     0,   146,   119,   147,   148,   149,     0,
     150,   151,   152,   153,   154,     0,     0,     0,   155,     0,
     120,   121,     0,   156,   122,   123,   157,     0,   124,   125,
       0,     0,   126,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   127,   128,     0,     0,   129,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   215,     0,     0,     0,
       0,     0,  -267,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -267,  -267,     0,
       0,  -267,  -267,     0,     0,  -267,  -267,     0,     0,  -267,
     130,     0,     0,     0,     0,     0,     0,     0,     0,   131,
       0,   132,   133,   134,   135,   136,   137,   138,  -267,  -267,
     139,     0,  -267,     0,   140,     0,     0,     0,   141,     0,
       0,     0,     0,     0,     0,     0,     0,   142,   143,   144,
     145,     0,     0,     0,     0,     0,     0,   146,     0,   147,
     148,   149,     0,   150,   151,   152,   153,   154,     0,     0,
       0,   155,     0,     0,     0,     0,   156,  -267,     0,   157,
       0,     0,     0,     0,     0,     0,  -267,     0,  -267,  -267,
    -267,  -267,  -267,  -267,  -267,     0,     0,  -267,     0,     0,
       0,  -267,     0,     0,     0,  -267,     0,     0,     0,     0,
       0,     0,     0,     0,  -267,  -267,  -267,  -267,     0,   285,
       0,     0,     0,     0,  -267,   119,  -267,  -267,  -267,     0,
    -267,  -267,  -267,  -267,  -267,     0,     0,     0,  -267,     0,
     120,   121,     0,  -267,   122,   123,  -267,     0,   124,   125,
       0,     0,   126,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   127,   128,     0,     0,   129,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   292,     0,     0,     0,
       0,     0,  -601,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -601,  -601,     0,
       0,  -601,  -601,     0,     0,  -601,  -601,     0,     0,  -601,
     130,     0,     0,     0,     0,     0,     0,     0,     0,   131,
       0,   132,   133,   134,   135,   136,   137,   138,  -601,  -601,
     139,     0,  -601,     0,   140,     0,     0,     0,   141,     0,
       0,     0,     0,     0,     0,     0,     0,   142,   143,   144,
     145,     0,     0,     0,     0,     0,     0,   146,     0,   147,
     148,   149,     0,   150,   151,   152,   153,   154,     0,     0,
       0,   155,     0,     0,     0,     0,   156,  -601,     0,   157,
       0,     0,     0,     0,     0,     0,  -601,     0,  -601,  -601,
    -601,  -601,  -601,  -601,  -601,     0,     0,  -601,     0,     0,
       0,  -601,     0,     0,     0,  -601,     0,     0,     0,     0,
       0,     0,     0,     0,  -601,  -601,  -601,  -601,     0,   390,
       0,     0,     0,     0,  -601,   119,  -601,  -601,  -601,     0,
    -601,  -601,  -601,  -601,  -601,     0,     0,     0,  -601,     0,
     120,   121,     0,  -601,   122,   123,  -601,     0,   124,   125,
       0,     0,   126,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   127,   128,     0,     0,   129,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   547,     0,     0,     0,
       0,     0,   119,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   120,   121,     0,
       0,   122,   123,     0,     0,   124,   125,     0,     0,   126,
     130,     0,     0,     0,     0,     0,     0,     0,     0,   131,
       0,   132,   133,   134,   135,   136,   137,   138,   127,   128,
     139,     0,   129,     0,   140,     0,     0,     0,   141,     0,
       0,     0,     0,     0,     0,     0,     0,   142,   143,   144,
     145,     0,     0,     0,     0,     0,     0,   146,     0,   147,
     148,   149,     0,   150,   151,   152,   153,   154,     0,     0,
       0,   155,     0,     0,     0,     0,   156,   130,     0,   157,
       0,     0,     0,     0,     0,     0,   131,     0,   132,   133,
     134,   135,   136,   137,   138,     0,     0,   139,     0,     0,
       0,   140,     0,     0,     0,   141,     0,     0,     0,     0,
       0,     0,     0,     0,   142,   143,   144,   145,     0,   723,
       0,     0,     0,     0,   146,   119,   147,   148,   149,     0,
     150,   151,   152,   153,   154,     0,     0,     0,   155,     0,
     120,   121,     0,   156,   122,   123,   157,     0,   124,   125,
       0,     0,   126,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   127,   128,     0,     0,   129,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   860,     0,     0,     0,
       0,     0,   119,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   120,   121,     0,
       0,   122,   123,     0,     0,   124,   125,     0,     0,   126,
     130,     0,     0,     0,     0,     0,     0,     0,     0,   131,
       0,   132,   133,   134,   135,   136,   137,   138,   127,   128,
     139,     0,   129,     0,   140,     0,     0,     0,   141,     0,
       0,     0,     0,     0,     0,     0,     0,   142,   143,   144,
     145,     0,     0,     0,     0,     0,     0,   146,     0,   147,
     148,   149,     0,   150,   151,   152,   153,   154,     0,     0,
       0,   155,     0,     0,     0,     0,   156,   130,     0,   157,
       0,     0,     0,     0,     0,     0,   131,     0,   132,   133,
     134,   135,   136,   137,   138,     0,     0,   139,     0,     0,
       0,   140,     0,     0,     0,   141,     0,     0,     0,     0,
       0,     0,     0,     0,   142,   143,   144,   145,     0,     0,
       0,     0,     0,     0,   146,     0,   147,   148,   149,     0,
     150,   151,   152,   153,   154,     0,     0,     5,   155,     0,
       0,     0,   485,   156,     7,     8,   157,     0,     0,     0,
       0,     0,    11,    12,  -410,    13,     0,     0,     0,     0,
      14,    15,     0,     0,     0,    16,     0,     0,   486,   487,
       0,    18,    19,    20,   488,    22,    23,    24,     0,    25,
       0,     0,     0,     0,     0,     0,     0,    26,     0,    27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    28,     0,  -410,     0,     0,     0,  -410,    29,    30,
      31,    32,     0,     0,     0,     0,     0,     0,     0,    33,
      34,    35,    36,     0,     0,     0,    37,     0,     0,    38,
       0,     0,    40,     0,     0,   489,     0,    42,    43,    44,
      45,    46,    47,    48,     0,    49,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    50,     0,     0,
      51,    52,     0,    53,    54,     0,     0,     0,     0,     0,
       0,     0,    55,     5,     0,     0,    56,     0,   485,    57,
       7,     8,     0,     0,     0,     0,     0,     0,    11,    12,
    -409,    13,     0,     0,     0,     0,    14,    15,     0,     0,
       0,    16,     0,     0,   486,   487,    58,    18,    19,    20,
     488,    22,    23,    24,     0,    25,     0,     0,     0,     0,
       0,     0,     0,    26,     0,    27,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    28,     0,  -409,
       0,     0,     0,  -409,    29,    30,    31,    32,     0,     0,
       0,     0,     0,     0,     0,    33,    34,    35,    36,     0,
       0,     0,    37,     0,     0,    38,     0,     0,    40,     0,
       0,   489,     0,    42,    43,    44,    45,    46,    47,    48,
       0,    49,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    50,     0,     0,    51,    52,     5,    53,
      54,     0,     0,     6,     0,     7,     8,     9,    55,     0,
      10,     0,    56,    11,    12,    57,    13,     0,     0,     0,
       0,    14,    15,     0,     0,     0,    16,     0,     0,    17,
       0,     0,    18,    19,    20,    21,    22,    23,    24,     0,
      25,     0,    58,     0,     0,     0,     0,     0,    26,     0,
      27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    28,     0,     0,     0,     0,     0,     0,    29,
      30,    31,    32,     0,     0,     0,     0,     0,     0,     0,
      33,    34,    35,    36,     0,     0,     0,    37,     0,     0,
      38,    39,     0,    40,     0,     0,    41,     0,    42,    43,
      44,    45,    46,    47,    48,     0,    49,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,     0,
       0,    51,    52,     0,    53,    54,     0,     0,     0,     0,
       0,     0,     0,    55,     5,     0,     0,    56,     0,   485,
      57,     7,     8,     0,     0,     0,     0,     0,     0,    11,
      12,   493,    13,     0,     0,     0,     0,    14,    15,     0,
       0,     0,    16,     0,     0,   486,   487,    58,    18,    19,
      20,   488,    22,    23,    24,     0,    25,     0,     0,     0,
       0,     0,     0,     0,    26,     0,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,     0,
       0,     0,     0,     0,     0,    29,    30,    31,    32,     0,
       0,     0,     0,     0,     0,     0,    33,    34,    35,    36,
       0,     0,     0,    37,     0,     0,    38,     0,     0,    40,
       0,     0,   489,     0,    42,    43,    44,    45,    46,    47,
      48,     0,    49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,    51,    52,     0,
      53,    54,     0,     0,     0,     0,     0,     0,     0,    55,
       5,     0,     0,    56,     0,   485,    57,     7,     8,     0,
       0,     0,     0,     0,     0,    11,    12,   649,    13,     0,
       0,     0,     0,    14,    15,     0,     0,     0,    16,     0,
       0,   486,   487,    58,    18,    19,    20,   488,    22,    23,
      24,     0,    25,     0,     0,     0,     0,     0,     0,     0,
      26,     0,    27,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    28,     0,     0,     0,     0,     0,
       0,    29,    30,    31,    32,     0,     0,     0,     0,     0,
       0,     0,    33,    34,    35,    36,     0,     0,     0,    37,
       0,     0,    38,     0,     0,    40,     0,     0,   489,     0,
      42,    43,    44,    45,    46,    47,    48,     0,    49,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      50,     0,     0,    51,    52,     0,    53,    54,     0,     0,
       0,     0,     0,     0,     0,    55,     5,     0,     0,    56,
       0,   485,    57,     7,     8,     0,     0,     0,     0,     0,
       0,    11,    12,   668,    13,     0,     0,     0,     0,    14,
      15,     0,     0,     0,    16,     0,     0,   486,   487,    58,
      18,    19,    20,   488,    22,    23,    24,     0,    25,     0,
       0,     0,     0,     0,     0,     0,    26,     0,    27,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      28,     0,     0,     0,     0,     0,     0,    29,    30,    31,
      32,     0,     0,     0,     0,     0,     0,     0,    33,    34,
      35,    36,     0,     0,     0,    37,     0,     0,    38,     0,
       0,    40,     0,     0,   489,     0,    42,    43,    44,    45,
      46,    47,    48,     0,    49,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    50,     0,     0,    51,
      52,     0,    53,    54,     0,     0,     0,     0,     0,     0,
       0,    55,     5,     0,     0,    56,     0,   485,    57,     7,
       8,     0,     0,     0,     0,     0,     0,    11,    12,   850,
      13,     0,     0,     0,     0,    14,    15,     0,     0,     0,
      16,     0,     0,   486,   487,    58,    18,    19,    20,   488,
      22,    23,    24,     0,    25,     0,     0,     0,     0,     0,
       0,     0,    26,     0,    27,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,     0,     0,     0,
       0,     0,     0,    29,    30,    31,    32,     0,     0,     0,
       0,     0,     0,     0,    33,    34,    35,    36,     0,     0,
       0,    37,     0,     0,    38,     0,     0,    40,     0,     0,
     489,     0,    42,    43,    44,    45,    46,    47,    48,     0,
      49,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    50,     0,     0,    51,    52,     0,    53,    54,
       0,     0,     0,     0,     0,     0,     0,    55,     5,     0,
       0,    56,     0,   485,    57,     7,     8,     0,     0,     0,
       0,     0,     0,    11,    12,   949,    13,     0,     0,     0,
       0,    14,    15,     0,     0,     0,    16,     0,     0,   486,
     487,    58,    18,    19,    20,   488,    22,    23,    24,     0,
      25,     0,     0,     0,     0,     0,     0,     0,    26,     0,
      27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    28,     0,     0,     0,     0,     0,     0,    29,
      30,    31,    32,     0,     0,     0,     0,     0,     0,     0,
      33,    34,    35,    36,     0,     0,     0,    37,     0,     0,
      38,     0,     0,    40,     0,     0,   489,     0,    42,    43,
      44,    45,    46,    47,    48,     0,    49,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,     0,
       0,    51,    52,     0,    53,    54,     0,     0,     0,     0,
       0,     0,     0,    55,     5,     0,     0,    56,     0,   485,
      57,     7,     8,     0,     0,     0,     0,     0,     0,    11,
      12,   980,    13,     0,     0,     0,     0,    14,    15,     0,
       0,     0,    16,     0,     0,   486,   487,    58,    18,    19,
      20,   488,    22,    23,    24,     0,    25,     0,     0,     0,
       0,     0,     0,     0,    26,     0,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,     0,
       0,     0,     0,     0,     0,    29,    30,    31,    32,     0,
       0,     0,     0,     0,     0,     0,    33,    34,    35,    36,
       0,     0,     0,    37,     0,     0,    38,     0,     0,    40,
       0,     0,   489,     0,    42,    43,    44,    45,    46,    47,
      48,     0,    49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,    51,    52,     0,
      53,    54,     0,     0,     0,     0,     0,     0,     0,    55,
       5,     0,     0,    56,     0,   485,    57,     7,     8,     0,
       0,     0,     0,     0,     0,    11,    12,   981,    13,     0,
       0,     0,     0,    14,    15,     0,     0,     0,    16,     0,
       0,   486,   487,    58,    18,    19,    20,   488,    22,    23,
      24,     0,    25,     0,     0,     0,     0,     0,     0,     0,
      26,     0,    27,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    28,     0,     0,     0,     0,     0,
       0,    29,    30,    31,    32,     0,     0,     0,     0,     0,
       0,     0,    33,    34,    35,    36,     0,     0,     0,    37,
       0,     0,    38,     0,     0,    40,     0,     0,   489,     0,
      42,    43,    44,    45,    46,    47,    48,     0,    49,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      50,     0,     0,    51,    52,     0,    53,    54,     0,     0,
       0,     0,     0,     0,     0,    55,     5,     0,     0,    56,
       0,   485,    57,     7,     8,     0,     0,     0,     0,     0,
       0,    11,    12,  1044,    13,     0,     0,     0,     0,    14,
      15,     0,     0,     0,    16,     0,     0,   486,   487,    58,
      18,    19,    20,   488,    22,    23,    24,     0,    25,     0,
       0,     0,     0,     0,     0,     0,    26,     0,    27,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      28,     0,     0,     0,     0,     0,     0,    29,    30,    31,
      32,     0,     0,     0,     0,     0,     0,     0,    33,    34,
      35,    36,     0,     0,     0,    37,     0,     0,    38,     0,
       0,    40,     0,     0,   489,     0,    42,    43,    44,    45,
      46,    47,    48,     0,    49,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    50,     0,     0,    51,
      52,     0,    53,    54,     0,     0,     0,     0,     0,     0,
       0,    55,     5,     0,     0,    56,     0,   485,    57,     7,
       8,     0,     0,     0,     0,     0,     0,    11,    12,  -645,
      13,     0,     0,     0,     0,    14,    15,     0,     0,     0,
      16,     0,     0,   486,   487,    58,    18,    19,    20,   488,
      22,    23,    24,     0,    25,     0,     0,     0,     0,     0,
       0,     0,    26,     0,    27,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,     0,     0,     0,
       0,     0,     0,    29,    30,    31,    32,     0,     0,     0,
       0,     0,     0,     0,    33,    34,    35,    36,     0,     0,
       0,    37,     0,     0,    38,     0,     0,    40,     0,     0,
     489,     0,    42,    43,    44,    45,    46,    47,    48,     0,
      49,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    50,     0,     0,    51,    52,     0,    53,    54,
       0,     0,     0,     0,     0,     0,     0,    55,     5,     0,
       0,    56,     0,   485,    57,     7,     8,     0,     0,     0,
       0,     0,     0,    11,    12,  1110,    13,     0,     0,     0,
       0,    14,    15,     0,     0,     0,    16,     0,     0,   486,
     487,    58,    18,    19,    20,   488,    22,    23,    24,     0,
      25,     0,     0,     0,     0,     0,     0,     0,    26,     0,
      27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    28,     0,     0,     0,     0,     0,     0,    29,
      30,    31,    32,     0,     0,     0,     0,     0,     0,     0,
      33,    34,    35,    36,     0,     0,     0,    37,     0,     0,
      38,     0,     0,    40,     0,     0,   489,     0,    42,    43,
      44,    45,    46,    47,    48,     0,    49,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,     0,
       0,    51,    52,     0,    53,    54,     0,     0,     0,     0,
       0,     0,     0,    55,     5,     0,     0,    56,     0,   485,
      57,     7,     8,     0,     0,     0,     0,     0,     0,    11,
      12,  1162,    13,     0,     0,     0,     0,    14,    15,     0,
       0,     0,    16,     0,     0,   486,   487,    58,    18,    19,
      20,   488,    22,    23,    24,     0,    25,     0,     0,     0,
       0,     0,     0,     0,    26,     0,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,     0,
       0,     0,     0,     0,     0,    29,    30,    31,    32,     0,
       0,     0,     0,     0,     0,     0,    33,    34,    35,    36,
       0,     0,     0,    37,     0,     0,    38,     0,     0,    40,
       0,     0,   489,     0,    42,    43,    44,    45,    46,    47,
      48,     0,    49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,    51,    52,     5,
      53,    54,     0,     0,   485,     0,     7,     8,     0,    55,
       0,     0,     0,    56,    11,    12,    57,    13,     0,     0,
       0,     0,    14,    15,     0,     0,     0,    16,     0,     0,
     486,   487,     0,    18,    19,    20,   488,    22,    23,    24,
       0,    25,     0,    58,     0,     0,     0,     0,     0,    26,
       0,    27,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    28,  -635,     0,     0,     0,     0,     0,
      29,    30,    31,    32,     0,     0,     0,     0,     0,     0,
       0,    33,    34,    35,    36,     0,     0,     0,    37,     0,
       0,    38,     0,     0,    40,     0,     0,   489,     0,    42,
      43,    44,    45,    46,    47,    48,     0,    49,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    50,
       0,     0,    51,    52,     0,    53,    54,     0,     0,     0,
       0,     0,     0,     0,    55,     5,     0,     0,    56,     0,
     485,    57,     7,     8,     0,     0,     0,     0,     0,     0,
      11,    12,  -637,    13,     0,     0,     0,     0,    14,    15,
       0,     0,     0,    16,     0,     0,   486,   487,    58,    18,
      19,    20,   488,    22,    23,    24,     0,    25,     0,     0,
       0,     0,     0,     0,     0,    26,     0,    27,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    28,
       0,     0,     0,     0,     0,     0,    29,    30,    31,    32,
       0,     0,     0,     0,     0,     0,     0,    33,    34,    35,
      36,     0,     0,     0,    37,     0,     0,    38,     0,     0,
      40,     0,     0,   489,     0,    42,    43,    44,    45,    46,
      47,    48,     0,    49,     0,     0,     0,     0,   119,     0,
       0,     0,     0,     0,     0,    50,     0,     0,    51,    52,
       0,    53,    54,   120,   121,     0,     0,   122,   123,     0,
      55,   124,   125,     0,    56,   126,     0,    57,     0,     0,
     474,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   127,   128,     0,     0,   129,     0,
       0,     0,     0,     0,    58,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   119,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     120,   121,     0,     0,   122,   123,     0,     0,   124,   125,
       0,     0,   126,   130,     0,     0,     0,     0,     0,     0,
       0,     0,   131,     0,   132,   133,   134,   135,   136,   137,
     138,   127,   128,   139,     0,   129,     0,   140,     0,   475,
       0,   141,   378,     0,     0,     0,     0,     0,     0,     0,
     142,   143,   144,   145,     0,     0,     0,     0,     0,     0,
     146,     0,   147,   148,   149,     0,   150,   151,   152,   153,
     154,     0,     0,     0,   155,     0,     0,     0,     0,   156,
     130,     0,   157,     0,     0,     0,     0,     0,     0,   131,
       0,   132,   133,   134,   135,   136,   137,   138,     0,     0,
     139,     0,     0,     0,   140,     0,     0,     0,   141,     0,
       0,     0,     0,     0,     0,     0,     0,   142,   143,   144,
     145,     0,     0,     0,   119,     0,     0,   146,     0,   147,
     148,   149,     0,   150,   151,   152,   153,   154,     0,   120,
     121,   155,     0,   122,   123,     0,   156,   124,   125,   157,
       0,   126,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     127,   128,     0,     0,   129,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   119,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   120,   121,     0,     0,
     122,   123,     0,     0,   124,   125,     0,     0,   126,   130,
       0,     0,     0,     0,     0,     0,     0,     0,   131,     0,
     132,   133,   134,   135,   136,   137,   138,   127,   128,   139,
       0,   129,     0,   140,     0,     0,     0,   141,   872,     0,
       0,     0,     0,     0,     0,     0,   142,   143,   144,   145,
       0,     0,     0,     0,     0,     0,   146,     0,   147,   148,
     149,     0,   150,   151,   152,   153,   154,     0,     0,     0,
     155,     0,     0,     0,     0,   156,   130,     0,   157,     0,
       0,     0,     0,     0,     0,   131,     0,   132,   133,   134,
     135,   136,   137,   138,     0,     0,   139,     0,     0,     0,
     140,     0,     0,     0,   141,     0,     0,     0,     0,     0,
       0,     0,     0,   142,   143,   144,   145,     0,     0,     0,
       0,     0,     0,   146,     0,   147,   148,   149,     0,   150,
     151,   152,   153,   154,     0,     0,     0,   155,     0,     0,
       0,     0,   156,     0,     0,   157
};

static const yytype_int16 yycheck[] =
{
       5,   578,   262,     8,   264,   608,   378,    79,    80,    76,
      77,   296,    41,   531,   307,   476,   368,   369,   370,   371,
     372,     1,    27,   288,   537,     1,    31,    32,    33,    34,
      35,   291,    37,    38,     1,    40,   129,   247,     1,   249,
     980,   981,     1,     1,     1,    39,    64,    51,     1,     1,
       1,    62,     1,     1,     1,     1,     1,     1,    63,     1,
     314,     1,   155,   156,     1,    70,    33,    72,     1,     1,
      51,    60,     1,    13,    52,     1,     1,     0,    83,    84,
      18,    86,    87,    88,     1,     1,    32,    61,    35,    13,
       1,    33,    16,    64,    99,     1,    48,   102,     1,   104,
      33,   106,    64,     1,    51,     0,    18,   112,     1,   114,
     127,    48,    49,   148,    33,    64,    33,    83,     1,   722,
      65,    33,   170,   140,    89,   173,    51,    33,    72,    67,
     170,    96,     1,     1,   128,   170,     6,     1,     1,     1,
      72,   171,   925,     1,    16,    17,   929,   127,   113,     1,
     115,     1,     1,     1,    94,   173,    82,    29,     6,   139,
       7,   141,   140,   174,   169,   170,   171,    39,   127,   173,
     175,   160,   177,   140,   140,   180,    64,   140,    64,   127,
     139,   186,   141,   140,   189,   252,   191,    34,   140,   170,
     195,   140,   157,   141,   170,   175,   140,   173,   127,   173,
     140,   172,   173,   140,   171,   210,   148,   140,   170,   172,
     215,   140,   217,   726,   172,   173,   175,   182,   171,   224,
     171,   226,  1162,   170,   170,   170,   231,    64,   193,   148,
     170,   103,   148,   605,   140,   240,   148,   242,   170,   499,
     533,   170,   140,   248,   170,   170,     1,   140,   253,   514,
     515,   216,   257,   170,   170,   127,   261,   140,   263,   170,
     265,   471,   267,    82,   269,   270,   271,   170,    56,   274,
      64,   140,   140,   366,   367,   280,   140,   140,   140,   127,
     285,     1,   140,   288,   172,   290,   172,   292,   140,    45,
     140,   140,    64,   140,    64,    50,     3,     4,     5,   127,
     172,    64,    50,    58,    59,    64,    64,    16,    17,   140,
    1025,  1026,  1027,   141,    69,     1,   281,    37,   283,    48,
      29,   286,    77,    78,    64,    53,    33,    82,   293,    57,
      39,    87,    64,    64,    82,   172,   173,    44,    45,    46,
      47,    48,    49,    64,    48,    64,    64,   140,    92,    93,
      64,   163,   164,    73,    55,   816,    76,    82,    64,    79,
      80,    81,    64,     1,   329,    64,  1081,     1,   119,    64,
     173,  1086,   337,   338,   339,   126,   341,    97,    98,   173,
      87,  1096,    68,   348,    64,   390,   391,    64,   140,   144,
     145,   146,   357,   358,   103,   104,   105,   402,   403,    13,
     172,   173,    16,   173,   127,    64,   150,   127,   128,   414,
     173,   140,   417,   172,   172,   170,   171,   484,   127,    64,
     140,   706,   707,   708,   131,   132,   431,   779,    61,   722,
      68,  1146,   172,   718,    68,    61,   140,    18,   127,   404,
     172,   172,   447,   448,   449,    13,   147,    28,    16,    30,
     139,   172,   141,   172,   172,  1058,  1059,   711,   172,   464,
     489,    51,   716,   717,   982,   983,   172,   432,    13,    18,
     172,    16,    17,   172,   171,   480,   481,   172,   443,    64,
     445,    66,    72,    73,    29,    64,   175,    66,   493,    79,
      80,    81,   172,    38,    39,   172,   501,    50,   503,   171,
      68,    16,    17,    89,   171,    58,    59,    97,    98,   514,
     515,   171,   477,   172,    29,   101,   521,    58,    59,   524,
     127,   526,    63,    51,    39,   120,   170,   172,   123,   173,
     163,   164,   139,   170,   141,    51,   173,    65,    66,    67,
     170,   546,    50,   173,    72,   550,   132,   512,    64,    94,
      58,    59,   170,    56,   140,   173,    72,    61,   103,   104,
     105,    69,    32,    33,   281,    35,   283,   532,   175,    77,
      78,   171,    14,    15,  1137,  1138,    20,    19,    20,  1142,
     170,    51,   127,   172,   173,  1148,  1149,  1150,   103,   171,
     657,   144,   145,   146,   170,    65,   170,   173,    73,   173,
      42,   855,    72,   608,    79,    80,    81,   171,   613,   172,
     173,   616,   127,   578,   619,   171,   683,   689,   172,   173,
     161,   162,    97,    98,   171,  1202,    20,   632,  1000,   165,
     166,   167,   171,   363,   364,   365,   144,   145,   146,   172,
     173,    86,    87,   172,   171,    87,    88,    89,   171,    14,
      15,   373,   374,    18,   171,    20,    66,   171,   725,   101,
     727,   171,   171,   668,   629,    14,    15,   672,   673,    18,
     675,    20,   677,   171,   171,   680,   171,    42,   259,   684,
     685,   686,   171,   171,   171,   690,   171,   171,   171,   171,
     944,   171,   171,    42,   171,   173,    18,   140,    72,   173,
     665,   173,   173,   140,   964,    70,   140,   173,   140,    18,
     140,   140,    50,   172,   719,    51,   173,   140,   723,   140,
      20,    70,    87,    88,   305,    20,    18,   140,    48,   140,
     735,   736,   171,   314,   699,    76,    71,   172,    87,    88,
      64,   140,   173,    18,    84,   173,   173,   328,    82,   330,
     331,   332,   333,   173,   335,   172,   172,   172,   172,    53,
     172,   342,   343,   344,   729,   730,   172,   172,   172,   350,
     351,   352,   353,   354,   355,   356,   172,   172,   140,   172,
     172,   140,   173,   172,   172,   140,   853,   140,   793,   172,
     170,   173,   173,     1,  1048,     1,    33,   173,   803,    47,
      28,    82,   767,   140,   172,   172,   175,  1061,   140,    72,
     173,   171,  1066,   170,   819,  1069,    66,   140,    51,   140,
     139,   173,   140,   140,   172,    28,    80,    28,   173,   172,
     897,   173,   413,   101,    18,   416,  1090,    79,   843,    73,
      51,   846,   847,   140,   108,   850,   173,    91,    66,   140,
      66,    18,   857,   858,   932,   820,   821,   171,  1071,   172,
    1114,   931,  1068,   720,   876,   974,   871,  1050,    65,  1123,
     946,   832,   298,   239,     4,    13,   456,   820,   604,   603,
     464,    13,   109,  1108,    71,   506,   168,  1029,   806,  1151,
     895,  1143,   959,   814,  1139,  1074,   634,   512,   699,   821,
     443,   505,   871,   868,   978,   870,  1160,   251,   316,   850,
     915,  1044,  1121,   918,   732,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   938,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   949,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   926,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   980,   981,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1051,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   976,   977,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1025,  1026,  1027,    -1,    -1,    -1,  1031,  1032,  1033,    -1,
      -1,  1036,  1037,    -1,    -1,    -1,    -1,    -1,    -1,  1044,
      -1,  1046,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1058,  1059,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1067,    -1,    -1,  1070,    -1,    -1,    -1,    -1,
      -1,  1076,   653,   654,   655,   656,  1081,    -1,  1083,    -1,
      -1,  1086,    -1,  1088,    -1,    -1,  1091,    -1,    -1,    -1,
      -1,  1096,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     681,    -1,    -1,    -1,    -1,  1110,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1121,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1195,    -1,
     711,    -1,    -1,    -1,    -1,   716,   717,    -1,  1205,    -1,
      -1,  1146,    -1,    -1,    -1,    -1,    -1,  1112,    -1,  1154,
    1155,    -1,    -1,    -1,    -1,    -1,    -1,  1162,    -1,   740,
     741,    -1,    -1,   744,    -1,    -1,    -1,    -1,   749,    -1,
      -1,    -1,    -1,    -1,   755,    -1,   757,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1192,   769,    -1,
      -1,    -1,    -1,    -1,   775,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1209,  1210,  1211,    -1,    -1,    -1,
     791,   792,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,
      -1,    -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1202,    22,    23,
      -1,    -1,    26,    27,    -1,    -1,    30,    31,    -1,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   842,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      54,    -1,    -1,    57,   855,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,
       7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,
      27,    -1,    -1,    30,    31,    -1,    -1,    34,   102,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,   113,
     114,   115,   116,   117,   118,   119,    53,    54,   122,    -1,
      57,    -1,   126,    -1,    -1,    -1,   130,   928,    -1,    -1,
      -1,    -1,    -1,   934,    -1,   139,   140,   141,   142,    -1,
      -1,    -1,    -1,   944,    -1,   149,    -1,   151,   152,   153,
      -1,   155,   156,   157,   158,   159,    -1,    -1,    -1,   163,
      -1,    -1,    -1,    -1,   168,   102,   170,   171,    -1,   173,
      -1,    -1,    -1,    -1,   111,    -1,   113,   114,   115,   116,
     117,   118,   119,    -1,    -1,   122,    -1,    -1,    -1,   126,
      -1,    -1,   993,   130,    -1,    -1,   997,    -1,    -1,    -1,
      -1,    -1,   139,   140,   141,   142,    -1,    -1,    -1,    -1,
      -1,  1012,   149,    -1,   151,   152,   153,    -1,   155,   156,
     157,   158,   159,     1,    -1,    -1,   163,    -1,    -1,     7,
      -1,   168,    -1,    -1,   171,   172,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    -1,  1048,    26,    27,
      -1,    -1,    30,    31,    -1,    -1,    34,    -1,    -1,    -1,
    1061,    39,    -1,    -1,    -1,  1066,    -1,    -1,  1069,    -1,
      -1,  1072,    -1,    -1,    -1,    53,    54,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1090,
       1,    -1,    -1,    -1,    -1,    -1,     7,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,  1114,    -1,    26,    27,    -1,    -1,    30,
      31,    -1,  1123,    34,   102,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   111,    -1,   113,   114,   115,   116,   117,
     118,   119,    53,    54,   122,    -1,    57,    -1,   126,    -1,
     128,    -1,   130,    -1,    -1,    -1,    -1,    -1,    -1,  1160,
      -1,   139,   140,   141,   142,    -1,    -1,    -1,    -1,    -1,
      -1,   149,    -1,   151,   152,   153,    -1,   155,   156,   157,
     158,   159,    -1,    -1,    -1,   163,    -1,    -1,    -1,    -1,
     168,   102,    -1,   171,    -1,    -1,    -1,    -1,    -1,    -1,
     111,    -1,   113,   114,   115,   116,   117,   118,   119,    -1,
      -1,   122,    -1,    -1,    -1,   126,    -1,    -1,    -1,   130,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,
     141,   142,    -1,    -1,    -1,    -1,    -1,    -1,   149,    -1,
     151,   152,   153,    -1,   155,   156,   157,   158,   159,     1,
      -1,    -1,   163,    -1,    -1,     7,    -1,   168,    -1,   170,
     171,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    -1,    -1,    26,    27,    -1,    -1,    30,    31,
      -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    54,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,
      -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,
      -1,    26,    27,    -1,    -1,    30,    31,    -1,    -1,    34,
     102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,
      -1,   113,   114,   115,   116,   117,   118,   119,    53,    54,
     122,    -1,    57,    -1,   126,    -1,    -1,    -1,   130,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,   141,
     142,    -1,    -1,    -1,    -1,    -1,    -1,   149,    -1,   151,
     152,   153,    -1,   155,   156,   157,   158,   159,    -1,    -1,
      -1,   163,    -1,    -1,    -1,    -1,   168,   102,    -1,   171,
      -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,   113,   114,
     115,   116,   117,   118,   119,    -1,    -1,   122,    -1,    -1,
      -1,   126,    -1,    -1,    -1,   130,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   139,   140,   141,   142,    -1,     1,
      -1,    -1,    -1,    -1,   149,     7,   151,   152,   153,    -1,
     155,   156,   157,   158,   159,    -1,    -1,    -1,   163,    -1,
      22,    23,    -1,   168,    26,    27,   171,    -1,    30,    31,
      -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    54,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,
      -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,
      -1,    26,    27,    -1,    -1,    30,    31,    -1,    -1,    34,
     102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,
      -1,   113,   114,   115,   116,   117,   118,   119,    53,    54,
     122,    -1,    57,    -1,   126,    -1,    -1,    -1,   130,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,   141,
     142,    -1,    -1,    -1,    -1,    -1,    -1,   149,    -1,   151,
     152,   153,    -1,   155,   156,   157,   158,   159,    -1,    -1,
      -1,   163,    -1,    -1,    -1,    -1,   168,   102,    -1,   171,
      -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,   113,   114,
     115,   116,   117,   118,   119,    -1,    -1,   122,    -1,    -1,
      -1,   126,    -1,    -1,    -1,   130,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   139,   140,   141,   142,    -1,     1,
      -1,    -1,    -1,    -1,   149,     7,   151,   152,   153,    -1,
     155,   156,   157,   158,   159,    -1,    -1,    -1,   163,    -1,
      22,    23,    -1,   168,    26,    27,   171,    -1,    30,    31,
      -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    54,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,
      -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,
      -1,    26,    27,    -1,    -1,    30,    31,    -1,    -1,    34,
     102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,
      -1,   113,   114,   115,   116,   117,   118,   119,    53,    54,
     122,    -1,    57,    -1,   126,    -1,    -1,    -1,   130,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,   141,
     142,    -1,    -1,    -1,    -1,    -1,    -1,   149,    -1,   151,
     152,   153,    -1,   155,   156,   157,   158,   159,    -1,    -1,
      -1,   163,    -1,    -1,    -1,    -1,   168,   102,    -1,   171,
      -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,   113,   114,
     115,   116,   117,   118,   119,    -1,    -1,   122,    -1,    -1,
      -1,   126,    -1,    -1,    -1,   130,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   139,   140,   141,   142,    -1,     1,
      -1,    -1,    -1,    -1,   149,     7,   151,   152,   153,    -1,
     155,   156,   157,   158,   159,    -1,    -1,    -1,   163,    -1,
      22,    23,    -1,   168,    26,    27,   171,    -1,    30,    31,
      -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    54,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,
      -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,
      -1,    26,    27,    -1,    -1,    30,    31,    -1,    -1,    34,
     102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,
      -1,   113,   114,   115,   116,   117,   118,   119,    53,    54,
     122,    -1,    57,    -1,   126,    -1,    -1,    -1,   130,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,   141,
     142,    -1,    -1,    -1,    -1,    -1,    -1,   149,    -1,   151,
     152,   153,    -1,   155,   156,   157,   158,   159,    -1,    -1,
      -1,   163,    -1,    -1,    -1,    -1,   168,   102,    -1,   171,
      -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,   113,   114,
     115,   116,   117,   118,   119,    -1,    -1,   122,    -1,    -1,
      -1,   126,    -1,    -1,    -1,   130,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   139,   140,   141,   142,    -1,     1,
      -1,    -1,    -1,    -1,   149,     7,   151,   152,   153,    -1,
     155,   156,   157,   158,   159,    -1,    -1,    -1,   163,    -1,
      22,    23,    -1,   168,    26,    27,   171,    -1,    30,    31,
      -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    54,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,
      -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,
      -1,    26,    27,    -1,    -1,    30,    31,    -1,    -1,    34,
     102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,
      -1,   113,   114,   115,   116,   117,   118,   119,    53,    54,
     122,    -1,    57,    -1,   126,    -1,    -1,    -1,   130,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,   141,
     142,    -1,    -1,    -1,    -1,    -1,    -1,   149,    -1,   151,
     152,   153,    -1,   155,   156,   157,   158,   159,    -1,    -1,
      -1,   163,    -1,    -1,    -1,    -1,   168,   102,    -1,   171,
      -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,   113,   114,
     115,   116,   117,   118,   119,    -1,    -1,   122,    -1,    -1,
      -1,   126,    -1,    -1,    -1,   130,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   139,   140,   141,   142,    -1,     1,
      -1,    -1,    -1,    -1,   149,     7,   151,   152,   153,    -1,
     155,   156,   157,   158,   159,    -1,    -1,    -1,   163,    -1,
      22,    23,    -1,   168,    26,    27,   171,    -1,    30,    31,
      -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    54,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,
      -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,
      -1,    26,    27,    -1,    -1,    30,    31,    -1,    -1,    34,
     102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,
      -1,   113,   114,   115,   116,   117,   118,   119,    53,    54,
     122,    -1,    57,    -1,   126,    -1,    -1,    -1,   130,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,   141,
     142,    -1,    -1,    -1,    -1,    -1,    -1,   149,    -1,   151,
     152,   153,    -1,   155,   156,   157,   158,   159,    -1,    -1,
      -1,   163,    -1,    -1,    -1,    -1,   168,   102,    -1,   171,
      -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,   113,   114,
     115,   116,   117,   118,   119,    -1,    -1,   122,    -1,    -1,
      -1,   126,    -1,    -1,    -1,   130,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   139,   140,   141,   142,    -1,    -1,
      -1,    -1,    -1,    -1,   149,    -1,   151,   152,   153,    -1,
     155,   156,   157,   158,   159,    -1,    -1,     1,   163,    -1,
      -1,    -1,     6,   168,     8,     9,   171,    -1,    -1,    -1,
      -1,    -1,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      24,    25,    -1,    -1,    -1,    29,    -1,    -1,    32,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,    -1,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    65,    -1,    67,    -1,    -1,    -1,    71,    72,    73,
      74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      84,    85,    86,    -1,    -1,    -1,    90,    -1,    -1,    93,
      -1,    -1,    96,    -1,    -1,    99,    -1,   101,   102,   103,
     104,   105,   106,   107,    -1,   109,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,    -1,    -1,
     124,   125,    -1,   127,   128,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   136,     1,    -1,    -1,   140,    -1,     6,   143,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    24,    25,    -1,    -1,
      -1,    29,    -1,    -1,    32,    33,   170,    35,    36,    37,
      38,    39,    40,    41,    -1,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    51,    -1,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    67,
      -1,    -1,    -1,    71,    72,    73,    74,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    84,    85,    86,    -1,
      -1,    -1,    90,    -1,    -1,    93,    -1,    -1,    96,    -1,
      -1,    99,    -1,   101,   102,   103,   104,   105,   106,   107,
      -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   121,    -1,    -1,   124,   125,     1,   127,
     128,    -1,    -1,     6,    -1,     8,     9,    10,   136,    -1,
      13,    -1,   140,    16,    17,   143,    19,    -1,    -1,    -1,
      -1,    24,    25,    -1,    -1,    -1,    29,    -1,    -1,    32,
      -1,    -1,    35,    36,    37,    38,    39,    40,    41,    -1,
      43,    -1,   170,    -1,    -1,    -1,    -1,    -1,    51,    -1,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      73,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    84,    85,    86,    -1,    -1,    -1,    90,    -1,    -1,
      93,    94,    -1,    96,    -1,    -1,    99,    -1,   101,   102,
     103,   104,   105,   106,   107,    -1,   109,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,    -1,
      -1,   124,   125,    -1,   127,   128,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   136,     1,    -1,    -1,   140,    -1,     6,
     143,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    24,    25,    -1,
      -1,    -1,    29,    -1,    -1,    32,    33,   170,    35,    36,
      37,    38,    39,    40,    41,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    73,    74,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    84,    85,    86,
      -1,    -1,    -1,    90,    -1,    -1,    93,    -1,    -1,    96,
      -1,    -1,    99,    -1,   101,   102,   103,   104,   105,   106,
     107,    -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   121,    -1,    -1,   124,   125,    -1,
     127,   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,
       1,    -1,    -1,   140,    -1,     6,   143,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    24,    25,    -1,    -1,    -1,    29,    -1,
      -1,    32,    33,   170,    35,    36,    37,    38,    39,    40,
      41,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    73,    74,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    84,    85,    86,    -1,    -1,    -1,    90,
      -1,    -1,    93,    -1,    -1,    96,    -1,    -1,    99,    -1,
     101,   102,   103,   104,   105,   106,   107,    -1,   109,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     121,    -1,    -1,   124,   125,    -1,   127,   128,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   136,     1,    -1,    -1,   140,
      -1,     6,   143,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,
      25,    -1,    -1,    -1,    29,    -1,    -1,    32,    33,   170,
      35,    36,    37,    38,    39,    40,    41,    -1,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    84,
      85,    86,    -1,    -1,    -1,    90,    -1,    -1,    93,    -1,
      -1,    96,    -1,    -1,    99,    -1,   101,   102,   103,   104,
     105,   106,   107,    -1,   109,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   121,    -1,    -1,   124,
     125,    -1,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   136,     1,    -1,    -1,   140,    -1,     6,   143,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    24,    25,    -1,    -1,    -1,
      29,    -1,    -1,    32,    33,   170,    35,    36,    37,    38,
      39,    40,    41,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    74,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    84,    85,    86,    -1,    -1,
      -1,    90,    -1,    -1,    93,    -1,    -1,    96,    -1,    -1,
      99,    -1,   101,   102,   103,   104,   105,   106,   107,    -1,
     109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   121,    -1,    -1,   124,   125,    -1,   127,   128,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,     1,    -1,
      -1,   140,    -1,     6,   143,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    24,    25,    -1,    -1,    -1,    29,    -1,    -1,    32,
      33,   170,    35,    36,    37,    38,    39,    40,    41,    -1,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      73,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    84,    85,    86,    -1,    -1,    -1,    90,    -1,    -1,
      93,    -1,    -1,    96,    -1,    -1,    99,    -1,   101,   102,
     103,   104,   105,   106,   107,    -1,   109,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,    -1,
      -1,   124,   125,    -1,   127,   128,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   136,     1,    -1,    -1,   140,    -1,     6,
     143,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    24,    25,    -1,
      -1,    -1,    29,    -1,    -1,    32,    33,   170,    35,    36,
      37,    38,    39,    40,    41,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    73,    74,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    84,    85,    86,
      -1,    -1,    -1,    90,    -1,    -1,    93,    -1,    -1,    96,
      -1,    -1,    99,    -1,   101,   102,   103,   104,   105,   106,
     107,    -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   121,    -1,    -1,   124,   125,    -1,
     127,   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,
       1,    -1,    -1,   140,    -1,     6,   143,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    24,    25,    -1,    -1,    -1,    29,    -1,
      -1,    32,    33,   170,    35,    36,    37,    38,    39,    40,
      41,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    73,    74,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    84,    85,    86,    -1,    -1,    -1,    90,
      -1,    -1,    93,    -1,    -1,    96,    -1,    -1,    99,    -1,
     101,   102,   103,   104,   105,   106,   107,    -1,   109,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     121,    -1,    -1,   124,   125,    -1,   127,   128,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   136,     1,    -1,    -1,   140,
      -1,     6,   143,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,
      25,    -1,    -1,    -1,    29,    -1,    -1,    32,    33,   170,
      35,    36,    37,    38,    39,    40,    41,    -1,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    84,
      85,    86,    -1,    -1,    -1,    90,    -1,    -1,    93,    -1,
      -1,    96,    -1,    -1,    99,    -1,   101,   102,   103,   104,
     105,   106,   107,    -1,   109,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   121,    -1,    -1,   124,
     125,    -1,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   136,     1,    -1,    -1,   140,    -1,     6,   143,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    24,    25,    -1,    -1,    -1,
      29,    -1,    -1,    32,    33,   170,    35,    36,    37,    38,
      39,    40,    41,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    74,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    84,    85,    86,    -1,    -1,
      -1,    90,    -1,    -1,    93,    -1,    -1,    96,    -1,    -1,
      99,    -1,   101,   102,   103,   104,   105,   106,   107,    -1,
     109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   121,    -1,    -1,   124,   125,    -1,   127,   128,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,     1,    -1,
      -1,   140,    -1,     6,   143,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    24,    25,    -1,    -1,    -1,    29,    -1,    -1,    32,
      33,   170,    35,    36,    37,    38,    39,    40,    41,    -1,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      73,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    84,    85,    86,    -1,    -1,    -1,    90,    -1,    -1,
      93,    -1,    -1,    96,    -1,    -1,    99,    -1,   101,   102,
     103,   104,   105,   106,   107,    -1,   109,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,    -1,
      -1,   124,   125,    -1,   127,   128,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   136,     1,    -1,    -1,   140,    -1,     6,
     143,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    24,    25,    -1,
      -1,    -1,    29,    -1,    -1,    32,    33,   170,    35,    36,
      37,    38,    39,    40,    41,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    73,    74,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    84,    85,    86,
      -1,    -1,    -1,    90,    -1,    -1,    93,    -1,    -1,    96,
      -1,    -1,    99,    -1,   101,   102,   103,   104,   105,   106,
     107,    -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   121,    -1,    -1,   124,   125,     1,
     127,   128,    -1,    -1,     6,    -1,     8,     9,    -1,   136,
      -1,    -1,    -1,   140,    16,    17,   143,    19,    -1,    -1,
      -1,    -1,    24,    25,    -1,    -1,    -1,    29,    -1,    -1,
      32,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
      -1,    43,    -1,   170,    -1,    -1,    -1,    -1,    -1,    51,
      -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    66,    -1,    -1,    -1,    -1,    -1,
      72,    73,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    84,    85,    86,    -1,    -1,    -1,    90,    -1,
      -1,    93,    -1,    -1,    96,    -1,    -1,    99,    -1,   101,
     102,   103,   104,   105,   106,   107,    -1,   109,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,
      -1,    -1,   124,   125,    -1,   127,   128,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   136,     1,    -1,    -1,   140,    -1,
       6,   143,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,    25,
      -1,    -1,    -1,    29,    -1,    -1,    32,    33,   170,    35,
      36,    37,    38,    39,    40,    41,    -1,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    84,    85,
      86,    -1,    -1,    -1,    90,    -1,    -1,    93,    -1,    -1,
      96,    -1,    -1,    99,    -1,   101,   102,   103,   104,   105,
     106,   107,    -1,   109,    -1,    -1,    -1,    -1,     7,    -1,
      -1,    -1,    -1,    -1,    -1,   121,    -1,    -1,   124,   125,
      -1,   127,   128,    22,    23,    -1,    -1,    26,    27,    -1,
     136,    30,    31,    -1,   140,    34,    -1,   143,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    54,    -1,    -1,    57,    -1,
      -1,    -1,    -1,    -1,   170,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     7,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    -1,    -1,    26,    27,    -1,    -1,    30,    31,
      -1,    -1,    34,   102,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   111,    -1,   113,   114,   115,   116,   117,   118,
     119,    53,    54,   122,    -1,    57,    -1,   126,    -1,   128,
      -1,   130,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     139,   140,   141,   142,    -1,    -1,    -1,    -1,    -1,    -1,
     149,    -1,   151,   152,   153,    -1,   155,   156,   157,   158,
     159,    -1,    -1,    -1,   163,    -1,    -1,    -1,    -1,   168,
     102,    -1,   171,    -1,    -1,    -1,    -1,    -1,    -1,   111,
      -1,   113,   114,   115,   116,   117,   118,   119,    -1,    -1,
     122,    -1,    -1,    -1,   126,    -1,    -1,    -1,   130,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,   141,
     142,    -1,    -1,    -1,     7,    -1,    -1,   149,    -1,   151,
     152,   153,    -1,   155,   156,   157,   158,   159,    -1,    22,
      23,   163,    -1,    26,    27,    -1,   168,    30,    31,   171,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    54,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,
      26,    27,    -1,    -1,    30,    31,    -1,    -1,    34,   102,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,
     113,   114,   115,   116,   117,   118,   119,    53,    54,   122,
      -1,    57,    -1,   126,    -1,    -1,    -1,   130,   131,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   139,   140,   141,   142,
      -1,    -1,    -1,    -1,    -1,    -1,   149,    -1,   151,   152,
     153,    -1,   155,   156,   157,   158,   159,    -1,    -1,    -1,
     163,    -1,    -1,    -1,    -1,   168,   102,    -1,   171,    -1,
      -1,    -1,    -1,    -1,    -1,   111,    -1,   113,   114,   115,
     116,   117,   118,   119,    -1,    -1,   122,    -1,    -1,    -1,
     126,    -1,    -1,    -1,   130,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   139,   140,   141,   142,    -1,    -1,    -1,
      -1,    -1,    -1,   149,    -1,   151,   152,   153,    -1,   155,
     156,   157,   158,   159,    -1,    -1,    -1,   163,    -1,    -1,
      -1,    -1,   168,    -1,    -1,   171
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   177,   179,     0,   180,     1,     6,     8,     9,    10,
      13,    16,    17,    19,    24,    25,    29,    32,    35,    36,
      37,    38,    39,    40,    41,    43,    51,    53,    65,    72,
      73,    74,    75,    83,    84,    85,    86,    90,    93,    94,
      96,    99,   101,   102,   103,   104,   105,   106,   107,   109,
     121,   124,   125,   127,   128,   136,   140,   143,   170,   178,
     181,   182,   195,   213,   215,   217,   219,   220,   258,   294,
     305,   308,   310,   316,   321,   328,   331,   334,   337,   338,
     339,   340,   341,   342,   386,   388,   389,   391,   397,   398,
     415,   425,   427,   432,   433,   437,   443,   445,   178,     1,
     140,   178,    52,   140,   222,   223,     1,    37,   140,   276,
     305,   308,     1,   438,     1,   434,     1,   446,     1,     7,
      22,    23,    26,    27,    30,    31,    34,    53,    54,    57,
     102,   111,   113,   114,   115,   116,   117,   118,   119,   122,
     126,   130,   139,   140,   141,   142,   149,   151,   152,   153,
     155,   156,   157,   158,   159,   163,   168,   171,   234,   239,
     240,   241,   242,   243,   244,   245,   247,   249,   252,     1,
     140,     1,   140,    13,    16,     1,   140,     1,   140,   171,
     224,   178,   266,     1,   252,    82,   252,   178,   178,   148,
     178,     1,   178,   268,   178,     1,     6,   127,   178,   178,
     178,    13,    16,    17,    29,    38,    39,    94,   127,   341,
       6,   140,   287,   140,   284,     1,   270,     1,    64,   140,
       1,   317,   345,   309,     1,   140,     1,    82,   171,   267,
     387,     1,    13,    94,   140,   178,   230,    56,   214,   214,
       1,   140,     1,   140,   282,   178,    82,   275,   320,   178,
       1,   311,   278,    18,    67,   254,   254,     1,    33,   171,
     336,     1,   336,     1,   336,     1,   140,   323,   324,     1,
     127,   140,   178,   419,     1,   178,   403,   173,   403,   403,
       1,   173,   178,   281,   402,     1,   252,   253,   399,   401,
       1,   261,     1,   428,   253,   178,   196,   178,   173,   178,
     178,   140,   263,   127,   310,    61,   421,   319,   320,   178,
     253,   178,   253,    18,    33,   148,   447,   448,   449,   459,
      51,    65,    66,    67,    72,   333,   335,   224,   171,   171,
     171,   171,   171,   171,   224,   171,   241,   171,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   241,
     241,   253,    56,   165,   166,   167,   163,   164,    58,    59,
      63,   161,   162,    60,   160,    61,    62,   174,    64,   333,
     178,   178,   178,   426,    20,    20,   178,   178,   172,   178,
       1,   253,   404,    66,    66,    48,   140,   178,   178,   178,
     253,   178,    89,   101,   132,   140,   140,    13,    16,     1,
     343,   178,   173,   173,   289,   173,   173,   286,   178,   253,
     178,   140,    18,    72,   140,   352,   178,   173,   178,   306,
     307,     1,   274,    50,    58,    59,    69,    77,    78,   144,
     145,   146,   406,   407,   393,   394,   178,   232,   231,   233,
     221,   254,   221,   178,   216,   178,   218,    73,    79,    80,
      81,    97,    98,   295,   297,   298,   304,   291,    48,   140,
     291,   178,   291,    18,    39,   128,   314,   315,   423,   254,
       1,    65,   178,   418,   262,     6,    32,    33,    38,    99,
     255,   258,   330,    18,   178,    55,   147,   211,   252,   259,
     178,   323,   178,   323,   178,   325,   173,   178,   178,   178,
     178,   178,   390,   178,   399,   399,   178,   253,   173,   402,
     178,   323,   178,   253,     1,   173,   264,   197,   212,   253,
     223,   279,    50,   277,   252,    51,   292,   421,   439,   435,
      32,    33,    35,    51,    65,    72,   465,     1,   211,   450,
      18,   448,   252,   253,   252,   252,   252,   252,   252,   253,
     253,   253,     1,   140,   172,   253,   252,   252,   252,     1,
     140,     1,   140,     1,    48,    49,   140,   253,   235,   252,
     252,   252,   252,   252,   252,   252,   253,   253,   172,    53,
      57,   240,   240,   240,   241,   241,   242,   242,   242,   242,
     242,   243,   243,   246,   248,   250,   249,   173,   441,   442,
     140,   140,   178,     1,   178,   405,   269,   178,   178,   253,
     272,   273,    20,    20,    18,   140,   288,   252,   178,   285,
     252,   178,   271,   346,   392,    48,   140,   178,   236,   237,
     238,   253,   404,   253,   395,   396,   178,   178,   178,    18,
     171,   225,   225,   302,   300,   299,   301,   283,    51,    72,
     178,   296,   298,    76,   291,   424,   352,   253,    18,   178,
     178,   254,     1,    68,     1,    68,     1,    68,    13,    16,
      68,    71,   329,   332,     1,    35,    51,   178,   420,   172,
     323,   178,   178,   326,   406,   324,   395,   402,   402,   400,
     178,   429,   178,   140,   178,   444,     3,     4,     5,    33,
      44,    45,    46,    47,    48,    49,    87,   131,   132,   198,
     199,   200,   441,     1,   253,   408,   421,   293,   292,   173,
     173,   178,    18,   460,    82,     1,    32,   178,   464,   172,
     173,   173,   172,   172,   173,   172,     1,   172,   173,   173,
     172,   172,   172,   172,   172,   173,   172,   173,   172,   172,
     172,   172,   172,   172,   172,   172,   172,   173,   236,   173,
     172,   172,   172,   172,   172,   173,   172,   172,    53,    61,
     244,   245,   249,   140,   178,   442,   186,   184,   178,   178,
     178,    45,    87,   383,    14,    15,    19,    20,    42,    87,
      88,    89,   101,   373,   140,   140,   344,   140,   290,   253,
     178,   212,   347,   348,   349,   350,   422,   423,   393,   172,
     173,   173,    16,    17,    29,    39,   103,   127,   172,   226,
     227,   228,    84,    92,    93,   150,   229,   252,   252,   252,
     252,   254,   303,   253,   312,   170,     1,    72,   178,   416,
      18,   178,   178,   257,   178,   256,   178,     1,     1,   178,
       1,   252,   254,   178,   178,   178,   336,   178,   327,   401,
     173,   265,   131,   212,   212,   212,    47,   211,   203,   211,
     211,   212,   178,   200,   421,    51,   178,   414,    28,   411,
     254,   292,   254,   253,   253,   465,    82,   462,   140,   178,
     178,   252,   252,   252,   172,   140,   252,   252,   252,   253,
     172,   252,   252,   242,   175,     1,   171,   191,     1,   171,
     187,   252,   252,   178,   377,   376,   375,    72,   374,   378,
     178,   185,   183,   347,   173,   170,   354,   352,     1,    82,
     178,   322,   238,   396,   171,   172,   173,   140,   228,    18,
     252,   178,   356,   353,   354,   178,   178,   418,   254,   211,
     178,   178,    66,    66,   260,   253,   253,   444,   140,   203,
     202,   120,   123,   204,   201,    51,   409,   173,   412,   413,
      18,    18,   440,   436,   178,   140,   254,   451,   172,   172,
     172,   172,   172,   173,   172,   172,   172,   173,   172,   172,
     251,   178,   140,   192,   193,   178,   139,   188,   189,   384,
     379,   380,   381,   379,   253,   252,   379,   191,   187,   252,
      14,    15,    18,    20,    42,    70,    87,    88,   355,   351,
     178,     1,    48,   140,   211,   227,     1,    51,   178,   417,
     127,   140,   318,    18,    18,   254,   323,   430,    28,   205,
     205,   280,   253,   253,    51,   413,   417,   417,   441,   441,
     461,    80,   458,   252,   252,   249,   194,   172,   173,   190,
     172,   173,    28,   385,   173,   252,     1,   127,   139,   141,
     175,   366,   367,     1,   127,   141,   358,   359,     1,    15,
     357,     1,   127,   139,   141,   175,   361,   362,   356,   356,
     356,   353,   178,   178,   178,   172,   178,   178,   313,   464,
      18,   178,   173,   211,   101,   206,   206,   254,   410,   178,
     178,    18,   211,    79,   172,   172,   211,   178,   193,   211,
     178,   189,   252,   380,   382,   178,   368,   369,   370,   173,
     356,   178,   360,   173,   356,   178,   211,   178,   363,   364,
     365,   173,   356,   319,     1,    33,   178,   463,   253,   211,
      73,   207,    18,    51,   463,   211,   140,     7,    34,   140,
     371,   372,   371,   371,   367,   371,   359,   356,   371,   371,
     371,   362,   178,   178,   431,   211,   417,   452,   108,   173,
     208,    91,   140,    66,   209,   453,   178,    83,   140,   254,
     171,   454,   210,    66,   236,   455,   172,   254,   456,    18,
       1,   148,   178,   457,   178,   178
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   176,   177,   178,   179,   180,   179,   181,   181,   181,
     181,   181,   182,   182,   183,   182,   184,   182,   185,   182,
     186,   182,   187,   187,   188,   188,   190,   189,   191,   191,
     192,   192,   194,   193,   196,   195,   195,   197,   197,   198,
     198,   199,   199,   200,   200,   200,   200,   200,   200,   200,
     201,   200,   200,   202,   200,   200,   200,   200,   200,   203,
     203,   204,   204,   205,   205,   206,   206,   207,   208,   207,
     209,   209,   210,   209,   211,   212,   213,   213,   214,   214,
     215,   216,   215,   217,   218,   217,   219,   219,   220,   220,
     221,   222,   222,   223,   224,   224,   225,   225,   225,   226,
     226,   227,   228,   228,   228,   228,   228,   228,   228,   229,
     229,   229,   229,   230,   231,   230,   232,   230,   233,   230,
     230,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   235,   234,   234,
     234,   234,   236,   236,   237,   237,   238,   239,   239,   239,
     240,   240,   240,   240,   241,   241,   241,   241,   242,   242,
     242,   243,   243,   243,   243,   243,   243,   244,   244,   244,
     245,   246,   245,   247,   248,   247,   249,   250,   251,   249,
     252,   252,   253,   253,   254,   254,   255,   255,   256,   255,
     255,   257,   255,   255,   255,   255,   255,   255,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   259,   258,
     260,   258,   258,   261,   258,   258,   258,   258,   262,   258,
     263,   258,   258,   264,   258,   265,   258,   258,   266,   258,
     267,   258,   258,   268,   269,   258,   258,   270,   271,   258,
     258,   258,   272,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   273,   258,   258,   274,   258,   258,   258,   258,
     258,   275,   258,   258,   258,   276,   277,   258,   258,   278,
     258,   258,   258,   279,   280,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   281,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   282,   283,   258,   258,   258,   285,   284,   286,   286,
     288,   287,   289,   290,   289,   291,   293,   292,   294,   294,
     295,   296,   296,   296,   297,   297,   299,   298,   300,   298,
     301,   298,   302,   298,   303,   298,   304,   304,   304,   305,
     306,   305,   307,   305,   309,   308,   311,   312,   313,   310,
     310,   314,   315,   314,   317,   316,   318,   318,   318,   319,
     319,   320,   320,   321,   321,   321,   322,   322,   322,   322,
     322,   323,   323,   325,   324,   326,   327,   326,   328,   329,
     330,   330,   331,   331,   332,   332,   333,   333,   334,   334,
     334,   335,   335,   335,   336,   336,   336,   337,   337,   338,
     338,   339,   339,   340,   340,   341,   341,   341,   343,   344,
     342,   342,   345,   346,   342,   342,   347,   347,   349,   348,
     351,   350,   352,   353,   354,   354,   355,   355,   355,   355,
     355,   355,   355,   355,   355,   355,   355,   356,   356,   357,
     357,   358,   358,   360,   359,   359,   361,   361,   363,   362,
     364,   362,   365,   362,   362,   366,   366,   368,   367,   369,
     367,   370,   367,   367,   371,   372,   372,   372,   372,   373,
     373,   373,   373,   374,   373,   373,   375,   373,   376,   373,
     377,   373,   378,   373,   379,   379,   381,   382,   380,   383,
     384,   383,   385,   385,   387,   386,   388,   388,   390,   389,
     392,   391,   394,   393,   395,   395,   396,   397,   397,   398,
     398,   399,   400,   399,   401,   402,   403,   404,   404,   405,
     405,   406,   406,   406,   406,   406,   406,   407,   407,   407,
     407,   409,   410,   408,   411,   408,   408,   412,   412,   413,
     414,   414,   415,   415,   416,   416,   416,   417,   417,   417,
     418,   418,   418,   419,   419,   419,   419,   420,   420,   420,
     420,   421,   421,   422,   422,   423,   424,   423,   426,   425,
     425,   428,   429,   430,   431,   427,   427,   432,   432,   434,
     435,   436,   433,   433,   438,   439,   440,   437,   437,   441,
     441,   442,   443,   444,   446,   445,   445,   447,   447,   448,
     448,   450,   451,   452,   453,   454,   455,   456,   449,   457,
     457,   457,   458,   458,   460,   461,   459,   459,   462,   462,
     463,   463,   463,   464,   464,   464,   465,   465,   465,   465,
     465,   465,   465
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
       2,     2,     3,     3,     4,     3,     4,     3,     0,     5,
       0,     8,     3,     0,     4,     3,     4,     3,     0,     6,
       0,     8,     3,     0,     4,     0,     6,     4,     0,     3,
       0,     4,     2,     0,     0,     5,     3,     0,     0,     5,
       3,     3,     0,     6,     5,     4,     4,     3,     2,     2,
       2,     3,     0,     6,     3,     0,     6,     4,     2,     3,
       4,     0,     3,     3,     4,     0,     0,     6,     5,     0,
       5,     3,     3,     0,     0,    11,     1,     1,     1,     1,
       2,     3,     2,     3,     2,     3,     2,     0,     4,     4,
       3,     3,     3,     2,     3,     3,     2,     3,     2,     4,
       4,     0,     0,     7,     3,     2,     0,     4,     0,     2,
       0,     4,     0,     0,     5,     0,     0,     5,     1,     1,
       2,     1,     1,     1,     1,     2,     0,     3,     0,     3,
       0,     3,     0,     3,     0,     4,     0,     1,     1,     1,
       0,     4,     0,     4,     0,     3,     0,     0,     0,     9,
       3,     1,     0,     3,     0,     3,     0,     1,     1,     0,
       1,     2,     2,     1,     3,     3,     1,     3,     3,     3,
       2,     1,     3,     0,     3,     0,     0,     3,     3,     2,
       0,     2,     3,     3,     3,     3,     1,     1,     3,     3,
       3,     1,     1,     1,     0,     2,     2,     2,     1,     2,
       1,     2,     1,     2,     1,     1,     1,     1,     0,     0,
       6,     4,     0,     0,     5,     3,     1,     1,     0,     3,
       0,     4,     0,     2,     0,     2,     3,     3,     3,     3,
       3,     3,     2,     2,     2,     4,     3,     0,     1,     0,
       1,     1,     3,     0,     3,     1,     1,     3,     0,     3,
       0,     3,     0,     3,     1,     1,     3,     0,     3,     0,
       3,     0,     3,     1,     1,     1,     1,     1,     2,     1,
       1,     1,     2,     0,     3,     1,     0,     3,     0,     3,
       0,     3,     0,     3,     1,     3,     0,     0,     4,     2,
       0,     4,     0,     2,     0,     3,     3,     2,     0,     4,
       0,     5,     0,     2,     1,     3,     1,     2,     2,     1,
       1,     1,     0,     4,     1,     1,     1,     2,     2,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
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
#line 526 "rwlparser.y" /* yacc.c:1646  */
    {
	  ; // we are done!
	}
#line 3534 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 532 "rwlparser.y" /* yacc.c:1646  */
    { if (bit(rwm->mxq->errbits,RWL_ERROR_SEVERE)) YYABORT; }
#line 3540 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 538 "rwlparser.y" /* yacc.c:1646  */
    {  
	    bis(rwm->m2flags, RWL_P2_INTHING);
	    if (bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
	      YYACCEPT;
	  }
#line 3550 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 544 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->m2flags, RWL_P2_INTHING); 
	    if (bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
	      YYACCEPT;
	  }
#line 3560 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 559 "rwlparser.y" /* yacc.c:1646  */
    { rwlprintallvars(rwm); }
#line 3566 "rwlparser.tab.c" /* yacc.c:1646  */
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
#line 3585 "rwlparser.tab.c" /* yacc.c:1646  */
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
#line 3597 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 595 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->raname = rwm->inam;
	      bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	      rwm->ravarn = rwladdvar(rwm, rwm->inam, RWL_TYPE_RAST, 0);
	      rwlrastbeg(rwm, rwm->raname, RWL_TYPE_RAST);
	    }
#line 3608 "rwlparser.tab.c" /* yacc.c:1646  */
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
#line 3620 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 612 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->raname = rwm->inam;
	      rwm->ravarn = rwladdvar(rwm, rwm->inam, RWL_TYPE_RAPROC, 0);
	      rwlrastbeg(rwm, rwm->raname, RWL_TYPE_RAPROC);
	    }
#line 3630 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 623 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlrastfin(rwm, rwm->raname, (sb4) rwm->ravarn);
	    }
#line 3638 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 627 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlcancelvar(rwm, rwm->raname, (sb4) rwm->ravarn);
	      rwlrastclear(rwm);
	      rwlerror(rwm, RWL_ERROR_DECL_RAST); 
	      yyerrok;
	    }
#line 3649 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 640 "rwlparser.y" /* yacc.c:1646  */
    {rwm->raentry = rwm->sval; }
#line 3655 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 642 "rwlparser.y" /* yacc.c:1646  */
    {rwlrastadd(rwm, rwm->raentry, rwm->pval.dval); }
#line 3661 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 648 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlrastfin(rwm, rwm->raname, (sb4) rwm->ravarn);
	    }
#line 3669 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 652 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlcancelvar(rwm, rwm->raname, (sb4) rwm->ravarn);
	      rwlrastclear(rwm);
	      rwlerror(rwm, RWL_ERROR_DECL_RAPROC); 
	      yyerrok;
	    }
#line 3680 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 664 "rwlparser.y" /* yacc.c:1646  */
    {rwm->raentry = rwm->inam; }
#line 3686 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 666 "rwlparser.y" /* yacc.c:1646  */
    {rwlrastadd(rwm, rwm->raentry, rwm->pval.dval); }
#line 3692 "rwlparser.tab.c" /* yacc.c:1646  */
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
#line 3713 "rwlparser.tab.c" /* yacc.c:1646  */
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
#line 3773 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 744 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DATABASE_WRONG); yyerrok; }
#line 3779 "rwlparser.tab.c" /* yacc.c:1646  */
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
#line 3793 "rwlparser.tab.c" /* yacc.c:1646  */
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
#line 3807 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 780 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	        rwm->dbsav->password = rwlstrdup(rwm, rwm->pval.sval);
	    }
#line 3816 "rwlparser.tab.c" /* yacc.c:1646  */
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
#line 3828 "rwlparser.tab.c" /* yacc.c:1646  */
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
#line 3845 "rwlparser.tab.c" /* yacc.c:1646  */
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
#line 3880 "rwlparser.tab.c" /* yacc.c:1646  */
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
#line 3895 "rwlparser.tab.c" /* yacc.c:1646  */
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
	      }
	    }
#line 3910 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 859 "rwlparser.y" /* yacc.c:1646  */
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
#line 3928 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 875 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      { 
		rwm->dbsav->stmtcache = rwlcheckminval(rwm->mxq, 0, rwm->pval.ival
		  , 0, RWL_DEFAULT_STMTCACHE, (text *)"cursorcache");
		bis(rwm->dbsav->flags, RWL_DB_CCACHUSER);
	      }
	    }
#line 3941 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 884 "rwlparser.y" /* yacc.c:1646  */
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
#line 3959 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 901 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
		if (rwm->dbsav->pooltype)
		  rwlerror(rwm, RWL_ERROR_DBPOOL_ALREADY);
	        rwm->dbsav->pooltype = RWL_DBPOOL_POOLED;
		rwm->dbsav->pooltext = "drcp pooled";
	      }
	    }
#line 3973 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 911 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
		if (rwm->dbsav->pooltype)
		  rwlerror(rwm, RWL_ERROR_DBPOOL_ALREADY);
	        rwm->dbsav->pooltype = RWL_DBPOOL_DEDICATED;
		rwm->dbsav->pooltext = "dedicated";
	      }
	    }
#line 3987 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 921 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
		if (rwm->dbsav->pooltype)
		  rwlerror(rwm, RWL_ERROR_DBPOOL_ALREADY);
	        rwm->dbsav->pooltype = RWL_DBPOOL_RETHRDED;
		rwm->dbsav->pooltext = "threads dedicated";
	      }
	    }
#line 4001 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 931 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
		if (rwm->dbsav->pooltype)
		  rwlerror(rwm, RWL_ERROR_DBPOOL_ALREADY);
	        rwm->dbsav->pooltype = RWL_DBPOOL_RECONNECT;
		rwm->dbsav->pooltext = "reconnect";
	      }
	    }
#line 4015 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 948 "rwlparser.y" /* yacc.c:1646  */
    {
#if (RWL_OCI_VERSION<12)
	    rwlerror(rwm, RWL_ERROR_NOT_SUPPORTED_IN_VERSION, "statemark",RWL_OCI_VERSION);
#else
	    bis(rwm->dbsav->flags,RWL_DB_STATEMARK);
#endif
	  }
#line 4027 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 956 "rwlparser.y" /* yacc.c:1646  */
    {
#if (RWL_OCI_VERSION<12)
	    rwlerror(rwm, RWL_ERROR_NOT_SUPPORTED_IN_VERSION, "requestmark",RWL_OCI_VERSION);
#else
	    bis(rwm->dbsav->flags,RWL_DB_REQMARK);
#endif
	  }
#line 4039 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 966 "rwlparser.y" /* yacc.c:1646  */
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
#line 4054 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 977 "rwlparser.y" /* yacc.c:1646  */
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
#line 4070 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 993 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      { 
		rwm->dbsav->ptimeout = rwlcheckminval(rwm->mxq, 0, rwm->pval.ival
		  , RWL_DBPOOL_CONNECT==rwm->dbsav->pooltype ? 0: 1
		  , RWL_DBPOOL_DEFAULT_TIMEOUT, (text *)"release timeout");
	      }
	    }
#line 4083 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 1006 "rwlparser.y" /* yacc.c:1646  */
    { 
#if (OCI_MAJOR_VERSION >= 12)
	      if (rwm->dbsav && rwm->pval.dval >= 0)
		rwm->dbsav->wtimeout = rwm->pval.dval;
#else
	    rwlerror(rwm, RWL_ERROR_NOT_YET_IMPL, "sessionpool wait attribute");
#endif
	    }
#line 4096 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 1020 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->dbsav && rwm->pval.dval >= 0)
	      bis(rwm->dbsav->flags, RWL_DB_SPTOBREAK);
	  }
#line 4105 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 1025 "rwlparser.y" /* yacc.c:1646  */
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
#line 4120 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 1036 "rwlparser.y" /* yacc.c:1646  */
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
#line 4136 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 1053 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprimmed(rwm);
	  }
#line 4144 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 1060 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprimmed(rwm);
	  }
#line 4152 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 1076 "rwlparser.y" /* yacc.c:1646  */
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
#line 4168 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 1088 "rwlparser.y" /* yacc.c:1646  */
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
#line 4187 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 1104 "rwlparser.y" /* yacc.c:1646  */
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
#line 4223 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 1140 "rwlparser.y" /* yacc.c:1646  */
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
#line 4238 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 1151 "rwlparser.y" /* yacc.c:1646  */
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
#line 4254 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 1164 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwm->mxq->evar[rwm->codeguess].v2val = rwm->facnt;
	      rwm->supsemerr = RWL_SUPSEM_PROC;
	    }
#line 4263 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 1172 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 4272 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 1177 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 4280 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 1184 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 4289 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 1189 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 4297 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 1196 "rwlparser.y" /* yacc.c:1646  */
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
#line 4383 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 1286 "rwlparser.y" /* yacc.c:1646  */
    {
          sb4 l = rwlfindvar(rwm->mxq, rwm->inam, RWL_VAR_NOGUESS);
          if (l>=0)
            rwlprintvar(rwm->mxq, l);
          }
#line 4393 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 1294 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m3flags, RWL_P3_MISBRACK); }
#line 4399 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 1295 "rwlparser.y" /* yacc.c:1646  */
    { bic(rwm->m3flags, RWL_P3_MISBRACK); }
#line 4405 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 1298 "rwlparser.y" /* yacc.c:1646  */
    { if (!bit(rwm->m2flags, RWL_P2_NOWARNDEP)) rwlerror(rwm, RWL_ERROR_MISSING_DECL_BRACK); }
#line 4411 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 1310 "rwlparser.y" /* yacc.c:1646  */
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
#line 4439 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 1338 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_INT; bic(rwm->addvarbits,RWL_IDENT_THRSPEC); }
#line 4445 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 1340 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_DBL; bic(rwm->addvarbits,RWL_IDENT_THRSPEC); }
#line 4451 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 1342 "rwlparser.y" /* yacc.c:1646  */
    { rwm->declslen=RWL_DEFAULT_STRLEN; rwm->dtype=RWL_TYPE_STR; bic(rwm->addvarbits,RWL_IDENT_THRSPEC); }
#line 4457 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 1344 "rwlparser.y" /* yacc.c:1646  */
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
#line 4476 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 1359 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwm->dtype = 0;
	      rwlerror(rwm, RWL_ERROR_BAD_ARGUMENT_TYPE, "file");
	    }
#line 4485 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 1364 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwm->dtype = 0;
	      rwlerror(rwm, RWL_ERROR_BAD_ARGUMENT_TYPE, "sql");
	    }
#line 4494 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 1369 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwm->dtype = 0;
	      rwlerror(rwm, RWL_ERROR_BAD_ARGUMENT_TYPE, "clob");
	    }
#line 4503 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 1378 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m4flags,RWL_P4_STATSONLY); }
#line 4509 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 1380 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m4flags,RWL_P4_PROCHASSQL); }
#line 4515 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 1382 "rwlparser.y" /* yacc.c:1646  */
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
#line 4535 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1402 "rwlparser.y" /* yacc.c:1646  */
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
#line 4553 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 1417 "rwlparser.y" /* yacc.c:1646  */
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
#line 4571 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 1432 "rwlparser.y" /* yacc.c:1646  */
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
#line 4590 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 1448 "rwlparser.y" /* yacc.c:1646  */
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
#line 4610 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 1491 "rwlparser.y" /* yacc.c:1646  */
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
#line 4627 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1505 "rwlparser.y" /* yacc.c:1646  */
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
#line 4645 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 1519 "rwlparser.y" /* yacc.c:1646  */
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
#line 4663 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1533 "rwlparser.y" /* yacc.c:1646  */
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
#line 4679 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 1545 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    }
#line 4687 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1548 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_UNIFORM); }
#line 4693 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 1549 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LOGB); }
#line 4699 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1550 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LOG); }
#line 4705 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1551 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_EXPB); }
#line 4711 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1552 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_EXP); }
#line 4717 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1553 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_CEIL); }
#line 4723 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1554 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_TRUNC); }
#line 4729 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1555 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_FLOOR); }
#line 4735 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1556 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ROUND); }
#line 4741 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1557 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SQRT); }
#line 4747 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1558 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SIN); }
#line 4753 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1559 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_COS); }
#line 4759 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1560 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ATAN2); }
#line 4765 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1561 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LENGTHB); }
#line 4771 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1563 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_INSTRB2); }
#line 4777 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1565 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_INSTRB3); }
#line 4783 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1567 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SUBSTRB2); }
#line 4789 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1569 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SUBSTRB3); }
#line 4795 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1570 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_GETENV); }
#line 4801 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1571 "rwlparser.y" /* yacc.c:1646  */
    { 
						    if (bit(rwm->m4flags, RWL_P4_SLASHCONVERT)) rwlexprpush0(rwm,RWL_STACK_WINSLASHF2B);
						  }
#line 4809 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1574 "rwlparser.y" /* yacc.c:1646  */
    { 
						    if (bit(rwm->m4flags, RWL_P4_SLASHCONVERT)) rwlexprpush0(rwm,RWL_STACK_WINSLASHF2BB);
						  }
#line 4817 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1577 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SYSTEM); }
#line 4823 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1579 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprpush(rwm,rwm->inam ,RWL_STACK_SYSTEM2STR);
	  }
#line 4831 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1583 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_SYSTEM_BAD); yyerrok;
	    rwlexprpush0(rwm,RWL_STACK_SYSTEM);
	  }
#line 4840 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1587 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ERLANG); }
#line 4846 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1588 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ERLANG2); }
#line 4852 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1590 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ERLANGK); }
#line 4858 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1592 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_NORMALRANDOM); }
#line 4864 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1593 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ISNULL); }
#line 4870 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1595 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ACCESS); }
#line 4876 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1597 "rwlparser.y" /* yacc.c:1646  */
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
#line 4891 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1608 "rwlparser.y" /* yacc.c:1646  */
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
#line 4906 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1619 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprpush(rwm, rwm->inam, RWL_STACK_SERVERRELEASE);
	  }
#line 4914 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1623 "rwlparser.y" /* yacc.c:1646  */
    {
	    // push RWL_T_NULL to make exprfinish work
	    rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    rwlerror(rwm, RWL_ERROR_DBFUN_NEED_IDENT, "serverrelease"); yyerrok;
	  }
#line 4924 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1629 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprpush(rwm, rwm->inam, RWL_STACK_OPENSESSIONCOUNT);
	  }
#line 4932 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1633 "rwlparser.y" /* yacc.c:1646  */
    {
	    // push RWL_T_NULL to make exprfinish work
	    rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    rwlerror(rwm, RWL_ERROR_DBFUN_NEED_IDENT, "opensessioncount"); yyerrok;
	  }
#line 4942 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1639 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprpush(rwm, rwm->inam, RWL_STACK_ACTIVESESSIONCOUNT);
	  }
#line 4950 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1643 "rwlparser.y" /* yacc.c:1646  */
    {
	    // push RWL_T_NULL to make exprfinish work
	    rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    rwlerror(rwm, RWL_ERROR_DBFUN_NEED_IDENT, "activesessioncount"); yyerrok;
	  }
#line 4960 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1649 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->sqname)
	      rwlexprpush(rwm, rwm->sqname, RWL_STACK_SQL_ID);
	  }
#line 4969 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1654 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprpush(rwm, rwm->inam, RWL_STACK_SQL_ID);
	  }
#line 4977 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1658 "rwlparser.y" /* yacc.c:1646  */
    {
	    // push RWL_T_NULL to make exprfinish work
	    rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    rwlerror(rwm, RWL_ERROR_SQLID_NEED_IDENT); yyerrok;
	  }
#line 4987 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1665 "rwlparser.y" /* yacc.c:1646  */
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
#line 5004 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1679 "rwlparser.y" /* yacc.c:1646  */
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
#line 5020 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1691 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (!bit(rwm->m2flags, RWL_P2_NOWARNDEP) && bit(rwm->m3flags,RWL_P3_MISBRACK))
	      rwlerror(rwm, RWL_ERROR_MISSING_EMPTY_BRACKETS, "runseconds");
	    rwlexprpush(rwm, 0, RWL_STACK_RUNSECONDS);
	  }
#line 5030 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1697 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (!bit(rwm->m2flags, RWL_P2_NOWARNDEP) && bit(rwm->m3flags,RWL_P3_MISBRACK))
	      rwlerror(rwm, RWL_ERROR_MISSING_EMPTY_BRACKETS, "epochseconds");
	    rwlexprpush(rwm, 0, RWL_STACK_EPOCHSECONDS);
	  }
#line 5040 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1716 "rwlparser.y" /* yacc.c:1646  */
    { rwm->aacnt[rwm->furlev]++; }
#line 5046 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1722 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ISNULL); }
#line 5052 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1723 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ISNOTNULL); }
#line 5058 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1729 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_MINUS); }
#line 5064 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1730 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_NOT); }
#line 5070 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1731 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_NOT); }
#line 5076 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1736 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_MUL); }
#line 5082 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1737 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_DIV); }
#line 5088 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1738 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_MOD); }
#line 5094 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1743 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ADD); }
#line 5100 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1744 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SUB); }
#line 5106 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1749 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LESS); }
#line 5112 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1750 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_GREATER); }
#line 5118 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1751 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LESSEQ); }
#line 5124 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1752 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_GREATEREQ); }
#line 5130 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1753 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_BETWEEN); }
#line 5136 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1758 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_EQUAL); }
#line 5142 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1759 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_NOTEQUAL); }
#line 5148 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1765 "rwlparser.y" /* yacc.c:1646  */
    { 
	    // With AND (and OR) skipdep is used to mark
	    // the expression element we need to skip until
	    // in case the first condition is false (true for OR)
	    rwm->ptail->branchtype = RWL_EXP_ANDBRANCH;
	    if (rwm->skipdep++ >= UB1MAXVAL)
	      rwlsevere(rwm, "[rwlparser-andskip:%d]", rwm->skipdep);
	    rwm->ptail->skipnxt = rwm->skipdep;
	  }
#line 5162 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1775 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprpush2(rwm,0,RWL_STACK_AND, rwm->skipdep);
	    rwm->skipdep--;
	  }
#line 5171 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1784 "rwlparser.y" /* yacc.c:1646  */
    {  
	    // see comment above
	    rwm->ptail->branchtype = RWL_EXP_ORBRANCH;
	    if (rwm->skipdep++ >= UB1MAXVAL)
	      rwlsevere(rwm, "[rwlparser-orskip:%d]", rwm->skipdep);
	    rwm->ptail->skipnxt = rwm->skipdep;
	  }
#line 5183 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1792 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprpush2(rwm,0,RWL_STACK_OR ,rwm->skipdep);
	    rwm->skipdep--;
	  }
#line 5192 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1801 "rwlparser.y" /* yacc.c:1646  */
    {  
	    // With conditional execution we mark the condition
	    // with RWL_EXP_CONDBRANCH1
	    rwm->ptail->branchtype = RWL_EXP_CONDBRANCH1;
	    if (rwm->skipdep++ >= UB1MAXVAL)
	      rwlsevere(rwm, "[rwlparser-condskip:%d]", rwm->skipdep);
	    rwm->ptail->skipnxt = rwm->skipdep;
	  }
#line 5205 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1810 "rwlparser.y" /* yacc.c:1646  */
    {
	    // and the place of ':' (really ELSE) with 
	    // RWL_EXP_CONDBRANCH2
	    rwm->ptail->branchtype = RWL_EXP_CONDBRANCH2;
	    rwm->ptail->skipnxt = rwm->skipdep;
	  }
#line 5216 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1817 "rwlparser.y" /* yacc.c:1646  */
    {  
	    // And the actual conditional is the "end if" place
	    rwlexprpush2(rwm,0,RWL_STACK_CONDITIONAL, rwm->skipdep);
	    rwm->skipdep--;
	  }
#line 5226 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1826 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_CONCAT); }
#line 5232 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1831 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_CONCAT); }
#line 5238 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1842 "rwlparser.y" /* yacc.c:1646  */
    { rwm->supsemerr = 0; }
#line 5244 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1847 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
	    {
	      rwm->ifdirdep = 0; // since we may be skipping over $else, $endif
	      YYACCEPT;
	    }
	  }
#line 5256 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1855 "rwlparser.y" /* yacc.c:1646  */
    { yyerrok; }
#line 5262 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1857 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_COMMAND_NOT_LOCAL, "threads"); yyerrok; }
#line 5268 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1864 "rwlparser.y" /* yacc.c:1646  */
    { yyerrok; }
#line 5274 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1866 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_COMMAND_NOT_LOCAL, "run"); yyerrok; }
#line 5280 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1870 "rwlparser.y" /* yacc.c:1646  */
    { yyerrok; }
#line 5286 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1872 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_NOT_LOCAL, "database"); yyerrok; }
#line 5292 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1874 "rwlparser.y" /* yacc.c:1646  */
    { yyerrok ; }
#line 5298 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1877 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_NOT_LOCAL, "random procedure array"); yyerrok; }
#line 5304 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1880 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_NOT_LOCAL, "random string array"); yyerrok; }
#line 5310 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1885 "rwlparser.y" /* yacc.c:1646  */
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
#line 5343 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1914 "rwlparser.y" /* yacc.c:1646  */
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
#line 5362 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1929 "rwlparser.y" /* yacc.c:1646  */
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
#line 5377 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1946 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_LOB); yyerrok; }
#line 5383 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 1953 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_INT); yyerrok; }
#line 5389 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 1959 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_DBL); yyerrok; }
#line 5395 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 1961 "rwlparser.y" /* yacc.c:1646  */
    { 
		rwm->declslen=RWL_DEFAULT_STRLEN;
	      }
#line 5403 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 1967 "rwlparser.y" /* yacc.c:1646  */
    {
	      if (RWL_TYPE_CANCELLED == rwm->pval.vtype)
		rwm->declslen = 1; // kind of a kludge, but this prevents doube
				   // error reporting if using local variable
	      else
	      {
		rwm->declslen = rwm->pval.ival;
	      }
	    }
#line 5417 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 1981 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_STR); yyerrok; }
#line 5423 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 1983 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dtype=RWL_TYPE_FILE;
	    //if (rwm->codename)
	    //  rwlerror(rwm, RWL_ERROR_NOT_LOCAL, "file");
	  }
#line 5433 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 1992 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_FILE); yyerrok; }
#line 5439 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 1997 "rwlparser.y" /* yacc.c:1646  */
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
#line 5464 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 2020 "rwlparser.y" /* yacc.c:1646  */
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
#line 5491 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 2044 "rwlparser.y" /* yacc.c:1646  */
    { if (!rwm->rslerror) rwlcodeadd0(rwm, RWL_CODE_ELSE); }
#line 5497 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 2047 "rwlparser.y" /* yacc.c:1646  */
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
#line 5522 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 2070 "rwlparser.y" /* yacc.c:1646  */
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
#line 5563 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 2111 "rwlparser.y" /* yacc.c:1646  */
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
#line 5635 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 2180 "rwlparser.y" /* yacc.c:1646  */
    { 
		  rwlerror(rwm, RWL_ERROR_LOOP);
		  rwm->rsllityp[rwm->rsldepth] = RWL_LI_BAD;
		  yyerrok;
		}
#line 5645 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 2187 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SYSTEM); }
#line 5651 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 2190 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprpush(rwm,rwm->inam ,RWL_STACK_SYSTEM2STR);
	  }
#line 5659 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 2195 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_SYSTEM_BAD); yyerrok;
	    rwlexprclear(rwm);
	  }
#line 5668 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 2200 "rwlparser.y" /* yacc.c:1646  */
    {
		/* start a dummy assignment such that expression gets executed */
		rwm->assignvar = RWL_DUMMY_VAR;
		rwm->assignoper = RWL_T_ASSIGN;
		rwlexprbeg(rwm);
	      }
#line 5679 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 2209 "rwlparser.y" /* yacc.c:1646  */
    {
		/* start expression for assign */
		rwm->assignvar = rwm->inam;
		rwlexprbeg(rwm);
	      }
#line 5689 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 2218 "rwlparser.y" /* yacc.c:1646  */
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
#line 5705 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 2230 "rwlparser.y" /* yacc.c:1646  */
    {
	        rwm->assignvar = rwm->codename;
		rwlexprbeg(rwm);
	      }
#line 5714 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 2235 "rwlparser.y" /* yacc.c:1646  */
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
#line 5747 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 2264 "rwlparser.y" /* yacc.c:1646  */
    { 
		  rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		  rwlexprclear(rwm);
		  yyerrok;
		}
#line 5757 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 2271 "rwlparser.y" /* yacc.c:1646  */
    {
	        rwm->assignvar = rwm->codename;
		rwlexprbeg(rwm);
	      }
#line 5766 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 2276 "rwlparser.y" /* yacc.c:1646  */
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
#line 5799 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 2306 "rwlparser.y" /* yacc.c:1646  */
    { 
		  rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		  rwlexprclear(rwm);
		  yyerrok;
		}
#line 5809 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 2314 "rwlparser.y" /* yacc.c:1646  */
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
#line 5827 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 2328 "rwlparser.y" /* yacc.c:1646  */
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
#line 5842 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 2342 "rwlparser.y" /* yacc.c:1646  */
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
#line 5860 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 2358 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (!rwm->codename)
	    {
	      rwlerror(rwm, RWL_ERROR_NOT_DONE_IN_MAIN, "modify database leak");
	      goto dontmoddbpool;
	    }
	    else
	      rwlcodeadd0(rwm, RWL_CODE_MODDBLEAK);
	  }
#line 5874 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 2369 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->codename)
	      rwlcodeadd0(rwm, RWL_CODE_SESRELDROP);
	  }
#line 5883 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 2375 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->codename)
	      rwlcodeadd0(rwm, RWL_CODE_SESRELDROP);
	  }
#line 5892 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 2381 "rwlparser.y" /* yacc.c:1646  */
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
#line 5907 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 2393 "rwlparser.y" /* yacc.c:1646  */
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
#line 5922 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 2405 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->codename)
	      rwlcodeadd0(rwm, RWL_CODE_SHIFT);
	    else
	      if (!bit(rwm->m2flags, RWL_P2_NOEXEC))
		rwlshiftdollar(rwm->mxq, &rwm->loc);
	  }
#line 5934 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 2414 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->codename)
	      rwlcodeadd0(rwm, RWL_CODE_GETRUSAGE);
	    else
	      if (!bit(rwm->m2flags, RWL_P2_NOEXEC))
		rwlgetrusage(rwm->mxq, 0);
	  }
#line 5946 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 2423 "rwlparser.y" /* yacc.c:1646  */
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
#line 5961 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 2436 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_MODIFY); yyerrok; }
#line 5967 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 2441 "rwlparser.y" /* yacc.c:1646  */
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
#line 6001 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 2473 "rwlparser.y" /* yacc.c:1646  */
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
#line 6090 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 2558 "rwlparser.y" /* yacc.c:1646  */
    {
	      /* This code can cause lookahead */
	      rwlerror(rwm, RWL_ERROR_BAD_ARG_LIST);
	      rwlexprclear(rwm);
	      yyerrok;
	    }
#line 6101 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 2565 "rwlparser.y" /* yacc.c:1646  */
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
#line 6120 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 2584 "rwlparser.y" /* yacc.c:1646  */
    { rwm->supsemerr = RWL_SUPSEM_EMBSQL; }
#line 6126 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 2590 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m3flags, RWL_P3_IMMPARSEFOR); }
#line 6132 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 2592 "rwlparser.y" /* yacc.c:1646  */
    { bic(rwm->m3flags, RWL_P3_IMMPARSEFOR); }
#line 6138 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 2598 "rwlparser.y" /* yacc.c:1646  */
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
#line 6225 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 2683 "rwlparser.y" /* yacc.c:1646  */
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
#line 6258 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 2713 "rwlparser.y" /* yacc.c:1646  */
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
#line 6294 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 2746 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_NO_FILE_FOR_FFLUSH);
	    yyerrok;
	  }
#line 6303 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 2753 "rwlparser.y" /* yacc.c:1646  */
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
#line 6330 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 2778 "rwlparser.y" /* yacc.c:1646  */
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
#line 6363 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 2809 "rwlparser.y" /* yacc.c:1646  */
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
#line 6386 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 2837 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_FILE_FOR_WRITE);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6397 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 2846 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_STRING_FOR_SPRINTF);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6408 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 2855 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6419 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 317:
#line 2865 "rwlparser.y" /* yacc.c:1646  */
    {
	      // Note that we do not document this syntax without comma
	      if (rwm->filenam)
		rwlerror(rwm, RWL_ERROR_COMMA_IS_RECOMMENDED, rwm->filenam
		, bit(rwm->mflags,RWL_P_PRINTLINE) ? "writeline" : "write");
	    }
#line 6430 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 2877 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6441 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 2885 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_FILE_FOR_WRITE);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6452 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 2893 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_FILE_FOR_WRITE);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6463 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 2901 "rwlparser.y" /* yacc.c:1646  */
    { 
		if (rwm->codename)
		  rwlcodeadd0(rwm, RWL_CODE_NEWLINE);
		else
		  fputs(bit(rwm->m4flags, RWL_P4_CRNLWRITELINE) ? "\r\n" : "\n", stdout);
		bic(rwm->mflags,RWL_P_PRINTLINE|RWL_P_PRINTBLANK);
	      }
#line 6475 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 2911 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->mflags,RWL_P_PRINTLINE);
		rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 6486 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 2919 "rwlparser.y" /* yacc.c:1646  */
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
#line 6501 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 2930 "rwlparser.y" /* yacc.c:1646  */
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
#line 6540 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 2966 "rwlparser.y" /* yacc.c:1646  */
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
#line 6580 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 330:
#line 3003 "rwlparser.y" /* yacc.c:1646  */
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
#line 6623 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 3043 "rwlparser.y" /* yacc.c:1646  */
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
#line 6644 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 3060 "rwlparser.y" /* yacc.c:1646  */
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
#line 6669 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 3083 "rwlparser.y" /* yacc.c:1646  */
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
#line 6691 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 3102 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlerror(rwm, RWL_ERROR_UNEXPECTED_AFTER_IDENTIFIER);
	      yyerrok;
	    }
#line 6700 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 3109 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_MISSING_SEMICOLON); yyerrok; }
#line 6706 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 336:
#line 3115 "rwlparser.y" /* yacc.c:1646  */
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
#line 6734 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 337:
#line 3139 "rwlparser.y" /* yacc.c:1646  */
    {
	  rwm->lobwritedata = rwlexprfinish(rwm);
	  rwm->loboffset = 0;
	}
#line 6743 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 339:
#line 3148 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->loboffset = rwlexprfinish(rwm);
	  }
#line 6751 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 340:
#line 3155 "rwlparser.y" /* yacc.c:1646  */
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
#line 6778 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 341:
#line 3178 "rwlparser.y" /* yacc.c:1646  */
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
#line 6804 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 343:
#line 3204 "rwlparser.y" /* yacc.c:1646  */
    {
	  rwm->lobreadlength = rwlexprfinish(rwm);
	}
#line 6812 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 3208 "rwlparser.y" /* yacc.c:1646  */
    {
	  rwm->loboffset = rwlexprfinish(rwm);
	}
#line 6820 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 345:
#line 3214 "rwlparser.y" /* yacc.c:1646  */
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
#line 6970 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 346:
#line 3364 "rwlparser.y" /* yacc.c:1646  */
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
#line 7084 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 347:
#line 3476 "rwlparser.y" /* yacc.c:1646  */
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
#line 7121 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 348:
#line 3512 "rwlparser.y" /* yacc.c:1646  */
    {  
	    // This syntax is not documented
	    bic(rwm->m3flags, RWL_P3_CLHEADFOR);
	    rwlerror(rwm, RWL_ERROR_LEGACY_CONTROLLOOP_SYNTAX);
	  }
#line 7131 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 3517 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m3flags, RWL_P3_CLHEADFOR); }
#line 7137 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 350:
#line 3521 "rwlparser.y" /* yacc.c:1646  */
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
#line 7154 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 351:
#line 3537 "rwlparser.y" /* yacc.c:1646  */
    { if (bit(rwm->m3flags, RWL_P3_CLHEADFOR))
	      rwlerror(rwm, RWL_ERROR_MIX_LEGACY_CLOOP);
	  }
#line 7162 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 352:
#line 3541 "rwlparser.y" /* yacc.c:1646  */
    { if (bit(rwm->m3flags, RWL_P3_CLHEADFOR))
	      rwlerror(rwm, RWL_ERROR_MIX_LEGACY_CLOOP);
	  }
#line 7170 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 353:
#line 3545 "rwlparser.y" /* yacc.c:1646  */
    { if (!bit(rwm->m3flags, RWL_P3_CLHEADFOR))
	      rwlerror(rwm, RWL_ERROR_MIX_LEGACY_CLOOP);
	  }
#line 7178 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 356:
#line 3556 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7184 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 357:
#line 3558 "rwlparser.y" /* yacc.c:1646  */
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
#line 7201 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 3570 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7207 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 3572 "rwlparser.y" /* yacc.c:1646  */
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
#line 7226 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 3586 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7232 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 361:
#line 3588 "rwlparser.y" /* yacc.c:1646  */
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
#line 7251 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 362:
#line 3602 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7257 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 363:
#line 3604 "rwlparser.y" /* yacc.c:1646  */
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
#line 7274 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 364:
#line 3616 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7280 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 365:
#line 3618 "rwlparser.y" /* yacc.c:1646  */
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
#line 7310 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 366:
#line 3647 "rwlparser.y" /* yacc.c:1646  */
    { rwm->ynqueue = 0; }
#line 7316 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 367:
#line 3648 "rwlparser.y" /* yacc.c:1646  */
    { rwm->ynqueue = RWL_QUEUE_EVERY; }
#line 7322 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 368:
#line 3649 "rwlparser.y" /* yacc.c:1646  */
    { rwm->ynqueue = RWL_NOQUEUE_EVERY; }
#line 7328 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 369:
#line 3653 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->scname = rwm->inam; 
	    bic(rwm->m2flags, RWL_P2_AT|RWL_P2_ATDEFAULT);
	  }
#line 7337 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 370:
#line 3658 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->scname = rwm->inam;
	    bic(rwm->m2flags, RWL_P2_AT|RWL_P2_ATDEFAULT);
	  }
#line 7346 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 371:
#line 3663 "rwlparser.y" /* yacc.c:1646  */
    { 
	      bis(rwm->m2flags, RWL_P2_ATDEFAULT);
	    }
#line 7354 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 372:
#line 3667 "rwlparser.y" /* yacc.c:1646  */
    {
	      bic(rwm->m2flags, RWL_P2_AT|RWL_P2_ATDEFAULT);
	      // lookahead may have consumed the next identifier
	      rwm->scname = (yychar == RWL_T_IDENTIFIER)
	        ? rwm->previnam
	        : rwm->inam;
	    }
#line 7366 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 373:
#line 3675 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->dbname = rwm->inam; 
	      bis(rwm->m2flags, RWL_P2_AT);
	    }
#line 7375 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 374:
#line 3684 "rwlparser.y" /* yacc.c:1646  */
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
#line 7394 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 375:
#line 3699 "rwlparser.y" /* yacc.c:1646  */
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
#line 7426 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 376:
#line 3731 "rwlparser.y" /* yacc.c:1646  */
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
#line 7444 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 377:
#line 3746 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->m3flags, RWL_P3_IMMEDSQL); 
	    bis(rwm->sqsav->flags, RWL_SQLFLAG_IBUSE);
	    bis(rwm->sqsav->flags, RWL_SQLFLAG_IDUSE);
	    if (bit(rwm->m3flags,RWL_P3_IMPLCASE))
	      bis(rwm->sqsav->flags, RWL_SQLFLAG_ICASE);
	  }
#line 7456 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 378:
#line 3755 "rwlparser.y" /* yacc.c:1646  */
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
#line 7497 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 380:
#line 3793 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_SQL_WRONG) ;
	    yyerrok;
	  }
#line 7506 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 382:
#line 3801 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7512 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 383:
#line 3802 "rwlparser.y" /* yacc.c:1646  */
    {
	    if ((rwm->msqlstk = rwlexprfinish(rwm)))
	      bis(rwm->m3flags, RWL_P3_IMMISDYN); // now dynamic
	    else
	    {
	      rwm->mxq->evar[rwm->sqsavvarn].vtype = RWL_TYPE_CANCELLED;
	      rwm->mxq->evar[rwm->sqsavvarn].stype = "cancelled (sql)";
	    }
	  }
#line 7526 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 384:
#line 3814 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->sqllino = rwm->loc.lineno;
	  }
#line 7534 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 388:
#line 3823 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "sql") ;
	  }
#line 7542 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 391:
#line 3834 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bis(rwm->m2flags, RWL_P2_ATDEFAULT);
	  }
#line 7550 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 392:
#line 3838 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dbname = rwm->inam; 
	    bis(rwm->m2flags, RWL_P2_AT);
	  }
#line 7559 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 393:
#line 3846 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->m2flags, RWL_P2_AT|RWL_P2_ATDEFAULT);
	  }
#line 7567 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 394:
#line 3850 "rwlparser.y" /* yacc.c:1646  */
    { 
	      bis(rwm->m2flags, RWL_P2_ATDEFAULT);
	    }
#line 7575 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 395:
#line 3854 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->dbname = rwm->inam; 
	      bis(rwm->m2flags, RWL_P2_AT);
	    }
#line 7584 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 397:
#line 3864 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->dbname = 0;
	      bis(rwm->m2flags, RWL_P2_ATDEFAULT); /* explict choose standard DB */
	    }
#line 7593 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 398:
#line 3870 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->dbname = rwm->inam;
	      bis(rwm->m2flags, RWL_P2_AT); /* named DB */
	    }
#line 7602 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 399:
#line 3875 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_NO_DATABASE_NAME); yyerrok; }
#line 7608 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 400:
#line 3877 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_MISSING_SEMICOLON); yyerrok; }
#line 7614 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 403:
#line 3885 "rwlparser.y" /* yacc.c:1646  */
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
#line 7644 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 404:
#line 3911 "rwlparser.y" /* yacc.c:1646  */
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
#line 7721 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 406:
#line 3988 "rwlparser.y" /* yacc.c:1646  */
    {
		  rwm->assignvar = rwm->inam;
		  rwlexprbeg(rwm);
		}
#line 7730 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 407:
#line 3993 "rwlparser.y" /* yacc.c:1646  */
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
#line 7781 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 412:
#line 4056 "rwlparser.y" /* yacc.c:1646  */
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
#line 7800 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 413:
#line 4071 "rwlparser.y" /* yacc.c:1646  */
    {
              rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
              rwlexprclear(rwm);
              rwm->rslerror++; // to prevent attempting else/endif code generation
              yyerrok;
            }
#line 7811 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 414:
#line 4080 "rwlparser.y" /* yacc.c:1646  */
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
#line 7830 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 415:
#line 4095 "rwlparser.y" /* yacc.c:1646  */
    {
              rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
              rwlexprclear(rwm);
              rwm->rslerror++; // to prevent attempting else/endif code generation
              yyerrok;
            }
#line 7841 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 416:
#line 4104 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_LEGACY_WHILE_SYNTAX);
	  }
#line 7849 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 417:
#line 4108 "rwlparser.y" /* yacc.c:1646  */
    {
	    bis(rwm->rslflags[rwm->rsldepth], RWL_RSLFLAG_WHILOP);
	  }
#line 7857 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 418:
#line 4114 "rwlparser.y" /* yacc.c:1646  */
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
#line 7878 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 419:
#line 4131 "rwlparser.y" /* yacc.c:1646  */
    {
              rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
              rwlexprclear(rwm);
              rwm->rslerror++; // to prevent attempting else/endif code generation
              yyerrok;
            }
#line 7889 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 420:
#line 4138 "rwlparser.y" /* yacc.c:1646  */
    {
              rwlerror(rwm, RWL_ERROR_UNEXPECTED_KEYWORD, "loop");
              rwlexprclear(rwm);
              rwm->rslerror++; // to prevent attempting else/endif code generation
              yyerrok;
            }
#line 7900 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 425:
#line 4155 "rwlparser.y" /* yacc.c:1646  */
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
#line 7920 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 426:
#line 4171 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (rwm->codename)
	      rwlerror(rwm, RWL_ERROR_NO_LOCAL_SUMGLOB);
	    else
	      bis(rwm->addvarbits,RWL_IDENT_GLOBAL);
	  }
#line 7931 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 427:
#line 4181 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dtype=RWL_TYPE_STR;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 7941 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 428:
#line 4187 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->dtype=RWL_TYPE_STR;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 7950 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 429:
#line 4195 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dtype=RWL_TYPE_INT;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 7960 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 430:
#line 4201 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->dtype=RWL_TYPE_INT;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 7969 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 431:
#line 4209 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dtype=RWL_TYPE_DBL;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 7979 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 432:
#line 4215 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->dtype=RWL_TYPE_DBL;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 7988 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 433:
#line 4223 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 7997 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 434:
#line 4228 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 8005 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 435:
#line 4234 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_CLOB; }
#line 8011 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 436:
#line 4235 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_BLOB; }
#line 8017 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 437:
#line 4236 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_NCLOB; }
#line 8023 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 438:
#line 4240 "rwlparser.y" /* yacc.c:1646  */
    { rwm->sqllino = rwm->loc.lineno;}
#line 8029 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 439:
#line 4241 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	    bic(rwm->m2flags, RWL_P2_BADSQLFILTXT);
	    bic(rwm->m3flags, RWL_P3_IMMEDSQL); 
	    bic(rwm->m3flags, RWL_P3_IMMISDYN); 
	    rwm->sqllen = 0;
	    rwm->sqname = rwm->inam;
	  }
#line 8043 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 441:
#line 4252 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_SQL_WRONG); yyerrok;
	  }
#line 8051 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 442:
#line 4255 "rwlparser.y" /* yacc.c:1646  */
    { rwm->sqllino = rwm->loc.lineno;}
#line 8057 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 443:
#line 4256 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bic(rwm->m2flags, RWL_P2_BADSQLFILTXT);
	    bic(rwm->m3flags, RWL_P3_IMMEDSQL); 
	    bic(rwm->m3flags, RWL_P3_IMMISDYN); 
	    rwm->sqllen = 0;
	    rwm->sqname = rwm->inam;
	  }
#line 8070 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 445:
#line 4266 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_SQL_WRONG); yyerrok;
	  }
#line 8078 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 448:
#line 4276 "rwlparser.y" /* yacc.c:1646  */
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
#line 8128 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 449:
#line 4323 "rwlparser.y" /* yacc.c:1646  */
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
#line 8163 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 450:
#line 4357 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->m4flags, RWL_P4_AMPERSAND) && rwldynarcheck(rwm))
	    {
	      rwlerror(rwm, RWL_ERROR_CANNOT_AMPREP_HERE, "named sql declaration");
	      rwm->mxq->evar[rwm->sqsavvarn].vtype = RWL_TYPE_CANCELLED;
	      rwm->mxq->evar[rwm->sqsavvarn].stype = "cancelled (sql)";
	    }
	  }
#line 8176 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 452:
#line 4370 "rwlparser.y" /* yacc.c:1646  */
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
#line 8254 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 453:
#line 4448 "rwlparser.y" /* yacc.c:1646  */
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
#line 8351 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 457:
#line 4551 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_BIND); yyerrok; }
#line 8357 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 459:
#line 4555 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_BINDOUT); yyerrok; }
#line 8363 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 461:
#line 4559 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DEFINE); yyerrok; }
#line 8369 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 462:
#line 4561 "rwlparser.y" /* yacc.c:1646  */
    {
		  bis(rwm->sqsav->flags, RWL_SQFLAG_IGNERR);
		}
#line 8377 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 463:
#line 4565 "rwlparser.y" /* yacc.c:1646  */
    {
		  bic(rwm->sqsav->flags, RWL_SQFLAG_NOCURC);
		}
#line 8385 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 464:
#line 4569 "rwlparser.y" /* yacc.c:1646  */
    {
		  bis(rwm->sqsav->flags, RWL_SQFLAG_NOCURC);
		}
#line 8393 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 465:
#line 4574 "rwlparser.y" /* yacc.c:1646  */
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
#line 8415 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 466:
#line 4593 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ARRAY); yyerrok; }
#line 8421 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 467:
#line 4598 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_MISSING_SEMICOLON_IN_SQL); }
#line 8427 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 470:
#line 4604 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->sqsav->flags, RWL_SQFLAG_DYNAMIC))
	      rwlerror(rwm, RWL_ERROR_DEFINE_ARRAY_NOT_DYNAMIC);
	    else
	      bis(rwm->sqsav->flags, RWL_SQFLAG_ARRAYD);
	  }
#line 8438 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 473:
#line 4618 "rwlparser.y" /* yacc.c:1646  */
    {
	  // Note that it would not be too hard to replace
	  // the integer constant here by an expression
	  // which would make sense as that is what
	  // can be done with modify sql for dynamic sql
	  rwm->bdpos = rwm->ival; rwm->bdtyp=RWL_DEFINE;
	}
#line 8450 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 475:
#line 4627 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->sqsav->flags, RWL_SQLFLAG_IDUSE))
	      rwlerror(rwm, RWL_ERROR_IMPLICIT_ALREADY, "define");
	    bis(rwm->sqsav->flags, RWL_SQLFLAG_IDUSE);
	  }
#line 8460 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 478:
#line 4641 "rwlparser.y" /* yacc.c:1646  */
    { rwm->bdname = rwm->sval; rwm->bdtyp=RWL_BINDOUT_NAME; }
#line 8466 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 480:
#line 4643 "rwlparser.y" /* yacc.c:1646  */
    { 
	    // We could also use expression here, but we would
	    // of course need to check it was either a non-negative number
	    // or a string starting with :
	    rwm->bdpos = bit(rwm->m2flags,RWL_P2_BINDZERO) ? rwm->ival+1 : rwm->ival;
	    rwm->bdtyp=RWL_BINDOUT_POS; 
	  }
#line 8478 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 482:
#line 4651 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->bdtyp=RWL_BINDOUT_SAME;
	  }
#line 8486 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 484:
#line 4655 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_IMPLICIT_NOT_BINDOUT);
	  }
#line 8494 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 487:
#line 4666 "rwlparser.y" /* yacc.c:1646  */
    { rwm->bdname = rwm->sval; rwm->bdtyp=RWL_BIND_NAME; }
#line 8500 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 489:
#line 4668 "rwlparser.y" /* yacc.c:1646  */
    { 
	    // same comment as above
	    rwm->bdpos = bit(rwm->m2flags,RWL_P2_BINDZERO) ? rwm->ival+1 : rwm->ival;
	    rwm->bdtyp=RWL_BIND_POS; 
	  }
#line 8510 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 491:
#line 4674 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->bdtyp=RWL_BIND_SAME;
	  }
#line 8518 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 493:
#line 4678 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->sqsav->flags, RWL_SQLFLAG_IBUSE))
	      rwlerror(rwm, RWL_ERROR_IMPLICIT_ALREADY, "bind");
	    bis(rwm->sqsav->flags, RWL_SQLFLAG_IBUSE);
	  }
#line 8528 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 494:
#line 4687 "rwlparser.y" /* yacc.c:1646  */
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
#line 8626 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 495:
#line 4783 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->inam = RWL_DUMMY_VAR;
	    rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2, "function", "runseconds", "bind/define");
	  }
#line 8635 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 496:
#line 4788 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->inam = RWL_DUMMY_VAR;
	    rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2, "function", "epochseconds", "bind/define");
	  }
#line 8644 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 497:
#line 4792 "rwlparser.y" /* yacc.c:1646  */
    { bic(rwm->m2flags,RWL_P2_BINDRAW); }
#line 8650 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 498:
#line 4793 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m2flags,RWL_P2_BINDRAW); }
#line 8656 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 499:
#line 4797 "rwlparser.y" /* yacc.c:1646  */
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
#line 8677 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 500:
#line 4814 "rwlparser.y" /* yacc.c:1646  */
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
#line 8698 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 501:
#line 4831 "rwlparser.y" /* yacc.c:1646  */
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
#line 8719 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 502:
#line 4848 "rwlparser.y" /* yacc.c:1646  */
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
#line 8746 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 503:
#line 4870 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 8752 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 504:
#line 4871 "rwlparser.y" /* yacc.c:1646  */
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
#line 8787 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 505:
#line 4902 "rwlparser.y" /* yacc.c:1646  */
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
#line 8812 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 506:
#line 4922 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 8818 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 507:
#line 4923 "rwlparser.y" /* yacc.c:1646  */
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
#line 8844 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 508:
#line 4945 "rwlparser.y" /* yacc.c:1646  */
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
#line 8863 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 510:
#line 4960 "rwlparser.y" /* yacc.c:1646  */
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
#line 8882 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 512:
#line 4975 "rwlparser.y" /* yacc.c:1646  */
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
#line 8901 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 516:
#line 4995 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 8907 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 517:
#line 4997 "rwlparser.y" /* yacc.c:1646  */
    { rwm->msqlstk = rwlexprfinish(rwm); }
#line 8913 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 518:
#line 4999 "rwlparser.y" /* yacc.c:1646  */
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
#line 8968 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 519:
#line 5052 "rwlparser.y" /* yacc.c:1646  */
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
#line 9002 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 520:
#line 5082 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->mdbsphi = rwm->mdbsplo = rwlexprfinish(rwm);
	    if (!rwm->mdbsplo)
	      rwlexprclear(rwm);
	  }
#line 9012 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 521:
#line 5088 "rwlparser.y" /* yacc.c:1646  */
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
#line 9045 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 523:
#line 5120 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (!(rwm->mdbsphi = rwlexprfinish(rwm)))
	      rwlexprclear(rwm);
	  }
#line 9054 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 524:
#line 5127 "rwlparser.y" /* yacc.c:1646  */
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
#line 9078 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 526:
#line 5150 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m3flags, RWL_P3_SPFCONCAT); }
#line 9084 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 527:
#line 5151 "rwlparser.y" /* yacc.c:1646  */
    { bic(rwm->m3flags, RWL_P3_SPFCONCAT); }
#line 9090 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 528:
#line 5155 "rwlparser.y" /* yacc.c:1646  */
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
#line 9114 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 529:
#line 5175 "rwlparser.y" /* yacc.c:1646  */
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
#line 9132 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 530:
#line 5193 "rwlparser.y" /* yacc.c:1646  */
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
#line 9155 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 532:
#line 5215 "rwlparser.y" /* yacc.c:1646  */
    {
	  rwm->conhead = rwm->contail = 0;
	}
#line 9163 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 533:
#line 5219 "rwlparser.y" /* yacc.c:1646  */
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
#line 9188 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 536:
#line 5247 "rwlparser.y" /* yacc.c:1646  */
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
#line 9211 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 537:
#line 5268 "rwlparser.y" /* yacc.c:1646  */
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
#line 9236 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 538:
#line 5290 "rwlparser.y" /* yacc.c:1646  */
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
#line 9261 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 539:
#line 5314 "rwlparser.y" /* yacc.c:1646  */
    {  
	    bic(rwm->mflags,RWL_P_PRINTLINE);
	    bic(rwm->mflags,RWL_P_PRINTTOFILE);
	  }
#line 9270 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 540:
#line 5319 "rwlparser.y" /* yacc.c:1646  */
    {  
	    bis(rwm->mflags,RWL_P_PRINTLINE);
	    bic(rwm->mflags,RWL_P_PRINTTOFILE);
	  }
#line 9279 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 542:
#line 5327 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->mflags,RWL_P_PRINTBLANK); }
#line 9285 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 544:
#line 5332 "rwlparser.y" /* yacc.c:1646  */
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
#line 9347 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 545:
#line 5393 "rwlparser.y" /* yacc.c:1646  */
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
#line 9383 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 546:
#line 5428 "rwlparser.y" /* yacc.c:1646  */
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
#line 9398 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 547:
#line 5443 "rwlparser.y" /* yacc.c:1646  */
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
#line 9445 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 548:
#line 5486 "rwlparser.y" /* yacc.c:1646  */
    { 
		rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 9455 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 550:
#line 5496 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_MISSING_SEMICOLON);
	    yyerrok;
	  }
#line 9464 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 551:
#line 5503 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_ASSIGN; }
#line 9470 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 552:
#line 5504 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_GREATEQ; }
#line 9476 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 553:
#line 5505 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_RSHIFTASSIGN; }
#line 9482 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 554:
#line 5506 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_LESSEQ; }
#line 9488 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 555:
#line 5507 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_PIPEFROM; }
#line 9494 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 556:
#line 5508 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_PIPETO; }
#line 9500 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 558:
#line 5512 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_APPEND; }
#line 9506 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 559:
#line 5513 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_ASNADD; }
#line 9512 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 560:
#line 5514 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_ASNSUB; }
#line 9518 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 561:
#line 5521 "rwlparser.y" /* yacc.c:1646  */
    {
		rwl_estack *estk;
		rwlexprpush(rwm, rwm->assignvar, RWL_STACK_ASN);
		estk = rwlexprfinish(rwm);
		rwlcodeaddp(rwm, RWL_CODE_ASSIGN, estk);
	      }
#line 9529 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 562:
#line 5528 "rwlparser.y" /* yacc.c:1646  */
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
#line 9559 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 564:
#line 5554 "rwlparser.y" /* yacc.c:1646  */
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
#line 9576 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 566:
#line 5568 "rwlparser.y" /* yacc.c:1646  */
    { 
		rwlerror(rwm, RWL_ERROR_LOOP);
		rwlexprclear(rwm);
		// prevent attempting endloop code generation
		rwm->loopvar[rwm->rsldepth] = 0;
		rwm->rsllityp[rwm->rsldepth] = RWL_LI_BAD;
		bic(rwm->rslflags[rwm->rsldepth], RWL_RSLFLAG_MAYBRK);
		yyerrok;
	      }
#line 9590 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 569:
#line 5587 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwl_lilist *thisli = rwlalloc(rwm, sizeof(rwl_lilist));
	    rwlexprpush(rwm, rwm->loopvar[rwm->rsldepth], RWL_STACK_ASN);
	    thisli->listk = rwlexprfinish(rwm);
	    rwm->rsllitail[rwm->rsldepth]->linxt = thisli;
	    rwm->rsllitail[rwm->rsldepth] = thisli;
	  }
#line 9602 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 572:
#line 5607 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 9611 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 573:
#line 5612 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 9619 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 576:
#line 5621 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "execute") ; }
#line 9625 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 579:
#line 5628 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "loop") ; }
#line 9631 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 582:
#line 5635 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "if") ; yyerrok; }
#line 9637 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 585:
#line 5642 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (0 != rwlstrcmp(rwm->inam, rwm->sqname))
	      rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END2, "sql", rwm->sqname);
	  }
#line 9646 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 586:
#line 5647 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END2, "sql", rwm->sqname) ; yyerrok; }
#line 9652 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 588:
#line 5653 "rwlparser.y" /* yacc.c:1646  */
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
#line 9667 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 589:
#line 5664 "rwlparser.y" /* yacc.c:1646  */
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
#line 9682 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 590:
#line 5675 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (bit(rwm->rslflags[rwm->rsldepth-1], RWL_RSLFLAG_WHILOP))
	      rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "loop") ;
	    else
	      rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "while") ;
	    yyerrok;
	  }
#line 9694 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 591:
#line 5686 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->cursorand = 0;
	  }
#line 9702 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 592:
#line 5691 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->cursorand = rwlexprfinish(rwm);
	  }
#line 9710 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 594:
#line 5698 "rwlparser.y" /* yacc.c:1646  */
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
#line 9769 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 595:
#line 5755 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->loc.errlin = 0;
	    rwm->sqlfile = 0; /* not from a file */
	  }
#line 9778 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 596:
#line 5760 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprbeg(rwm);
	  }
#line 9786 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 597:
#line 5764 "rwlparser.y" /* yacc.c:1646  */
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
#line 9871 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 598:
#line 5847 "rwlparser.y" /* yacc.c:1646  */
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
#line 9895 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 599:
#line 5867 "rwlparser.y" /* yacc.c:1646  */
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
#line 9922 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 600:
#line 5891 "rwlparser.y" /* yacc.c:1646  */
    { 
		rwlerror(rwm, RWL_ERROR_BAD_READLINE);
		yyerrok;
	      }
#line 9931 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 601:
#line 5898 "rwlparser.y" /* yacc.c:1646  */
    { rwm->reg_estk = rwm->str_estk = rwm->sub_estk = 0; }
#line 9937 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 602:
#line 5900 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->reg_estk = rwlexprfinish(rwm);
	  }
#line 9945 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 603:
#line 5904 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->str_estk = rwlexprfinish(rwm);
	  }
#line 9953 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 604:
#line 5908 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->sub_estk = rwlexprfinish(rwm);
	  }
#line 9961 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 605:
#line 5912 "rwlparser.y" /* yacc.c:1646  */
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
#line 10004 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 606:
#line 5951 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprclear(rwm);
	    rwlerror(rwm, RWL_ERROR_BAD_REGEX);
	    yyerrok;
	  }
#line 10014 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 607:
#line 5960 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->m2flags, RWL_P2_REGEXSUBG);
	  }
#line 10022 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 608:
#line 5964 "rwlparser.y" /* yacc.c:1646  */
    {
	    bis(rwm->m2flags, RWL_P2_REGEXSUBG);
	  }
#line 10030 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 609:
#line 5970 "rwlparser.y" /* yacc.c:1646  */
    { rwm->reg_estk = rwm->str_estk = 0; }
#line 10036 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 610:
#line 5972 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->reg_estk = rwlexprfinish(rwm);
	  }
#line 10044 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 611:
#line 5976 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->str_estk = rwlexprfinish(rwm);
	    rwm->idlist = rwm->idtail = 0;
	  }
#line 10053 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 612:
#line 5981 "rwlparser.y" /* yacc.c:1646  */
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
#line 10090 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 613:
#line 6015 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprclear(rwm);
	    rwlerror(rwm, RWL_ERROR_BAD_REGEX);
	    yyerrok;
	  }
#line 10100 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 614:
#line 6024 "rwlparser.y" /* yacc.c:1646  */
    { rwm->reg_estk = rwm->str_estk = 0; }
#line 10106 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 615:
#line 6026 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->reg_estk = rwlexprfinish(rwm);
	  }
#line 10114 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 616:
#line 6030 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->str_estk = rwlexprfinish(rwm);
	    rwm->idlist = rwm->idtail = 0;
	  }
#line 10123 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 617:
#line 6035 "rwlparser.y" /* yacc.c:1646  */
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
#line 10160 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 618:
#line 6069 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprclear(rwm);
	    rwlerror(rwm, RWL_ERROR_BAD_REGEX);
	    yyerrok;
	  }
#line 10170 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 621:
#line 6082 "rwlparser.y" /* yacc.c:1646  */
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
#line 10215 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 622:
#line 6125 "rwlparser.y" /* yacc.c:1646  */
    {
		/* start a dummy assignment such that the system expression gets executed */
		rwm->assignvar = RWL_DUMMY_VAR;
		rwm->assignoper = RWL_T_ASSIGN;
		rwlexprbeg(rwm);
	      }
#line 10226 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 623:
#line 6134 "rwlparser.y" /* yacc.c:1646  */
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
#line 10246 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 624:
#line 6159 "rwlparser.y" /* yacc.c:1646  */
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
#line 10261 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 625:
#line 6171 "rwlparser.y" /* yacc.c:1646  */
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
#line 10284 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 626:
#line 6190 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ILLEGAL_THREAD); yyerrok; }
#line 10290 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 631:
#line 6204 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->cqnstart = rwm->cqnstop = 0.0;
	    rwm->cqnnow = rwlclock(rwm->mxq,0);
	  }
#line 10299 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 632:
#line 6209 "rwlparser.y" /* yacc.c:1646  */
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
#line 10327 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 633:
#line 6234 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->cqnstop = rwm->pval.dval;
	    if (rwm->cqnstop < rwm->cqnstart || rwm->cqnstop < rwm->cqnnow)
	    {
	      rwlerror(rwm, RWL_ERROR_CQN_STOP_BEFORE_START, rwm->cqnstop, rwm->cqnstart, rwm->cqnnow);
	      rwm->cqnat = 0;
	    }
	  }
#line 10340 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 634:
#line 6243 "rwlparser.y" /* yacc.c:1646  */
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
#line 10396 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 635:
#line 6295 "rwlparser.y" /* yacc.c:1646  */
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
#line 10425 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 636:
#line 6320 "rwlparser.y" /* yacc.c:1646  */
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
#line 10457 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 637:
#line 6348 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlcodeaddu(rwm, RWL_CODE_CQNISCB, 0); // Is in callback
	    rwlcodetail(rwm);
	  }
#line 10466 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 641:
#line 6359 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "querynotification");
	    yyerrok;
	  }
#line 10475 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 643:
#line 6368 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->cqnstart = rwm->pval.dval;
	  }
#line 10483 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 644:
#line 6375 "rwlparser.y" /* yacc.c:1646  */
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
#line 10503 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 645:
#line 6393 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlcodetail(rwm);
	  }
#line 10511 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 647:
#line 6398 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ILLEGAL_THREAD); yyerrok; }
#line 10517 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 649:
#line 6403 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->mythr->dbnam = rwm->inam;
	  }
#line 10525 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 652:
#line 6412 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "threads") ; }
#line 10531 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 655:
#line 6420 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "run") ; }
#line 10537 "rwlparser.tab.c" /* yacc.c:1646  */
    break;


#line 10541 "rwlparser.tab.c" /* yacc.c:1646  */
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
