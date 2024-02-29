/*
 * RWP*Load Simulator
 *
 * Copyright (c) 2023 Oracle Corporation
 * Licensed under the Universal Permissive License v 1.0
 * as shown at https://oss.oracle.com/licenses/upl/
 *
 * Real World performance Load simulator lexer/tokenizer
 *
 * rwllexer.l
 *
 * History
 *
 * bengsig  29-feb-2024 - $filelinename directive
 * bengsig  28-feb-2024 - simple escape processing in user help text
 * bengsig  27-feb-2024 - winslashf2b functions
 * bengsig  21-feb-2024 - allow $include when generate 
 * bengsig  21-feb-2024 - strerror_r -> rwlstrerror
 * bengsig  20-feb-2024 - $slashconvert
 * bengsig  14-feb-2024 - Also \t in sql syntax
 * bengsig  14-feb-2024 - yy* -> rwm->rwly*
 * bengsig  10-feb-2024 - $linux etc
 * bengsig  30-jan-2024 - All includes in rwl.h
 * bengsig  28-nov-2023 - $oraerror:nocount directive
 * johnkenn 02-nov-2023 - $trigonometry:degrees and $trigonometry:radians directives
 * bengsig  21-sep-2023 - $errordetail:on directive
 * bengsig  13-sep-2023 - ampersand replacement
 * bengsig   6-sep-2023 - sql logging
 * johnkenn 31-aug-2023 - Changed debugon and debug off for debug Text
 * bengsig  29-aug-2023 - lobprefetch 
 * bengsig  10-jul-2023 - ceil, trunc, floor functions
 * bengsig  12-jun-2023 - Make rwm a variable in scanners
 * bengsig  15-may-2023 - statisticsonly, incorrect RWL-293
 * bengsig   2-may-2023 - $hostname: directive
 * bengsig  17-apr-2023 - Engineering notation output
 * bengsig  29-mar-2023 - Deal properly with integer/double
 * bengsig   8-mar-2022 - Normal Distributed random
 * bengsig   9-jan-2022 - CQN Project
 * bengsig  31-oct-2022 - Add $queueeverytiming:on directive
 * bengsig  26-oct-2022 - Add $niceabort:on directive
 * bengsig  19-oct-2022 - threads global variables
 * bengsig  19-sep-2022 - Future keywords
 * bengsig  15-sep-2022 - New file assignment operators
 * bengsig  11-jul-2022 - $sessionpool_no_rlb directive
 * bengsig  28-jun-2022 - Generate project
 * bengsig  01-jun-2022 - create java scanning
 * bengsig  17-may-2022 - "call" is SQL, not PL/SQL
 * bengsig  11-may-2022 - Correct error pos in sql/string scan/parse
 * bengsig  09-may-2022 - Improved scan/parse error location
 * bengsig  12-apr-2022 - Allow hyphen in useroption/userswitch
 * bengsig  05-apr-2022 - Embedded sql
 * bengsig  31-mar-2022 - Main has default database if dedicated
 * bengsig  31-mar-2022 - Warn if using future sql keyword as identifier
 * bengsig  30-mar-2022 - with is a sql keyword
 * bengsig  17-mar-2022 - Add tag comments for lextag.sh
 * bengsig  04-mar-2022 - printf project
 * bengsig  21-feb-2022 - Implicit bind and define
 * bengsig  25-nov-2021 - dbfailures value change
 * bengsig  24-nov-2021 - $dbfailures directive
 * bengsig  16-aug-2021 - $debugon/off also changes mxq->tflags
 * bengsig  13-aug-2021 - Add break
 * bengsig  22-jun-2021 - Add epochseconds
 * bengsig  21-jun-2021 - Improve error messaging on file
 * bengsig  16-jun-2021 - Better first file scanning
 * bengsig  25-mar-2021 - elseif
 * bengsig  08-mar-2021 - Add cursor leak
 * bengsig  18-feb-2021 - Use bison 3 syntax (which desupports 2)
 * bengsig  06-feb-2021 - rwlstopnow stops parsing
 * bengsig  27-jan-2021 - connectionclass
 * bengsig  19-jan-2021 - connectionpool
 * bengsig  11-jan-2021 - future keywords
 * bengsig  04-jan-2021 - -L option
 * bengsig  22-dec-2020 - sscanf -> rwlhex2ub8
 * bengsig  21-dec-2020 - Parfait
 * bengsig  17-dec-2020 - fix exit with $if/$include
 * bengsig  16-dec-2020 - add exit
 * bengsig  17-nov-2020 - regexsubg, \t in string
 * bengsig  16-nov-2020 - input double in expoential notation
 * bengsig  09-nov-2020 - ora01013:continue
 * bengsig  07-oct-2020 - No sharding
 * bengsig  28-aug-2020 - Fix bug with overwriting inam in excluded $if/$then code 
 * bengsig  19-aug-2020 - Check return from input(yyscanner) against both 0 and EOF
 * bengsig  07-jul-2020 - Allow help text for $useroption and $userswitch
 * bengsig  07-jul-2020 - Add instrb, instr
 * bengsig  16-jun-2020 - Add serverrelease
 * bengsig  18-may-2020 - $useroption etc
 * bengsig  30-apr-2020 - Regular expression stuff
 * bengsig  15-apr-2020 - readline
 * bengsig  12-mar-2020 - statemark
 * bengsig  06-mar-2020 - opensessioncount
 * bengsig  25-feb-2020 - $eventnotify directive
 * bengsig  21-feb-2020 - requestmark
 * bengsig  29-nov-2019 - activesessioncount
 * bengsig  07-nov-2019 - access function
 * bengsig  24-sep-2019 - log, exp, round functions
 * bengsig  23-sep-2019 - system function
 * bengsig  13-sep-2019 - oerstatistics: directive
 * bengsig  23-aug-2019 - $if:() etc
 * bengsig  07-aug-2019 - getenv and $ENVIRONMENTS
 * bengsig  30-jul-2019 - sqlid
 * bengsig  24-mar-2019 - Added erlangk function
 * bengsig  06-feb-2018 - added ociping
 * bengsig  10-feb-2017 - creation
 */

%{
#include "rwl.h"
#include "rwlparser.tab.h"

#define YYSTYPE RWLYSTYPE
#define YY_DECL sb4 rwlylex(void *yylval_param, void *yyscanner)
#define YY_USER_ACTION \
{ rwm = (yyget_extra(yyscanner)); \
  rwm->loc.inpos += yyleng; \
  rwm->rwlyleng = (ub4) yyleng; \
  rwm->rwlytext = (text *)yytext; \
}

%}

%option reentrant bison-bridge
%option extra-type="rwl_main *"
%option prefix="rwly"

%%

%{
  rwl_main *rwm = 0; // will be set using YY_USER_ACTION
%}

  /* **************************************************************** */
  /* NOTE THAT ANY CHANGES HERE MUST BE KEPT IN SYNC WITH rwlarglex.l */
  /* **************************************************************** */

  /*LEXTAG:RWL_T_SQL_TEXT*/
(?i:administer[ \t\r\n]+key[ \t\r\n]+management)	|
(?i:associate[ \t\r\n]+statistics)	|
(?i:disassociate[ \t\r\n]+statistics)	|
(?i:comment[ \t\r\n]+on)	|
(?i:explain[ \t\r\n]+plan)	|
(?i:flashback[ \t\r\n]+database)	|
(?i:flashback[ \t\r\n]+table)	|
(?i:lock[ \t\r\n]+table)	|
(?i:set[ \t\r\n]+constraint)	|
(?i:set[ \t\r\n]+role)	|
(?i:set[ \t\r\n]+transaction)	|
(?i:create[ \t\r\n]+(or[ \t\r\n]+replace[ \t\r\n]+)?type)	|
(?i:create[ \t\r\n]+(or[ \t\r\n]+replace[ \t\r\n]+)?java)	|
(?i:create[ \t\r\n]+(or[ \t\r\n]+replace[ \t\r\n]+)?function)	|
(?i:create[ \t\r\n]+(or[ \t\r\n]+replace[ \t\r\n]+)?procedure)	|
(?i:create[ \t\r\n]+(or[ \t\r\n]+replace[ \t\r\n]+)?package)	|
(?i:create[ \t\r\n]+(or[ \t\r\n]+replace[ \t\r\n]+)?library)	|
(?i:create[ \t\r\n]+(or[ \t\r\n]+replace[ \t\r\n]+)?trigger)	|
(?i:create)	|
(?i:grant)	|
(?i:audit)	|
(?i:noaudit)	|
(?i:analyze)	|
(?i:purge)	|
(?i:rename)	|
(?i:revoke)	|
(?i:savepoint)	|
(?i:select)	|
(?i:update)	|
(?i:insert)	|
(?i:merge)	|
(?i:delete)	|
(?i:with)	|
(?i:begin)	|
(?i:declare)	|
(?i:alter)	|
(?i:drop)	|
(?i:call)	|
(?i:truncate)	|
"--"   	|
"/*"   	{
	  /* we match anything that can initiate
	     SQL or PL/SQL.  

	     Note that flex always attempts matching the longest
	     possible input, so 'create' as a single keyword will
	     only get matched if none of the various 'create or replace'
	     aren't.

	  */

  // Use this tag in vi: rwlscansql
#include "rwlscansql.c"
	}


\'(\\.|[^\\'])*\'	{
			  rwlerror(rwm, RWL_ERROR_USE_QUOTE_FOR_STRING);
			  rwm->badchar++;
			}

  /*LEXTAG:RWL_T_STRING_CONST*/
\"(\\.|[^\\"]|(\\\n))*\"  { // Note that this flex input means that the input
			    // consist of any number of either of the following
			    // any character 
			    // anthing except \ and " which includes newline
			    // the sequence \ followed by a newline
			    // Also recall that flex always scans as far as possible
			    // so e.g. this input
			    // "hello\"abc" 
			    // will scan until the " after abc.

  // Use this tag in vi: rwlscanstring
#include "rwlscanstring.c"
			  }

  /*LEXTAG:RWL_T_DOUBLE_CONST*/
[0-9]+[Ee]("+"|"-")?[0-9]+ |
[0-9]+\.[0-9]*[Ee]("+"|"-")?[0-9]+ |
[0-9]+\.[0-9]*		{
			  /* set both dval and ival when seeing float */
  			  rwm->dval = rwlatof(rwm->rwlytext);
			  rwm->ival = (sb8) trunc(rwm->dval);
			  if (!rwm->ifdirbit) return RWL_T_DOUBLE_CONST;
			}


  /*LEXTAG:RWL_T_INTEGER_CONST*/
