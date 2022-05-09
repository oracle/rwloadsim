/*
 * RWP*Load Simulator
 *
 * Copyright (c) 2022 Oracle Corporation
 * Licensed under the Universal Permissive License v 1.0
 * as shown at https://oss.oracle.com/licenses/upl/
 *
 * Real World performance Load simulator lexer/tokenizer
 * for $if: directive
 *
 * This code really implements something like #if in C
 *
 * rwldilex.l
 *
 * History
 *
 * bengsig  09-may-2022 - Improved scan/parse error location
 * bengsig  18-mar-2022 - Add tag comments 
 * bengsig  21-feb-2022 - Implicit bind and define
 * bengsig  25-mar-2021 - elseif
 * bengsig  18-feb-2021 - Use bison 3 syntax (which desupports 2)
 * bengsig  05-jan-2021 - save skipdep
 * bengsig  16-dec-2020 - add exit
 * bengsig  17-nov-2020 - regextract
 * bengsig  16-nov-2020 - input double in expoential notation
 * bengsig  28-aug-2020 - Use zinam
 * bengsig  07-jul-2020 - Add instrb, instr
 * bengsig  16-jun-2020 - Add serverrelease
 * bengsig  24-feb-2020 - Access function
 * bengsig  22-aug-2019 - Creation
 */

%{
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include "rwl.h"
#include "rwldiprs.tab.h"

/* The rwm define is used to make code below legible */
#define rwm (yyget_extra(yyscanner))
// to avoid flex generating some code:
#define YY_NO_INPUT

#define YYSTYPE RWLZSTYPE
#define YY_DECL sb4 rwlzlex(void *yylval_param, void *yyscanner)

%}

%option reentrant bison-bridge
%option extra-type="rwl_main *"
%option prefix="rwlz"

%%

\'(\\.|[^\\'])*\'	{ // copy from rwllexer.l
			  rwlerror(rwm, RWL_ERROR_USE_QUOTE_FOR_STRING);
			  rwm->badchar++;
			}

  /*LEXTAG:RWL_Z_STRING_CONST*/
\"(\\.|[^\\"])*\"	{ // mostly like rwllexer.l
			  text *in, *ut;
			  /* copy string and remove " at ends */
			  rwm->sval = rwlstrdup(rwm, (text *)yytext+1);
			  if ('"' == yytext[yyleng-1])
			  {
			    rwm->sval[yyleng-2] = 0;
			  }
			  /* handle \ escapes */
			  for (ut=in=rwm->sval; *in; ut++, in++)
			  {
			    if ('\n' == *in)
			      rwm->loc.lineno++;
			    if (*in == '\\')
			    {
			      in++;
			      switch (*in)
			      {
			        case '\\': *ut='\\'; break;
			        case '\"': *ut='\"'; break;
				case 'n': *ut='\n'; break;
				case 't': *ut='\t'; break;
				case 'r': *ut='\r'; break;
				case 'e': *ut='\e'; break;
				case 0: goto end_of_string;
			        default:
				  *ut= *in;
				  rwlerror(rwm, RWL_ERROR_INVALID_ESCAPE_NO_POS, *in);
				  break;
			      }
			    }
			    else
			      *ut = *in;
			  }
			  end_of_string:
			  *ut = 0;
			  rwm->slen = rwlstrlen(rwm->sval);
			  if (rwm->slen>RWL_MAX_STRING_LENGTH)
			  { 
			    rwlerror(rwm, RWL_ERROR_STRING_TOO_LONG, RWL_MAX_STRING_LENGTH);
			    rwm->slen=RWL_MAX_STRING_LENGTH;
			    rwm->sval[rwm->slen] = 0;
			  }
			  return RWL_Z_STRING_CONST;
			}

  /*LEXTAG:RWL_Z_DOUBLE_CONST*/
[0-9]+[Ee]("+"|"-")?[0-9]+ |
[0-9]+\.[0-9]*[Ee]("+"|"-")?[0-9]+ |
[0-9]+\.[0-9]*		{ // copy from rwllexer.l
			  /* set both dval and ival when seeing float */
  			  rwm->dval = atof(yytext);
			  rwm->ival = (sb8) round(rwm->dval);
			  return RWL_Z_DOUBLE_CONST;
			}


  /*LEXTAG:RWL_Z_INTEGER_CONST*/
[0-9]+			{ // copy from rwllexer.l
			  /* set both dval and ival when seeing integer */
  			  rwm->ival = rwlatosb8(yytext);
			  rwm->dval = atof(yytext);
			  return RWL_Z_INTEGER_CONST;
			}

