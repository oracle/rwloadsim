/*
 * RWP*Load Simulator
 *
 * Copyright (c) 2021 Oracle Corporation
 * Licensed under the Universal Permissive License v 1.0
 * as shown at https://oss.oracle.com/licenses/upl/
 *
 * Real World performance Load simulator expressions
 * compilations
 *
 * rwlexprcomp.c
 *
 * The expression engine is a pure RPN machine.  All operands are
 * pushed before the operator and everything is executed; short-circuit
 * operations (e.g. and, or) are dealt with by skipping over elements
 * in the stack.
 *
 * This file contains the compilation of expression.
 *
 * History
 *
 * bengsig  04-may-2021 - Add system as a statement
 * bengsig  21-jun-2021 - Improve error messaging on file
 * bengsig  08-apr-2021 - Add constants rwl_zero, etc
 * bengsig  08-apr-2021 - vname is const text *
 * bengsig  18-mar-2021 - Improve error message for assign to wrong type
 * bengsig  21-jan-2021 - connection pool
 * bengsig  04-nov-2020 - Harden code with skipdep check
 * bengsig  04-nov-2020 - Allow string length to be immediate_expression
 * bengsig  05-oct-2020 - Warn about compare/uniform/double assign integer
 * bengsig  02-sep-2020 - Use enum rwl_type, rwl_stack_t
 * bengsig  31-aug-2020 - Remove some meaningless #ifdef NEVER
 * bengsig  16-jun-2020 - Add serverrelease
 * bengsig  06-mar-2020 - active/open session count
 * bengsig  07-nov-2019 - access function
 * bengsig  30-oct-2019 - Add system() with return to string
 * bengsig  16-aug-2019 - Add RWL_P2_SOMEEXPFAIL when immed expr fails
 * bengsig  30-jul-2019 - Added sql_id
 * bengsig  24-mar-2019 - Added erlangk function
 * bengsig  07-may-2019 - add lengthb optimization
 * bengsig  02-apr-2019 - rwlexprdestroy should free sval when needed
 * bengsig         2017 - Creation
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <errno.h>
#include "rwl.h"

// null, blank, zero, one as values
const rwl_value rwl_null = 
{
  0.0 		// dval
, 0   		// ival
, 0   		// vptr
, 0   		// v2prt
, (text*) ""	// sval
, 1   		// slen (sizeof(""))
, RWL_SVALLOC_CONST
, 0   		// valflags
, RWL_TYPE_INT  // vtype
, RWL_ISNULL    // isnull
, 0   		// alen
};

const rwl_value rwl_blank = 
{
  0.0 		// dval
, 0   		// ival
, 0   		// vptr
, 0   		// v2prt
, (text*) ""	// sval
, 1   		// slen (sizeof(""))
, RWL_SVALLOC_CONST
, 0   		// valflags
, RWL_TYPE_STR  // vtype
, 0    		// isnull
, 0   		// alen
};

const rwl_value rwl_zero = 
{
  0.0 		// dval
, 0   		// ival
, 0   		// vptr
, 0   		// v2prt
, (text*) "0"	// sval
, 2   		// slen (sizeof("0"))
, RWL_SVALLOC_CONST
, 0   		// valflags
, RWL_TYPE_INT  // vtype
, 0		// isnull
, 0   		// alen
};

const rwl_value rwl_one = 
{
  1.0 		// dval
, 1   		// ival
, 0   		// vptr
, 0   		// v2prt
, (text*) "1"	// sval
, 2   		// slen (sizeof("1"))
, RWL_SVALLOC_CONST
, 0   		// valflags
, RWL_TYPE_INT  // vtype
, 0		// isnull
, 0   		// alen
};

/* parse time: start expression stack */
void rwlexprbeg(rwl_main *rwm)
{
  /* Called whenever the parser expects to see an expression 
   * 
  */

  /* assert we are not already building an expression */
  if (rwm->phead || rwm->ptail)
    rwlsevere(rwm,"[rwlexprbeg-already:0x%x;0x%x]", rwm->phead, rwm->ptail);

  /*ASSERT function recursion level is 0 */
  if (0 != rwm->furlev)
    rwlsevere(rwm,"[rwlexprbegrecurse:%d]", rwm->furlev);

  /*ASSERT skipdep is 0 */
  if (0 != rwm->skipdep)
    rwlsevere(rwm,"[rwlexprbegskipdep:%d]", rwm->skipdep);
}