[0-9]+			{
			  /* set both dval and ival when seeing integer */
  			  rwm->ival = rwlatosb8(rwm->rwlytext);
			  rwm->dval = rwlatof(rwm->rwlytext);
			  if (!rwm->ifdirbit) return RWL_T_INTEGER_CONST;
			}

[0-9]+\.\.		{
			  /* make .. be a token even after an integer
			  so that 1..10 is scanned as 1 .. 10 and not as 1. . 10
			  */

  			  rwm->ival = rwlatosb8(rwm->rwlytext);
			  rwm->dval = rwlatof(rwm->rwlytext);
			  unput('.'); unput('.');
			  if (!rwm->ifdirbit) return RWL_T_INTEGER_CONST;
			}



  /*LEXTAG:RWL_T_FUNCTION*/
"function"		{ if (!rwm->ifdirbit) return RWL_T_FUNCTION; }
  /*LEXTAG:RWL_T_RETURN*/
"return"		{ if (!rwm->ifdirbit) return RWL_T_RETURN; }
  /*LEXTAG:RWL_T_EXIT*/
"exit"			{ if (!rwm->ifdirbit) return RWL_T_EXIT; }
  /*LEXTAG:RWL_T_READLOB*/
"readlob"		{ if (!rwm->ifdirbit) return RWL_T_READLOB; }
  /*LEXTAG:RWL_T_WRITELOB*/
"writelob"		{ if (!rwm->ifdirbit) return RWL_T_WRITELOB; }
  /*LEXTAG:RWL_T_CLOB*/
"clob"			{ if (!rwm->ifdirbit) return RWL_T_CLOB; }
  /*LEXTAG:RWL_T_BLOB*/
"blob"			{
			  if (bit(rwm->mflags,RWL_DEBUG_ALLOWHACK))
			    { if (!rwm->ifdirbit) return RWL_T_BLOB; }
			  else
			    rwlerror(rwm, RWL_ERROR_RESERVED_FOR_FUTURE, rwm->rwlytext);
		        }
  /*LEXTAG:RWL_T_RAW*/
"raw"			{
			  if (bit(rwm->mflags,RWL_DEBUG_ALLOWHACK))
			    { if (!rwm->ifdirbit) return RWL_T_RAW; }
			  else
			    rwlerror(rwm, RWL_ERROR_RESERVED_FOR_FUTURE, rwm->rwlytext);
		        }
  /*LEXTAG:RWL_T_NCLOB*/
"nclob"			{
			  rwlerror(rwm, RWL_ERROR_RESERVED_FOR_FUTURE, rwm->rwlytext);
			  if (!rwm->ifdirbit) return RWL_T_NCLOB;
		        }
  /*LEXTAG:RWL_T_PUBLIC*/
"public"		{
			  rwlerror(rwm, RWL_ERROR_RESERVED_FOR_FUTURE, rwm->rwlytext);
			  if (!rwm->ifdirbit) return RWL_T_PUBLIC;
		        }
  /*LEXTAG:RWL_T_DATE*/
"date"			{
			  rwlerror(rwm, RWL_ERROR_RESERVED_FOR_FUTURE, rwm->rwlytext);
			  if (!rwm->ifdirbit) return RWL_T_DATE;
		        }
  /*LEXTAG:RWL_T_BREAK*/
"break"			{
			  if (!rwm->ifdirbit) return RWL_T_BREAK;
		        }
  /*LEXTAG:RWL_T_UNSIGNED*/
"unsigned" 		{
			  rwlerror(rwm, RWL_ERROR_RESERVED_FOR_FUTURE, rwm->rwlytext);
			  if (!rwm->ifdirbit) return RWL_T_UNSIGNED;
			}
  /*LEXTAG:RWL_T_HEXADECIMAL*/
"hexadecimal" 		{
			  rwlerror(rwm, RWL_ERROR_RESERVED_FOR_FUTURE, rwm->rwlytext);
			  if (!rwm->ifdirbit) return RWL_T_HEXADECIMAL;
			}
  /*LEXTAG:RWL_T_OCTAL*/
"octal" 		{
			  rwlerror(rwm, RWL_ERROR_RESERVED_FOR_FUTURE, rwm->rwlytext);
			  if (!rwm->ifdirbit) return RWL_T_OCTAL;
			}
  /*LEXTAG:RWL_T_LOBPREFETCH*/
"lobprefetch" 		{
			  rwlerror(rwm, RWL_ERROR_RESERVED_FOR_FUTURE, rwm->rwlytext);
			  if (!rwm->ifdirbit) return RWL_T_LOBPREFETCH;
			}
  /*LEXTAG:RWL_T_PRINTF*/
"printf" 		{
			  if (!rwm->ifdirbit) return RWL_T_PRINTF;
			}
  /*LEXTAG:RWL_T_SPRINTF*/
"sprintf" 		{
			  if (!rwm->ifdirbit) return RWL_T_SPRINTF;
			}
  /*LEXTAG:RWL_T_FPRINTF*/
"fprintf" 		{
			  if (!rwm->ifdirbit) return RWL_T_FPRINTF;
			}
  /*LEXTAG:RWL_T_ENCODE*/
"encode" 		{
			  rwlerror(rwm, RWL_ERROR_RESERVED_FOR_FUTURE, rwm->rwlytext);
			  if (!rwm->ifdirbit) return RWL_T_ENCODE;
			}
  /*LEXTAG:RWL_T_DECODE*/
"decode" 		{
			  rwlerror(rwm, RWL_ERROR_RESERVED_FOR_FUTURE, rwm->rwlytext);
			  if (!rwm->ifdirbit) return RWL_T_DECODE;
			}
  /*LEXTAG:RWL_T_LEAK*/
"leak"			{
			  if (!rwm->ifdirbit) return RWL_T_LEAK;
		        }
  /*LEXTAG:RWL_T_ABORT*/
"abort"			if (!rwm->ifdirbit) return RWL_T_ABORT;
  /*LEXTAG:RWL_T_MODIFY*/
"modify"		if (!rwm->ifdirbit) return RWL_T_MODIFY;
  /*LEXTAG:RWL_T_SQL*/
"sql"			{
			  if (!rwm->ifdirbit) return RWL_T_SQL;
			}
  /*LEXTAG:RWL_T_IGNOREERROR*/
"ignoreerror"		if (!rwm->ifdirbit) return RWL_T_IGNOREERROR;
  /*LEXTAG:RWL_T_CURSORCACHE*/
"cursorcache"		if (!rwm->ifdirbit) return RWL_T_CURSORCACHE;
  /*LEXTAG:RWL_T_NOCURSORCACHE*/
"nocursorcache"		if (!rwm->ifdirbit) return RWL_T_NOCURSORCACHE;
  /*LEXTAG:RWL_T_CONNECT*/
"connect"		{
			  if (bit(rwm->m3flags, RWL_P3_GENERATE))
			    bis(rwm->m3flags, RWL_P3_GEN_SENSITIVE);
			  if (!rwm->ifdirbit) return RWL_T_CONNECT;
			}
  /*LEXTAG:RWL_T_USERNAME*/
"username"		{
			  if (bit(rwm->m3flags, RWL_P3_GENERATE))
			    bis(rwm->m3flags, RWL_P3_GEN_SENSITIVE);
			  if (!rwm->ifdirbit) return RWL_T_USERNAME;
			}
  /*LEXTAG:RWL_T_PASSWORD*/
"password"		{
			  if (bit(rwm->m3flags, RWL_P3_GENERATE))
			    bis(rwm->m3flags, RWL_P3_GEN_SENSITIVE);
			  if (!rwm->ifdirbit) return RWL_T_PASSWORD;
			}
  /*LEXTAG:RWL_T_DATABASE*/
"database"		{
			  if (bit(rwm->m3flags, RWL_P3_GENERATE))
			    bis(rwm->m3flags, RWL_P3_GEN_SENSITIVE);
			  if (!rwm->ifdirbit) return RWL_T_DATABASE;
			}
  /*LEXTAG:RWL_T_REQUESTMARK*/
"requestmark"		if (!rwm->ifdirbit) return RWL_T_REQUESTMARK;
  /*LEXTAG:RWL_T_STATEMARK*/
"statemark"		if (!rwm->ifdirbit) return RWL_T_STATEMARK;
  /*LEXTAG:RWL_T_RELEASE*/
"release"		if (!rwm->ifdirbit) return RWL_T_RELEASE;
  /*LEXTAG:RWL_T_SHARDKEY*/
"shardkey"		{
			  rwlerror(rwm, RWL_ERROR_NOT_YET_IMPL, rwm->rwlytext);
			  if (!rwm->ifdirbit) return RWL_T_SHARDKEY;
		        }
  /*LEXTAG:RWL_T_OCIPING*/
"ociping"		if (!rwm->ifdirbit) return RWL_T_OCIPING;
  /*LEXTAG:RWL_T_COMMIT*/
"commit"		if (!rwm->ifdirbit) return RWL_T_COMMIT;
  /*LEXTAG:RWL_T_ROLLBACK*/
"rollback"		if (!rwm->ifdirbit) return RWL_T_ROLLBACK;
  /*LEXTAG:RWL_T_DEFAULT*/
"default"		if (!rwm->ifdirbit) return RWL_T_DEFAULT;
  /*LEXTAG:RWL_T_AT*/
"at"			if (!rwm->ifdirbit) return RWL_T_AT;
  /*LEXTAG:RWL_T_RESULTS*/
"results"		if (!rwm->ifdirbit) return RWL_T_RESULTS;
  /*LEXTAG:RWL_T_PROCEDURE*/
"procedure"		if (!rwm->ifdirbit) return RWL_T_PROCEDURE;
  /*LEXTAG:RWL_T_THREADS*/
"threads"		if (!rwm->ifdirbit) return RWL_T_THREADS;
  /*LEXTAG:RWL_T_GLOBAL*/
"global"		if (!rwm->ifdirbit) return RWL_T_GLOBAL;
  /*LEXTAG:RWL_T_PRIVATE*/
"private"		if (!rwm->ifdirbit) return RWL_T_PRIVATE;
  /*LEXTAG:RWL_T_RUN*/
"run"			{
  			  if (!(bit(rwm->m2flags, RWL_P2_INTHING)))
			    rwm->lexlino = rwm->loc.lineno;
			  if (!rwm->ifdirbit) return RWL_T_RUN;
			}
  /*LEXTAG:RWL_T_BIND*/
"bind"			if (!rwm->ifdirbit) return RWL_T_BIND;
  /*LEXTAG:RWL_T_BINDOUT*/
