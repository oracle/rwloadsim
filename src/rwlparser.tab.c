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
#line 186 "rwlparser.y" /* yacc.c:339  */

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
  , {"RWL_T_HEX2RAW", "'hex2raw'"}
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
  , {"RWL_T_RAW2HEX", "'raw2hex'"}
  , {"RWL_T_RAW2STRING", "'raw2string'"}
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
  , {"RWL_T_STRING2RAW", "'string2raw'"}
  , {"RWL_T_STRING_CONST", "string constant"}
  , {"RWL_T_SUBSTR", "'substr'"}
  , {"RWL_T_SUBSTRB", "'substrb'"}
  , {"RWL_T_SUM", "'sum'"}
  , {"RWL_T_SUPERSHK", "'supershk'"}
  , {"RWL_T_SYSDATE", "'sysdate'"}
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

// Copy an immediate value into stack-owned storage before parse state changes.
static void rwlfreezevalue(rwl_main *rwm, rwl_value *dst, rwl_value *src)
{
  ub8 bytelen = 0;

  (void) rwm;
  memcpy(dst, src, sizeof(rwl_value));
  if (!src->sval || RWL_SVALLOC_NOT == src->vsalloc)
    return;

  if (RWL_TYPE_RAW == src->vtype)
  {
    bytelen = (ub8) src->alen;
    dst->slen = bytelen;
  }
  else
    bytelen = src->slen;

  if (!bytelen)
  {
    dst->sval = 0;
    dst->vsalloc = RWL_SVALLOC_NOT;
    return;
  }

  dst->sval = rwlalloc(rwm, (size_t) bytelen);
  memcpy(dst->sval, src->sval, (size_t) bytelen);
  dst->vsalloc = RWL_SVALLOC_FIX;
}

// Build a procedure-call estack that can later initialize a borrowed session.
static void rwlstartprocbegin(rwl_main *rwm, text *pname)
{
  if (0 != rwm->furlev)
    rwlsevere(rwm,"[rwlparser-recursestart:%d]", rwm->furlev);
  rwm->recfuncprs[0].aacnt = 0;
  rwm->recfuncprs[0].funcn = pname;
  rwlexprbeg(rwm);
}

static void rwlstartprocarg(rwl_main *rwm)
{
  rwl_value num = RWL_VALUE_ZERO;

  rwlfreezevalue(rwm, &num, &rwm->pval);
  rwlexprpush(rwm, &num, RWL_STACK_NUM);
  rwm->recfuncprs[0].aacnt++;
}

// Cancel the database currently being declared and detach parser state from it.
static void rwlcanceldbdecl(rwl_main *rwm)
{
  sb4 ld;

  if (!rwm->dbsav)
    return;

  ld = rwlfindvar(rwm->mxq, rwm->dbsav->vname, RWL_VAR_NOGUESS);
  if (ld<0)
    rwlsevere(rwm, "[rwlcanceldbdecl-bad:%s;%d]", rwm->dbsav->vname, ld);
  else
  {
    rwm->mxq->evar[ld].vtype = RWL_TYPE_CANCELLED;
    rwm->mxq->evar[ld].vdata = 0;
  }

  if (rwm->defdb && !rwlstrcmp(rwm->defdb, rwm->dbsav->vname))
    rwm->defdb = 0;
  if (rwm->resdb && !rwlstrcmp(rwm->resdb, rwm->dbsav->vname))
    rwm->resdb = 0;
  if (rwm->mxq->curdb == rwm->dbsav)
    rwm->mxq->curdb = 0;

  rwlfree(rwm, rwm->dbsav);
  rwm->dbname = 0;
}

// Remap a wrapper-local bind/define guess into generated thread-local scope.
static sb4 rwlthrlocalguess(rwl_main *rwm, sb4 oldguess)
{
  rwl_identifier *ovid;
  sb4 newguess;

  if (oldguess < 0)
    return oldguess;

  ovid = rwm->mxq->evar + oldguess;
  if (!bit(ovid->idflags, RWL_IDENT_LOCAL) || !ovid->pname || !rwm->codename)
    return oldguess;

  newguess = rwlfindvar2(rwm->mxq, ovid->vname, RWL_VAR_NOGUESS, rwm->codename);
  if (newguess < 0)
    rwlsevere(rwm, "[rwlthrlocalguess-notfound:%s;%s]"
      , ovid->vname, rwm->codename);

  return newguess;
}

// Clone a local SQL template so generated thread code gets thread-local bind/defines.
static rwl_sql *rwlthrlocalsql(rwl_main *rwm, rwl_sql *sq)
{
  rwl_sql *sq2;
  rwl_bindef *bd;

  if (!sq)
    return 0;

  sq2 = (rwl_sql *) rwlalloc(rwm, sizeof(rwl_sql));
  memcpy(sq2, sq, sizeof(rwl_sql));
  sq2->bindef = 0;
  sq2->bincount = 0;
  sq2->outcount = 0;
  sq2->defcount = 0;
  sq2->abide = 0;
  sq2->aindi = 0;
  sq2->aalen = 0;
  sq2->aix = 0;
  sq2->sqlid[0] = 0;

  bd = sq->bindef;
  while (bd)
  {
    if (!bit(sq->sqflags, RWL_SQFLAG_DYNAMIC)
        || bit(bd->bdflags, RWL_BDFLAG_FIXED))
    {
      rwl_bindef *bd2;

      bd2 = (rwl_bindef *) rwlalloc(rwm, sizeof(rwl_bindef));
      memcpy(bd2, bd, sizeof(rwl_bindef));
      bd2->binhp = 0;
      bd2->defhp = 0;
      bd2->vguess = rwlthrlocalguess(rwm, bd2->vguess);
      switch (bd2->bdtyp)
      {
        case RWL_DEFINE:
          sq2->defcount++;
          break;
        case RWL_BINDOUT_POS:
        case RWL_BINDOUT_NAME:
          sq2->outcount++;
          break;
        case RWL_BIND_POS:
        case RWL_BIND_NAME:
          sq2->bincount++;
          break;
      }
      bd2->next = sq2->bindef;
      sq2->bindef = bd2;
    }
    bd = bd->next;
  }

  return sq2;
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

  if (rwm->dbsav)
    bis(rwm->m2flags, RWL_P2_SOMEEXPFAIL);

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


#line 557 "rwlparser.tab.c" /* yacc.c:339  */

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
/* "%code requires" blocks.  */
#line 670 "rwlparser.y" /* yacc.c:355  */

/* allow threads sum on local variables */

#line 599 "rwlparser.tab.c" /* yacc.c:355  */

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
    RWL_T_SYSDATE = 375,
    RWL_T_LOG = 376,
    RWL_T_EXP = 377,
    RWL_T_ROUND = 378,
    RWL_T_ACTIVESESSIONCOUNT = 379,
    RWL_T_REQUESTMARK = 380,
    RWL_T_SPRINTF = 381,
    RWL_T_OPENSESSIONCOUNT = 382,
    RWL_T_STATEMARK = 383,
    RWL_T_REGEXSUB = 384,
    RWL_T_REGEXSUBG = 385,
    RWL_T_SERVERRELEASE = 386,
    RWL_T_SQL = 387,
    RWL_T_SQL_TEXT = 388,
    RWL_T_INSTR = 389,
    RWL_T_INSTRB = 390,
    RWL_T_CONNECTIONPOOL = 391,
    RWL_T_CONNECTIONCLASS = 392,
    RWL_T_UNSIGNED = 393,
    RWL_T_HEXADECIMAL = 394,
    RWL_T_OCTAL = 395,
    RWL_T_FPRINTF = 396,
    RWL_T_ENCODE = 397,
    RWL_T_DECODE = 398,
    RWL_T_STRING_CONST = 399,
    RWL_T_IDENTIFIER = 400,
    RWL_T_INTEGER_CONST = 401,
    RWL_T_DOUBLE_CONST = 402,
    RWL_T_PRINTF = 403,
    RWL_T_PIPEFROM = 404,
    RWL_T_PIPETO = 405,
    RWL_T_RSHIFTASSIGN = 406,
    RWL_T_GLOBAL = 407,
    RWL_T_QUERYNOTIFICATION = 408,
    RWL_T_NORMALRANDOM = 409,
    RWL_T_STATISTICSONLY = 410,
    RWL_T_CEIL = 411,
    RWL_T_TRUNC = 412,
    RWL_T_FLOOR = 413,
    RWL_T_LOBPREFETCH = 414,
    RWL_T_SIN = 415,
    RWL_T_COS = 416,
    RWL_T_ATAN2 = 417,
    RWL_T_WINSLASHF2B = 418,
    RWL_T_WINSLASHF2BB = 419,
    RWL_T_STRING2RAW = 420,
    RWL_T_HEX2RAW = 421,
    RWL_T_RAW2HEX = 422,
    RWL_T_RAW2STRING = 423,
    RWL_T_BITWISE_LEFT_SHIFT = 424,
    RWL_T_BITWISE_RIGHT_SHIFT = 425,
    RWL_T_ASNBIS = 426,
    RWL_T_ASNBIC = 427,
    RWL_T_UMINUS = 428
  };
#endif

/* Value type.  */
#if ! defined RWLYSTYPE && ! defined RWLYSTYPE_IS_DECLARED

union RWLYSTYPE
{
#line 691 "rwlparser.y" /* yacc.c:355  */

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

#line 799 "rwlparser.tab.c" /* yacc.c:355  */
};

typedef union RWLYSTYPE RWLYSTYPE;
# define RWLYSTYPE_IS_TRIVIAL 1
# define RWLYSTYPE_IS_DECLARED 1
#endif



int rwlyparse (rwl_main *rwm);

#endif /* !YY_RWLY_RWLPARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 815 "rwlparser.tab.c" /* yacc.c:358  */

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
#define YYLAST   6320

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  193
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  301
/* YYNRULES -- Number of rules.  */
#define YYNRULES  709
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1310

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   428

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   184,     2,     2,     2,   183,   175,     2,
     188,   189,   181,   180,   190,   179,     2,   182,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   192,   187,
     177,   176,   178,   191,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   174,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   173,     2,   185,     2,     2,     2,
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
     165,   166,   167,   168,   169,   170,   171,   172,   186
};

#if RWLYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   755,   755,   762,   772,   782,   784,   783,   799,   800,
     802,   805,   812,   814,   831,   830,   840,   839,   848,   847,
     857,   856,   866,   871,   880,   881,   885,   884,   891,   896,
     904,   905,   909,   908,   915,   919,   928,   927,   998,  1007,
    1008,  1020,  1021,  1024,  1025,  1028,  1038,  1043,  1051,  1064,
    1095,  1106,  1118,  1117,  1133,  1143,  1142,  1160,  1170,  1180,
    1190,  1201,  1200,  1209,  1210,  1213,  1221,  1231,  1242,  1257,
    1258,  1262,  1263,  1264,  1267,  1291,  1315,  1327,  1329,  1328,
    1341,  1342,  1346,  1347,  1351,  1358,  1359,  1364,  1368,  1375,
    1389,  1404,  1434,  1441,  1448,  1449,  1453,  1454,  1457,  1470,
    1469,  1527,  1539,  1538,  1560,  1565,  1572,  1577,  1584,  1670,
    1671,  1675,  1684,  1685,  1689,  1690,  1693,  1694,  1695,  1699,
    1700,  1704,  1730,  1732,  1734,  1736,  1751,  1753,  1768,  1773,
    1778,  1783,  1791,  1792,  1794,  1796,  1815,  1816,  1830,  1844,
    1859,  1902,  1915,  1929,  1943,  1955,  1959,  1960,  1961,  1962,
    1963,  1964,  1965,  1966,  1967,  1968,  1969,  1970,  1971,  1972,
    1973,  1974,  1976,  1978,  1980,  1982,  1984,  1986,  1988,  1990,
    1991,  1992,  1993,  1998,  1999,  2000,  2001,  2004,  2007,  2008,
    2012,  2017,  2018,  2019,  2021,  2023,  2024,  2026,  2037,  2048,
    2052,  2058,  2062,  2068,  2072,  2078,  2083,  2087,  2095,  2093,
    2122,  2126,  2130,  2136,  2142,  2146,  2147,  2151,  2152,  2156,
    2161,  2162,  2163,  2168,  2169,  2170,  2171,  2172,  2176,  2177,
    2178,  2179,  2183,  2184,  2185,  2188,  2189,  2190,  2194,  2195,
    2196,  2197,  2198,  2199,  2203,  2204,  2205,  2209,  2210,  2214,
    2215,  2219,  2220,  2224,  2226,  2225,  2243,  2245,  2244,  2260,
    2262,  2271,  2261,  2286,  2287,  2291,  2292,  2302,  2303,  2307,
    2315,  2318,  2317,  2324,  2327,  2326,  2330,  2332,  2334,  2336,
    2339,  2345,  2370,  2385,  2398,  2400,  2401,  2405,  2407,  2411,
    2413,  2418,  2417,  2424,  2423,  2435,  2440,  2439,  2446,  2445,
    2457,  2462,  2461,  2472,  2476,  2500,  2526,  2524,  2552,  2550,
    2661,  2670,  2669,  2673,  2672,  2677,  2683,  2682,  2692,  2691,
    2700,  2713,  2718,  2712,  2746,  2754,  2759,  2753,  2788,  2795,
    2811,  2810,  2823,  2839,  2850,  2856,  2862,  2874,  2886,  2896,
    2906,  2919,  2905,  2926,  2930,  2935,  2939,  2946,  2962,  2964,
    2966,  2966,  2967,  2970,  2972,  2974,  2971,  2976,  2980,  2979,
    3098,  3131,  3139,  3182,  3138,  3234,  3235,  3236,  3237,  3239,
    3240,  3248,  3249,  3257,  3258,  3267,  3270,  3269,  3278,  3280,
    3288,  3296,  3305,  3313,  3315,  3322,  3323,  3359,  3396,  3437,
    3454,  3436,  3496,  3517,  3518,  3525,  3563,  3655,  3654,  3686,
    3687,  3695,  3694,  3742,  3744,  3743,  3753,  3904,  3903,  4051,
    4057,  4060,  4076,  4080,  4084,  4091,  4092,  4096,  4096,  4110,
    4110,  4126,  4126,  4142,  4142,  4156,  4156,  4187,  4188,  4189,
    4192,  4198,  4197,  4207,  4206,  4224,  4223,  4280,  4295,  4304,
    4279,  4341,  4349,  4350,  4350,  4363,  4362,  4369,  4370,  4371,
    4377,  4378,  4382,  4386,  4394,  4398,  4402,  4410,  4411,  4417,
    4423,  4425,  4428,  4429,  4434,  4433,  4535,  4537,  4536,  4614,
    4618,  4622,  4623,  4627,  4642,  4651,  4666,  4675,  4679,  4685,
    4702,  4709,  4719,  4720,  4721,  4725,  4726,  4737,  4747,  4754,
    4763,  4769,  4777,  4783,  4791,  4797,  4805,  4810,  4817,  4818,
    4819,  4823,  4824,  4823,  4834,  4838,  4839,  4838,  4848,  4855,
    4856,  4859,  4859,  4935,  4933,  4947,  5019,  5117,  5118,  5122,
    5123,  5126,  5127,  5130,  5131,  5134,  5138,  5142,  5146,  5165,
    5171,  5173,  5176,  5177,  5186,  5187,  5192,  5191,  5200,  5210,
    5211,  5215,  5215,  5217,  5216,  5225,  5224,  5228,  5235,  5236,
    5240,  5240,  5242,  5241,  5248,  5247,  5251,  5260,  5260,  5369,
    5374,  5379,  5381,  5383,  5393,  5403,  5420,  5437,  5454,  5477,
    5477,  5508,  5529,  5529,  5552,  5551,  5567,  5566,  5582,  5581,
    5598,  5599,  5602,  5604,  5602,  5659,  5690,  5689,  5726,  5727,
    5735,  5734,  5758,  5759,  5763,  5762,  5801,  5800,  5823,  5823,
    5850,  5851,  5854,  5875,  5897,  5921,  5926,  5934,  5935,  5935,
    5939,  6000,  6035,  6049,  6053,  6061,  6110,  6119,  6120,  6128,
    6129,  6130,  6131,  6132,  6133,  6136,  6137,  6138,  6139,  6140,
    6141,  6148,  6155,  6146,  6181,  6181,  6194,  6207,  6208,  6212,
    6225,  6226,  6233,  6238,  6245,  6249,  6255,  6256,  6257,  6262,
    6263,  6264,  6269,  6270,  6271,  6276,  6277,  6278,  6283,  6288,
    6289,  6300,  6311,  6322,  6326,  6333,  6334,  6391,  6397,  6396,
    6484,  6483,  6549,  6557,  6559,  6563,  6567,  6556,  6609,  6618,
    6622,  6629,  6631,  6635,  6628,  6673,  6683,  6685,  6689,  6682,
    6727,  6736,  6737,  6740,  6807,  6816,  6842,  6841,  6907,  6913,
    6914,  6918,  7034,  6917,  7060,  7064,  7065,  7072,  7073,  7074,
    7080,  7081,  7082,  7087,  7088,  7089,  7090,  7091,  7092,  7093
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
  "RWL_T_GETENV", "RWL_T_SYSDATE", "RWL_T_LOG", "RWL_T_EXP", "RWL_T_ROUND",
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
  "RWL_T_STRING2RAW", "RWL_T_HEX2RAW", "RWL_T_RAW2HEX", "RWL_T_RAW2STRING",
  "RWL_T_BITWISE_LEFT_SHIFT", "RWL_T_BITWISE_RIGHT_SHIFT", "RWL_T_ASNBIS",
  "RWL_T_ASNBIC", "'|'", "'^'", "'&'", "'='", "'<'", "'>'", "'-'", "'+'",
  "'*'", "'/'", "'%'", "'!'", "'~'", "RWL_T_UMINUS", "';'", "'('", "')'",
  "','", "'?'", "':'", "$accept", "rwlyparse", "partterminator",
  "terminator", "programelementlist", "$@1", "programelement",
  "globaldeclaration", "$@2", "$@3", "$@4", "$@5", "ranstringspec",
  "ranstringlist", "ranstringentry", "$@6", "ranidentifierspec",
  "ranidentifierlist", "ranidentifierentry", "$@7",
  "databasedeclarationname", "databasedeclaration", "$@8",
  "maybejustusername", "maybedbspeclist", "dbspeclist", "dbspec", "$@9",
  "$@10", "$@11", "maybemarks", "eithermark", "maybemaxpoolsize",
  "releaselist", "poolrelease", "poolreleasecount", "poolreleaseevery",
  "poolreleaseidle", "maybewait", "$@12", "maybestartprocargs",
  "startprocargs", "startprocarg", "maybethentimeoutaction",
  "thenprocedurenamehead", "thenprocedurenametail",
  "startprocedurenametail", "compiletime_expression",
  "compiletime_concatenation", "subroutinedeclaration", "isaccepted",
  "functionhead", "$@13", "procedurehead", "$@14", "maybeprivatefunction",
  "maybeprivateprocedure", "codebody", "printvarlist", "printvarelement",
  "identifierorprocname", "maybeemptybrackets", "maybearguments",
  "formalargumentlist", "formalargument", "argumenttype",
  "maybestatistics", "codeterminator", "identifier_or_constant", "$@15",
  "maybe_expression_list", "expression_list", "countexpressions",
  "primary_expression", "unary_expression", "multiplication", "addition",
  "bitwise_shift", "comparison", "equality", "bitwise_and", "bitwise_xor",
  "bitwise_or", "logicaland", "$@16", "logicalor", "$@17", "conditional",
  "$@18", "$@19", "expression", "concatenation", "statementlist",
  "goodorbadstatement", "$@20", "$@21", "statement", "$@22", "$@23",
  "$@24", "$@25", "$@26", "$@27", "$@28", "$@29", "$@30", "$@31", "$@32",
  "$@33", "$@34", "$@35", "$@36", "$@37", "$@38", "$@39", "$@40", "$@41",
  "$@42", "$@43", "$@44", "$@45", "$@46", "$@47", "$@48",
  "beginofprocedurecall", "endofprocedurecall", "writelobhead", "$@49",
  "maybewritelobtail", "readlobhead", "$@50", "maybereadlobtail", "$@51",
  "docallonesql", "dosqlloop", "$@52", "controlloopheader",
  "controllooplistandend", "controlloopheadend", "controllooplist",
  "controlloopoption", "$@53", "$@54", "$@55", "$@56", "$@57",
  "maybequeue", "callsql", "$@58", "$@59", "embeddedsql", "$@60",
  "immediatesql", "$@61", "$@62", "$@63", "getdynamicorinlineimmsql",
  "$@64", "immediatesqlheader", "$@65", "immediatesqlendsqlisok",
  "immediatesqltail", "immediateatclause", "executehead",
  "maybeatdatabase", "declinitlist", "declinit", "$@66", "declinitassign",
  "$@67", "ifstatements", "elseifstatements", "maybeelseiflist", "ifhead",
  "elseifhead", "whileheadkeyword", "whilehead", "whileheadwrongkeyword",
  "maybethreadsattr", "maybeprivateraw", "maybeprivatestring",
  "maybeprivateinteger", "maybeprivatedouble", "maybeprivatelob",
  "eitherlobtype", "sqldeclaration", "$@68", "$@69", "$@70", "$@71",
  "namedsqldeclaration", "dynamicsqlbody", "$@72", "staticsqlbody", "$@73",
  "addsqlvariable", "parsesqlspecifications", "sqlspeclist", "sqlspec",
  "musthaveterminator", "maybearraydefine", "definelist", "defineelement",
  "$@74", "bindoutlist", "bindoutelement", "$@75", "$@76", "$@77",
  "bindlist", "bindelement", "$@78", "$@79", "$@80", "bdidentifier",
  "$@81", "bdidentname", "modsqlstatement", "$@82", "$@83", "$@84", "$@85",
  "$@86", "modsqlbdlist", "modsqlbd", "$@87", "$@88", "moddbstatement",
  "$@89", "moddbsespmaybedotdot", "printf", "$@90", "sprintfheader",
  "sprintf", "$@91", "fprintf", "$@92", "handlefprintflist", "$@93",
  "printflist", "printfelement", "write", "print", "writelist", "$@94",
  "writeelement", "pwterminator", "pfterminator", "readorreadline",
  "assignrightside", "assignterminator", "declassignoperator",
  "assignoperator", "loopiterator", "$@95", "$@96", "$@97",
  "commaconcatenationlist", "commaconcatenation", "loopiteratorrecover",
  "maybeprivatefile", "mayberaw", "executeterminator", "loopterminator",
  "ifterminator", "sqlterminator", "whileterminator", "maybeandexpression",
  "getstaticsqltext", "getinlinesql", "$@98", "readfromfile", "$@99",
  "regexsub", "$@100", "$@101", "$@102", "$@103", "regexsuborsubg",
  "regextract", "$@104", "$@105", "$@106", "regex", "$@107", "$@108",
  "$@109", "readlist", "readlistelement", "systemstart", "systemfinish",
  "threadexecution", "$@110", "threadlistp", "thread", "$@111", "$@112",
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
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   124,    94,    38,    61,    60,    62,    45,
      43,    42,    47,    37,    33,   126,   428,    59,    40,    41,
      44,    63,    58
};
# endif

#define YYPACT_NINF -1033

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-1033)))

