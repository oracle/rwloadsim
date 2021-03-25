/*
 * RWP*Load Simulator
 *
 * Copyright (c) 2021 Oracle Corporation
 * Licensed under the Universal Permissive License v 1.0
 * as shown at https://oss.oracle.com/licenses/upl/
 *
 * Real World performance Load simulator VARiables/identifiers
 *
 * rwlvariable.c
 *
 * History
 *
 * bengsig  25-mar-2021 - elseif
 * bengsig  20-jan-2021 - connection pool
 * bengsig  04-nov-2020 - Allow string length to be immediate_expression
 * bengsig  07-oct-2020 - Remove anything sharding related
 * bengsig  29-sep-2020 - correct rwlprintvar for dynamic sql
 * bengsig  31-aug-2020 - Remove meaningless #ifdef NEVER
 * bengsig  30-mar-2020 - Dynamic SQL changes
 * bengsig  12-jun-2019 - define/fetch arrays
 * bengsig  05-oct-2017 - Creation
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "rwl.h"

/* rwladdvar adds a variable to the array */
sb4 rwladdvar2(rwl_main *rwm, text *varn, rwl_type vart, ub2 flags, text *pname)
{
  rwl_identifier *v;
  ub4 i, didwarn = 0;
  char *stype;

  /*ASSERT*/
  if (bit(flags,RWL_IDENT_LOCAL ) && !pname)
  {
    rwlsevere(rwm,"[rwladdvarlocal:%s;%d;0x%x]", varn, vart, flags);
    return RWL_VAR_NOGUESS;
  }
  /*ASSERT*/
  if (!bit(flags,RWL_IDENT_LOCAL ) && pname)
  {
    rwlsevere(rwm,"[rwladdvarpublic:%s;%d;0x%x;%s]", varn, vart, flags, pname);
    return RWL_VAR_NOGUESS;
  }
  /*ASSERT*/
  if (bit(flags,RWL_IDENT_LOCAL ) && bit(flags,RWL_IDENT_PRIVATE))
  {
    rwlsevere(rwm,"[rwladdvarprivate:%s;%d;0x%x]", varn, vart, flags);
    return RWL_VAR_NOGUESS;
  }

  switch(vart)
  {
    case RWL_TYPE_NONE: stype = "none"; break;
    case RWL_TYPE_INT: stype = "integer"; break;
    case RWL_TYPE_DBL: stype = "double"; break;
    case RWL_TYPE_STR: stype = "string"; break;
    case RWL_TYPE_PROC: stype = "procedure"; break;
    case RWL_TYPE_FUNC: stype = "function"; break;
    case RWL_TYPE_SQL: stype = "sql"; break;
    case RWL_TYPE_RAST: stype = "random string array"; break;
    case RWL_TYPE_RAPROC: stype = "random procedure array"; break;
    case RWL_TYPE_CANCELLED: stype = "cancelled"; break;
    case RWL_TYPE_DB: stype = "database"; break;
    case RWL_TYPE_FILE: stype = "file"; break;
    case RWL_TYPE_BLOB: stype = "blob"; break;
    case RWL_TYPE_CLOB: stype = "clob"; break;
    case RWL_TYPE_NCLOB: stype = "nclob"; break;
    default: stype = "UNKNOWN"; break;
  }
    
  /* check for duplicates */
  v = rwm->mxq->evar;
  didwarn = 0;
  for (i=0; i<rwm->mxq->varcount; i++)
  {
    if (!v[i].vname || rwlstrcmp(v[i].vname, varn))
      continue;
    // name matches ...
    if (
        (    !bit(flags,     RWL_IDENT_LOCAL|RWL_IDENT_PRIVATE)
	  && !bit(v[i].flags,RWL_IDENT_LOCAL|RWL_IDENT_PRIVATE)
	) // true when adding public and public already found
      ||
	(    bit(flags,RWL_IDENT_LOCAL)
	  && bit(v[i].flags, RWL_IDENT_LOCAL)
	  && v[i].pname
	  && 0==rwlstrcmp(v[i].pname, pname)
	) // true when adding local and local in same function already found
      ||
	(   bit(flags,RWL_IDENT_PRIVATE)
	 && bit(v[i].flags, RWL_IDENT_PRIVATE)
	 && 0==rwlstrcmp(v[i].loc.fname, rwm->loc.fname)
	) // true when adding private and private in same file already found
      )
    {
      if (bit(v[i].flags, RWL_IDENT_COMMAND_LINE) && v[i].vtype == vart)
      {
        /* one redeclaration allowed if it were on command line */
	bic(v[i].flags, RWL_IDENT_COMMAND_LINE);
	/* ignore assignement during declaration */
	bis(v[i].flags, RWL_IDENT_IGN_DECL_ASSIGN);
        return (sb4) i;
      }
      else
      {
	rwlerror(rwm, RWL_ERROR_ALREADY_VARIABLE
	  , varn, v[i].stype
	  , v[i].loc.fname, v[i].loc.lineno);
	return RWL_VAR_NOGUESS;
      }
    }
    // Check if new public variable is hidden by private in same file
    if (     !bit(flags,     RWL_IDENT_LOCAL|RWL_IDENT_PRIVATE)
	  &&  bit(v[i].flags,RWL_IDENT_PRIVATE)
	  && 0==rwlstrcmp(v[i].loc.fname, rwm->loc.fname)
          && !didwarn
       ) 
    {
      didwarn = 1;
      rwlerror(rwm, RWL_ERROR_GLOBAL_HIDDEN_BY_PRIVATE
        , stype, varn
        , v[i].stype, v[i].loc.fname,v[i].loc.lineno);
    }
    // And opposite
    if (     bit(flags,     RWL_IDENT_PRIVATE)
	  && !bit(v[i].flags,RWL_IDENT_PRIVATE|RWL_IDENT_LOCAL)
	  && 0==rwlstrcmp(v[i].loc.fname, rwm->loc.fname)
	  && !didwarn
       ) 
    {
      didwarn = 1;
      rwlerror(rwm, RWL_ERROR_PRIVATE_HIDES_GLOBAL
        , "private", stype, varn
        , v[i].stype, v[i].loc.fname,v[i].loc.lineno);
    }
    // Local hides private or global
    if (     bit(flags,     RWL_IDENT_LOCAL)
	  && !bit(v[i].flags,RWL_IDENT_LOCAL)
	  && !didwarn
       ) 
    {
      if ( !bit(v[i].flags,RWL_IDENT_PRIVATE)
         ||
	   0==rwlstrcmp(v[i].loc.fname,rwm->loc.fname)
	 )
      {
	didwarn = 1;
	rwlerror(rwm, RWL_ERROR_LOCAL_HIDES
	  , stype, varn
	  , bit(v[i].flags,RWL_IDENT_PRIVATE) ? "private" : "public"
	  , v[i].stype, v[i].loc.fname,v[i].loc.lineno);
      }
    }
    // And command line or internal
    if (     bit(flags,     RWL_IDENT_PRIVATE|RWL_IDENT_LOCAL)
	  && bit(v[i].flags,RWL_IDENT_COMMAND_LINE|RWL_IDENT_INTERNAL)
	  && !didwarn
       ) 
    {
      didwarn = 1;
      rwlerror(rwm, RWL_ERROR_PRIVATE_HIDES_GLOBAL
        , bit(flags,RWL_IDENT_LOCAL) ? "local" : "private"
        , stype, varn
        , v[i].stype, v[i].loc.fname,v[i].loc.lineno);
    }
  }

  /* add new variable */
  if (i >= rwm->maxident)
  {
    rwlerror(rwm, RWL_ERROR_NO_IDENTIFIER_SPACE, rwm->maxident);
    rwlerrormute(rwm, RWL_ERROR_NO_IDENTIFIER_SPACE,0);
    return RWL_VAR_NOTFOUND;
  }
    
  /* TODO NOTE NOTE
   * It was originally assumed that we would allow variables to be
   * sorted, which would mean their location in the variable array
   * could change.  That idea is now completely given up.
   * 
   * However, there is also lots of legacy code that assumed the
   * reorder might take place, which would mean there is a "guess"
   * of the variable location in the array and if it were sorted,
   * the guess would not match, so a new guess was needed.
   * That's there reason for the rwlfindvarug2 routine: it finds
   * the variable and potentially updates the guess.
   * Now, at runtime, the guess is always assumed to be correct,
   * so all new code should in stead call rwlverifyvg which
   * will verify the variable guess.  In most cases, you should
   * use that call as an assert and call rwlexecsevere with some
   * appropriate text and arguments
   *
   * Note that the lack of sorting and therefore the need for
   * linear seach doesn't have any noticable performance impact
   * as it only happens during compile, and not during execute.
   */


  v[i].vname = varn;
  v[i].pname = pname;
  v[i].vtype = vart;
  v[i].flags = flags;
  v[i].stype = stype;

  switch (vart)
  {
    case RWL_TYPE_FILE:
      v[i].num.vtype = (ub1) vart;
    break;

    case RWL_TYPE_CLOB:
    case RWL_TYPE_NCLOB:
    case RWL_TYPE_BLOB:
      if (!bit(flags, RWL_IDENT_LOCAL))
        rwlalloclob(rwm->mxq, &rwm->loc, (OCILobLocator **)&v[i].num.vptr);
      v[i].num.vtype = (ub1) vart;
    break;

  /* the following really shound't be done for local variables
   * of type RWL_TYPE_STR, RWL_TYPE_DBL, RWL_TYPE_INT
   * but the code is kept for all for backwards compatibility
   */
  // if (!bit(flags, RWL_IDENT_LOCAL))
    case RWL_TYPE_STR:
      /* 
       * for a string - set the size
       * buffer will be allocated at first assign 
       */
      if (rwm->declslen <= 0)
      {
	rwlerror(rwm, RWL_ERROR_LENGTH_NOT_POSITIVE , varn, rwm->declslen);
	rwm->declslen = 1;
      }
      v[i].num.slen = (ub8) rwm->declslen+1;
      v[i].num.vsalloc = RWL_SVALLOC_NOT;
      v[i].num.vtype = RWL_TYPE_STR;
    break;

    case RWL_TYPE_INT:
    case RWL_TYPE_DBL:
      /* for a number type - allocate fixed buffer */
      v[i].num.slen = RWL_PFBUF;
      v[i].num.sval = rwlalloc(rwm, RWL_PFBUF);
      v[i].num.vsalloc = RWL_SVALLOC_FIX;
      if (bit(flags, RWL_IDENT_THRSUM))
      { /* default to zero */
	v[i].num.ival = 0;
	v[i].num.dval = 0.0;
	v[i].num.isnull = 0;
	if (RWL_TYPE_INT==vart)
	  snprintf((char *)v[i].num.sval, RWL_PFBUF, rwm->iformat, 0);
	else
	  snprintf((char *)v[i].num.sval, RWL_PFBUF, rwm->dformat, 0.0);
      }
      else /* non-threadsum variables are NULL at beginning */
	v[i].num.isnull = RWL_ISNULL;
      v[i].num.vtype = (ub1) vart;
    break;

    default: // prevent compiler warning
    break;
  }
  memcpy(&v[i].loc,&rwm->loc, sizeof(rwl_location));
  // if errlin was set in rwm->loc, correct lineno of the variable
  if (rwm->loc.errlin)
  {
    v[i].loc.lineno = rwm->loc.errlin;
  }
  rwm->mxq->varcount++;
  if (bit(rwm->mflags,RWL_DEBUG_VARIABLE))
  {
    if (bit(flags, RWL_IDENT_LOCAL))
      rwldebug(rwm, "local variable %s@%s[%d] declared at %s %d type %s flags 0x%x",
	varn, pname, i, v[i].loc.fname, v[i].loc.lineno, v[i].stype, flags);
    else
      rwldebug(rwm, "%s variable %s[%d] declared at %s %d type %s flags 0x%x"
        , bit(flags, RWL_IDENT_PRIVATE) ? "private" : "public"
	, varn, i, v[i].loc.fname, v[i].loc.lineno, v[i].stype, flags);
  }
  return (sb4) i;
}

