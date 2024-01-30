/*
 * RWP*Load Simulator
 *
 * Copyright (c) 2023 Oracle Corporation
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
 * bengsig  30-jan-2024 - All includes in rwl.h, use *rand_r functions on Linux
 * johnkenn 02-nov-2023 - Add sin and cos 
 * bengsig  19-jul-2023 - Fix constants rwl_null etc.
 * bengsig  17-jul-2023 - % works on double
 * bengsig  10-jul-2023 - ceil, trunc, floor functions
 * bengsig   8-mar-2023 - Normal Distribution random
 * bengsig   7-feb-2023 - Proper servere text
 * bengsig  31-oct-2022 - remove some debug
 * bengsig  18-oct-2022 - threads global variables
 * bengsig  22-sep-2022 - Better type handling
 * bengsig  15-sep-2022 - New file assignment operators
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
, RWL_TYPE_INT  // vtype
, 0   		// valflags
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
, RWL_TYPE_STR  // vtype
, 0   		// valflags
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
, RWL_TYPE_INT  // vtype
, 0   		// valflags
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
, RWL_TYPE_INT  // vtype
, 0   		// valflags
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
    rwlsevere(rwm,"[rwlexprbeg-recurse:%d]", rwm->furlev);

  /*ASSERT skipdep is 0 */
  if (0 != rwm->skipdep)
    rwlsevere(rwm,"[rwlexprbeg-skipdep:%d]", rwm->skipdep);
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
	    if (0!=arg2 && !bit(rwm->mxq->evar[varloc].flags,RWL_IDENT_INTERNAL))
	    {
	      /* cannot file assign to integer or double */
	      rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2
		, rwm->mxq->evar[varloc].stype
		, rwm->mxq->evar[varloc].vname
		, "file-assign");
	      etype = RWL_STACK_NOV;
	    }
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
	    if (0!=arg2 && !bit(rwm->mxq->evar[varloc].flags,RWL_IDENT_INTERNAL))
	    {
	      /* cannot file assign to integer or double */
	      rwlerror(rwm, RWL_ERROR_INCORRECT_TYPE2
		, rwm->mxq->evar[varloc].stype
		, rwm->mxq->evar[varloc].vname
		, "file-assign");
	      etype = RWL_STACK_NOV;
	    }
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
	    rwlsevere(rwm,"[rwlexprpush2-badtype:%d;%s;%s]", rwm->mxq->evar[varloc].vtype
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
	if (
	     (RWL_TYPE_STR != rwm->mxq->evar[varloc].vtype) // check it is a string
	   ||
	     (bit(rwm->mxq->evar[varloc].flags,RWL_IDENT_GLOBAL)) // that is not global
	   )
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
	        rwlsevere(rwm,"[rwlexprpush2-raproc:%s;%s;%s;%d]"
		  , rwm->mxq->evar[varloc].vname
		  , rv->pstr[0]
		  , rwm->codename ? rwm->codename : (text *) "" , v0);
		e->elemtype = RWL_STACK_NOV;
	      }
	      if (rwm->mxq->evar[v0].vtype != RWL_TYPE_PROC)
	      {
	        rwlsevere(rwm,"[rwlexprpush2-raproc2:%s;%s;%s]"
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

    case RWL_STACK_ASN: /* assign to a variable */
      e->psvar.vname = elem;
      e->psvar.guess = varloc;
      e->filasn = arg2;
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
  sb4 asnvar = RWL_VAR_NOTFOUND;

  /*ASSERT skipdep is 0 */
  if (0 != rwm->skipdep)
    rwlsevere(rwm,"[rwlexprfinish-skipdep:%d]", rwm->skipdep);

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
      estk[i].skipend = pstk->skipend;
      switch(pstk->elemtype)
      {
        case RWL_STACK_NUM:
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
	break;
	  
	case RWL_STACK_ASN:
	  estk[i].filasn = pstk->filasn;
	  /* fall thru */
	case RWL_STACK_ASNPLUS:
	case RWL_STACK_APP:
	  estk[i].esname = pstk->psvar.vname;

	  /* variables must exist */
	  if (  RWL_VAR_NOTFOUND == pstk->psvar.guess
	    || (RWL_VAR_NOTFOUND == (estk[i].esvar = rwlfindvarug2(rwm->mxq,
	             pstk->psvar.vname, &pstk->psvar.guess, rwm->codename)))
	     )
	    goto exitfailure;
	  asnvar = estk[i].esvar;
	break;

	case RWL_STACK_VAR:
	case RWL_STACK_VAR_LB:
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
	break;

	case RWL_STACK_MOD:
	case RWL_STACK_UNIFORM:
	case RWL_STACK_ERLANG:
	case RWL_STACK_ERLANG2:
	case RWL_STACK_ERLANGK:
	case RWL_STACK_NORMALRANDOM:
	case RWL_STACK_LESS:
	case RWL_STACK_LESSEQ:
	case RWL_STACK_GREATER:
	case RWL_STACK_GREATEREQ:
	case RWL_STACK_BETWEEN:
	case RWL_STACK_EQUAL:
	case RWL_STACK_NOTEQUAL:
	break;

	case RWL_STACK_NOV:
	  goto exitfailure;
	break;

        default:
	break;
      }
      pstk=pstk->next;
    }
    /* set the end */
    estk[cnt].elemtype = RWL_STACK_END;
  }

  // now set the types
  {
    rwl_type *tstk = rwlalloc(rwm, (cnt+1)* sizeof(rwl_type));
    ub4 j;

    /* pretend we evaluate the stack
     *
     * tstk is what becomes the real stack during rwlexpreval
     * and here we just use it to set the type of the each
     * entry on the stack during our simulated evaluation
     *
     * while doing this, we save the real type for that element
     * in evaltype
     *
     * note that evaltype has three different purposes: 
     * 1 - for comparison operatores, it tells on which type
     *     the actual comparison is done (sval, dval, ival)
     *     and these are known to have an integer result
     * 2 - for uniform() it tells if it is its integer or double
     *     variant
     * 3 - for everything else, it tells the type of the result
     */


    // simplify assertions using this macro
#   define rwlasrti(n,str) \
    if (i<n) { \
      rwlsevere(rwm, "[rwlexprcomp-ilow%s:%d;%d]", str, i, estk[i].elemtype); \
      goto stackshort; }

    for (i=0; i<cnt+1; i++)
    {
      switch (estk[i].elemtype)
      {
	// These all return double
	case RWL_STACK_EPOCHSECONDS:
	case RWL_STACK_RUNSECONDS:
	  estk[i].evaltype = tstk[i] = RWL_TYPE_DBL;
	break;

	case RWL_STACK_NUM:
	  estk[i].evaltype = tstk[i] = estk[i].esnum.vtype;
	break;

	// These all return integer
	case RWL_STACK_ACTIVESESSIONCOUNT:
	case RWL_STACK_OPENSESSIONCOUNT:
	case RWL_STACK_VAR_LB:
	  estk[i].evaltype = tstk[i] = RWL_TYPE_INT;
	break; 

	// These all return string
	case RWL_STACK_SERVERRELEASE:
	case RWL_STACK_SQL_ID:
	  estk[i].evaltype = tstk[i] = RWL_TYPE_STR;
	break; 

	case RWL_STACK_VAR:
	  if (   asnvar != RWL_VAR_NOTFOUND  // assign on stack
	      && asnvar == estk[i].esvar     // to var used in expression
	      && bit(rwm->mxq->evar[estk[i].esvar].flags, RWL_IDENT_GLOBAL) // global
	     )
	  rwlerror(rwm, RWL_ERROR_GLOB_ASSIGN_IN_EXP, estk[i].esname);
	  //FALLTHROUGH
	case RWL_STACK_ASN:
	case RWL_STACK_ASNPLUS:
	case RWL_STACK_ASNINT:
	  estk[i].evaltype = tstk[i] = rwm->mxq->evar[estk[i].esvar].vtype;
	break; 

	case RWL_STACK_APP:
	  estk[i].evaltype = RWL_TYPE_STR;
	break;
	
	case RWL_STACK_END:
	break;

	// Two argument calls returning double
	case RWL_STACK_NORMALRANDOM:
	case RWL_STACK_ERLANGK:
	case RWL_STACK_EXPB:
	case RWL_STACK_ATAN2:
	case RWL_STACK_LOGB:
	  rwlasrti(2,"logb");
	  estk[i].evaltype = tstk[i] = RWL_TYPE_DBL;
	pop_two:
	  for (j=i-1; j>1; j--)
	    tstk[j] = tstk[j-2];
	break;
	
	case RWL_STACK_BETWEEN:
	  rwlasrti(3,"between");
	  tstk[i] = RWL_TYPE_INT;
	  if (RWL_TYPE_STR==tstk[i-3])
	    estk[i].evaltype = RWL_TYPE_STR;
	  else
	    estk[i].evaltype = tstk[i-3];
	  goto pop_three;
	break;

	// Comparisons 
	case RWL_STACK_LESS:
	case RWL_STACK_GREATER:
	case RWL_STACK_LESSEQ:
	case RWL_STACK_GREATEREQ:
	case RWL_STACK_EQUAL:
	case RWL_STACK_NOTEQUAL:
	  rwlasrti(2,"compare");
	  tstk[i] = RWL_TYPE_INT;
	  if (RWL_TYPE_STR==tstk[i-1] && RWL_TYPE_STR==tstk[i-2])
	    estk[i].evaltype = RWL_TYPE_STR;
	  else if (RWL_TYPE_DBL==tstk[i-1] || RWL_TYPE_DBL==tstk[i-2])
	    estk[i].evaltype = RWL_TYPE_DBL;
	  else
	    estk[i].evaltype = RWL_TYPE_INT;
	  goto pop_two;
	break;

	//case RWL_STACK_MOD:
	//  if (RWL_TYPE_DBL==tstk[i-1] || RWL_TYPE_DBL==tstk[i-2])
	//    rwlerror(rwm, RWL_ERROR_DBL_AND_MOD);
	  /*FALLTHROUGH*/
	// Two argument calls returning integer
	case RWL_STACK_SUBSTRB2:
	case RWL_STACK_INSTRB2:
	case RWL_STACK_OR:
	case RWL_STACK_AND:
	case RWL_STACK_ACCESS:
	  rwlasrti(2,"twoint");
	  estk[i].evaltype = tstk[i] = RWL_TYPE_INT;
	  goto pop_two;
	break;

	// Two argument calls returning string
	case RWL_STACK_CONCAT:
	  rwlasrti(2,"concat");
	  estk[i].evaltype = tstk[i] = RWL_TYPE_STR;
	  goto pop_two;
	break;

	case RWL_STACK_PROCCALL:
	break;

	case RWL_STACK_FUNCCALL:
	  estk[i].evaltype = tstk[i] = rwm->mxq->evar[estk[i].esvar].vtype;
	//pop_N:
	  {
	    ub4 v2val = rwm->mxq->evar[estk[i].esvar].v2val;
	    rwlasrti(v2val,"funccall");
	    for (j=i-1; j>v2val-1; j--)
	      tstk[j] = tstk[j-v2val];
	  }
	break;
      
	case RWL_STACK_ADD:
	case RWL_STACK_MUL:
	case RWL_STACK_DIV:
	case RWL_STACK_MOD:
	case RWL_STACK_SUB:
	  rwlasrti(2,"arithm");
	  if (RWL_TYPE_DBL==tstk[i-1] || RWL_TYPE_DBL==tstk[i-2])
	    estk[i].evaltype = tstk[i] = RWL_TYPE_DBL;
	  else
	    estk[i].evaltype = tstk[i] = RWL_TYPE_INT;
	  goto pop_two;
	break;
      

	// Three argument calls returning integer
	case RWL_STACK_INSTRB3:
	  rwlasrti(3,"instrb3");
	  estk[i].evaltype = tstk[i] = RWL_TYPE_INT;
	pop_three:
	  for (j=i-1; j>2; j--)
	    tstk[j] = tstk[j-3];
	break;

	// Three argument calls returning string
	case RWL_STACK_SUBSTRB3:
	  rwlasrti(3,"substrb3");
	  estk[i].evaltype = tstk[i] = RWL_TYPE_STR;
	  goto pop_three;
	break;

	case RWL_STACK_CONDITIONAL:
	  rwlasrti(3,"conditional");
	  if (RWL_TYPE_STR==tstk[i-1] || RWL_TYPE_STR==tstk[i-2])
	    estk[i].evaltype = tstk[i] = RWL_TYPE_STR;
	  else if (RWL_TYPE_DBL==tstk[i-1] || RWL_TYPE_DBL==tstk[i-2])
	    estk[i].evaltype = tstk[i] = RWL_TYPE_DBL;
	  else
	    estk[i].evaltype = tstk[i] = RWL_TYPE_INT;
	  goto pop_three;
	break;
      
	case RWL_STACK_MINUS:
	  rwlasrti(1,"minus");
	  estk[i].evaltype = tstk[i] = tstk[i-1];
	  goto pop_one;
	break;

	case RWL_STACK_UNIFORM:
	  rwlasrti(2,"uniform");
	  if (RWL_TYPE_INT==tstk[i-1] && RWL_TYPE_INT==tstk[i-2])
	    estk[i].evaltype = tstk[i] = RWL_TYPE_INT;
	  else
	    estk[i].evaltype = tstk[i] = RWL_TYPE_DBL;
	  goto pop_two;
	break;
      
        // one argument returning integer
	case RWL_STACK_NOT:
	case RWL_STACK_ISNOTNULL:
	case RWL_STACK_ISNULL:
	case RWL_STACK_LENGTHB:
	case RWL_STACK_SYSTEM2STR:
	case RWL_STACK_SYSTEM:
	  rwlasrti(1,"miscint");
	  estk[i].evaltype = tstk[i] = RWL_TYPE_INT;
	pop_one:
	  for (j=i-1; j>0; j--)
	    tstk[j] = tstk[j-1];
	break;

        // one argument returning string
	case RWL_STACK_GETENV:
	  rwlasrti(1,"getenv");
	  estk[i].evaltype = tstk[i] = RWL_TYPE_INT;
	  goto pop_one;
	break;

	// one argument returning double
	case RWL_STACK_LOG:
	case RWL_STACK_EXP:
	case RWL_STACK_CEIL:
	case RWL_STACK_TRUNC:
	case RWL_STACK_FLOOR:
	case RWL_STACK_ROUND:
	case RWL_STACK_SQRT:
	case RWL_STACK_SIN:
	case RWL_STACK_COS:
	case RWL_STACK_ERLANG:
	case RWL_STACK_ERLANG2:
	  rwlasrti(1,"doublfunc");
	  estk[i].evaltype = tstk[i] = RWL_TYPE_DBL;
	  goto pop_one;
	break;

	case RWL_STACK_NOV:
	break;
      
	default:
	  rwlsevere(rwm, "[rwlexprcomp-stack0:%d;%d]", i, estk[i].elemtype);
	break;
      }
    }
#   undef rwlasrti
#ifdef NEVER
    if (bit(rwm->mflags, RWL_DEBUG_MISC))
    {
      rwldebugnonl(rwm, "estk[i].evaltype = ");
      for (i=0; i<cnt+1; i++)
      {
        fprintf(stderr,"%d:%d ", i, estk[i].evaltype);
      }
      fputs("\n", stderr);
      fflush(stderr);
    }
#endif
    stackshort:
    rwlfree(rwm, tstk);
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
