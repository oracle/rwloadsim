/*
 * RWP*Load Simulator
 *
 * Copyright (c) 2023 Oracle Corporation
 * Licensed under the Universal Permissive License v 1.0
 * as shown at https://oss.oracle.com/licenses/upl/
 *
 * Real World performance Load simulator SQL (database)
 *
 * rwlsql.c
 *
 * History
 *
 * bengsig  15-mar-2024 - Also sqllogging after error
 * bengsig  13-mar-2024 - Save sql_id rather than a pointer to it
 * bengsig   7-mar-2024 - a few lob changes
 * johnkenn 06-mar-2024 - write lob with offset
 * bengsig   5-mar-2024 - a/d time for ociping
 * bengsig   4-mar-2024 - atime, dtime
 * bengsig  19-feb-2024 - Windows read password
 * bengsig  14-feb-2024 - remove typeof
 * bengsig  12-feb-2024 - \r\n on Windows
 * bengsig  30-jan-2024 - All includes in rwl.h
 * johnkenn 18-dec-2023 - Stream with length and offset from lob locator
 * bengsig   4-oct-2023 - Only set cclass on sessionpool if explict
 * bengsig   4-oct-2023 - Don't drop session after banner print with session pool
 * bengsig  27-sep-2023 - 24496 is possible with session pool timeout
 * bengsig  26-sep-2023 - Check OCI_ATTR_PARSE_ERROR_OFFSET at more potential places
 * bengsig  22-sep-2023 - ampersand needs thread local sql
 * bengsig  21-sep-2023 - $errordetail:on directive
 * bengsig  21-sep-2023 - 23 returns 0000000000000 for sqlid when ddl
 * bengsig  20-sep-2023 - RWL_WORKAROUND_34952567 no longer needed
 * bengsig  14-sep-2023 - proper error stack when commit does flush
 * bengsig  13-sep-2023 - ampersand replacement
 * bengsig  11-sep-2023 - 24457/24459 are both possible with session pool timeout
 * bengsig   6-sep-2023 - sql logging
 * bengsig  28-aug-2023 - OCI_ATTR_PARAM_COUNT must be done in 11.2
 * bengsig  10-aug-2023 - session pool timeout then action
 * bengsig   3-may-2023 - Memory leak with dynamic and dml
 * bengsig  21-mar-2023 - Banner shows connection pool in use
 * bengsig   1-mar-2023 - Optimize snprintf [id]format
 * bengsig   8-feb-2023 - Fix ORA-24374 with arraysize of 1
 * bengsig   3-feb-2023 - No OCI_ATTR_TRANSACTION_IN_PROGRESS in 11.2
 * bengsig  26-jan-2023 - Check OCI_ATTR_TRANSACTION_IN_PROGRESS
 * bengsig  11-jan-2023 - CQN Project
 * bengsig   9-jan-2023 - Bug 34952567 workaround
 * bengsig   6-jan-2023 - No URL error text in 23
 * bengsig   3-nov-2022 - Harden code with rwl_type throughout
 * bengsig  18-oct-2022 - threads global variables
 * bengsig  12-oct-2022 - session leak
 * bengsig  11-jul-2022 - $sessionpool_no_rlb directive
 * bengsig  28-jun-2022 - Generate project
 * bengsig  17-may-2022 - call is SQL, not PL/SQL
 * bengsig  16-may-2022 - Flush local sql upon exit
 * bengsig  12-may-2022 - connect as sysdba etc
 * bengsig  04-may-2022 - Don't repeat duplicate bind 
 * bengsig  28-apr-2022 - Add external credentials
 * bengsig  19-apr-2022 - Embedded sql concatenation is dynamic
 * bengsig  03-apr-2022 - Emedded sql
 * bengsig  31-mar-2022 - Main has default database if dedicated
 * bengsig  01-mar-2022 - Implicit bind with array DML
 * bengsig  21-feb-2022 - Implicit bind and define
 * bengsig   9-feb-2021 - Fix NULL return in define/bindout
 * bengsig  12-jan-2021 - Improve ORA-28002 handling
 * bengsig  11-jan-2021 - Add fname to oerstats when no sql
 * bengsig  25-nov-2021 - poolmin/max changes
 * bengsig  24-nov-2021 - $dbfailures directive
 * bengsig  23-nov-2021 - Always use svchp to get server release
 * bengsig  21-oct-2021 - Make event notification more precise
 * bengsig  13-aug-2021 - Add break
 * bengsig  06-aug-2021 - Fix bug with return from inside cursor
 * bengsig  15-jun-2021 - Add --default-threads-dedicated option
 * bengsig  10-jun-2021 - Check various min values
 * bengsig  09-jun-2021 - Add modify database cursorcache/sessionpool
 * bengsig  22-apr-2021 - Do not get serverrelease if bouncing
 * bengsig  18-mar-2021 - Fix rwl-600 when resdb fails
 * bengsig  08-mar-2021 - Add cursor leak
 * bengsig  03-mar-2021 - Only set connection class in authp when changed
 * bengsig  27-jan-2021 - connectionclass
 * bengsig  20-jan-2021 - connectionpool
 * bengsig  23-dec-2020 - 11.2 on Solaris
 * bengsig  21-dec-2020 - parfait
 * bengsig  18-nov-2020 - more /oFALLTHROUGHo/ 
 * bengsig  14-oct-2020 - fix bind raw bug
 * bengsig  07-oct-2020 - Completely remove dysfunctional sharding code
 * bengsig  03-sep-2020 - add /oFALLTHROUGHo/ to shut up gcc
 * bengsig  31-aug-2020 - Bouncing (dedicated, dead) database
 * bengsig  16-jun-2020 - Fix core dump when database does not connect
 * bengsig  18-may-2020 - Fix RWL-600 after 28002 error on session pool
 * bengsig  30-mar-2020 - Dynamic SQL changes
 * bengsig  12-mar-2020 - statemark
 * bengsig  06-mar-2020 - active/open sessioncount
 * bengsig  21-feb-2020 - Add support for dedicated requestmark database
 * bengsig  21-feb-2020 - Fix ociping to really do OCIPing ...
 * bengsig  19-feb-2020 - Fix rwlfinishoci 
 * bengsig  19-dec-2019 - Fix DRCP bounce in main
 * bengsig  18-nov-2019 - Don't call OCISesionPoolDestroy if we have sent OCIBreak
 * bengsig  24-oct-2019 - Passing cclass with drcp requires strlen
 * bengsig  14-oct-2019 - Correct release of DRCP 
 * bengsig  12-aug-2019 - added oerstats
 * bengsig  21-jun-2019 - leak: call rwlfree in rwldbevent
 * bengsig  11-jun-2019 - array define
 * bengsig  27-feb-2019 - Added "and expresseion" to cursor loops
 * bengsig  13-feb-2019 - added persec contineous flush
 * bengsig  07-feb-2019 - exit if DEAD after recursive call
 * bengsig  06-feb-2019 - ping
 * bengsig  10-may-2017 - Creation
 */
#include "rwl.h"

void rwldbconnect(rwl_xeqenv *xev, rwl_location *cloc, rwl_cinfo *db)
{
  sb4 vno;
  sb4 ocires;
  ub4 myses = 0;
  ub4 maxdead = xev->rwm->dbfailures;

  /*assert*/
  if ((vno = rwlfindvar(xev, db->vname, RWL_VAR_NOGUESS))<0)
  {
    rwlexecsevere(xev, cloc, "[rwldbconnect-findvar:%s;%d]", db->vname, vno);
    return;
  }
    
  if (bit(xev->rwm->m2flags, RWL_P2_NOEXEC))
  {
    rwlerror(xev->rwm, RWL_ERROR_NOEXEC);
    return;
  }

  if (bit(xev->tflags, RWL_THR_DSQL))
  {
    rwldebugcode(xev->rwm,cloc,"connect %s@%*s %s %d stmc %d flg 0x%x", db->username
       , db->conlen,db->connect
       , db->pooltext, db->pooltype, db->stmtcache, db->flags);
  }

  /* check resultsdb is not threads dedicated */
  if (bit(db->flags, RWL_DB_RESULTS) && RWL_DBPOOL_RETHRDED == db->pooltype)
  {
    rwlexecerror(xev, cloc, RWL_ERROR_RESULTSDB_NOT_THRDEC, db->vname);
    bic(db->flags, RWL_DB_RESULTS); // prevent RWL-600 in rwlensureresdb
    db->svchp = 0; db->seshp = 0;
    xev->evar[vno].vtype = RWL_TYPE_CANCELLED;
    xev->evar[vno].stype = "cancelled (db)";
    /* cannot gather stats etc withot results db */
    bic(xev->tflags, RWL_P_STATISTICS|RWL_P_HISTOGRAMS|RWL_P_PERSECSTAT);
    if (bit(xev->tflags, RWL_P_ISMAIN))
    {
      xev->rwm->resdb = 0;
      bic(xev->rwm->mflags, RWL_P_STATISTICS|RWL_P_HISTOGRAMS|RWL_P_PERSECSTAT);
    }
    return;
  }

  while (1) // break out when everything is good or maxdead exhausted 
  {
    /* Connect or create pool via OCI */
    switch (db->pooltype)
    {
      case RWL_DBPOOL_RECONNECT:
      case RWL_DBPOOL_DEDICATED:
      case RWL_DBPOOL_RETHRDED:


	if (OCI_SUCCESS!=(xev->status=OCIHandleAlloc( xev->rwm->envhp, (void **)&db->srvhp,
		      OCI_HTYPE_SERVER, (size_t)0, (dvoid**)0 )))
	{
	  rwlexecsevere(xev, cloc, "[rwldbconnect-allocserver:%s;%d]", db->vname, xev->status);
	  goto cleanupandcanceldb;
	}
	if (OCI_SUCCESS != (xev->status=OCIServerAttach( db->srvhp, xev->errhp, db->connect,
				(sb4) db->conlen
				, (bit(db->flags,RWL_DB_USECPOOL) ? OCI_CPOOL: OCI_DEFAULT) )))
	  goto handledberror;
	if (OCI_SUCCESS!=(xev->status=OCIHandleAlloc( xev->rwm->envhp, (void **)&db->seshp,
			    OCI_HTYPE_SESSION, (size_t)0, (dvoid**)0 )))
	{
	  rwlexecsevere(xev, cloc, "[rwldbconnect-allocsession:%s;%d]", db->vname, xev->status);
	  goto cleanupandcanceldb;
	}
	if (OCI_SUCCESS!=(xev->status=OCIHandleAlloc( xev->rwm->envhp, (void **)&db->svchp,
			      OCI_HTYPE_SVCCTX, (size_t)0, (dvoid**)0 )))
	{
	  rwlexecsevere(xev, cloc, "[rwldbconnect-allocsvtctx:%s;%d]", db->vname, xev->status);
	  goto cleanupandcanceldb;
	}
	if (   (OCI_SUCCESS!=(xev->status=OCIAttrSet( db->svchp, OCI_HTYPE_SVCCTX, db->srvhp,
			    0, OCI_ATTR_SERVER, xev->errhp )))
	  || (OCI_SUCCESS!=(xev->status=OCIAttrSet( db->seshp, OCI_HTYPE_SESSION,
			    db->username, (ub4)rwlstrlen(db->username), OCI_ATTR_USERNAME,
			    xev->errhp)))
	  || (OCI_SUCCESS!=(xev->status=OCIAttrSet( db->seshp, OCI_HTYPE_SESSION,
			    db->password, (ub4)rwlstrlen(db->password), OCI_ATTR_PASSWORD,
			    xev->errhp)))
	  || (OCI_SUCCESS != (xev->status=OCISessionBegin(db->svchp, xev->errhp, db->seshp
			    , bit(db->flags, RWL_DB_CREDEXT) ? OCI_CRED_EXT : OCI_CRED_RDBMS
			    , db->sbmode|OCI_STMT_CACHE )))
	   )
	{
	  if (OCI_SUCCESS_WITH_INFO == xev->status) /* typically ORA-28002 */
	    rwldberror0(xev, cloc);
	  else
	    goto handledberror;
	}
	if ( (OCI_SUCCESS != (xev->status=OCIAttrSet( db->svchp, OCI_HTYPE_SVCCTX,
				   db->seshp, 0, OCI_ATTR_SESSION, xev->errhp)))
	   || (OCI_SUCCESS != (xev->status=OCIAttrSet( db->svchp, OCI_HTYPE_SVCCTX,
				   &db->stmtcache, 0, OCI_ATTR_STMTCACHESIZE, xev->errhp)))
	   )
	  goto handledberror;

      break;

      case RWL_DBPOOL_POOLED:
	db->poolmin = 1; db->poolmax = 1;
	db->poolincr = 0;

	if (bit(db->flags, RWL_DB_CREDEXT) || !db->username[0])
	{
	  // Pure DRCP cannot user external authentication
	  rwlexecerror(xev, cloc, RWL_ERROR_NO_USERNAME, db->vname);
	  goto cleanupandcanceldb;
	}

	if (OCI_SUCCESS != OCIHandleAlloc( xev->rwm->envhp, (void **)&db->spool,
				  OCI_HTYPE_SPOOL, 0, 0 ))
	{
	  rwlexecsevere(xev, cloc, "[rwldbconnect-allocspool:%s;%d]", db->vname, xev->status);
	  goto cleanupandcanceldb;
	}

	// DRCP here
	if (OCI_SUCCESS !=
	      (xev->status = OCISessionPoolCreate( xev->rwm->envhp, xev->errhp, db->spool
			      , &db->spstring, &db->spslen
			      , db->connect, db->conlen 
			      , db->poolmin, db->poolmax, db->poolincr
			      , db->username, (ub4)rwlstrlen(db->username)
			      , db->password, (ub4)rwlstrlen(db->password)
			      , OCI_SPC_STMTCACHE|OCI_SPC_HOMOGENEOUS)))
	{
	  if (OCI_SUCCESS_WITH_INFO == xev->status) /* typically ORA-28002 */
	    rwldberror0(xev, cloc);
	  else
	    goto handledberror;
	}
	if (OCI_SUCCESS != 
	      (xev->status=OCIAttrSet( db->spool, OCI_HTYPE_SPOOL,
			   &db->stmtcache,
			   0, OCI_ATTR_SPOOL_STMTCACHESIZE, xev->errhp))
			   )
	{
	  goto handledberror;
	}

	// Allocate and fill authp
	if (OCI_SUCCESS!=(xev->status=OCIHandleAlloc( xev->rwm->envhp, (void **)&db->authp,
		      OCI_HTYPE_AUTHINFO, (size_t)0, (dvoid**)0 )))
	{
	  rwlexecsevere(xev, cloc, "[rwldbconnect-allocauthinfo2:%s;%d]", db->vname, xev->status);
	  goto cleanupandcanceldb;
	}

	if (db->cclass)
	  rwlsetcclass(xev, cloc, db);

	// Don't set OCI_ATTR_SPOOL_GETMODE for DRCP (compare below for real pool)
      break;

      case RWL_DBPOOL_SESSION:
	{
	  ub4 spcmode;
	  ub1 ub1attr;
	  if (!bit(xev->tflags, RWL_P_ISMAIN))
	  {
	    rwlexecsevere(xev, cloc, "[rwldbconnect-poolinthr:%s]", db->vname);
	    goto cleanupandcanceldb;
	  }

	  if (OCI_SUCCESS != OCIHandleAlloc( xev->rwm->envhp, (void **)&db->spool,
				    OCI_HTYPE_SPOOL, 0, 0 ))
	  {
	    rwlexecsevere(xev, cloc, "[rwldbconnect-allocspool2:%s;%d]", db->vname, xev->status);
	    goto cleanupandcanceldb;
	  }

	  if (bit(db->flags, RWL_DB_CREDEXT))
	    spcmode = OCI_SPC_STMTCACHE;
	  else
	    spcmode = OCI_SPC_STMTCACHE|OCI_SPC_HOMOGENEOUS;

	  if (bit(db->flags, RWL_DB_SP_NORLB)) // this is set by default
	    spcmode |= OCI_SPC_NO_RLB;

	  // Must have at least one if we want to retry on failure
	  // Note that poolmax is always at least 1
	  if (xev->rwm->dbfailures && 0==db->poolmin)
	    db->poolmin++;
#if (RWL_OCI_VERSION<18)
	  if (db->poolmin == db->poolmax) /* prevent bug 26568177/22707432 */
	  {
	    if (db->poolmin > 2)
	      db->poolmin--;
	    else
	      db->poolmax++; 
	  }
#endif
	  db->poolincr = 0;
	  /* make increment depend on difference between min and max */
	  if (db->poolmin != db->poolmax)
	    db->poolincr = 1 + (db->poolmax-db->poolmin)/10;

	  // Real pool here
	  if (OCI_SUCCESS !=
		(xev->status = OCISessionPoolCreate( xev->rwm->envhp, xev->errhp, db->spool
				, &db->spstring, &db->spslen
				, db->connect, db->conlen
				, db->poolmin, db->poolmax, db->poolincr
				, db->username, (ub4)rwlstrlen(db->username)
				, db->password, (ub4)rwlstrlen(db->password)
				, spcmode)))
	  {
	    if (OCI_SUCCESS_WITH_INFO == xev->status) /* typically ORA-28002 */
	      rwldberror0(xev, cloc);
	    else
	      goto handledberror;
	  }
	  if (OCI_SUCCESS != 
		(xev->status=OCIAttrSet( db->spool, OCI_HTYPE_SPOOL,
			     &db->stmtcache,
			     0, OCI_ATTR_SPOOL_STMTCACHESIZE, xev->errhp))
			     )
	  {
	    goto handledberror;
	  }
	  
	  // Allocate and fill authp
	  if (OCI_SUCCESS!=(xev->status=OCIHandleAlloc( xev->rwm->envhp, (void **)&db->authp,
			OCI_HTYPE_AUTHINFO, (size_t)0, (dvoid**)0 )))
	  {
	    rwlexecsevere(xev, cloc, "[rwldbconnect-allocauthinfo3:%s;%d]", db->vname, xev->status);
	    goto cleanupandcanceldb;
	  }
	  if (OCI_SUCCESS != 
		(xev->status=OCIAttrSet( db->authp, OCI_HTYPE_AUTHINFO,
			     db->username,
			     (ub4)rwlstrlen(db->username), OCI_ATTR_USERNAME, xev->errhp))
			     )
	  {
	    rwlexecsevere(xev, cloc, "[rwldbconnect-authsetusername:%s;%d]", db->vname, xev->status);
	    goto cleanupandcanceldb;
	  }
	  if (OCI_SUCCESS != 
		(xev->status=OCIAttrSet( db->authp, OCI_HTYPE_AUTHINFO,
			     db->password,
			     (ub4)rwlstrlen(db->password), OCI_ATTR_PASSWORD, xev->errhp))
			     )
	  {
	    rwlexecsevere(xev, cloc, "[rwldbconnect-authsetpassword:%s;%d]", db->vname, xev->status);
	    goto cleanupandcanceldb;
	  }

	  if (db->cclass && db->cclass[0])
	    rwlsetcclass(xev, cloc, db);

	  if (db->ptimeout)
	  {
	    if (OCI_SUCCESS != 
		  (xev->status=OCIAttrSet( db->spool, OCI_HTYPE_SPOOL,
			       &db->ptimeout,
			       0, OCI_ATTR_SPOOL_TIMEOUT, xev->errhp))
			       )
	    {
	      goto handledberror;
	    }
	  }
#if (OCI_MAJOR_VERSION >= 12)
	  if (db->wtimeout)
	  {
	    ub1attr = OCI_SPOOL_ATTRVAL_TIMEDWAIT;
	    ub4 ub4attr = (ub4) trunc(db->wtimeout * 1000);
	    if (OCI_SUCCESS != 
		  (xev->status=OCIAttrSet( db->spool, OCI_HTYPE_SPOOL,
			       &ub1attr,
			       sizeof(ub1), OCI_ATTR_SPOOL_GETMODE, xev->errhp))
			       )
	    {
	      goto handledberror;
	    }
	    if (OCI_SUCCESS != 
		  (xev->status=OCIAttrSet( db->spool, OCI_HTYPE_SPOOL,
			       &ub4attr,
			       sizeof(ub4), OCI_ATTR_SPOOL_WAIT_TIMEOUT, xev->errhp))
			       )
	    {
	      goto handledberror;
	    }

	  }
	  else
#endif
	  {
	    ub1attr = OCI_SPOOL_ATTRVAL_WAIT;
	    if (OCI_SUCCESS != 
		  (xev->status=OCIAttrSet( db->spool, OCI_HTYPE_SPOOL,
			       &ub1attr,
			       sizeof(ub1), OCI_ATTR_SPOOL_GETMODE, xev->errhp))
			       )
	    {
	      goto handledberror;
	    }
	  }

	}
      break;
	
      case RWL_DBPOOL_CONNECT:
	{
	  if (!bit(xev->tflags, RWL_P_ISMAIN))
	  {
	    rwlexecsevere(xev, cloc, "[rwldbconnect-cpoolinthr:%s]", db->vname);
	    goto cleanupandcanceldb;
	  }

	  if (OCI_SUCCESS != OCIHandleAlloc( xev->rwm->envhp, (void **)&db->cpool,
				    OCI_HTYPE_CPOOL, 0, 0 ))
	  {
	    rwlexecsevere(xev, cloc, "[rwldbconnect-alloccpool2:%s;%d]", db->vname, xev->status);
	    goto cleanupandcanceldb;
	  }

	  if (bit(db->flags, RWL_DB_CREDEXT) || !db->username[0])
	  {
	    // Connection pool must have username and password
	    rwlexecerror(xev, cloc, RWL_ERROR_NO_USERNAME, db->vname);
	    goto cleanupandcanceldb;
	  }

#if (RWL_OCI_VERSION<18)
	  // This is a precaution, we do not actually know if
	  // this bug also exists for OCIConnectionPool
	  if (db->poolmin == db->poolmax) /* prevent bug 26568177/22707432 */
	  {
	    if (db->poolmin > 2)
	      db->poolmin--;
	    else
	      db->poolmax++; 
	  }
#endif
	  db->poolincr = 0;
	  /* make increment depend on difference between min and max */
	  if (db->poolmin != db->poolmax)
	    db->poolincr = 1 + (db->poolmax-db->poolmin)/10;

	  // Create the connection pool
	  if (OCI_SUCCESS !=
		(xev->status = OCIConnectionPoolCreate( xev->rwm->envhp, xev->errhp, db->cpool
				, &db->cpstring, (sb4 *) &db->cpslen
				, db->connect, (sb4)db->conlen
				, db->poolmin, db->poolmax, db->poolincr
				, db->username, (sb4)rwlstrlen(db->username)
				, db->password, (sb4)rwlstrlen(db->password)
				, OCI_DEFAULT)))
	  {
	    if (OCI_SUCCESS_WITH_INFO == xev->status) /* typically ORA-28002 */
	      rwldberror0(xev, cloc);
	    else
	      goto handledberror;
	  }
	  
	  if (db->ptimeout)
	  {
	    if (OCI_SUCCESS != 
		  (xev->status=OCIAttrSet( db->cpool, OCI_HTYPE_CPOOL,
			       &db->ptimeout,
			       0, OCI_ATTR_CONN_TIMEOUT, xev->errhp))
			       )
	    {
	      goto handledberror;
	    }
	  }

	}
      break;
	
      default:
	rwlexecsevere(xev, cloc, "[rwldbconnect-notyet:%s;%*s;%s]", db->username, db->conlen, db->connect, db->pooltext);
      
    }

    /* do various things in main */
    if ( bit(xev->tflags, RWL_P_ISMAIN) &&
	   !bit(db->flags, RWL_DB_BOUNCING) )
    {
      ub4 release;
      text notused[10];

      // get server release
      release=0;
      switch (db->pooltype)
      {
	case RWL_DBPOOL_DEDICATED:
	case RWL_DBPOOL_RECONNECT:
	case RWL_DBPOOL_RETHRDED:
	    if (OCI_SUCCESS != (xev->status = RWLServerRelease ( db->svchp 
			      , xev->errhp, notused, sizeof(notused)
			      , OCI_HTYPE_SVCCTX, &release )))
	    rwldberror0(xev, cloc);
	break;

	case RWL_DBPOOL_SESSION:
	  myses = rwlensuresession(xev, cloc, db, 0);
	  if (OCI_SUCCESS != (xev->status = RWLServerRelease ( db->svchp 
			      , xev->errhp, notused, sizeof(notused)
			      , OCI_HTYPE_SVCCTX, &release )))
	    rwldberror0(xev, cloc);
	break;
	  
	case RWL_DBPOOL_POOLED:
	  myses = rwlensuresession(xev, cloc, db, 0);
	  if (OCI_SUCCESS != (xev->status = RWLServerRelease ( db->svchp 
			      , xev->errhp, notused, sizeof(notused)
			      , OCI_HTYPE_SVCCTX, &release )))
	    rwldberror0(xev, cloc);
	break;

	case RWL_DBPOOL_CONNECT:
	  // Create a session using the cpool credential such that we
	  // can get the server release and a bit down the version
	  // For simplicitly we just use the simple OCILogon2 in stead
	  // of the full OCIServerAttach plus OCISessionBegin
	  if (OCI_SUCCESS != (xev->status = OCILogon2 ( xev->rwm->envhp
			      , xev->errhp, &db->svchp
			      , db->username, (ub4) rwlstrlen(db->username)
			      , db->password, (ub4) rwlstrlen(db->password)
			      , db->cpstring, db->cpslen
			      , OCI_LOGON2_CPOOL)) && OCI_SUCCESS_WITH_INFO!=xev->status)
	    rwldberror0(xev, cloc);
	  else
	  {
	    if (OCI_SUCCESS != (xev->status = RWLServerRelease ( db->svchp 
				, xev->errhp, notused, sizeof(notused)
				, OCI_HTYPE_SVCCTX, &release )))
	      rwldberror0(xev, cloc);
	    else
	      myses = 1;
	  }
	break;
	  
	default:
	break;
	
      }

    snprintf((char *)db->serverr, RWL_DB_SERVERR_LEN, "%d.%d.%d.%d.%d"
			  , RWL_SR_1(release)
			  , RWL_SR_2(release)
			  , RWL_SR_3(release)
			  , RWL_SR_4(release)
			  , RWL_SR_5(release));

      /* show connected to message if not quiet and not bounce */
      if (!bit(xev->tflags,RWL_P_QUIET) && 
	   !bit(db->flags, RWL_DB_BOUNCING)
	 )
      {
	text buf[RWL_OCI_ERROR_MAXMSG];


	switch (db->pooltype)
	{
	  case RWL_DBPOOL_DEDICATED:
	    if (OCI_SUCCESS != (xev->status = OCIServerVersion ( db->svchp 
				, xev->errhp, buf, sizeof(buf)
				, OCI_HTYPE_SVCCTX )))
	      rwldberror0(xev, cloc);
	    else
	    {
	      if (bit(db->flags, RWL_DB_USECPOOL))
	      {
		if (bit(xev->rwm->m3flags, RWL_P3_LOPTDEFDB))
		  printf("Connected default database via connection pool %s to:%s%s%s" 
		    , db->cpvname, xev->rwm->lineend, buf, xev->rwm->lineend);
		else
		  printf(bit(db->flags,RWL_DB_RESULTS)
		    ? "Connected %s used as repository via connection pool %s to:%s%s%s%s"
		    : "Connected %s via connection pool %s to:%s%s%s%s"
		    , db->vname, db->cpvname, xev->rwm->lineend, buf, xev->rwm->lineend, xev->rwm->lineend);
	      }
	      else
	      {
		if (bit(xev->rwm->m3flags, RWL_P3_LOPTDEFDB))
		  printf("Connected default database to:%s%s%s" , xev->rwm->lineend, buf, xev->rwm->lineend);
		else
		  printf(bit(db->flags,RWL_DB_RESULTS)
		    ? "Connected %s used as repository to:%s%s%s%s"
		    : "Connected %s to:%s%s%s%s"
		    , db->vname, xev->rwm->lineend, buf, xev->rwm->lineend, xev->rwm->lineend);
	      }
	    }
	  break;

	  case RWL_DBPOOL_RECONNECT:
	    if (OCI_SUCCESS != (xev->status = OCIServerVersion ( db->svchp 
				, xev->errhp, buf, sizeof(buf)
				, OCI_HTYPE_SVCCTX )))
	      rwldberror0(xev, cloc);
	    else
	    {
	      if (bit(xev->rwm->m3flags, RWL_P3_LOPTDEFDB))
		printf("Connected default database with reconnect to:%s%s%s" , xev->rwm->lineend, buf, xev->rwm->lineend);
	      else
	      {
	      if (bit(db->flags, RWL_DB_USECPOOL))
		printf(bit(db->flags,RWL_DB_RESULTS)
		  ? "Connected %s with reconnect used as repository via connection pool %s to:%s%s%s%s"
		  : "Connected %s with reconnect via connection pool %s to:%s%s%s%s"
		  , db->vname, db->cpvname, xev->rwm->lineend, buf, xev->rwm->lineend, xev->rwm->lineend);
	      else
		printf(bit(db->flags,RWL_DB_RESULTS)
		  ? "Connected %s with reconnect used as repository to:%s%s%s%s"
		  : "Connected %s with reconnect to:%s%s%s%s"
		  , db->vname, xev->rwm->lineend, buf, xev->rwm->lineend, xev->rwm->lineend);
	      }
	    }
	  break;

	  case RWL_DBPOOL_RETHRDED:
	    if (OCI_SUCCESS != (xev->status = OCIServerVersion ( db->svchp 
				, xev->errhp, buf, sizeof(buf)
				, OCI_HTYPE_SVCCTX )))
	      rwldberror0(xev, cloc);
	    else
	      {
	      if (bit(db->flags, RWL_DB_USECPOOL))
		printf("Connected %s for threads dedicated via connection pool %s to:%s%s%s%s"
		, db->vname, db->cpvname, xev->rwm->lineend, buf, xev->rwm->lineend, xev->rwm->lineend);
	      else
		printf("Connected %s for threads dedicated to:%s%s%s%s", db->vname, xev->rwm->lineend, buf, xev->rwm->lineend, xev->rwm->lineend);
	      }
	  break;

	  case RWL_DBPOOL_SESSION:
	    if (OCI_SUCCESS != (xev->status = OCIServerVersion ( db->svchp 
				, xev->errhp, buf, sizeof(buf)
				, OCI_HTYPE_SVCCTX )))
	      rwldberror0(xev, cloc);
	    else
	    {
	      if (bit(xev->rwm->m3flags, RWL_P3_LOPTDEFDB))
		printf("Created default database as session pool (%d..%d) to:%s%s%s"
		  , db->poolmin, db->poolmax
		  , xev->rwm->lineend, buf, xev->rwm->lineend);
	      else
	      {
		if (bit(db->flags, RWL_DB_RESULTS))
		  printf("Created %s as session pool (%d..%d) used as repository to:%s%s%s%s"
		  , db->vname, db->poolmin, db->poolmax, xev->rwm->lineend, buf, xev->rwm->lineend, xev->rwm->lineend);
		else
		  printf("Created %s as session pool (%d..%d) to:%s%s%s%s"
		  , db->vname, db->poolmin, db->poolmax, xev->rwm->lineend, buf, xev->rwm->lineend, xev->rwm->lineend);
	      }
	    }
	  break;
	    
	  case RWL_DBPOOL_POOLED:
	    if (OCI_SUCCESS != (xev->status = OCIServerVersion ( db->svchp 
				, xev->errhp, buf, sizeof(buf)
				, OCI_HTYPE_SVCCTX )))
	      rwldberror0(xev, cloc);
	    else
	    printf("Connected %s using DRCP to:%s%s%s%s", db->vname, xev->rwm->lineend, buf, xev->rwm->lineend, xev->rwm->lineend);
	  break;
	    
	  case RWL_DBPOOL_CONNECT:
	    if (OCI_SUCCESS != (xev->status = OCIServerVersion ( db->svchp 
				, xev->errhp, buf, sizeof(buf)
				, OCI_HTYPE_SVCCTX )))
	      rwldberror0(xev, cloc);
	    else
	      printf("Created %s as a connection pool (%d..%d) to:%s%s%s%s"
	      , db->vname, db->poolmin, db->poolmax, xev->rwm->lineend, buf, xev->rwm->lineend, xev->rwm->lineend);
	  break;
	    
	  default:
	  break;
	  
	}



      }
      
      if ( myses )
      {
	// We have a session that we need to release
	switch (db->pooltype)
	{
	  case RWL_DBPOOL_CONNECT:
	    // Log off from the session we created using
	    // OCILogon2 above
	    OCILogoff(db->svchp, xev->errhp);
	    db->svchp = 0;
	  break;

	  case RWL_DBPOOL_SESSION:
	    // bis(xev->tflags, RWL_P_SESRELDROP);
	    // fall thru
	  case RWL_DBPOOL_POOLED:
	    rwlreleasesession(xev, cloc, db, 0);
	  break;

	  default:
	  break;
	    
	}
      }
    }

    /* logoff immediatedly if reconnect or thread dedicated in main */
    if ( (RWL_DBPOOL_RECONNECT == db->pooltype)
       || (bit(xev->tflags, RWL_P_ISMAIN) && RWL_DBPOOL_RETHRDED == db->pooltype)
       )
    {
      xev->status = OCISessionEnd(db->svchp, xev->errhp, db->seshp, OCI_DEFAULT);
      if (OCI_SUCCESS!=xev->status)
	goto handledberror;

      /* and disconnect */
      xev->status = OCIServerDetach( db->srvhp, xev->errhp, OCI_DEFAULT );
      if (OCI_SUCCESS!=xev->status)
	goto handledberror;
    }

    /* mark stateless if wanted and dedicated or thread dedicated outside main */
#if (RWL_OCI_VERSION>=12)
    if ( bit(db->flags, RWL_DB_STATEMARK) 
	 && ( (RWL_DBPOOL_DEDICATED == db->pooltype)
	     || (!bit(xev->tflags, RWL_P_ISMAIN) && RWL_DBPOOL_RETHRDED == db->pooltype) )
       )
    {
      ub1 ub1attr = OCI_SESSION_STATELESS;

      xev->status=OCIAttrSet (db->seshp, OCI_HTYPE_SESSION
					  , &ub1attr, sizeof(ub1attr)
					  , OCI_ATTR_SESSION_STATE, xev->errhp);
      if (bit(xev->tflags, RWL_THR_DSQL))
      {
	rwldebugcode(xev->rwm,cloc,"%d set connected session %s stateless", xev->thrnum, db->vname);
      }
      if (OCI_SUCCESS!=xev->status)
	goto handledberror;

    }
#endif

    // everything is good
    return;

    handledberror:
      rwldberror0(xev, cloc);

    if (!bit(db->flags, RWL_DB_DEAD)) // if not a recoverable error
      goto cleanupandcanceldb;
    else
    {
      if (! maxdead) // out of times we accept dead
      {
	if (xev->rwm->dbfailures)
	  rwlexecerror(xev, cloc, RWL_ERROR_NO_MORE_DB_TRIES, db->vname);
        goto cleanupandcanceldb;
      }

      // OK, we should re-try
      rwlwait(xev, cloc, 1.0);
      rwlexecerror(xev, cloc, RWL_ERROR_DB_RETRY_COUNTDOWN, db->vname, maxdead);
      // first free what was allocated 
      // ignoring errors
      if (db->authp)
	  OCIHandleFree(db->authp, OCI_HTYPE_AUTHINFO);
      db->authp = 0;

      if (db->svchp) 
	  OCIHandleFree(db->svchp, OCI_HTYPE_SVCCTX);
      db->svchp = 0;

      if (db->seshp)
	  OCIHandleFree(db->seshp, OCI_HTYPE_SESSION);
      db->seshp = 0;

      if (db->srvhp)
      {
	xev->status = OCIServerDetach( db->srvhp, xev->errhp, OCI_DEFAULT );
	if (OCI_SUCCESS != xev->status)
	  rwldberror0(xev, cloc);
	OCIHandleFree(db->srvhp, OCI_HTYPE_SERVER);
      }
      db->srvhp = 0;

      // count down accepted failures
      maxdead--;

      bic(db->flags, RWL_DB_DEAD); // clear dead bit
    }
  } // while(1)

  cleanupandcanceldb:
    /* free what was alloced */

    if (db->authp
	&& (OCI_SUCCESS != (ocires = OCIHandleFree(db->authp, OCI_HTYPE_AUTHINFO))))
      rwlexecsevere(xev, cloc, "[rwldbconnect-freeauthinfo:%s;%d]", db->vname, ocires);
    db->authp = 0;

    if (db->svchp 
        && (OCI_SUCCESS != (ocires = OCIHandleFree(db->svchp, OCI_HTYPE_SVCCTX))))
      rwlexecsevere(xev, cloc, "[rwldbconnect-freesvcctx:%s;%d]", db->vname, ocires);
    db->svchp = 0;

    if (db->seshp
        && (OCI_SUCCESS != (ocires = OCIHandleFree(db->seshp, OCI_HTYPE_SESSION))))
      rwlexecsevere(xev, cloc, "[rwldbconnect-freesession:%s;%d]", db->vname, ocires);
    db->seshp = 0;

    if (db->srvhp)
    {
      xev->status = OCIServerDetach( db->srvhp, xev->errhp, OCI_DEFAULT );
      if (OCI_SUCCESS != xev->status)
	rwldberror0(xev, cloc);
      ocires = OCIHandleFree(db->srvhp, OCI_HTYPE_SERVER);
      if (OCI_SUCCESS != ocires)
	rwlexecsevere(xev, cloc, "[rwldbconnect-freserver:%s;%d]", db->vname, ocires);
      db->srvhp = 0;
    }
    xev->evar[vno].vtype = RWL_TYPE_CANCELLED;
    xev->evar[vno].stype = "cancelled (db)";

  return;
}

