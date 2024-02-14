/*
 * RWP*Load Simulator
 *
 * Copyright (c) 2023 Oracle Corporation
 * Licensed under the Universal Permissive License v 1.0
 * as shown at https://oss.oracle.com/licenses/upl/
 *
 * Real World performance Load simulator lexer/tokenizer
 * for various $option directives
 *
 * rwlarglex.l
 *
 * History
 *
 * bengsig  14-feb-2024 - yy* -> rwm->rwly*
 * bengsig  14-feb-2024 - Also \t in sql syntax
 * bengsig   6-feb-2024 - Own option processing
 * bengsig  30-jan-2024 - All includes in rwl.h
 * bengsig  12-jun-2023 - Make rwm a variable in scanners
 * bengsig  10-aug-2022 - Output userhelp in order from rwl source file
 * bengsig  10-aug-2022 - Don't reorder useroption/userswitch
 * bengsig  04-jul-2022 - Restructure scan string, scan SQL code
 * bengsig  28-jun-2022 - Generate project
 * bengsig  01-jun-2022 - create java scan
 * bengsig  17-may-2022 - "call" is SQL, not PL/SQL
 * bengsig  12-apr-2022 - Allow hyphen in useroption/userswitch
 * bengsig  30-mar-2022 - with is a sql keyword
 * bengsig  19-map-2022 - Add lex tag 
 * bengsig  20-sep-2021 - Include and igore scan for number constants and idetifiers
 * bengsig  16-jun-2021 - Include scan for string and sql to exclude option scan there
 * bengsig  18-feb-2021 - Use bison 3 syntax (which desupports 2)
 * bengsig  07-jul-2020 - Allow help text for $useroption and $userswitch
 * bengsig  06-jul-2020 - Make sure $longoption:quiet is used
 * bengsig  13-may-2020 - Creation
 */

%{
#include "rwl.h"
// This lexer is never called from a scanner, but just
// to get some needed defines, we include output from rwldiprs.y:
#include "rwldiprs.tab.h"
#define YYSTYPE RWLZSTYPE
#define YY_DECL sb4 rwlalex(void *yylval_param, void * yyscanner)
#define YY_USER_ACTION \
{ rwm = (yyget_extra(yyscanner)); \
  rwm->loc.inpos += yyleng; \
  rwm->rwlyleng = (ub4) yyleng; \
  rwm->rwlytext = (text *)yytext; \
}


// to avoid flex generating some code:
// #define YY_NO_INPUT

// The following causes slightly changed
// scan for string constants and SQL
// via the includes below
#define RWL_IN_ARGLEX

%}

%option reentrant bison-bridge
%option extra-type="rwl_main *"
%option prefix="rwla"

%%

%{
  rwl_main *rwm = 0; // will be set using YY_USER_ACTION
%}


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
(?i:begin)	|
(?i:declare)	|
(?i:alter)	|
(?i:merge)	|
(?i:delete)	|
(?i:drop)	|
(?i:call)	|
(?i:with)	|
(?i:truncate)	|
"--"   	|
"/*"   	{
// vi tag: rwlscansql
#include "rwlscansql.c"
	}

\"(\\.|[^\\"]|(\\\n))*\"  { // 
			    // See comments in rwllexer.l
// vi tag: rwlscanstring
#include "rwlscanstring.c"
			  }

  /*LEXTAG:rwlalex*/
