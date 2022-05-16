/*
 * RWP*Load Simulator
 *
 * Copyright (c) 2022 Oracle Corporation
 * Licensed under the Universal Permissive License v 1.0
 * as shown at https://oss.oracle.com/licenses/upl/
 *
 * Real World performance Load simulator code addition
 *
 * rwlcodeadd.c
 *
 * Handle everything that has to with adding code to the pcode machine
 *
 * History
 *
 * bengsig  16-may-2022 - Flush local sql upon exit
 * bengsig  06-apr-2022 - flush array dml
 * bengsig  31-mar-2022 - Warn if using future sql keyword as identifier
 * bengsig  04-mar-2022 - printf project
 * bengsig  13-aug-2021 - Add break
 * bengsig  19-jul-2021 - gcc 8 fallthru warning
 * bengsig  14-jun-2021 - Deprecate legacy control loop syntax
 * bengsig  09-jun-2021 - Add modify database cursorcache/sessionpool
 * bengsig  08-apr-2021 - Add constants rwl_zero, etc
 * bengsig  25-mar-2021 - elseif, check code_t
 * bengsig  08-mar-2021 - Add cursor leak
 * bengsig  16-dec-2020 - exit
 * bengsig  17-nov-2020 - regexextract
 * bengsig  04-sep-2020 - Get rid of gcc warnings
 * bengsig  30-apr-2020 - Regular expressions
 * bengsig  15-apr-2020 - File reading
 * bengsig  26-mar-2020 - dynamic sql
 * bengsig  27-feb-2019 - Added "and expresseion" to cursor loops
 * bengsig  06-feb-2019 - OCIPing
 * bengsig         2017 - Creation
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "rwl.h"

/* add a code to our program
 *
 * This routine will extend the total program
 * with one new entry
 *
 * This routine does the real work with up to seven
 * potential arguments
 */