void rwlsetcclass(rwl_xeqenv *xev
, rwl_location *cloc
, rwl_cinfo *db)
{
  if (bit(db->flags, RWL_DB_DEAD))
  {
    if (bit(xev->tflags, RWL_THR_DSQL))
    {
      rwldebugcode(xev->rwm,cloc,"unable to set cclass on dead database %s to %s"
      , db->vname, db->cclass);
    }
    return;
  }
  
  if (bit(xev->tflags, RWL_THR_DSQL))
  {
    rwldebugcode(xev->rwm,cloc,"setting cclass at %s to %s", db->vname, db->cclass);
  }

  if (!db->authp)
  {
    rwlexecsevere(xev, cloc, "[rwlsetcclass-noauth:%s;%s]", db->vname, db->cclass);
    return;
  }
  if (OCI_SUCCESS != 
	(xev->status=OCIAttrSet( db->authp, OCI_HTYPE_AUTHINFO,
		     db->cclass,
		     (ub4)rwlstrlen(db->cclass), OCI_ATTR_CONNECTION_CLASS, xev->errhp))
		     )
  {
    rwlexecsevere(xev, cloc, "[rwlsetcclass-notset:%s;%s;%d]", db->vname, db->cclass, xev->status);
    return;
  }
  
  return;
}


void rwlociping(rwl_xeqenv *xev
, rwl_location *cloc
, rwl_cinfo *db
, text *fname)
{
  /* ociping */
  if (bit(xev->tflags, RWL_THR_DSQL))
  {
    rwldebugcode(xev->rwm,cloc,"executing ping at %s", db->vname);
  }

  if (bit(db->flags, RWL_DB_DEAD))
  {
    rwlexecerror(xev, cloc, RWL_ERROR_WARN_DEAD_DATABASE, "ociping");
    rwlwait(xev, cloc, 1.0);
  }
  
  if (!db->svchp)
    rwlexecerror(xev, cloc, RWL_ERROR_WARN_NO_DATABASE, "ociping");
  else
  { 
    RWL_OATIME_BEGIN(xev, cloc, db->seshp, 0, fname, 0)
      xev->status = OCIPing(db->svchp , xev->errhp, OCI_DEFAULT);
    RWL_OATIME_END
    if(OCI_SUCCESS != xev->status)
      rwldberror1(xev, cloc, fname);
  }
  return;
}

void rwlcommit2(rwl_xeqenv *xev
, rwl_location *cloc
, rwl_cinfo *db
, text *fname)
{
  /* commit */
  ub4 i;
  ub4 depok;
  rwl_identifier *v;
  rwl_sql *sq;

  if (bit(xev->tflags, RWL_THR_DSQL))
  {
    rwldebugcode(xev->rwm,cloc,"executing commit of %s", db->vname);
  }

  // increate pcdepth just to make error stack use have sqllocation<-commitlocation
  if (++xev->pcdepth >= RWL_MAX_CODE_RECURSION)
    depok = 0; // normally causes RWL-600
  else
  {
    xev->locals[xev->pcdepth] = xev->locals[xev->pcdepth-1];
    xev->xqcname[xev->pcdepth] = xev->xqcname[xev->pcdepth-1];
    xev->erloc[xev->pcdepth] = cloc;
    depok = 1;
  }

  /* Find sql and flush if needed */
  v = xev->evar;
  for (i=0; i<xev->varcount; i++)
  {
    if (v[i].vtype == RWL_TYPE_SQL
        && (sq = v[i].vdata)
	&& rwlinscope(v+i, cloc->fname, fname)
	&& bit(sq->flags, RWL_SQFLAG_ARRAYB)
	&& sq->aix)
      {
	rwlflushsql2(xev, &v[i].loc, db, sq, fname);
      }
  }

  if (depok)
    xev->erloc[xev->pcdepth] = 0;
  --xev->pcdepth;

  if (bit(db->flags, RWL_DB_DEAD))
  {
    rwlwait(xev, cloc, 0.1);
    bic(db->flags, RWL_DB_DIDDML); /* Mark that DML has been taken care of */
    bic(db->flags, RWL_DB_DIDPLSQL); /* Mark that PLSQL has been taken care of */
    return;
  }
  
  if (!db->svchp)
    rwlexecerror(xev, cloc, RWL_ERROR_COMMIT_NO_SQL);
  else
  {
    RWL_OATIME_BEGIN(xev, cloc, db->seshp, 0, fname, 0)
      xev->status = OCITransCommit(db->svchp , xev->errhp, OCI_DEFAULT);
    RWL_OATIME_END
    if (OCI_SUCCESS != xev->status)
      rwldberror1(xev, cloc, fname);
    else
    {
      bic(db->flags, RWL_DB_DIDDML); /* Mark that DML has been taken care of */
      bic(db->flags, RWL_DB_DIDPLSQL); /* Mark that PLSQL has been taken care of */
    }
  }
  return;
}

void rwlrollback2(rwl_xeqenv *xev
, rwl_location *cloc
, rwl_cinfo *db
, text *fname)
{
  ub4 i;
  rwl_identifier *v;
  rwl_sql *sq;

  if (bit(xev->tflags, RWL_THR_DSQL))
  {
    rwldebugcode(xev->rwm,cloc,"executing rollback of %s", db->vname);
  }

  /* Find sql and ignore partly filled array if needed */
  v = xev->evar;
  for (i=0; i<xev->varcount; i++)
  {
    if (v[i].vtype == RWL_TYPE_SQL
	&& rwlinscope(v+i, cloc->fname, fname)
        && (sq = v[i].vdata)
	&& bit(sq->flags, RWL_SQFLAG_ARRAYB)
	&& sq->aix)
    {
      sq->aix = 0;
      
      // get rid of dynamic sql bind arrays 
      if (  bit(sq->flags, RWL_SQFLAG_DYNAMIC) // if dynamic
	 && bit(sq->flags, RWL_SQFLAG_ARRAYB) // and arrayb in effect
	 && 0==sq->defcount	// and no define (i.e. not query)
	 && 0==sq->outcount // and no outbind
	 && 1<=sq->bincount // at least one bind
	 )
      {
	rwlfreeabd(xev, cloc, sq);
	bic(sq->flags, RWL_SQFLAG_ARRAYB);
      }
    }
  }

  if (bit(db->flags, RWL_DB_DEAD))
  {
    rwlwait(xev, cloc, 0.1);
    bic(db->flags, RWL_DB_DIDDML); /* Mark that DML has been taken care of */
    bic(db->flags, RWL_DB_DIDPLSQL); /* Mark that PLSQL has been taken care of */
    return;
  }

  if (!db->svchp)
    rwlexecerror(xev, cloc, RWL_ERROR_COMMIT_NO_SQL);
  {
    RWL_OATIME_BEGIN(xev, cloc, db->seshp, 0, fname, 0)
      xev->status = OCITransRollback(db->svchp , xev->errhp, OCI_DEFAULT);
    RWL_OATIME_END
    if (OCI_SUCCESS != xev->status)
      rwldberror1(xev, cloc, fname);
    else
    {
      bic(db->flags, RWL_DB_DIDDML); /* Mark that DML has been taken care of */
      bic(db->flags, RWL_DB_DIDPLSQL); /* Mark that PLSQL has been taken care of */
    }
  }
  return;
}

/* rwlexecsql implements all SQL that does not require array bind :
 * One row fetches and DML
 * Multi row fetch loops
 * DDL
 * PL/SQL 
 *
 * This routine handles both "direct" bind/define which is for
 * variables directly in C and ordinary bind/define which is
 * against variables declared in the users rwl program
 */
