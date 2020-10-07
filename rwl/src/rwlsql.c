/*
 * RWP*Load Simulator
 *
 * Copyright (c) 2020 Oracle Corportaion
 * Licensed under the Universal Permissive License v 1.0
 * as shown at https://oss.oracle.com/licenses/upl/
 *
 * Real World performance Load simulator SQL (database)
 *
 * rwlsql.c
 *
 * History
 *
 * bengsig 07-oct-2020 - Completely remove dysfunctional sharding code
 * bengsig 03-sep-2020 - add /oFALLTHROUGHo/ to shut up gcc
 * bengsig 31-aug-2020 - Bouncing (dedicated, dead) database
 * bengsig 16-jun-2020 - Fix core dump when database does not connect
 * bengsig 18-may-2020 - Fix RWL-600 after 28002 error on session pool
 * bengsig 30-mar-2020 - Dynamic SQL changes
 * bengsig 12-mar-2020 - statemark
 * bengsig 06-mar-2020 - active/open sessioncount
 * bengsig 21-feb-2020 - Add support for dedicated requestmark database
 * bengsig 21-feb-2020 - Fix ociping to really do OCIPing ...
 * bengsig 19-feb-2020 - Fix rwlfinishoci 
 * bengsig 19-dec-2019 - Fix DRCP bounce in main
 * bengsig 18-nov-2019 - Don't call OCISesionPoolDestroy if we have sent OCIBreak
 * bengsig 24-oct-2019 - Passing cclass with drcp requires strlen
 * bengsig 14-oct-2019 - Correct release of DRCP 
 * bengsig  8-oct-2019 - Only set OCI_EVENTS if -E --event-notify is set
 * bengsig 12-aug-2019 - added oerstats
 * bengsig 21-jun-2019 - leak: call rwlfree in rwldbevent
 * bengsig 11-jun-2019 - array define
 * bengsig 27-feb-2019 - Added "and expresseion" to cursor loops
 * bengsig 13-feb-2019 - added persec contineous flush
 * bengsig 07-feb-2019 - exit if DEAD after recursive call
 * bengsig 06-feb-2019 - ping
 * bengsig 10-may-2017 - Creation
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <sys/time.h>
#include <math.h>
#include "rwl.h"

void rwldbconnect(rwl_xeqenv *xev, rwl_location *cloc, rwl_cinfo *db)
{
  sb4 vno;
  sb4 ocires;
  ub4 myses = 0;

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
    rwldebugcode(xev->rwm,cloc,"connect %s@%s %s %d stmc %d flg 0x%x", db->username, db->connect
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
	goto returnafterdberror;
      }
      if (OCI_SUCCESS != (xev->status=OCIServerAttach( db->srvhp, xev->errhp, db->connect,
                              (sb4)rwlstrlen( db->connect ), 0 )))
	goto returnwithdberror;
      if (OCI_SUCCESS!=(xev->status=OCIHandleAlloc( xev->rwm->envhp, (void **)&db->seshp,
                          OCI_HTYPE_SESSION, (size_t)0, (dvoid**)0 )))
      {
        rwlexecsevere(xev, cloc, "[rwldbconnect-allocsession:%s;%d]", db->vname, xev->status);
	goto returnafterdberror;
      }
      if (OCI_SUCCESS!=(xev->status=OCIHandleAlloc( xev->rwm->envhp, (void **)&db->svchp,
			    OCI_HTYPE_SVCCTX, (size_t)0, (dvoid**)0 )))
      {
        rwlexecsevere(xev, cloc, "[rwldbconnect-allocsvtctx:%s;%d]", db->vname, xev->status);
	goto returnafterdberror;
      }
      if (   (OCI_SUCCESS!=(xev->status=OCIAttrSet( db->svchp, OCI_HTYPE_SVCCTX, db->srvhp,
                          0, OCI_ATTR_SERVER, xev->errhp )))
        || (OCI_SUCCESS!=(xev->status=OCIAttrSet( db->seshp, OCI_HTYPE_SESSION,
                          db->username, (ub4)rwlstrlen(db->username), OCI_ATTR_USERNAME,
                          xev->errhp)))
        || (OCI_SUCCESS!=(xev->status=OCIAttrSet( db->seshp, OCI_HTYPE_SESSION,
                          db->password, (ub4)rwlstrlen(db->password), OCI_ATTR_PASSWORD,
                          xev->errhp)))
        || (OCI_SUCCESS != (xev->status=OCISessionBegin(db->svchp, xev->errhp, db->seshp,
		          OCI_CRED_RDBMS, OCI_DEFAULT|OCI_STMT_CACHE )))
	 )
      {
	if (OCI_SUCCESS_WITH_INFO == xev->status) /* typically ORA-28002 */
	  rwldberror(xev, cloc, 0);
	else
	  goto returnwithdberror;
      }
      if ( (OCI_SUCCESS != (xev->status=OCIAttrSet( db->svchp, OCI_HTYPE_SVCCTX,
				 db->seshp, 0, OCI_ATTR_SESSION, xev->errhp)))
         || (OCI_SUCCESS != (xev->status=OCIAttrSet( db->svchp, OCI_HTYPE_SVCCTX,
				 &db->stmtcache, 0, OCI_ATTR_STMTCACHESIZE, xev->errhp)))
	 )
	goto returnwithdberror;

#ifdef NEVER
      if (bit(xev->tflags, RWL_DEBUG_ALLOWHACK))
      {
	// set lob prefetch under hack control
	// This was an experiment, you probably don't want it
	// The reason really being that OCI Prefetch doesn't work with LOBS
	ub4 ub4attr = 1000000;
	if (OCI_SUCCESS != 
	      (xev->status=OCIAttrSet( db->seshp, OCI_HTYPE_SESSION
			   , &ub4attr,
			   0, OCI_ATTR_DEFAULT_LOBPREFETCH_SIZE, xev->errhp))
			   )

	{
	  goto returnwithdberror;
	}
	rwldebugcode(xev->rwm,cloc,"%d set lob prefetch %s", xev->thrnum, db->vname);
      }
#endif

    break;

    case RWL_DBPOOL_POOLED:
      db->poolmin = 1; db->poolmax = 1;
      db->poolincr = 0;

      if (OCI_SUCCESS != OCIHandleAlloc( xev->rwm->envhp, (void **)&db->spool,
                                OCI_HTYPE_SPOOL, 0, 0 ))
      {
        rwlexecsevere(xev, cloc, "[rwldbconnect-allocspool:%s;%d]", db->vname, xev->status);
	goto returnafterdberror;
      }

      // DRCP here
      if (OCI_SUCCESS !=
            (xev->status = OCISessionPoolCreate( xev->rwm->envhp, xev->errhp, db->spool
			    , &db->pstring, &db->pslen
			    , db->connect, (ub4)rwlstrlen( db->connect )
			    , db->poolmin, db->poolmax, db->poolincr
			    , db->username, (ub4)rwlstrlen(db->username)
			    , db->password, (ub4)rwlstrlen(db->password)
			    , OCI_SPC_STMTCACHE|OCI_SPC_HOMOGENEOUS)))
      {
	if (OCI_SUCCESS_WITH_INFO == xev->status) /* typically ORA-28002 */
	  rwldberror(xev, cloc, 0);
	else
	  goto returnwithdberror;
      }
      if (OCI_SUCCESS != 
	    (xev->status=OCIAttrSet( db->spool, OCI_HTYPE_SPOOL,
			 &db->stmtcache,
			 0, OCI_ATTR_SPOOL_STMTCACHESIZE, xev->errhp))
			 )
      {
	goto returnwithdberror;
      }

      // Allocate and fill authp
      if (OCI_SUCCESS!=(xev->status=OCIHandleAlloc( xev->rwm->envhp, (void **)&db->authp,
		    OCI_HTYPE_AUTHINFO, (size_t)0, (dvoid**)0 )))
      {
	rwlexecsevere(xev, cloc, "[rwldbconnect-allocauthinfo2:%s;%d]", db->vname, xev->status);
	goto returnafterdberror;
      }
      if (OCI_SUCCESS != 
	    (xev->status=OCIAttrSet( db->authp, OCI_HTYPE_AUTHINFO,
			 db->cclass,
			 (ub4)rwlstrlen(db->cclass), OCI_ATTR_CONNECTION_CLASS, xev->errhp))
			 )
      {
	goto returnwithdberror;
      }
