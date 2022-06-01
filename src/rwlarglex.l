/*
 * RWP*Load Simulator
 *
 * Copyright (c) 2022 Oracle Corporation
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
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include "rwl.h"
// This lexer is never called from a scanner, but just
// to get some needed defines, we include output from rwldiprs.y:
#include "rwldiprs.tab.h"
#define YYSTYPE RWLZSTYPE
#define YY_DECL sb4 rwlalex(void *yylval_param, void * yyscanner)


/* The rwm define is used to make code below legible */
#define rwm (yyget_extra(yyscanner))
// to avoid flex generating some code:
// #define YY_NO_INPUT

%}

%option reentrant bison-bridge
%option extra-type="rwl_main *"
%option prefix="rwla"

%%

[aA][dD][mM][iI][nN][iI][sS][tT][eE][rR][ \r\n]+[kK][eE][yY][ \r\n]+[mM][aA][nN][aA][gG][eE][mM][eE][nN][tT]	|
[Aa][Nn][Aa][Ll][Yy][Zz][Ee]	|
[aA][sS][sS][oO][cC][iI][aA][tT][eE][ \r\n]+[sS][tT][aA][tT][iI][sS][tT][iI][cC][sS]	|
[Aa][Uu][Dd][Ii][Tt]	|
[cC][oO][mM][mM][eE][nN][tT][ \r\n]+[oO][nN]	|
[cC][rR][eE][aA][tT][eE][ \r\n]+([oO][rR][ \r\n]+[rR][eE][pP][lL][aA][cC][eE][ \r\n]+)?[tT][yY][pP][eE]	|
[cC][rR][eE][aA][tT][eE][ \r\n]+([oO][rR][ \r\n]+[rR][eE][pP][lL][aA][cC][eE][ \r\n]+)?[jJ][aA][Vv][aA]	|
[cC][rR][eE][aA][tT][eE][ \r\n]+[oO][rR][ \r\n]+[rR][eE][pP][lL][aA][cC][eE][ \r\n]+[fF][uU][nN][cC][tT][iI][oO][nN]	|
[cC][rR][eE][aA][tT][eE][ \r\n]+([oO][rR][ \r\n]+[rR][eE][pP][lL][aA][cC][eE][ \r\n]+)[pP][rR][oO][cC][eE][dD][uU][rR][eE]	|
[cC][rR][eE][aA][tT][eE][ \r\n]+([oO][rR][ \r\n]+[rR][eE][pP][lL][aA][cC][eE][ \r\n]+)[pP][aA][cC][kK][aA][gG][eE]	|
[cC][rR][eE][aA][rR][eE][ \r\n]+([oO][rR][ \r\n]+[rR][eE][pP][lL][aA][cC][eE][ \r\n]+)[lL][iI][bB][rR][aA][rR][yY]	|
[cC][rR][eE][aA][tT][eE][ \r\n]+([oO][rR][ \r\n]+[rR][eE][pP][lL][aA][cC][eE][ \r\n]+)[tT][rR][iI][gG][gG][eE][rR]	|
[Cc][Rr][Ee][Aa][Tt][Ee]	|
[dD][iI][sS][aA][sS][sS][oO][cC][aA][tT][eE][ \r\n]+[sS][tT][aA][tT][iI][sS][tT][iI][cC][sS]	|
[eE][xX][pP][lL][aA][iI][nN][ \r\n]+[pP][lL][aA][nN]	|
[fF][lL][aA][sS][hH][bB][aA][cC][kK][ \r\n]+[dD][aA][tT][aA][bB][aA][sS][eE]	|
[fF][lL][aA][sS][hH][bB][aA][cC][kK][ \r\n]+[tT][aA][bB][lL][eE]	|
[Gg][Rr][Aa][Nn][Tt]	|
[lL][oO][cC][kK][ \r\n]+[tT][aA][bB][lL][eE]	|
[Nn][Oo][Aa][Uu][Dd][Ii][Tt]	|
[Pp][Uu][Rr][Gg][Ee]	|
[Rr][Ee][Nn][Aa][Mm][Ee]	|
[Rr][Ee][Vv][Oo][Kk][Ee]	|
[Ss][Aa][Vv][Ee][Pp][Oo][Ii][Nn][Tt] 	|
[sS][eE][tT][ \r\n]+[cC][oO][nN][sS][tT][rR][aA][iI][nN][tT]	|
[Ss][Ee][Tt][ \r\n]+[Rr][Oo][Ll][Ee]	|
[Ss][Ee][Tt][ \r\n]+[Tt][Rr][Aa][Nn][Ss][Aa][Cc][Tt][Ii][Oo][Nn]	|
[Ss][Ee][Ll][Ee][Cc][Tt]	|
[Dd][Ee][Ll][Ee][Tt][Ee]	|
[Uu][Pp][Dd][Aa][Tt][Ee]	|
[Ii][Nn][Ss][Ee][Rr][Tt]	|
[Bb][Ee][Gg][Ii][Nn]	|
[Dd][Ee][Cc][Ll][Aa][Rr][Ee]	|
[Aa][Ll][Tt][Ee][Rr]	|
[Mm][Ee][Rr][Gg][Ee]	|
[Cc][Aa][Ll][Ll]	|
[Dd][Rr][Oo][Pp]	|
[Ww][Ii][Tt][Hh]	|
"--"   	|
"/*"   	|
[Tt][Rr][Uu][Nn][Cc][Aa][Tt][Ee]	  {
	  /* THIS IS AN ALMOST VERBATIM COPY from rwllexer.l
	     KEEP THEM IN SYNC

	     Only changes here are marked with
	     //RWLARGLEXBEGIN
	     //RWLARGLEXEND
	  */
	  ub8 l, len;
	  ub4 savlin;
	  text *p;
	  sb4 curr, next;
	  sb4 prev;
	  ub4 semistop = 1; // stop on semicolen at end of line
	  char plsword[6]; /* check for "begin" or "decla" or "--" */
	  bic(rwm->mflags, RWL_P_SQLWASPLS); /* not PL/SQL */
	  bic(rwm->m3flags, RWL_P3_SQLWASDML|RWL_P3_SQLWASQRY); 
	  savlin = rwm->loc.lineno;


	  rwlstrcpy(rwm->sqlbuffer, (char *)yytext);
	  len = strlen(yytext);

	  // see if there are newlines in the initial scan part
	  p = rwm->sqlbuffer;
	  while (*p)
	  {
	    if ('\n' == *p)
	      rwm->loc.lineno++;
	    p++;
	  }
	  p = rwm->sqlbuffer + len;

	  /* turn to lowercase for comparison */
	  for (l=0; l<sizeof(plsword) ; l++)
	    plsword[l] = tolower(rwm->sqlbuffer[l]);
	  plsword[sizeof(plsword)-1] = 0;
	  /* and compare */
	  if ( !strcmp(plsword,"begin") 
	    || !strcmp(plsword,"decla") 
	    || !strncmp(plsword,"--",2) 
	    )
	  {
	    bis(rwm->mflags,RWL_P_SQLWASPLS);
	    semistop = 0;
	    /* ; no longer terminates */
	  }

	  // is it dml
	  if ( !strcmp(plsword,"inser") 
	    || !strcmp(plsword,"delet") 
	    || !strcmp(plsword,"updat") 
	    || !strcmp(plsword,"merge") 
	    )
	    bis(rwm->m3flags,RWL_P3_SQLWASDML); 

	  // is it query
	  if ( !strcmp(plsword,"selec") 
	    || !strncmp(plsword,"with",4) 
	    )
	    bis(rwm->m3flags,RWL_P3_SQLWASQRY); 

	  if (!strcmp(plsword, "creat") && len>5)
	  {
	    // does create .. require plsql?
	    // look at the last 4 characters
	    ub8 k;
	    for (k=0, l=len-4; l<len ; k++, l++)
	      plsword[k] = tolower(rwm->sqlbuffer[l]);
	    plsword[4] = 0;

	    if (  
	          !strcmp(plsword,          "type")
	       || !strcmp(plsword,/*proce*/ "dure")
	       || !strcmp(plsword,/*func*/  "tion")
	       || !strcmp(plsword,/*lib*/   "rary")
	       || !strcmp(plsword,/*pac*/   "kage")
	       || !strcmp(plsword,/*tri*/   "gger")
	       )
	      semistop = 0;
	  }
	  
	  curr = input(yyscanner);
	  if ('\r' == curr)
	    curr = input(yyscanner); /* DOS */
	  if ('\n' == curr)
	  {
	    rwm->loc.lineno++;
	  }

	  if (curr == 0 || curr == EOF)
	    goto prematureend;
	    
	  next = prev = 0;

	  l = strlen(yytext);
	  while (1)
	  {
	    /* are we potentially done? */
	    if (  (semistop && ';'==curr)        /*    pure SQL and ; */
	       || ('/'==curr && '\n'==prev)  /* OR / preceeded by \n */
	       || ('.'==curr && '\n'==prev)) /* OR . preceeded by \n */
	    {
	      /* look ahead and see if next is a newline in DOS or UNIX */
	      next = input(yyscanner);
	      if (curr == 0 || curr == EOF)
		goto prematureend;
	      if ('\n' == next || '\r' == next)
	      {
	        /* that was the real end */
		rwm->loc.lineno++;
		if ('\r' == next)
		{
		  sb4 dosnxt = input(yyscanner);
		  /* handle DOS */
		  if (0 == dosnxt || EOF == dosnxt)
		    goto prematureend;
		}

		/* remove newline from end 
		 * 
		 * *p is always the next position where we will be writing
		 * so start with p-- such that we remove characters previously
		 * written
		*/
		do 
		  p--;
		while ('\n' == *p || '\r' == *p) ;

		/* And then set NULL terminator just after the last
		** non newline 
		*/
		*++p = 0;

	        break;
	      }
	      else
	      {
		/* undo lookahead */
	        //RWLARGLEXBEGIN
		// if (' '==next || '\t'==next)
		// {
	        //   rwlerror(rwm, RWL_ERROR_SUSPICIOUS_CHAR_IN_SQL, curr);
		//   rwm->badchar++;
		// }
	        //RWLARGLEXEND
		unput(next);
		goto issqltext;
	      }
	    }
	    else /* we did not find a potential terminator */
	    {
	      issqltext:
	      /* copy actual SQL text */
	      if (++l<RWL_MAXSQL-1)
	      {
	        *p++ = (text) curr;
	      }
	      else
	      {
	        rwlsevere(rwm, "[rwllexer-sqllong:%d]", RWL_MAXSQL);
		*p = 0;
		break;
	      }
	    }
	    
	    // save prev unless whitespace 
	    switch(curr)
	    {
	      case ' ':
	      case '\t':
	      break;

	      default:
		prev = curr;
	      break;
	    }
	    /* advance to next character */
	    curr = input(yyscanner);
	    if (0 == curr || curr == EOF)
	      goto prematureend;
	    
	    /* count lines properly */
	    if ('\n' == curr)
	      rwm->loc.lineno++;
	  }
	//RWLARGLEXBEGIN
	//if (!rwm->ifdirbit)
	//  return RWL_T_SQL_TEXT;
	//else
	//RWLARGLEXEND
	  goto iamhappywiththis;

	prematureend:
	  rwm->loc.errlin = savlin;
	  //RWLARGLEXBEGIN
	  // rwlerror(rwm, RWL_ERROR_BAD_SQL_SCAN);
	  /* the parser (well, main) will also report premature eof error */
	  // if (!rwm->ifdirbit) return 0;
	  //RWLARGLEXEND
	iamhappywiththis:
	  ;
	}