"bindout"		if (!rwm->ifdirbit) return RWL_T_BINDOUT;
  /*LEXTAG:RWL_T_DEFINE*/
"define"		if (!rwm->ifdirbit) return RWL_T_DEFINE;
  /*LEXTAG:RWL_T_START*/
"start"			if (!rwm->ifdirbit) return RWL_T_START;
  /*LEXTAG:RWL_T_COUNT*/
"count"			if (!rwm->ifdirbit) return RWL_T_COUNT;
  /*LEXTAG:RWL_T_STOP*/
"stop"			if (!rwm->ifdirbit) return RWL_T_STOP;
  /*LEXTAG:RWL_T_END*/
"end"			if (!rwm->ifdirbit) return RWL_T_END;
  /*LEXTAG:RWL_T_SESSIONPOOL*/
"sessionpool"		if (!rwm->ifdirbit) return RWL_T_SESSIONPOOL;
  /*LEXTAG:RWL_T_CONNECTIONPOOL*/
"connectionpool"	if (!rwm->ifdirbit) return RWL_T_CONNECTIONPOOL;
  /*LEXTAG:RWL_T_CONNECTIONCLASS*/
"connectionclass"	if (!rwm->ifdirbit) return RWL_T_CONNECTIONCLASS;
  /*LEXTAG:RWL_T_DRCP*/
"drcp"			if (!rwm->ifdirbit) return RWL_T_DRCP;
  /*LEXTAG:RWL_T_DEDICATED*/
"dedicated"		if (!rwm->ifdirbit) return RWL_T_DEDICATED;
  /*LEXTAG:RWL_T_RECONNECT*/
"reconnect"		if (!rwm->ifdirbit) return RWL_T_RECONNECT;
  /*LEXTAG:RWL_T_UNIFORM*/
"uniform"		if (!rwm->ifdirbit) return RWL_T_UNIFORM;
  /*LEXTAG:RWL_T_NORMALRANDOM*/
"normalrandom"		if (!rwm->ifdirbit) return RWL_T_NORMALRANDOM;
  /*LEXTAG:RWL_T_LOG*/
"log"			if (!rwm->ifdirbit) return RWL_T_LOG;
  /*LEXTAG:RWL_T_EXP*/
"exp"			if (!rwm->ifdirbit) return RWL_T_EXP;
  /*LEXTAG:RWL_T_CEIL*/
"ceil"			if (!rwm->ifdirbit) return RWL_T_CEIL;
  /*LEXTAG:RWL_T_TRUNC*/
"trunc"			if (!rwm->ifdirbit) return RWL_T_TRUNC;
  /*LEXTAG:RWL_T_FLOOR*/
"floor"			if (!rwm->ifdirbit) return RWL_T_FLOOR;
  /*LEXTAG:RWL_T_ROUND*/
"round"			if (!rwm->ifdirbit) return RWL_T_ROUND;
  /*LEXTAG:RWL_T_STATISTICS*/
"statistics"		if (!rwm->ifdirbit) return RWL_T_STATISTICS;
  /*LEXTAG:RWL_T_STATISTICSONLY*/
"statisticsonly"	if (!rwm->ifdirbit) return RWL_T_STATISTICSONLY;
  /*LEXTAG:RWL_T_SQRT*/
"nostatistics"		if (!rwm->ifdirbit) return RWL_T_NOSTATISTICS;
  /*LEXTAG:RWL_T_SQRT*/
"sqrt"			if (!rwm->ifdirbit) return RWL_T_SQRT;
"sin"			if (!rwm->ifdirbit) return RWL_T_SIN;
"cos"			if (!rwm->ifdirbit) return RWL_T_COS;
  /*LEXTAG:RWL_T_INSTRB*/
"instr"		{
			  rwlerror(rwm, RWL_ERROR_CURRENTLY_AS, "instr", "instrb");
			  if (!rwm->ifdirbit) return RWL_T_INSTRB;
			}
"instrb"		if (!rwm->ifdirbit) return RWL_T_INSTRB;
  /*LEXTAG:RWL_T_SUBSTRB*/
"substr"		{
			  rwlerror(rwm, RWL_ERROR_CURRENTLY_AS, "substr", "substrb");
			  if (!rwm->ifdirbit) return RWL_T_SUBSTRB;
			}
  /*LEXTAG:RWL_T_SUBSTRB*/
"substrb"		if (!rwm->ifdirbit) return RWL_T_SUBSTRB;
  /*LEXTAG:RWL_T_LENGTHB*/
"length"		{
			  rwlerror(rwm, RWL_ERROR_CURRENTLY_AS, "length", "lengthb");
			  if (!rwm->ifdirbit) return RWL_T_LENGTHB;
			}
  /*LEXTAG:RWL_T_GETENV*/
"getenv"		if (!rwm->ifdirbit) return RWL_T_GETENV;
  /*LEXTAG:RWL_T_SYSTEM*/
"system"		if (!rwm->ifdirbit) return RWL_T_SYSTEM;
  /*LEXTAG:RWL_T_LENGTHB*/
"lengthb"		if (!rwm->ifdirbit) return RWL_T_LENGTHB;
  /*LEXTAG:RWL_T_ERLANG*/
"erlang" |
"erlang1"		if (!rwm->ifdirbit) return RWL_T_ERLANG;
  /*LEXTAG:RWL_T_LENGTHB*/
"erlang2"		if (!rwm->ifdirbit) return RWL_T_ERLANG2;
  /*LEXTAG:RWL_T_ERLANGK*/
"erlangk"		if (!rwm->ifdirbit) return RWL_T_ERLANGK;
  /*LEXTAG:RWL_T_ACCESS*/
"access"		if (!rwm->ifdirbit) return RWL_T_ACCESS;
"gamma"			{ 
			  if (!bit(rwm->m2flags, RWL_P2_NOWARNDEP))
			    rwlerror(rwm, RWL_ERROR_GAMMA_TO_ERLANG);
			  if (!rwm->ifdirbit) return RWL_T_ERLANG;
			}
"gamma2"		{
			  if (!bit(rwm->m2flags, RWL_P2_NOWARNDEP))
			    rwlerror(rwm, RWL_ERROR_GAMMA_TO_ERLANG);
			  if (!rwm->ifdirbit) return RWL_T_ERLANG2;
			}
  /*LEXTAG:RWL_T_RUNSECONDS*/
"runseconds"		if (!rwm->ifdirbit) return RWL_T_RUNSECONDS;
  /*LEXTAG:RWL_T_EPOCHSECONDS*/
"epochseconds"		if (!rwm->ifdirbit) return RWL_T_EPOCHSECONDS;
  /*LEXTAG:RWL_T_GETRUSAGE*/
"getrusage"		if (!rwm->ifdirbit) return RWL_T_GETRUSAGE;
  /*LEXTAG:RWL_T_DOUBLE*/
"double"		if (!rwm->ifdirbit) return RWL_T_DOUBLE;
  /*LEXTAG:RWL_T_INTEGER*/
"integer"		if (!rwm->ifdirbit) return RWL_T_INTEGER;
  /*LEXTAG:RWL_T_STRING*/
"string"		if (!rwm->ifdirbit) return RWL_T_STRING;
  /*LEXTAG:RWL_T_RANDOM*/
"random"		if (!rwm->ifdirbit) return RWL_T_RANDOM;
  /*LEXTAG:RWL_T_ARRAY*/
"array"			if (!rwm->ifdirbit) return RWL_T_ARRAY;
  /*LEXTAG:RWL_T_FILE*/
"file"			if (!rwm->ifdirbit) return RWL_T_FILE;
  /*LEXTAG:RWL_T_WRITE*/
"write"			if (!rwm->ifdirbit) return RWL_T_WRITE;
  /*LEXTAG:RWL_T_WRITELINE*/
"writeline"		if (!rwm->ifdirbit) return RWL_T_WRITELINE;
  /*LEXTAG:RWL_T_READLINE*/
"readline"		if (!rwm->ifdirbit) return RWL_T_READLINE;
  /*LEXTAG:RWL_T_REGEX*/
"regex"			if (!rwm->ifdirbit) return RWL_T_REGEX;
  /*LEXTAG:RWL_T_REGEXSUB*/
"regexsub"		if (!rwm->ifdirbit) return RWL_T_REGEXSUB;
  /*LEXTAG:RWL_T_REGEXSUBG*/
"regexsubg"		if (!rwm->ifdirbit) return RWL_T_REGEXSUBG;
  /*LEXTAG:RWL_T_REGEXTRACT*/
"regexextract"		if (!rwm->ifdirbit) return RWL_T_REGEXTRACT;
  /*LEXTAG:RWL_T_FFLUSH*/
"fflush"		if (!rwm->ifdirbit) return RWL_T_FFLUSH;
  /*LEXTAG:RWL_T_PRINT*/
"print"			if (!rwm->ifdirbit) return RWL_T_PRINT;
  /*LEXTAG:RWL_T_PRINTLINE*/
"printline"		if (!rwm->ifdirbit) return RWL_T_PRINTLINE;
  /*LEXTAG:RWL_T_PRINTVAR*/
"printvar"		if (!rwm->ifdirbit) return RWL_T_PRINTVAR;
  /*LEXTAG:RWL_T_IF*/
"if"			{
  			  if (!(bit(rwm->m2flags, RWL_P2_INTHING)))
			    rwm->lexlino = rwm->loc.lineno;
			  if (!rwm->ifdirbit) return RWL_T_IF;
			}
  /*LEXTAG:RWL_T_WHEN*/
"when"			if (!rwm->ifdirbit) return RWL_T_WHEN;
  /*LEXTAG:RWL_T_THEN*/
"then"			if (!rwm->ifdirbit) return RWL_T_THEN;
  /*LEXTAG:RWL_T_ELSE*/
"else"			if (!rwm->ifdirbit) return RWL_T_ELSE;
  /*LEXTAG:RWL_T_ELSEIF*/
"elseif"		if (!rwm->ifdirbit) return RWL_T_ELSEIF;
  /*LEXTAG:RWL_T_WHILE*/
"while"			if (!rwm->ifdirbit) return RWL_T_WHILE;
  /*LEXTAG:RWL_T_WAIT*/
"wait"			if (!rwm->ifdirbit) return RWL_T_WAIT;
  /*LEXTAG:RWL_T_QUEUE*/
"queue"			if (!rwm->ifdirbit) return RWL_T_QUEUE;
  /*LEXTAG:RWL_T_NOQUEUE*/