#ifdef NEVER
      // Not done for DRCP
      {
	ub1 ub1attr = OCI_SPOOL_ATTRVAL_WAIT;
	if (OCI_SUCCESS != 
	      (xev->status=OCIAttrSet( db->spool, OCI_HTYPE_SPOOL,
			   &ub1attr,
			   sizeof(ub1), OCI_ATTR_SPOOL_GETMODE, xev->errhp))
			   )
	{
	  goto returnwithdberror;
	}
      }
#endif
    break;

    case RWL_DBPOOL_SESSION:
      {
        ub4 spcmode;
	ub1 ub1attr;
	if (!bit(xev->tflags, RWL_P_ISMAIN))
	{
	  rwlexecsevere(xev, cloc, "[rwldbconnect-poolinthr:%s]", db->vname);
	  goto returnafterdberror;
	}

	if (OCI_SUCCESS != OCIHandleAlloc( xev->rwm->envhp, (void **)&db->spool,
				  OCI_HTYPE_SPOOL, 0, 0 ))
	{
	  rwlexecsevere(xev, cloc, "[rwldbconnect-allocspool2:%s;%d]", db->vname, xev->status);
	  goto returnafterdberror;
	}

	spcmode = OCI_SPC_NO_RLB|OCI_SPC_STMTCACHE|OCI_SPC_HOMOGENEOUS;
	/* This should NOT be needed when OCI_SPC_NO_RLB is given */
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
			      , &db->pstring, &db->pslen
			      , db->connect, (ub4)rwlstrlen( db->connect )
			      , db->poolmin, db->poolmax, db->poolincr
			      , db->username, (ub4)rwlstrlen(db->username)
			      , db->password, (ub4)rwlstrlen(db->password)
			      , spcmode)))
	{
	  if (OCI_SUCCESS_WITH_INFO == xev->status) /* typically ORA-28002 */
	    rwldberror(xev, cloc, 0);
	  else
	    goto returnwithdberror;
	}
	if (OCI_SUCCESS != 
	      (xev->status=OCIAttrSet( db->spool, OCI_HTYPE_SPOOL,
			   &db->stmtcache,
			   0, OCI_ATTR_SPOOL_STMTCACHESIZE, xev->errhp))
			   )
	{
	  goto returnwithdberror;
	}
	
	// Allocate and fill authp
	if (OCI_SUCCESS!=(xev->status=OCIHandleAlloc( xev->rwm->envhp, (void **)&db->authp,
		      OCI_HTYPE_AUTHINFO, (size_t)0, (dvoid**)0 )))
	{
	  rwlexecsevere(xev, cloc, "[rwldbconnect-allocauthinfo2:%s;%d]", db->vname, xev->status);
	  goto returnafterdberror;
	}
	if (OCI_SUCCESS != 
	      (xev->status=OCIAttrSet( db->authp, OCI_HTYPE_AUTHINFO,
			   db->username,
			   (ub4)rwlstrlen(db->username), OCI_ATTR_USERNAME, xev->errhp))
			   )
	{
	  rwlexecsevere(xev, cloc, "[rwldbconnect-authsetusername:%s;%d]", db->vname, xev->status);
	  goto returnwithdberror;
	}
	if (OCI_SUCCESS != 
	      (xev->status=OCIAttrSet( db->authp, OCI_HTYPE_AUTHINFO,
			   db->password,
			   (ub4)rwlstrlen(db->password), OCI_ATTR_PASSWORD, xev->errhp))
			   )
	{
	  rwlexecsevere(xev, cloc, "[rwldbconnect-authsetpassword:%s;%d]", db->vname, xev->status);
	  goto returnwithdberror;
	}
	if (OCI_SUCCESS != 
	      (xev->status=OCIAttrSet( db->authp, OCI_HTYPE_AUTHINFO,
			   db->cclass,
			   (ub4)rwlstrlen(db->cclass), OCI_ATTR_CONNECTION_CLASS, xev->errhp))
			   )
	{
	  rwlexecsevere(xev, cloc, "[rwldbconnect-authsetcclass:%s;%d]", db->vname, xev->status);
	  goto returnwithdberror;
	}

	if (db->sptimeout)
	{
	  if (OCI_SUCCESS != 
		(xev->status=OCIAttrSet( db->spool, OCI_HTYPE_SPOOL,
			     &db->sptimeout,
			     0, OCI_ATTR_SPOOL_TIMEOUT, xev->errhp))
			     )
	  {
	    goto returnwithdberror;
	  }
	}
	ub1attr = OCI_SPOOL_ATTRVAL_WAIT;
	if (OCI_SUCCESS != 
	      (xev->status=OCIAttrSet( db->spool, OCI_HTYPE_SPOOL,
			   &ub1attr,
			   sizeof(ub1), OCI_ATTR_SPOOL_GETMODE, xev->errhp))
			   )
	{
	  goto returnwithdberror;
	}

      }
    break;
      
    default:
      rwlexecsevere(xev, cloc, "[rwldbconnect-notyet:%s;%s;%s]", db->username, db->connect, db->pooltext);
    
  }

  /* get the server release if in main */
  if ( 
       bit(xev->tflags, RWL_P_ISMAIN)
     )
  {
    ub4 release;
    text notused[4];

    release=0;
    switch (db->pooltype)
    {
      case RWL_DBPOOL_DEDICATED:
      case RWL_DBPOOL_RECONNECT:
      case RWL_DBPOOL_RETHRDED:
	if (OCI_SUCCESS != (xev->status = RWLServerRelease ( db->srvhp 
			    , xev->errhp, notused, sizeof(notused)
			    , OCI_HTYPE_SERVER, &release )))
	  rwldberror(xev, cloc, 0);
      break;

      case RWL_DBPOOL_SESSION:
	myses = rwlensuresession(xev, cloc, db, 0);
	if (OCI_SUCCESS != (xev->status = RWLServerRelease ( db->svchp 
			    , xev->errhp, notused, sizeof(notused)
			    , OCI_HTYPE_SVCCTX, &release )))
	  rwldberror(xev, cloc, 0);
      break;
	
      case RWL_DBPOOL_POOLED:
	myses = rwlensuresession(xev, cloc, db, 0);
	if (OCI_SUCCESS != (xev->status = RWLServerRelease ( db->svchp 
			    , xev->errhp, notused, sizeof(notused)
			    , OCI_HTYPE_SVCCTX, &release )))
	  rwldberror(xev, cloc, 0);
      break;
	
      default:
      break;
      
    }

//#ifdef NEVER
  if (bit(xev->tflags, RWL_DEBUG_MISC))
    rwldebug(xev->rwm,"server release 0x%x", release);
//#endif
  snprintf((char *)db->serverr, RWL_DB_SERVERR_LEN, "%d.%d.%d.%d.%d"
  			, RWL_SR_1(release)
			, RWL_SR_2(release)
			, RWL_SR_3(release)
			, RWL_SR_4(release)
			, RWL_SR_5(release));

  }
  /* show connected to message if not quiet not bounce and main */
  if (!bit(xev->tflags,RWL_P_QUIET) && 
       !bit(db->flags, RWL_DB_BOUNCING) &&
       bit(xev->tflags, RWL_P_ISMAIN)
     )
  {
    text buf[OCI_ERROR_MAXMSG_SIZE2];


    switch (db->pooltype)
    {
      case RWL_DBPOOL_DEDICATED:
	if (OCI_SUCCESS != (xev->status = OCIServerVersion ( db->srvhp 
			    , xev->errhp, buf, sizeof(buf)
			    , OCI_HTYPE_SERVER )))
	  rwldberror(xev, cloc, 0);
	else
	{
	  if (bit(xev->rwm->m2flags, RWL_P2_LOPTDEFDB))
	    printf("Connected default database to:\n%s\n" , buf);
	  else
	    printf(bit(db->flags,RWL_DB_RESULTS)
	      ? "Connected %s used as repository to:\n%s\n\n"
	      : "Connected %s to:\n%s\n\n"
	      , db->vname, buf);
	}
      break;

      case RWL_DBPOOL_RECONNECT:
	if (OCI_SUCCESS != (xev->status = OCIServerVersion ( db->srvhp 
			    , xev->errhp, buf, sizeof(buf)
			    , OCI_HTYPE_SERVER )))
	  rwldberror(xev, cloc, 0);
	else
	{
	  if (bit(xev->rwm->m2flags, RWL_P2_LOPTDEFDB))
	    printf("Connected default database with reconnect to:\n%s\n" , buf);
	  else
	  printf(bit(db->flags,RWL_DB_RESULTS)
	    ? "Connected %s with reconnect used as repository to:\n%s\n\n"
	    : "Connected %s with reconnect to:\n%s\n\n"
	    , db->vname, buf);
        }
      break;

      case RWL_DBPOOL_RETHRDED:
	if (OCI_SUCCESS != (xev->status = OCIServerVersion ( db->srvhp 
			    , xev->errhp, buf, sizeof(buf)
			    , OCI_HTYPE_SERVER )))
	  rwldberror(xev, cloc, 0);
	else
	  printf("Connected %s for threads dedicated to:\n%s\n\n", db->vname, buf);
      break;

      case RWL_DBPOOL_SESSION:
	if (OCI_SUCCESS != (xev->status = OCIServerVersion ( db->svchp 
			    , xev->errhp, buf, sizeof(buf)
			    , OCI_HTYPE_SVCCTX )))
	  rwldberror(xev, cloc, 0);
	else
	{
	  if (bit(xev->rwm->m2flags, RWL_P2_LOPTDEFDB))
	    printf("Created default database as session pool (%d..%d) to:\n%s\n"
	      , db->poolmin, db->poolmax
	      , buf);
	  else
	  {
	    if (bit(db->flags, RWL_DB_RESULTS))
	      printf("Created %s as session pool (%d..%d) used as repository to:\n%s\n\n"
	      , db->vname, db->poolmin, db->poolmax, buf);
	    else
	      printf("Created %s as session pool (%d..%d) to:\n%s\n\n"
	      , db->vname, db->poolmin, db->poolmax, buf);
	  }
	}
      break;
	
      case RWL_DBPOOL_POOLED:
	if (OCI_SUCCESS != (xev->status = OCIServerVersion ( db->svchp 
			    , xev->errhp, buf, sizeof(buf)
			    , OCI_HTYPE_SVCCTX )))
	  rwldberror(xev, cloc, 0);
	else
	printf("Connected %s using DRCP to:\n%s\n\n", db->vname, buf);
      break;
	
      default:
      break;
      
    }



  }
  
  if ( myses &&
       bit(xev->tflags, RWL_P_ISMAIN)
     )
  {
    switch (db->pooltype)
    {
      case RWL_DBPOOL_SESSION:
	bis(xev->tflags, RWL_P_SESRELDROP);
	// fall thru
      case RWL_DBPOOL_POOLED:
	rwlreleasesession(xev, cloc, db, 0);
      break;
	
    }
  }

  /* logoff immediatedly if reconnect or thread dedicated in main */
  if ( (RWL_DBPOOL_RECONNECT == db->pooltype)
     || (bit(xev->tflags, RWL_P_ISMAIN) && RWL_DBPOOL_RETHRDED == db->pooltype)
     )
  {
    xev->status = OCISessionEnd(db->svchp, xev->errhp, db->seshp, OCI_DEFAULT);
    if (OCI_SUCCESS!=xev->status)
      goto returnwithdberror;

    /* and disconnect */
    xev->status = OCIServerDetach( db->srvhp, xev->errhp, OCI_DEFAULT );
    if (OCI_SUCCESS!=xev->status)
      goto returnwithdberror;
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
      goto returnwithdberror;

  }
