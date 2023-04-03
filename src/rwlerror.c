/*
 * RWP*Load Simulator
 *
 * Copyright (c) 2023 Oracle Corporation
 * Licensed under the Universal Permissive License v 1.0
 * as shown at https://oss.oracle.com/licenses/upl/
 *
 * Real World performance Load simulator error handling
 *
 * rwlerror.c
 *
 * History
 *
 * bengsig   1-mar-2023 - Optimize snprintf [id]format
 * bengsig  30-jun-2022 - Only output file with line=0
 * bengsig  09-may-2022 - Improved parse/scan error location
 * bengsig  11-jan-2022 - Use function name for oerstats if no sql in scope
 * bengsig  21-jun-2021 - Improve error messaging on file
 * bengsig  27-may-2021 - Add 28860 to known errors
 * bengsig  22-apr-2021 - Add 12516 to known errors
 * bengsig  03-feb-2021 - error stack for RWL-056 (file will close)
 * bengsig  20-jan-2021 - connection pool
 * bengsig  23-dec-2020 - 11.2 on Solaris port
 * bengsig  19-nov-2020 - Add /oFALLTHROUGHo/ to shut up gcc
 * bengsig  09-nov-2020 - ora01013:continue
 * bengsig  03-sep-2020 - Fix various gcc warnings
 * bengsig  31-aug-2020 - Add TNS-12520 to list of errors meaning DEAD
 * bengsig  31-aug-2020 - Fix core dump: Only write insnam to oer if known
 * bengsig  16-jun-2020 - Avoid core dump after 12514
 * bengsig  29-may-2020 - Add instance name to oer stats
 * bengsig  25-feb-2020 - Corrected message for RWL_ERROR_INFORMATION in rwlerror
 * bengsig  18-nov-2019 - Call OCIBreak in ctrl-c handler
 * bengsig  23-oct-2019 - session dead wait time now a bit random
 * bengsig  20-sep-2019 - more errors mark session dead
 * bengsig  12-aug-2019 - added oerstats
 * bengsig  29-jul-2019 - Information type error
 * bengsig  04-mar-2019 - Added ORA-25415 for reconnect
 * bengsig         2017 - Creation
 */

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>
#include "rwl.h"

/* compile time service for error text array */
#undef RWLERROR
#define RWLERROR(txt,cat) , { txt, cat }
static rwl_error rwlerrors[] = {
  { "No error", 0 }
#include "rwlerror.h"
} ;
#define RWL_ERROR_COUNT (sizeof(rwlerrors)/sizeof(rwl_error)-1)
#undef RWLERROR

/* Note that this is a GLOBAL variable */
volatile sig_atomic_t rwlstopnow = 0;
volatile sig_atomic_t rwlctrlccount = 0;

/* mute some error */
void rwlerrormute(rwl_main *rwm, ub4 erno, ub4 dowarn)
{
  if (erno>RWL_ERROR_COUNT)
  {
    rwlerror(rwm, RWL_ERROR_MUTE_TOO_HIGH);
    return;
  }
  if (dowarn && !bit(rwlerrors[erno].cat, RWL_ERROR_WARNING))
    rwlerror(rwm, RWL_ERROR_MUTE_NOTWARN, erno);

  bis(rwlerrors[erno].cat, RWL_ERROR_MUTE);
  return;
}

void rwlsqlerrlin(rwl_xeqenv *xev, rwl_location *loc, rwl_sql *sq, ub4 poffset)
{
  /* print and mark line with SQL error offset */
  ub4 i, lnum, lpos;
  text *q, *ln1, *ln2; /* ln1 and ln2 point at the newlines before/after error */

  if (!poffset)
    return; 

  for (i=0, ln1=q=sq->sql, lpos=0, lnum=1
      ; i<poffset && *q
      ; q++, i++, lpos++)
  {
    if ('\n' == *q) /* here's a newline */
    {
      ln1 = q+1;
      lpos = 0;
      lnum++;
    }
  }
  /* found the error location, scan for next newline */
  ln2 = q;
  while (*ln2 && '\n' != *ln2)
    ln2++;

  if (sq->sqlfile)
    rwlexecerror(xev, loc, RWL_ERROR_OCI_LINE_POS_IN_FILE
      , sq->sqlfile, lnum, lpos, ln2-ln1, ln1, lpos, "*");
  else
    rwlexecerror(xev, loc, RWL_ERROR_OCI_LINE_POS, lnum, lpos, ln2-ln1, ln1, lpos, "*");
}

