/*
 * RWP*Load Simulator
 *
 * Copyright (c) 2022 Oracle Corporation
 * Licensed under the Universal Permissive License v 1.0
 * as shown at https://oss.oracle.com/licenses/upl/
 *
 * Real World performance Load simulator lexer/tokenizer
 *
 * rwlscansql.c
 *
 * Code to scan SQL and PL/SQL in lexers
 *
 * History
 *
 * bengsig  04-jul-2022 - Scan sql and pl/sql in lexer
 */

// Note that this code cannot be compiled stand alone
// it is only included from rwllexer.l rwlarglex.l

/* we match anything that can initiate
   SQL or PL/SQL.  

   Note that flex always attempts matching the longest
   possible input, so 'create' as a single keyword will
   only get matched if none of the various 'create or replace'
   aren't.

*/
#ifdef NEVER
// This makes ctags and cscope add contents
ub4 rwlscansql(void)
#endif
{
  rwl_main *rwmhere = rwm; // just for the debugger
  rwmhere->sqlbuffer[0] = 0;
  ub8 l, len;
  text *p;
  sb4 curr, next;
  sb4 prev;
  ub4 semistop = 1; // stop on semicolen at end of line
  char plsword[6]; /* check for "begin" or "decla" or "--" */
  bic(rwm->mflags, RWL_P_SQLWASPLS); /* not PL/SQL */
  bic(rwm->m3flags, RWL_P3_SQLWASDML|RWL_P3_SQLWASQRY); 
  rwm->sqltlin = rwm->loc.lineno;


  rwlstrcpy(rwm->sqlbuffer, (char *)yytext);
  len = strlen(yytext);

  // see if there are newlines in the initial scan part
  p = rwm->sqlbuffer;
  while (*p)
  {
    if ('\n' == *p)
      { rwm->loc.lineno++; rwm->loc.inpos=0; }
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
       || !strcmp(plsword,          "java")
       || !strcmp(plsword,/*proce*/ "dure")
       || !strcmp(plsword,/*func*/  "tion")
       || !strcmp(plsword,/*lib*/   "rary")
       || !strcmp(plsword,/*pac*/   "kage")
       || !strcmp(plsword,/*tri*/   "gger")
       )
      semistop = 0; 
  }
  
  curr = input(yyscanner); rwm->loc.inpos++;
  if ('\r' == curr)
  {
    curr = input(yyscanner); /* DOS */
    rwm->loc.inpos++;
  }
  if ('\n' == curr)
  {
    { rwm->loc.lineno++; rwm->loc.inpos=0; }
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
      rwm->loc.inpos++;
      if (curr == 0 || curr == EOF)
	goto prematureend;
      if ('\n' == next || '\r' == next)
      {
	/* that was the real end */
	rwm->loc.errlin = rwm->loc.lineno;
	rwm->loc.inpos--;
	if ('\r' == next)
	{
	  sb4 dosnxt = input(yyscanner);
	  /* handle DOS */
	  if (0 == dosnxt || EOF == dosnxt)
	    goto prematureend;
	}
	unput('\n'); // such that lineno is increased scanning for our unpot \n

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
#ifndef RWL_IN_ARGLEX
	if (' '==next || '\t'==next)
	{
	  rwlerror(rwm, RWL_ERROR_SUSPICIOUS_CHAR_IN_SQL, curr);
	  rwm->badchar++;
	}
#endif
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
    rwm->loc.inpos++;
    if (0 == curr || curr == EOF)
      goto prematureend;
    
    /* count lines properly */
    if ('\n' == curr)
      { rwm->loc.lineno++; rwm->loc.inpos=0; }
  }
#ifndef RWL_IN_ARGLEX
  if (!rwm->ifdirbit)
    return RWL_T_SQL_TEXT;
  else
#endif
    goto iamhappywiththis;

prematureend:
  rwm->loc.errlin = rwm->sqltlin;
  rwm->loc.inpos = 0; // prevent error report on line after last
#ifndef RWL_IN_ARGLEX
  if (semistop)
    rwlerror(rwm, RWL_ERROR_BAD_SQL_SCAN);
  else
    rwlerror(rwm, RWL_ERROR_BAD_PLSQL_SCAN);
  /* the parser (well, main) will also report premature eof error */
  if (!rwm->ifdirbit) return 0;
#endif
  iamhappywiththis:
  ;
}


