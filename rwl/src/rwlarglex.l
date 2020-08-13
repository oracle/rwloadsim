/*
 * Real World performance Load simulator lexer/tokenizer
 * for various $option directives
 *
 * rwlarglex.l
 *
 * History
 *
 * bengsig 07-jul-2020 - Allow help text for $useroption and $userswitch
 * bengsig 06-jul-2020 - Make sure $longoption:quiet is used
 * bengsig 13-may-2020 - Creation
 */

%{
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include "rwl.h"
// just to get some needed defines:
#include "rwldiprs.tab.h"


/* The rwm define is used to make code below legible */
#define rwm (yyget_extra(yyscanner))
// to avoid flex generating some code:
#define YY_NO_INPUT

%}

%option reentrant bison-bridge
%option extra-type="rwl_main *"
%option prefix="rwla"

%%


\$longoption:[a-z][-a-z]*	|
\$longoption:[a-z][-a-z]*=[^ \r\n\t][^ \r\n\t]*	{
		  if (!bit(rwm->m2flags, RWL_P2_SCANFIRST))
		    rwlerror(rwm, RWL_ERROR_ARGUMENT_NOT_FIRST);
		  {
		    rwl_arglist *alp;
		    text *argnam = (text *) yytext+12 ;

		    // need an early check for quiet
		    if (0 == strcmp(yytext+12, "quiet"))
		      bis(rwm->mflags, RWL_P_QUIET);

		    alp = rwlalloc(rwm, sizeof(rwl_arglist));
		    alp->argname = rwlalloc(rwm,rwlstrlen(argnam)+2); 
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

\$useroption:[a-zA-Z_][a-zA-Z0-9_]*(:\"[^\\"]*\")?		|
\$userswitch:[a-zA-Z_][a-zA-Z0-9_]*(:\"[^\\"]*\")?	{
		  if (!bit(rwm->m2flags, RWL_P2_SCANFIRST))
		    rwlerror(rwm, RWL_ERROR_ARGUMENT_NOT_FIRST);
		  {
		    // Check it isn't an ordinary long option
		    ub4 i;
		    ub1 argflag;
		    rwl_arglist *alp;
		    text *aa, *argnam, *hh, *arghelp;

		    if ('s' == yytext[5])
		    {
		      argflag = RWL_USER_ARG_NOARG;
		      aa = (text *) yytext+ 12;
		    }
		    else
		    {
		      argflag = 0;
		      aa = (text *) yytext+ 12;
		    }
		    // is there helptext
		    hh = rwlstrchr(aa, ':');
		    if (hh)
		    {
		      // User has helptext as a string
		      argnam = rwlalloc(rwm, hh-aa+1);
		      rwlstrncpy(argnam,aa,hh-aa+1);
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
		        arghelp = rwlalloc(rwm, helplen);
			snprintf((char *)arghelp,helplen, "--(no-)%s : unset or set %s",argnam, argnam);
		      }
		      else
		      {
			// --argname : set value for argname
			helplen = 2*rwlstrlen(argnam) + sizeof("-- : set value for ") + 1;
		        arghelp = rwlalloc(rwm, helplen);
			snprintf((char *)arghelp,helplen, "--%s : set value for %s",argnam, argnam);
		      }

		    }

		    // Make sure it isn't ordinary
		    for (i=0; i<rwloptcount-1; i++)
		    {
		      if (! strcmp((char*)argnam, rwllongoptions[i].name))
		      {
			rwlerror(rwm, RWL_ERROR_ARGUMENT_IS_ORDINARY, argnam);
			goto cannotuseargument;
		      }
		    }
		    // Make sure it isn't repeated
		    alp = rwm->usrargl;
		    while (alp)
		    {
		      if (! rwlstrcmp(argnam, alp->argname))
		      {
			rwlerror(rwm, RWL_ERROR_ARGUMENT_ALREADY, argnam);
			goto cannotuseargument;
		      }
		      alp = alp->nextarg;
		    }

		    alp = rwlalloc(rwm, sizeof(rwl_arglist));
		    alp->argname = argnam;
		    alp->arghelp = arghelp;
		    alp->argflags = argflag;
		    if (!rwm->usrargl) // the first
		    {
		      rwm->usrargl = alp;
		    }
		    else // add to list
		    {
		      alp->nextarg = rwm->usrargl;
		      rwm->usrargl = alp;
		    }
		    cannotuseargument:
		    ;
		  }
		}

#.* 			{ 
			  /* just make gcc shut up about unput not being used */
			  if (0)
			    unput(0);
			}

\\\n			{ rwm->loc.lineno++; }
\\\r\n			{ rwm->loc.lineno++; }
\n			{ rwm->loc.lineno++; }
.			{ ; }

%%

#undef rwm /* now outside flex code */

sb4 rwlawrap(yyscan_t ys)
{
  return 1;
}

rwlcomp(rwlarglex_l, RWL_GCCFLAGS)