"noqueue"		if (!rwm->ifdirbit) return RWL_T_NOQUEUE;
  /*LEXTAG:RWL_T_EVERY*/
"every"			if (!rwm->ifdirbit) return RWL_T_EVERY;
  /*LEXTAG:RWL_T_LOOP*/
"loop"			{ 
			  if (!(bit(rwm->m2flags, RWL_P2_INTHING)))
			    rwm->lexlino = rwm->loc.lineno;
			  if (!rwm->ifdirbit) return RWL_T_LOOP;
			}
  /*LEXTAG:RWL_T_FOR*/
"for"			if (!rwm->ifdirbit) return RWL_T_FOR;
  /*LEXTAG:RWL_T_ALL*/
"all"			if (!rwm->ifdirbit) return RWL_T_ALL;
  /*LEXTAG:RWL_T_SHIFT*/
"shift"			if (!rwm->ifdirbit) return RWL_T_SHIFT;
  /*LEXTAG:RWL_T_EXECUTE*/
"execute"		{ 
			  if (!(bit(rwm->m2flags, RWL_P2_INTHING)))
			    rwm->lexlino = rwm->loc.lineno;
			  if (!rwm->ifdirbit) return RWL_T_EXECUTE;
			}
  /*LEXTAG:RWL_T_EXECUTE*/
".."			if (!rwm->ifdirbit) return RWL_T_DOTDOT; /* see RWL_T_INTEGER_CONST above */
  /*LEXTAG:RWL_T_NULL*/
"null"			if (!rwm->ifdirbit) return RWL_T_NULL;
  /*LEXTAG:RWL_T_SUM*/
"sum"			if (!rwm->ifdirbit) return RWL_T_SUM;
  /*LEXTAG:RWL_T_ISNULL*/
"isnull"		{
			  if (!bit(rwm->m2flags, RWL_P2_NOWARNDEP))
			    rwlerror(rwm, RWL_ERROR_ISNULL_DEPRECATED);
			  if (!rwm->ifdirbit) return RWL_T_ISNULL;
			}
  /*LEXTAG:RWL_T_IS*/
"is"			if (!rwm->ifdirbit) return RWL_T_IS;
"+"			if (!rwm->ifdirbit) return '+';
"-"			if (!rwm->ifdirbit) return '-';
"*"			if (!rwm->ifdirbit) return '*';
"/"			if (!rwm->ifdirbit) return '/';
"%"			if (!rwm->ifdirbit) return '%';
"("			if (!rwm->ifdirbit) return '(';
")"			if (!rwm->ifdirbit) return ')';
","			if (!rwm->ifdirbit) return ',';
"="			if (!rwm->ifdirbit) return '=';
"=="  			{
			  rwlerror(rwm, RWL_ERROR_NOT_EQUALEQUAL, rwm->rwlytext);
    			  if (!rwm->ifdirbit) return '=';
		        }
"<"			if (!rwm->ifdirbit) return '<';
">"			if (!rwm->ifdirbit) return '>';
"!"			if (!rwm->ifdirbit) return '!';
"?"			if (!rwm->ifdirbit) return '?';
":"			if (!rwm->ifdirbit) return ':';
  /*LEXTAG:RWL_T_NOT*/
"not"			if (!rwm->ifdirbit) return RWL_T_NOT;
  /*LEXTAG:RWL_T_AND*/
"and"			if (!rwm->ifdirbit) return RWL_T_AND;
  /*LEXTAG:RWL_T_BETWEEN*/
"between"		if (!rwm->ifdirbit) return RWL_T_BETWEEN;
  /*LEXTAG:RWL_T_OR*/
"or"			if (!rwm->ifdirbit) return RWL_T_OR;
  /*LEXTAG:RWL_T_LESSEQ*/
"<="			if (!rwm->ifdirbit) return RWL_T_LESSEQ;
  /*LEXTAG:RWL_T_GREATEQ*/
">="			if (!rwm->ifdirbit) return RWL_T_GREATEQ;
  /*LEXTAG:RWL_T_RSHIFTASSIGN*/
">>="			if (!rwm->ifdirbit) return RWL_T_RSHIFTASSIGN;
  /*LEXTAG:RWL_T_NOTEQ*/
"!="			if (!rwm->ifdirbit) return RWL_T_NOTEQ;
"<>"			if (!rwm->ifdirbit) return RWL_T_NOTEQ;
  /*LEXTAG:RWL_T_ASSIGN*/
":="			if (!rwm->ifdirbit) return RWL_T_ASSIGN;
  /*LEXTAG:RWL_T_ASNPLUS*/
"+="			if (!rwm->ifdirbit) return RWL_T_ASNPLUS;
  /*LEXTAG:RWL_T_CONCAT*/
"||"			if (!rwm->ifdirbit) return RWL_T_CONCAT;
  /*LEXTAG:RWL_T_PIPETO*/
">|="			if (!rwm->ifdirbit) return RWL_T_PIPETO;
  /*LEXTAG:RWL_T_PIPEFROM*/
"<|="			if (!rwm->ifdirbit) return RWL_T_PIPEFROM;
  /*LEXTAG:RWL_T_APPEND*/
"||="			if (!rwm->ifdirbit) return RWL_T_APPEND;
  /*LEXTAG:RWL_T_WINSLASHF2B*/
"winslashf2b"		if (!rwm->ifdirbit) return RWL_T_WINSLASHF2B;
  /*LEXTAG:RWL_T_WINSLASHF2BB*/
"winslashf2bb"		if (!rwm->ifdirbit) return RWL_T_WINSLASHF2BB;
  /*LEXTAG:RWL_T_SQL_ID*/
"serverrelease"		if (!rwm->ifdirbit) return RWL_T_SERVERRELEASE;
  /*LEXTAG:RWL_T_SQL_ID*/
"sql_id"  		{
#			ifndef RWL_USE_SQL_ID
			  rwlerror(rwm, RWL_ERROR_NOT_YET_IMPL, rwm->rwlytext);
#			endif
			  if (!rwm->ifdirbit) return RWL_T_SQL_ID;
		        }
  /*LEXTAG:RWL_T_OPENSESSIONCOUNT*/
"opensessioncount"  	{
			  if (!rwm->ifdirbit) return RWL_T_OPENSESSIONCOUNT;
		        }
  /*LEXTAG:RWL_T_ACTIVESESSIONCOUNT*/
"activesessioncount"  	{
			  if (!rwm->ifdirbit) return RWL_T_ACTIVESESSIONCOUNT;
		        }
  /*LEXTAG:RWL_T_QUERYNOTIFICATION*/
"querynotification"  	{
#ifndef                 RWL_USE_CQN
			  rwlerror(rwm, RWL_ERROR_NOT_YET_IMPL, rwm->rwlytext);
#endif
			  if (!rwm->ifdirbit) return RWL_T_QUERYNOTIFICATION;
		        }
  /*LEXTAG:RWL_T_ATAN2*/
"atan2" 	if (!rwm->ifdirbit) return RWL_T_ATAN2;

"|"  |
"&"  |
"~"  |
"&&"			{
			  rwlerror(rwm, RWL_ERROR_THIS_IS_NOT_C, rwm->rwlytext);
			  // return something so compilation continues
    			  if (!rwm->ifdirbit) return '+';
		        }

"//" |
"++"  			{
			  // note that "--" is the beginning of RWL_T_SQL_TEXT
			  rwlerror(rwm, RWL_ERROR_THIS_IS_NOT_C, rwm->rwlytext);
		        }
"*=" |
"/=" |
"<<=" |
"-="			{
			  rwlerror(rwm, RWL_ERROR_NOT_YET_IMPL, rwm->rwlytext);
			  // return something so compilation continues
    			  if (!rwm->ifdirbit) return RWL_T_ASNPLUS;
		        }

"mutex" |
"mutexget" |
"mutexrelease" |
"switch" |
"case"			{
			  bic(rwm->m3flags, RWL_P3_WARNSQLKW);
			  if (!rwm->ifdirbit)
			  {
			    rwm->previnam = rwm->inam;
			    rwm->inam = rwlstrdup(rwm, rwm->rwlytext);
			    bis(rwm->m3flags, RWL_P3_FUTNOTIDENT);
			    return RWL_T_IDENTIFIER;
			  }
			}

  /*LEXTAG:RWL_T_IDENTIFIER*/
[a-zA-Z_][a-zA-Z0-9_]*	{
			  /*
			  previnam is used when the parser has been doing
			  lookahead, which can be checked via rwlychar
			  */
			  bic(rwm->m3flags, RWL_P3_WARNSQLKW);
			  if (!rwm->ifdirbit)
			  {
			    rwm->previnam = rwm->inam;
			    rwm->inam = rwlstrdup(rwm, rwm->rwlytext);
			    if (rwlstrlen(rwm->inam)>RWL_MAX_IDLEN)
			      rwlerror(rwm, RWL_ERROR_VERY_LONG_IDENTIFIER, rwlstrlen(rwm->inam), rwm->inam);
			    bic(rwm->m3flags, RWL_P3_FUTNOTIDENT);
			    return RWL_T_IDENTIFIER;
			  }
			}

\$[0-9][0-9]*	{
		  bic(rwm->m3flags, RWL_P3_WARNSQLKW);
		  if (!rwm->ifdirbit)
		  {
		    rwm->previnam = rwm->inam;
		    if ((ub4)rwlatoi(rwm->rwlytext+1) > rwm->posargs)
		      rwm->inam = RWL_EMPTY_VAR;
		    else
		    {
		      rwm->inam = rwlstrdup(rwm, rwm->rwlytext);
		      if (rwlstrlen(rwm->inam)>30)
			rwlerror(rwm, RWL_ERROR_VERY_LONG_IDENTIFIER, rwlstrlen(rwm->inam), rwm->inam);
		    }
		    return RWL_T_IDENTIFIER;
		  }
		}

\$#	{
		bic(rwm->m3flags, RWL_P3_WARNSQLKW);
		if (!rwm->ifdirbit)
		{
		  rwm->previnam = rwm->inam;
		  rwm->inam = rwlstrdup(rwm, rwm->rwlytext);
		  return RWL_T_IDENTIFIER;
		}
	}

