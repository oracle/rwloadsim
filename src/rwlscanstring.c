/*
 * RWP*Load Simulator
 *
 * Copyright (c) 2023 Oracle Corporation
 * Licensed under the Universal Permissive License v 1.0
 * as shown at https://oss.oracle.com/licenses/upl/
 *
 * Real World performance Load simulator lexer/tokenizer
 *
 * rwlscanstring.c
 *
 * Code to scan strings in lexers
 *
 * History
 *
 * bengsig  04-jul-2022 - Creation
 */

// This code should NOT be compiled stand alone, but only
// included from rwllexer.l and rwlarglex.l

#ifdef NEVER
// This makes ctags and cscope add contents
ub4 rwlscanstring(void)
#endif
{
    rwl_main *rwmhere = rwm; // just a debugger aid
    text *in, *ut;
    rwmhere->loc.inpos -= yyleng-1; // make error below correct
    /* copy string and remove " at ends */
    rwm->sval = rwlstrdup(rwm, (text *)yytext+1);
    if ('"' == yytext[yyleng-1])
    {
      rwm->sval[yyleng-2] = 0;
    }
    /* handle \ escapes */
    for (ut=in=rwm->sval; *in; ut++, in++)
    {
      rwm->loc.inpos++;
      if ('\n' == *in)
	{ rwm->loc.lineno++; rwm->loc.inpos=0; }
      if (*in == '\\')
      {
	in++;
	rwm->loc.inpos++;
	switch (*in)
	{
	  case '\n': ut--; rwm->loc.lineno++; rwm->loc.inpos=0; break;
	  case '\\': *ut='\\'; break;
	  case '\"': *ut='\"'; break;
	  case 'n': *ut='\n'; break;
	  case 't': *ut='\t'; break;
	  case 'r': *ut='\r'; break;
	  case 'e': *ut='\e'; break;
	  case 0: goto end_of_string;
	  default:
	    *ut= *in;
#ifndef RWL_IN_ARGLEX
	    rwlerror(rwm, RWL_ERROR_INVALID_ESCAPE, rwm->loc.inpos, *in) ;
#endif
	    break;
	}
      }
      else
	*ut = *in;
    }
    end_of_string:
    rwm->loc.inpos++; // the position of the terminating "
    *ut = 0;
    rwm->slen = rwlstrlen(rwm->sval)+1;
    if (rwm->slen>RWL_MAX_STRING_LENGTH)
    { 
#ifndef RWL_IN_ARGLEX
      rwlerror(rwm, RWL_ERROR_STRING_TOO_LONG, RWL_MAX_STRING_LENGTH);
#endif
      rwm->slen=RWL_MAX_STRING_LENGTH;
      rwm->sval[rwm->slen] = 0;
    }
#ifndef RWL_IN_ARGLEX
    if (!rwm->ifdirbit) return RWL_T_STRING_CONST;
#endif

}
