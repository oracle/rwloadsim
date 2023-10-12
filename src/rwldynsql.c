/*
 * RWP*Load Simulator
 *
 * Copyright (c) 2023 Oracle Corporation
 * Licensed under the Universal Permissive License v 1.0
 * as shown at https://oss.oracle.com/licenses/upl/
 *
 * Real World performance Load simulator DYNamic SQL
 *
 * rwldynsql.c
 *
 * History
 *
 * bengsig  12-oct-2023 - backport ampersand at end of sql fix
 * bengsig  25-sep-2023 - ampersand bug fix
 * bengsig  22-sep-2023 - ampersand needs thread local sql
 * bengsig  21-sep-2023 - ampersand on integer, double
 * bengsig  12-sep-2023 - ampersand replacement
 * bengsig  21-feb-2022 - Implicit bind and define
 * bengsig  31-aug-2020 - Remove meaningless #ifdef NEVER
 * bengsig  25-mar-2020 - Creationk
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <sys/time.h>
#include <math.h>
#include "rwl.h"

void rwldynsrelease(rwl_xeqenv *xev, rwl_location *loc, rwl_sql *sq
, text *fname)
{
  rwl_bindef *bd, *newbd;

  // assert
  if (!sq)
  {
    rwlexecsevere(xev, loc, "[rwldynsrelease-nosql:%s]", fname?fname:(void*)"");
    return;
  }

  if (sq->aix)
  {
    rwlexecerror(xev, loc, RWL_ERROR_CANNOT_MODIFY_NOW, "release", sq->vname);
    return;
  }
  // walk thru and release binds/defines
  // or link them back to a new list
  newbd = 0;
  bd = sq->bindef;
  while (bd)
  {
    rwl_bindef *sav = bd;
    bd = bd->next;

    if (bit(sav->bdflags, RWL_BDFLAG_FIXED))
    {
      // keep those that were in the original 
      // declaration
      sav->next = newbd;
      newbd = sav;
    }
    else
    {
      // remove and adjust counts for the others
      switch (sav->bdtyp)
      {
	case RWL_BIND_POS:
	case RWL_BIND_NAME:
	  sq->bincount--;
	break;

	case RWL_BINDOUT_POS:
	case RWL_BINDOUT_NAME:
	  sq->outcount--;
	break;

	case RWL_DEFINE:
	  sq->defcount--;
	break;
      }

      if (bit(sav->bdflags, RWL_BDFLAG_BNALLOC))
      {
	rwlfree(xev->rwm, sav->bname);
      }
      rwlfree(xev->rwm, sav);
    }
  }
  sq->bindef = newbd;


  // and free sqltxt
  if (sq->sql)
  {
    rwlfree(xev->rwm, sq->sql);
    sq->sql = 0;
    sq->sqllen = 0;
  }

  // sql_id
 
  sq->sqlidlen = 0;
  sq->sqlid = 0;

  // and flags
  bic(sq->flags, RWL_SQFLAG_GOTID|RWL_SQLFLAG_IBDONE|RWL_SQLFLAG_IDDONE|RWL_SQLFLAG_BDPRT);
  //bic(sq->flags, RWL_SQFLAG_GOTID);
  
}

void rwldynstext(rwl_xeqenv *xev, rwl_location *loc, rwl_sql *sq, rwl_value *pnum
, text *fname)
{
  (void) fname;

  if (sq->aix)
  {
    rwlexecerror(xev, loc, RWL_ERROR_CANNOT_MODIFY_NOW, "for", sq->vname);
    return;
  }

  if (sq->sql)
  {
    rwlexecerror(xev, loc, RWL_ERROR_SQLTEXT_ALREADY, sq->vname);
    return;
  }

  sq->sql = rwlstrdup(xev->rwm, pnum->sval);
  sq->sqllen = (ub4) rwlstrlen(sq->sql);
}

void rwldynsbindef(rwl_xeqenv *xev, rwl_location *loc, rwl_sql *sq
, rwl_value *pnum, sb4 vnum, text *vnam, ub1 bdtyp
, text *fname)
{
  rwl_bindef *bd;

  // asserts
  if (!pnum || !pnum->sval)
  {
    rwlexecsevere(xev, loc, "[rwldynsbindef-sval:%s]", fname?fname:(text*)"");
    return;
  }

  if (!vnam)
  {
    rwlexecsevere(xev, loc, "[rwldynsbindef-novnam:%s]", fname?fname:(text*)"");
    return;
  }

  if (!sq)
  {
    rwlexecsevere(xev, loc, "[rwldynsbindef-nosql:%s]", fname?fname:(text*)"");
    return;
  }

  if (rwlverifyvg(xev, vnam, vnum, fname) != vnum)
  {
    rwlexecsevere(xev, loc, "[rwldynsbindef-badvar:%s;%d;%s]", vnam, vnum, fname?fname:(text*)"");
    return;
  }

  if (sq->aix)
  {
    switch (bdtyp)
    {
      case RWL_DEFINE:
	rwlexecerror(xev, loc, RWL_ERROR_CANNOT_MODIFY_NOW, "define", sq->vname);
      break;
	
      case RWL_BIND_NAME:
      case RWL_BIND_POS:
      case RWL_BIND_UNK:
	rwlexecerror(xev, loc, RWL_ERROR_CANNOT_MODIFY_NOW, "bind", sq->vname);
      break;

      case RWL_BINDOUT_NAME:
      case RWL_BINDOUT_POS:
      case RWL_BINDOUT_UNK:
	rwlexecerror(xev, loc, RWL_ERROR_CANNOT_MODIFY_NOW, "bindout", sq->vname);
      break;

      default:
	rwlexecsevere(xev, loc, "[rwldynsbindef-baderror:%d;%s;%d;%s]"
	, bdtyp, vnam, vnum, fname?fname:(text*)"");
      break;

    }
    return;
  }


  bd = rwlalloc(xev->rwm, sizeof(rwl_bindef));
  bd->vname = vnam;
  bd->vguess = vnum;
  bd->vtype = xev->evar[vnum].vtype;
  bd->bdtyp = bdtyp;

  // if bind and : found, change
  switch (bdtyp)
  {
    case RWL_DEFINE:
      bd->pos = (ub4)pnum->ival;
      sq->defcount++;
    break;
      
    case RWL_BIND_UNK:
      if (':' == pnum->sval[0])
      {
	bd->bdtyp = RWL_BIND_NAME;
	bd->bname = rwlstrdup(xev->rwm, pnum->sval);
	bis(bd->bdflags, RWL_BDFLAG_BNALLOC);
      }
      else
      {
	bd->bdtyp = RWL_BIND_POS;
	bd->pos = (ub4)pnum->ival;
	if (bit(xev->rwm->m2flags,RWL_P2_BINDZERO))
	  bd->pos++;
      }
      sq->bincount++;
    break;

    case RWL_BINDOUT_UNK:
      if (':' == pnum->sval[0])
      {
	bd->bdtyp = RWL_BINDOUT_NAME;
	bd->bname = rwlstrdup(xev->rwm, pnum->sval);
	bis(bd->bdflags, RWL_BDFLAG_BNALLOC);
      }
      else
      {
	bd->bdtyp = RWL_BINDOUT_POS;
	bd->pos = (ub4)pnum->ival;
	if (bit(xev->rwm->m2flags,RWL_P2_BINDZERO))
	  bd->pos++;
      }
      sq->outcount++;
    break;

  }

  /* add me to the linked list of the SQL */
  bd->next = sq->bindef;
  sq->bindef = bd;
}