\$[A-Z][A-Za-z0-9_]*	{
		  text *env = rwlgetenv((text *)rwm->rwlytext+1);
		  if (!env)
		  {
		    // only report if we are including this code
		    if (!rwm->ifdirbit)
		      rwlerror(rwm, RWL_ERROR_ENV_NOT_FOUND, (text *)rwm->rwlytext+1);
		    rwm->sval = rwlstrdup(rwm, (text *)"");
		  }
		  else
		    rwm->sval = rwlstrdup(rwm, env);
		  rwm->slen = rwlstrlen(rwm->sval);
		  if (rwm->slen>RWL_MAX_STRING_LENGTH)
		  { 
		    rwlerror(rwm, RWL_ERROR_STRING_TOO_LONG, RWL_MAX_STRING_LENGTH);
		    rwm->slen=RWL_MAX_STRING_LENGTH;
		    rwm->sval[rwm->slen] = 0;
		  }
		  if (!rwm->ifdirbit) return RWL_T_STRING_CONST;
		}


";"			if (!rwm->ifdirbit) return ';';

\$longoption:[a-z][-a-z]*       |       
\$longoption:[a-z][-a-z]*=[^ \r\n\t][^ \r\n\t]* |
\$useroption:[a-zA-Z][-a-zA-Z0-9_]*(:\"(\\.|[^\n\\"])*\")?              |
\$userswitch:[a-zA-Z][-a-zA-Z0-9_]*(:\"(\\.|[^\n\\"])*\")?      {
		  if (!bit(rwm->m2flags, RWL_P2_SCANFIRST))
		    rwlerror(rwm, RWL_ERROR_ARGUMENT_NOT_FIRST);
		  if (rwm->ifdirbit)
		  {
		    text onam[20];
		    rwlstrnncpy(onam,rwm->rwlytext,12);
		    rwlerror(rwm, RWL_ERROR_OPTIONS_NOT_EXCLUDED, onam);
		  }
		    
		}

\$userhelp:\"(\\.|[^\n\\"])*\"  {
		  if (!bit(rwm->m2flags, RWL_P2_SCANFIRST))
		    rwlerror(rwm, RWL_ERROR_ARGUMENT_NOT_FIRST);
		}

\$if.*$then	{ // This is the documented syntax. Note that there is
		  // no simple way to allow having $if and $then on separate
		  // lines
		  text *e = rwm->rwlytext+3;
		  text *d = rwlstrrchr(rwm->rwlytext,'$');
		  if (d<e+1 || rwlstrcmp(d,(text *) "$then"))
		    rwlsevere(rwm, "[rwllexer-badifthen:%s:%d]", rwm->rwlytext, d-e);
		  else
		  {
		    memcpy(d,"    ;",5); // overwrite $then with blanks and ;
		    			 // so that it becomes the original syntax
					 // that rwlzparsestring understands
		    rwlzparsestring(rwm, e); // parse the expression
		  }

		}

\$then		{ // this only happens if $if and $then aren't on the same line
		  rwlzparsestring(rwm, (text *) "0;"); // behave like $if 0 $then would
		}

\$if:[^\n;]*;	{ // This was the original syntax for $if which was
		  //   $if:  <expression>   ;
		  // i.e. with the expression between : and ;.  
		  // We do not document this syntax, but we need to keep it
		  // as several of the early tests use it
		  text *e = rwlstrchr(rwm->rwlytext,':')+1;
		  if (!e)
		  {
		    rwlsevere(rwm, "[rwllexer-if:zero:%s]",rwm->rwlytext);
		  }
		  else
		  {
		    rwlerror(rwm, RWL_ERROR_DEPRECATED_DOLLARIF);
		    rwlzparsestring(rwm, e); // parse the expression in ()
		  }

		}

\$else		{
		  if (!rwm->ifdirdep)
		    rwlerror(rwm, RWL_ERROR_UNMATCHED_ELSE_OR_END, "else");
		  else
		  {
		    // flip the appropriate bit unless too deept
		    if (rwm->ifdirdep<=RWL_MAX_IFDD)
		    {
		      ub4 mybit = 1<<(rwm->ifdirdep-1);
		      if (bit(rwm->ifdirbit,mybit))
			bic(rwm->ifdirbit,mybit);
		      else
			bis(rwm->ifdirbit,mybit);
		    }
		  }

		}

\$endif		{
		  if (!rwm->ifdirdep)
		    rwlerror(rwm, RWL_ERROR_UNMATCHED_ELSE_OR_END, "endif");
		  else
		  {
		    // clear the appropriate bit unless too deept
		    rwm->ifdirdep--;
		    if (rwm->ifdirdep<=RWL_MAX_IFDD)
		    {
		      bic(rwm->ifdirbit,(1<< (rwm->ifdirdep) ));
		    }
		  }

		}

\$statistics:basic  if (!rwm->ifdirbit) {
			    bis(rwm->mflags, RWL_P_STATISTICS);
			    // all set in tflags as tfalgs HAS been copied from mflags
			    // when this code is executed
			    bis(rwm->mxq->tflags, RWL_P_STATISTICS);
			  }

\$statistics:histograms  if (!rwm->ifdirbit) {
			    bis(rwm->mflags, RWL_P_STATISTICS|RWL_P_HISTOGRAMS);
			    bis(rwm->mxq->tflags, RWL_P_STATISTICS|RWL_P_HISTOGRAMS);
			    rwm->histbucks = RWL_MAX_HIST_BUCK;
			  }

\$statistics:all  if (!rwm->ifdirbit) {
			    bis(rwm->mflags, RWL_P_STATISTICS|RWL_P_HISTOGRAMS|RWL_P_PERSECSTAT);
			    bis(rwm->mxq->tflags, RWL_P_STATISTICS|RWL_P_HISTOGRAMS|RWL_P_PERSECSTAT);
			    rwm->histbucks = RWL_MAX_HIST_BUCK;
			  }

\$setaction:on	{ 
			  if (!rwm->ifdirbit) bis(rwm->m2flags, RWL_P2_SETACTION);
			}

\$setaction:reset 	{ 
			  if (!rwm->ifdirbit) bis(rwm->m2flags, RWL_P2_SETACTRESET | RWL_P2_SETACTION);
			}
\$setaction:off 	{ 
			  if (!rwm->ifdirbit) bic(rwm->m2flags, RWL_P2_SETACTRESET | RWL_P2_SETACTION);
			}

\$ampersand:on		{ 
			  if (!rwm->ifdirbit) bis(rwm->m4flags, RWL_P4_AMPERSAND);
			}

\$ampersand:off 	{ 
			  if (!rwm->ifdirbit) bic(rwm->m4flags, RWL_P4_AMPERSAND);
			}

\$errortime:on		{ 
			  if (!rwm->ifdirbit) bis(rwm->m2flags, RWL_P2_ERRORWTIM);
			}

\$errortime:off 	{ 
			  if (!rwm->ifdirbit) bic(rwm->m2flags, RWL_P2_ERRORWTIM);
			}

\$sessionpool_no_rlb:on		{ 
			  if (!rwm->ifdirbit) bis(rwm->m3flags, RWL_P3_SP_NORLB);
			}
\$sessionpool_no_rlb:off 		{ 
			  if (!rwm->ifdirbit) bic(rwm->m3flags, RWL_P3_SP_NORLB);
			}

\$nameexpand:on		{ 
			  if (!rwm->ifdirbit) bic(rwm->m2flags, RWL_P2_NOENVEXPAND);
			}
\$nameexpand:off 		{ 
			  if (!rwm->ifdirbit) bis(rwm->m2flags, RWL_P2_NOENVEXPAND);
			}

\$niceabort:on		{ 
			  if (!rwm->ifdirbit) bis(rwm->m3flags, RWL_P3_NICEABORT);
			}
\$niceabort:off 		{ 
			  if (!rwm->ifdirbit) bic(rwm->m3flags, RWL_P3_NICEABORT);
			}

\$queue:on		{ 
			  if (!rwm->ifdirbit) bis(rwm->m2flags, RWL_P2_QUEUE);
			}
\$queue:off 		{ 
			  if (!rwm->ifdirbit) bic(rwm->m2flags, RWL_P2_QUEUE);
			}

\$bindoffset:0 { 
			  if (!rwm->ifdirbit) bis(rwm->m2flags, RWL_P2_BINDZERO);
			}
\$bindoffset:1 { 
			  if (!rwm->ifdirbit) bic(rwm->m2flags, RWL_P2_BINDZERO);
			}

\$ora01013:stop  {
			    if (!rwm->ifdirbit) rwlcont1013=0;
			  }

\$ora01013:continue  {  
				if (!rwm->ifdirbit) rwlcont1013=1;
			      }

\$oraerror:count  {
			    if (!rwm->ifdirbit) bic(rwm->m4flags, RWL_P4_ERRNOCOUNT);
			  }
\$oraerror:nocount  {
			    if (!rwm->ifdirbit) bis(rwm->m4flags, RWL_P4_ERRNOCOUNT);
			  }

\$oraerror:stop  {
			    if (!rwm->ifdirbit) bis(rwm->mflags, RWL_P_STOPONORA);
			  }

\$oraerror:continue  {  
				if (!rwm->ifdirbit) bic(rwm->mflags, RWL_P_STOPONORA);
			      }