#endif

  return;

  returnwithdberror:
    rwldberror(xev, cloc, 0);
  returnafterdberror:
    /* free what was alloced */

    if (db->authp
	&& (OCI_SUCCESS != (ocires = OCIHandleFree(db->authp, OCI_HTYPE_AUTHINFO))))
      rwlexecsevere(xev, cloc, "[rwldbconnect-freeauthinfo:%s;%d]", db->vname, ocires);
    if (db->svchp 
        && (OCI_SUCCESS != (ocires = OCIHandleFree(db->svchp, OCI_HTYPE_SVCCTX))))
      rwlexecsevere(xev, cloc, "[rwldbconnect-freesvcctx:%s;%d]", db->vname, ocires);
    if (db->seshp
        && (OCI_SUCCESS != (ocires = OCIHandleFree(db->seshp, OCI_HTYPE_SESSION))))
      rwlexecsevere(xev, cloc, "[rwldbconnect-freesession:%s;%d]", db->vname, ocires);


    if (db->srvhp)
    {
      xev->status = OCIServerDetach( db->srvhp, xev->errhp, OCI_DEFAULT );
      if (OCI_SUCCESS != xev->status)
	rwldberror(xev, cloc, 0);
      ocires = OCIHandleFree(db->srvhp, OCI_HTYPE_SERVER);
      if (OCI_SUCCESS != ocires)
	rwlexecsevere(xev, cloc, "[rwldbconnect-freserver:%s;%d]", db->vname, ocires);
      db->srvhp = 0;
    }
    db->svchp = 0; db->seshp = 0;
    xev->evar[vno].vtype = RWL_TYPE_CANCELLED;
    xev->evar[vno].stype = "cancelled (db)";

  return;
}

void rwlociping(rwl_xeqenv *xev
, rwl_location *cloc
, rwl_cinfo *db)
{
  /* ociping */
  if (bit(xev->tflags, RWL_THR_DSQL))
  {
    rwldebugcode(xev->rwm,cloc,"executing ping at %s", db->vname);
  }

  if (bit(db->flags, RWL_DB_DEAD))
  {
    rwlexecerror(xev, cloc, RWL_ERROR_PING_DEAD_DATABASE);
    rwlwait(xev, cloc, 1.0);
  }
  
  if (!db->svchp)
    rwlexecerror(xev, cloc, RWL_ERROR_PING_NO_DATABASE);
  else if(OCI_SUCCESS != (xev->status = OCIPing(db->svchp
			  , xev->errhp, OCI_DEFAULT)))
    rwldberror0(xev, cloc);
  return;
}

