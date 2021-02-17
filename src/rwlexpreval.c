/*
 * RWP*Load Simulator
 *
 * Copyright (c) 2021 Oracle Corporation
 * Licensed under the Universal Permissive License v 1.0
 * as shown at https://oss.oracle.com/licenses/upl/
 *
 * Real World performance Load simulator expressions
 * evaluation
 *
 * rwlexpreval.c
 *
 * Everythhing related to evaluation expression stacks
 *
 * History
 *
 * bengsig  05-jan-2021 - short cicuit error on getenv and substrb with 3 args
 * bengsig  04-jan-2021 - memory leak close pipe
 * bengsig  21-dec-2020 - Parfait
 * bengsig  26-oct-2020 - File name wit > also means open for write
 * bengsig  07-oct-2020 - Cast round results to sb8, not sb4
 * bengsig  17-sep-2020 - Remove last \n from system(c,s);
 * bengsig  04-sep-2020 - Solaris port
 * bengsig  03-sep-2020 - Kill some gcc warning
 * bengsig  02-sep-2020 - Use enum
 * bengsig  01-sep-2020 - Fix text in rwlsevere
 * bengsig  27-aug-2020 - Fixed bug with erlangk and skip
 * bengsig  16-jun-2020 - Add serverrelease
 * bengsig  05-apr-2020 - File reading
 * bengsig  30-mar-2020 - Dynamic SQL changes
 * bengsig  06-mar-2020 - opensessioncount
 * bengsig  07-nov-2019 - access function
 * bengsig  31-oct-2019 - system with saving of stdout
 * bengsig  27-sep-2019 - exp, log, round functions
 * bengsig  23-sep-2019 - system function
 * bengsig  23-aug-2019 - getenv doesn't warn about non-existing env
 * bengsig  07-aug-2019 - getenv function
 * bengsig  30-jul-2019 - sql_id function
 * bengsig  24-mar-2019 - Added erlangk function
 * bengsig  07-may-2019 - Added substrb, lengthb
 * bengsig  02-apr-2019 - Only copy result to stack for functions, fixed skip 
 * bengsig  05/29/18 - Creation from rwlexpression.c
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include "rwl.h"


/* This macro copies a value from src to dst
 * making sure vsalloc is correct
 * It is only used in rwlexpreval
 * and rwlshiftdollar
 */
#define rwlcopyvalue(dst,src) do { rwl_value *d = (dst), *s = (src); \
    if (d->vsalloc == RWL_SVALLOC_TEMP && d->slen < s->slen) \
    { \
      rwlfreecode(xev->rwm, d->sval, loc); \
      d->vsalloc = RWL_SVALLOC_NOT; \
    } \
    if (d->vsalloc != RWL_SVALLOC_TEMP) \
    { \
      d->sval = rwlalloccodenc(xev->rwm, s->slen, loc); \
      d->slen = s->slen; \
      d->vsalloc = RWL_SVALLOC_TEMP; \
    } \
    d->ival = s->ival; d->dval = s->dval; \
    d->vtype = s->vtype; d->isnull = s->isnull; \
    rwlstrnncpy(d->sval, s->sval, s->slen) ; \
  } while(0)