\$include:<(\\.|[^\>])*>	|
\$include:\"(\\.|[^\\"<>])*\"	{
			    if (bit(rwm->m3flags, RWL_P3_GENERATE)) // not while generating
			    {
			      rwlerror(rwm, RWL_ERROR_DIRECTIVE_USED_IN_GENERATED, yytext);
			    }
			    else if (bit(rwm->m2flags, RWL_P2_INTHING)) // Must be outside anything
			      rwlerror(rwm, RWL_ERROR_CANNOT_INCLUDE_HERE);
			    else if (rwm->incldep >= RWL_MAX_INCLUDE_RECURSION) // Check if too deep
			      rwlerror(rwm, RWL_ERROR_INCLUDE_DEEP);
			    else if (rwm->rwlyleng<12) /*ASSERT*/
			      rwlsevere(rwm, "[rwllexer-rwm->rwlyleng:%d]", rwm->rwlyleng);
			    else if (!rwm->ifdirbit) // only if $if: is true
			    {
			      // We are going to recursive call the parser, 
			      // so wee need variables to save old and contain
			      // new environment
			      FILE *oldfil, *newfil;
			      rwl_location oldifloc, oldloc, *newloc = 0;;
			      YY_BUFFER_STATE oldybs, newybs;
			      sb4 xx;
			      ub4 oldifdep, eeflags;
			      text *nfn;

			      // Save $if directive stuff
			      memcpy(&oldifloc, &rwm->ifdirloc, sizeof(rwl_location));
			      oldifdep = rwm->ifdirdep;

			      rwm->ifdirdep = 0;

			      // This is only used to check we aren't
			      // including the same file into itself
			      rwm->inclfil[rwm->incldep] = rwm->loc.fname;
			      rwm->incldep++;

			      // We cannot free this allocation because it needs
			      // to be kept during the entire execution as later errors
			      // will refer to it
			      // To make it free-able, a linked list must be implemented
			      // so we can go though it and free just before exit. This
			      // will be in next version ....
			      newloc = rwlalloc(rwm, sizeof(rwl_location));
			      rwm->parfaitloc = newloc;

			      eeflags = RWL_ENVEXP_PATH | RWL_ENVEXP_STRIP;
			      if ('<' == rwm->rwlytext[9])
			        eeflags |= RWL_ENVEXP_NOTCD | RWL_ENVEXP_PUBLIC;
			      else
			      {
			        if (bit(rwm->m2flags, RWL_P2_PUBLICSEARCH))
				  eeflags |= RWL_ENVEXP_PUBLIC;
			      }

			      if (bit(eeflags, RWL_ENVEXP_NOTCD) 
			          && (  '.'==rwm->rwlytext[10]
				     || '/'==rwm->rwlytext[10] ))
			      {
			        nfn = rwlstrdup(rwm, rwm->rwlytext + 10);
			        nfn[rwlstrlen(nfn)-1] = 0; /* exclude " or > */
			        rwlerror(rwm, RWL_ERROR_ILLEGAL_FILE_NAME, nfn);
				rwlfree(rwm, nfn);
				rwlfree(rwm, newloc);
				newloc = 0;
				goto cannotrecurse;
			      }

			      if (! (nfn=rwlenvexp2(rwm->mxq, &rwm->loc, (text *)rwm->rwlytext+10, eeflags, 1)))
			      {
			        nfn = rwlstrdup(rwm, rwm->rwlytext + 10);
			        nfn[rwlstrlen(nfn)-1] = 0; /* exclude " or > */
			        rwlerror(rwm, RWL_ERROR_FILE_NOT_OPEN, nfn);
				rwlfree(rwm, nfn);
				rwlfree(rwm, newloc);
				newloc = 0;
				goto cannotrecurse;
			      }
			      newloc->fname = rwlstrdup(rwm, nfn);
			      
			      if (rwlstrlen(newloc->fname)<=1) // must have characters
			      {
			        rwlerror(rwm, RWL_ERROR_ILLEGAL_FILE_NAME, newloc->fname);
				rwlfree(rwm, newloc->fname);
				rwlfree(rwm, newloc);
				newloc = 0;
				goto cannotrecurse;
			      }

			      if (!(newfil = rwlfopen(rwm->mxq, 0, newloc->fname,"r"))) // must be able to open
			      {
			        rwlerror(rwm, RWL_ERROR_FILE_NOT_OPEN, newloc->fname);
				rwlfree(rwm, newloc->fname);
				rwlfree(rwm, newloc);
				newloc = 0;
				goto cannotrecurse;
			      }
			      
			      {
				// Check the previous names for repetition
			        ub4 j = 0;
				while (j<=rwm->incldep-1)
				{
				  // must not be any previous name
				  if (0==rwlstrcmp(newloc->fname, rwm->inclfil[j]))
				  {
				    rwlerror(rwm, RWL_ERROR_RECURSIVE_INCLUDE, newloc->fname);
				    rwlfree(rwm, newloc->fname);
				    rwlfree(rwm, newloc);
				    newloc = 0;
				    goto outofthisloop;
				  }
				  j++;
				}
				outofthisloop:
				if (j==rwm->incldep)
				{
				  // finally, everything good
				  rwm->loc.errlin = 0; 
				    
				  // Save current location
				  memcpy(&oldloc, &rwm->loc, sizeof(rwl_location));
				  newloc->lineno = 1;
				  newloc->errlin = 0;
				  // Save current lexer buffer context and creaty new
				  oldybs = YY_CURRENT_BUFFER;
				  newybs = rwly_create_buffer(newfil, YY_BUF_SIZE, rwm->rwlyscanner);

				  // Save current file and set new
				  oldfil = rwlyget_in(rwm->rwlyscanner);
				  rwlyfileset(rwm, newfil, newloc->fname);
				  yy_switch_to_buffer(newybs, rwm->rwlyscanner);

				  xx = rwlyparse(rwm); // recurse
				  if (bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
				    rwm->ifdirdep = 0; // may have skipped $endif
				  if (xx)
				  {
				    rwm->loc.errlin = rwm->loc.lineno-1;
				    rwlerror(rwm, RWL_ERROR_PREMATUREEND);
				    bic(rwm->m2flags, RWL_P2_INTHING);
				  }
				  // restore
				  rwlyfileset(rwm, oldfil, oldloc.fname);
				  rwly_switch_to_buffer(oldybs, rwm->rwlyscanner);
				  memcpy(&rwm->loc, &oldloc, sizeof(rwl_location));
				  // and delete the no longer used buffer
				  rwly_delete_buffer(newybs, rwm->rwlyscanner);
				}
				else
				{
				  fclose(newfil);
				}
			      }
			      cannotrecurse:
			      rwm->incldep--;

			      // Check $if directives are in balance
			      if (rwm->ifdirdep)
				rwlerror(rwm, RWL_ERROR_DIRIF_NOT_FINISH
				, rwm->ifdirloc.fname, rwm->ifdirloc.lineno);
			        
			      // Restore $if directive stuff
			      memcpy(&rwm->ifdirloc, &oldifloc, sizeof(rwl_location));
			      rwm->ifdirdep = oldifdep;
			    }
			  }

\$errordetail:on	{
			  if (!rwm->ifdirbit)
			  {
			    if (bit(rwm->m2flags, RWL_P2_INRCFILE))
			      bis(rwm->m4flags, RWL_P4_URLERRORON);
			    else
			      rwlerror(rwm, RWL_ERROR_ONLY_IN_RC, "errordetail:on");
			  }
			}

\$hostname:[a-zA-Z_0-9][-a-zA-Z0-9_\.]*	{
			  bic(rwm->m3flags, RWL_P3_WARNSQLKW);
			  if (!rwm->ifdirbit)
			  {
			    if (bit(rwm->m2flags, RWL_P2_INRCFILE))
			      rwm->usrhostname = rwlstrdup(rwm, rwm->rwlytext + 10);
			    else
			      rwlerror(rwm, RWL_ERROR_ONLY_IN_RC, "hostname");
			  }
			}

\$eventnotify:on	{ 
			  if (!rwm->ifdirbit) 
			  {
			    if (bit(rwm->m2flags, RWL_P2_INRCFILE))
			      bis(rwm->m2flags, RWL_P2_EVTNOTIF);
			    else
			      rwlerror(rwm, RWL_ERROR_ONLY_IN_RC, "eventnotify");
			  }
			}

\$eventnotify:off	{ 
			  if (!rwm->ifdirbit) 
			  {
			    if (bit(rwm->m2flags, RWL_P2_INRCFILE))
			      bic(rwm->m2flags, RWL_P2_EVTNOTIF);
			    else
			      rwlerror(rwm, RWL_ERROR_ONLY_IN_RC, "eventnotify");
			  }
			}

\$oerstatistics:on	{ 
			  if (!rwm->ifdirbit) 
			  {
			    bis(rwm->m2flags, RWL_P2_OERSTATS);
			    bis(rwm->mflags, RWL_P_STATISTICS);
			  }
			}

\$oerstatistics:off	{ 
			  if (!rwm->ifdirbit) 
			    bic(rwm->m2flags, RWL_P2_OERSTATS);
			}

\$embeddedqueryarray:[0-9][0-9]* {
			    if (!rwm->ifdirbit) 
			    {
			      ub4 x = rwlatoi(rwm->rwlytext+sizeof("embeddedqueryarray:"));
			      if (!x)
			        rwlerror(rwm, RWL_ERROR_SQLARRAY_NOTGOOD);
			      else
			      {
				rwm->embqryasiz = (ub4) x;
			      }
			    }
			  }

\$embeddeddmlarray:[0-9][0-9]* {
			    if (!rwm->ifdirbit) 
			    {
			      ub4 x = rwlatoi(rwm->rwlytext+sizeof("embeddeddmlarray:"));
			      if (!x)
			        rwlerror(rwm, RWL_ERROR_SQLARRAY_NOTGOOD);
			      else
			      {
				rwm->embdmlasiz = (ub4) x;
			      }
			    }
			  }

\$oerstatistics:[0-9][0-9]* {
			    if (!rwm->ifdirbit) 
			    {
			      ub4 x = rwlatoi(rwm->rwlytext+15);
			      if (!x)
			        bic(rwm->m2flags, RWL_P2_OERSTATS);
			      else
			      {
			        bis(rwm->m2flags, RWL_P2_OERSTATS);
				bis(rwm->mflags, RWL_P_STATISTICS);
				rwm->oermaxstat = (sb4) x;
			      }
			    }
			  }

\$bindoutname:on	{ 
			  if (!rwm->ifdirbit) 
			  {
			    bis(rwm->m3flags, RWL_P3_BINDOUTNAME);
			    rwm->boname = (text *)"out";
			  }
			}

\$bindoutname:off	{ 
			  if (!rwm->ifdirbit) 
			  {
			    bic(rwm->m3flags, RWL_P3_BINDOUTNAME);
			    rwm->boname = 0;
			  }
			}

\$bindoutname:on:[a-zA-Z][a-zA-Z0-9_]*	{ 
			  if (!rwm->ifdirbit) 
			  {
			    bis(rwm->m3flags, RWL_P3_BINDOUTNAME);
			    rwm->boname = rwlstrdup(rwm,  rwm->rwlytext+sizeof("bindoutname:on:"));
			  }
			}

\$implicit:bind	{ 
			  if (!rwm->ifdirbit) 
			  {
			    bis(rwm->m3flags, RWL_P3_ALLIMPLBIN);
			  }
			}
\$implicit:define	{ 
			  if (!rwm->ifdirbit) 
			  {
			    bis(rwm->m3flags, RWL_P3_ALLIMPLDEF);
			  }
			}
\$implicit:both	{ 
			  if (!rwm->ifdirbit) 
			  {
			    bis(rwm->m3flags, RWL_P3_ALLIMPLDEF);
			    bis(rwm->m3flags, RWL_P3_ALLIMPLBIN);
			  }
			}
\$implicit:off	{ 
			  if (!rwm->ifdirbit) 
			  {
			    bic(rwm->m3flags, RWL_P3_ALLIMPLDEF);
			    bic(rwm->m3flags, RWL_P3_ALLIMPLBIN);
			  }
			}