void rwlcommit2(rwl_xeqenv *xev
, rwl_location *cloc
, rwl_cinfo *db
, text *fname)
{
  /* commit */
  ub4 i;
  rwl_identifier *v;
  rwl_sql *sq;

  if (bit(xev->tflags, RWL_THR_DSQL))
  {
    rwldebugcode(xev->rwm,cloc,"executing commit of %s", db->vname);
  }

  /* Find sql and flush if needed */
  v = xev->evar;
  for (i=0; i<xev->varcount; i++)
  {
    if (v[i].vtype == RWL_TYPE_SQL
	&& rwlinscope(v+i, cloc->fname, fname)
        && (sq = v[i].vdata)
	&& bit(sq->flags, RWL_SQFLAG_ARRAYB)
	&& sq->aix)
      rwlflushsql2(xev, cloc, db, sq, fname);
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
  else if(OCI_SUCCESS != (xev->status = OCITransCommit(db->svchp
			  , xev->errhp, OCI_DEFAULT)))
    rwldberror(xev, cloc, 0);
  else
  {
    bic(db->flags, RWL_DB_DIDDML); /* Mark that DML has been taken care of */
    bic(db->flags, RWL_DB_DIDPLSQL); /* Mark that PLSQL has been taken care of */
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
  else if(OCI_SUCCESS != (xev->status = OCITransRollback(db->svchp
			  , xev->errhp, OCI_DEFAULT)))
    rwldberror(xev, cloc, 0);
  else
  {
    bic(db->flags, RWL_DB_DIDDML); /* Mark that DML has been taken care of */
    bic(db->flags, RWL_DB_DIDPLSQL); /* Mark that PLSQL has been taken care of */
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
  ub4 numcols, i, asiz, tookses, bc, dc, dasiz; 
  sb4 st;
  rwl_bindef *bd = 0;
  rwl_value *pnum = 0;

  rwldbclearerr(xev);
  /* execute a SQL statement once */
  tookses = rwlensuresession2(xev, cloc, db, sq, fname);
  if (bit(xev->tflags, RWL_THR_DSQL))
  {
    rwldebugcodenonl(xev->rwm,cloc,"executing sql %s at %s@%s took=%d flgs:0x%x"
      , sq->vname, db->username, db->connect, tookses, sq->flags);
  }

  if (bit(db->flags, RWL_DB_DEAD))
  {
    //rwlwait(xev, cloc, 1.0);
    goto failure;
  }

  /*assert*/
  if (!db->svchp)
  {
    rwlexecsevere(xev, cloc, "[rwlexecsql-noconn:%s;%s;%s;%s]", sq->vname, db->username, db->connect, db->pooltext);
    goto failure;
  }

  stmhp = 0;
  if (OCI_SUCCESS != (xev->status = 
      OCIStmtPrepare2( db->svchp, &stmhp, xev->errhp, sq->sql, sq->sqllen,
                      (text *)0, 0, OCI_NTV_SYNTAX, 
#ifdef RWL_USE_SQL_ID
		  // oddly, it causes an extra parse call if we only use
		  // the OCI_PREP2_GET_SQL_ID flag during the first prepare
		  //( (!bit(sq->flags, RWL_SQFLAG_GOTID) && rwl122ormore(xev->rwm))
		  ( (                                     rwl122ormore(xev->rwm))
		    ? OCI_PREP2_GET_SQL_ID
		    : 0
		  ) | 
#endif
		      OCI_DEFAULT )))
  {
    if (bit(xev->tflags, RWL_THR_DSQL))
    {
      fputs("\n",stderr);
      fflush(stderr);
    }
    rwldberror(xev, cloc, 0);
    goto failure;
  }

  dc = dasiz = 0; // not using define array
  if (doloop)
  {
    bic(sq->flags, RWL_SQFLAG_ARMEM);
    /* pick the one set for the sql or the default */
    if (sq->asiz <= 0)
    {
      asiz = xev->defasiz;
      if (bit(sq->flags, RWL_SQFLAG_DYNAMIC))
      {
	if (bit(xev->tflags, RWL_THR_DSQL))
	{
	  fputs("\n",stderr);
	  fflush(stderr);
	}
	rwlexecerror(xev, cloc, RWL_DEFAULT_ARRAY, sq->vname, asiz);
      }
      bis(sq->flags, RWL_SQFLAG_ARMEM);
    }
    else
    {
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

  /* walk through binds and defines */
  bd = sq->bindef; i=0; bc=dc=0;
  while (bd)
  {
    if (rwlbdisdir(bd) && doloop)
    {
      /* Direct binds/defines not yet implemented for cursor loops */
      rwlexecsevere(xev, cloc, "[rwlexecsql-dirloopnotyet:%s;%s]", sq->vname, bd->vname);
      goto failure;
    }

    if (!rwlbdisdir(bd))
    { 
      sb4 vno;
      /* ordinary bind/define against rwloadsim variables */
      vno = rwlfindvarug2(xev, bd->vname, &bd->vguess, fname);
      if (vno<0)
      {
	rwlexecsevere(xev, cloc, "[rwlexecsql-bindef2:%d;%s;%s]", vno, sq->vname, bd->vname);
	goto failure;
      }
      // OLD pnum = &xev->evar[vno].num;
      pnum = rwlnuminvar(xev, xev->evar+vno);
      /* make sure strings are allocated */
      if ((bd->vtype == RWL_TYPE_STR || bd->vtype == RWL_TYPE_RAW)
        && pnum->vsalloc == RWL_SVALLOC_NOT)
	rwlinitstrvar(xev, pnum);
    }
    /* Clean out binhp & defhp so OCI doesn't attempt reuse old ones */
    bd->binhp = 0;
    bd->defhp = 0;
    /* make the actual bind or define */
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
	    { rwldberror(xev, cloc, sq); goto failure; }
	  break;

	  case RWL_TYPE_DBL:
	    xev->status = RWLDefineByPos(stmhp, &bd->defhp, xev->errhp, bd->pos
			   ,  bd->pvar,  sizeof(double), SQLT_FLT
			   ,  bd->pind, 0, 0, OCI_DEFAULT);
	    if (OCI_SUCCESS != xev->status)
	    { rwldberror(xev, cloc, sq); goto failure; }
	  break;

	  case RWL_TYPE_STR:
	    xev->status = RWLDefineByPos(stmhp, &bd->defhp, xev->errhp, bd->pos
			   ,  bd->pvar, pnum->slen, SQLT_STR
			   ,  bd->pind, 0, 0, OCI_DEFAULT);
	    if (OCI_SUCCESS != xev->status)
	    { rwldberror(xev, cloc, sq); goto failure; }
	  break;
	}
      break;

      case RWL_DIRBIND:
        bc++;
	switch(bd->vtype)
	{
	  case RWL_TYPE_INT:
	    xev->status = RWLBindByPos(stmhp, &bd->binhp, xev->errhp, bd->pos
			   ,  bd->pvar,  sizeof(sb8), SQLT_INT
			   ,  bd->pind, 0, 0, 0, 0, OCI_DEFAULT);
	    if (OCI_SUCCESS != xev->status)
	    { rwldberror(xev, cloc, sq); goto failure; }
	  break;

	  case RWL_TYPE_DBL:
	    xev->status = RWLBindByPos(stmhp, &bd->binhp, xev->errhp, bd->pos
			   ,  bd->pvar,  sizeof(double), SQLT_FLT
			   ,  bd->pind, 0, 0, 0, 0, OCI_DEFAULT);
	    if (OCI_SUCCESS != xev->status)
	    { rwldberror(xev, cloc, sq); goto failure; }
	  break;

	  case RWL_TYPE_STR:
	    xev->status = RWLBindByPos(stmhp, &bd->binhp, xev->errhp, bd->pos
			   ,  bd->pvar, (sb4)bd->slen, SQLT_STR
			   ,  bd->pind, 0, 0, 0, 0, OCI_DEFAULT);
	    if (OCI_SUCCESS != xev->status)
	    { rwldberror(xev, cloc, sq); goto failure; }
	  break;
	}
      break;


      case RWL_DEFINE:
	if (dasiz) // define/fetch array
	{
	  switch(/*pnum*/bd->vtype)
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
	  }
	}
	else // not using define/fetch array
	{
	  switch(/*pnum*/bd->vtype)
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
	  }
	}
	dc++;
      break;

      case RWL_BINDOUT_POS:
      case RWL_BIND_POS:
	bc++;
	switch(/*pnum*/bd->vtype)
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
	}
      break;

      case RWL_BINDOUT_NAME:
      case RWL_BIND_NAME:
        bc++;
	switch(/*pnum*/bd->vtype)
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
	}
      break;

    }
  bd=bd->next; i++;
  }
  if (dc != sq->defcount)
    rwlexecsevere(xev, cloc, "[rwlexecsql-defcountmismatch:%s;%d;%d]", sq->vname, dc, sq->defcount);
  if (bc != sq->bincount+sq->outcount)
    rwlexecsevere(xev, cloc, "[rwlexecsql-bincountmismatch:%s;%d;%d;%d]"
    	, sq->vname, bc, sq->bincount, sq->outcount);

  /* Now do the execute
   *
   * We set the prefetch (array) size to let OCI prefetch
   * and ask to retrieve one row, which will be one exeucte
   * in case of DML or DDL
   *
   * Due to the one row, a query can return OCI_NO_DATA
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

  rwldbclearerr(xev);

  if (dasiz) // array fetch
  {
    xev->status = OCIStmtExecute( db->svchp, stmhp, xev->errhp
	   , dasiz
	   , 0, (CONST OCISnapshot*)NULL, (OCISnapshot*)NULL,
	   OCI_DEFAULT );
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
    xev->status = OCIStmtExecute( db->svchp, stmhp, xev->errhp
	   ,1 /* prefetch or bind array */
	   , 0, (CONST OCISnapshot*)NULL, (OCISnapshot*)NULL,
	   OCI_DEFAULT );
  }
