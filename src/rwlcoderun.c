/*
 * RWP*Load Simulator
 *
 * Copyright (c) 2022 Oracle Corporation
 * Licensed under the Universal Permissive License v 1.0
 * as shown at https://oss.oracle.com/licenses/upl/
 *
 * Real World performance Load simulator code execution
 *
 * rwlcoderun.c
 *
 * Handle everything that has to with code execution:
 * - actual implementation of the pcode machine
 *
 * History
 *
 * bengsig  31-oct-2022 - Add better queue time via $queueeverytiming:on
 * bengsig  26-oct-2022 - Add $niceabort:on directive
 * bengsig  18-oct-2022 - threads global variables
 * bengsig  12-oct-2022 - session leak, flush times
 * bengsig  16-may-2022 - Flush local sql upon exit
 * bengsig  12-may-2022 - connect as sysdba etc
 * bengsig  06-apr-2022 - flush array dml
 * bengsig  29-mar-2022 - rename rwlprintf to rwldoprintf
 * bengsig  21-mar-2022 - gcc 9 fallthrough warning
 * bengsig  04-mar-2022 - printf project
 * bengsig  11-jan-2021 - Add fname to oerstats when no sql
 * bengsig  25-nov-2021 - poolmin/max changes
 * bengsig  24-nov-2021 - $dbfailures directive
 * bengsig  16-aug-2021 - rwldummyonbad (code improvement)
 * bengsig  13-aug-2021 - Add break
 * bengsig  06-aug-2021 - Fix bug with return from inside cursor
 * bengsig  10-jun-2021 - Check various min values
 * bengsig  09-jun-2021 - Add modify database cursorcache/sessionpool
 * bengsig  25-mar-2021 - elseif
 * bengsig  08-mar-2021 - Add cursor leak
 * bengsig  03-mar-2021 - Only set connection class in authp when changed
 * bengsig  03-feb-2021 - error stack at rwllocalsrelease 
 * bengsig  02-feb-2021 - fix core dump with file declared in procedure
 * bengsig  20-jan-2021 - connection pool
 * bengsig  16-dec-2020 - exit, gcc 7.5.0 warning
 * bengsig  11-dec-2020 - Correct indentation
 * bengsig  19-nov-2020 - Fix reconnect bug
 * bengsig  17-nov-2020 - regextract
 * bengsig  30-sep-2020 - Fix bug with dynamic sql in threads
 * bengsig  03-sep-2020 - Nuke some gcc warnings about fall through
 * bengsig  02-sep-2020 - Use enum rwl_type
 * bengsig  16-jun-2020 - Copy serverr field
 * bengsig  30-apr-2020 - Regular expressions
 * bengsig  30-mar-2020 - Dynamic SQL changes
 * bengsig  02-aug-2019 - Allocate thread specific lob locators
 * bengsig  11-jun-2019 - array define
 * bengsig  28-feb-2019 - free xqnum.sval
 * bengsig  28-feb-2019 - Fix RWL-600 [rwlmutexget-notinit] race condition
 * bengsig  27-feb-2019 - Added "and expresseion" to cursor loops
 * bengsig  15-feb-2019 - thread ok info moved to thrbits
 * bengsig  13-feb-2019 - added persec contineous flush
 * bengsig  06-feb-2019 - OCICommit
 * bengsig  10-may-2017 - Creation
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "rwl.h"

/*
 * run a procedure from a given start PC
 *
 * This is the implementation of our pcode machine
 * Note that it will be called recursively
 *
 */