void rwlcodeadd(rwl_main *rwm, rwl_code_t ctype, void *parg1
, ub4 arg2, void *parg3, ub4 arg4, void *parg5, ub4 arg6, void *parg7)
{

  // elseif needs space for two
  if (RWL_CODE_ELSEIF == ctype && rwm->ccount+2 >= rwm->maxcode)
  { 
    rwlerror(rwm, RWL_ERROR_NO_CODE_SPACE, rwm->maxcode);
    rwlerrormute(rwm,RWL_ERROR_NO_CODE_SPACE, 0);
    return;
  }

  rwm->code[rwm->ccount].ctyp = ctype;
  memcpy(&rwm->code[rwm->ccount].cloc, &rwm->loc, sizeof(rwl_location));

  if (bit(rwm->m3flags, RWL_P3_BNOXPROC|RWL_P3_BNOXFUNC))
  {
    // If we are not really building due to an error
    // only really add head/sqlend/end 
    switch (ctype)
    {
      case RWL_CODE_HEAD:
      case RWL_CODE_SQLEND:
      case RWL_CODE_END:
        break;
      default:
      	return;
    }
  }


  switch(ctype)
  {
    case RWL_CODE_HEAD:    rwm->code[rwm->ccount].cname = "head"; break;
    case RWL_CODE_CBLOCK_BEG:    rwm->code[rwm->ccount].cname = "cbbeg"; break;
    case RWL_CODE_CBLOCK_END:    rwm->code[rwm->ccount].cname = "cbend"; break;
    case RWL_CODE_SQLHEAD: rwm->code[rwm->ccount].cname = "hddb"; break;
    case RWL_CODE_ASSIGN:  rwm->code[rwm->ccount].cname = "assn"; break;
    case RWL_CODE_APPEND:  rwm->code[rwm->ccount].cname = "appn"; break;
    case RWL_CODE_STACK:  rwm->code[rwm->ccount].cname = "proc()"; break;
    case RWL_CODE_SQL:     rwm->code[rwm->ccount].cname = "sql"; break;
    case RWL_CODE_SQLAT:     rwm->code[rwm->ccount].cname = "sqlat"; break;
    case RWL_CODE_SQLLEAK:  rwm->code[rwm->ccount].cname = "sqleak"; break;
    case RWL_CODE_SQLCCON:  rwm->code[rwm->ccount].cname = "ccon"; break;
    case RWL_CODE_SQLCCOFF:  rwm->code[rwm->ccount].cname = "ccoff"; break;
    case RWL_CODE_SQLARRAY:  rwm->code[rwm->ccount].cname = "sqar"; break;
    case RWL_CODE_SQLFLUSH:  rwm->code[rwm->ccount].cname = "sqflush"; break;
    case RWL_CODE_COMMIT:    rwm->code[rwm->ccount].cname = "cmmt"; break;
    case RWL_CODE_OCIPING:    rwm->code[rwm->ccount].cname = "oping"; break;
    case RWL_CODE_SETCCLASS:    rwm->code[rwm->ccount].cname = "scclss"; break;
    case RWL_CODE_SESRELDROP:    rwm->code[rwm->ccount].cname = "drops"; break;
    case RWL_CODE_ROLLBACK:  rwm->code[rwm->ccount].cname = "rllb"; break;
    case RWL_CODE_GETRUSAGE:  rwm->code[rwm->ccount].cname = "getru"; break;
    case RWL_CODE_SHIFT:  rwm->code[rwm->ccount].cname = "shift"; break;
    case RWL_CODE_CURLOOP:    rwm->code[rwm->ccount].cname = "curloop"; break;
    case RWL_CODE_CURLOOPAT:    rwm->code[rwm->ccount].cname = "curlat"; break;
    case RWL_CODE_DYNSTXT:    rwm->code[rwm->ccount].cname = "dqtxt"; break;
    case RWL_CODE_DYNSREL:    rwm->code[rwm->ccount].cname = "dqrel"; break;
    case RWL_CODE_DYNBINDEF:  rwm->code[rwm->ccount].cname = "dqbd"; break;
    case RWL_CODE_READLOB:    rwm->code[rwm->ccount].cname = "rdlob"; break;
    case RWL_CODE_WRITELOB:    rwm->code[rwm->ccount].cname = "wrlob"; break;
    case RWL_CODE_REGEX:    rwm->code[rwm->ccount].cname = "regex"; break;
    case RWL_CODE_REGEXTRACT:    rwm->code[rwm->ccount].cname = "reext"; break;
    case RWL_CODE_REGEXSUB:    rwm->code[rwm->ccount].cname = "resub"; break;
    case RWL_CODE_REGEXSUBG:    rwm->code[rwm->ccount].cname = "resubg"; break;
    case RWL_CODE_READLINE:    rwm->code[rwm->ccount].cname = "rdlin"; break;
    case RWL_CODE_FPRINTF:    rwm->code[rwm->ccount].cname = "fprintf"; break;
    case RWL_CODE_SPRINTF:    rwm->code[rwm->ccount].cname = "sprintf"; break;
    case RWL_CODE_READLOOP:    rwm->code[rwm->ccount].cname = "rdloop"; break;
    case RWL_CODE_READLAND:    rwm->code[rwm->ccount].cname = "rdland"; break;
    case RWL_CODE_READEND:    rwm->code[rwm->ccount].cname = "rdend"; break;
    case RWL_CODE_RAPROC:  rwm->code[rwm->ccount].cname = "raproc"; break;
    case RWL_CODE_PRINT:   rwm->code[rwm->ccount].cname = "prnt"; break;
    case RWL_CODE_WRITE:   rwm->code[rwm->ccount].cname = "write"; break;
    case RWL_CODE_PRINTBLANK:   rwm->code[rwm->ccount].cname = "prbl"; break;
    case RWL_CODE_WRITEBLANK:   rwm->code[rwm->ccount].cname = "wrbl"; break;
    case RWL_CODE_NEWLINE: rwm->code[rwm->ccount].cname = "newl"; break;
    case RWL_CODE_NEWLINEFILE: rwm->code[rwm->ccount].cname = "nlfil"; break;
    case RWL_CODE_FFLUSH:  rwm->code[rwm->ccount].cname = "fflsh"; break;
    case RWL_CODE_END:     rwm->code[rwm->ccount].cname = "end"; break;
    case RWL_CODE_RETURN:  rwm->code[rwm->ccount].cname = "return"; break;
    case RWL_CODE_EXIT:  rwm->code[rwm->ccount].cname = "exit"; break;
    case RWL_CODE_BREAK:  rwm->code[rwm->ccount].cname = "break"; break;
    case RWL_CODE_CURBRK:  rwm->code[rwm->ccount].cname = "curbrk"; break;
    case RWL_CODE_ABORT:  rwm->code[rwm->ccount].cname = "abort"; break;
    case RWL_CODE_SQLEND:  rwm->code[rwm->ccount].cname = "enddb"; break;
    case RWL_CODE_ENDCUR:  rwm->code[rwm->ccount].cname = "endcur"; break;
    case RWL_CODE_CANCELCUR:  rwm->code[rwm->ccount].cname = "cancur"; break;
    case RWL_CODE_IF:      rwm->code[rwm->ccount].cname = "if"; break;
    case RWL_CODE_ELSE:    rwm->code[rwm->ccount].cname = "else"; break;
    case RWL_CODE_ELSEIF:    rwm->code[rwm->ccount].cname = "elseif"; break;
    case RWL_CODE_FORL:    rwm->code[rwm->ccount].cname = "forl"; break;
    case RWL_CODE_ENDIF:   rwm->code[rwm->ccount].cname = "endif"; break;
    case RWL_CODE_WAIT:    rwm->code[rwm->ccount].cname = "wait"; break;
    case RWL_CODE_SUSPEND: rwm->code[rwm->ccount].cname = "susp"; break;
    case RWL_CODE_NEWDB  : rwm->code[rwm->ccount].cname = "newdb"; break;
    case RWL_CODE_DEFDB  : rwm->code[rwm->ccount].cname = "defdb"; break;
    case RWL_CODE_OLDDB  : rwm->code[rwm->ccount].cname = "olddb"; break;
    case RWL_CODE_PCINCR : rwm->code[rwm->ccount].cname = "pcinc"; break;
    case RWL_CODE_PCDECR : rwm->code[rwm->ccount].cname = "pcdec"; break;
    case RWL_CODE_MODSESP : rwm->code[rwm->ccount].cname = "mdbsp"; break;
    case RWL_CODE_MODCCACHE : rwm->code[rwm->ccount].cname = "mdbcc"; break;
    default:
      rwlsevere(rwm, "[rwlcodeadd-badctype:%d]", ctype);
  }

  switch(ctype)
  {
    case RWL_CODE_CURBRK:
    case RWL_CODE_BREAK:
      // ceint4 is used to backtrace the places where we
      // do a break, at codeend, we will fill in ceint2
      // with the goto location
      rwm->code[rwm->ccount].ceint4 = (sb4) arg4;
    break;

    case RWL_CODE_ABORT:
    case RWL_CODE_END:
    case RWL_CODE_SHIFT:
    case RWL_CODE_ROLLBACK:
    case RWL_CODE_COMMIT:
    case RWL_CODE_OCIPING:
    case RWL_CODE_SESRELDROP:
    case RWL_CODE_GETRUSAGE:
    case RWL_CODE_NEWLINE:
    case RWL_CODE_CBLOCK_BEG:
    case RWL_CODE_CBLOCK_END:
    case RWL_CODE_PCINCR:
    case RWL_CODE_PCDECR:
    case RWL_CODE_CANCELCUR:
    break;

    case RWL_CODE_NEWDB:
      rwm->code[rwm->ccount].ceptr1 = parg1; // name of database
      rwm->code[rwm->ccount].ceint2 = (sb4) arg2; // and location guess
    break;
    case RWL_CODE_OLDDB:
    case RWL_CODE_DEFDB:
    break;


    case RWL_CODE_SQLHEAD:
    case RWL_CODE_HEAD:
      /* procedure begin - parg1 is the identifier */
      //PARSER DOES THIS rwm->codeguess=rwladdvar(rwm, parg1, RWL_TYPE_PROC, rwm->addvarbits);
      /* set the start program counter of this procedure if valid */
      if (rwm->codeguess>=0)
      {
        rwm->mxq->evar[rwm->codeguess].vval = rwm->ccount;
        rwm->mxq->evar[rwm->codeguess].vname = parg1;
        rwm->mxq->evar[rwm->codeguess].v2val = 0; /* argument count */
        rwm->mxq->evar[rwm->codeguess].vdata = 0; /* first argument */
      }
      rwm->code[rwm->ccount].ceptr1 = parg1;
      rwm->code[rwm->ccount].ceint2 = (sb4) arg2; // proc/funcs var num
      // rwm->codename = parg1; /* now done in parser */
    break;

    case RWL_CODE_FFLUSH:
    case RWL_CODE_NEWLINEFILE:
      rwm->code[rwm->ccount].ceptr1 = parg1;
      rwm->code[rwm->ccount].ceint2 = (sb4) arg2;
    break;

    case RWL_CODE_WRITE:
    case RWL_CODE_WRITEBLANK: /* write to file */
      rwm->code[rwm->ccount].ceptr3 = parg3;
      rwm->code[rwm->ccount].ceint4 = (sb4) arg4;
      /*FALLTHROUGH*/
    /* the following all take one expression as argument */
    case RWL_CODE_SETCCLASS:
    case RWL_CODE_WAIT:
    case RWL_CODE_PRINT:
    case RWL_CODE_PRINTBLANK:
    case RWL_CODE_ASSIGN:
    case RWL_CODE_APPEND:
    case RWL_CODE_STACK:
    case RWL_CODE_SUSPEND:
      /* parg1 is top of the the expression stack with the actual assignment */
      rwm->code[rwm->ccount].ceptr1 = parg1;
    break;

    case RWL_CODE_IF: /* also used for for loop start */
      rwm->code[rwm->ccount].ceptr1 = parg1; /* parg1 is the if expression */
      /* we never actually use element 0 in rslpcsav array */
      if (++rwm->rsldepth>RWL_MAX_RSL_DEPTH)
      {
	rwlsevere(rwm, "[rwlcodeadd4-depth1:%d]", rwm->rsldepth);
	--rwm->rsldepth;
      }
      else   
        rwm->rslpcsav[rwm->rsldepth] = rwm->ccount; /* save IF location */
    break;

    case RWL_CODE_ELSEIF:
      if (!rwm->rslpcsav[rwm->rsldepth])
      {
	rwlsevere(rwm, "[rwlcodeadd4-elseif:%d;%d]", rwm->ccount, rwm->rsldepth);
      }

      /* 
         This is what the generated code looks like around an RWL_CODE_ELSEIF
         after completion with the if at pc=10 elseif at pc=20 and 30
	 else at pc=40 and endif at pc=50

         | pc |  code | ceint2 | ceint4 | Comments
	 | 10 |   IF  |     21 |        | If false, go to 21

	 | 20 | ELSIF |     50 |     10 | when step into here (IF true), goto 50
	 | 21 |   IF  |     31 |        | if false, to to 31

	 | 30 | ELSIF |     50 |     21 | when step into here (IF true), goto 50
	 | 31 |   IF  |     41 |        | if false, to to 41 (50 when no ELSE)

	 | 40 | ELSE  |     50 |     31 | when step into here (IF true), goto 50

	 | 50 | ENDIF |                 |

	 Note that e.g. ceint4=21 at pc=30 points backwards to where the
	 previous IF (after ELSIF) is found and this is used to traverse all
	 the ELSIF's backward when we reach ENDIF such that we can put the pc
	 (here 50) of the ENDIF as the goto address of alse ELSIF. Also note
	 that the pc of an ELSIF never is the target of a goto, we only reach
	 an ELSIF if we step into it from a statement list that is executed as
	 the result of an IF being true. Finally note that the ceint2=50
	 entries above are not set until we actually do the backtrack.

      */
      // ceint4 is set to the location if the IF that may bring us here
      // these values are not used during execution, but when we reach the 
      // final ENDIF we can follow all these back such the the target in ceint2
      // (which is the goto we do if the previous IF was true) is set to the
      // ENDIF
      // As a result, when execution gets to an ELSEIF, it just does goto END
      rwm->code[rwm->ccount].ceint4 = (sb4) rwm->rslpcsav[rwm->rsldepth];
      bis(rwm->rslflags[rwm->rsldepth], RWL_RSLFLAG_ELSEIF); // tell ENDIF to backtract
      
      // now do the new IF part which we get to if the previous IF was false
      rwm->ccount++;
      // set the goto PC for IF or previous ELSEIF at the location of the new IF
      rwm->code[rwm->rslpcsav[rwm->rsldepth]].ceint2 = (sb4) rwm->ccount; 
      rwm->rslpcsav[rwm->rsldepth] = rwm->ccount;

      // Need to add all the values 
      rwm->code[rwm->ccount].ctyp = RWL_CODE_IF;
      rwm->code[rwm->ccount].cname = "if";
      rwm->code[rwm->ccount].ceptr1 = parg1; /* parg1 is the if expression */
      memcpy(&rwm->code[rwm->ccount].cloc, &rwm->loc, sizeof(rwl_location));
    break;


    case RWL_CODE_ELSE:
      if (!rwm->rslpcsav[rwm->rsldepth])
      {
	rwlsevere(rwm, "[rwlcodeadd4-else:%d;%d]", rwm->ccount, rwm->rsldepth);
      }
      if (bit(rwm->rslflags[rwm->rsldepth], RWL_RSLFLAG_ELSEIF)) // if backtrack
	rwm->code[rwm->ccount].ceint4 = (sb4) rwm->rslpcsav[rwm->rsldepth];
      /* set the goto PC for IF at the first instruction after ELSE */
      rwm->code[rwm->rslpcsav[rwm->rsldepth]].ceint2 = (sb4) rwm->ccount+1; 
      /* and save ELSE location in stead */
      rwm->rslpcsav[rwm->rsldepth] = rwm->ccount;
    break;

    case RWL_CODE_FORL:
      /* This is similar to endif */
      if (!rwm->rslpcsav[rwm->rsldepth])
      {
	rwlsevere(rwm, "[rwlcodeadd4-loop:%d;%d]", rwm->ccount, rwm->rsldepth);
      }
      /* save if location here */
      rwm->code[rwm->ccount].ceint2 = (sb4) rwm->rslpcsav[rwm->rsldepth];
      /* and store one after FORL location at if */
      rwm->code[rwm->rslpcsav[rwm->rsldepth]].ceint2 = (sb4) rwm->ccount+1;
      rwm->rslpcsav[rwm->rsldepth] = 0;
      rwlfinishbreaks(rwm, rwm->ccount+1);
      if (--rwm->rsldepth<0)
      {
	rwlsevere(rwm, "[rwlcodeadd4-unnest1:%d]", rwm->rsldepth);
	++rwm->rsldepth;
      }
    break;

    case RWL_CODE_READLAND:
      rwm->code[rwm->ccount].ceptr5 = parg5; // expression
      // fall thru
    case RWL_CODE_READLOOP:
      rwm->code[rwm->ccount].ceptr1 = parg1; // file name
      rwm->code[rwm->ccount].ceint2 = (sb4) arg2; // guess of file var#
      rwm->code[rwm->ccount].ceptr3 = parg3; // list of identifiers
      // ceint4 will be filled in at READEND
      // and use rslpcsav to store my PC
      if (++rwm->rsldepth>RWL_MAX_RSL_DEPTH)
      {
	rwlsevere(rwm, "[rwlcodeadd4-readloop4:%d]", rwm->rsldepth);
	--rwm->rsldepth;
      }
      else   
      {
        rwm->rslpcsav[rwm->rsldepth] = rwm->ccount; /* save READLOOP/READLAND location */
	bis(rwm->rslflags[rwm->rsldepth], RWL_RSLFLAG_MAYBRK);
      }
      break;
      
    case RWL_CODE_READEND:
      if (!rwm->rslpcsav[rwm->rsldepth])
      {
	rwlsevere(rwm, "[rwlcodeadd4-readend4:%d;%d]", rwm->ccount, rwm->rsldepth);
      }
      /* store READEND + 1 location at READLOOP */
      rwm->code[rwm->rslpcsav[rwm->rsldepth]].ceint4 = (sb4) rwm->ccount + 1;
      rwlfinishbreaks(rwm, rwm->ccount + 1);
      // store READLOOP/READLAND location here
      rwm->code[rwm->ccount].ceint2 = (sb4) rwm->rslpcsav[rwm->rsldepth];
      rwm->rslpcsav[rwm->rsldepth] = 0;
      if (--rwm->rsldepth<0)
      {
	rwlsevere(rwm, "[rwlcodeadd4-unnest4:%d]", rwm->rsldepth);
	++rwm->rsldepth;
      }
    break;

    case RWL_CODE_ENDIF:
      if (!rwm->rslpcsav[rwm->rsldepth])
      {
	rwlsevere(rwm, "[rwlcodeadd4-endif:%d;%d]", rwm->ccount, rwm->rsldepth);
      }
      /* store ENDIF location at (last) if or else */
      rwm->code[rwm->rslpcsav[rwm->rsldepth]].ceint2 = (sb4) rwm->ccount;
      if (bit(rwm->rslflags[rwm->rsldepth], RWL_RSLFLAG_ELSEIF))
      {
        // and also backtrack it through elseif chain in the ceint4 values
	// we declare elsifpc as sb4 to be able to have the asserts below
	sb4 elsifpc;
	sb4 savpc;

	// If there is an else, we start backtracking at the pc
	// where we wrote the ELSEIF before the IF going to the ELSE if false
	if (RWL_CODE_ELSE == rwm->code[rwm->rslpcsav[rwm->rsldepth]].ctyp)
	  elsifpc = rwm->code[rwm->rslpcsav[rwm->rsldepth]].ceint4-1;
	else // start backtrack at the IF before the last ELSEIF
	  elsifpc = (sb4) rwm->rslpcsav[rwm->rsldepth]-1;  
	if (elsifpc<0 || elsifpc > (sb4) rwm->ccount) //ASSERT to prevent stray memory access
	{
	  rwlsevere(rwm, "[rwlcodeadd4-badbacktrack1:%d;%d]", elsifpc, rwm->rsldepth);
	  goto backtrackfail;
	}

	do
	{
	  // elseifpc is the PC of where we have the IF part of elseif 
	  savpc = rwm->code[elsifpc].ceint4-1; // the backtrack pc
	  rwm->code[elsifpc].ceint2 = (sb4) rwm->ccount;
	  elsifpc = savpc;
	  if (elsifpc<0 || elsifpc > (sb4) rwm->ccount) //ASSERT to prevent stray memory access
	  {
	    rwlsevere(rwm, "[rwlcodeadd4-badbacktrack2:%d;%d]", elsifpc, rwm->rsldepth);
	    goto backtrackfail;
	  }
	} while (RWL_CODE_ELSEIF == rwm->code[elsifpc].ctyp);

      }
      backtrackfail:
      bic(rwm->rslflags[rwm->rsldepth], RWL_RSLFLAG_ELSEIF);
      rwm->rslpcsav[rwm->rsldepth] = 0;
      if (--rwm->rsldepth<0)
      {
	rwlsevere(rwm, "[rwlcodeadd4-unnest2:%d]", rwm->rsldepth);
	++rwm->rsldepth;
      }
    break;

    case RWL_CODE_CURLOOPAT:
      rwm->code[rwm->ccount].ceptr3 = parg3;
      rwm->code[rwm->ccount].ceint4 = (sb4) arg4;  // location guess
      // fall thru
    case RWL_CODE_CURLOOP: /* cursor loop start */
      /* store subroutine/sql - parg1 is variable name, arg2 is its location guess */
      rwm->code[rwm->ccount].ceptr1 = parg1;
      rwm->code[rwm->ccount].ceint2 = (sb4) arg2;
      // ceint6 will be filled in at ENDCUR
      /* and use rslpcsav to store my PC */
      if (++rwm->rsldepth>RWL_MAX_RSL_DEPTH)
      {
	rwlsevere(rwm, "[rwlcodeadd4-depth2:%d]", rwm->rsldepth);
	--rwm->rsldepth;
      }
      else   
        rwm->rslpcsav[rwm->rsldepth] = rwm->ccount; /* save IF location */
      break;

    case RWL_CODE_ENDCUR:
      /* This is similar to endif */
      if (!rwm->rslpcsav[rwm->rsldepth])
      {
	rwlsevere(rwm, "[rwlcodeadd4-endcur:%d;%d]", rwm->ccount, rwm->rsldepth);
      }
      /* store one after ENDCUR location at CURLOOP */
      rwm->code[rwm->rslpcsav[rwm->rsldepth]].ceint6 = (sb4) rwm->ccount+1;
      // and finish breaks at the endcur
      rwlfinishbreaks(rwm, rwm->ccount);
      rwm->rslpcsav[rwm->rsldepth] = 0;
      if (--rwm->rsldepth<0)
      {
	rwlsevere(rwm, "[rwlcodeadd4-unnest3:%d]", rwm->rsldepth);
	++rwm->rsldepth;
      }
    break;

    case RWL_CODE_SQLAT:
      rwm->code[rwm->ccount].ceptr3 = parg3; // name of db
      rwm->code[rwm->ccount].ceint4 = (sb4) arg4;  // location guess
      /* fall thru */
    //case RWL_CODE_CODE:
    case RWL_CODE_SQL:
    case RWL_CODE_RAPROC:
    case RWL_CODE_RETURN:
    case RWL_CODE_EXIT:
    case RWL_CODE_SQLEND:
    case RWL_CODE_SQLLEAK:
    case RWL_CODE_SQLCCON:
    case RWL_CODE_SQLCCOFF:
    case RWL_CODE_DYNSREL:
    case RWL_CODE_SQLFLUSH:
      /* subroutine/sql - parg1 is variable name, arg2 is its location guess */
      if (!parg1)
        rwlsevere(rwm,"[rwlcodeadd5-nullname:%d;%d]", arg2, ctype);
      rwm->code[rwm->ccount].ceptr1 = parg1;
      rwm->code[rwm->ccount].ceint2 = (sb4) arg2;
    break;

    case RWL_CODE_DYNSTXT: // sql text for dynamic
    case RWL_CODE_SQLARRAY: // array size
      if (!parg1)
        rwlsevere(rwm,"[rwlcodeadd5-nullname2:%d;%d]", arg2, ctype);
      if (!parg3)
        rwlsevere(rwm,"[rwlcodeadd5-noexpr:%d;%d]", arg2, ctype);
      rwm->code[rwm->ccount].ceptr1 = parg1; // sql name
      rwm->code[rwm->ccount].ceint2 = (sb4) arg2; // location guess
      rwm->code[rwm->ccount].ceptr3 = parg3; // expression
    break;

    case RWL_CODE_DYNBINDEF:
      if (!parg1)
        rwlsevere(rwm,"[rwlcodeadd5-nullname3:%d;%d]", arg2, ctype);
      if (!parg3)
        rwlsevere(rwm,"[rwlcodeadd5-nullname4:%d;%d]", arg2, ctype);
      if (!parg5)
        rwlsevere(rwm,"[rwlcodeadd5-noexpr3:%d;%d]", arg2, ctype);
      rwm->code[rwm->ccount].ceptr1 = parg1; // lob name
      rwm->code[rwm->ccount].ceint2 = (sb4) arg2; // guess of lob var#
      rwm->code[rwm->ccount].ceptr3 = parg3; // string name
      rwm->code[rwm->ccount].ceint4 = (sb4) arg4; // guess of string var#
      rwm->code[rwm->ccount].ceptr5 = parg5; // expression
      rwm->code[rwm->ccount].ceint6 = (sb4) arg6; // bdtyp
    break;

    case RWL_CODE_READLOB:
      rwm->code[rwm->ccount].ceptr1 = parg1; // lob name
      rwm->code[rwm->ccount].ceint2 = (sb4) arg2; // guess of lob var#
      rwm->code[rwm->ccount].ceptr3 = parg3; // string name
      rwm->code[rwm->ccount].ceint4 = (sb4) arg4; // guess of string var#
      rwm->code[rwm->ccount].ceptr5 = parg5; // codename
    break;

    case RWL_CODE_WRITELOB:
      rwm->code[rwm->ccount].ceptr1 = parg1; // lob name
      rwm->code[rwm->ccount].ceint2 = (sb4) arg2; // guess of lob var#
      rwm->code[rwm->ccount].ceptr3 = parg3; // expression to write to lob
      rwm->code[rwm->ccount].ceptr5 = parg5; // codename
    break;

    case RWL_CODE_SPRINTF:
      rwm->code[rwm->ccount].ceptr1 = parg1; // string name
      rwm->code[rwm->ccount].ceint2 = (sb4) arg2; // guess of string var#
      rwm->code[rwm->ccount].ceptr3 = parg3; // list of concatenations rwl_conlist *
      rwm->code[rwm->ccount].ceint4 = (sb4) arg4; // RWL_TYPE_STR or RWL_TYPE_STREND
    break;

    case RWL_CODE_FPRINTF:
      rwm->code[rwm->ccount].ceptr1 = parg1; // file name
      rwm->code[rwm->ccount].ceint2 = (sb4) arg2; // guess of file var#
      rwm->code[rwm->ccount].ceptr3 = parg3; // list of concatenations rwl_conlist *
    break;

    case RWL_CODE_READLINE:
      rwm->code[rwm->ccount].ceptr1 = parg1; // file name
      rwm->code[rwm->ccount].ceint2 = (sb4) arg2; // guess of file var#
      rwm->code[rwm->ccount].ceptr3 = parg3; // list of identifiers
    break;

    case RWL_CODE_REGEXSUB:
    case RWL_CODE_REGEXSUBG:
      rwm->code[rwm->ccount].ceptr1 = parg1; // name of return string
      rwm->code[rwm->ccount].ceint2 = (sb4) arg2; // and its guess
      rwm->code[rwm->ccount].ceptr3 = parg3; // expression of regex
      rwm->code[rwm->ccount].ceptr5 = parg5; // expression of str
      rwm->code[rwm->ccount].ceptr7 = parg7; // expression of sub
    break;

    case RWL_CODE_REGEXTRACT:
    case RWL_CODE_REGEX:
      rwm->code[rwm->ccount].ceptr1 = parg1; // expression of regex
      rwm->code[rwm->ccount].ceint2 = 0; // not used
      rwm->code[rwm->ccount].ceptr3 = parg3; // expression of string
      rwm->code[rwm->ccount].ceptr5 = parg5; // list of identifiers
    break;

    case RWL_CODE_MODSESP:
      rwm->code[rwm->ccount].ceptr5 = parg5; // expression of mdbsphi
      /*FALLTHROUGH*/
    case RWL_CODE_MODCCACHE:
      rwm->code[rwm->ccount].ceptr1 = parg1; // name of database
      rwm->code[rwm->ccount].ceint2 = (sb4) arg2; // and its guess
      rwm->code[rwm->ccount].ceptr3 = parg3; // expression of mdbsplo or cachesize
    break;

    default:
    break;
  }

  /* any space left? */
  if (++rwm->ccount >= rwm->maxcode)
  { 
    rwlerror(rwm, RWL_ERROR_NO_CODE_SPACE, rwm->maxcode);
    rwlerrormute(rwm,RWL_ERROR_NO_CODE_SPACE, 0);
    rwm->ccount--;
    return;
  }

}