static void rwlexecsql(rwl_xeqenv *xev
, rwl_location *cloc
, rwl_cinfo *db
, rwl_sql *sq
, sb4 doloop /* true when a fetch loop */
, ub4 looppc /* PC for recursive call in fetch loop */
, text *fname /* call from within this function- used for local variables */)
{
  OCIStmt *stmhp = 0;
  ub2 stmtype;
  ub4 rowcnt; // total row count fetched
  ub4 raix; // Row Array IndeX in fetch array
  ub4 rftchd; // Rows FeTCHeD in array fetch
  ub4 found;
  ub4 numcols, i, tookses, bc, dc;
  ub4 asiz; // Array size for OCI based prefetch on rows
  ub4 dasiz; // Array size of rwloadsim allocated fetch array (define array)
  sb4 st;
  rwl_bindef *bd = 0;
  rwl_value *pnum = 0;

  rwldbclearerr(xev);
  /* execute a SQL statement once */
  tookses = rwlensuresession2(xev, cloc, db, sq, fname);
  if (bit(xev->tflags, RWL_THR_DSQL))
  {
    if (bit(xev->tflags, RWL_DEBUG_BINDEF))
      rwldebugcode(xev->rwm,cloc,"executing sql %s at %s@%*s took=%d flgs:0x%x asiz=%d"
	, sq->vname, db->username, db->conlen, db->connect, tookses, sq->flags, sq->asiz);
    else
      rwldebugcodenonl(xev->rwm,cloc,"executing sql %s at %s@%*s took=%d flgs:0x%x asiz=%d"
	, sq->vname, db->username, db->conlen, db->connect, tookses, sq->flags, sq->asiz);
  }

  if (bit(db->flags, RWL_DB_DEAD))
  {
    //rwlwait(xev, cloc, 1.0);
    goto failure;
  }

  /*assert*/
  if (!db->svchp)
  {
    rwlexecsevere(xev, cloc, "[rwlexecsql-noconn:%s;%s;%*s;%s]", sq->vname
    , db->username, db->conlen, db->connect, db->pooltext);
    goto failure;
  }

  stmhp = 0;
  if (OCI_SUCCESS != (xev->status = 
      OCIStmtPrepare2( db->svchp, &stmhp, xev->errhp, sq->sql, sq->sqllen,
                      (text *)0, 0, OCI_NTV_SYNTAX, 
#ifdef RWL_USE_SQL_ID
		  ( (!bit(sq->flags, RWL_SQFLAG_GOTID) && rwl122ormore(xev->rwm))
		    ? OCI_PREP2_GET_SQL_ID
		    : 0
		  ) | 
#endif
		      OCI_DEFAULT )))
  {
    ub2 poffset = 0;
    if (bit(xev->tflags, RWL_THR_DSQL))
    {
      fputs((char *)xev->rwm->lineend,stderr);
      fflush(stderr);
    }
    rwldberror2(xev, cloc, sq, fname);
    if (bit(db->flags, RWL_DB_DEAD))
      goto failure;
    if (!bit(sq->flags, RWL_SQFLAG_IGNERR) 
	&& (OCI_SUCCESS == OCIAttrGet(stmhp, OCI_HTYPE_STMT
	   , &poffset, 0
	   , OCI_ATTR_PARSE_ERROR_OFFSET, xev->errhp))
      && poffset)
      rwlsqlerrlin(xev, cloc, sq, poffset);
    goto failure;
  }

  dc = dasiz = 0; // not using define array
  if (doloop)
  {
    /* pick the one set for the sql or the default */
    if (sq->asiz <= 0)
    {
      asiz = xev->defasiz;
      if (bit(sq->flags, RWL_SQFLAG_DYNAMIC) && !bit(sq->flags, RWL_SQLFLAG_IDUSE))
      {
	if (bit(xev->tflags, RWL_THR_DSQL))
	{
	  fputs((char *)xev->rwm->lineend,stderr);
	  fflush(stderr);
	}
	rwlexecerror(xev, cloc, RWL_ERROR_DEFAULT_ARRAY, sq->vname, asiz);
      }
      bis(sq->flags, RWL_SQFLAG_ARMEM);
    }
    else
    {
      if (1 == sq->asiz)
        asiz = 1; // Always at least 1
      else 
        asiz = sq->asiz - 1;
      if (bit(sq->flags, RWL_SQFLAG_ARRAYD))
      {
        // When using define/fetch array, no prefetch
	// NOTE that dasiz = 0 means not using define/fetch array
	// Also note that the array for fetch/define already has been allocated
	asiz = 0;
        dasiz = sq->asiz;
      }
    }
  }
  else
  {
    asiz = 1; /* never array for single row/dml/ddl */
  }

  // See if implicit bind is needed
  if (bit(sq->flags, RWL_SQLFLAG_IBUSE) && !bit(sq->flags, RWL_SQLFLAG_IBDONE))
  {
    // implicit binds needed
    rwlgetbinds(xev, stmhp, xev->errhp, sq, cloc, fname);
    bis(sq->flags, RWL_SQLFLAG_IBDONE);
  }

  /* walk through binds */
  bc=0;
  bd = sq->bindef;
  while (bd)
  {
    if (rwlbdisdir(bd) && doloop)
    {
      /* Direct binds/defines not yet implemented for cursor loops */
      rwlexecsevere(xev, cloc, "[rwlexecsql-dirloopnotyet:%s;%s]", sq->vname, bd->vname);
      goto failure;
    }

    if (!rwlbdisdir(bd) && RWL_DEFINE!=bd->bdtyp )
    { 
      sb4 vno;
      /* ordinary bind against rwloadsim variables */
      vno = rwlfindvarug2(xev, bd->vname, &bd->vguess, fname);
      if (vno<0)
      {
	rwlexecsevere(xev, cloc, "[rwlexecsql-bindef2:%d;%s;%s]", vno, sq->vname, bd->vname);
	goto failure;
      }
      // OLD pnum = &xev->evar[vno].num;
      pnum = rwlnuminvar(xev, xev->evar+vno);
      if (bit(xev->evar[vno].flags,RWL_IDENT_GLOBAL))
      {
	rwlexecsevere(xev, cloc, "[rwlexecsql-binglob:%s;%s;%s]"
	  , xev->evar[vno].vname, sq->vname, bd->vname);
	goto failure;
      }
      /* make sure strings are allocated */
      if ((bd->vtype == RWL_TYPE_STR || bd->vtype == RWL_TYPE_RAW)
        && pnum->vsalloc == RWL_SVALLOC_NOT)
	rwlinitstrvar(xev, pnum);
    }
    /* Clean out binhp & defhp so OCI doesn't attempt reuse old ones */
    bd->binhp = 0;
    /* make the actual bind or direct define */
    switch (bd->bdtyp)
    {
      case RWL_DIRBIND:
        bc++;
	switch(bd->vtype)
	{
	  case RWL_TYPE_INT:
	    xev->status = RWLBindByPos(stmhp, &bd->binhp, xev->errhp, bd->pos
			   ,  bd->pvar,  sizeof(sb8), SQLT_INT
			   ,  bd->pind, 0, 0, 0, 0, OCI_DEFAULT);
	    if (OCI_SUCCESS != xev->status)
	    { rwldberror2(xev, cloc, sq, fname); goto failure; }
	  break;

	  case RWL_TYPE_DBL:
	    xev->status = RWLBindByPos(stmhp, &bd->binhp, xev->errhp, bd->pos
			   ,  bd->pvar,  sizeof(double), SQLT_FLT
			   ,  bd->pind, 0, 0, 0, 0, OCI_DEFAULT);
	    if (OCI_SUCCESS != xev->status)
	    { rwldberror2(xev, cloc, sq, fname); goto failure; }
	  break;

	  case RWL_TYPE_STR:
	    xev->status = RWLBindByPos(stmhp, &bd->binhp, xev->errhp, bd->pos
			   ,  bd->pvar, (sb4)bd->slen, SQLT_STR
			   ,  bd->pind, 0, 0, 0, 0, OCI_DEFAULT);
	    if (OCI_SUCCESS != xev->status)
	    { rwldberror2(xev, cloc, sq, fname); goto failure; }
	  break;

	  default:
	    rwlexecsevere(xev, cloc, "[rwlexecsql-badtype7:%s;%s;%d]"
	       , sq->vname, bd->vname, bd->vtype);
	  break;
	}
      break;

      case RWL_BINDOUT_POS:
      case RWL_BIND_POS:
	bc++;
	switch(bd->vtype)
	{
	  case RWL_TYPE_INT:
	    /* This causes bit 0x2 to be set in oacflg */
	    if (bit(xev->tflags, RWL_DEBUG_USEALEN))
	      pnum->alen = sizeof(pnum->ival);
	    xev->status = RWLBindByPos(stmhp, &bd->binhp, xev->errhp, bd->pos
			   ,  &pnum->ival,  sizeof(pnum->ival), SQLT_INT
			   ,  &pnum->isnull
			   , bit(xev->tflags,RWL_DEBUG_USEALEN)?&pnum->alen:0
			   , 0, 0, 0, OCI_DEFAULT);
	    if (OCI_SUCCESS != xev->status)
	      { rwldberror2(xev, cloc, sq, fname); goto failure; }
	  break;

	  case RWL_TYPE_DBL:
	    if (bit(xev->tflags, RWL_DEBUG_USEALEN))
	      pnum->alen = sizeof(pnum->dval);
	    xev->status = RWLBindByPos(stmhp, &bd->binhp, xev->errhp, bd->pos
			   ,  &pnum->dval,  sizeof(pnum->dval), SQLT_FLT
			   ,  &pnum->isnull
			   , bit(xev->tflags,RWL_DEBUG_USEALEN)?&pnum->alen:0
			   , 0, 0, 0, OCI_DEFAULT);
	    if (OCI_SUCCESS != xev->status)
	    { rwldberror2(xev, cloc, sq, fname); goto failure; }
	  break;

	  case RWL_TYPE_RAW:
	    // TODO: add a warning if overflow
#ifdef RWL_USE_BIN_DEF_OCI2
	    pnum->alen = (ub4) rwlstrlen(pnum->sval);
#else
	    pnum->alen = (ub2) rwlstrlen(pnum->sval);
#endif
	    xev->status = RWLBindByPos(stmhp, &bd->binhp, xev->errhp, bd->pos
			   ,  pnum->sval, (sb4)pnum->slen, SQLT_LBI
			   ,  &pnum->isnull, &pnum->alen, 0, 0, 0, OCI_DEFAULT);
	    if (OCI_SUCCESS != xev->status)
	    { rwldberror2(xev, cloc, sq, fname); goto failure; }
	  break;

	  case RWL_TYPE_STR:
	    xev->status = RWLBindByPos(stmhp, &bd->binhp, xev->errhp, bd->pos
			   ,  pnum->sval, (sb4)pnum->slen, SQLT_STR
			   ,  &pnum->isnull, 0, 0, 0, 0, OCI_DEFAULT);
	    if (OCI_SUCCESS != xev->status)
	    { rwldberror2(xev, cloc, sq, fname); goto failure; }
	  break;

	  case RWL_TYPE_BLOB:
	    xev->status = RWLBindByPos(stmhp, &bd->binhp, xev->errhp, bd->pos
			   ,  &pnum->vptr, 0, SQLT_BLOB
			   ,  0, 0, 0, 0, 0, OCI_DEFAULT);
	    if (OCI_SUCCESS != xev->status)
	    { rwldberror2(xev, cloc, sq, fname); goto failure; }
	  break;

	  case RWL_TYPE_CLOB:
	    xev->status = RWLBindByPos(stmhp, &bd->binhp, xev->errhp, bd->pos
			   ,  &pnum->vptr, 0, SQLT_CLOB
			   ,  0, 0, 0, 0, 0, OCI_DEFAULT);
	    if (OCI_SUCCESS != xev->status)
	    { rwldberror2(xev, cloc, sq, fname); goto failure; }
	  break;

	  default:
	    rwlexecsevere(xev, cloc, "[rwlexecsql-badtype6:%s;%s;%d]"
	       , sq->vname, bd->vname, bd->vtype);
	  break;
	}
      break;

      case RWL_BINDOUT_NAME:
      case RWL_BIND_NAME:
        bc++;
	switch(bd->vtype)
	{
	  case RWL_TYPE_INT:
	    xev->status = RWLBindByName(stmhp, &bd->binhp, xev->errhp
			   , bd->bname, (sb4)rwlstrlen(bd->bname)
			   ,  &pnum->ival,  sizeof(pnum->ival), SQLT_INT
			   ,  &pnum->isnull, 0, 0, 0, 0, OCI_DEFAULT);
	    if (OCI_SUCCESS != xev->status)
	    { rwldberror2(xev, cloc, sq, fname); goto failure; }
	  break;

	  case RWL_TYPE_DBL:
	    xev->status = RWLBindByName(stmhp, &bd->binhp, xev->errhp
			   , bd->bname, (sb4)rwlstrlen(bd->bname)
			   ,  &pnum->dval,  sizeof(pnum->dval), SQLT_FLT
			   ,  &pnum->isnull, 0, 0, 0, 0, OCI_DEFAULT);
	    if (OCI_SUCCESS != xev->status)
	    { rwldberror2(xev, cloc, sq, fname); goto failure; }
	  break;

	  case RWL_TYPE_RAW:
	    // TODO: add a warning if overflow
#ifdef RWL_USE_BIN_DEF_OCI2
	    pnum->alen = (ub4) rwlstrlen(pnum->sval);
#else
	    pnum->alen = (ub2) rwlstrlen(pnum->sval);
#endif
	    xev->status = RWLBindByName(stmhp, &bd->binhp, xev->errhp
			   , bd->bname, (sb4)rwlstrlen(bd->bname)
			   ,  pnum->sval, (sb4) pnum->slen, SQLT_LBI
			   ,  &pnum->isnull, &pnum->alen, 0, 0, 0, OCI_DEFAULT);
	    if (OCI_SUCCESS != xev->status)
	    { rwldberror2(xev, cloc, sq, fname); goto failure; }
	  break;

	  case RWL_TYPE_STR:
	    xev->status = RWLBindByName(stmhp, &bd->binhp, xev->errhp
			   , bd->bname, (sb4)rwlstrlen(bd->bname)
			   ,  pnum->sval, (sb4) pnum->slen, SQLT_STR
			   ,  &pnum->isnull, 0, 0, 0, 0, OCI_DEFAULT);
	    if (OCI_SUCCESS != xev->status)
	    { rwldberror2(xev, cloc, sq, fname); goto failure; }
	  break;

	  case RWL_TYPE_BLOB:
	    xev->status = RWLBindByName(stmhp, &bd->binhp, xev->errhp
			   , bd->bname, (sb4)rwlstrlen(bd->bname)
			   ,  &pnum->vptr, 0, SQLT_BLOB
			   ,  0, 0, 0, 0, 0, OCI_DEFAULT);
	    if (OCI_SUCCESS != xev->status)
	    { rwldberror2(xev, cloc, sq, fname); goto failure; }
	  break;

	  case RWL_TYPE_CLOB:
	    xev->status = RWLBindByName(stmhp, &bd->binhp, xev->errhp
			   , bd->bname, (sb4)rwlstrlen(bd->bname)
			   ,  &pnum->vptr, 0, SQLT_CLOB
			   ,  0, 0, 0, 0, 0, OCI_DEFAULT);
	    if (OCI_SUCCESS != xev->status)
	    { rwldberror2(xev, cloc, sq, fname); goto failure; }
	  break;

	  default:
	    rwlexecsevere(xev, cloc, "[rwlexecsql-badtype5:%s;%s;%d]"
	       , sq->vname, bd->vname, bd->vtype);
	  break;
	}
      break;

    }
  bd=bd->next;
  }
  
  // Unless query, no implicit defines
  xev->status = OCIAttrGet(stmhp, OCI_HTYPE_STMT
	   , &stmtype, 0
	   , OCI_ATTR_STMT_TYPE, xev->errhp);
  if (OCI_SUCCESS != xev->status)
  { rwldberror2(xev, cloc, sq, fname); goto failure; }
  if (OCI_STMT_SELECT != stmtype)
    bic(sq->flags, RWL_SQLFLAG_IDUSE);

  /* 
   * Set prefetch 
   */

  if (!dasiz)
  {
    if (bit(sq->flags, RWL_SQFLAG_ARMEM))
    {
      ub4 amem = RWL_SQL_ARRAY_MEMORY;
      if (OCI_SUCCESS != (xev->status = 
	 OCIAttrSet (stmhp, OCI_HTYPE_STMT
	     , &amem, sizeof(amem)
	     , OCI_ATTR_PREFETCH_MEMORY, xev->errhp)))
	{ rwldberror2(xev, cloc, sq, fname); goto failure; }
    }
    if (OCI_SUCCESS != (xev->status = 
       OCIAttrSet (stmhp, OCI_HTYPE_STMT
	   , &asiz, sizeof(asiz)
	   , OCI_ATTR_PREFETCH_ROWS, xev->errhp)))
      { rwldberror2(xev, cloc, sq, fname); goto failure; }
  }
  else
  {
    // turn off prefetch when user asked for array fetch
    // as we don't want both
    ub4 aa = 0;
    if (OCI_SUCCESS != (xev->status = 
       OCIAttrSet (stmhp, OCI_HTYPE_STMT
	   , &aa, sizeof(aa)
	   , OCI_ATTR_PREFETCH_MEMORY, xev->errhp)))
      { rwldberror2(xev, cloc, sq, fname); goto failure; }

    if (OCI_SUCCESS != (xev->status = 
       OCIAttrSet (stmhp, OCI_HTYPE_STMT
	   , &aa, sizeof(aa)
	   , OCI_ATTR_PREFETCH_ROWS, xev->errhp)))
      { rwldberror2(xev, cloc, sq, fname); goto failure; }
  }


  // Now see if we need implicit define
  if (asiz
      && bit(sq->flags, RWL_SQLFLAG_IDUSE) 
      && !bit(sq->flags, RWL_SQLFLAG_IDDONE|RWL_SQFLAG_LEXPLS))
  {
    // Are we doing cqn registration
    if (bit(db->flags, RWL_DB_CQNREG) && db->subhp)
    {
      if ( OCI_SUCCESS != 
	   (xev->status = OCIAttrSet( stmhp, OCI_HTYPE_STMT, db->subhp
	   , 0, OCI_ATTR_CHNF_REGHANDLE, xev->errhp)))
      { 
	rwldberror2(xev, cloc, sq, fname);
	goto failure;
      }
    }

    // implicit defines needed, so execute without fetching rows
    // note that we use RWL_SQLFLAG_IDDONE both to tell that this step has been
    // done, i.e. defines have been implicitly handled, and also to
    // show that we only need OCIStmtFetch below
    RWL_OATIME_BEGIN(xev, cloc, db->seshp, sq, fname, 0)
      xev->status = OCIStmtExecute( db->svchp, stmhp, xev->errhp
		,0  // no actual fetch
		, 0, (CONST OCISnapshot*)NULL, (OCISnapshot*)NULL,
		OCI_DEFAULT );
    RWL_OATIME_END
    if ( OCI_SUCCESS == xev->status)
    {
      rwlgetdefines(xev, stmhp, xev->errhp, sq, cloc, fname);
    }
    else
    { 
      ub2 poffset = 0;
      rwldberror2(xev, cloc, sq, fname);
      if (bit(xev->rwm->m4flags,RWL_P4_SQLLOGGING))
	rwlsqllogging(xev, cloc, sq, fname);
      if (bit(db->flags, RWL_DB_DEAD))
	goto failure;
      if (!bit(sq->flags, RWL_SQFLAG_IGNERR) 
	  && (OCI_SUCCESS == OCIAttrGet(stmhp, OCI_HTYPE_STMT
	     , &poffset, 0
	     , OCI_ATTR_PARSE_ERROR_OFFSET, xev->errhp))
	&& poffset)
	rwlsqlerrlin(xev, cloc, sq, poffset);
      goto failure;
    }
#   ifdef RWL_WORKAROUND_34952567 

    // Do the prefetch now

    if (!dasiz)
    {
      if (bit(sq->flags, RWL_SQFLAG_ARMEM))
      {
	ub4 amem = RWL_SQL_ARRAY_MEMORY;
	if (OCI_SUCCESS != (xev->status = 
	   OCIAttrSet (stmhp, OCI_HTYPE_STMT
	       , &amem, sizeof(amem)
	       , OCI_ATTR_PREFETCH_MEMORY, xev->errhp)))
	  { rwldberror2(xev, cloc, sq, fname); goto failure; }
      }
      if (OCI_SUCCESS != (xev->status = 
	 OCIAttrSet (stmhp, OCI_HTYPE_STMT
	     , &asiz, sizeof(asiz)
	     , OCI_ATTR_PREFETCH_ROWS, xev->errhp)))
	{ rwldberror2(xev, cloc, sq, fname); goto failure; }
    }
    else
    {
      // turn off prefetch when user asked for array fetch
      // as we don't want both
      ub4 aa = 0;
      if (OCI_SUCCESS != (xev->status = 
	 OCIAttrSet (stmhp, OCI_HTYPE_STMT
	     , &aa, sizeof(aa)
	     , OCI_ATTR_PREFETCH_MEMORY, xev->errhp)))
	{ rwldberror2(xev, cloc, sq, fname); goto failure; }

      if (OCI_SUCCESS != (xev->status = 
	 OCIAttrSet (stmhp, OCI_HTYPE_STMT
	     , &aa, sizeof(aa)
	     , OCI_ATTR_PREFETCH_ROWS, xev->errhp)))
	{ rwldberror2(xev, cloc, sq, fname); goto failure; }
    }
#endif

  }

  if (bit(xev->tflags, RWL_DEBUG_BINDEF) && !bit(sq->flags, RWL_SQLFLAG_BDPRT))
  {
    bis(sq->flags, RWL_SQLFLAG_BDPRT);
    rwldebugcode(xev->rwm,cloc,"binds and defines for %s", sq->vname);
    bd = sq->bindef;
    while (bd)
    {
      switch (bd->bdtyp)
      {
	case RWL_BINDOUT_POS:
	  rwldebugcode(xev->rwm,cloc,"bindout %d %s", bd->pos, bd->vname);
	break;

	case RWL_BINDOUT_NAME:
	  rwldebugcode(xev->rwm,cloc,"bindout %s %s", bd->bname, bd->vname);
	break;

	case RWL_BIND_POS:
	  rwldebugcode(xev->rwm,cloc,"bind %d %s", bd->pos, bd->vname);
	break;

	case RWL_BIND_NAME:
	  rwldebugcode(xev->rwm,cloc,"bind %s %s", bd->bname, bd->vname);
	break;

	case RWL_DEFINE:
	  rwldebugcode(xev->rwm,cloc,"define %d %s", bd->pos, bd->vname);
	break;

	default:
	  rwldebugcode(xev->rwm,cloc,"unexpected %d %d %s %s"
	  , bd->bdtyp, bd->pos
	  , bd->bname ? bd->bname : (text *)"no name"
	  , bd->vname ? bd->vname : (text *)"no variable");
	break;
      }
    bd = bd->next;
    }
  }

  dc=0;
  bd = sq->bindef;
  // walk through defines
  while (bd)
  {
    if (RWL_DEFINE==bd->bdtyp)
    { 
      sb4 vno;
      /* ordinary define against rwloadsim variables */
      vno = rwlfindvarug2(xev, bd->vname, &bd->vguess, fname);
      if (vno<0)
      {
	rwlexecsevere(xev, cloc, "[rwlexecsql-bindef2:%d;%s;%s]", vno, sq->vname, bd->vname);
	goto failure;
      }
      pnum = rwlnuminvar(xev, xev->evar+vno);
      if (bit(xev->evar[vno].flags,RWL_IDENT_GLOBAL))
      {
	rwlexecsevere(xev, cloc, "[rwlexecsql-defglob:%s;%s;%s]"
	  , xev->evar[vno].vname, sq->vname, bd->vname);
	goto failure;
      }
      /* make sure strings are allocated */
      if ((bd->vtype == RWL_TYPE_STR || bd->vtype == RWL_TYPE_RAW)
        && pnum->vsalloc == RWL_SVALLOC_NOT)
	rwlinitstrvar(xev, pnum);
    }
    bd->defhp = 0;
    /* make the actual define */
    switch (bd->bdtyp)
    {
      case RWL_DIRDEFINE:
        dc++;
	switch(bd->vtype)
	{
	  case RWL_TYPE_INT:
	    xev->status = RWLDefineByPos(stmhp, &bd->defhp, xev->errhp, bd->pos
			   ,  bd->pvar,  sizeof(sb8), SQLT_INT
			   ,  bd->pind, 0, 0, OCI_DEFAULT);
	    if (OCI_SUCCESS != xev->status)
	    { rwldberror2(xev, cloc, sq, fname); goto failure; }
	  break;

	  case RWL_TYPE_DBL:
	    xev->status = RWLDefineByPos(stmhp, &bd->defhp, xev->errhp, bd->pos
			   ,  bd->pvar,  sizeof(double), SQLT_FLT
			   ,  bd->pind, 0, 0, OCI_DEFAULT);
	    if (OCI_SUCCESS != xev->status)
	    { rwldberror2(xev, cloc, sq, fname); goto failure; }
	  break;

	  case RWL_TYPE_STR:
	    xev->status = RWLDefineByPos(stmhp, &bd->defhp, xev->errhp, bd->pos
			   ,  bd->pvar, pnum->slen, SQLT_STR
			   ,  bd->pind, 0, 0, OCI_DEFAULT);
	    if (OCI_SUCCESS != xev->status)
	    { rwldberror2(xev, cloc, sq, fname); goto failure; }
	  break;

	  default:
	    rwlexecsevere(xev, cloc, "[rwlexecsql-badtype4:%s;%s;%d]"
	       , sq->vname, bd->vname, bd->vtype);
	  break;
	}
      break;

      case RWL_DEFINE:
	if (dasiz) // define/fetch array
	{
	  switch(bd->vtype)
	  {
	    case RWL_TYPE_INT:
	      xev->status = RWLDefineByPos(stmhp, &bd->defhp, xev->errhp, bd->pos
			     , sq->abd[dc] ,  sizeof(sb8), SQLT_INT
			     , sq->ari[dc], 0, 0, OCI_DEFAULT);
	      if (OCI_SUCCESS != xev->status)
	      { rwldberror2(xev, cloc, sq, fname); goto failure; }
	    break;

	    case RWL_TYPE_DBL:
	      xev->status = RWLDefineByPos(stmhp, &bd->defhp, xev->errhp, bd->pos
			     , sq->abd[dc] ,  sizeof(sb8), SQLT_FLT
			     , sq->ari[dc], 0, 0, OCI_DEFAULT);
	      if (OCI_SUCCESS != xev->status)
	      { rwldberror2(xev, cloc, sq, fname); goto failure; }
	    break;

	    case RWL_TYPE_RAW:
	      xev->status = RWLDefineByPos(stmhp, &bd->defhp, xev->errhp, bd->pos
			     ,  sq->abd[dc], (sb4)bd->slen, SQLT_LBI
			     ,  sq->ari[dc], 0, 0, OCI_DEFAULT);
	      if (OCI_SUCCESS != xev->status)
	      { rwldberror2(xev, cloc, sq, fname); goto failure; }
	    break;

	    case RWL_TYPE_STR:
	      xev->status = RWLDefineByPos(stmhp, &bd->defhp, xev->errhp, bd->pos
			     ,  sq->abd[dc], (sb4)bd->slen, SQLT_STR
			     ,  sq->ari[dc], 0, 0, OCI_DEFAULT);
	      if (OCI_SUCCESS != xev->status)
	      { rwldberror2(xev, cloc, sq, fname); goto failure; }
	    break;

	    case RWL_TYPE_BLOB:
	      xev->status = RWLDefineByPos(stmhp, &bd->defhp, xev->errhp, bd->pos
			     ,  sq->abd[dc], 0, SQLT_BLOB
			     ,  0, 0, 0, OCI_DEFAULT);
	      if (OCI_SUCCESS != xev->status)
	      { rwldberror2(xev, cloc, sq, fname); goto failure; }
	    break;

	    case RWL_TYPE_CLOB:
	      xev->status = RWLDefineByPos(stmhp, &bd->defhp, xev->errhp, bd->pos
			     ,  sq->abd[dc], 0, SQLT_CLOB
			     ,  0, 0, 0, OCI_DEFAULT);
	      if (OCI_SUCCESS != xev->status)
	      { rwldberror2(xev, cloc, sq, fname); goto failure; }
	    break;

	    default:
	      rwlexecsevere(xev, cloc, "[rwlexecsql-badtype4:%s;%s;%d]"
		 , sq->vname, bd->vname, bd->vtype);
	    break;
	  }
	}
	else // not using define/fetch array
	{
	  switch(bd->vtype)
	  {
	    case RWL_TYPE_INT:
	      xev->status = RWLDefineByPos(stmhp, &bd->defhp, xev->errhp, bd->pos
			     ,  &pnum->ival,  sizeof(pnum->ival), SQLT_INT
			     ,  &pnum->isnull, 0, 0, OCI_DEFAULT);
	      if (OCI_SUCCESS != xev->status)
	      { rwldberror2(xev, cloc, sq, fname); goto failure; }
	    break;

	    case RWL_TYPE_DBL:
	      xev->status = RWLDefineByPos(stmhp, &bd->defhp, xev->errhp, bd->pos
			     ,  &pnum->dval,  sizeof(pnum->dval), SQLT_FLT
			     ,  &pnum->isnull, 0, 0, OCI_DEFAULT);
	      if (OCI_SUCCESS != xev->status)
	      { rwldberror2(xev, cloc, sq, fname); goto failure; }
	    break;

	    case RWL_TYPE_RAW:
	      xev->status = RWLDefineByPos(stmhp, &bd->defhp, xev->errhp, bd->pos
			     ,  pnum->sval, (sb4)pnum->slen, SQLT_LBI
			     ,  &pnum->isnull, &pnum->alen, 0, OCI_DEFAULT);
	      if (OCI_SUCCESS != xev->status)
	      { rwldberror2(xev, cloc, sq, fname); goto failure; }
	    break;

	    case RWL_TYPE_STR:
	      xev->status = RWLDefineByPos(stmhp, &bd->defhp, xev->errhp, bd->pos
			     ,  pnum->sval, (sb4)pnum->slen, SQLT_STR
			     ,  &pnum->isnull, 0, 0, OCI_DEFAULT);
	      if (OCI_SUCCESS != xev->status)
	      { rwldberror2(xev, cloc, sq, fname); goto failure; }
	    break;

	    case RWL_TYPE_BLOB:
	      xev->status = RWLDefineByPos(stmhp, &bd->defhp, xev->errhp, bd->pos
			     ,  &pnum->vptr, 0, SQLT_BLOB
			     ,  0, 0, 0, OCI_DEFAULT);
	      if (OCI_SUCCESS != xev->status)
	      { rwldberror2(xev, cloc, sq, fname); goto failure; }
	    break;

	    case RWL_TYPE_CLOB:
	      xev->status = RWLDefineByPos(stmhp, &bd->defhp, xev->errhp, bd->pos
			     ,  &pnum->vptr, 0, SQLT_CLOB
			     ,  0, 0, 0, OCI_DEFAULT);
	      if (OCI_SUCCESS != xev->status)
	      { rwldberror2(xev, cloc, sq, fname); goto failure; }
	    break;

	    default:
	      rwlexecsevere(xev, cloc, "[rwlexecsql-badtype3:%s;%s;%d]"
		 , sq->vname, bd->vname, bd->vtype);
	    break;
	  }
	}
	dc++;
      break;

    }
  bd=bd->next; i++;
  }

  if (dc != sq->defcount)
    rwlexecsevere(xev, cloc, "[rwlexecsql-defcountmismatch:%s;%d;%d]", sq->vname, dc, sq->defcount);
  if (bc != sq->bincount+sq->outcount)
    rwlexecsevere(xev, cloc, "[rwlexecsql-bincountmismatch:%s;%d;%d;%d]"
    	, sq->vname, bc, sq->bincount, sq->outcount);

  rwldbclearerr(xev);

  // Now execute

  if (dasiz) // array fetch
  {
    if (bit(sq->flags, RWL_SQLFLAG_IDUSE))
    {
      rwlexecsevere(xev, cloc, "[rwlexecsql-arrdefimplicit:%s;0x%x;0x%x]", sq->vname, sq->flags, db->flags);
      goto failure;
    }
    // Are we doing cqn registration
    if (bit(db->flags, RWL_DB_CQNREG) && db->subhp)
    {
      if ( OCI_SUCCESS != 
	   (xev->status = OCIAttrSet( stmhp, OCI_HTYPE_STMT, db->subhp
	   , 0, OCI_ATTR_CHNF_REGHANDLE, xev->errhp)))
      { 
	rwldberror2(xev, cloc, sq, fname);
	goto failure;
      }
    }
    RWL_OATIME_BEGIN(xev, cloc, db->seshp, sq, fname, 0)
      xev->status = OCIStmtExecute( db->svchp, stmhp, xev->errhp
	     , dasiz
	     , 0, (CONST OCISnapshot*)NULL, (OCISnapshot*)NULL,
	     OCI_DEFAULT );
    RWL_OATIME_END
    st = OCIAttrGet(stmhp, OCI_HTYPE_STMT
       , &rftchd, 0
       , OCI_ATTR_ROWS_FETCHED, xev->errhp);
    if (OCI_SUCCESS != st)
    {
      rwlexecsevere(xev, cloc, "[rwlexecsql-getrftchd:%d;%s;0x%x;0x%x]", st, sq->vname, sq->flags, db->flags);
      goto failure;
    }
  }
  else
  {
    if (asiz
        && bit(sq->flags, RWL_SQLFLAG_IDUSE)
        && !bit(sq->flags, RWL_SQLFLAG_IDDONE|RWL_SQFLAG_LEXPLS))
    {
      // implicit defines were done above, so we also have done OCIStmtExecute without fetch
      // and therefore do a fetch now
      // and we also set the flag saying implicit define is complete
      bis(sq->flags, RWL_SQLFLAG_IDDONE);
      RWL_OATIME_BEGIN(xev, cloc, db->seshp, sq, fname, 1)
	xev->status = OCIStmtFetch2(stmhp, xev->errhp, 1, OCI_FETCH_NEXT, 0, OCI_DEFAULT);
      RWL_OATIME_END
    }
    else
    {
      // Are we doing cqn registration
      if (bit(db->flags, RWL_DB_CQNREG) && db->subhp)
      {
	if ( OCI_SUCCESS != 
	     (xev->status = OCIAttrSet( stmhp, OCI_HTYPE_STMT, db->subhp
	     , 0, OCI_ATTR_CHNF_REGHANDLE, xev->errhp)))
	{ 
	  rwldberror2(xev, cloc, sq, fname);
	  goto failure;
	}
      }
      // with no implicit defines, we just execute and fetch in one go
      RWL_OATIME_BEGIN(xev, cloc, db->seshp, sq, fname, 0)
	xev->status = OCIStmtExecute( db->svchp, stmhp, xev->errhp
	     ,1 /* prefetch or bind array */
	     , 0, (CONST OCISnapshot*)NULL, (OCISnapshot*)NULL,
	     OCI_DEFAULT );
      RWL_OATIME_END
    }
  }
#ifdef RWL_USE_SQL_ID
  if (!bit(sq->flags, RWL_SQFLAG_GOTID))
  {
    sq->sqlid[0] = 0;
    if (rwl122ormore(xev->rwm))
    {
      text *attrsqlid;
      ub4 attrsqlidlen;
      st = OCIAttrGet(stmhp, OCI_HTYPE_STMT
	 , &attrsqlid, &attrsqlidlen
	 , OCI_ATTR_SQL_ID, xev->errhp);
      if (OCI_SUCCESS != st)
      {
	rwlexecsevere(xev, cloc, "[rwlexecsql-getsqlid:%d;%s;0x%x;0x%x]", st, sq->vname, sq->flags, db->flags);
	goto failure;
      }
      rwlstrnncpy(sq->sqlid, attrsqlid, RWL_SQL_ID_LEN+1);
    }
    if (!*sq->sqlid) // Happens when connected to pre-12.2
    {
      rwlstrcpy(sq->sqlid, (text*) "!sqlid < 12.2");
    }
    bis(sq->flags, RWL_SQFLAG_GOTID);
  }
  if (bit(xev->tflags, RWL_THR_DSQL))
  {
    fprintf(stderr, 
     ", done sql_id=%s, status=%d%s"
      , sq->sqlid, xev->status, xev->rwm->lineend);
    fflush(stderr);
  }
#else
  if (bit(xev->tflags, RWL_THR_DSQL))
  {
    fprintf(stderr, ", done status=%d%s", xev->status, xev->rwm->lineend);
    fflush(stderr);
  }
#endif
  if (bit(xev->rwm->m4flags,RWL_P4_SQLLOGGING))
    rwlsqllogging(xev, cloc, sq, fname);
  rowcnt = found = 0;
  if (xev->status == OCI_SUCCESS || xev->status == OCI_SUCCESS_WITH_INFO)
  {
    rowcnt = found=1;
    /*ASSERT*/
    if (dasiz && rftchd != dasiz)
    {
      rwlexecsevere(xev, cloc, "[rwlexecsql-arfetdif:%d;%d;;%s;0x%x;0x%x]", dasiz, rftchd, sq->vname, sq->flags, db->flags);
      goto failure;
    }
  }
  else if (xev->status != OCI_NO_DATA)
  { 
    ub2 poffset = 0;
    rwldberror3(xev, cloc, sq, fname, bit(sq->flags, RWL_SQFLAG_IGNERR));
    if (bit(db->flags, RWL_DB_DEAD))
      goto failure;
    if (!bit(sq->flags, RWL_SQFLAG_IGNERR) 
        && (OCI_SUCCESS == OCIAttrGet(stmhp, OCI_HTYPE_STMT
	   , &poffset, 0
	   , OCI_ATTR_PARSE_ERROR_OFFSET, xev->errhp))
      && poffset)
      rwlsqlerrlin(xev, cloc, sq, poffset);
    goto failure; 
  }
  else // OCI_NO_DATA
  {
    rwldberror3(xev, cloc, sq, fname, RWL_DBE3_NOPRINT);
    if (dasiz && rftchd > 0) // semi filled array fetch
      rowcnt = found=1;
  }

  /* get various attributes */
  xev->status = OCIAttrGet(stmhp, OCI_HTYPE_STMT
	   , &stmtype, 0
	   , OCI_ATTR_STMT_TYPE, xev->errhp);
  if (OCI_SUCCESS != xev->status)
  { rwldberror2(xev, cloc, sq, fname); goto failure; }

  numcols = 0;
  /* set flags based on statemet type */
  switch (stmtype)
  {
    case OCI_STMT_SELECT:
      {
	xev->status = OCIAttrGet(stmhp, OCI_HTYPE_STMT
		 , &numcols, 0
		 , OCI_ATTR_PARAM_COUNT, xev->errhp);
	if (OCI_SUCCESS != xev->status)
	{ rwldberror2(xev, cloc, sq, fname); goto failure; }
#if (RWL_OCI_VERSION >= 12)
	{
	  boolean istrans;
	  xev->status = OCIAttrGet(db->seshp, OCI_HTYPE_SESSION
		   , &istrans, 0
		   ,  OCI_ATTR_TRANSACTION_IN_PROGRESS, xev->errhp);
	  if (OCI_SUCCESS != xev->status)
	  { 
	    rwldberror2(xev, cloc, sq, fname);
	    goto failure;
	  }
	  else
	  {
	    if (istrans)
	      bis(db->flags, RWL_DB_DIDDML);
	  }
	}
#endif
      }
    break;

    case OCI_STMT_UPDATE:
    case OCI_STMT_DELETE:
    case OCI_STMT_INSERT:
      bis(db->flags, RWL_DB_DIDDML);
      bis(sq->flags, RWL_SQFLAG_ISDML);
    break;

    case OCI_STMT_CREATE:
    case OCI_STMT_DROP:
    case OCI_STMT_ALTER:
      /* DDL does implicit commit, so clear the plsql and dml flags */
      bis(db->flags, RWL_DB_DIDDDL);
      bic(db->flags, RWL_DB_DIDPLSQL|RWL_DB_DIDDML);
      bis(sq->flags, RWL_SQFLAG_ISDDL);
    break;

    case OCI_STMT_BEGIN:
    case OCI_STMT_DECLARE:
    //case OCI_STMT_CALL:
      bis(db->flags, RWL_DB_DIDPLSQL);
      bis(sq->flags, RWL_SQFLAG_ISPLS);
      /*assert and report but otherwise ignore discrepancy
       * when lexer and OCI disagree upon static sql being PL/SQL */
      if (!bit(sq->flags, RWL_SQFLAG_LEXPLS) && !bit(sq->flags, RWL_SQFLAG_DYNAMIC))
	rwlexecsevere(xev, cloc, "[rwlexecsql-plsqlcheck:%s;0x%x;0x%x]", sq->vname, sq->flags, db->flags);
    break;
  }


  if (sq->defcount != numcols)
    rwlexecerror(xev, cloc, RWL_ERROR_DEFINE_NUM_MISMATCH, numcols, sq->defcount);

  if (doloop)
  {
    
    if (!sq->defcount || !numcols)
    { 
      rwlexecerror(xev, cloc, RWL_ERROR_ATTEMPT_CURSOR_NONQUERY, sq->vname);
      goto failure;
    }

    /* we prefetch one row during execute above */
    if (bit(xev->tflags, RWL_THR_DSQL))
    {
      rwldebugcode(xev->rwm,cloc,"after fetch first %s found:%d rowcnt:%d", sq->vname, found, rowcnt);
    }
    

    raix = 0; // clear index to array fetch
    while (found)
    {
      ub1 curcan = 0;
      /* create other representations and handle NULL */
      bd = sq->bindef; i=0;
      dc = 0;
      while (bd)
      { 
	if (!rwlbdisdir(bd))
	{
	  rwl_identifier *pi = xev->evar+bd->vguess;
	  pnum = rwlnuminvar(xev, pi);

	  switch (bd->vtype)
	  {
	    case RWL_TYPE_BLOB:
	    case RWL_TYPE_CLOB:
	      pi->vdata = db; // such that READ/WRITE LOB has it
	    default:
	    break;
	  }
	}

	/* copy define values */
	if (bd->bdtyp == RWL_DEFINE) 
	{
	  switch(bd->vtype)
	  {
	    case RWL_TYPE_CLOB:
	      if (dasiz)
	      {
		sb4 st =
		  OCILobAssign ( xev->rwm->envhp, xev->errhp
		  , ((OCILobLocator **)sq->abd[dc])[raix]
		  , (OCILobLocator **)&pnum->vptr );
		if (OCI_SUCCESS != st)
		{
		  rwlexecsevere(xev, cloc, "[rwlexecsql-lobassign:%s;%s;%d;%d;%d]"
		   , sq->vname, bd->vname, st, dc, raix);
		}
		pnum->isnull = ((sb2 *)sq->ari[dc])[raix];
	      }
	    break;
	      
	    case RWL_TYPE_INT:
	      if (dasiz)
	      {
		pnum->ival = ((sb8 *)sq->abd[dc])[raix];
		pnum->isnull = ((sb2 *)sq->ari[dc])[raix];
	      }
	      if (pnum->isnull != 0 && pnum->isnull != RWL_ISNULL)
		pnum->isnull = 0; /* TODO this ignores truncated results */
	      if (RWL_ISNULL == pnum->isnull)
	      {
		pnum->dval = 0.0;
		pnum->ival = 0;
		pnum->sval[0] = 0;
	      }
	      else
	      {
		pnum->dval = (double) pnum->ival;
		rwlsnpiformat(xev->rwm, pnum->sval, pnum->slen-1, pnum->ival);
	      }
	    break;

	    case RWL_TYPE_DBL:
	      if (dasiz)
	      {
		pnum->dval = ((double *)sq->abd[dc])[raix];
		pnum->isnull = ((sb2 *)sq->ari[dc])[raix];
	      }
	      if (pnum->isnull != 0 && pnum->isnull != RWL_ISNULL)
		pnum->isnull = 0; /* TODO this ignores truncated results */
	      if (RWL_ISNULL == pnum->isnull)
	      {
		pnum->dval = 0.0;
		pnum->ival = 0;
		pnum->sval[0] = 0;
	      }
	      else
	      {
		pnum->ival = (sb8) round(pnum->dval);
		rwlsnpdformat(xev->rwm, pnum->sval, pnum->slen-1, pnum->dval);
	      }
	    break;

	    case RWL_TYPE_RAW:
	      switch (pnum->isnull)
	      {
		case RWL_ISNULL: /* (-1) */
		  pnum->sval[0]=0; /* just make the string empty */
		break;

		case 0:
		  if (pnum->alen < pnum->slen)
		    pnum->sval[pnum->alen] = 0;
		  else
		    pnum->sval[pnum->slen] = 0;
		break;

		case (-2): 
		  rwlexecsevere(xev, cloc, "[rwlexecsql-toolong2:%s;%s;%d]"
		   , sq->vname, bd->vname, pnum->slen);
		break;

		default:
		  rwlexecsevere(xev, cloc, "[rwlexecsql-toolong1:%s;%s;%d;%d]"
		   , sq->vname, bd->vname, pnum->isnull,pnum->slen);
		break;
	      }  
	      pnum->dval=rwlatof(pnum->sval);
	      pnum->ival=rwlatosb8(pnum->sval);
	      pnum->isnull = 0; /* rwloadsim doesn't have empty string as NULL */
	    break;

	    case RWL_TYPE_STR:
	      if (dasiz)
	      {
		rwlstrnncpy(pnum->sval, (text *)sq->abd[dc] + raix*bd->slen, bd->slen); 
		pnum->isnull = ((sb2 *)sq->ari[dc])[raix];
	      }
	      switch (pnum->isnull)
	      {
		case RWL_ISNULL: /* (-1) */
		  pnum->sval[0]=0; /* just make the string empty */
		break;

		case 0:
		break;

		/* TODO The next two are severe errors
		 * until we provide return codes in addition
		 * to the indicator 
		 *
		 * With return code and handling or OCI_SUCCESS_WITH_INFO
		 * we can provide warnings about truncated data.  So at
		 * present, the user must create sufficiently long
		 * string variables, or ORA-01406 will be seen
		 */
		case (-2): 
		  rwlexecsevere(xev, cloc, "[rwlexecsql-toolong3:%s;%s;%d]"
		   , sq->vname, bd->vname, pnum->slen);
		break;

		default:
		  rwlexecsevere(xev, cloc, "[rwlexecsql-toolong6:%s;%s;%d;%d]"
		   , sq->vname, bd->vname, pnum->isnull,pnum->slen);
		break;
	      }  
	      pnum->dval=rwlatof(pnum->sval);
	      pnum->ival=rwlatosb8(pnum->sval);
	      pnum->isnull = 0; /* rwloadsim doesn't have empty string as NULL */
	    break;

	    case RWL_TYPE_BLOB:
	    case RWL_TYPE_NCLOB:
	    break;

	    default:
	      rwlexecsevere(xev, cloc, "[rwlexecsql-badcopydef:%s;%s;%d]"
                   , sq->vname, bd->vname, bd->vtype);
	    break;
	  }
	dc++;
	}
      bd=bd->next; i++;
      }

      /* recursive call without new stack frame in locals */
      if (bit(xev->tflags, RWL_THR_DSQL))
      {
	rwldebugcode(xev->rwm,cloc,"cursor loop %s calling %d %d", sq->vname, looppc, rowcnt);
      }
      xev->erloc[xev->pcdepth] = cloc;
      if (++xev->pcdepth >= RWL_MAX_CODE_RECURSION)
	rwlexecsevere(xev, cloc, "[rwlexecsql-depth:%d;%s;%d]", xev->pcdepth, sq->vname, looppc);
      else
      {
	// duplicate locals and xqcname
	xev->locals[xev->pcdepth] = xev->locals[xev->pcdepth-1]; 
	xev->xqcname[xev->pcdepth] = xev->xqcname[xev->pcdepth-1];
	/*ASSERT*/
	if (!fname)
	  rwlexecsevere(xev, cloc, "[rwlexecsql-nofname:%d;%s;%d;%s]"
	    , xev->pcdepth, sq->vname, looppc, xev->xqcname[xev->pcdepth-1]);
	/*ASSERT*/
	if (fname && rwlstrcmp(fname, xev->xqcname[xev->pcdepth-1]))
	  rwlexecsevere(xev, cloc, "[rwlexecsql-nofname2:%d;%s;%d;%s;%s]"
	    , xev->pcdepth, sq->vname, looppc, fname, xev->xqcname[xev->pcdepth-1]);
	xev->start[xev->pcdepth] = looppc;
	bic(xev->pcflags[xev->pcdepth], RWL_PCFLAG_CANCELCUR|RWL_PCFLAG_RETINCUR);
	// recurse
	rwlcoderun(xev);
	curcan = !!bit(xev->pcflags[xev->pcdepth], RWL_PCFLAG_CANCELCUR | RWL_PCFLAG_RETINCUR);
	// copy RWL_PCFLAG_RETINCUR to pop level
	if (bit(xev->pcflags[xev->pcdepth],RWL_PCFLAG_RETINCUR))
	  bis(xev->pcflags[xev->pcdepth-1],RWL_PCFLAG_RETINCUR);
      }
      --xev->pcdepth;
      xev->erloc[xev->pcdepth] = 0;

      /* fetch next row */
      rwldbclearerr(xev);
      if (bit(db->flags, RWL_DB_DEAD))
	goto failure;

      if (curcan)
      {
	if (bit(xev->tflags, RWL_THR_DSQL))
	{
	  rwldebugcode(xev->rwm,cloc,"cancel cursor %s found:%d rowcnt:%d", sq->vname, found, rowcnt);
	}
    
	xev->status = OCIStmtFetch2(stmhp, xev->errhp, 0, OCI_FETCH_NEXT, 0, OCI_DEFAULT);
	found = 0;
      }
      else
      {
	if (dasiz)
	{
	  raix++;
	  if (raix < rftchd) // there are more rows in array
	    rowcnt++;
	  else
	  { 
	    if (rftchd < dasiz) // true end of fetch
	      found=0;
	    else
	    { // fetch next batch
	      raix = 0; // reset index
	      RWL_OATIME_BEGIN(xev, cloc, db->seshp, sq, fname, 1)
		xev->status = OCIStmtFetch2(stmhp, xev->errhp, dasiz, OCI_FETCH_NEXT, 0, OCI_DEFAULT);
	      RWL_OATIME_END
	      st = OCIAttrGet(stmhp, OCI_HTYPE_STMT
		 , &rftchd, 0
		 , OCI_ATTR_ROWS_FETCHED, xev->errhp);
	      if (OCI_SUCCESS != st)
	      {
		rwlexecsevere(xev, cloc, "[rwlexecsql-getrftchd2:%d;%s;0x%x;0x%x]"
		, st, sq->vname, sq->flags, db->flags);
		goto failure;
	      }
	      if (bit(xev->tflags, RWL_THR_DSQL))
	      {
		rwldebugcode(xev->rwm,cloc
		  ,"fetched a batch from sql %s at %s@%*s dasiz=%d rftchd=%d status=%d flgs:0x%x"
		  , sq->vname, db->username, db->conlen, db->connect, dasiz, rftchd, xev->status, sq->flags);
	      }
	      if (xev->status == OCI_NO_DATA && 0==rftchd) // end of fetch without any rows in array
	      {
		rwldberror3(xev, cloc, sq, fname, RWL_DBE3_NOPRINT);
		found=0;
	      }
	      else if (xev->status == OCI_NO_DATA && rftchd > 0) // end of fetch, but with non-full array
		rowcnt ++;
	      else if (xev->status != OCI_SUCCESS) // real error
	      { 
		/* We have sometime seen spurious parse error offests */
		ub2 poffset = 0;
		rwldberror2(xev, cloc, sq, fname);
		if (bit(db->flags, RWL_DB_DEAD))
		  goto failure;
		/* get parse error offset ignoring possible error */
		if ( (OCI_SUCCESS == OCIAttrGet(stmhp, OCI_HTYPE_STMT
		       , &poffset, 0
		       , OCI_ATTR_PARSE_ERROR_OFFSET, xev->errhp))
		  && poffset)
		  rwlsqlerrlin(xev, cloc, sq, poffset);
		goto failure; 
	      }
	      else // not end of fetch, i.e. full array and no errors
	      {
		rowcnt ++;
	      }
	    }
	  }
	}
	else // not using array fetch
	{
	  RWL_OATIME_BEGIN(xev, cloc, db->seshp, sq, fname, 1)
	    xev->status = OCIStmtFetch2(stmhp, xev->errhp, 1, OCI_FETCH_NEXT, 0, OCI_DEFAULT);
	  RWL_OATIME_END
	  if (xev->status == OCI_NO_DATA)
	  {
	    rwldberror3(xev, cloc, sq, fname, RWL_DBE3_NOPRINT);
	    found=0;
	  }
	  else if (xev->status != OCI_SUCCESS /*&& xev->status != OCI_SUCCESS_WITH_INFO*/)
	  { 
	    /* We have sometime seen spurious parse error offests */
	    ub2 poffset = 0;
	    rwldberror2(xev, cloc, sq, fname);
	    if (bit(db->flags, RWL_DB_DEAD))
	      goto failure;
	    /* get parse error offset ignoring possible error */
	    if ( (OCI_SUCCESS == OCIAttrGet(stmhp, OCI_HTYPE_STMT
		   , &poffset, 0
		   , OCI_ATTR_PARSE_ERROR_OFFSET, xev->errhp))
	      && poffset)
	      rwlsqlerrlin(xev, cloc, sq, poffset);
	    goto failure; 
	  }
	  else
	  {
	    rowcnt ++;
	  }
	} // dasiz
      } // ! curcan
    } /* while found */

  }
  else // ! doloop
  {

    if (sq->defcount && numcols) /* is query (has defines), fetch */
    {

      /* one row fetched during execute */

      if (found)
      {
	bd = sq->bindef; i=0;
	while (bd)
	{ 
	  rwl_identifier *pi = xev->evar+bd->vguess;
	  switch (bd->vtype)
	  {
	    case RWL_TYPE_BLOB:
	    case RWL_TYPE_CLOB:
	      pi->vdata = db; // such that READ/WRITE LOB has it
	    default:
	    break;
	  }
	bd=bd->next;
	}
      }
      else
      {
	/* no row, report warning and set to null */
	bd = sq->bindef; i=0;
	if (!bit(sq->flags, RWL_SQFLAG_IGNERR))
	  rwlexecerror(xev, cloc, RWL_ERROR_NO_ROWS, sq->vname);
	while (bd)
	{ 
	  if (!rwlbdisdir(bd))
	    pnum = rwlnuminvar(xev, xev->evar+bd->vguess);

	  /* set defines to null */
	  if (bd->bdtyp == RWL_DEFINE) switch(/*pnum*/bd->vtype)
	  {
	    case RWL_TYPE_INT:
	    case RWL_TYPE_DBL:
	      pnum->ival = 0;
	      pnum->dval = 0.0;
	      pnum->isnull = RWL_ISNULL;
	      rwlstrnncpy(pnum->sval, (text *)"", pnum->slen);
	    break;

	    case RWL_TYPE_RAW:
	    case RWL_TYPE_STR:
	      if (pnum->slen<=1)
		rwlexecsevere(xev, cloc, "[rwlexecsql-toolong5:%s;%s;%d]"
		   , sq->vname, bd->vname, pnum->slen);
	      else
	      {
		rwlstrnncpy(pnum->sval, (text *)"", pnum->slen);
		pnum->dval=0.0;
		pnum->ival=0; /* note that we don't consider empty string null */
	      }
	      pnum->isnull = 0;
	    break;
	    
	    default:
		rwlexecsevere(xev, cloc, "[rwlexecsql-badtype1:%s;%s;%d]"
		   , sq->vname, bd->vname, bd->vtype);
	    break;
	  }
	bd=bd->next; i++;
	}
      }
    }
    else // is is a DML or PL/SQL
    {
      bd = sq->bindef; i=0;
      while (bd)
      { 
	switch (bd->bdtyp)
	{
	  case RWL_BINDOUT_POS:
	  case RWL_BINDOUT_NAME:
	  {
	    rwl_identifier *pi = xev->evar+bd->vguess;
	    switch (bd->vtype)
	    {
	      case RWL_TYPE_BLOB:
	      case RWL_TYPE_CLOB:
		pi->vdata = db; // such that READ/WRITE LOB has it
	      break;

	      default:
	      break;
	    }
	  }
	  break;
	}
      bd=bd->next;
      }
    }

    /* make other representation in variables for queries and bindout's in plsql, dml*/
    if (found || bit(sq->flags,RWL_SQFLAG_ISPLS|RWL_SQFLAG_ISDML) ) 
    {
      bd = sq->bindef; i=0;
      while (bd)
      { 
	if (!rwlbdisdir(bd))
	  pnum = rwlnuminvar(xev, xev->evar+bd->vguess);
	  // OLD pnum = &xev->evar[bd->vguess].num; /* guess is now correct */

	/* copy values */ 
	switch (bd->bdtyp)
	{
	  case RWL_DEFINE:
	  case RWL_BINDOUT_POS:
	  case RWL_BINDOUT_NAME:

	  switch(bd->vtype)
	  {
	    case RWL_TYPE_INT:
	      if (pnum->isnull != 0 && pnum->isnull != RWL_ISNULL)
		pnum->isnull = 0; /* TODO this ignores truncated results */
	      if (0==pnum->isnull)
	      {
		pnum->dval = (double) pnum->ival;
		rwlsnpiformat(xev->rwm, pnum->sval, pnum->slen-1, pnum->ival);
	      }
	      else
	      {
		pnum->isnull = RWL_ISNULL;
		pnum->dval = 0.0;
		pnum->ival = 0;
		pnum->sval[0] = 0;
	      }
	    break;

	    case RWL_TYPE_DBL:
	      if (pnum->isnull != 0 && pnum->isnull != RWL_ISNULL)
		pnum->isnull = 0; /* TODO this ignores truncated results */
	      if (0==pnum->isnull)
	      {
		pnum->ival = (sb4) round(pnum->dval);
		rwlsnpdformat(xev->rwm, pnum->sval, pnum->slen-1, pnum->dval);
	      }
	      else
	      {
		pnum->isnull = RWL_ISNULL;
		pnum->dval = 0.0;
		pnum->ival = 0;
		pnum->sval[0] = 0;
	      }
	    break;

	    case RWL_TYPE_RAW:
	      switch (pnum->isnull)
	      {
		case RWL_ISNULL: /* (-1) */
		  pnum->sval[0]=0; /* just make the string empty */
		break;

		case 0:
		  if (pnum->alen < pnum->slen)
		    pnum->sval[pnum->alen] = 0;
		  else
		    pnum->sval[pnum->slen] = 0;
		break;

		case (-2): 
		  rwlexecsevere(xev, cloc, "[rwlexecsql-toolong4:%s;%s;%d]"
		   , sq->vname, bd->vname, pnum->slen);
		break;

		default:
		  rwlexecsevere(xev, cloc, "[rwlexecsql-toolong7:%s;%s;%d;%d]"
		   , sq->vname, bd->vname, pnum->isnull,pnum->slen);
		break;
	      }  
	      pnum->isnull = 0; /* rwloadsim doesn't have empty string as NULL */
	      pnum->dval=rwlatof(pnum->sval);
	      pnum->ival=rwlatosb8(pnum->sval);
	    break;

	    case RWL_TYPE_STR:
	      switch (pnum->isnull)
	      {
		case RWL_ISNULL: /* (-1) */
		  pnum->sval[0]=0; /* just make the string empty */
		break;

		case 0:
		break;

		case (-2): 
		  rwlexecsevere(xev, cloc, "[rwlexecsql-toolong5:%s;%s;%d]"
		   , sq->vname, bd->vname, pnum->slen);
		break;

		default:
		  rwlexecsevere(xev, cloc, "[rwlexecsql-toolong8:%s;%s;%d;%d]"
		   , sq->vname, bd->vname, pnum->isnull,pnum->slen);
		break;
	      }  
	      pnum->isnull = 0; /* rwloadsim doesn't have empty string as NULL */
	      pnum->dval=rwlatof(pnum->sval);
	      pnum->ival=rwlatosb8(pnum->sval);
	    break;

	    case RWL_TYPE_CLOB:
	    case RWL_TYPE_NCLOB:
	    case RWL_TYPE_BLOB:
	      
	    break;

	    default:
	      rwlexecsevere(xev, cloc, "[rwlexecslq-badtyp2:%s;%s;%d]"
		, sq->vname, bd->vname, bd->vtype);
	    break;
	  }
	}
      bd=bd->next; i++;
      }
    }
  }

  failure:
  /* cleanup */

  if (bit(xev->tflags, RWL_THR_DSQL))
  {
    if (bit(sq->flags, RWL_SQFLAG_LEAK))
      rwldebugcode(xev->rwm,cloc,"leak sql %s, dbflgs:0x%x, sqflgs:0x%x"
	, sq->vname, db->flags, sq->flags);
    else
      rwldebugcode(xev->rwm,cloc,"release sql %s, dbflgs:0x%x, sqflgs:0x%x"
	, sq->vname, db->flags, sq->flags);
  }
  if (stmhp && !bit(db->flags, RWL_DB_DEAD) && !bit(sq->flags, RWL_SQFLAG_LEAK))
    (void) OCIStmtRelease(stmhp, xev->errhp,  (text *)0, 0
      , bit(sq->flags,RWL_SQFLAG_NOCURC) ? OCI_STRLS_CACHE_DELETE : OCI_DEFAULT );

  bic(sq->flags, RWL_SQFLAG_LEAK);
  /* release session if acquired */
  if (bit(sq->flags, RWL_SQLFLAG_DYIREL))
    rwldynsrelease(xev, cloc, sq, fname);
  if (tookses)
    rwlreleasesession2(xev, cloc, db, sq, fname);

  
}