/* runtime error with location of code executed */
void rwlexecerror(rwl_xeqenv *xev, rwl_location *loc, ub4 erno,  ...)
{
  va_list args;
  char *sev;

  /* assert erno */
  if (erno>RWL_ERROR_COUNT )
  {
    rwlexecsevere(xev, loc, "[rwlexecerror-errno:%d]", erno);
    return;
  }

  /* keep track of error "level" */
  xev->errbits |= rwlerrors[erno].cat;

  if (!bit(rwlerrors[erno].cat, RWL_ERROR_MUTE))
  {
    if (bit(rwlerrors[erno].cat,RWL_ERROR_WARNING))
      sev="warning";
    else if (bit(rwlerrors[erno].cat,RWL_ERROR_INFORMATION))
      sev="information";
    else if (bit(rwlerrors[erno].cat,RWL_ERROR_SEVERE))
      sev="critical error";
    else
      sev="error";

    if (loc) /* comes from executing code */
    {
      sb4 pd;
      /* see if error has a relevant location */
      if (bit(rwlerrors[erno].cat,RWL_ERROR_NOFILE))
      {
	if (loc->lineno)
	{
	  if (bit(xev->rwm->m2flags, RWL_P2_ERRORWTIM))
	    fprintf(stderr, "RWL-%03d: %s at [%s;%d](%.2f): ", erno, sev
	    , loc->fname, loc->lineno, rwlclock(xev,0));
	  else
	    fprintf(stderr, "RWL-%03d: %s at [%s;%d]: ", erno, sev
	    , loc->fname, loc->lineno);
	}
	else
	{
	  if (bit(xev->rwm->m2flags, RWL_P2_ERRORWTIM))
	    fprintf(stderr, "RWL-%03d: %s at [%s](%.2f): ", erno, sev
	    , loc->fname, rwlclock(xev,0));
	  else
	    fprintf(stderr, "RWL-%03d: %s at [%s]: ", erno, sev
	    , loc->fname);
	}
      }
      else
      {
	ub4 xlo;
	xlo = loc->errlin ? loc->errlin : loc->lineno;
	fprintf(stderr, "RWL-%03d: %s at [%s;%d]", erno, sev
	, loc->fname, xlo);
	for (pd = xev->pcdepth; pd>=0; pd--)
	{
	  if (xev->erloc[pd] 
	      && // avoid double printing the same location
	        ( (loc->fname != xev->erloc[pd]->fname )
	           ||
		( xlo != xev->erloc[pd]->lineno ) )
	     )
	    fprintf(stderr, "<-[%s;%d]", xev->erloc[pd]->fname, xev->erloc[pd]->lineno);
	}
	if (bit(xev->rwm->m2flags, RWL_P2_ERRORWTIM))
	  fprintf(stderr, "(%.2f): ", rwlclock(xev,0));
	else
	  fprintf(stderr, ": ");
      }
      loc->errlin = 0;
    }
    else /* !loc - executing during parse */
    {
      /* see if error has a relevan location */
      if (bit(rwlerrors[erno].cat,RWL_ERROR_NOFILE))
	fprintf(stderr, "RWL-%03d: %s: ", erno, sev);
      else
      {
        ub4 elo = xev->rwm->loc.errlin ? xev->rwm->loc.errlin : xev->rwm->loc.lineno;
	if (elo)
	  fprintf(stderr, "RWL-%03d: %s at [%s;%d]: ", erno, sev
	  , xev->rwm->loc.fname, elo);
	else
	  fprintf(stderr, "RWL-%03d: %s at [%s]: ", erno, sev
	  , xev->rwm->loc.fname);
      }
    }

    va_start(args, erno);
    vfprintf(stderr, rwlerrors[erno].txt, args);
    va_end(args);
    if (!bit(rwlerrors[erno].cat,RWL_ERROR_HASNL))
      fputs("\n", stderr);
    fflush(stderr);
  }
  if (bit(xev->tflags, RWL_P_ISMAIN)) xev->rwm->loc.errlin = 0;
}

