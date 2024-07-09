/*
 * RWP*Load Simulator
 *
 * Copyright (c) 2023 Oracle Corporation
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
 * bengsig   9-may-2024 - remove extra -=
 * bengsig  16-apr-2024 - -=
 * bengsig  27-feb-2024 - winslashf2b functions
 * bengsig  14-feb-2024 - yy* -> rwm->rwly*
 * bengsig  10-jan-2024 - $linux etc
 * bengsig  30-jan-2024 - All includes in rwl.h
 * bengsig  13-sep-2023 - ampersand replacement
 * bengsig   9-aug-2023 - Spelling mistake
 * bengsig  10-jul-2023 - ceil, trunc, floor functions
 * bengsig  12-jun-2023 - Make rwm a variable in scanners
 * bengsig  25-may-2023 - Use rwlscanstring.c 
 * bengsig  15-may-2023 - statisticsonly
 * bengsig   8-mar-2023 - Normal Distributed random
 * bengsig   9-jan-2023 - CQN Project
 * bengsig  15-sep-2022 - New file assignment operators
 * bengsig  29-jun-2022 - Generate project
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
#include "rwl.h"
#include "rwldiprs.tab.h"

// to avoid flex generating some code:
#define YY_NO_INPUT

#define YYSTYPE RWLZSTYPE
#define YY_DECL sb4 rwlzlex(void *yylval_param, void *yyscanner)
#define YY_USER_ACTION \
{ rwm = (yyget_extra(yyscanner)); \
  rwm->loc.inpos += yyleng; \
  rwm->rwlyleng = (ub4) yyleng; \
  rwm->rwlytext = (text *)yytext; \
}

#define RWL_IN_DILEX // make rwlscanstring.c do the right thing

%}

%option reentrant bison-bridge
%option extra-type="rwl_main *"
%option prefix="rwlz"

%%

%{
  rwl_main *rwm = 0; // will be set using YY_USER_ACTION
%}

\'(\\.|[^\\'])*\'	{ // copy from rwllexer.l
			  rwlerror(rwm, RWL_ERROR_USE_QUOTE_FOR_STRING);
			  rwm->badchar++;
			}

  /*LEXTAG:RWL_Z_STRING_CONST*/
\"(\\.|[^\\"])*\"	{ 
// Use this tag in vi: rwlscanstring
#include "rwlscanstring.c"
			}

  /*LEXTAG:RWL_Z_DOUBLE_CONST*/
[0-9]+[Ee]("+"|"-")?[0-9]+ |
[0-9]+\.[0-9]*[Ee]("+"|"-")?[0-9]+ |
[0-9]+\.[0-9]*		{ // copy from rwllexer.l
			  /* set both dval and ival when seeing float */
  			  rwm->dval = rwlatof(rwm->rwlytext);
			  rwm->ival = (sb8) round(rwm->dval);
			  return RWL_Z_DOUBLE_CONST;
			}


  /*LEXTAG:RWL_Z_INTEGER_CONST*/
[0-9]+			{ // copy from rwllexer.l
			  /* set both dval and ival when seeing integer */
  			  rwm->ival = rwlatosb8(rwm->rwlytext);
			  rwm->dval = rwlatof(rwm->rwlytext);
			  return RWL_Z_INTEGER_CONST;
			}

"$macos"		{
#			if RWL_OS==RWL_MACH
			  rwm->ival = 1;
			  rwm->dval = 1.0;
#			else
			  rwm->ival = 0;
			  rwm->dval = 0.0;
#			endif
			  return RWL_Z_INTEGER_CONST;
			}

"$windows"		{
#			if RWL_OS==RWL_WINDOWS
			  rwm->ival = 1;
			  rwm->dval = 1.0;
#			else
			  rwm->ival = 0;
			  rwm->dval = 0.0;
#			endif
			  return RWL_Z_INTEGER_CONST;
			}

"$solaris"		{
#			if RWL_OS==RWL_SOLARIS
			  rwm->ival = 1;
			  rwm->dval = 1.0;
#			else
			  rwm->ival = 0;
			  rwm->dval = 0.0;
#			endif
			  return RWL_Z_INTEGER_CONST;
			}