/* rwlflushsql flushes an array bind for DML
 * or PL/SQL 
 */
void rwlflushsql2(rwl_xeqenv *xev
, rwl_location *cloc
, rwl_cinfo *db
, rwl_sql *sq
, text *fname)
{
  OCIStmt *stmhp = 0;
  ub2 stmtype;
  ub4 tookses;
  ub4 b;
  rwl_bindef *bd;
  rwl_value dummy; 

  rwldbclearerr(xev);
  /* execute a SQL statement once */
  if (bit(xev->tflags, RWL_THR_DSQL))
  {
    rwldebugcode(xev->rwm,cloc,"executing flush sql %s at %s@%*s aix=%d asiz=%d"
    , sq->vname, db->username, db->conlen, db->connect, sq->aix, sq->asiz);
  }

  if (!sq->aix) /* return if nothing to do */
    return;

  tookses = rwlensuresession2(xev, cloc, db, sq, fname);
  
  if (bit(db->flags, RWL_DB_DEAD))
  {
    //rwlwait(xev, cloc, 1.0);
    goto failure;
  }

  /*assert*/
  if (!db->svchp)
  {
    rwlexecsevere(xev, cloc, "[rwlflushsql-noconn:%s;%s;%*s;%s]"
    , sq->vname, db->username, db->conlen, db->connect, db->pooltext);
    return;
  }

  if (bit(sq->flags, RWL_SQLFLAG_ARDYN))
  {
    rwlexecsevere(xev, cloc, "[rwlflushsql-ampersand:%s;%s;%*s;%s;%s]"
    , sq->vname, db->username, db->conlen, db->connect, db->pooltext, sq->adsql);
    return;
  }

  stmhp = 0;
  if (OCI_SUCCESS != (xev->status = 
      OCIStmtPrepare2( db->svchp, &stmhp, xev->errhp, sq->sql, sq->sqllen,
                      (text *)0, 0, OCI_NTV_SYNTAX, 
#ifdef RWL_USE_SQL_ID
		  // oddly, it causes an extra parse call if we only use
		  // the OCI_PREP2_GET_SQL_ID flag during the first prepare
		  ( (!bit(sq->flags, RWL_SQFLAG_GOTID) && rwl122ormore(xev->rwm))
		  //( (                                     rwl122ormore(xev->rwm))
		    ? OCI_PREP2_GET_SQL_ID
		    : 0
		  ) | 
#endif
		        OCI_DEFAULT )))
  {
    ub2 poffset = 0;
    rwldberror2(xev, cloc, sq, fname);
    if (bit(db->flags, RWL_DB_DEAD))
      return;
    if (!bit(sq->flags, RWL_SQFLAG_IGNERR)
        && (OCI_SUCCESS == OCIAttrGet(stmhp, OCI_HTYPE_STMT
	   , &poffset, 0
	   , OCI_ATTR_PARSE_ERROR_OFFSET, xev->errhp))
      && poffset)
      rwlsqlerrlin(xev, cloc, sq, poffset);
    return;
  }


  /* walk through binds */
  bd = sq->bindef; b=0;
  while (bd)
  {
    /* Clean out binhp & defhp so OCI doesn't attempt reuse old ones */
    bd->binhp = 0;
    bd->defhp = 0;
    /* make the actual bind or define */
    switch (bd->bdtyp)
    {
      case RWL_DEFINE:
	rwlexecsevere(xev, cloc, "[rwlflushsql-doesdefine:%s;%s]", sq->vname, bd->vname);
      break;

      case RWL_BINDOUT_NAME:
      case RWL_BINDOUT_POS:
	rwlexecsevere(xev, cloc, "[rwlflushsql-doesbindout:%s;%s]", sq->vname, bd->vname);
      break;

      case RWL_DIRBIND:
	switch(bd->vtype)
	{
	  case RWL_TYPE_INT:
	    xev->status = RWLBindByPos(stmhp, &bd->binhp, xev->errhp, bd->pos
			   , sq->abd[b] ,  sizeof(sb8), SQLT_INT
			   , sq->ari[b], 0, 0
			   , bit(sq->flags, RWL_SQFLAG_LEXPLS) ? sq->asiz:0
			   , bit(sq->flags, RWL_SQFLAG_LEXPLS) ? &sq->aix:0
			   , OCI_DEFAULT);
	    if (OCI_SUCCESS != xev->status)
	    { rwldberror2(xev, cloc, sq, fname); goto failure; }
	  break;

	  case RWL_TYPE_DBL:
	    xev->status = RWLBindByPos(stmhp, &bd->binhp, xev->errhp, bd->pos
			   ,  sq->abd[b],  sizeof(double), SQLT_FLT
			   ,  sq->ari[b], 0, 0
			   , bit(sq->flags, RWL_SQFLAG_LEXPLS) ? sq->asiz:0
			   , bit(sq->flags, RWL_SQFLAG_LEXPLS) ? &sq->aix:0
			   , OCI_DEFAULT);
	    if (OCI_SUCCESS != xev->status)
	    { rwldberror2(xev, cloc, sq, fname); goto failure; }
	  break;

	  case RWL_TYPE_STR:
	    xev->status = RWLBindByPos(stmhp, &bd->binhp, xev->errhp, bd->pos
			   ,  sq->abd[b], (sb4)bd->slen, SQLT_STR
			   ,  sq->ari[b], 0, 0
			   , bit(sq->flags, RWL_SQFLAG_LEXPLS) ? sq->asiz:0
			   , bit(sq->flags, RWL_SQFLAG_LEXPLS) ? &sq->aix:0
			   , OCI_DEFAULT);
	    if (OCI_SUCCESS != xev->status)
	    { rwldberror2(xev, cloc, sq, fname); goto failure; }
	  break;

	  default:
	    rwlexecsevere(xev, cloc, "[rwlflushsql-badtyp0:%s;%s;%d]"
	      , sq->vname, bd->vname, bd->vtype);
	  break;
	}
      break;

      case RWL_BIND_POS:
	switch(bd->vtype)
	{
	  case RWL_TYPE_INT:
	    xev->status = RWLBindByPos(stmhp, &bd->binhp, xev->errhp, bd->pos
			   , sq->abd[b] ,  sizeof(dummy.ival), SQLT_INT
			   , sq->ari[b], 0, 0
			   , bit(sq->flags, RWL_SQFLAG_LEXPLS) ? sq->asiz:0
			   , bit(sq->flags, RWL_SQFLAG_LEXPLS) ? &sq->aix:0
			   , OCI_DEFAULT);
	    if (OCI_SUCCESS != xev->status)
	    { rwldberror2(xev, cloc, sq, fname); goto failure; }
	  break;

	  case RWL_TYPE_DBL:
	    xev->status = RWLBindByPos(stmhp, &bd->binhp, xev->errhp, bd->pos
			   ,  sq->abd[b],  sizeof(dummy.dval), SQLT_FLT
			   ,  sq->ari[b], 0, 0
			   , bit(sq->flags, RWL_SQFLAG_LEXPLS) ? sq->asiz:0
			   , bit(sq->flags, RWL_SQFLAG_LEXPLS) ? &sq->aix:0
			   , OCI_DEFAULT);
	    if (OCI_SUCCESS != xev->status)
	    { rwldberror2(xev, cloc, sq, fname); goto failure; }
	  break;

	  case RWL_TYPE_STR:
	    xev->status = RWLBindByPos(stmhp, &bd->binhp, xev->errhp, bd->pos
			   ,  sq->abd[b], (sb4)bd->slen, SQLT_STR
			   ,  sq->ari[b], 0, 0
			   , bit(sq->flags, RWL_SQFLAG_LEXPLS) ? sq->asiz:0
			   , bit(sq->flags, RWL_SQFLAG_LEXPLS) ? &sq->aix:0
			   , OCI_DEFAULT);
	    if (OCI_SUCCESS != xev->status)
	    { rwldberror2(xev, cloc, sq, fname); goto failure; }
	  break;

	  case RWL_TYPE_RAW:
	    rwlexecsevere(xev, cloc, "[rwlflushsql-notraw1:%s;%s]"
	      , sq->vname, bd->vname);
	  break;

	  default:
	    rwlexecsevere(xev, cloc, "[rwlflushsql-badtyp1:%s;%s;%d]"
	      , sq->vname, bd->vname, bd->vtype);
	  break;
	}
      break;

      case RWL_BIND_NAME:
	switch(bd->vtype)
	{
	  case RWL_TYPE_INT:
	    xev->status = RWLBindByName(stmhp, &bd->binhp, xev->errhp
			   , bd->bname, (sb4)rwlstrlen(bd->bname)
			   , sq->abd[b] ,  sizeof(dummy.ival), SQLT_INT
			   , sq->ari[b], 0, 0
			   , bit(sq->flags, RWL_SQFLAG_LEXPLS) ? sq->asiz:0
			   , bit(sq->flags, RWL_SQFLAG_LEXPLS) ? &sq->aix:0
			   , OCI_DEFAULT);
	    if (OCI_SUCCESS != xev->status)
	    { rwldberror2(xev, cloc, sq, fname); goto failure; }
	  break;

	  case RWL_TYPE_DBL:
	    xev->status = RWLBindByName(stmhp, &bd->binhp, xev->errhp
			   , bd->bname, (sb4)rwlstrlen(bd->bname)
			   ,  sq->abd[b],  sizeof(dummy.dval), SQLT_FLT
			   ,  sq->ari[b], 0, 0
			   , bit(sq->flags, RWL_SQFLAG_LEXPLS) ? sq->asiz:0
			   , bit(sq->flags, RWL_SQFLAG_LEXPLS) ? &sq->aix:0
			   , OCI_DEFAULT);
	    if (OCI_SUCCESS != xev->status)
	    { rwldberror2(xev, cloc, sq, fname); goto failure; }
	  break;

	  case RWL_TYPE_STR:
	    xev->status = RWLBindByName(stmhp, &bd->binhp, xev->errhp
			   , bd->bname, (sb4)rwlstrlen(bd->bname)
			   ,  sq->abd[b], (sb4)bd->slen, SQLT_STR
			   ,  sq->ari[b], 0, 0
			   , bit(sq->flags, RWL_SQFLAG_LEXPLS) ? sq->asiz:0
			   , bit(sq->flags, RWL_SQFLAG_LEXPLS) ? &sq->aix:0
			   , OCI_DEFAULT);
	    if (OCI_SUCCESS != xev->status)
	    { rwldberror2(xev, cloc, sq, fname); goto failure; }
	  break;

	  case RWL_TYPE_RAW:
	    rwlexecsevere(xev, cloc, "[rwlflushsql-notraw2:%s;%s]"
	      , sq->vname, bd->vname);
	  break;

	  default:
	    rwlexecsevere(xev, cloc, "[rwlflushsql-badtyp2:%s;%s;%d]"
	      , sq->vname, bd->vname, bd->vtype);
	  break;
	}
      break;

    }
    bd=bd->next; b++;
  }

  /* Now do the array execute
   *
   */

  if (bit(sq->flags, RWL_SQFLAG_LEXPLS))
  {
    ; /* TODO not yet */
  }
  rwldbclearerr(xev);

  RWL_OATIME_BEGIN(xev, cloc, db->seshp, sq, fname, 0)
    xev->status = OCIStmtExecute( db->svchp, stmhp, xev->errhp
	   , (bit(sq->flags, RWL_SQFLAG_LEXPLS))? 1 : sq->aix /* PL/SQL or bind array */
	   , 0, (CONST OCISnapshot*)NULL, (OCISnapshot*)NULL,
				       OCI_DEFAULT );
  RWL_OATIME_END
  if (xev->status != OCI_SUCCESS)
  { 
    ub2 poffset = 0;
    if (bit(xev->rwm->m4flags,RWL_P4_SQLLOGGING))
      rwlsqllogging(xev, cloc, sq, fname);
    rwldberror3(xev, cloc, sq, fname, bit(sq->flags, RWL_SQFLAG_IGNERR)); 
    if (bit(db->flags, RWL_DB_DEAD))
      goto failure;
    if (!bit(sq->flags, RWL_SQFLAG_IGNERR)
        && (OCI_SUCCESS == OCIAttrGet(stmhp, OCI_HTYPE_STMT
	   , &poffset, 0
	   , OCI_ATTR_PARSE_ERROR_OFFSET, xev->errhp))
      && poffset)
      rwlsqlerrlin(xev, cloc, sq, poffset);
    goto failure; 
  }

  /* get various attributes */
#ifdef RWL_USE_SQL_ID
  if (!bit(sq->flags, RWL_SQFLAG_GOTID))
  {
    sq->sqlid[0] = 0;
    if (rwl122ormore(xev->rwm))
    {
      text *attrsqlid;
      ub4 attrsqlidlen;
      sb4 st;
      st = OCIAttrGet(stmhp, OCI_HTYPE_STMT
	 , &attrsqlid, &attrsqlidlen
	 , OCI_ATTR_SQL_ID, xev->errhp);
      if (OCI_SUCCESS != st)
      {
	rwlexecsevere(xev, cloc, "[rwlflush2-getsqlid:%d;%s;0x%x;0x%x]"
	, st, sq->vname, sq->flags, db->flags);
	goto failure;
      }
      rwlstrnncpy(sq->sqlid, attrsqlid, RWL_SQL_ID_LEN+1);
    }
    if (!*sq->sqlid) // Happens when connected to pre-12.2
    {
      rwlstrcpy(sq->sqlid, (text*) "!sqlid < 12.2");
    }
    bis(sq->flags, RWL_SQFLAG_GOTID);
  }
  if (bit(xev->tflags, RWL_THR_DSQL))
  {
    rwldebugcode(xev->rwm,cloc, ", flush2 sql_id=%s%s", sq->sqlid, xev->rwm->lineend);
  }
#endif
  if (bit(xev->rwm->m4flags,RWL_P4_SQLLOGGING))
    rwlsqllogging(xev, cloc, sq, fname);
  xev->status = OCIAttrGet(stmhp, OCI_HTYPE_STMT
	   , &stmtype, 0
	   , OCI_ATTR_STMT_TYPE, xev->errhp);
  if (OCI_SUCCESS != xev->status)
  { 
    rwldberror2(xev, cloc, sq, fname); 
    goto failure;
  }

  /* set flags based on statemet type */
  switch (stmtype)
  {

    case OCI_STMT_UPDATE:
    case OCI_STMT_DELETE:
    case OCI_STMT_INSERT:
      bis(db->flags, RWL_DB_DIDDML);
      bis(sq->flags, RWL_SQFLAG_ISDML);
    break;

    case OCI_STMT_BEGIN:
    case OCI_STMT_DECLARE:
    //case OCI_STMT_CALL:
      bis(db->flags, RWL_DB_DIDPLSQL);
      bis(sq->flags, RWL_SQFLAG_ISPLS);
      /*assert and report but otherwise ignore discrepancy
       * when lexer and OCI disagree upon this being PL/SQL */
      if (!bit(sq->flags, RWL_SQFLAG_LEXPLS))
	rwlexecsevere(xev, cloc, "[rwlflushsql2-plsqlcheck:%s;0x%x;0x%x]"
	, sq->vname, sq->flags, db->flags);
    break;
  }


  failure:
  /* cleanup */

  if (stmhp
  && !bit(db->flags, RWL_DB_DEAD)
  && !bit(sq->flags, RWL_SQFLAG_LEAK)
  )
    (void) OCIStmtRelease(stmhp, xev->errhp,  (text *)0, 0
      , bit(sq->flags,RWL_SQFLAG_NOCURC) ? OCI_STRLS_CACHE_DELETE : OCI_DEFAULT );

  bic(sq->flags, RWL_SQFLAG_LEAK);

  /* release session if acquired */
  if (tookses)
    rwlreleasesession2(xev, cloc, db, sq, fname);

  sq->aix = 0; /* it has been flushed */
  
  if (  bit(sq->flags, RWL_SQFLAG_DYNAMIC) // if dynamic
     && 0==sq->defcount	// and no define (i.e. not query)
     && 0==sq->outcount // and no outbind
     && 1<=sq->bincount // at least one bind
     )
  {
    rwlfreeabd(xev, cloc, sq);
    bic(sq->flags, RWL_SQFLAG_ARRAYB);
  }


  
}

