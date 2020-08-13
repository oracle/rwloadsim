/*
 * Real World performance Load simulator DYNamic SQL
 *
 * rwldynsql.c
 *
 * History
 *
 * bengsig 25-mar-2020 - Creationk
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

  if (bit(xev->tflags, RWL_DEBUG_MISC))
    rwldebug(xev->rwm, "dynrel %s", sq->vname);

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

#ifdef NEVER
  // This is now done in rwlflushsql2 and rwlrollback
  // if array bind, clean up
  if (bit(sq->flags, RWL_SQFLAG_ARRAYB))
  {
    rwlfreeabd(xev, loc, sq);
    bic(sq->flags, RWL_SQFLAG_ARRAYB);
  }
#endif

  // and free sqltxt
  if (sq->sql)
  {
    rwlfree(xev->rwm, sq->sql)
    sq->sql = 0;
    sq->sqllen = 0;
  }

  // sql_id
 
  sq->sqlidlen = 0;
  sq->sqlid = 0;

  // and flags
  bic(sq->flags, RWL_SQFLAG_GOTID);
  
}

void rwldynstext(rwl_xeqenv *xev, rwl_location *loc, rwl_sql *sq, rwl_value *pnum
, text *fname)
{
  if (bit(xev->tflags, RWL_DEBUG_MISC))
    rwldebug(xev->rwm, "dyntext %s %s %s", sq->vname, pnum->sval,fname?fname:(text*)"");

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
	rwlexecsevere(xev, loc, "[rwldynsbindef-baderror:%d;%s;%d;%s]", bdtyp, vnam, vnum, fname?fname:(text*)"");
      break;

    }
    return;
  }


  bd = rwlalloc(rwm, sizeof(rwl_bindef));
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

rwlcomp(rwldynsql_c, RWL_GCCFLAGS)