/* parse time: put something onto the stack */
void rwlexprpush2(rwl_main *rwm, const void *elem, rwl_stack_t etype, ub4 arg2)
{
  rwl_pstack *e;
  sb4 varloc = RWL_VAR_NOGUESS;
  text *tmpt;

  /* if we push an identifer, pre-check its type */
  switch(etype)
  {
    case RWL_STACK_PROCCALL:
      varloc = rwlfindvar(rwm->mxq, elem, RWL_VAR_NOGUESS);
      if (RWL_VAR_NOTFOUND == varloc)
      {
	etype = RWL_STACK_NOV; /* variable not found */
      }
      else
      {
	switch (rwm->mxq->evar[varloc].vtype)
	{
	  case RWL_TYPE_PROC:
	  case RWL_TYPE_RAPROC:
	  break;

	  default:
	    /* only procedures can be called as procedure */
	    rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2
	      , rwm->mxq->evar[varloc].stype
	      , rwm->mxq->evar[varloc].vname
	      , "procedure call");
	    etype = RWL_STACK_NOV;
	  break;
	}
      }
      break;

    case RWL_STACK_FUNCCALL:
      varloc = rwlfindvar(rwm->mxq, elem, RWL_VAR_NOGUESS);
      if (RWL_VAR_NOTFOUND == varloc)
      {
	etype = RWL_STACK_NOV; /* variable not found */
      }
      else
      {
        if (RWL_TYPE_FUNC != rwm->mxq->evar[varloc].vtype)
	{
	  /* only functions can be called as function */
	  rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2
	    , rwm->mxq->evar[varloc].stype
	    , rwm->mxq->evar[varloc].vname
	    , "function call");
	  etype = RWL_STACK_NOV;
	}
      }
      break;
      
    case RWL_STACK_VAR:
    case RWL_STACK_ASN:
    case RWL_STACK_ASNPLUS:
    case RWL_STACK_APP:
    case RWL_STACK_ASNINT:
   
      varloc = rwlfindvar2(rwm->mxq, elem, RWL_VAR_NOGUESS, rwm->codename);
      /* Even with erros we continue to not mess up the stack
       * but set etype to RWL_STACK_NOV which is "noop variable" 
       * on the stack 
       */

      if (RWL_VAR_NOTFOUND == varloc)
      {
	etype = RWL_STACK_NOV; /* variable not found */
      }
      else
      {
	/* this code is necessary as there is only one sset of identifiers
	 * which e.g. includes procedures and SQL.  However, such identifiers
	 * cannot be part of an expression, so check this
	 */
	switch (rwm->mxq->evar[varloc].vtype) /* of right type */
	{
	  case RWL_TYPE_INT:
	  case RWL_TYPE_DBL:
	    if (RWL_STACK_APP == etype && !bit(rwm->mxq->evar[varloc].flags,RWL_IDENT_INTERNAL))
	    {
	      /* cannot append to integer or double */
	      rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2
		, rwm->mxq->evar[varloc].stype
		, rwm->mxq->evar[varloc].vname
		, RWL_STACK_ASSIGN_TEXT(etype));
	      etype = RWL_STACK_NOV;
	    }
	    if ((RWL_STACK_ASN == etype || RWL_STACK_ASNPLUS == etype)
	        && bit(rwm->mxq->evar[varloc].flags,RWL_IDENT_INTERNAL))
	    {
	      /* cannot assign to internally created variables */
	      rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2, "predefined variable"
	      , rwm->mxq->evar[varloc].vname, RWL_STACK_ASSIGN_TEXT(etype));
	      etype = RWL_STACK_NOV;
	    }
	  break;
	    
	  case RWL_TYPE_STR:
	    if (RWL_STACK_ASNPLUS == etype && !bit(rwm->mxq->evar[varloc].flags,RWL_IDENT_INTERNAL))
	    {
	      /* cannot += to string */
	      rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2
		, rwm->mxq->evar[varloc].stype
		, rwm->mxq->evar[varloc].vname
		, RWL_STACK_ASSIGN_TEXT(etype));
	      etype = RWL_STACK_NOV;
	    }
	    if (RWL_STACK_ASN == etype && bit(rwm->mxq->evar[varloc].flags,RWL_IDENT_INTERNAL))
	    {
	      /* cannot assign to internally created variables */
	      rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2, "predefined variable"
	      , rwm->mxq->evar[varloc].vname, RWL_STACK_ASSIGN_TEXT(etype));
	      etype = RWL_STACK_NOV;
	    }
	  break;

	  case RWL_TYPE_NONE:
	    rwlsevere(rwm,"[rwlexprpush-1:%s;%d]", rwm->mxq->evar[varloc].vname, varloc);
	    etype = RWL_STACK_NOV;
	  break;

	  case RWL_TYPE_CANCELLED:
	    rwlerror(rwm,RWL_ERROR_RAST_WAS_CANCELLED, rwm->mxq->evar[varloc].vname);
	    etype = RWL_STACK_NOV;
	  break;

	  case RWL_TYPE_FILE: /* can only assign to file (which means open) */
	    if (RWL_STACK_ASN==etype)
	    {
	      if (bit(rwm->mxq->evar[varloc].flags,RWL_IDENT_INTERNAL))
	      {
		/* cannot assign to internally created variables */
		rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2, "predefined variable"
		, rwm->mxq->evar[varloc].vname, RWL_STACK_ASSIGN_TEXT(etype));
		etype = RWL_STACK_NOV;
	      }
	      break;
	    }
	    else
	      goto cannotuseexpression;

	  case RWL_TYPE_FUNC: /* cannot assign to function or use function as variable */
	    if (RWL_STACK_IS_ASSIGN(etype))
	    {
	      rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2, rwm->mxq->evar[varloc].stype
		, rwm->mxq->evar[varloc].vname, RWL_STACK_ASSIGN_TEXT(etype));
	      etype = RWL_STACK_NOV;
	    }
	    if (RWL_STACK_VAR==etype) 
	    {
	      rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2, rwm->mxq->evar[varloc].stype
		, rwm->mxq->evar[varloc].vname, "variable");
	      etype = RWL_STACK_NOV;
	    }
	    break;
	  case RWL_TYPE_RAST: /* cannot assign to random string array */
	    if (RWL_STACK_IS_ASSIGN(etype))
	    {
	      rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2, rwm->mxq->evar[varloc].stype
		, rwm->mxq->evar[varloc].vname, RWL_STACK_ASSIGN_TEXT(etype));
	      etype = RWL_STACK_NOV;
	    }
	    break;
	  case RWL_TYPE_PROC:
	  case RWL_TYPE_SQL:
	  case RWL_TYPE_CLOB:
	  case RWL_TYPE_NCLOB:
	  case RWL_TYPE_BLOB:
	  case RWL_TYPE_DB:
	  cannotuseexpression:
	    /* and cannot use code or SQL in expressions */
	    rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2, rwm->mxq->evar[varloc].stype
	      , rwm->mxq->evar[varloc].vname, 
	        RWL_STACK_IS_ASSIGN(etype) ? RWL_STACK_ASSIGN_TEXT(etype) : "expression");
	    etype = RWL_STACK_NOV;
	  break;

	  default:  // prevent compiler warning
	    rwlsevere(rwm,"[rwlexprpush2badtype:%d;%s;%s]", rwm->mxq->evar[varloc].vtype
	      , rwm->mxq->evar[varloc].stype, rwm->mxq->evar[varloc].vname);
	    etype = RWL_STACK_NOV;
	  break; 
	}
      }
    break;

    case RWL_STACK_SYSTEM2STR:
   
      varloc = rwlfindvar2(rwm->mxq, elem, RWL_VAR_NOGUESS, rwm->codename);

      if (RWL_VAR_NOTFOUND == varloc)
      {
	etype = RWL_STACK_NOV; /* variable not found */
      }
      else
      {
	if (RWL_TYPE_STR != rwm->mxq->evar[varloc].vtype) // check it is a string
	{
	      rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2
		, rwm->mxq->evar[varloc].stype
		, rwm->mxq->evar[varloc].vname
		, "second argument to system");
	      etype = RWL_STACK_NOV;
	}
      }
    break;

    case RWL_STACK_SQL_ID:
   
      varloc = rwlfindvar2(rwm->mxq, elem, RWL_VAR_NOGUESS, rwm->codename);

      if (RWL_VAR_NOTFOUND == varloc)
      {
	etype = RWL_STACK_NOV; /* variable not found */
      }
      else
      {
	if (RWL_TYPE_SQL != rwm->mxq->evar[varloc].vtype) // check it is a sql
	{
	      rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2
		, rwm->mxq->evar[varloc].stype
		, rwm->mxq->evar[varloc].vname
		, "sql_id");
	      etype = RWL_STACK_NOV;
	}
      }
    break;

    case RWL_STACK_OPENSESSIONCOUNT:
      tmpt = (text *) "opensessioncount"; 
      goto handledbfunction;
    case RWL_STACK_ACTIVESESSIONCOUNT:
      tmpt = (text *) "activesessioncount"; 
      handledbfunction:
   
      varloc = rwlfindvar2(rwm->mxq, elem, RWL_VAR_NOGUESS, rwm->codename);

      if (RWL_VAR_NOTFOUND == varloc)
      {
	etype = RWL_STACK_NOV; /* variable not found */
      }
      else
      {
	rwl_cinfo *thisdb = rwm->mxq->evar[varloc].vdata;
	if (RWL_TYPE_DB != rwm->mxq->evar[varloc].vtype // not a database
		|| !thisdb // or 
		|| (RWL_DBPOOL_SESSION != thisdb->pooltype &&
		    RWL_DBPOOL_CONNECT != thisdb->pooltype )
		// not a pool
	    ) 
	{
	      rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2
		, rwm->mxq->evar[varloc].stype
		, rwm->mxq->evar[varloc].vname
		, tmpt);
	      etype = RWL_STACK_NOV;
	}
      }
    break;

    case RWL_STACK_SERVERRELEASE:
      tmpt = (text *) "serverrelease"; 
   
      varloc = rwlfindvar2(rwm->mxq, elem, RWL_VAR_NOGUESS, rwm->codename);

      if (RWL_VAR_NOTFOUND == varloc)
      {
	etype = RWL_STACK_NOV; /* variable not found */
      }
      else
      {
	rwl_cinfo *thisdb = rwm->mxq->evar[varloc].vdata;
	if (RWL_TYPE_DB != rwm->mxq->evar[varloc].vtype // not a database
		|| !thisdb 
	    ) 
	{
	      rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2
		, rwm->mxq->evar[varloc].stype
		, rwm->mxq->evar[varloc].vname
		, tmpt);
	      etype = RWL_STACK_NOV;
	}
      }
    break;

    default:
    break;
  }

  /* optimize lengthb(var) */
  if ( RWL_STACK_LENGTHB == etype 
      &&
       rwm->ptail
      &&
       RWL_STACK_VAR == rwm->ptail->elemtype)
  {
    /*
     * If we are pushing lengthb and previous was a variable
     * modify RWL_STACK_VAR to RWL_STACK_VAR_LB in stead
     * of really pusing the call to get lengthb
    */
    rwm->ptail->elemtype = RWL_STACK_VAR_LB;
    goto finish_normal;
  }
       

  /* allocate element to push onto stack */

  e = (struct rwl_pstack *) rwlalloc(rwm,sizeof(rwl_pstack));

  /* first element? set head */
  if (0==rwm->phead)
  {
    rwm->phead = e;
  }

  /* if a previous element is found, it should point to me */
  if (rwm->ptail)
    rwm->ptail->next = e;

  /* and I am now the tail */
  rwm->ptail = e;

  /* copy number or value */
  e->elemtype = etype;
  switch (etype)
  {
    case RWL_STACK_NUM:
      memcpy(&e->psnum,(rwl_value *)elem, sizeof(rwl_value));
    break;
    case RWL_STACK_NOV:
      e->psvar.vname = elem;
      e->psvar.guess = RWL_VAR_NOTFOUND;
    break;

    case RWL_STACK_AND:
    case RWL_STACK_OR:
    case RWL_STACK_CONDITIONAL:
      //if (bit(rwm->mflags, RWL_DEBUG_MISC))
      //  rwldebug(rwm, "set skipend %d", arg2);
      e->skipend = (ub1) arg2;
      break;
      
    case RWL_STACK_PROCCALL: /* call a procedure */
    case RWL_STACK_FUNCCALL: /* call a function */

      e->aacnt = (ub2)arg2;

      if (varloc>=0)
      {
	switch (rwm->mxq->evar[varloc].vtype)
	{
	  case RWL_TYPE_RAPROC:
	    {
	      /* we know the parser has made sure all entries have the arg count
	       * (and types) so we just verify against the first on in the array
	       */
	      rwl_rastvar *rv = rwm->mxq->evar[varloc].vdata;
	      sb4 v0 = rwlfindvar2(rwm->mxq, rv->pstr[0], rv->pvgs[0], rwm->codename);
	      if (v0<0)
	      {
	        rwlsevere(rwm,"[rwlexprpush2raproc:%s;%s;%s;%d]"
		  , rwm->mxq->evar[varloc].vname
		  , rv->pstr[0]
		  , rwm->codename ? rwm->codename : (text *) "" , v0);
		e->elemtype = RWL_STACK_NOV;
	      }
	      if (rwm->mxq->evar[v0].vtype != RWL_TYPE_PROC)
	      {
	        rwlsevere(rwm,"[rwlexprpush2raproc2:%s;%s;%s]"
		  , rwm->mxq->evar[varloc].vname
		  , rwm->codename ? rwm->codename : (text *) "" , rwm->mxq->evar[v0].stype);
		e->elemtype = RWL_STACK_NOV;
	      }
	      if (e->aacnt < rwm->mxq->evar[v0].v2val)
		rwlerror(rwm, RWL_ERROR_TOO_FEW_ARGUMENTS, elem);
	      if (e->aacnt > rwm->mxq->evar[v0].v2val)
		rwlerror(rwm, RWL_ERROR_TOO_MANY_ARGUMENTS, elem);
	    }
	    break;

	  case RWL_TYPE_FUNC:
	  case RWL_TYPE_PROC:
	    /* it really is a function, so verify argument count but
	     * accept anything, if count is wrong, exprfinish will clear the stack
	     */
	    if (e->aacnt < rwm->mxq->evar[varloc].v2val)
	      rwlerror(rwm, RWL_ERROR_TOO_FEW_ARGUMENTS, elem);
	    if (e->aacnt > rwm->mxq->evar[varloc].v2val)
	      rwlerror(rwm, RWL_ERROR_TOO_MANY_ARGUMENTS, elem);
	    break;
	  default:
	    rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2
	      , rwm->mxq->evar[varloc].stype, rwm->mxq->evar[varloc].vname
	      , RWL_STACK_FUNCCALL==etype ? "function call":"procedure call");
	    e->elemtype = RWL_STACK_NOV; /* makes rwlexecfinish clear stack */
	}
      }
      /* fall thru */
    case RWL_STACK_ASN: /* assign to a variable */
    case RWL_STACK_APP: /* append to a variable */
    case RWL_STACK_ASNINT:
    case RWL_STACK_ASNPLUS: /* += variable */
    case RWL_STACK_VAR: /* read a variable */
    case RWL_STACK_SQL_ID: /* get the sql_id of a sql */
    case RWL_STACK_ACTIVESESSIONCOUNT: /* get the count of sessions in a database */
    case RWL_STACK_OPENSESSIONCOUNT: /* get the count of sessions in a database */
    case RWL_STACK_SERVERRELEASE: /* get server release of a database */
    case RWL_STACK_SYSTEM2STR: // where to save the output
      e->psvar.vname = elem;
      e->psvar.guess = varloc;
    break;

    default:
    break;
  }

  finish_normal: ;
}