/* These two are the external calls to the above */

/* all that don't require fetch loop */
void rwlsimplesql2(rwl_xeqenv *xev
, rwl_location *cloc
, rwl_cinfo *db
, rwl_sql *sq
, text *fname)
{
  OCIStmt *stmhp = 0;
  ub4 tookses = 0;
  
  if (bit(xev->rwm->m2flags, RWL_P2_NOEXEC))
  {
    rwlerror(xev->rwm, RWL_ERROR_NOEXEC);
    return;
  }

  if (bit(sq->flags, RWL_SQLFLAG_ARDYN))
    rwldynarreplace(xev, cloc, sq, fname);

  // See if implicit bind is needed
  if (bit(sq->flags, RWL_SQLFLAG_IBUSE) && !bit(sq->flags, RWL_SQLFLAG_IBDONE))
  {
    tookses = rwlensuresession2(xev, cloc, db, sq, fname);

    if (OCI_SUCCESS != (xev->status = 
	OCIStmtPrepare2( db->svchp, &stmhp, xev->errhp, sq->sql, sq->sqllen,
			(text *)0, 0, OCI_NTV_SYNTAX, 
			OCI_DEFAULT )))
    {
      ub2 poffset = 0;
      rwldberror2(xev, cloc, sq, fname);
      if (bit(db->flags, RWL_DB_DEAD))
	goto failure;
      if (!bit(sq->flags, RWL_SQFLAG_IGNERR) 
	  && (OCI_SUCCESS == OCIAttrGet(stmhp, OCI_HTYPE_STMT
	     , &poffset, 0
	     , OCI_ATTR_PARSE_ERROR_OFFSET, xev->errhp))
	&& poffset)
	rwlsqlerrlin(xev, cloc, sq, poffset);
      goto failure;
    }
    rwlgetbinds(xev, stmhp, xev->errhp, sq, cloc, fname);
    bis(sq->flags, RWL_SQLFLAG_IBDONE);
    if (  
          1<=sq->asiz  	  // array set
       && 0==sq->defcount // and no define (i.e. not query)
       && 0==sq->outcount // and no outbind
       && 1<=sq->bincount // at least one bind
       && 0==sq->aix      // start of array
       )
      {
	bis(sq->flags, RWL_SQFLAG_ARRAYB);
	rwlallocabd(xev, cloc, sq);
      }

    if (stmhp)
      (void) OCIStmtRelease(stmhp, xev->errhp,  (text *)0, 0
	, OCI_DEFAULT );
  }
  
  if ( !bit(sq->flags, RWL_SQFLAG_ARRAYB) // not done above
     && bit(sq->flags, RWL_SQFLAG_DYNAMIC) // if dynamic
     && 1<=sq->asiz  	// and array set
     && 0==sq->defcount	// and no define (i.e. not query)
     && 0==sq->outcount // and no outbind
     && 1<=sq->bincount // at least one bind
     && 0==sq->aix      // start of array
     )
  {
    bis(sq->flags, RWL_SQFLAG_ARRAYB);
    rwlallocabd(xev, cloc, sq);
  }

  if (!bit(sq->flags, RWL_SQFLAG_ARRAYB))
    rwlexecsql(xev, cloc, db, sq, 0, 0, fname);
  else
  {
    rwl_bindef *bd = 0;
    ub4 b;
    sb4 vno;
    rwl_value *pnum = 0;
    /* array bind - copy data to buffer */
    /* walk through binds and defines */
    bd = sq->bindef;
    /* Note that the b index works correctly as
     * we get through the binds (and hence the variables)
     * in the same sequence we did while allocating
     */
    b=0;
    while (bd)
    {
      if (!rwlbdisdir(bd))
      { 
	vno = rwlfindvarug2(xev, bd->vname, &bd->vguess, fname);
	if (vno<0)
	{
	  rwlexecsevere(xev, cloc, "[rwlsimplesql2-bdnot:%d;%s;%s]", vno, sq->vname, bd->vname);
	  goto failure;
	}
	// OLD pnum = &xev->evar[vno].num;
        pnum = rwlnuminvar(xev, xev->evar+vno);
	if (bit(xev->evar[vno].flags,RWL_IDENT_GLOBAL))
	{
	  rwlexecsevere(xev, cloc, "[rwlsimplesql2-bdglob:%s;%s;%s]"
	    , xev->evar[vno].vname, sq->vname, bd->vname);
	  goto failure;
	}
	/* make sure strings are allocated */
	if ((bd->vtype == RWL_TYPE_STR /*|| bd->vtype ==RWL_TYPE_RAW*/)
	    && pnum->vsalloc == RWL_SVALLOC_NOT)
	  rwlinitstrvar(xev, pnum);
      }
      /* copy bind values to array posistion sq->aix */
      switch (bd->bdtyp)
      {
	case RWL_DIRBIND:
	  switch(bd->vtype)
	  {
	    case RWL_TYPE_INT:
	      ((sb8 *)sq->abd[b])[sq->aix] = *((sb8 *)bd->pvar); 
	      ((sb2 *)sq->ari[b])[sq->aix] = *bd->pind; 
	    break;

	    case RWL_TYPE_DBL:
	      ((double *)sq->abd[b])[sq->aix] = *((double *)bd->pvar); 
	      ((sb2 *)sq->ari[b])[sq->aix] = *bd->pind; 
	    break;

	    case RWL_TYPE_STR:
	      rwlstrnncpy((text *)sq->abd[b] + sq->aix*bd->slen, bd->pvar, bd->slen); 
	      ((sb2 *)sq->ari[b])[sq->aix] = *bd->pind; 
	    break;

	    default:
	      rwlexecsevere(xev, cloc, "[rwlsimplesql2-badtype:%s;%d]"
	        , sq->vname, bd->vtype);
	    break;
	  }
	break;

	case RWL_BIND_POS:
	case RWL_BIND_NAME:
	  switch(bd->vtype)
	  {
	    case RWL_TYPE_INT:
	      ((sb8 *)sq->abd[b])[sq->aix] = pnum->ival; 
	      ((sb2 *)sq->ari[b])[sq->aix] = pnum->isnull; 
	    break;

	    case RWL_TYPE_DBL:
	      ((double *)sq->abd[b])[sq->aix] = pnum->dval; 
	      ((sb2 *)sq->ari[b])[sq->aix] = pnum->isnull; 
	    break;

	    case RWL_TYPE_STR:
	      rwlstrnncpy((text *)sq->abd[b] + sq->aix*bd->slen, pnum->sval, bd->slen); 
	      ((sb2 *)sq->ari[b])[sq->aix] = pnum->isnull; 
	    break;

	    case RWL_TYPE_RAW:
	    case RWL_TYPE_CLOB:
	    case RWL_TYPE_NCLOB:
	    case RWL_TYPE_BLOB:
	      
	    break;

	    default:
	      rwlexecsevere(xev, cloc, "[rwlsimplesql2-badtype2:%s;%d]"
	        , sq->vname, bd->bdtyp);
	    break;
	  }
	break;

      }
      bd=bd->next; 
      b++;
    }

    /* has the array filled */
    sq->aix++;
    if (sq->aix == sq->asiz)
    {
      /* flush */
      rwlflushsql2(xev, cloc, db, sq, fname);
      sq->aix = 0;
    }

  }
  failure:
  if (bit(sq->flags, RWL_SQLFLAG_DYIREL))
    rwldynsrelease(xev, cloc, sq, fname);
  if (tookses)
    rwlreleasesession2(xev, cloc, db, sq, fname);
  return;
}

/* fetch loop */
void rwlloopsql(rwl_xeqenv *xev
, rwl_location *cloc
, rwl_cinfo *db
, rwl_sql *sq
, ub4 looppc
, text *fname)
{
  if (bit(xev->rwm->m2flags, RWL_P2_NOEXEC))
  {
    rwlerror(xev->rwm, RWL_ERROR_NOEXEC);
    return;
  }

  if (bit(sq->flags, RWL_SQLFLAG_ARDYN))
    rwldynarreplace(xev, cloc, sq, fname);

  rwlexecsql(xev, cloc, db, sq, 1, looppc, fname);
}


/* ensure a session exisits */
/* return pool type if actually gotten or marked in use */
/* reutnr 0 if session is already available */
ub4 rwlensuresession2(rwl_xeqenv *xev
, rwl_location *cloc
, rwl_cinfo *db, rwl_sql *sq, text *fname)
{
  ub4 exitval = 0;

  // If database dead, pretend we might have gotten it
  // such the our calling environment also does release
  if (bit(db->flags, RWL_DB_DEAD))
  {
    if (bit(db->flags, RWL_DB_INUSE))
      return 0;
    else
    {
      // pretend things are fine....
      bis(db->flags, RWL_DB_INUSE);
      return RWL_DBPOOL_UNAVAILABLE;
    }
  }
  
  // If already in use, say we didn't get a session
  if (bit(db->flags, RWL_DB_INUSE))
    return 0;

  if (rwlstopnow && !bit(db->flags, RWL_DB_RESULTS))
    return 0;

  switch (db->pooltype)
  {
    case RWL_DBPOOL_RETHRDED:
      if (bit(xev->tflags, RWL_P_ISMAIN))
        goto ensurereconnect;
      else
        goto ensurededicated;
      break;

    case RWL_DBPOOL_RECONNECT:
    ensurereconnect:
      /* All handles are allocated during rwldbconnect, so just re-attach and re-create session */
      if (OCI_SUCCESS != (xev->status=OCIServerAttach( db->srvhp, xev->errhp, db->connect,
                              (sb4) db->conlen ,
			      (bit(db->flags,RWL_DB_USECPOOL) ? OCI_CPOOL: OCI_DEFAULT) )))
	{
	  rwldberror2(xev, cloc, sq, fname);
	  return 0;
	}
      if (bit(xev->tflags, RWL_THR_DSQL))
      {
	rwldebugcode(xev->rwm,cloc,"%d connect to reconnect database %s stmc %d"
	  , xev->thrnum
	  , db->vname, db->stmtcache);
      }
      xev->status=OCISessionBegin(db->svchp, xev->errhp, db->seshp
			  , bit(db->flags, RWL_DB_CREDEXT) ? OCI_CRED_EXT : OCI_CRED_RDBMS
		          , db->sbmode|OCI_STMT_CACHE );
      if (OCI_SUCCESS_WITH_INFO == xev->status)
      {
	rwldberror2(xev, cloc, sq, fname);
	xev->status=OCI_SUCCESS;
      }
      if ( (OCI_SUCCESS != xev->status)
	|| (OCI_SUCCESS != (xev->status=OCIAttrSet( db->svchp, OCI_HTYPE_SVCCTX,
				 db->seshp, 0, OCI_ATTR_SESSION, xev->errhp)))
	|| (OCI_SUCCESS != (xev->status=OCIAttrSet( db->svchp, OCI_HTYPE_SVCCTX,
				 &db->stmtcache, 0, OCI_ATTR_STMTCACHESIZE, xev->errhp)))
	 )
	{
	  rwldberror2(xev, cloc, sq, fname);
	  return 0;
	}
      bis(db->flags, RWL_DB_INUSE);
      exitval =  RWL_DBPOOL_RECONNECT;
      goto normalexit;
    break;

    case RWL_DBPOOL_DEDICATED:
    ensurededicated:
#if (RWL_OCI_VERSION>=12)
      if (bit(db->flags, RWL_DB_STATEMARK))
      {
         ub1 ub1attr = OCI_SESSION_STATEFUL;
	 if (OCI_SUCCESS != (xev->status=OCIAttrSet (db->seshp, OCI_HTYPE_SESSION
	   				, &ub1attr, sizeof(ub1attr)
					, OCI_ATTR_SESSION_STATE, xev->errhp)))
	{
	  rwldberror2(xev, cloc, sq, fname);
	  return 0;
	}
	if (bit(xev->tflags, RWL_THR_DSQL))
	{
	  rwldebugcode(xev->rwm,cloc,"%d set session %s stateful", xev->thrnum, db->vname);
	}
      }
      else
#endif
      {
	if (bit(xev->tflags, RWL_THR_DSQL))
	{
	  rwldebugcode(xev->rwm,cloc,"%d marked session %s in use", xev->thrnum, db->vname);
	}
      }

#if (RWL_OCI_VERSION>=12)
      if ( bit(db->flags, RWL_DB_REQMARK)
           && 
           (OCI_SUCCESS != (xev->status=OCIRequestBegin(db->svchp, xev->errhp, OCI_DEFAULT)))
	 )
	{
	  rwldberror2(xev, cloc, sq, fname);
	  return 0;
	}
#endif

      bis(db->flags, RWL_DB_INUSE);
      exitval = RWL_DBPOOL_DEDICATED;
      goto normalexit;
    break;

    case RWL_DBPOOL_POOLED:
      /*asserts*/
      if (!db->spool)
      {
	if (sq)
	  rwlexecsevere(xev, cloc, "[rwlensuresession-nodrcp1:%s;%s;%*s;%s]"
	  , sq->vname, db->username, db->conlen, db->connect, db->pooltext);
	else
	  rwlexecsevere(xev, cloc, "[rwlensuresession-nodrcp2:%s;%*s;%s]"
	  , db->username, db->conlen, db->connect, db->pooltext);
	return 0;
      }
      if (!db->authp)
      {
	if (sq)
	  rwlexecsevere(xev, cloc, "[rwlensuresession-nodrcpaut1:%s;%s;%*s;%s;%s]"
	  , sq->vname, db->username, db->conlen, db->connect, db->pooltext, db->cclass);
	else
	  rwlexecsevere(xev, cloc, "[rwlensuresession-nodrcpaut2:%s;%*s;%s;%s]"
	  , db->username, db->conlen, db->connect, db->pooltext, db->cclass);
	return 0;
      }

      /* only acquire session when our calling environment hasn't done it */
      if (!db->svchp)
      {
	if (bit(xev->tflags, RWL_THR_DSQL))
	{
	  rwldebugcode(xev->rwm,cloc,"%d taking drcp session %p %s using %.*s cc:%s"
	    , xev->thrnum , db, db->vname
	    , db->spslen, db->spstring, db->cclass);
	}

	if (OCI_SUCCESS != 
	      (xev->status=OCIAttrSet( db->authp, OCI_HTYPE_AUTHINFO,
			   db->cclass,
			   (ub4)rwlstrlen(db->cclass), OCI_ATTR_CONNECTION_CLASS, xev->errhp))
			   )
	{
	  rwldberror2(xev, cloc, sq, fname);
	  return 0;
	}

	// DRCP here
        if (
	     (
	       ( OCI_SUCCESS != 
		  (xev->status=OCISessionGet(xev->rwm->envhp, xev->errhp, &db->svchp
			  , db->authp
			  , db->spstring, db->spslen
			  , 0, 0,  0,  0,  0
			  , OCI_SESSGET_SPOOL|OCI_LOGON2_STMTCACHE|OCI_SESSGET_PURITY_SELF ))
	       )
	      && (OCI_SUCCESS_WITH_INFO != xev->status)
	    )
         || OCI_SUCCESS != 
              (xev->status=OCIAttrGet( db->svchp, OCI_HTYPE_SVCCTX,
                           &db->seshp,
                           0, OCI_ATTR_SESSION, xev->errhp)))
	{
	  rwldberror2(xev, cloc, sq, fname);
	  return 0;
	}

	bis(db->flags, RWL_DB_INUSE);
	exitval = RWL_DBPOOL_POOLED; /* tell session was acquired from pool */
	goto normalexit;
      }
    break;
      
    case RWL_DBPOOL_SESSION:
      /*assert*/
      if (!db->spool)
      {
	if (sq)
	  rwlexecsevere(xev, cloc, "[rwlensuresession-nopool1:%s;%s;%*s;%s]"
	  , sq->vname, db->username, db->conlen, db->connect, db->pooltext);
	else
	  rwlexecsevere(xev, cloc, "[rwlensuresession-nopool2:%s;%*s;%s]"
	  , db->username, db->conlen, db->connect, db->pooltext);
	return 0;
      }
      if (!db->authp)
      {
	if (sq)
	  rwlexecsevere(xev, cloc, "[rwlensuresession-nopool1aut:%s;%s;%*s;%s;%s]"
	  , sq->vname, db->username, db->conlen, db->connect, db->pooltext, db->cclass);
	else
	  rwlexecsevere(xev, cloc, "[rwlensuresession-nopool2aut:%s;%*s;%s;%s]"
	  , db->username, db->conlen, db->connect, db->pooltext, db->cclass);
	return 0;
      }

      /* only acquire session when our calling environment hasn't done it */
      if (!db->svchp)
      {
        ub4 sgmode = OCI_SESSGET_SPOOL|OCI_LOGON2_STMTCACHE|OCI_SESSGET_PURITY_SELF;
	if (bit(db->flags, RWL_DB_CREDEXT))
	 sgmode |= OCI_SESSGET_CREDEXT;

	// session pool here
        if ( (OCI_SUCCESS != 
              (xev->status=OCISessionGet(xev->rwm->envhp, xev->errhp, &db->svchp
                        , db->authp
                        , db->spstring, db->spslen
                        , 0, 0,  0,  0,  0
                        , sgmode)))
	    && (OCI_SUCCESS_WITH_INFO != xev->status) // 28002
	  )

	{
	  ub4 ub4attr;
	  if (OCI_ERROR == xev->status)
	  {
	    text errbuf[RWL_OCI_ERROR_MAXMSG];
	    sb4 errcode;
	    OCIErrorGet (xev->errhp, 1, 0, &errcode,
                  errbuf, sizeof(errbuf), OCI_HTYPE_ERROR);
            if ((24459==errcode || 24457==errcode || 24496==errcode) && bit(db->flags, RWL_DB_SPTOBREAK))
	    {
	      // 24457: OCISessionGet() could not find a free session in the specified timeout period
	      // 24459: OCISessionGet() timed out waiting for pool to create new connections
	      // 24496: OCISessionGet() timed out waiting for a free connection
	      if (0>rwlfindvarug(xev, RWL_ORAERROR_VAR, &xev->oraerrorvar))
	      {
		rwlsevere(xev->rwm, "[rwlensuresession2-oraerrorvar:%d]", xev->oraerrorvar);
	      }
	      else
	      {
	        rwl_value *oev;
		oev = &xev->evar[xev->oraerrorvar].num;
		oev->dval = errcode;
		oev->ival = (sb8) errcode;
		oev->isnull = 0;
		if (oev->vsalloc != RWL_SVALLOC_NOT)
		  rwlsnpiformat(xev->rwm, oev->sval, oev->slen, errcode);
	      }
	      if (db->tobreak)
	        rwlexpreval(db->tobreak, cloc, xev, 0);
	      else
		rwlexecerror(xev, cloc, RWL_ERROR_SESPOOL_WAIT_TIMEOUT, db->wtimeout, db->vname, db->errcode);
	      return RWL_DBPOOL_UNAVAILABLE;
	    }
	  }
	  rwldberror2(xev, cloc, sq, fname);
	  OCIAttrGet(db->spool, OCI_HTYPE_SPOOL,
		     &ub4attr,
		     0, OCI_ATTR_SPOOL_BUSY_COUNT, xev->errhp);
	  rwldebugcode(xev->rwm,cloc,"%d busy sessions in %s"
	    , ub4attr, db->vname);
	  return 0;
	}
        if (OCI_SUCCESS != 
              (xev->status=OCIAttrGet( db->svchp, OCI_HTYPE_SVCCTX,
                           &db->seshp,
                           0, OCI_ATTR_SESSION, xev->errhp))
                           )

	{
	  rwldberror2(xev, cloc, sq, fname);
	  return 0;
	}
	if (bit(xev->tflags, RWL_THR_DSQL))
	{
	  rwldebugcode(xev->rwm,cloc,"%d took a session from %s", xev->thrnum, db->vname);
	}
	bis(db->flags, RWL_DB_INUSE);
	exitval = RWL_DBPOOL_SESSION; /* tell session was acquired from pool */
	goto normalexit;
      }
    break;
      
    default:
      if (sq)
        rwlexecsevere(xev, cloc,"[rwlensuresession-notyet1:%s;%s;%*s;%s]"
	, sq->vname, db->username, db->conlen, db->connect, db->pooltext);
      else
        rwlexecsevere(xev, cloc,"[rwlensuresession-notyet2:%s;%*s;%s]"
	, db->username, db->conlen, db->connect, db->pooltext);
      return 0;
    
  }
  return 0;

normalexit:

  if (fname && bit(xev->rwm->m2flags, RWL_P2_SETACTION))
  {
    ub4 actlen = (ub4) rwlstrlen(fname);
    if (actlen>32)
      actlen = 32;

    if (OCI_SUCCESS != 
	  (xev->status=OCIAttrSet( db->seshp, OCI_HTYPE_SESSION,
		       fname,
		       actlen, OCI_ATTR_ACTION, xev->errhp))
		       )
    {
      rwldberror2(xev, cloc, sq, fname);
    }
  }

  if (bit(xev->rwm->m4flags, RWL_P4_STATSDTIME))
  {
    boolean getct = 1;

    if (OCI_SUCCESS != 
	  (xev->status=OCIAttrSet( db->seshp, OCI_HTYPE_SESSION,
		       &getct, 0
		       , OCI_ATTR_COLLECT_CALL_TIME, xev->errhp))
		       )
    {
      rwldberror2(xev, cloc, sq, fname);
    }
  }


  return exitval;

}