void rwlfinishbreaks(rwl_main *rwm, ub4 gotoloc)
{
  /*ASSERT*/
  sb4 bl;
  if (!bit(rwm->rslflags[rwm->rsldepth], RWL_RSLFLAG_MAYBRK))
  {
    rwlsevere(rwm, "[finishbreaks-nomaybrkp:%d;0%x]", rwm->rsldepth, rwm->rslflags[rwm->rsldepth]);
    goto badfinbreak;
  }

  // set ceint2 at all places where we had break
  bl = (sb4)rwm->rslpcbrk[rwm->rsldepth];
  while (bl>0)
  {
    /*ASSERT*/
    if (RWL_CODE_BREAK != rwm->code[bl].ctyp && RWL_CODE_CURBRK != rwm->code[bl].ctyp)
    {
      rwlsevere(rwm, "[finishbreaks-notbrk:%d;%d;%s]"
        , bl, rwm->code[bl].ctyp, rwm->code[bl].cname);
      goto badfinbreak;
    }
    rwm->code[bl].ceint2 = (sb4) gotoloc; // break goto location
    bl = rwm->code[bl].ceint4;  // previos break
  }

badfinbreak:
  bic(rwm->rslflags[rwm->rsldepth], RWL_RSLFLAG_MAYBRK|RWL_RSLFLAG_BRKCUR);
  rwm->rslpcbrk[rwm->rsldepth] = 0;
  
}