#ifdef RWL_USE_SQL_ID
  if (!bit(sq->flags, RWL_SQFLAG_GOTID))
  {
    if (rwl122ormore(xev->rwm))
    {
      st = OCIAttrGet(stmhp, OCI_HTYPE_STMT
	 , &sq->sqlid, &sq->sqlidlen
	 , OCI_ATTR_SQL_ID, xev->errhp);
      if (OCI_SUCCESS != st)
      {
	rwlexecsevere(xev, cloc, "[rwlexecsql-getsqlid:%d;%s;0x%x;0x%x]", st, sq->vname, sq->flags, db->flags);
	goto failure;
      }
    }
    if (!sq->sqlid) // Happens when connected to pre-12.2
    {
      sq->sqlid = (text*) "!sqlid < 12.2";
      sq->sqlidlen = (ub4) rwlstrlen(sq->sqlid);
    }
    bis(sq->flags, RWL_SQFLAG_GOTID);
  }
  if (bit(xev->tflags, RWL_THR_DSQL))
  {
    fprintf(stderr, 
     ", done sql_id=%.*s, status=%d\n"
      , sq->sqlidlen, sq->sqlid, xev->status);
    fflush(stderr);
  }
#else
  if (bit(xev->tflags, RWL_THR_DSQL))
  {
    fprintf(stderr, ", done status=%d\n", xev->status);
    fflush(stderr);
  }