/* find variable from its guess address, and update the guess */
sb4 rwlfindvarug2(rwl_xeqenv *xev, text *vname, sb4 *pvar, text *pname)
{
  sb4 guess, l;

  guess = *pvar;
  l = rwlfindvar2(xev, vname, guess, pname);
  if (l>=0 && l != guess)
  {
    /* check if update is allowed */
    if (bit(xev->rwm->mflags, RWL_P_ONLYMAINTH))
      *pvar = l;
    else
      rwlsevere(xev->rwm,"[rwlfindvarug-outsidemain:%s;%d;%d;%d;%x]"
      , vname, guess, l, xev->thrnum, xev->tflags);
  }
  return l;
}

  
/* verify a variable guess */
sb4 rwlverifyvg(rwl_xeqenv *xev, text *vnam, sb4 guess, text *pname)
{

  if (!vnam)
  {
    rwlsevere(xev->rwm, "[rwlverifyvg-nullvname:%d]", guess);
    return RWL_VAR_NOTFOUND;
  }

  // if there is a guess, check it is good
  if (   guess>=0
      && !rwlstrcmp(xev->evar[guess].vname, vnam) // name is correct
      &&
      (
        (  xev->evar[guess].pname // the variable is local
	&& pname // local expected
	&& bit(xev->evar[guess].flags, RWL_IDENT_LOCAL) // has local flag
        && !rwlstrcmp(xev->evar[guess].pname, pname) // matches pname
	)
	||
	(  bit(xev->evar[guess].flags,RWL_IDENT_PRIVATE) // is private
        && !rwlstrcmp(xev->evar[guess].loc.fname
	  , xev->pcdepth
	    ? xev->rwm->code[xev->start[xev->pcdepth]].cloc.fname // executing
	    : xev->rwm->loc.fname // parsing
	  ) // fname matches
	)
	||
        (  !xev->evar[guess].pname // the variable is not local
	&& !bit(xev->evar[guess].flags, RWL_IDENT_LOCAL|RWL_IDENT_PRIVATE) // neither local nor private
	)
      )
     )
  {
    if (bit(xev->rwm->mflags,RWL_DEBUG_VARIABLE))
      rwldebug(xev->rwm, "%s variable %s[%d] guessed type %s flags 0x%x"
        , pname 
	  ? "local" 
	  : ( bit(xev->evar[guess].flags,RWL_IDENT_PRIVATE) ? "private" : "public") 
	, vnam, guess, xev->evar[guess].stype, xev->evar[guess].flags);
    return guess;
  }
  return RWL_VAR_NOTFOUND;
}

  
/* find a variable */
sb4 rwlfindvar2(rwl_xeqenv *xev, text *vnam, sb4 guess, text *pname)
{
  sb4 i;
  sb4 local, priva, publc;

  // First check if the guess actually was correct
  if (guess>=0 && rwlverifyvg(xev, vnam, guess, pname) == guess)
    return guess;

  /* linear search until sorting has been implemented
   *
   * Note the order of precedence: local, private, public
   *
   * */
  local = priva = publc = RWL_VAR_NOTFOUND;
  for (i=0; (ub4) i<xev->varcount; i++)
  {
    if(!rwlstrcmp(xev->evar[i].vname, vnam))
    { // name matches
      // Local ? 
      if  (  xev->evar[i].pname // the variable is local
	  && pname // local expected
	  && bit(xev->evar[i].flags, RWL_IDENT_LOCAL) // has local flag
          && !rwlstrcmp(xev->evar[i].pname, pname) // matches pname
	  )
      { 
        local = i;
	break; // no need to search further
      }

      // private ?
      if  (  bit(xev->evar[i].flags,RWL_IDENT_PRIVATE) // is private
          && !rwlstrcmp(xev->evar[i].loc.fname
	    , xev->pcdepth
	      ? xev->rwm->code[xev->start[xev->pcdepth]].cloc.fname // executing
	      : xev->rwm->loc.fname // parsing
	    ) // fname matches
	  ) 
      {
        priva = i; 
	if (!pname)
	  break; // no further seach if we don't want local
      }

      // public ?
      if  (  !xev->evar[i].pname // the variable is not local
	  && !bit(xev->evar[i].flags, RWL_IDENT_LOCAL|RWL_IDENT_PRIVATE) // neither local nor private
	  )
      publc = i;
    }
  }

  if (local>=0)
  {
    // found local
    if (bit(xev->rwm->mflags,RWL_DEBUG_VARIABLE))
      rwldebug(xev->rwm, "local variable %s@%s[%d] found type %s flags 0x%x"
	, vnam, pname, local, xev->evar[local].stype, xev->evar[local].flags);
    return local;
  }

  if (priva>=0)
  {
    // found private
    if (bit(xev->rwm->mflags,RWL_DEBUG_VARIABLE))
      rwldebug(xev->rwm, "private variable %s in %s[%d] found type %s flags 0x%x"
	, vnam, xev->evar[priva].loc.fname, priva
	, xev->evar[priva].stype, xev->evar[priva].flags);
    return priva;
  }

  if (publc>=0)
  {
    // found public
    if (bit(xev->rwm->mflags,RWL_DEBUG_VARIABLE))
      rwldebug(xev->rwm, "public variable %s in %s[%d] found type %s flags 0x%x"
	, vnam, xev->evar[publc].loc.fname, publc
	, xev->evar[publc].stype, xev->evar[publc].flags);
    return publc;
  }

  if (!bit(xev->tflags, RWL_P_FINDVAR_NOERR))
    rwlerror(xev->rwm, RWL_ERROR_VAR_NOT_FOUND
  	, vnam);
  return RWL_VAR_NOTFOUND;


}