/* generate the code for loop execution
 *
 * This effectively replaces rwlthreadbuild()
 * and is roughly the same just split into two
 *
 */

void rwlloophead(rwl_main *rwm)
{
  rwl_estack *estk;

  rwlcodeadd0(rwm, RWL_CODE_CBLOCK_BEG); // mark begin of control block

  /* does he want to suspend until sometime */
  if (rwm->starttime) 
  {
    if (rwlestintwait(rwm->starttime))
      rwlerror(rwm, RWL_ERROR_UNIFORM_AND_INTASN);
    rwlcodeaddp(rwm, RWL_CODE_ASSIGN, rwm->starttime);
    if (rwm->stoptime) // make sure start isn't after stop
    {
      rwlcodeaddp(rwm, RWL_CODE_ASSIGN, rwm->stoptime);
      rwlexprpush(rwm, RWL_STARTTIME_VAR, RWL_STACK_VAR); /* starttune */
      rwlexprpush(rwm, RWL_STOPTIME_VAR, RWL_STACK_VAR);  /* stoptime */
      rwlexprpush(rwm, 0, RWL_STACK_GREATER);             /* > */
      rwlexprpush(rwm, RWL_STOPTIME_VAR, RWL_STACK_VAR);  /* stoptime */
      rwlexprpush(rwm, rwl_onep, RWL_STACK_NUM);              /* 1 */
      rwlexprpush(rwm,0,RWL_STACK_ADD);                   /* + */
      rwlexprpush(rwm, RWL_STARTTIME_VAR, RWL_STACK_VAR); /* starttime */
      rwlexprpush(rwm,0,RWL_STACK_CONDITIONAL);           /* ? :  */
    }
    else
      rwlexprpush(rwm, RWL_STARTTIME_VAR, RWL_STACK_VAR); /* starttime */
    estk = rwlexprfinish(rwm);
    rwlcodeaddp(rwm, RWL_CODE_SUSPEND, estk);
  }
  else 
  {
    /* start 0 */
    rwlexprbeg(rwm);
    rwlexprpush(rwm, rwl_zerop, RWL_STACK_NUM);
    estk = rwlexprfinish(rwm);
    rwlcodeaddp(rwm, RWL_CODE_SUSPEND, estk);
  }

  /* if doing real queue simulation, initialize everyuntil to runseconds */
  if (
      (  bit(rwm->m2flags, RWL_P2_QUEUE) && !bit(rwm->ynqueue, RWL_NOQUEUE_EVERY))
      || bit(rwm->ynqueue, RWL_QUEUE_EVERY)
     )
  {
    rwlexprbeg(rwm);
    rwlexprpush(rwm, 0, RWL_STACK_RUNSECONDS);
    rwlexprpush(rwm, RWL_EVERYUNTIL_VAR, RWL_STACK_ASNINT);
    estk = rwlexprfinish(rwm);
    rwlcodeaddp(rwm, RWL_CODE_ASSIGN, estk);
  }

  /* start expression for loopvar := 1 */

  rwlexprbeg(rwm);
  rwlexprpush(rwm, rwl_onep, RWL_STACK_NUM);
  rwlexprpush(rwm, RWL_LOOPNUMBER_VAR, RWL_STACK_ASNINT);
  estk = rwlexprfinish(rwm);
  rwlcodeaddp(rwm, RWL_CODE_ASSIGN, estk); /* loopcount := 1 */

  /* see how to finish */
  if (rwm->stopcount)
  {
    // Stop using a count
    rwlcodeaddp(rwm, RWL_CODE_ASSIGN, rwm->stopcount);
    rwlexprbeg(rwm);
    rwlexprpush(rwm, RWL_STOPCOUNT_VAR, RWL_STACK_VAR);
    rwlexprpush(rwm, RWL_LOOPNUMBER_VAR, RWL_STACK_VAR);
    rwlexprpush(rwm, 0, RWL_STACK_GREATEREQ);
    estk = rwlexprfinish(rwm);
    rwlcodeaddp(rwm, RWL_CODE_IF, estk);
  }
  else if (rwm->stoptime)
  {
    // Stop using a time
    rwlcodeaddp(rwm, RWL_CODE_ASSIGN, rwm->stoptime);
    rwlexprbeg(rwm);
    rwlexprpush(rwm, RWL_STOPTIME_VAR, RWL_STACK_VAR);
    rwlexprpush(rwm, 0, RWL_STACK_RUNSECONDS);
    rwlexprpush(rwm, 0, RWL_STACK_GREATEREQ);
    estk = rwlexprfinish(rwm);
    rwlcodeaddp(rwm, RWL_CODE_IF, estk);
  }
  else
  {
    rwlsevere(rwm, "[rwlloophead-missingstop:0x%8.8x]", rwm->mflags);
    rwlexprbeg(rwm);
    rwlexprpush(rwm, rwl_onep, RWL_STACK_NUM);
    estk = rwlexprfinish(rwm); 
    rwlcodeaddp(rwm, RWL_CODE_IF, estk);
  }


  /* if every is specified, calculate when to start next
   * see comment in rwlparser.y */
  if (rwm->everytime)
    rwlcodeaddp(rwm, RWL_CODE_ASSIGN, rwm->everytime);

}