#endif
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
      xev->status = OCIAttrGet(stmhp, OCI_HTYPE_STMT
	       , &numcols, 0
	       , OCI_ATTR_PARAM_COUNT, xev->errhp);
      if (OCI_SUCCESS != xev->status)
      { rwldberror2(xev, cloc, sq, fname); goto failure; }
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
    case OCI_STMT_CALL:
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
      rwlexecerror(xev, cloc, RWL_ATTEMPT_CURSOR_NONQUERY, sq->vname);
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
	    break;
	  }
        }

	/* copy define values */
	if (bd->bdtyp == RWL_DEFINE) 
	{
	  switch(/*pnum*/bd->vtype)
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
		pnum->ival = ((typeof(&pnum->ival))sq->abd[dc])[raix];
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
		snprintf((char *)pnum->sval, pnum->slen-1, xev->rwm->iformat, pnum->ival);
	      }
	    break;

	    case RWL_TYPE_DBL:
	      if (dasiz)
	      {
		pnum->dval = ((typeof(&pnum->dval))sq->abd[dc])[raix];
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
		snprintf((char *)pnum->sval, pnum->slen-1, xev->rwm->dformat, pnum->dval);
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
		  rwlexecsevere(xev, cloc, "[rwlexecsql-toolong:%s;%s;%d;%d]"
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
		  rwlexecsevere(xev, cloc, "[rwlexecsql-toolong2:%s;%s;%d]"
		   , sq->vname, bd->vname, pnum->slen);
		break;

		default:
		  rwlexecsevere(xev, cloc, "[rwlexecsql-toolong:%s;%s;%d;%d]"
		   , sq->vname, bd->vname, pnum->isnull,pnum->slen);
		break;
	      }  
	      pnum->dval=rwlatof(pnum->sval);
	      pnum->ival=rwlatosb8(pnum->sval);
	      pnum->isnull = 0; /* rwloadsim doesn't have empty string as NULL */
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
	bic(xev->pcflags[xev->pcdepth], RWL_PCFLAG_CANCELCUR);
	rwlcoderun(xev);
	curcan = !!bit(xev->pcflags[xev->pcdepth], RWL_PCFLAG_CANCELCUR);
      }
      --xev->pcdepth;
      xev->erloc[xev->pcdepth] = 0;

      /* fetch next row */
      rwldbclearerr(xev);
      if (bit(db->flags, RWL_DB_DEAD))
	goto failure;

      if (curcan)
      {
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
	      xev->status = OCIStmtFetch2(stmhp, xev->errhp, dasiz, OCI_FETCH_NEXT, 0, OCI_DEFAULT);
	      st = OCIAttrGet(stmhp, OCI_HTYPE_STMT
		 , &rftchd, 0
		 , OCI_ATTR_ROWS_FETCHED, xev->errhp);
	      if (OCI_SUCCESS != st)
	      {
		rwlexecsevere(xev, cloc, "[rwlexecsql-getrftchd:%d;%s;0x%x;0x%x]", st, sq->vname, sq->flags, db->flags);
		goto failure;
	      }
	      if (bit(xev->tflags, RWL_THR_DSQL))
	      {
		rwldebugcode(xev->rwm,cloc,"fetched a batch from sql %s at %s@%s dasiz=%d rftchd=%d status=%d flgs:0x%x"
		  , sq->vname, db->username, db->connect, dasiz, rftchd, xev->status, sq->flags);
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
	  xev->status = OCIStmtFetch2(stmhp, xev->errhp, 1, OCI_FETCH_NEXT, 0, OCI_DEFAULT);
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
  else /*!doloop*/
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

	  switch(/*pnum*/bd->vtype)
	  {
	    case RWL_TYPE_INT:
	      if (pnum->isnull != 0 && pnum->isnull != RWL_ISNULL)
		pnum->isnull = 0; /* TODO this ignores truncated results */
	      pnum->dval = (double) pnum->ival;
	      snprintf((char *)pnum->sval, pnum->slen-1, xev->rwm->iformat, pnum->ival);
	    break;

	    case RWL_TYPE_DBL:
	      if (pnum->isnull != 0 && pnum->isnull != RWL_ISNULL)
		pnum->isnull = 0; /* TODO this ignores truncated results */
	      pnum->ival = (sb4) round(pnum->dval);
	      snprintf((char *)pnum->sval, pnum->slen-1, xev->rwm->dformat, pnum->dval);
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
		  rwlexecsevere(xev, cloc, "[rwlexecsql-toolong:%s;%s;%d;%d]"
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
		  rwlexecsevere(xev, cloc, "[rwlexecsql-toolong2:%s;%s;%d]"
		   , sq->vname, bd->vname, pnum->slen);
		break;

		default:
		  rwlexecsevere(xev, cloc, "[rwlexecsql-toolong:%s;%s;%d;%d]"
		   , sq->vname, bd->vname, pnum->isnull,pnum->slen);
		break;
	      }  
	      pnum->isnull = 0; /* rwloadsim doesn't have empty string as NULL */
	      pnum->dval=rwlatof(pnum->sval);
	      pnum->ival=rwlatosb8(pnum->sval);
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
    rwldebugcode(xev->rwm,cloc,"release sql %s,  dbflgs:0x%x, sqflgs:0x%x"
      , sq->vname, db->flags, sq->flags);
  }
  if (stmhp && !bit(db->flags, RWL_DB_DEAD))
    (void) OCIStmtRelease(stmhp, xev->errhp,  (text *)0, 0
      , bit(sq->flags,RWL_SQFLAG_NOCURC) ? OCI_STRLS_CACHE_DELETE : OCI_DEFAULT );

  /* release session if acquired */
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
    rwldebugcode(xev->rwm,cloc,"executing flush sql %s at %s@%s", sq->vname, db->username, db->connect);
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
    rwlexecsevere(xev, cloc, "[rwlflushsql-noconn:%s;%s;%s;%s]", sq->vname, db->username, db->connect, db->pooltext);
    return;
  }

  stmhp = 0;
  if (OCI_SUCCESS != (xev->status = 
      OCIStmtPrepare2( db->svchp, &stmhp, xev->errhp, sq->sql, sq->sqllen,
                      (text *)0, 0, OCI_NTV_SYNTAX, 
#ifdef RWL_USE_SQL_ID
		  // oddly, it causes an extra parse call if we only use
		  // the OCI_PREP2_GET_SQL_ID flag during the first prepare
		  //( (!bit(sq->flags, RWL_SQFLAG_GOTID) && rwl122ormore(xev->rwm))
		  ( (                                     rwl122ormore(xev->rwm))
		    ? OCI_PREP2_GET_SQL_ID
		    : 0
		  ) | 
#endif
		        OCI_DEFAULT )))
  {
    rwldberror(xev, cloc, 0);
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
	    { rwldberror(xev, cloc, sq); goto failure; }
	  break;

	  case RWL_TYPE_DBL:
	    xev->status = RWLBindByPos(stmhp, &bd->binhp, xev->errhp, bd->pos
			   ,  sq->abd[b],  sizeof(double), SQLT_FLT
			   ,  sq->ari[b], 0, 0
			   , bit(sq->flags, RWL_SQFLAG_LEXPLS) ? sq->asiz:0
			   , bit(sq->flags, RWL_SQFLAG_LEXPLS) ? &sq->aix:0
			   , OCI_DEFAULT);
	    if (OCI_SUCCESS != xev->status)
	    { rwldberror(xev, cloc, sq); goto failure; }
	  break;

	  case RWL_TYPE_STR:
	    xev->status = RWLBindByPos(stmhp, &bd->binhp, xev->errhp, bd->pos
			   ,  sq->abd[b], (sb4)bd->slen, SQLT_STR
			   ,  sq->ari[b], 0, 0
			   , bit(sq->flags, RWL_SQFLAG_LEXPLS) ? sq->asiz:0
			   , bit(sq->flags, RWL_SQFLAG_LEXPLS) ? &sq->aix:0
			   , OCI_DEFAULT);
	    if (OCI_SUCCESS != xev->status)
	    { rwldberror(xev, cloc, sq); goto failure; }
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
	    { rwldberror(xev, cloc, sq); goto failure; }
	  break;

	  case RWL_TYPE_DBL:
	    xev->status = RWLBindByPos(stmhp, &bd->binhp, xev->errhp, bd->pos
			   ,  sq->abd[b],  sizeof(dummy.dval), SQLT_FLT
			   ,  sq->ari[b], 0, 0
			   , bit(sq->flags, RWL_SQFLAG_LEXPLS) ? sq->asiz:0
			   , bit(sq->flags, RWL_SQFLAG_LEXPLS) ? &sq->aix:0
			   , OCI_DEFAULT);
	    if (OCI_SUCCESS != xev->status)
	    { rwldberror(xev, cloc, sq); goto failure; }
	  break;

	  case RWL_TYPE_STR:
	    xev->status = RWLBindByPos(stmhp, &bd->binhp, xev->errhp, bd->pos
			   ,  sq->abd[b], (sb4)bd->slen, SQLT_STR
			   ,  sq->ari[b], 0, 0
			   , bit(sq->flags, RWL_SQFLAG_LEXPLS) ? sq->asiz:0
			   , bit(sq->flags, RWL_SQFLAG_LEXPLS) ? &sq->aix:0
			   , OCI_DEFAULT);
	    if (OCI_SUCCESS != xev->status)
	    { rwldberror(xev, cloc, sq); goto failure; }
	  break;

	  case RWL_TYPE_RAW:
	    rwlexecsevere(xev, cloc, "[rwlflushsql-notraw1:%s;%s]"
	      , sq->vname, bd->vname);
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
	    { rwldberror(xev, cloc, sq); goto failure; }
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
	    { rwldberror(xev, cloc, sq); goto failure; }
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
	    { rwldberror(xev, cloc, sq); goto failure; }
	  break;

	  case RWL_TYPE_RAW:
	    rwlexecsevere(xev, cloc, "[rwlflushsql-notraw2:%s;%s]"
	      , sq->vname, bd->vname);
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

  xev->status = OCIStmtExecute( db->svchp, stmhp, xev->errhp
	 , (bit(sq->flags, RWL_SQFLAG_LEXPLS))? 1 : sq->aix /* PL/SQL or bind array */
	 , 0, (CONST OCISnapshot*)NULL, (OCISnapshot*)NULL,
		                     OCI_DEFAULT );
  if (xev->status != OCI_SUCCESS)
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

  /* get various attributes */
#ifdef RWL_USE_SQL_ID
  if (!bit(sq->flags, RWL_SQFLAG_GOTID))
  {
    if (rwl122ormore(xev->rwm))
    {
      sb4 st;
      st = OCIAttrGet(stmhp, OCI_HTYPE_STMT
	 , &sq->sqlid, &sq->sqlidlen
	 , OCI_ATTR_SQL_ID, xev->errhp);
      if (OCI_SUCCESS != st)
      {
	rwlexecsevere(xev, cloc, "[rwlflush2-getsqlid:%d;%s;0x%x;0x%x]", st, sq->vname, sq->flags, db->flags);
	goto failure;
      }
    }
    if (!sq->sqlid) // Happens when connected to pre-12.2
    {
      sq->sqlid = (text*) "!sqlid < 12.2";
      sq->sqlidlen = (ub4) rwlstrlen(sq->sqlid);
    }
    bis(sq->flags, RWL_SQFLAG_GOTID);
  }
  if (bit(xev->tflags, RWL_THR_DSQL))
  {
    rwldebugcode(xev->rwm,cloc, ", flush2 sql_id=%.*s\n", sq->sqlidlen, sq->sqlid);
  }
#endif
  xev->status = OCIAttrGet(stmhp, OCI_HTYPE_STMT
	   , &stmtype, 0
	   , OCI_ATTR_STMT_TYPE, xev->errhp);
  if (OCI_SUCCESS != xev->status)
  { 
    rwldberror(xev, cloc, sq); 
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
    case OCI_STMT_CALL:
      bis(db->flags, RWL_DB_DIDPLSQL);
      bis(sq->flags, RWL_SQFLAG_ISPLS);
      /*assert and report but otherwise ignore discrepancy
       * when lexer and OCI disagree upon this being PL/SQL */
      if (!bit(sq->flags, RWL_SQFLAG_LEXPLS))
	rwlexecsevere(xev, cloc, "[rwlflushsql2-plsqlcheck:%s;0x%x;0x%x]", sq->vname, sq->flags, db->flags);
    break;
  }


  failure:
  /* cleanup */

  if (stmhp
  && !bit(db->flags, RWL_DB_DEAD)
  )
    (void) OCIStmtRelease(stmhp, xev->errhp,  (text *)0, 0
      , bit(sq->flags,RWL_SQFLAG_NOCURC) ? OCI_STRLS_CACHE_DELETE : OCI_DEFAULT );

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
  if (bit(xev->rwm->m2flags, RWL_P2_NOEXEC))
  {
    rwlerror(xev->rwm, RWL_ERROR_NOEXEC);
    return;
  }

  
  if (  bit(sq->flags, RWL_SQFLAG_DYNAMIC) // if dynamic
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
	  rwlexecsevere(xev, cloc, "[rwlexecsql-bindef1:%d;%s;%s]", vno, sq->vname, bd->vname);
	  goto failure;
	}
	// OLD pnum = &xev->evar[vno].num;
        pnum = rwlnuminvar(xev, xev->evar+vno);
	/* make sure strings are allocated */
	if ((bd->vtype == RWL_TYPE_STR /*|| bd->vtype ==RWL_TYPE_RAW*/)
	    && pnum->vsalloc == RWL_SVALLOC_NOT)
	  rwlinitstrvar(xev, pnum);
      }
      /* copy bind values to array posistion sq->aix */
      switch (bd->bdtyp)
      {
	case RWL_DIRBIND:
	  switch(/*pnum*/bd->vtype)
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
	  }
	break;

	case RWL_BIND_POS:
	case RWL_BIND_NAME:
	  switch(/*pnum*/bd->vtype)
	  {
	    case RWL_TYPE_INT:
	      ((typeof(&pnum->ival))sq->abd[b])[sq->aix] = pnum->ival; 
	      ((sb2 *)sq->ari[b])[sq->aix] = pnum->isnull; 
	    break;

	    case RWL_TYPE_DBL:
	      ((typeof(&pnum->dval))sq->abd[b])[sq->aix] = pnum->dval; 
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
	      //rwlerror(xev->rwm, RWL_ERROR_NO_DML_ARRAY_LOB);
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
                              (sb4)rwlstrlen( db->connect ), 0 )))
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
      if ( (OCI_SUCCESS != (xev->status=OCISessionBegin(db->svchp, xev->errhp, db->seshp,
		          OCI_CRED_RDBMS, OCI_DEFAULT|OCI_STMT_CACHE )))
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
      /*assert*/
      if (!db->spool)
      {
	if (sq)
	  rwlexecsevere(xev, cloc, "[rwlensuresession-nodrcp1:%s;%s;%s;%s]", sq->vname, db->username, db->connect, db->pooltext);
	else
	  rwlexecsevere(xev, cloc, "[rwlensuresession-nodrcp2:%s;%s;%s]", db->username, db->connect, db->pooltext);
	return 0;
      }

      /* only acquire session when our calling environment hasn't done it */
      if (!db->svchp)
      {
	if (bit(xev->tflags, RWL_THR_DSQL))
	{
	  rwldebugcode(xev->rwm,cloc,"%d taking drcp session %p %s using %.*s cc:%s"
	    , xev->thrnum , db, db->vname
	    , db->pslen, db->pstring, db->cclass);
	}

	// DRCP here
        if (OCI_SUCCESS != 
              (xev->status=OCISessionGet(xev->rwm->envhp, xev->errhp, &db->svchp
                        , db->authp
                        , db->pstring, db->pslen
                        , 0, 0,  0,  0,  0
                        , OCI_SESSGET_SPOOL|OCI_LOGON2_STMTCACHE|OCI_SESSGET_PURITY_SELF ))
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
	  rwlexecsevere(xev, cloc, "[rwlensuresession-nopool1:%s;%s;%s;%s]", sq->vname, db->username, db->connect, db->pooltext);
	else
	  rwlexecsevere(xev, cloc, "[rwlensuresession-nopool2:%s;%s;%s]", db->username, db->connect, db->pooltext);
	return 0;
      }

      /* only acquire session when our calling environment hasn't done it */
      if (!db->svchp)
      {
        ub4 sgmode = OCI_SESSGET_SPOOL|OCI_LOGON2_STMTCACHE|OCI_SESSGET_PURITY_SELF;

	// session pool here
        if ( (OCI_SUCCESS != 
              (xev->status=OCISessionGet(xev->rwm->envhp, xev->errhp, &db->svchp
                        , db->authp
                        , db->pstring, db->pslen
                        , 0, 0,  0,  0,  0
                        , sgmode)))
	    && (OCI_SUCCESS_WITH_INFO != xev->status) // 28002
	  )

	{
	  ub4 ub4attr;
	  rwldberror2(xev, cloc, sq, fname);
	  OCIAttrGet(db->spool, OCI_HTYPE_SPOOL,
		     &ub4attr,
		     0, OCI_ATTR_SPOOL_BUSY_COUNT, xev->errhp);
	  rwldebugcode(xev->rwm,cloc,"%d busy sessions in %s %s"
	    , ub4attr, db->vname, db->pstring);
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
        rwlexecsevere(xev, cloc,"[rwlensuresession-notyet1:%s;%s;%s;%s]", sq->vname, db->username, db->connect, db->pooltext);
      else
        rwlexecsevere(xev, cloc,"[rwlensuresession-notyet2:%s;%s;%s]", db->username, db->connect, db->pooltext);
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

    // rwldebugcode(xev->rwm,cloc,"marked database %s undead", db->vname);
    sesrelo = OCI_SESSRLS_DROPSESS;
    bic(db->flags, RWL_DB_DIDDML|RWL_DB_DIDPLSQL);
  }

  /* check if there is uncommitted DML */
  if (bit(db->flags, RWL_DB_DIDDML))
  {
    rwlexecerror(xev, cloc, RWL_ERROR_ROLLBACK_FORCED, db->vname);
    rwlrollback2(xev, cloc, db, fname);
  }
  /* Check if PL/SQL was done */
  if (bit(db->flags, RWL_DB_DIDPLSQL))
  {
    rwlexecerror(xev, cloc, RWL_ERROR_MISSING_COMMIT, db->vname);
    rwlcommit2(xev, cloc, db, fname);
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
	  , db->pslen, db->pstring);
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
      if (bit(xev->tflags, RWL_THR_DSQL))
      {
	rwldebugcode(xev->rwm,cloc,"%d released session to pool %s %.*s sesrelo=0x%x"
	  , xev->thrnum
	  , db->vname
	  , db->pslen, db->pstring, sesrelo);
      }
      if  (
	    (OCI_SUCCESS!=(xev->status = 
	      OCISessionRelease(db->svchp, xev->errhp, (OraText *)0, 0, sesrelo)))
	  && !bit(db->flags, RWL_DB_DEAD)
	  )
	    rwldberror2(xev, cloc, sq, fname);

      db->svchp = 0;
      db->seshp = 0;
      bic(db->flags, RWL_DB_INUSE|RWL_DB_DEAD);
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
    x=rwlensuresession(xev, cloc, xev->evar[xev->vresdb].vdata, sq);
    *ppdb = xev->evar[xev->vresdb].vdata;
    return x;
  }
  else
  {  
    if (sq)
      rwlexecsevere(xev, cloc, "[rwlensuresesdb-nores:%d;%s]", xev->vresdb, sq->vname);
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
    rwldebugcode(xev->rwm,cloc,"disconnect %s@%s %s", db->username, db->connect, db->pooltext);
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
      /* of PL/SQL */
      if (bit(db->flags, RWL_DB_DIDPLSQL))
      {
	rwlexecerror(xev, cloc, RWL_ERROR_MISSING_COMMIT, db->vname);
	rwlcommit(xev, cloc, db);
      }

      /* Logoff */
      xev->status = OCISessionEnd(db->svchp, xev->errhp, db->seshp, OCI_DEFAULT);
      if (db->svchp
          && (OCI_SUCCESS != (ocires = OCIHandleFree(db->svchp, OCI_HTYPE_SVCCTX))))
	rwlexecsevere(xev, cloc, "[rwldbdisconnect-freesvcctx:%s;%d]", db->vname, ocires);
      if (db->seshp
          && (OCI_SUCCESS != (ocires = OCIHandleFree(db->seshp, OCI_HTYPE_SESSION))))
	rwlexecsevere(xev, cloc, "[rwldbdisconnect-freesession:%s;%d]", db->vname, ocires);
      db->svchp = 0; db->seshp = 0;
      if (!bit(db->flags, RWL_DB_DEAD) && OCI_SUCCESS!=xev->status)
	goto returnwithdberror;

      /* and disconnect */
      xev->status = OCIServerDetach( db->srvhp, xev->errhp, OCI_DEFAULT );
      if (db->srvhp 
          && (OCI_SUCCESS != (ocires = OCIHandleFree(db->srvhp, OCI_HTYPE_SERVER))))
        rwlexecsevere(xev, cloc, "[rwldbdisconnect-freeserver:%s;%d]", db->vname, ocires);
      db->srvhp = 0;
      if (!bit(db->flags, RWL_DB_DEAD) && OCI_SUCCESS!=xev->status)
	goto returnwithdberror;
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
        rwlexecsevere(xev, cloc, "[rwldbdisconnect-freeserver:%s;%d]", db->vname, ocires);
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
        goto returnwithdberror;
    break;
      
  }

  return;

  returnwithdberror:
    rwldberror(xev, cloc, 0);
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

	    case RWL_TYPE_STR:
	      sq->abd[bdn] = (void *)rwlalloc(xev->rwm, sq->asiz*bd->slen);
	      sq->ari[bdn] = (sb2 *) rwlalloc(xev->rwm, sq->asiz*sizeof(sb2));
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
    rwldberror(xev, loc, 0);
  }
  if (OCI_SUCCESS != 
       (xev->status=OCIAttrSet((void *)*pplob , OCI_DTYPE_LOB
	 , &zero, 0, OCI_ATTR_LOBEMPTY,  xev->errhp))
     )
  {
    rwldberror(xev, loc, 0);
  }
}