void rwlprintallvars(rwl_main *rwm)
{
  /* print all variables */
  ub4 i;
    
  for (i=0; i<rwm->mxq->varcount; i++)
    rwlprintvar(rwm->mxq, i);
}

void rwlprintvar(rwl_xeqenv *xev, ub4 varix)
{
  /* print one variable */
  rwl_identifier *v;
    
  if (varix>=xev->varcount)
  {
    rwlsevere(xev->rwm,"[rwlprintvar-varix:%d;%d]", varix, xev->varcount);
    return;
  }

  v = xev->evar+varix;

  if (bit(v->flags, RWL_IDENT_INTERNAL|RWL_IDENT_NOPRINT)
      && !bit(xev->rwm->mflags, RWL_DEBUG_VARIABLE))
    return;

  switch(v->vtype)
  {
    case RWL_TYPE_CANCELLED:
      printf("identifier %d declared at line %d has been cancelled\n", varix, v->loc.lineno );
    break;
    
    case RWL_TYPE_NONE:
      printf("identifier %d NONE declared at line %d\n", varix, v->loc.lineno );
    break;
    
    case RWL_TYPE_INT:
      if (bit(v->flags, RWL_IDENT_LOCAL))
	printf("identifier %d %s@%s INT current value " RWL_SB8PRINTF " declared at line %d\n"
	  , varix, v->vname, v->pname, v->num.ival, v->loc.lineno );
      else
	printf("identifier %d %s INT current value " RWL_SB8PRINTF " declared at %s line %d\n"
	  , varix, v->vname, v->num.ival, v->loc.fname, v->loc.lineno );
    break;
    
    case RWL_TYPE_DBL:
      if (bit(v->flags, RWL_IDENT_LOCAL))
	printf("identifier %d %s@%s DBL current value %.2f declared at line %d\n"
	  , varix, v->vname, v->pname, v->num.dval, v->loc.lineno );
      else
	printf("identifier %d %s DBL current value %.2f declared at %s line %d\n"
	  , varix, v->vname, v->num.dval, v->loc.fname, v->loc.lineno );
    break;
    
    case RWL_TYPE_FILE:
      if (bit(v->flags, RWL_IDENT_LOCAL))
	printf("identifier %d %s@%s FILE currently %s declared at %s line %d\n"
	  , varix, v->vname, v->pname
	   , bit(v->num.valflags,RWL_VALUE_FILE_OPENW)?"open for write":
	    (bit(v->num.valflags,RWL_VALUE_FILE_OPENR)?"open for read":"closed")
	   , v->loc.fname, v->loc.lineno );
      else
	printf("identifier %d %s FILE currently %s declared at %s line %d\n"
	  , varix, v->vname
	   , bit(v->num.valflags,RWL_VALUE_FILE_OPENW)?"open for write":
	    (bit(v->num.valflags,RWL_VALUE_FILE_OPENR)?"open for read":"closed")
	   , v->loc.fname, v->loc.lineno );
    break;

    case RWL_TYPE_BLOB:
    case RWL_TYPE_CLOB:
    case RWL_TYPE_NCLOB:
      printf("identifier %d %s %s declared at %s line %d\n"
        , varix, v->vname, v->stype
	, v->loc.fname, v->loc.lineno );
    break;

    case RWL_TYPE_STR:
      if (bit(v->flags, RWL_IDENT_LOCAL))
	printf("identifier %d %s@%s STR current value %s declared at line %d\n"
	  , varix, v->vname, v->pname, v->num.sval, v->loc.lineno );
      else
	printf("identifier %d %s STR current value %s declared at %s line %d\n"
	  , varix, v->vname, v->num.sval, v->loc.fname, v->loc.lineno );
    break;
    
    case RWL_TYPE_FUNC:
    case RWL_TYPE_PROC:
      {
	ub4 pc;
	printf("identifier %d %s PROC start %d declared at line %d lv=%d:\n"
	, varix, v->vname, v->vval, v->loc.lineno, v->v3val );
	if (v->v2val)
	{
	  ub4 vc;
	  rwl_localvar *pa = (rwl_localvar *)v->vdata;
	  for (vc=1; vc<=v->v2val; vc++)
	  {
	    printf("  argument %d %s\n", vc+1, pa[vc].aname);
	  }
	}

	pc=v->vval;
	do
	{
	  switch (xev->rwm->code[pc].ctyp)
	  {
	    /* ceint2 and 4 interesting */
	    case RWL_CODE_ELSEIF:   
	    case RWL_CODE_ELSE:   
	      printf("%d:%s:%d:%d ", pc, xev->rwm->code[pc].cname
	        , xev->rwm->code[pc].ceint2, xev->rwm->code[pc].ceint4);
	    break;

	    /* ceint2 interesting */
	    case RWL_CODE_IF:      
	    case RWL_CODE_FORL:
	      printf("%d:%s:%d ", pc, xev->rwm->code[pc].cname, xev->rwm->code[pc].ceint2);
	    break;

	    /* ceint6 interesting */
	    case RWL_CODE_CURLOOPAT:    
	    case RWL_CODE_CURLOOP:    
	      printf("%d:%s:%d ", pc, xev->rwm->code[pc].cname, xev->rwm->code[pc].ceint6);
	    break;

	    /* ceint4 interesting */
	    case RWL_CODE_READLOOP:    
	    case RWL_CODE_READLAND:    
	      printf("%d:%s:%d ", pc, xev->rwm->code[pc].cname, xev->rwm->code[pc].ceint4);
	    break;
	    
	    /* just print name */
	    default:
	      printf("%d:%s ", pc, xev->rwm->code[pc].cname);
	    break;
	  }
	  if (xev->rwm->code[pc].ctyp >= RWL_CODE_END)
	    break;
	  pc++;
	} while (1);
	fputs("\n", stdout);
      }
    break;

    case RWL_TYPE_SQL:
      {
	rwl_sql *sq;
	rwl_bindef *bd;
	sq = v->vdata;
	if (bit(sq->flags, RWL_SQFLAG_DYNAMIC))
	  printf("identifier %d %s dynamic sql declared at line %d:\n", varix, v->vname
		, v->loc.lineno);
	else
	  printf("identifier %d %s %s declared at line %d:\n%s\n/\n", varix, v->vname
		, bit(sq->flags, RWL_SQFLAG_LEXPLS) ? "PL/SQL" : "SQL" 
		, v->loc.lineno, sq->sql);
	if (sq->asiz)
	  printf("  array %d\n", sq->asiz);
	bd = sq->bindef;
	while (bd)
	{
	  switch(bd->bdtyp)
	  {
	    case RWL_BIND_NAME:
	      printf("  bind %s %s\n", bd->bname, bd->vname);
	    break;

	    case RWL_BINDOUT_NAME:
	      printf("  bindout %s %s\n", bd->bname, bd->vname);
	    break;
	  
	    case RWL_BINDOUT_POS:
	      printf("  bindout %d %s\n", bd->pos, bd->vname);
	    break;

	    case RWL_BIND_POS:
	      printf("  bind %d %s\n", bd->pos, bd->vname);
	    break;

	    case RWL_DEFINE:
	      printf("  define %d %s\n", bd->pos, bd->vname);
	    break;

	  }
	  bd=bd->next;
	}
      }
    break;

    case RWL_TYPE_RAPROC:
    case RWL_TYPE_RAST:
      {
	rwl_rastvar *rv;
	ub4 j;
	char *s1, *s2;
	if (v->vtype==RWL_TYPE_RAST)
	  { s1="\""; s2="string"; }
	else
	  { s1="\'"; s2="procedure"; }
	rv = v->vdata;
	printf("identifier %d %s random %s array declared at line %d:\n"
	  , varix, v->vname, s2, v->loc.lineno);
	for (j=0; j<rv->cnt; j++)
	  printf("%d %s%s%s %.4f\n", j, s1, rv->pstr[j], s1, rv->pwht[j]);

      }
    break;

    case RWL_TYPE_DB:
      {
	rwl_cinfo *db = v->vdata;
	if (db)
	{
	  printf("identifier %d %s database %s@%*s %s flags:0x%x declared at line %d\n",
	    varix, v->vname, db->username, db->conlen, db->connect, db->pooltext, db->flags, v->loc.lineno);
	}
	else
	  printf("identifier %d %s UNFINISHED database at line %d\n",
	    varix, v->vname, v->loc.lineno);

      }
    break;

    default:
      printf("identifier %d illegal(%d) declared at line %d\n", varix, v->vtype, v->loc.lineno );
    break;
  }


}