\"(\\.|[^\\"]|(\\\n))*\"  { // 
			    // THIS IS A VERBATIM COPY FROM rwllexer.l
			    // except when marked with 
			    //RWLARGLEXBEGIN
			    //RWLARGLEXEND
			    // ALWAYS KEEP IN SYNC
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
				  case '\n': ut--; rwm->loc.lineno++; break;
				  case '\\': *ut='\\'; break;
				  case '\"': *ut='\"'; break;
				  case 'n': *ut='\n'; break;
				  case 't': *ut='\t'; break;
				  case 'r': *ut='\r'; break;
				  case 'e': *ut='\e'; break;
				  case 0: goto end_of_string;
				  default:
				    *ut= *in;
				    //RWLARGLEXBEGIN
				    //rwlerror(rwm, RWL_ERROR_INVALID_ESCAPE, *in);
				    //RWLARGLEXEND
				    break;
				}
			      }
			      else
				*ut = *in;
			    }
			    end_of_string:
			    *ut = 0;
			    rwm->slen = rwlstrlen(rwm->sval)+1;
			    if (rwm->slen>RWL_MAX_STRING_LENGTH)
			    { 
			      //RWLARGLEXBEGIN
			      //rwlerror(rwm, RWL_ERROR_STRING_TOO_LONG, RWL_MAX_STRING_LENGTH);
			      //RWLARGLEXEND
			      rwm->slen=RWL_MAX_STRING_LENGTH;
			      rwm->sval[rwm->slen] = 0;
			    }
			    //RWLARGLEXBEGIN
			    //if (!rwm->ifdirbit) return RWL_T_STRING_CONST;
			    //RWLARGLEXEND
			  }

  /*LEXTAG:rwlalex*/