/* parse time: finish a stack - make it into an array for execution */
rwl_estack *rwlexprfinish(rwl_main *rwm)
{
  rwl_estack *estk = 0;
  rwl_pstack *pstk;
  ub4 i, cnt;

  /*ASSERT skipdep is 0 */
  if (0 != rwm->skipdep)
    rwlsevere(rwm,"[rwlexprfinskipdep:%d]", rwm->skipdep);

  /* assert there is a stack */
  if (!rwm->phead)
  {
    rwlsevere(rwm, "[rwlexprfinish-empty]");
    return 0;
  }
  else
  {
    /* count elements */
    cnt=0; pstk=rwm->phead; 
    while (pstk && cnt < MAXSTACK)
    {
      //if (bit(rwm->mflags, RWL_DEBUG_MISC))
      //  rwldebug(rwm, "found skipend %d at %d", pstk->skipend, cnt);
      cnt++;
      pstk=pstk->next;
    }
   
    if (cnt >= MAXSTACK)
      rwlsevere(rwm,"[rwlexprfinish-deep:%d,%d]", cnt, MAXSTACK);

    /* allocate array adding space for end marker */

    estk = rwlalloc(rwm, (cnt+1)* sizeof(rwl_estack));
    pstk=rwm->phead; 

    /* and copy from parse time linked list to execution array */
    for (i=0; i<cnt; i++)
    {
      estk[i].elemtype = pstk->elemtype;
      estk[i].branchtype = pstk->branchtype;
      estk[i].skipnxt = pstk->skipnxt;
      //if (bit(rwm->mflags, RWL_DEBUG_MISC))
      //  rwldebug(rwm, "copy skipend %d at %d", pstk->skipend, i);
      estk[i].skipend = pstk->skipend;
      switch(pstk->elemtype)
      {
        case RWL_STACK_NUM:
	  if (pstk->psnum.vtype == RWL_TYPE_DBL)
	    bis(estk[0].eflags, RWL_EST_HASDBL);
	  /* copy a constant */
	  memcpy(&estk[i].esnum, &pstk->psnum, sizeof(rwl_value));
	break;

	case RWL_STACK_PROCCALL:
	case RWL_STACK_FUNCCALL:
	  estk[i].esaacnt = pstk->aacnt;
	  estk[i].esname = pstk->psvar.vname;

	  /* function must exist */
	  if (  RWL_VAR_NOTFOUND == pstk->psvar.guess
	    || (RWL_VAR_NOTFOUND == (estk[i].esvar = rwlfindvarug(rwm->mxq,
	             pstk->psvar.vname, &pstk->psvar.guess)))
	     )
	    goto exitfailure;

	  /* verify argument count
	   * note that error mesages have already been
	   * printed in rwlexprpush
	   */
	  if (pstk->aacnt != rwm->mxq->evar[pstk->psvar.guess].v2val)
	    goto exitfailure;
	  if (rwm->mxq->evar[estk[i].esvar].vtype == RWL_TYPE_DBL)
	    bis(estk[0].eflags, RWL_EST_HASDBL);
	break;
	  
	case RWL_STACK_ASN:
	case RWL_STACK_ASNPLUS:
	  estk[i].esname = pstk->psvar.vname;

	  /* variables must exist */
	  if (  RWL_VAR_NOTFOUND == pstk->psvar.guess
	    || (RWL_VAR_NOTFOUND == (estk[i].esvar = rwlfindvarug2(rwm->mxq,
	             pstk->psvar.vname, &pstk->psvar.guess, rwm->codename)))
	     )
	    goto exitfailure;
	  if (rwm->mxq->evar[estk[i].esvar].vtype == RWL_TYPE_DBL)
	    bis(estk[0].eflags, RWL_EST_HASDBL);
	  if (rwm->mxq->evar[estk[i].esvar].vtype == RWL_TYPE_INT)
	    bis(estk[0].eflags, RWL_EST_ASNINT);
	break;

	case RWL_STACK_VAR:
	case RWL_STACK_VAR_LB:
	case RWL_STACK_APP:
	case RWL_STACK_ASNINT:
	case RWL_STACK_SQL_ID:
	case RWL_STACK_ACTIVESESSIONCOUNT:
	case RWL_STACK_SERVERRELEASE:
	case RWL_STACK_OPENSESSIONCOUNT:
	case RWL_STACK_SYSTEM2STR:
	  estk[i].esname = pstk->psvar.vname;

	  /* variables must exist */
	  if (  RWL_VAR_NOTFOUND == pstk->psvar.guess
	    || (RWL_VAR_NOTFOUND == (estk[i].esvar = rwlfindvarug2(rwm->mxq,
	             pstk->psvar.vname, &pstk->psvar.guess, rwm->codename)))
	     )
	    goto exitfailure;
	  if (rwm->mxq->evar[estk[i].esvar].vtype == RWL_TYPE_DBL)
	    bis(estk[0].eflags, RWL_EST_HASDBL);
	break;

	case RWL_STACK_MOD:
	  bis(estk[0].eflags, RWL_EST_HASMOD);
	break;

	case RWL_STACK_UNIFORM:
	  bis(estk[0].eflags, RWL_EST_UNIFORM);
	break;

	case RWL_STACK_ERLANG:
	case RWL_STACK_ERLANG2:
	case RWL_STACK_ERLANGK:
	  bis(estk[0].eflags, RWL_EST_ERLANG);
	break;

	case RWL_STACK_LESS:
	case RWL_STACK_LESSEQ:
	case RWL_STACK_GREATER:
	case RWL_STACK_GREATEREQ:
	case RWL_STACK_BETWEEN:
	case RWL_STACK_EQUAL:
	case RWL_STACK_NOTEQUAL:
	  bis(estk[0].eflags, RWL_EST_HASCMP);
	break;

	case RWL_STACK_NOV:
	  goto exitfailure;
	default:
	  /* this is all the normal calculations */
	break;
      }
      pstk=pstk->next;
    }
    /* set the end */
    estk[cnt].elemtype = RWL_STACK_END;
    // Warn if mod is used with double
    if (bit(estk[0].eflags, RWL_EST_HASMOD)
     && bit(estk[0].eflags, RWL_EST_HASDBL|RWL_EST_ERLANG))
      rwlerror(rwm, RWL_ERROR_DBL_AND_MOD);
    // Warn if there is uniform and some double and assigning to integer
    if (   bit(estk[0].eflags, RWL_EST_UNIFORM) 
        && bit(estk[0].eflags, RWL_EST_HASDBL|RWL_EST_ERLANG)
        && bit(estk[0].eflags, RWL_EST_ASNINT))
      rwlerror(rwm, RWL_ERROR_UNIFORM_AND_INTASN);
    // warn if there is a comparison and some double and assigning to integer
    if (   bit(estk[0].eflags, RWL_EST_HASCMP) 
        && bit(estk[0].eflags, RWL_EST_HASDBL|RWL_EST_ERLANG)
        && bit(estk[0].eflags, RWL_EST_ASNINT))
      rwlerror(rwm, RWL_ERROR_COMPARE_AND_INTASN);
  }
  rwlexprclear(rwm); /* get rid of parse stack */
  return estk;
exitfailure:
   
  if(estk)
    rwlfree(rwm, estk);
  rwlexprclear(rwm);
  return 0;
}