void rwlreleaseallvars(rwl_xeqenv *xev)
{
  /* release all variables */
  ub4 i;
  rwl_identifier *v;
    
  v = xev->evar;
  for (i=0; i<xev->varcount; i++)
  {
    if (bit(xev->tflags,RWL_DEBUG_VARIABLE))
      rwldebug(xev->rwm, "variable %s[%d] declared at %s %d type %s flags 0x%x is now being released",
	v[i].vname, i, v[i].loc.fname, v[i].loc.lineno, v[i].stype, v[i].flags);

    switch(v[i].vtype)
    {
      case RWL_TYPE_FUNC:
      case RWL_TYPE_PROC:
        if (v[i].v3val) // count of local variables
	  rwlfree(xev->rwm, v[i].vdata);
	break;

      case RWL_TYPE_INT:
      case RWL_TYPE_STR:
      case RWL_TYPE_DBL:
	if (v[i].num.vsalloc == RWL_SVALLOC_TEMP || v[i].num.vsalloc == RWL_SVALLOC_FIX)
          rwlfree(xev->rwm, v[i].num.sval);
        v[i].num.vsalloc = RWL_SVALLOC_NOT;
        v[i].num.sval = 0;
      break;

      case RWL_TYPE_CLOB:
      case RWL_TYPE_NCLOB:
      case RWL_TYPE_BLOB:
	if (v[i].num.vptr)
	{
          rwlfreelob(xev, (rwl_location *)0, (OCILobLocator *)v[i].num.vptr);
	  v[i].num.vptr = 0;
	}
      break;

      case RWL_TYPE_FILE:
        if (bit(v[i].num.valflags,RWL_VALUE_FILE_OPENW|RWL_VALUE_FILE_OPENR) 
	      && !bit(v[i].flags, RWL_IDENT_INTERNAL))
	{
	  rwlerror(xev->rwm, RWL_ERROR_FILE_WILL_CLOSE, v[i].vname);
	  if (bit(v[i].num.valflags,RWL_VALUE_FILEISPIPE))
	  {
	    pclose(v[i].num.vptr);
	    if (v[i].num.v2ptr)
	      rwlfree(xev->rwm, v[i].num.v2ptr);
	  }
	  else
	  {
	    fclose(v[i].num.vptr);
	  }
	}
      break;

      case RWL_TYPE_DB:
        {
	  rwl_cinfo *db = v[i].vdata;
	  // Cannot release a connection pool until 
	  // the database that are using it are release
	  if (RWL_DBPOOL_CONNECT != db->pooltype)
	    rwldbdisconnect(xev, 0, v[i].vdata);
	}
      break;

      case RWL_TYPE_SQL:
	{
	  rwl_sql *sq;
	  rwl_bindef *bd;
	  sq = v[i].vdata;

	  /* clean out the bindef list */
	  bd = sq->bindef;
	  while (bd)
	  {
	    rwl_bindef *sav = bd;
	    bd = bd->next;
	    rwlfree(xev->rwm, sav);
	  }

	  /* clean up the array bind stuff */
	  if (bit(sq->flags, RWL_SQFLAG_ARRAYB))
	    rwlfreeabd(xev, 0, sq);
	}
      break;
    
      default: // prevent compiler warning
      break;
    }
  
  }

  // Repeat for connection pools which we cannot
  // release until their sessions have been 
  // released above
  for (i=0; i<xev->varcount; i++)
  {
    switch(v[i].vtype)
    {
      case RWL_TYPE_DB:
        {
	  rwl_cinfo *db = v[i].vdata;
	  if (RWL_DBPOOL_CONNECT == db->pooltype)
	    rwldbdisconnect(xev, 0, v[i].vdata);
	}
      break;

      default: // shut up gcc
      break;
    }
  }
}

