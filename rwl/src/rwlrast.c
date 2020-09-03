/*
 * RWP*Load Simulator
 *
 * Copyright (c) 2020 Oracle Corportaion
 * Licensed under the Universal Permissive License v 1.0
 * as shown at https://oss.oracle.com/licenses/upl/
 *
 * Real World performance Load simulator RAndom STring and code
 *
 * rwlrast.c
 *
 * History
 *
 * bengsig 02-sep-2020 - Use various enum
 * bengsig 05-oct-2017 - Creation
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "rwl.h"

/* rwlrast.c */

/* initialize random string array */
void rwlrastbeg(rwl_main *rwm, text *nam, ub4 typ)
{
  /* assert empty */
  if (rwm->rast)
  {
    rwlsevere(rwm, "[rwlrastbeg-notempty:%s]", nam);
    return;
  }
  /* nothing really done here - just save type */
  rwm->ratyp = typ;
}

/* add an element */
void rwlrastadd(rwl_main *rwm, text *str, double wht)
{
  rwl_rast *r;
  sb4 guess;
  /* check weight is not negative */
  if (wht<0.0)
  {
    rwlerror(rwm, RWL_ERROR_NEGATIVE_WEIGHT, wht, str);
    return;
  }

  guess = RWL_VAR_NOGUESS;
  /* if this is a procedure array, check the procedure exists */
  if (RWL_TYPE_RAPROC == rwm->ratyp)
  {
    guess = rwlfindvar(rwm->mxq, str, RWL_VAR_NOGUESS);
    if (guess>=0)
    {
      /* there is a variable - is it correct type? */
      switch (rwm->mxq->evar[guess].vtype)
      {
        case RWL_TYPE_PROC:
	  /* OLD CODE when raproc could not have arguments
	  if (!rwm->mxq->evar[guess].v2val)
	    goto varisgood;
	  rwlerror(rwm, RWL_ERROR_NO_ARGUMENTS_ALLOWED
	    , rwm->mxq->evar[guess].vname
	    , "random procedure array");
	  break;
	  */

	case RWL_TYPE_SQL:
	  goto varisgood;
	default: // prevent compiler warning
	  break;
      }
      rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2, rwm->mxq->evar[guess].stype, str, "execute");
    }
    /* else error has been printed in rwlfindvar */
    return;
  }

  varisgood:
  /* allocate and link in */
  r = (rwl_rast *) rwlalloc(rwm, sizeof(rwl_rast));
  r->next = rwm->rast;
  /* copy values */
  r->str = str; /* already strdup'ed in rwllexer.l */
  r->vgs = guess;
  r->wht = wht;
  rwm->rast = r;
  return;
}

/* finalize the random array by creating an array filling it
 * from the linked list
 */

void rwlrastfin(rwl_main *rwm, text *nam, sb4 varn)
{
  rwl_rastvar *rv;
  rwl_rast *r;
  double tot, sum;
  ub4 cnt, i;
  ub4 r0acnt = 0; // count of arguments to raproc's

  /* check it is not empty */
  if (!rwm->rast)
  {
    rwlerror(rwm, RWL_ERROR_WEIGHTSUM_ZERO, nam);
    if (varn>=0) /* mark the variable as cancelled */
    {
      rwm->mxq->evar[varn].vtype = RWL_TYPE_CANCELLED;
      rwm->mxq->evar[varn].stype = "cancelled (rast)";
    }
    rwlrastclear(rwm);
    return;
  }

  cnt = 0;
  tot = 0.0;
  /* count them and find total */
  r = rwm->rast;
  while (r)
  {
    cnt++;
    tot += r->wht;
    r = r->next;
  }

  /* assert there are entries  */
  if (cnt<=0)
  {
    rwlsevere(rwm, "[rwlrastfin-empty:%s;%d;%.2f]", nam, cnt, tot);
    return;
  }

  /* check some have a non-zero weight */
  if (tot<=0)
  {
    rwlerror(rwm, RWL_ERROR_WEIGHTSUM_ZERO, nam);
    if (varn>=0) /* cancel variable if not */
    {
      rwm->mxq->evar[varn].vtype = RWL_TYPE_CANCELLED;
      rwm->mxq->evar[varn].stype = "cancelled (rast)";
    }
    rwlrastclear(rwm);
    return;
  }

  // If procedures, check they have identical argument lists
  if (RWL_TYPE_RAPROC == rwm->ratyp)
  {
    rwl_rast *r0 = rwm->rast;
    rwl_localvar *r0args, *riargs;
    ub4 riacnt, i;

    // Get the number of arguments to the first function in the array
    // and the list of arguments
    r0acnt = rwm->mxq->evar[r0->vgs].v2val;
    r0args = rwm->mxq->evar[r0->vgs].vdata;

    r = r0->next;
    while (r)
    {
      riacnt = rwm->mxq->evar[r->vgs].v2val;
      riargs = rwm->mxq->evar[r->vgs].vdata;
      if (r0acnt != riacnt) // Counts are different?
      {
	rwlerror(rwm, RWL_ERROR_RAPROC_DIF_ARGCOUNT, nam, r0->str, r->str);
	if (varn>=0) /* mark the variable as cancelled */
	{
	  rwm->mxq->evar[varn].vtype = RWL_TYPE_CANCELLED;
	  rwm->mxq->evar[varn].stype = "cancelled (rast)";
	}
	rwlrastclear(rwm);
	return;
      }
      for (i=1; i<=riacnt; i++)
      {
	if (r0args[i].atype != riargs[i].atype) // types are different
	{
	  rwlerror(rwm, RWL_ERROR_RAPROC_DIF_ARGTYPE, nam, i, r0->str, r->str);
	  if (varn>=0) /* mark the variable as cancelled */
	  {
	    rwm->mxq->evar[varn].vtype = RWL_TYPE_CANCELLED;
	    rwm->mxq->evar[varn].stype = "cancelled (rast)";
	  }
	  rwlrastclear(rwm);
	  return;
	}
      }
      r = r->next;
    }

  }

  /* everything is good
   *
   * allocate rastvar and copy cummulative sum values
   */
  rv = (rwl_rastvar *) rwlalloc(rwm, sizeof(rwl_rastvar));
  rv->cnt = cnt;
  rv->pstr = (text **) rwlalloc(rwm, cnt* sizeof(text *));
  rv->pwht = (double *) rwlalloc(rwm, cnt* sizeof(double));
  rv->pvgs = (sb4 *) rwlalloc(rwm, cnt* sizeof(sb4));
  r = rwm->rast;
  i=0; sum=0.0;
  while (r)
  {
    rv->pstr[i] = r->str;
    rv->pvgs[i] = r->vgs;
    sum += r->wht;
    rv->pwht[i] = sum/tot; /* scale to 0..1 range */
    r = r->next;
    i++;
  }

  rv->pwht[cnt-1] = 1.0; /* to avoid rounding errors */

  /* fill variable already created */
  if (varn>=0)
  {
    rwm->mxq->evar[varn].vdata = rv;
    rwm->mxq->evar[varn].v2val = r0acnt;
    rwlrastclear(rwm);
  }
  else
  {
    rwlfree(rwm, rv->pwht);
    rwlfree(rwm, rv->pvgs);
    rwlfree(rwm, rv->pstr);
    rwlfree(rwm, rv);
    rwlrastclear(rwm);
  }
  return;
}