void rwlreleasesession2(rwl_xeqenv *xev
, rwl_location *cloc
, rwl_cinfo *db, rwl_sql *sq, text *fname)
{
  ub4 sesrelo;

  if (!bit(db->flags, RWL_DB_INUSE))
    return;

  if (bit(xev->tflags, RWL_P_SESRELDROP))
    sesrelo = OCI_SESSRLS_DROPSESS;
  else
    sesrelo = OCI_DEFAULT;
    
  /* check if database is marked dead */
  if (bit(db->flags, RWL_DB_DEAD))
  {
    bis(xev->tflags, RWL_P_SESRELDROP);
    switch (db->pooltype)
    {
      case RWL_DBPOOL_SESSION:
      case RWL_DBPOOL_RECONNECT:
      case RWL_DBPOOL_POOLED:
	rwlexecerror(xev, cloc, RWL_ERROR_DATABASE_DEAD, db->vname, db->errcode);
      break;

      default:
	rwlexecerror(xev, cloc, RWL_ERROR_DATABASE_DEAD_MAYBR, db->vname, db->errcode);
      break;
    }

    sesrelo = OCI_SESSRLS_DROPSESS;
    bic(db->flags, RWL_DB_DIDDML|RWL_DB_DIDPLSQL);
  }

  /* check if there is uncommitted DML */
  if (bit(db->flags, RWL_DB_DIDDML))
  {
    rwlexecerror(xev, cloc, RWL_ERROR_ROLLBACK_FORCED, db->vname);
    rwlrollback2(xev, cloc, db, fname);
  }
  /* Check if PL/SQL was done with an open transaction */
  if (bit(db->flags, RWL_DB_DIDPLSQL))
  {
#if (RWL_OCI_VERSION >= 12)
    boolean istrans;
    xev->status = OCIAttrGet(db->seshp, OCI_HTYPE_SESSION
	     , &istrans, 0
	     ,  OCI_ATTR_TRANSACTION_IN_PROGRESS, xev->errhp);
    if (OCI_SUCCESS != xev->status)
    { 
      rwldberror2(xev, cloc, sq, fname);
    }
    else
    {
      if (istrans)
      {
	rwlexecerror(xev, cloc, RWL_ERROR_MISSING_PLSQL_COMMIT, db->vname);
	rwlrollback2(xev, cloc, db, fname);
      }
    }
#else
    rwlexecerror(xev, cloc, RWL_ERROR_ORA11_PLSQL_NO_COMMIT, db->vname);
    rwlcommit2(xev, cloc, db, fname);
#endif
  }

  // want reset action and session still fine
  if (bit(xev->rwm->m2flags, RWL_P2_SETACTRESET) && !bit(db->flags, RWL_DB_DEAD))
  {
    if (OCI_SUCCESS != 
	  (xev->status=OCIAttrSet( db->seshp, OCI_HTYPE_SESSION
		       , ""
		       , 0
		       , OCI_ATTR_ACTION, xev->errhp))
		       )
    {
      rwldberror2(xev, cloc, sq, fname);
    }
    if (OCI_SUCCESS != 
	  (xev->status=OCIPing( db->svchp
		       , xev->errhp , OCI_DEFAULT)
		       ))
    {
      rwldberror2(xev, cloc, sq, fname);
    }
  }

  switch (db->pooltype)
  {
    case RWL_DBPOOL_RETHRDED:
      if (bit(xev->tflags, RWL_P_ISMAIN))
        goto releasereconnect;
      else
        goto releasededicated;
      break;

    case RWL_DBPOOL_DEDICATED:
    releasededicated:
#if (RWL_OCI_VERSION>=12)
      // do OCIRequestEnd and/or set stateless if wanted and database not dead
      if ( bit(db->flags, RWL_DB_REQMARK)
           && !bit(db->flags, RWL_DB_DEAD)
           && 
           (OCI_SUCCESS != (xev->status=OCIRequestEnd(db->svchp, xev->errhp, OCI_DEFAULT)))
	 )
	rwldberror2(xev, cloc, sq, fname);

      if (bit(db->flags, RWL_DB_STATEMARK) && !bit(db->flags, RWL_DB_DEAD))
      {
        ub1 ub1attr = OCI_SESSION_STATELESS;
	if ( OCI_SUCCESS != (xev->status=OCIAttrSet (db->seshp, OCI_HTYPE_SESSION
	   				, &ub1attr, sizeof(ub1attr)
					, OCI_ATTR_SESSION_STATE, xev->errhp)))
	{
	  rwldberror2(xev, cloc, sq, fname);
	}
	if (bit(xev->tflags, RWL_THR_DSQL))
	{
	  rwldebugcode(xev->rwm,cloc,"%d set session %s stateless", xev->thrnum, db->vname);
	}
      }
      else
#endif
      {
	if (bit(xev->tflags, RWL_THR_DSQL))
	{
	  rwldebugcode(xev->rwm,cloc,"%d marked session %s unused", xev->thrnum, db->vname);
	}
      }
      bic(db->flags, RWL_DB_INUSE);
      if (bit(xev->tflags, RWL_P_SESRELDROP))
      {
	// Bounce database connection
	bis(db->flags, RWL_DB_BOUNCING); // such that we don't attempt using it during bounce
	rwldbdisconnect(xev, cloc, db);
	bic(db->flags, RWL_DB_DEAD);
        rwldbconnect(xev, cloc, db);
	bic(db->flags, RWL_DB_BOUNCING);
      }
    break;

    case RWL_DBPOOL_RECONNECT:
    releasereconnect:
      if (bit(db->flags, RWL_DB_DEAD))
      {
	/* logoff and disconnect without error checking */
	xev->status = OCISessionEnd(db->svchp, xev->errhp, db->seshp, OCI_DEFAULT);
	/* and disconnect */
	xev->status = OCIServerDetach( db->srvhp, xev->errhp, OCI_DEFAULT );
      }
      else
      {
	if (bit(xev->tflags, RWL_THR_DSQL))
	{
	  rwldebugcode(xev->rwm,cloc,"%d disconnect from reconnect database %s"
	    , xev->thrnum
	    , db->vname);
	}
	/* logoff immediatedly if reconnect */
	xev->status = OCISessionEnd(db->svchp, xev->errhp, db->seshp, OCI_DEFAULT);
	if (OCI_SUCCESS!=xev->status)
	  rwldberror2(xev, cloc, sq, fname);

	/* and disconnect */
	xev->status = OCIServerDetach( db->srvhp, xev->errhp, OCI_DEFAULT );
	if (OCI_SUCCESS!=xev->status)
	  rwldberror2(xev, cloc, sq, fname);
      }
      bic(db->flags, RWL_DB_INUSE | RWL_DB_DEAD);
    break;

    case RWL_DBPOOL_POOLED:
      if (bit(xev->tflags, RWL_THR_DSQL))
      {
	rwldebugcode(xev->rwm,cloc,"%d released drcp session to %s %.*s"
	  , xev->thrnum
	  , db->vname
	  , db->spslen, db->spstring);
      }
      // DRCP here
      if  ( 
	    (OCI_SUCCESS!=(xev->status = 
	      OCISessionRelease(db->svchp, xev->errhp, (OraText *)0, 0, sesrelo)))
	  && !bit(db->flags, RWL_DB_DEAD)
	  )
	    rwldberror2(xev, cloc, sq, fname);

      db->svchp = 0;
      db->seshp = 0;
      bic(db->flags, RWL_DB_INUSE | RWL_DB_DEAD);
      if (bit(xev->tflags, RWL_P_SESRELDROP))
      {
	// Also bounce the pool in case user or error asked for release of DRCP
	bis(db->flags, RWL_DB_BOUNCING); // such that we don't attempt using it during bounce
	rwldbdisconnect(xev, cloc, db);
        rwldbconnect(xev, cloc, db);
	bic(db->flags, RWL_DB_BOUNCING);
      }
    break;

    case RWL_DBPOOL_SESSION:
      if (!bit(db->flags, RWL_DB_LEAK))
      {
	if (bit(xev->tflags, RWL_THR_DSQL))
	{
	  rwldebugcode(xev->rwm,cloc,"%d released session to pool %s %.*s sesrelo=0x%x"
	    , xev->thrnum
	    , db->vname
	    , db->spslen, db->spstring, sesrelo);
	}
	if (
	    (OCI_SUCCESS!=(xev->status = 
	      OCISessionRelease(db->svchp, xev->errhp, (OraText *)0, 0, sesrelo)))
	  && !bit(db->flags, RWL_DB_DEAD)
	  )
	    rwldberror2(xev, cloc, sq, fname);
      }
      else
      {
	if (bit(xev->tflags, RWL_THR_DSQL))
	{
	  rwldebugcode(xev->rwm,cloc,"%d leaked session in pool %s %.*s"
	    , xev->thrnum
	    , db->vname
	    , db->spslen, db->spstring);
	}
      }

      db->svchp = 0;
      db->seshp = 0;
      bic(db->flags, RWL_DB_INUSE|RWL_DB_DEAD);
    break;

    default:
    break;
  }
  
  bic(xev->tflags, RWL_P_SESRELDROP);
}

/* For the reslts database, this is a bit tricky:
 * 
 * We need to be able to have the same semantics for rwlensuression/
 * rwlreleasesession, as this always gets called in the various 
 * routines doing database work.  However, the calling environment
 * does not have an rwl_cinfo * as with the real worker databases
 * The calling environment could lookup the variable containing resdb,
 * but that would mean copying of code including the need for RWL-600
 * control.  
 *
 * Therefore, we have this pair rwlensureresdb/rwlreleaseresdb with 
 * the former doing the RWL-600 stuff and returning both true/false
 * telling if a session was gotten and therefore must be released
 * again, plus also returning an rwl_cinfo **, so the calling 
 * environment has it.
 *
 * As a result, all code needing the resdb must be wrapped like this:
 *
 * rwl_cinfo *rdb;
 * ub4 tooksession;
 *
 * tooksession = rwlensureresdb(xev,cloc,sq,&rdb)
 * if (pres)
 * {
 *   /o bla bla database operations o/
 *   if (tooksession)
 *     rwlreleaseresdb(xev,cloc,sq);
 *  } /o else RAL-600 reported in rwlensureresdb o/
 */
ub4 rwlensureresdb ( rwl_xeqenv *xev , rwl_location *cloc , rwl_sql *sq , rwl_cinfo ** ppdb)
{
  ub4 x;
  *ppdb = 0;
  if (bit(xev->rwm->m2flags, RWL_P2_NOEXEC))
    return 0;
  if (xev->rwm->resdb && rwlfindvarug(xev, xev->rwm->resdb, &xev->vresdb)>=0)
  {
    if (RWL_TYPE_CANCELLED == xev->evar[xev->vresdb].vtype)
      return 0;
    x=rwlensuresession(xev, cloc, xev->evar[xev->vresdb].vdata, sq);
    *ppdb = xev->evar[xev->vresdb].vdata;
    return x;
  }
  else
  {  
    if (sq)
      rwlexecsevere(xev, cloc, "[rwlensuresesdb-nores2:%d;%s]", xev->vresdb, sq->vname);
    else
      rwlexecsevere(xev, cloc, "[rwlensuresesdb-nores:%d]", xev->vresdb);
    return 0;
  }
}

void rwlreleaseresdb
( rwl_xeqenv *xev , rwl_location *cloc , rwl_sql *sq)
{
  rwlreleasesession(xev, cloc, xev->evar[xev->vresdb].vdata, sq);
}


void rwldbdisconnect(rwl_xeqenv *xev, rwl_location *cloc, rwl_cinfo *db)
{
  sb4 vno;
  sb4 ocires;

  /*assert*/
  if ((vno = rwlfindvar(xev, db->vname, RWL_VAR_NOGUESS))<0)
  {
    rwlexecsevere(xev, cloc, "[rwldbdisconnect-findvar:%s;%d]", db->vname, vno);
    return;
  }
    
  if (bit(xev->rwm->m2flags, RWL_P2_NOEXEC))
  {
    return;
  }

  if (bit(xev->tflags, RWL_THR_DSQL))
  {
    rwldebugcode(xev->rwm,cloc,"disconnect %s@%*s %s", db->username, db->conlen, db->connect, db->pooltext);
  }


  /* disconnect  or drop pool */
  switch (db->pooltype)

  {
    case RWL_DBPOOL_DEDICATED:
      /*assert unless database is dead */
      if (!bit(db->flags, RWL_DB_DEAD) && !db->svchp)
      {
	rwlexecsevere(xev, cloc, "[rwldbdisconnect-noconn:%s]", db->vname);
	return;
      }
#if (RWL_OCI_VERSION>=12)
      if (bit(db->flags, RWL_DB_STATEMARK) && !bit(db->flags, RWL_DB_DEAD))
      {
        ub1 ub1attr = OCI_SESSION_STATEFUL;
	(void) OCIAttrSet (db->seshp, OCI_HTYPE_SESSION
			  , &ub1attr, sizeof(ub1attr)
			  , OCI_ATTR_SESSION_STATE, xev->errhp);
	if (bit(xev->tflags, RWL_THR_DSQL))
	{
	  rwldebugcode(xev->rwm,cloc,"%d set disconnecting session %s statefull", xev->thrnum, db->vname);
	}
      }
#endif
      /* check if there is uncommitted DML */
      if (bit(db->flags, RWL_DB_DIDDML))
      {
	rwlexecerror(xev, cloc, RWL_ERROR_CONN_ROLLBACK_FORCED, db->vname);
	rwlrollback(xev, cloc, db);
      }
      /* Check if PL/SQL was done with an open transaction */
      if (bit(db->flags, RWL_DB_DIDPLSQL))
      {
#if (RWL_OCI_VERSION >= 12)
	boolean istrans;
	xev->status = OCIAttrGet(db->seshp, OCI_HTYPE_SESSION
		 , &istrans, 0
		 ,  OCI_ATTR_TRANSACTION_IN_PROGRESS, xev->errhp);
	if (OCI_SUCCESS != xev->status)
	{ 
	  rwldberror0(xev, cloc);
	}
	else
	{
	  if (istrans)
	  {
	    rwlexecerror(xev, cloc, RWL_ERROR_MISSING_PLSQL_COMMIT, db->vname);
	    rwlrollback(xev, cloc, db);
	  }
	}
#else
	rwlexecerror(xev, cloc, RWL_ERROR_ORA11_PLSQL_NO_COMMIT, db->vname);
	rwlcommit(xev, cloc, db);
#endif
      }

      /* Logoff */
      xev->status = OCISessionEnd(db->svchp, xev->errhp, db->seshp, OCI_DEFAULT);
      if (db->svchp
          && (OCI_SUCCESS != (ocires = OCIHandleFree(db->svchp, OCI_HTYPE_SVCCTX))))
	rwlexecsevere(xev, cloc, "[rwldbdisconnect-freesvcctx2:%s;%d]", db->vname, ocires);
      if (db->seshp
          && (OCI_SUCCESS != (ocires = OCIHandleFree(db->seshp, OCI_HTYPE_SESSION))))
	rwlexecsevere(xev, cloc, "[rwldbdisconnect-freesession2:%s;%d]", db->vname, ocires);
      db->svchp = 0; db->seshp = 0;
      if (!bit(db->flags, RWL_DB_DEAD) && OCI_SUCCESS!=xev->status)
	goto handledberror;

      /* and disconnect */
      xev->status = OCIServerDetach( db->srvhp, xev->errhp, OCI_DEFAULT );
      if (db->srvhp 
          && (OCI_SUCCESS != (ocires = OCIHandleFree(db->srvhp, OCI_HTYPE_SERVER))))
        rwlexecsevere(xev, cloc, "[rwldbdisconnect-freeserver:%s;%d]", db->vname, ocires);
      db->srvhp = 0;
      if (!bit(db->flags, RWL_DB_DEAD) && OCI_SUCCESS!=xev->status)
	goto handledberror;
    break;

    case RWL_DBPOOL_RETHRDED:
    case RWL_DBPOOL_RECONNECT:
      /*assert*/
      if (!bit(db->flags, RWL_DB_DEAD) && !db->svchp)
      {
	rwlexecsevere(xev, cloc, "[rwldbdisconnect-recnoconn:%s]", db->vname);
	return;
      }
      /* free handles */
      if (db->svchp
          && (OCI_SUCCESS != (ocires = OCIHandleFree(db->svchp, OCI_HTYPE_SVCCTX))))
	rwlexecsevere(xev, cloc, "[rwldbdisconnect-freesvcctx:%s;%d]", db->vname, ocires);
      if (db->seshp
          && (OCI_SUCCESS != (ocires = OCIHandleFree(db->seshp, OCI_HTYPE_SESSION))))
	rwlexecsevere(xev, cloc, "[rwldbdisconnect-freesession:%s;%d]", db->vname, ocires);
      db->svchp = 0; db->seshp = 0;

      if (db->srvhp 
          && (OCI_SUCCESS != (ocires = OCIHandleFree(db->srvhp, OCI_HTYPE_SERVER))))
        rwlexecsevere(xev, cloc, "[rwldbdisconnect-freeserver2:%s;%d]", db->vname, ocires);
      db->srvhp = 0;
    break;

    case RWL_DBPOOL_POOLED:
    case RWL_DBPOOL_SESSION:
      /*assert*/
      if (db->svchp)
      {
	rwlexecsevere(xev, cloc, "[rwldbdisconnect-hasconn:%s]", db->vname);
	// return; we are using OCI_SPD_FORCE below
      }
      /*assert*/
      if (!db->spool)
      {
	rwlexecsevere(xev, cloc, "[rwldbdisconnect-nopool:%s]", db->vname);
	return;
      }
      if (!db->authp)
	rwlexecsevere(xev, cloc, "[rwldbdisconnect-noaut:%s]", db->vname);
      else
      {
	if (OCI_SUCCESS != (ocires = OCIHandleFree(db->authp, OCI_HTYPE_AUTHINFO)))
	  rwlexecsevere(xev, cloc, "[rwldbdisconnect-freeauthinfo:%s;%d]", db->vname, ocires);
        db->authp = 0;
      }

      if (RWL_STOP_BREAK == rwlstopnow)
        xev->status = OCI_SUCCESS;
      else
        xev->status = OCISessionPoolDestroy(db->spool, xev->errhp, OCI_SPD_FORCE);
      if (db->spool 
          && (OCI_SUCCESS != (ocires = OCIHandleFree(db->spool, OCI_HTYPE_SPOOL))))
	rwlexecsevere(xev, cloc, "[rwldbdisconnect-freespool:%s;%d]", db->vname, ocires);
      db->spool = 0;

      // Ignore errors if we are dropping with release
      if (OCI_SUCCESS != xev->status && !bit(xev->tflags, RWL_P_SESRELDROP))
        goto handledberror;
    break;

    case RWL_DBPOOL_CONNECT:
      /*more asserts would be good*/
      if (!db->cpool)
      {
	rwlexecsevere(xev, cloc, "[rwldbdisconnect-nocpool:%s]", db->vname);
	return;
      }

      if (RWL_STOP_BREAK == rwlstopnow)
        xev->status = OCI_SUCCESS;
      else
        xev->status = OCIConnectionPoolDestroy(db->cpool, xev->errhp, OCI_DEFAULT);
      if (db->cpool 
          && (OCI_SUCCESS != (ocires = OCIHandleFree(db->cpool, OCI_HTYPE_CPOOL))))
	rwlexecsevere(xev, cloc, "[rwldbdisconnect-freespool:%s;%d]", db->vname, ocires);
      db->cpool = 0;
      
    break;

    default:
    break;
  }

  return;

  handledberror:
    rwldberror0(xev, cloc);
    xev->evar[vno].vtype = RWL_TYPE_CANCELLED;
    xev->evar[vno].stype = "cancelled (db)";
  return;
}

/* allocate structures for array bind or define*/
void rwlallocabd(rwl_xeqenv *xev, rwl_location *loc, rwl_sql *sq)
{
  ub4 bdn;
  rwl_bindef *bd;

  /*ASSERT*/
  if (!bit(sq->flags,RWL_SQFLAG_ARRAYB|RWL_SQFLAG_ARRAYD))
  {
    rwlexecsevere(xev, loc, "[rwlallocabd-notarray:%s]", sq->vname);
    return;
  }

  /*ASSERT*/
  if (bit(sq->flags,RWL_SQFLAG_ARRAYB) && bit(sq->flags,RWL_SQFLAG_ARRAYD))
  {
    rwlexecsevere(xev, loc,  "[rwlallocabd-bothbandd:%s]", sq->vname);
    return;
  }


  if (bit(sq->flags,RWL_SQFLAG_ARRAYB))
  {
    sq->abd = (void **) rwlalloc(xev->rwm, sq->bincount*sizeof(void *));
    sq->ari = (sb2 **) rwlalloc(xev->rwm, sq->bincount*sizeof(sb2 *));
  }
  if (bit(sq->flags,RWL_SQFLAG_ARRAYD))
  {
    sq->abd = (void **) rwlalloc(xev->rwm, sq->defcount*sizeof(void *));
    sq->ari = (sb2 **) rwlalloc(xev->rwm, sq->defcount*sizeof(sb2 *));
  }
  /* walk through binds or defines */ 
  bdn = 0;
  bd = sq->bindef; 
  while (bd)
  {
    if (bit(sq->flags,RWL_SQFLAG_ARRAYB) && bdn>sq->bincount)
      rwlexecsevere(xev, loc, "[rwlallocabd-bincount:%s;%d;%d]", sq->vname, bdn, sq->bincount);
    else if (bit(sq->flags,RWL_SQFLAG_ARRAYD) && bdn>sq->defcount)
      rwlexecsevere(xev, loc, "[rwlallocabd-defcount:%s;%d;%d]", sq->vname, bdn, sq->defcount);
    else switch (bd->bdtyp)
    {
      /* for ordinary (non-out) binds */
      case RWL_BIND_POS:
      case RWL_BIND_NAME:
      case RWL_DIRBIND:
	/* allocate bind array with correct type */
	if (bit(sq->flags,RWL_SQFLAG_ARRAYB))
	{
	  switch (bd->vtype)
	  {
	    case RWL_TYPE_CLOB:
	    case RWL_TYPE_NCLOB:
	    case RWL_TYPE_BLOB:
	      rwlexecerror(xev, loc, RWL_ERROR_NO_DML_ARRAY_LOB);
	    break;

	    case RWL_TYPE_DBL:
	      sq->abd[bdn] = (void *)rwlalloc(xev->rwm, sq->asiz*sizeof(double));
	      sq->ari[bdn] = (sb2 *) rwlalloc(xev->rwm, sq->asiz*sizeof(sb2));
	    break;

	    case RWL_TYPE_INT:
	      sq->abd[bdn] = (void *)rwlalloc(xev->rwm, sq->asiz*sizeof(sb8));
	      sq->ari[bdn] = (sb2 *) rwlalloc(xev->rwm, sq->asiz*sizeof(sb2));
	    break;

	    case RWL_TYPE_RAW:
	      rwlexecsevere(xev, loc, "[rwlallocabd-raw:%s]", sq->vname);
	      /*FALLTHROUGH*/
	    case RWL_TYPE_STR:
	      sq->abd[bdn] = (void *)rwlalloc(xev->rwm, sq->asiz*bd->slen);
	      sq->ari[bdn] = (sb2 *) rwlalloc(xev->rwm, sq->asiz*sizeof(sb2));
	    break;

	    default:
	      rwlexecsevere(xev, loc, "[rwlallocabd-badtype:%s;%d]"
	        , sq->vname, bd->vtype);
	    break;
	  }
	  bdn++;
	}
      break;

      /* for ordinary defines */
      case RWL_DEFINE:
	/* allocate bind array with correct type */
	if (bit(sq->flags,RWL_SQFLAG_ARRAYD))
	{
	  switch (bd->vtype)
	  {
	    case RWL_TYPE_CLOB:
	      {
	        ub4 x;
		// we first need the array of locators
		sq->abd[bdn] = (void *)rwlalloc(xev->rwm, sq->asiz*sizeof(OCILobLocator *));
		// and then to initially each
		for (x=0; x<sq->asiz; x++)
	          rwlalloclob(xev->rwm->mxq, 0,  ((OCILobLocator **)sq->abd[bdn])+x); 
		sq->ari[bdn] = (sb2 *) rwlalloc(xev->rwm, sq->asiz*sizeof(sb2));
	      }
	    break;

	    case RWL_TYPE_NCLOB:
	    case RWL_TYPE_BLOB:
	      // error has already be rised during parsing
	    break;

	    case RWL_TYPE_DBL:
	      sq->abd[bdn] = (void *)rwlalloc(xev->rwm, sq->asiz*sizeof(double));
	      sq->ari[bdn] = (sb2 *) rwlalloc(xev->rwm, sq->asiz*sizeof(sb2));
	    break;

	    case RWL_TYPE_INT:
	      sq->abd[bdn] = (void *)rwlalloc(xev->rwm, sq->asiz*sizeof(sb8));
	      sq->ari[bdn] = (sb2 *) rwlalloc(xev->rwm, sq->asiz*sizeof(sb2));
	    break;

	    case RWL_TYPE_STR:
	      sq->abd[bdn] = (void *)rwlalloc(xev->rwm, sq->asiz*bd->slen);
	      sq->ari[bdn] = (sb2 *) rwlalloc(xev->rwm, sq->asiz*sizeof(sb2));
	    break;

	    default:
	    break;
	  }
	bdn++;
	}
      break;
    }
    bd = bd->next;
  }

  if (bit(sq->flags,RWL_SQFLAG_ARRAYB) && bdn!=sq->bincount)
    rwlexecsevere(xev, loc, "[rwlallocabd-bincount2:%s;%d;%d]", sq->vname, bdn, sq->bincount);
  if (bit(sq->flags,RWL_SQFLAG_ARRAYD) && bdn!=sq->defcount)
    rwlexecsevere(xev, loc, "[rwlallocabd-defcount2:%s;%d;%d]", sq->vname, bdn, sq->defcount);
  
}

/* free array bind structures */
void rwlfreeabd(rwl_xeqenv *xev, rwl_location *loc, rwl_sql *sq)
{
  ub4 bdn;

  if (!bit(sq->flags,RWL_SQFLAG_ARRAYB|RWL_SQFLAG_ARRAYD))
  {
    rwlexecsevere(xev, loc, "[rwlfreeabd-notarray:%s]", sq->vname);
    return;
  }

  if (bit(sq->flags,RWL_SQFLAG_ARRAYB))
  {
    for (bdn=0; bdn<sq->bincount; bdn++)
    {
	rwlfree(xev->rwm, sq->abd[bdn]);
	rwlfree(xev->rwm, sq->ari[bdn]);
    }
  }

  if (bit(sq->flags,RWL_SQFLAG_ARRAYD))
  {
    rwl_bindef *bd = sq->bindef; 
    bdn = 0;
    // we cannot simply loop as we need to verify type
    while (bd)
    {
      switch (bd->bdtyp)
      {
	case RWL_DEFINE:
	    switch (bd->vtype)
	    {
	      case RWL_TYPE_CLOB:
		{
		  ub4 x;
		  // first free the lobs
		  for (x=0; x<sq->asiz; x++)
		    rwlfreelob(xev, loc,  ((OCILobLocator **)sq->abd[bdn])[x]); 
		}
	      /*FALLTHROUGH*/

	      case RWL_TYPE_DBL:
	      case RWL_TYPE_INT:
	      case RWL_TYPE_STR:
		rwlfree(xev->rwm, sq->abd[bdn]);
		rwlfree(xev->rwm, sq->ari[bdn]);
	      break;

	      default:
	      break;
	    }
	bdn++;
	break;
      }

      bd = bd->next;
    }
    /*ASSERT*/
    if (bdn != sq->defcount)
      rwlexecsevere(xev, loc, "[rwlfreeabd-defmis:%s;%d;%d]", sq->vname, bdn, sq->defcount);

  }

  rwlfree(xev->rwm, sq->abd);
  rwlfree(xev->rwm, sq->ari);
  sq->abd = 0;
  sq->ari = 0;
  sq->aix = 0;

}

void rwlalloclob(rwl_xeqenv *xev
, rwl_location *loc
, OCILobLocator **pplob
)
{
  // Just call OCI to do the work and verify things are good
  ub4 zero = 0;
  if (OCI_SUCCESS != 
       (xev->status=OCIDescriptorAlloc(xev->rwm->envhp, (void **)pplob
       , OCI_DTYPE_LOB, 0,  0))
     )
  {
    rwldberror0(xev, loc);
  }
  if (OCI_SUCCESS != 
       (xev->status=OCIAttrSet((void *)*pplob , OCI_DTYPE_LOB
	 , &zero, 0, OCI_ATTR_LOBEMPTY,  xev->errhp))
     )
  {
    rwldberror0(xev, loc);
  }
}

void rwlfreelob(rwl_xeqenv *xev
, rwl_location *loc
, OCILobLocator *plob
)
{
  if (OCIDescriptorFree(plob, OCI_DTYPE_LOB) != OCI_SUCCESS )
  {
    rwldberror0(xev, loc);
  }
}

void rwlwritelob(rwl_xeqenv *xev
, OCILobLocator *lobp
, rwl_cinfo *db
, rwl_value *pstr
, rwl_location *loc
, text *fname
)
{
  ub8 amtp = rwlstrlen(pstr->sval);
  
  if (!db)
  {
    rwlexecerror(xev, loc, RWL_ERROR_LOB_NOT_FILLED);
    return;
  }
  if (!amtp)
  {
    // ORA-24801: illegal parameter value in OCI lob function
    // if you try writing zero bytes to LOB
    rwlexecerror(xev, loc, RWL_ERROR_ATTEMPT_ZERO_WRITE, db->vname);
    return;
  }
  RWL_OATIME_BEGIN(xev, loc, db->seshp, 0, fname, 1)
    xev->status = OCILobWrite2(db->svchp, xev->errhp, (void *)lobp
    	, &amtp
	, 0 /*char_amtp*/
	, 1 /*offset*/
	, pstr->sval, amtp
	, OCI_ONE_PIECE
	, 0,0
	, (ub2) 0, (ub1) SQLCS_IMPLICIT);
  RWL_OATIME_END
  if (OCI_SUCCESS != xev->status)
  {
    rwldberror1(xev, loc, fname);
  }
  RWL_OATIME_BEGIN(xev, loc, db->seshp, 0, fname, 1)
    xev->status = OCILobTrim2(db->svchp, xev->errhp, (void *)lobp
    	, amtp );
  RWL_OATIME_END
  if (OCI_SUCCESS != xev->status)
  {
    rwldberror1(xev, loc, fname);
  }
}

void rwlwritelobo(rwl_xeqenv *xev
, OCILobLocator *lobp
, rwl_cinfo *db
, rwl_value *pstr
, rwl_value *poff
, rwl_location *loc
, text *fname
)
{
  ub8 amtp = rwlstrlen(pstr->sval);
  if (!db)
  {
    rwlexecerror(xev, loc, RWL_ERROR_LOB_NOT_FILLED);
    return;
  }
  if (!amtp)
  {
    // ORA-24801: illegal parameter value in OCI lob function
    // if you try writing zero bytes to LOB
    rwlexecerror(xev, loc, RWL_ERROR_ATTEMPT_ZERO_WRITE, db->vname);
    return;
  }
  if (OCI_SUCCESS != (xev->status= 
    OCILobWrite2(db->svchp, xev->errhp, (void *)lobp
    	, &amtp
	, 0 /*char_amtp*/
	, (ub8)poff->ival /*offset*/
	, pstr->sval, amtp
	, OCI_ONE_PIECE
	, 0,0
	, (ub2) 0, (ub1) SQLCS_IMPLICIT)))
  {
    rwldberror1(xev, loc, fname);
  }
  if (OCI_SUCCESS != (xev->status= 
    OCILobTrim2(db->svchp, xev->errhp, (void *)lobp
    	, amtp + (ub8) poff->ival - 1 )))
  {
    rwldberror1(xev, loc, fname);
  }
}

void rwlreadlob(rwl_xeqenv *xev
, OCILobLocator *lobp
, rwl_cinfo *db
, rwl_value *pres
, rwl_location *loc
, text *fname
)
{
  ub8 amtchr = pres->slen;
  
  if (!db)
  {
    rwlexecsevere(xev, loc, "[rwlreadlob-nodb]");
    return;
  }
  rwlinitstrvar(xev, pres);
  RWL_OATIME_BEGIN(xev, loc, db->seshp, 0, fname, 1)
    xev->status = OCILobRead2(db->svchp
        , xev->errhp
	, lobp
	, 0 /*byte_amtp*/
    	, &amtchr
	, 1 /*offset*/
	, pres->sval, amtchr
	, OCI_ONE_PIECE
	, 0,0
	, (ub2) 0, (ub1) SQLCS_IMPLICIT);
  RWL_OATIME_END
  if (OCI_SUCCESS != xev->status)
  {
    rwldberror1(xev, loc, fname);
    pres->sval[0] = 0;
    pres->ival=0;
    pres->dval=0.0;
  }
  else
  {
    if (bit(xev->tflags, RWL_THR_DSQL))
    {
      rwldebugcode(xev->rwm,loc,"OCILobRead got amtchr=%d %.*s"
        , amtchr, amtchr, pres->sval);
    }
    pres->sval[amtchr] = 0;
    pres->ival=rwlatosb8(pres->sval);
    pres->dval=rwlatof(pres->sval);
  }
  pres->isnull = 0;
}