"unsigned" |
"hexadecimal" |
"octal" |
"fprintf" |
"sprintf" |
"printf" |
"encode" |
"decode" |
"opensessioncount"	|
"activesessioncount"	|
"function"		|
"return"		|
"exit"			|
"readlob"		|
"writelob"		|
"clob"			|
"blob"			|
"raw"			|
"nclob"			|
"public"		|
"date"			|
"break"			|
"leak"			|
"abort"			|
"modify"		|
"sql"			|
"ignoreerror"		|
"cursorcache"		|
"nocursorcache"		|
"connect"		|
"username"		|
"password"		|
"database"		|
"requestmark"		|
"statemark"		|
"release"		|
"shardkey"		|
"ociping"		|
"commit"		|
"rollback"		|
"default"		|
"at"			|
"results"		|
"procedure"		|
"threads"		|
"private"		|
"run"			|
"bind"			|
"bindout"		|
"define"		|
"start"			|
"count"			|
"stop"			|
"end"			|
"connectionpool"	|
"connectionclass"	|
"sessionpool"		|
"drcp"			|
"dedicated"		|
"reconnect"		|
"uniform"		|
"statistics"		|
"nostatistics"		|
"sqrt"			|
"substr"		|
"substrb"		|
"instrb"		|
"instr"			|
"length"		|
"getenv"		|
"lengthb"		|
"erlang"		|
"erlang1"		|
"erlang2"		|
"erlangk"		|
"gamma"			|
"gamma2"		|
"runseconds"		|
"epochseconds"		|
"getrusage"		|
"double"		|
"integer"		|
"string"		|
"random"		|
"array"			|
"file"			|
"write"			|
"writeline"		|
"readline"		|
"regex"			|
"regexsub"		|
"regexsubg"		|
"regexextract"		|
"fflush"		|
"print"			|
"printline"		|
"printvar"		|
"if"			|
"then"			|
"else"			|
"elseif"		|
"while"			|
"wait"			|
"queue"			|
"noqueue"		|
"every"			|
"loop"			|
"for"			|
"all"			|
"shift"			|
"execute"		|
".."			|
"sum"			|
"||="			|
":="			|
"+="			|
"sql_id"  		|
"serverrelease" 	|
"sin"			|
"cos"			|
"log"			|
"exp"  			|
"atan2" 		|
"*="			|
"/="			|
"-="			{ 
  			  // All of these cannot be used in $if() directive
			  // but they should also not give an "variable not found" error
				rwlerror(rwm, RWL_ERROR_NOT_IN_IF, yytext);
			}


  /*LEXTAG:RWL_Z_NULL*/
"null"			return RWL_Z_NULL;
  /*LEXTAG:RWL_Z_IS*/
"is"			return RWL_Z_IS;
"+"			return '+';
"-"			return '-';
"*"			return '*';
"/"			return '/';
"%"			return '%';
"("			return '(';
")"			return ')';
","			return ',';
"="			return '=';
"<"			return '<';
">"			return '>';
"!"			return '!';
"?"			return '?';
":"			return ':';
";"			return ';';
  /*LEXTAG:RWL_Z_NOT*/
"not"			return RWL_Z_NOT;
  /*LEXTAG:RWL_Z_AND*/
"and"			return RWL_Z_AND;
  /*LEXTAG:RWL_Z_BETWEEN*/
"between"		return RWL_Z_BETWEEN;
  /*LEXTAG:RWL_Z_OR*/
"or"			return RWL_Z_OR;
  /*LEXTAG:RWL_Z_LESSEQ*/
"<="			return RWL_Z_LESSEQ;
  /*LEXTAG:RWL_Z_GREATEQ*/
">="			return RWL_Z_GREATEQ;
  /*LEXTAG:RWL_Z_NOTEQ*/
"!="			return RWL_Z_NOTEQ;
"<>"			return RWL_Z_NOTEQ;
  /*LEXTAG:RWL_Z_CONCAT*/
"||"			return RWL_Z_CONCAT;
  /*LEXTAG:RWL_Z_DEFINED*/
"defined"		return RWL_Z_DEFINED;
  /*LEXTAG:RWL_Z_ACCESS*/
"access"		return RWL_Z_ACCESS;

  /*LEXTAG:RWL_Z_IDENTIFIER*/
[a-zA-Z_][a-zA-Z0-9_]*	{ // Copy from normal
			  /* 
			  previnam is used when the parser has been doing
			  lookahead, which can be checked via rwlzchar
			  */
			  //rwm->previnam = rwm->zinam;
			  rwm->zinam = rwlstrdup(rwm, (text *)yytext);
			  if (rwlstrlen(rwm->zinam)>30)
			    rwlerror(rwm, RWL_ERROR_VERY_LONG_IDENTIFIER, rwm->zinam);
			  return RWL_Z_IDENTIFIER;
			}