#define rwlisvar0(c) ( ((c)>='a'&&(c)<='z') || ((c)>='A'&&(c)<='Z') )
#define rwlisvar(c) ( rwlisvar0(c) || ('_'==(c)) || ((c)>='0'&&(c)<='9') )

ub4 rwldynarcheck(rwl_main *rwm)
{
  // See if rwm->sqsav appears to use ampersand replacement
  
  text *in;

  if (!rwm->sqsav)
  {
    rwlsevere(rwm, "[rwldynarcheck-nosql]");
    return 0;
  }

  in = rwm->sqsav->sql;
  if (!in)
  {
    rwlsevere(rwm, "[rwldynarcheck-notext:%s]",rwm->sqsav->vname);
    return 0;
  }

  while (*in)
  {
    if ('&' != *in)
    { 
      in++;
    }
    else
    { // found &
      in++;
      if ('&' == *in)
      {
	// seen &&, so this is real
	return 1;
      }
      else
      {
	// see if it could be a variable name
	if (rwlisvar0(*in))
	{
	  in++;
	  while (rwlisvar(*in))
	    in++;
	  if ('.' == *in)
	  {
	    // seen &varname. - this is real
	    return 1;
	  }
	}
	in++;
      }
    }
  }
  return 0;
}

ub4 rwldynarcomp(rwl_main *rwm)
{
  // compile ampersand replacement in rwm->sqsav
  
  text *in, *yt;
  rwl_arvar *heada, *thisa, *lasta;

  if (!rwm->sqsav)
  {
    rwlsevere(rwm, "[rwldynarcomp-nosql]");
    return 0;
  }

  in = rwm->sqsav->sql;
  // asserts
  if (!in)
  {
    rwlsevere(rwm, "[rwldynarcomp-notext:%s]",rwm->sqsav->vname);
    return 0;
  }

  if (rwm->sqsav->adsql)
  {
    rwlsevere(rwm, "[rwldynarcomp-already:%s;%s]",rwm->sqsav->vname, rwm->sqsav->adsql);
    return 0;
  }

  // allocate space for the sql ready for replacements
  rwm->sqsav->adsql = yt = rwlalloc(rwm, rwm->sqsav->sqllen);
  heada = thisa = lasta = 0;
  rwm->sqsav->admax = 0;

  while (*in)
  {
    if ('&' != *in)
    { 
      // just copy when not &
      *yt = *in;
      in++;
      yt++;
    }
    else
    { // found &
      in++;
      if ('&' == *in)
      {
	// seen &&, copy & to yt
	*yt = '&';
	in++;
	yt++;
      }
      else
      {
	// see if it could be a variable name
	ub4 vlen = 0;
	sb4 l;
	text vnam[RWL_MAX_IDLEN+1];
	if (rwlisvar0(in[vlen]))
	{
	  vlen++;
	  // scan until we see something not a name
	  while (rwlisvar(in[vlen]))
	    vlen++;
	  if ('.' == in[vlen])
	  {
	    // seen &varname. is length ok?
	    if (vlen > RWL_MAX_IDLEN)
	    {
	      rwlerror(rwm, RWL_ERROR_VERY_LONG_IDENTIFIER, vlen, in);
	      goto arcompfailure;
	    }
	    rwlstrnncpy(vnam, in, vlen+1);
	    // does it exist
	    l = rwlfindvar2(rwm->mxq, vnam, RWL_VAR_NOGUESS, rwm->codename);
	    if (l<0)
	      goto arcompfailure;
	    // is it an ordinary scalar
	    switch (rwm->mxq->evar[l].vtype)
	    {
	      case RWL_TYPE_STR:
	      case RWL_TYPE_INT:
	      case RWL_TYPE_DBL:
	        break;
	      default:
		rwlerror(rwm,RWL_ERROR_INCORRECT_TYPE2, rwm->mxq->evar[l].stype, vnam, "ampersand replacement");
		goto arcompfailure;
	    }
	    // there is a valid variable, save it
	    if (rwm->mxq->evar[l].num.slen >= 1)
	      rwm->sqsav->admax += (ub4) rwm->mxq->evar[l].num.slen - 1;
	    thisa = rwlalloc(rwm, sizeof(rwl_arvar));
	    if (!heada)
	    {
	      // begin the linked list
	      lasta = heada = thisa;
	    }
	    else
	    {
	      // add to end of linked list
	      lasta->arnxt = thisa;
	      lasta = thisa;
	    }
	    // we need a copy of the name as we later free the original sql
	    rwlstrcpy(thisa->arvnam, vnam);
	    thisa->arvnum = l;
	    thisa->arpos = (ub4) (yt - rwm->sqsav->adsql);
	    goto goodarvarfound;
	  }
	}
	// if we reach here, & and invalid context seen
	rwlerror(rwm, RWL_ERROR_BAD_AMPREP_FOUND, in[vlen]);
	rwlsqlerrlin(rwm->mxq, &rwm->loc, rwm->sqsav, (ub4) (in - rwm->sqsav->sql + vlen));
	goto arcompfailure;
	goodarvarfound:
	  // simply skip over &name. 
	  in += vlen+1;
      }
    }
  }
  if (heada)
  {
    // replacements found

    if (rwm->sqsav->admax > RWL_ARVAR_MAXLEN)
    {
      // we add this check to warn the user if using extremely long
      // variables. User can always mute this if needed
      // note that we continue regardless of the warning
      rwlerror(rwm, RWL_ERROR_AMPREP_TOO_LONG_VAR, rwm->sqsav->admax);
    }

    rwm->sqsav->admax += rwm->sqsav->sqllen;
    // free the original and make space for the replacement
    // that will happen in e.g. rwlexecsql
    rwlfree(rwm, rwm->sqsav->sql);
    rwm->sqsav->admax += 2; // precaution
    rwm->sqsav->sql = rwlalloc(rwm, rwm->sqsav->admax);
    // Now, the sql variable is large enough to hold any replaced stuff
    // as it has the original length plus the sum of all max var lengths
    // plus a few extra bytes
    rwm->sqsav->sqllen = 0;
    rwm->sqsav->arlist = heada;
    bis(rwm->sqsav->flags, RWL_SQLFLAG_ARDYN); // make us later do replacement
    return 1;
  }
  else
  {
    // no ampersand
    rwlfree(rwm, rwm->sqsav->adsql);
    rwm->sqsav->adsql = 0;
    bic(rwm->sqsav->flags, RWL_SQLFLAG_ARDYN); // no ampersand in sql
    return 0;
  }
  
arcompfailure:
  // we skip the deallocate as we don't have back links
  // this should not happen anyway
  rwm->mxq->evar[rwm->sqsavvarn].vtype = RWL_TYPE_CANCELLED;
  rwm->mxq->evar[rwm->sqsavvarn].stype = "cancelled (sql)";
  return 0;
}