void rwlerror(rwl_main *rwm, ub4 erno, ...)
{
  va_list args;
  char *sev;

  /* assert erno */
  if (erno>RWL_ERROR_COUNT )
  {
    rwlsevere(rwm, "[rwlerror-errno:%d]", erno);
    return;
  }

  /* keep track of error "level" */
  rwm->mxq->errbits |= rwlerrors[erno].cat;

  if (!bit(rwlerrors[erno].cat, RWL_ERROR_MUTE))
  {
    if (bit(rwlerrors[erno].cat,RWL_ERROR_WARNING))
      sev="warning";
    else if (bit(rwlerrors[erno].cat,RWL_ERROR_INFORMATION))
      sev="information";
    else if (bit(rwlerrors[erno].cat,RWL_ERROR_SEVERE))
      sev="critical error";
    else
      sev="error";

    /* see if error has a relevan location */
    if (bit(rwlerrors[erno].cat,RWL_ERROR_NOFILE))
      fprintf(stderr, "RWL-%03d: %s: ", erno, sev);
    else
    {
      ub4 replin = rwm->loc.errlin ? rwm->loc.errlin : rwm->loc.lineno;
      if (replin)
	fprintf(stderr, "RWL-%03d: %s at [%s;%d]: ", erno, sev
	, rwm->loc.fname, replin);
      else
	fprintf(stderr, "RWL-%03d: %s at [%s]: ", erno, sev
	, rwm->loc.fname);
    }

    va_start(args, erno);
    vfprintf(stderr, rwlerrors[erno].txt, args);
    va_end(args);
    fputs("\n", stderr);
    fflush(stderr);
  }
  //rwm->loc.prevel = rwm->loc.errlin ? rwm->loc.errlin : rwm->loc.lineno;
  rwm->loc.errlin = 0;
}

/* these are like ORA-00600, i.e. various asserts */
void rwlsevere(rwl_main *rwm, char *format, ...)
{
  va_list args;

  if (rwm && rwm->loc.fname)
  {
    /* mark we had severe error */
    rwm->mxq->errbits |= RWL_ERROR_SEVERE;

    fprintf(stderr, "RWL-600: internal error at [%s;%d]: "
      , rwm->loc.fname, rwm->loc.errlin ? rwm->loc.errlin: rwm->loc.lineno);

    va_start(args, format);
    vfprintf(stderr, format, args);
    va_end(args);
    fputs("\n", stderr);
    fflush(stderr);
    rwm->loc.errlin = 0;
  }
  else
  {
    fputs("RWL-600: internal error at [UNKNOWN]: ", stderr);

    va_start(args, format);
    vfprintf(stderr, format, args);
    va_end(args);
    fputs("\n", stderr);
    fflush(stderr);
  }

}

/* and the same with location of declaration */
void rwlexecsevere(rwl_xeqenv *xev, rwl_location *loc, char *format, ...)
{
  va_list args;

  if (xev && xev->rwm)
  {
    /* mark we had severe error */
    xev->errbits |= RWL_ERROR_SEVERE;

    if (loc)
      fprintf(stderr, "RWL-600: internal error at [%s;%d]<-[%s;%d]: "
	, loc->fname, loc->lineno
	, xev->rwm->loc.fname, xev->rwm->loc.errlin ? xev->rwm->loc.errlin: xev->rwm->loc.lineno);
    else /* no location - this happens e.g. during immediate_expression, etc during parse */
      fprintf(stderr, "RWL-600: internal error at [%s;%d]: "
	, xev->rwm->loc.fname, xev->rwm->loc.errlin ? xev->rwm->loc.errlin: xev->rwm->loc.lineno);

    va_start(args, format);
    vfprintf(stderr, format, args);
    va_end(args);
    fputs("\n", stderr);
    fflush(stderr);
    if (bit(xev->tflags, RWL_P_ISMAIN)) 
      xev->rwm->loc.errlin = 0;
  }
  else
  {
    fputs("RWL-600: internal error at [UNKNOWN]: ", stderr);

    va_start(args, format);
    vfprintf(stderr, format, args);
    va_end(args);
    fputs("\n", stderr);
    fflush(stderr);
  }

}