#define YYTABLE_NINF -693

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
   -1033,   154,   160, -1033,  3827,   -20,    57, -1033,   -20,    51,
   -1033, -1033, -1033,  1552,   257,  2167,  2335, -1033,    92,  2410,
      94, -1033, -1033,   120,   116,   117,   111, -1033,   -20,  2578,
     220,  6132,   -20,   -20,   -20,  1910,   -20,    75,   -20,   -20,
   -1033,   -20,   513,   305, -1033, -1033, -1033, -1033,   182,   188,
     301,  2653,    44, -1033, -1033,    67, -1033,   118,   342, -1033,
   -1033, -1033, -1033, -1033, -1033,    58,   318,   318,   125,   132,
   -1033, -1033,   196,   309,   196,  1742, -1033,    74, -1033, -1033,
      50,    49,    70,   115,   135, -1033,    59,    68,   232,   -20,
     -20,  1350,  2821,   139,   140,   412, -1033, -1033,  2896, -1033,
   -1033,  6132, -1033, -1033,   -20, -1033, -1033, -1033, -1033, -1033,
     -20, -1033,   164, -1033, -1033,   -20, -1033,  6132,   -20,    28,
     332,   408,   309,   343,   -20,  6132,   -20,  6132,   477,   463,
     601,   111,   349,   365,   388,   393,   400,   424,   426,   427,
     111, -1033,   435,  6132,   439,   445,   446,   449,   452,   458,
     464,   467,   471,   472,   475,   481,   485,   491,   492,   494,
   -1033,   495, -1033, -1033,   498,   506,   507,   509,   517,   518,
     520,   521,   522,   523,   524,   528,   529,  6132,  6132,  6132,
    6132,   462, -1033, -1033,   436,   229,   347,   298,   -24,   351,
     544,   451,   535,   -27, -1033,    82,   -20,   196,   609,   615,
     -20, -1033,   -20, -1033,   530,   -20, -1033,  3064,   581,    43,
      26,    22, -1033, -1033, -1033,   -20, -1033,  6132, -1033,   -20,
     294,   551, -1033, -1033, -1033, -1033, -1033, -1033, -1033,   338,
   -1033,   301,   141, -1033,   679,   -20,   533,   534,   537,   538,
     -20,  6132,   -20,   580, -1033,   710,   655,   587, -1033,   -20,
     545,   196,   589,   457, -1033,   -20,   -20,   -20, -1033,   196,
   -1033, -1033, -1033, -1033,   -20, -1033,   -20, -1033,   591, -1033,
   -1033,   124, -1033,   196, -1033,   716,   198, -1033,    62, -1033,
    3553,  3960,   -20,  6132,   594,   -20,   258,  6132, -1033,   -20,
     594,   -20,   594,   -20, -1033,   194, -1033,   -20,   -20,   196,
   -1033, -1033,   -20, -1033, -1033, -1033, -1033, -1033,   -20,  6132,
   -1033,  6132, -1033,   -20,  5804, -1033,   256, -1033,   -20, -1033,
     -20,   594, -1033,   -20,  6132,    29, -1033,  6132, -1033,    25,
   -1033, -1033,  6132,    61,   553, -1033, -1033, -1033,   687, -1033,
   -1033,  6132,   690,   408, -1033, -1033, -1033, -1033, -1033, -1033,
     508,  3139,    88, -1033, -1033, -1033, -1033, -1033, -1033, -1033,
   -1033, -1033,   558,   559,  6132,  6132,  6132,  6132,  6132,  6132,
   -1033,  6132, -1033,  6132,  6132,  6132,  6132,  6132,    33,  6132,
    5399,  6132,  6132,  6132,   145,   147,    48,  6132,  6132, -1033,
    6132,  6132,  6132,  6132,  6132,  6132,  6132,  6132,  6132,  6132,
    6132,  6132,  6132, -1033, -1033, -1033,   560,   100,  6132,  6132,
    6132,  6132,  6132,  6132,  6132,  6132,  6132,  6132,  6132,  6132,
    6132,  6132,  6132,  6132,  6132, -1033, -1033, -1033,  6132, -1033,
   -1033, -1033,   605,   606, -1033, -1033, -1033, -1033,   -20,    69,
   -1033, -1033, -1033, -1033, -1033, -1033, -1033, -1033, -1033,   -20,
     -20,  6132, -1033, -1033,   729,   730,   734,   610, -1033, -1033,
   -1033,  6132,   -20, -1033,  6132,   -20, -1033, -1033, -1033, -1033,
   -1033, -1033, -1033, -1033, -1033, -1033, -1033,   704,   614, -1033,
   -1033, -1033, -1033, -1033, -1033, -1033, -1033, -1033, -1033, -1033,
   -1033,  3064, -1033,  6132, -1033, -1033, -1033, -1033, -1033,  4093,
   -1033, -1033,   572, -1033,   572, -1033, -1033, -1033, -1033, -1033,
   -1033, -1033,   336, -1033,   682, -1033, -1033, -1033, -1033, -1033,
   -1033, -1033, -1033, -1033, -1033,  6132, -1033,  4226,   -20,   -20,
   -1033, -1033, -1033,    83,   334,    90,   310,   450, -1033, -1033,
     688,    60, -1033,   575,   697,   194, -1033, -1033, -1033,   584,
     594, -1033,   194, -1033,   194, -1033,   444,   594, -1033, -1033,
   -1033, -1033, -1033,  6132, -1033,   256,   256, -1033, -1033, -1033,
   -1033, -1033,   585, -1033,   194, -1033, -1033,   -20,   625,   -20,
     499, -1033, -1033, -1033,   590,   -20,    73, -1033, -1033, -1033,
    6132,  3307,   408,   697, -1033, -1033,   690,   585,   586,   588,
   -1033, -1033, -1033, -1033, -1033, -1033,   -20,   754, -1033,    64,
   -1033, -1033, -1033,    12,   595,    15,    54,    98,    21,   112,
      46,   596,   597,   592,   599,   600,   602, -1033,   603, -1033,
     604,     9,    24,   119,   613,   618,   619,   620,   621,   622,
     623,   624,   627,   628,  6132,   101,   191,   197,   227,   237,
     241,   113,   626,   630,   631,   632,   633,   634, -1033, -1033,
     723, -1033, -1033, -1033,   436,   436,   229,   229,   347,   347,
     292,   347,   347,   298,   298,   -24,   351,   544,  6132,  6132,
    6132, -1033, -1033, -1033, -1033,   -20, -1033, -1033,   -20, -1033,
   -1033,   -20,   277,   557,   638,   645, -1033, -1033,   649,   697,
   -1033,  6132,   697, -1033,   -20,  5565, -1033, -1033, -1033, -1033,
   -1033,   635, -1033, -1033,    78,   707,   224,  6132,  6132,  6132,
    6132, -1033, -1033, -1033, -1033, -1033, -1033, -1033, -1033,  6132,
   -1033,   196,    63, -1033, -1033,  4359,   -20,   -20,   477,   -20,
   -1033,   -20,   798,   802,   -20,  3382, -1033, -1033,   -20,   -20,
     -20, -1033, -1033, -1033, -1033,   768,   194, -1033, -1033, -1033,
   -1033, -1033,   635, -1033, -1033,  6132,   681,   276, -1033, -1033,
     637, -1033, -1033, -1033, -1033,  5968,  6132,  6132,   777, -1033,
    6132, -1033, -1033, -1033, -1033,   809,  6132,  6132,  6132,   -20,
     499, -1033,    61, -1033,   -20,   -20,   196, -1033,   -22,   800,
   -1033,   690, -1033, -1033,   -17,  6132,  6132, -1033,   508,   746,
     -20,   -20, -1033, -1033, -1033,  6132,  6132, -1033, -1033,  6132,
   -1033,   644, -1033,   689,  6132,  6132, -1033, -1033, -1033, -1033,
   -1033, -1033, -1033,  6132, -1033,  6132, -1033, -1033, -1033, -1033,
   -1033, -1033, -1033, -1033, -1033,  6132,  6132,   647,  6132, -1033,
   -1033, -1033, -1033, -1033,  6132, -1033, -1033, -1033, -1033, -1033,
   -1033, -1033,  6132,   451,   535,   646,    52,    56, -1033, -1033,
   -1033,  6132,  6132,   -20, -1033, -1033, -1033,   761, -1033, -1033,
   -1033, -1033, -1033, -1033, -1033, -1033,  5565, -1033,   650, -1033,
   -1033,   196, -1033, -1033, -1033, -1033, -1033, -1033, -1033,  6132,
     651, -1033, -1033, -1033, -1033,    -5, -1033, -1033,   290, -1033,
     696,   546, -1033, -1033, -1033, -1033,   697,   697,   697,   697,
    4492,  6132,   -20, -1033, -1033,   -20,   -20, -1033, -1033,    62,
   -1033, -1033, -1033, -1033,  6132, -1033,   -20,   -20, -1033,   772,
     416,  3686, -1033, -1033, -1033,   594, -1033, -1033,  6132, -1033,
   -1033, -1033, -1033,  6132,   -20,   698, -1033, -1033, -1033, -1033,
   -1033,   289, -1033, -1033, -1033, -1033, -1033, -1033, -1033, -1033,
   -1033, -1033, -1033, -1033, -1033, -1033,   654,  4625, -1033,  4758,
     790, -1033, -1033,   -20,   701, -1033, -1033, -1033,   244,   246,
     247, -1033,   658,    85,   104,   251,   255,   371,   377, -1033,
     261,   262,   347, -1033,   -20,    25, -1033,   -20,   705, -1033,
     697,   697, -1033, -1033, -1033,  6132, -1033,  6132, -1033,   -20,
      52,    56, -1033,  6132, -1033,   552, -1033, -1033,  6132, -1033,
    6132, -1033,   546, -1033, -1033,    65,   697, -1033, -1033,   253,
     593, -1033, -1033, -1033,  4891, -1033, -1033, -1033, -1033, -1033,
     194,   594, -1033, -1033, -1033, -1033,   289,   817, -1033, -1033,
   -1033,  6132,   817,  6132,  6132,   -11, -1033,    65,    65, -1033,
     585,   585, -1033, -1033,  5024, -1033, -1033, -1033, -1033, -1033,
    6132, -1033,  6132, -1033, -1033, -1033,  6132, -1033,  6132, -1033,
   -1033,  6132, -1033,   381, -1033, -1033, -1033, -1033,   396, -1033,
     819,   661, -1033,  6132,   661, -1033,   697,   661, -1033, -1033,
   -1033,   697,    31,    36, -1033,  2092,    42,   -20,   -20,   -20,
   -1033, -1033,   665,   666, -1033,   -20,   -20, -1033, -1033, -1033,
   -1033, -1033, -1033,    64,  5157, -1033,   194,   667,  6132, -1033,
   -1033,   668, -1033, -1033, -1033, -1033, -1033, -1033, -1033, -1033,
   -1033, -1033,   276,   276,   836,   268,   270,   271,   278, -1033,
     -20,    25,  6132,  6132,   -20,   705,  6132, -1033, -1033,   697,
     -20, -1033, -1033, -1033, -1033,   331, -1033,   -20, -1033, -1033,
     337, -1033,   -20, -1033,  6132,   -20, -1033, -1033, -1033, -1033,
     346, -1033, -1033, -1033, -1033, -1033, -1033, -1033, -1033, -1033,
     309, -1033,    66, -1033,  6132, -1033,    -2, -1033,  6132,   755,
     804,  5290, -1033, -1033,    66, -1033, -1033, -1033, -1033, -1033,
   -1033, -1033, -1033, -1033, -1033,   697, -1033,   717, -1033, -1033,
   -1033, -1033,   410, -1033, -1033, -1033,   223, -1033, -1033,   -20,
   -1033, -1033, -1033, -1033,   455, -1033, -1033,   -20,   -20, -1033,
   -1033, -1033,  6132,  5729, -1033, -1033, -1033, -1033, -1033, -1033,
   -1033,    65, -1033, -1033, -1033,    97, -1033, -1033, -1033, -1033,
   -1033, -1033, -1033, -1033, -1033, -1033, -1033, -1033,   671, -1033,
    6132,  6132, -1033, -1033, -1033, -1033,   306, -1033,   718,   794,
   -1033, -1033, -1033,   808, -1033,   196,   279, -1033, -1033, -1033,
     678, -1033, -1033,  6132,  6132, -1033,   680, -1033, -1033, -1033
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,     0,     6,     1,     0,     0,     0,   595,   596,     0,
     107,   481,   483,     0,     0,     0,     0,   485,     0,     0,
       0,   604,   603,     0,     0,     0,   114,   399,   306,     0,
     444,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     105,     0,   634,     0,   684,   488,   489,   490,     0,     0,
     479,     0,     0,   669,   670,     0,   425,     0,     0,   580,
       4,   271,     7,     9,    12,     0,    96,    96,     0,     0,
       8,   379,     0,   340,     0,     0,   348,     0,   257,   257,
       0,     0,     0,     0,     0,   487,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   355,   357,     0,   358,
     356,     0,   383,   384,     0,    35,    34,    36,   372,   113,
       0,   112,     0,   109,   111,     0,   385,   205,     0,   420,
       0,   653,   440,     0,     0,     0,     0,     0,     0,     0,
       0,   114,     0,     0,     0,     0,     0,     0,     0,     0,
     114,   145,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     144,   141,   143,   142,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   210,   213,   218,   222,   225,   228,   234,   237,   239,
     241,   243,   246,   249,   253,     0,     0,     0,     0,     0,
       0,   593,     0,   594,     0,     0,   375,     0,     0,     0,
       0,     0,   326,   327,   376,     0,   310,     0,   272,     0,
       0,     0,   328,   273,   337,   106,   480,   482,   484,     0,
     104,   478,     0,   486,     0,     0,     0,   393,     0,   389,
       0,     0,     0,     0,   583,     0,     0,     0,   505,     0,
       0,     0,   421,     0,   588,     0,     0,     0,   136,     0,
      13,    97,   257,   257,     0,    99,     0,   102,   417,     3,
     396,     0,   396,     0,   396,     0,   433,   257,     0,   296,
       0,     0,     0,     0,     0,     0,     0,     0,   281,     0,
       0,     0,     0,     0,   454,     0,   452,     0,     0,     0,
     645,   274,     0,   602,   363,   584,   361,   359,     0,     0,
     601,     0,   365,     0,   255,   600,     0,   597,     0,   660,
       0,     0,   633,     0,     0,     0,    38,    39,    10,     0,
      11,   336,   205,     0,   206,   207,   209,   300,     0,   435,
     345,     0,     0,   653,   441,   352,   680,   677,   675,   672,
     703,     0,     0,   689,   468,   474,   472,   473,   467,   470,
     471,   203,     0,     0,     0,     0,     0,     0,     0,     0,
     202,     0,   216,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   198,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   214,   215,   217,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   244,   247,   250,     0,   469,
     351,   350,     0,     0,   370,   371,   115,   329,     0,     0,
     307,   464,   463,   445,   446,   319,   314,   312,   333,     0,
       0,     0,   320,   330,     0,     0,     0,     0,   632,   325,
     391,     0,     0,   387,     0,     0,   318,   316,   362,   582,
     498,   436,   496,   426,   360,   586,   382,     0,     0,   609,
     612,   610,   616,   617,   618,   613,   614,   611,   619,   620,
     615,     0,   581,     0,   140,   138,   137,   139,    95,     0,
      94,    98,   116,   101,   116,   413,   409,   407,   411,   418,
     419,   380,   417,   405,     0,   338,   442,   443,   341,   396,
     342,   431,   658,   657,   505,     0,   432,     0,     0,     0,
     642,   295,   257,     0,     0,     0,     0,   634,   258,   259,
     459,     0,   290,     0,    92,     0,   285,   476,   477,     0,
       0,   278,     0,   280,     0,   276,   456,     0,   275,   648,
     646,   647,   364,     0,   369,     0,     0,   374,   256,   598,
     373,   662,     0,   293,     0,   668,   664,     0,     0,     0,
      41,    40,    93,   110,     0,     0,     0,   447,   335,   386,
       0,     0,   653,   654,   397,   343,     0,     0,     0,     0,
     705,   709,   706,   708,   704,   707,     0,     0,   691,     0,
     690,   200,   201,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   195,     0,   174,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   205,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   204,   211,
       0,   219,   220,   221,   224,   223,   226,   227,   231,   232,
       0,   229,   230,   236,   235,   238,   240,   242,     0,     0,
       0,   254,    20,    16,   606,     0,   607,   605,     0,   323,
     324,     0,     0,     0,     0,     0,   494,   492,     0,   394,
     377,     0,   390,   378,     0,   501,   588,   422,   424,   309,
     592,   589,   590,   108,     0,     0,   132,     0,     0,     0,
       0,   257,   404,   403,   402,   401,   406,   415,   339,     0,
     428,     0,     0,   644,   643,     0,     0,     0,   264,     0,
     261,     0,     0,     0,     0,     0,   462,   257,     0,     0,
       0,   649,   294,   288,   287,   475,     0,   277,   279,   455,
     457,   453,   585,   368,   367,     0,     0,     0,   681,   292,
       0,   305,   303,   685,   302,     0,     0,     0,     0,    57,
       0,    60,    63,    51,    50,     0,     0,     0,     0,     0,
      42,    43,     0,   451,     0,     0,     0,   208,     0,   624,
     257,     0,   257,   347,   653,     0,     0,   688,   703,   695,
       0,     0,   700,   687,   155,     0,     0,   181,   182,     0,
     185,     0,   178,     0,     0,     0,   159,   160,   197,   196,
     173,   175,   148,     0,   150,     0,   154,   194,   193,   192,
     191,   190,   188,   187,   189,     0,     0,     0,     0,   151,
     152,   153,   156,   157,     0,   176,   177,   169,   170,   171,
     172,   212,     0,   245,   248,     0,     0,     0,   608,   313,
     322,     0,     0,     0,   566,   564,   562,   559,   568,   556,
     557,   555,   561,   331,    18,    14,   501,   392,     0,   388,
     317,     0,   497,   500,   507,   499,   505,   655,   587,     0,
     124,   122,   123,   129,   131,   126,   130,   117,     0,   119,
       0,     0,   134,   135,   133,   103,   414,   410,   408,   412,
       0,     0,   520,   507,   434,     0,     0,   636,   349,     0,
     267,   266,   257,   263,     0,   260,     0,     0,   268,     0,
       0,     0,   652,   650,   651,     0,   283,   282,     0,   599,
     683,   661,   682,     0,     0,     0,    48,    45,    46,    63,
      55,    58,    61,    54,    52,    47,    37,    44,   334,   450,
     448,   449,   631,   630,   626,   621,     0,     0,   346,     0,
       0,   678,   673,     0,     0,   257,   702,   701,     0,     0,
       0,   180,     0,     0,     0,     0,     0,     0,     0,   199,
       0,     0,   233,   251,     0,     0,    21,     0,     0,    17,
     576,   575,   321,   572,   572,     0,   558,     0,   572,     0,
       0,     0,   493,     0,   656,     0,   503,   591,     0,   128,
       0,   118,     0,   121,   100,     0,   416,   521,   659,   437,
       0,   638,   637,   297,     0,   257,   269,   270,   466,   465,
       0,     0,   458,   665,   304,    49,    59,    67,    66,    65,
      64,    80,    67,     0,     0,     0,   627,     0,     0,   353,
       0,     0,   694,   696,     0,   186,   146,   183,   179,   165,
       0,   166,     0,   147,   149,   161,     0,   162,     0,   184,
     158,     0,    29,     0,    30,    32,    23,    26,     0,    24,
     578,   567,   570,     0,   565,   563,   560,   569,   332,    19,
      15,   395,     0,     0,   502,     0,     0,   520,   520,   520,
     508,   507,     0,     0,   120,     0,     0,   639,   381,   438,
     439,   429,   506,     0,     0,   289,     0,     0,     0,    69,
      91,    81,    82,    84,    69,   622,   629,   625,   628,   299,
     398,   257,     0,     0,     0,     0,     0,     0,     0,   252,
       0,     0,     0,     0,     0,     0,     0,   577,   572,   573,
       0,   546,   540,   542,   544,   520,   538,     0,   528,   526,
     520,   524,     0,   523,     0,     0,   537,   531,   533,   535,
     520,   529,   515,   516,   517,   504,   125,   127,   641,   640,
     440,   265,     0,   284,     0,    68,    77,    62,     0,    53,
       0,     0,   679,   674,     0,   167,   168,   163,   164,    28,
      31,    33,    27,    22,    25,   579,   571,     0,   510,   547,
     547,   547,     0,   509,   514,   547,     0,   513,   519,   520,
     512,   547,   547,   547,     0,   511,   430,     0,     0,   697,
     262,   666,     0,     0,    70,    71,    72,    73,    56,    83,
     623,     0,   693,   574,   541,     0,   543,   545,   539,   527,
     525,   518,   532,   534,   536,   530,   699,   698,     0,    78,
       0,     0,    76,   354,   550,   549,   551,   548,     0,    85,
      75,    74,   553,     0,   554,     0,     0,    79,   552,   667,
      89,    86,    89,   205,   205,    90,     0,    87,    90,    88
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1033, -1033,   -67,   192, -1033, -1033, -1033, -1033, -1033, -1033,
   -1033, -1033,  -154, -1033,  -297, -1033,  -150, -1033,  -290, -1033,
   -1033, -1033, -1033, -1033, -1033, -1033,    84, -1033, -1033, -1033,
     -86, -1033,  -187,  -268, -1033, -1033, -1033, -1033, -1033, -1033,
   -1033, -1033,  -330, -1033,  -423,  -427, -1033,  -246,  -323, -1033,
     815, -1033, -1033, -1033, -1033, -1033, -1033,   636, -1033,   555,
     -62,    -8,   382, -1033,  -145,   -23, -1033, -1033, -1033, -1033,
    -331, -1033,   299, -1033,   281,  -123,   178,  -391,   176,   468,
     470,   473,   213,   215, -1033, -1033, -1033,  -426, -1033, -1033,
     -19,   899,   -60, -1033, -1033, -1033,   891, -1033, -1033, -1033,
   -1033, -1033, -1033, -1033, -1033, -1033, -1033, -1033, -1033, -1033,
   -1033, -1033, -1033, -1033, -1033, -1033, -1033, -1033, -1033, -1033,
   -1033, -1033, -1033, -1033,   782,   108, -1033, -1033, -1033, -1033,
   -1033, -1033, -1033,  -243,  -580, -1033, -1033, -1033, -1033, -1033,
     389, -1033, -1033, -1033, -1033, -1033, -1033,   889, -1033, -1033,
     890, -1033,   785, -1033, -1033, -1033, -1033, -1033, -1033, -1033,
   -1033,  -294,   834, -1033, -1033,  -279,   352, -1033, -1033, -1033,
   -1033, -1033, -1033, -1033, -1033,   713, -1033, -1033,   -74, -1033,
   -1033, -1033, -1033, -1033,   -36, -1033, -1033, -1033, -1033, -1033,
      27, -1033, -1033, -1033, -1033,  -503,  -211,    17, -1033, -1031,
   -1033, -1033,  -324, -1033, -1033,  -325, -1033, -1033, -1033, -1033,
    -318, -1033, -1033, -1033,  -528, -1033, -1033, -1033, -1033, -1033,
   -1033, -1033, -1033,  -589,  -250, -1033, -1033, -1033, -1033, -1033,
   -1033, -1033, -1033, -1033, -1033, -1033, -1033,   214, -1033,   358,
      23, -1033, -1033,  -182, -1033,   158,  -293,   515,   912,   441,
   -1033,   374, -1033, -1033, -1033, -1033, -1033, -1033,  -138, -1033,
   -1033,   -28, -1033, -1032,     5, -1033, -1033,  -326, -1033,   659,
   -1033, -1033, -1033, -1033, -1033, -1033, -1033, -1033, -1033, -1033,
   -1033, -1033, -1033, -1033, -1033, -1033, -1033,  -575,  -752, -1033,
     -15, -1033, -1033, -1033,   598, -1033, -1033, -1033,  -277,  -189,
     137
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   270,    61,     2,     4,    62,    63,  1021,   867,
    1020,   866,  1009,  1098,  1099,  1163,  1006,  1093,  1094,  1162,
     107,    64,   327,   580,   789,   790,   791,  1062,  1057,  1061,
     961,  1060,  1139,  1206,  1254,  1255,  1256,  1257,  1258,  1289,
    1140,  1141,  1142,  1297,  1303,  1307,  1207,   543,   891,    65,
     262,    66,   502,    67,   504,    68,    69,   498,   112,   113,
     114,   205,   715,   908,   909,   910,   915,   260,   181,   644,
     333,   334,   335,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   678,   193,   679,   194,   680,  1091,
     314,   582,   499,   538,   934,   932,   539,   550,  1051,   284,
     945,   321,   532,   338,   579,   954,   207,   253,   217,   688,
     241,   704,   692,   693,  1019,   272,   120,   592,   277,   597,
    1151,   311,   268,   721,   117,   588,   239,   701,   465,   237,
     698,   462,   888,   515,   595,   802,    71,   511,   725,   512,
     513,   719,   718,   720,   717,   921,   514,    72,   477,   478,
      73,   248,    74,   276,   923,  1200,   524,   525,    75,   246,
    1131,   343,   344,    76,   589,   295,   296,   556,   759,   948,
      77,   746,   540,    78,   747,   359,    79,   360,   288,    80,
      81,    82,    83,    84,    85,    86,   457,   886,   247,   705,
     892,   893,   894,   895,  1121,   473,  1039,  1040,  1120,  1038,
    1184,  1180,  1181,  1235,  1190,  1191,  1241,  1242,  1243,  1175,
    1176,  1229,  1230,  1231,  1264,  1265,  1287,   883,  1017,  1015,
    1014,  1013,  1018,  1101,  1102,  1103,  1227,   873,  1100,  1167,
      87,   254,    88,    89,   563,    90,   706,   492,   493,   711,
     712,    91,    92,   316,   765,   317,   312,   304,    93,   440,
     687,   490,   491,   800,  1063,  1210,   976,  1065,  1066,   974,
      94,    95,   928,  1128,   531,   301,   752,   342,   896,   897,
     729,    96,   572,    97,   324,   770,  1137,  1278,    98,    99,
     127,   599,  1071,   100,   125,   598,  1070,   767,   768,   101,
     774,   102,   129,   352,   353,   809,  1154,   985,  1250,   813,
     606
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     195,   584,   681,   259,   581,   545,   233,   274,   290,   292,
     209,   552,   211,   554,   234,   952,   803,   596,   280,   281,
     372,   730,   804,   570,   668,   669,   670,   671,   672,   518,
     577,   520,  1170,   972,   625,  1149,  1150,  1177,  1029,   426,
     420,   549,   574,  1185,  1147,   242,   109,   821,   341,   638,
     285,   282,   952,  1004,   403,   404,   405,  1007,   104,   255,
     297,   748,   585,   528,   925,   810,  1125,  1247,   245,   302,
     685,   289,   109,   256,   794,  1252,   219,   428,   443,   109,
     428,   220,  -298,   428,   736,   286,  1192,  1193,  1194,   428,
     428,   740,   428,   128,   278,   196,   900,   901,   749,   811,
     639,   640,  1248,  1253,  1284,   608,   286,   110,   609,   105,
     902,   428,   243,   442,   252,   750,   291,   200,   202,   249,
    1126,   903,   428,   361,   351,   795,   264,   565,  -686,   566,
     431,   529,   370,   266,  1285,   198,   293,   354,   199,   926,
     318,   320,   456,  -435,  1233,   279,   634,   586,   636,  1237,
     428,   286,   421,   428,     3,   737,   257,   659,   358,  1245,
      -2,   660,   741,  1171,   427,    60,   428,    60,  1178,   428,
     111,   444,   428,   766,  1186,  1172,   516,  1173,   626,  1064,
     428,   428,  1179,  1030,   476,   904,  1187,   428,  1188,   244,
     905,   298,   497,   641,  -475,  -286,   111,   103,   832,   833,
     108,   814,   106,   111,   299,   816,   519,   221,  1271,    60,
     906,   819,  -495,   834,   835,  -475,  -301,   527,   796,   578,
     206,   978,   627,  1174,   212,   213,   214,   216,   218,  1283,
     222,   223,   561,   224,  1189,   822,   823,   287,   283,   197,
    1005,   522,  1286,   817,  1008,    60,    60,    60,    60,    60,
      60,    60,    60,    60,   865,    60,    60,   258,   118,   428,
    -475,   201,   203,   250,   544,   428,   801,   907,   544,   517,
     265,   756,   763,   764,  1079,  1080,   728,   267,   300,   303,
     294,   303,   303,   310,   319,  -291,  -491,   818,   664,   665,
     635,   848,   637,  1081,  1082,   428,   326,    21,    22,   204,
    1300,   820,   328,   854,   330,   428,   210,   331,   836,   428,
     337,   235,   428,   847,   428,   428,   346,   547,   348,   428,
     912,   913,   593,   428,  1292,   742,   871,   236,   743,   428,
     428,   523,   544,   238,  -400,   738,   428,  -400,   428,   428,
    -400,  -400,  -400,   251,  -635,   613,   428,   615,   616,   617,
     618,    60,   619,   454,   329,  1178,   455,   862,  -400,  -400,
     415,   416,   631,   632,   633,   417,  1301,  1293,   872,  1179,
    -686,   645,   646,   647,   648,   649,   650,   651,   261,   914,
     849,    60,   744,   269,   557,  1129,   850,   449,   430,  -344,
      56,   722,   434,  1026,   435,   271,  -308,   437,  1130,   450,
     952,   952,   119,   445,  -308,  -308,   739,   446,   411,   412,
     548,   448,   723,   505,  1058,  -308,   851,  1059,  1294,   506,
     507,   508,   305,  -308,  -308,  1104,   852,   459,   252,  1107,
     853,   451,   466,  1075,   468,  1076,  1077,   509,   510,   452,
    1083,   474,   699,    60,  1084,   702,   569,   494,   495,   496,
    1089,  1090,   956,   957,   958,   322,   501,  1215,   503,  1216,
    1217,   413,   414,    60,   339,   965,   766,  1218,   226,   227,
     530,  1002,   735,   341,   542,   418,   419,   546,   980,  1031,
    1032,   551,   228,   553,   428,   555,  1049,   558,   345,   559,
     560,  -308,  -308,  -308,   562,  1152,  1153,   350,   479,   351,
     564,   233,   775,   776,   777,   567,   480,   481,   310,   234,
     571,   479,   573,  -308,  -308,   575,   413,   414,    60,   480,
     481,  1232,   407,    60,    60,   587,   422,  1236,   225,  -420,
     482,   226,   227,    60,   960,   778,  1244,   362,   483,   484,
     963,   964,  1171,   600,   601,   228,   602,   779,   780,   781,
     782,   783,   784,   363,  1172,   229,  1173,    45,    46,    47,
    1085,  1086,   231,   603,   900,   901,  1087,  1088,  1112,  1113,
    1160,  1161,  1114,   874,   875,  1115,   364,   604,   902,   876,
     877,   365,   232,   785,   605,  1164,  1165,  1186,   366,   903,
     786,   666,   667,   485,   486,   487,   673,   674,  1116,  1187,
     425,  1188,  1174,   878,   306,   307,   485,   486,   487,  1112,
    1113,   230,   367,  1132,   368,   369,  1115,   408,   409,   410,
      45,    46,    47,   371,   424,   231,  1117,   373,   488,   489,
     684,   686,   432,   374,   375,   787,   788,   376,   433,  1116,
     377,   689,   690,  1118,  1119,   232,   378,  1189,   879,   880,
     881,   441,   379,   904,   700,   380,   354,   703,   905,   381,
     382,   920,   882,   383,   924,  1159,  1050,  1117,   505,   384,
     355,   356,   357,   385,   506,   507,   508,   358,   906,   386,
     387,   946,   388,   389,  1118,  1119,   390,   941,  1045,   661,
     662,   663,   509,   510,   391,   392,   453,   393,   916,   917,
     918,   919,  1266,  1267,   724,   394,   395,  1269,   396,   397,
     398,   399,   400,  1272,  1273,  1274,   401,   402,   423,   436,
     733,   734,   458,   460,   461,   469,   940,   463,   464,   971,
     470,   471,   472,   751,  -423,   475,   521,   754,  1143,   294,
     977,   591,   979,   590,   757,   594,   758,   611,   612,   658,
     682,   683,   694,   695,   696,   697,   707,   310,   310,   708,
     714,   544,   727,   745,   753,   428,   769,   544,   544,   771,
     772,   773,  1136,   755,   808,   766,   805,   793,   806,   792,
     861,   826,  1122,   884,  1123,   815,   824,   825,   827,   828,
     885,   829,   830,   831,   887,   911,   988,   989,   807,   936,
     990,   812,   837,   937,   286,   993,   994,   838,   839,   840,
     841,   842,   843,   844,   995,   855,   996,   845,   846,   856,
     857,   858,   859,   860,  1024,   899,   950,   953,   959,  1000,
     962,   975,   984,   991,   992,  1001,   999,  1016,  1003,  1028,
    1023,  1033,  1048,  1055,  1064,  1069,  1073,  1078,  1138,  1097,
    1166,  1168,  1010,  1011,  1196,  1197,  1214,  1204,  1208,  1260,
    1253,  1288,  1263,  1295,  1296,  1298,  1302,  1110,  1224,  1308,
    1109,  1220,  1044,  1056,   967,  1144,  1209,   868,  1259,  1304,
     869,  1309,   263,   870,   583,  1143,   716,  1124,  1034,   797,
     675,   863,  1205,   676,   864,    70,   890,   677,   332,   500,
     968,   726,  1036,   121,   122,   340,  1246,   273,   429,   761,
    1195,  1025,  1270,  1022,  1268,   544,  1221,  1222,  1226,  1275,
     898,   762,  1027,   949,   927,  1074,   123,  1148,   930,   931,
     760,   933,   709,   935,  1043,   526,   938,  1262,  1239,  1054,
     942,   943,   944,  1095,  1201,   983,     0,     0,   947,     0,
     610,     0,     0,     0,     0,     0,     0,     0,     0,   951,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1305,  1306,     0,     0,     0,     0,     0,     0,
       0,   966,     0,     0,   587,  1134,   969,   970,     0,     0,
     973,   315,     0,     0,     0,     0,     0,     0,  1106,     0,
     325,     0,   986,   987,  1111,     0,  1279,  1282,     0,   544,
       0,   544,     0,     0,     0,     0,   336,     0,     0,     0,
       0,     0,     0,     0,   347,     0,   349,     0,     0,     0,
       0,     0,     0,     0,  1290,  1291,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1155,     0,  1156,     0,  1012,     0,  1157,     0,  1158,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   406,
       0,     0,     0,     0,  1169,     0,     0,     0,     0,     0,
       0,  1211,     0,     0,     0,     0,     0,     0,     0,  1095,
       0,     0,     0,     0,     0,     0,   439,     0,     0,     0,
       0,     0,     0,     0,  1037,     0,   447,  1041,  1042,   544,
       0,   530,     0,     0,     0,     0,     0,     0,  1046,  1047,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     467,     0,     0,   544,   544,     0,   773,  1225,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   544,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1072,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1092,     0,     0,  1096,
       0,     0,     0,     0,     0,     0,     0,     0,   315,     0,
     315,  1108,     0,   568,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   576,     0,     0,     0,  1127,  1299,     0,
       0,   336,     0,   544,   544,     0,     0,     0,     0,     0,
       0,     0,  1135,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1127,
    1127,   544,   544,     0,   614,     0,     0,     0,     0,     0,
       0,     0,   620,   621,   622,   623,   624,     0,   628,   630,
       0,     0,     0,     0,     0,     0,   642,   643,     0,     0,
       0,     0,     0,     0,     0,     0,   652,   653,   654,   655,
     656,   657,     0,     0,     0,     0,     0,     0,     0,  1037,
    1037,  1037,     0,     0,     0,     0,     0,  1198,  1199,     0,
       0,     0,     0,     0,     0,   812,     0,     0,  1203,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1212,  1213,     0,     0,     0,     0,
     691,   308,  1219,     0,     0,     0,  1223,  -366,  -366,     0,
       0,     0,  1228,     0,  -366,     0,     0,  1037,     0,  1234,
       0,     0,  1037,     0,  1238,  -366,  -366,  1240,     0,  -366,
    -366,     0,  1037,  -366,  -366,     0,     0,  -366,     0,     0,
     439,     0,   710,     0,  1249,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1249,  -366,  -366,     0,
       0,  -366,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   731,     0,     0,     0,     0,     0,
       0,  1037,     0,     0,     0,     0,     0,     0,     0,  1276,
    1277,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1127,     0,     0,  -366,     0,     0,     0,
       0,     0,   710,     0,  -366,  -366,  -366,  -366,  -366,  -366,
    -366,  -366,  -366,  -366,  -366,     0,     0,  -366,     0,     0,
       0,  -366,     0,     0,  -366,  -366,     0,     0,     0,   336,
     799,     0,     0,     0,  -366,  -366,  -366,  -366,     0,     0,
       0,     0,     0,     0,  -366,     0,  -366,  -366,  -366,     0,
    -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -366,
       0,     0,     0,     0,  -366,  -366,     0,    60,  -366,     0,
     309,     0,     0,   336,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   115,     0,     0,     0,     0,     0,  -385,
    -385,     0,     0,     0,     0,     0,  -385,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -385,  -385,     0,
       0,  -385,  -385,     0,     0,  -385,  -385,     0,     0,  -385,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     889,     0,     0,     0,     0,     0,     0,     0,     0,  -385,
    -385,     0,     0,  -385,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   922,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -385,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -385,     0,
       0,     0,     0,     0,   315,     0,  -385,  -385,  -385,  -385,
    -385,  -385,  -385,  -385,  -385,  -385,  -385,     0,     0,  -385,
       0,     0,     0,  -385,     0,     0,  -385,  -385,     0,     0,
       0,     0,     0,     0,     0,     0,  -385,  -385,  -385,  -385,
       0,     0,     0,     0,   981,   982,  -385,     0,  -385,  -385,
    -385,     0,  -385,  -385,  -385,  -385,  -385,  -385,  -385,  -385,
    -385,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -385,     0,     0,     0,     0,  -385,  -385,     0,  -385,
     116,     0,     0,   275,   997,   998,     0,     0,     0,  -427,
    -427,     0,     0,     0,     0,     0,  -427,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -427,  -427,     0,
       0,  -427,  -427,     0,     0,  -427,  -427,     0,     0,  -427,
       0,     0,     0,     0,     0,  -427,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   710,  -427,
    -427,     0,     0,  -427,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1052,  -427,     0,
       0,     0,  1053,     0,     0,     0,  -427,  -427,  -427,  -427,
    -427,  -427,  -427,  -427,  -427,  -427,  -427,     0,     0,  -427,
       0,     0,     0,  -427,     0,  -427,  -427,  -427,     0,     0,
       0,     0,     0,     0,     0,     0,  -427,  -427,  -427,  -427,
       0,     0,     0,     0,     0,     0,  -427,     0,  -427,  -427,
    -427,     0,  -427,  -427,  -427,  -427,  -427,  -427,  -427,  -427,
    -427,   215,     0,     0,  1105,     0,     0,  -311,  -311,     0,
       0,  -427,     0,     0,  -311,     0,  -427,  -427,     0,     0,
    -427,     0,     0,     0,     0,  -311,  -311,     0,     0,  -311,
    -311,     0,     0,  -311,  -311,     0,     0,  -311,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1145,  1146,     0,     0,     0,  -311,  -311,     0,
       0,  -311,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -311,     0,     0,     0,
       0,     0,     0,     0,  -311,  -311,  -311,  -311,  -311,  -311,
    -311,  -311,  -311,  -311,  -311,     0,     0,  -311,     0,     0,
       0,  -311,     0,     0,  -311,  -311,     0,     0,     0,     0,
       0,     0,     0,     0,  -311,  -311,  -311,  -311,     0,     0,
       0,     0,     0,     0,  -311,     0,  -311,  -311,  -311,     0,
    -311,  -311,  -311,  -311,  -311,  -311,  -311,  -311,  -311,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -311,
       0,     0,     0,  1182,  -311,  -311,     0,    60,  -311,  -522,
    -522,     0,     0,  1251,     0,     0,  -522,     0,     0,  1183,
       0,     0,     0,     0,     0,     0,     0,  -522,  -522,     0,
       0,  -522,  -522,     0,     0,  -522,  -522,     0,     0,  -522,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -522,
    -522,     0,     0,  -522,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   124,     0,
       0,     0,     0,     0,  -676,  -676,     0,     0,     0,     0,
       0,  -676,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -676,  -676,     0,     0,  -676,  -676,  -522,     0,
    -676,  -676,   336,   336,  -676,     0,  -522,  -522,  -522,  -522,
    -522,  -522,  -522,  -522,  -522,  -522,  -522,     0,     0,  -522,
       0,     0,     0,  -522,  -676,  -676,  -522,  -522,  -676,     0,
       0,     0,     0,     0,     0,     0,  -522,  -522,  -522,  -522,
       0,     0,     0,     0,     0,     0,  -522,     0,  -522,  -522,
    -522,     0,  -522,  -522,  -522,  -522,  -522,  -522,  -522,  -522,
    -522,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -522,     0,  -676,     0,     0,  -522,  -522,     0,     0,
    -522,  -676,  -676,  -676,  -676,  -676,  -676,  -676,  -676,  -676,
    -676,  -676,     0,     0,  -676,     0,     0,     0,  -676,     0,
       0,  -676,  -676,     0,     0,     0,     0,     0,     0,     0,
       0,  -676,  -676,  -676,  -676,     0,     0,     0,     0,     0,
       0,  -676,     0,  -676,  -676,  -676,     0,  -676,  -676,  -676,
    -676,  -676,  -676,  -676,  -676,  -676,   126,     0,     0,     0,
       0,     0,  -671,  -671,     0,     0,  -676,     0,     0,  -671,
       0,  -676,  -676,     0,     0,  -676,     0,     0,     0,     0,
    -671,  -671,     0,     0,  -671,  -671,     0,     0,  -671,  -671,
       0,     0,  -671,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -671,  -671,     0,     0,  -671,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   130,     0,     0,     0,     0,     0,   131,   132,     0,
       0,     0,     0,     0,   133,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   134,   135,     0,     0,   136,
     137,  -671,     0,   138,   139,     0,     0,   140,     0,  -671,
    -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,
       0,     0,  -671,     0,     0,     0,  -671,   141,   142,  -671,
    -671,   143,     0,     0,     0,     0,     0,     0,     0,  -671,
    -671,  -671,  -671,     0,     0,     0,     0,     0,     0,  -671,
       0,  -671,  -671,  -671,     0,  -671,  -671,  -671,  -671,  -671,
    -671,  -671,  -671,  -671,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -671,     0,   144,     0,     0,  -671,
    -671,     0,     0,  -671,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,     0,     0,   156,     0,     0,
       0,   157,     0,     0,   158,   159,     0,     0,     0,     0,
       0,     0,     0,     0,   160,   161,   162,   163,     0,     0,
       0,     0,     0,     0,   164,     0,   165,   166,   167,     0,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   208,
       0,     0,     0,     0,     0,   131,   132,     0,     0,   177,
       0,     0,   133,     0,   178,   179,     0,     0,   180,     0,
       0,     0,     0,   134,   135,     0,     0,   136,   137,     0,
       0,   138,   139,     0,     0,   140,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   141,   142,     0,     0,   143,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   240,     0,     0,     0,     0,     0,
    -315,  -315,     0,     0,     0,     0,     0,  -315,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -315,  -315,
       0,     0,  -315,  -315,   144,     0,  -315,  -315,     0,     0,
    -315,     0,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,     0,     0,   156,     0,     0,     0,   157,
    -315,  -315,   158,   159,  -315,     0,     0,     0,     0,     0,
       0,     0,   160,   161,   162,   163,     0,     0,     0,     0,
       0,     0,   164,     0,   165,   166,   167,     0,   168,   169,
     170,   171,   172,   173,   174,   175,   176,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   177,     0,  -315,
       0,     0,   178,   179,     0,     0,   180,  -315,  -315,  -315,
    -315,  -315,  -315,  -315,  -315,  -315,  -315,  -315,     0,     0,
    -315,     0,     0,     0,  -315,     0,     0,  -315,  -315,     0,
       0,     0,     0,     0,     0,     0,     0,  -315,  -315,  -315,
    -315,     0,     0,     0,     0,     0,     0,  -315,     0,  -315,
    -315,  -315,     0,  -315,  -315,  -315,  -315,  -315,  -315,  -315,
    -315,  -315,   313,     0,     0,     0,     0,     0,   131,   132,
       0,     0,  -315,     0,     0,   133,     0,  -315,  -315,     0,
       0,  -315,     0,     0,     0,     0,   134,   135,     0,     0,
     136,   137,     0,     0,   138,   139,     0,     0,   140,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   141,   142,
       0,     0,   143,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   323,     0,     0,
       0,     0,     0,  -663,  -663,     0,     0,     0,     0,     0,
    -663,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -663,  -663,     0,     0,  -663,  -663,   144,     0,  -663,
    -663,     0,     0,  -663,     0,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,     0,     0,   156,     0,
       0,     0,   157,  -663,  -663,   158,   159,  -663,     0,     0,
       0,     0,     0,     0,     0,   160,   161,   162,   163,     0,
       0,     0,     0,     0,     0,   164,     0,   165,   166,   167,
       0,   168,   169,   170,   171,   172,   173,   174,   175,   176,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     177,     0,  -663,     0,     0,   178,   179,     0,     0,   180,
    -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,
    -663,     0,     0,  -663,     0,     0,     0,  -663,     0,     0,
    -663,  -663,     0,     0,     0,     0,     0,     0,     0,     0,
    -663,  -663,  -663,  -663,     0,     0,     0,     0,     0,     0,
    -663,     0,  -663,  -663,  -663,     0,  -663,  -663,  -663,  -663,
    -663,  -663,  -663,  -663,  -663,   438,     0,     0,     0,     0,
       0,   131,   132,     0,     0,  -663,     0,     0,   133,     0,
    -663,  -663,     0,     0,  -663,     0,     0,     0,     0,   134,
     135,     0,     0,   136,   137,     0,     0,   138,   139,     0,
       0,   140,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   141,   142,     0,     0,   143,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     607,     0,     0,     0,     0,     0,   131,   132,     0,     0,
       0,     0,     0,   133,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   134,   135,     0,     0,   136,   137,
     144,     0,   138,   139,     0,     0,   140,     0,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,     0,
       0,   156,     0,     0,     0,   157,   141,   142,   158,   159,
     143,     0,     0,     0,     0,     0,     0,     0,   160,   161,
     162,   163,     0,     0,     0,     0,     0,     0,   164,     0,
     165,   166,   167,     0,   168,   169,   170,   171,   172,   173,
     174,   175,   176,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   177,     0,   144,     0,     0,   178,   179,
       0,     0,   180,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,     0,     0,   156,     0,     0,     0,
     157,     0,     0,   158,   159,     0,     0,     0,     0,     0,
       0,     0,     0,   160,   161,   162,   163,     0,     0,     0,
       0,     0,     0,   164,     0,   165,   166,   167,     0,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   798,     0,
       0,     0,     0,     0,   131,   132,     0,     0,   177,     0,
       0,   133,     0,   178,   179,     0,     0,   180,     0,     0,
       0,     0,   134,   135,     0,     0,   136,   137,     0,     0,
     138,   139,     0,     0,   140,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   141,   142,     0,     0,   143,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   939,     0,     0,     0,     0,     0,   131,
     132,     0,     0,     0,     0,     0,   133,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   134,   135,     0,
       0,   136,   137,   144,     0,   138,   139,     0,     0,   140,
       0,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,     0,     0,   156,     0,     0,     0,   157,   141,
     142,   158,   159,   143,     0,     0,     0,     0,     0,     0,
       0,   160,   161,   162,   163,     0,     0,     0,     0,     0,
       0,   164,     0,   165,   166,   167,     0,   168,   169,   170,
     171,   172,   173,   174,   175,   176,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   177,     0,   144,     0,
       0,   178,   179,     0,     0,   180,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,     0,     0,   156,
       0,     0,     0,   157,     0,     0,   158,   159,     0,     0,
       0,     0,     0,     0,     0,     0,   160,   161,   162,   163,
       0,     0,     0,     0,     0,     0,   164,     0,   165,   166,
     167,     0,   168,   169,   170,   171,   172,   173,   174,   175,
     176,     0,     0,     0,     5,     0,     0,     0,     0,   533,
       0,   177,     7,     8,     0,     0,   178,   179,     0,     0,
     180,    11,    12,  -461,    13,    14,     0,     0,     0,     0,
      15,    16,     0,     0,     0,    17,     0,     0,   534,   535,
       0,    19,    20,    21,    22,   536,  -634,    24,    25,     0,
      26,     0,     0,     0,     0,     0,     0,     0,    27,     0,
      28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    29,     0,  -461,     0,     0,     0,  -461,    30,
      31,    32,    33,     0,     0,     0,     0,     0,     0,     0,
      34,    35,    36,    37,     0,     0,     0,    38,     0,     0,
      39,     0,     0,    41,     0,     0,   537,     0,    43,    44,
      45,    46,    47,    48,    49,    50,    51,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    52,
       0,     0,    53,    54,     0,    55,    56,     5,     0,     0,
       0,     0,   533,     0,    57,     7,     8,     0,    58,     0,
       0,    59,     0,     0,    11,    12,  -460,    13,    14,     0,
       0,     0,     0,    15,    16,     0,     0,     0,    17,     0,
       0,   534,   535,     0,    19,    20,    21,    22,   536,  -634,
      24,    25,     0,    26,     0,     0,     0,     0,     0,     0,
      60,    27,     0,    28,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    29,     0,  -460,     0,     0,
       0,  -460,    30,    31,    32,    33,     0,     0,     0,     0,
       0,     0,     0,    34,    35,    36,    37,     0,     0,     0,
      38,     0,     0,    39,     0,     0,    41,     0,     0,   537,
       0,    43,    44,    45,    46,    47,    48,    49,    50,    51,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    52,     0,     0,    53,    54,     0,    55,    56,
       0,     0,     0,     0,     0,     0,     0,    57,     5,     0,
       0,    58,     0,     6,    59,     0,     7,     8,     9,     0,
       0,     0,    10,     0,     0,    11,    12,     0,    13,    14,
       0,     0,     0,     0,    15,    16,     0,     0,     0,    17,
       0,     0,    18,     0,     0,    19,    20,    21,    22,    23,
    -634,    24,    25,    60,    26,     0,     0,     0,     0,     0,
       0,     0,    27,     0,    28,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    29,     0,     0,     0,
       0,     0,     0,    30,    31,    32,    33,     0,     0,     0,
       0,     0,     0,     0,    34,    35,    36,    37,     0,     0,
       0,    38,     0,     0,    39,    40,     0,    41,     0,     0,
      42,     0,    43,    44,    45,    46,    47,    48,    49,    50,
      51,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    52,     0,     0,    53,    54,     0,    55,
      56,     5,     0,     0,     0,     0,   533,     0,    57,     7,
       8,     0,    58,     0,     0,    59,     0,     0,    11,    12,
     541,    13,    14,     0,     0,     0,     0,    15,    16,     0,
       0,     0,    17,     0,     0,   534,   535,     0,    19,    20,
      21,    22,   536,  -634,    24,    25,     0,    26,     0,     0,
       0,     0,     0,     0,    60,    27,     0,    28,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    29,
       0,     0,     0,     0,     0,     0,    30,    31,    32,    33,
       0,     0,     0,     0,     0,     0,     0,    34,    35,    36,
      37,     0,     0,     0,    38,     0,     0,    39,     0,     0,
      41,     0,     0,   537,     0,    43,    44,    45,    46,    47,
      48,    49,    50,    51,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    52,     0,     0,    53,
      54,     0,    55,    56,     5,     0,     0,     0,     0,   533,
       0,    57,     7,     8,     0,    58,     0,     0,    59,     0,
       0,    11,    12,   713,    13,    14,     0,     0,     0,     0,
      15,    16,     0,     0,     0,    17,     0,     0,   534,   535,
       0,    19,    20,    21,    22,   536,  -634,    24,    25,     0,
      26,     0,     0,     0,     0,     0,     0,    60,    27,     0,
      28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    29,     0,     0,     0,     0,     0,     0,    30,
      31,    32,    33,     0,     0,     0,     0,     0,     0,     0,
      34,    35,    36,    37,     0,     0,     0,    38,     0,     0,
      39,     0,     0,    41,     0,     0,   537,     0,    43,    44,
      45,    46,    47,    48,    49,    50,    51,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    52,
       0,     0,    53,    54,     0,    55,    56,     5,     0,     0,
       0,     0,   533,     0,    57,     7,     8,     0,    58,     0,
       0,    59,     0,     0,    11,    12,   732,    13,    14,     0,
       0,     0,     0,    15,    16,     0,     0,     0,    17,     0,
       0,   534,   535,     0,    19,    20,    21,    22,   536,  -634,
      24,    25,     0,    26,     0,     0,     0,     0,     0,     0,
      60,    27,     0,    28,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    29,     0,     0,     0,     0,
       0,     0,    30,    31,    32,    33,     0,     0,     0,     0,
       0,     0,     0,    34,    35,    36,    37,     0,     0,     0,
      38,     0,     0,    39,     0,     0,    41,     0,     0,   537,
       0,    43,    44,    45,    46,    47,    48,    49,    50,    51,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    52,     0,     0,    53,    54,     0,    55,    56,
       5,     0,     0,     0,     0,   533,     0,    57,     7,     8,
       0,    58,     0,     0,    59,     0,     0,    11,    12,   929,
      13,    14,     0,     0,     0,     0,    15,    16,     0,     0,
       0,    17,     0,     0,   534,   535,     0,    19,    20,    21,
      22,   536,  -634,    24,    25,     0,    26,     0,     0,     0,
       0,     0,     0,    60,    27,     0,    28,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    29,     0,
       0,     0,     0,     0,     0,    30,    31,    32,    33,     0,
       0,     0,     0,     0,     0,     0,    34,    35,    36,    37,
       0,     0,     0,    38,     0,     0,    39,     0,     0,    41,
       0,     0,   537,     0,    43,    44,    45,    46,    47,    48,
      49,    50,    51,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    52,     0,     0,    53,    54,
       0,    55,    56,     5,     0,     0,     0,     0,   533,     0,
      57,     7,     8,     0,    58,     0,     0,    59,     0,     0,
      11,    12,  1035,    13,    14,     0,     0,     0,     0,    15,
      16,     0,     0,     0,    17,     0,     0,   534,   535,     0,
      19,    20,    21,    22,   536,  -634,    24,    25,     0,    26,
       0,     0,     0,     0,     0,     0,    60,    27,     0,    28,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    29,     0,     0,     0,     0,     0,     0,    30,    31,
      32,    33,     0,     0,     0,     0,     0,     0,     0,    34,
      35,    36,    37,     0,     0,     0,    38,     0,     0,    39,
       0,     0,    41,     0,     0,   537,     0,    43,    44,    45,
      46,    47,    48,    49,    50,    51,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    52,     0,
       0,    53,    54,     0,    55,    56,     5,     0,     0,     0,
       0,   533,     0,    57,     7,     8,     0,    58,     0,     0,
      59,     0,     0,    11,    12,  1067,    13,    14,     0,     0,
       0,     0,    15,    16,     0,     0,     0,    17,     0,     0,
     534,   535,     0,    19,    20,    21,    22,   536,  -634,    24,
      25,     0,    26,     0,     0,     0,     0,     0,     0,    60,
      27,     0,    28,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    29,     0,     0,     0,     0,     0,
       0,    30,    31,    32,    33,     0,     0,     0,     0,     0,
       0,     0,    34,    35,    36,    37,     0,     0,     0,    38,
       0,     0,    39,     0,     0,    41,     0,     0,   537,     0,
      43,    44,    45,    46,    47,    48,    49,    50,    51,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    52,     0,     0,    53,    54,     0,    55,    56,     5,
       0,     0,     0,     0,   533,     0,    57,     7,     8,     0,
      58,     0,     0,    59,     0,     0,    11,    12,  1068,    13,
      14,     0,     0,     0,     0,    15,    16,     0,     0,     0,
      17,     0,     0,   534,   535,     0,    19,    20,    21,    22,
     536,  -634,    24,    25,     0,    26,     0,     0,     0,     0,
       0,     0,    60,    27,     0,    28,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    29,     0,     0,
       0,     0,     0,     0,    30,    31,    32,    33,     0,     0,
       0,     0,     0,     0,     0,    34,    35,    36,    37,     0,
       0,     0,    38,     0,     0,    39,     0,     0,    41,     0,
       0,   537,     0,    43,    44,    45,    46,    47,    48,    49,
      50,    51,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    52,     0,     0,    53,    54,     0,
      55,    56,     5,     0,     0,     0,     0,   533,     0,    57,
       7,     8,     0,    58,     0,     0,    59,     0,     0,    11,
      12,  1133,    13,    14,     0,     0,     0,     0,    15,    16,
       0,     0,     0,    17,     0,     0,   534,   535,     0,    19,
      20,    21,    22,   536,  -634,    24,    25,     0,    26,     0,
       0,     0,     0,     0,     0,    60,    27,     0,    28,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      29,     0,     0,     0,     0,     0,     0,    30,    31,    32,
      33,     0,     0,     0,     0,     0,     0,     0,    34,    35,
      36,    37,     0,     0,     0,    38,     0,     0,    39,     0,
       0,    41,     0,     0,   537,     0,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    52,     0,     0,
      53,    54,     0,    55,    56,     5,     0,     0,     0,     0,
     533,     0,    57,     7,     8,     0,    58,     0,     0,    59,
       0,     0,    11,    12,  -692,    13,    14,     0,     0,     0,
       0,    15,    16,     0,     0,     0,    17,     0,     0,   534,
     535,     0,    19,    20,    21,    22,   536,  -634,    24,    25,
       0,    26,     0,     0,     0,     0,     0,     0,    60,    27,
       0,    28,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    29,     0,     0,     0,     0,     0,     0,
      30,    31,    32,    33,     0,     0,     0,     0,     0,     0,
       0,    34,    35,    36,    37,     0,     0,     0,    38,     0,
       0,    39,     0,     0,    41,     0,     0,   537,     0,    43,
      44,    45,    46,    47,    48,    49,    50,    51,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      52,     0,     0,    53,    54,     0,    55,    56,     5,     0,
       0,     0,     0,   533,     0,    57,     7,     8,     0,    58,
       0,     0,    59,     0,     0,    11,    12,  1202,    13,    14,
       0,     0,     0,     0,    15,    16,     0,     0,     0,    17,
       0,     0,   534,   535,     0,    19,    20,    21,    22,   536,
    -634,    24,    25,     0,    26,     0,     0,     0,     0,     0,
       0,    60,    27,     0,    28,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    29,     0,     0,     0,
       0,     0,     0,    30,    31,    32,    33,     0,     0,     0,
       0,     0,     0,     0,    34,    35,    36,    37,     0,     0,
       0,    38,     0,     0,    39,     0,     0,    41,     0,     0,
     537,     0,    43,    44,    45,    46,    47,    48,    49,    50,
      51,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    52,     0,     0,    53,    54,     0,    55,
      56,     5,     0,     0,     0,     0,   533,     0,    57,     7,
       8,     0,    58,     0,     0,    59,     0,     0,    11,    12,
    1261,    13,    14,     0,     0,     0,     0,    15,    16,     0,
       0,     0,    17,     0,     0,   534,   535,     0,    19,    20,
      21,    22,   536,  -634,    24,    25,     0,    26,     0,     0,
       0,     0,     0,     0,    60,    27,     0,    28,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    29,
       0,     0,     0,     0,     0,     0,    30,    31,    32,    33,
       0,     0,     0,     0,     0,     0,     0,    34,    35,    36,
      37,     0,     0,     0,    38,     0,     0,    39,     0,     0,
      41,     0,     0,   537,     0,    43,    44,    45,    46,    47,
      48,    49,    50,    51,     0,     0,   131,   132,     0,     0,
       0,     0,     0,   133,     0,     0,    52,     0,     0,    53,
      54,     0,    55,    56,   134,   135,     0,     0,   136,   137,
       0,    57,   138,   139,     0,    58,   140,     0,    59,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   141,   142,     0,     0,
     143,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    60,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   144,     0,     0,     0,     0,
       0,     0,     0,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,     0,     0,   156,     0,     0,     0,
     157,     0,     0,   158,   159,     0,     0,     0,     0,     0,
       0,     0,     0,   160,   161,   162,   163,     0,     0,     0,
       0,     0,     0,   164,     0,   165,   166,   167,     0,   168,
     169,   170,   171,   172,   173,   174,   175,   176,     0,     0,
       0,     0,   131,   132,     0,     0,     0,     0,   177,   133,
       0,     0,     0,   178,   179,     0,     0,   180,   629,     0,
     134,   135,     0,     0,   136,   137,     0,     0,   138,   139,
       0,     0,   140,     0,     0,     0,     0,     0,   522,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   141,   142,     0,     0,   143,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   144,     0,     0,     0,     0,     0,     0,     0,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
       0,     0,   156,     0,     0,     0,   157,     0,   523,   158,
     159,     0,     0,     0,     0,     0,     0,     0,     0,   160,
     161,   162,   163,     0,     0,     0,     0,     0,     0,   164,
       0,   165,   166,   167,     0,   168,   169,   170,   171,   172,
     173,   174,   175,   176,     0,     0,   131,   132,     0,     0,
       0,     0,     0,   133,   177,     0,     0,     0,     0,   178,
     179,     0,     0,   180,   134,   135,     0,     0,   136,   137,
       0,     0,   138,   139,     0,     0,   140,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   141,   142,     0,     0,
     143,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1280,
       0,   131,   132,     0,  1281,     0,     0,     0,   133,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   134,
     135,     0,     0,   136,   137,   144,     0,   138,   139,     0,
       0,   140,     0,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,     0,     0,   156,     0,     0,     0,
     157,   141,   142,   158,   159,   143,     0,     0,     0,     0,
       0,     0,   428,   160,   161,   162,   163,     0,     0,     0,
       0,     0,     0,   164,     0,   165,   166,   167,     0,   168,
     169,   170,   171,   172,   173,   174,   175,   176,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   177,     0,
     144,     0,     0,   178,   179,     0,     0,   180,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,     0,
       0,   156,     0,     0,     0,   157,     0,     0,   158,   159,
       0,     0,     0,     0,     0,     0,     0,     0,   160,   161,
     162,   163,     0,     0,     0,     0,     0,     0,   164,     0,
     165,   166,   167,     0,   168,   169,   170,   171,   172,   173,
     174,   175,   176,     0,     0,   131,   132,     0,     0,     0,
       0,     0,   133,   177,     0,     0,     0,     0,   178,   179,
       0,     0,   180,   134,   135,     0,     0,   136,   137,     0,
       0,   138,   139,     0,     0,   140,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   141,   142,     0,     0,   143,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   144,     0,     0,     0,     0,     0,
       0,     0,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,     0,     0,   156,     0,     0,     0,   157,
       0,     0,   158,   159,   955,     0,     0,     0,     0,     0,
       0,     0,   160,   161,   162,   163,     0,     0,     0,     0,
       0,     0,   164,     0,   165,   166,   167,     0,   168,   169,
     170,   171,   172,   173,   174,   175,   176,     0,     0,   131,
     132,     0,     0,     0,     0,     0,   133,   177,     0,     0,
       0,     0,   178,   179,     0,     0,   180,   134,   135,     0,
       0,   136,   137,     0,     0,   138,   139,     0,     0,   140,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   141,
     142,     0,     0,   143,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   144,     0,
       0,     0,     0,     0,     0,     0,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,     0,     0,   156,
       0,     0,     0,   157,     0,     0,   158,   159,     0,     0,
       0,     0,     0,     0,     0,     0,   160,   161,   162,   163,
       0,     0,     0,     0,     0,     0,   164,     0,   165,   166,
     167,     0,   168,   169,   170,   171,   172,   173,   174,   175,
     176,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   177,     0,     0,     0,     0,   178,   179,     0,     0,
     180
};