void rwlreadloblo(rwl_xeqenv *xev
, OCILobLocator *lobp
, rwl_cinfo *db
, rwl_value *pres
, text *presnam
, rwl_value *plen
, rwl_value *poff
, rwl_location *loc
, text *fname
)
{
  ub8 buflen = pres->slen;
  ub8 amtchr = (ub8) plen->ival;

  if (bit(xev->tflags, RWL_THR_DSQL))
  {
    rwldebugcode(xev->rwm,loc,"readloblo %s (len %d) amtchr=%d poff=%d", presnam
       , pres->slen, amtchr, poff->ival);
  }

  if (amtchr > buflen)
  {
    rwlexecerror(xev, loc, RWL_ERROR_TOO_SHORT_STRING
    , presnam, buflen-1, amtchr);
    return;
  }
	
  if (!db)
  {
    rwlexecsevere(xev, loc, "[rwlreadlob-nodb]");
    return;
  }
  rwlinitstrvar(xev, pres);
  RWL_OATIME_BEGIN(xev, loc, db->seshp, 0, fname, 1)
    xev->status = OCILobRead2(db->svchp
	, xev->errhp
	, lobp
	, 0 /*byte_amtp*/
    	, &amtchr /*char_ampt*/
	, (ub8)poff->ival /*offset*/
	, pres->sval, buflen
	, OCI_ONE_PIECE
	, 0,0
	, (ub2) 0, (ub1) SQLCS_IMPLICIT);
  RWL_OATIME_END
  if (OCI_SUCCESS != xev->status)
  {
    rwldberror1(xev, loc, fname);
    pres->sval[0] = 0;
    pres->ival=0;
    pres->dval=0.0;
  }
  else
  {
    if (bit(xev->tflags, RWL_THR_DSQL))
    {
      rwldebugcode(xev->rwm,loc,"OCILobRead got amtchr=%d %.*s"
        , amtchr, amtchr, pres->sval);
    }

    pres->sval[amtchr] = 0;
    pres->ival=rwlatosb8(pres->sval);
    pres->dval=rwlatof(pres->sval);
  }
  pres->isnull = 0;
}


/* This routine will do the checking of an rwl_cinfo
 * that has been allocated and put into rwm->dbsav
 *
 * The code used to be in the parser but with the 
 * addition of the -l option, the code is also needed
 * in main.
 */
void rwlbuilddb(rwl_main *rwm)
{ 
  if (rwm->dbsav)
  { 
    if (!rwm->dbsav->pooltype) 
    {
      rwm->dbsav->pooltype = RWL_DBPOOL_DEDICATED;
      rwm->dbsav->pooltext = "dedicated";
    }

    rwm->dbsav->sbmode = OCI_DEFAULT;

    // Check cclass
    switch (rwm->dbsav->pooltype)
    {
      case RWL_DBPOOL_SESSION:
        if (bit(rwm->m3flags, RWL_P3_SP_NORLB))
	  bis(rwm->dbsav->flags, RWL_DB_SP_NORLB);
        if (!rwm->dbsav->cclass)
	  rwm->dbsav->cclass = rwlstrdup(rwm, (text *) ""); // must be able to free
        break;

      case RWL_DBPOOL_POOLED:
        if (!rwm->dbsav->cclass)
	  rwm->dbsav->cclass = rwlstrdup(rwm, (text *) RWL_DEFAULT_CCLASS); // must be able to free
        break;

      default:
	if (rwm->dbsav->cclass)
	  rwlerror(rwm, RWL_ERROR_CCLASS_NOT_USEFUL);
	break;
    }

    if (rwm->dbsav->username && rwm->dbsav->username[0])
    {
      // check as sysdba etc
      text *t, *un, *justun, *as, *systxt;
      ub4 just2 = 0;

      un = rwlstrdup(rwm, rwm->dbsav->username); // use a copy as strtok changes

      // break into at most three tokens
      justun = rwlstrtok(un," \t\r\n");
      as = rwlstrtok(0, " \t\r\n");
      if (!as)
      {
        rwlfree(rwm, un);
	goto afterassysprocessing;
      }

      systxt = rwlstrtok(0, " \t\r\n");
      if (!systxt)
      { 
        // only two tokens that should be 'as sysxxxxx'
	systxt = as;
	as = justun;
	just2 = 1;
      }

      // lowercase them
      for (t=as; *t; t++)
	*t = (text) tolower(*t);
      for (t=systxt; *t; t++)
	*t = (text) tolower(*t);
      if (!rwlstrcmp(as,"as"))
      {
	// we have an "as" token
	if (!rwlstrcmp(systxt, "sysdba")) rwm->dbsav->sbmode = OCI_SYSDBA;
	else if (!rwlstrcmp(systxt, "sysoper")) rwm->dbsav->sbmode = OCI_SYSOPER;
	else if (!rwlstrcmp(systxt, "sysasm")) rwm->dbsav->sbmode = OCI_SYSASM;
#if (RWL_OCI_VERSION>=12)
	else if (!rwlstrcmp(systxt, "sysbackup")) rwm->dbsav->sbmode = OCI_SYSBKP;
	else if (!rwlstrcmp(systxt, "sysdg")) rwm->dbsav->sbmode = OCI_SYSDGD;
	else if (!rwlstrcmp(systxt, "syskm")) rwm->dbsav->sbmode = OCI_SYSKMT;
	else if (!rwlstrcmp(systxt, "sysrac")) rwm->dbsav->sbmode = OCI_SYSRAC;
#endif
	else
	{
	  rwlerror(rwm, RWL_ERROR_BAD_SYS_IN_USERNAME, rwm->dbsav->username);
	  rwlfree(rwm, un);
	  goto afterassysprocessing;
	}
      }
      // so we have 'as' and a proper sysxxx
      if (RWL_DBPOOL_DEDICATED != rwm->dbsav->pooltype)
      {
        rwlerror(rwm, RWL_ERROR_SYS_ONLY_DEDICATED);
	rwlfree(rwm, un);
	goto afterassysprocessing;
      }
      if (just2)
      {
	rwm->dbsav->username[0] = 0;
	rwlfree(rwm, un);
      }
      else
      {
	rwlfree(rwm, rwm->dbsav->username);
	rwm->dbsav->username = justun;
      }
    }
    afterassysprocessing:

    // First check various conneciton pool conditions
    switch (rwm->dbsav->pooltype)
    {
      case RWL_DBPOOL_CONNECT:
	if (bit(rwm->dbsav->flags, RWL_DB_DEFAULT)) // Cannot be default
	{
	  rwlerror(rwm, RWL_ERROR_CPOOL_NOT_GOOD, "default");
	  goto cannotbuild;
	}
	if (bit(rwm->dbsav->flags, RWL_DB_RESULTS)) // Cannot be results
	{
	  rwlerror(rwm, RWL_ERROR_CPOOL_NOT_GOOD, "results");
	  goto cannotbuild;
	}
	if (bit(rwm->dbsav->flags, RWL_DB_CCACHUSER)) // meaningless in con pool
	{
	  rwlerror(rwm, RWL_ERROR_CONNECT_DO_NOT_CURSORCACHE);
	}
	
      break;

      case RWL_DBPOOL_POOLED:
#ifndef RWL_DO_SPONCP
      case RWL_DBPOOL_SESSION:
#endif
        if (bit(rwm->dbsav->flags, RWL_DB_USECPOOL))
	{
	  rwlerror(rwm, RWL_ERROR_CANNOT_CPOOL, rwm->dbsav->vname);
	  goto cannotbuild;
	}

      default:
      break;
    }
    if (
	 (!rwm->dbsav->username && !rwm->dbsav->password)
	 ||
	 (rwm->dbsav->username && rwm->dbsav->password
	  && !rwm->dbsav->username[0] && !rwm->dbsav->password[0])
       )
    {
      // neither username or password set
      // or both are set to the empty string
      // set external (effectively a wallet)
      rwm->dbsav->username = rwm->dbsav->password = (text *)"";
      bis(rwm->dbsav->flags, RWL_DB_CREDEXT);
    }
    else
    {
      if (!rwm->dbsav->username)
      {
	rwm->dbsav->username = (text *)"SomethingUnlikely";
	rwlerror(rwm, RWL_ERROR_NO_USERNAME, rwm->dbsav->vname);
      }
      else if (!rwm->dbsav->password)
#if RWL_OS == RWL_WINDOWS
      {
	int j;

	if (isatty(fileno(stdin)) && isatty(fileno(stdout)))
	{
	  j=0;
	  if (rwm->dbsav->connect)
	    printf("Please enter password for %s@%*s: "
	    , rwm->dbsav->username, rwm->dbsav->conlen, rwm->dbsav->connect);
	  else
	    printf("Please enter password for %s: ", rwm->dbsav->username);
	  fflush(stdout);
	  rwm->dbsav->password = rwlalloc(rwm, RWL_MAX_IDLEN+2);
	  while (j<RWL_MAX_IDLEN+1)
	  {
	    int chr = getch();
	    switch (chr)
	    {
	      case 0:
		continue;
	      case 13:
		rwm->dbsav->password[j]=0;
		goto endofpasswordentry;
	      case 3: // ctrl-c
		rwlstopnow = RWL_STOP_BREAK;
		goto endofpasswordentry;
	    }
	    rwm->dbsav->password[j] = chr;
	    j++;
	  }
	endofpasswordentry:
	  printf("\r\n");
	  rwm->dbsav->password[j]=0;
	  if (j > RWL_MAX_IDLEN)
	    rwlerror(rwm, RWL_ERROR_PASSWORD_TOO_LONG);
	  else if (j<=1)
	    rwlerror(rwm, RWL_ERROR_PASSWORD_TOO_SHORT);
	}
	else
	  rwlerror(rwm, RWL_ERROR_STDINOUT_NOT_TTY);
      }
#else
      {
	char *xx;
	FILE *ttyin = fopen("/dev/tty","r");
	FILE *ttyout = fopen("/dev/tty","w");
	if (ttyin && ttyout)
	{
	  if (rwm->dbsav->connect)
	    fprintf(ttyout, "Please enter password for %s@%*s: "
	    , rwm->dbsav->username, rwm->dbsav->conlen, rwm->dbsav->connect);
	  else
	    fprintf(ttyout, "Please enter password for %s: ", rwm->dbsav->username);
	  fflush(ttyout);
	  rwlechooff(0);
	  rwm->dbsav->password = rwlalloc(rwm, RWL_MAX_IDLEN+2);
	  xx = fgets((char *)rwm->dbsav->password, RWL_MAX_IDLEN+2, ttyin);
	  rwlechoon(0);
	  fputs((char *)rwm->lineend, stdout);
	  if (xx)
	  { // read OK
	    ub4 l;
	    if ((l=(ub4)rwlstrlen(rwm->dbsav->password)) > RWL_MAX_IDLEN)
	      rwlerror(rwm, RWL_ERROR_PASSWORD_TOO_LONG);
	    else if (l<=1)
	      rwlerror(rwm, RWL_ERROR_PASSWORD_TOO_SHORT);
	    else
	      rwm->dbsav->password[l-1] = 0; // remove newline
	  }
	}
	else
	{
	  rwlerror(rwm, RWL_ERROR_NO_DEV_TTY);
	}
	if (ttyin)
	  fclose(ttyin);
	if (ttyout)
	  fclose(ttyout);
      
      }
#endif
    }
    if (!rwm->dbsav->connect)
    { 
      rwm->dbsav->connect = (text *)"";
      rwm->dbsav->conlen = 0;
    }
    if (rwm->dbsav->username && rwm->dbsav->password)
    {
      rwldbconnect(rwm->mxq, 0, rwm->dbsav);
      // bugfix - only do it if both resultsdb and user asked for stats or runs prepare
      if (bit(rwm->dbsav->flags, RWL_DB_RESULTS)
          && bit(rwm->mflags, RWL_P_STATISTICS|RWL_P_MPREPARE))
	rwlgetrunnumber(rwm);
      // The following primarily exists to make sure we can
      // actually get the results database.  But it also 
      // ensures rwm->vresdb has an actual value which 
      // it gets during rwlensureresdb()
      if (bit(rwm->dbsav->flags, RWL_DB_RESULTS) 
	  && bit(rwm->mflags, RWL_P_MEXECUTE))
      {
      RWL_SRC_ERROR_FRAME
	rwl_sql *rsql;
	rwl_bindef *brno, *dkey;
	sb2 notnull = 0;
	ub4 tooksess;
	rwl_cinfo *rdb = 0;
	text xkey[RWL_MAX_IDLEN+2];

	brno = (rwl_bindef *) rwlalloc(rwm, sizeof(rwl_bindef));
	dkey = (rwl_bindef *) rwlalloc(rwm, sizeof(rwl_bindef));
	
	brno->vname = RWL_RUNNUMBER_VAR;
	brno->vguess = rwlfindvar(rwm->mxq, RWL_RUNNUMBER_VAR, RWL_VAR_NOGUESS);
	brno->pos = 1;
	brno->bdtyp = RWL_BIND_POS;
	brno->vtype = RWL_TYPE_INT;
	brno->next = dkey;

	dkey->vname = (text *)"I#reskey";
	dkey->bdtyp = RWL_DIRDEFINE;
	dkey->vtype = RWL_TYPE_STR;
	dkey->pvar = xkey;
	dkey->slen = sizeof(xkey);
	dkey->pind = &notnull;
	dkey->pos = 1;

	/* allocate SQL and fill in */
	rsql = (rwl_sql *) rwlalloc(rwm, sizeof(rwl_sql));
	rsql->sql = (text *)
		    "select key from rwlrun\n"
		    "where runnumber = :1";
	rsql->sqllen = (ub4)rwlstrlen(rsql->sql);
	rsql->bindef = brno;
	rsql->bincount = 1;
	rsql->defcount = 1;
	rsql->vname = (text *)"I#checkrundb";

	/* do the database work */
	tooksess = rwlensureresdb(rwm->mxq, RWL_SRC_ERROR_LOC, rsql, &rdb);
	if (rdb)
	  rwlsimplesql(rwm->mxq, RWL_SRC_ERROR_LOC, rdb, rsql);
	if (tooksess)
	  rwlreleaseresdb(rwm->mxq, RWL_SRC_ERROR_LOC, rsql);
	  
	rwlfree(rwm, rsql);
	rwlfree(rwm, brno);
	rwlfree(rwm, dkey);
      RWL_SRC_ERROR_END
      }
    }
    else
      rwlcancelvar(rwm, rwm->dbsav->vname, RWL_VAR_NOGUESS);

    /* check resultsdb is session pool if psersec flush is wanted */
    if (bit(rwm->dbsav->flags, RWL_DB_RESULTS) 
       && rwm->flushstop
       && RWL_DBPOOL_SESSION != rwm->dbsav->pooltype)
    {
      rwlerror(rwm, RWL_ERROR_RESULTSDB_MUST_SESS);
      rwm->flushstop = 0;
    }
  }
  /* done, clear the field */
  if (bit(rwm->dbsav->flags, RWL_DB_DEFAULT) && RWL_DBPOOL_DEDICATED == rwm->dbsav->pooltype)
  {
    // If there is a default database of type dedicated, make it available in main

    /*ASSERT*/
    if (rwm->maindb || rwm->maintookses) // Only do this once
    {
      if (rwm->maindb)
	rwlsevere(rwm,"[rwlbuilddb-againmain1:%d;%s]", rwm->maintookses, rwm->maindb->vname);
      else
	rwlsevere(rwm,"[rwlbuilddb-againmain2:%d]", rwm->maintookses);
    }
    else
    {
      rwm->maindb = rwm->dbsav;
      rwm->maintookses = rwlensuresession(rwm->mxq, &rwm->loc, rwm->maindb, 0);
    }
  }
  rwm->dbsav = 0; // ought to call rwlfree on username, password, connect first
  return;

  cannotbuild:
  rwlcancelvar(rwm, rwm->dbsav->vname, RWL_VAR_NOGUESS);
  return;
}

sb4 rwlinitoci(rwl_main *rwm)
{
  /* Create OCI environment and allocate error handle */
  if (OCI_SUCCESS != (rwm->mxq->status=OCIEnvNlsCreate(&rwm->envhp
     , OCI_DEFAULT|OCI_THREADED|OCI_EVENTS|OCI_OBJECT
     , (dvoid *)0
     , (dvoid * (*)(dvoid *, size_t)) 0
     , (dvoid * (*)(dvoid *, dvoid *, size_t))0
     , (void (*)(dvoid *, dvoid *)) 0
     ,  0, (void **)0,  0, 0)))
  {
    rwlsevere(rwm, "[rwlinitoci-envnlscreate:%d]", rwm->mxq->status);
    return 0;
  }
  OCIThreadProcessInit();

  if (OCI_SUCCESS != (rwm->mxq->status=OCIHandleAlloc( rwm->envhp, (void **)&rwm->mxq->errhp,
        OCI_HTYPE_ERROR, (size_t)0, (dvoid**)0 )))
  {
    rwlsevere(rwm, "[rwlinitoci-allocerror:%d]", rwm->mxq->status);
    return 0;
  }
  if (OCI_SUCCESS != OCIThreadInit(rwm->envhp, rwm->mxq->errhp))
  {
    rwlerror(rwm, RWL_ERROR_OCITRHREADINIT);
    return 0;
  }


#if (RWL_OCI_VERSION>=23)
  if (!bit(rwm->m4flags, RWL_P4_URLERRORON))
  {
    ub4 mybool;
    RWL_SRC_ERROR_FRAME
    mybool = 1;
    if (OCI_SUCCESS != 
	  (rwm->mxq->status=OCIAttrSet( rwm->envhp, OCI_HTYPE_ENV,
		       &mybool,
		       sizeof(mybool), OCI_ATTR_SUPPRESS_ERROR_URL, rwm->mxq->errhp))
		       )
    {
      rwldberror0(rwm->mxq, RWL_SRC_ERROR_LOC);
      return 0;
    }
    RWL_SRC_ERROR_END
  }
#endif


  if (bit(rwm->m2flags, RWL_P2_EVTNOTIF))
  {
  RWL_SRC_ERROR_FRAME

    if (OCI_SUCCESS != 
	  (rwm->mxq->status=OCIAttrSet( rwm->envhp, OCI_HTYPE_ENV,
		       rwldbevent,
		       0, OCI_ATTR_EVTCBK, rwm->mxq->errhp))
		       )
    {
      rwldberror0(rwm->mxq, RWL_SRC_ERROR_LOC);
      return 0;
    }
    /* make our rwl_main * the context */
    if (OCI_SUCCESS != 
	  (rwm->mxq->status=OCIAttrSet( rwm->envhp, OCI_HTYPE_ENV,
		       (void *) rwm,
		       0, OCI_ATTR_EVTCTX, rwm->mxq->errhp))
		       )
    {
      rwldberror0(rwm->mxq, RWL_SRC_ERROR_LOC);
      return 0;
    }

  RWL_SRC_ERROR_END
  }


  return 1;
 
}

void rwlfinishoci(rwl_main *rwm)
{
  /* ignore errors */
  (void) OCIThreadTerm(rwm->envhp, rwm->mxq->errhp);
  (void) OCIHandleFree(rwm->mxq->errhp, OCI_HTYPE_ERROR);
  rwm->mxq->errhp = 0;
  if (rwm->cvrel <= 18)
  {
    // bug 30895426
    // note that we really need a smarter check
    (void) OCIHandleFree(rwm->envhp, OCI_HTYPE_ENV);
    rwm->envhp = 0;
    (void) OCITerminate(OCI_DEFAULT);
  }
}

void rwldbevent(void *ctx, OCIEvent *evthp)
{
  rwl_main *rwm = (rwl_main *) ctx;
  rwl_xeqenv *xev;
  ub4 evs;
  ub4 ub4sizep = sizeof(ub4);
  text *evhost = 0;
  text *dbname = 0;
  text *instname = 0;
  text *svcname = 0;
  char *hasrc = 0;

  // this may be called in a separate thread so we need a 
  // separate rwl_xeqenv with just the necessary OCI bits
  
  xev = (rwl_xeqenv *)rwlalloc(rwm, sizeof(rwl_xeqenv));
  if (OCI_SUCCESS != (xev->status=OCIHandleAlloc( rwm->envhp, (void **)&xev->errhp,
        OCI_HTYPE_ERROR, (size_t)0, (dvoid**)0 )))
  {
    rwlsevere(rwm, "[rwldbevent-allocerror:%d]", xev->status);
  }
  xev->rwm = rwm;
  xev->curdb = rwm->mxq->curdb;

  RWL_SRC_ERROR_FRAME

    if (OCI_SUCCESS != 
	  (xev->status=OCIAttrGet( evthp, OCI_HTYPE_EVENT,
		       &evs, &ub4sizep
		       , OCI_ATTR_HA_SOURCE, xev->errhp))
		       )
    {
      rwldberror3(xev, RWL_SRC_ERROR_LOC, 0, 0, RWL_DBE3_NOCTX);
      return;
    }
    switch(evs)
    {
      case OCI_HA_SOURCE_DATABASE: hasrc = "database"; break;
      case OCI_HA_SOURCE_NODE: hasrc = "node"; break;
      case OCI_HA_SOURCE_INSTANCE: hasrc = "instance"; break;
      case OCI_HA_SOURCE_SERVICE: hasrc = "service"; break;
      case OCI_HA_SOURCE_SERVICE_MEMBER: hasrc = "service_member"; break;
      case OCI_HA_SOURCE_SERVICE_PRECONNECT: hasrc = "service_preconnect"; break;
      case OCI_HA_SOURCE_ASM_INSTANCE: hasrc = "asm_instance"; break;
      default: hasrc = "unkown"; break;
    }
      


    if (OCI_SUCCESS != 
	  (xev->status=OCIAttrGet( evthp, OCI_HTYPE_EVENT,
		       &evs, &ub4sizep
		       , OCI_ATTR_HA_STATUS, xev->errhp))
		       )
    {
      rwldberror3(xev, RWL_SRC_ERROR_LOC, 0, 0, RWL_DBE3_NOCTX);
      return;
    }
    switch (evs)
    {
      case OCI_HA_STATUS_UP:
      case OCI_HA_STATUS_DOWN:
	if ( OCI_SUCCESS != 
	      (xev->status=OCIAttrGet( evthp, OCI_HTYPE_EVENT,
	       &evhost, &ub4sizep
	       , OCI_ATTR_HOSTNAME, xev->errhp))
	   )
	{
	  rwldberror3(xev, RWL_SRC_ERROR_LOC, 0, 0, RWL_DBE3_NOCTX);
	  return;
	}
	
	if ( OCI_SUCCESS != 
	      (xev->status=OCIAttrGet( evthp, OCI_HTYPE_EVENT,
	       &instname, &ub4sizep
	       , OCI_ATTR_INSTNAME, xev->errhp))
	   )
	{
	  rwldberror3(xev, RWL_SRC_ERROR_LOC, 0, 0, RWL_DBE3_NOCTX);
	  return;
	}
	 
	if ( OCI_SUCCESS != 
	      (xev->status=OCIAttrGet( evthp, OCI_HTYPE_EVENT,
	       &svcname, &ub4sizep
	       , OCI_ATTR_SERVICENAME, xev->errhp))
	   )
	{
	  rwldberror3(xev, RWL_SRC_ERROR_LOC, 0, 0, RWL_DBE3_NOCTX);
	  return;
	}

	if ( OCI_SUCCESS != 
	      (xev->status=OCIAttrGet( evthp, OCI_HTYPE_EVENT,
	       &dbname, &ub4sizep
	       , OCI_ATTR_DBNAME, xev->errhp))
	   )
	{
	  rwldberror3(xev, RWL_SRC_ERROR_LOC, 0, 0, RWL_DBE3_NOCTX);
	  return;
	}
	rwlerror(rwm, RWL_ERROR_EVENT_RECOGNIZED
	  , hasrc
	  , evhost ? evhost : (text *)"<nohost>"
	  , svcname ? svcname : (text *)"<noservice>"
	  , dbname ? dbname : (text *)"<nodatabase>"
	  , instname ? instname : (text *)"<noinstance>"
	  , (OCI_HA_STATUS_UP == evs) ? "up" : "down"
	  , rwlclock(xev, RWL_SRC_ERROR_LOC) );
	  
      break;

      default:
	rwlexecerror(xev, RWL_SRC_ERROR_LOC, RWL_ERROR_UNEXPECTED_EVENT, evs);
      break;
    }

  RWL_SRC_ERROR_END
  (void) OCIHandleFree(xev->errhp, OCI_HTYPE_ERROR);
  rwlfree(rwm, xev);

}

// These closely mimic the similar OCI calls
void rwlmutexinit(rwl_main *rwm, rwl_location *cloc, rwl_mutex **muxp)
{
  if (*muxp)
  {
    rwlexecsevere(rwm->mxq, cloc, "[rwlmutexinit-already]");
    return;
  }
    
  if ( OCI_SUCCESS != 
       (rwm->mxq->status=OCIThreadMutexInit(rwm->envhp, rwm->mxq->errhp, muxp))
    )
  {
    rwldberror0(rwm->mxq, cloc);
    rwlexecsevere(rwm->mxq, cloc, "[rwlmutexinit-cannot]");
    rwlstopnow = RWL_STOP_MARK;
    return;
  }
}

void rwlmutexget(rwl_xeqenv *xev, rwl_location *cloc, rwl_mutex *mux)
{
  if (!mux)
  {
    rwlexecsevere(xev, cloc, "[rwlmutexget-notinit]");
    return;
  }

  if ( OCI_SUCCESS != 
       (xev->status=OCIThreadMutexAcquire(xev->rwm->envhp, xev->errhp, mux))
    )
  {
    rwldberror0(xev, cloc);
    rwlexecsevere(xev, cloc, "[rwlmutexget-cannot]");
    rwlstopnow = RWL_STOP_MARK;
    return;
  }
}

void rwlmutexrel(rwl_xeqenv *xev, rwl_location *cloc, rwl_mutex *mux)
{
  if (!mux)
  {
    rwlexecsevere(xev, cloc, "[rwlmutexrel-notinit]");
    return;
  }

  if ( OCI_SUCCESS != 
       (xev->status=OCIThreadMutexRelease(xev->rwm->envhp, xev->errhp, mux))
    )
  {
    rwldberror0(xev, cloc);
    rwlexecsevere(xev, cloc, "[rwlmutexrel-cannot]");
    rwlstopnow = RWL_STOP_MARK;
    return;
  }
}

void rwlmutexdestroy(rwl_main *rwm, rwl_location *cloc, rwl_mutex **muxp)
{
  if (!*muxp)
  {
    rwlexecsevere(rwm->mxq, cloc, "[rwlmutexdestroy-notinit]");
    return;
  }

  if ( OCI_SUCCESS != 
       (rwm->mxq->status=OCIThreadMutexDestroy(rwm->envhp, rwm->mxq->errhp, muxp))
    )
  {
    rwldberror0(rwm->mxq, cloc);
    rwlexecsevere(rwm->mxq, cloc, "[rwlmutexdestroy-cannot]");
    rwlstopnow = RWL_STOP_MARK;
    return;
  }
  *muxp = 0;
}

sb8 rwldbsescount(rwl_xeqenv *xev, rwl_location *cloc, rwl_cinfo *db, ub4 typ )
{
  sb4 ocires;
  ub4 ub4attr = 0;
  ub4 ub4mode;

  switch (db->pooltype)
  {
    case RWL_DBPOOL_SESSION:
      switch(typ)
      {
	case RWL_STACK_ACTIVESESSIONCOUNT: ub4mode = OCI_ATTR_SPOOL_BUSY_COUNT; break;
	case RWL_STACK_OPENSESSIONCOUNT:   ub4mode = OCI_ATTR_SPOOL_OPEN_COUNT; break;
	default:
	  rwlexecsevere(xev, cloc, "[rwldbsescount-bad:%s;%d;%d]", db->vname, db->pooltype, typ);
	  return 0;
      }
      if (!db->spool)
      {
	rwlexecsevere(xev, cloc, "[rwldbsescount-nospool:%s]", db->vname);
	return 0;
      }
    break;

    case RWL_DBPOOL_CONNECT:
      switch(typ)
      {
	case RWL_STACK_ACTIVESESSIONCOUNT: ub4mode = OCI_ATTR_CONN_BUSY_COUNT; break;
	case RWL_STACK_OPENSESSIONCOUNT:   ub4mode = OCI_ATTR_CONN_OPEN_COUNT; break;
	default:
	  rwlexecsevere(xev, cloc, "[rwldbsescount-badc:%s;%d;%d]", db->vname, db->pooltype, typ);
	  return 0;
      }
      if (!db->cpool)
      {
	rwlexecsevere(xev, cloc, "[rwldbsescount-nocpool:%s]", db->vname);
	return 0;
      }
    break;

    default:
      rwlexecsevere(xev, cloc, "[rwldbsescount-notpool:%s;%d]", db->vname, db->pooltype);
      return 0;
  }

    
  if (bit(xev->rwm->m2flags, RWL_P2_NOEXEC))
  {
    rwlerror(xev->rwm, RWL_ERROR_NOEXEC);
    return 0;
  }

  switch (db->pooltype)
  {
    case RWL_DBPOOL_SESSION:
      if (OCI_SUCCESS !=
        (ocires = OCIAttrGet(db->spool, OCI_HTYPE_SPOOL
	     , &ub4attr
	     , 0, ub4mode, xev->errhp)))
	rwlexecsevere(xev, cloc, "[rwldbsescount-gets:%s;%d;%d]", db->vname, ub4mode, ocires);
    break;

    case RWL_DBPOOL_CONNECT:
      if (OCI_SUCCESS !=
        (ocires = OCIAttrGet(db->cpool, OCI_HTYPE_CPOOL
	     , &ub4attr
	     , 0, ub4mode, xev->errhp)))
	rwlexecsevere(xev, cloc, "[rwldbsescount-getc:%s;%d;%d]", db->vname, ub4mode, ocires);
    break;

    default:
    break;

  }

  return ub4attr;
}