void rwlcoderun ( rwl_xeqenv *xev)
{
  volatile ub4 pc; /* program counter */
  ub4 tookses = 0;
  sb4 alsoblank = 0;
  ub4 miscuse = 0;
  double thead = 0.0, tgotdb = 0.0, tend = 0.0;
  text *codename;
  sb4 pvnum;
  rwl_identifier *pproc;

  pc = xev->start[xev->pcdepth];
  codename = xev->xqcname[xev->pcdepth];

  /*ASSERT*/
  if (!xev->locals)
  {
    rwlexecsevere(xev,  &xev->rwm->code[pc].cloc, "[rwlcoderun-nulllocals:%s;%d;%d]"
    , codename, xev->pcdepth, pc);
    return;
  }

  pvnum = xev->rwm->code[pc].ceint2;
  /*ASSERT*/
  if (pvnum<0)
  {
    rwlexecsevere(xev,  &xev->rwm->code[pc].cloc, "[rwlcoderun-nopvnum:%s;%d;%d;%d]"
    , codename, xev->pcdepth, pc, pvnum);
    return;
  }
  pproc = xev->evar+pvnum;

  if (bit(xev->rwm->m2flags, RWL_P2_NOEXEC))
  {
    rwlerror(xev->rwm, RWL_ERROR_NOEXEC);
    return;
  }

  /* see if errors prevent executions */
  if (bit(xev->errbits, RWL_ERROR_STOP_BEFORE_RUN))
  {
    rwlerror(xev->rwm, RWL_ERROR_ERRORS_FOUND, codename);
  }
  else 
  {
    do // Execution loop starts heres
    {
      if (bit(xev->errbits, RWL_ERROR_STOP_BEFORE_RUN))
      {
	rwlerror(xev->rwm, RWL_ERROR_DONTEXECUTE);
	break;
      }
      bic(xev->pcflags[xev->pcdepth],RWL_PCFLAG_RETINCUR);
      miscuse = 0;
      // This is the big switch the does each individual code
      // our pcode machine handles
      // 
      // Note that entries that just go on to the next
      // have a pc++ to just increase the program counter
      // to the next entry.
      switch (xev->rwm->code[pc].ctyp)
      {
	case RWL_CODE_MODDBLEAK: // set the sessionpool leak flag
	  if (xev->curdb && RWL_DBPOOL_SESSION==xev->curdb->pooltype)
	    bis(xev->curdb->flags, RWL_DB_LEAK);
	  pc++;
	break;

	case RWL_CODE_NEWDB: // prepare for a new database to be used
	  if (xev->savdb[xev->pcdepth]) /*ASSERT*/
	    rwlexecsevere(xev,  &xev->rwm->code[pc].cloc
	                , "[rwlcoderun-savdbbad:%d;%s]", pc, xev->savdb[xev->pcdepth]->vname);
	  else
	  {
	    sb4 l;
	    xev->savdb[xev->pcdepth] = xev->curdb; // save existing
	    l = rwlfindvarug2(xev
	      , xev->rwm->code[pc].ceptr1
	      , &xev->rwm->code[pc].ceint2
	      , codename
	      );
	    xev->curdb = xev->evar[l].vdata;
	  }
	  pc++;
	break;

	case RWL_CODE_DEFDB: // prepare for the standard database
	  if (xev->savdb[xev->pcdepth]) /*ASSERT*/
	    rwlexecsevere(xev,  &xev->rwm->code[pc].cloc
	                , "[rwlcoderun-savdbbad2:%d;%s]", pc, xev->savdb[xev->pcdepth]->vname);
	  else
	  {
	    xev->savdb[xev->pcdepth] = xev->curdb; // save existing
	    xev->curdb = xev->dxqdb;
	  }
	  pc++;
	break;

	case RWL_CODE_OLDDB: // reset to original database
	  if (!xev->savdb[xev->pcdepth]) /*ASSERT*/
	    rwlexecsevere(xev,  &xev->rwm->code[pc].cloc
	                , "[rwlcoderun-savdbnull:%d]", pc);
	  else
	  {
	    xev->curdb = xev->savdb[xev->pcdepth]; // restore
	    xev->savdb[xev->pcdepth] = 0; // clear so assert works
	  }
	  pc++;
	break;

	case RWL_CODE_CBLOCK_BEG: 
	  if (bit(xev->rwm->mflags, RWL_DEBUG_EXECUTE))
	    rwldebug(xev->rwm, "at recursive depth %d, pc=%d executing RLBEG", xev->pcdepth, pc);
	  if (bit(xev->tflags, RWL_P_IN_CBLOCK))
	  {
	    rwlexecerror(xev, &xev->rwm->code[pc].cloc, RWL_ERROR_CBLOCK_DETECTED);
	    bis(xev->tflags, RWL_P_STOPNOW);
	  }
	  bis(xev->tflags, RWL_P_IN_CBLOCK);
	  pc++;
	break;

	case RWL_CODE_CBLOCK_END: 
	  if (bit(xev->rwm->mflags, RWL_DEBUG_EXECUTE))
	    rwldebug(xev->rwm, "at recursive depth %d, pc=%d executing RLEND", xev->pcdepth, pc);
	  if (!bit(xev->tflags, RWL_P_IN_CBLOCK))
	  {
	    rwlexecsevere(xev,  &xev->rwm->code[pc].cloc
	                , "[rwlcoderun-rlendbad:%d]", pc);
	  }
	  bic(xev->tflags, RWL_P_IN_CBLOCK);
	  pc++;
	break;

	case RWL_CODE_HEAD: 
	  if (bit(xev->rwm->mflags, RWL_DEBUG_EXECUTE))
	    rwldebug(xev->rwm, "at recursive depth %d, pc=%d, pvar=%d executing HEAD %s"
	    , xev->pcdepth
	    , pc
	    , xev->rwm->code[pc].ceint2
	    , xev->rwm->code[pc].ceptr1);
	    /* just a marker - do nothing */
	  pc++;
	break;

	case RWL_CODE_SQLHEAD:
	  {
	    /* database calls needed */
	    if (bit(xev->rwm->mflags, RWL_DEBUG_EXECUTE))
	      rwldebug(xev->rwm, "at recursive depth %d, pc=%d, pvar=%d executing SQLHEAD %s"
	      , xev->pcdepth
	      , pc
	      , xev->rwm->code[pc].ceint2
	      , xev->rwm->code[pc].ceptr1);

	    /*assert*/
	    if (!xev->curdb)
	    {
	      rwlexecsevere(xev,  &xev->rwm->code[pc].cloc
	                , "[rwlcoderun-nodb:%d]", pc);
	      goto endprogram; // Leave the big loop
	    }

	    /* if we haven't started timing */
	    if ( bit(xev->tflags, RWL_P_STATISTICS)
	       && !bit(xev->tflags, RWL_P_ISMAIN)
	       )
	    {
	      double cnow = rwlclock(xev,  &xev->rwm->code[pc].cloc);
	      if (bit(xev->rwm->mflags, RWL_DEBUG_MISC))
		rwldebug(xev->rwm, "sqlhead times: %.2f %.2f 0x%x", cnow, *xev->parrivetime, *xev->pclflags);
	      if (bit(xev->rwm->m3flags, RWL_P3_QETIMES) && *xev->pclflags)
	        tgotdb = thead = *xev->parrivetime;
	      else
		tgotdb = thead = cnow;
	    }

	    /* this is tricky!
	     *
	     * at parse time, we don't know if a database is needed
	     * somewhere during immediate execution of code like:
	     * 
	     * isdbneededinthisproc();
	     *
	     * as the potential need for a database can be down in 
	     * the execution stack.  Hence, for immediate execution
	     * we either choose the default database if it has been
	     * created, the database given with an AT clause
	     * or a dummy database, i.e. dummy rwl_cinfo* declared in the parser
	     * The dummy database is perfectly fine if no database calls
	     * are needed.  
	     *
	     * But if a real database call is needed, we need a way to
	     * provide an error saying there isn't any.
	     *
	     * This is dealt with in rwldummyonbad()
	     */

	    if (rwlstopnow)
	      goto endprogram; // Leave the big loop
	    if (!xev->curdb->username) // the empty rwldummydb from rwldummyonbad
	    {
	      if (xev->curdb->vname) // A named database had error
	        rwlexecerror(xev, &xev->rwm->code[pc].cloc, RWL_ERROR_BAD_DATABASE, xev->curdb->vname );
	      else // missing default datbase
	        rwlexecerror(xev, &xev->rwm->code[pc].cloc, RWL_ERROR_NO_DATABASE, "default");
	      goto endprogram; // Leave the big loop
	    }
	    else 
	      tookses = rwlensuresession2(xev,&xev->rwm->code[pc].cloc, xev->curdb
	        , 0 /* sq */, codename);

	    if (bit(xev->tflags, RWL_P_STATISTICS)
	       && !bit(xev->tflags, RWL_P_ISMAIN)
	       )
	    {
	      switch(tookses)
	      {
		case RWL_DBPOOL_POOLED:
		case RWL_DBPOOL_SESSION:
		case RWL_DBPOOL_RECONNECT:
		  tgotdb = rwlclock(xev,  &xev->rwm->code[pc].cloc);
		break;

		case RWL_DBPOOL_DEDICATED:
		case RWL_DBPOOL_RETHRDED:
		  tgotdb = thead;
		break;
	      }
	    }
	  }
	  pc++;
	  break;

	case RWL_CODE_END:
	  if (bit(xev->rwm->mflags, RWL_DEBUG_EXECUTE))
	    rwldebug(xev->rwm, "pc=%d executing END %d", pc, tookses);
	  /*assert*/
	  if (tookses)
	  {
	    rwlexecsevere(xev,  &xev->rwm->code[pc].cloc
		    , "[rwlcoderun-endwithdb:%d;%d]", xev->pcdepth, pc);
	    rwlreleasesession(xev, &xev->rwm->code[pc].cloc, xev->curdb, 0);
	    tookses = 0;
	  }
	  goto endprogram; // Leave the big loop
	break;

	case RWL_CODE_ABORT:
	  if (bit(xev->rwm->m3flags, RWL_P3_NICEABORT))
	    rwlexecerror(xev, 0, RWL_ERROR_ABORTNICE);
	  else
	    rwlexecerror(xev, &xev->rwm->code[pc].cloc, RWL_ERROR_ABORT);
	  // This is brutal!
	  exit((sb4)(xev->errbits & RWL_EXIT_ERRORS));
	break;

	case RWL_CODE_EXIT:
	  {
	    // get exit value
	    rwlexpreval(xev->rwm->code[pc].ceptr1, &xev->rwm->code[pc].cloc, xev, &xev->xqnum);
	    if (bit(xev->rwm->mflags, RWL_DEBUG_EXECUTE))
	      rwldebug(xev->rwm, "pc=%d prepare exit %d", pc, xev->xqnum.ival);
	    if (bit(xev->rwm->mflags, RWL_P_ONLYMAINTH))
	    {
	      xev->rwm->userexit = (int) xev->xqnum.ival;
	      bis(xev->rwm->m3flags, RWL_P3_USEREXIT);
	    }
	    else
	      rwlexecsevere(xev,  &xev->rwm->code[pc].cloc
			  , "[rwlcoderun-exitwiththreads:%d]", pc);
	  }
	  /* fall thru */
	  
	case RWL_CODE_RETURN:
	  /* we really should destinguish between RETURN in non-sql and sql
	   * procedure, such that we could have an assert like the one above
	   * for RWL_CODE_END
	   */
	  bis(xev->pcflags[xev->pcdepth], RWL_PCFLAG_RETINCUR);

	  /* fall thru */
	rwl_code_sqlend:
	case RWL_CODE_SQLEND:
	  {
	    if (bit(xev->rwm->mflags, RWL_DEBUG_EXECUTE))
	      rwldebug(xev->rwm, "pc=%d executing SQLEND %d, %s %s", pc, tookses, codename, xev->rwm->code[pc].cloc.fname);

	    if (tookses)
	    {
	      rwlreleasesession2(xev, &xev->rwm->code[pc].cloc, xev->curdb
		, 0 /*rwl_sql*/, codename);
	    }
	    tookses = 0;
	    if (bit(xev->tflags, RWL_P_STATISTICS)
	       && !bit(xev->tflags, RWL_P_ISMAIN)
	       )
	    {
	      sb4 l3;
	      tend = rwlclock(xev,  &xev->rwm->code[pc].cloc);
	      /*
	       * in first call, we need to allocate the rwl_stats (and possibly
	       * rwl_hist) structures
	       *
	       * arg2 contains the identifier of the procedure we are in
	       */
	      l3 = rwlfindvarug(xev, xev->rwm->code[pc].ceptr1, &xev->rwm->code[pc].ceint2);
	      if (!bit(xev->evar[l3].flags, RWL_IDENT_NOSTATS)
		  && !bit(xev->tflags, RWL_P_ISMAIN))
	      {
		if (!xev->evar[l3].stats)
		{
		    xev->evar[l3].stats = rwlalloccode(xev->rwm
		      , sizeof(rwl_stats) + 
			(bit(xev->tflags, RWL_P_HISTOGRAMS)
			  ? xev->rwm->histbucks*sizeof(rwl_histogram) 
			  : 0)
		      , &xev->rwm->code[pc].cloc);
		    if (bit(xev->tflags, RWL_P_PERSECSTAT))
		    {
		      if (xev->rwm->flushstop)
		      {
			// we never realloc when flushstop is used, but
			// make room for some more. flushstop+5+2*flushevery
			// is just arbitrarily chosen
			ub4 psz = xev->rwm->flushstop+5+2*xev->rwm->flushevery;
			if (psz > RWL_PERSEC_MAX)
			   psz = RWL_PERSEC_MAX+1; // trigger error in rwlstatsincr
			xev->evar[l3].stats->persec = rwlalloccode(xev->rwm
			   , sizeof(*xev->evar[l3].stats->persec)*psz
			   , &xev->rwm->code[pc].cloc);
			xev->evar[l3].stats->wtimsum = rwlalloccode(xev->rwm
			   , sizeof(*xev->evar[l3].stats->wtimsum)*psz
			   , &xev->rwm->code[pc].cloc);
			xev->evar[l3].stats->etimsum = rwlalloccode(xev->rwm
			   , sizeof(*xev->evar[l3].stats->etimsum)*psz
			   , &xev->rwm->code[pc].cloc);
			xev->evar[l3].stats->pssize = psz;
		      }
		      else
		      {
			xev->evar[l3].stats->persec = rwlalloccode(xev->rwm
			   , sizeof(*xev->evar[l3].stats->persec)*RWL_PERSEC_SECONDS
			   , &xev->rwm->code[pc].cloc);
			xev->evar[l3].stats->wtimsum = rwlalloccode(xev->rwm
			   , sizeof(*xev->evar[l3].stats->wtimsum)*RWL_PERSEC_SECONDS
			   , &xev->rwm->code[pc].cloc);
			xev->evar[l3].stats->etimsum = rwlalloccode(xev->rwm
			   , sizeof(*xev->evar[l3].stats->etimsum)*RWL_PERSEC_SECONDS
			   , &xev->rwm->code[pc].cloc);
			xev->evar[l3].stats->pssize = RWL_PERSEC_SECONDS;
		      }
		    }
		}

		rwlstatsincr(xev, xev->evar+l3,  &xev->rwm->code[pc].cloc
		  , 0.0 // Unused
		  , tgotdb - thead, tend - tgotdb, tend);
	      }
	    }
	    goto endprogram; // Leave the big loop
	  }

	break;

	case RWL_CODE_ENDCUR:
	  if (bit(xev->rwm->mflags, RWL_DEBUG_EXECUTE))
	    rwldebug(xev->rwm, "pc=%d executing ENDCUR %d", pc, tookses);
	  goto endprogram; // Leave the big loop

	break;

	case RWL_CODE_CURLOOPAT:
	  {
	    rwl_cinfo *thisdb;
	    /* SQL loop calling code at a database */
	    sb4 l1, l2;
	    /* find sql and potentially update its location guess */
	    l1 = rwlfindvarug2(xev
	      , xev->rwm->code[pc].ceptr1
	      , &xev->rwm->code[pc].ceint2
	      , codename
	      );
	    if (bit(xev->rwm->mflags, RWL_DEBUG_EXECUTE))
	      rwldebug(xev->rwm, "pc=%d executing CURLOOP %d", pc, l1);

	    /* rwlloopsql opens the cursor and starts a recursive
	     * execution for each row.  That recursive execution
	     * should begin with the first code after the CURLOOP,
	     * hence pc+1 below
	     */
	    l2 = rwlfindvarug2(xev
	      , xev->rwm->code[pc].ceptr3
	      , &xev->rwm->code[pc].ceint4
	      , codename
	      );
	    if (RWL_TYPE_CANCELLED == xev->evar[l2].vtype)
	    {
	      rwlexecerror(xev, &xev->rwm->code[pc].cloc, RWL_ERROR_NO_DATABASE, xev->evar[l2].vname);
	    }
	    else
	    {
	      thisdb = xev->evar[l2].vdata;
	      if (!thisdb) /*ASSERT*/
		rwlexecsevere(xev,  &xev->rwm->code[pc].cloc
			    , "[rwlcoderun-noatdb1:%d;%d]", xev->pcdepth, pc);
	      else
		rwlloopsql(xev
		  ,&xev->rwm->code[pc].cloc 
		  , thisdb
		  , xev->evar[l1].vdata
		  , pc+1   // recurse and start here
		  , codename);
	    }
	  }
	  /* at return from the recursive execution, go to the location
	   * right after ENDCUR
	   */
	  if (bit(xev->pcflags[xev->pcdepth],RWL_PCFLAG_RETINCUR))
	    goto rwl_code_sqlend;
	  pc = (ub4) xev->rwm->code[pc].ceint6;
	  break;

	case RWL_CODE_CURLOOP:
	  {
	    /* SQL loop calling code */
	    sb4 l1;
	    /* find sql and potentially update its location guess */
	    l1 = rwlfindvarug2(xev
	      , xev->rwm->code[pc].ceptr1
	      , &xev->rwm->code[pc].ceint2
	      , codename
	      );
	    if (bit(xev->rwm->mflags, RWL_DEBUG_EXECUTE))
	      rwldebug(xev->rwm, "pc=%d executing CURLOOP %d", pc, l1);

	    /* rwlloopsql opens the cursor and starts a recursive
	     * execution for each row.  That recursive execution
	     * should begin with the first code after the CURLOOP,
	     * hence pc+1 below
	     */
	    if (xev->curdb)
	      rwlloopsql(xev
	        ,&xev->rwm->code[pc].cloc 
	        , xev->curdb
	        , xev->evar[l1].vdata
		, pc+1
		, codename);
	  }
	  /* at return from the recursive execution, go to the location
	   * right after ENDCUR
	   */
	  if (bit(xev->pcflags[xev->pcdepth],RWL_PCFLAG_RETINCUR))
	    goto rwl_code_sqlend;
	  pc = (ub4) xev->rwm->code[pc].ceint6;
	  break;

	case RWL_CODE_SQLCCOFF:
	  {
	    /* turn cursor cache off */
	    sb4 l;
	    rwl_sql *sq;
	    /* find sql and potentially update its location guess */
	    l = rwlfindvarug2(xev, xev->rwm->code[pc].ceptr1
	      , &xev->rwm->code[pc].ceint2
	      , codename);
	    if (l>=0)
	    {
	      sq = xev->evar[l].vdata;
	      bis(sq->flags, RWL_SQFLAG_NOCURC);
	    }
	  }
	  pc ++;
	  break;

	case RWL_CODE_DYNBINDEF:
	  {
	    sb4 l, l2;
	    if (bit(xev->rwm->mflags, RWL_DEBUG_EXECUTE))
	      rwldebug(xev->rwm, "pc=%d executing dynbindef %s %s ", pc, xev->rwm->code[pc].ceptr1, xev->rwm->code[pc].ceptr3);
	    // find the sql
	    l = rwlfindvarug2(xev, xev->rwm->code[pc].ceptr1, &xev->rwm->code[pc].ceint2
	      , codename);
	    // and the variable
	    l2 = rwlfindvarug2(xev, xev->rwm->code[pc].ceptr3, &xev->rwm->code[pc].ceint4
	      , codename);
	    if (l>=0 && l2>=0)
	    {
	      rwl_sql *sq=xev->evar[l].vdata;
	      rwlexpreval(xev->rwm->code[pc].ceptr5, &xev->rwm->code[pc].cloc, xev, &xev->xqnum);
	      rwldynsbindef(xev, &xev->rwm->code[pc].cloc, sq  // the sql to add bind/define
	        , &xev->xqnum	// pvalue that has the position
	        , l2, xev->rwm->code[pc].ceptr3 // the variable to use
		, (ub1) xev->rwm->code[pc].ceint6 // and the bind/define type
		, codename);
	    }
	  }
	  pc ++;
	  break;

	case RWL_CODE_DYNSTXT:
	  {
	    // prepare dynamic with new text
	    sb4 l;
	    rwl_sql *sq;
	    /* find sql and potentially update its location guess */
	    l = rwlfindvarug2(xev, xev->rwm->code[pc].ceptr1
	      , &xev->rwm->code[pc].ceint2
	      , codename);
	    if (l>=0)
	    {
	      sq = xev->evar[l].vdata;
	      rwlexpreval(xev->rwm->code[pc].ceptr3, &xev->rwm->code[pc].cloc, xev, &xev->xqnum);
	      rwldynstext(xev,  &xev->rwm->code[pc].cloc,  sq, &xev->xqnum, codename);
	    }
	  }
	  pc ++;
	  break;

	case RWL_CODE_SQLFLUSH:
	  {
	    // flush sql
	    sb4 l;
	    rwl_sql *sq;
	    /* find sql and potentially update its location guess */
	    l = rwlfindvarug2(xev, xev->rwm->code[pc].ceptr1
	      , &xev->rwm->code[pc].ceint2
	      , codename);
	    if (l>=0)
	    {
	      sq = xev->evar[l].vdata;
	      if (bit(sq->flags,RWL_SQFLAG_ARRAYB))
		rwlflushsql2(xev,  &xev->rwm->code[pc].cloc, xev->curdb, sq, codename);
	      else
	        rwlexecerror(xev, &xev->rwm->code[pc].cloc, RWL_ERROR_ARRAY_EXECUTE_NOT_AB, sq->vname);
	    }
	  }
	  pc ++;
	  break;

	case RWL_CODE_DYNSREL:
	  {
	    // release a dynamic sql
	    sb4 l;
	    rwl_sql *sq;
	    /* find sql and potentially update its location guess */
	    l = rwlfindvarug2(xev, xev->rwm->code[pc].ceptr1
	      , &xev->rwm->code[pc].ceint2
	      , codename);
	    if (l>=0)
	    {
	      sq = xev->evar[l].vdata;
	      rwldynsrelease(xev,  &xev->rwm->code[pc].cloc,  sq, codename);
	    }
	  }
	  pc ++;
	  break;

	case RWL_CODE_SQLLEAK:
	  {
	    // set cursor to leak
	    sb4 l;
	    rwl_sql *sq;
	    /* find sql and potentially update its location guess */
	    l = rwlfindvarug2(xev, xev->rwm->code[pc].ceptr1
	      , &xev->rwm->code[pc].ceint2
	      , codename);
	    if (l>=0)
	    {
	      sq = xev->evar[l].vdata;
	      bis(sq->flags, RWL_SQFLAG_LEAK);
	    }
	  }
	  pc ++;
	  break;

	case RWL_CODE_SQLCCON:
	  {
	    /* turn cursor cache on */
	    sb4 l;
	    rwl_sql *sq;
	    /* find sql and potentially update its location guess */
	    l = rwlfindvarug2(xev, xev->rwm->code[pc].ceptr1
	      , &xev->rwm->code[pc].ceint2
	      , codename);
	    if (l>=0)
	    {
	      sq = xev->evar[l].vdata;
	      bic(sq->flags, RWL_SQFLAG_NOCURC);
	    }
	  }
	  pc ++;
	  break;

	case RWL_CODE_SQLARRAY:
	  {
	    /* set sql array size */
	    sb4 l;
	    rwl_sql *sq;
	    /* find sql and potentially update its location guess */
	    l = rwlfindvarug2(xev, xev->rwm->code[pc].ceptr1
	      , &xev->rwm->code[pc].ceint2
	      , codename);
	    if (l>=0)
	    {
	      sq = xev->evar[l].vdata;
	      rwlexpreval(xev->rwm->code[pc].ceptr3, &xev->rwm->code[pc].cloc, xev, &xev->xqnum);
	      if (bit(sq->flags, RWL_SQFLAG_DYNAMIC) && sq->aix)
	      {
		// Cannot change dynamic sql array size when in use
	        rwlexecerror(xev, &xev->rwm->code[pc].cloc, RWL_ERROR_CANNOT_MODIFY_NOW, "array", sq->vname);
	      }
	      else
	      {
		if (xev->xqnum.ival<=0)
		{
		  rwlexecerror(xev, &xev->rwm->code[pc].cloc, RWL_ERROR_MODIFY_SQL_ARRAY_BAD
		    , sq->vname, xev->xqnum.ival);
		  sq->asiz = 0; // which means use prefetch memory
		}
		else
		  sq->asiz = (ub4) xev->xqnum.ival;
	      }
	    }
	  }
	  pc ++;
	  break;

	case RWL_CODE_SQL:
	  {
	    /* simple SQL */
	    sb4 l;
	    /* find sql and potentially update its location guess */
	    l = rwlfindvarug2(xev, xev->rwm->code[pc].ceptr1
	      , &xev->rwm->code[pc].ceint2
	      , codename);

	    if (xev->curdb)
	      rwlsimplesql2(xev, &xev->rwm->code[pc].cloc
	        ,  xev->curdb, xev->evar[l].vdata
		, codename);
	  }
	  pc ++;
	  break;

	case RWL_CODE_SQLAT:
	  {
	    /* simple SQL at given database */
	    sb4 l, l2;
	    rwl_cinfo *thisdb;
	    /* find sql and potentially update its location guess */
	    l = rwlfindvarug2(xev, xev->rwm->code[pc].ceptr1
	      , &xev->rwm->code[pc].ceint2
	      , codename);

	    /* find db */
	    l2 = rwlfindvarug2(xev, xev->rwm->code[pc].ceptr3
	       , &xev->rwm->code[pc].ceint4
	       , codename);

	    thisdb = xev->evar[l2].vdata;
	    if (!thisdb) /*ASSERT*/
	      rwlexecsevere(xev,  &xev->rwm->code[pc].cloc
			  , "[rwlcoderun-noatdb2:%d;%d]", xev->pcdepth, pc);
	    else
	      rwlsimplesql2(xev, &xev->rwm->code[pc].cloc
	        ,  thisdb, xev->evar[l].vdata
		, codename);
	  }
	  pc ++;
	  break;

	case RWL_CODE_SHIFT:
	  if (bit(xev->rwm->mflags, RWL_DEBUG_EXECUTE))
	    rwldebug(xev->rwm, "pc=%d executing shift", pc);
	  rwlshiftdollar(xev, &xev->rwm->code[pc].cloc);
	  pc++;
	  break;

	case RWL_CODE_ROLLBACK:
	  if (bit(xev->rwm->mflags, RWL_DEBUG_EXECUTE))
	    rwldebug(xev->rwm, "pc=%d executing rollback", pc);
	  if (xev->curdb)
	    rwlrollback2(xev, &xev->rwm->code[pc].cloc,  xev->curdb, codename);
	  pc++;
	  break;

	case RWL_CODE_COMMIT:
	  if (bit(xev->rwm->mflags, RWL_DEBUG_EXECUTE))
	    rwldebug(xev->rwm, "pc=%d executing commit", pc);
	  if (xev->curdb)
	    rwlcommit2(xev,  &xev->rwm->code[pc].cloc,  xev->curdb, codename);
	  pc++;
	  break;

	case RWL_CODE_SETCCLASS:
	  {

	    /* set connection class */
	    rwlexpreval(xev->rwm->code[pc].ceptr1, &xev->rwm->code[pc].cloc, xev, &xev->xqnum);
	    if (bit(xev->rwm->mflags, RWL_DEBUG_EXECUTE))
	      rwldebug(xev->rwm, "pc=%d executing set cclass %s", pc, xev->xqnum.sval);
	    if (xev->curdb)
	    {
	      // Check the database is sessionpool or drcp
	      switch(xev->curdb->pooltype)
	      {
		case RWL_DBPOOL_POOLED:
		case RWL_DBPOOL_SESSION:
		  {
		    if (!rwlcclassgood2(xev, &xev->rwm->code[pc].cloc, xev->xqnum.sval))
		      goto donotchangecclass;
		  }
		  break;

		default:
		  rwlexecerror(xev, &xev->rwm->code[pc].cloc, RWL_ERROR_CCLASS_NOT_USEFUL);
		  goto donotchangecclass;
	      }
	      // It is too late if we have a session
	      if (tookses)
	      {
	        rwlexecerror(xev, &xev->rwm->code[pc].cloc, RWL_ERROR_CCLASS_TOO_LATE);
		goto donotchangecclass;
	      }
	      //assert authinfo is there
	      if (!xev->curdb->authp)
	      {
		rwlexecsevere(xev, &xev->rwm->code[pc].cloc
		  , "[rwlcoderun-noauthp:%d;%s;%d;%s;%s]", xev->pcdepth, codename, pc
		  , xev->curdb->vname, xev->xqnum.sval );
		goto donotchangecclass;
	      }
	      // change it if it is new
	      if (xev->curdb->cclass && rwlstrcmp(xev->curdb->cclass, xev->xqnum.sval))
	      {
		rwlfree(xev->rwm, xev->curdb->cclass);
		xev->curdb->cclass = rwlstrdup(xev->rwm, xev->xqnum.sval);
		rwlsetcclass(xev, &xev->rwm->code[pc].cloc, xev->curdb);
	      }
	    
	  }
	  donotchangecclass:
	  pc++;
	}
      break;


      case RWL_CODE_CANCELCUR:
	if (bit(xev->rwm->mflags, RWL_DEBUG_EXECUTE))
	  rwldebug(xev->rwm, "pc=%d executing cancelcur depth %d", pc, xev->pcdepth);
	bis(xev->pcflags[xev->pcdepth], RWL_PCFLAG_CANCELCUR);
	pc++;
	break;

      case RWL_CODE_OCIPING:
	if (bit(xev->rwm->mflags, RWL_DEBUG_EXECUTE))
	  rwldebug(xev->rwm, "pc=%d executing ociping", pc);
	if (xev->curdb)
	  rwlociping(xev,  &xev->rwm->code[pc].cloc,  xev->curdb, codename);
	pc++;
	break;

      case RWL_CODE_SESRELDROP:
	if (bit(xev->rwm->mflags, RWL_DEBUG_EXECUTE))
	  rwldebug(xev->rwm, "pc=%d marking sesrelease to drop", pc);
	if (xev->curdb)
	  bis(xev->tflags, RWL_P_SESRELDROP);
	pc++;
	break;

      case RWL_CODE_GETRUSAGE:
	if (bit(xev->rwm->mflags, RWL_DEBUG_EXECUTE))
	  rwldebug(xev->rwm, "pc=%d executing getrusage", pc);
	rwlgetrusage(xev,  &xev->rwm->code[pc].cloc);
	pc++;
      break;

      case RWL_CODE_PCINCR:
	if (bit(xev->rwm->mflags, RWL_DEBUG_EXECUTE))
	  rwldebug(xev->rwm, "pc=%d executing pcincr %d", pc, xev->pcdepth);
	if (++xev->pcdepth >= RWL_MAX_CODE_RECURSION)
	  rwlexecsevere(xev, &xev->rwm->code[pc].cloc
	    , "[rwlcoderun-depth4:%d;%s;%d]", xev->pcdepth, codename, pc);
	else
	{
	  // duplicate locals and xqcname
	  xev->locals[xev->pcdepth] = xev->locals[xev->pcdepth-1];
	  xev->xqcname[xev->pcdepth] = xev->xqcname[xev->pcdepth-1];
	}
	pc++;
      break;

      case RWL_CODE_PCDECR:
	if (bit(xev->rwm->mflags, RWL_DEBUG_EXECUTE))
	  rwldebug(xev->rwm, "pc=%d executing pcdecr %d", pc, xev->pcdepth-1);
	--xev->pcdepth;
	pc++;
      break;



      case RWL_CODE_RAPROC:
	{
	  /* random call */
	  sb4 l, l2;
	  /* find random and potentially update its location guess */
	  l = rwlfindvarug(xev, xev->rwm->code[pc].ceptr1, &xev->rwm->code[pc].ceint2);

	  if (l<0)
	    goto skipraproc;

	  /* find a random entry */
	  l2 = rwlrastvar(xev, &xev->evar[l]);

	  if (l2<0)
	    goto skipraproc;

	  if (RWL_CODE_RAPROC==xev->rwm->code[pc].ctyp)
	  {
	    if (bit(xev->rwm->mflags, RWL_DEBUG_EXECUTE))
	      rwldebug(xev->rwm, "pc=%d executing %s picked %d:%s", pc
	      , xev->rwm->code[pc].ceptr1, l2, xev->evar[l2].vname);
	    xev->erloc[xev->pcdepth] = &xev->rwm->code[pc].cloc;
	    if (++xev->pcdepth >= RWL_MAX_CODE_RECURSION)
	      rwlexecsevere(xev,  &xev->rwm->code[pc].cloc
			, "[rwlcoderun-depth3:%d;%d;%s]", xev->pcdepth
			, xev->evar[l].vval, xev->rwm->code[pc].ceptr1);
	    else
	    {
	      // recurse
	      xev->start[xev->pcdepth] = xev->evar[l2].vval;
	      xev->xqcname[xev->pcdepth] = xev->evar[l2].vname;
	      rwllocalsprepare(xev, xev->evar+l2, &xev->rwm->code[pc].cloc);
	      rwlcoderun(xev);
	      rwllocalsrelease(xev, xev->evar+l2, &xev->rwm->code[pc].cloc);
	    }
	    --xev->pcdepth;
	    xev->erloc[xev->pcdepth] = 0;
	  }
	}
	skipraproc:
	pc ++;
	break;

      case RWL_CODE_WRITELOB:
	{
	  sb4 l;
	  if (bit(xev->rwm->mflags, RWL_DEBUG_EXECUTE))
	    rwldebug(xev->rwm, "pc=%d executing writelob", pc);
	  // find the LOB
	  l = rwlfindvarug2(xev, xev->rwm->code[pc].ceptr1, &xev->rwm->code[pc].ceint2
	    , codename);
	  /* evaluate the expression (which really is a procedure call */
	  rwlexpreval(xev->rwm->code[pc].ceptr3, &xev->rwm->code[pc].cloc, xev, &xev->xqnum);
	  /*assert*/
	  if (xev->evar[l].vtype != RWL_TYPE_CLOB 
	   && xev->evar[l].vtype != RWL_TYPE_BLOB)
	  {
	    rwlexecsevere(xev, &xev->rwm->code[pc].cloc
		      , "[rwlcoderun-writelob:%s;%s;%d]", xev->evar[l].vname, xev->evar[l].stype, l);
	  }
	  else
	    rwlwritelob(xev
	      , rwlnuminvar(xev, xev->evar+l)->vptr // the OCILob *
	      , xev->evar[l].vdata     // the db (i.e. rwl_cinfo *)
	      , &xev->xqnum            // the string to write
	      , &xev->rwm->code[pc].cloc, codename);
	  pc++;
	}
      break;

      case RWL_CODE_READLOB:
	{
	  sb4 l, l2;
	  if (bit(xev->rwm->mflags, RWL_DEBUG_EXECUTE))
	    rwldebug(xev->rwm, "pc=%d executing readlob", pc);
	  // find the LOB
	  l = rwlfindvarug2(xev, xev->rwm->code[pc].ceptr1, &xev->rwm->code[pc].ceint2
	    , codename);
	  // and the string
	  l2 = rwlfindvarug2(xev, xev->rwm->code[pc].ceptr3, &xev->rwm->code[pc].ceint4
	    , codename);
	  /*assert*/
	  if (xev->evar[l].vtype != RWL_TYPE_CLOB
	   && xev->evar[l].vtype != RWL_TYPE_BLOB)
	  {
	    rwlexecsevere(xev, &xev->rwm->code[pc].cloc
	      , "[rwlcoderun-readlob1:%s;%s;%d]", xev->evar[l].vname, xev->evar[l].stype, l);
	  }
	  else if (xev->evar[l2].vtype != RWL_TYPE_STR)
	  {
	    rwlexecsevere(xev, &xev->rwm->code[pc].cloc
	      , "[rwlcoderun-readlob2:%s;%s;%d]", xev->evar[l2].vname, xev->evar[l2].stype, l2);
	  }
	  else
	  {
	    rwl_identifier *ri = rwlidgetmx(xev, &xev->rwm->code[pc].cloc, l2);
	    rwlreadlob(xev
	      , rwlnuminvar(xev, xev->evar+l)->vptr // the OCILob *
	      , xev->evar[l].vdata     // the db (i.e. rwl_cinfo *)
	      , rwlnuminvar(xev, ri)     // the string to read into
	      , &xev->rwm->code[pc].cloc, codename);
	    rwlidrelmx(xev, &xev->rwm->code[pc].cloc, l2);
	  }
	  pc++;
	}
      break;

      case RWL_CODE_STACK:
	{
	  if (bit(xev->rwm->mflags, RWL_DEBUG_EXECUTE))
	    rwldebug(xev->rwm, "pc=%d executing proc()", pc);
	  /* evaluate the expression (which really is a procedure call */
	  rwlexpreval(xev->rwm->code[pc].ceptr1, &xev->rwm->code[pc].cloc, xev, 0);
	  pc++;
	}
      break;

      case RWL_CODE_ASSIGN:
      case RWL_CODE_APPEND:
	{
	  if (bit(xev->rwm->mflags, RWL_DEBUG_EXECUTE))
	    rwldebug(xev->rwm, "pc=%d executing assignment at 0x%x", pc, xev->rwm->code[pc].ceptr1);
	  /* evaluate the assignment */
	  rwlexpreval(xev->rwm->code[pc].ceptr1, &xev->rwm->code[pc].cloc, xev, 0);
	  pc++;
	}
      break;

      case RWL_CODE_SUSPEND:
	{
	  /* suspend until */
	  rwlexpreval(xev->rwm->code[pc].ceptr1, &xev->rwm->code[pc].cloc, xev, &xev->xqnum);
	  if (bit(xev->rwm->mflags, RWL_DEBUG_EXECUTE))
	    rwldebug(xev->rwm, "pc=%d executing suspend until %.2f", pc, xev->xqnum.dval);
	  (void) rwlwaituntil(xev, &xev->rwm->code[pc].cloc,  xev->xqnum.dval);
	  pc++;
	}
      break;

      case RWL_CODE_WAIT:
	{

	  /* sleep seconds */
	  rwlexpreval(xev->rwm->code[pc].ceptr1, &xev->rwm->code[pc].cloc, xev, &xev->xqnum);
	  if (bit(xev->rwm->mflags, RWL_DEBUG_EXECUTE))
	    rwldebug(xev->rwm, "pc=%d executing wait %.2f", pc, xev->xqnum.dval);
	  rwlwait(xev,  &xev->rwm->code[pc].cloc, xev->xqnum.dval);
	  pc++;
	}
      break;

	case RWL_CODE_IF:
	  {

	    /* evaluate the IF expression */
	    rwlexpreval(xev->rwm->code[pc].ceptr1,  &xev->rwm->code[pc].cloc, xev, &xev->xqnum);
	    if (bit(xev->rwm->mflags, RWL_DEBUG_EXECUTE))
	      rwldebug(xev->rwm, "pc=%d executing if at 0x%x %d branch %d", pc
	        , xev->rwm->code[pc].ceptr1, xev->rwm->code[pc].ceint2
		, xev->xqnum.ival);
	    /* if ! expression goto else or endif or one after forl */
	    if (xev->xqnum.isnull)
	    {
	      rwlexecerror(xev, &xev->rwm->code[pc].cloc, RWL_ERROR_IF_NULL);
	      xev->xqnum.ival = 0;
	    }
	    if (! xev->xqnum.ival)
	      pc = (ub4) xev->rwm->code[pc].ceint2;
	    else
	      pc++;
	  }
	break;

	case RWL_CODE_CURBRK:
	  bis(xev->pcflags[xev->pcdepth], RWL_PCFLAG_CANCELCUR);
	  /*FALLTHROUGH*/
	case RWL_CODE_BREAK:
	case RWL_CODE_FORL:
	case RWL_CODE_READEND:
	case RWL_CODE_ELSEIF:
	case RWL_CODE_ELSE:
	  {
	    if (bit(xev->rwm->mflags, RWL_DEBUG_EXECUTE))
	      rwldebug(xev->rwm, "pc=%d executing goto %d", pc, xev->rwm->code[pc].ceint2);
	    /* if started with IF: go to endif location
	     * if started with LOOP: goto if location 
	     */
	    pc = (ub4) xev->rwm->code[pc].ceint2;
	  }
	break;

	case RWL_CODE_ENDIF:
	  {
	    if (bit(xev->rwm->mflags, RWL_DEBUG_EXECUTE))
	      rwldebug(xev->rwm, "pc=%d executing endif", pc);
	    /* just a marker - do nothing */
	    pc++;
	  }
	break;

	case RWL_CODE_REGEXSUBG:
	  miscuse = RWL_P2_REGEXSUBG;
	  goto performregexsub;

	case RWL_CODE_REGEXSUB:
	  miscuse = 0;
	performregexsub:
	  rwlexpreval(xev->rwm->code[pc].ceptr3,  &xev->rwm->code[pc].cloc, xev, &xev->xqnum);
	  rwlexpreval(xev->rwm->code[pc].ceptr5,  &xev->rwm->code[pc].cloc, xev, &xev->xqnum2);
	  rwlexpreval(xev->rwm->code[pc].ceptr7,  &xev->rwm->code[pc].cloc, xev, &xev->xqnum3);
	  if (bit(xev->rwm->mflags, RWL_DEBUG_EXECUTE))
	    rwldebug(xev->rwm, "pc=%d executing regexsub %s %s %s", pc
	      ,  xev->xqnum.sval, xev->xqnum2.sval, xev->xqnum3.sval);
	  rwlregexsub(xev, &xev->rwm->code[pc].cloc
	    , xev->xqnum.sval, xev->xqnum2.sval // regex and string
	    , xev->xqnum3.sval // substitute
	    , xev->rwm->code[pc].ceint2, xev->rwm->code[pc].ceptr1 // guess and name of return string
	    , miscuse 
	    , codename);
	  pc++;
	  miscuse = 0;
	break;

	case RWL_CODE_REGEXTRACT:
	  rwlexpreval(xev->rwm->code[pc].ceptr1,  &xev->rwm->code[pc].cloc, xev, &xev->xqnum);
	  rwlexpreval(xev->rwm->code[pc].ceptr3,  &xev->rwm->code[pc].cloc, xev, &xev->xqnum2);
	  if (bit(xev->rwm->mflags, RWL_DEBUG_EXECUTE))
	    rwldebug(xev->rwm, "pc=%d executing rextract %s %s", pc,  xev->xqnum.sval, xev->xqnum2.sval);
	  rwlregextract(xev, &xev->rwm->code[pc].cloc
	    , xev->xqnum.sval, xev->xqnum2.sval // regex and string
	    , xev->rwm->code[pc].ceptr5 // idlist
	    , codename);
	  pc++;
	break;

	case RWL_CODE_REGEX:
	  rwlexpreval(xev->rwm->code[pc].ceptr1,  &xev->rwm->code[pc].cloc, xev, &xev->xqnum);
	  rwlexpreval(xev->rwm->code[pc].ceptr3,  &xev->rwm->code[pc].cloc, xev, &xev->xqnum2);
	  if (bit(xev->rwm->mflags, RWL_DEBUG_EXECUTE))
	    rwldebug(xev->rwm, "pc=%d executing regex %s %s", pc,  xev->xqnum.sval, xev->xqnum2.sval);
	  rwlregex(xev, &xev->rwm->code[pc].cloc
	    , xev->xqnum.sval, xev->xqnum2.sval // regex and string
	    , xev->rwm->code[pc].ceptr5 // idlist
	    , codename);
	  pc++;
	break;

	case RWL_CODE_READLAND:
	  miscuse++;
	  // fall through
	case RWL_CODE_READLOOP:
	  miscuse++;
	  // fall through
	case RWL_CODE_READLINE:
	  {
	    sb4 l;
	    ub4 rok;
	    rwl_value *nn;
	    if (0>(l = rwlverifyvg(xev, xev->rwm->code[pc].ceptr1, xev->rwm->code[pc].ceint2, codename)))
	    {
	      rwlexecsevere(xev, &xev->rwm->code[pc].cloc
	                , "[rwlcoderun-read3:%s;%d;%d]"
			, xev->rwm->code[pc].ceptr1, xev->rwm->code[pc].ceint2, l);
	      if (miscuse)
		pc = (ub4) xev->rwm->code[pc].ceint4;
	      else
	        pc++;
	      goto readlineexit;
	    }
	    /*assert*/
	    if (xev->evar[l].vtype != RWL_TYPE_FILE)
	    {
	      rwlexecsevere(xev, &xev->rwm->code[pc].cloc
	                , "[rwlcoderun-read2:%s;%s;%d]", xev->evar[l].vname, xev->evar[l].stype, l);
	      if (miscuse)
		pc = (ub4) xev->rwm->code[pc].ceint4;
	      else
	        pc++;
	      goto readlineexit;
	    }
	    nn = rwlnuminvar(xev, xev->evar+l);
	    if (bit(nn->valflags, RWL_VALUE_FILE_OPENR))
	    {
	      /* read from file into list of variables */
	      if (bit(xev->rwm->mflags, RWL_DEBUG_EXECUTE))
		rwldebug(xev->rwm, "pc=%d executing read from %s", pc , xev->evar[l].vname);
	      rok = rwlreadline(xev, &xev->rwm->code[pc].cloc
	      ,  xev->evar+l, xev->rwm->code[pc].ceptr3
	      , codename);
	    }
	    else
	    {
	      if (!bit(nn->valflags, RWL_VALUE_FILEREPNOTOPEN))
	        rwlexecerror(xev,&xev->rwm->code[pc].cloc,RWL_ERROR_WRITE_NOT_OPEN, xev->evar[l].vname);
	      bis(nn->valflags, RWL_VALUE_FILEREPNOTOPEN);
	      if (miscuse)
		pc = (ub4) xev->rwm->code[pc].ceint4;
	      else
	        pc++;
	      goto readlineexit;
	    }
	    switch (miscuse)
	    {
	      case 2: // Loop with and condition
		/* evaluate the IF expression */
		rwlexpreval(xev->rwm->code[pc].ceptr5,  &xev->rwm->code[pc].cloc, xev, &xev->xqnum);
		// Warn about null
		if (xev->xqnum.isnull)
		{
		  rwlexecerror(xev, &xev->rwm->code[pc].cloc, RWL_ERROR_IF_NULL);
		  xev->xqnum.ival = 0;
		}
		if (bit(xev->rwm->mflags, RWL_DEBUG_EXECUTE))
		  rwldebug(xev->rwm, "pc=%d executing readline and if at 0x%x jump=%d and=%d rok=%d", pc
		    , xev->rwm->code[pc].ceptr5, xev->rwm->code[pc].ceint4
		    , xev->xqnum.ival, rok);
		/* if read ok and expression stay in loop */
		if (rok && xev->xqnum.ival)
		  pc++;
		else
		  pc = (ub4) xev->rwm->code[pc].ceint4;
	      break;

	      case 1: // Just a loop
		if (bit(xev->rwm->mflags, RWL_DEBUG_EXECUTE))
		  rwldebug(xev->rwm, "pc=%d executing readline jump=%d and=%d rok=%d", pc
		    , xev->rwm->code[pc].ceint4
		    , xev->xqnum.ival, rok);
	        if (rok)
		  pc++;
		else
		  pc = (ub4) xev->rwm->code[pc].ceint4; // go to end
	      break;

	      case 0: // only readline
	        pc++;
	      break;

	      default:
	        rwlexecsevere(xev, &xev->rwm->code[pc].cloc
	           , "[rwlcoderun-badreadloop:%s;%s;%d]", xev->evar[l].vname, xev->evar[l].stype, l);

	    }

	    readlineexit:
	    miscuse=0;
	  }
	break;

	case RWL_CODE_SPRINTF:
	  {
	    sb4 l;
	    rwl_identifier *pi;
	    if (0>(l = rwlverifyvg(xev, xev->rwm->code[pc].ceptr1, xev->rwm->code[pc].ceint2, codename)))
	    {
	      rwlexecsevere(xev, &xev->rwm->code[pc].cloc
	                , "[rwlcoderun-sprintf1:%s;%d;%d]"
			, xev->rwm->code[pc].ceptr1, xev->rwm->code[pc].ceint2, l);
	      pc++;
	      break;
	    }
	    /*assert*/
	    if (xev->evar[l].vtype != RWL_TYPE_STR)
	    {
	      rwlexecsevere(xev, &xev->rwm->code[pc].cloc
	                , "[rwlcoderun-sprintf2:%s;%s;%d]", xev->evar[l].vname, xev->evar[l].stype, l);
	      pc++;
	      break;
	    }
	    /* fprintf to file into list of variables */
	    if (bit(xev->rwm->mflags, RWL_DEBUG_EXECUTE))
	      rwldebug(xev->rwm, "pc=%d executing sprintf to %s", pc , xev->evar[l].vname);
	    pi = rwlidgetmx(xev, &xev->rwm->code[pc].cloc, l);
	    rwldoprintf(xev, &xev->rwm->code[pc].cloc
	    ,  pi, xev->rwm->code[pc].ceptr3, (ub4) xev->rwm->code[pc].ceint4);
	    rwlidrelmx(xev, &xev->rwm->code[pc].cloc, l);
	  pc++;
	  }
	break;

	case RWL_CODE_FPRINTF:
	  {
	    sb4 l;
	    rwl_value *nn;
	    if (0>(l = rwlverifyvg(xev, xev->rwm->code[pc].ceptr1, xev->rwm->code[pc].ceint2, codename)))
	    {
	      rwlexecsevere(xev, &xev->rwm->code[pc].cloc
	                , "[rwlcoderun-fprintf1:%s;%d;%d]"
			, xev->rwm->code[pc].ceptr1, xev->rwm->code[pc].ceint2, l);
	      pc++;
	      break;
	    }
	    /*assert*/
	    if (xev->evar[l].vtype != RWL_TYPE_FILE)
	    {
	      rwlexecsevere(xev, &xev->rwm->code[pc].cloc
	                , "[rwlcoderun-fprintf2:%s;%s;%d]", xev->evar[l].vname, xev->evar[l].stype, l);
	      pc++;
	      break;
	    }
	    nn = rwlnuminvar(xev, xev->evar+l);
	    if (bit(nn->valflags, RWL_VALUE_FILE_OPENW))
	    {
	      /* fprintf to file into list of variables */
	      if (bit(xev->rwm->mflags, RWL_DEBUG_EXECUTE))
		rwldebug(xev->rwm, "pc=%d executing fprintf to %s", pc , xev->evar[l].vname);
	      rwldoprintf(xev, &xev->rwm->code[pc].cloc
	      ,  xev->evar+l, xev->rwm->code[pc].ceptr3, RWL_TYPE_FILE);
	    }
	    else
	    {
	      if (!bit(nn->valflags, RWL_VALUE_FILEREPNOTOPEN))
	        rwlexecerror(xev,&xev->rwm->code[pc].cloc,RWL_ERROR_WRITE_NOT_OPEN, xev->evar[l].vname);
	      bis(nn->valflags, RWL_VALUE_FILEREPNOTOPEN);
	      pc++;
	      break;
	    }
	  pc++;
	  }
	break;

	case RWL_CODE_WRITEBLANK:
	  alsoblank=1;
	  /*FALLTHROUGH*/
	case RWL_CODE_WRITE:
	  {
	    sb4 l;
	    rwl_value *nn;
	    /*ASSERT*/
	    if (0>(l = rwlverifyvg(xev, xev->rwm->code[pc].ceptr3, xev->rwm->code[pc].ceint4, codename)))
	    {
	      rwlexecsevere(xev, &xev->rwm->code[pc].cloc
	                , "[rwlcoderun-write3:%s;%d;%d]"
			, xev->rwm->code[pc].ceptr3, xev->rwm->code[pc].ceint4, l);
	      goto writebadexit;
	    }
	    /*assert*/
	    nn = rwlnuminvar(xev, xev->evar+l);
	    if (xev->evar[l].vtype != RWL_TYPE_FILE)
	    {
	      rwlexecsevere(xev, &xev->rwm->code[pc].cloc
	                , "[rwlcoderun-write1:%s;%s;%d]", xev->evar[l].vname, xev->evar[l].stype, l);
	    }
	    else if (bit(nn->valflags, RWL_VALUE_FILE_OPENW))
	    {
	      /* evaluate expression and print its result */
	      if (bit(xev->rwm->mflags, RWL_DEBUG_EXECUTE))
		rwldebug(xev->rwm, "pc=%d executing write %sexpression to %s", pc
		  , alsoblank?"blank and then ":"", xev->evar[l].vname);
	      if (alsoblank) fputs(" ", nn->vptr /*WAS xev->evar[l].num.vptr*/);
	      rwlexprprint(xev->rwm->code[pc].ceptr1,  &xev->rwm->code[pc].cloc,  xev, nn->vptr /*WAS xev->evar[l].num.vptr*/);
	    }
	    else
	    {
	      if (!bit(nn->valflags, RWL_VALUE_FILEREPNOTOPEN))
	        rwlexecerror(xev,&xev->rwm->code[pc].cloc,RWL_ERROR_WRITE_NOT_OPEN, xev->evar[l].vname);
	      bis(nn->valflags, RWL_VALUE_FILEREPNOTOPEN);
	    }
	    writebadexit:
	    pc++;
	    alsoblank = 0;
	  }
	break;

	case RWL_CODE_PRINTBLANK:
	  alsoblank=1;
	  /*FALLTHROUGH*/
	case RWL_CODE_PRINT:
	  {
	    /* evaluate expression and print its result */
	    if (bit(xev->rwm->mflags, RWL_DEBUG_EXECUTE))
	      rwldebug(xev->rwm, "pc=%d executing print %sexpression", pc, alsoblank?"blank and then ":"");
	    if (alsoblank) fputs(" ", stdout);
	    rwlexprprint(xev->rwm->code[pc].ceptr1, &xev->rwm->code[pc].cloc,  xev, stdout);
	    pc++;
	    alsoblank = 0;
	  }
	break;

	case RWL_CODE_NEWLINE:
	  {
	    if (bit(xev->rwm->mflags, RWL_DEBUG_EXECUTE))
	      rwldebug(xev->rwm, "pc=%d executing print newline", pc);
	    /* nothing more than output \n */
	    fputs("\n", stdout);
	    pc++;
	  }
	break;

	case RWL_CODE_NEWLINEFILE:
	  {
	    sb4 l;
	    rwl_value *nn;
	    if (0>(l = rwlverifyvg(xev, xev->rwm->code[pc].ceptr1, xev->rwm->code[pc].ceint2, codename)))
	    {
	      rwlexecsevere(xev, &xev->rwm->code[pc].cloc
	                , "[rwlcoderun-write4:%s;%d;%d]"
			, xev->rwm->code[pc].ceptr1, xev->rwm->code[pc].ceint2, l);
	      goto newlinefileexit;
	    }
	    nn = rwlnuminvar(xev, xev->evar+l);
	    /*assert*/
	    if (xev->evar[l].vtype != RWL_TYPE_FILE)
	    {
	      rwlexecsevere(xev, &xev->rwm->code[pc].cloc
	                , "[rwlcoderun-write2:%s;%s;%d]", xev->evar[l].vname, xev->evar[l].stype, l);
	    }
	    else if (bit(nn->valflags, RWL_VALUE_FILE_OPENW))
	    {
	      if (bit(xev->rwm->mflags, RWL_DEBUG_EXECUTE))
		rwldebug(xev->rwm, "pc=%d executing write newline to %s", pc, xev->evar[l].vname);
	      fputs("\n", nn->vptr /*WAS xev->evar[l].num.vptr*/);
	    }
	    else
	    {
	      if (!bit(nn->valflags, RWL_VALUE_FILEREPNOTOPEN)) /* only report not open once */
	        rwlexecerror(xev,&xev->rwm->code[pc].cloc
			,RWL_ERROR_WRITE_NOT_OPEN, xev->evar[l].vname);
	      bis(nn->valflags, RWL_VALUE_FILEREPNOTOPEN);
	    }
	    newlinefileexit:
	    pc++;
	  }
	break;

	case RWL_CODE_FFLUSH:
	  {
	    sb4 l;
	    rwl_value *nn;
	    if (0>(l = rwlverifyvg(xev, xev->rwm->code[pc].ceptr1, xev->rwm->code[pc].ceint2, codename)))
	    {
	      rwlexecsevere(xev, &xev->rwm->code[pc].cloc
	                , "[rwlcoderun-fflush3:%s;%d;%d]"
			, xev->rwm->code[pc].ceptr1, xev->rwm->code[pc].ceint2, l);
	      goto fflushbadexit;
	    }
	    nn = rwlnuminvar(xev, xev->evar+l);
	    /*assert*/
	    if (xev->evar[l].vtype != RWL_TYPE_FILE)
	    {
	      rwlexecsevere(xev, &xev->rwm->code[pc].cloc
	                , "[rwlcoderun-fflush:%s;%s;%d]", xev->evar[l].vname, xev->evar[l].stype, l);
	    }
	    else if (bit(nn->valflags, RWL_VALUE_FILE_OPENR|RWL_VALUE_FILE_OPENW))
	    {
	      if (bit(xev->rwm->mflags, RWL_DEBUG_EXECUTE))
		rwldebug(xev->rwm, "pc=%d executing fflush of %s", pc, xev->evar[l].vname);
	      fflush(nn->vptr);
	    }
	    else
	    {
	      if (!bit(nn->valflags, RWL_VALUE_FILEREPNOTOPEN)) /* only report not open once */
	        rwlexecerror(xev,&xev->rwm->code[pc].cloc
			,RWL_ERROR_WRITE_NOT_OPEN, xev->evar[l].vname);
	      bis(nn->valflags, RWL_VALUE_FILEREPNOTOPEN);
	    }
	    fflushbadexit:
	    pc++;
	  }
	break;

	case RWL_CODE_MODSESP:
	  {
	    sb4 l;
	    ub4 newlo, newhi;
	    if (0>(l = rwlverifyvg(xev, xev->rwm->code[pc].ceptr1, xev->rwm->code[pc].ceint2, codename)))
	    {
	      rwlexecsevere(xev, &xev->rwm->code[pc].cloc
	                , "[rwlcoderun-modsesp:%s;%d;%d]"
			, xev->rwm->code[pc].ceptr1, xev->rwm->code[pc].ceint2, l);
	      goto modsespexit;
	    }
	    rwlexpreval(xev->rwm->code[pc].ceptr3,  &xev->rwm->code[pc].cloc, xev, &xev->xqnum); //lo
	    rwlexpreval(xev->rwm->code[pc].ceptr5,  &xev->rwm->code[pc].cloc, xev, &xev->xqnum2);//hi
	    newlo = rwlcheckminval(xev, &xev->rwm->code[pc].cloc, xev->xqnum.ival
	    	, 0, 0, (text *)"sessionpool min size");
	    newhi = rwlcheckminval(xev, &xev->rwm->code[pc].cloc, xev->xqnum2.ival
	    	, newlo ? newlo : newlo+1, newlo ? newlo : newlo+1, (text *)"sessionpool max size");
	    
	    if (bit(xev->rwm->mflags, RWL_DEBUG_EXECUTE))
	      rwldebug(xev->rwm, "pc=%d executing modsesp %d %d %s", pc
		,  xev->xqnum.ival, xev->xqnum2.ival, xev->evar[l].vname);
	    rwldbmodsesp(xev, &xev->rwm->code[pc].cloc, xev->evar[l].vdata
	      , newlo, newhi);
	  modsespexit:
	    pc++;
	  }
	break;

	case RWL_CODE_MODCCACHE:
	  {
	    sb4 l;
	    ub4 newcc;
	    if (0>(l = rwlverifyvg(xev, xev->rwm->code[pc].ceptr1, xev->rwm->code[pc].ceint2, codename)))
	    {
	      rwlexecsevere(xev, &xev->rwm->code[pc].cloc
	                , "[rwlcoderun-modccache:%s;%d;%d]"
			, xev->rwm->code[pc].ceptr1, xev->rwm->code[pc].ceint2, l);
	      goto modccacheexit;
	    }
	    rwlexpreval(xev->rwm->code[pc].ceptr3,  &xev->rwm->code[pc].cloc, xev, &xev->xqnum); //lo
	    newcc = rwlcheckminval(xev, &xev->rwm->code[pc].cloc, xev->xqnum.ival
	    	, 1, RWL_DEFAULT_STMTCACHE, (text *)"cursorcache");
	    
	    if (bit(xev->rwm->mflags, RWL_DEBUG_EXECUTE))
	      rwldebug(xev->rwm, "pc=%d executing modccache %d %s", pc
		,  xev->xqnum.ival, xev->evar[l].vname);
	    rwldbmodccache(xev, &xev->rwm->code[pc].cloc, xev->evar[l].vdata
	      , newcc);
	  modccacheexit:
	    pc++;
	  }
	break;

	default:
	  rwlexecsevere(xev, &xev->rwm->code[pc].cloc , "[rwlcoderun-unknowncode:%d]",
	                  xev->rwm->code[pc].ctyp);
	  pc++;
	break;


      }
    } 
    // We can stop for several reasons:
    while (! ( rwlstopnow 
  		|| bit(xev->errbits, RWL_ERROR_STOP_BEFORE_RUN)
  		|| bit(xev->tflags, RWL_P_STOPNOW)
  		|| bit(xev->rwm->m3flags, RWL_P3_USEREXIT)
		));

  endprogram:
    if (pproc->vdata)
    {
      // Any local sql we need to flush?
      ub4 pp;
      rwl_localvar *pa = pproc->vdata; // array of local variables
      rwl_sql *sq;

      for (pp=pproc->v2val + 1; pp<pproc->v3val; pp++)
      {
	if (RWL_TYPE_SQL == pa[pp].atype)
	{
	  sq = xev->evar[pa[pp].aguess].vdata;
	  if (sq 
	      && xev->curdb
	      && bit(sq->flags, RWL_SQFLAG_ARRAYB)
	      && sq->aix)
	  {
	    if (bit(xev->rwm->mflags, RWL_DEBUG_EXECUTE))
	      rwldebug(xev->rwm, "flush sql %s %.40s 0x%x %d %d %d", sq->vname, sq->sql, sq->flags, sq->asiz, sq->aix, pp);
	    rwlflushsql2(xev, &xev->rwm->code[pc].cloc, xev->curdb, sq, codename);
	  }
	}
      }
    }
  }
  if (tookses) /* only happens if rwlstopnow was set */
    rwlreleasesession(xev, &xev->rwm->code[pc].cloc, xev->curdb, 0 /*rwl_sql*/);
  xev->start[xev->pcdepth] = pc;  // tell end/return location to calling environment
  return;
}