static const yytype_int16 yycheck[] =
{
      19,   332,   428,    65,   327,   284,    42,    74,    82,    83,
      29,   290,    31,   292,    42,   767,   596,   343,    78,    79,
     143,   524,   597,   316,   415,   416,   417,   418,   419,   272,
       1,   274,     1,    55,     1,  1067,  1068,     1,    43,    66,
      64,   287,   321,     1,    55,     1,    21,     1,    65,     1,
       1,     1,   804,     1,   177,   178,   179,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,    21,    15,     1,    77,     1,    68,    52,    21,
      68,     6,    54,    68,     1,    36,  1117,  1118,  1119,    68,
      68,     1,    68,     1,    20,     1,    18,    19,    38,    35,
      52,    53,    36,   105,     7,   351,    36,    56,    20,    52,
      32,    68,    68,    70,    86,    55,     1,     1,     1,     1,
      55,    43,    68,   131,    36,    52,     1,   309,    36,   311,
     197,    69,   140,     1,    37,    15,     1,    55,    18,    76,
       1,     1,     1,    76,  1175,    71,     1,    86,     1,  1180,
      68,    36,   176,    68,     0,    72,    98,    57,    76,  1190,
       0,    61,    72,   132,   191,   187,    68,   187,   132,    68,
     145,   145,    68,   190,   132,   144,    52,   146,   145,   190,
      68,    68,   146,   188,   251,   107,   144,    68,   146,   145,
     112,   132,   259,   145,   145,   145,   145,     5,   189,   190,
       8,   189,   145,   145,   145,   190,   273,   132,  1239,   187,
     132,   190,   145,   189,   190,   145,   187,   277,   145,   190,
      28,   801,   189,   192,    32,    33,    34,    35,    36,  1261,
      38,    39,   299,    41,   192,   189,   190,   188,   188,   145,
     188,    43,   145,   189,   188,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   680,   187,   187,    65,     1,    68,
     145,   145,   145,   145,   283,    68,   592,   189,   287,   145,
     145,   550,   565,   566,   189,   190,   519,   145,    86,    87,
     145,    89,    90,    91,   145,   145,   145,   189,   411,   412,
     145,   190,   145,   189,   190,    68,   104,    40,    41,   188,
      21,   189,   110,   190,   112,    68,    86,   115,   189,    68,
     118,     6,    68,   644,    68,    68,   124,    59,   126,    68,
      96,    97,   341,    68,    18,    15,    49,   145,    18,    68,
      68,   133,   351,   145,    77,     1,    68,    80,    68,    68,
      83,    84,    85,     1,    43,   364,    68,   366,   367,   368,
     369,   187,   371,    15,   190,   132,    18,    65,   101,   102,
      62,    63,   381,   382,   383,    67,    87,    61,    91,   146,
      36,   390,   391,   392,   393,   394,   395,   396,    60,   155,
     189,   187,    72,   187,   190,   132,   189,    93,   196,   132,
     133,    55,   200,   896,   202,    86,    54,   205,   145,   105,
    1152,  1153,   145,   211,    62,    63,    72,   215,   179,   180,
     152,   219,    76,    77,   125,    73,   189,   128,   112,    83,
      84,    85,   190,    81,    82,  1014,   189,   235,    86,  1018,
     189,   137,   240,   189,   242,   189,   189,   101,   102,   145,
     189,   249,   461,   187,   189,   464,   190,   255,   256,   257,
     189,   189,   775,   776,   777,    43,   264,   189,   266,   189,
     189,   169,   170,   187,   132,   788,   190,   189,    18,    19,
     278,   862,   532,    65,   282,   177,   178,   285,   804,   189,
     190,   289,    32,   291,    68,   293,    70,   295,   145,   297,
     298,   149,   150,   151,   302,  1070,  1071,    20,    54,    36,
     308,   537,     3,     4,     5,   313,    62,    63,   316,   537,
     318,    54,   320,   171,   172,   323,   169,   170,   187,    62,
      63,   190,    60,   187,   187,   333,   175,   190,    15,   187,
      73,    18,    19,   187,   780,    36,   190,   188,    81,    82,
     786,   787,   132,    35,    36,    32,    38,    48,    49,    50,
      51,    52,    53,   188,   144,    42,   146,   107,   108,   109,
     189,   190,   112,    55,    18,    19,   189,   190,    16,    17,
     189,   190,    20,    16,    17,    23,   188,    69,    32,    22,
      23,   188,   132,    84,    76,   189,   190,   132,   188,    43,
      91,   413,   414,   149,   150,   151,   420,   421,    46,   144,
      65,   146,   192,    46,    89,    90,   149,   150,   151,    16,
      17,    98,   188,    20,   188,   188,    23,   181,   182,   183,
     107,   108,   109,   188,   173,   112,    74,   188,   171,   172,
     438,   439,    23,   188,   188,   136,   137,   188,    23,    46,
     188,   449,   450,    91,    92,   132,   188,   192,    91,    92,
      93,    70,   188,   107,   462,   188,    55,   465,   112,   188,
     188,   721,   105,   188,   731,  1091,   945,    74,    77,   188,
      69,    70,    71,   188,    83,    84,    85,    76,   132,   188,
     188,   755,   188,   188,    91,    92,   188,   747,   934,   408,
     409,   410,   101,   102,   188,   188,   145,   188,   717,   718,
     719,   720,  1230,  1231,   512,   188,   188,  1235,   188,   188,
     188,   188,   188,  1241,  1242,  1243,   188,   188,   174,   189,
     528,   529,    43,   190,   190,   145,   745,   190,   190,   796,
      20,    76,   145,   541,   145,   190,    20,   545,  1061,   145,
     800,    54,   802,   190,   552,    55,   554,   189,   189,   189,
     145,   145,    23,    23,    20,   145,    52,   565,   566,   145,
     188,   780,    80,    75,   189,    68,   574,   786,   787,   577,
     145,   579,  1051,   189,    20,   190,   190,   585,   190,   189,
      57,   189,  1028,   145,  1030,   190,   190,   190,   189,   189,
     145,   189,   189,   189,   145,    88,   815,   816,   606,     1,
     819,   609,   189,     1,    36,   824,   825,   189,   189,   189,
     189,   189,   189,   189,   833,   189,   835,   190,   190,   189,
     189,   189,   189,   189,   891,   190,   145,   190,    51,   848,
      21,    31,    86,   189,   145,   854,   189,    76,   192,   188,
     190,   145,    70,   145,   190,    55,   145,   189,    31,   144,
      31,   190,   871,   872,   189,   189,    20,   190,   190,    55,
     105,   190,   145,   145,    70,    57,   188,  1021,  1165,   189,
    1020,  1161,   932,   959,   790,  1062,  1144,   685,  1208,  1302,
     688,  1308,    67,   691,   329,  1208,   504,  1032,   911,   590,
     422,   678,  1138,   423,   679,     4,   704,   424,   116,   263,
     792,   512,   921,    14,    14,   120,  1200,    73,   195,   557,
    1121,   894,  1236,   886,  1232,   934,  1162,  1163,  1168,  1244,
     706,   563,   899,   765,   732,   985,    14,  1065,   736,   737,
     556,   739,   491,   741,   929,   276,   744,  1214,  1184,   954,
     748,   749,   750,  1005,  1133,   808,    -1,    -1,   756,    -1,
     352,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   767,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1303,  1304,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   789,    -1,    -1,   792,  1045,   794,   795,    -1,    -1,
     798,    92,    -1,    -1,    -1,    -1,    -1,    -1,  1017,    -1,
     101,    -1,   810,   811,  1023,    -1,  1252,  1253,    -1,  1028,
      -1,  1030,    -1,    -1,    -1,    -1,   117,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   125,    -1,   127,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1280,  1281,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1080,    -1,  1082,    -1,   873,    -1,  1086,    -1,  1088,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   180,
      -1,    -1,    -1,    -1,  1103,    -1,    -1,    -1,    -1,    -1,
      -1,  1151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1161,
      -1,    -1,    -1,    -1,    -1,    -1,   207,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   922,    -1,   217,   925,   926,  1138,
      -1,   929,    -1,    -1,    -1,    -1,    -1,    -1,   936,   937,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     241,    -1,    -1,  1162,  1163,    -1,   954,  1166,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1184,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   983,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1004,    -1,    -1,  1007,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   309,    -1,
     311,  1019,    -1,   314,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   324,    -1,    -1,    -1,  1035,  1295,    -1,
      -1,   332,    -1,  1252,  1253,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1050,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1067,
    1068,  1280,  1281,    -1,   365,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   373,   374,   375,   376,   377,    -1,   379,   380,
      -1,    -1,    -1,    -1,    -1,    -1,   387,   388,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   397,   398,   399,   400,
     401,   402,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1117,
    1118,  1119,    -1,    -1,    -1,    -1,    -1,  1125,  1126,    -1,
      -1,    -1,    -1,    -1,    -1,  1133,    -1,    -1,  1136,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1152,  1153,    -1,    -1,    -1,    -1,
     451,     1,  1160,    -1,    -1,    -1,  1164,     7,     8,    -1,
      -1,    -1,  1170,    -1,    14,    -1,    -1,  1175,    -1,  1177,
      -1,    -1,  1180,    -1,  1182,    25,    26,  1185,    -1,    29,
      30,    -1,  1190,    33,    34,    -1,    -1,    37,    -1,    -1,
     491,    -1,   493,    -1,  1202,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1214,    57,    58,    -1,
      -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   525,    -1,    -1,    -1,    -1,    -1,
      -1,  1239,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1247,
    1248,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1261,    -1,    -1,   106,    -1,    -1,    -1,
      -1,    -1,   563,    -1,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,    -1,    -1,   127,    -1,    -1,
      -1,   131,    -1,    -1,   134,   135,    -1,    -1,    -1,   590,
     591,    -1,    -1,    -1,   144,   145,   146,   147,    -1,    -1,
      -1,    -1,    -1,    -1,   154,    -1,   156,   157,   158,    -1,
     160,   161,   162,   163,   164,   165,   166,   167,   168,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   179,
      -1,    -1,    -1,    -1,   184,   185,    -1,   187,   188,    -1,
     190,    -1,    -1,   644,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,     7,
       8,    -1,    -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,
      -1,    29,    30,    -1,    -1,    33,    34,    -1,    -1,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     701,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      58,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   729,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,
      -1,    -1,    -1,    -1,   765,    -1,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,    -1,    -1,   127,
      -1,    -1,    -1,   131,    -1,    -1,   134,   135,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   144,   145,   146,   147,
      -1,    -1,    -1,    -1,   805,   806,   154,    -1,   156,   157,
     158,    -1,   160,   161,   162,   163,   164,   165,   166,   167,
     168,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   179,    -1,    -1,    -1,    -1,   184,   185,    -1,   187,
     188,    -1,    -1,     1,   845,   846,    -1,    -1,    -1,     7,
       8,    -1,    -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,
      -1,    29,    30,    -1,    -1,    33,    34,    -1,    -1,    37,
      -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   899,    57,
      58,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   948,   106,    -1,
      -1,    -1,   953,    -1,    -1,    -1,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,    -1,    -1,   127,
      -1,    -1,    -1,   131,    -1,   133,   134,   135,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   144,   145,   146,   147,
      -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,   156,   157,
     158,    -1,   160,   161,   162,   163,   164,   165,   166,   167,
     168,     1,    -1,    -1,  1015,    -1,    -1,     7,     8,    -1,
      -1,   179,    -1,    -1,    14,    -1,   184,   185,    -1,    -1,
     188,    -1,    -1,    -1,    -1,    25,    26,    -1,    -1,    29,
      30,    -1,    -1,    33,    34,    -1,    -1,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1063,  1064,    -1,    -1,    -1,    57,    58,    -1,
      -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,    -1,    -1,   127,    -1,    -1,
      -1,   131,    -1,    -1,   134,   135,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   144,   145,   146,   147,    -1,    -1,
      -1,    -1,    -1,    -1,   154,    -1,   156,   157,   158,    -1,
     160,   161,   162,   163,   164,   165,   166,   167,   168,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   179,
      -1,    -1,    -1,     1,   184,   185,    -1,   187,   188,     7,
       8,    -1,    -1,  1204,    -1,    -1,    14,    -1,    -1,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,
      -1,    29,    30,    -1,    -1,    33,    34,    -1,    -1,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      58,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
      -1,    -1,    -1,    -1,     7,     8,    -1,    -1,    -1,    -1,
      -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    26,    -1,    -1,    29,    30,   106,    -1,
      33,    34,  1303,  1304,    37,    -1,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,    -1,    -1,   127,
      -1,    -1,    -1,   131,    57,    58,   134,   135,    61,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   144,   145,   146,   147,
      -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,   156,   157,
     158,    -1,   160,   161,   162,   163,   164,   165,   166,   167,
     168,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   179,    -1,   106,    -1,    -1,   184,   185,    -1,    -1,
     188,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,    -1,    -1,   127,    -1,    -1,    -1,   131,    -1,
      -1,   134,   135,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   144,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,
      -1,   154,    -1,   156,   157,   158,    -1,   160,   161,   162,
     163,   164,   165,   166,   167,   168,     1,    -1,    -1,    -1,
      -1,    -1,     7,     8,    -1,    -1,   179,    -1,    -1,    14,
      -1,   184,   185,    -1,    -1,   188,    -1,    -1,    -1,    -1,
      25,    26,    -1,    -1,    29,    30,    -1,    -1,    33,    34,
      -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    58,    -1,    -1,    61,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,    -1,    -1,    -1,    -1,     7,     8,    -1,
      -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    -1,    29,
      30,   106,    -1,    33,    34,    -1,    -1,    37,    -1,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
      -1,    -1,   127,    -1,    -1,    -1,   131,    57,    58,   134,
     135,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,
     145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,   154,
      -1,   156,   157,   158,    -1,   160,   161,   162,   163,   164,
     165,   166,   167,   168,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   179,    -1,   106,    -1,    -1,   184,
     185,    -1,    -1,   188,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,    -1,    -1,   127,    -1,    -1,
      -1,   131,    -1,    -1,   134,   135,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   144,   145,   146,   147,    -1,    -1,
      -1,    -1,    -1,    -1,   154,    -1,   156,   157,   158,    -1,
     160,   161,   162,   163,   164,   165,   166,   167,   168,     1,
      -1,    -1,    -1,    -1,    -1,     7,     8,    -1,    -1,   179,
      -1,    -1,    14,    -1,   184,   185,    -1,    -1,   188,    -1,
      -1,    -1,    -1,    25,    26,    -1,    -1,    29,    30,    -1,
      -1,    33,    34,    -1,    -1,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    58,    -1,    -1,    61,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,
       7,     8,    -1,    -1,    -1,    -1,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,
      -1,    -1,    29,    30,   106,    -1,    33,    34,    -1,    -1,
      37,    -1,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,    -1,    -1,   127,    -1,    -1,    -1,   131,
      57,    58,   134,   135,    61,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   144,   145,   146,   147,    -1,    -1,    -1,    -1,
      -1,    -1,   154,    -1,   156,   157,   158,    -1,   160,   161,
     162,   163,   164,   165,   166,   167,   168,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   179,    -1,   106,
      -1,    -1,   184,   185,    -1,    -1,   188,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,    -1,    -1,
     127,    -1,    -1,    -1,   131,    -1,    -1,   134,   135,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,   145,   146,
     147,    -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,   156,
     157,   158,    -1,   160,   161,   162,   163,   164,   165,   166,
     167,   168,     1,    -1,    -1,    -1,    -1,    -1,     7,     8,
      -1,    -1,   179,    -1,    -1,    14,    -1,   184,   185,    -1,
      -1,   188,    -1,    -1,    -1,    -1,    25,    26,    -1,    -1,
      29,    30,    -1,    -1,    33,    34,    -1,    -1,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,
      -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,
      -1,    -1,    -1,     7,     8,    -1,    -1,    -1,    -1,    -1,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    26,    -1,    -1,    29,    30,   106,    -1,    33,
      34,    -1,    -1,    37,    -1,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,    -1,    -1,   127,    -1,
      -1,    -1,   131,    57,    58,   134,   135,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   144,   145,   146,   147,    -1,
      -1,    -1,    -1,    -1,    -1,   154,    -1,   156,   157,   158,
      -1,   160,   161,   162,   163,   164,   165,   166,   167,   168,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     179,    -1,   106,    -1,    -1,   184,   185,    -1,    -1,   188,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,    -1,    -1,   127,    -1,    -1,    -1,   131,    -1,    -1,
     134,   135,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     144,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,
     154,    -1,   156,   157,   158,    -1,   160,   161,   162,   163,
     164,   165,   166,   167,   168,     1,    -1,    -1,    -1,    -1,
      -1,     7,     8,    -1,    -1,   179,    -1,    -1,    14,    -1,
     184,   185,    -1,    -1,   188,    -1,    -1,    -1,    -1,    25,
      26,    -1,    -1,    29,    30,    -1,    -1,    33,    34,    -1,
      -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    58,    -1,    -1,    61,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,    -1,    -1,    -1,    -1,     7,     8,    -1,    -1,
      -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    -1,    29,    30,
     106,    -1,    33,    34,    -1,    -1,    37,    -1,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,    -1,
      -1,   127,    -1,    -1,    -1,   131,    57,    58,   134,   135,
      61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,   145,
     146,   147,    -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,
     156,   157,   158,    -1,   160,   161,   162,   163,   164,   165,
     166,   167,   168,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   179,    -1,   106,    -1,    -1,   184,   185,
      -1,    -1,   188,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,    -1,    -1,   127,    -1,    -1,    -1,
     131,    -1,    -1,   134,   135,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   144,   145,   146,   147,    -1,    -1,    -1,
      -1,    -1,    -1,   154,    -1,   156,   157,   158,    -1,   160,
     161,   162,   163,   164,   165,   166,   167,   168,     1,    -1,
      -1,    -1,    -1,    -1,     7,     8,    -1,    -1,   179,    -1,
      -1,    14,    -1,   184,   185,    -1,    -1,   188,    -1,    -1,
      -1,    -1,    25,    26,    -1,    -1,    29,    30,    -1,    -1,
      33,    34,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    58,    -1,    -1,    61,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,     7,
       8,    -1,    -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,
      -1,    29,    30,   106,    -1,    33,    34,    -1,    -1,    37,
      -1,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,    -1,    -1,   127,    -1,    -1,    -1,   131,    57,
      58,   134,   135,    61,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   144,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,
      -1,   154,    -1,   156,   157,   158,    -1,   160,   161,   162,
     163,   164,   165,   166,   167,   168,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   179,    -1,   106,    -1,
      -1,   184,   185,    -1,    -1,   188,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,    -1,    -1,   127,
      -1,    -1,    -1,   131,    -1,    -1,   134,   135,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   144,   145,   146,   147,
      -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,   156,   157,
     158,    -1,   160,   161,   162,   163,   164,   165,   166,   167,
     168,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,     6,
      -1,   179,     9,    10,    -1,    -1,   184,   185,    -1,    -1,
     188,    18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,
      27,    28,    -1,    -1,    -1,    32,    -1,    -1,    35,    36,
      -1,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    71,    -1,    -1,    -1,    75,    76,
      77,    78,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    88,    89,    90,    -1,    -1,    -1,    94,    -1,    -1,
      97,    -1,    -1,   100,    -1,    -1,   103,    -1,   105,   106,
     107,   108,   109,   110,   111,   112,   113,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   126,
      -1,    -1,   129,   130,    -1,   132,   133,     1,    -1,    -1,
      -1,    -1,     6,    -1,   141,     9,    10,    -1,   145,    -1,
      -1,   148,    -1,    -1,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    35,    36,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,
     187,    55,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    -1,
      -1,    75,    76,    77,    78,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    88,    89,    90,    -1,    -1,    -1,
      94,    -1,    -1,    97,    -1,    -1,   100,    -1,    -1,   103,
      -1,   105,   106,   107,   108,   109,   110,   111,   112,   113,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   126,    -1,    -1,   129,   130,    -1,   132,   133,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,     1,    -1,
      -1,   145,    -1,     6,   148,    -1,     9,    10,    11,    -1,
      -1,    -1,    15,    -1,    -1,    18,    19,    -1,    21,    22,
      -1,    -1,    -1,    -1,    27,    28,    -1,    -1,    -1,    32,
      -1,    -1,    35,    -1,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,   187,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    76,    77,    78,    79,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    87,    88,    89,    90,    -1,    -1,
      -1,    94,    -1,    -1,    97,    98,    -1,   100,    -1,    -1,
     103,    -1,   105,   106,   107,   108,   109,   110,   111,   112,
     113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   126,    -1,    -1,   129,   130,    -1,   132,
     133,     1,    -1,    -1,    -1,    -1,     6,    -1,   141,     9,
      10,    -1,   145,    -1,    -1,   148,    -1,    -1,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    27,    28,    -1,
      -1,    -1,    32,    -1,    -1,    35,    36,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    -1,    47,    -1,    -1,
      -1,    -1,    -1,    -1,   187,    55,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,
      90,    -1,    -1,    -1,    94,    -1,    -1,    97,    -1,    -1,
     100,    -1,    -1,   103,    -1,   105,   106,   107,   108,   109,
     110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   126,    -1,    -1,   129,
     130,    -1,   132,   133,     1,    -1,    -1,    -1,    -1,     6,
      -1,   141,     9,    10,    -1,   145,    -1,    -1,   148,    -1,
      -1,    18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,
      27,    28,    -1,    -1,    -1,    32,    -1,    -1,    35,    36,
      -1,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      47,    -1,    -1,    -1,    -1,    -1,    -1,   187,    55,    -1,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      77,    78,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    88,    89,    90,    -1,    -1,    -1,    94,    -1,    -1,
      97,    -1,    -1,   100,    -1,    -1,   103,    -1,   105,   106,
     107,   108,   109,   110,   111,   112,   113,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   126,
      -1,    -1,   129,   130,    -1,   132,   133,     1,    -1,    -1,
      -1,    -1,     6,    -1,   141,     9,    10,    -1,   145,    -1,
      -1,   148,    -1,    -1,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    35,    36,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,
     187,    55,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    76,    77,    78,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    88,    89,    90,    -1,    -1,    -1,
      94,    -1,    -1,    97,    -1,    -1,   100,    -1,    -1,   103,
      -1,   105,   106,   107,   108,   109,   110,   111,   112,   113,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   126,    -1,    -1,   129,   130,    -1,   132,   133,
       1,    -1,    -1,    -1,    -1,     6,    -1,   141,     9,    10,
      -1,   145,    -1,    -1,   148,    -1,    -1,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    27,    28,    -1,    -1,
      -1,    32,    -1,    -1,    35,    36,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    -1,    47,    -1,    -1,    -1,
      -1,    -1,    -1,   187,    55,    -1,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    77,    78,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,    90,
      -1,    -1,    -1,    94,    -1,    -1,    97,    -1,    -1,   100,
      -1,    -1,   103,    -1,   105,   106,   107,   108,   109,   110,
     111,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   126,    -1,    -1,   129,   130,
      -1,   132,   133,     1,    -1,    -1,    -1,    -1,     6,    -1,
     141,     9,    10,    -1,   145,    -1,    -1,   148,    -1,    -1,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,
      28,    -1,    -1,    -1,    32,    -1,    -1,    35,    36,    -1,
      38,    39,    40,    41,    42,    43,    44,    45,    -1,    47,
      -1,    -1,    -1,    -1,    -1,    -1,   187,    55,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,
      78,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      88,    89,    90,    -1,    -1,    -1,    94,    -1,    -1,    97,
      -1,    -1,   100,    -1,    -1,   103,    -1,   105,   106,   107,
     108,   109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   126,    -1,
      -1,   129,   130,    -1,   132,   133,     1,    -1,    -1,    -1,
      -1,     6,    -1,   141,     9,    10,    -1,   145,    -1,    -1,
     148,    -1,    -1,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    27,    28,    -1,    -1,    -1,    32,    -1,    -1,
      35,    36,    -1,    38,    39,    40,    41,    42,    43,    44,
      45,    -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,   187,
      55,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    77,    78,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    88,    89,    90,    -1,    -1,    -1,    94,
      -1,    -1,    97,    -1,    -1,   100,    -1,    -1,   103,    -1,
     105,   106,   107,   108,   109,   110,   111,   112,   113,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   126,    -1,    -1,   129,   130,    -1,   132,   133,     1,
      -1,    -1,    -1,    -1,     6,    -1,   141,     9,    10,    -1,
     145,    -1,    -1,   148,    -1,    -1,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    27,    28,    -1,    -1,    -1,
      32,    -1,    -1,    35,    36,    -1,    38,    39,    40,    41,
      42,    43,    44,    45,    -1,    47,    -1,    -1,    -1,    -1,
      -1,    -1,   187,    55,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    77,    78,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    88,    89,    90,    -1,
      -1,    -1,    94,    -1,    -1,    97,    -1,    -1,   100,    -1,
      -1,   103,    -1,   105,   106,   107,   108,   109,   110,   111,
     112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   126,    -1,    -1,   129,   130,    -1,
     132,   133,     1,    -1,    -1,    -1,    -1,     6,    -1,   141,
       9,    10,    -1,   145,    -1,    -1,   148,    -1,    -1,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,    28,
      -1,    -1,    -1,    32,    -1,    -1,    35,    36,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    -1,    47,    -1,
      -1,    -1,    -1,    -1,    -1,   187,    55,    -1,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,
      79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,
      89,    90,    -1,    -1,    -1,    94,    -1,    -1,    97,    -1,
      -1,   100,    -1,    -1,   103,    -1,   105,   106,   107,   108,
     109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   126,    -1,    -1,
     129,   130,    -1,   132,   133,     1,    -1,    -1,    -1,    -1,
       6,    -1,   141,     9,    10,    -1,   145,    -1,    -1,   148,
      -1,    -1,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    -1,    -1,    -1,    32,    -1,    -1,    35,
      36,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,   187,    55,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    77,    78,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    88,    89,    90,    -1,    -1,    -1,    94,    -1,
      -1,    97,    -1,    -1,   100,    -1,    -1,   103,    -1,   105,
     106,   107,   108,   109,   110,   111,   112,   113,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     126,    -1,    -1,   129,   130,    -1,   132,   133,     1,    -1,
      -1,    -1,    -1,     6,    -1,   141,     9,    10,    -1,   145,
      -1,    -1,   148,    -1,    -1,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    27,    28,    -1,    -1,    -1,    32,
      -1,    -1,    35,    36,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    -1,    47,    -1,    -1,    -1,    -1,    -1,
      -1,   187,    55,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    76,    77,    78,    79,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    87,    88,    89,    90,    -1,    -1,
      -1,    94,    -1,    -1,    97,    -1,    -1,   100,    -1,    -1,
     103,    -1,   105,   106,   107,   108,   109,   110,   111,   112,
     113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   126,    -1,    -1,   129,   130,    -1,   132,
     133,     1,    -1,    -1,    -1,    -1,     6,    -1,   141,     9,
      10,    -1,   145,    -1,    -1,   148,    -1,    -1,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    27,    28,    -1,
      -1,    -1,    32,    -1,    -1,    35,    36,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    -1,    47,    -1,    -1,
      -1,    -1,    -1,    -1,   187,    55,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,
      90,    -1,    -1,    -1,    94,    -1,    -1,    97,    -1,    -1,
     100,    -1,    -1,   103,    -1,   105,   106,   107,   108,   109,
     110,   111,   112,   113,    -1,    -1,     7,     8,    -1,    -1,
      -1,    -1,    -1,    14,    -1,    -1,   126,    -1,    -1,   129,
     130,    -1,   132,   133,    25,    26,    -1,    -1,    29,    30,
      -1,   141,    33,    34,    -1,   145,    37,    -1,   148,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    -1,    -1,
      61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   187,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,    -1,    -1,   127,    -1,    -1,    -1,
     131,    -1,    -1,   134,   135,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   144,   145,   146,   147,    -1,    -1,    -1,
      -1,    -1,    -1,   154,    -1,   156,   157,   158,    -1,   160,
     161,   162,   163,   164,   165,   166,   167,   168,    -1,    -1,
      -1,    -1,     7,     8,    -1,    -1,    -1,    -1,   179,    14,
      -1,    -1,    -1,   184,   185,    -1,    -1,   188,   189,    -1,
      25,    26,    -1,    -1,    29,    30,    -1,    -1,    33,    34,
      -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    58,    -1,    -1,    61,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
      -1,    -1,   127,    -1,    -1,    -1,   131,    -1,   133,   134,
     135,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,
     145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,   154,
      -1,   156,   157,   158,    -1,   160,   161,   162,   163,   164,
     165,   166,   167,   168,    -1,    -1,     7,     8,    -1,    -1,
      -1,    -1,    -1,    14,   179,    -1,    -1,    -1,    -1,   184,
     185,    -1,    -1,   188,    25,    26,    -1,    -1,    29,    30,
      -1,    -1,    33,    34,    -1,    -1,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    -1,    -1,
      61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      -1,     7,     8,    -1,    85,    -1,    -1,    -1,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      26,    -1,    -1,    29,    30,   106,    -1,    33,    34,    -1,
      -1,    37,    -1,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,    -1,    -1,   127,    -1,    -1,    -1,
     131,    57,    58,   134,   135,    61,    -1,    -1,    -1,    -1,
      -1,    -1,    68,   144,   145,   146,   147,    -1,    -1,    -1,
      -1,    -1,    -1,   154,    -1,   156,   157,   158,    -1,   160,
     161,   162,   163,   164,   165,   166,   167,   168,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   179,    -1,
     106,    -1,    -1,   184,   185,    -1,    -1,   188,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,    -1,
      -1,   127,    -1,    -1,    -1,   131,    -1,    -1,   134,   135,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,   145,
     146,   147,    -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,
     156,   157,   158,    -1,   160,   161,   162,   163,   164,   165,
     166,   167,   168,    -1,    -1,     7,     8,    -1,    -1,    -1,
      -1,    -1,    14,   179,    -1,    -1,    -1,    -1,   184,   185,
      -1,    -1,   188,    25,    26,    -1,    -1,    29,    30,    -1,
      -1,    33,    34,    -1,    -1,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    58,    -1,    -1,    61,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,    -1,    -1,   127,    -1,    -1,    -1,   131,
      -1,    -1,   134,   135,   136,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   144,   145,   146,   147,    -1,    -1,    -1,    -1,
      -1,    -1,   154,    -1,   156,   157,   158,    -1,   160,   161,
     162,   163,   164,   165,   166,   167,   168,    -1,    -1,     7,
       8,    -1,    -1,    -1,    -1,    -1,    14,   179,    -1,    -1,
      -1,    -1,   184,   185,    -1,    -1,   188,    25,    26,    -1,
      -1,    29,    30,    -1,    -1,    33,    34,    -1,    -1,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      58,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,    -1,    -1,   127,
      -1,    -1,    -1,   131,    -1,    -1,   134,   135,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   144,   145,   146,   147,
      -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,   156,   157,
     158,    -1,   160,   161,   162,   163,   164,   165,   166,   167,
     168,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   179,    -1,    -1,    -1,    -1,   184,   185,    -1,    -1,
     188
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   194,   197,     0,   198,     1,     6,     9,    10,    11,
      15,    18,    19,    21,    22,    27,    28,    32,    35,    38,
      39,    40,    41,    42,    44,    45,    47,    55,    57,    69,
      76,    77,    78,    79,    87,    88,    89,    90,    94,    97,
      98,   100,   103,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   126,   129,   130,   132,   133,   141,   145,   148,
     187,   196,   199,   200,   214,   242,   244,   246,   248,   249,
     289,   329,   340,   343,   345,   351,   356,   363,   366,   369,
     372,   373,   374,   375,   376,   377,   378,   423,   425,   426,
     428,   434,   435,   441,   453,   454,   464,   466,   471,   472,
     476,   482,   484,   196,     1,    52,   145,   213,   196,    21,
      56,   145,   251,   252,   253,     1,   188,   317,     1,   145,
     309,   340,   343,   441,     1,   477,     1,   473,     1,   485,
       1,     7,     8,    14,    25,    26,    29,    30,    33,    34,
      37,    57,    58,    61,   106,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   127,   131,   134,   135,
     144,   145,   146,   147,   154,   156,   157,   158,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   179,   184,   185,
     188,   261,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   278,   280,   283,     1,   145,    15,    18,
       1,   145,     1,   145,   188,   254,   196,   299,     1,   283,
      86,   283,   196,   196,   196,     1,   196,   301,   196,     1,
       6,   132,   196,   196,   196,    15,    18,    19,    32,    42,
      98,   112,   132,   377,   454,     6,   145,   322,   145,   319,
       1,   303,     1,    68,   145,     1,   352,   381,   344,     1,
     145,     1,    86,   300,   424,     1,    15,    98,   196,   253,
     260,    60,   243,   243,     1,   145,     1,   145,   315,   187,
     195,    86,   308,   355,   195,     1,   346,   311,    20,    71,
     285,   285,     1,   188,   292,     1,    36,   188,   371,     1,
     371,     1,   371,     1,   145,   358,   359,     1,   132,   145,
     196,   458,     1,   196,   440,   190,   440,   440,     1,   190,
     196,   314,   439,     1,   283,   284,   436,   438,     1,   145,
       1,   294,    43,     1,   467,   284,   196,   215,   196,   190,
     196,   196,   317,   263,   264,   265,   284,   196,   296,   132,
     345,    65,   460,   354,   355,   145,   196,   284,   196,   284,
      20,    36,   486,   487,    55,    69,    70,    71,    76,   368,
     370,   254,   188,   188,   188,   188,   188,   188,   188,   188,
     254,   188,   268,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   268,   268,   268,   284,    60,   181,   182,
     183,   179,   180,   169,   170,    62,    63,    67,   177,   178,
      64,   176,   175,   174,   173,    65,    66,   191,    68,   368,
     196,   195,    23,    23,   196,   196,   189,   196,     1,   284,
     442,    70,    70,    52,   145,   196,   196,   284,   196,    93,
     105,   137,   145,   145,    15,    18,     1,   379,    43,   196,
     190,   190,   324,   190,   190,   321,   196,   284,   196,   145,
      20,    76,   145,   388,   196,   190,   195,   341,   342,    54,
      62,    63,    73,    81,    82,   149,   150,   151,   171,   172,
     444,   445,   430,   431,   196,   196,   196,   195,   250,   285,
     250,   196,   245,   196,   247,    77,    83,    84,    85,   101,
     102,   330,   332,   333,   339,   326,    52,   145,   326,   195,
     326,    20,    43,   133,   349,   350,   462,   285,     1,    69,
     196,   457,   295,     6,    35,    36,    42,   103,   286,   289,
     365,    20,   196,   240,   283,   358,   196,    59,   152,   240,
     290,   196,   358,   196,   358,   196,   360,   190,   196,   196,
     196,   195,   196,   427,   196,   436,   436,   196,   284,   190,
     439,   196,   465,   196,   358,   196,   284,     1,   190,   297,
     216,   241,   284,   252,   263,     1,    86,   196,   318,   357,
     190,    54,   310,   283,    55,   327,   460,   312,   478,   474,
      35,    36,    38,    55,    69,    76,   493,     1,   240,    20,
     487,   189,   189,   283,   284,   283,   283,   283,   283,   283,
     284,   284,   284,   284,   284,     1,   145,   189,   284,   189,
     284,   283,   283,   283,     1,   145,     1,   145,     1,    52,
      53,   145,   284,   284,   262,   283,   283,   283,   283,   283,
     283,   283,   284,   284,   284,   284,   284,   284,   189,    57,
      61,   267,   267,   267,   268,   268,   269,   269,   270,   270,
     270,   270,   270,   271,   271,   272,   273,   274,   277,   279,
     281,   280,   145,   145,   196,     1,   196,   443,   302,   196,
     196,   284,   305,   306,    23,    23,    20,   145,   323,   283,
     196,   320,   283,   196,   304,   382,   429,    52,   145,   442,
     284,   432,   433,    20,   188,   255,   255,   337,   335,   334,
     336,   316,    55,    76,   196,   331,   333,    80,   326,   463,
     388,   284,    20,   196,   196,   285,     1,    72,     1,    72,
       1,    72,    15,    18,    72,    75,   364,   367,     1,    38,
      55,   196,   459,   189,   196,   189,   358,   196,   196,   361,
     444,   359,   432,   439,   439,   437,   190,   480,   481,   196,
     468,   196,   145,   196,   483,     3,     4,     5,    36,    48,
      49,    50,    51,    52,    53,    84,    91,   136,   137,   217,
     218,   219,   189,   196,     1,    52,   145,   265,     1,   284,
     446,   460,   328,   327,   480,   190,   190,   196,    20,   488,
       1,    35,   196,   492,   189,   190,   190,   189,   189,   190,
     189,     1,   189,   190,   190,   190,   189,   189,   189,   189,
     189,   189,   189,   190,   189,   190,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   190,   190,   263,   190,   189,
     189,   189,   189,   189,   190,   189,   189,   189,   189,   189,
     189,    57,    65,   275,   276,   280,   204,   202,   196,   196,
     196,    49,    91,   420,    16,    17,    22,    23,    46,    91,
      92,    93,   105,   410,   145,   145,   380,   145,   325,   284,
     196,   241,   383,   384,   385,   386,   461,   462,   430,   190,
      18,    19,    32,    43,   107,   112,   132,   189,   256,   257,
     258,    88,    96,    97,   155,   259,   283,   283,   283,   283,
     285,   338,   284,   347,   195,     1,    76,   196,   455,    20,
     196,   196,   288,   196,   287,   196,     1,     1,   196,     1,
     283,   285,   196,   196,   196,   293,   371,   196,   362,   438,
     145,   196,   481,   190,   298,   136,   241,   241,   241,    51,
     240,   223,    21,   240,   240,   241,   196,   219,   318,   196,
     196,   195,    55,   196,   452,    31,   449,   285,   327,   285,
     460,   284,   284,   493,    86,   490,   196,   196,   283,   283,
     283,   189,   145,   283,   283,   283,   283,   284,   284,   189,
     283,   283,   270,   192,     1,   188,   209,     1,   188,   205,
     283,   283,   196,   414,   413,   412,    76,   411,   415,   307,
     203,   201,   383,   190,   195,   390,   388,   433,   188,    43,
     188,   189,   190,   145,   258,    20,   283,   196,   392,   389,
     390,   196,   196,   457,   285,   240,   196,   196,    70,    70,
     358,   291,   284,   284,   483,   145,   223,   221,   125,   128,
     224,   222,   220,   447,   190,   450,   451,    20,    20,    55,
     479,   475,   196,   145,   285,   189,   189,   189,   189,   189,
     190,   189,   190,   189,   189,   189,   190,   189,   190,   189,
     189,   282,   196,   210,   211,   253,   196,   144,   206,   207,
     421,   416,   417,   418,   416,   284,   283,   416,   196,   209,
     205,   283,    16,    17,    20,    23,    46,    74,    91,    92,
     391,   387,   240,   240,   257,     1,    55,   196,   456,   132,
     145,   353,    20,    20,   285,   196,   358,   469,    31,   225,
     233,   234,   235,   241,   225,   284,   284,    55,   451,   456,
     456,   313,   480,   480,   489,   283,   283,   283,   283,   280,
     189,   190,   212,   208,   189,   190,    31,   422,   190,   283,
       1,   132,   144,   146,   192,   402,   403,     1,   132,   146,
     394,   395,     1,    17,   393,     1,   132,   144,   146,   192,
     397,   398,   392,   392,   392,   389,   189,   189,   196,   196,
     348,   492,    20,   196,   190,   240,   226,   239,   190,   226,
     448,   285,   196,   196,    20,   189,   189,   189,   189,   196,
     211,   240,   240,   196,   207,   283,   417,   419,   196,   404,
     405,   406,   190,   392,   196,   396,   190,   392,   196,   240,
     196,   399,   400,   401,   190,   392,   354,     1,    36,   196,
     491,   284,    77,   105,   227,   228,   229,   230,   231,   235,
      55,    20,   491,   145,   407,   408,   407,   407,   403,   407,
     395,   392,   407,   407,   407,   398,   196,   196,   470,   240,
      80,    85,   240,   456,     7,    37,   145,   409,   190,   232,
     240,   240,    18,    61,   112,   145,    70,   236,    57,   195,
      21,    87,   188,   237,   237,   263,   263,   238,   189,   238
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   193,   194,   195,   196,   197,   198,   197,   199,   199,
     199,   199,   200,   200,   201,   200,   202,   200,   203,   200,
     204,   200,   205,   205,   206,   206,   208,   207,   209,   209,
     210,   210,   212,   211,   213,   213,   215,   214,   214,   216,
     216,   217,   217,   218,   218,   219,   219,   219,   219,   219,
     219,   219,   220,   219,   219,   221,   219,   219,   219,   219,
     219,   222,   219,   223,   223,   224,   224,   225,   225,   226,
     226,   227,   227,   227,   228,   229,   230,   231,   232,   231,
     233,   233,   234,   234,   235,   236,   236,   236,   236,   237,
     238,   239,   240,   241,   242,   242,   243,   243,   244,   245,
     244,   246,   247,   246,   248,   248,   249,   249,   250,   251,
     251,   252,   253,   253,   254,   254,   255,   255,   255,   256,
     256,   257,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   259,   259,   259,   259,   260,   260,   260,   260,
     260,   261,   261,   261,   261,   261,   261,   261,   261,   261,
     261,   261,   261,   261,   261,   261,   261,   261,   261,   261,
     261,   261,   261,   261,   261,   261,   261,   261,   261,   261,
     261,   261,   261,   261,   261,   261,   261,   261,   261,   261,
     261,   261,   261,   261,   261,   261,   261,   261,   261,   261,
     261,   261,   261,   261,   261,   261,   261,   261,   262,   261,
     261,   261,   261,   261,   261,   263,   263,   264,   264,   265,
     266,   266,   266,   267,   267,   267,   267,   267,   268,   268,
     268,   268,   269,   269,   269,   270,   270,   270,   271,   271,
     271,   271,   271,   271,   272,   272,   272,   273,   273,   274,
     274,   275,   275,   276,   277,   276,   278,   279,   278,   280,
     281,   282,   280,   283,   283,   284,   284,   285,   285,   286,
     286,   287,   286,   286,   288,   286,   286,   286,   286,   286,
     286,   289,   289,   289,   289,   289,   289,   289,   289,   289,
     289,   290,   289,   291,   289,   289,   292,   289,   293,   289,
     289,   294,   289,   289,   289,   289,   295,   289,   296,   289,
     289,   297,   289,   298,   289,   289,   299,   289,   300,   289,
     289,   301,   302,   289,   289,   303,   304,   289,   289,   289,
     305,   289,   289,   289,   289,   289,   289,   289,   289,   289,
     306,   307,   289,   289,   289,   289,   289,   289,   289,   289,
     308,   289,   289,   289,   309,   310,   289,   289,   311,   289,
     289,   289,   312,   313,   289,   289,   289,   289,   289,   289,
     289,   289,   289,   289,   289,   289,   314,   289,   289,   289,
     289,   289,   289,   289,   289,   289,   289,   289,   289,   315,
     316,   289,   289,   289,   289,   317,   318,   320,   319,   321,
     321,   323,   322,   324,   325,   324,   326,   328,   327,   329,
     329,   330,   331,   331,   331,   332,   332,   334,   333,   335,
     333,   336,   333,   337,   333,   338,   333,   339,   339,   339,
     340,   341,   340,   342,   340,   344,   343,   346,   347,   348,
     345,   345,   349,   350,   349,   352,   351,   353,   353,   353,
     354,   354,   355,   355,   356,   356,   356,   357,   357,   357,
     357,   357,   358,   358,   360,   359,   361,   362,   361,   363,
     364,   365,   365,   366,   366,   367,   367,   368,   368,   369,
     369,   369,   370,   370,   370,   371,   371,   371,   372,   372,
     373,   373,   374,   374,   375,   375,   376,   376,   377,   377,
     377,   379,   380,   378,   378,   381,   382,   378,   378,   383,
     383,   385,   384,   387,   386,   388,   389,   390,   390,   391,
     391,   391,   391,   391,   391,   391,   391,   391,   391,   391,
     392,   392,   393,   393,   394,   394,   396,   395,   395,   397,
     397,   399,   398,   400,   398,   401,   398,   398,   402,   402,
     404,   403,   405,   403,   406,   403,   403,   408,   407,   409,
     409,   409,   409,   409,   409,   410,   410,   410,   410,   411,
     410,   410,   412,   410,   413,   410,   414,   410,   415,   410,
     416,   416,   418,   419,   417,   420,   421,   420,   422,   422,
     424,   423,   425,   425,   427,   426,   429,   428,   431,   430,
     432,   432,   433,   434,   434,   435,   435,   436,   437,   436,
     438,   439,   440,   441,   441,   442,   442,   443,   443,   444,
     444,   444,   444,   444,   444,   445,   445,   445,   445,   445,
     445,   447,   448,   446,   449,   446,   446,   450,   450,   451,
     452,   452,   453,   453,   454,   454,   455,   455,   455,   456,
     456,   456,   457,   457,   457,   458,   458,   458,   458,   459,
     459,   459,   459,   460,   460,   461,   461,   462,   463,   462,
     465,   464,   464,   467,   468,   469,   470,   466,   466,   471,
     471,   473,   474,   475,   472,   472,   477,   478,   479,   476,
     476,   480,   480,   481,   482,   483,   485,   484,   484,   486,
     486,   488,   489,   487,   487,   490,   490,   491,   491,   491,
     492,   492,   492,   493,   493,   493,   493,   493,   493,   493
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     0,     0,     3,     1,     1,
       3,     3,     1,     2,     0,     7,     0,     6,     0,     7,
       0,     6,     4,     2,     1,     3,     0,     3,     4,     2,
       1,     3,     0,     3,     1,     1,     0,     6,     3,     0,
       1,     0,     1,     1,     2,     2,     2,     2,     2,     3,
       1,     1,     0,     5,     2,     0,     6,     1,     2,     3,
       1,     0,     5,     0,     2,     1,     1,     0,     2,     0,
       2,     1,     1,     1,     3,     3,     2,     0,     0,     4,
       0,     1,     1,     3,     1,     0,     2,     5,     7,     0,
       0,     0,     1,     1,     3,     3,     0,     1,     3,     0,
       6,     3,     0,     5,     2,     1,     2,     1,     2,     1,
       3,     1,     1,     1,     0,     2,     0,     2,     3,     1,
       3,     2,     1,     1,     1,     4,     1,     4,     2,     1,
       1,     1,     0,     1,     1,     1,     1,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     6,     6,     4,     6,
       4,     4,     4,     4,     4,     4,     4,     4,     6,     4,
       4,     6,     6,     8,     8,     6,     6,     8,     8,     4,
       4,     4,     4,     4,     3,     4,     4,     4,     4,     6,
       5,     4,     4,     6,     6,     4,     6,     4,     4,     4,
       4,     4,     4,     4,     4,     3,     4,     4,     0,     5,
       3,     3,     2,     2,     3,     0,     1,     1,     3,     1,
       1,     3,     4,     1,     2,     2,     2,     2,     1,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     5,     1,     3,     3,     1,     3,     1,
       3,     1,     3,     1,     0,     4,     1,     0,     4,     1,
       0,     0,     7,     1,     3,     1,     2,     0,     2,     1,
       3,     0,     7,     3,     0,     6,     3,     3,     3,     4,
       4,     1,     2,     2,     2,     3,     3,     4,     3,     4,
       3,     0,     5,     0,     8,     3,     0,     4,     0,     7,
       3,     0,     4,     3,     4,     3,     0,     6,     0,     8,
       3,     0,     4,     0,     6,     4,     0,     3,     0,     4,
       2,     0,     0,     5,     3,     0,     0,     5,     3,     3,
       0,     6,     5,     4,     4,     3,     2,     2,     2,     3,
       0,     0,     7,     3,     6,     4,     3,     2,     3,     4,
       0,     3,     3,     4,     0,     0,     6,     5,     0,     5,
       3,     3,     0,     0,    11,     1,     1,     1,     1,     2,
       3,     2,     3,     2,     3,     2,     0,     4,     4,     3,
       3,     3,     2,     3,     3,     2,     2,     4,     4,     0,
       0,     7,     3,     1,     2,     0,     1,     0,     4,     0,
       2,     0,     4,     0,     0,     5,     0,     0,     5,     1,
       1,     2,     1,     1,     1,     1,     2,     0,     3,     0,
       3,     0,     3,     0,     3,     0,     4,     0,     1,     1,
       1,     0,     4,     0,     4,     0,     3,     0,     0,     0,
       9,     3,     1,     0,     3,     0,     3,     0,     1,     1,
       0,     1,     2,     2,     1,     3,     3,     1,     3,     3,
       3,     2,     1,     3,     0,     3,     0,     0,     3,     3,
       2,     0,     2,     3,     3,     3,     3,     1,     1,     3,
       3,     3,     1,     1,     1,     0,     2,     2,     2,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     1,     1,
       1,     0,     0,     6,     4,     0,     0,     5,     3,     1,
       1,     0,     3,     0,     4,     0,     2,     0,     2,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     4,     3,
       0,     1,     0,     1,     1,     3,     0,     3,     1,     1,
       3,     0,     3,     0,     3,     0,     3,     1,     1,     3,
       0,     3,     0,     3,     0,     3,     1,     0,     2,     1,
       1,     1,     3,     2,     2,     1,     1,     1,     2,     0,
       3,     1,     0,     3,     0,     3,     0,     3,     0,     3,
       1,     3,     0,     0,     4,     2,     0,     4,     0,     2,
       0,     3,     3,     2,     0,     4,     0,     5,     0,     2,
       1,     3,     1,     2,     2,     1,     1,     1,     0,     4,
       1,     1,     1,     1,     1,     2,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     0,     6,     0,     4,     2,     1,     2,     2,
       1,     1,     3,     2,     0,     1,     1,     2,     2,     1,
       2,     2,     1,     2,     2,     1,     2,     2,     2,     1,
       2,     2,     2,     0,     2,     1,     2,     1,     0,     4,
       0,     5,     3,     0,     0,     0,     0,    13,     3,     1,
       1,     0,     0,     0,     9,     3,     0,     0,     0,     9,
       3,     1,     2,     2,     1,     1,     0,     5,     5,     1,
       2,     0,     0,     8,     5,     0,     2,     1,     2,     2,
       1,     2,     2,     0,     1,     1,     1,     1,     1,     1
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
#line 756 "rwlparser.y" /* yacc.c:1646  */
    {
	  ; // we are done!
	}
#line 3958 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 763 "rwlparser.y" /* yacc.c:1646  */
    {
	    // this is used when we read a semicolon but still are 
	    // partly though something, where the values of
	    // inam and/or previnam still may be needed
	    if (bit(rwm->mxq->errbits,RWL_ERROR_SEVERE)) YYABORT;
	  }
#line 3969 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 773 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->mxq->errbits,RWL_ERROR_SEVERE)) YYABORT;
	    rwm->inam = rwm->previnam = 0;
	    // after this, we must start from the beginning of something
	    // as neither inam nor previnam exist
	  }