\$implicit:lowercase { 
			  if (!rwm->ifdirbit) 
			  {
			    bic(rwm->m3flags, RWL_P3_IMPLCASE);
			  }
			}
\$implicit:keepcase { 
			  if (!rwm->ifdirbit) 
			  {
			    bis(rwm->m3flags, RWL_P3_IMPLCASE);
			  }
			}

\$reconnect1017:on	{ 
			  if (!rwm->ifdirbit) 
			  {
			    bis(rwm->mflags, RWL_P_RECON1017);
			  }
			}

\$reconnect1017:off	{ 
			  if (!rwm->ifdirbit) 
			    bic(rwm->mflags, RWL_P_RECON1017);
			}

\$pre31fileassign:on	{ 
			  if (!rwm->ifdirbit) 
			    rwm->pre31fil = RWL_31_FIL_ON;
			}

\$pre31fileassign:off	{ 
			  if (!rwm->ifdirbit) 
			    rwm->pre31fil = RWL_31_FIL_OFF;
			}

\$pre31fileassign:warn	{ 
			  if (!rwm->ifdirbit) 
			    rwm->pre31fil = RWL_31_FIL_WARN;
			}

\$slashconvert:on	{ 
			  if (!rwm->ifdirbit) 
			  {
#if                       RWL_OS == RWL_WINDOWS
			    bis(rwm->m4flags, RWL_P4_SLASHCONVERT);
#else
			    if (bit(rwm->mflags, RWL_DEBUG_ALLOWHACK))
			      bis(rwm->m4flags, RWL_P4_SLASHCONVERT);
			    else
			      rwlerror(rwm, RWL_ERROR_ONLY_ON_WINDOWS, "$slashconvert:on");
#endif
			  }
			}

\$slashconvert:off	{ 
			  if (!rwm->ifdirbit) 
			  {
			    bic(rwm->m4flags, RWL_P4_SLASHCONVERT);
#if                       RWL_OS != RWL_WINDOWS
			    rwlerror(rwm, RWL_ERROR_ONLY_ON_WINDOWS, "$slashconvert:off");
#endif
			  }
			}

\$crnlreadline:on	{ 
			  if (!rwm->ifdirbit) 
			    bis(rwm->m4flags, RWL_P4_CRNLREADLINE);
			}

\$crnlreadline:off	{ 
			  if (!rwm->ifdirbit) 
			    bic(rwm->m4flags, RWL_P4_CRNLREADLINE);
			}

\$crnlwriteline:on	{ 
			  if (!rwm->ifdirbit) 
			    bis(rwm->m4flags, RWL_P4_CRNLWRITELINE);
			}

\$crnlwriteline:off	{ 
			  if (!rwm->ifdirbit) 
			    bic(rwm->m4flags, RWL_P4_CRNLWRITELINE);
			}

\$crnlgeneral:on	{ 
			  if (!rwm->ifdirbit) 
			  {
			    bis(rwm->m4flags, RWL_P4_CRNLGENERAL);
			    rwm->lineend = (text *)"\r\n";
			  }
			}

\$crnlgeneral:off	{ 
			  if (!rwm->ifdirbit) 
			  {
			    bic(rwm->m4flags, RWL_P4_CRNLGENERAL);
			    rwm->lineend = (text *)"\n";
			  }
			}

\$crnlstring:on	{ 
			  if (!rwm->ifdirbit) 
			    bis(rwm->m4flags, RWL_P4_CRNLSTRING);
			}

\$crnlstring:off	{ 
			  if (!rwm->ifdirbit) 
			    bic(rwm->m4flags, RWL_P4_CRNLSTRING);
			}

\$queueeverytiming:on	{ 
			  if (!rwm->ifdirbit) 
			    bis(rwm->m3flags, RWL_P3_QETIMES);
			}

\$queueeverytiming:off	{ 
			  if (!rwm->ifdirbit) 
			    bic(rwm->m3flags, RWL_P3_QETIMES);
			}


\$dbfailures:[0-9][0-9]*  {
			    if (!rwm->ifdirbit)
			    {
			      rwm->dbfailures = (ub4) rwlatoi(rwm->rwlytext+12);
			    }
			  }

\$mute:[0-9][0-9]* {
			  if (!rwm->ifdirbit) rwlerrormute(rwm, (ub4) rwlatoi(rwm->rwlytext+6),1 /* warn if !warning*/ );
			  }

\$alwaysmute:[0-9][0-9]* {
			  rwlerrormute(rwm, (ub4) rwlatoi(rwm->rwlytext+12),1 /* warn if !warning*/ );
			  }

\$maxlocals:[0-9][0-9]* if (!rwm->ifdirbit) {
			  ub4 newval;
			  newval = (ub4)rwlatoi(rwm->rwlytext+11) + 1;  //+1 for the return value
			  if (bit(rwm->m2flags, RWL_P2_INRCFILE))
			  {
			    if (rwm->maxlocals)
			      rwlerror(rwm, RWL_ERROR_DOT_OVERWRITES_COMMAND
			        , "maxlocals", newval>rwm->maxlocals ? newval-1 : rwm->maxlocals-1);
			  }
			  if (newval>rwm->maxlocals)
			    rwm->maxlocals = newval;

			}

\$maxident:[0-9][0-9]* if (!rwm->ifdirbit) {
			  ub4 newval;
			  if (bit(rwm->m2flags, RWL_P2_INRCFILE))
			  {
			    newval = (ub4)rwlatoi(rwm->rwlytext+10);
			    if (rwm->maxident)
			      rwlerror(rwm, RWL_ERROR_DOT_OVERWRITES_COMMAND
			        , "maxident", newval>rwm->maxident ? newval : rwm->maxident);
			    if (newval>rwm->maxident)
			      rwm->maxident = newval;
			  }
			  else
			    rwlerror(rwm, RWL_ERROR_ONLY_IN_RC, "maxident");
			  }

\$maxcode:[0-9][0-9]* if (!rwm->ifdirbit) {
			  ub4 newval;
			  if (bit(rwm->m2flags, RWL_P2_INRCFILE))
			  {
			    newval = (ub4)rwlatoi(rwm->rwlytext+9);
			    if (rwm->maxcode)
			      rwlerror(rwm, RWL_ERROR_DOT_OVERWRITES_COMMAND
			        , "maxcode", newval>rwm->maxcode ? newval : rwm->maxcode);
			    if (newval>rwm->maxcode)
			      rwm->maxcode = newval;
			  }
			  else
			    rwlerror(rwm, RWL_ERROR_ONLY_IN_RC, "maxcode");
			  }

\$readbuffer:[0-9][0-9]* if (!rwm->ifdirbit) {
			  ub4 newval;
			  if (bit(rwm->m2flags, RWL_P2_INRCFILE))
			  {
			    newval = (ub4)rwlatoi(rwm->rwlytext+12);
			    if (rwm->maxreadlen)
			      rwlerror(rwm, RWL_ERROR_DOT_OVERWRITES_COMMAND
			        , "readbuffer", newval>rwm->maxreadlen ? newval : rwm->maxreadlen);
			    if (newval>rwm->maxreadlen)
			      rwm->maxreadlen = newval;
			  }
			  else
			    rwlerror(rwm, RWL_ERROR_ONLY_IN_RC, "readbuffer");
			  }

\$iformat:%[\.0-9d#iouxXlL]* if (!rwm->ifdirbit) {
			  rwm->iformat = (char *) rwlstrdup(rwm, rwm->rwlytext+9);
			  rwlcheckiformat(rwm);
			}
\$dformat:%[\.0-9][\.0-9#aAeEfFgGlL]* if (!rwm->ifdirbit) {
			  rwm->dformat = (char *) rwlstrdup(rwm, rwm->rwlytext+9);
			  rwlcheckdformat(rwm);
			}

\$debugon:[0-9a-zA-Z][0-9a-zA-Z,]* if (!rwm->ifdirbit) {
			  ub4 newdebug = rwldebugconv(rwm, (text *)rwm->rwlytext+9);
			  bis(rwm->mflags, newdebug);
			  if (rwm->mxq)
			    bis(rwm->mxq->tflags, newdebug);
			  if (bit(rwm->mflags, RWL_DEBUG_ALLOWHACK))
			  {
			    rwlerror(rwm, RWL_ERROR_HACK_ALLOWED);
			  }
			}

\$debugoff:[0-9a-zA-Z][0-9a-zA-Z,]* if (!rwm->ifdirbit) {
				 ub4 newdebug = rwldebugconv(rwm, (text *)rwm->rwlytext+10);
			//   ub4 newdebug = (ub4) rwlhex2ub8(rwm->rwlytext+10, 2*sizeof(ub4)); 
			  bic(rwm->mflags, newdebug);
			  if (rwm->mxq)
			    bic(rwm->mxq->tflags, newdebug);
			}

\$randseed:[0-9a-fA-F][0-9a-fA-F]* if (!rwm->ifdirbit) {
			  rwm->mxq->xsubi[0] = (unsigned short) 
			    rwlhex2ub8(rwm->rwlytext+10,2*sizeof(unsigned short));
			  if (rwm->rwlyleng>15)
			    rwm->mxq->xsubi[1] = (unsigned short) 
			      rwlhex2ub8(rwm->rwlytext+14,2*sizeof(unsigned short));
			  else
			    rwm->mxq->xsubi[1]=0;
			  if (rwm->rwlyleng>19)
			    rwm->mxq->xsubi[2] = (unsigned short) 
			      rwlhex2ub8(rwm->rwlytext+18,2*sizeof(unsigned short));
			  else
			    rwm->mxq->xsubi[2]=0;
			}



\$randseed:0[xX][0-9a-fA-F][0-9a-fA-F]* if (!rwm->ifdirbit) {
			  rwm->mxq->xsubi[0] = (unsigned short)
			    rwlhex2ub8(rwm->rwlytext+12, 2*sizeof(unsigned short));
			  if (rwm->rwlyleng>17)
			    rwm->mxq->xsubi[1] = (unsigned short)
			      rwlhex2ub8(rwm->rwlytext+16, 2*sizeof(unsigned short));
			  else
			    rwm->mxq->xsubi[1]=0;
			  if (rwm->rwlyleng>21)
			    rwm->mxq->xsubi[2] = (unsigned short)
			      rwlhex2ub8(rwm->rwlytext+20, 2*sizeof(unsigned short));
			  else
			    rwm->mxq->xsubi[2]=0;
			}