void rwlloopfinish(rwl_main *rwm)
{
  rwl_estack *estk;

  /* was every specified */
  if (rwm->everytime)
  {
    if (rwlestintwait(rwm->everytime))
      rwlerror(rwm, RWL_ERROR_UNIFORM_AND_INTASN);
    /* the variable everyuntil contains the time next loop should start
     * so suspend until that, but we want it to not be (much) longer than
     * stoptime if specified.  So if stoptime is there, we really want
     * to do this:
     * suspenduntil( everyuntil>stoptime ? stoptime + 1 : everyuntil )
     */
    rwlexprbeg(rwm);
    if (rwm->stoptime)
    {
      rwlexprpush(rwm, RWL_EVERYUNTIL_VAR, RWL_STACK_VAR); /* everyuntil */
      rwlexprpush(rwm, RWL_STOPTIME_VAR, RWL_STACK_VAR);   /* stoptime */
      rwlexprpush(rwm, 0, RWL_STACK_GREATER);              /* > */
      rwlexprpush(rwm, RWL_STOPTIME_VAR, RWL_STACK_VAR);   /* stoptime */
      rwlexprpush(rwm, rwl_onep, RWL_STACK_NUM);               /* 1 */
      rwlexprpush(rwm,0,RWL_STACK_ADD);                    /* + */
      rwlexprpush(rwm, RWL_EVERYUNTIL_VAR, RWL_STACK_VAR); /* everyuntil */
      rwlexprpush(rwm,0,RWL_STACK_CONDITIONAL);            /* ? :  */
    }
    else
      rwlexprpush(rwm, RWL_EVERYUNTIL_VAR, RWL_STACK_VAR);
    estk = rwlexprfinish(rwm);
    rwlcodeaddp(rwm, RWL_CODE_SUSPEND, estk);
  }

  /* wait is simpler - just execute the wait expression */
  if (rwm->waittime)
  {
    if (rwlestintwait(rwm->waittime))
      rwlerror(rwm, RWL_ERROR_UNIFORM_AND_INTASN);
    rwlcodeaddp(rwm, RWL_CODE_WAIT, rwm->waittime);
  }

  /* end of loop, add 1 to loopnumber */
  rwlexprbeg(rwm);
  rwlexprpush(rwm, RWL_LOOPNUMBER_VAR, RWL_STACK_VAR); /* current value */
  rwlexprpush(rwm, rwl_onep, RWL_STACK_NUM); /* 1 */
  rwlexprpush(rwm,0,RWL_STACK_ADD); /* + */
  rwlexprpush(rwm, RWL_LOOPNUMBER_VAR, RWL_STACK_ASNINT); /* assign */
  estk = rwlexprfinish(rwm);
  rwlcodeaddp(rwm, RWL_CODE_ASSIGN, estk); /* run it */
  rwlcodeadd0(rwm, RWL_CODE_FORL); /* and end loop */
  rwlcodeadd0(rwm, RWL_CODE_CBLOCK_END); // mark end of control block 

}