#line 3980 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 784 "rwlparser.y" /* yacc.c:1646  */
    {  
	    bis(rwm->m2flags, RWL_P2_INTHING);
	    if (bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
	      YYACCEPT;
	  }
#line 3990 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 790 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->m2flags, RWL_P2_INTHING); 
	    if (bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
	      YYACCEPT;
	  }
#line 4000 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 804 "rwlparser.y" /* yacc.c:1646  */
    { rwlprintallvars(rwm); }
#line 4006 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 815 "rwlparser.y" /* yacc.c:1646  */
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
#line 4025 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 831 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->raname = rwm->inam;
	      bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	      bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	      rwm->ravarn = rwladdvar(rwm, rwm->inam, RWL_TYPE_RAST, 0);
	      rwlrastbeg(rwm, rwm->raname, RWL_TYPE_RAST);
	    }
#line 4037 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 840 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->raname = rwm->inam;
	      bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	      rwm->ravarn = rwladdvar(rwm, rwm->inam, RWL_TYPE_RAST, 0);
	      rwlrastbeg(rwm, rwm->raname, RWL_TYPE_RAST);
	    }
#line 4048 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 848 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->raname = rwm->inam;
	      bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	      bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	      rwm->ravarn = rwladdvar(rwm, rwm->inam, RWL_TYPE_RAPROC, 0);
	      rwlrastbeg(rwm, rwm->raname, RWL_TYPE_RAPROC);
	    }