// Start all threads
void rwlrunthreads(rwl_main *rwm)
{
  rwl_thrinfo *ti;
  ub4 t;
  ub4 v;
  sb4 thnovar;
  ub4 xtotthr;

  if (0==rwm->totthr)
  {
    rwlerror(rwm, RWL_ERROR_TOTTHR_NOT_POSITIVE);
    return;
  }

  if (bit(rwm->m2flags, RWL_P2_NOEXEC))
  {
    rwlerror(rwm, RWL_ERROR_NOEXEC);
    return;
  }

  if (rwm->resdb)
    rwlgetrunnumber(rwm);

  if (bit(rwm->mflags, RWL_P_STATISTICS) && !rwm->resdb)
  {
    rwlerror(rwm, RWL_ERROR_NO_STATS_WITHOUT_RESDB);
    bic(rwm->mflags,  RWL_P_STATISTICS|RWL_P_HISTOGRAMS|RWL_P_PERSECSTAT);
    bic(rwm->m2flags, RWL_P2_OERSTATS);
    bic(rwm->mxq->tflags,  RWL_P_STATISTICS|RWL_P_HISTOGRAMS|RWL_P_PERSECSTAT);
  }

  if (bit(rwm->mflags, RWL_P_PERSECSTAT) && rwm->flushstop)
    xtotthr = rwm->totthr + 1; // for the persec flush thread
  else
    xtotthr = rwm->totthr;

  thnovar = rwlfindvar(rwm->mxq, RWL_THREADNUMBER_VAR, RWL_VAR_NOGUESS);
  if (thnovar < 0)
    rwlsevere(rwm, "[rwlrunthreads-missingvar:%d;%s]", thnovar, RWL_THREADNUMBER_VAR);
  /* allocate and fill/prepare xeqenv's etc */
  rwm->xqa = (rwl_xeqenv *) rwlalloc(rwm, xtotthr*sizeof(rwl_xeqenv));
#ifdef RWL_USE_OCITHR
  if (rwm->thrhp)
    rwlsevere(rwm, "[rwlrunthreads-thrhpalready]");
  if (rwm->thrid)
    rwlsevere(rwm, "[rwlrunthreads-thridalready]");
  rwm->thrid = (OCIThreadId **) rwlalloc(rwm, xtotthr*sizeof(OCIThreadId *));
  rwm->thrhp = (OCIThreadHandle **) rwlalloc(rwm, xtotthr*sizeof(OCIThreadHandle *));
#else
  rwm->xqthrid = (pthread_t *) rwlalloc(rwm, xtotthr*sizeof(pthread_t));
#endif
  rwm->thrbits = (ub1 *) rwlalloc(rwm, xtotthr *sizeof(ub1));
  for (t=0; t<xtotthr; t++)
  {
    ub4 v;
    unsigned short modbits;
    memcpy(rwm->xqa+t, rwm->mxq, sizeof(rwl_xeqenv)); /* copy mains xeqenv */

    // own readline buffer
    rwm->xqa[t].readbuffer = rwlalloc(rwm, rwm->maxreadlen+2);

    /* threads get own database, and other stuff */
    rwm->xqa[t].curdb = 0;
    rwm->xqa[t].oerhead = 0;
    rwm->xqa[t].oertail = 0;
    rwm->xqa[t].oercount = 0;

    /* allocate error handle for thread */
    if (OCI_SUCCESS != (rwm->xqa[t].status=OCIHandleAlloc
        ( rwm->envhp, (void **)&rwm->xqa[t].errhp,
            OCI_HTYPE_ERROR, (size_t)0, (dvoid**)0 )))
      {
	rwlsevere(rwm, "[rwlrunthreads-allocerror:%d]", rwm->xqa[t].status);
      }


    /* change the random seeds
     *
     * Note that if $randseed was used by the user
     * there will still be thread-repeateable random
     * generation
     */

    modbits = (unsigned short)(t+1) & 0xffff; 
    rwm->xqa[t].xsubi[0] ^= modbits;
    modbits = (unsigned short)((t>>15)+1) & 0xffff; 
    rwm->xqa[t].xsubi[1] ^= modbits;
    modbits = (unsigned short)((t>>31)+1) & 0xffff; 
    rwm->xqa[t].xsubi[2] ^= modbits;

    /* clear the return value */
    memset(&rwm->xqa[t].xqnum, 0, sizeof(rwl_value));
    memset(&rwm->xqa[t].xqnum2, 0, sizeof(rwl_value));

    /* allocate and fill array of variables for this thread */
    rwm->xqa[t].evar = (rwl_identifier *)rwlalloc(rwm, rwm->mxq->varcount * sizeof(rwl_identifier));
    bic(rwm->xqa[t].tflags, RWL_P_ISMAIN); 
    for (v=0; v<rwm->mxq->varcount; v++)
    {
      memcpy(rwm->xqa[t].evar+v, rwm->mxq->evar+v, sizeof(rwl_identifier));
      switch (rwm->xqa[t].evar[v].vtype)
      {

	case RWL_TYPE_FILE:
	  // disallow reading from open files in threads
	  if (bit(rwm->xqa[t].evar[v].num.valflags,RWL_VALUE_FILE_OPENR))
	  {
	    rwm->xqa[t].evar[v].num.vptr = rwm->xqa[t].evar[v].num.v2ptr = 0;
	    rwm->xqa[t].evar[v].num.valflags = 0;
	  }
	break;

	case RWL_TYPE_CLOB:
	case RWL_TYPE_NCLOB:
	case RWL_TYPE_BLOB:
	  rwm->xqa[t].evar[v].num.vptr = 0;
	  rwlalloclob(rwm->mxq, &rwm->loc, (OCILobLocator **)&rwm->xqa[t].evar[v].num.vptr);
	break;
	  
        case RWL_TYPE_INT:
	case RWL_TYPE_DBL:
	  /* handle special ones */
	  if (v==(ub4)thnovar)
	  {
	    rwm->xqa[t].evar[v].num.slen = RWL_PFBUF;
	    rwm->xqa[t].evar[v].num.sval = rwlalloc(rwm, RWL_PFBUF);
	    rwm->xqa[t].evar[v].num.vsalloc = RWL_SVALLOC_FIX;
	    rwm->xqa[t].evar[v].num.ival = rwm->xqa[t].thrnum = t+1;
	    rwm->xqa[t].evar[v].num.dval = (double)rwm->xqa[t].evar[v].num.ival;
	    rwm->xqa[t].evar[v].num.isnull = 0;
	    snprintf((char *)rwm->xqa[t].evar[v].num.sval, RWL_PFBUF, rwm->iformat, rwm->xqa[t].evar[v].num.ival);
	  }
	  else if (bit(rwm->xqa[t].evar[v].flags,RWL_IDENT_GLOBAL))
	  {
	    // clean out, we never touch these in globals
	    memset(&rwm->xqa[t].evar[v].num, 0 , sizeof(rwl_value));
	  }
	  else
	  {
	    /* for a number type - if buffer existed, allocate new buffer and copy contents */
	    if (rwm->xqa[t].evar[v].num.slen)
	    {
	      rwm->xqa[t].evar[v].num.sval = rwlalloc(rwm, rwm->xqa[t].evar[v].num.slen);
	      memcpy(rwm->xqa[t].evar[v].num.sval, rwm->mxq->evar[v].num.sval, rwm->xqa[t].evar[v].num.slen);
	      if (bit(rwm->xqa[t].evar[v].flags,RWL_IDENT_THRSUM))
	      {
	        /* sumvar's start with 0 in threads */
	        rwm->xqa[t].evar[v].num.ival = 0;
	        rwm->xqa[t].evar[v].num.dval = 0.0;
		if (rwm->xqa[t].evar[v].vtype==RWL_TYPE_INT)
		  snprintf((char *)rwm->xqa[t].evar[v].num.sval
		    , rwm->xqa[t].evar[v].num.slen
		    , rwm->iformat, rwm->xqa[t].evar[v].num.ival);
		else
		  snprintf((char *)rwm->xqa[t].evar[v].num.sval
		    , rwm->xqa[t].evar[v].num.slen
		    , rwm->dformat, rwm->xqa[t].evar[v].num.dval);
	      }
	    }
	  }
        break;

	case RWL_TYPE_STR:
	  if (bit(rwm->xqa[t].evar[v].flags,RWL_IDENT_GLOBAL))
	  {
	    // clean out, we never touch these in globals
	    memset(&rwm->xqa[t].evar[v].num, 0 , sizeof(rwl_value));
	  }
	  else if (rwm->xqa[t].evar[v].num.slen && rwm->xqa[t].evar[v].num.vsalloc != RWL_SVALLOC_NOT)
	  {
	    /* for a string type - if buffer existed, allocate new buffer and copy contents */
	    rwm->xqa[t].evar[v].num.sval = rwlalloc(rwm, rwm->xqa[t].evar[v].num.slen);
	    memcpy(rwm->xqa[t].evar[v].num.sval, rwm->mxq->evar[v].num.sval, rwm->xqa[t].evar[v].num.slen);
	  }
	break;

	case RWL_TYPE_PROC:
	  {
	    rwl_identifier *myvar = rwm->xqa[t].evar + v;
	    /* clear stats so threads create their own */
	    myvar->stats = 0;
	    // Initialize mutex for use by stats when flushstop
	    // RWL-600 [rwlmutexget-notinit] could occur if the flush thread
	    // would attempt flushing before a worker thread had initialized 
	    // the mutex that was part of stats.  So the fix is to have the 
	    // mutex part of the variable in stead.  There is a small overhead
	    // with this as all relevant variables will have their mutex
	    // even if a particular procedure isn't really called
	    if (!bit(myvar->flags, RWL_IDENT_NOSTATS) && rwm->flushstop)
	    {
		  RWL_SRC_ERROR_FRAME
		    rwlmutexinit(rwm, RWL_SRC_ERROR_LOC
		    , &myvar->var_mutex);
		  RWL_SRC_ERROR_END
	    }
	  }
	  /* fall thru */
	case RWL_TYPE_FUNC:

	    /* copy procedure argument information */
	    if (rwm->mxq->evar[v].v3val &&
	          0!=(rwm->xqa[t].evar[v].vdata = 
	            rwlalloc(rwm, sizeof(rwl_localvar)*rwm->mxq->evar[v].v3val)))
	      memcpy(rwm->xqa[t].evar[v].vdata, rwm->mxq->evar[v].vdata
	        , sizeof(rwl_localvar)*rwm->mxq->evar[v].v3val);
	    else
	      rwm->xqa[t].evar[v].vdata = 0;

	break;

	case RWL_TYPE_DB:
	  {
	    rwl_cinfo *zdb = rwm->xqa[t].evar[v].vdata;
	    /* Threads can call SQL or functions using the at clause
	     * when that particular database actually grabs a connection 
	     * in the thread, e.g. using RWL_CODE_SQLAT.  This is only
	     * possible using real session pools.
	     */
	    switch (zdb->pooltype)
	    {
		case RWL_DBPOOL_RETHRDED:
		case RWL_DBPOOL_DEDICATED:
		  rwm->xqa[t].evar[v].vdata = 0; // cannot use in thread
		break;

		case RWL_DBPOOL_SESSION:
		  {
		    rwl_cinfo *xxdb;
		    // The follwing assert is only valid for session pools
		    if (zdb->svchp) /*ASSERT*/
		      rwlsevere(rwm,"[rwlrunthreads-hassvchp:%s]", zdb->vname);
		    /*FALLTHROUGH*/
		  case RWL_DBPOOL_POOLED:
		    if (bit(zdb->flags, RWL_DB_INUSE)) /*ASSERT*/
		      rwlsevere(rwm,"[rwlrunthreads-poolinuse:%s]", zdb->vname);
		    // allocate new and copy contents
		    xxdb = rwm->xqa[t].evar[v].vdata = rwlalloc(rwm, sizeof(rwl_cinfo));
		    memcpy(rwm->xqa[t].evar[v].vdata, zdb, sizeof(rwl_cinfo));
		    // except cclass that we must strdup
		    if (zdb->cclass)
		      xxdb->cclass = rwlstrdup(rwm, zdb->cclass);
		  }
		break;

		case RWL_DBPOOL_RECONNECT:
		  {
		    rwl_cinfo *xdb;
		    rwm->xqa[t].evar[v].vdata = xdb = (rwl_cinfo *)rwlalloc(rwm, sizeof(rwl_cinfo));

		    xdb->sbmode = zdb->sbmode;
		    xdb->connect = zdb->connect;
		    xdb->conlen = zdb->conlen;
		    xdb->username = zdb->username;
		    xdb->password = zdb->password;
		    xdb->vname = zdb->vname;
		    xdb->pooltext = zdb->pooltext;
		    xdb->pooltype = zdb->pooltype;
		    if (zdb->cclass)
		      xdb->cclass = rwlstrdup(rwm, zdb->cclass); // must be freeable
		    xdb->stmtcache = zdb->stmtcache;
		    rwlstrnncpy(xdb->serverr, zdb->serverr, RWL_DB_SERVERR_LEN);
		    xdb->flags = zdb->flags & RWL_DB_COPY_FLAGS;
		    /*
		     * This is complex.  We really ought to call
		     * rwldbconnect(rwm->xqa+t, &rwm->xqa[t].evar[v].loc, xdb);
		     * here, but we cannot as we are just filling up the evar array for the
		     * thread, and rwldbconnect would have to look up the variable for the db.
		     * Hence, we need another loop just to call rwldbconnect for RECONNECT
		     * A better solution would be to have rwl_cinfo include a field that
		     * is the vnum and then change dbconnect to supply it to rwlfindvar.
		     */

		  }

		break;

		default: // shut up gcc
		break;
	    }
	  }
	break;

	case RWL_TYPE_SQL:
	  {
	    /* copy rwl_sql and make new bindef list */
	    rwl_sql *sq, *sq2;
	    rwl_bindef *bd, *bd2;

	    /* new rwl_sql */
	    sq = rwm->xqa[t].evar[v].vdata;
	    sq2 = (rwl_sql *) rwlalloc(rwm, sizeof(rwl_sql));
	    rwm->xqa[t].evar[v].vdata = sq2;
	  
	    memcpy(sq2, sq, sizeof(rwl_sql));
	    sq2->bindef = 0;

	    if (bit(sq2->flags, RWL_SQFLAG_DYNAMIC)) 
	    {
	      // Dynamic is released in start of threads
	      // so clear sql and id
	      sq2->sqlid = sq2->sql = 0;
	      sq2->sqlidlen = sq2->sqllen = 0;
	    }

	    sq2->outcount = sq2->bincount = sq2->defcount = 0;

	    /* new rwl_bindef list */
	    bd = sq->bindef;
	    while (bd)
	    {
	      // Only copy if static sql   or
	      // the bindef was fixed for dynamic at declare time
	      if (!bit(sq->flags, RWL_SQFLAG_DYNAMIC) 
		  || bit(bd->bdflags, RWL_BDFLAG_FIXED))
	      {
		/* allocate a new and copy */
		bd2 = rwlalloc(rwm, sizeof(rwl_bindef));
		memcpy(bd2, bd, sizeof(rwl_bindef));
		/* clear a few fields */
		bd2->binhp = 0;
		bd2->defhp = 0;
		// set counts
		switch (bd2->bdtyp)
		{
		  case RWL_DEFINE:
		    sq2->defcount++;
		    break;
		  case RWL_BINDOUT_POS:
		  case RWL_BINDOUT_NAME:
		    sq2->outcount++;
		    break;
		  case RWL_BIND_POS:
		  case RWL_BIND_NAME:
		    sq2->bincount++;
		    break;
		}
		/* link in */
		bd2->next = sq2->bindef;
		sq2->bindef = bd2;
	      }

	      bd = bd->next;
	    }

	    if (bit(sq->flags, RWL_SQFLAG_ARRAYB|RWL_SQFLAG_ARRAYD)
	       && !bit(sq->flags, RWL_SQFLAG_DYNAMIC))
	    {
	      /* When array bind is used and static, allocate new
	       *
	       */
	      sq2->abd = 0;
	      sq2->ari = 0;
	      sq2->aix = 0;
	      rwlallocabd(rwm->xqa+t, 0, sq2);
	    }
	  
	  }
	break;


	  /* all others don't need anything */
	default: // prevent gcc warning
	break;
      }
    }
    rwlinitxeqenv(rwm->xqa+t);
  }

  // See comment for RWL_DBPOOL_RECONNECT above for why we need this loop
  for (t=0; t<xtotthr; t++)
  {
    for (v=0; v<rwm->mxq->varcount; v++)
    {
      if (RWL_TYPE_DB == rwm->xqa[t].evar[v].vtype)
      {
	{
	  rwl_cinfo *zdb = rwm->xqa[t].evar[v].vdata;
	  if (zdb && RWL_DBPOOL_RECONNECT == zdb->pooltype)
	  {
	    rwldbconnect(rwm->xqa+t, &rwm->xqa[t].evar[v].loc, zdb);
	  }
	}
      }
    }
  }

  bic(rwm->mflags, RWL_P_ONLYMAINTH); /* write to rwm disallowed */
  ti = rwm->threadlist;
  t=0;
  while (ti)
  {
    rwl_cinfo dummydb; // Just like rwldummyonbad, except dummydb must be on stack
    ub4 i;
    sb4 l, l2;
    /* prepare this group of threads */
    //if (bit(rwm->mflags, RWL_DEBUG_MISC))
    //  rwldebug(rwm, "creating %d threads doing %s", ti->count, ti->pname);

    memset(&dummydb, 0, sizeof(rwl_cinfo));

    /* find the routine to call */
    l = rwlfindvarug(rwm->mxq, ti->pname, &ti->lguess);
    /*assert*/
    if (l<0)
    {
      rwlsevere(rwm,"[rwlrunthreads-badcode:%s]", ti->pname);
      goto aftererror;
    }

    /* and the database
     * see comment for RWL_CODE_SQLHEAD in rwlcoderun()
     */
    l2 = RWL_VAR_NOTFOUND;
    if (ti->dbnam)
    {
      l2 = rwlfindvar(rwm->mxq, ti->dbnam, RWL_VAR_NOGUESS);
      dummydb.vname = ti->dbnam; // make error in rwlcoderun() correct
    }
    else if (rwm->defdb)
      l2 = rwlfindvar(rwm->mxq, rwm->defdb, RWL_VAR_NOGUESS);


    for (i=0; i<ti->count; i++, t++)
    { /* loop through threads doing the same */
      rwl_cinfo *xdb, *mdb;
      
      /* set a database */
      if ( l2<0 
	   || RWL_TYPE_CANCELLED == rwm->mxq->evar[l2].vtype // to avoid RWL-600
	 )
	rwm->xqa[t].dxqdb = rwm->xqa[t].curdb = &dummydb; /* none can be used */
      else
      {
	/* allocate and copy database info to this thread */
	xdb = (rwl_cinfo *) rwlalloc(rwm, sizeof(rwl_cinfo));
	rwm->xqa[t].dxqdb = rwm->xqa[t].curdb = xdb;
	//mdb = rwm->xqa[t].evar[l2].vdata;
	mdb = rwm->mxq->evar[l2].vdata;
	xdb->sbmode = mdb->sbmode;

	switch (mdb->pooltype)
	{
	  case RWL_DBPOOL_POOLED:
	  case RWL_DBPOOL_RECONNECT:
	  case RWL_DBPOOL_DEDICATED:
	  case RWL_DBPOOL_RETHRDED:
	    /* the db in the xeqenv is a copy of the one from mxq
	     * so it has the same connection as main does.
	     * But we want each thread to have its OWN dedicated
	     * connection, so just clear out and reconnect.
	     * Not that due to the for loop above, the connections really
	     * take place one after each other avoiding connection storm,
	     * but there is NO sleep between each.  
	     * This code here is the reason for the need for rwm->adjepoch
	     * which by default is 5 seconds.  Users of rwloadsim SHOULD
	     * make it larger as needed with the -c option
	     *
	     * For DRCP, each thread has an OCISessionPool, which really
	     * isn't a pool, but effectively a pointer to DRCP broker
	     */

	    /* first copy needed fields */
	    xdb->connect = mdb->connect;
	    xdb->conlen = mdb->conlen;
	    xdb->username = mdb->username;
	    xdb->password = mdb->password;
	    xdb->vname = mdb->vname;
	    xdb->pooltext = mdb->pooltext;
	    xdb->pooltype = mdb->pooltype;
	    if (mdb->cclass)
	      xdb->cclass = rwlstrdup(rwm, mdb->cclass);
	    xdb->stmtcache = mdb->stmtcache;
	    rwlstrnncpy(xdb->serverr, mdb->serverr, RWL_DB_SERVERR_LEN);
	    xdb->flags = mdb->flags & RWL_DB_COPY_FLAGS;

	    //if  (RWL_DBPOOL_RECONNECT != mdb->pooltype)
	    rwldbconnect(rwm->xqa+t, &rwm->xqa[t].evar[l].loc, xdb);
	  break;

	  case RWL_DBPOOL_SESSION:
	    /* start with a copy of main */
	    memcpy(xdb, mdb, sizeof(rwl_cinfo));
	    if (mdb->cclass) // must be free able
	      xdb->cclass = rwlstrdup(rwm, mdb->cclass);
	    /* the db should have spool, but not svchp as we 
	     * are going to create our own connections of the existing
	     * pool, so just assert things are as expected 
	     */
	    if (!xdb->spool)
	    {
	      rwlsevere(rwm, "[rwlrunthreads-nopool:%d;%d]",i,t);
	      break;
	    }
	    if (xdb->svchp)
	    {
	      rwlsevere(rwm, "[rwlrunthreads-alreadyconn:%d;%d]",i,t);
	      break;
	    }
	  break;

	  default:
	  break;
	}
      }
      /* where to start */
      rwm->xqa[t].start[0] = rwm->xqa[t].evar[l].vval;
      rwm->xqa[t].xqcname[0] = rwm->xqa[t].evar[l].vname;
      rwllocalsprepare(rwm->xqa+t, rwm->xqa[t].evar+l
	, &rwm->xqa[t].evar[ti->lguess].loc);
      /* GO! */
      if (bit(rwm->mflags, RWL_THR_DTHRSER))
	rwlcoderun(rwm->xqa+t);
      else
	rwlthreadcreate(rwm, t, rwlcoderun);
    }
  aftererror:
    ti = ti->next;
  }

  /*assert*/
  if (t != rwm->totthr)
  {
    rwlsevere(rwm, "[rwlrunthreads-notall:%d;%d]", t, rwm->totthr);
  }

  // start a persec flush thread
  // Note that t now is rwm->totthr so it will point
  // to the extra entry added to xqa
  if (rwm->flushstop && !bit(rwm->mflags, RWL_THR_DTHRSER))
  {
    rwl_cinfo dummydb;
    memset(&dummydb, 0, sizeof(rwl_cinfo));
    // flush never uses normal db, only resdb
    rwm->xqa[t].dxqdb = rwm->xqa[t].curdb = &dummydb; 

    rwlthreadcreate(rwm, t, rwlflushrun);
  }

  /* Wait for threads 
   * loop like above where we started the threads
   */
  ti = rwm->threadlist;
  t=0;
  while (ti)
  {
    ub4 i;

    for (i=0; i<ti->count; i++, t++)
    { 
      if (!bit(rwm->mflags,RWL_THR_DTHRSER))
	rwlthreadawait(rwm, t);
      // ti->lguess is correct here, no need for findvar
      rwllocalsrelease(rwm->xqa+t, rwm->xqa[t].evar+ti->lguess 
	, &rwm->xqa[t].evar[ti->lguess].loc);
    }
    ti = ti->next;
  }

  if (rwm->flushstop && !bit(rwm->mflags, RWL_THR_DTHRSER))
  {
    if (t != rwm->totthr)
    {
      rwlsevere(rwm, "[rwlrunthreads-notall2:%d;%d]", t, rwm->totthr);
    }
    rwlthreadawait(rwm, t);
  }

  /* all threads have completed now */
  bis(rwm->mflags, RWL_P_ONLYMAINTH); /* write to rwm allowed */

  /* run through to get max stats sizes */
  for (t=0; t<rwm->totthr; t++)
  {
    for (v=0; v<rwm->mxq->varcount; v++)
    {
      switch (rwm->xqa[t].evar[v].vtype)
      {
	case RWL_TYPE_PROC:
	  {
	    rwl_stats *ms, *ts;
	    /* code can have statistics */
	    if (bit(rwm->mflags, RWL_P_STATISTICS) 
		&& !bit(rwm->xqa[t].evar[v].flags, RWL_IDENT_NOSTATS) &&
		(ts = rwm->xqa[t].evar[v].stats))
	    {
	      if (!rwm->mxq->evar[v].stats)
	      {
		/* allocate in main if not already done */
		rwm->mxq->evar[v].stats = rwlalloc(rwm
		  , sizeof(rwl_stats) + 
		    (bit(rwm->mflags, RWL_P_HISTOGRAMS)
		      ? rwm->histbucks*sizeof(rwl_histogram) 
		      : 0));

		/* We cannot allocate the persec array here
		 * as it could be the case that some threads have it
		 * slightly loner than others, so at this time
		 * just find it largest pssize needed by any thread
		 * and allocate persec array in the next loop
		 */
	      }
	      ms = rwm->mxq->evar[v].stats;
	      /* make main pssize big enough */
	      if (ts->pssize > ms->pssize)
	      {
		ms->pssize = ts->pssize;
	      }
	    }
	  }
	break;

	default: // prevent gcc warning
	break;
      }
    } /* for var */
  }

  // ORA- stats flush and free
  for (t=0; t<rwm->totthr; t++)
  {
    rwl_oerstat *ost;

    if (rwm->xqa[t].oerhead)
      rwloerflush(rwm->xqa+t );

    while (rwm->xqa[t].oerhead)
    {
      ost = rwm->xqa[t].oerhead;
      rwm->xqa[t].oerhead = rwm->xqa[t].oerhead->nxtoes;
      rwlfree(rwm, ost);
    }
    rwm->xqa[t].oertail = 0;

  }

  /* disconnect, stats sum, cleanup, etc */
  for (t=0; t<rwm->totthr; t++)
  {
    rwl_cinfo *xdb;
    rwm->mxq->errbits |= rwm->xqa[t].errbits;
    xdb = rwm->xqa[t].dxqdb;
    switch (xdb->pooltype)
    {
      case RWL_DBPOOL_DEDICATED:
      case RWL_DBPOOL_RETHRDED:
	 /* log off
	 */
	rwldbdisconnect(rwm->xqa+t, 0, xdb);
	/*FALLTHROUGH*/
      case RWL_DBPOOL_RECONNECT:
	xdb->svchp = 0; 
	xdb->seshp = 0; 
      break;

      case RWL_DBPOOL_SESSION:
	/* verify session was released */
	if (xdb->svchp)
	  rwlsevere(rwm, "[rwlrunthreads-notreleased:%d]", t);
      break;

      case RWL_DBPOOL_POOLED:
	/* verify session released and then disconnect from pool */
	if (xdb->svchp)
	  rwlsevere(rwm, "[rwlrunthreads-notreleased2:%d]", t);
	rwldbdisconnect(rwm->xqa+t, 0, xdb);
	xdb->seshp = 0; 
      break;

      default:
      break;
	
    }
    if (xdb && xdb->pooltype) /* if exist and not the dummydb */
    {
      if (xdb->cclass)
        rwlfree(rwm, xdb->cclass);
      rwlfree(rwm, xdb);
    }


    for (v=0; v<rwm->mxq->varcount; v++)
    {
      rwl_identifier *vv = rwm->xqa[t].evar+v;
      switch (vv->vtype)
      {
	case RWL_TYPE_FILE:
	  if  (   bit(vv->num.valflags,RWL_VALUE_FILE_OPENW|RWL_VALUE_FILE_OPENR) 
	       && !bit(vv->num.valflags,RWL_VALUE_FILEOPENMAIN) 
	       && !bit(vv->flags, RWL_IDENT_INTERNAL)
	      )
	  {
	    rwlexecerror(rwm->mxq, &rwm->loc, RWL_ERROR_FILE_WILL_CLOSE, vv->vname);
	    if (bit(vv->num.valflags,RWL_VALUE_FILEISPIPE))
	      pclose(vv->num.vptr);
	    else
	    {
	      fclose(vv->num.vptr);
	      rwlfree(rwm,vv->num.v2ptr);
	    }
	  }
	break;
	case RWL_TYPE_CLOB:
	case RWL_TYPE_NCLOB:
	case RWL_TYPE_BLOB:
	  rwlfreelob(rwm->mxq, &rwm->loc, (OCILobLocator *)vv->num.vptr);
	  vv->num.vptr = 0;
	break;
	  
	case RWL_TYPE_INT:
	case RWL_TYPE_DBL:
	  /* for a number type - free fixed buffer */
	  rwlfree(rwm, vv->num.sval);
	  if (bit(vv->flags,RWL_IDENT_THRSUM))
	  {
	    /* sumvar's add values to main */
	    rwm->mxq->evar[v].num.ival += vv->num.ival;
	    rwm->mxq->evar[v].num.dval += vv->num.dval;
	  }
	break;

	case RWL_TYPE_STR:
	  /* for a string - free if it was allocated during exec */
	  if (vv->num.vsalloc == RWL_SVALLOC_TEMP
	      || vv->num.vsalloc == RWL_SVALLOC_FIX)
	    rwlfree(rwm, vv->num.sval);
	break;

	case RWL_TYPE_PROC:
	  {
	    rwl_stats *ms, *ts;
	    /* code can have statistics */
	    if (bit(rwm->mflags, RWL_P_STATISTICS) 
	       && !bit(vv->flags, RWL_IDENT_NOSTATS) )
	    {
	      if ((ts = vv->stats)) // if actually allocated
	      {
		ub4 h;
		ms = rwm->mxq->evar[v].stats;
		if (!ms) /*assert*/
		{
		  /* it shouldhave been allocated above */
		  rwlsevere(rwm, "[rwlrunthreads-statsnotalloc:%d;%d]", t, v);
		}
		else
		{
		  /* add the values */
		  ms->time0 += ts->time0;
		  ms->time1 += ts->time1;
		  ms->time2 += ts->time2;
		  ms->count += ts->count;
		  ms->tcount++;

		  /* if histograms are gathered, add them */
		  if (bit(rwm->mflags, RWL_P_HISTOGRAMS))
		    for (h=0; h<rwm->histbucks; h++)
		    {
		      ms->hist[h].count += ts->hist[h].count;
		      ms->hist[h].ttime += ts->hist[h].ttime;
		    }

		  if (ms->pssize)
		  { /* if there are per second counters */
		    if (!ms->persec)
		    {
		      /* allocate array if not yet done */
		      ms->persec = rwlalloc(rwm
			  , ms->pssize * sizeof(*ms->persec));
		    }
		    if (!ms->wtimsum)
		    {
		      /* allocate array if not yet done */
		      ms->wtimsum = rwlalloc(rwm
			  , ms->pssize * sizeof(*ms->wtimsum));
		    }
		    if (!ms->etimsum)
		    {
		      /* allocate array if not yet done */
		      ms->etimsum = rwlalloc(rwm
			  , ms->pssize * sizeof(*ms->etimsum));
		    }
		    for (h=0; h<ts->pssize; h++)
		    {
		      ms->persec[h] += ts->persec[h];
		      ms->wtimsum[h] += ts->wtimsum[h];
		      ms->etimsum[h] += ts->etimsum[h];
		    }
		  }
		}
		/* free threads persec and stats */
		if (ts->persec) 
		{
		  rwlfree(rwm, ts->persec);
		}
		if (ts->wtimsum) 
		{
		  rwlfree(rwm, ts->wtimsum);
		}
		if (ts->etimsum) 
		{
		  rwlfree(rwm, ts->etimsum);
		}
		rwlfree(rwm, ts);
		vv->stats = 0;
		if (vv->vdata)
		  rwlfree(rwm, vv->vdata);
	      }
	      // Free the mutex
	      RWL_SRC_ERROR_FRAME
	      if (rwm->flushstop)
		rwlmutexdestroy(rwm, RWL_SRC_ERROR_LOC
		, &vv->var_mutex);
	      RWL_SRC_ERROR_END
	      vv->var_mutex = 0;
	    }
	  }
	break;

	case RWL_TYPE_SQL:
	  {
	    rwl_sql *sq2;
	    rwl_bindef *bd2;
	    sq2 = vv->vdata;
	    if (bit(sq2->flags, RWL_SQFLAG_ARRAYB|RWL_SQFLAG_ARRAYD)
		 && !bit(sq2->flags, RWL_SQFLAG_DYNAMIC))
	    {
	      /* If we had own copy of rwl_sql with array
	       * bind or define structures, free both
	       */
	      rwlfreeabd(rwm->xqa+t, 0, sq2);
	    }
	    /* walk through bindef's and free */
	    bd2 = sq2->bindef;
	    while (bd2)
	    {
	      rwl_bindef *sav = bd2;
	      if (bit(bd2->bdflags, RWL_BDFLAG_BNALLOC))
	      {
		rwlfree(rwm, bd2->bname);
	      }

	      bd2 = bd2->next;
	      rwlfree(rwm, sav);
	    }
	      

	    rwlfree(rwm, sq2);
	    vv->vdata = 0;
	  }
	break;

	case RWL_TYPE_DB:
	  {
	    rwl_cinfo *zdb = vv->vdata;
	    if (zdb) switch(zdb->pooltype)
	    {
	      case RWL_DBPOOL_SESSION:
		if (zdb->svchp) /*ASSERT*/
		  rwlsevere(rwm,"[rwlrunthreads-releasehassvchp:%s]", zdb->vname);
	      /*FALLTHROUGH*/
	      case RWL_DBPOOL_RECONNECT:
		if (bit(zdb->flags, RWL_DB_INUSE)) /*ASSERT*/
		  rwlsevere(rwm,"[rwlrunthreads-releasepoolinuse:%s]", zdb->vname);
		if (zdb->cclass)
		  rwlfree(rwm, zdb->cclass);
		rwlfree(rwm, zdb);
		vv->vdata = 0;
	      break;

	      default:
	      break;
	    }
	  }
	break;

	  /* all others don't need anything */
	default: // prevent gcc warning
	break;
      }
    }

    /* free error handle */
    (void) OCIHandleFree(rwm->xqa[t].errhp, OCI_HTYPE_ERROR);

    if (  RWL_SVALLOC_NOT != rwm->xqa[t].xqnum.vsalloc
       && RWL_SVALLOC_CONST != rwm->xqa[t].xqnum.vsalloc
       )
      rwlfree(rwm, rwm->xqa[t].xqnum.sval);
    if (  RWL_SVALLOC_NOT != rwm->xqa[t].xqnum2.vsalloc
       && RWL_SVALLOC_CONST != rwm->xqa[t].xqnum2.vsalloc
       )
      rwlfree(rwm, rwm->xqa[t].xqnum2.sval);
    rwlfree(rwm, rwm->xqa[t].evar);
    rwm->xqa[t].evar = 0;

    rwlfree(rwm, rwm->xqa[t].readbuffer);
    rwm->xqa[t].readbuffer = 0;
  }

  /* at this point, we are done processing threads
   * and have free all allocated space for them
   */

  for (v=0; v<rwm->mxq->varcount; v++)
  {
    switch (rwm->mxq->evar[v].vtype)
    {
      case RWL_TYPE_INT:
      case RWL_TYPE_DBL:
	if (bit(rwm->mxq->evar[v].flags,RWL_IDENT_THRSUM))
	{ /* handle the string representation of the sum vars */
	  if (rwm->mxq->evar[v].vtype==RWL_TYPE_INT)
	    snprintf((char *)rwm->mxq->evar[v].num.sval
	      , rwm->mxq->evar[v].num.slen
	      , rwm->iformat, rwm->mxq->evar[v].num.ival);
	  else
	    snprintf((char *)rwm->mxq->evar[v].num.sval
	      , rwm->mxq->evar[v].num.slen
	      , rwm->dformat, rwm->mxq->evar[v].num.dval);
	}
      break;

      case RWL_TYPE_PROC:
	if (!bit(rwm->mxq->evar[v].flags,RWL_IDENT_NOSTATS) 
	      && rwm->mxq->evar[v].stats
	      && !rwlstopnow)
	{
	  /* flush statistics */
	  rwlstatsflush(rwm, rwm->mxq->evar[v].stats, rwm->mxq->evar[v].vname);
	  if (rwm->mxq->evar[v].stats->persec)
	    rwlfree(rwm, rwm->mxq->evar[v].stats->persec);
	  if (rwm->mxq->evar[v].stats->wtimsum)
	    rwlfree(rwm, rwm->mxq->evar[v].stats->wtimsum);
	  if (rwm->mxq->evar[v].stats->etimsum)
	    rwlfree(rwm, rwm->mxq->evar[v].stats->etimsum);
	  rwlfree(rwm, rwm->mxq->evar[v].stats);
	  rwm->mxq->evar[v].stats = 0;
	}
      break;

      default: // prevent gcc warning
      break;
    }

  }

  rwlfree(rwm, rwm->xqa); rwm->xqa = 0;
  rwlfree(rwm, rwm->thrbits); rwm->thrbits = 0;
#ifdef RWL_USE_OCITHR
  rwlfree(rwm, rwm->thrid); rwm->thrid = 0;
  rwlfree(rwm, rwm->thrhp); rwm->thrhp = 0;
#else
  rwlfree(rwm, rwm->xqthrid); rwm->xqthrid = 0;
#endif


}