void rwlrastclear(rwl_main *rwm)
{
  rwl_rast *r, *n;

  /* clean the parse list rast */
  r = rwm->rast;
  while (r)
  {
    n = r->next;
    rwlfree(rwm, r);
    r = n;
  }
  rwm->rast = 0;
  return;
}

/* find one of the random strings */
void rwlrastval(rwl_xeqenv *xev, rwl_value *num, rwl_identifier *var)
{
  double ran;
  rwl_rastvar *rv;
  ub4 i, adj;

  rv = var->vdata;
  ran = erand48(xev->xsubi);

  /* assert */
  if (ran<0.0 || ran>=1.0)
    rwlsevere(xev->rwm, "[rwlrastval-random:%.20f;%s]", ran, var->vname);

  i = rv->cnt / 2; /* binary search start at the middle */
  adj = rv->cnt / 4; /* when no match, go this much left or right */
  if (!adj) adj=1; /* but at least one */

  while (i>0 && i<rv->cnt)
  {
    if ((rv->pwht[i-1] <= ran) && (ran < rv->pwht[i]))
      break; /* random is within elemnt i-1 and i */
    if (ran < rv->pwht[i-1])
      i -= adj; /* before element i-1 */
    else
      i += adj; /* after element i */
    /* half adjustment still making sure it is at least 1 */
    adj /= 2;
    if (!adj) adj=1;
  }

  if (num->vsalloc == RWL_SVALLOC_TEMP)
    rwlfree(xev->rwm, num->sval);
  num->sval = rv->pstr[i];
  num->dval = rwlatof(num->sval);
  num->ival = rwlatosb8(num->sval);
  num->slen = rwlstrlen(num->sval)+1;
  num->vsalloc = RWL_SVALLOC_CONST;

}

/* find one of the random codes */
sb4 rwlrastvar(rwl_xeqenv *xev, rwl_identifier *var)
{
  double ran;
  rwl_rastvar *rv;
  ub4 i, adj;
  sb4 vgs;

  rv = var->vdata;

  /* binary search for random value - see above */
  ran = erand48(xev->xsubi);
  if (ran<0.0 || ran>=1.0)
    rwlsevere(xev->rwm, "[rwlrastvar-random:%.20f;%s]", ran, var->vname);

  i = rv->cnt / 2; /* binary search start at the middle */
  adj = rv->cnt / 4; /* when no match, go this much left or right */
  if (!adj) adj=1; /* but at least one */

  while (i>0 && i<rv->cnt)
  {
    if ((rv->pwht[i-1] <= ran) && (ran < rv->pwht[i]))
      break; /* random is within elemnt i-1 and i */
    if (ran < rv->pwht[i-1])
      i -= adj; /* before element i-1 */
    else
      i += adj; /* after element i */
    /* half adjustment still making sure it is at least 1 */
    adj /= 2;
    if (!adj) adj=1;
  }


  /* find the random call and potentially update its locatoin guess */
  vgs = rwlfindvarug(xev, rv->pstr[i], &rv->pvgs[i]);

  /* assert it exists  and is what we expect */
  if ((vgs<0) || (RWL_TYPE_PROC!=xev->evar[vgs].vtype && 
		RWL_TYPE_SQL!=xev->evar[vgs].vtype))
  {
    rwlsevere(xev->rwm, "[rwlrastvar-type:%s;%d;%d]", rv->pstr[i], vgs, xev->evar[vgs].vtype);
    return RWL_VAR_NOGUESS;
  }


  return vgs;

}

rwlcomp(rwlrast_c, RWL_GCCFLAGS)