#line 4060 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 857 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->raname = rwm->inam;
	      rwm->ravarn = rwladdvar(rwm, rwm->inam, RWL_TYPE_RAPROC, 0);
	      rwlrastbeg(rwm, rwm->raname, RWL_TYPE_RAPROC);
	    }
#line 4070 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 868 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlrastfin(rwm, rwm->raname, (sb4) rwm->ravarn);
	    }
#line 4078 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 872 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlcancelvar(rwm, rwm->raname, (sb4) rwm->ravarn);
	      rwlrastclear(rwm);
	      rwlerror(rwm, RWL_ERROR_DECL_RAST); 
	      yyerrok;
	    }
#line 4089 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 885 "rwlparser.y" /* yacc.c:1646  */
    {rwm->raentry = rwm->sval; }
#line 4095 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 887 "rwlparser.y" /* yacc.c:1646  */
    {rwlrastadd(rwm, rwm->raentry, rwm->pval.dval); }
#line 4101 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 893 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlrastfin(rwm, rwm->raname, (sb4) rwm->ravarn);
	    }
#line 4109 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 897 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwlcancelvar(rwm, rwm->raname, (sb4) rwm->ravarn);
	      rwlrastclear(rwm);
	      rwlerror(rwm, RWL_ERROR_DECL_RAPROC); 
	      yyerrok;
	    }
#line 4120 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 909 "rwlparser.y" /* yacc.c:1646  */
    {rwm->raentry = rwm->inam; }
#line 4126 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 911 "rwlparser.y" /* yacc.c:1646  */
    {rwlrastadd(rwm, rwm->raentry, rwm->pval.dval); }
#line 4132 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 916 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->m4flags, RWL_P4_DBDECLDEF);
	  }
#line 4140 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 920 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bis(rwm->m4flags, RWL_P4_DBDECLDEF);
	  }
#line 4148 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 928 "rwlparser.y" /* yacc.c:1646  */
    {
	      // add identifier
	      sb4 ld = rwladdvar(rwm
	          , bit(rwm->m4flags , RWL_P4_DBDECLDEF) ? RWL_DEFAULT_DBNAME : rwm->inam
		  , RWL_TYPE_DB, 0);
	      if (ld >= 0)
	      {
		// and save data
	        rwm->dbsav = (rwl_cinfo *) rwlalloc(rwm, sizeof(rwl_cinfo));
		rwm->dbsav->vname = bit(rwm->m4flags , RWL_P4_DBDECLDEF) ? RWL_DEFAULT_DBNAME : rwm->inam;
		rwm->dbsav->pooltext = "unset";
		rwm->dbsav->cclass = 0 ; 
		rwm->dbsav->stmtcache = RWL_DEFAULT_STMTCACHE;
		rwm->dbsav->tostart = 0;
		rwm->dbname = rwm->dbsav->vname;
		rwm->dbsav->pooltag = rwlalloc(rwm, RWL_MAX_IDLEN+10);
		snprintf((char *)rwm->dbsav->pooltag, RWL_MAX_IDLEN+10, "rwl%d", ld);
		rwm->mxq->evar[ld].vdata = rwm->dbsav;
		if (bit(rwm->m4flags, RWL_P4_DBDECLDEF))
		{
		  bis(rwm->dbsav->dbflags, RWL_DB_DEFAULT);
		  rwm->defdb = rwm->dbname;
		}
	      }
	      bic(rwm->m2flags, RWL_P2_SOMEEXPFAIL);
	      bic(rwm->m4flags, RWL_P4_DBDECLDEF);
	    }
#line 4180 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 956 "rwlparser.y" /* yacc.c:1646  */
    { 
	      // fix core dump, only call builddb if everything fine
	      if (bit(rwm->m2flags, RWL_P2_SOMEEXPFAIL))
	      {
		rwlcanceldbdecl(rwm);
		// not needed, other erros will follow: rwlerror(rwm, RWL_ERROR_DATABASE_WRONG);
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
#line 4227 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 999 "rwlparser.y" /* yacc.c:1646  */
    {
		  rwlcanceldbdecl(rwm);
		  rwlerror(rwm, RWL_ERROR_DATABASE_WRONG);
		  yyerrok;
		}
#line 4237 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 1009 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
	        if (rwm->dbsav->username)
		  rwlerror(rwm, RWL_ERROR_DBSPEC_ALREADY, "username");
		else
		  rwm->dbsav->username = rwlstrdup(rwm, rwm->pval.sval);
	      }
	    }
#line 4251 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 1029 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
	        if (rwm->dbsav->username)
		  rwlerror(rwm, RWL_ERROR_DBSPEC_ALREADY, "username");
		else
		  rwm->dbsav->username = rwlstrdup(rwm, rwm->pval.sval);
	      }
	    }
#line 4265 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 1039 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	        rwm->dbsav->password = rwlstrdup(rwm, rwm->pval.sval);
	    }
#line 4274 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 1044 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwlcclassgood(rwm, (rwm->pval.sval)))
	      { 
	        if (rwm->dbsav)
		  rwm->dbsav->cclass = rwlstrdup(rwm, rwm->pval.sval);
	      }
	    }
#line 4286 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 1052 "rwlparser.y" /* yacc.c:1646  */
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
#line 4303 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 1065 "rwlparser.y" /* yacc.c:1646  */
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
		    bis(rwm->dbsav->dbflags, RWL_DB_USECPOOL);
		  }
		  else
		  {
		    if (!bit(rwm->m2flags, RWL_P2_NOEXEC))
		      rwlerror(rwm, RWL_ERROR_MUST_BE_CPOOL, rwm->inam);
		  }
		}
	      }
	    }
#line 4338 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 1096 "rwlparser.y" /* yacc.c:1646  */
    {
	      if (rwm->resdb)
	        rwlerror(rwm, RWL_ERROR_DBALREADY, "results", rwm->resdb);
	      else
	      {
	        if (rwm->dbsav)
		  bis(rwm->dbsav->dbflags, RWL_DB_RESULTS);
	        rwm->resdb = rwm->dbname;
	      }
	    }
#line 4353 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 1107 "rwlparser.y" /* yacc.c:1646  */
    {
	      if (rwm->defdb)
	        rwlerror(rwm, RWL_ERROR_DBALREADY, "default", rwm->defdb);
	      else
	      {
	        if (rwm->dbsav)
		  bis(rwm->dbsav->dbflags, RWL_DB_DEFAULT);
	        rwm->defdb = rwm->dbname;
	      }
	    }
#line 4368 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 1118 "rwlparser.y" /* yacc.c:1646  */
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
#line 4386 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 1134 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      { 
		rwm->dbsav->stmtcache = rwlcheckminval(rwm->mxq, 0, rwm->pval.ival
		  , 0, RWL_DEFAULT_STMTCACHE, (text *)"cursorcache");
		bis(rwm->dbsav->dbflags, RWL_DB_CCACHUSER);
	      }
	    }
#line 4399 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 1143 "rwlparser.y" /* yacc.c:1646  */
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
#line 4418 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 1161 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
		if (rwm->dbsav->pooltype)
		  rwlerror(rwm, RWL_ERROR_DBPOOL_ALREADY);
	        rwm->dbsav->pooltype = RWL_DBPOOL_POOLED;
		rwm->dbsav->pooltext = "drcp pooled";
	      }
	    }
#line 4432 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 1171 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
		if (rwm->dbsav->pooltype)
		  rwlerror(rwm, RWL_ERROR_DBPOOL_ALREADY);
	        rwm->dbsav->pooltype = RWL_DBPOOL_DEDICATED;
		rwm->dbsav->pooltext = "dedicated";
	      }
	    }
#line 4446 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 1181 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
		if (rwm->dbsav->pooltype)
		  rwlerror(rwm, RWL_ERROR_DBPOOL_ALREADY);
	        rwm->dbsav->pooltype = RWL_DBPOOL_RETHRDED;
		rwm->dbsav->pooltext = "threads dedicated";
	      }
	    }
#line 4460 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 1191 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      {
		if (rwm->dbsav->pooltype)
		  rwlerror(rwm, RWL_ERROR_DBPOOL_ALREADY);
	        rwm->dbsav->pooltype = RWL_DBPOOL_RECONNECT;
		rwm->dbsav->pooltext = "reconnect";
	      }
	    }
#line 4474 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 1201 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlstartprocbegin(rwm, rwm->inam);
	  }
#line 4482 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 1214 "rwlparser.y" /* yacc.c:1646  */
    {
#if (RWL_OCI_VERSION<12)
	    rwlerror(rwm, RWL_ERROR_NOT_SUPPORTED_IN_VERSION, "statemark",RWL_OCI_VERSION);
#else
	    bis(rwm->dbsav->dbflags,RWL_DB_STATEMARK);
#endif
	  }
#line 4494 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 1222 "rwlparser.y" /* yacc.c:1646  */
    {
#if (RWL_OCI_VERSION<12)
	    rwlerror(rwm, RWL_ERROR_NOT_SUPPORTED_IN_VERSION, "requestmark",RWL_OCI_VERSION);
#else
	    bis(rwm->dbsav->dbflags,RWL_DB_REQMARK);
#endif
	  }
#line 4506 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 1232 "rwlparser.y" /* yacc.c:1646  */
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
#line 4521 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 1243 "rwlparser.y" /* yacc.c:1646  */
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
#line 4537 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 1268 "rwlparser.y" /* yacc.c:1646  */
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
#line 4562 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 1292 "rwlparser.y" /* yacc.c:1646  */
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
#line 4587 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 1316 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (rwm->dbsav)
	      { 
		rwm->dbsav->ptimeout = rwlcheckminval(rwm->mxq, 0, rwm->pval.ival
		  , RWL_DBPOOL_CONNECT==rwm->dbsav->pooltype ? 0: 1
		  , RWL_DBPOOL_DEFAULT_TIMEOUT, (text *)"release timeout");
	      }
	    }
#line 4600 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 1329 "rwlparser.y" /* yacc.c:1646  */
    { 
#if (RWL_OCI_VERSION >= 12)
	      if (rwm->dbsav && rwm->pval.dval >= 0)
		rwm->dbsav->wtimeout = rwm->pval.dval;
#else
	    rwlerror(rwm, RWL_ERROR_NOT_YET_IMPL, "sessionpool wait attribute");
#endif
	    }
#line 4613 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 1352 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlstartprocarg(rwm);
	  }
#line 4621 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 1360 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->dbsav && rwm->pval.dval >= 0)
	      bis(rwm->dbsav->dbflags, RWL_DB_SPTOBREAK);
	  }
#line 4630 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 1376 "rwlparser.y" /* yacc.c:1646  */
    { 
	  if (rwm->dbsav && rwm->pval.dval >= 0)
	    bis(rwm->dbsav->dbflags, RWL_DB_SPTOBREAK);
	  // similar to normal procedure call
	  if (0 != rwm->furlev)
	    rwlsevere(rwm,"[rwlparser-recursethen:%d]", rwm->furlev);
	  rwm->recfuncprs[0].aacnt = 0;
	  rwm->recfuncprs[0].funcn = rwm->inam;
	  rwlexprbeg(rwm);
	  }
#line 4645 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 1390 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwl_estack *estk;
	    
	    rwlexprpush2(rwm, rwm->recfuncprs[0].funcn
	      , RWL_STACK_PROCCALL
	      , rwm->recfuncprs[0].aacnt );
	    if ((estk = rwlexprfinish(rwm)))
	      rwm->dbsav->tobreak = estk;
	    else
	      rwlexprclear(rwm);
	  }
#line 4661 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 1405 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwl_estack *estk;
	    
	    rwlexprpush2(rwm, rwm->recfuncprs[0].funcn
	      , RWL_STACK_PROCCALL
	      , rwm->recfuncprs[0].aacnt );
	    if ((estk = rwlexprfinish(rwm)))
	    {
	      if (rwm->dbsav)
	      {
	        if (rwm->dbsav->tostart)
		{
		  rwlerror(rwm, RWL_ERROR_DBSPEC_ALREADY, "start");
		  rwlexprdestroy(rwm, estk);
		}
		else
		  rwm->dbsav->tostart = estk;
	      }
	      else
	        rwlexprdestroy(rwm, estk);
	    }
	    else
	      rwlexprclear(rwm);
	  }
#line 4690 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 1435 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprimmed(rwm);
	  }
#line 4698 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 1442 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprimmed(rwm);
	  }
#line 4706 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 1458 "rwlparser.y" /* yacc.c:1646  */
    { 
	    // start building a dummy procedure we never execute
	    rwm->totthr = 0;
	    rwlerror(rwm, RWL_ERROR_FUNCTION_WRONG);
	    bic(rwm->m4flags,RWL_P4_PROCHASSQL);
	    //bis(rwm->m1flags, RWL_P_DXEQMAIN); 
	    bis(rwm->m3flags, RWL_P3_BNOXFUNC);
	    if (!rwm->codename) // We might have done the codeadd below
	      rwlcodehead(rwm, 1 /*thrcount*/);
	    yyerrok;
	  }
#line 4722 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 1470 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->codeguess=rwladdvar(rwm, rwm->inam, RWL_TYPE_FUNC, rwm->addvarbits);
	      if (!bit(rwm->mxq->errbits,RWL_ERROR_SEVERE)) // e.g. out of space
		rwlcodeaddpu(rwm, RWL_CODE_HEAD, rwm->inam, rwm->codeguess); 
	      rwm->codename = rwm->inam;
	      bic(rwm->m4flags,RWL_P4_PROCHASSQL|RWL_P4_STATSONLY);
	      bic(rwm->m2flags,RWL_P2_HAS_RETURN);
	      bis(rwm->m2flags,RWL_P2_COMP_FUNC);
	      rwm->lvarr = 0;
	      rwm->facnt = 0; /* formal argument count */
	      rwm->lvcount = 1; /* at least one local variable for return value */
	      rwlensurelvarr(rwm, rwm->lvcount);
	    }
#line 4740 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 1485 "rwlparser.y" /* yacc.c:1646  */
    {
	      /* codeguess was set en rwlcodeaddp */
	      if (rwm->codeguess>=0 && rwm->dtype)
	      {
	        bis(rwm->mxq->evar[rwm->codeguess].idflags, RWL_IDENT_NOSTATS);
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
#line 4783 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 1528 "rwlparser.y" /* yacc.c:1646  */
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
#line 4798 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 1539 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->codeguess=rwladdvar(rwm, rwm->inam, RWL_TYPE_PROC, rwm->addvarbits);
	      if (!bit(rwm->mxq->errbits,RWL_ERROR_SEVERE)) /* e.g. out of space */
		rwlcodeaddpu(rwm, RWL_CODE_HEAD, rwm->inam, rwm->codeguess);
	      rwm->codename = rwm->inam;
	      bic(rwm->m4flags,RWL_P4_PROCHASSQL|RWL_P4_STATSONLY);
	      bic(rwm->m2flags,RWL_P2_COMP_FUNC|RWL_P2_HAS_RETURN);
	      rwm->lvarr = 0;
	      rwm->facnt = 0; /* formal argument count */
	      rwm->lvcount = 1; /* at least one local variable for return value */
	      rwlensurelvarr(rwm, rwm->lvcount);
	    }
#line 4815 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 1553 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwm->mxq->evar[rwm->codeguess].v2val = rwm->facnt;
	      rwm->supsemerr = RWL_SUPSEM_PROC;
	    }
#line 4824 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 1561 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 4833 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 1566 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 4841 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 1573 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 4850 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 1578 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 4858 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 1585 "rwlparser.y" /* yacc.c:1646  */
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
	      if (rwm->lvarr) // maybe zero if func/proc decl is wrong
	      {
		rwm->mxq->evar[l].v3val = rwm->lvcount; /* save count of local vars */
		rwm->mxq->evar[l].v2val = rwm->facnt;
		/* allocate actual size, copy, free temp */
		rwm->mxq->evar[l].vdata = rwlalloc(rwm, rwm->lvcount * sizeof(rwl_localvar));
		memcpy(rwm->mxq->evar[l].vdata, rwm->lvarr, rwm->lvcount *sizeof(rwl_localvar));
		rwlfree(rwm, rwm->lvarr);
	      }
	      rwm->lvarr = 0; /* clean to avoid trouble */

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
		      bis(rwm->mxq->evar[l].idflags,RWL_IDENT_STATSONLY); 
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
#line 4945 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 1676 "rwlparser.y" /* yacc.c:1646  */
    {
          sb4 l = rwlfindvar(rwm->mxq, rwm->inam, RWL_VAR_NOGUESS);
          if (l>=0)
            rwlprintvar(rwm->mxq, l);
          }
#line 4955 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1689 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m3flags, RWL_P3_MISBRACK); }
#line 4961 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 1690 "rwlparser.y" /* yacc.c:1646  */
    { bic(rwm->m3flags, RWL_P3_MISBRACK); }
#line 4967 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 1693 "rwlparser.y" /* yacc.c:1646  */
    { if (!bit(rwm->m2flags, RWL_P2_NOWARNDEP)) rwlerror(rwm, RWL_ERROR_MISSING_DECL_BRACK); }
#line 4973 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 1705 "rwlparser.y" /* yacc.c:1646  */
    { 
	    sb4 la;
	    if (rwm->dtype &&
	       (la=rwladdvar2(rwm, rwm->inam, (ub4)rwm->dtype, RWL_IDENT_LOCAL,rwm->codename))
	         >=0
	       )
	    {
	      rwlensurelvarr(rwm, rwm->lvcount + 1);
	      rwm->lvarr[rwm->lvcount].aname = rwm->inam;
	      rwm->lvarr[rwm->lvcount].aguess = la;
	      rwm->lvarr[rwm->lvcount].atype = rwm->dtype;
	      rwm->lvarr[rwm->lvcount].aslen =
		  RWL_TYPE_STR == rwm->dtype ? (ub8)(rwm->declslen+1)
		: RWL_TYPE_RAW == rwm->dtype ? (ub8)rwm->declslen
		: 0;
	      rwm->lvarr[rwm->lvcount].aflags = 0;
	      rwm->lvcount++;
	      rwm->facnt++;
	    }
	    
	  }
#line 4999 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1731 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_INT; bic(rwm->addvarbits,RWL_IDENT_THRSPEC); }
#line 5005 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 1733 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_DBL; bic(rwm->addvarbits,RWL_IDENT_THRSPEC); }
#line 5011 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1735 "rwlparser.y" /* yacc.c:1646  */
    { rwm->declslen=RWL_DEFAULT_STRLEN; rwm->dtype=RWL_TYPE_STR; bic(rwm->addvarbits,RWL_IDENT_THRSPEC); }
#line 5017 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 1737 "rwlparser.y" /* yacc.c:1646  */
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
#line 5036 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1752 "rwlparser.y" /* yacc.c:1646  */
    { rwm->declslen=RWL_DEFAULT_RAWLEN; rwm->dtype=RWL_TYPE_RAW; bic(rwm->addvarbits,RWL_IDENT_THRSPEC); }
#line 5042 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 1754 "rwlparser.y" /* yacc.c:1646  */
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
#line 5061 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1769 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwm->dtype = 0;
	      rwlerror(rwm, RWL_ERROR_BAD_ARGUMENT_TYPE, "raw file");
	    }
#line 5070 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1774 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwm->dtype = 0;
	      rwlerror(rwm, RWL_ERROR_BAD_ARGUMENT_TYPE, "file");
	    }
#line 5079 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1779 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwm->dtype = 0;
	      rwlerror(rwm, RWL_ERROR_BAD_ARGUMENT_TYPE, "sql");
	    }
#line 5088 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1784 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwm->dtype = 0;
	      rwlerror(rwm, RWL_ERROR_BAD_ARGUMENT_TYPE, "clob");
	    }
#line 5097 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1793 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m4flags,RWL_P4_STATSONLY); }
#line 5103 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1795 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m4flags,RWL_P4_PROCHASSQL); }
#line 5109 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1797 "rwlparser.y" /* yacc.c:1646  */
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
	      bis(rwm->mxq->evar[l].idflags, RWL_IDENT_NOSTATS);
	    }
	    
	  }
#line 5129 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1817 "rwlparser.y" /* yacc.c:1646  */
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
#line 5147 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1831 "rwlparser.y" /* yacc.c:1646  */
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
#line 5165 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1845 "rwlparser.y" /* yacc.c:1646  */
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
#line 5184 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1860 "rwlparser.y" /* yacc.c:1646  */
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
#line 5204 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1903 "rwlparser.y" /* yacc.c:1646  */
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
#line 5221 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1916 "rwlparser.y" /* yacc.c:1646  */
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
#line 5239 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1930 "rwlparser.y" /* yacc.c:1646  */
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
#line 5257 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1944 "rwlparser.y" /* yacc.c:1646  */
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
#line 5273 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1956 "rwlparser.y" /* yacc.c:1646  */
    {
	      rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    }
#line 5281 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1959 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_UNIFORM); }
#line 5287 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1960 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LOGB); }
#line 5293 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1961 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LOG); }
#line 5299 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1962 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_EXPB); }
#line 5305 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1963 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_EXP); }
#line 5311 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1964 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_CEIL); }
#line 5317 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1965 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_TRUNC); }
#line 5323 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1966 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_FLOOR); }
#line 5329 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1967 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ROUND); }
#line 5335 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1968 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SQRT); }
#line 5341 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1969 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SIN); }
#line 5347 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1970 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_COS); }
#line 5353 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1971 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ATAN2); }
#line 5359 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1972 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LENGTH); }
#line 5365 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1973 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LENGTHB); }
#line 5371 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1975 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_INSTR2); }
#line 5377 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1977 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_INSTRB2); }
#line 5383 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1979 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_INSTR3); }
#line 5389 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1981 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_INSTRB3); }
#line 5395 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1983 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SUBSTR2); }
#line 5401 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1985 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SUBSTRB2); }
#line 5407 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1987 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SUBSTR3); }
#line 5413 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1989 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SUBSTRB3); }
#line 5419 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1990 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_STRING2RAW); }
#line 5425 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1991 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_HEX2RAW); }
#line 5431 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1992 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_RAW2HEX); }
#line 5437 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1994 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_NOT_YET_IMPL, "raw2string");
	    rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	  }
#line 5446 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1998 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_GETENV); }
#line 5452 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1999 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush(rwm, 0, RWL_STACK_SYSDATE); }
#line 5458 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 2000 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SYSDATEFMT); }
#line 5464 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 2001 "rwlparser.y" /* yacc.c:1646  */
    { 
						    if (bit(rwm->m4flags, RWL_P4_SLASHCONVERT)) rwlexprpush0(rwm,RWL_STACK_WINSLASHF2B);
						  }
#line 5472 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 2004 "rwlparser.y" /* yacc.c:1646  */
    { 
						    if (bit(rwm->m4flags, RWL_P4_SLASHCONVERT)) rwlexprpush0(rwm,RWL_STACK_WINSLASHF2BB);
						  }
#line 5480 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 2007 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SYSTEM); }
#line 5486 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 2009 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprpush(rwm,rwm->inam ,RWL_STACK_SYSTEM2STR);
	  }
#line 5494 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 2013 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_SYSTEM_BAD); yyerrok;
	    rwlexprpush0(rwm,RWL_STACK_SYSTEM);
	  }
#line 5503 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 2017 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ERLANG); }
#line 5509 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 2018 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ERLANG2); }
#line 5515 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 2020 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ERLANGK); }
#line 5521 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 2022 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_NORMALRANDOM); }
#line 5527 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 2023 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ISNULL); }
#line 5533 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 2025 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ACCESS); }
#line 5539 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 2027 "rwlparser.y" /* yacc.c:1646  */
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
#line 5554 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 2038 "rwlparser.y" /* yacc.c:1646  */
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
#line 5569 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 2049 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprpush(rwm, rwm->inam, RWL_STACK_SERVERRELEASE);
	  }
#line 5577 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 2053 "rwlparser.y" /* yacc.c:1646  */
    {
	    // push RWL_T_NULL to make exprfinish work
	    rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    rwlerror(rwm, RWL_ERROR_DBFUN_NEED_IDENT, "serverrelease"); yyerrok;
	  }
#line 5587 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 2059 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprpush(rwm, rwm->inam, RWL_STACK_OPENSESSIONCOUNT);
	  }