void rwllocalsprepare(rwl_xeqenv *xev
, rwl_identifier *pproc
, rwl_location *loc)
{
  ub4 pp;
  sb4 va;
  rwl_localvar *pa;
  rwl_value *nn;

  /*ASSERT this is a procedure*/
  if (pproc->vtype != RWL_TYPE_PROC)
  {
    rwlexecsevere(xev, loc, "[rwllocalsprepare-notproc:%s;%s]"
      , pproc->vname
      , pproc->stype);
    return;
  }

  /*ASSERT no arguments*/
  if (pproc->v2val > 0)
  {
    rwlexecsevere(xev, loc, "[rwllocalsprepare-hasargs:%s;%d;%d]"
      , pproc->vname , pproc->v2val, pproc->v3val);
    return;
  }

  /*ASSERT locals don't already exist */
  if (xev->locals[xev->pcdepth])
  {
    rwlexecsevere(xev, loc, "[rwllocalsprepare-localsfound:%s;%d;%d]"
      , pproc->vname , pproc->v2val, pproc->v3val);
    return;
  }

  if (pproc->v3val <=1) // only return value, which isn't used in procedures
    return;

  pa = pproc->vdata; /* array of local variable names and guesses */

  /* allocate array of local variables */
  xev->locals[xev->pcdepth] =
    (rwl_value *) rwlalloc(xev->rwm,pproc->v3val * sizeof(rwl_value));

  /* initialize local variables (entry 0 is the unused return value) */
  for (pp=1; pp<pproc->v3val; pp++)
  {
    va = rwllocalvar(xev, pa[pp].aname, &pa[pp].aguess, pproc);
    /*ASSERT*/
    if (pp!=(ub4)va)
    {
      if (pp)
	rwlexecsevere(xev, loc, "[rwllocalsprepare-nolocalvar:%d;%d;%s;%s]"
	  , pp, va, pa[pp].aname, pproc->vname);
    }
    else
    {
      // nn points to the entry in locals[depth][]
      // set fields
      nn = xev->locals[xev->pcdepth]+va;
      nn->vtype = pa[pp].atype; // xev->evar[pa[pp].aguess].num.vtype;
      switch (nn->vtype)
      {
	case RWL_TYPE_SQL:
	  {
	    // clean out local dynamic SQL
	    rwl_sql *sq = xev->evar[pa[pp].aguess].vdata;
	    if (bit(sq->flags, RWL_SQFLAG_DYNAMIC))
	      rwldynsrelease(xev, loc, sq, pproc->pname);
	  }
	  break;

	case RWL_TYPE_BLOB:
	case RWL_TYPE_CLOB:
	  rwlalloclob(xev, loc, (OCILobLocator **)&nn->vptr);
	break;

	case RWL_TYPE_STR:
	  nn->slen = xev->evar[pa[pp].aguess].num.slen;
	  nn->vsalloc = RWL_SVALLOC_NOT;
	  nn->isnull = 0;
	  rwlinitstrvar(xev, nn);
	break;

	case RWL_TYPE_INT:
	case RWL_TYPE_DBL:
	  nn->ival = 0;
	  nn->dval = 0.0;
	  nn->isnull = RWL_ISNULL;
	  nn->slen = RWL_PFBUF;
	  nn->sval = rwlalloc(xev->rwm, RWL_PFBUF);
	  nn->vsalloc = RWL_SVALLOC_FIX;
	break;
      }
    }
  } /* for pp over all locals */
}