\$clockstart:[0-9]+ |
\$clockstart:[0-9]+\.[0-9]* if (!rwm->ifdirbit) {
			  if (rwm->runnumber)
			    rwlerror(rwm, RWL_ERROR_STARTSEC_TOO_LATE, rwm->adjepoch);
			  else
			  {
			    // Pattern has no minus - so cannot be made negative
			    rwm->adjepoch = rwlatof(rwm->rwlytext+12);
			  }
			}

\$startseconds:[0-9]+ |
\$startseconds:[0-9]+\.[0-9]* if (!rwm->ifdirbit) {
			  if (rwm->runnumber)
			    rwlerror(rwm, RWL_ERROR_STARTSEC_TOO_LATE, rwm->adjepoch);
			  else
			  {
			    // Pattern has no minus - so cannot be made negative
			    rwm->adjepoch = rwlatof(rwm->rwlytext+14);
			  }
			}

\$musymbol:[^ \t\r\n]+ if (!rwm->ifdirbit) {
			  {
			    rwm->musymbol = rwlstrdup(rwm, rwm->rwlytext+10);
			    rwm->musymlen = (ub4) rwlstrlen(rwm->musymbol);
			  }
			}

\$sqllogging:stderr	{ 
			  if (!rwm->ifdirbit) 
			  {
			    if (bit(rwm->m4flags, RWL_P4_SQLLOGGING))
			      rwlerror(rwm, RWL_ERROR_SQL_LOGGING_ALREADY);
			    else
			      rwm->sqllogfile = stderr;
			    bis(rwm->m4flags, RWL_P4_SQLLOGGING);
			  }
			}

\$sqllogging:stdout	{ 
			  if (!rwm->ifdirbit) 
			  {
			    if (bit(rwm->m4flags, RWL_P4_SQLLOGGING))
			      rwlerror(rwm, RWL_ERROR_SQL_LOGGING_ALREADY);
			    else
			      rwm->sqllogfile = stdout;
			    bis(rwm->m4flags, RWL_P4_SQLLOGGING);
			  }
			}

\$sqllogging:file:\"(\\.|[^\\"<>])*\"	{
			  if (!rwm->ifdirbit)
			  {
			    if (bit(rwm->m4flags, RWL_P4_SQLLOGGING))
			      rwlerror(rwm, RWL_ERROR_SQL_LOGGING_ALREADY);
			    else
			    {
			      text *lognam;
			      lognam=rwlenvexp2(rwm->mxq, &rwm->loc, (text *)rwm->rwlytext+18, RWL_ENVEXP_STRIP, 1);
			      if (lognam)
			      {
				if ((rwm->sqllogfile = rwlfopen(rwm->mxq, 0, lognam,"w")))
				{
				  bis(rwm->m4flags, RWL_P4_SQLLOGGING|RWL_P4_SQLLOGFILE);
				}
				else
				{
				  char etxt[100];
				  if (0!=rwlstrerror(errno, etxt, sizeof(etxt)))
				    strcpy(etxt,"unknown");
				  rwlerror(rwm, RWL_ERROR_CANNOTOPEN_FILEWRITE, lognam, etxt);
				}
			      }
			      else
				rwlsevere(rwm, "[rwllexer-sqllogfile:%s]", rwm->rwlytext);

			    }
			  }
			}

\$sqllogging:append:\"(\\.|[^\\"<>])*\"	{
			  if (!rwm->ifdirbit)
			  {
			    if (bit(rwm->m4flags, RWL_P4_SQLLOGGING))
			      rwlerror(rwm, RWL_ERROR_SQL_LOGGING_ALREADY);
			    else
			    {
			      text *lognam;
			      lognam=rwlenvexp2(rwm->mxq, &rwm->loc, (text *)rwm->rwlytext+20, RWL_ENVEXP_STRIP, 1);
			      if (lognam)
			      {
				if ((rwm->sqllogfile = rwlfopen(rwm->mxq, 0, lognam,"a")))
				{
				  bis(rwm->m4flags, RWL_P4_SQLLOGGING|RWL_P4_SQLLOGFILE);
				}
				else
				{
				  char etxt[100];
				  if (0!=rwlstrerror(errno, etxt, sizeof(etxt)))
				    strcpy(etxt,"unknown");
				  rwlerror(rwm, RWL_ERROR_CANNOTOPEN_FILEWRITE, lognam, etxt);
				}
			      }
			      else
				rwlsevere(rwm, "[rwllexer-sqllogappend:%s]", rwm->rwlytext);

			    }
			  }
			}

\$sqllogging:off	{ 
			  if (!rwm->ifdirbit) 
			  {
			    if (bit(rwm->m4flags, RWL_P4_SQLLOGFILE))
			      fclose(rwm->sqllogfile);
			    bic(rwm->m4flags, RWL_P4_SQLLOGGING|RWL_P4_SQLLOGFILE);
			    rwm->sqllogfile = 0;
			  }
			}
\$trigonometry:radian[s]?	{
			 if (!rwm->ifdirbit) bis(rwm->m4flags, RWL_P4_TRIGRAD);
			}
\$trigonometry:degree[s]?	{
			 if (!rwm->ifdirbit) bic(rwm->m4flags, RWL_P4_TRIGRAD);	 
			}

\$filelinename:[0-9]+:\"(\\.|[^\\"<>])*\"	{
		  rwm->loc.fname = rwlstrdup(rwm, rwlstrchr(rwm->rwlytext,'"'));
		  rwm->loc.fname[rwlstrlen(rwm->loc.fname)-1] = 0;
		  rwm->loc.lineno = rwlatoi(rwm->rwlytext+14);
		  rwm->loc.inpos = rwm->rwlyleng+1;
		  rwm->loc.errlin = 0;
		}
\$ |
\$[^ \t\r\n]	{ // bad directive
		  char idbuf[100], c;
		  ub4 i;

		  // copy at most 100 characters of wrong directive
		  idbuf[0] = rwm->rwlytext[0];
		  
		  if (rwm->rwlytext[1]) // one non-blank
		  {
		    idbuf[1] = rwm->rwlytext[1];
		    i=2;
		  }
		  else // $ at end of line
		    i=1;

		  c = input(yyscanner);

		  while (' '!=c && '\r'!=c && '\n'!=c)
		  {
		    if (i<sizeof(idbuf)-1)
		      idbuf[i++] = c;
		    c = input(yyscanner);
		  }
		  idbuf[i] = 0;
		  if (0==strncmp(idbuf,"$if",3))
		  {
		    // The bad directive is $if without $then
		    // consume until newline and report error
		    while ('\n'!=c)
		    {
		      c = input(yyscanner);
		    }
		    rwlerror(rwm, RWL_ERROR_DOLLARIF_NO_THEN, idbuf);
		  }
		  else
		    rwlerror(rwm, RWL_ERROR_BAD_DIRECTIVE, idbuf);
		  if ('\n' == c)
		    { rwm->loc.lineno++; rwm->loc.inpos=0; }
		}


\\\n			{ rwm->loc.lineno++; rwm->loc.inpos=0; }
\\\r\n			{ rwm->loc.lineno++; rwm->loc.inpos=0; }
\n			{ rwm->loc.lineno++; rwm->loc.inpos=0; }
[ \t\r]+		/* nothing */ ;
#.* 			/* nothing */ ;
.			{ 
			  if (++rwm->badchar>RWL_MAX_ILLEGAL_CHAR)
			  {
			    rwlerror(rwm, RWL_ERROR_TOO_MANY_BAD_CHAR);
			    rwlerrormute(rwm, RWL_ERROR_INVALID_CHARS, 0);
			    rwlerrormute(rwm, RWL_ERROR_INVALID_CHARS_NONASCII, 0);
			    rwlerrormute(rwm, RWL_ERROR_TOO_MANY_BAD_CHAR, 0);
			  }
			  if (isprint(rwm->rwlytext[0]))
			    rwlerror(rwm, RWL_ERROR_INVALID_CHARS, rwm->loc.inpos, rwm->rwlytext);
			  else
			    rwlerror(rwm, RWL_ERROR_INVALID_CHARS_NONASCII, rwm->loc.inpos, (ub1)rwm->rwlytext[0]);
			} 

%%

/* this rouine must be here as it depends on #define
 * and typedefs created by flex
 */

/*LEXTAG:rwlyfileset*/
void rwlyfileset(rwl_main *rwm, FILE *fil, text *fname)
{
  if (!bit(rwm->mflags, RWL_P_ONLYMAINTH))
    rwlsevere(rwm, "[rwlyfileset-notonlymain]");
  else
  {
    rwlyset_in(fil, rwm->rwlyscanner);
    rwm->loc.fname = rwlstrdup(rwm, fname);
    rwm->loc.lineno = 1;
    rwm->loc.errlin = 0;
  }
}

sb4 rwlyparsestring(rwl_main *rwm, const char *str)
{
  text *savinam;
  sb4 retval;
  // https://stackoverflow.com/questions/780676/string-input-to-flex-lexer
  YY_BUFFER_STATE ystate;
  
  // Something utterly wrong if we try this during execute
  if (!bit(rwm->mflags, RWL_P_ONLYMAINTH))
  {  
    rwlsevere(rwm, "[rwlyparsestring-noonlymain:%x]", rwm->mflags);
    return 0;
  }
  if (rwm->codename)
  {  
    rwlsevere(rwm, "[rwlyparsestring-incode:%s]", rwm->codename);
    return 0;
  }
  if (rwm->phead || rwm->ptail || rwm->skipdep)
  {  
    rwlsevere(rwm, "[rwlyparsestring-hasstack;0x%p;0x%p;%d]"
    , rwm->phead, rwm->ptail, rwm->skipdep);
    return 0;
  }
  savinam = rwm->inam;
  ystate = rwly_scan_string(str, rwm->rwlyscanner);
  retval = rwlyparse(rwm); // parse the string
  rwly_delete_buffer(ystate, rwm->rwlyscanner);
  
  rwm->inam = savinam;
  return retval;
}


/*LEXTAG:rwlywrap*/
sb4 rwlywrap(yyscan_t ys)
{
  rwl_main *rwm = rwlyget_extra (ys);
  // prevent error number to be one higher
  // than line count
  // Note that this will fail if the last
  // line isn't terminated by \n
  // but we have no way to figure out
  if (!bit(rwm->mflags, RWL_P_ONLYMAINTH))
    rwlsevere(rwm, "[rwlywrap-notonlymain]");
  else
    rwm->loc.errlin = rwm->loc.lineno - 1;
  if (!bit(rwm->m3flags, RWL_P3_EXECGEN))
    fclose(rwlyget_in(ys));
  return 1;
}

rwlcomp(rwllexer_l, RWL_GCCFLAGS)