#line 5595 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 2063 "rwlparser.y" /* yacc.c:1646  */
    {
	    // push RWL_T_NULL to make exprfinish work
	    rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    rwlerror(rwm, RWL_ERROR_DBFUN_NEED_IDENT, "opensessioncount"); yyerrok;
	  }
#line 5605 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 2069 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprpush(rwm, rwm->inam, RWL_STACK_ACTIVESESSIONCOUNT);
	  }
#line 5613 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 2073 "rwlparser.y" /* yacc.c:1646  */
    {
	    // push RWL_T_NULL to make exprfinish work
	    rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    rwlerror(rwm, RWL_ERROR_DBFUN_NEED_IDENT, "activesessioncount"); yyerrok;
	  }
#line 5623 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 2079 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->sqname)
	      rwlexprpush(rwm, rwm->sqname, RWL_STACK_SQL_ID);
	  }
#line 5632 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 2084 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprpush(rwm, rwm->inam, RWL_STACK_SQL_ID);
	  }
#line 5640 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 2088 "rwlparser.y" /* yacc.c:1646  */
    {
	    // push RWL_T_NULL to make exprfinish work
	    rwlexprpush(rwm, rwl_nullp, RWL_STACK_NUM);
	    rwlerror(rwm, RWL_ERROR_SQLID_NEED_IDENT); yyerrok;
	  }
#line 5650 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 2095 "rwlparser.y" /* yacc.c:1646  */
    { 
	      /* element with furlev=0 is used by procedure call */
	      if (0xffff == rwm->furlev)
		rwlsevere(rwm, "[rwlparser-funcdepth:%d]", (ub4)rwm->furlev+1);
	      else
	      {
		rwm->furlev++;
		rwlensurerecfunc(rwm, rwm->furlev);
	      }
	      rwm->recfuncprs[rwm->furlev].aacnt = 0;
	      // lookahead in parser may have seen an identifier
	      rwm->recfuncprs[rwm->furlev].funcn = (yychar == RWL_T_IDENTIFIER) 
	      	? rwm->previnam : rwm->inam;
	    }
#line 5669 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 2111 "rwlparser.y" /* yacc.c:1646  */
    { 
	      /* syntactically, the number of arguments doesn't matter
	         so we just provide the actual arg count to exprpush2
		 and deal with a mis-count there
	      */
	      rwlexprpush2(rwm, rwm->recfuncprs[rwm->furlev].funcn
	        , RWL_STACK_FUNCCALL
		, rwm->recfuncprs[rwm->furlev].aacnt );
	      if (rwm->furlev)
	        rwm->furlev--;
	    }
#line 5685 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 2123 "rwlparser.y" /* yacc.c:1646  */
    {
            rwlexprpush(rwm, 0, RWL_STACK_DBSECONDS);
          }
#line 5693 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 2127 "rwlparser.y" /* yacc.c:1646  */
    {
            rwlexprpush(rwm, 0, RWL_STACK_OCISECONDS);
          }
#line 5701 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 2131 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (!bit(rwm->m2flags, RWL_P2_NOWARNDEP) && bit(rwm->m3flags,RWL_P3_MISBRACK))
	      rwlerror(rwm, RWL_ERROR_MISSING_EMPTY_BRACKETS, "runseconds");
	    rwlexprpush(rwm, 0, RWL_STACK_RUNSECONDS);
	  }
#line 5711 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 2137 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (!bit(rwm->m2flags, RWL_P2_NOWARNDEP) && bit(rwm->m3flags,RWL_P3_MISBRACK))
	      rwlerror(rwm, RWL_ERROR_MISSING_EMPTY_BRACKETS, "epochseconds");
	    rwlexprpush(rwm, 0, RWL_STACK_EPOCHSECONDS);
	  }
#line 5721 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 2156 "rwlparser.y" /* yacc.c:1646  */
    { rwm->recfuncprs[rwm->furlev].aacnt++; }
#line 5727 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 2162 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ISNULL); }
#line 5733 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 2163 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ISNOTNULL); }
#line 5739 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 2169 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_MINUS); }
#line 5745 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 2170 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_NOT); }
#line 5751 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 2171 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_NOT); }
#line 5757 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 2172 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_BITWISE_NOT); }
#line 5763 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 2177 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_MUL); }
#line 5769 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 2178 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_DIV); }
#line 5775 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 2179 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_MOD); }
#line 5781 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 2184 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_ADD); }
#line 5787 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 2185 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SUB); }
#line 5793 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 2189 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_BITWISE_LEFT_SHIFT); }
#line 5799 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 2190 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_BITWISE_RIGHT_SHIFT); }
#line 5805 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 2195 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LESS); }
#line 5811 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 2196 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_GREATER); }
#line 5817 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 2197 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_LESSEQ); }
#line 5823 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 2198 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_GREATEREQ); }
#line 5829 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 2199 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_BETWEEN); }
#line 5835 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 2204 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_EQUAL); }
#line 5841 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 2205 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_NOTEQUAL); }
#line 5847 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 2210 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_BITWISE_AND); }
#line 5853 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 2215 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_BITWISE_XOR); }
#line 5859 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 2220 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_BITWISE_OR); }
#line 5865 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 2226 "rwlparser.y" /* yacc.c:1646  */
    { 
	    // With AND (and OR) skipdep is used to mark
	    // the expression element we need to skip until
	    // in case the first condition is false (true for OR)
	    rwm->ptail->branchtype = RWL_EXP_ANDBRANCH;
	    if (rwm->skipdep++ >= UB1MAXVAL)
	      rwlsevere(rwm, "[rwlparser-andskip:%d]", rwm->skipdep);
	    rwm->ptail->skipnxt = rwm->skipdep;
	  }
#line 5879 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 2236 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprpush2(rwm,0,RWL_STACK_AND, rwm->skipdep);
	    rwm->skipdep--;
	  }
#line 5888 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 2245 "rwlparser.y" /* yacc.c:1646  */
    {  
	    // see comment above
	    rwm->ptail->branchtype = RWL_EXP_ORBRANCH;
	    if (rwm->skipdep++ >= UB1MAXVAL)
	      rwlsevere(rwm, "[rwlparser-orskip:%d]", rwm->skipdep);
	    rwm->ptail->skipnxt = rwm->skipdep;
	  }
#line 5900 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 2253 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprpush2(rwm,0,RWL_STACK_OR ,rwm->skipdep);
	    rwm->skipdep--;
	  }
#line 5909 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 2262 "rwlparser.y" /* yacc.c:1646  */
    {  
	    // With conditional execution we mark the condition
	    // with RWL_EXP_CONDBRANCH1
	    rwm->ptail->branchtype = RWL_EXP_CONDBRANCH1;
	    if (rwm->skipdep++ >= UB1MAXVAL)
	      rwlsevere(rwm, "[rwlparser-condskip:%d]", rwm->skipdep);
	    rwm->ptail->skipnxt = rwm->skipdep;
	  }
#line 5922 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 2271 "rwlparser.y" /* yacc.c:1646  */
    {
	    // and the place of ':' (really ELSE) with 
	    // RWL_EXP_CONDBRANCH2
	    rwm->ptail->branchtype = RWL_EXP_CONDBRANCH2;
	    rwm->ptail->skipnxt = rwm->skipdep;
	  }
#line 5933 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 2278 "rwlparser.y" /* yacc.c:1646  */
    {  
	    // And the actual conditional is the "end if" place
	    rwlexprpush2(rwm,0,RWL_STACK_CONDITIONAL, rwm->skipdep);
	    rwm->skipdep--;
	  }
#line 5943 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 2287 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_CONCAT); }
#line 5949 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 2292 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_CONCAT); }
#line 5955 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 2303 "rwlparser.y" /* yacc.c:1646  */
    { rwm->supsemerr = 0; }
#line 5961 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 2308 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
	    {
	      rwm->ifdirdep = 0; // since we may be skipping over $else, $endif
	      YYACCEPT;
	    }
	  }
#line 5973 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 2316 "rwlparser.y" /* yacc.c:1646  */
    { yyerrok; }
#line 5979 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 2318 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_COMMAND_NOT_LOCAL, "threads"); yyerrok; }
#line 5985 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 2325 "rwlparser.y" /* yacc.c:1646  */
    { yyerrok; }
#line 5991 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 2327 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_COMMAND_NOT_LOCAL, "run"); yyerrok; }
#line 5997 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 2331 "rwlparser.y" /* yacc.c:1646  */
    { yyerrok; }
#line 6003 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 2333 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_NOT_LOCAL, "database"); yyerrok; }
#line 6009 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 2335 "rwlparser.y" /* yacc.c:1646  */
    { yyerrok ; }
#line 6015 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 2338 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_NOT_LOCAL, "random procedure array"); yyerrok; }
#line 6021 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 2341 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_NOT_LOCAL, "random string array"); yyerrok; }
#line 6027 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 2346 "rwlparser.y" /* yacc.c:1646  */
    { 
	    switch(rwm->supsemerr)
	    {
	      case RWL_SUPSEM_PROC:
	        rwlerror(rwm, RWL_ERROR_UNNEEDED_SEMICOLON_AFTER, "procedure header");
	      break;

	      case RWL_SUPSEM_FUNC:
	        rwlerror(rwm, RWL_ERROR_UNNEEDED_SEMICOLON_AFTER, "function header");
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
#line 6056 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 2371 "rwlparser.y" /* yacc.c:1646  */
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
#line 6075 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 2386 "rwlparser.y" /* yacc.c:1646  */
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
#line 6090 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 2403 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_LOB); yyerrok; }
#line 6096 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 2410 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_INT); yyerrok; }
#line 6102 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 2416 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_DBL); yyerrok; }
#line 6108 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 2418 "rwlparser.y" /* yacc.c:1646  */
    { 
		rwm->declslen=RWL_DEFAULT_STRLEN;
	      }
#line 6116 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 2424 "rwlparser.y" /* yacc.c:1646  */
    {
	      if (RWL_TYPE_CANCELLED == rwm->pval.vtype)
		rwm->declslen = 1; // kind of a kludge, but this prevents doube
				   // error reporting if using local variable
	      else
	      {
		rwm->declslen = rwm->pval.ival;
	      }
	    }
#line 6130 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 2438 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_STR); yyerrok; }
#line 6136 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 2440 "rwlparser.y" /* yacc.c:1646  */
    { 
		rwm->declslen=RWL_DEFAULT_RAWLEN;
	      }
#line 6144 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 2446 "rwlparser.y" /* yacc.c:1646  */
    {
	      if (RWL_TYPE_CANCELLED == rwm->pval.vtype)
		rwm->declslen = 1; // kind of a kludge, but this prevents doube
				   // error reporting if using local variable
	      else
	      {
		rwm->declslen = rwm->pval.ival;
	      }
	    }
#line 6158 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 2460 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_RAW); yyerrok; }
#line 6164 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 2462 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (bit(rwm->m4flags, RWL_P4_FILEISRAW))
	      rwm->dtype=RWL_TYPE_RAWFILE;
	    else
	      rwm->dtype=RWL_TYPE_FILE;
	    //if (rwm->codename)
	    //  rwlerror(rwm, RWL_ERROR_NOT_LOCAL, "file");
	  }
#line 6177 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 2474 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DECL_FILE); yyerrok; }
#line 6183 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 2479 "rwlparser.y" /* yacc.c:1646  */
    {
	      if (rwm->rslerror)
		rwm->rslerror--;
	      else
	      {
		// while end is just like a loop end 
		rwlcodeadd0(rwm, RWL_CODE_FORL); 
		bic(rwm->recursl[rwm->rsldepth].rslflags, RWL_RSLFLAG_WHILOP);
		if (bit(rwm->m1flags, RWL_P_DXEQMAIN) && 0==rwm->rsldepth)
		{
		  rwlcodecall(rwm);
		  bic(rwm->m1flags, RWL_P_DXEQMAIN);
		  if (bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
		  {
		    rwm->ifdirdep = 0; // since we may be skipping over $else, $endif
		    YYACCEPT;
		  }
		}
	      }
	    }
#line 6208 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 2502 "rwlparser.y" /* yacc.c:1646  */
    {
	      if (rwm->rslerror)
		rwm->rslerror--;
	      else
	      {
		rwlcodeadd0(rwm, RWL_CODE_ENDIF); 
		// Note the RWL_CODE_ENDCUR decreases rsldepth, so it must
		// be done in both if/else parts belwo
		if (bit(rwm->m1flags, RWL_P_DXEQMAIN) && 0==rwm->rsldepth)
		{
		  //rwlcodeadd0(rwm, RWL_CODE_ENDIF); 
		  rwlcodecall(rwm);
		  bic(rwm->m1flags, RWL_P_DXEQMAIN);
		  if (bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
		  {
		    rwm->ifdirdep = 0; // since we may be skipping over $else, $endif
		    YYACCEPT;
		  }

		}
	      }
	    }
#line 6235 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 2526 "rwlparser.y" /* yacc.c:1646  */
    { if (!rwm->rslerror) rwlcodeadd0(rwm, RWL_CODE_ELSE); }
#line 6241 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 2529 "rwlparser.y" /* yacc.c:1646  */
    {
	      if (rwm->rslerror)
		rwm->rslerror--;
	      else
	      {
		rwlcodeadd0(rwm, RWL_CODE_ENDIF); 
		// be done in both if/else parts belwo
		if (bit(rwm->m1flags, RWL_P_DXEQMAIN) && 0==rwm->rsldepth)
		{
		  //rwlcodeadd0(rwm, RWL_CODE_ENDIF); 
		  rwlcodecall(rwm);
		  bic(rwm->m1flags, RWL_P_DXEQMAIN);
		  if (bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
		  {
		    rwm->ifdirdep = 0; // since we may be skipping over $else, $endif
		    YYACCEPT;
		  }
		}
	      }
	    }
#line 6266 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 2552 "rwlparser.y" /* yacc.c:1646  */
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
		  bis(rwm->m1flags, RWL_P_DXEQMAIN);
		  bic(rwm->m4flags,RWL_P4_PROCHASSQL);
		  rwlcodehead(rwm, 1 /*thrcount*/);
		}
		rwlexprbeg(rwm);
	      }
#line 6308 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 2594 "rwlparser.y" /* yacc.c:1646  */
    {
	      switch (rwm->recursl[rwm->rsldepth].rsllityp)
	      {
		case RWL_LI_COMMA:
		  { 
		    rwlcodeaddp(rwm, RWL_CODE_LIEND, rwm->recursl[rwm->rsldepth].rsllihead);
		    if (bit(rwm->m1flags, RWL_P_DXEQMAIN) && 0==rwm->rsldepth)
		    {
		      rwlcodecall(rwm);
		      bic(rwm->m1flags, RWL_P_DXEQMAIN);
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
		    if (rwm->recursl[rwm->rsldepth].loopvar)
		    {
		      /*
		      if loopvar exist (head was good)
		      create the loopvar := loopvar + 1 expression

		      first push loopvar 
		      */
		      rwlexprbeg(rwm);
		      rwlexprpush(rwm, rwm->recursl[rwm->rsldepth].loopvar, RWL_STACK_VAR);

		      // push the constant 1
		      rwlexprpush(rwm, rwl_onep, RWL_STACK_NUM);

		      // push +
		      rwlexprpush(rwm,0,RWL_STACK_ADD);

		      // push assign and finish
		      rwlexprpush(rwm, rwm->recursl[rwm->rsldepth].loopvar, RWL_STACK_ASN);
		      estk = rwlexprfinish(rwm);
		      rwlcodeaddp(rwm, RWL_CODE_ASSIGN, estk);

		      rwlcodeadd0(rwm, RWL_CODE_FORL);
		    }
		    if (bit(rwm->m1flags, RWL_P_DXEQMAIN) && 0==rwm->rsldepth)
		    {
		      rwlcodecall(rwm);
		      bic(rwm->m1flags, RWL_P_DXEQMAIN);
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
		  , rwm->rsldepth, rwm->recursl[rwm->rsldepth].rslmisc);
	      }
	    }
#line 6380 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 2663 "rwlparser.y" /* yacc.c:1646  */
    { 
		  rwlerror(rwm, RWL_ERROR_LOOP);
		  rwm->recursl[rwm->rsldepth].rsllityp = RWL_LI_BAD;
		  yyerrok;
		}
#line 6390 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 2670 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprpush0(rwm,RWL_STACK_SYSTEM); }
#line 6396 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 2673 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprpush(rwm,rwm->inam ,RWL_STACK_SYSTEM2STR);
	  }
#line 6404 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 2678 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_SYSTEM_BAD); yyerrok;
	    rwlexprclear(rwm);
	  }
#line 6413 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 2683 "rwlparser.y" /* yacc.c:1646  */
    {
		/* start a dummy assignment such that expression gets executed */
		rwm->assignvar = RWL_DUMMY_VAR;
		rwm->assignoper = RWL_T_ASSIGN;
		rwlexprbeg(rwm);
	      }
#line 6424 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 2692 "rwlparser.y" /* yacc.c:1646  */
    {
		/* start expression for assign */
		rwm->assignvar = rwm->inam;
		rwlexprbeg(rwm);
	      }
#line 6434 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 2701 "rwlparser.y" /* yacc.c:1646  */
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
#line 6450 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 2713 "rwlparser.y" /* yacc.c:1646  */
    {
	        rwm->assignvar = rwm->codename;
		rwlexprbeg(rwm);
	      }
#line 6459 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 2718 "rwlparser.y" /* yacc.c:1646  */
    {
		rwl_estack *estk;
		if (!rwm->codename)
		{
		  rwlerror(rwm, RWL_ERROR_RETURN_OUTSIDE_CODE);
		  rwlexprclear(rwm);
		}
		else
		{
		  if (bit(rwm->m1flags, RWL_P_DXEQMAIN))
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
#line 6492 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 2747 "rwlparser.y" /* yacc.c:1646  */
    { 
		  rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		  rwlexprclear(rwm);
		  yyerrok;
		}
#line 6502 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 2754 "rwlparser.y" /* yacc.c:1646  */
    {
	        rwm->assignvar = rwm->codename;
		rwlexprbeg(rwm);
	      }
#line 6511 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 2759 "rwlparser.y" /* yacc.c:1646  */
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
		  if (!bit(rwm->m1flags, RWL_P_DXEQMAIN))
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
#line 6544 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 2789 "rwlparser.y" /* yacc.c:1646  */
    { 
		  rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		  rwlexprclear(rwm);
		  yyerrok;
		}
#line 6554 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 2797 "rwlparser.y" /* yacc.c:1646  */
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
#line 6572 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 2811 "rwlparser.y" /* yacc.c:1646  */
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
#line 6587 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 2825 "rwlparser.y" /* yacc.c:1646  */
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
#line 6605 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 2841 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (!rwm->codename)
	    {
	      rwlerror(rwm, RWL_ERROR_NOT_DONE_IN_MAIN, "modify database leak");
	      goto dontmoddbpool;
	    }
	    else
	      rwlcodeadd0(rwm, RWL_CODE_MODDBLEAK);
	  }
#line 6619 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 2852 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->codename)
	      rwlcodeadd0(rwm, RWL_CODE_SESRELDROP);
	  }
#line 6628 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 2858 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->codename)
	      rwlcodeadd0(rwm, RWL_CODE_SESRELDROP);
	  }
#line 6637 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 2864 "rwlparser.y" /* yacc.c:1646  */
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
#line 6652 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 2876 "rwlparser.y" /* yacc.c:1646  */
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
#line 6667 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 2888 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->codename)
	      rwlcodeadd0(rwm, RWL_CODE_SHIFT);
	    else
	      if (!bit(rwm->m2flags, RWL_P2_NOEXEC))
		rwlshiftdollar(rwm->mxq, &rwm->loc);
	  }
#line 6679 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 2897 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->codename)
	      rwlcodeadd0(rwm, RWL_CODE_GETRUSAGE);
	    else
	      if (!bit(rwm->m2flags, RWL_P2_NOEXEC))
		rwlgetrusage(rwm->mxq, 0);
	  }
#line 6691 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 330:
#line 2906 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->msqlinam = rwm->inam; rwm->mqbdtyp = 0;
	      bis(rwm->mxq->t1flags, RWL_P_FINDVAR_NOERR);
	      rwm->modsqlvar = rwlfindvar2(rwm->mxq, rwm->msqlinam, RWL_VAR_NOGUESS, rwm->codename);
	      bic(rwm->mxq->t1flags, RWL_P_FINDVAR_NOERR);
	      if (rwm->modsqlvar>=0 && RWL_TYPE_SQL != rwm->mxq->evar[rwm->modsqlvar].vtype)
	      {
		rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2
		  , rwm->mxq->evar[rwm->modsqlvar].stype, rwm->inam, "modify sql");
		rwm->modsqlvar = RWL_VAR_INVALID;
	      }
	    }
#line 6708 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 2919 "rwlparser.y" /* yacc.c:1646  */
    {
	      // since we didn't show the error above, show it now
	      if(rwm->modsqlvar < 0)
	        (void)rwlfindvar2(rwm->mxq, rwm->msqlinam, RWL_VAR_NOGUESS, rwm->codename);
	    }
#line 6718 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 2927 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_MODIFY); yyerrok; }
#line 6724 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 336:
#line 2940 "rwlparser.y" /* yacc.c:1646  */
    {
	      /* This code can cause lookahead */
	      rwlerror(rwm, RWL_ERROR_BAD_ARG_LIST);
	      rwlexprclear(rwm);
	      yyerrok;
	    }
#line 6735 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 337:
#line 2947 "rwlparser.y" /* yacc.c:1646  */
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
#line 6754 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 340:
#line 2966 "rwlparser.y" /* yacc.c:1646  */
    { rwm->supsemerr = RWL_SUPSEM_EMBSQL; }
#line 6760 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 2972 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m3flags, RWL_P3_IMMPARSEFOR); }
#line 6766 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 345:
#line 2974 "rwlparser.y" /* yacc.c:1646  */
    { bic(rwm->m3flags, RWL_P3_IMMPARSEFOR); }
#line 6772 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 348:
#line 2980 "rwlparser.y" /* yacc.c:1646  */
    {

	      rwm->recursl[rwm->rsldepth].rslmisc = RWL_VAR_NOGUESS;  // see finish wrapper test below
	      bic(rwm->m4flags,RWL_P4_PROCHASSQL); // ?? Should we really do this here?
	      if (rwm->codename) // building a procedure
	      {
	        sb4 l2;
		l2 = RWL_VAR_NOGUESS;
		if (bit(rwm->m2flags, RWL_P2_AT))
		{
		  l2 = rwlfindvar(rwm->mxq, rwm->dbname, RWL_VAR_NOGUESS);
		  if (l2>=0)
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
		}
		// If at clause was found, wrap the whole statement list 
		// with NEWDB/OLDDB and PCINCR/PCDECR
		if (l2>=0)
		{
		  rwlcodeaddpu(rwm, RWL_CODE_NEWDB, rwm->dbname, l2);
		  rwlcodeadd0(rwm, RWL_CODE_PCINCR);
		  rwm->recursl[rwm->rsldepth].rslmisc = l2;
		}
		// or DEFDB
		if (bit(rwm->m2flags, RWL_P2_ATDEFAULT))
		{
		  rwlcodeadd0(rwm, RWL_CODE_DEFDB);
		  rwlcodeadd0(rwm, RWL_CODE_PCINCR);
		  rwm->recursl[rwm->rsldepth].rslmisc = RWL_VAR_DEFDB; // see end wrapper below
		}
		
		++rwm->rsldepth;
		rwlensurersl(rwm, (ub4) rwm->rsldepth);
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
		bis(rwm->m1flags, RWL_P_DXEQMAIN);
		++rwm->rsldepth;
		rwlensurersl(rwm, (ub4) rwm->rsldepth);
		rwlcodehead(rwm, 1 /*thrcount*/);
	      }

	      rwm->recursl[rwm->rsldepth].rslpcbrk = 0;
	      bis(rwm->recursl[rwm->rsldepth].rslflags, RWL_RSLFLAG_MAYBRK);
	      ++rwm->rsldepth;
	      rwlensurersl(rwm, (ub4) rwm->rsldepth);
	    }
#line 6855 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 3061 "rwlparser.y" /* yacc.c:1646  */
    {
	      if (--rwm->rsldepth<0)
	      {
		rwlsevere(rwm, "[rwlparser-unnest1:%d]", rwm->rsldepth);
		++rwm->rsldepth;
	      }
	      if (rwm->rslerror)
		rwm->rslerror--;
	      else
	      {
		sb4 l2;
		rwlfinishbreaks(rwm, rwm->ccount);
		if (--rwm->rsldepth<0)
		{
		  rwlsevere(rwm, "[rwlparser-unnest2:%d]", rwm->rsldepth);
		  ++rwm->rsldepth;
		}
	        l2 = rwm->recursl[rwm->rsldepth].rslmisc; // will be RWL_VAR_NOGUESS if no at was seen
		// similar to ifterminator
		if (bit(rwm->m1flags, RWL_P_DXEQMAIN) && 0==rwm->rsldepth)
		{
		  rwlcodecall(rwm);
		  bic(rwm->m1flags, RWL_P_DXEQMAIN);
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
#line 6896 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 350:
#line 3099 "rwlparser.y" /* yacc.c:1646  */
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
		    if (!bit(rwm->mxq->evar[l].num.valflags, RWL_VALUE_FILEREPNOTOPEN))
		      rwlerror(rwm,RWL_ERROR_WRITE_NOT_OPEN, rwm->mxq->evar[l].vname);
		    bis(rwm->mxq->evar[l].num.valflags, RWL_VALUE_FILEREPNOTOPEN);
		  }
		}
	      }
	      else
		rwlerror(rwm,RWL_ERROR_INCORRECT_TYPE2, rwm->mxq->evar[l].stype, rwm->inam, "file");
	    }
	  }
#line 6932 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 351:
#line 3132 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_NO_FILE_FOR_FFLUSH);
	    yyerrok;
	  }
#line 6941 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 352:
#line 3139 "rwlparser.y" /* yacc.c:1646  */
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
#line 6986 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 353:
#line 3182 "rwlparser.y" /* yacc.c:1646  */
    {
	      if (rwm->filvarn>=0)
	      {
		if (!rwm->codename) // generating code in main for direct execution
		{
		  rwm->totthr = 0;
		  
		  bis(rwm->m1flags, RWL_P_DXEQMAIN);
		  bic(rwm->m4flags,RWL_P4_PROCHASSQL);
		  rwlcodehead(rwm, 1 /*thrcount*/); // prepare wrapper procedure
		}

		rwm->recursl[rwm->rsldepth].rslmisc = RWL_VAR_NOGUESS;
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

	      rwm->recursl[rwm->rsldepth].rslpcbrk = 0;
	    }
#line 7020 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 354:
#line 3214 "rwlparser.y" /* yacc.c:1646  */
    {
	      if (rwm->rslerror)
		rwm->rslerror--;
	      else
	      {
		rwlcodeadd0(rwm, RWL_CODE_READEND); 
		if (bit(rwm->m1flags, RWL_P_DXEQMAIN) && 0==rwm->rsldepth)
		{
		  rwlcodecall(rwm); // end of wrapper if in main
		  bic(rwm->m1flags, RWL_P_DXEQMAIN);
		  if (bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
		  {
		    rwm->ifdirdep = 0; // since we may be skipping over $else, $endif
		    YYACCEPT;
		  }
		}
	      }
	    }
#line 7043 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 3242 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->m4flags,RWL_P4_RWPLINE);
		rwlerror(rwm, RWL_ERROR_NO_FILE_FOR_WRITE);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 7054 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 362:
#line 3251 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->m4flags,RWL_P4_RWPLINE);
		rwlerror(rwm, RWL_ERROR_NO_STRING_FOR_SPRINTF);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 7065 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 364:
#line 3260 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->m4flags,RWL_P4_RWPLINE);
		rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 7076 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 366:
#line 3270 "rwlparser.y" /* yacc.c:1646  */
    {
	      // Note that we do not document this syntax without comma
	      if (rwm->filenam)
		rwlerror(rwm, RWL_ERROR_COMMA_IS_RECOMMENDED, rwm->filenam
		, bit(rwm->m4flags,RWL_P4_RWPLINE) ? "writeline" : "write");
	    }
#line 7087 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 369:
#line 3282 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->m4flags,RWL_P4_RWPLINE);
		rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 7098 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 370:
#line 3290 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->m4flags,RWL_P4_RWPLINE);
		rwlerror(rwm, RWL_ERROR_NO_FILE_FOR_WRITE);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 7109 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 371:
#line 3298 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->m4flags,RWL_P4_RWPLINE);
		rwlerror(rwm, RWL_ERROR_NO_FILE_FOR_WRITE);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 7120 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 372:
#line 3306 "rwlparser.y" /* yacc.c:1646  */
    { 
		if (rwm->codename)
		  rwlcodeadd0(rwm, RWL_CODE_NEWLINE);
		else
		  fputs(bit(rwm->m4flags, RWL_P4_CRNLWRITELINE) ? "\r\n" : "\n", stdout);
		bic(rwm->m4flags,RWL_P4_RWPLINE|RWL_P4_PRINTBLANK);
	      }
#line 7132 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 374:
#line 3316 "rwlparser.y" /* yacc.c:1646  */
    { 
		bic(rwm->m4flags,RWL_P4_RWPLINE);
		rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 7143 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 376:
#line 3324 "rwlparser.y" /* yacc.c:1646  */
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
		if (bit(rwm->recursl[d].rslflags, RWL_RSLFLAG_MAYBRK))
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
		if (bit(rwm->recursl[d].rslflags, RWL_RSLFLAG_BRKCUR))
		  rwlcodeaddxu(rwm, RWL_CODE_CURBRK, (sb4)rwm->recursl[d].rslpcbrk);
		else
		  rwlcodeaddxu(rwm, RWL_CODE_BREAK, (sb4)rwm->recursl[d].rslpcbrk);
		rwm->recursl[d].rslpcbrk = scc;
	      }
	    }
	  }
#line 7182 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 377:
#line 3360 "rwlparser.y" /* yacc.c:1646  */
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
#line 7222 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 378:
#line 3397 "rwlparser.y" /* yacc.c:1646  */
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
#line 7265 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 379:
#line 3437 "rwlparser.y" /* yacc.c:1646  */
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
#line 7286 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 380:
#line 3454 "rwlparser.y" /* yacc.c:1646  */
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
		  bis(rwm->m1flags, RWL_P_DXEQMAIN);
		  rwlcodehead(rwm, 1 /*thrcount*/);
		}
	        rwlloophead(rwm);
	      }
	      rwm->recursl[rwm->rsldepth].rslpcbrk = 0;
	      bis(rwm->recursl[rwm->rsldepth].rslflags, RWL_RSLFLAG_MAYBRK);
	    }
#line 7312 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 381:
#line 3478 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (!bit(rwm->m2flags, RWL_P2_CBLOCK_BAD))
	        rwlloopfinish(rwm);
	      bic(rwm->recursl[rwm->rsldepth].rslflags, RWL_RSLFLAG_MAYBRK);
	      bic(rwm->m2flags, RWL_P2_CBLOCK);
	      // just like ifterminator
	      if (bit(rwm->m1flags, RWL_P_DXEQMAIN) && 0==rwm->rsldepth)
	      {
	        rwlcodecall(rwm);
		bic(rwm->m1flags, RWL_P_DXEQMAIN);
		if (bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
		{
		  rwm->ifdirdep = 0; // since we may be skipping over $else, $endif
		  YYACCEPT;
		}
	      }
	    }
#line 7334 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 382:
#line 3497 "rwlparser.y" /* yacc.c:1646  */
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
#line 7358 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 384:
#line 3519 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_MISSING_SEMICOLON); yyerrok; }
#line 7364 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 385:
#line 3526 "rwlparser.y" /* yacc.c:1646  */
    {
            /* handle procedure call with arguments
             * as if it were a function call
             */
            if (0 != rwm->furlev)
              rwlsevere(rwm,"[rwlparser-recurse2:%d]", rwm->furlev);
            bic(rwm->m2flags, RWL_P2_AT|RWL_P2_ATDEFAULT);
            rwm->recfuncprs[0].aacnt = 0;
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
            rwm->recfuncprs[0].aacnt = 0;
            rwm->recfuncprs[0].funcn = (yychar == RWL_T_IDENTIFIER)
              ? rwm->previnam
              : rwm->inam;
            rwlexprbeg(rwm);
            }