void rwldynarreplace(rwl_xeqenv *xev
, rwl_location *loc
, rwl_sql *sq
, text *fname)
{
  rwl_value *ss;
  text *in, *yt;
  ub4 inpos, ytpos;
  rwl_arvar *avl;

  // asserts
  if (!sq->sql)
  {
    rwlexecsevere(xev, loc, "[rwldynarreplace-nosql:%s]", fname?fname:(void*)"");
    return;
  }
  if (!sq->adsql)
  {
    rwlexecsevere(xev, loc, "[rwldynarreplace-noadsql:%s]", fname?fname:(void*)"");
    return;
  }

  // array code easier than pointer code
  inpos = ytpos = 0;
  in = sq->adsql;
  yt = sq->sql; // was allocated in rwldynarcomp and known to be long enough
  avl = sq->arlist;
  // clear flags so we redo everything
  bic(sq->flags, RWL_SQFLAG_GOTID|RWL_SQLFLAG_IBDONE|RWL_SQLFLAG_IDDONE|RWL_SQLFLAG_BDPRT);

  while (1)
  {
    if (avl && inpos == avl->arpos)
    {
      // We found where to copy the contents of a variable
      ub4 actlen;
      ss = rwlnuminvar(xev, xev->evar+avl->arvnum);
      if (ss->sval)
      {
	if (bit(xev->tflags, RWL_DEBUG_MISC))
	  rwldebug(xev->rwm, "dynarrep v=%s:%d t=%d s=%s i=%d", avl->arvnam
	  , avl->arvnum, xev->thrnum, ss->sval, ss->ival);
	// copy the variable contents
	actlen = (ub4) rwlstrlen(ss->sval);
	// assert we have space
	if (actlen + ytpos > sq->admax)
	{
	  rwlexecsevere(xev, loc, "[rwldynarreplace-space:%d;%d;%s;%s;%s]"
	  , ytpos, sq->admax
	  , ss->sval, avl->arvnam
	  , fname?fname:(void*)"");
	  return;
	}
	// do the copy and increment ytpos
	rwlstrcpy(yt+ytpos, ss->sval);
	ytpos += actlen;
      }
      // on to next replacement variable
      avl = avl->arnxt;
    }
    // just another precaution assert
    if (ytpos >= sq->admax)
    {
      rwlexecsevere(xev, loc, "[rwldynarreplace-space2:%d;%d;%s]"
      , ytpos, sq->admax 
      , fname?fname:(void*)"");
      return;
    }
    // copy next character over
    yt[ytpos] = in[inpos];
    if (0 == in[inpos])
      break;
    inpos++;
    ytpos++;
  }
  // and set the final length ready for OCIStmtPrepare
  sq->sqllen = ytpos;
}

rwlcomp(rwldynsql_c, RWL_GCCFLAGS)