/*
 * The pair rwlcodehead and rwlcodetail is used to generate
 * code that wraps an internally named proedure, i.e. around
 * any list of statements that can be executed by calling
 * that procedure.  It is used in three places:
 * 1) For building threads ! RWL_P_DXEQMAIN
 * 2) For building immediatedly executed code RWL_P_DXEQMAIN
 * 3) For building immediatedly executed code with sql RWL_PDXEQMAIN and RWL_P_PROCHASSQL
 */

void rwlcodehead(rwl_main *rwm, ub4 thrcount)
{  
  rwl_thrinfo *prev;
  text thrnam[100];

  /* allocate rwl_thrinfo and put into list */
  prev = rwm->mythr;
  rwm->mythr = rwlalloc(rwm, sizeof(rwl_thrinfo));
  if (!rwm->threadlist) /* this is the first */
    rwm->threadlist = rwm->mythr;
  else /* subsequent, point prev to me */
    prev->next = rwm->mythr;
  rwm->mythr->count = thrcount;
  rwm->totthr += thrcount;

  if (bit(rwm->mflags, RWL_P_DXEQMAIN) || bit(rwm->m3flags, RWL_P3_BNOXPROC|RWL_P3_BNOXFUNC))
    snprintf((char *)thrnam, sizeof(thrnam), "prc#%05d", rwm->thritemno);
  else
    snprintf((char *)thrnam, sizeof(thrnam), "thr#%05d", rwm->thritemno);
  rwm->codename = rwm->mythr->pname = rwlstrdup(rwm, thrnam); /* codeadd and addvar does not do this */
  rwm->loc.errlin = rwm->lexlino;
  bic(rwm->m3flags, RWL_P3_WARNSQLKW);
  rwm->codeguess=rwladdvar(rwm, rwm->mythr->pname
    , bit(rwm->m3flags, RWL_P3_BNOXFUNC) ? RWL_TYPE_FUNC : RWL_TYPE_PROC
    , RWL_IDENT_INTERNAL|RWL_IDENT_NOSTATS);
  rwlcodeaddpu(rwm
    , bit(rwm->mflags, RWL_P_PROCHASSQL) ? RWL_CODE_SQLHEAD : RWL_CODE_HEAD
    , rwm->mythr->pname, (ub4) rwm->codeguess); /* generate head */
  rwm->loc.errlin = 0;
  rwm->mythr->lguess = rwm->codeguess; 
  rwm->thritemno++;
  if (bit(rwm->m3flags, RWL_P3_BNOXFUNC)) // Pretend the function we never execute has return
    bis(rwm->m2flags,RWL_P2_COMP_FUNC|RWL_P2_HAS_RETURN);
  else
    bic(rwm->m2flags,RWL_P2_COMP_FUNC|RWL_P2_HAS_RETURN);

  // Initially allocate temp array for local variables of MAX
  rwm->lvsav = rwlalloc(rwm, rwm->maxlocals*sizeof(rwl_localvar));
  rwm->facnt = 0; /* formal argument count */
  rwm->lvcount = 1; /* total local variable count, at least 1 for return value */
  if (bit(rwm->m2flags, RWL_P2_AT)) // save the "AT" flag for tail
  {
    rwm->ccdbname = rwm->dbname;
    bis(rwm->m2flags, RWL_P2_ATDXEQMAIN);
  }
  else
  {
    rwm->ccdbname = 0;
    bic(rwm->m2flags, RWL_P2_ATDXEQMAIN);
  }

}