#line 7403 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 386:
#line 3564 "rwlparser.y" /* yacc.c:1646  */
    {
              if (rwm->codename) // building a procedure
              {
                rwl_estack *estk;
                sb4 l2 = RWL_VAR_NOGUESS;
                if (bit(rwm->m2flags, RWL_P2_AT))
                {
                  l2 = rwlfindvar(rwm->mxq, rwm->dbname, RWL_VAR_NOGUESS);
		  if (l2>=0)
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
                }
                // If at clause was found, wrap the RWL_STACK_PROCCALL/RWL_CODE_STACK
                // with NEWDB/OLDDB
                if (l2>=0)
                  rwlcodeaddpu(rwm, RWL_CODE_NEWDB, rwm->dbname, l2);
                // or with DEFDB
                if (bit(rwm->m2flags, RWL_P2_ATDEFAULT))
                  rwlcodeadd0(rwm, RWL_CODE_DEFDB);

                rwlexprpush2(rwm, rwm->recfuncprs[0].funcn
                  , RWL_STACK_PROCCALL
                  , rwm->recfuncprs[0].aacnt );
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
                rwlexprpush2(rwm, rwm->recfuncprs[0].funcn
                  , RWL_STACK_PROCCALL
                  , rwm->recfuncprs[0].aacnt );

                if ((estk = rwlexprfinish(rwm)))
                {
                  rwlexpreval(estk, &rwm->loc, rwm->mxq, 0);
                  rwlexprdestroy(rwm, estk);
                }
                else
                  rwlexprclear(rwm);
              }
            }
#line 7495 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 387:
#line 3655 "rwlparser.y" /* yacc.c:1646  */
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
#line 7523 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 388:
#line 3679 "rwlparser.y" /* yacc.c:1646  */
    {
	  rwm->lobwritedata = rwlexprfinish(rwm);
	  rwm->loboffset = 0;
	}
#line 7532 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 390:
#line 3688 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->loboffset = rwlexprfinish(rwm);
	  }
#line 7540 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 391:
#line 3695 "rwlparser.y" /* yacc.c:1646  */
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
#line 7567 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 392:
#line 3718 "rwlparser.y" /* yacc.c:1646  */
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
#line 7593 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 394:
#line 3744 "rwlparser.y" /* yacc.c:1646  */
    {
	  rwm->lobreadlength = rwlexprfinish(rwm);
	}
#line 7601 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 395:
#line 3748 "rwlparser.y" /* yacc.c:1646  */
    {
	  rwm->loboffset = rwlexprfinish(rwm);
	}
#line 7609 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 396:
#line 3754 "rwlparser.y" /* yacc.c:1646  */
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
#line 7759 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 397:
#line 3904 "rwlparser.y" /* yacc.c:1646  */
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
		  if (sq->asiz <= 0 && !bit(sq->sqflags, RWL_SQFLAG_DYNAMIC | RWL_SQLFLAG_IDUSE))
		    rwlerror(rwm, RWL_ERROR_DEFAULT_ARRAY, rwm->scname, rwm->mxq->defasiz);
		  if (sq->asiz <=0 && bit(sq->sqflags, RWL_SQLFLAG_IDUSE))
		    bis(sq->sqflags,RWL_SQFLAG_ARMEM);
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
		bis(rwm->m1flags, RWL_P_DXEQMAIN);
		rwlcodehead(rwm, 1 /*thrcount*/); // prepare wrapper procedure
	      }

	      rwm->recursl[rwm->rsldepth].rslmisc = RWL_VAR_NOGUESS;
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
		  rwm->recursl[rwm->rsldepth].rslmisc = RWL_VAR_DEFDB;
		}
	        rwlcodeaddpu(rwm, RWL_CODE_CURLOOP, rwm->scname, (ub4)l); // increases rsldepth
	      }

	      // important to do it here as cursorand in use means increase rsldepth below
	      bis(rwm->recursl[rwm->rsldepth].rslflags, RWL_RSLFLAG_MAYBRK|RWL_RSLFLAG_BRKCUR);

	      if (rwm->cursorand)
	      {
		rwlcodeaddp(rwm, RWL_CODE_IF, rwm->cursorand);
		bis(rwm->recursl[rwm->rsldepth].rslflags, RWL_RSLFLAG_CURAND);
	      }

	      failurecursor:
	      rwm->loc.errlin = 0;
	    }
#line 7873 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 398:
#line 4016 "rwlparser.y" /* yacc.c:1646  */
    {
	      if (rwm->rslerror)
		rwm->rslerror--;
	      else
	      {
		if (bit(rwm->recursl[rwm->rsldepth].rslflags, RWL_RSLFLAG_CURAND))
		{
		  bic(rwm->recursl[rwm->rsldepth].rslflags, RWL_RSLFLAG_CURAND);
		  rwlcodeadd0(rwm, RWL_CODE_ELSE);
		  rwlcodeadd0(rwm, RWL_CODE_CANCELCUR);
		  rwlcodeadd0(rwm, RWL_CODE_ENDIF); 
		}
		// just like ifterminator
		rwlcodeadd0(rwm, RWL_CODE_ENDCUR); 
		if (RWL_VAR_DEFDB == rwm->recursl[rwm->rsldepth].rslmisc) // did we pick default database
		{
		  rwlcodeadd0(rwm, RWL_CODE_PCDECR);
		  rwlcodeadd0(rwm, RWL_CODE_OLDDB);
		}
		if (bit(rwm->m1flags, RWL_P_DXEQMAIN) && 0==rwm->rsldepth)
		{
		  rwlcodecall(rwm); // end of wrapper if in main
		  bic(rwm->m1flags, RWL_P_DXEQMAIN);
		  if (bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
		  {
		    rwm->ifdirdep = 0; // since we may be skipping over $else, $endif
		    YYACCEPT;
		  }
		}
	      }
	      rwm->loc.errlin = 0;
	    }
#line 7910 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 399:
#line 4052 "rwlparser.y" /* yacc.c:1646  */
    {  
	    // This syntax is not documented
	    bic(rwm->m3flags, RWL_P3_CLHEADFOR);
	    rwlerror(rwm, RWL_ERROR_LEGACY_CONTROLLOOP_SYNTAX);
	  }
#line 7920 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 400:
#line 4057 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m3flags, RWL_P3_CLHEADFOR); }
#line 7926 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 401:
#line 4061 "rwlparser.y" /* yacc.c:1646  */
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
#line 7943 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 402:
#line 4077 "rwlparser.y" /* yacc.c:1646  */
    { if (bit(rwm->m3flags, RWL_P3_CLHEADFOR))
	      rwlerror(rwm, RWL_ERROR_MIX_LEGACY_CLOOP);
	  }
#line 7951 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 403:
#line 4081 "rwlparser.y" /* yacc.c:1646  */
    { if (bit(rwm->m3flags, RWL_P3_CLHEADFOR))
	      rwlerror(rwm, RWL_ERROR_MIX_LEGACY_CLOOP);
	  }
#line 7959 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 404:
#line 4085 "rwlparser.y" /* yacc.c:1646  */
    { if (!bit(rwm->m3flags, RWL_P3_CLHEADFOR))
	      rwlerror(rwm, RWL_ERROR_MIX_LEGACY_CLOOP);
	  }
#line 7967 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 407:
#line 4096 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7973 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 408:
#line 4098 "rwlparser.y" /* yacc.c:1646  */
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
#line 7990 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 409:
#line 4110 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 7996 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 410:
#line 4112 "rwlparser.y" /* yacc.c:1646  */
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
#line 8015 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 411:
#line 4126 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 8021 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 412:
#line 4128 "rwlparser.y" /* yacc.c:1646  */
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
#line 8040 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 413:
#line 4142 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 8046 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 414:
#line 4144 "rwlparser.y" /* yacc.c:1646  */
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
#line 8063 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 415:
#line 4156 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 8069 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 416:
#line 4158 "rwlparser.y" /* yacc.c:1646  */
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
#line 8099 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 417:
#line 4187 "rwlparser.y" /* yacc.c:1646  */
    { rwm->ynqueue = 0; }
#line 8105 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 418:
#line 4188 "rwlparser.y" /* yacc.c:1646  */
    { rwm->ynqueue = RWL_QUEUE_EVERY; }
#line 8111 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 419:
#line 4189 "rwlparser.y" /* yacc.c:1646  */
    { rwm->ynqueue = RWL_NOQUEUE_EVERY; }
#line 8117 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 420:
#line 4193 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->scname = rwm->inam; 
	    bic(rwm->m2flags, RWL_P2_AT|RWL_P2_ATDEFAULT);
	  }
#line 8126 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 421:
#line 4198 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->scname = rwm->inam;
	    bic(rwm->m2flags, RWL_P2_AT|RWL_P2_ATDEFAULT);
	  }
#line 8135 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 422:
#line 4203 "rwlparser.y" /* yacc.c:1646  */
    { 
	      bis(rwm->m2flags, RWL_P2_ATDEFAULT);
	    }
#line 8143 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 423:
#line 4207 "rwlparser.y" /* yacc.c:1646  */
    {
	      bic(rwm->m2flags, RWL_P2_AT|RWL_P2_ATDEFAULT);
	      // lookahead may have consumed the next identifier
	      rwm->scname = (yychar == RWL_T_IDENTIFIER)
	        ? rwm->previnam
	        : rwm->inam;
	    }
#line 8155 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 424:
#line 4215 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->dbname = rwm->inam; 
	      bis(rwm->m2flags, RWL_P2_AT);
	    }
#line 8164 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 425:
#line 4224 "rwlparser.y" /* yacc.c:1646  */
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
#line 8183 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 426:
#line 4239 "rwlparser.y" /* yacc.c:1646  */
    {
	    bis(rwm->sqsav->sqflags, RWL_SQLFLAG_IBUSE);
	    bis(rwm->sqsav->sqflags, RWL_SQLFLAG_IDUSE);
	    bic(rwm->sqsav->sqflags, RWL_SQLFLAG_ARDYN); 
	    bic(rwm->sqsav->sqflags, RWL_SQLFLAG_ARDML); 
	    bic(rwm->m3flags, RWL_P3_IMMEDSQL); 
	    if (bit(rwm->m4flags, RWL_P4_AMPERSAND) && rwldynarcomp(rwm))
	    {
	      if (rwm->codename && bit(rwm->m3flags, RWL_P3_SQLWASQRY) && rwm->embqryasiz)
		rwm->sqsav->asiz = rwm->embqryasiz;
	      if (rwm->codename 
	            && bit(rwm->m3flags, RWL_P3_SQLWASDML)
	            && bit(rwm->m4flags, RWL_P4_AMPDMLARRAY)
		    && rwm->embdmlasiz)
	      {
		bis(rwm->sqsav->sqflags, RWL_SQLFLAG_ARDML); 
		rwm->sqsav->asiz = rwm->embdmlasiz;
	      }
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
	      bis(rwm->sqsav->sqflags, RWL_SQLFLAG_ICASE);
	    rwm->sqlfile = 0; /* not from a file */
	  }
#line 8224 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 427:
#line 4280 "rwlparser.y" /* yacc.c:1646  */
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
#line 8242 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 428:
#line 4295 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->m3flags, RWL_P3_IMMEDSQL); 
	    bis(rwm->sqsav->sqflags, RWL_SQLFLAG_IBUSE);
	    bis(rwm->sqsav->sqflags, RWL_SQLFLAG_IDUSE);
	    if (bit(rwm->m3flags,RWL_P3_IMPLCASE))
	      bis(rwm->sqsav->sqflags, RWL_SQLFLAG_ICASE);
	  }
#line 8254 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 429:
#line 4304 "rwlparser.y" /* yacc.c:1646  */
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
	      if (!bit(sq->sqflags, RWL_SQLFLAG_DYIREL) || !bit(sq->sqflags, RWL_SQLFLAG_DYIREL))
	      {
		rwlsevere(rwm, "[rwlparser-notdyn:%s;0x%x]", sq->vname, sq->sqflags);
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
#line 8295 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 431:
#line 4342 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_SQL_WRONG) ;
	    yyerrok;
	  }
#line 8304 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 433:
#line 4350 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 8310 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 434:
#line 4351 "rwlparser.y" /* yacc.c:1646  */
    {
	    if ((rwm->msqlstk = rwlexprfinish(rwm)))
	      bis(rwm->m3flags, RWL_P3_IMMISDYN); // now dynamic
	    else
	    {
	      rwm->mxq->evar[rwm->sqsavvarn].vtype = RWL_TYPE_CANCELLED;
	      rwm->mxq->evar[rwm->sqsavvarn].stype = "cancelled (sql)";
	    }
	  }
#line 8324 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 435:
#line 4363 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->sqllino = rwm->loc.lineno;
	  }
#line 8332 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 439:
#line 4372 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "sql") ;
	  }
#line 8340 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 442:
#line 4383 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bis(rwm->m2flags, RWL_P2_ATDEFAULT);
	  }
#line 8348 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 443:
#line 4387 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dbname = rwm->inam; 
	    bis(rwm->m2flags, RWL_P2_AT);
	  }
#line 8357 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 444:
#line 4395 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->m2flags, RWL_P2_AT|RWL_P2_ATDEFAULT);
	  }
#line 8365 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 445:
#line 4399 "rwlparser.y" /* yacc.c:1646  */
    { 
	      bis(rwm->m2flags, RWL_P2_ATDEFAULT);
	    }
#line 8373 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 446:
#line 4403 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->dbname = rwm->inam; 
	      bis(rwm->m2flags, RWL_P2_AT);
	    }
#line 8382 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 448:
#line 4413 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->dbname = 0;
	      bis(rwm->m2flags, RWL_P2_ATDEFAULT); /* explict choose standard DB */
	    }
#line 8391 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 449:
#line 4419 "rwlparser.y" /* yacc.c:1646  */
    { 
	      rwm->dbname = rwm->inam;
	      bis(rwm->m2flags, RWL_P2_AT); /* named DB */
	    }
#line 8400 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 450:
#line 4424 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_NO_DATABASE_NAME); yyerrok; }
#line 8406 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 451:
#line 4426 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_MISSING_SEMICOLON); yyerrok; }
#line 8412 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 454:
#line 4434 "rwlparser.y" /* yacc.c:1646  */
    { 
	      if (!rwm->codename || bit(rwm->addvarbits,RWL_IDENT_PRIVATE))
	      { 
	        rwm->decvarn = rwladdvar(rwm, rwm->inam, (ub4)rwm->dtype, rwm->addvarbits);
	      }
	      else  
	      {
		ub2 lflags = RWL_IDENT_LOCAL | (rwm->addvarbits & RWL_IDENT_THRSUM);
		rwm->decvarn = rwladdvar2(rwm, rwm->inam, (ub4)rwm->dtype
		  , lflags, rwm->codename);
		if (rwm->decvarn>=0)
		{
		  rwlensurelvarr(rwm, rwm->lvcount + 1);
		  rwm->lvarr[rwm->lvcount].aname = rwm->inam;
		  rwm->lvarr[rwm->lvcount].aguess = rwm->decvarn;
		  rwm->lvarr[rwm->lvcount].atype = rwm->dtype;
		  rwm->lvarr[rwm->lvcount].aslen =
		      RWL_TYPE_STR == rwm->dtype ? (ub8)(rwm->declslen+1)
		    : RWL_TYPE_RAW == rwm->dtype ? (ub8)rwm->declslen
		    : 0;
		  rwm->lvarr[rwm->lvcount].aflags = rwm->addvarbits & RWL_IDENT_THRSUM;
		  rwm->lvcount++;
		}
	      }
	    }
#line 8442 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 455:
#line 4460 "rwlparser.y" /* yacc.c:1646  */
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
		    if (bit(rwm->mxq->evar[rwm->decvarn].idflags, RWL_IDENT_LOCAL) || rwm->codename)
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
#line 8519 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 457:
#line 4537 "rwlparser.y" /* yacc.c:1646  */
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
#line 8546 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 458:
#line 4560 "rwlparser.y" /* yacc.c:1646  */
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
		          && bit(rwm->mxq->evar[rwm->decvarn].idflags, RWL_IDENT_IGN_DECL_ASSIGN))
		      {
			/* just finish the stack and do nothing */
			if ((estk = rwlexprfinish(rwm)))
			{
			  rwlexprdestroy(rwm, estk);
			}
			bic(rwm->mxq->evar[rwm->decvarn].idflags, RWL_IDENT_IGN_DECL_ASSIGN);
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
#line 8602 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 463:
#line 4628 "rwlparser.y" /* yacc.c:1646  */
    {
            rwl_estack *estk;
            estk = rwlexprfinish(rwm);
	    // If in main for direct execution, wrap a header
	    if (!rwm->codename)
	    {
	      rwm->totthr = 0;
	      // now in lexer: rwm->lnosav = rwm->loc.lineno;
	      bic(rwm->m4flags,RWL_P4_PROCHASSQL);
	      bis(rwm->m1flags, RWL_P_DXEQMAIN);
	      rwlcodehead(rwm, 1 /*thrcount*/);
	    }
	    rwlcodeaddp(rwm, RWL_CODE_IF, estk);
          }
#line 8621 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 464:
#line 4643 "rwlparser.y" /* yacc.c:1646  */
    {
              rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
              rwlexprclear(rwm);
              rwm->rslerror++; // to prevent attempting else/endif code generation
              yyerrok;
            }
#line 8632 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 465:
#line 4652 "rwlparser.y" /* yacc.c:1646  */
    {
            rwl_estack *estk;
            estk = rwlexprfinish(rwm);
	    // If in main for direct execution, wrap a header
	    if (!rwm->codename)
	    {
	      rwm->totthr = 0;
	      // now in lexer: rwm->lnosav = rwm->loc.lineno;
	      bic(rwm->m4flags,RWL_P4_PROCHASSQL);
	      bis(rwm->m1flags, RWL_P_DXEQMAIN);
	      rwlcodehead(rwm, 1 /*thrcount*/);
	    }
	    rwlcodeaddp(rwm, RWL_CODE_ELSEIF, estk);
          }
#line 8651 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 466:
#line 4667 "rwlparser.y" /* yacc.c:1646  */
    {
              rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
              rwlexprclear(rwm);
              rwm->rslerror++; // to prevent attempting else/endif code generation
              yyerrok;
            }
#line 8662 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 467:
#line 4676 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_LEGACY_WHILE_SYNTAX);
	  }
#line 8670 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 468:
#line 4680 "rwlparser.y" /* yacc.c:1646  */
    {
	    bis(rwm->recursl[rwm->rsldepth].rslflags, RWL_RSLFLAG_WHILOP);
	  }
#line 8678 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 469:
#line 4686 "rwlparser.y" /* yacc.c:1646  */
    {
            rwl_estack *estk;
            estk = rwlexprfinish(rwm);
	    // If in main for direct execution, wrap a header
	    if (!rwm->codename)
	    {
	      rwm->totthr = 0;
	      // now in lexer: rwm->lnosav = rwm->loc.lineno;
	      bis(rwm->m1flags, RWL_P_DXEQMAIN);
	      rwlcodehead(rwm, 1 /*thrcount*/);
	    }
	    // While starts just like if does
	    rwlcodeaddp(rwm, RWL_CODE_IF, estk);
	    rwm->recursl[rwm->rsldepth].rslpcbrk = 0;
	    bis(rwm->recursl[rwm->rsldepth].rslflags, RWL_RSLFLAG_MAYBRK);
          }
#line 8699 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 470:
#line 4703 "rwlparser.y" /* yacc.c:1646  */
    {
              rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
              rwlexprclear(rwm);
              rwm->rslerror++; // to prevent attempting else/endif code generation
              yyerrok;
            }
#line 8710 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 471:
#line 4710 "rwlparser.y" /* yacc.c:1646  */
    {
              rwlerror(rwm, RWL_ERROR_UNEXPECTED_KEYWORD, "loop");
              rwlexprclear(rwm);
              rwm->rslerror++; // to prevent attempting else/endif code generation
              yyerrok;
            }
#line 8721 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 476:
#line 4727 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (RWL_TYPE_STR == rwm->dtype)
	    {
	      rwlerror(rwm, RWL_ERROR_CANNOT_BE_THSUM, "string");
	      goto nothreadssum;
	    }
	    bis(rwm->addvarbits,RWL_IDENT_THRSUM);
	    nothreadssum:
	      ;
	  }
#line 8736 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 477:
#line 4738 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (rwm->codename)
	      rwlerror(rwm, RWL_ERROR_NO_LOCAL_SUMGLOB);
	    else
	      bis(rwm->addvarbits,RWL_IDENT_GLOBAL);
	  }
#line 8747 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 478:
#line 4748 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->declslen=RWL_DEFAULT_RAWLEN;
	    rwm->dtype=RWL_TYPE_RAW;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 8758 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 479:
#line 4755 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->declslen=RWL_DEFAULT_RAWLEN;
	    rwm->dtype=RWL_TYPE_RAW;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 8768 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 480:
#line 4764 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dtype=RWL_TYPE_STR;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 8778 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 481:
#line 4770 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->dtype=RWL_TYPE_STR;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 8787 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 482:
#line 4778 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dtype=RWL_TYPE_INT;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 8797 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 483:
#line 4784 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->dtype=RWL_TYPE_INT;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 8806 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 484:
#line 4792 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->dtype=RWL_TYPE_DBL;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 8816 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 485:
#line 4798 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->dtype=RWL_TYPE_DBL;
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 8825 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 486:
#line 4806 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 8834 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 487:
#line 4811 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 8842 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 488:
#line 4817 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_CLOB; }
#line 8848 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 489:
#line 4818 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_BLOB; }
#line 8854 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 490:
#line 4819 "rwlparser.y" /* yacc.c:1646  */
    { rwm->dtype=RWL_TYPE_NCLOB; }
#line 8860 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 491:
#line 4823 "rwlparser.y" /* yacc.c:1646  */
    { rwm->sqllino = rwm->loc.lineno;}
#line 8866 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 492:
#line 4824 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	    bic(rwm->m2flags, RWL_P2_BADSQLFILTXT);
	    bic(rwm->m3flags, RWL_P3_IMMEDSQL); 
	    bic(rwm->m3flags, RWL_P3_IMMISDYN); 
	    rwm->sqllen = 0;
	    rwm->sqname = rwm->inam;
	  }
#line 8880 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 494:
#line 4835 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_SQL_WRONG); yyerrok;
	  }
#line 8888 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 495:
#line 4838 "rwlparser.y" /* yacc.c:1646  */
    { rwm->sqllino = rwm->loc.lineno;}
#line 8894 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 496:
#line 4839 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bic(rwm->m2flags, RWL_P2_BADSQLFILTXT);
	    bic(rwm->m3flags, RWL_P3_IMMEDSQL); 
	    bic(rwm->m3flags, RWL_P3_IMMISDYN); 
	    rwm->sqllen = 0;
	    rwm->sqname = rwm->inam;
	  }
#line 8907 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 498:
#line 4849 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_SQL_WRONG); yyerrok;
	  }
#line 8915 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 501:
#line 4859 "rwlparser.y" /* yacc.c:1646  */
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
		bis(rwm->sqsav->sqflags, RWL_SQLFLAG_IBUSE);
	      if (bit(rwm->m3flags,RWL_P3_ALLIMPLDEF))
		bis(rwm->sqsav->sqflags, RWL_SQLFLAG_IDUSE);
	      if (bit(rwm->m3flags,RWL_P3_IMPLCASE))
		bis(rwm->sqsav->sqflags, RWL_SQLFLAG_ICASE);
	      if (bit(rwm->m3flags,RWL_P3_BINDOUTNAME))
	      {
		bis(rwm->sqsav->sqflags, RWL_SQLFLAG_BONAM);
		rwm->sqsav->boname = rwm->boname;
	      }
	      rwm->mxq->evar[ll].vdata = rwm->sqsav;
	      rwm->sqsav->sqllino = rwm->mxq->evar[ll].loc.lineno = rwm->sqllino;

	      bis(rwm->sqsav->sqflags, RWL_SQFLAG_DYNAMIC);
	      rwm->sqsav->vname = rwm->sqname; /* used for error reporting only */
	      if (rwm->codename)
	      {
		rwlensurelvarr(rwm, rwm->lvcount + 1);
		rwm->lvarr[rwm->lvcount].aname = rwm->sqname;
		rwm->lvarr[rwm->lvcount].aguess = ll;
		rwm->lvarr[rwm->lvcount].atype = RWL_TYPE_SQL;
		rwm->lvarr[rwm->lvcount].aslen = 0;
		rwm->lvarr[rwm->lvcount].aflags = 0;
		rwm->lvcount++;
	      }
	    }
	  }
#line 8960 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 502:
#line 4901 "rwlparser.y" /* yacc.c:1646  */
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

	    if (rwm->sqsav->asiz && bit(rwm->sqsav->sqflags, RWL_SQFLAG_IGNERR))
	      rwlerror(rwm, RWL_ERROR_SQL_ARRAY_AND_IGNERR);

	  }
#line 8995 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 503:
#line 4935 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->m4flags, RWL_P4_AMPERSAND) && rwldynarcheck(rwm))
	    {
	      rwlerror(rwm, RWL_ERROR_CANNOT_AMPREP_HERE, "named sql declaration");
	      rwm->mxq->evar[rwm->sqsavvarn].vtype = RWL_TYPE_CANCELLED;
	      rwm->mxq->evar[rwm->sqsavvarn].stype = "cancelled (sql)";
	    }
	  }
#line 9008 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 505:
#line 4948 "rwlparser.y" /* yacc.c:1646  */
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
		bis(rwm->sqsav->sqflags, RWL_SQLFLAG_IBUSE);
	      if (bit(rwm->m3flags,RWL_P3_ALLIMPLDEF))
		bis(rwm->sqsav->sqflags, RWL_SQLFLAG_IDUSE);
	      if (bit(rwm->m3flags,RWL_P3_IMPLCASE))
		bis(rwm->sqsav->sqflags, RWL_SQLFLAG_ICASE);
	      if (bit(rwm->m3flags,RWL_P3_BINDOUTNAME))
	      {
		bis(rwm->sqsav->sqflags, RWL_SQLFLAG_BONAM);
		rwm->sqsav->boname = rwm->boname;
	      }
	      rwm->mxq->evar[ll].vdata = rwm->sqsav;
	      if (bit(rwm->m3flags, RWL_P3_IMMISDYN))
	      {
		// immediate sql is dynamic
		bis(rwm->sqsav->sqflags, RWL_SQFLAG_DYNAMIC | RWL_SQLFLAG_DYIREL);
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

		if (bit(rwm->m1flags, RWL_P_SQLWASPLS))
		  bis(rwm->sqsav->sqflags, RWL_SQFLAG_LEXPLS);
	      }
	      rwm->sqsav->vname = rwm->sqname; /* used for error reporting only */
	      if (rwm->codename)
	      {
		rwlensurelvarr(rwm, rwm->lvcount + 1);
		rwm->lvarr[rwm->lvcount].aname = rwm->sqname;
		rwm->lvarr[rwm->lvcount].aguess = ll;
		rwm->lvarr[rwm->lvcount].atype = RWL_TYPE_SQL;
		rwm->lvarr[rwm->lvcount].aslen = 0;
		rwm->lvarr[rwm->lvcount].aflags = 0;
		rwm->lvcount++;
	      }
	    }
	  }
#line 9081 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 506:
#line 5021 "rwlparser.y" /* yacc.c:1646  */
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
		  if (RWL_TYPE_STRBDRAW == bd->vtype)
		    tryabinraw++;
		    
		break;

		case RWL_BINDOUT_POS:
		case RWL_BINDOUT_NAME:
		  rwm->sqsav->outcount++;
		break;

	        case RWL_DEFINE:
		  rwm->sqsav->defcount++;

		  // define array only allowed for certain types
		  if (bit(rwm->sqsav->sqflags, RWL_SQFLAG_ARRAYD))
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
		    if (bit(rwm->sqsav->sqflags, RWL_SQLFLAG_IDUSE))
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
	      bic(rwm->sqsav->sqflags, RWL_SQFLAG_ARRAYD);

	    if (rwm->sqsav->asiz && bit(rwm->sqsav->sqflags, RWL_SQFLAG_IGNERR))
	      rwlerror(rwm, RWL_ERROR_SQL_ARRAY_AND_IGNERR);

	    /* array define */
	    if (rwm->sqsav->asiz>0 && bit(rwm->sqsav->sqflags, RWL_SQFLAG_ARRAYD))
	    {
	      if (!rwm->sqsav->defcount)
	      {
	        rwlerror(rwm, RWL_ERROR_BAD_DEFINE_ARRAY);
		bic(rwm->sqsav->sqflags, RWL_SQFLAG_ARRAYD);
	      }
	      else
	        rwlallocabd(rwm->mxq, 0, rwm->sqsav);
	    }

	    if (tryabinraw && rwm->sqsav->asiz>0)
	      rwlerror(rwm, RWL_ERROR_NO_BIND_RAW_ARRAY);

	    if (rwm->sqsav->asiz>0   // array set
	        && 0==rwm->sqsav->defcount // no explicit defines
		&& !bit(rwm->sqsav->sqflags, RWL_SQLFLAG_IDUSE) // not implicit define
		&& 0==tryabinraw // not experimental raw
	       )
	    {
	      if (!bit(rwm->sqsav->sqflags, RWL_SQLFLAG_IBUSE))
	      { 
		if (rwm->sqsav->outcount>0  || rwm->sqsav->bincount<1)
		  rwlerror(rwm, RWL_ERROR_BAD_BIND_ARRAY);
		else
		{
		  bis(rwm->sqsav->sqflags,RWL_SQFLAG_ARRAYB);
		  /* allocate array of bind pointers and indicators */
		  rwlallocabd(rwm->mxq, 0, rwm->sqsav);
		}
	      }
	    }
	  }
#line 9179 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 510:
#line 5125 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_BIND); yyerrok; }
#line 9185 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 512:
#line 5129 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_BINDOUT); yyerrok; }
#line 9191 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 514:
#line 5133 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_DEFINE); yyerrok; }
#line 9197 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 515:
#line 5135 "rwlparser.y" /* yacc.c:1646  */
    {
		  bis(rwm->sqsav->sqflags, RWL_SQFLAG_IGNERR);
		}
#line 9205 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 516:
#line 5139 "rwlparser.y" /* yacc.c:1646  */
    {
		  bic(rwm->sqsav->sqflags, RWL_SQFLAG_NOCURC);
		}
#line 9213 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 517:
#line 5143 "rwlparser.y" /* yacc.c:1646  */
    {
		  bis(rwm->sqsav->sqflags, RWL_SQFLAG_NOCURC);
		}
#line 9221 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 518:
#line 5148 "rwlparser.y" /* yacc.c:1646  */
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
#line 9243 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 519:
#line 5167 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ARRAY); yyerrok; }
#line 9249 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 520:
#line 5172 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_MISSING_SEMICOLON_IN_SQL); }
#line 9255 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 523:
#line 5178 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->sqsav->sqflags, RWL_SQFLAG_DYNAMIC))
	      rwlerror(rwm, RWL_ERROR_DEFINE_ARRAY_NOT_DYNAMIC);
	    else
	      bis(rwm->sqsav->sqflags, RWL_SQFLAG_ARRAYD);
	  }
#line 9266 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 526:
#line 5192 "rwlparser.y" /* yacc.c:1646  */
    {
	  // Note that it would not be too hard to replace
	  // the integer constant here by an expression
	  // which would make sense as that is what
	  // can be done with modify sql for dynamic sql
	  rwm->bdpos = rwm->ival; rwm->bdtyp=RWL_DEFINE;
	}
#line 9278 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 528:
#line 5201 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->sqsav->sqflags, RWL_SQLFLAG_IDUSE))
	      rwlerror(rwm, RWL_ERROR_IMPLICIT_ALREADY, "define");
	    bis(rwm->sqsav->sqflags, RWL_SQLFLAG_IDUSE);
	  }
#line 9288 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 531:
#line 5215 "rwlparser.y" /* yacc.c:1646  */
    { rwm->bdname = rwm->sval; rwm->bdtyp=RWL_BINDOUT_NAME; }
#line 9294 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 533:
#line 5217 "rwlparser.y" /* yacc.c:1646  */
    { 
	    // We could also use expression here, but we would
	    // of course need to check it was either a non-negative number
	    // or a string starting with :
	    rwm->bdpos = bit(rwm->m2flags,RWL_P2_BINDZERO) ? rwm->ival+1 : rwm->ival;
	    rwm->bdtyp=RWL_BINDOUT_POS; 
	  }
#line 9306 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 535:
#line 5225 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->bdtyp=RWL_BINDOUT_SAME;
	  }
#line 9314 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 537:
#line 5229 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlerror(rwm, RWL_ERROR_IMPLICIT_NOT_BINDOUT);
	  }
#line 9322 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 540:
#line 5240 "rwlparser.y" /* yacc.c:1646  */
    { rwm->bdname = rwm->sval; rwm->bdtyp=RWL_BIND_NAME; }
#line 9328 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 542:
#line 5242 "rwlparser.y" /* yacc.c:1646  */
    { 
	    // same comment as above
	    rwm->bdpos = bit(rwm->m2flags,RWL_P2_BINDZERO) ? rwm->ival+1 : rwm->ival;
	    rwm->bdtyp=RWL_BIND_POS; 
	  }
#line 9338 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 544:
#line 5248 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->bdtyp=RWL_BIND_SAME;
	  }