void rwllocalsrelease(rwl_xeqenv *xev
, rwl_identifier *pproc
, rwl_location *loc)
{
  ub4 pp;
  rwl_value *nn;
  rwl_localvar *pa;

  /*ASSERT this is a procedure*/
  if (pproc->vtype != RWL_TYPE_PROC)
  {
    rwlexecsevere(xev, loc, "[rwllocalsrelease-notproc:%s;%s]"
      , pproc->vname
      , pproc->stype);
    return;
  }

  /*ASSERT no arguments*/
  if (pproc->v2val > 0)
  {
    rwlexecsevere(xev, loc, "[rwllocalsrelease-hasargs:%s;%d;%d]"
      , pproc->vname , pproc->v2val, pproc->v3val);
    return;
  }

  if (pproc->v3val <=1) // only return value, which isn't used in procedures
    return;

  /*ASSERT locals are allocated */
  if (!xev->locals[xev->pcdepth])
  {
    rwlexecsevere(xev, loc, "[rwllocalsrelease-nolocals:%s;%d;%d]"
      , pproc->vname , pproc->v2val, pproc->v3val);
    return;
  }

  pa = pproc->vdata; /* array of local variable names and guesses */

  /* and free allocations */
  for (pp=1; pp<pproc->v3val; pp++)
  {
    nn = xev->locals[xev->pcdepth]+pp;

    switch(pa[pp].atype)
    {
      case RWL_TYPE_FILE:
	if  (bit(nn->valflags,RWL_VALUE_FILE_OPENW|RWL_VALUE_FILE_OPENR))
	{
	  rwlexecerror(xev, loc, RWL_ERROR_FILE_WILL_CLOSE, pa[pp].aname);
	  if (bit(nn->valflags,RWL_VALUE_FILEISPIPE))
	    pclose(nn->vptr);
	  else
	  {
	    fclose(nn->vptr);
	    if (nn->v2ptr)
	      rwlfree(xev->rwm,nn->v2ptr);
	  }
	}
      break;

      case RWL_TYPE_BLOB:
      case RWL_TYPE_CLOB:
	if (nn->vptr)
	{
	  rwlfreelob(xev, loc, (OCILobLocator *)nn->vptr);
	  nn->vptr = 0;
	}
      break;

      case RWL_TYPE_INT:
      case RWL_TYPE_STR:
      case RWL_TYPE_DBL:
      {
	switch (nn->vsalloc)
	{
	  case RWL_SVALLOC_FIX:
	  case RWL_SVALLOC_TEMP:
	    rwlfree(xev->rwm, nn->sval);
	  default: // prevent gcc warning about missing enum in switch
	  break;
	}
      }
      break;

      default: // prevent gcc warning
      break;
    }
  }
  rwlfree(xev->rwm, xev->locals[xev->pcdepth]);
  xev->locals[xev->pcdepth] = 0; // so ASSERT in rwllocalsprepare works
}