/* used to print debug via the -D flax */
void rwldebug(rwl_main *rwm, char *format, ...)
{
  va_list args;

  fprintf(stderr, "RWL-601: debug at [%s;%d]: "
    , rwm->loc.fname, rwm->loc.lineno);

  va_start(args, format);
  vfprintf(stderr, format, args);
  va_end(args);
  fputs("\n", stderr);
  fflush(stderr);
}
/* and here without the finishing NL */
void rwldebugnonl(rwl_main *rwm, char *format, ...)
{
  va_list args;

  fprintf(stderr, "RWL-601: debug at [%s;%d]: "
    , rwm->loc.fname, rwm->loc.lineno);

  va_start(args, format);
  vfprintf(stderr, format, args);
  va_end(args);
  fflush(stderr);
}

void rwldebugcode(rwl_main *rwm, rwl_location *cloc, char *format, ...)
{
  va_list args;

  if (cloc)
    fprintf(stderr, "RWL-601: debug at [%s;%d]<-[%s;%d]: "
      , cloc->fname, cloc->lineno
      , rwm->loc.fname, rwm->loc.lineno);
  else
    fprintf(stderr, "RWL-601: debug at [%s;%d]: "
      , rwm->loc.fname, rwm->loc.lineno);

  va_start(args, format);
  vfprintf(stderr, format, args);
  va_end(args);
  fputs("\n", stderr);
  fflush(stderr);
}

/* and without NL */
void rwldebugcodenonl(rwl_main *rwm, rwl_location *cloc, char *format, ...)
{
  va_list args;

  if (cloc)
    fprintf(stderr, "RWL-601: debug at [%s;%d]<-[%s;%d]: "
      , cloc->fname, cloc->lineno
      , rwm->loc.fname, rwm->loc.lineno);
  else
    fprintf(stderr, "RWL-601: debug at [%s;%d]: "
      , rwm->loc.fname, rwm->loc.lineno);

  va_start(args, format);
  vfprintf(stderr, format, args);
  va_end(args);
  fflush(stderr);
}