#line 9346 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 546:
#line 5252 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->sqsav->sqflags, RWL_SQLFLAG_IBUSE))
	      rwlerror(rwm, RWL_ERROR_IMPLICIT_ALREADY, "bind");
	    bis(rwm->sqsav->sqflags, RWL_SQLFLAG_IBUSE);
	  }
#line 9356 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 547:
#line 5260 "rwlparser.y" /* yacc.c:1646  */
    { bic(rwm->m2flags,RWL_P2_BINDRAW|RWL_P2_BINDSTR); }
#line 9362 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 548:
#line 5262 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwl_bindef *bd;
	    bd = rwlalloc(rwm, sizeof(rwl_bindef));
	    if (bit(rwm->m2flags, RWL_P2_BDNOTNULL))
	      bis(bd->bdflags, RWL_BDFLAG_NOIND);
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
	    if (bit(rwm->sqsav->sqflags, RWL_SQFLAG_DYNAMIC))
	      bis(bd->bdflags, RWL_BDFLAG_FIXED);

	    bd->vguess = rwlfindvar2(rwm->mxq, bd->vname, RWL_VAR_NOGUESS, rwm->codename);
	    if (bd->vguess>=0)
	    {
	      /* is it really a variable ?
	       * if yes, save type and length if string
	       */
	      if (bit(rwm->mxq->evar[bd->vguess].idflags,RWL_IDENT_GLOBAL))
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
                    if (bit(rwm->m2flags, RWL_P2_BINDSTR))
                    {
                      bd->vtype = RWL_TYPE_RAWBDSTR;
                    }
                    else
		      bd->vtype = RWL_TYPE_RAW;
		    bd->slen = rwm->mxq->evar[bd->vguess].num.slen;
		  break;

                  case RWL_TYPE_STR:
                    if (bit(rwm->m2flags, RWL_P2_BINDRAW))
                    {
                      bd->vtype = RWL_TYPE_STRBDRAW;
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
#line 9472 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 549:
#line 5370 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->inam = RWL_DUMMY_VAR;
	    rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2, "function", "runseconds", "bind/define");
	  }
#line 9481 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 550:
#line 5375 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->inam = RWL_DUMMY_VAR;
	    rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2, "function", "epochseconds", "bind/define");
	  }
#line 9490 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 551:
#line 5380 "rwlparser.y" /* yacc.c:1646  */
    { bic(rwm->m2flags, RWL_P2_BDNOTNULL); }
#line 9496 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 552:
#line 5382 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m2flags, RWL_P2_BDNOTNULL); }
#line 9502 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 553:
#line 5384 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->m1flags,RWL_DEBUG_ALLOWHACK))
	    {
	      bic(rwm->m2flags, RWL_P2_BDNOTNULL);
	      bis(rwm->m2flags,RWL_P2_BINDSTR);
	    }
	    else
	      rwlerror(rwm, RWL_ERROR_RESERVED_FOR_FUTURE, "string");
	  }
#line 9516 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 554:
#line 5394 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (bit(rwm->m1flags,RWL_DEBUG_ALLOWHACK))
	      bis(rwm->m2flags,RWL_P2_BINDRAW);
	    else
	      rwlerror(rwm, RWL_ERROR_RESERVED_FOR_FUTURE, "raw");
	  }
#line 9527 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 555:
#line 5404 "rwlparser.y" /* yacc.c:1646  */
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
		      bis(sq->sqflags, RWL_SQFLAG_LEAK);
		    }
	      }
	    }
	  }
#line 9548 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 556:
#line 5421 "rwlparser.y" /* yacc.c:1646  */
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
		      bic(sq->sqflags, RWL_SQFLAG_NOCURC);
		    }
	      }
	    }
	  }
#line 9569 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 557:
#line 5438 "rwlparser.y" /* yacc.c:1646  */
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
		      bis(sq->sqflags, RWL_SQFLAG_NOCURC);
		    }
	      }
	    }
	  }
#line 9590 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 558:
#line 5455 "rwlparser.y" /* yacc.c:1646  */
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
		if (bit(sq->sqflags,RWL_SQFLAG_ARRAYB))
		{
		  rwldummyonbad(rwm->mxq, rwm->defdb);
		  rwlflushsql(rwm->mxq, &rwm->loc, rwm->mxq->curdb, sq);
		}
		else
		  rwlerror(rwm, RWL_ERROR_ARRAY_EXECUTE_NOT_AB, sq->vname);
		  
	      }
	    }
	  }
#line 9617 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 559:
#line 5477 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 9623 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 560:
#line 5478 "rwlparser.y" /* yacc.c:1646  */
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
	      if (bit(sq->sqflags, RWL_SQFLAG_ARRAYD))
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
#line 9658 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 561:
#line 5509 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->modsqlvar>=0)
	    {
	      rwl_sql *sq;
	      sq = rwm->mxq->evar[rwm->modsqlvar].vdata;
	      if (!bit(sq->sqflags, RWL_SQFLAG_DYNAMIC))
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
#line 9683 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 562:
#line 5529 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 9689 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 563:
#line 5530 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (rwm->modsqlvar>=0 && (rwm->msqlstk = rwlexprfinish(rwm)))
	    { 
	      rwl_sql *sq;
	      sq = rwm->mxq->evar[rwm->modsqlvar].vdata;
	      if (!bit(sq->sqflags, RWL_SQFLAG_DYNAMIC))
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
#line 9715 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 564:
#line 5552 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (rwm->modsqlvar>=0)
	    { 
	      rwl_sql *sq;
	      sq = rwm->mxq->evar[rwm->modsqlvar].vdata;
	      if (bit(sq->sqflags, RWL_SQFLAG_DYNAMIC))
		rwm->mqbdtyp = RWL_DEFINE;
	      else
	      {
	        rwlerror(rwm, RWL_ERROR_STATIC_SQL_NO_MODIFY, "define");
		rwm->mqbdtyp = 0;
	      }
	    }
	  }
#line 9734 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 566:
#line 5567 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (rwm->modsqlvar>=0)
	    { 
	      rwl_sql *sq;
	      sq = rwm->mxq->evar[rwm->modsqlvar].vdata;
	      if (bit(sq->sqflags, RWL_SQFLAG_DYNAMIC))
		rwm->mqbdtyp = RWL_BIND_UNK;
	      else
	      {
	        rwlerror(rwm, RWL_ERROR_STATIC_SQL_NO_MODIFY, "bind");
		rwm->mqbdtyp = 0;
	      }
	    }
	  }
#line 9753 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 568:
#line 5582 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (rwm->modsqlvar>=0)
	    { 
	      rwl_sql *sq;
	      sq = rwm->mxq->evar[rwm->modsqlvar].vdata;
	      if (bit(sq->sqflags, RWL_SQFLAG_DYNAMIC))
		rwm->mqbdtyp = RWL_BINDOUT_UNK;
	      else
	      {
	        rwlerror(rwm, RWL_ERROR_STATIC_SQL_NO_MODIFY, "bindout");
		rwm->mqbdtyp = 0;
	      }
	    }
	  }
#line 9772 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 572:
#line 5602 "rwlparser.y" /* yacc.c:1646  */
    { rwlexprbeg(rwm); }
#line 9778 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 573:
#line 5604 "rwlparser.y" /* yacc.c:1646  */
    { rwm->msqlstk = rwlexprfinish(rwm); }
#line 9784 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 574:
#line 5606 "rwlparser.y" /* yacc.c:1646  */
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
#line 9840 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 575:
#line 5660 "rwlparser.y" /* yacc.c:1646  */
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
#line 9874 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 576:
#line 5690 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->mdbsphi = rwm->mdbsplo = rwlexprfinish(rwm);
	    if (!rwm->mdbsplo)
	      rwlexprclear(rwm);
	  }
#line 9884 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 577:
#line 5696 "rwlparser.y" /* yacc.c:1646  */
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
#line 9917 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 579:
#line 5728 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (!(rwm->mdbsphi = rwlexprfinish(rwm)))
	      rwlexprclear(rwm);
	  }
#line 9926 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 580:
#line 5735 "rwlparser.y" /* yacc.c:1646  */
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
#line 9950 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 582:
#line 5758 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m3flags, RWL_P3_SPFCONCAT); }
#line 9956 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 583:
#line 5759 "rwlparser.y" /* yacc.c:1646  */
    { bic(rwm->m3flags, RWL_P3_SPFCONCAT); }
#line 9962 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 584:
#line 5763 "rwlparser.y" /* yacc.c:1646  */
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
#line 9986 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 585:
#line 5783 "rwlparser.y" /* yacc.c:1646  */
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
#line 10004 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 586:
#line 5801 "rwlparser.y" /* yacc.c:1646  */
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
#line 10027 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 588:
#line 5823 "rwlparser.y" /* yacc.c:1646  */
    {
	  rwm->conhead = rwm->contail = 0;
	}
#line 10035 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 589:
#line 5827 "rwlparser.y" /* yacc.c:1646  */
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
#line 10060 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 592:
#line 5855 "rwlparser.y" /* yacc.c:1646  */
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
#line 10083 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 593:
#line 5876 "rwlparser.y" /* yacc.c:1646  */
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
#line 10108 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 594:
#line 5898 "rwlparser.y" /* yacc.c:1646  */
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
#line 10133 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 595:
#line 5922 "rwlparser.y" /* yacc.c:1646  */
    {  
	    bic(rwm->m4flags,RWL_P4_RWPLINE);
	    bic(rwm->m4flags,RWL_P4_PRINTTOFILE);
	  }
#line 10142 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 596:
#line 5927 "rwlparser.y" /* yacc.c:1646  */
    {  
	    bis(rwm->m4flags,RWL_P4_RWPLINE);
	    bic(rwm->m4flags,RWL_P4_PRINTTOFILE);
	  }
#line 10151 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 598:
#line 5935 "rwlparser.y" /* yacc.c:1646  */
    { bis(rwm->m4flags,RWL_P4_PRINTBLANK); }
#line 10157 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 600:
#line 5940 "rwlparser.y" /* yacc.c:1646  */
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
#line 10219 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 601:
#line 6001 "rwlparser.y" /* yacc.c:1646  */
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
#line 10255 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 602:
#line 6036 "rwlparser.y" /* yacc.c:1646  */
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
#line 10270 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 603:
#line 6050 "rwlparser.y" /* yacc.c:1646  */
    {  
	    bic(rwm->m4flags,RWL_P4_RWPLINE);
	  }
#line 10278 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 604:
#line 6054 "rwlparser.y" /* yacc.c:1646  */
    {  
	    bis(rwm->m4flags,RWL_P4_RWPLINE);
	  }
#line 10286 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 605:
#line 6062 "rwlparser.y" /* yacc.c:1646  */
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
#line 10339 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 606:
#line 6111 "rwlparser.y" /* yacc.c:1646  */
    { 
		rwlerror(rwm, RWL_ERROR_NO_VALID_EXPRESSION);
		rwlexprclear(rwm);
		yyerrok;
	      }
#line 10349 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 608:
#line 6121 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlerror(rwm, RWL_ERROR_MISSING_SEMICOLON);
	    yyerrok;
	  }
#line 10358 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 609:
#line 6128 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_ASSIGN; }
#line 10364 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 610:
#line 6129 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_GREATEQ; }
#line 10370 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 611:
#line 6130 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_RSHIFTASSIGN; }
#line 10376 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 612:
#line 6131 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_LESSEQ; }
#line 10382 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 613:
#line 6132 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_PIPEFROM; }
#line 10388 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 614:
#line 6133 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_PIPETO; }
#line 10394 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 616:
#line 6137 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_APPEND; }
#line 10400 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 617:
#line 6138 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_ASNADD; }
#line 10406 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 618:
#line 6139 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_ASNSUB; }
#line 10412 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 619:
#line 6140 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_ASNBIS; }
#line 10418 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 620:
#line 6141 "rwlparser.y" /* yacc.c:1646  */
    { rwm->assignoper = RWL_T_ASNBIC; }
#line 10424 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 621:
#line 6148 "rwlparser.y" /* yacc.c:1646  */
    {
		rwl_estack *estk;
		rwlexprpush(rwm, rwm->assignvar, RWL_STACK_ASN);
		estk = rwlexprfinish(rwm);
		rwlcodeaddp(rwm, RWL_CODE_ASSIGN, estk);
	      }
#line 10435 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 622:
#line 6155 "rwlparser.y" /* yacc.c:1646  */
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
		rwm->recursl[rwm->rsldepth].loopvar = rwm->assignvar;
		rwm->recursl[rwm->rsldepth].rslpcbrk = 0;
		rwm->recursl[rwm->rsldepth].rsllityp = RWL_LI_DOTDOT;
		bis(rwm->recursl[rwm->rsldepth].rslflags, RWL_RSLFLAG_MAYBRK);
	      }
#line 10465 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 624:
#line 6181 "rwlparser.y" /* yacc.c:1646  */
    {
		rwlcodeadd0(rwm, RWL_CODE_LIBEG);
		rwm->recursl[rwm->rsldepth].rsllihead 
		  = rwm->recursl[rwm->rsldepth].rsllitail
		  = (rwl_lilist *) rwlalloc(rwm, sizeof(rwl_lilist));
		rwm->recursl[rwm->rsldepth].loopvar = rwm->assignvar;
		rwm->recursl[rwm->rsldepth].rslpcbrk = 0;
		rwm->recursl[rwm->rsldepth].rsllityp = RWL_LI_COMMA;
		bis(rwm->recursl[rwm->rsldepth].rslflags, RWL_RSLFLAG_MAYBRK);
		rwlexprpush(rwm, rwm->assignvar, RWL_STACK_ASN);
		rwm->recursl[rwm->rsldepth].rsllitail->liexpr = rwlexprfinish(rwm);
	      }
#line 10482 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 626:
#line 6195 "rwlparser.y" /* yacc.c:1646  */
    { 
		rwlerror(rwm, RWL_ERROR_LOOP);
		rwlexprclear(rwm);
		// prevent attempting endloop code generation
		rwm->recursl[rwm->rsldepth].loopvar = 0;
		rwm->recursl[rwm->rsldepth].rsllityp = RWL_LI_BAD;
		bic(rwm->recursl[rwm->rsldepth].rslflags, RWL_RSLFLAG_MAYBRK);
		yyerrok;
	      }
#line 10496 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 629:
#line 6214 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwl_lilist *thisli = rwlalloc(rwm, sizeof(rwl_lilist));
	    rwlexprpush(rwm, rwm->recursl[rwm->rsldepth].loopvar, RWL_STACK_ASN);
	    thisli->liexpr = rwlexprfinish(rwm);
	    rwm->recursl[rwm->rsldepth].rsllitail->linxt = thisli;
	    rwm->recursl[rwm->rsldepth].rsllitail = thisli;
	  }
#line 10508 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 632:
#line 6234 "rwlparser.y" /* yacc.c:1646  */
    { 
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	    bis(rwm->addvarbits,RWL_IDENT_PRIVATE);
	  }
#line 10517 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 633:
#line 6239 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->addvarbits,RWL_IDENT_THRSPEC);
	  }
#line 10525 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 634:
#line 6246 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->m4flags, RWL_P4_FILEISRAW);
	  }
#line 10533 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 635:
#line 6250 "rwlparser.y" /* yacc.c:1646  */
    {
	    bis(rwm->m4flags, RWL_P4_FILEISRAW);
	  }
#line 10541 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 638:
#line 6258 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "execute") ; }
#line 10547 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 641:
#line 6265 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "loop") ; }
#line 10553 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 644:
#line 6272 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "if") ; yyerrok; }
#line 10559 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 647:
#line 6279 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (0 != rwlstrcmp(rwm->inam, rwm->sqname))
	      rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END2, "sql", rwm->sqname);
	  }
#line 10568 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 648:
#line 6284 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END2, "sql", rwm->sqname) ; yyerrok; }
#line 10574 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 650:
#line 6290 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (!rwm->rsldepth)
	      rwlsevere(rwm, "[rwlparser-rsldependwhile1]");
	    else
	    {
	      // -1 because we havent put the FORLEND yet
	      if (bit(rwm->recursl[rwm->rsldepth-1].rslflags, RWL_RSLFLAG_WHILOP))
		rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "loop");
	    }
	  }
#line 10589 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 651:
#line 6301 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (!rwm->rsldepth)
	      rwlsevere(rwm, "[rwlparser-rsldependwhile2]");
	    else
	    {
	      // -1 because we havent put the FORLEND yet
	      if (!bit(rwm->recursl[rwm->rsldepth-1].rslflags, RWL_RSLFLAG_WHILOP))
		rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "while");
	    }
	  }
#line 10604 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 652:
#line 6312 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (bit(rwm->recursl[rwm->rsldepth-1].rslflags, RWL_RSLFLAG_WHILOP))
	      rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "loop") ;
	    else
	      rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "while") ;
	    yyerrok;
	  }
#line 10616 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 653:
#line 6323 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->cursorand = 0;
	  }
#line 10624 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 654:
#line 6328 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->cursorand = rwlexprfinish(rwm);
	  }
#line 10632 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 656:
#line 6335 "rwlparser.y" /* yacc.c:1646  */
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
	    bic(rwm->m1flags, RWL_P_SQLWASPLS); /* not PL/SQL */

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
	      bis(rwm->m1flags,RWL_P_SQLWASPLS); 
	    rwlerror(rwm, RWL_ERROR_WARN_COMPILETIME_SQLTEXT, rwm->sqname);
	  }
#line 10691 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 657:
#line 6392 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->loc.errlin = 0;
	    rwm->sqlfile = 0; /* not from a file */
	  }
#line 10700 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 658:
#line 6397 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlexprbeg(rwm);
	  }
#line 10708 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 659:
#line 6401 "rwlparser.y" /* yacc.c:1646  */
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
		f = rwlfopen(rwm->mxq, &rwm->loc, rfn,"rb");
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
		    bic(rwm->m1flags, RWL_P_SQLWASPLS); /* not PL/SQL */

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
		      bis(rwm->m1flags,RWL_P_SQLWASPLS); 
		  }
		  fclose(f); // just ignore potential error
		}
	      }
	    }
	  }
#line 10793 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 660:
#line 6484 "rwlparser.y" /* yacc.c:1646  */
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
#line 10820 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 661:
#line 6507 "rwlparser.y" /* yacc.c:1646  */
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
#line 10866 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 662:
#line 6550 "rwlparser.y" /* yacc.c:1646  */
    { 
		rwlerror(rwm, RWL_ERROR_BAD_READLINE);
		yyerrok;
	      }
#line 10875 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 663:
#line 6557 "rwlparser.y" /* yacc.c:1646  */
    { rwm->reg_estk = rwm->str_estk = rwm->sub_estk = 0; }
#line 10881 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 664:
#line 6559 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->reg_estk = rwlexprfinish(rwm);
	  }
#line 10889 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 665:
#line 6563 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->str_estk = rwlexprfinish(rwm);
	  }
#line 10897 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 666:
#line 6567 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->sub_estk = rwlexprfinish(rwm);
	  }
#line 10905 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 667:
#line 6571 "rwlparser.y" /* yacc.c:1646  */
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
#line 10948 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 668:
#line 6610 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprclear(rwm);
	    rwlerror(rwm, RWL_ERROR_BAD_REGEX);
	    yyerrok;
	  }
#line 10958 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 669:
#line 6619 "rwlparser.y" /* yacc.c:1646  */
    {
	    bic(rwm->m2flags, RWL_P2_REGEXSUBG);
	  }
#line 10966 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 670:
#line 6623 "rwlparser.y" /* yacc.c:1646  */
    {
	    bis(rwm->m2flags, RWL_P2_REGEXSUBG);
	  }
#line 10974 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 671:
#line 6629 "rwlparser.y" /* yacc.c:1646  */
    { rwm->reg_estk = rwm->str_estk = 0; }
#line 10980 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 672:
#line 6631 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->reg_estk = rwlexprfinish(rwm);
	  }
#line 10988 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 673:
#line 6635 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->str_estk = rwlexprfinish(rwm);
	    rwm->idlist = rwm->idtail = 0;
	  }
#line 10997 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 674:
#line 6640 "rwlparser.y" /* yacc.c:1646  */
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
#line 11034 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 675:
#line 6674 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprclear(rwm);
	    rwlerror(rwm, RWL_ERROR_BAD_REGEX);
	    yyerrok;
	  }
#line 11044 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 676:
#line 6683 "rwlparser.y" /* yacc.c:1646  */
    { rwm->reg_estk = rwm->str_estk = 0; }
#line 11050 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 677:
#line 6685 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->reg_estk = rwlexprfinish(rwm);
	  }
#line 11058 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 678:
#line 6689 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwm->str_estk = rwlexprfinish(rwm);
	    rwm->idlist = rwm->idtail = 0;
	  }
#line 11067 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 679:
#line 6694 "rwlparser.y" /* yacc.c:1646  */
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
#line 11104 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 680:
#line 6728 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwlexprclear(rwm);
	    rwlerror(rwm, RWL_ERROR_BAD_REGEX);
	    yyerrok;
	  }
#line 11114 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 683:
#line 6741 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwl_idlist *newid = rwlalloc(rwm, sizeof(rwl_idlist));
	    
	    newid->idnam = rwm->inam;
	    newid->idnum = rwlfindvar2(rwm->mxq, rwm->inam, RWL_VAR_NOGUESS, rwm->codename);
	    if (newid->idnum>=0)
	    {
	      // Exists, check the type is good. For raw file reads, only a
	      // single raw variable is valid. Otherwise readline/read expect
	      // integer/double/string destinations.
	      if (   rwm->filvarn >= 0
	          && RWL_TYPE_RAWFILE == rwm->mxq->evar[rwm->filvarn].vtype)
	      {
	        if (RWL_TYPE_RAW != rwm->mxq->evar[newid->idnum].vtype)
	        {
	          rwlerror(rwm,RWL_ERROR_INCORRECT_TYPE2
		    , rwm->mxq->evar[newid->idnum].stype, rwm->inam, "read");
		  rwlfree(rwm, newid);
		  rwm->filvarn = RWL_VAR_INVALID; // continue parse, but avoid generation
	        }
	        else if (!rwm->idlist)
	        {
		  rwm->idtail = rwm->idlist = newid;
	        }
	        else
	        {
	          rwlerror(rwm,RWL_ERROR_RAW_READ_ONE_VAR
		    , rwm->mxq->evar[rwm->filvarn].vname);
		  rwlfree(rwm, newid);
		  rwm->filvarn = RWL_VAR_INVALID; // continue parse, but avoid generation
	        }
	      }
	      else switch (rwm->mxq->evar[newid->idnum].vtype)
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
#line 11183 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 684:
#line 6808 "rwlparser.y" /* yacc.c:1646  */
    {
		/* start a dummy assignment such that the system expression gets executed */
		rwm->assignvar = RWL_DUMMY_VAR;
		rwm->assignoper = RWL_T_ASSIGN;
		rwlexprbeg(rwm);
	      }
#line 11194 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 685:
#line 6817 "rwlparser.y" /* yacc.c:1646  */
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
#line 11214 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 686:
#line 6842 "rwlparser.y" /* yacc.c:1646  */
    {
	    if (bit(rwm->m5flags, RWL_P5_THREADRUN))
	      rwlerror(rwm, RWL_ERROR_THREADRUN_RECURSION);
	    bis(rwm->m5flags, RWL_P5_THREADRUN);
	    if (rwm->codename)
	    {
	      rwm->thrsavthreadlist = rwm->threadlist;
	      rwm->thrsavmythr = rwm->mythr;
	      rwm->thrsavtotthr = rwm->totthr;
	      rwm->threadlist = rwm->mythr = 0;
	    }
	    else if (rwm->threadlist)
	      rwlsevere(rwm, "[rwlparser-thrlistnotclean]");
	    if (!rwm->runloc.fname)
	    {
	      rwm->runloc.fname = rwlstrdup(rwm, rwm->loc.fname);
	      rwm->runloc.lineno = rwm->runloc.errlin = rwm->loc.lineno;
	    }
	    rwm->totthr = 0;
	    if (rwm->codename)
	    {
	      rwm->parsrunexec = rwlalloc(rwm, sizeof(rwl_runexec));
	      rwm->parsrunexec->runpc = rwm->ccount;
	      rwlcodeaddpu(rwm, RWL_CODE_THREADRUN, rwm->parsrunexec, 0);
	    }
	  }
#line 11245 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 687:
#line 6870 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwl_thrinfo *next;
	    rwm->loc.errlin = rwm->lexlino;
	    if (rwm->parsrunexec)
	    {
	      rwm->parsrunexec->threadlist = rwm->threadlist;
	      rwm->parsrunexec->totthr = rwm->totthr;
	      rwm->code[rwm->parsrunexec->runpc].ceptr1 = rwm->parsrunexec;
	      rwm->code[rwm->parsrunexec->runpc].ceint2 = (sb4) rwm->ccount;
	      rwm->threadlist = rwm->mythr = 0;
	      rwm->totthr = 0;
	      rwm->parsrunexec = 0;
	      rwm->threadlist = rwm->thrsavthreadlist;
	      rwm->mythr = rwm->thrsavmythr;
	      rwm->totthr = rwm->thrsavtotthr;
	      rwm->thrsavthreadlist = rwm->thrsavmythr = 0;
	      rwm->thrsavtotthr = 0;
	    }
	    else
	    {
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
	    }
	    bic(rwm->m5flags, RWL_P5_THREADRUN);
	    rwm->loc.errlin = 0;
	  }
#line 11287 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 688:
#line 6908 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ILLEGAL_THREAD); bic(rwm->m5flags, RWL_P5_THREADRUN); yyerrok; }
#line 11293 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 691:
#line 6918 "rwlparser.y" /* yacc.c:1646  */
    { 
	    if (rwm->codename)
	    {
	      rwm->thrsavcodename = rwm->codename;
	      rwm->thrsavccdbname = rwm->ccdbname;
	      rwm->thrsavcodeguess = rwm->codeguess;
	      rwm->thrsavlvarr = rwm->lvarr;
	      rwm->thrsavlvcount = rwm->lvcount;
	      rwm->thrsavfacnt = rwm->facnt;
	      rwm->thrsavm1flags = rwm->m1flags;
	      rwm->thrsavm2flags = rwm->m2flags;
	      rwm->thrsavm3flags = rwm->m3flags;
	      rwm->thrsavm4flags = rwm->m4flags;
	      rwm->thrsavm5flags = rwm->m5flags;
	    }
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
	    if (rwm->thrsavcodename && rwm->thrsavlvarr)
	    {
	      ub4 ci;
	      /* Value locals are captured into generated thread code.
	       * Local SQL declarations also need thread-local entries so names
	       * remain visible when wrapper-generated code contains run blocks.
	       * SQL, file, database, etc. locals are still not copy-captured.
	       */
	      if (rwm->thrsavlvcount > 1)
	      {
		rwm->mythr->captsrc = rwlalloc(rwm
		  , rwm->thrsavlvcount * sizeof(*rwm->mythr->captsrc));
		rwm->mythr->captdst = rwlalloc(rwm
		  , rwm->thrsavlvcount * sizeof(*rwm->mythr->captdst));
		rwm->mythr->captflags = rwlalloc(rwm
		  , rwm->thrsavlvcount * sizeof(*rwm->mythr->captflags));
	      }
	      for (ci=1; ci<rwm->thrsavlvcount; ci++)
	      {
		sb4 la;
		ub2 lflags;
		ub2 qflags;
		rwl_sql *sq;
		switch (rwm->thrsavlvarr[ci].atype)
		{
		  case RWL_TYPE_INT:
		  case RWL_TYPE_DBL:
		  case RWL_TYPE_STR:
		  case RWL_TYPE_RAW:
		  break;

		  case RWL_TYPE_SQL:
		    qflags = rwm->mxq->evar[rwm->thrsavlvarr[ci].aguess].idflags
		      & RWL_IDENT_INTERNAL;
		    la = rwladdvar2(rwm, rwm->thrsavlvarr[ci].aname
		      , RWL_TYPE_SQL, (ub2)(RWL_IDENT_LOCAL | qflags), rwm->codename);
		    if (la>=0)
		    {
		      sq = rwm->mxq->evar[rwm->thrsavlvarr[ci].aguess].vdata;
		      rwm->mxq->evar[la].vdata = rwlthrlocalsql(rwm, sq);
		      if (sq)
			rwm->mxq->evar[la].loc.lineno = sq->sqllino;
		      rwlensurelvarr(rwm, rwm->lvcount + 1);
		      rwm->lvarr[rwm->lvcount].aname = rwm->thrsavlvarr[ci].aname;
		      rwm->lvarr[rwm->lvcount].aguess = la;
		      rwm->lvarr[rwm->lvcount].atype = RWL_TYPE_SQL;
		      rwm->lvarr[rwm->lvcount].aslen = 0;
		      rwm->lvarr[rwm->lvcount].aflags = 0;
		      rwm->lvcount++;
		    }
		    continue;

		  default:
		    continue;
		}
		lflags = rwm->thrsavlvarr[ci].aflags & RWL_IDENT_THRSUM;
		la = rwladdvar2(rwm, rwm->thrsavlvarr[ci].aname
		  , rwm->thrsavlvarr[ci].atype
		  , RWL_IDENT_LOCAL | lflags, rwm->codename);
		if (la>=0)
		{
		  rwlensurelvarr(rwm, rwm->lvcount + 1);
		  rwm->lvarr[rwm->lvcount].aname = rwm->thrsavlvarr[ci].aname;
		  rwm->lvarr[rwm->lvcount].aguess = la;
		  rwm->lvarr[rwm->lvcount].atype = rwm->thrsavlvarr[ci].atype;
		  rwm->lvarr[rwm->lvcount].aslen = rwm->thrsavlvarr[ci].aslen;
		  rwm->lvarr[rwm->lvcount].aflags = lflags;
		  rwm->mythr->captsrc[rwm->mythr->captcnt] = ci;
		  rwm->mythr->captdst[rwm->mythr->captcnt] = rwm->lvcount;
		  rwm->mythr->captflags[rwm->mythr->captcnt] = lflags;
		  rwm->mythr->captcnt++;
		  rwm->lvcount++;
		}
	      }
	    }
	    ++rwm->rsldepth;
	    rwlensurersl(rwm, (ub4) rwm->rsldepth);
	    rwm->recursl[rwm->rsldepth].rslpcsav = 0;
	    rwm->recursl[rwm->rsldepth].rslmisc = 0;
	    rwm->supsemerr = RWL_SUPSEM_THREAD;
	    rwm->recursl[rwm->rsldepth].rslpcbrk = 0;
	    rwm->recursl[rwm->rsldepth].rslflags = 0;
	    rwm->recursl[rwm->rsldepth].rsllityp = 0;
	    rwm->recursl[rwm->rsldepth].rsllihead = 0;
	    rwm->recursl[rwm->rsldepth].rsllitail = 0;
	    rwm->recursl[rwm->rsldepth].loopvar = 0;
	  }
#line 11411 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 692:
#line 7034 "rwlparser.y" /* yacc.c:1646  */
    {
	    rwlcodetail(rwm);
	    if (--rwm->rsldepth<0)
	    {
	      rwlsevere(rwm, "[rwlparser-unnestthr:%d]", rwm->rsldepth);
	      ++rwm->rsldepth;
	    }
	    if (rwm->thrsavcodename)
	    {
	      rwm->codename = rwm->thrsavcodename;
	      rwm->ccdbname = rwm->thrsavccdbname;
	      rwm->codeguess = rwm->thrsavcodeguess;
	      rwm->lvarr = rwm->thrsavlvarr;
	      rwm->lvcount = rwm->thrsavlvcount;
	      rwm->facnt = rwm->thrsavfacnt;
	      rwm->m1flags = rwm->thrsavm1flags;
	      rwm->m2flags = rwm->thrsavm2flags;
	      rwm->m3flags = rwm->thrsavm3flags;
	      rwm->m4flags = rwm->thrsavm4flags;
	      rwm->m5flags = rwm->thrsavm5flags;
	      rwm->thrsavcodename = 0;
	      rwm->thrsavccdbname = 0;
	      rwm->thrsavlvarr = 0;
	    }
	  }
#line 11441 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 694:
#line 7061 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ILLEGAL_THREAD); yyerrok; }
#line 11447 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 696:
#line 7066 "rwlparser.y" /* yacc.c:1646  */
    { 
	    rwm->mythr->dbnam = rwm->inam;
	  }
#line 11455 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 699:
#line 7075 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "threads") ; }
#line 11461 "rwlparser.tab.c" /* yacc.c:1646  */
    break;

  case 702:
#line 7083 "rwlparser.y" /* yacc.c:1646  */
    { rwlerror(rwm, RWL_ERROR_ONLY_THIS_AFTER_END, "run") ; }
#line 11467 "rwlparser.tab.c" /* yacc.c:1646  */
    break;


#line 11471 "rwlparser.tab.c" /* yacc.c:1646  */
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