// Call a routine that was generated in main for anything
// using a statementlist (e.g. if/then/else)
void rwlcodecall(rwl_main *rwm)
{
  rwl_thrinfo *next;

  if (!bit(rwm->mflags, RWL_P_DXEQMAIN)) /*ASSERT*/
  {
    rwlsevere(rwm,  "[rwlcodecall-notmain:%s]"
    , rwm->codename ? rwm->codename : (text *)"not-set");
  }
  else
  {
    sb4 l = rwm->codeguess;
    text *cname = rwm->codename;
    rwlcodetail(rwm); // finish the generation, clears rwm->codename
    if (bit(rwm->mxq->errbits, RWL_ERROR_STOP_BEFORE_RUN)) // if not good
      rwlerror(rwm, RWL_ERROR_DONTEXECUTE);
    else
    {
      rwm->mxq->erloc[rwm->mxq->pcdepth] = &rwm->loc;
      if (++rwm->mxq->pcdepth >= RWL_MAX_CODE_RECURSION)
	rwlsevere(rwm, "[rwlcodecall-depth2:%d;%s]", rwm->mxq->pcdepth, cname);
      else
      {
	if (bit(rwm->m2flags, RWL_P2_AT))
	  rwldummyonbad(rwm->mxq, rwm->ccdbname);
	else
	  rwldummyonbad(rwm->mxq, rwm->defdb);
	if (bit(rwm->mflags, RWL_DEBUG_EXECUTE))
	{
	  if (bit(rwm->m2flags, RWL_P2_AT) &&  rwm->ccdbname)
	    rwldebug(rwm, "executing generated subroutine %s %d %s"
	      , cname, l, rwm->ccdbname);
	  else
	    rwldebug(rwm, "executing generated subroutine %s %d without database"
	      , cname, l);
	}

	rwm->mxq->start[rwm->mxq->pcdepth] = rwm->mxq->evar[l].vval;
	rwm->mxq->xqcname[rwm->mxq->pcdepth] = cname;
	rwllocalsprepare(rwm->mxq, rwm->mxq->evar+l, &rwm->code[rwm->mxq->evar[l].vval].cloc);
	rwlcoderun(rwm->mxq);
	rwllocalsrelease(rwm->mxq, rwm->mxq->evar+l, &rwm->loc);
      }
      --rwm->mxq->pcdepth;
      rwm->mxq->erloc[rwm->mxq->pcdepth] = 0;
    }
    /* cleanup */
    rwm->mythr = rwm->threadlist;
    while (rwm->mythr)
    {
      next = rwm->mythr->next;
      rwlfree(rwm, rwm->mythr);
      rwm->mythr = next;
    }
    rwm->threadlist = rwm->mythr = 0;
    rwm->loc.errlin = 0;
  }
}

rwlcomp(rwlcoderun_c, RWL_GCCFLAGS)
