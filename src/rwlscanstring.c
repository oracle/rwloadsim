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
 * bengsig  14-feb-2024 - yy* -> rwm->rwly*
 * bengsig  12-feb-2024 - \r\n on Windows
 * bengsig  12-jun-2023 - Make rwm a variable in scanners
 * bengsig  25-may-2023 - Also use in rwldilex.l
 * bengsig  04-jul-2022 - Creation
 */

// This code should NOT be compiled stand alone, but only
// included from rwllexer.l, rwldilex.l and rwlarglex.l

#ifdef NEVER
// This makes ctags and cscope add contents
ub4 rwlscanstring(void)
#endif
{
    text *in, *ut;
    ub4 nlcount = 0;
    rwm->loc.inpos -= yyleng-1; // make error below correct
    /* copy string and remove " at ends */
    if (bit(rwm->m4flags, RWL_P4_CRNLSTRING))
    {
      // make sure we have room to prepend \r to \n
      text *nlpos = rwm->rwlytext+1;
      while ((nlpos=rwlstrchr(nlpos,'\n')))
      {
	nlpos++;
        nlcount++;
      }
    }
    rwm->sval = rwlalloc(rwm, yyleng+nlcount);
    // rwlstrcpy(rwm->sval,rwm->rwlytext+1);
    if ('"' == rwm->rwlytext[yyleng-1])
    {
      //rwm->sval[yyleng-2] = 0;
      rwm->rwlytext[yyleng-1] = 0;
    }
    /* handle \ escapes */
    ut=rwm->sval;
    for (in = rwm->rwlytext+1; *in; ut++, in++)
    {
      rwm->loc.inpos++;
      if ('\n' == *in)
      {
        rwm->loc.lineno++;
	rwm->loc.inpos=0;
      }
      if (*in == '\\')
      {
	in++;
	rwm->loc.inpos++;
	switch (*in)
	{
	  case '\r':
	    if ('\n' == in[1]) 
	    {
	      ut--;
	      rwm->loc.lineno++;
	      rwm->loc.inpos=0;
	      in++;
	    }
	    break;
	  case '\n': ut--; rwm->loc.lineno++; rwm->loc.inpos=0; break;
	  case '\\': *ut='\\'; break;
	  case '\"': *ut='\"'; break;
	  case 'n':
	    if (bit(rwm->m4flags, RWL_P4_CRNLSTRING))
	      *ut++ = '\r';
	    *ut='\n';
	    break;
	  case 't': *ut='\t'; break;
	  case 'r': *ut='\r'; break;
	  case 'e': *ut='\033'; break;
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
      {
	if ((in-rwm->rwlytext)>1 && in[-1] != '\r' && *in == '\n' && bit(rwm->m4flags, RWL_P4_CRNLSTRING))
	  *ut++ = '\r';
	*ut = *in;
      }
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
# ifdef RWL_IN_DILEX
    return RWL_Z_STRING_CONST;
# else
    if (!rwm->ifdirbit) return RWL_T_STRING_CONST;
# endif
#endif

}