\$longoption:[a-z][-a-z]*	|
\$longoption:[a-z][-a-z]*=[^ \r\n\t][^ \r\n\t]*	{
		  if (!bit(rwm->m2flags, RWL_P2_SCANFIRST))
		    rwlerror(rwm, RWL_ERROR_ARGUMENT_NOT_FIRST);
		  else
		  {
		    rwl_arglist *alp;
		    text *argnam =  rwm->rwlytext+12 ;

		    // need an early check for quiet
		    if (0 == rwlstrcmp(rwm->rwlytext+12, (text *) "quiet"))
		      bis(rwm->mflags, RWL_P_QUIET);

		    alp = rwlalloc(rwm, sizeof(rwl_arglist));
		    alp->argname = rwlalloc(rwm,rwlstrlen(argnam)+3); 
		    alp->helpseq = rwm->helpseq++;
		    rwlstrcpy(alp->argname,(text *)"--");
		    rwlstrcpy(alp->argname+2,argnam);
		    if (!rwm->lngargl) // the first
		    {
		      rwm->lngargl = alp;
		    }
		    else // add to list
		    {
		      alp->nextarg = rwm->lngargl;
		      rwm->lngargl = alp;
		    }
		  }
		}

\$userhelp:\"[^\\"]*\" {
		  if (!bit(rwm->m2flags, RWL_P2_SCANFIRST))
		    rwlerror(rwm, RWL_ERROR_ARGUMENT_NOT_FIRST);
		  else
		  {
		    rwl_helplist *ph, *uh;
		    ub4 len;
		    ph = uh = rwm->helphead;
		    // find the last and append there
		    while (uh)
		    {
		      ph = uh;
		      uh = uh->nexthlp;
		    }
		    uh = rwlalloc(rwm, sizeof(rwl_helplist));
		    uh->helpseq = rwm->helpseq++;
		    uh->helptext = rwlstrdup(rwm, rwm->rwlytext+11);
		    len = rwlstrlen(uh->helptext);
		    if (len)
		      uh->helptext[len-1] = 0; // remove " 
		    if (ph)
		      ph->nexthlp = uh;
		    else
		      rwm->helphead = uh;
		  }

		}


\$useroption:[a-zA-Z][-a-zA-Z0-9_]*(:\"[^\\"]*\")?		|
\$userswitch:[a-zA-Z][-a-zA-Z0-9_]*(:\"[^\\"]*\")?	{
		  if (!bit(rwm->m2flags, RWL_P2_SCANFIRST))
		    rwlerror(rwm, RWL_ERROR_ARGUMENT_NOT_FIRST);
		  else
		  {
		    // Check it isn't an ordinary long option
		    ub4 i;
		    ub1 argflag;
		    rwl_arglist *alp, *ale;
		    text *aa, *argnam, *hh, *arghelp;

		    argnam = arghelp = 0;

		    if ('s' == rwm->rwlytext[5])
		    {
		      argflag = RWL_USER_ARG_NOARG;
		      aa = rwm->rwlytext+ 12;
		    }
		    else
		    {
		      argflag = 0;
		      aa = rwm->rwlytext+ 12;
		    }
		    // is there helptext
		    hh = rwlstrchr(aa, ':');
		    if (hh)
		    {
		      // User has helptext as a string
		      argnam = rwlalloc(rwm, hh-aa+1);
		      rwlstrnncpy(argnam,aa,hh-aa+1);
		      /* Parfait_ALLOW memory-leak - It IS free'd in rwlmain.c */
		      arghelp = rwlstrdup(rwm, hh+2);
		      arghelp[rwlstrlen(arghelp)-1] = 0;
		    }
		    else
		    {
		      // Construct a help text
		      ub4 helplen;
		      argnam = rwlstrdup(rwm, aa);
		      if (argflag)
		      {
		        // --(no-)argname : unset or set argname
			helplen = 2*rwlstrlen(argnam) + sizeof("--(no-) : unset or set ") + 1;
			/* Parfait_ALLOW memory-leak - It IS free'd in rwlmain.c */
		        arghelp = rwlalloc(rwm, helplen);
			snprintf((char *)arghelp,helplen, "--(no-)%s : unset or set %s",argnam, argnam);
		      }
		      else
		      {
			// --argname : set value for argname
			helplen = 2*rwlstrlen(argnam) + sizeof("-- : set value for ") + 1;
			/* Parfait_ALLOW memory-leak - It IS free'd in rwlmain.c */
		        arghelp = rwlalloc(rwm, helplen);
			snprintf((char *)arghelp,helplen, "--%s : set value for %s",argnam, argnam);
		      }

		    }

		    // Make sure it isn't ordinary
		    for (i=0; i<rwloptcount-1; i++)
		    {
		      if (! rwlstrcmp(argnam, rwloptions[i].longn))
		      {
			rwlerror(rwm, RWL_ERROR_ARGUMENT_IS_ORDINARY, argnam);
			rwlfree(rwm, arghelp);
			goto cannotuseargument;
		      }
		    }
		    // Make sure it isn't repeated
		    ale = alp = rwm->usrargl;
		    while (alp)
		    {
		      if (! rwlstrcmp(argnam, alp->argname))
		      {
			rwlerror(rwm, RWL_ERROR_ARGUMENT_ALREADY, argnam);
			rwlfree(rwm, arghelp);
			goto cannotuseargument;
		      }
		      ale = alp;
		      alp = alp->nextarg;
		    }

		    alp = rwlalloc(rwm, sizeof(rwl_arglist));
		    alp->helpseq = rwm->helpseq++;
		    alp->argname = argnam;
		    alp->arghelp = arghelp;
		    alp->argflags = argflag;
		    if (!rwm->usrargl) // the first
		    {
		      rwm->usrargl = alp;
		    }
		    else // add to end of list
		    {
		      ale->nextarg = alp;
		    }
		    cannotuseargument:
		    ;
		  }
		}