\$longoption:[a-z][-a-z]*	|
\$longoption:[a-z][-a-z]*=[^ \r\n\t][^ \r\n\t]*	{
		  if (!bit(rwm->m2flags, RWL_P2_SCANFIRST))
		    rwlerror(rwm, RWL_ERROR_ARGUMENT_NOT_FIRST);
		  else
		  {
		    rwl_arglist *alp;
		    text *argnam = (text *) yytext+12 ;

		    // need an early check for quiet
		    if (0 == strcmp(yytext+12, "quiet"))
		      bis(rwm->mflags, RWL_P_QUIET);

		    alp = rwlalloc(rwm, sizeof(rwl_arglist));
		    alp->argname = rwlalloc(rwm,rwlstrlen(argnam)+3); 
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

\$useroption:[a-zA-Z][-a-zA-Z0-9_]*(:\"[^\\"]*\")?		|
\$userswitch:[a-zA-Z][-a-zA-Z0-9_]*(:\"[^\\"]*\")?	{
		  if (!bit(rwm->m2flags, RWL_P2_SCANFIRST))
		    rwlerror(rwm, RWL_ERROR_ARGUMENT_NOT_FIRST);
		  else
		  {
		    // Check it isn't an ordinary long option
		    ub4 i;
		    ub1 argflag;
		    rwl_arglist *alp;
		    text *aa, *argnam, *hh, *arghelp;

		    argnam = arghelp = 0;

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
		      if (! strcmp((char*)argnam, rwllongoptions[i].name))
		      {
			rwlerror(rwm, RWL_ERROR_ARGUMENT_IS_ORDINARY, argnam);
			rwlfree(rwm, arghelp);
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
			rwlfree(rwm, arghelp);
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

rwlcomp(rwlarglex_l, RWL_GCCFLAGS)