// Return true if the connection class is good 
ub4 rwlcclassgood2(rwl_xeqenv *xev, rwl_location *cloc, text *cc)
{
  ub8 cclen = rwlstrlen(cc);
  text *ccbad;
  // We really allow up to 1024 bytes, but be reasonable
  if (cclen<1 || cclen>128)
  {
    if (cloc)
      rwlexecerror(xev, cloc, RWL_ERROR_CLASS_BADLEN, cclen);
    else
      rwlerror(xev->rwm, RWL_ERROR_CLASS_BADLEN, cclen);
    return 0;
  }
  // may not contain *
  if ((ccbad=rwlstrchr(cc, '*')))
  {
    if (cloc)
      rwlexecerror(xev, cloc, RWL_ERROR_CLASS_BADCHAR, *ccbad);
    else
      rwlerror(xev->rwm, RWL_ERROR_CLASS_BADCHAR, *ccbad);
    return 0;
  }

  // I'm happy!
  return 1;
}

void rwldbmodsesp(rwl_xeqenv *xev, rwl_location *cloc, rwl_cinfo *db, ub4 newlo, ub4 newhi)
{

  if (bit(xev->rwm->m2flags, RWL_P2_NOEXEC))
  {
    rwlerror(xev->rwm, RWL_ERROR_NOEXEC);
    return;
  }

  if (bit(xev->tflags, RWL_THR_DSQL))
  {
    rwldebugcode(xev->rwm,cloc,"modsesp %s %d->%d %d->%d 0x%x", db->vname
       , db->poolmin, newlo, db->poolmax, newhi, db->flags);
  }

  /* Connect or create pool via OCI */
  switch (db->pooltype)
  {
    case RWL_DBPOOL_RECONNECT:
    case RWL_DBPOOL_DEDICATED:
    case RWL_DBPOOL_RETHRDED:
    case RWL_DBPOOL_POOLED:
    case RWL_DBPOOL_CONNECT:
      rwlexecsevere(xev, cloc, "[rwldbmodsesp-baddb:%s;%d]", db->vname, db->pooltype);
    break;

    case RWL_DBPOOL_SESSION:
      {
	db->poolmin = newlo;
	db->poolmax = newhi;
#if (RWL_OCI_VERSION<18)
	if (db->poolmin == db->poolmax) /* prevent bug 26568177/22707432 */
	{
	  if (db->poolmin > 2)
	    db->poolmin--;
	  else
	    db->poolmax++; 
	}
#endif
	db->poolincr = 0;
	/* make increment depend on difference between min and max */
	if (db->poolmin != db->poolmax)
	  db->poolincr = 1 + (db->poolmax-db->poolmin)/10;

	if (OCI_SUCCESS !=
	      (xev->status = OCISessionPoolCreate( xev->rwm->envhp, xev->errhp, db->spool
			      , 0,0 // &db->spstring, &db->spslen
			      , 0,0 // conn db->connect, db->conlen
			      , db->poolmin, db->poolmax, db->poolincr
			      , 0,0 // db->username, (ub4)rwlstrlen(db->username)
			      , 0,0 // db->password, (ub4)rwlstrlen(db->password)
			      , OCI_SPC_REINITIALIZE)))
	{
	  rwldberror0(xev, cloc);
	  goto exitfrommoddb;
	}
	
      }
    break;
      
    default:
      rwlexecsevere(xev, cloc, "[rwldbmodsesp-notyet:%s;%s]", db->vname, db->pooltext);
    
  }
  exitfrommoddb:
  ;

}

void rwldbmodccache(rwl_xeqenv *xev, rwl_location *cloc, rwl_cinfo *db, ub4 newcc)
{

  if (bit(xev->rwm->m2flags, RWL_P2_NOEXEC))
  {
    rwlerror(xev->rwm, RWL_ERROR_NOEXEC);
    return;
  }

  if (bit(xev->tflags, RWL_THR_DSQL))
  {
    rwldebugcode(xev->rwm,cloc,"modccach %s %d->%d 0x%x", db->vname
       , db->stmtcache, newcc, db->flags);
  }
  db->stmtcache = (ub4) newcc;

  switch (db->pooltype)
  {
    case RWL_DBPOOL_RECONNECT:
    case RWL_DBPOOL_DEDICATED:
    case RWL_DBPOOL_RETHRDED:
      /*ASSERT*/
      if (!db->svchp)
      {
	rwlexecsevere(xev, cloc, "[rwldbmodccache-nosvc:%s;%d]", db->vname, db->pooltype);
	goto exitfrommodcc;
      }

      if ((OCI_SUCCESS != (xev->status=OCIAttrSet( db->svchp, OCI_HTYPE_SVCCTX,
			       &db->stmtcache, 0, OCI_ATTR_STMTCACHESIZE, xev->errhp)))
       )
      {
	rwldberror0(xev, cloc);
	goto exitfrommodcc;
      }
    break; 

    case RWL_DBPOOL_CONNECT:
      rwlexecsevere(xev, cloc, "[rwldbmodccache-baddb:%s;%d]", db->vname, db->pooltype);
    break;

    case RWL_DBPOOL_POOLED:
    case RWL_DBPOOL_SESSION:
      /*ASSERT*/
      if (!db->spool)
      {
	rwlexecsevere(xev, cloc, "[rwldbmodccache-nospool:%s;%d]", db->vname, db->pooltype);
	goto exitfrommodcc;
      }
      if (OCI_SUCCESS != 
	    (xev->status=OCIAttrSet( db->spool, OCI_HTYPE_SPOOL,
			 &db->stmtcache,
			 0, OCI_ATTR_SPOOL_STMTCACHESIZE, xev->errhp))
			 )
      {
	rwldberror0(xev, cloc);
	goto exitfrommodcc;
      }
	
    break;
      
    default:
      rwlexecsevere(xev, cloc, "[rwldbmodccache-notyet:%s;%s]", db->vname, db->pooltext);
    
  }
  exitfrommodcc:
  ;

}

// Find select list elements, match them to identifiers
// if possible and add them as defines
void rwlgetdefines(rwl_xeqenv *xev
, OCIStmt *stmhp
, OCIError *errhp
, rwl_sql *sq
, rwl_location *cloc
, text *fname)
{
  ub4 c, colcount;
  OCIParam *colhp = 0;
  text *cnam;
  ub4 clen;
  rwl_bindef *bd;

  if (bit(sq->flags, RWL_SQFLAG_ARRAYD))
  {
    rwlexecsevere(xev, cloc, "[rwlgetdefines-usearrdef:%s;%d]", sq->vname);
    return;
  }
  // Get count of select list elements
  if (OCI_SUCCESS != 
	(xev->status=OCIAttrGet( stmhp, OCI_HTYPE_STMT,
		     &colcount,
		     0, OCI_ATTR_PARAM_COUNT, xev->errhp))
		     )
  {
    rwldberror0(xev, cloc);
    return;
  }
  if (0==colcount)
  {
    rwlexecerror(xev, cloc, RWL_ERROR_DEFINE_NO_COLS, sq->vname);
    return;
  }

  for (c=1; c<=colcount; c++)
  {
    sb4 l;
    rwl_identifier *vv;
    if
      ( 
	OCI_SUCCESS != ( xev->status=
	OCIParamGet(stmhp, OCI_HTYPE_STMT, errhp, (void **)&colhp, c))
	||
	OCI_SUCCESS != ( xev->status=
	OCIAttrGet(colhp, OCI_DTYPE_PARAM, &cnam, &clen, OCI_ATTR_NAME, errhp))
      )
      {
	rwldberror0(xev, cloc);
	return;
      }

    if (bit(xev->tflags, RWL_DEBUG_MISC))
    {
      rwldebugcode(xev->rwm,cloc,"get define %s %d", sq->vname, c);
    }

    if (!(bd=rwlsearchdef(sq, c)))
    {
      // The position has not already been defined
      l = rwlbdident(xev, cloc, cnam, clen, sq, RWL_DEFINE, fname);

      if (l<0) // if var not exist or alias needed
	continue;

      if (bit(xev->evar[l].flags, RWL_IDENT_GLOBAL))
      {
	rwlexecerror(xev, cloc, RWL_ERROR_INCORRECT_TYPE2
	, xev->evar[l].stype, xev->evar[l].vname,"define");
	continue;
      }

      vv = xev->evar+l;
      
      // allocate and add to list
      bd = rwlalloc(xev->rwm, sizeof(rwl_bindef));
      bd->vname = vv->vname;
      bd->vguess = l;
      bd->vtype = vv->vtype;
      bd->bdtyp = RWL_DEFINE;
      bd->pos = c;
      bd->next = sq->bindef;
      sq->bindef = bd;
      sq->defcount++;
    }

  }
}

// Find binds
void rwlgetbinds(rwl_xeqenv *xev
, OCIStmt *stmhp
, OCIError *errhp
, rwl_sql *sq
, rwl_location *cloc
, text *fname)
{
  ub4 b, bincount;
  rwl_bindef *bd;
  text *bvnam, **bvnamp = &bvnam; // first and all bind names
  ub1   bvlen,  *bvlenp = &bvlen; // and lengths
  text *ivnam, **ivnamp = &ivnam; // first and all indicator names
  ub1   ivlen,  *ivlenp = &ivlen; // and lengths
  ub1   bvdup,  *bvdupp = &bvdup; // first and all duplicate flags
  OCIBind
       *bindh, **bindhp = &bindh; // fist and all bind handles
  sb4 res, bcret = 0, bcret2;

  if (bit(sq->flags, RWL_SQFLAG_ARRAYD))
  {
    rwlexecsevere(xev, cloc, "[rwlgetbinds-usearrdef:%s;%d]", sq->vname);
    return;
  }
  // Ask for first bind info
  res = OCIStmtGetBindInfo(stmhp, errhp, 1, 1, &bcret
        , &bvnam, &bvlen, &ivnam, &ivlen
	, &bvdup, &bindh);
  if (OCI_NO_DATA == res) // no binds
    return;
  if (OCI_SUCCESS != res)
  {
    rwldberror0(xev, cloc);
    return;
  }

  if (bcret < 0) // more than one
  {
    // allocate and ask for all
    bincount = (ub4) -bcret;
    bvnamp = rwlalloc(xev->rwm, bincount*(sizeof(text *)));
    ivnamp = rwlalloc(xev->rwm, bincount*(sizeof(text *)));
    bvlenp = rwlalloc(xev->rwm, bincount*(sizeof(ub1)));
    ivlenp = rwlalloc(xev->rwm, bincount*(sizeof(ub1)));
    bvdupp = rwlalloc(xev->rwm, bincount*(sizeof(ub1)));
    bindhp = rwlalloc(xev->rwm, bincount*(sizeof(OCIBind *)));
    res = OCIStmtGetBindInfo(stmhp, errhp, bincount, 1, &bcret2
	  , bvnamp, bvlenp, ivnamp, ivlenp
	  , bvdupp, bindhp);
    if (OCI_SUCCESS != res)
    {
      rwldberror0(xev, cloc);
      goto freeandreturn;
    }
  }
  else
    bincount = (ub4) bcret;

  for (b=1; b<=bincount; b++)
  {
    if (!bvdupp[b-1])
    {
      sb4 l;
      rwl_identifier *vv;
      text bindname[257]; // null terminated bind name

      memcpy(bindname, bvnamp[b-1], bvlenp[b-1]);
      bindname[bvlenp[b-1]]=0;
      // do we want all lower case?
      if (!bit(sq->flags, RWL_SQLFLAG_ICASE))
      {
	text *tol = bindname;
	while (*tol)
	{
	  if (isupper(*tol))
	    *tol = (text) tolower(*tol);
	  tol++;
	}
      }

      if (bit(xev->tflags, RWL_DEBUG_MISC))
      {
	rwldebugcode(xev->rwm,cloc,"get bind %s %d %s", sq->vname, b, bindname);
      }

      if (!(bd=rwlsearchbind(sq, b, bindname)))
      {

	bis(xev->tflags, RWL_P_FINDVAR_NOERR);
	l = rwlbdident(xev, cloc, bvnamp[b-1], bvlenp[b-1], sq, RWL_BIND_ANY, fname);
	bic(xev->tflags, RWL_P_FINDVAR_NOERR);

	if (l<0)
	{
	  rwlexecerror(xev, cloc
	  , RWL_VAR_BINDNUM==l ? RWL_ERROR_BIND_BAD_NAME : RWL_ERROR_BIND_NAME_NOVAR
	  , bvlenp[b-1], bvnamp[b-1], sq->vname);
	}
	else if (bit(xev->evar[l].flags, RWL_IDENT_GLOBAL))
	{
	  rwlexecerror(xev, cloc, RWL_ERROR_INCORRECT_TYPE2
	  , xev->evar[l].stype, xev->evar[l].vname,"bind");
	}
	else
	{
	  // bind needed and variable exists
	  // allocate and add to list
	  vv = xev->evar+l;
	  bd = rwlalloc(xev->rwm, sizeof(rwl_bindef));
	  bd->vname = vv->vname;
	  bd->slen = vv->num.slen;  // well only really relevant for STR
	  bd->vguess = l;
	  bd->vtype = vv->vtype;
	  if (bit(sq->flags, RWL_SQLFLAG_BONAM)
	      && sq->boname
	      && 0==rwlstrncmp(bindname,sq->boname,rwlstrlen(sq->boname))
	    )
	    bd->bdtyp = RWL_BINDOUT_POS;
	  else
	    bd->bdtyp = RWL_BIND_POS;
	  bd->pos = b;
	  bd->next = sq->bindef;
	  sq->bindef = bd;
	  sq->bincount++;
	}
      }
    }
  }

  freeandreturn:
  if (bcret < 0)
  {
    rwlfree(xev->rwm, bvnamp);
    rwlfree(xev->rwm, ivnamp);
    rwlfree(xev->rwm, bvlenp);
    rwlfree(xev->rwm, ivlenp);
    rwlfree(xev->rwm, bvdupp);
    rwlfree(xev->rwm, bindhp);
  }
  return;
}

// See if define has already been done
rwl_bindef *rwlsearchdef(rwl_sql *sq, ub4 pos)
{
  rwl_bindef *lbd = sq->bindef;
  while (lbd)
  {
    if (RWL_DEFINE == lbd->bdtyp && lbd->pos == pos)
      return lbd;
    lbd = lbd->next;
  }
  return 0;
}

// See if bind has already been done
rwl_bindef *rwlsearchbind(rwl_sql *sq, ub4 pos, text *nam)
{
  rwl_bindef *lbd = sq->bindef;
  while (lbd)
  {
    if (
      pos
      && (RWL_BIND_POS == lbd->bdtyp || RWL_BINDOUT_POS ==lbd->bdtyp)
      && lbd->pos == pos)
      return lbd;
    if (
      nam
      && (RWL_BIND_NAME == lbd->bdtyp || RWL_BINDOUT_NAME ==lbd->bdtyp)
      && lbd->bname
      && 0==rwlstrcmp(nam
	   , (((text)':')==lbd->bname[0] ? lbd->bname+1 : lbd->bname) ))
      return lbd;

    lbd = lbd->next;
  }
  return 0;
}

void rwlcqnregister(rwl_xeqenv *xev
, rwl_location *cloc
, rwl_cinfo *db
, ub4 timeout
, text *fname)
{
#ifndef RWL_USE_CQN
  (void) fname;
  (void) timeout;
  (void) db;
  rwlexecsevere(xev, cloc, "[rwlcqnregister-notinuse]");
#else
  /* cqnregister */
  if (bit(xev->tflags, RWL_THR_DSQL))
  {
    rwldebugcode(xev->rwm,cloc,"executing cqnregister at %s", db->vname);
  }

  if (bit(db->flags, RWL_DB_DEAD))
  {
    rwlexecerror(xev, cloc, RWL_ERROR_WARN_DEAD_DATABASE, "registration for querynotification");
    rwlwait(xev, cloc, 1.0);
    goto badregister;
  }
  
  if (!db->svchp)
    rwlexecerror(xev, cloc, RWL_ERROR_WARN_NO_DATABASE, "registration for querynotification");
  else 
  {
    ub4 namespace = OCI_SUBSCR_NAMESPACE_DBCHANGE;
    ub4 cq_qosflags = OCI_SUBSCR_CQ_QOS_QUERY | OCI_SUBSCR_CQ_QOS_BEST_EFFORT;
    ub4 qosflags = 0;

    // The registration and the later callback use the same rwl_xeqenv
    // which is the one created for the registration thread.
    // But since OCI itself starts a different thread, we must make sure
    // the registration code and the callback code don't run at the same
    // time. 
    // We take this mutext _before_ we do the actual registration
    // so when the callback is (potentially) called, the mutex _is_
    // set, unless we have done the completion of the registration
    // where we release the mutex
    rwlmutexget(xev, cloc, xev->regmut);

    if (OCI_SUCCESS!=(xev->status=OCIHandleAlloc( xev->rwm->envhp, (void **)&db->subhp,
		  OCI_HTYPE_SUBSCRIPTION, (size_t)0, (dvoid**)0 )))
    {
      rwlexecsevere(xev, cloc, "[rwlcqnregister-allocsub:%s;%d]", db->vname, xev->status);
      goto badregister;
    }
    // set timeout
    if (OCI_SUCCESS != 
	  (xev->status=OCIAttrSet( db->subhp, OCI_HTYPE_SUBSCRIPTION
	       , &timeout, sizeof(ub4)
	       , OCI_ATTR_SUBSCR_TIMEOUT, xev->errhp)))
    {
      rwlexecsevere(xev, cloc, "[rwlcqnregister-timeout:%s;%d]", db->vname, xev->status);
      goto badregister;
    }
    // set namespace
    if (OCI_SUCCESS != 
	  (xev->status=OCIAttrSet( db->subhp, OCI_HTYPE_SUBSCRIPTION
	       , &namespace, sizeof(ub4)
	       , OCI_ATTR_SUBSCR_NAMESPACE, xev->errhp)))
    {
      rwlexecsevere(xev, cloc, "[rwlcqnregister-namespace:%s;%d]", db->vname, xev->status);
      goto badregister;
    }
    // set qosflags
    if (OCI_SUCCESS != 
	  (xev->status=OCIAttrSet( db->subhp, OCI_HTYPE_SUBSCRIPTION
	       , &qosflags, sizeof(ub4)
	       , OCI_ATTR_SUBSCR_QOSFLAGS, xev->errhp)))
    {
      rwlexecsevere(xev, cloc, "[rwlcqnregister-qosflags:%s;%d]", db->vname, xev->status);
      goto badregister;
    }
    // set cq_qosflags
    if (OCI_SUCCESS != 
	  (xev->status=OCIAttrSet( db->subhp, OCI_HTYPE_SUBSCRIPTION
	       , &cq_qosflags, sizeof(ub4)
	       , OCI_ATTR_SUBSCR_CQ_QOSFLAGS, xev->errhp)))
    {
      rwlexecsevere(xev, cloc, "[rwlcqnregister-cq_qosflags:%s;%d]", db->vname, xev->status);
      goto badregister;
    }
    // set callback
    if (OCI_SUCCESS != 
	  (xev->status=OCIAttrSet( db->subhp, OCI_HTYPE_SUBSCRIPTION
	       , (void *)rwlcqncall, 0
	       , OCI_ATTR_SUBSCR_CALLBACK, xev->errhp)))
    {
      rwlexecsevere(xev, cloc, "[rwlcqnregister-callback:%s;%d]", db->vname, xev->status);
      goto badregister;
    }
    // set callback context
    if (OCI_SUCCESS != 
	  (xev->status=OCIAttrSet( db->subhp, OCI_HTYPE_SUBSCRIPTION
	       , (void *)xev, 0
	       , OCI_ATTR_SUBSCR_CTX, xev->errhp)))
    {
      rwlexecsevere(xev, cloc, "[rwlcqnregister-context:%s;%d]", db->vname, xev->status);
      goto badregister;
    }

    // and do the registration
    // which is also where OCI starts the thread that will eventually
    // execute the callback code
    if (OCI_SUCCESS != 
	  (xev->status=OCISubscriptionRegister( db->svchp, &db->subhp
	       , 1, xev->errhp, OCI_SECURE_NOTIFICATION)))
    {
      rwldberror1(xev, cloc, fname);
      db->subhp = 0;
    }
    else
    {
      bis(db->flags, RWL_DB_CQNREG);
    }
  }

  return;

  badregister:
  if (db->subhp)
  {
    OCIHandleFree(db->subhp, OCI_HTYPE_SUBSCRIPTION);
    db->subhp = 0;
  }
  return;
#endif
}

void rwlcqnregdone(rwl_xeqenv *xev
, rwl_location *cloc
, rwl_cinfo *db
, text *fname)
{
  (void)fname;
#ifndef RWL_USE_CQN
  (void) db;
  rwlexecsevere(xev, cloc, "[rwlcqnregdone-notinuse]");
#else
  /* regdone */
  if (bit(xev->tflags, RWL_THR_DSQL))
  {
    rwldebugcode(xev->rwm,cloc,"executing regdone at %s", db->vname);
  }

  if (bit(db->flags, RWL_DB_DEAD))
  {
    rwlexecerror(xev, cloc, RWL_ERROR_WARN_DEAD_DATABASE, "registration completion for querynotification");
    rwlwait(xev, cloc, 1.0);
    goto badregdone;
  }
  
  if (!db->svchp)
    rwlexecerror(xev, cloc, RWL_ERROR_WARN_NO_DATABASE, "registration completion for querynotification");
  else 
  {
    if (!bit(db->flags, RWL_DB_CQNREG))
    {
      // error during registration
      return;
    }
    if (!db->subhp)
    {
      rwlexecsevere(xev, cloc, "[cqnregdone-nosubhp:%s;0x%x]", db->vname, db->flags);
      goto badregdone;
    }
    if (!xev->regmut)
    {
      rwlexecsevere(xev, cloc, "[cqnregdone-noregmut:%s;0x%x]", db->vname, db->flags);
      goto badregdone;
    }

    // we mark that registration is done, by clearing the bit in the 
    // database that tells rwlexecsql to also put the sql's being 
    // executed onto the registration. 
    // So when we come here, the code between RWL_T_START and RWL_T_THEN
    // is completed. It is therefore safe to let the actual codeback
    // code execute, which we signal by releasing the mutex
    bic(db->flags, RWL_DB_CQNREG);
    rwlmutexrel(xev, cloc, xev->regmut);
    return;
  }

  badregdone:
  bic(db->flags, RWL_DB_CQNREG);
  return;
#endif
}

void rwlcqnunreg(rwl_xeqenv *xev
, rwl_location *cloc
, rwl_cinfo *db
, text *fname)
{
#ifndef RWL_USE_CQN
  (void) fname;
  (void) db;
  rwlexecsevere(xev, cloc, "[rwlcqnunreg-notinuse]");
#else
  /* cqnunreg */
  if (bit(xev->tflags, RWL_THR_DSQL))
  {
    rwldebugcode(xev->rwm,cloc,"executing cqnunreg at %s", db->vname);
  }

  if (bit(db->flags, RWL_DB_DEAD))
  {
    rwlexecerror(xev, cloc, RWL_ERROR_WARN_DEAD_DATABASE, "unregistration for querynotification");
    rwlwait(xev, cloc, 1.0);
    goto badunreg;
  }
  
  if (!db->svchp)
    rwlexecerror(xev, cloc, RWL_ERROR_WARN_NO_DATABASE, "unregistration for querynotification");
  else 
  {
    if (!db->subhp)
    {
      rwlexecsevere(xev, cloc, "[rwldbunreg-nosubhp:%s;0x%x]", db->vname, db->flags);
      goto badunreg;
    }

    if (OCI_SUCCESS != 
	  (xev->status=OCISubscriptionUnRegister( db->svchp, db->subhp
	       , xev->errhp, OCI_SECURE_NOTIFICATION)))
    {
      rwldberror1(xev, cloc, fname);
    }
  }

  badunreg:
  if (db->subhp)
  {
    OCIHandleFree(db->subhp, OCI_HTYPE_SUBSCRIPTION);
    db->subhp = 0;
  }
  bic(db->flags, RWL_DB_CQNREG);
  return;
#endif
}

void rwlsqllogging(rwl_xeqenv *xev
, rwl_location *cloc
, rwl_sql *sq
, text *fname)
{
  rwl_bindef *bd;
  rwl_location sloc;
  ub4 b=0;
  if (!xev->rwm->sqllogfile)
    return;
  memcpy(&sloc, cloc, sizeof(rwl_location));
  sloc.errlin = sq->sqllino;
  if (*sq->sqlid && rwlstrcmp(sq->sqlid,(text *)"0000000000000"))
    rwlexecerror(xev, &sloc, RWL_ERROR_SQL_LOGGING
	, sq->sqlid, xev->rwm->lineend, sq->sql);
  else
    rwlexecerror(xev, &sloc, RWL_ERROR_SQL_LOGGING_NOSQLID, xev->rwm->lineend, sq->sql);
  if (sq->bincount)
  {
    if (bit(sq->flags, RWL_SQFLAG_ARRAYB))
      fprintf(xev->rwm->sqllogfile,"array binds in sql (first value shown):%s", xev->rwm->lineend);
    else
      fprintf(xev->rwm->sqllogfile,"binds in sql:%s", xev->rwm->lineend);
    bd = sq->bindef;
    while (bd)
    {
      if (bit(sq->flags, RWL_SQFLAG_ARRAYB))
      {
	switch (bd->bdtyp)
	{
	  case RWL_BIND_POS:
	    fprintf(xev->rwm->sqllogfile,"bind pos=%d, value=", bd->pos);
	    goto logarraybinds;
	  break;

	  case RWL_BIND_NAME:
	    fprintf(xev->rwm->sqllogfile,"bind name=%s, value=", bd->bname);
	  logarraybinds:
	    {
	      if (((sb2 *)sq->ari[b])[0])
		fprintf(xev->rwm->sqllogfile, "NULL%s", xev->rwm->lineend);
	      switch(bd->vtype)
	      {
		case RWL_TYPE_INT:
		  fprintf(xev->rwm->sqllogfile, xev->rwm->iformat, ((sb8 *)sq->abd[b])[0]);
		  fputs((char *)xev->rwm->lineend, xev->rwm->sqllogfile);
		break;

		case RWL_TYPE_DBL:
		  fprintf(xev->rwm->sqllogfile, xev->rwm->dformat, ((double *)sq->abd[b])[0]);
		  fputs((char *)xev->rwm->lineend, xev->rwm->sqllogfile);
		break;

		case RWL_TYPE_STR:
		  fprintf(xev->rwm->sqllogfile, "%s%s", (text *)sq->abd[b], xev->rwm->lineend);
		break;

		case RWL_TYPE_RAW:
		case RWL_TYPE_CLOB:
		case RWL_TYPE_NCLOB:
		case RWL_TYPE_BLOB:
		  
		break;

		default:
		break;
	      }

	    }
	  default:
	  break;
	}

      }
      else
      {
	switch (bd->bdtyp)
	{
	  case RWL_BIND_POS:
	    fprintf(xev->rwm->sqllogfile,"bind pos=%d, value=", bd->pos);
	    goto logbinds;
	  break;

	  case RWL_BIND_NAME:
	    fprintf(xev->rwm->sqllogfile,"bind name=%s, value=", bd->bname);
	  logbinds:
	    {
	      rwl_value *pnum = 0;
	      sb4 vno;
	      vno = rwlfindvarug2(xev, bd->vname, &bd->vguess, fname);
	      if (vno<0)
	      {
		rwlexecsevere(xev, cloc, "[rwlsqllogging-badvar:%d;%s;%s]", vno, sq->vname, bd->vname);
		goto failure;
	      }
	      pnum = rwlnuminvar(xev, xev->evar+vno);
	      if (pnum->isnull)
		fprintf(xev->rwm->sqllogfile, "NULL%s", xev->rwm->lineend);
	      else switch(bd->vtype)
	      {
		case RWL_TYPE_INT:
		  fprintf(xev->rwm->sqllogfile, xev->rwm->iformat, pnum->ival);
		  fputs((char *)xev->rwm->lineend, xev->rwm->sqllogfile);
		break;

		case RWL_TYPE_DBL:
		  fprintf(xev->rwm->sqllogfile, xev->rwm->dformat, pnum->dval);
		  fputs((char *)xev->rwm->lineend, xev->rwm->sqllogfile);
		break;

		case RWL_TYPE_STR:
		  fprintf(xev->rwm->sqllogfile, "%s%s", pnum->sval, xev->rwm->lineend);
		break;

		case RWL_TYPE_RAW:
		  fprintf(xev->rwm->sqllogfile, "RAW%s", xev->rwm->lineend);
		break;

		case RWL_TYPE_BLOB:
		  fprintf(xev->rwm->sqllogfile, "BLOB%s", xev->rwm->lineend);
		break;

		case RWL_TYPE_CLOB:
		  fprintf(xev->rwm->sqllogfile, "CLOB%s", xev->rwm->lineend);
		break;

		default:
		break;
	      }
	    }
	  default:
	  break;
	}
      }
      bd = bd->next; b++;
    }
  }

failure:
  if (xev->rwm->sqllogfile)
    fflush(xev->rwm->sqllogfile);
}

rwlcomp(rwlsql_c, RWL_GCCFLAGS)