/* make sure a string has been allocated */
void rwlinitstrvar(rwl_xeqenv *xev, rwl_value *num)
{
  /*assert*/
  if (num->vtype != RWL_TYPE_STR)
  {
    rwlsevere(xev->rwm, "[rwlinitstrvar-notstr:%d]", num->vtype);
    return;
  }

  /*assert*/
  if (num->slen <= 0)
  {
    rwlsevere(xev->rwm, "[rwlinitstrvar-badlen:%d]", num->slen);
    return;
  }

  if (num->vsalloc == RWL_SVALLOC_NOT)
  {
    num->sval = rwlalloc(xev->rwm, num->slen);
    num->sval[0] = 0;
    num->isnull = 0;
    num->vsalloc = RWL_SVALLOC_FIX;
  }
}

/* cancel a variable if incorrectly defined 
 * 
 * so far this is only used with random string or procedure
 * arrays, which can only be global, so no need for local
 * variable stuff (yet)
 */
void rwlcancelvar(rwl_main *rwm, text *vname, sb4 guess)
{
  sb4 varn;
  varn = rwlfindvar(rwm->mxq, vname, guess);
  if (varn>=0)
  {
    rwm->mxq->evar[varn].vtype = RWL_TYPE_CANCELLED;
  }
}

/* - seach for variable named vnam at a guess of *guess
 * - make sure it is local of function func
 * - find its actual array entry in func->vdata (of type rwl_localvar *)
 * - the same entry is used in xev->locals[depth]
 *
 * return >=0 if the variable is local
 */
sb4 rwllocalvar
( rwl_xeqenv *xev
, text *vnam
, sb4 *guess
, rwl_identifier *func)
{
  sb4 y, x;
  rwl_localvar *loca;

  x = rwlfindvarug2(xev, vnam, guess, func->vname);
  if (x<0)
    return x;

  if (!bit(xev->evar[x].flags,RWL_IDENT_LOCAL))
    return RWL_VAR_NOTLOCAL;

  /* find the entry in the array of local variables
   * starting at 1 because entry 0 isused to hold
   * the return value and has no name 
   *
   * v3val in the procedure/function is the number of local 
   * variables 
   */
  loca = (rwl_localvar *)func->vdata;
  for (y=1; y<func->v3val; y++)
  {
    if (!rwlstrcmp(loca[y].aname,vnam))
      break;
  }
  if (y>=func->v3val)
    return RWL_VAR_NOTFOUND;

  /* everything is good */

  /* v3val in local variables are used to index locals[depth] */
  xev->evar[x].v3val = (ub1)y;

  return y;
}

rwlcomp(rwlvariable_c, RWL_GCCFLAGS)