void rwldberror3(rwl_xeqenv *xev, rwl_location * cloc, rwl_sql *sq, text *fname, ub4 dbe3f)
{
  text errbuf[RWL_OCI_ERROR_MAXMSG];
  char *other;
  sb4 errcode = 0;
  rwl_value *vp;
  sb4 v = RWL_VAR_NOTFOUND;
  rwl_location tloc = {0,0,/*0,*/(text *)"<unknown>", 0};

  if (!bit(dbe3f, RWL_DBE3_NOCTX))
  {
    // is full context available
    bis(xev->tflags, RWL_P_FINDVAR_NOERR);
    if (sq && (v = rwlfindvar2(xev, sq->vname, RWL_VAR_NOGUESS, fname))>=0)
    {
      tloc.lineno = xev->evar[v].loc.lineno;
      tloc.fname = xev->evar[v].loc.fname;
    }
    bic(xev->tflags, RWL_P_FINDVAR_NOERR);

    if (0>rwlfindvarug(xev, RWL_ORAERROR_VAR, &xev->oraerrorvar))
    {
      rwlsevere(xev->rwm, "[rwldberror2-oraerrorvar:%d]", xev->oraerrorvar);
      return;
    }
    if (0>rwlfindvarug(xev, RWL_ORAERRORTEXT_VAR, &xev->oraerrortextvar))
    {
      rwlsevere(xev->rwm, "[rwldberror2-oraerrortextvar:%d]", xev->oraerrortextvar);
      return;
    }
  }

  switch (xev->status)
  {
    case OCI_SUCCESS:
      rwlsevere(xev->rwm,"[rwldberror-onsuccess]");
    break;

    case OCI_ERROR:
      OCIErrorGet (xev->errhp, 1, 0, &errcode,
		  errbuf, sizeof(errbuf), OCI_HTYPE_ERROR);
      if ((!rwlcont1013 && 1013 == errcode) || bit(xev->rwm->mflags,RWL_P_STOPONORA))
      {
	rwlstopnow=RWL_STOP_MARK;
      }
      if (xev->curdb)
        xev->curdb->errcode = errcode;

      if (sq)
      {
        if (!bit(dbe3f,RWL_DBE3_NOPRINT))
	  rwlexecerror(xev, cloc, RWL_ERROR_ORA_ERROR_SQL, errcode, sq->vname
	, tloc.fname, tloc.lineno, errbuf);
      }
      else
        rwlexecerror(xev, cloc, RWL_ERROR_ORA_ERROR_NOSQL, errcode, errbuf);

      xev->oercount++;
      if ( bit(xev->rwm->m2flags,RWL_P2_OERSTATS)
          && !bit(dbe3f,RWL_DBE3_NOPRINT|RWL_DBE3_NOCTX)
	  && xev->oercount <= xev->rwm->oermaxstat)
      {
	// we are gathering oer statistics AND
        // we have context AND we want it printed, 
	// AND there aren't too many
	rwl_oerstat *oers;

	oers = rwlalloc(xev->rwm, sizeof(rwl_oerstat));
	if (!xev->oerhead)
	{ // the first
	  xev->oerhead = oers;
	}
	else
	{ // make previous point to me
	  xev->oertail->nxtoes = oers;
	}
	xev->oertail = oers;

	// fill in fields
	oers->oernum = errcode;
	rwlstrnncpy(oers->oertxt, errbuf, RWL_OERSTAT_MAX_BUF);
	oers->oersqn = sq ? sq->vname : (fname ? fname : (text *)"unknown");
	oers->oersec = rwlclock(xev, cloc);

	if (xev->curdb && xev->curdb->svchp)
	{
	  text *insnam;
	  ub4 inlen;
	  if ((OCI_SUCCESS == OCIAttrGet(xev->curdb->svchp,OCI_HTYPE_SVCCTX
	  	 		, &insnam, &inlen, OCI_ATTR_INSTNAME
				, xev->errhp)) && insnam)
	  {
	    rwlstrnncpy(oers->oerinst, insnam, RWL_OERINST_MAX_BUF);
	  }
	}
      }
      // if we have a database, should it be marked dead?
      if (xev->curdb)
      {
	switch (errcode) 
	{
	  case  1017: // invalid username/password; logon denied
	  if (bit(xev->rwm->mflags, RWL_P_RECON1017)) // Only do this if we have set RWL_P_RECON1017
	  {
	    rwldebugcode(xev->rwm, cloc, "special handling of ORA-01017");
	    goto wait1to2seconds;
	  }
	  else
	    break;
	  // We take longer for those errors that are expected to be temporary
	  // and expected to take longer to "fix".  There are three different
	  // "categories", one (considered serious) where we wait a total of
	  // 5 seconds, the other (considered more temporary) where we wait 3
	  // seconds, and finally some where we just wait 1 second.
	  // This grouping and the wait times are chosen heuristically
	  // and maybe there should be a better scheme
	  //

	  // Wait 5 to 6 seconds after these
	  case    18: // maximum number of sessions exceeded
	  case  1035: // ORACLE only available to users with RESTRICTED SESSION privilege
	  case  1089: // shutdown in progress
	  case 12514: // TNS:listener does not currently know of service requested in connect descriptor
	  case 12518: // TNS:listener could not hand off client connection"
	  case 12520: // TNS:listener could not find available handler for requested type of server
	  case 12541: // TNS:no listener 
	  case 24459: // OCISessionGet() timed out waiting for pool to create new connections
	    rwlwait(xev, cloc, 2.0);
	    /*FALLTHROUGH*/
	  
	  // Wait 3 to 4 seconds after these
	  case  1109: // database not open
	  case 12516: // TNS:listener could not find available handler with matching protocol stack
	  case 12519: // TNS:no appropriate service handler found
	  case 12530: // TNS:listener: rate limit reached
	  case 12564: // TNS:connection refused
	  case 12757: // instance does not currently know of requested service
	  case 24324: // service handle not initialized
	  case 28547: // connection to server failed, probable Oracle Net admin error
	    rwlwait(xev, cloc, 2.0);
	    /*FALLTHROUGH*/

	  wait1to2seconds:
	  // The following should typically imply we can re-attempt connecting
	  // shortly after as they primarily are expected to be associated
	  // with some fail over situation, so we just wait 1 to 2 seconds
	  case    28: // session killed
	  case  3113: // end of file
	  case  3114: // database down
	  case  3135: // lost contact
	  case  3146: // invalid buffer length for TTC field
	  case 12805: // parallel query server died unexpectedly
	  case 25415: // Application Continuity replay initiation timeout exceeded.
	  case 25420: // too many calls in request; replay disabled
	  case 28860: // Fatal SSL error
	  case 28862: // SSL connection failed
	  case 28864: // SSL connection closed gracefully
	  case 41409: // cannot replay committed transaction; failover cannot continue
	  case 41412: // results changed during replay; failover cannot continue
	    bis(xev->curdb->flags, RWL_DB_DEAD); // makes next release also drop session
	    bic(xev->curdb->flags, RWL_DB_DIDDML|RWL_DB_DIDPLSQL|RWL_DB_DIDDDL);
	    // we make the actual wait vary somewhat (+/- 1s) such that all
	    // threads don't reattmpt at the same time
	    rwlwait(xev, cloc, 1.0 + erand48(xev->xsubi));
	  break;
	}
      }
    break;

    case OCI_SUCCESS_WITH_INFO:
      OCIErrorGet (xev->errhp, 1, 0, &errcode,
		  errbuf, sizeof(errbuf), OCI_HTYPE_ERROR);
      if (sq)
      {
        if (!bit(dbe3f,RWL_DBE3_NOPRINT))
	  rwlexecerror(xev, cloc, RWL_ERROR_ORA_SUCWIN_SQL, errcode, sq->vname
	  , tloc.fname, tloc.lineno, errbuf);
      }
      else
        rwlexecerror(xev, cloc, RWL_ERROR_ORA_SUCWIN_NOSQL, errcode, errbuf);
    break;

    case OCI_NO_DATA:
      if (sq)
      {
	OCIErrorGet (xev->errhp, 1, 0, &errcode,
		    errbuf, sizeof(errbuf), OCI_HTYPE_ERROR);
	if (!bit(dbe3f,RWL_DBE3_NOPRINT))
	  rwlexecerror(xev, cloc, RWL_ERROR_ORA_ERROR_SQL, errcode, sq->vname
	, tloc.fname, tloc.lineno, errbuf);
      }
      else
      {
	other = "OCI_NO_DATA";
	goto showother;
      }
    break;

    case OCI_INVALID_HANDLE:
      other = "OCI_INVALID_HANDLE";
      goto showother;
    break;

    case OCI_STILL_EXECUTING:
      other = "OCI_STILL_EXECUTING";
      goto showother;
    break;

    case OCI_NEED_DATA:
      other = "OCI_NEED_DATA";
    showother:
      if (sq)
        rwlexecerror(xev, cloc, RWL_ERROR_OCI_ERROR_SQL, other, sq->vname
	, tloc.fname, tloc.lineno);
      else
        rwlexecerror(xev, cloc, RWL_ERROR_OCI_ERROR_NOSQL, other);
    break;

    default:
      if (sq)
        rwlexecerror(xev, cloc, RWL_ERROR_OCI_UNSPEC_SQL, xev->status, sq->vname
	, tloc.fname, tloc.lineno);
      else
        rwlexecerror(xev, cloc, RWL_ERROR_OCI_UNSPEC_NOSQL, xev->status);
    break;
  }

  if (!bit(dbe3f, RWL_DBE3_NOCTX))
  {
    vp = &xev->evar[xev->oraerrorvar].num;
    vp->dval = errcode;
    vp->ival = (sb8) errcode;
    vp->isnull = 0;
    if (vp->vsalloc != RWL_SVALLOC_NOT)
      rwlsnpiformat(xev->rwm, vp->sval, vp->slen, errcode);

    vp = &xev->evar[xev->oraerrortextvar].num;
    vp->dval = errcode;
    vp->ival = (sb8) errcode;
    vp->isnull = 0;
    if (vp->vsalloc != RWL_SVALLOC_NOT)
      rwlstrnncpy(vp->sval, errbuf, vp->slen);
  }

}