"$linux"		{
#			if RWL_OS==RWL_LINUX
			  rwm->ival = 1;
			  rwm->dval = 1.0;
#			else
			  rwm->ival = 0;
			  rwm->dval = 0.0;
#			endif
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
"querynotification"	|
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
"requestmark"		|
"statemark"		|
"release"		|
"shardkey"		|
"ociping"		|
"commit"		|
"rollback"		|
"at"			|
"results"		|
"procedure"		|
"threads"		|
"private"		|
"global"		|
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
"normalrandom"		|
"statistics"		|
"statisticsonly"	|
"nostatistics"		|
"sqrt"			|
"substr"		|
"substrb"		|
"instrb"		|
"instr"			|
"length"		|
"getenv"		|
"winslashf2b"		|
"winslashf2bb"		|
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
"when"			|
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
">>="			|
"<<="			|
">|="			|
"<|="			|
"+="			|
"-="			|
"sql_id"  		|
"serverrelease" 	|
"ceil"			|
"floor"			|
"trunc"			|
"round"			|
"sin"			|
"cos"			|
"log"			|
"exp"  			|
"atan2" 		|
"lobprefetch" 		|
"*="			|
"/="			|
(?i:administer[ \r\n]+key[ \r\n]+management)	|
(?i:associate[ \r\n]+statistics)	|
(?i:disassociate[ \r\n]+statistics)	|
(?i:comment[ \r\n]+on)	|
(?i:explain[ \r\n]+plan)	|
(?i:flashback[ \r\n]+database)	|
(?i:flashback[ \r\n]+table)	|
(?i:lock[ \r\n]+table)	|
(?i:set[ \r\n]+constraint)	|
(?i:set[ \r\n]+role)	|
(?i:set[ \r\n]+transaction)	|
(?i:create[ \r\n]+(or[ \r\n]+replace[ \r\n]+)?type)	|
(?i:create[ \r\n]+(or[ \r\n]+replace[ \r\n]+)?java)	|
(?i:create[ \r\n]+(or[ \r\n]+replace[ \r\n]+)?function)	|
(?i:create[ \r\n]+(or[ \r\n]+replace[ \r\n]+)?procedure)	|
(?i:create[ \r\n]+(or[ \r\n]+replace[ \r\n]+)?package)	|
(?i:create[ \r\n]+(or[ \r\n]+replace[ \r\n]+)?library)	|
(?i:create[ \r\n]+(or[ \r\n]+replace[ \r\n]+)?trigger)	|
(?i:create)	|
(?i:grant)	|
(?i:audit)	|
(?i:noaudit)	|
(?i:analyze)	|
(?i:purge)	|
(?i:rename)	|
(?i:savepoint)	|
(?i:select)	|
(?i:update)	|
(?i:insert)	|
(?i:begin)	|
(?i:declare)	|
(?i:alter)	|
(?i:merge)	|
(?i:delete)	|
(?i:drop)	|
(?i:call)	|
(?i:with)	|
(?i:truncate)	|
"--"		|
"/*"		{
		  // All of these cannot be used in $if() directive
		  // but they should also not give a "variable not found" error

		  rwlerror(rwm, RWL_ERROR_NOT_IN_IF, rwm->rwlytext);
		}


  /*LEXTAG:RWL_Z_DATABASE*/
"database"		return RWL_Z_DATABASE;
  /*LEXTAG:RWL_Z_DEFAULT*/
"default"		return RWL_Z_DEFAULT;
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
			  rwm->zinam = rwlstrdup(rwm, rwm->rwlytext);
			  if (rwlstrlen(rwm->zinam)>30)
			    rwlerror(rwm, RWL_ERROR_VERY_LONG_IDENTIFIER, rwlstrlen(rwm->zinam), rwm->zinam);
			  return RWL_Z_IDENTIFIER;
			}

\$[0-9][0-9]*	{
		  //rwm->previnam = rwm->inam;
		  if ((ub4)rwlatoi(rwm->rwlytext+1) > rwm->posargs)
		    rwm->zinam = RWL_EMPTY_VAR;
		  else
		  {
		    rwm->zinam = rwlstrdup(rwm, rwm->rwlytext);
		    if (rwlstrlen(rwm->zinam)>30)
		      rwlerror(rwm, RWL_ERROR_VERY_LONG_IDENTIFIER, rwlstrlen(rwm->zinam), rwm->zinam);
		  }
		  return RWL_Z_IDENTIFIER;
		}

\$#	{
		  //rwm->previnam = rwm->inam;
		  rwm->zinam = rwlstrdup(rwm, rwm->rwlytext);
		  return RWL_Z_IDENTIFIER;
		}

\$[A-Z][A-Za-z0-9_]*	{
		  text *env = rwlgetenv(rwm->rwlytext+1);
		  if (!env)
		  {
		    // Don't report warning for missing env inside $if:()
		    //rwlerror(rwm, RWL_ERROR_ENV_NOT_FOUND, (text *)rwm->rwlytext+1);
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
			  if (isprint(rwm->rwlytext[0]))
			    rwlerror(rwm, RWL_ERROR_INVALID_CHARS_NOPOS, rwm->rwlytext);
			  else
			    rwlerror(rwm, RWL_ERROR_INVALID_CHARS_NONASCII_NOPOS, rwm->rwlytext[0]);
			} 

%%

sb4 rwlzwrap(yyscan_t ys)
{
  return 1;
}

/* This routine depends on varous defines from flex, so it must be here */
/*LEXTAG:rwlzparsestring*/
void rwlzparsestring(rwl_main *rwm, text *ee)
{
  sb8 zl;
  text *zb;
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
  zl = rwlstrlen(ee);
  zb = rwlalloc(rwm, zl+4); // space for two NULL
  rwlstrcpy(zb,ee);
  savecn = rwm->codename; // save name if we are compiling code
  savehead = rwm->phead;  // and save stack
  savetail = rwm->ptail;
  saveskipdep = rwm->skipdep;
  rwm->phead = rwm->ptail = 0;
  rwm->skipdep = 0;
  rwm->codename = 0; // This implies variables in $if() directive are global only
  savinam = rwm->inam;
  zstate = rwlz_scan_buffer((char *) zb, zl+2, rwm->rwlzscanner);
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