void rwlfreelob(rwl_xeqenv *xev
, rwl_location *loc
, OCILobLocator *plob
)
{
  if (OCIDescriptorFree(plob, OCI_DTYPE_LOB) != OCI_SUCCESS )
  {
    rwldberror(xev, loc, 0);
  }
}

void rwlwritelob(rwl_xeqenv *xev
, OCILobLocator *lobp
, rwl_cinfo *db
, rwl_value *pnum
, rwl_location *loc
)
{
  ub8 amtp = rwlstrlen(pnum->sval);
  
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
	, 1 /*offset*/
	, pnum->sval, amtp
	, OCI_ONE_PIECE
	, 0,0
	, (ub2) 0, (ub1) SQLCS_IMPLICIT)))
  {
    rwldberror(xev, loc, 0);
  }
  if (OCI_SUCCESS != (xev->status= 
    OCILobTrim2(db->svchp, xev->errhp, (void *)lobp
    	, amtp )))
  {
    rwldberror(xev, loc, 0);
  }
}

void rwlreadlob(rwl_xeqenv *xev
, OCILobLocator *lobp
, rwl_cinfo *db
, rwl_value *pnum
, rwl_location *loc
)
{
  ub8 amtp = pnum->slen;
  
  if (!db)
  {
    rwlexecsevere(xev, loc, "[rwlreadlob-nodb]");
    return;
  }
  rwlinitstrvar(xev, pnum);
  if (OCI_SUCCESS != (xev->status= 
    OCILobRead2(db->svchp, xev->errhp, lobp
    	, &amtp
	, 0 /*char_amtp*/
	, 1 /*offset*/
	, pnum->sval, amtp
	, OCI_ONE_PIECE
	, 0,0
	, (ub2) 0, (ub1) SQLCS_IMPLICIT)))
  {
    rwldberror(xev, loc, 0);
    pnum->sval[0] = 0;
    pnum->ival=0;
    pnum->dval=0.0;
  }
  else
  {
    pnum->sval[amtp] = 0;
    pnum->ival=rwlatosb8(pnum->sval);
    pnum->dval=rwlatof(pnum->sval);
  }
  pnum->isnull = 0;
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

    if (!rwm->dbsav->username)
    {
      rwm->dbsav->username = (text *)"SomethingUnlikely";
      rwlerror(rwm, RWL_ERROR_NO_USERNAME, rwm->dbsav->vname);
    }
    else if (!rwm->dbsav->password)
    {
      char *xx;
      FILE *ttyin = fopen("/dev/tty","r");
      FILE *ttyout = fopen("/dev/tty","w");
      if (ttyin && ttyout)
      {
	if (rwm->dbsav->connect)
	  fprintf(ttyout, "Please enter password for %s@%s: ", rwm->dbsav->username, rwm->dbsav->connect);
	else
	  fprintf(ttyout, "Please enter password for %s: ", rwm->dbsav->username);
	fflush(ttyout);
	rwlechooff(0);
	rwm->dbsav->password = rwlalloc(rwm, RWL_MAX_IDLEN+2);
	xx = fgets((char *)rwm->dbsav->password, RWL_MAX_IDLEN+2, ttyin);
	rwlechoon(0);
	fputs("\n", stdout);
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
    
    }
    if (!rwm->dbsav->connect) rwm->dbsav->connect = (text *)"";
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
  rwm->dbsav = 0; // ought to call rwlfree on username, password, connect first
}

sb4 rwlinitoci(rwl_main *rwm)
{
  /* Create OCI environment and allocate error handle */
  if (OCI_SUCCESS != (rwm->mxq->status=OCIEnvNlsCreate(&rwm->envhp
     , OCI_DEFAULT|OCI_THREADED|OCI_EVENTS
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

  if (bit(rwm->m2flags, RWL_P2_EVTNOTIF))
  {
  RWL_SRC_ERROR_FRAME

    if (OCI_SUCCESS != 
	  (rwm->mxq->status=OCIAttrSet( rwm->envhp, OCI_HTYPE_ENV,
		       rwldbevent,
		       0, OCI_ATTR_EVTCBK, rwm->mxq->errhp))
		       )
    {
      rwldberror(rwm->mxq, RWL_SRC_ERROR_LOC, 0);
      return 0;
    }
    /* make our rwl_main * the context */
    if (OCI_SUCCESS != 
	  (rwm->mxq->status=OCIAttrSet( rwm->envhp, OCI_HTYPE_ENV,
		       (void *) rwm,
		       0, OCI_ATTR_EVTCTX, rwm->mxq->errhp))
		       )
    {
      rwldberror(rwm->mxq, RWL_SRC_ERROR_LOC, 0);
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
    // See https://bug.oraclecorp.com/pls/bug/webbug_print.showbug?c_rptno=30895426
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
      case OCI_HA_SOURCE_SERVICE_MEMBER: hasrc = "member"; break;
      case OCI_HA_SOURCE_ASM_INSTANCE: hasrc = "asm_instance"; break;
      case OCI_HA_SOURCE_SERVICE_PRECONNECT: hasrc = "preconnect"; break;
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
  ub4 ub4attr;
  ub4 ub4mode;

  switch(typ)
  {
    case RWL_STACK_ACTIVESESSIONCOUNT: ub4mode = OCI_ATTR_SPOOL_BUSY_COUNT; break;
    case RWL_STACK_OPENSESSIONCOUNT:   ub4mode = OCI_ATTR_SPOOL_OPEN_COUNT; break;
    default:
      rwlexecsevere(xev, cloc, "[rwldbsescount-bad:%s;%d;%d]", db->vname, db->pooltype, typ);
      return 0;
  }

  /*assert*/
  if (RWL_DBPOOL_SESSION != db->pooltype)
  {
    rwlexecsevere(xev, cloc, "[rwldbsescount-notspool:%s;%d]", db->vname, db->pooltype);
    return 0;
  }

  if (!db->spool)
  {
    rwlexecsevere(xev, cloc, "[rwldbsescount-nopool:%s]", db->vname);
    return 0;
  }
    
    
  if (bit(xev->rwm->m2flags, RWL_P2_NOEXEC))
  {
    rwlerror(xev->rwm, RWL_ERROR_NOEXEC);
    return 0;
  }

  if (OCI_SUCCESS !=
        (ocires = OCIAttrGet(db->spool, OCI_HTYPE_SPOOL
	     , &ub4attr
	     , 0, ub4mode, xev->errhp)))
	rwlexecsevere(xev, cloc, "[rwldbsescount-get:%s;%d;%d]", db->vname, ub4mode, ocires);

  return ub4attr;
}

rwlcomp(rwlsql_c, RWL_GCCFLAGS)