\$[0-9][0-9]*	{
		  //rwm->previnam = rwm->inam;
		  if ((ub4)atoi(yytext+1) > rwm->posargs)
		    rwm->zinam = RWL_EMPTY_VAR;
		  else
		  {
		    rwm->zinam = rwlstrdup(rwm, (text *)yytext);
		    if (rwlstrlen(rwm->zinam)>30)
		      rwlerror(rwm, RWL_ERROR_VERY_LONG_IDENTIFIER, rwm->zinam);
		  }
		  return RWL_Z_IDENTIFIER;
		}

\$#	{
		  //rwm->previnam = rwm->inam;
		  rwm->zinam = rwlstrdup(rwm, (text *)yytext);
		  return RWL_Z_IDENTIFIER;
		}

\$[A-Z][A-Za-z0-9_]*	{
		  text *env = rwlgetenv((text *)yytext+1);
		  if (!env)
		  {
		    // Don't report warning for missing env inside $if:()
		    //rwlerror(rwm, RWL_ERROR_ENV_NOT_FOUND, (text *)yytext+1);
		    rwm->sval = rwlstrdup(rwm, (text *)"");
		  }
		  else
		    rwm->sval = rwlstrdup(rwm, env);
		  rwm->slen = rwlstrlen(rwm->sval)+1;
		  if (rwm->slen>RWL_MAX_STRING_LENGTH)
		  { 
		    rwlerror(rwm, RWL_ERROR_STRING_TOO_LONG, RWL_MAX_STRING_LENGTH);
		    rwm->slen=RWL_MAX_STRING_LENGTH;
		    rwm->sval[rwm->slen] = 0;
		  }
		  return RWL_Z_STRING_CONST;
		}

[ \t\r]+		/* nothing */ ;

\n                      { rwm->loc.lineno++; }


#.* 			{ // We never actually come here because comments are
			  // allowed inside $if() directive
			  /* just make gcc shut up about unput not being used */
			  if (0)
			    unput(0);
			}

\$[a-z][^ \t\r]*	{ // Attempt directive inside $if $then
				  rwlerror(rwm, RWL_ERROR_NO_DIRECTIVE_DOLLARIF);
				}

.			{ // bad chars as in rwllexer
			  if (++rwm->badchar>RWL_MAX_ILLEGAL_CHAR)
			  {
			    rwlerror(rwm, RWL_ERROR_TOO_MANY_BAD_CHAR);
			    rwlerrormute(rwm, RWL_ERROR_INVALID_CHARS, 0);
			    rwlerrormute(rwm, RWL_ERROR_INVALID_CHARS_NONASCII, 0);
			    rwlerrormute(rwm, RWL_ERROR_TOO_MANY_BAD_CHAR, 0);
			  }
			  if (isprint(yytext[0]))
			    rwlerror(rwm, RWL_ERROR_INVALID_CHARS_NOPOS, yytext);
			  else
			    rwlerror(rwm, RWL_ERROR_INVALID_CHARS_NONASCII_NOPOS, (ub1)yytext[0]);
			} 

%%

#undef rwm /* now outside flex code */

sb4 rwlzwrap(yyscan_t ys)
{
  return 1;
}

/* This routine depends on varous defines from flex, so it must be here */
void rwlzparsestring(rwl_main *rwm, char *ee)
{
  sb8 zl;
  char *zb;
  // Various things we need to save while parsing $if expression
  text *savecn, *savinam;
  rwl_pstack *savehead, *savetail;
  ub2 saveskipdep;


  // To understand how this works, read the following:
  // https://stackoverflow.com/questions/780676/string-input-to-flex-lexer
  YY_BUFFER_STATE zstate;

  // Something utterly wrong if we try this during execute
  if (!bit(rwm->mflags, RWL_P_ONLYMAINTH))
  {  
    rwlsevere(rwm, "[rwlzparsestring-noonlymain:%x]", rwm->mflags);
    return;
  }
  zl = strlen(ee);
  zb = rwlalloc(rwm, zl+4); // space for two NULL
  strcpy(zb,ee);
  savecn = rwm->codename; // save name if we are compiling code
  savehead = rwm->phead;  // and save stack
  savetail = rwm->ptail;
  saveskipdep = rwm->skipdep;
  rwm->phead = rwm->ptail = 0;
  rwm->skipdep = 0;
  rwm->codename = 0; // This implies variables in $if() directive are global only
  savinam = rwm->inam;
  zstate = rwlz_scan_buffer(zb, zl+2, rwm->rwlzscanner);
  rwlzparse(rwm); // parse the expression in ()
  rwlz_delete_buffer(zstate, rwm->rwlzscanner);
  rwlfree(rwm, zb);
  rwm->inam = savinam;
  rwm->codename = savecn; //  restore codename
  rwm->phead = savehead;  // and stack
  rwm->ptail = savetail;
  rwm->skipdep = saveskipdep; 
}
  

rwlcomp(rwldilex_l, RWL_GCCFLAGS)