void rwlcodetail(rwl_main *rwm)
{  
  sb4 l = rwm->codeguess;
  if (bit(rwm->m2flags, RWL_P2_ATDXEQMAIN)) // restore the "AT" flag 
    bis(rwm->m2flags, RWL_P2_AT);
  else
    bic(rwm->m2flags, RWL_P2_AT);
  /* handle local variables */
  if (rwm->lvsav) // possibly zero when proc/func decl had error
  {
    rwm->mxq->evar[l].v3val = rwm->lvcount; // save count of local vars
    rwm->mxq->evar[l].v2val = 0; // no arguments
    /* allocate actual size, copy, free temp */
    rwm->mxq->evar[l].vdata = rwlalloc(rwm, rwm->lvcount * sizeof(rwl_localvar));
    memcpy(rwm->mxq->evar[l].vdata, rwm->lvsav, rwm->lvcount *sizeof(rwl_localvar));
    rwlfree(rwm, rwm->lvsav);
  }
  rwm->lvsav = 0; /* clean to avoid trouble */

  if (bit(rwm->mflags, RWL_P_PROCHASSQL))
  {
    // modify RWL_CODE_HEAD to RWL_CODE_SQLHEAD if needed
    ub4 c = rwm->mxq->evar[l].vval; /* first pc in my procedure */

    /*assert*/
    if (rwm->code[c].ctyp != RWL_CODE_HEAD && rwm->code[c].ctyp != RWL_CODE_SQLHEAD)
    {
      /* only show if not running out of space */
      if (rwm->ccount < rwm->maxcode-1)
	rwlsevere(rwm, "[rwlcodetail1:%s;%d;%d]", rwm->codename, c, rwm->code[c].ctyp);
    }
    else
    {
      /* tell this procedure needs a database */
      rwm->code[c].ctyp = RWL_CODE_SQLHEAD;
      rwm->code[c].cname = "hddb";
    } 
    rwlcodeaddpu(rwm ,RWL_CODE_SQLEND , rwm->codename, (ub4)l);
  }
  else
    rwlcodeaddpu(rwm ,RWL_CODE_END , rwm->codename, (ub4)l);
    
  rwm->codename = 0;
}

rwlcomp(rwlcodeadd_c, RWL_GCCFLAGS)