void rwldbclearerr(rwl_xeqenv *xev)
{
  rwl_value *vp;

  if (0>rwlfindvarug(xev, RWL_ORAERROR_VAR, &xev->oraerrorvar))
  {
    rwlsevere(xev->rwm, "[rwldbclearerr-oraerrorvar:%d]", xev->oraerrorvar);
    return;
  }
  if (0>rwlfindvarug(xev, RWL_ORAERRORTEXT_VAR, &xev->oraerrortextvar))
  {
    rwlsevere(xev->rwm, "[rwldbclearerr-oraerrortextvar:%d]", xev->oraerrortextvar);
    return;
  }

  vp = &xev->evar[xev->oraerrorvar].num;
  vp->dval = 0.0;
  vp->ival = 0;
  vp->isnull = 0;
  if (vp->vsalloc != RWL_SVALLOC_NOT)
    vp->sval[0] = 0;

  vp = &xev->evar[xev->oraerrortextvar].num;
  vp->dval = 0.0;
  vp->ival = 0;
  vp->isnull = 0;
  if (vp->vsalloc != RWL_SVALLOC_NOT)
    vp->sval[0] = 0;

}

/* Handle ctrl-c */
void rwlctrlc()
{
  volatile rwl_xeqenv *xev;
  volatile ub4 i;
  volatile OCISvcCtx *svchp;
  volatile OCIError  *errhp;
  volatile rwl_cinfo *mydb;
  ssize_t ignored;

  if (!rwlcont1013)
    ignored = write(2, rwlerrors[RWL_ERROR_CONTROL_C_HANDLED].txt
         , strlen(rwlerrors[RWL_ERROR_CONTROL_C_HANDLED].txt));
  rwlechoon(0);
  if (!rwlcont1013)
    rwlstopnow=RWL_STOP_BREAK;

  // Now attempt sending OCIBreak to all threads with active
  // database connection unless to results db; there really are
  // lots of race conditions here if we execute this at the same
  // time these are in flux

  for (i=0; i<rwm_glob->totthr; i++)
  {
    if (rwm_glob->xqa) // Check xqa is there every time
    {
      xev = rwm_glob->xqa+i;
      mydb = xev->curdb;
      errhp = xev->errhp;
      if (mydb && errhp)
      {
        svchp = mydb->svchp;
	if (svchp && !bit(mydb->flags,RWL_DB_RESULTS)) 
	{
	  OCIBreak(xev->curdb->svchp, xev->errhp); 
	  OCIReset(xev->curdb->svchp, xev->errhp); 
	}
      }
    }
  }

  // There is also a potential race condition here as rwlctrlccount is global
  if (++rwlctrlccount >= RWL_MAX_CTRLC)
  {
    ignored = write(2, rwlerrors[RWL_ERROR_CONTROL_C_MAX].txt
	   , strlen(rwlerrors[RWL_ERROR_CONTROL_C_MAX].txt));
    kill(getpid(), SIGTERM);
  }
  if (ignored)
    { ; } // make gcc shut up
}

rwlcomp(rwlerror_c, RWL_GCCFLAGS)