\$alwaysmute:[0-9][0-9]* {
			  rwlerrormute(rwm, (ub4) rwlatoi(rwm->rwlytext+12),1 /* warn if !warning*/ );
			  }


#.* 			{ 
			  /* just make gcc shut up about unput not being used */
			  if (0)
			    unput(0);
			}

\\\n			{ rwm->loc.lineno++; }
\\\r\n			{ rwm->loc.lineno++; }
\n			{ rwm->loc.lineno++; }
[0-9]+[Ee]("+"|"-")?[0-9]+ |
[0-9]+\.[0-9]*[Ee]("+"|"-")?[0-9]+ |
[0-9]+\.[0-9]*		|
[0-9]+			|
[a-zA-Z_][a-zA-Z0-9_]*	{ ; /* ignore number constants and identifiers */ }
.			{ ; }

%%

#undef rwm /* now outside flex code */

/*LEXTAG:rwlawrap*/
sb4 rwlawrap(yyscan_t ys)
{
  return 1;
}

/* This routine depends on varous defines from flex, so it must be here */
/*LEXTAG:rwlascanstring*/
void rwlascanstring(rwl_main *rwm, const char *str)
{
  text *savinam;
  void *dummy;
  // https://stackoverflow.com/questions/780676/string-input-to-flex-lexer
  YY_BUFFER_STATE astate;

  // Something utterly wrong if we try this during execute
  if (!bit(rwm->mflags, RWL_P_ONLYMAINTH))
  {  
    rwlsevere(rwm, "[rwlaparsestring-noonlymain:%x]", rwm->mflags);
    return;
  }
  if (rwm->codename)
  {  
    rwlsevere(rwm, "[rwlaparsestring-incode:%s]", rwm->codename);
    return;
  }
  if (rwm->phead || rwm->ptail || rwm->skipdep)
  {  
    rwlsevere(rwm, "[rwlaparsestring-hasstack;0x%p;0x%p;%d]"
    , rwm->phead, rwm->ptail, rwm->skipdep);
    return;
  }
  savinam = rwm->inam;
  astate = rwla_scan_string(str, rwm->rwlascanner);
  rwlalex((union YYSTYPE *)&dummy, rwm->rwlascanner); // scan the string
  rwla_delete_buffer(astate, rwm->rwlascanner);

  rwm->inam = savinam;
}

rwlcomp(rwlarglex_l, RWL_GCCFLAGS)