void rwlexprclear(rwl_main *rwm)
{
  /* clear stack */
  rwl_pstack *pstk, *s1;

  pstk = rwm->phead;
  /* follow the linked list and free */
  while (pstk)
  {
    s1=pstk->next;
    rwlfree(rwm, pstk);
    pstk = s1;
  }
  /* mark stack does not exist */
  rwm->phead = rwm->ptail = 0;
  rwm->skipdep = 0;
}

void rwlexprprint ( rwl_estack *estk , rwl_location *loc , rwl_xeqenv *xev , FILE *fil)
{
  /* evaluate expression and print its result */

  rwlexpreval(estk, loc, xev, &xev->xqnum);

  fputs((char *)xev->xqnum.sval, fil);
}

/* calculate something immediatdly and return
 * the result in the pval element of rwl_main
 */
void rwlexprimmed(rwl_main *rwm)
{
  rwl_estack *estk;

  if ((estk = rwlexprfinish(rwm)))
  {
    rwlexpreval(estk, 0, rwm->mxq, &rwm->pval);
    rwlexprdestroy(rwm, estk);
  }
  else 
  {
    rwlexprclear(rwm);
    bis(rwm->m2flags, RWL_P2_SOMEEXPFAIL);
  }
}

/* destroy a stack - only done for stacks evaluated during parse */
void rwlexprdestroy(rwl_main *rwm, rwl_estack *estk)
{
  rwl_estack *e;
#ifndef RWL_OWN_MALLOC
  (void)rwm;/*unused*/
#endif
  e = estk;
  while (RWL_STACK_END != e->elemtype)
  {
    if (  RWL_STACK_NUM == e->elemtype 
       && RWL_SVALLOC_NOT != e->esnum.vsalloc
       && RWL_SVALLOC_CONST != e->esnum.vsalloc
       )
      rwlfree(rwm, e->esnum.sval);
  e++;
  }
  if (estk)
    rwlfree(rwm, estk);
  return;
}

rwlcomp(rwlexpression_c, RWL_GCCFLAGS)