/* evaluate the RPN stack, returning a value if wanted */
void rwlexpreval ( rwl_estack *stk , rwl_location *loc , rwl_xeqenv *xev , rwl_value *ret)
{
  ub4 i, explen;
  ub8 j;
  ub1 iord;
  sb8 resival;
  double resdval;
  sb4 tainted; /* true if stack contains non-existing variables */
  sb4 skip; /* set to the skipend value  if we are skipping calculation due to short-cut */
  //char buf[RWL_PFBUF];
  rwl_identifier *vv; /* points to the variable actually been used */
  rwl_value *nn;
  rwl_value *cstak; /* local calculation stack (array) */
  rwl_value *pnum;

  iord = RWL_TYPE_INT;

  /* We always do all calculations on both the
   * sb8 and double representation of values. However,
   * for certain operations, it is necessary to know
   * if sb8 or double "dominates".  This is for 
   * comparisons where say, 0.1 < 0.2 but the 
   * rounded sb8 values are bot zero.  Also,
   * uniform random number between 0 and 1 should
   * return 50% 0 and 50% 1 if sb8.  Finally
   * erlang/erlang2 are not defined for sb8.
   *
   * The rule is that if there is a double
   * constant or variable somewhere on the stack
   * we set double to dominate.
   *
   */
  j=0;
  tainted = 0; /* true if there is a nonexiting variable */
  skip = 0; 

  /* - get dominating type
   * - initialize if needed
   */
  for (explen=0; j==0; explen++)
  {
    switch (stk[explen].elemtype)
    {
      case RWL_STACK_NOV:
        tainted = 1;
      break;

      case RWL_STACK_NUM:
        /* There is a constant on the stack - promote based on its type */
        if (stk[explen].esnum.vtype == RWL_TYPE_DBL)
	  {
	  iord = RWL_TYPE_DBL;
	  }
      break;
      case RWL_STACK_PROCCALL:
      case RWL_STACK_FUNCCALL:
        vv = &xev->evar[stk[explen].esvar];
        if (vv->num.vtype == RWL_TYPE_DBL)
	  iord = RWL_TYPE_DBL;
      break;

      case RWL_STACK_VAR_LB:
      case RWL_STACK_VAR:
        vv = &xev->evar[stk[explen].esvar];
        /* these a variale or function call on the stack - promote based on its type */
        if (vv->num.vtype == RWL_TYPE_DBL)
	  iord = RWL_TYPE_DBL;
	if (bit(vv->flags, RWL_IDENT_LOCAL) && !xev->locals[xev->pcdepth])
	{
	  /* Variable is local, but stack does not exist.  This
	   * should only happen if we are evaluating an immediate_expression
	   * which should only be the case when we don't have a calling
	   * location, so we can make this assert:
	   */
	  if (loc)
	    rwlexecsevere(xev, loc, "[rwlexpreval-localnolocation:%s;0x%x]"
	      , vv->vname, vv->flags);

	  // and report the expected user error
	  rwlexecerror(xev, loc, RWL_ERROR_CANNOT_USE_LOCAL, vv->vname);
	  tainted = 1;
	}
	else
	{
	  nn = rwlnuminvar(xev,vv);
	  if (nn->vtype == RWL_TYPE_STR && nn->vsalloc == RWL_SVALLOC_NOT)
	  {
	    /* this code only executed first time we touch a string variable */
	    rwlinitstrvar(xev, nn);
	  }
	}
      break;
      case RWL_STACK_ASN:
      case RWL_STACK_APP:
      case RWL_STACK_ASNPLUS:
      case RWL_STACK_ASNINT:
        vv = &xev->evar[stk[explen].esvar];
        /* What is the type we assign to
	 * Note that ASN is always the last element on the stack
	 * so this will always overwrite */
	if (RWL_TYPE_STR != vv->num.vtype)
	  iord = vv->num.vtype;
	nn = rwlnuminvar(xev,vv);
	if (nn->vtype == RWL_TYPE_STR && nn->vsalloc == RWL_SVALLOC_NOT)
	{
	  /* this code only executed first time we touch a string variable */
	  rwlinitstrvar(xev, nn);
	}
      break;

      case RWL_STACK_SYSTEM2STR:
        vv = &xev->evar[stk[explen].esvar];
	if (RWL_TYPE_STR != vv->vtype)
	  rwlexecsevere(xev, loc, "[rwlexpreval-system2strnotstr:%s;%d]", vv->vname, vv->vtype);
	nn = rwlnuminvar(xev,vv);
	if (nn->vtype == RWL_TYPE_STR && nn->vsalloc == RWL_SVALLOC_NOT)
	{
	  /* this code only executed first time we touch a string variable */
	  rwlinitstrvar(xev, nn);
	}
      break;


      case RWL_STACK_RUNSECONDS:
      case RWL_STACK_ERLANG:
      case RWL_STACK_ERLANG2:
      case RWL_STACK_ERLANGK:
      case RWL_STACK_SQRT:
      case RWL_STACK_LOG:
      case RWL_STACK_LOGB:
      case RWL_STACK_EXP:
      case RWL_STACK_EXPB:
      case RWL_STACK_ROUND:
        iord = RWL_TYPE_DBL;
      break;
      case RWL_STACK_END:
        j=1; /* get out of the loop */
      break;

      default:
      break;
    }
  } /* get return type */

  /* debug wanted? */
  if (bit(xev->tflags,RWL_THR_DEVAL))
  {
    rwldebugcodenonl(xev->rwm, loc, "eval stk siz %d ret %d", explen-1, iord);
    for (j=0; j<explen; j++)
    {
      switch (stk[j].elemtype)
      {
	case RWL_STACK_NOV:
	  fprintf(stderr," NOV");
	break;

	case RWL_STACK_NUM:
	  pnum = &stk[j].esnum;
	  switch (pnum->vtype)
	  {
	    case RWL_TYPE_INT:
	      fprintf(stderr, " NUM:" RWL_SB8PRINTF "", pnum->ival);
	    break;
	    case RWL_TYPE_DBL:
	      fprintf(stderr, " NUM:%.2f", pnum->dval);
	    break;
	    case RWL_TYPE_STR:
	      if (pnum->vsalloc == RWL_SVALLOC_NOT)
	        fprintf(stderr, " NUM:(notalloc)");
	      else
	        fprintf(stderr, " NUM:%s", pnum->sval);
	    break;
	    default:
	      fprintf(stderr, " NUM?:%d", pnum->vtype);
	     break;
	  }
	break;

	case RWL_STACK_PROCCALL:
	  vv = &xev->evar[stk[j].esvar];
	  fprintf(stderr, " PROC:%s",  vv->vname);
	  break;

	case RWL_STACK_FUNCCALL:
	  vv = &xev->evar[stk[j].esvar];
	  fprintf(stderr, " FUNC:%s",  vv->vname);
	  break;

	case RWL_STACK_VAR_LB:
	  vv = &xev->evar[stk[j].esvar];
	  nn = rwlnuminvar(xev, vv);
	  switch (vv->vtype)
	  {
	    case RWL_TYPE_INT:
	      fprintf(stderr, " VARLB:%s:" RWL_SB8PRINTF , vv->vname, nn->ival);
	    break;
	    case RWL_TYPE_DBL:
	      fprintf(stderr, " VARLB:%s:%.2f", vv->vname, nn->dval);
	    break;
	    case RWL_TYPE_STR:
	      if (nn->vsalloc == RWL_SVALLOC_NOT)
	        fprintf(stderr, " VARLB:%s:(notalloc)", vv->vname);
	      else
	        fprintf(stderr, " VARLB:%s:%s", vv->vname, nn->sval);
	    break;
	    default:
	      fprintf(stderr, " VARLB:%s:%s", vv->vname, vv->stype);
	     break;
	  }
	break;

	case RWL_STACK_SYSTEM2STR:
	  vv = &xev->evar[stk[j].esvar];
	  nn = rwlnuminvar(xev, vv);
	  switch (vv->vtype)
	  {
	    case RWL_TYPE_STR:
	      if (nn->vsalloc == RWL_SVALLOC_NOT)
	        fprintf(stderr, " S2S:%s:(notalloc)", vv->vname);
	      else
	        fprintf(stderr, " S2S:%s:%s", vv->vname, nn->sval);
	    break;

	    default: // just to prevent compiler warning
	    break;
	  }
	break;

	case RWL_STACK_SERVERRELEASE:
	case RWL_STACK_ACTIVESESSIONCOUNT:
	case RWL_STACK_OPENSESSIONCOUNT:
	case RWL_STACK_SQL_ID:
	case RWL_STACK_VAR:
	  vv = &xev->evar[stk[j].esvar];
	  nn = rwlnuminvar(xev, vv);
	  switch (vv->vtype)
	  {
	    case RWL_TYPE_DB:
	      fprintf(stderr, " DBFUN:%s" , vv->vname);
	    break;
	    case RWL_TYPE_SQL:
	      fprintf(stderr, " SQL_ID:%s" , vv->vname);
	    break;
	    case RWL_TYPE_INT:
	      fprintf(stderr, " VAR:%s:" RWL_SB8PRINTF , vv->vname, nn->ival);
	    break;
	    case RWL_TYPE_DBL:
	      fprintf(stderr, " VAR:%s:%.2f", vv->vname, nn->dval);
	    break;
	    case RWL_TYPE_STR:
	      if (nn->vsalloc == RWL_SVALLOC_NOT)
	        fprintf(stderr, " VAR:%s:(notalloc)", vv->vname);
	      else
	        fprintf(stderr, " VAR:%s:%s", vv->vname, nn->sval);
	    break;
	    default:
	      fprintf(stderr, " VAR:%s:%s", vv->vname, vv->stype);
	     break;
	  }
	break;
	case RWL_STACK_APP:
	  vv = &xev->evar[stk[j].esvar];
	  fprintf(stderr," APP:%s", vv->vname);
	  break;
	case RWL_STACK_ASNPLUS:
	  vv = &xev->evar[stk[j].esvar];
	  fprintf(stderr," ASNPLUS:%s", vv->vname);
	  break;
	break;
	case RWL_STACK_ASN:
	case RWL_STACK_ASNINT:
	  vv = &xev->evar[stk[j].esvar];
	  fprintf(stderr," ASN:%s", vv->vname);
	  break;
	break;

	case RWL_STACK_RUNSECONDS:
	  fprintf(stderr," RUNSECONDS");
	break;

	case RWL_STACK_SYSTEM:
	  fprintf(stderr," SYSTEM");
	break;

	case RWL_STACK_GETENV:
	  fprintf(stderr," GENV");
	break;

	case RWL_STACK_LENGTHB:
	  fprintf(stderr," LNGTB");
	break;

	case RWL_STACK_ACCESS:
	  fprintf(stderr," ACCS");
	break;

	case RWL_STACK_INSTRB3:
	  fprintf(stderr," INSB3");
	break;

	case RWL_STACK_INSTRB2:
	  fprintf(stderr," INSB2");
	break;

	case RWL_STACK_SUBSTRB2:
	  fprintf(stderr," SBST2");
	break;

	case RWL_STACK_SUBSTRB3:
	  fprintf(stderr," SBST3");
	break;

	case RWL_STACK_LOGB:
	  fprintf(stderr," LOGB");
	break;

	case RWL_STACK_LOG:
	  fprintf(stderr," LOG");
	break;

	case RWL_STACK_EXPB:
	  fprintf(stderr," EXPB");
	break;

	case RWL_STACK_EXP:
	  fprintf(stderr," EXP");
	break;

	case RWL_STACK_ROUND:
	  fprintf(stderr," ROUND");
	break;

	case RWL_STACK_SQRT:
	  fprintf(stderr," SQRT");
	break;

	case RWL_STACK_ERLANG:
	  fprintf(stderr," ERLANG");
	break;

	case RWL_STACK_ISNOTNULL:
	  fprintf(stderr," ISNOTNULL");
	break;

	case RWL_STACK_ISNULL:
	  fprintf(stderr," ISNULL");
	break;

	case RWL_STACK_ERLANG2:
	  fprintf(stderr," ERLANG2");
	break;

	case RWL_STACK_ERLANGK:
	  fprintf(stderr," ERLANGK");
	break;

	case RWL_STACK_ADD:
	  fprintf(stderr," +");
	break;

	case RWL_STACK_MUL:
	  fprintf(stderr," *");
	break;

	case RWL_STACK_DIV:
	  fprintf(stderr," /");
	break;

	case RWL_STACK_MOD:
	  fprintf(stderr," %%");
	break;

	case RWL_STACK_SUB:
	  fprintf(stderr," -");
	break;

	case RWL_STACK_MINUS:
	  fprintf(stderr," NEG");
	break;

	case RWL_STACK_NOT:
	  fprintf(stderr," NOT");
	break;

	case RWL_STACK_LESS:
	  fprintf(stderr," <");
	break;

	case RWL_STACK_GREATER:
	  fprintf(stderr," >");
	break;

	case RWL_STACK_LESSEQ:
	  fprintf(stderr," <=");
	break;

	case RWL_STACK_GREATEREQ:
	  fprintf(stderr," >=");
	break;

	case RWL_STACK_BETWEEN:
	  fprintf(stderr," between");
	break;

	case RWL_STACK_EQUAL:
	  fprintf(stderr," =");
	break;

	case RWL_STACK_NOTEQUAL:
	  fprintf(stderr," !=");
	break;

	case RWL_STACK_AND:
	  fprintf(stderr," and:%d", stk[j].skipend);
	break;

	case RWL_STACK_OR:
	  fprintf(stderr," or:%d", stk[j].skipend);
	break;

	case RWL_STACK_CONCAT:
	  fprintf(stderr," ||");
	break;

	case RWL_STACK_CONDITIONAL:
	  fprintf(stderr," cond:%d:%d", stk[j].skipnxt, stk[j].skipend);
	break;

	case RWL_STACK_END:
	  fprintf(stderr,"\n");
	break;

	default:
	  fprintf(stderr," unkn(%d)", stk[j].elemtype);
	break;
      }
      switch (stk[j].branchtype)
      {
        case RWL_EXP_ORBRANCH:
	  fprintf(stderr,"[or:%d]", stk[j].skipnxt);
	break;
        case RWL_EXP_ANDBRANCH:
	  fprintf(stderr,"[and:%d]", stk[j].skipnxt);
	break;
        case RWL_EXP_CONDBRANCH1:
	  fprintf(stderr,"[cb1:%d:%d]", stk[j].skipnxt, stk[j].skipend);
	break;
        case RWL_EXP_CONDBRANCH2:
	  fprintf(stderr,"[cb2:%d:%d]", stk[j].skipnxt, stk[j].skipend);
	break;
      }
    } 
  }
  cstak = (rwl_value *) rwlalloc(xev->rwm, explen*sizeof(rwl_value));

  /* traverse the stack and evaluate */
  for (i=0; ; i++)
  {

    switch (stk[i].elemtype)
    {
      case RWL_STACK_RUNSECONDS:
	{
	  /* how long have we been running */
	  rwl_value xnum;
	  char xbuf[RWL_PFBUF];
	  xnum.dval = rwlclock(xev, loc);
	  if (bit(xev->tflags,RWL_THR_DEVAL))
	    rwldebugcode(xev->rwm, loc,  "at %d: runseconds= = %.6f", i, xnum.dval);
	  xnum.ival = (sb8) floor(xnum.dval);
	  xnum.vtype = iord;
	  snprintf(xbuf, RWL_PFBUF, xev->rwm->dformat, xnum.dval);
	  xnum.sval = (text *)xbuf;
	  xnum.isnull = 0;
	  xnum.vsalloc = RWL_SVALLOC_FIX;
	  xnum.slen = RWL_PFBUF;
	  rwlcopyvalue(cstak+i, &xnum);
	}
      break;

      case RWL_STACK_NUM:
	/* constant on stack, just copy */
          rwlcopyvalue(cstak+i, &stk[i].esnum);
      break;

      // open/activesessioncount
      case RWL_STACK_ACTIVESESSIONCOUNT:
      case RWL_STACK_OPENSESSIONCOUNT:
	if (!tainted)
	{
	  rwl_value xnum;
	  rwl_cinfo *db;
	  char xbuf[RWL_PFBUF];

	  vv = &xev->evar[stk[i].esvar];
	  db = vv->vdata;
	  // Note that these can only be called on session
	  // pools where vv->vdata actually has a value
	  /*ASSERT*/
	  if (!db)
	  {
	    rwlexecsevere(xev, loc, "[rwlexpreval-nodbactopses:%s]", vv->vname);
	    xnum.ival = 0;
	  }
	  else
	    xnum.ival = rwldbsescount(xev, loc, db, stk[i].elemtype);
	  if (bit(xev->tflags,RWL_THR_DEVAL))
	    rwldebugcode(xev->rwm, loc,  "at %d: sescount = %d", i, xnum.ival);
	  xnum.dval = (double) xnum.ival;
	  xnum.vtype = iord;
	  snprintf(xbuf, RWL_PFBUF, xev->rwm->iformat, xnum.ival);
	  xnum.sval = (text *)xbuf;
	  xnum.isnull = 0;
	  xnum.vsalloc = RWL_SVALLOC_FIX;
	  xnum.slen = RWL_PFBUF;
	  rwlcopyvalue(cstak+i, &xnum);
	}
      break; 

      // serverrelease
      case RWL_STACK_SERVERRELEASE:
	if (!tainted)
	{
	  rwl_value xnum;
	  rwl_cinfo *db;
	  text xbuf[RWL_DB_SERVERR_LEN];

	  // The serverrelease was established during connect
	  // time in main, so get it from there
	  vv = &xev->rwm->mxq->evar[stk[i].esvar];
	  db = vv->vdata;
	  xnum.dval = 0.0;
	  xnum.ival = 0;
	  xnum.vtype = RWL_TYPE_STR;
	  rwlstrnncpy(xbuf, db->serverr, RWL_DB_SERVERR_LEN);
	  xnum.sval = xbuf;
	  xnum.isnull = 0;
	  xnum.vsalloc = RWL_SVALLOC_FIX;
	  xnum.slen = RWL_DB_SERVERR_LEN;
	  rwlcopyvalue(cstak+i, &xnum);
	}
      break; 

      // sql_id
      case RWL_STACK_SQL_ID:
	if (!tainted)
	{
	  rwl_value xnum;
	  rwl_sql *sq;
	  text xbuf[RWL_PFBUF];

	  vv = &xev->evar[stk[i].esvar];
	  sq = vv->vdata;
	  xnum.dval = 0.0;
	  xnum.ival = 0;
	  xnum.vtype = RWL_TYPE_STR;
	  if (sq->sqlidlen)
	  {
	    if (sq->sqlidlen<RWL_PFBUF)
	      rwlstrnncpy(xbuf, sq->sqlid, sq->sqlidlen+1);
	    else
	      rwlstrnncpy(xbuf, sq->sqlid, RWL_PFBUF);
	  }
	  else
	    rwlstrcpy(xbuf,(text *)"");
	  xnum.sval = xbuf;
	  xnum.isnull = 0;
	  xnum.vsalloc = RWL_SVALLOC_FIX;
	  xnum.slen = RWL_PFBUF;
	  rwlcopyvalue(cstak+i, &xnum);
	}
      break; 

      // Put the length of the string onto the stack
      case RWL_STACK_VAR_LB:
	if (!tainted)
	{
	  rwl_value xnum;
	  char xbuf[RWL_PFBUF];
	  vv = &xev->evar[stk[i].esvar];
	  if (RWL_TYPE_RAST == vv->vtype)
	  { // get random string, and overwrite with its length
	    rwlrastval(xev, &xnum, vv);
	    xnum.ival = (sb8) rwlstrlen(xnum.sval);
	  }
	  else 
	  { // get variable and just keep its length
	    nn = rwlnuminvar(xev, vv);
	    xnum.ival = (sb8) rwlstrlen(nn->sval);
	  }
	  xnum.dval = (double)xnum.ival;
	  xnum.vtype = iord;
	  snprintf(xbuf, RWL_PFBUF, xev->rwm->iformat, xnum.ival);
	  xnum.sval = (text *)xbuf;
	  xnum.isnull = 0;
	  xnum.vsalloc = RWL_SVALLOC_FIX;
	  xnum.slen = RWL_PFBUF;
	  rwlcopyvalue(cstak+i, &xnum);
	}
      break; 

      case RWL_STACK_VAR:
	if (!tainted)
	{
	  vv = &xev->evar[stk[i].esvar];
	  /* if a random string array */
	  if (RWL_TYPE_RAST == vv->vtype)
	    rwlrastval(xev, cstak+i, vv);
	  else /* else get ordinary variable value */
	  {
	    nn = rwlnuminvar(xev, vv);
	    rwlcopyvalue(cstak+i, nn);
	  }
	}
      break; 

      case RWL_STACK_APP:
	vv = &xev->evar[stk[i].esvar];
        if (i<1) goto stack1short;
	if (!tainted) 
	{
	  rwl_value *cnp;
	  cnp = cstak+(i-1);

	  /* copy actual values */
	  nn = rwlnuminvar(xev, vv);
	  nn->isnull = 0; 

	  if (nn->vsalloc != RWL_SVALLOC_FIX)
	    rwlexecsevere(xev, loc, "[rwlexpreval-alloc:%s;%d;%d]"
	      , vv->vname, nn->slen
	      , nn->vsalloc);
	  else
	  {
	    ub8 lsval = rwlstrlen(nn->sval);

	    /* see if the string representation fits, note slen includes the NULL at and */
	    if ((j=(rwlstrlen(cnp->sval)+lsval)) > nn->slen-1)
	    {
	      rwlexecerror(xev, loc
		, vv->vtype == RWL_TYPE_STR ? RWL_ERROR_TOO_SHORT_STRING
					    : RWL_ERROR_TOO_SHORT_RETURN
		, vv->vname, nn->slen-1, j);
	      rwlstrnncpy(nn->sval+lsval, cnp->sval, nn->slen-lsval);
	      nn->sval[nn->slen]=0;
	    }
	    else
	      rwlstrcpy(nn->sval+lsval, cnp->sval);
	    if (bit(xev->tflags,RWL_THR_DEVAL))
	      rwldebugcode(xev->rwm, loc,  "at %d: %s ||= %s", i
		, vv->vname, nn->sval );
	  }
	  nn->ival = rwlatosb8(nn->sval);
	  nn->dval = rwlatof(nn->sval);
	}
      break; 

      case RWL_STACK_ASN:
      case RWL_STACK_ASNPLUS:
      case RWL_STACK_ASNINT:
	vv = &xev->evar[stk[i].esvar];
        if (i<1) goto stack1short;
	if (!tainted) 
	{
	  rwl_value *cnp;
	  /* save value on stack to variable */
	  /* first copy to top of stack */
	  rwlcopyvalue(cstak+i, cstak+(i-1));
	  cnp = cstak+(i);
	  nn = rwlnuminvar(xev, vv);

	  // Are we handling a file ?
	  if (vv->vtype == RWL_TYPE_FILE)
	  {
	    FILE *fil;
	    char etxt[100];
	    /* file are objects that can be assigned to, and there are four cases:
	     * assign to NULL and already open: close
	     * assign to NULL and not open: error
	     * assign to non-null and not open: open
	     * assign to non-null and not open: error
	     */
	    if (bit(nn->valflags, RWL_VALUE_FILE_OPENW|RWL_VALUE_FILE_OPENR))
	    { /* is open */
	      if (cnp->isnull || cnp->sval[0]==0)
	      { 
		if (bit(nn->valflags, RWL_VALUE_FILEOPENMAIN) && !bit(xev->tflags, RWL_P_ISMAIN))
		{
		  rwlexecerror(xev, loc, RWL_ERROR_CANNOT_CLOSE_MAIN, vv->vname);
		}
		else
		{
		  if (bit(nn->valflags, RWL_VALUE_FILEISPIPE))
		  { /* closing a pipe */
		    sb4 res = pclose(nn->vptr);
		    if (res>0)
		      rwlexecerror(xev, loc, RWL_ERROR_NONZEROEXIT, vv->vname, res);
		    else if (res<0)
		    {
		      if (0!=strerror_r(errno, etxt, sizeof(etxt)))
			strcpy(etxt,"unknown");
		      rwlexecerror(xev, loc, RWL_ERROR_CANNOTCLOSE_PIPE, vv->vname, etxt);
		    }
		    if (bit(nn->valflags, RWL_VALUE_FILE_OPENR) && nn->v2ptr)
		      rwlfree(xev->rwm, nn->v2ptr);
		    bic(nn->valflags, RWL_VALUE_FILEOPENMAIN
		      |RWL_VALUE_FILE_OPENR|RWL_VALUE_FILE_OPENW
		      |RWL_VALUE_FILEISPIPE);
		    nn->vptr = 0;
		    nn->v2ptr = 0;
		  }
		  else
		  { /* closing a file */
		    if (0!=fclose(nn->vptr))
		    {
		      if (0!=strerror_r(errno, etxt, sizeof(etxt)))
			strcpy(etxt,"unknown");
		      rwlexecerror(xev, loc, RWL_ERROR_CANNOTCLOSE_FILE, vv->vname, etxt);
		    }
		    else if (bit(xev->tflags,RWL_THR_DEVAL))
			rwldebugcode(xev->rwm, loc,  "at %d: %s closed", i
			  , vv->vname);
		    bic(nn->valflags, RWL_VALUE_FILEOPENMAIN
		      |RWL_VALUE_FILE_OPENR
		      |RWL_VALUE_FILE_OPENW);
		    nn->vptr = 0;
		  }
		}
	      }
	      else
	      { /* trying to open file already open */
	        rwlexecerror(xev, loc, RWL_ERROR_ALREADYOPEN_FILE, vv->vname);
	      }
	    }
	    else
	    { /* is closed */
	      if (cnp->isnull || cnp->sval[0]==0)
	      { /* trying to close file already closed */
	        rwlexecerror(xev, loc, RWL_ERROR_WRITE_NOT_OPEN, vv->vname);
	      }
	      else
	      { /* open the file */
	        text *filnam;
		char *openmode;
		ub1 openflags = bit(xev->tflags, RWL_P_ISMAIN) ? RWL_VALUE_FILEOPENMAIN : 0;
		ub4 len = (ub4) rwlstrlen(cnp->sval);

		/* is it really a pipe to be written to */
		if (len>=2 && !strncmp((char *)cnp->sval, "|", 1))
	        {
		  filnam = cnp->sval+1;
		  fil = popen((char *)filnam, "w");
		  if (fil)
		  {
		    nn->vptr = fil;
		    bis(nn->valflags, openflags | RWL_VALUE_FILE_OPENW | RWL_VALUE_FILEISPIPE);
		    if (bit(xev->tflags,RWL_THR_DEVAL))
		      rwldebugcode(xev->rwm, loc,  "at %d: %s opened %s as pipe for writing", i
			, vv->vname, filnam);
		  }
		  else
		  {
		    if (0!=strerror_r(errno, etxt, sizeof(etxt)))
		      strcpy(etxt,"unknown");
		    rwlexecerror(xev, loc, RWL_ERROR_CANNOTOPEN_PIPE, vv->vname, filnam, etxt);
		  }
		} // or a pipe to be read from
		else if (len>=2 && '|' == cnp->sval[len-1])
	        {
		  filnam = rwlstrdup(xev->rwm, cnp->sval);
		  filnam[len-1] = 0;
		  fil = popen((char *)filnam, "r");
		  if (fil)
		  {
		    nn->vptr = fil;
		    nn->v2ptr = filnam;
		    bis(nn->valflags, openflags | RWL_VALUE_FILE_OPENR | RWL_VALUE_FILEISPIPE);
		    if (bit(xev->tflags,RWL_THR_DEVAL))
		      rwldebugcode(xev->rwm, loc,  "at %d: %s opened %s as pipe for reading", i
			, vv->vname, filnam);
		  }
		  else
		  {
		    if (0!=strerror_r(errno, etxt, sizeof(etxt)))
		      strcpy(etxt,"unknown");
		    rwlexecerror(xev, loc, RWL_ERROR_CANNOTOPEN_PIPE, vv->vname, filnam, etxt);
		    rwlfree(xev->rwm, filnam);
		  }
		}
		else /* not a pipe - i.e. a real file */
		{
		  /* read, append or truncate? */
		  if (len>=3 && !strncmp((char *)cnp->sval, ">>", 2))
		  {
		    filnam=rwlenvexp(xev, loc, cnp->sval+2);
		    openmode="a";
		    openflags |= RWL_VALUE_FILE_OPENW;
		  }
		  else if (len>=2 && '<' == cnp->sval[0])
		  {
		    filnam=rwlenvexp(xev, loc, cnp->sval+1);
		    openmode="r";
		    openflags |= RWL_VALUE_FILE_OPENR;
		  }
		  else if (len>=2 && '>' == cnp->sval[0])
		  {
		    filnam=rwlenvexp(xev, loc, cnp->sval+1);
		    openmode="w";
		    openflags |= RWL_VALUE_FILE_OPENW;
		  }
		  else
		  {
		    filnam=rwlenvexp(xev, loc, cnp->sval);
		    openmode="w";
		    openflags |= RWL_VALUE_FILE_OPENW;
		  }

		  fil = rwlfopen(filnam, openmode);
		  if (fil)
		  {
		    nn->vptr = fil;
		    bis(nn->valflags, openflags);
		    if (bit(xev->tflags,RWL_THR_DEVAL))
		      rwldebugcode(xev->rwm, loc,  "at %d: %s opened %s", i
			, vv->vname, filnam);
		  }
		  else
		  {
		    if (0!=strerror_r(errno, etxt, sizeof(etxt)))
		      strcpy(etxt,"unknown");
		    rwlexecerror(xev, loc, RWL_ERROR_CANNOTOPEN_FILE, vv->vname
		    , bit(openflags,RWL_VALUE_FILE_OPENW) ? "writing" : "reading"
		    , filnam, etxt);
		  }
		}
	      }
	    }
	    /* reset error report flag */
	    bic(nn->valflags, RWL_VALUE_FILEREPNOTOPEN);
	  }
	  else /* handle anything else than FILE */
	  {
	    /* add or copy actual values */
	    if (RWL_STACK_ASNPLUS == stk[i].elemtype)
	    {
	      nn->dval += cnp->dval;
	      nn->ival += cnp->ival;
	    }
	    else
	    {
	      nn->dval = cnp->dval;
	      nn->ival = cnp->ival;
	    }
	    nn->isnull = cnp->isnull;

	    if (nn->vsalloc != RWL_SVALLOC_FIX)
	      rwlexecsevere(xev, loc, "[rwlexpreval-alloc2:%s;%d;%d]"
		, vv->vname, nn->slen
		, nn->vsalloc);
	    else
	    {
	      if (RWL_STACK_ASNPLUS == stk[i].elemtype)
	      {
		if (nn->isnull)
		  rwlstrcpy(nn->sval,"");
		else
		{
		  if (nn->vtype == RWL_TYPE_DBL)
		    snprintf((char *)nn->sval, RWL_PFBUF, xev->rwm->dformat, nn->dval);
		  else
		    snprintf((char *)nn->sval, RWL_PFBUF, xev->rwm->iformat, nn->ival);
		}
	      }
	      else
	      {
		/* see if the string representation fits, note slen includes the NULL at and */
		if ((j=rwlstrlen(cnp->sval)) > nn->slen-1)
		{
		  rwlexecerror(xev, loc
		    , vv->vtype == RWL_TYPE_STR ? RWL_ERROR_TOO_SHORT_STRING
						: RWL_ERROR_TOO_SHORT_RETURN
		    , vv->vname, nn->slen-1, j);
		  rwlstrnncpy(nn->sval, cnp->sval, nn->slen);
		  nn->sval[nn->slen]=0;
		}
		else
		  rwlstrcpy(nn->sval, cnp->sval);
		if (bit(xev->tflags,RWL_THR_DEVAL))
		  rwldebugcode(xev->rwm, loc,  "at %d: %s := " RWL_SB8PRINTF "/%.2f %s", i
		    , vv->vname, nn->ival
		    , nn->dval, nn->sval );
	      }
	    }
	  }
	}
      break; 

      case RWL_STACK_END:
	if (ret) /* if result is wanted */
	{
	  rwlcopyvalue(ret, cstak+(i-1));
	  if (tainted)
	    ret->vtype = RWL_TYPE_CANCELLED;
	  else
	    ret->vtype = iord;
	}
	goto finish_normal;

      case RWL_STACK_ERLANGK:
	{
	  sb8 kval, ksav;
	  double dtmp;

	  if (i<2) goto stack2short;
	  if (tainted || skip) goto pop_two;

	  kval = cstak[i-2].ival;
	  if (kval < 1)
	  {
	    rwlexecerror(xev, loc , RWL_ERROR_ERLANGK_SMALL, kval);
	    kval = 1;
	  }
	  if (kval > RWL_ERLANGK_MAXK)
	  {
	    rwlexecerror(xev, loc , RWL_ERROR_ERLANGK_HIGH, kval);
	    kval = RWL_ERLANGK_MAXK;
	  }
	  dtmp = 1.0;

	  ksav = kval;
	  while (kval--)
	    dtmp *= (1.0-erand48(xev->xsubi));

	  resdval = cstak[i-1].dval * (-log(dtmp)) / (double) ksav;
	  resival = (sb8)round(resdval);
	  if (bit(xev->tflags,RWL_THR_DEVAL))
	    rwldebugcode(xev->rwm, loc,  "at %d: erlangk(%d,%.2f) = %.2f", i, ksav, cstak[i-1].dval, resdval);
	  goto finish_two_math;
	}
	break;


      /* instrb2 */
      case RWL_STACK_INSTRB2:
	{
	  text *instrb = 0; 
	  if (i<2) goto stack2short;
	  if (tainted || skip) goto pop_two;

	  instrb = rwlstrstr(cstak[i-2].sval, cstak[i-1].sval);

	  if (instrb)
	  {
	    resival = instrb - cstak[i-2].sval + 1;
	    resdval = (double) resival;
	  }
	  else
	  {
	    resival = 0;
	    resdval = 0.0;
	  }
	  if (bit(xev->tflags,RWL_THR_DEVAL))
	    rwldebugcode(xev->rwm, loc,  "at %d: %p, instrb(\"%s\", \"%s\") = %d", i
	       , cstak[i-2].sval
	      , cstak[i-2].sval, cstak[i-1].sval, resival);

	  goto finish_two_math;
	}

	break;

      /* substr2 */
      case RWL_STACK_SUBSTRB2:
	{
	  text *substrb = 0; 
	  text smallbuf[1000]; /* used when result shorter than
	  			         * this size to avoid alloc/free */
	  ub8 reslen, stl;
	  sb8 pos;
	  rwl_value xnum;
	  if (i<2) goto stack2short;
	  if (tainted || skip) goto pop_two;
	  if (bit(xev->tflags,RWL_THR_DEVAL))
	    rwldebugcode(xev->rwm, loc,  "at %d: %p, substrb(\"%s\", %d)", i
	       , cstak[i-2].sval
	      , cstak[i-2].sval, cstak[i-1].ival);
	  stl = rwlstrlen(cstak[i-2].sval);
	  // pos starts at 1 by SUBSTRB in Oracle
	  if (cstak[i-1].ival < 0) // start pos from end
	    pos = (sb8) stl + cstak[i-1].ival;
	  else if (cstak[i-1].ival > 0) // start pos from begin
	    pos = cstak[i-1].ival - 1;
	  else // start at begin
	    pos = 0;
	  if (pos < 0 || pos >= (sb8) stl // pos out of bound
	  	|| cstak[i-1].isnull ) // pos is null
	  {
	    xnum.ival = 0;
	    xnum.dval = 0;
	    xnum.sval = (text *) "";
	    xnum.vtype = iord;
	    xnum.slen = 1;
	    if (cstak[i-1].isnull)
	      xnum.isnull = RWL_ISNULL;
	    else
	      xnum.isnull = 0;
	    xnum.vsalloc = RWL_SVALLOC_CONST;
	    rwlcopyvalue(cstak+(i), &xnum);
	  }
	  else // there are actual bytes
	  {
	    reslen = stl - (ub8)pos + 1; // space for NULL
	    if (reslen<sizeof(smallbuf)-1)
	      substrb = smallbuf;
	    else
	      substrb = rwlalloccode(xev->rwm, reslen, loc);
	    rwlstrcpy(substrb, cstak[i-2].sval + pos);

	    /* try getting number representation */
	    resival = rwlatosb8(substrb);
	    resdval = rwlatof(substrb);
	    if (bit(xev->tflags,RWL_THR_DEVAL))
	      rwldebugcode(xev->rwm, loc,  "substrb returns %p %s " RWL_SB8PRINTF
		, substrb, substrb, resival);
	    xnum.ival = resival;
	    xnum.dval = resdval;
	    xnum.vtype = iord;
	    xnum.sval = substrb;
	    if (reslen<sizeof(smallbuf)-1)
	      xnum.vsalloc = RWL_SVALLOC_FIX;
	    else
	      xnum.vsalloc = RWL_SVALLOC_TEMP;
	    xnum.slen = reslen;
	    /* substrb never returns null */
	    xnum.isnull = 0;
	    rwlcopyvalue(cstak+(i), &xnum);
	    if (reslen>=sizeof(smallbuf)-1)
	      rwlfreecode(xev->rwm, substrb, loc);
	  }
	}
	goto pop_two;

	break;

      /* Concatenation */
      case RWL_STACK_CONCAT:
	{
	  text *concat = 0; 
	  text smallbuf[1000]; /* used when result shorter than
	  			         * this size to avoid alloc/free */
	  ub8 reslen, ll;
	  rwl_value xnum;
	  if (i<2) goto stack2short;
	  if (tainted || skip) goto pop_two;
	  if (bit(xev->tflags,RWL_THR_DEVAL))
	    rwldebugcode(xev->rwm, loc,  "at %d: %p %p, \"%s\" || \"%s\"", i
	       , cstak[i-2].sval, cstak[i-1].sval
	      , cstak[i-2].sval, cstak[i-1].sval);
	  /* allocate space for concatenation and do it */
	  reslen = (ll=rwlstrlen(cstak[i-2].sval)) + rwlstrlen(cstak[i-1].sval) + 1;
	  if (reslen<sizeof(smallbuf)-1)
	    concat = smallbuf;
	  else
	    concat = rwlalloccode(xev->rwm, reslen, loc);
	  rwlstrcpy(concat, cstak[i-2].sval);
	  rwlstrcpy(concat+ll, cstak[i-1].sval);

	  /* try getting number representation */
	  resival = rwlatosb8(concat);
	  resdval = rwlatof(concat);
	  if (bit(xev->tflags,RWL_THR_DEVAL))
	    rwldebugcode(xev->rwm, loc,  "concat returns %p %p %p %s " RWL_SB8PRINTF " %.2f"
	      , concat, cstak[i-2].sval, cstak[i-1].sval
	      , concat, resival, resdval);
	  xnum.ival = resival;
	  xnum.dval = resdval;
	  xnum.vtype = iord;
	  xnum.sval = concat;
	  if (reslen<sizeof(smallbuf)-1)
	    xnum.vsalloc = RWL_SVALLOC_FIX;
	  else
	    xnum.vsalloc = RWL_SVALLOC_TEMP;
	  xnum.slen = reslen;
	  /* concatenation never returns null */
	  xnum.isnull = 0;
	  rwlcopyvalue(cstak+(i), &xnum);
	  if (reslen>=sizeof(smallbuf)-1)
	    rwlfreecode(xev->rwm, concat, loc);
	}
	goto pop_two;

	break;

      /* call a user function */
      case RWL_STACK_PROCCALL:
      case RWL_STACK_FUNCCALL:
        {
	  ub4 pp;
	  vv = &xev->evar[stk[i].esvar];

	  // If random procedure
	  // pick a random one of them
	  if (RWL_TYPE_RAPROC == vv->vtype)
	    vv = &xev->evar[ rwlrastvar(xev, vv) ];

	  if (i<vv->v2val) goto stackNshort;
	  if (tainted || skip) goto pop_N;

	  if (bit(xev->tflags,RWL_THR_DEVAL))
	    rwldebugcode(xev->rwm, loc,  "at %d: func %s", i, vv->vname);


	  /* prepare recurse */
	  xev->erloc[xev->pcdepth] = loc;
	  if (++xev->pcdepth >= RWL_MAX_CODE_RECURSION)
	    rwlexecsevere(xev,  loc
		 , "[rwlexpreval-depth1:%d;%d;%d]", xev->pcdepth, stk[i].esvar, vv->vval);
	  else
	  {
	    sb4 va;
	    ub4 qq;
	    size_t jjj;
	    rwl_localvar *pa;
	    rwl_value *nn, *ss;
	    
	    pa = vv->vdata; /* array of local variable names and guesses */

	    /* allocate array of local variables */
	    xev->locals[xev->pcdepth] =
	      (rwl_value *) rwlalloc(xev->rwm,vv->v3val * sizeof(rwl_value));

	    /* note that if this is the array entries:
	     *
	     * 0  1  2  3  4  5  6
	     *
	     * and there are e.g. two arguments v2val will be 2
	     * and v3val will be 7.  Array entry 0 will be used
	     * to store the return value, 1 and 2 will be the
	     * arguments (which are in opposite order on stack
	     * and 3, 4, 5, 6 will be the local variables used
	     * by the function
	     */
	    
	    qq = vv->v2val; /* used to reverse stack order of arguments */

	    /* copy or initialize local variables */
	    for (pp=0; pp<vv->v3val; pp++)
	    {
	      va = pp ? rwllocalvar(xev, pa[pp].aname, &pa[pp].aguess, vv)
		      : 0; 
	      if (0==pp || pp>vv->v2val)
	      { /* return value or local variable
	        *  This code is similar to rwllocalsprepare
		**/

		if (va>=0 && pp==(ub4)va) /*!ASSERT*/
		{
		  nn = xev->locals[xev->pcdepth]+va;
		  if (va) // local variable
		    nn->vtype = pa[pp].atype; // xev->evar[pa[pp].aguess].num.vtype;
		  else  // function return value
		    nn->vtype = vv->num.vtype;
		  switch (nn->vtype)
		  {
		    case RWL_TYPE_SQL:
		      {
		        // clean out local dynamic SQL at start 
		        rwl_sql *sq = xev->evar[pa[pp].aguess].vdata;
			if (bit(sq->flags, RWL_SQFLAG_DYNAMIC))
			  rwldynsrelease(xev, loc, sq, vv->pname);
		      }
		      break;

		    case RWL_TYPE_STR:
		      nn->slen = va ? xev->evar[pa[pp].aguess].num.slen
				    : vv->num.slen;
		      nn->vsalloc = RWL_SVALLOC_NOT;
		      nn->isnull = 0;
		      if (bit(xev->tflags,RWL_THR_DEVAL))
			  rwldebugcode(xev->rwm, loc
			    ,  "initstr %d %d %s"
			    , va, nn->slen
			    , va ? xev->evar[pa[pp].aguess].vname
				 : vv->vname
			    ); 
		      rwlinitstrvar(xev, nn);
		    break;

		    case RWL_TYPE_BLOB:
		    case RWL_TYPE_CLOB:
		      // cannot be return value 
		      if (0!=pp) rwlalloclob(xev, loc, (OCILobLocator **) &nn->vptr);
		    break;

		    case RWL_TYPE_INT:
		    case RWL_TYPE_DBL:
		      nn->ival = 0;
		      nn->dval = 0.0;
		      nn->isnull = RWL_ISNULL;
		      nn->slen = RWL_PFBUF;
		      nn->sval = rwlalloc(xev->rwm, RWL_PFBUF);
		      nn->vsalloc = RWL_SVALLOC_FIX;
		      if (bit(xev->tflags,RWL_THR_DEVAL))
			  rwldebugcode(xev->rwm, loc
			    ,  "localvar %d %d %d %s"
			    , va, nn->slen
			    , nn->vtype
			    , va ? xev->evar[pa[pp].aguess].vname
				 : vv->vname
			    ); 
		    break;
		  }
		  if (bit(xev->tflags,RWL_THR_DEVAL))
		  {
		    if (pp)
		      rwldebugcode(xev->rwm, loc
			,  "at %d: localvar %d %s %s"
			, i, pp, pa[pp].aname, xev->evar[pa[pp].aguess].stype); 
		    else
		      rwldebugcode(xev->rwm, loc
			,  "at %d: return %s"
			, i, xev->evar[pa[pp].aguess].stype); 
		      
		  }
		}
		else
		{
		  if (pp)
		    rwlexecsevere(xev, loc, "[rwlexpreval-nolocalvar:%d;%d;%s;%s]"
		      , pp, va, pa[pp].aname, vv->vname);
		}
	      }
	      else
	      {
		/* copy argument from stack to local arg var */
		if (va>0 && pp==(ub4)va) /*!ASSERT*/
		{
		  nn = xev->locals[xev->pcdepth]+va;
		  nn->vtype = pa[pp].atype; // xev->evar[pa[pp].aguess].num.vtype;
		  ss = cstak+(i-qq);
		  qq--;

		  switch (nn->vtype)
		  {
		    case RWL_TYPE_STR:
		      nn->slen = va ? xev->evar[pa[pp].aguess].num.slen
				    : vv->num.slen;
		      nn->vsalloc = RWL_SVALLOC_NOT;
		      nn->isnull = 0;
		      rwlinitstrvar(xev, nn);
		      if ((jjj=rwlstrlen(ss->sval)) > nn->slen-1)
		      {
			rwlexecerror(xev, loc
			  , RWL_ERROR_TOO_SHORT_STRING
			  , vv->vname, nn->slen-1, jjj);
			rwlstrnncpy(nn->sval, ss->sval, nn->slen);
			nn->sval[nn->slen]=0;
		      }
		      else
			rwlstrcpy(nn->sval, ss->sval);
		      nn->ival = rwlatosb8(nn->sval);
		      nn->dval = rwlatof(nn->sval);
		    break;

		    case RWL_TYPE_INT:
		    case RWL_TYPE_DBL:
		      nn->dval = ss->dval;
		      nn->ival = ss->ival;
		      nn->isnull = ss->isnull;
		      nn->slen = RWL_PFBUF;
		      nn->sval = rwlalloc(xev->rwm, RWL_PFBUF);
		      nn->vsalloc = RWL_SVALLOC_FIX;
		      rwlstrnncpy(nn->sval, ss->sval, nn->slen);
		    break;
		  }
		if (bit(xev->tflags,RWL_THR_DEVAL))
		  rwldebugcode(xev->rwm, loc
		    ,  "at %d: arg %s " RWL_SB8PRINTF 
		    , i, pa[pp].aname, nn->ival); 
		}
		else
		  rwlexecsevere(xev, loc, "[rwlexpreval-nolocalarg:%d;%d;%d;%s;%s]"
		    , va, qq, pp, pa[pp].aname, vv->vname);
	      }
	    } /* for pp over all locals */
	    xev->start[xev->pcdepth] = vv->vval;
	    xev->xqcname[xev->pcdepth] = vv->vname;
	    // now recurse
	    rwlcoderun(xev);
	    if (RWL_STACK_FUNCCALL == stk[i].elemtype)
	    {
	      /* copy result back to stack */
	      ss = xev->locals[xev->pcdepth]+0;
	      nn = &vv->num;
	      if (RWL_TYPE_STR == nn->vtype && (jjj=rwlstrlen(ss->sval)) > nn->slen)
	      {
		rwl_location eloc;
		eloc.fname = vv->loc.fname;
		// start is set to the place where RETURN was done
		eloc.errlin = eloc.lineno = xev->rwm->code[xev->start[xev->pcdepth]].cloc.lineno;
		rwlexecerror(xev, &eloc
		  , RWL_ERROR_TOO_SHORT_RETURN
		  , vv->vname, nn->slen-1, jjj);
		ss->sval[nn->slen-1]=0;
	      }
	      rwlcopyvalue(cstak+i, ss);
	    }

	    /* and free allocations */
	    for (pp=0; pp<vv->v3val; pp++)
	    {
	      nn = xev->locals[xev->pcdepth]+pp;
	      switch (nn->vsalloc)
	      {
		case RWL_SVALLOC_FIX:
		case RWL_SVALLOC_TEMP:
		  rwlfree(xev->rwm, nn->sval);
		default: // avoid gcc warning about missing enum
		break;
	      }
	      
	      switch (nn->vtype)
	      {
		case RWL_TYPE_FILE:
		  if  (bit(nn->valflags,RWL_VALUE_FILE_OPENW|RWL_VALUE_FILE_OPENR))
		  {
		    rwl_location eloc;
		    // end of the routine
		    eloc.fname = vv->loc.fname;
		    eloc.errlin = eloc.lineno = xev->rwm->code[xev->start[xev->pcdepth]].cloc.lineno;
		    rwlexecerror(xev, &eloc, RWL_ERROR_FILE_WILL_CLOSE, pa[pp].aname);
		    if (bit(nn->valflags,RWL_VALUE_FILEISPIPE))
		    {
		      pclose(nn->vptr);
		      if (nn->v2ptr)
			rwlfree(xev->rwm,nn->v2ptr);
		      nn->v2ptr = 0;
		    }
		    else
		    {
		      fclose(nn->vptr);
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
	      }
	    }
	    rwlfree(xev->rwm, xev->locals[xev->pcdepth]);
	  }
	  xev->locals[xev->pcdepth]=0;
	  --xev->pcdepth;
	  xev->erloc[xev->pcdepth] = 0;

        pop_N: 
	  /* pop stack by arg count */
	  for (j=i-1; j>vv->v2val-1; j--)
	    rwlcopyvalue(cstak+(j), cstak+(j - vv->v2val));
	}
	break;
    
      /* All the usual dyadic number functions */
      case RWL_STACK_ADD:
        if (i<2) goto stack2short;
	if (tainted || skip) goto pop_two;
	if (bit(xev->tflags,RWL_THR_DEVAL))
	  rwldebugcode(xev->rwm, loc,  "at %d: " RWL_SB8PRINTF " + " RWL_SB8PRINTF "", i, cstak[i-2].ival, cstak[i-1].ival);
	/* always do both the integer and doubls */
	resival = cstak[i-1].ival + cstak[i-2].ival;
	resdval = cstak[i-1].dval + cstak[i-2].dval;
      finish_two_math:
	{
	  rwl_value xnum;
	  char xbuf[RWL_PFBUF];
	  if( cstak[i-1].isnull || cstak[i-2].isnull)
	  {
	    xnum.ival = 0;
	    xnum.dval = 0;
	    xnum.sval = (text *) "";
	    xnum.vtype = iord;
	    xnum.slen = 1;
	    xnum.isnull = RWL_ISNULL;
	    xnum.vsalloc = RWL_SVALLOC_CONST;
	  }
	  else
	  {
	    xnum.ival = resival;
	    xnum.dval = resdval;
	    xnum.vtype = iord;
	    if (iord==RWL_TYPE_DBL)
	      snprintf(xbuf, RWL_PFBUF, xev->rwm->dformat, resdval);
	    else
	      snprintf(xbuf, RWL_PFBUF, xev->rwm->iformat, resival);
	    xnum.sval = (text *)xbuf;
	    xnum.isnull = 0;
	    xnum.vsalloc = RWL_SVALLOC_FIX;
	    xnum.slen = RWL_PFBUF;
	  }
	  rwlcopyvalue(cstak+(i), &xnum);
	}
      pop_two:
        /* pop stack by two */
        for (j=i-1; j>1; j--)
	{
	  rwlcopyvalue(cstak+(j), cstak+(j-2));
	}
	break;
    
      /* the rest all follow the same pattern as ADD */
      case RWL_STACK_MUL:
        if (i<2) goto stack2short;
	if (tainted || skip) goto pop_two;
	if (bit(xev->tflags,RWL_THR_DEVAL))
	  rwldebugcode(xev->rwm, loc,  "at %d: " RWL_SB8PRINTF " * " RWL_SB8PRINTF "", i, cstak[i-2].ival, cstak[i-1].ival);
	resival = cstak[i-2].ival * cstak[i-1].ival;
	resdval = cstak[i-2].dval * cstak[i-1].dval;
	goto finish_two_math;
	break;
    
      case RWL_STACK_DIV:
        if (i<2) goto stack2short;
	if (tainted || skip) goto pop_two;
	if (bit(xev->tflags,RWL_THR_DEVAL))
	  rwldebugcode(xev->rwm, loc,  "at %d: " RWL_SB8PRINTF " / " RWL_SB8PRINTF "", i, cstak[i-2].ival, cstak[i-1].ival);
	/* if both integer and double are zero - report error */
	if (cstak[i-1].ival == 0 && cstak[i-1].dval == 0.0)
	{
	  resival = cstak[i-2].ival;
	  resdval = cstak[i-2].dval;
	  /* only report zero div if result isn't NULL */
	  if( !cstak[i-1].isnull && !cstak[i-2].isnull)
	    rwlexecerror(xev,loc, RWL_ERROR_ZERO_DIVIDE);
	  goto finish_two_math;
	}
	if (cstak[i-1].ival == 0)
	{
	  /* only integer is zero, do double and convert */
	  resdval = cstak[i-2].dval / cstak[i-1].dval;
	  resival = (sb8) round(resdval);
	}
	else
	{
	  /* both are non-zero */
	  resival = cstak[i-2].ival / cstak[i-1].ival;
	  resdval = cstak[i-2].dval / cstak[i-1].dval;
	}
	goto finish_two_math;
	break;
    
      case RWL_STACK_MOD:
        if (i<2) goto stack2short;
	if (tainted || skip) goto pop_two;
	if (bit(xev->tflags,RWL_THR_DEVAL))
	  rwldebugcode(xev->rwm, loc,  "at %d: " RWL_SB8PRINTF " %% " RWL_SB8PRINTF "", i, cstak[i-2].ival, cstak[i-1].ival);
	if (cstak[i-1].ival == 0)
	{
	  if( !cstak[i-1].isnull && !cstak[i-2].isnull)
	    rwlexecerror(xev,loc, RWL_ERROR_ZERO_DIVIDE);
	  resival = cstak[i-2].ival;
	  resdval = cstak[i-2].dval;
	  goto finish_two_math;
	}
	resival = cstak[i-2].ival % cstak[i-1].ival;
	/* not defined for double, so just save the integer result as a double */
	resdval = (double) resival;
	goto finish_two_math;
	break;
    
      case RWL_STACK_SUB:
        if (i<2) goto stack2short;
	if (tainted || skip) goto pop_two;
	if (bit(xev->tflags,RWL_THR_DEVAL))
	  rwldebugcode(xev->rwm, loc,  "at %d: " RWL_SB8PRINTF " - " RWL_SB8PRINTF "", i, cstak[i-2].ival, cstak[i-1].ival);
	resival = cstak[i-2].ival - cstak[i-1].ival;
	resdval = cstak[i-2].dval - cstak[i-1].dval;
	goto finish_two_math;
	break;
    
      /* these are the comparisons */
      case RWL_STACK_LESS:
        if (i<2) goto stack2short;
	if (tainted || skip) goto pop_two;
	if (bit(xev->tflags,RWL_THR_DEVAL))
	  rwldebugcode(xev->rwm, loc,  "at %d: " RWL_SB8PRINTF " < " RWL_SB8PRINTF " %.2f < %.2f", 
	    i, cstak[i-2].ival, cstak[i-1].ival
	    , cstak[i-2].dval, cstak[i-1].dval);
	/* do the comparison on the appropriate data type */
	if (   cstak[i-2].vtype == RWL_TYPE_STR 
	    && cstak[i-1].vtype == RWL_TYPE_STR
	    && cstak[i-2].vsalloc
	    && cstak[i-1].vsalloc )
	{ /* string compare */
	  if (rwlstrcmp(cstak[i-2].sval, cstak[i-1].sval)<0)
	    resival = 1;
	  else
	    resival = 0;
        }
	else
	{
	  if (iord==RWL_TYPE_INT)
	    resival = cstak[i-2].ival < cstak[i-1].ival;
	  else
	    resival = cstak[i-2].dval < cstak[i-1].dval;
	}
	resdval = (double) resival;
	goto finish_two_math;
	break;
    
      case RWL_STACK_GREATER:
        if (i<2) goto stack2short;
	if (tainted || skip) goto pop_two;
	if (bit(xev->tflags,RWL_THR_DEVAL))
	  rwldebugcode(xev->rwm, loc,  "at %d: " RWL_SB8PRINTF " > " RWL_SB8PRINTF " %.2f > %.2f", 
	    i, cstak[i-2].ival, cstak[i-1].ival
	    , cstak[i-2].dval, cstak[i-1].dval);
	if (   cstak[i-2].vtype == RWL_TYPE_STR 
	    && cstak[i-1].vtype == RWL_TYPE_STR
	    && cstak[i-2].vsalloc
	    && cstak[i-1].vsalloc )
	{ /* string compare */
	  if (rwlstrcmp(cstak[i-2].sval, cstak[i-1].sval)>0)
	    resival = 1;
	  else
	    resival = 0;
        }
	else
	{
	  if (iord==RWL_TYPE_INT)
	    resival = cstak[i-2].ival > cstak[i-1].ival;
	  else
	    resival = cstak[i-2].dval > cstak[i-1].dval;
	}
	resdval = (double) resival;
	goto finish_two_math;
	break;
    
      case RWL_STACK_LESSEQ:
        if (i<2) goto stack2short;
	if (tainted || skip) goto pop_two;
	if (bit(xev->tflags,RWL_THR_DEVAL))
	  rwldebugcode(xev->rwm, loc,  "at %d: " RWL_SB8PRINTF " <= " RWL_SB8PRINTF " %.2f <= %.2f", 
	    i, cstak[i-2].ival, cstak[i-1].ival
	    , cstak[i-2].dval, cstak[i-1].dval);
	if (   cstak[i-2].vtype == RWL_TYPE_STR 
	    && cstak[i-1].vtype == RWL_TYPE_STR
	    && cstak[i-2].vsalloc
	    && cstak[i-1].vsalloc )
	{ /* string compare */
	  if (rwlstrcmp(cstak[i-2].sval, cstak[i-1].sval)<=0)
	    resival = 1;
	  else
	    resival = 0;
        }
	else
	{
	  if (iord==RWL_TYPE_INT)
	    resival = cstak[i-2].ival <= cstak[i-1].ival;
	  else
	    resival = cstak[i-2].dval <= cstak[i-1].dval;
	}
	resdval = (double) resival;
	goto finish_two_math;
	break;
    
      case RWL_STACK_GREATEREQ:
        if (i<2) goto stack2short;
	if (tainted || skip) goto pop_two;
	if (bit(xev->tflags,RWL_THR_DEVAL))
	  rwldebugcode(xev->rwm, loc,  "at %d: " RWL_SB8PRINTF " >= " RWL_SB8PRINTF " %.2f >= %.2f", 
	    i, cstak[i-2].ival, cstak[i-1].ival
	    , cstak[i-2].dval, cstak[i-1].dval);
	if (   cstak[i-2].vtype == RWL_TYPE_STR 
	    && cstak[i-1].vtype == RWL_TYPE_STR
	    && cstak[i-2].vsalloc
	    && cstak[i-1].vsalloc )
	{ /* string compare */
	  if (rwlstrcmp(cstak[i-2].sval, cstak[i-1].sval)>=0)
	    resival = 1;
	  else
	    resival = 0;
        }
	else
	{
	  if (iord==RWL_TYPE_INT)
	    resival = cstak[i-2].ival >= cstak[i-1].ival;
	  else
	    resival = cstak[i-2].dval >= cstak[i-1].dval;
	}
	resdval = (double) resival;
	goto finish_two_math;
	break;
    
      case RWL_STACK_EQUAL:
        if (i<2) goto stack2short;
	if (tainted || skip) goto pop_two;
	if (bit(xev->tflags,RWL_THR_DEVAL))
	  rwldebugcode(xev->rwm, loc,  "at %d: " RWL_SB8PRINTF " == " RWL_SB8PRINTF " %.2f == %.2f", 
	    i, cstak[i-2].ival, cstak[i-1].ival
	    , cstak[i-2].dval, cstak[i-1].dval);
	if (   cstak[i-2].vtype == RWL_TYPE_STR 
	    && cstak[i-1].vtype == RWL_TYPE_STR
	    && cstak[i-2].vsalloc
	    && cstak[i-1].vsalloc )
	{ /* string compare */
	  if (0==rwlstrcmp(cstak[i-2].sval, cstak[i-1].sval))
	    resival = 1;
	  else
	    resival = 0;
        }
	else
	{
	  if (iord==RWL_TYPE_INT)
	    resival = cstak[i-2].ival == cstak[i-1].ival;
	  else
	    resival = cstak[i-2].dval == cstak[i-1].dval;
	}
	resdval = (double) resival;
	goto finish_two_math;
	break;
    
      case RWL_STACK_NOTEQUAL:
        if (i<2) goto stack2short;
	if (tainted || skip) goto pop_two;
	if (bit(xev->tflags,RWL_THR_DEVAL))
	  rwldebugcode(xev->rwm, loc,  "at %d: " RWL_SB8PRINTF " != " RWL_SB8PRINTF "", i, cstak[i-2].ival, cstak[i-1].ival);

	if (   cstak[i-2].vtype == RWL_TYPE_STR 
	    && cstak[i-1].vtype == RWL_TYPE_STR
	    && cstak[i-2].vsalloc
	    && cstak[i-1].vsalloc )
	{ /* string compare */
	  if (0!=rwlstrcmp(cstak[i-2].sval, cstak[i-1].sval))
	    resival = 1;
	  else
	    resival = 0;
        }
	else
	{
	  if (iord==RWL_TYPE_INT)
	    resival = cstak[i-2].ival != cstak[i-1].ival;
	  else
	    resival = cstak[i-2].dval != cstak[i-1].dval;
	}
	resdval = (double) resival;
	goto finish_two_math;
	break;

      /* Here comes the triadic operators */

      /* instrb3 */
      case RWL_STACK_INSTRB3:
	{
	  text *instrb = 0; 
	  if (i<3) goto stack3short;
	  if (tainted || skip) goto pop_three;
	  
	  if (cstak[i-1].ival < 0)
	  {
	    rwlexecerror(xev, loc, RWL_ERROR_INSTRB3_POS_NEG);
	    goto instrb3returnzero;
	  }

	  if (0==cstak[i-1].ival || (ub8)cstak[i-1].ival > rwlstrlen(cstak[i-3].sval))
	    goto instrb3returnzero;

	  instrb = rwlstrstr(cstak[i-3].sval + cstak[i-1].ival-1, cstak[i-2].sval);

	  if (instrb)
	  {
	    resival = instrb - cstak[i-3].sval + 1;
	    resdval = (double) resival;
	  }
	  else
	  {
	    instrb3returnzero:
	    resival = 0;
	    resdval = 0.0;
	  }
	  if (bit(xev->tflags,RWL_THR_DEVAL))
	    rwldebugcode(xev->rwm, loc,  "at %d: instrb(\"%s\", \"%s\", %d) = %d", i
	       , cstak[i-3].sval
	      , cstak[i-2].sval, cstak[i-1].ival, resival);

	  goto finish_three_math;
	}

	break;

      /* substr3 */
      case RWL_STACK_SUBSTRB3:
	{
	  text *substrb = 0; 
	  text smallbuf[1000]; /* used when result shorter than
	  			         * this size to avoid alloc/free */
	  ub8 reslen, stl, subl;
	  sb8 pos;
	  rwl_value xnum;
	  if (i<3) goto stack3short;
	  if (tainted || skip) goto pop_three;
	  if (bit(xev->tflags,RWL_THR_DEVAL))
	    rwldebugcode(xev->rwm, loc,  "at %d: %p, substrb(\"%s\", %d, %d)", i
	       , cstak[i-3].sval
	      , cstak[i-3].sval, cstak[i-2].ival, cstak[i-1].ival);
	  stl = rwlstrlen(cstak[i-3].sval);
	  // pos starts at 1 by SUBSTRB in Oracle
	  if (cstak[i-2].ival < 0) // start pos from end
	    pos = (sb8) stl + cstak[i-2].ival;
	  else if (cstak[i-2].ival > 0) // start pos from begin
	    pos = cstak[i-2].ival - 1;
	  else // start at begin
	    pos = 0;
	  if (cstak[i-1].ival<1)
	    subl = 0;
	  else 
	    subl = (ub8) cstak[i-1].ival;
	  if (pos < 0 
	      || pos >= (sb8) stl	// pos out of bound
	      || 0==subl		// subl out of bound
	      || cstak[i-2].isnull	// pos or subl null
	      || cstak[i-1].isnull ) 
	  {
	    xnum.ival = 0;
	    xnum.dval = 0;
	    xnum.sval = (text *) "";
	    xnum.vtype = iord;
	    xnum.slen = 1;
	    xnum.isnull = 0;
	    xnum.vsalloc = RWL_SVALLOC_CONST;
	    rwlcopyvalue(cstak+(i), &xnum);
	  }
	  else // there are actual bytes
	  {
	    if ( (stl-(ub8)pos) <= subl) // shorter than substring length
	      reslen = stl - (ub8)pos + 1; // space for NULL
	    else
	      reslen = subl + 1;
	    if (reslen<sizeof(smallbuf)-1)
	      substrb = smallbuf;
	    else
	      substrb = rwlalloccode(xev->rwm, reslen, loc);
	    rwlstrnncpy(substrb, cstak[i-3].sval + pos, subl+1);

	    /* try getting number representation */
	    resival = rwlatosb8(substrb);
	    resdval = rwlatof(substrb);
	    if (bit(xev->tflags,RWL_THR_DEVAL))
	      rwldebugcode(xev->rwm, loc,  "substrb returns %p %s " RWL_SB8PRINTF
		, substrb, substrb, resival);
	    xnum.ival = resival;
	    xnum.dval = resdval;
	    xnum.vtype = iord;
	    xnum.sval = substrb;
	    if (reslen<sizeof(smallbuf)-1)
	      xnum.vsalloc = RWL_SVALLOC_FIX;
	    else
	      xnum.vsalloc = RWL_SVALLOC_TEMP;
	    xnum.slen = reslen;
	    /* substrb never returns null */
	    xnum.isnull = 0;
	    rwlcopyvalue(cstak+(i), &xnum);
	    if (reslen>=sizeof(smallbuf)-1)
	      rwlfreecode(xev->rwm, substrb, loc);
	  }
	}
	goto pop_three;

	break;
      case RWL_STACK_CONDITIONAL:
	{
	  rwl_value xnum;
	  if (i<3) goto stack3short;
	  // if skipping and haven't reached my own end
	  if (tainted || (skip && skip != stk[i].skipend)) goto pop_three;
	  skip=0;
	  if (bit(xev->tflags,RWL_THR_DEVAL))
	    rwldebugcode(xev->rwm, loc,  "at %d: " RWL_SB8PRINTF "/%.2f ? " RWL_SB8PRINTF "/%.2f : " RWL_SB8PRINTF "/%.2f", i
		, cstak[i-3].ival, cstak[i-3].dval
		, cstak[i-2].ival, cstak[i-2].dval
		, cstak[i-1].ival, cstak[i-1].dval);

	  if( cstak[i-3].isnull)
	  {
	    xnum.ival = 0;
	    xnum.dval = 0;
	    xnum.sval = (text *)"";
	    xnum.vtype = iord;
	    xnum.slen = 1;
	    xnum.isnull = RWL_ISNULL;
	    xnum.vsalloc = RWL_SVALLOC_CONST;
	    rwlcopyvalue(cstak+(i), &xnum);
	  }
	  else
	  {
	  if (cstak[i-3].ival)
	    rwlcopyvalue(cstak+(i), cstak+(i-2));
	  else
	    rwlcopyvalue(cstak+(i), cstak+(i-1));
	  }
	  goto pop_three;
	}
        
    
      case RWL_STACK_BETWEEN:
        if (i<3) goto stack3short;
	if (tainted || skip) goto pop_three;
	if (bit(xev->tflags,RWL_THR_DEVAL))
	  rwldebugcode(xev->rwm, loc,  "at %d: " RWL_SB8PRINTF "/%.2f between " RWL_SB8PRINTF "/%.2f and " RWL_SB8PRINTF "/%.2f", i
	      , cstak[i-3].ival, cstak[i-3].dval
	      , cstak[i-2].ival, cstak[i-2].dval
	      , cstak[i-1].ival, cstak[i-1].dval);
	if (   cstak[i-2].vtype == RWL_TYPE_STR 
	    && cstak[i-1].vtype == RWL_TYPE_STR
	    && cstak[i-3].vtype == RWL_TYPE_STR
	    && cstak[i-3].vsalloc
	    && cstak[i-2].vsalloc
	    && cstak[i-1].vsalloc )
	{ /* string compare */
	  if (  rwlstrcmp(cstak[i-3].sval, cstak[i-2].sval)>=0
	     && rwlstrcmp(cstak[i-3].sval, cstak[i-1].sval)<=0)
	    resival = 1;
	  else
	    resival = 0;
        }
	else
	{ // number compare
	  if (iord==RWL_TYPE_INT)
	    resival = (cstak[i-3].ival >= cstak[i-2].ival) && (cstak[i-3].ival <= cstak[i-1].ival);
	  else
	    resival = (cstak[i-3].dval >= cstak[i-2].dval) && (cstak[i-3].dval <= cstak[i-1].dval);
	}
	resdval = (double) resival;
        finish_three_math:
	{
	  rwl_value xnum;
	  char xbuf[RWL_PFBUF];
	  if( cstak[i-1].isnull || cstak[i-2].isnull || cstak[i-3].isnull)
	  {
	    xnum.ival = 0;
	    xnum.dval = 0;
	    xnum.sval = (text *)"";
	    xnum.vtype = iord;
	    xnum.slen = 1;
	    xnum.isnull = RWL_ISNULL;
	    xnum.vsalloc = RWL_SVALLOC_CONST;
	  }
	  else
	  {
	    xnum.ival = resival;
	    xnum.dval = resdval;
	    xnum.vtype = iord;
	    if (iord==RWL_TYPE_DBL)
	      snprintf(xbuf, RWL_PFBUF, xev->rwm->dformat, resdval);
	    else
	      snprintf(xbuf, RWL_PFBUF, xev->rwm->iformat, resival);
	    xnum.sval = (text *)xbuf;
	    xnum.slen = RWL_PFBUF;
	    xnum.isnull = 0;
	    xnum.vsalloc = RWL_SVALLOC_FIX;
	  }
	  rwlcopyvalue(cstak+(i), &xnum);
	}
      pop_three:
        /* pop stack by three */
        for (j=i-1; j>2; j--)
	  rwlcopyvalue(cstak+(j), cstak+(j-3));
	break;
    
      /* these are the logicals */
      case RWL_STACK_OR:
        if (i<2) goto stack2short;
	// not yet reached my own end of skipping?
	if (tainted || (skip && (skip != stk[i].skipend))) goto pop_two;
	skip = 0;
	if (bit(xev->tflags,RWL_THR_DEVAL))
	  rwldebugcode(xev->rwm, loc,  "at %d: " RWL_SB8PRINTF " || " RWL_SB8PRINTF "", i, cstak[i-2].ival, cstak[i-1].ival);
	resival = (cstak[i-2].ival) || (cstak[i-1].ival);
	resdval = (double) resival;
	goto finish_two_math;
	break;
    
      case RWL_STACK_AND:
        if (i<2) goto stack2short;
	// not yet reached my own end of skipping?
	if (tainted || (skip && (skip != stk[i].skipend))) goto pop_two;
	skip = 0;
	if (bit(xev->tflags,RWL_THR_DEVAL))
	  rwldebugcode(xev->rwm, loc,  "at %d: " RWL_SB8PRINTF " && " RWL_SB8PRINTF "", i, cstak[i-2].ival, cstak[i-1].ival);
	resival = (cstak[i-2].ival) && (cstak[i-1].ival);
	resdval = (double) resival;
	goto finish_two_math;
	break;

      /* the monadic operators */
      case RWL_STACK_MINUS:
        if (i<1) goto stack1short;
	if (tainted || skip) goto pop_one;
	if (bit(xev->tflags,RWL_THR_DEVAL))
	  rwldebugcode(xev->rwm, loc,  "at " RWL_SB8PRINTF ": - " RWL_SB8PRINTF "", i, cstak[i-1].ival);
	resival = - cstak[i-1].ival ;
	resdval = - cstak[i-1].dval ;
      finish_one_math:
	{
	  rwl_value xnum;
	  char xbuf[RWL_PFBUF];
	  /* copy over NULL unless we just had isnull() */
	  if( stk[i].elemtype != RWL_STACK_ISNULL 
	      && stk[i].elemtype != RWL_STACK_ISNOTNULL
	      && cstak[i-1].isnull)
	  {
	    xnum.ival = 0;
	    xnum.dval = 0;
	    xnum.sval = (text *)"";
	    xnum.vtype = iord;
	    xnum.slen = 1;
	    xnum.isnull = RWL_ISNULL;
	    xnum.vsalloc = RWL_SVALLOC_CONST;
	  }
	  else
	  {
	    xnum.ival = resival;
	    xnum.dval = resdval;
	    xnum.vtype = iord;
	    if (iord==RWL_TYPE_DBL)
	      snprintf(xbuf, RWL_PFBUF, xev->rwm->dformat, resdval);
	    else
	      snprintf(xbuf, RWL_PFBUF, xev->rwm->iformat, resival);
	    xnum.sval = (text *)xbuf;
	    xnum.slen = RWL_PFBUF;
	    xnum.vsalloc = RWL_SVALLOC_FIX;
	    xnum.isnull = 0;
	  }
	  rwlcopyvalue(cstak+(i), &xnum);
	}

      pop_one:
        /* pop stack by one */
        for (j=i-1; j>0; j--)
	{
	  rwlcopyvalue(cstak+(j), cstak+(j-1));
	}
	break;

      case RWL_STACK_NOT:
        if (i<1) goto stack1short;
	if (tainted || skip) goto pop_one;
	if (bit(xev->tflags,RWL_THR_DEVAL))
	  rwldebugcode(xev->rwm, loc,  "at %d: ! " RWL_SB8PRINTF "", i, cstak[i-1].ival);
	resival = !cstak[i-1].ival;
	resdval = (double) resival;
        goto finish_one_math;
	break;

      /* and more function calls */
      case RWL_STACK_UNIFORM:
        if (i<2) goto stack2short;
	if (tainted || skip) goto pop_two;
	if (iord==RWL_TYPE_INT)
	{
	  /* random integer */
	  if (cstak[i-1].ival<cstak[i-2].ival)
	  {
	    rwlexecerror(xev,loc, RWL_ERROR_ILLEGAL_UNIFORM_RANGE);
	    resival = cstak[i-2].ival;
	  }
	  else
	    resival = cstak[i-2].ival + nrand48(xev->xsubi)%(cstak[i-1].ival-cstak[i-2].ival+1);
	  resdval = (double)resival;
	  if (bit(xev->tflags,RWL_THR_DEVAL))
	    rwldebugcode(xev->rwm, loc,  "at %d: uniform(" RWL_SB8PRINTF "," RWL_SB8PRINTF ")=" RWL_SB8PRINTF "", i, cstak[i-2].ival
	            , cstak[i-1].ival,resival);
	}
	else
	{
	  /* random double */
	  if (cstak[i-1].dval<cstak[i-2].dval)
	  {
	    rwlexecerror(xev,loc, RWL_ERROR_ILLEGAL_UNIFORM_RANGE);
	    resdval = cstak[i-2].dval;
	  }
	  else
	    resdval = cstak[i-2].dval + erand48(xev->xsubi)*(cstak[i-1].dval-cstak[i-2].dval);
	  resival = (sb8)round(resdval);
	  if (bit(xev->tflags,RWL_THR_DEVAL))
	    rwldebugcode(xev->rwm, loc,  "at %d: uniform(%.2f,%.2f)=%.2f", i, cstak[i-2].dval
	            , cstak[i-1].dval,resdval);
	}
	goto finish_two_math;
	break;
    
      case RWL_STACK_ISNOTNULL:
        if (i<1) goto stack1short;
	if (tainted || skip) goto pop_one;

	if (cstak[i-1].isnull)
	{
	  resdval = 0.0;
	  resival = 0;
	}
	else
	{
	  resdval = 1.0;
	  resival = 1;
	}
	if (bit(xev->tflags,RWL_THR_DEVAL))
	  rwldebugcode(xev->rwm, loc,  "at %d: isnotnull(%d) = " RWL_SB8PRINTF "", i, cstak[i-1].isnull, resival);
	goto finish_one_math;
	break;

      case RWL_STACK_ISNULL:
        if (i<1) goto stack1short;
	if (tainted || skip) goto pop_one;

	if (cstak[i-1].isnull)
	{
	  resdval = 1.0;
	  resival = 1;
	}
	else
	{
	  resdval = 0;
	  resival = 0;
	}
	if (bit(xev->tflags,RWL_THR_DEVAL))
	  rwldebugcode(xev->rwm, loc,  "at %d: isnull(%d) = " RWL_SB8PRINTF "", i, cstak[i-1].isnull, resival);
	goto finish_one_math;
	break;

      case RWL_STACK_GETENV:
	{
	  text *gev, *envres = 0; 
	  text smallbuf[1000]; /* used when result shorter than
	  			         * this size to avoid alloc/free */
	  ub8 reslen;
	  rwl_value xnum;
	  smallbuf[0]=0;
	  if (i<1) goto stack1short;
	  if (tainted || skip) goto pop_one;
	  if (bit(xev->tflags,RWL_THR_DEVAL))
	    rwldebugcode(xev->rwm, loc,  "at %d: %p, getenv(\"%s\")", i
	       , cstak[i-1].sval
	      , cstak[i-1].sval);
	  envres = rwlgetenv(cstak[i-1].sval);
	  if (!envres)
	  {
	    // getenv() just ignores that it doesn't exist
	    //rwlexecerror(xev,loc, RWL_ERROR_ENV_NOT_FOUND, cstak[i-1].sval);
	    envres=(text *)"";
	  }
	  reslen = rwlstrlen(envres)+1; 
	
	  if (reslen<sizeof(smallbuf)-1)
	    gev = smallbuf;
	  else
	    gev = rwlalloccode(xev->rwm, reslen, loc);
	  rwlstrcpy(gev, envres);

	  /* try getting number representation */
	  resival = rwlatosb8(gev);
	  resdval = rwlatof(gev);
	  if (bit(xev->tflags,RWL_THR_DEVAL))
	    rwldebugcode(xev->rwm, loc,  "getenv returns %p %s " RWL_SB8PRINTF
	      , gev, gev, reslen);
	  xnum.ival = resival;
	  xnum.dval = resdval;
	  xnum.vtype = iord;
	  xnum.sval = gev;
	  if (reslen<sizeof(smallbuf)-1)
	    xnum.vsalloc = RWL_SVALLOC_FIX;
	  else
	    xnum.vsalloc = RWL_SVALLOC_TEMP;
	  xnum.slen = reslen;
	  /* getenv never returns null */
	  xnum.isnull = 0;
	  rwlcopyvalue(cstak+(i), &xnum);
	  if (reslen>=sizeof(smallbuf)-1)
	    rwlfreecode(xev->rwm, gev, loc);
	}

	goto pop_one;
	break;

      case RWL_STACK_LENGTHB:
        if (i<1) goto stack1short;
	if (tainted || skip) goto pop_one;

	resival = (sb8) rwlstrlen(cstak[i-1].sval);
	resdval = (double) resival;
	if (bit(xev->tflags,RWL_THR_DEVAL))
	  rwldebugcode(xev->rwm, loc,  "at %d: lengthb(%s) = %d", i, cstak[i-1].sval, resival);
	goto finish_one_math;
	break;

      case RWL_STACK_SYSTEM2STR:
	{
	  int sysres;
	  ub8 bytes;
	  FILE *sysout;
	  if (i<1) goto stack1short;
	  if (tainted || skip) goto pop_one;

	  // get the string where we want to store stdout
	  vv = &xev->evar[stk[i].esvar];
	  nn = rwlnuminvar(xev, vv);
	  fflush(stdout); // to avoid mixing up buffers
	  sysout = popen((char *)cstak[i-1].sval, "r");
	  if (!sysout)
	  {
	    rwlexecerror(xev, loc, RWL_ERROR_GENERIC_OS, "popen", "<unknown>");
	    resdval = 0.0;
	    resival = 0;
	    rwlstrcpy(nn->sval,"");
	  }
	  else
	  {
	    // attempt reading as many bytes as the string holds
	    bytes = fread(nn->sval, 1, nn->slen-1, sysout);
	    if (ferror(sysout))
	    {
	      rwlexecerror(xev, loc, RWL_ERROR_GENERIC_OS, "fread", "<unknown>");
	    }
	    if (!feof(sysout))
	    {
	      // If we havn't reached eof, there are unread bytes
	      rwlexecerror(xev, loc, RWL_ERROR_SYSTEM_RES_LARGE, vv->vname, nn->slen-1);
	    }
	    nn->sval[bytes] = 0;
	    // remove last newline
	    if (bytes>=1 && '\n' == nn->sval[bytes-1])
	      nn->sval[bytes-1] = 0;

	    sysres = pclose(sysout);
	    if (bit(xev->tflags,RWL_THR_DEVAL))
	      rwldebugcode(xev->rwm, loc,  "at %d: system(%s) = %d: %s", i, cstak[i-1].sval, sysres, nn->sval);
	    if (-1 == sysres)
	    {
	      rwlexecerror(xev, loc, RWL_ERROR_GENERIC_OS, "system", "<unknown>");
	      resival = sysres;
	    }
	    else
	      resival = RWL_WEXITSTATUS(sysres);
	    resdval = (double)resival;
	  }
	  goto finish_one_math;
	}

	break;
      case RWL_STACK_SYSTEM:
	{
	  if (i<1) goto stack1short;
	  if (tainted || skip) goto pop_one;

#if RWL_OS == RWL_LINUX
	  {
	    int sysres = system((char *)cstak[i-1].sval);
	    if (bit(xev->tflags,RWL_THR_DEVAL))
	      rwldebugcode(xev->rwm, loc,  "at %d: system(%s) = %d", i, cstak[i-1].sval, sysres);
	    if (-1 == sysres)
	    {
	      rwlexecerror(xev, loc, RWL_ERROR_GENERIC_OS, "system", "<unknown>");
	      resival = sysres;
	    }
	    else
	      resival = RWL_WEXITSTATUS(sysres);
	  }
#else
# if RWL_OS == RWL_SOLARIS
	  // system is not thread safe on solaris
	  {
	    FILE *s;
	    if ((s = popen((char *)cstak[i-1].sval,"w")))
	    {
	      resival = pclose(s);
	      if (-1 == resival)
	      {
		rwlexecerror(xev, loc, RWL_ERROR_GENERIC_OS, "system", "<unknown>");
	      }
	    }
	    else
	    {
	      rwlexecerror(xev, loc, RWL_ERROR_GENERIC_OS, "system", "<unknown>");
	      resival = -1;
	    }
	    if (bit(xev->tflags,RWL_THR_DEVAL))
	      rwldebugcode(xev->rwm, loc,  "at %d: system(%s) = %d", i, cstak[i-1].sval, resival);
	  }
# else
#  error "missing entries in rwlport.h"
# endif
#endif

	  resdval = (double)resival;
	  goto finish_one_math;
	}
	break;

      case RWL_STACK_ACCESS:
	{
	  int mode;
	  ub4 bits;
	  text *cs2envexp;
#	  define RWL_MB_F 0x1
#	  define RWL_MB_D 0x2
#	  define RWL_MB_W 0x4
	  struct stat sbuf;
	  ub8 mlen;
	  
	  if (i<2) goto stack2short;
	  if (tainted || skip) goto pop_two;
	  mode = 0;
	  bits = 0;
	  mlen = rwlstrlen(cstak[i-1].sval);
	  if (mlen<=5) while (mlen)
	  {
	    mlen--;
	    switch (cstak[i-1].sval[mlen])
	    {
	      case 'r': case 'R': mode |= R_OK; break;
	      case 'w': case 'W': mode |= W_OK; break;
	      case 'x': case 'X': mode |= X_OK; break;
	      case 'f': case 'F': bits |= RWL_MB_F; break;
	      case 'd': case 'D': bits |= RWL_MB_D; break;
	      default:            bits |= RWL_MB_W; break;
	    }
	  }
	  resival = 0;
	  // we are not doing recursive calls or otherwise
	  // overwriting the static buffer for the expanded 
	  // string, so no need to rwlstrdup and rwlfree
	  cs2envexp = rwlenvexp(xev, loc, cstak[i-2].sval); 
	  if (bit(xev->tflags,RWL_THR_DEVAL))
	    rwldebugcode(xev->rwm, loc,  "at %d: access(\"%s\", \"%s\", %s) 0x%x 0x%x", i
	      , cstak[i-2].sval, cs2envexp, cstak[i-1].sval, mode, bits);
	  if (bit(bits,RWL_MB_W) // wrong character see
	      || (!mode && !bits) // neither mode nor bits
	      || (bit(bits,RWL_MB_F) && bit(bits,RWL_MB_D)) // both f and d
	     )
	  {
	    rwlexecerror(xev, loc, RWL_ERROR_ACCESS_WRONG2, cstak[i-1].sval);
	  }
	  else
	  { 
	    // note that this code depnds on F_OK == 0, see access(2)
#	    if (F_OK != 0)
#	      error "You need to do something about this"
#           endif
	    ub4 accessok = (0== access((char *)cs2envexp, mode ));
	    if (bits)
	    {
	      stat((char *)cs2envexp, &sbuf);
	      if (bit(bits,RWL_MB_F)) resival = accessok && S_ISREG(sbuf.st_mode);
	      if (bit(bits,RWL_MB_D)) resival = accessok && S_ISDIR(sbuf.st_mode);
	    }
	    else resival = accessok;
	  }
	  resdval = (double)resival;
	  goto finish_two_math;
	}
	break;


      case RWL_STACK_LOG:
        if (i<1) goto stack1short;
	if (tainted || skip) goto pop_one;

	resdval = log(cstak[i-1].dval);
	resival = (sb8)round(resdval);
	if (bit(xev->tflags,RWL_THR_DEVAL))
	  rwldebugcode(xev->rwm, loc,  "at %d: log(%.2f) = %.2f", i, cstak[i-1].dval, resdval);
	goto finish_one_math;
	break;

      case RWL_STACK_EXP:
        if (i<1) goto stack1short;
	if (tainted || skip) goto pop_one;

	resdval = exp(cstak[i-1].dval);
	resival = (sb8)round(resdval);
	if (bit(xev->tflags,RWL_THR_DEVAL))
	  rwldebugcode(xev->rwm, loc,  "at %d: exp(%.2f) = %.2f", i, cstak[i-1].dval, resdval);
	goto finish_one_math;
	break;

      case RWL_STACK_EXPB:
        if (i<2) goto stack2short;
	if (tainted || skip) goto pop_two;
	resdval = pow(cstak[i-2].dval,cstak[i-1].dval);
	resival = (sb8)round(resdval);
	if (bit(xev->tflags,RWL_THR_DEVAL))
	  rwldebugcode(xev->rwm, loc,  "at %d: exp(%.2f,%.2f)=%.2f", i, cstak[i-2].dval
		  , cstak[i-1].dval,resdval);
	goto finish_two_math;
	break;
    
      case RWL_STACK_LOGB:
        if (i<2) goto stack2short;
	if (tainted || skip) goto pop_two;
	resdval = log(cstak[i-1].dval)/log(cstak[i-2].dval);
	resival = (sb8)round(resdval);
	if (bit(xev->tflags,RWL_THR_DEVAL))
	  rwldebugcode(xev->rwm, loc,  "at %d: log(%.2f,%.2f)=%.2f", i, cstak[i-2].dval
		  , cstak[i-1].dval,resdval);
	goto finish_two_math;
	break;
    
      case RWL_STACK_ROUND:
        if (i<1) goto stack1short;
	if (tainted || skip) goto pop_one;

	resdval = round(cstak[i-1].dval);
	resival = (sb8)round(resdval);
	if (bit(xev->tflags,RWL_THR_DEVAL))
	  rwldebugcode(xev->rwm, loc,  "at %d: round(%.2f) = %.2f", i, cstak[i-1].dval, resdval);
	goto finish_one_math;
	break;

      case RWL_STACK_SQRT:
        if (i<1) goto stack1short;
	if (tainted || skip) goto pop_one;

	resdval = sqrt(cstak[i-1].dval);
	resival = (sb8)round(resdval);
	if (bit(xev->tflags,RWL_THR_DEVAL))
	  rwldebugcode(xev->rwm, loc,  "at %d: sqrt(%.2f) = %.2f", i, cstak[i-1].dval, resdval);
	goto finish_one_math;
	break;

      case RWL_STACK_ERLANG:
	/*
	  Assuming ran is uniform random number generator
	  the interval ]0;1]
	  -ln(ran) will approximately be a random
	  shape 1 erlang distributed number with avarage 1.
	  see http://en.wikipedia.org/wiki/Erlang_distribution

	  Note that erand48() returns a number in the interval [0;1[
	  so 1-erand48() is in the interval needed
	*/
        if (i<1) goto stack1short;
	if (tainted || skip) goto pop_one;

	resdval = cstak[i-1].dval * (-log(1.0-erand48(xev->xsubi)));
	resival = (sb8)round(resdval);
	if (bit(xev->tflags,RWL_THR_DEVAL))
	  rwldebugcode(xev->rwm, loc,  "at %d: erlang(%.2f) = %.2f", i, cstak[i-1].dval, resdval);
	goto finish_one_math;
	break;

      case RWL_STACK_ERLANG2:
        if (i<1) goto stack1short;
	if (tainted || skip) goto pop_one;

	resdval = cstak[i-1].dval * 0.5 * (-log( (1.0-erand48(xev->xsubi)) * (1.0-erand48(xev->xsubi)) ));
	resival = (sb8)round(resdval);
	if (bit(xev->tflags,RWL_THR_DEVAL))
	  rwldebugcode(xev->rwm, loc,  "at %d: erlang2(%.2f) = %.2f", i, cstak[i-1].dval, resdval);
	goto finish_one_math;
	break;

      case RWL_STACK_NOV:
      break;
    
      default:
	rwlexecsevere(xev, loc, "[rwlexpreval-stack0:%d;%d]", i, stk[i].elemtype);
      break;
    }

    /* This is how skipping over short-circuit works:
     *
     * When pushing the stack, when pushing the first/left operator we set the
     * branchtype to the appropriate type and set skipnxt to a number that is effectively
     * the nesting level of short circuit operations. After having pushed the rigth/second
     * operator, the evaluation (say AND) then also includes that same nesting level.
     * The code below can thefore set the value of skip to the nesting level
     * if we want to skip over the second part (right operand for and/or, middle for ?:)
     * For ?: we prepare to flip skip before the third operand.
     *
     * During evaluation of anything, we can just verify if skip is set, which will
     * imply we skip the evaluation and go directly to the appropariate pop
     *
     * During evaluation of and/or/?: we see if we have reached our own evaluation
     * by comparing skip to my own original nesting level (from parse), and if done
     * the evaluation is completed.
     */
    switch (stk[i].branchtype)
    {
      case RWL_EXP_CONDBRANCH1:
	// if not already skipping and condition false, skip until ':'
        if (!skip && !cstak[i].ival)
	  skip = stk[i].skipnxt;
      break;

      case RWL_EXP_CONDBRANCH2:
	// if skipping and found my own end, stop
        if (skip && skip==stk[i].skipnxt)
	  skip = 0;
	else if (!skip) // else if not skipping, skip until evaluation
	  skip = stk[i].skipnxt;
	break;

      case RWL_EXP_ORBRANCH:
	// if first part true, start skipping
	if (!skip && cstak[i].ival)
	  skip = stk[i].skipnxt;
      break;

      case RWL_EXP_ANDBRANCH:
	// skip with end if first part false
	if (!skip && !cstak[i].ival)
	  skip = stk[i].skipnxt;
      break;
    }
  }
  
  rwlexecsevere(xev, loc, "[rwlexpreval-noend:%d;%d]", i, stk[i].elemtype);
  goto finish_normal;

  stackNshort:
    rwlexecsevere(xev, loc, "[rwlexpreval-stackN:%d;%d]", i, stk[i].elemtype);
    goto finish_normal;
  stack3short:
    rwlexecsevere(xev, loc, "[rwlexpreval-stack3:%d;%d]", i, stk[i].elemtype);
    goto finish_normal;
  stack2short:
    rwlexecsevere(xev, loc, "[rwlexpreval-stack2:%d;%d]", i, stk[i].elemtype);
    goto finish_normal;
  stack1short:
    rwlexecsevere(xev, loc, "[rwlexpreval-stack1:%d;%d]", i, stk[i].elemtype);

  finish_normal: 
  /* clean up allocations */
  for (i=0; i<explen; i++)
  {
    if (cstak[i].vsalloc == RWL_SVALLOC_TEMP)
    {
      rwlfreecode(xev->rwm, cstak[i].sval, loc);
      cstak[i].vsalloc = RWL_SVALLOC_NOT;
    }
  }
  rwlfreecode(xev->rwm, cstak, loc);
  return;
}

/*
 * Shift $ variables and reduce $# by one
 */
void rwlshiftdollar(rwl_xeqenv *xev, rwl_location *loc)
{
  sb4 vdst, vsrc;
  sb4 ac, i, l;
  text dollar[20];

  // find variable and check it is positive
  if (0>rwlfindvarug(xev, RWL_DOLLARCOUNT_VAR, &xev->argcvar))
  {
    rwlsevere(xev->rwm, "[rwlshiftdollar-argcvar:%d]", xev->argcvar);
    return;
  }
  l = xev->argcvar;
  ac = (sb4) xev->evar[l].num.ival;
  if (ac<=0)
  {
    rwlexecerror(xev, loc, RWL_ERROR_SHIFT_EMPTY);
    return;
  }

  // subtract one
  xev->evar[l].num.ival --;
  xev->evar[l].num.dval = (double) xev->evar[l].num.ival;
  if (RWL_SVALLOC_NOT != xev->evar[l].num.vsalloc)
    snprintf((char *)xev->evar[l].num.sval, xev->evar[l].num.slen
      , xev->rwm->iformat, xev->evar[l].num.ival);

  if (1==ac) // no more shift
    return;
  
  if (0>rwlfindvarug(xev, (text *)"$1", &xev->arg1var))
  {
    rwlsevere(xev->rwm, "[rwlshiftdollar-arg1var:%d]", xev->argcvar);
    return;
  }
  vdst = xev->arg1var;

  for (i=2; i<=ac; i++)
  { // actually shift
    snprintf((char *)dollar,sizeof(dollar)-1, "$%d", i);
    vsrc = vdst+1;
    if (0>rwlfindvarug(xev, dollar, &vsrc))
    {
      rwlsevere(xev->rwm, "[rwlshiftdollar-vdst:%d]", xev->argcvar);
      return;
    }
    rwlcopyvalue(&xev->evar[vdst].num, &xev->evar[vsrc].num);

    vdst = vsrc;

  }

}
    
rwlcomp(rwlexpreval_c, RWL_GCCFLAGS)
