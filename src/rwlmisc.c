/*
 * RWP*Load Simulator
 *
 * Copyright (c) 2022 Oracle Corporation
 * Licensed under the Universal Permissive License v 1.0
 * as shown at https://oss.oracle.com/licenses/upl/
 *
 * Real World performance Load simulator misc
 *
 * rwlmisc.c
 *
 * Miscellaneous stuff
 * mostly things on top of O/S calls
 *
 * History
 *
 * bengsig   9-mar-2023 - Better severe error message
 * bengsig   1-mar-2023 - Optimize snprintf [id]format
 * bengsig   7-feb-2023 - Set hostname via -P/-M/-R
 * bengsig  14-dec-2022 - assert for persec out of bounds
 * bengsig  31-oct-2022 - Add better queue time via $queueeverytiming:on
 * bengsig  18-oct-2022 - only histogram when > 100 µs
 * bengsig  18-oct-2022 - threads global variables
 * bengsig  12-oct-2022 - flush times
 * bengsig  11-jul-2022 - $sessionpool_no_rlb directive
 * bengsig  30-jun-2022 - select 1 wrong error
 * bengsig  28-jun-2022 - Generate project
 * bengsig  18-may-2022 - Correct %.0f format
 * bengsig  16-may-2022 - No more debug own alloc/free
 * bengsig  28-mar-2022 - Core dump and memory leak in rwldoprintf
 * bengsig  04-mar-2022 - printf project
 * bengsig  01-mar-2022 - Implicit bind with array DML
 * bengsig  21-feb-2022 - Implicit bind and define
 * bengsig  23-nov-2021 - Move initialize of processnumber to rwlinit3
 * bengsig  22-nov-2021 - OS X port
 * bengsig  16-aug-2021 - rwldummyonbad (code improvement)
 * bengsig  22-jun-2021 - Add epochseconds
 * bengsig  21-jun-2021 - Improve error messaging on file
 * bengsig  10-jun-2021 - Add rwlcheckminval
 * bengsig  29-mar-2021 - Don't get runnumber if -e flag
 * bengsig  18-mar-2021 - Fix rwl-600 when resdb fails
 * bengsig  15-feb-2021 - RWL_ERROR_EXPANSION_TRUNCATED bad argument
 * bengsig  07-jan-2021 - only report error if not first scan for args
 * bengsig  04-jan-2021 - -L option
 * bengsig  23-dec-2020 - 11.2 on Solaris 
 * bengsig  23-dec-2020 - use uname generically
 * bengsig  22-dec-2020 - rwlhex2ub8
 * bengsig  22-dec-2020 - use uname on Linux & Solaris
 * bengsig  07-dec-2020 - use gmtime in stead of localtime
 * bengsig  02-dec-2020 - Directory structure change
 * bengsig  04-nov-2020 - Allow string length to be immediate_expression
 * bengsig  17-sep-2020 - Correct $longoption:publicsearch
 * bengsig  10-sep-2020 - Replace strcpy+strcat with snprintf to remove overrun risk
 * bengsig  02-sep-2020 - Use enum
 * bengsig  29-may-2020 - Add instance name to oer stats
 * bengsig  30-apr-2020 - Regular expression, global substitue
 * bengsig  17-apr-2020 - Regular expressions
 * bengsig  15-apr-2020 - File reading
 * bengsig  18-nov-2019 - Better handling of ctrl-c
 * bengsig  12-aug-2019 - added oerstats
 * bengsig  07-aug-2019 - Add rwlexpenv() function
 * bengsig  28-feb-2019 - Fixed RWL-600: internal error at [rwlmisc.c;1591]<-[run.rwl;160]: [rwlmutexget-notinit]
 * bengsig  15-feb-2019 - Moved thread ok from flags to thrbits
 * bengsig  13-feb-2019 - Flush persecond stuff
 * bengsig  19-jun-2017 - Creation
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <errno.h>
#include <math.h>
#include <sys/types.h>
#include <regex.h>
#include <termios.h>
#include <unistd.h>
#include <sys/time.h>
#include <sys/resource.h>
#include <ctype.h>

#include "rwl.h"

void rwlinitdotfile(rwl_main *rwm, char *fnam, ub4 mustexist)
{
  /* try opening file and read for directives */
  text *rfn = rwlenvexp(rwm->mxq, 0, (text *)fnam);
  FILE *dotfil = rwlfopen(rwm->mxq, 0, rfn,"r");
  void *dummy;
  int retv;
  ub4 show = 1;
  if (dotfil)
  {
    bis(rwm->m2flags, RWL_P2_INRCFILE);
    rwlyfileset(rwm, dotfil, rfn);
    while ((retv=rwlylex((union YYSTYPE *)&dummy, rwm->rwlyscanner)))
    {
      if (show)
	rwlerror(rwm, RWL_ERROR_ONLY_DIRECTIVE_IN_DOT, rfn);
      show = ';' == retv; // only show error once per ';'
    }
    bic(rwm->m2flags, RWL_P2_INRCFILE);
  }
  else if (mustexist)
    rwlerror(rwm, RWL_ERROR_FILE_NOT_OPEN, rfn);
}

// initialize before any argument parsing
void rwlinit1(rwl_main *rwm, text *av0)
{
  text *rwlp, *colon;
  rwl_pathlist *pl, *tail;

  tail = 0;
  rwlp = (text *) getenv("RWLOADSIM_PATH");
  if (rwlp)
  {
    // add each entry in RWLOADISM_PATH at end
    do
    {
      pl = rwlalloc(rwm, sizeof(rwl_pathlist));
      if (!rwm->pathlist) // first entry
      { 
	rwm->pathlist = tail = pl;
      }
      else
      {
	tail->nextpath = pl;
	tail = pl;
      }

      colon = rwlstrchr(rwlp, ':');
      if (colon)
      {
	pl->pathname = rwlalloc(rwm, (ub8)(colon-rwlp)+1 );
	rwlstrnncpy(pl->pathname, rwlp, (ub8)(colon-rwlp)+1);
	rwlp = colon+1;
      }
      else
	pl->pathname = rwlstrdup(rwm, rwlp);
    } while (colon);
  }

  bis(rwm->m3flags, RWL_P3_SP_NORLB);
  rwlinit2(rwm, av0);

}

// Note that this can be called twice from either a command line option
// or if we also have $longoption:publicsearch in the first .rwl file
//
void rwlinit2(rwl_main *rwm, text *av0)
{

  // find publicdir and verify it is ok
  if (av0 && av0[0] && !rwm->publicdir)
  {
    // This code is the reason for rwloadsim.sh to do its
    // own PATH search
    ub4 ldlen;
    text *s1, *s2;
    s2 = rwm->publicdir = rwlstrdup2(rwm, av0, 20);
    // The 20 is to safely allow for overwrting bin/rwloadsimNN with public/verify.rwl

    // search for last bin/rwloadsim in the name of the executable
    // there is probably just one, unless the full path of the executable
    // is something like /some/place/bin/rwloadsim/abc/def/bin/rwloadsimNN
    do
    {
      s1 = s2;
    }
    while ( (s2 = rwlstrstr(s2+1,"bin/rwloadsim")) );

    // Overwrite bin/rwloadsimNN by public/verify.rwl
    rwlstrcpy(s1,"public/verify.rwl");
    if (0!=access( (char *) rwm->publicdir, R_OK))
    {
      bis(rwm->m3flags, RWL_P3_PUBISBAD);
    }
    // make rwm->publicdir be the name of the public directory relative to
    // the bin directory where we found the executable
    s1[6] = 0; // Finish string at the /

    // Handle the lib dir
    rwm->libdir = rwlstrdup(rwm, rwm->publicdir);
    ldlen = (ub4) rwlstrlen(rwm->libdir);
    // so libdir is now /a/b/c/d/rwloadsim/public
    // just overwrite public with lib
    rwlstrcpy(rwm->libdir+ldlen-6, "lib");

  }

}


/* initialize various things in rwl_main
 * after important arguments are known
 *
 */
void rwlinit3(rwl_main *rwm)
{
  char etxt[100];
  sb4 l;
  char buf[RWL_PFBUF];
  time_t sinceepoch;
  struct tm *tstamp;
  FILE *urandom;
  struct sigaction   action;      
  struct sigaction   oldaction;  

  /* set initial ctrl-c handler */
  memset(&action, 0, sizeof(action));
  action.sa_handler = rwlctrlc;
  action.sa_flags   = SA_NODEFER;
  sigaction(SIGINT, &action, &oldaction);

  // buffer for readline
  rwm->mxq->readbuffer = rwlalloc(rwm, rwm->maxreadlen+2);

  /* initialize time so we can do everything in seconds since startup */
  if (0 != clock_gettime(CLOCK_REALTIME, &rwm->myepoch))
  {
    if (0!=strerror_r(errno, buf, sizeof(buf)))
      strcpy(buf,"unknown");
    rwlerror(rwm, RWL_ERROR_GENERIC_OS, "clock_gettime()", buf);
  }
  rwm->adjepoch = RWL_DEFAULT_ADJ_EPOCH;

  sinceepoch = rwm->myepoch.tv_sec;
  if (!rwm->reskey)
  {
    tstamp = gmtime(&sinceepoch);
    snprintf(rwm->xeqtime, RWL_XEQTIMBUF, "%04d-%02d-%02dT%02d:%02d:%02d"
      , tstamp->tm_year+1900, tstamp->tm_mon, tstamp->tm_mday
      , tstamp->tm_hour, tstamp->tm_min, tstamp->tm_sec);
    rwm->reskey = rwm->xeqtime;
  }

  // various other
  if (!rwm->komment)
    rwm->komment = "";
  if (!rwm->maxlocals)
    rwm->maxlocals = RWL_MAX_LOCALVAR+1; // +1 for return value


  urandom = fopen("/dev/urandom","r");
  if (urandom && 3 == fread(rwm->mxq->xsubi, sizeof(rwm->mxq->xsubi[0]), 3, urandom))
  {
    ;
  }
  else
  {
    rwlsevere(rwm,"[rwlinit-urandom]");
    rwm->mxq->xsubi[0] = (unsigned short)rwm->myepoch.tv_nsec & 0xffff;
    rwm->mxq->xsubi[1] = (unsigned short)(rwm->myepoch.tv_nsec>>16) & 0xffff;
    rwm->mxq->xsubi[2] = (unsigned short)rwm->myepoch.tv_sec & 0xffff;
  }
  if (urandom)
    fclose(urandom);

  /* create special variables */
  /* loopnumber is an integer used in thread loops */

  l = rwladdvar(rwm, RWL_LOOPNUMBER_VAR, RWL_TYPE_INT, RWL_IDENT_INTERNAL);
  if (l<0)
    rwlsevere(rwm,"[rwlinit-intern1:%s;%d]", RWL_LOOPNUMBER_VAR, l);

  l = rwladdvar(rwm, RWL_THREADNUMBER_VAR, RWL_TYPE_INT, RWL_IDENT_INTERNAL);
  if (l<0)
    rwlsevere(rwm,"[rwlinit-intern2:%s;%d]", RWL_THREADNUMBER_VAR, l);

  l = rwladdvar(rwm, RWL_RUNNUMBER_VAR, RWL_TYPE_INT, RWL_IDENT_INTERNAL);
  if (l<0)
    rwlsevere(rwm,"[rwlinit-intern3:%s;%d]", RWL_RUNNUMBER_VAR, l);

  l = rwladdvar(rwm, RWL_EVERYUNTIL_VAR, RWL_TYPE_DBL, RWL_IDENT_INTERNAL);
  if (l<0)
    rwlsevere(rwm,"[rwlinit-intern4:%s;%d]", RWL_EVERYUNTIL_VAR, l);

  l = rwladdvar(rwm, RWL_DUMMY_VAR, RWL_TYPE_INT, RWL_IDENT_NOPRINT);
  if (l<0)
    rwlsevere(rwm,"[rwlinit-intern5:%s;%d]", RWL_DUMMY_VAR, l);

  l = rwladdvar(rwm, RWL_SYSSECONDS_VAR, RWL_TYPE_DBL, RWL_IDENT_INTERNAL);
  if (l<0)
    rwlsevere(rwm,"[rwlinit-intern6:%s;%d]", RWL_SYSSECONDS_VAR, l);
  else
    rwm->mxq->sysvar = l;

  l = rwladdvar(rwm, RWL_USRSECONDS_VAR, RWL_TYPE_DBL, RWL_IDENT_INTERNAL);
  if (l<0)
    rwlsevere(rwm,"[rwlinit-intern7:%s;%d]", RWL_USRSECONDS_VAR, l);
  else
    rwm->mxq->usrvar = l;

  l = rwladdvar(rwm, RWL_PROCNUMBER_VAR, RWL_TYPE_INT, RWL_IDENT_INTERNAL);
  if (l>=0)
  {
    /* set a procno if the user hasn't */
    if (!rwm->procno)
      rwm->procno = (ub8) getpid();

    rwm->mxq->evar[l].num.ival = (sb8) rwm->procno;
    rwm->mxq->evar[l].num.dval = (double) rwm->procno;
    rwm->mxq->evar[l].num.isnull = 0;
    if (rwm->mxq->evar[l].num.vsalloc != RWL_SVALLOC_NOT)
      rwlsnpiformat(rwm, rwm->mxq->evar[l].num.sval, rwm->mxq->evar[l].num.slen, (sb8) rwm->procno);
  }
  else
    rwlsevere(rwm,"[rwlinit-intern8:%s;%d]", RWL_PROCNUMBER_VAR, l);

  l = rwladdvar(rwm, RWL_ORAERROR_VAR, RWL_TYPE_INT, RWL_IDENT_NOPRINT);
  if (l<0)
    rwlsevere(rwm,"[rwlinit-intern9:%s;%d]", RWL_ORAERROR_VAR, l);
  else
    rwm->mxq->oraerrorvar = l;

  rwm->declslen = RWL_OCI_ERROR_MAXMSG;
  l = rwladdvar(rwm, RWL_ORAERRORTEXT_VAR, RWL_TYPE_STR, RWL_IDENT_NOPRINT);
  if (l<0)
    rwlsevere(rwm,"[rwlinit-interna:%s;%d]", RWL_ORAERRORTEXT_VAR, l);
  else
  {
    rwl_value *vp;
    rwm->mxq->oraerrortextvar = l;
    vp = &rwm->mxq->evar[l].num;
    vp->slen = RWL_OCI_ERROR_MAXMSG;
    rwlinitstrvar(rwm->mxq, vp);
  }

  rwm->mxq->argcvar = l = rwladdvar(rwm, RWL_DOLLARCOUNT_VAR, RWL_TYPE_INT, RWL_IDENT_INTERNAL);
  if (l<0)
    rwlsevere(rwm,"[rwlinit-internb:%s;%d]", RWL_DOLLARCOUNT_VAR, l);
  else
  {
    rwm->mxq->evar[l].num.ival = (sb8) rwm->posargs;
    rwm->mxq->evar[l].num.dval = (double) rwm->posargs;
    rwm->mxq->evar[l].num.isnull = 0;
    if (rwm->mxq->evar[l].num.vsalloc != RWL_SVALLOC_NOT)
	  rwlsnpiformat(rwm, rwm->mxq->evar[l].num.sval, rwm->mxq->evar[l].num.slen, rwm->posargs);
	  
  }

  rwm->declslen = 1;
  l = rwladdvar(rwm, RWL_EMPTY_VAR, RWL_TYPE_STR, RWL_IDENT_NOPRINT);
  if (l<0)
    rwlsevere(rwm,"[rwlinit-internc:%s;%d]", RWL_EMPTY_VAR, l);
  else
  {
    rwl_value *vp;
    vp = &rwm->mxq->evar[l].num;
    vp->slen = 1;
    rwlinitstrvar(rwm->mxq, vp);
    vp->isnull = RWL_ISNULL;
  }

  l = rwladdvar(rwm, RWL_STOPCOUNT_VAR, RWL_TYPE_INT, RWL_IDENT_INTERNAL);
  if (l<0)
    rwlsevere(rwm,"[rwlinit-internd:%s;%d]", RWL_STOPCOUNT_VAR, l);

  l = rwladdvar(rwm, RWL_STOPTIME_VAR, RWL_TYPE_DBL, RWL_IDENT_INTERNAL);
  if (l<0)
    rwlsevere(rwm,"[rwlinit-interne:%s;%d]", RWL_STOPTIME_VAR, l);

  l = rwladdvar(rwm, RWL_STARTTIME_VAR, RWL_TYPE_DBL, RWL_IDENT_INTERNAL);
  if (l<0)
    rwlsevere(rwm,"[rwlinit-internf:%s;%d]", RWL_STARTTIME_VAR, l);

  l = rwladdvar(rwm, RWL_STDERR_VAR, RWL_TYPE_FILE, RWL_IDENT_INTERNAL);
  if (l<0)
    rwlsevere(rwm,"[rwlinit-interng:%s;%d]", RWL_STDERR_VAR, l);
  else
  {
    rwl_identifier *vv;
    vv = rwm->mxq->evar+l;
    vv->num.vptr = (void *) stderr;
    bis(vv->num.valflags, RWL_VALUE_FILEOPENMAIN | RWL_VALUE_FILE_OPENW);
  }

  l = rwladdvar(rwm, RWL_STDOUT_VAR, RWL_TYPE_FILE, RWL_IDENT_INTERNAL);
  if (l<0)
    rwlsevere(rwm,"[rwlinit-internh:%s;%d]", RWL_STDOUT_VAR, l);
  else
  {
    rwl_identifier *vv;
    vv = rwm->mxq->evar+l;
    vv->num.vptr = (void *) stdout;
    bis(vv->num.valflags, RWL_VALUE_FILEOPENMAIN | RWL_VALUE_FILE_OPENW);
  }

  rwm->declslen = RWL_HOSTNAME_LEN;
  l = rwladdvar(rwm, RWL_HOSTNAME_VAR, RWL_TYPE_STR, RWL_IDENT_INTERNAL);
  if (l<0)
    rwlsevere(rwm,"[rwlinit-interni:%s;%d]", RWL_HOSTNAME_VAR, l);
  else
  {
    rwl_value *vp;
    vp = &rwm->mxq->evar[l].num;
    vp->slen = RWL_HOSTNAME_LEN;
    rwlinitstrvar(rwm->mxq, vp);
    {
      struct utsname myuts;
      // When the call succeeds:
      // Solaris returns non-negative (actually 1)
      // Linux returns 0
      if (0 > uname(&myuts))
      {
	if (0!=strerror_r(errno, etxt, sizeof(etxt)))
	  strcpy(etxt,"unknown");
	rwlerror(rwm, RWL_ERROR_GENERIC_OS, "uname()",  etxt);
      }
      rwlstrnncpy(vp->sval, (text *) myuts.nodename, vp->slen);
      rwm->hostname = vp->sval;
    }
  }

  l = rwladdvar(rwm, RWL_STDIN_VAR, RWL_TYPE_FILE, RWL_IDENT_INTERNAL);
  if (l<0)
    rwlsevere(rwm,"[rwlinit-internj:%s;%d]", RWL_STDIN_VAR, l);
  else
  {
    rwl_identifier *vv;
    vv = rwm->mxq->evar+l;
    vv->num.vptr = (void *) stdin;
    bis(vv->num.valflags, RWL_VALUE_FILEOPENMAIN | RWL_VALUE_FILE_OPENR);
  }

  l = rwladdvar(rwm, RWL_CLFLAGS_VAR , RWL_TYPE_INT, RWL_IDENT_NOPRINT);
  if (l<0) rwlsevere(rwm,"[rwlinit-internk:%s;%d]", RWL_CLFLAGS_VAR, l);

  l = rwladdvar(rwm, RWL_ARRIVETIME_VAR, RWL_TYPE_DBL, RWL_IDENT_NOPRINT);
  if (l<0) rwlsevere(rwm,"[rwlinit-internl%s;%d]", RWL_ARRIVETIME_VAR, l);
  /* The following only exist so that they can be turned into actually
   * used variables as needed without "make test" output change for those
   * tests that include "printvar all"
   *
   * So if you add a variable able, remove one below
   */

  l = rwladdvar(rwm, RWL_UNUSED_VAR "7" , RWL_TYPE_INT, RWL_IDENT_NOPRINT);
  if (l<0) rwlsevere(rwm,"[rwlinit-internm%s;%d]", RWL_DUMMY_VAR "7", l);
  l = rwladdvar(rwm, RWL_UNUSED_VAR "6" , RWL_TYPE_INT, RWL_IDENT_NOPRINT);
  if (l<0) rwlsevere(rwm,"[rwlinit-internn%s;%d]", RWL_DUMMY_VAR "6", l);
  l = rwladdvar(rwm, RWL_UNUSED_VAR "5" , RWL_TYPE_INT, RWL_IDENT_NOPRINT);
  if (l<0) rwlsevere(rwm,"[rwlinit-interno:%s;%d]", RWL_DUMMY_VAR "5", l);
  l = rwladdvar(rwm, RWL_UNUSED_VAR "4" , RWL_TYPE_INT, RWL_IDENT_NOPRINT);
  if (l<0) rwlsevere(rwm,"[rwlinit-internp:%s;%d]", RWL_DUMMY_VAR "4", l);
  l = rwladdvar(rwm, RWL_UNUSED_VAR "3" , RWL_TYPE_INT, RWL_IDENT_NOPRINT);
  if (l<0) rwlsevere(rwm,"[rwlinit-internq:%s;%d]", RWL_DUMMY_VAR "3", l);
  l = rwladdvar(rwm, RWL_UNUSED_VAR "2" , RWL_TYPE_INT, RWL_IDENT_NOPRINT);
  if (l<0) rwlsevere(rwm,"[rwlinit-internr:%s;%d]", RWL_DUMMY_VAR "2", l);
  l = rwladdvar(rwm, RWL_UNUSED_VAR "1" , RWL_TYPE_INT, RWL_IDENT_NOPRINT);
  if (l<0) rwlsevere(rwm,"[rwlinit-interns%s;%d]", RWL_DUMMY_VAR "1", l);


}

/* init a rwl_xeqenv where evar array is created */
void rwlinitxeqenv(rwl_xeqenv * xev)
{
  if (0>rwlfindvarug(xev, RWL_CLFLAGS_VAR, &xev->clflagsvar))
  {
    rwlsevere(xev->rwm, "[rwlinitxeqenv-clflags:%d]", xev->clflagsvar);
    return;
  }
  xev->pclflags = &xev->evar[xev->clflagsvar].num.ival;
  if (0>rwlfindvarug(xev, RWL_ARRIVETIME_VAR, &xev->arrivetimevar))
  {
    rwlsevere(xev->rwm, "[rwlinitxeqenv-arrivetime:%d]", xev->arrivetimevar);
    return;
  }
  xev->parrivetime = &xev->evar[xev->arrivetimevar].num.dval;
}

/* call getrusage and set variables */
void rwlgetrusage(rwl_xeqenv *xev, rwl_location *loc)
{
  char etxt[100];
  struct rusage usage;
  double x;
  rwl_value *vp;

  if (0>rwlfindvarug(xev, RWL_USRSECONDS_VAR, &xev->usrvar))
  {
    rwlsevere(xev->rwm, "[rwlgetrusage-usrvar:%d]", xev->usrvar);
    return;
  }
  if (0>rwlfindvarug(xev, RWL_SYSSECONDS_VAR, &xev->sysvar))
  {
    rwlsevere(xev->rwm, "[rwlgetrusage-sysvar:%d]", xev->sysvar);
    return;
  }

  if (0 != getrusage(RUSAGE_SELF, &usage))
  {
    if (0!=strerror_r(errno, etxt, sizeof(etxt)))
      strcpy(etxt,"unknown");
    rwlexecerror(xev, loc, RWL_ERROR_GENERIC_OS, "getrusage()",  etxt);
    return;
  }

  /* all good assign getrusage result as dval in usrseconds and sysseconds */

  x = (double) usage.ru_stime.tv_sec + (double) usage.ru_stime.tv_usec/1.0e6;
  vp = &xev->evar[xev->sysvar].num;
  vp->dval = x;
  vp->ival = (sb8) round(x);
  vp->isnull = 0;
  if (vp->vsalloc != RWL_SVALLOC_NOT)
      rwlsnpdformat(xev->rwm, vp->sval, vp->slen, x);

  x = (double) usage.ru_utime.tv_sec + (double) usage.ru_utime.tv_usec/1.0e6;
  vp = &xev->evar[xev->usrvar].num;
  vp->dval = x;
  vp->ival = (sb8) round(x);
  vp->isnull = 0;
  if (vp->vsalloc != RWL_SVALLOC_NOT)
      rwlsnpdformat(xev->rwm, vp->sval, vp->slen, x);
}

/* return the clock in seconds since UNIX epoch */
double rwlunixepoch(rwl_xeqenv *xev, rwl_location *loc)
{
  char etxt[100];
  struct timeval unixepoch;
  if (0 != gettimeofday(&unixepoch, 0))
  {
    if (0!=strerror_r(errno, etxt, sizeof(etxt)))
      strcpy(etxt,"unknown");
    rwlexecerror(xev, loc, RWL_ERROR_GENERIC_OS, "clock_gettime()",  etxt);
    return 0.0;
  }
  else
    return (double)(unixepoch.tv_sec)
	 + (double)(unixepoch.tv_usec)/1.0e6;
}

/* return the clock in seconds since program start */
double rwlclock(rwl_xeqenv *xev, rwl_location *loc)
{
  char etxt[100];
  struct timespec timenow;
  if (0 != clock_gettime(CLOCK_REALTIME, &timenow))
  {
    if (0!=strerror_r(errno, etxt, sizeof(etxt)))
      strcpy(etxt,"unknown");
    rwlexecerror(xev, loc, RWL_ERROR_GENERIC_OS, "clock_gettime()",  etxt);
    return 0.0;
  }
  else
    return (double)(timenow.tv_sec  - xev->rwm->myepoch.tv_sec )
	 + (double)(timenow.tv_nsec - xev->rwm->myepoch.tv_nsec)/1.0e9
	 - xev->rwm->adjepoch;
}

double rwlsinceepoch(rwl_main *rwm)
{
  char etxt[100];
  struct timespec timenow;
  if (0 != clock_gettime(CLOCK_REALTIME, &timenow))
  {
    if (0!=strerror_r(errno, etxt, sizeof(etxt)))
      strcpy(etxt,"unknown");
    rwlerror(rwm, RWL_ERROR_GENERIC_OS, "clock_gettime()",  etxt);
    return 0.0;
  }
    return (double)(timenow.tv_sec )
	 + (double)(timenow.tv_nsec )/1.0e9;
}

/*
* In the two wait routines below, we need to be able to stop if the user
* has hit ctrl-c.  We therefore have an interrupt handler that does nothing
* more than setting a global variable, rwlstopnow, to 1.  The O/S does
* not specify which of the threads will actually handle the signal, but it
* typically is the main thread, so the worker threads typically don't get
* interrupted.  Therefore, if they are in a long sleep, that will not terminate
* prematurely when the user hits ctrl-c.  We therefore replace a single 
* call to clock_nanosleep with a sequence of one second sleeps (for waits 
* longer than 1 second) and a final call which take care of the subsecond
* sleep, and we check rwlstopnow after each one second.  As a result, the
* reaction time to ctrl-c will be a second or less
*/

/* suspend for a certain time in seconds */
void rwlwait(rwl_xeqenv *xev
, rwl_location *cloc
, double wsecs)
{
  char etxt[100];
  struct timespec wtime, onesec;
  double seconds;
  ub4 sss;
  sb4 errnum;

  if (wsecs<=0.0)
    return;
  seconds = floor(wsecs);

  wtime.tv_sec = 0;
  wtime.tv_nsec = (long) (1.0e9 * (wsecs - seconds));
  /* check rounding errors */
  if (wtime.tv_nsec < 0)
    wtime.tv_nsec = 0;
  if (wtime.tv_nsec > 999999999)
    wtime.tv_nsec = 999999999;


  /* wait the whole seconds */
  onesec.tv_sec = 1;
  onesec.tv_nsec = 0;
  sss = (ub4) floor(seconds);

  while (sss && !rwlstopnow && !xev->breakcqn)
  {
#ifdef RWL_CLOCK_NANOSLEEP
    if ((errnum=clock_nanosleep(CLOCK_REALTIME, 0 /*flags*/, &onesec, 0 /* remain */)))
#else
    // This is really for Apple
    if ((errnum=nanosleep(&onesec, 0 /* remain */)))
#endif
    {
      if (errnum == EINTR) /* rwlstopnow gets true in the interrupt handler */
	break;
      if (0!=strerror_r(errnum, etxt, sizeof(etxt)))
	strcpy(etxt,"unknown");
#ifdef RWL_CLOCK_NANOSLEEP
      rwlexecerror(xev, cloc, RWL_ERROR_GENERIC_OS, "clock_nanosleep()", etxt);
#else
      rwlexecerror(xev, cloc, RWL_ERROR_GENERIC_OS, "nanosleep()", etxt);
#endif
      break;
    }
    sss--;
  }

  if (xev->breakcqn || rwlstopnow)
    return;

  /* and the naneseconds */
#ifdef RWL_CLOCK_NANOSLEEP
  if ((errnum=clock_nanosleep(CLOCK_REALTIME, 0 /*flags*/, &wtime, 0 /* remain */)))
#else
  if ((errnum=nanosleep(&wtime, 0 /* remain */)))
#endif
  {
    if (errnum == EINTR)
      return;
    if (0!=strerror_r(errnum, etxt, sizeof(etxt)))
      strcpy(etxt,"unknown");
#ifdef RWL_CLOCK_NANOSLEEP
    rwlexecerror(xev, cloc, RWL_ERROR_GENERIC_OS, "clock_nanosleep()", etxt);
#else
    rwlexecerror(xev, cloc, RWL_ERROR_GENERIC_OS, "nanosleep()", etxt);
#endif
  }
}

/* suspend until a certain offset + adjust value */
double rwlwaituntil(rwl_xeqenv *xev
, rwl_location *cloc
, double utime)
{
  char etxt[100];
  struct timespec wtime, onesec;
  double seconds;
  double idletime; // seconds we actually expect to suspend
  double wholeseconds;
#ifndef RWL_CLOCK_NANOSLEEP 
  double ntim;
#endif
  sb4 sss;
  sb4 errnum;

  /* the "wait until" time is calculated before execution, 
   * so considerable time may have already passed.
   * Find out how many whole seconds still need to be waited 
   * Note that this can be negative, if we already passed
   * the waituntil time
   */
  idletime =  utime - rwlclock(xev, cloc);
  sss = (sb4)floor(idletime);
  /* wait the whole seconds */
  onesec.tv_sec = 1;
  onesec.tv_nsec = 0;

  wholeseconds = 0.0;
  while (sss>0 && !rwlstopnow && !xev->breakcqn)
  {
#ifdef RWL_CLOCK_NANOSLEEP
    if ((errnum=clock_nanosleep(CLOCK_REALTIME, 0 /*flags*/, &onesec, 0 /* remain */)))
#else
    if ((errnum=nanosleep(&onesec, 0 /* remain */)))
#endif
    {
      if (errnum == EINTR) /* rwlstopnow gets true in the interrupt handler */
	break;
      if (0!=strerror_r(errnum, etxt, sizeof(etxt)))
	strcpy(etxt,"unknown");
#ifdef RWL_CLOCK_NANOSLEEP
      rwlexecerror(xev, cloc, RWL_ERROR_GENERIC_OS, "clock_nanosleep()", etxt);
#else
      rwlexecerror(xev, cloc, RWL_ERROR_GENERIC_OS, "nanosleep()", etxt);
#endif
      break;
    }
    sss--;
    wholeseconds += 1.0;
  }

  if (rwlstopnow || xev->breakcqn)
    return wholeseconds;

  /* and finally sleep until the wanted wait until time */
#ifdef RWL_CLOCK_NANOSLEEP
  wtime.tv_sec = (time_t) (seconds = floor((double)xev->rwm->myepoch.tv_sec + xev->rwm->adjepoch + utime));
  wtime.tv_nsec = xev->rwm->myepoch.tv_nsec + (long)(1.0e9*((double)xev->rwm->myepoch.tv_sec + xev->rwm->adjepoch + utime - seconds));

  /* rounding error */
  if (wtime.tv_nsec<0)
    wtime.tv_nsec=0;

  /* handle carry */
  while (wtime.tv_nsec >= 1000000000)
  {
    wtime.tv_nsec -= 1000000000;
    wtime.tv_sec ++;
  }
  if ((errnum = clock_nanosleep(CLOCK_REALTIME, TIMER_ABSTIME , &wtime, 0 /* remain */)))
#else
  // without clock_nanosleep with TIMER_ABSTIME, we in stead find out how much
  // time is still missing 
  ntim = utime - rwlclock(xev, cloc);
  if (ntim > 0.0)
  {
    seconds = floor(ntim);
    wtime.tv_sec = (time_t) seconds;
    wtime.tv_nsec = (long) (1.0e9*ntim - seconds);

    /* rounding error */
    if (wtime.tv_nsec<0)
      wtime.tv_nsec=0;

    /* handle carry */
    while (wtime.tv_nsec >= 1000000000)
    {
      wtime.tv_nsec -= 1000000000;
      wtime.tv_sec ++;
    }
  }
  else
  {
    wtime.tv_sec = 0;
    wtime.tv_nsec = 0;
  }
  if ((errnum = nanosleep(&wtime, 0 /* remain */)))
#endif
  
  {
    if (errnum == EINTR)
      return wholeseconds; // this is not precise as we may have waited....
    if (0!=strerror_r(errnum, etxt, sizeof(etxt)))
      strcpy(etxt,"unknown");
#ifdef RWL_CLOCK_NANOSLEEP
    rwlexecerror(xev, cloc, RWL_ERROR_GENERIC_OS, "clock_nanosleep()", etxt);
#else
    rwlexecerror(xev, cloc, RWL_ERROR_GENERIC_OS, "nanosleep()", etxt);
#endif
  }
  return idletime;
}

#ifdef RWL_OWN_MALLOC
// NOTE THAT THIS CODE HAS NOT BEEN USED OR TESTED
// FOR A LONG TIME

/* allocate memory - report error if failure */
void *rwldoalloc(rwl_main *rwm
, rwl_location *cloc
, size_t nn, sb4 lno, char *fna)
{
  /* The rwldoalloc/rwldofree pait attempts some protection
   * against programming errors by having the real memory
   * return wrapped by signatures that we check during free
   *
   * This is what we actually allocate space for:
   * (size_t)   allocated_size
   * (ub8) RWL_ALLOC_HEAD
   * real_user_buffer
   * (ub8) RWL_ALLOC_FREE
   * helptext
   *
   * The real buffer size is rounded up to a whole
   * number of ub8's
   *
   * We don't call rwldoalloc/rwldofree directly in usercode,
   * these are instead wrapped with macros that include
   * __LINE__ and __FILE__
   */
  void *all; /* address allocated by malloc */
  char buf[100]; /* keeps the helptext */
  ub8 head, tail;
  size_t t;
  (void)cloc; // not used

  snprintf(buf,sizeof(buf),";%s;%d",fna,lno); /* not that we later check for ; */

  /*assert*/
  if (nn<=0)
  {
    rwlsevere(rwm, "[rwlalloc-notpos:%d,%s,%d]", nn, fna, lno);
    nn = sizeof(ub8); /* likely leads to further errors */
  }

  /* round up nn to sizeof(ub8) boundary */
  nn += (sizeof(ub8) - nn%sizeof(ub8)) % sizeof(ub8);

  /* total size */
  t = nn /* asked for rounded up */
      + 2*sizeof(ub8) /* the head and tail */
      + sizeof(size_t) /* space to save asked size */
      + strlen(buf)+1 /* helptext including 0 */;

  all = malloc(t);

  if (!all)
  {
    rwlsevere(rwm,"[rwlalloc-nomem:%s,%d]", fna, lno);
    return 0; /* SIGSEGV is very likely */
  }

  /* copy the actual size asked for */
  memcpy(all, &nn, sizeof(size_t));
  /* copy the signatures */
  head = RWL_ALLOC_HEAD;
  tail = RWL_ALLOC_TAIL;
  memcpy(all + sizeof(size_t), &head, sizeof(ub8));
  memcpy(all + nn + sizeof(ub8) + sizeof(size_t), &tail, sizeof(ub8));

  /* clear the returned memory */
  memset(all + sizeof(ub8) + sizeof(size_t), 0, nn);

  /* copy the helptext */
  strcpy(all + nn + 2*sizeof(ub8) + sizeof(size_t), buf);

  //if (bit(rwm->mflags, RWL_DEBUG_ALLOC))
  //  rwldebugcode(rwm, cloc, "alloc at %s siz=%zd, ptr=0x%x", buf+1, nn, all +sizeof(ub8)+sizeof(size_t));
  /* and return the user buffer */
  return all+sizeof(ub8)+sizeof(size_t);
}

void rwldofree(rwl_main *rwm
, rwl_location *cloc
, void *mem, sb4 lno, char *fna)
{
  void *all;
  char *semicolon;
  size_t nn;
  ub8 head, tail;
  (void)cloc; // not used

  if (!mem)
  {
    rwlsevere(rwm, "[rwlfree-null:%s;%d]", fna, lno);
    return;
  }

  /* find the address we originally got from malloc */
  all = mem - sizeof(ub8) - sizeof(size_t);

  /* check the head signature */
  memcpy(&head, all+sizeof(size_t), sizeof(size_t));

  if (head != RWL_ALLOC_HEAD && head != RWL_ALLOC_FREE)
  {
    /* a progrramming error has been writing BEFORE the buffer
     * provided.  Nothing else can be trusted, so don't attempt 
     * finding original length (nn)
     *
     * in stead, just write some bytes from the beginning
     */
    rwlsevere(rwm, "[rwlfree-underwrite:%p;%p;0x%x;%s;%d]"
      , all, all+sizeof(ub8), head, fna, lno);
    return;
  }

  memcpy(&nn, all, sizeof(size_t));
  //if (bit(rwm->mflags, RWL_DEBUG_ALLOC))
  //  rwldebugcode(rwm, cloc, "free at %s;%d siz=%zd ptr=%p alloc:%s", fna, lno, nn
  //    , mem
  //    , all + nn + 2*sizeof(ub8) + sizeof(size_t)+1);
  /* head is good, check tail */
  memcpy(&tail, all + nn + sizeof(ub8) + sizeof(size_t), sizeof(ub8));
  semicolon = all + nn + 2*sizeof(ub8) + sizeof(size_t); /* should be ; here */

  if (head == RWL_ALLOC_FREE || tail == RWL_ALLOC_FREE)
  {
    /* either head or tail has the FREE signature
     * the most likely cause being a double free
     *
     * note that this check really only works if the
     * O/S's free does not modify the memory being freed
     * which is NOT guaranteed
     */
    rwlsevere(rwm, "[rwlfree-doublefree:%p;0x%x;0x%x;%s;%d%s]"
      , all, head, tail
      , fna, lno
      , ';' == *semicolon ? semicolon: ";corruption");
    return;
  }
  if (tail != RWL_ALLOC_TAIL)
  {
    /* tail no longer has the TAIL signature
     * the most likely cause is overwrite
     */
    rwlsevere(rwm, "[rwlfree-overwrite:%p;%p;%p;0x%x;0x%x;%s;%d%s]"
      , all, all + nn + sizeof(ub8) + sizeof(size_t)
      , semicolon
      , head, tail, fna, lno
      , ';' == *semicolon ? semicolon: ";corruption");
    return;
  }

  /* head and tail are good - write free signatures */
  head = RWL_ALLOC_FREE;
  tail = RWL_ALLOC_FREE;
  memcpy(all + sizeof(size_t), &head, sizeof(ub8));
  memcpy(all + nn + sizeof(ub8) + sizeof(size_t), &tail, sizeof(ub8));
#if 0
  if (bit(rwm->mflags, RWL_DEBUG_ALLOC))
    rwldebugcode(rwm, cloc, "free at %s;%d siz=%zd ptr=0x%x alloc:%s", fna, lno, nn
      , mem
      , all + nn + 2*sizeof(ub8) + sizeof(size_t)+1);
#endif

  /* and free back to O/S */
  free(all);

}
#endif // RWL_OWN_MALLOC

/* start a thread */
void rwlthreadcreate(rwl_main *rwm , ub4 tnum , void (*worker) (rwl_xeqenv *))
{
  rwl_xeqenv *xev = rwm->xqa+tnum;
  /* tnum is entry in xqa and xqthid arrays */ 
#ifdef RWL_USE_OCITHR
  if (  OCI_SUCCESS!=(xev->status=OCIThreadIdInit (rwm->envhp, xev->errhp, rwm->thrid+tnum))
     || OCI_SUCCESS!=(xev->status=OCIThreadHndInit(rwm->envhp, xev->errhp, rwm->thrhp+tnum))
     || OCI_SUCCESS!=(xev->status=OCIThreadCreate (rwm->envhp, xev->errhp
			, (void (*)(void *))worker
			, xev
			, rwm->thrid[tnum], rwm->thrhp[tnum])))
  { 
    if (OCI_NO_DATA == xev->status)
      rwlerror(rwm, RWL_ERROR_CANNOT_THREAD);
    else
      rwldberror(xev, &rwm->loc, 0);
    OCIThreadClose(rwm->envhp, xev->errhp, rwm->thrhp[tnum]);
    OCIThreadIdDestroy(rwm->envhp, xev->errhp, rwm->thrid+tnum);
    OCIThreadHndDestroy(rwm->envhp, xev->errhp, rwm->thrhp+tnum);
  }
  else
    bis(rwm->thrbits[tnum], RWL_TB_THREADOK); 	
#else
  char etxt[100];
  if (0 != pthread_create(rwm->xqthrid+tnum, 0 /*attr*/
	       , (void * (*)(void *))worker, rwm->xqa+tnum))
  {
    if (0!=strerror_r(errno, etxt, sizeof(etxt)))
      strcpy(etxt,"unknown");
    rwlerror(rwm, RWL_ERROR_GENERIC_OS, "pthread_create()", etxt);
  }
#endif
}

/* wait for a thread to terminate */
void rwlthreadawait(rwl_main *rwm , ub4 tnum )
{
  rwl_xeqenv *xev = rwm->xqa+tnum;
  if (!bit(rwm->thrbits[tnum], RWL_TB_THREADOK))
    return;
  bis(rwm->thrbits[tnum], RWL_TB_THREADOK); 	
#ifdef RWL_USE_OCITHR
  if (  OCI_SUCCESS != (rwm->mxq->status=OCIThreadJoin(rwm->envhp, xev->errhp, rwm->thrhp[tnum]))
     || OCI_SUCCESS != (rwm->mxq->status=OCIThreadClose(rwm->envhp, xev->errhp, rwm->thrhp[tnum]))
     || OCI_SUCCESS != (rwm->mxq->status=OCIThreadIdDestroy(rwm->envhp, xev->errhp, rwm->thrid+tnum))
     || OCI_SUCCESS != (rwm->mxq->status=OCIThreadHndDestroy(rwm->envhp, xev->errhp, rwm->thrhp+tnum))
     )
  rwldberror(xev, &rwm->loc, 0);
#else
  char etxt[100];
  if (0 != pthread_join(rwm->xqthrid[tnum], 0 /*retval*/))
  {
    if (0!=strerror_r(errno, etxt, sizeof(etxt)))
      strcpy(etxt,"unknown");
    rwlerror(rwm, RWL_ERROR_GENERIC_OS, "pthread_join()", etxt);
  }
#endif
}

void rwlstatsincr(rwl_xeqenv *xev , rwl_identifier *var , rwl_location *eloc , double t0d , double t1d , double t2d , double t3)
{
  double tdsum = t0d+t1d+t2d;
  double wtsum = t0d+t1d;
  rwl_stats *s = var->stats;
  /*assert*/
  if (t0d < 0.0 || t1d < 0.0 || t2d < 0.0)
  {
    rwlexecsevere(xev, eloc, "[rwlstatsincr-negative:%.3e;%.3e;%.3e;%s;%s]"
      , t0d, t1d, t2d
      , var->vname ? var->vname : (text *)"no vname"
      , var->pname ? var->pname : (text *)"no pname");
    return;
  }
  s->time0 += t0d;
  s->time1 += t1d;
  s->time2 += t2d;
  s->count++;
  //s->ttime += tdsum;
  /*
   * t0d and t1d are known to sometimes be zero, while
   * t2d is probably never zero, but it cannot be ruled out
   * so we simply ignore it rather than error out
   *
   * also, anything under 100µs isn't added to the histogram
   */
  if (bit(xev->tflags, RWL_P_HISTOGRAMS) && tdsum>0.0 )
  {
    ub4 i_buck;
    double d_buck = log(tdsum) / M_LN2 + 20.0;

    /* find the bucket */
    /* 
     * sec~=0.000001 => d_buck==0
     * sec~=0.001    => d_buck==10 
     * sec==1.0      => d_buck==20
     * sec==1024     => d_buck==30
     */

    if (d_buck < 0.0)
      i_buck = 0;
    else
      i_buck = (ub4) floor(d_buck);

    if (i_buck>=xev->rwm->histbucks)
    {
      rwlexecerror(xev, eloc, RWL_ERROR_HISTOVERFLOW, i_buck, tdsum);
      i_buck = xev->rwm->histbucks-1;
    }
    s->hist[i_buck].count ++;
    s->hist[i_buck].ttime += tdsum;
  }

  if (bit(xev->tflags, RWL_P_PERSECSTAT) && t3>0.0)
  {
    ub4 *np, ns, i_sec = (ub4) floor(t3);
    double *ne, *nw;
    if (i_sec >= s->pssize)
    {
      if (i_sec >= RWL_PERSEC_MAX)
      {
	rwlexecerror(xev, eloc, RWL_ERROR_PERSEC_TOOBIG, RWL_PERSEC_MAX-1);
	bic(xev->tflags, RWL_P_PERSECSTAT);
	goto stopcounting;
      }
      /*
       * If useing flushstop, we pre-allocate the whole array so that
       * we never move it.  Therefore, we need to stop now.  
       */
      if (xev->rwm->flushstop) 
      {
	rwlexecerror(xev, eloc, RWL_ERROR_PERSEC_TOOBIG, s->pssize);
	bic(xev->tflags, RWL_P_PERSECSTAT);
	goto stopcounting;
      }
      ns = RWL_PERSEC_SECONDS * (i_sec / RWL_PERSEC_SECONDS + 1);
      np = rwlalloccode(xev->rwm, sizeof(*s->persec) * ns, eloc);
      nw = rwlalloccode(xev->rwm, sizeof(*s->wtimsum) * ns, eloc);
      ne = rwlalloccode(xev->rwm, sizeof(*s->etimsum) * ns, eloc);
      memcpy(np, s->persec, sizeof(*s->persec)*s->pssize);
      memcpy(nw, s->wtimsum, sizeof(*s->wtimsum)*s->pssize);
      memcpy(ne, s->etimsum, sizeof(*s->etimsum)*s->pssize);
      rwlfreecode(xev->rwm, s->persec, eloc);
      rwlfreecode(xev->rwm, s->wtimsum, eloc);
      rwlfreecode(xev->rwm, s->etimsum, eloc);
      s->persec = np;
      s->wtimsum = nw;
      s->etimsum = ne;
      s->pssize = ns;
    }
    if (i_sec >= s->pssize)
    {
      rwlexecsevere(xev, eloc, "[rwlstatsincr-outofbounds:%d;%d]"
        , i_sec, s->pssize);
      return;
    }
    // If we are flushing persec, mutex the increase
    RWL_SRC_ERROR_FRAME
    if (xev->rwm->flushstop) 
      rwlmutexget(xev, RWL_SRC_ERROR_LOC, var->var_mutex);
    s->persec[i_sec] ++;
    s->wtimsum[i_sec] += wtsum;
    s->etimsum[i_sec] += t2d;
    if (xev->rwm->flushstop) 
      rwlmutexrel(xev, RWL_SRC_ERROR_LOC, var->var_mutex);
    RWL_SRC_ERROR_END
  }
  stopcounting:
  return;
}

// This is used in a few places below
static text *rwlmergepersec = (text *)
"merge into persec p using\n"
"( select \n"
"  :1 runnumber, :2 procno ,:3 vname ,:4 second ,:5 scount,:6 wtime, :7 etime\n"
"  from dual) v\n"
"on (p.runnumber=v.runnumber and p.procno=v.procno\n"
"  and p.vname=v.vname and p.second=v.second)\n"
"when matched then\n"
"  update set p.scount=p.scount+v.scount\n"
"  , p.wtime=p.wtime+v.wtime\n"
"  , p.etime=p.etime+v.etime\n"
"when not matched then\n"
"  insert (runnumber, procno, vname, second, scount, wtime, etime) values\n"
"  (v.runnumber, v.procno, v.vname, v.second, v.scount, v.wtime, v.etime)\n";

void rwlstatsflush(rwl_main *rwm, rwl_stats *stat, text *name)
{
  rwl_sql *mysq;    
  rwl_bindef *brno; /* bind for runnumber */
  rwl_bindef *bpno; /* bind for procno */
  rwl_bindef *bvna; /* bind for vname */

  rwl_bindef *b4, *b5, *b6, *b7, *b8; /* for different purposes in different SQL */

  RWL_SRC_ERROR_FRAME
    sb2 notnull = 0;
    ub4 tooksess;
    rwl_cinfo *rdb;

    tooksess = rwlensureresdb(rwm->mxq, RWL_SRC_ERROR_LOC, 0, &rdb);
    if (!rdb) /* RWL-600 reported in rwlensureresdb */
      return;

    /* allocate all */
    brno = (rwl_bindef *) rwlalloc(rwm, sizeof(rwl_bindef));
    bpno = (rwl_bindef *) rwlalloc(rwm, sizeof(rwl_bindef));
    bvna = (rwl_bindef *) rwlalloc(rwm, sizeof(rwl_bindef));
    b4   = (rwl_bindef *) rwlalloc(rwm, sizeof(rwl_bindef));
    b5   = (rwl_bindef *) rwlalloc(rwm, sizeof(rwl_bindef));
    b6   = (rwl_bindef *) rwlalloc(rwm, sizeof(rwl_bindef));
    b7   = (rwl_bindef *) rwlalloc(rwm, sizeof(rwl_bindef));
    b8   = (rwl_bindef *) rwlalloc(rwm, sizeof(rwl_bindef));
    mysq = (rwl_sql    *) rwlalloc(rwm, sizeof(rwl_sql   ));

    /* setup the binds common for all inserts */

    brno->vname = RWL_RUNNUMBER_VAR;
    brno->vguess = rwlfindvar(rwm->mxq, RWL_RUNNUMBER_VAR, RWL_VAR_NOGUESS);
    brno->bdtyp = RWL_BIND_POS;
    brno->vtype = RWL_TYPE_INT;
    brno->pos = 1;
    brno->next = bpno;

    bpno->vname = (text *)RWL_PROCNUMBER_VAR;
    bpno->vguess = rwlfindvar(rwm->mxq, RWL_PROCNUMBER_VAR, RWL_VAR_NOGUESS);
    bpno->bdtyp = RWL_BIND_POS;
    bpno->vtype = RWL_TYPE_INT;
    bpno->pos = 2;
    bpno->next = bvna;

    bvna->vname = (text *)"I#vname";
    bvna->bdtyp = RWL_DIRBIND;
    bvna->vtype = RWL_TYPE_STR;
    bvna->pvar = name;
    bvna->slen = rwlstrlen(name)+1;
    bvna->pind = &notnull;
    bvna->pos = 3;
    /* bvna->next is 0, this is the end of the chain */

    /* insert into runres */
    b4->vname = (text *)"I#wtime";
    b4->bdtyp = RWL_DIRBIND;
    b4->vtype = RWL_TYPE_DBL;
    b4->pvar = &stat->time1;
    b4->pind = &notnull;
    b4->pos = 4;
    b4->next = b5;

    b5->vname = (text *)"I#etime";
    b5->bdtyp = RWL_DIRBIND;
    b5->vtype = RWL_TYPE_DBL;
    b5->pvar = &stat->time2;
    b5->pind = &notnull;
    b5->pos = 5;
    b5->next = b6;

    b6->vname = (text *)"I#ecount";
    b6->bdtyp = RWL_DIRBIND;
    b6->vtype = RWL_TYPE_INT;
    b6->pvar = &stat->count;
    b6->pind = &notnull;
    b6->pos = 6;
    b6->next = b7;

    b7->vname = (text *)"I#tcount";
    b7->bdtyp = RWL_DIRBIND;
    b7->vtype = RWL_TYPE_INT;
    b7->pvar = &stat->tcount;
    b7->pind = &notnull;
    b7->pos = 7;
    b7->next = brno;
    mysq->bincount = 7;

    mysq->sql = (text *)
	    "insert into runres(runnumber, procno, vname, wtime, etime, ecount, tcount/*, itime*/)\n"
	    "values (:1,:2,:3,:4,:5,:6,:7/*,:8*/)\n";
    mysq->sqllen = (ub4)rwlstrlen(mysq->sql);
    mysq->bindef = b4; /* head of the chain */
    mysq->vname = (text *)"I#insrunres";
    rwlsimplesql(rwm->mxq, RWL_SRC_ERROR_LOC, rdb, mysq);

    if (bit(rwm->mflags, RWL_P_HISTOGRAMS))
    {
      /* insert histograms */
      sb8 buckno;
      double ttime;
      sb8 bcount;
      sb4 i,lo,hi;

      b4->vname = (text *)"I#buckno";
      b4->bdtyp = RWL_DIRBIND;
      b4->vtype = RWL_TYPE_INT;
      b4->pvar = &buckno;
      b4->pind = &notnull;
      b4->pos = 4;
      b4->next = b5;

      b5->vname = (text *)"I#ttime";
      b5->bdtyp = RWL_DIRBIND;
      b5->vtype = RWL_TYPE_DBL;
      b5->pvar = &ttime;
      b5->pind = &notnull;
      b5->pos = 5;
      b5->next = b6;

      b6->vname = (text *)"I#bcount";
      b6->bdtyp = RWL_DIRBIND;
      b6->vtype = RWL_TYPE_INT;
      b6->pvar = &bcount;
      b6->pind = &notnull;
      b6->pos = 6;
      b6->next = brno;

      /* find first and last actually used histogram */
      for (i=lo=0; i<RWL_MAX_HIST_BUCK; i++)
	if (!lo && stat->hist[i].count)
	{
	  lo=i;
	  break;
	}

      hi=0;
      for (i=RWL_MAX_HIST_BUCK-1; i>=0; i--)
	if (!hi && stat->hist[i].count)
	{
	  hi=i;
	  break;
	}
      mysq->sql = (text *)
	  "insert into histogram(runnumber, procno, vname, buckno, ttime, bcount)\n"
	  "values (:1,:2,:3,:4,:5,:6)\n";
      mysq->sqllen = (ub4)rwlstrlen(mysq->sql);
      mysq->bindef = b4; /* head of the chain */
      mysq->bincount = 6;
      mysq->vname = (text *)"I#inshistogram";
      /* use array */
      mysq->asiz = RWL_STATS_ARRAY;
      bis(mysq->flags,RWL_SQFLAG_ARRAYB);
      rwlallocabd(rwm->mxq, RWL_SRC_ERROR_LOC, mysq);

      for (i=lo; i<=hi; i++)
      {
	buckno = i;
	ttime = stat->hist[i].ttime;
	bcount = stat->hist[i].count;
	rwlsimplesql(rwm->mxq, RWL_SRC_ERROR_LOC, rdb, mysq);
      }

      rwlflushsql(rwm->mxq, RWL_SRC_ERROR_LOC, rdb, mysq);
      rwlfreeabd(rwm->mxq, RWL_SRC_ERROR_LOC, mysq);
      bic(mysq->flags,RWL_SQFLAG_ARRAYB);
    }

    if (bit(rwm->mflags, RWL_P_PERSECSTAT))
    {
      ub8 second;
      ub8 scount;
      double wtime, etime;
      sb4 i, hi;

      b4->vname = (text *)"I#second";
      b4->bdtyp = RWL_DIRBIND;
      b4->vtype = RWL_TYPE_INT;
      b4->pvar = &second;
      b4->pind = &notnull;
      b4->pos = 4;
      b4->next = b5;

      b5->vname = (text *)"I#scount";
      b5->bdtyp = RWL_DIRBIND;
      b5->vtype = RWL_TYPE_INT;
      b5->pvar = &scount;
      b5->pind = &notnull;
      b5->pos = 5;
      b5->next = b6;

      b6->vname = (text *)"I#wtime";
      b6->bdtyp = RWL_DIRBIND;
      b6->vtype = RWL_TYPE_DBL;
      b6->pvar = &wtime;
      b6->pind = &notnull;
      b6->pos = 6;
      b6->next = b7;

      b7->vname = (text *)"I#etime";
      b7->bdtyp = RWL_DIRBIND;
      b7->vtype = RWL_TYPE_DBL;
      b7->pvar = &etime;
      b7->pind = &notnull;
      b7->pos = 7;
      b7->next = brno;

      hi=0;
      for (i=(sb4)stat->pssize-1; i>=0; i--)
	if (!hi && stat->persec[i])
	{
	  hi=i;
	  break;
	}
      mysq->sql = rwlmergepersec;
      mysq->sqllen = (ub4)rwlstrlen(mysq->sql);
      mysq->bindef = b4; /* head of the chain */
      mysq->bincount = 7;
      mysq->vname = (text *)"I#inspsersec";
      /* use array */
      mysq->asiz = RWL_STATS_ARRAY;
      bis(mysq->flags,RWL_SQFLAG_ARRAYB);
      rwlallocabd(rwm->mxq, RWL_SRC_ERROR_LOC, mysq);

      for (i=0; i<=hi; i++)
      {
	second = (ub8) i+1;
	scount = stat->persec[i];
	wtime  = stat->wtimsum[i];
	etime  = stat->etimsum[i];
	// if (scount) we should put this under a control
	  rwlsimplesql(rwm->mxq, RWL_SRC_ERROR_LOC, rdb, mysq);
      }

      rwlflushsql(rwm->mxq, RWL_SRC_ERROR_LOC, rdb, mysq);
      rwlfreeabd(rwm->mxq, RWL_SRC_ERROR_LOC, mysq);
      bic(mysq->flags,RWL_SQFLAG_ARRAYB);
    }

    rwlcommit(rwm->mxq, RWL_SRC_ERROR_LOC, rdb);

    if (tooksess)
      rwlreleaseresdb(rwm->mxq, RWL_SRC_ERROR_LOC, 0);

    /* free all */
    rwlfree(rwm, brno );
    rwlfree(rwm, bpno );
    rwlfree(rwm, bvna );
    rwlfree(rwm, b4   );
    rwlfree(rwm, b5   );
    rwlfree(rwm, b6   );
    rwlfree(rwm, b7   );
    rwlfree(rwm, b8   );
    rwlfree(rwm, mysq );
  RWL_SRC_ERROR_END

}

// flush ORA- error statistics
//
// NOTE: This routine writes to rwl_main
void rwloerflush(rwl_xeqenv *xev)
{
  rwl_sql *mysq;    
  rwl_bindef *brno; /* bind for runnumber */
  rwl_bindef *bpno; /* bind for procno */
  rwl_bindef *boer; /* bind for oer number */
  rwl_bindef *bsec; /* bind for runseconds */
  rwl_bindef *btxt; /* bind for error text */
  rwl_bindef *bsna; /* bind for sql name */
  rwl_bindef *bins; /* bind for instance name */
  rwl_bindef *bseq; /* bind for oeseq */

  rwl_oerstat *ost = xev->oerhead;

  sb8 oernum;
  text oertxt[RWL_OERSTAT_MAX_BUF+1];
  text oerins[RWL_OERINST_MAX_BUF+1];
  text oersqn[RWL_MAX_IDLEN+1];

  // silently return if nothing to do
  if (!ost)
    return;

  // assert OK to write to main
  if (!bit(xev->rwm->mflags, RWL_P_ONLYMAINTH))
  {
    rwlsevere(xev->rwm, "[rwloerflush-notonlymain:0x%x]", xev->rwm->mflags);
    return;
  }

  RWL_SRC_ERROR_FRAME
    sb2 notnull = 0;
    ub4 tooksess;
    rwl_cinfo *rdb;

    tooksess = rwlensureresdb(xev, RWL_SRC_ERROR_LOC, 0, &rdb);
    if (!rdb) /* RWL-600 reported in rwlensureresdb */
      return;

    /* allocate all */
    brno = (rwl_bindef *) rwlalloc(xev->rwm, sizeof(rwl_bindef));
    bpno = (rwl_bindef *) rwlalloc(xev->rwm, sizeof(rwl_bindef));
    boer = (rwl_bindef *) rwlalloc(xev->rwm, sizeof(rwl_bindef));
    bsec = (rwl_bindef *) rwlalloc(xev->rwm, sizeof(rwl_bindef));
    btxt = (rwl_bindef *) rwlalloc(xev->rwm, sizeof(rwl_bindef));
    bins = (rwl_bindef *) rwlalloc(xev->rwm, sizeof(rwl_bindef));
    bsna = (rwl_bindef *) rwlalloc(xev->rwm, sizeof(rwl_bindef));
    bseq = (rwl_bindef *) rwlalloc(xev->rwm, sizeof(rwl_bindef));
    mysq = (rwl_sql    *) rwlalloc(xev->rwm, sizeof(rwl_sql   ));

    brno->vname = RWL_RUNNUMBER_VAR;
    brno->vguess = rwlfindvar(xev, RWL_RUNNUMBER_VAR, RWL_VAR_NOGUESS);
    brno->bdtyp = RWL_BIND_POS;
    brno->vtype = RWL_TYPE_INT;
    brno->pos = 1;
    brno->next = bpno;

    bpno->vname = (text *)RWL_PROCNUMBER_VAR;
    bpno->vguess = rwlfindvar(xev, RWL_PROCNUMBER_VAR, RWL_VAR_NOGUESS);
    bpno->bdtyp = RWL_BIND_POS;
    bpno->vtype = RWL_TYPE_INT;
    bpno->pos = 2;
    bpno->next = boer;

    boer->vname = (text *)"I#oer";
    boer->bdtyp = RWL_DIRBIND;
    boer->vtype = RWL_TYPE_INT;
    boer->pvar = &oernum;
    boer->pind = &notnull;
    boer->pos = 3;
    boer->next = bsec;

    bsec->vname = (text *)"I#bsec";
    bsec->bdtyp = RWL_DIRBIND;
    bsec->vtype = RWL_TYPE_DBL;
    bsec->pvar = &ost->oersec;
    bsec->pind = &notnull;
    bsec->pos = 4;
    bsec->next = btxt;

    btxt->vname = (text *)"I#oertxt";
    btxt->bdtyp = RWL_DIRBIND;
    btxt->vtype = RWL_TYPE_STR;
    btxt->pvar = oertxt;
    btxt->slen = sizeof(oertxt);
    btxt->pind = &notnull;
    btxt->pos = 5;
    btxt->next = bsna;

    bsna->vname = (text *)"I#oersqn";
    bsna->bdtyp = RWL_DIRBIND;
    bsna->vtype = RWL_TYPE_STR;
    bsna->pvar = oersqn;
    bsna->slen = sizeof(oersqn);
    bsna->pind = &notnull;
    bsna->pos = 6;
    bsna->next = bseq;

    bseq->vname = (text *)"I#oeseq";
    bseq->bdtyp = RWL_DIRBIND;
    bseq->vtype = RWL_TYPE_INT;
    bseq->pvar = &xev->rwm->oerstatseq;
    bseq->pind = &notnull;
    bseq->pos = 7;
    bseq->next = bins;

    bins->vname = (text *)"I#oerins";
    bins->bdtyp = RWL_DIRBIND;
    bins->vtype = RWL_TYPE_STR;
    bins->pvar = oerins;
    bins->slen = sizeof(oerins);
    bins->pind = &notnull;
    bins->pos = 8;

    mysq->bincount = 8;

    mysq->sql = (text *)
	    "insert into oerstats(runnumber, procno, oer, second, oertxt, sname, oeseq, oerinst)\n"
	    "values (:1,:2,:3,:4,:5,:6,:7,:8)\n";
    mysq->sqllen = (ub4)rwlstrlen(mysq->sql);
    mysq->bindef = brno; /* head of the chain */
    mysq->vname = (text *)"I#insorastat";

    /* use array */
    mysq->asiz = RWL_STATS_ARRAY;
    bis(mysq->flags,RWL_SQFLAG_ARRAYB);
    rwlallocabd(xev, RWL_SRC_ERROR_LOC, mysq);

    // follow the linked list
    while (ost)
    {
      xev->rwm->oerstatseq++;
      oernum = ost->oernum;
      rwlstrnncpy(oertxt, ost->oertxt, sizeof(oertxt));
      rwlstrnncpy(oerins, ost->oerinst, sizeof(oerins));
      rwlstrnncpy(oersqn, ost->oersqn, sizeof(oersqn));
      rwlsimplesql(xev, RWL_SRC_ERROR_LOC, rdb, mysq);
      ost = ost->nxtoes;
    }

    rwlflushsql(xev, RWL_SRC_ERROR_LOC, rdb, mysq);
    rwlfreeabd(xev, RWL_SRC_ERROR_LOC, mysq);
    bic(mysq->flags,RWL_SQFLAG_ARRAYB);

    rwlcommit(xev, RWL_SRC_ERROR_LOC, rdb);

    // warn if some where not saved
    if (xev->oercount > xev->rwm->oermaxstat)
      rwlerror(xev->rwm, RWL_ERROR_TOO_MANY_OER_SAVE, xev->rwm->oermaxstat, xev->oercount);
      

    if (tooksess)
      rwlreleaseresdb(xev, RWL_SRC_ERROR_LOC, 0);

    /* free all */
    rwlfree(xev->rwm, brno);
    rwlfree(xev->rwm, bpno);
    rwlfree(xev->rwm, boer);
    rwlfree(xev->rwm, bsec);
    rwlfree(xev->rwm, btxt);
    rwlfree(xev->rwm, bsna);
    rwlfree(xev->rwm, bseq);
    rwlfree(xev->rwm, mysq);
  RWL_SRC_ERROR_END

}


/* copy at most n characters from s to d
* including the final NULL
*
* NOTE: The semantics is NOT the same as strncpy
* which always writes exactly N characters
*/
/*
* This implementation is far too slow:
**************************************
void rwlstrnncpy(text *d, text *s, ub8 n)
{
ub8 i;

if (!n)
  return;

for (i=0 ; i<n-1 && *s; i++, d++, s++)
  *d = *s;

  *d = 0;

}
***************************************/
void rwlstrnncpy(text *d, text *s, ub8 n)
{
  ub8 l;

  if (!n)
    return;

  l = rwlstrlen(s);
  if (l<n) // if not too long, use ordinary strcpy
    rwlstrcpy(d,s);
  else
  {
    // use strncpy() otherwise
    strncpy((char *)d,(const char *)s,n-1);
    d[n-1]=0;
  }

}

extern text *rwlstrdup2(rwl_main *rwm, text *x, ub4 xtra)
{
  text *res;
#ifndef RWL_OWN_MALLOC
  (void)rwm;/*unused*/
#endif
  if (!x) // avoid core dump
    return 0;
  res = rwlalloc(rwm, rwlstrlen(x)+1+xtra);
  rwlstrcpy(res,x);
  return res;
}

/* get runnumber from sequence */
void rwlgetrunnumber(rwl_main *rwm)
{
  if (bit(rwm->m2flags, RWL_P2_NOEXEC))
    return;
  if (bit(rwm->mflags , RWL_P_MEXECUTE))
  {
    /* The prepare run has done the work, just copy runnumber to variable */
    sb4 vno = rwlfindvar(rwm->mxq, RWL_RUNNUMBER_VAR, RWL_VAR_NOGUESS);
    if (vno<0)
    {
      rwlsevere(rwm, "[rwlgetrunnumber-norunnovar:%d]", vno);
      return;
    }
    rwm->mxq->evar[vno].num.ival = (sb8) rwm->runnumber;
    rwm->mxq->evar[vno].num.dval = (double) rwm->runnumber;
    rwm->mxq->evar[vno].num.isnull = 0;
    if (rwm->mxq->evar[vno].num.vsalloc != RWL_SVALLOC_NOT)
      rwlsnpiformat(rwm, rwm->mxq->evar[vno].num.sval, rwm->mxq->evar[vno].num.slen, (sb8)rwm->runnumber);


  }
  else if (!rwm->runnumber)
  { /* only get sequence once */
    RWL_SRC_ERROR_FRAME
      rwl_sql *rsql;
      rwl_bindef *brno, *bkey, *bkom, *bhst, *badj, *bdat;
      sb2 notnull = 0;
      ub4 tooksess;
      time_t tt;
      struct tm *tm;
      char strtim[100];
      rwl_cinfo *rdb = 0;

      tt = time(0);
      tm = gmtime(&tt);
      strftime(strtim, sizeof(strtim), "%d.%m.%Y %H:%M:%S", tm);

      /* allocate bindef for 1 define */
      brno = (rwl_bindef *) rwlalloc(rwm, sizeof(rwl_bindef));
      bkey = (rwl_bindef *) rwlalloc(rwm, sizeof(rwl_bindef));
      bkom = (rwl_bindef *) rwlalloc(rwm, sizeof(rwl_bindef));
      bhst = (rwl_bindef *) rwlalloc(rwm, sizeof(rwl_bindef));
      bdat = (rwl_bindef *) rwlalloc(rwm, sizeof(rwl_bindef));
      badj = (rwl_bindef *) rwlalloc(rwm, sizeof(rwl_bindef));

      /* link the bindef's and fill in fields */
      brno->vname = RWL_RUNNUMBER_VAR;
      brno->vguess = rwlfindvar(rwm->mxq, RWL_RUNNUMBER_VAR, RWL_VAR_NOGUESS);
      brno->pos = 6;
      brno->bdtyp = RWL_BINDOUT_POS;
      brno->vtype = RWL_TYPE_INT;
      brno->next = bkey;

      bkey->vname = (text *)"I#reskey";
      bkey->bdtyp = RWL_DIRBIND;
      bkey->vtype = RWL_TYPE_STR;
      bkey->pvar = rwm->reskey;
      bkey->slen = strlen(rwm->reskey)+1;
      bkey->pind = &notnull;
      bkey->pos = 1;
      bkey->next = bkom;

      bkom->vname = (text *)"I#komment";
      bkom->bdtyp = RWL_DIRBIND;
      bkom->vtype = RWL_TYPE_STR;
      bkom->pvar = rwm->komment;
      bkom->slen = strlen(rwm->komment)+1;
      bkom->pos = 2;
      bkom->pind = &notnull;
      bkom->next = bdat;

      bdat->vname = (text *)"I#date";
      bdat->bdtyp = RWL_DIRBIND;
      bdat->vtype = RWL_TYPE_STR;
      bdat->pvar = strtim;
      bdat->slen = strlen(strtim)+1;
      bdat->pos = 3;
      bdat->pind = &notnull;
      bdat->next = badj;

      badj->vname = (text *)"I#adjepoch";
      badj->bdtyp = RWL_DIRBIND;
      badj->vtype = RWL_TYPE_DBL;
      badj->pvar = &rwm->adjepoch;
      badj->slen = sizeof(rwm->adjepoch);
      badj->pos = 4;
      badj->pind = &notnull;
      badj->next = bhst;

      bhst->vname = (text *) "I#hostname";
      bhst->pvar = rwm->hostname;
      bhst->bdtyp = RWL_DIRBIND;
      bhst->vtype = RWL_TYPE_STR;
      bhst->slen = RWL_HOSTNAME_LEN;
      bhst->pos = 5;

      /* allocate SQL and fill in */
      rsql = (rwl_sql *) rwlalloc(rwm, sizeof(rwl_sql));
      // make rdate be the common start time by adding adjepoch to the timestamp
      // letting the database do the add with its potential carry
      rsql->sql = (text *)
		  "insert into rwlrun(runnumber, key, komment, rdate, hostname)\n"
		  "values (runnumber_seq.nextval, :1, :2, \n"
		  "to_date(:3,'DD.MM.YYYY HH24:MI:SS') + :4/86400, :5)\n"
		  "returning runnumber into :6";
      rsql->sqllen = (ub4)rwlstrlen(rsql->sql);
      rsql->bindef = brno;
      rsql->bincount = 5;
      rsql->outcount = 1;
      rsql->vname = (text *)"I#getrunnumber";

      /* do the database work */
      tooksess = rwlensureresdb(rwm->mxq, RWL_SRC_ERROR_LOC, rsql, &rdb);
      if (rdb)
      {
	rwlsimplesql(rwm->mxq, RWL_SRC_ERROR_LOC, rdb, rsql);
	rwlcommit(rwm->mxq, RWL_SRC_ERROR_LOC, rdb);
	if (tooksess)
	  rwlreleaseresdb(rwm->mxq, RWL_SRC_ERROR_LOC, rsql);
	rwm->runnumber = (ub8) rwm->mxq->evar[brno->vguess].num.ival;
      }
      else
      {
	rwlerror(rwm, RWL_ERROR_NO_STATS_WITHOUT_RESDB);
        rwm->runnumber = 0;
	bic(rwm->mflags, RWL_P_STATISTICS|RWL_P_HISTOGRAMS|RWL_P_PERSECSTAT);
      }
	
      rwlfree(rwm, rsql);
      rwlfree(rwm, brno);
      rwlfree(rwm, bkey);
      rwlfree(rwm, bkom);
      rwlfree(rwm, badj);
      rwlfree(rwm, bdat);
      if (bit(rwm->mflags, RWL_THR_DSQL))
      {
	rwldebugcode(rwm, RWL_SRC_ERROR_LOC, "got runnumber %d from sequence", rwm->runnumber);
      }
    RWL_SRC_ERROR_END

    if (bit(rwm->mflags, RWL_P_MPREPARE))
    {
      /* prepare for multi process run */
      text *rfn = rwlenvexp(rwm->mxq, 0, (text *)rwm->Mname);
      FILE *Mfile = rwlfopen(rwm->mxq, 0, rfn,"w");

      if (Mfile)
      {
	fprintf(Mfile, RWL_PFLAG_FORMAT, rwm->runnumber, rwlsinceepoch(rwm) + rwm->adjepoch, rwm->hostname);
	fclose(Mfile);
      }
      else
      {
	char etxt[100];
	if (0!=strerror_r(errno, etxt, sizeof(etxt)))
	  strcpy(etxt,"unknown");

	rwlerror(rwm, RWL_ERROR_CANNOTOPEN_FILEWRITE, rfn, etxt);
      }
      bic(rwm->mflags, RWL_P_MPREPARE);
    }
  }


}

/* These are only used to prompt for password
* and we therefore consider it safe to ignore
* errors.  Note that echoon may be called
* from rwlctrlc signal handler, where we 
* would not have context to do proper error
* handling
*/
void rwlechoon(int fd)
{
  struct termios t;
  (void) tcgetattr(fd, &t);
  bis(t.c_lflag, ECHO);
  (void) tcsetattr(fd, TCSANOW, &t);
}

void rwlechooff(int fd)
{
  struct termios t;
  (void) tcgetattr(fd, &t);
  bic(t.c_lflag, ECHO);
  (void) tcsetattr(fd, TCSANOW, &t);
}

void rwlcheckdformat(rwl_main *rwm)
{
  double in[] = {0.0, 1.0, 1.0e5, -1.0, -1.23, 23456789.12, -42042042042.42};
  double ut[sizeof(in)/sizeof(double)];
  text buf[RWL_PFBUF+2];
  ub4 i, fail=0;
  if (('%'==(rwm)->dformat[0]) 
   && ('.'==(rwm)->dformat[1]) 
   && ('0'<=(rwm)->dformat[2]) 
   && ('9'>=(rwm)->dformat[2]) 
   && ('f'==(rwm)->dformat[3]) 
   && ( 0 ==(rwm)->dformat[4]))
    bis(rwm->m3flags, RWL_P3_RWLD2SOK);
  else
    bic(rwm->m3flags, RWL_P3_RWLD2SOK);

  for (i=0; i<sizeof(in)/sizeof(double); i++)
  {
    rwlsnpdformat(rwm, buf, RWL_PFBUF, in[i]);
    ut[i] = rwlatof(buf);
    if (in[i]>=0.0 
	  ? (in[i]*1.000000000001 < ut[i] || in[i]*0.999999999999 > ut[i])
	  : (in[i]*1.000000000001 > ut[i] || in[i]*0.999999999999 < ut[i])
       )
    {
      rwlerror(rwm, RWL_ERROR_DFORMAT_BAD, rwm->dformat, in[i], ut[i], buf);
      fail++;
    }
  }

}

void rwlcheckiformat(rwl_main *rwm)
{
  sb8 in[] = {0, 1, 42, 123456789, 98765432109876543, -77665544332211, 0xbadf00deadbeef};
  sb8 ut[sizeof(in)/sizeof(sb8)];
  text buf[RWL_PFBUF+2];
  ub4 i, fail=0;

  if (0==strcmp((char *)rwm->iformat, "%ld"))
    bis(rwm->m3flags, RWL_P3_RWLI2SOK);
  else
    bic(rwm->m3flags, RWL_P3_RWLI2SOK);

  for (i=0; i<sizeof(in)/sizeof(sb8); i++)
  {
    rwlsnpiformat(rwm, buf, RWL_PFBUF, in[i]);
    ut[i] = rwlatosb8(buf);
    if (in[i] != ut[i])
    {
      rwlerror(rwm, RWL_ERROR_IFORMAT_BAD, rwm->iformat, in[i], ut[i], buf);
      fail++;
    }
  }

}

void rwlvitags(rwl_main *rwm)
{
  ub4 i;
  char etxt[100];
  rwl_identifier *v;
  FILE *tags;
  text *rfn;
  
  rfn = rwlenvexp(rwm->mxq, 0, (text *)rwm->vitagsfile);
  tags = rwlfopen(rwm->mxq, 0, rfn, "w");
  if (!tags)
  {
    if (0!=strerror_r(errno, etxt, sizeof(etxt)))
      strcpy(etxt,"unknown");
    rwlerror(rwm, RWL_ERROR_CANNOTOPEN_FILEWRITE, rfn, etxt);
    return;
  }

  fprintf(tags, "!_TAG_FILE_SORTED\t0\t\n");
  for (i=0; i<rwm->mxq->varcount; i++)
  {
    v = rwm->mxq->evar+i;

    if (bit(v->flags, RWL_IDENT_INTERNAL|RWL_IDENT_NOPRINT))
      continue;

    switch(v->vtype)
    {
      case RWL_TYPE_INT:
      case RWL_TYPE_DBL:
      case RWL_TYPE_STR:
      case RWL_TYPE_PROC:
      case RWL_TYPE_SQL:
      case RWL_TYPE_RAST:
      case RWL_TYPE_RAPROC:
      case RWL_TYPE_DB:
      case RWL_TYPE_FILE:
      case RWL_TYPE_FUNC:
      case RWL_TYPE_CLOB:
      case RWL_TYPE_BLOB:
      case RWL_TYPE_NCLOB:
      case RWL_TYPE_RAW:
	fprintf(tags, "%s\t%s\t%d\n", v->vname, v->loc.fname, v->loc.lineno );
      break;
      default: // prevent compile warning about missing enum
        break;
    }
  }
  if (rwm->runloc.fname)
  {
    text *dot, *sls;
    fprintf(tags, "run\t%s\t%d\n", rwm->runloc.fname, rwm->runloc.lineno );


    dot = rwlstrchr(rwm->runloc.fname,'.');
    sls = rwlstrchr(rwm->runloc.fname,'/');
    // if last dot and last slash are reasonable
    // also print a tag with just run_`basename` (ish)
    if (dot && sls && dot > sls+1) // both . and / found
      fprintf(tags, "run%.*s\t%s\t%d\n", (ub4) (dot-sls-1), sls+1
      , rwm->runloc.fname , rwm->runloc.lineno );
    else if (dot && dot > rwm->runloc.fname)
      fprintf(tags, "run%.*s\t%s\t%d\n"
        , (ub4) (dot-rwm->runloc.fname), rwm->runloc.fname
	, rwm->runloc.fname , rwm->runloc.lineno );
  }
  fclose(tags);
}

// This is the thread that flushes persec statistics 
void rwlflushrun(rwl_xeqenv *xev)
{
  ub4 sec;
  double dsec;
  ub4 s, t, i, j, v, vcnt; // count of relevant vars (i.e. functions with stats)
  ub4 *vnum; // array of relevant vars, vnum[i] will be the real variable number for that variable
  ub4 **ppsec; // array of pointers to counters
  double **ppwtim, **ppetim; // array of pointers to wtimes and etimes
  /* ppsec[j][i] will contain the persec counter for relevant variable i at time current second minus j */
  rwl_sql *mysq;    
  rwl_bindef *brno; /* bind for runnumber */
  rwl_bindef *bpno; /* bind for procno */
  rwl_bindef *bvna; /* bind for vname */
  rwl_bindef *bsec; /* bind for second */
  rwl_bindef *bcnt; /* bind for persec count */
  rwl_bindef *bwtm; /* bind for persec wtime */
  rwl_bindef *betm; /* bind for persec etime */

  sb2 notnull = 0;
  ub4 tooksess;
  rwl_cinfo *rdb;
  ub8 second;
  ub8 scount;
  double wtime, etime;

  text thisname[RWL_MAX_IDLEN+2];

  RWL_SRC_ERROR_FRAME

    if (bit(xev->tflags, RWL_DEBUG_MISC))
      rwldebugcode(xev->rwm, RWL_SRC_ERROR_LOC, "rwlflushrun stop=%d every=%d"
      , xev->rwm->flushstop, xev->rwm->flushevery);

    vcnt = 0;

    // first loop through all variables and count the relevant ones
    for (v=0; v<xev->varcount; v++)
    {
      if ( RWL_TYPE_PROC == xev->evar[v].vtype
	   && !bit(xev->evar[v].flags,RWL_IDENT_NOSTATS)
	 )
      {
	vcnt++;
      }
    }

    if (!vcnt)
      return; // Nothing to do, exit thread

    // allocate arrays
    vnum = rwlalloccode(xev->rwm, sizeof(*vnum) * vcnt, RWL_SRC_ERROR_LOC);
    ppsec = rwlalloccode(xev->rwm, sizeof(*ppsec)*xev->rwm->flushevery
    		,RWL_SRC_ERROR_LOC);
    ppwtim = rwlalloccode(xev->rwm, sizeof(*ppwtim)*xev->rwm->flushevery
    		,RWL_SRC_ERROR_LOC);
    ppetim = rwlalloccode(xev->rwm, sizeof(*ppetim)*xev->rwm->flushevery
    		,RWL_SRC_ERROR_LOC);
    for (j=0; j<xev->rwm->flushevery; j++)
    {
      ppsec[j] = rwlalloccode(xev->rwm, sizeof(**ppsec) * vcnt
      		, RWL_SRC_ERROR_LOC);
      ppwtim[j] = rwlalloccode(xev->rwm, sizeof(**ppwtim) * vcnt
      		, RWL_SRC_ERROR_LOC);
      ppetim[j] = rwlalloccode(xev->rwm, sizeof(**ppetim) * vcnt
      		, RWL_SRC_ERROR_LOC);
    }

    // get the variable numbers of the relevant ones and save in vnum array
    i=0;
    for (v=0; v<xev->varcount; v++)
    {
      if ( RWL_TYPE_PROC == xev->evar[v].vtype
	   && !bit(xev->evar[v].flags,RWL_IDENT_NOSTATS)
	 )
      {
	vnum[i] = v; 
	i++;
      }
    }

    /* allocate and prepare binds etc */
    brno = (rwl_bindef *) rwlalloc(xev->rwm, sizeof(rwl_bindef));
    bpno = (rwl_bindef *) rwlalloc(xev->rwm, sizeof(rwl_bindef));
    bvna = (rwl_bindef *) rwlalloc(xev->rwm, sizeof(rwl_bindef));
    bsec = (rwl_bindef *) rwlalloc(xev->rwm, sizeof(rwl_bindef));
    bcnt = (rwl_bindef *) rwlalloc(xev->rwm, sizeof(rwl_bindef));
    bwtm = (rwl_bindef *) rwlalloc(xev->rwm, sizeof(rwl_bindef));
    betm = (rwl_bindef *) rwlalloc(xev->rwm, sizeof(rwl_bindef));
    mysq = (rwl_sql    *) rwlalloc(xev->rwm, sizeof(rwl_sql   ));

    /* setup the binds */

    brno->vname = RWL_RUNNUMBER_VAR;
    brno->vguess = rwlfindvar(xev, RWL_RUNNUMBER_VAR, RWL_VAR_NOGUESS);
    brno->bdtyp = RWL_BIND_POS;
    brno->vtype = RWL_TYPE_INT;
    brno->pos = 1;
    brno->next = bpno;

    bpno->vname = (text *)RWL_PROCNUMBER_VAR;
    bpno->vguess = rwlfindvar(xev, RWL_PROCNUMBER_VAR, RWL_VAR_NOGUESS);
    bpno->bdtyp = RWL_BIND_POS;
    bpno->vtype = RWL_TYPE_INT;
    bpno->pos = 2;
    bpno->next = bvna;

    bvna->vname = (text *)"I#flvname";
    bvna->bdtyp = RWL_DIRBIND;
    bvna->vtype = RWL_TYPE_STR;
    bvna->pvar = thisname;
    bvna->slen = sizeof(thisname);
    bvna->pind = &notnull;
    bvna->pos = 3;
    bvna->next = bsec;

    bsec->vname = (text *)"I#flsecond";
    bsec->bdtyp = RWL_DIRBIND;
    bsec->vtype = RWL_TYPE_INT;
    bsec->pvar = &second;
    bsec->pind = &notnull;
    bsec->pos = 4;
    bsec->next = bcnt;

    bcnt->vname = (text *)"I#flscount";
    bcnt->bdtyp = RWL_DIRBIND;
    bcnt->vtype = RWL_TYPE_INT;
    bcnt->pvar = &scount;
    bcnt->pind = &notnull;
    bcnt->pos = 5;
    bcnt->next = bwtm;

    bwtm->vname = (text *)"I#flwtime";
    bwtm->bdtyp = RWL_DIRBIND;
    bwtm->vtype = RWL_TYPE_DBL;
    bwtm->pvar = &wtime;
    bwtm->pind = &notnull;
    bwtm->pos = 6;
    bwtm->next = betm;

    betm->vname = (text *)"I#fletime";
    betm->bdtyp = RWL_DIRBIND;
    betm->vtype = RWL_TYPE_DBL;
    betm->pvar = &etime;
    betm->pind = &notnull;
    betm->pos = 7;
    // this is the end, don't set bcnt->next

    mysq->sql = rwlmergepersec;
    mysq->sqllen = (ub4)rwlstrlen(mysq->sql);
    mysq->bindef = brno; /* head of the chain */
    mysq->bincount = 7;
    mysq->vname = (text *)"I#flshpersec";
    /* use array */
    mysq->asiz = RWL_STATS_ARRAY;
    bis(mysq->flags,RWL_SQFLAG_ARRAYB);
    rwlallocabd(xev, RWL_SRC_ERROR_LOC, mysq);

    // Here comes the main loop
    for ( sec=xev->rwm->flushevery
        ; !rwlstopnow && sec <= xev->rwm->flushstop+xev->rwm->flushevery
	; sec+= xev->rwm->flushevery)
    {
      dsec = (double) sec + 0.8; // do it 0.8 seconds after the change of a second
      (void) rwlwaituntil(xev, RWL_SRC_ERROR_LOC, dsec);
      if (rwlstopnow)
        break;


      // clear from last cycle
      for (j=0; j<xev->rwm->flushevery; j++)
      {
	memset(ppsec[j], 0, vcnt * sizeof(**ppsec));
	memset(ppwtim[j], 0, vcnt * sizeof(**ppwtim));
	memset(ppetim[j], 0, vcnt * sizeof(**ppetim));
      }

      // then collect data
      for (t=0; t<xev->rwm->totthr; t++)  // for all threads
      {
	for (i=0; i<vcnt; i++)		  // for all relevant variables
	{
	  rwl_identifier *thv = xev->rwm->xqa[t].evar+vnum[i];
	  if (thv->stats) // if there are stats for this variable in this thread
	  {
	    rwlmutexget(xev, RWL_SRC_ERROR_LOC, thv->var_mutex);
	    /*
	     * Note that the the very first time we are here, sec=flushevery
	     * and runseconds in reality is flushevery+0.8 seconds after common start. 
	     * Consequently, it should be unlikely that the worker threads
	     * haven't all finished updating the persec entries < flushevery
	     * The same applies for every subsequent time we are doing this
	     */
	    for (s=sec-xev->rwm->flushevery; s<sec; s++) // for last seconds until this
	    {
	      if (bit(xev->tflags, RWL_DEBUG_MISC))
		rwldebugcode(xev->rwm, RWL_SRC_ERROR_LOC, "persec %s sec=%d t=%d i=%d s=%d persec=%d wtimsum=%.4f etimsum=%.4f"
		, thv->vname, sec, t, i, s
		, thv->stats->persec[s]
		, thv->stats->wtimsum[s]
		, thv->stats->etimsum[s]);
	      if (s<thv->stats->pssize)
	      {
		ppsec[s-sec+xev->rwm->flushevery][i] +=  thv->stats->persec[s];
		ppwtim[s-sec+xev->rwm->flushevery][i] += thv->stats->wtimsum[s];
		ppetim[s-sec+xev->rwm->flushevery][i] += thv->stats->etimsum[s];
		// Reset these as they now have been added to the
		// values in the arrays and therefore will be flushed
		// using the SQL that adds to values in the table
		thv->stats->persec[s]=0;
		thv->stats->wtimsum[s]=0.0;
		thv->stats->etimsum[s]=0.0;
	      }
	    }
	    rwlmutexrel(xev, RWL_SRC_ERROR_LOC, thv->var_mutex);
	  }
	}
      }

      // next insert into the results database, which is guaranteed to
      // be using a session pool
      tooksess = rwlensureresdb(xev, RWL_SRC_ERROR_LOC, 0, &rdb);
      if (!rdb) /* RWL-600 reported in rwlensureresdb */
	rwlexecsevere(xev, RWL_SRC_ERROR_LOC, "[rwlflushrun-nordb]");
      else
      {
	for (i=0; i<vcnt; i++)		  // for all relevant variables
	{
	  rwl_identifier *thv = xev->rwm->xqa[t].evar+vnum[i]; // just need name
	  rwlstrnncpy(thisname, thv->vname, sizeof(thisname));
	  for (j=0; j<xev->rwm->flushevery; j++)
	  {
	    second = sec+j+1-xev->rwm->flushevery;
	    scount = ppsec[j][i];
	    wtime =  ppwtim[j][i];
	    etime =  ppetim[j][i];
	    if (scount)
	      rwlsimplesql(xev, RWL_SRC_ERROR_LOC, rdb, mysq);
	  }
	}

	rwlflushsql(xev, RWL_SRC_ERROR_LOC, rdb, mysq);
	rwlcommit(xev, RWL_SRC_ERROR_LOC, rdb);
      }
      if (tooksess)
	rwlreleaseresdb(xev, RWL_SRC_ERROR_LOC, 0);

    }
    /* free all */
    rwlfreeabd(xev, RWL_SRC_ERROR_LOC, mysq);
    rwlfree(xev->rwm, brno );
    rwlfree(xev->rwm, bpno );
    rwlfree(xev->rwm, bvna );
    rwlfree(xev->rwm, bsec );
    rwlfree(xev->rwm, bcnt );
    rwlfree(xev->rwm, bwtm );
    rwlfree(xev->rwm, betm );
    rwlfree(xev->rwm, mysq );

    for (j=0; j<xev->rwm->flushevery; j++)
    {
      rwlfree(xev->rwm, ppsec[j]);
      rwlfree(xev->rwm, ppwtim[j]);
      rwlfree(xev->rwm, ppetim[j]);
    }
    rwlfree(xev->rwm, ppsec);
    rwlfree(xev->rwm, ppwtim);
    rwlfree(xev->rwm, ppetim);
    rwlfree(xev->rwm, vnum);

  RWL_SRC_ERROR_END

}

/*
 * Expand a name of a file with environment variables and potentially search
 * for the file
 *
 * Note that each thread has a STATIC buffer which is being returned, so 
 * it is important to use rwlstrdup() on the result
 */
text *rwlenvexp2(rwl_xeqenv *xev, rwl_location *loc, text *filn, ub4 eeflags, ub4 striplen)
{
  text *p, *q, *r, *n;
  text env[RWL_NAME_MAX];
  text buf[RWL_PATH_MAX];
  static char *good = "0123456789"
  	"ABCDEFGHIJKLMNOPRQSTUVWXYZ"
	"abcdefghijklmnopqrstuvwxyz_";
  char *letter = good+10;
  ub4 i, failcode = 0;

  if (bit(xev->rwm->m2flags, RWL_P2_NOENVEXPAND))
    goto exitfromenvexp;

  p = filn;
  n = buf; i=0; // n points at output to the buffer

  while (*p && i<RWL_PATH_MAX-1)
  {
    if ('$' != *p)
    { // Not an environment name, just copy
      *n++ = *p++;
      i++;
    }
    else
    {
      // found an environment variable
      if ('{' == *(p+1))
      { // it is delimited by curleys
	p += 2; // first character in env name
        q = rwlstrchr(p+1, '}'); // terminating curley
	if (!rwlstrchr(letter,*p) || !q || q<p+1 || q>=p+RWL_NAME_MAX)
	{ // not a start letter or missing right curly or missing or too long name
	  failcode = RWL_ERROR_BAD_ENV_EXPANSION;
	  goto exitfromenvexp;
	}

	// check all characters are good
	for (r=p+1; r<q; r++)
	{
	  if (!rwlstrchr(good,*r))
	  { // not letter or digit
	    failcode = RWL_ERROR_BAD_ENV_EXPANSION;
	    goto exitfromenvexp;
	  }
	}
	rwlstrnncpy(env, p, (ub4) (1+q-p));
	env[q-p] = 0;
	p = q+1; // first character after end curley
      }
      else
      { // it is not { } delimited
        p++; // first character in env name must be letter
	if (!rwlstrchr(letter, *p))
	{ 
	  failcode = RWL_ERROR_BAD_ENV_EXPANSION;
	  goto exitfromenvexp;
	}
	// scan until non-good character or too long
	for (q=p+1; *q && rwlstrchr(good,*q) && q<p+RWL_NAME_MAX; q++)
	  ;
	if (q-p>=RWL_NAME_MAX)
	{ 
	  failcode = RWL_ERROR_BAD_ENV_EXPANSION;
	  goto exitfromenvexp;
	}
	rwlstrnncpy(env, p, (ub4) (1+q-p));
	env[q-p] = 0;
	p = q;  // first character after env name
      }
      // now, env has the name and p points at the first character after
      if ((r = rwlgetenv(env)))
      {
	while (*r && i<RWL_PATH_MAX-1) // copy as long as it fits
	{
	  *n++ = *r++;
	  i++;
	}
	if (*r) // out of space
	{
	  failcode = RWL_ERROR_ENV_EXP_TOO_LARGE;
	  goto exitfromenvexp;
	}
      }
      else if (!bit(xev->rwm->m2flags, RWL_P2_SCANARG))
	rwlexecerror(xev, loc, RWL_ERROR_ENV_NOT_FOUND, env);
    }
  }
  if (*p) // out of space
  {
    failcode = RWL_ERROR_ENV_EXP_TOO_LARGE;
    goto exitfromenvexp;
  }
  *n = 0; // null terminate 


  if (bit(eeflags, RWL_ENVEXP_STRIP))
  { // strip (really only used for include:"bla.rwl" to strip the last "
    while (striplen && n>buf)
    {
      --n; --striplen;
      *n = 0;
    }
  }

  // buf now has the environment expanded file name

  // No search if begin with / or .
  if ( ('/'==buf[0] || '.'==buf[0])
       && 0==access( (char *) buf, R_OK))
  {
    rwlstrnncpy(xev->namebuf, buf, RWL_PATH_MAX);
    return xev->namebuf;
  }

  // Search in public dir?
  if (bit(eeflags, RWL_ENVEXP_PUBLIC) && xev->rwm->publicdir)
  { 
    ub4 totlen, buflen = (ub4) rwlstrlen(buf);
    int yuck;
    totlen = (ub4) rwlstrlen(xev->rwm->publicdir) + buflen + 1;
    if (totlen>RWL_PATH_MAX)
    {
      failcode = RWL_ERROR_ENV_EXP_TOO_LARGE;
      goto exitfromenvexp;
    }
    yuck = snprintf((char *)xev->namebuf, RWL_PATH_MAX, "%s/%s", xev->rwm->publicdir, buf);
    // mostly to shut up pedantic gcc:
    if ((yuck<0 || yuck>=RWL_PATH_MAX) && !bit(xev->rwm->m2flags, RWL_P2_SCANARG))
      rwlexecerror(xev, loc, RWL_ERROR_EXPANSION_TRUNCATED, xev->rwm->publicdir, buf, RWL_PATH_MAX);
      
    if (0==access( (char *) xev->namebuf,R_OK))
    {
      if (!bit(eeflags, RWL_ENVEXP_NOTCD)
          && 0==access( (char *) buf, R_OK)
          && !bit(xev->rwm->m2flags, RWL_P2_SCANARG))
        rwlexecerror(xev, loc, RWL_ERROR_FIL_IN_PUBLIC, xev->namebuf, buf);
      return xev->namebuf;
    }
  }

  // look in current and file found with RWLOADSIM_PATH search?
  if (!bit(eeflags, RWL_ENVEXP_NOTCD) && 0==access( (char *) buf, R_OK))
  {
    rwlstrnncpy(xev->namebuf, buf, RWL_PATH_MAX);
    return xev->namebuf;
  }

  if (bit(eeflags, RWL_ENVEXP_PATH))
  { // search
    ub4 totlen, buflen = (ub4) rwlstrlen(buf);
    rwl_pathlist *pl = xev->rwm->pathlist;
    while (pl)
    {
      totlen = (ub4) rwlstrlen(pl->pathname) + buflen + 1;
      int yuck;
      if (totlen>RWL_PATH_MAX)
      {
	failcode = RWL_ERROR_ENV_EXP_TOO_LARGE;
	goto exitfromenvexp;
      }
      yuck = snprintf((char *)xev->namebuf,RWL_PATH_MAX,"%s/%s", pl->pathname, buf);
      if ((yuck<0 || yuck>=RWL_PATH_MAX) && !bit(xev->rwm->m2flags, RWL_P2_SCANARG))
        // mostly to shut up pedantic gcc
	rwlexecerror(xev, loc, RWL_ERROR_EXPANSION_TRUNCATED, pl->pathname, buf, RWL_PATH_MAX);
      if (0==access( (char *) xev->namebuf,R_OK))
        return xev->namebuf;
      pl = pl->nextpath;
    }

    return 0;
  }
  else
  { // no RWLOADISM_PATH search;
    rwlstrnncpy(xev->namebuf, buf, RWL_PATH_MAX);
  }

  return xev->namebuf;

exitfromenvexp:
  rwlstrnncpy(xev->namebuf, filn, sizeof(xev->namebuf));
  if (bit(eeflags, RWL_ENVEXP_STRIP))
  { // strip (really only used for include:"bla.rwl" to strip the last "
    n = xev->namebuf + rwlstrlen(xev->namebuf);
    while (striplen && n>xev->namebuf)
    {
      --n; --striplen;
      *n = 0;
    }
  }
  if (failcode && !bit(xev->rwm->m2flags, RWL_P2_SCANARG))
    rwlexecerror(xev, loc, failcode, xev->namebuf);
  return xev->namebuf; 

}

/*
 * Copy a C string to a variable, create the sb8/double representations
 *
 * varnum identifies the variable
 * str is the C string, possibly null terminated
 * len copy at most this many characters, plus a null
 * reformat if true, also convert sb8/double representations back to str if type is integer/double
 */
void rwlstr2var(rwl_xeqenv *xev, rwl_location *loc, sb4 varnum, text *str, ub4 len, ub4 s2vflags)
{
  rwl_identifier *vv;
  rwl_value *nn;

  /*ASSERT*/
  if (varnum<0)
  {
    rwlexecsevere(xev, loc, "[rwlstr2var-novar:%d]", varnum);
    return;
  }

  vv = rwlidgetmx(xev,loc,varnum);
  nn = rwlnuminvar(xev, vv);
  //
  // similar to the code for RWL_STACK_ASN in rwlexpreval.c
  switch (vv->vtype)
  {
    case RWL_TYPE_INT: 
    case RWL_TYPE_DBL: 
      //nn = rwlnuminvar(xev, vv);
      if (RWL_SVALLOC_FIX != nn->vsalloc) //ASSERT buffer is allocated as expected
      {
	rwlexecsevere(xev, loc, "[rwlstr2var-notfix:%s;%d]", vv->vname, nn->vsalloc);
	rwlidrelmx(xev,loc,varnum);
	return;
      }
      break;

    case RWL_TYPE_STR: 
      //nn = rwlnuminvar(xev, vv);
      if (RWL_SVALLOC_NOT == nn->vsalloc)
	rwlinitstrvar(xev, nn);
      break;

    default:
      rwlexecsevere(xev, loc, "[rwlstr2var-badtype:%s;%d;%d]"
      , vv->vname, vv->vtype, varnum);
      rwlidrelmx(xev,loc,varnum);
      return;
  }
  // does it fit
  if (len < nn->slen)
    rwlstrnncpy(nn->sval, str, len+1);
  else
  {
    rwlexecerror(xev, loc
      , RWL_ERROR_TOO_SHORT_STRING
      , vv->vname, nn->slen-1, len);
    rwlstrnncpy(nn->sval, str, nn->slen);
    nn->sval[nn->slen]=0;
  }
  nn->ival = rwlatosb8(nn->sval);
  nn->dval = rwlatof(nn->sval);
  if (bit(s2vflags, RWL_S2VREFORMAT))
  {
    // Write the values back in string format for number types
    switch (vv->vtype)
    {
      case RWL_TYPE_INT: 
	rwlsnpiformat(xev->rwm, nn->sval, nn->slen-1, nn->ival);
	break;
      case RWL_TYPE_DBL: 
	rwlsnpdformat(xev->rwm, nn->sval, nn->slen-1, nn->dval);
	break;
      default: // prevent compile warning about missing enum
        break;
    }
  }
  nn->isnull = 0;
  rwlidrelmx(xev,loc,varnum);
}

/*
 * Read a line of text from file and assign whitespace separated
 * tokens to variables.  Similar to "read a b c d" in shell
 * If only one variable is used, simply put the whole line there
 *
 */
ub4 rwlreadline(rwl_xeqenv *xev, rwl_location *loc, rwl_identifier *fil, rwl_idlist *idlist, text *codename)
{
  rwl_idlist *idl;
  FILE *in;
  ub4 idc, len;
  sb4 l;
  rwl_value *nn;
  rwl_identifier *vv;
  text *eol, *vbeg, *vend;


 /*ASSERT*/
  if (!xev->readbuffer)
  {
    rwlexecsevere(xev, loc, "[rwlreadline-nobuf]");
    return 0;
  }

  if (!fil)
  {
    rwlexecsevere(xev, loc, "[rwlreadline-nofil]");
    return 0;
  }

  if (!idlist)
  {
    rwlexecsevere(xev, loc, "[rwlreadline-idlist]");
    return 0;
  }

  if (bit(xev->tflags, RWL_DEBUG_MISC))
    rwldebugcodenonl(xev->rwm, loc, "readline %s", fil->vname);

  // count identifiers, and check variables
  idc = 0;
  idl = idlist;
  while (idl)
  {
    if (bit(xev->tflags, RWL_DEBUG_MISC))
      fprintf(stderr, ", %s", idlist->idnam);

    l = rwlverifyvg(xev, idl->idnam, idl->idnum, codename);
    /*ASSERT*/
    if (l<0)
    {
      rwlexecsevere(xev, loc, "[rwlreadline-novar:%s]", idl->idnam);
      return 0;
    }

    vv = rwlidgetmx(xev,loc, l);

    // similar to the code for RWL_STACK_ASN in rwlexpreval.c
    switch (xev->evar[l].vtype)
    {
      case RWL_TYPE_INT: 
      case RWL_TYPE_DBL: 
        nn = rwlnuminvar(xev, vv);
	nn->isnull = RWL_ISNULL;
	if (RWL_SVALLOC_FIX != nn->vsalloc) //ASSERT buffer is allocated as expected
	{
	  rwlexecsevere(xev, loc, "[rwlreadline-notfix:%s;%d]", idl->idnam, nn->vsalloc);
	  rwlidrelmx(xev,loc, l);
	  return 0;
	}
	nn->ival = 0;
	nn->dval = 0.0;
	nn->sval[0] = 0;
        break;

      case RWL_TYPE_STR: 
        nn = rwlnuminvar(xev, vv);
	if (RWL_SVALLOC_NOT == nn->vsalloc)
	  rwlinitstrvar(xev, nn);
	nn->isnull = RWL_ISNULL;
	nn->ival = 0;
	nn->dval = 0.0;
	nn->sval[0] = 0;
        break;

      default:
        rwlexecsevere(xev, loc, "[rwlreadline-badtype:%s;%d;%d]"
	, idl->idnam, vv->vtype, l);
	rwlidrelmx(xev,loc, l);
        return 0;
    }
    rwlidrelmx(xev,loc, l);

    idl = idl->idnxt;
    idc++;
  }

  if (bit(xev->tflags, RWL_DEBUG_MISC))
  {
    fputs("\n", stderr);
    fflush(stderr);
  }

  in = rwlnuminvar(xev,fil)->vptr;
  // attempt reading a line
  if (fgets((char *)xev->readbuffer, (int)xev->rwm->maxreadlen, in))
  {
    len = (ub4) rwlstrlen(xev->readbuffer);

    if (len>0 && '\n' == xev->readbuffer[len-1])
    {
      len--;
      eol = xev->readbuffer+len;
      *eol = 0;
    }
    else
    {
      rwlexecerror(xev, loc, RWL_ERROR_READBUFFER_TOO_SHORT, xev->rwm->maxreadlen, fil->vname);
      eol = xev->readbuffer+len;
    }

    if (1==idc)
    {
      // only one return variable, copy the whole line
      rwlstr2var(xev, loc, idlist->idnum, xev->readbuffer, len, RWL_S2VREFORMAT);
      return 1;
    }

    // list of variables
    // so we scan for non-blanks to separate fields on line
    
    idl = idlist;
    vbeg = xev->readbuffer; // points at where next field starts

    while (idl)
    {
      while (' ' == *vbeg || '\t' == *vbeg || '\r' == *vbeg)
        vbeg++; // skip whitespace
      if (!*vbeg)
        break;

      if (idl->idnxt)
      { 
	vend = vbeg+1;
	while (*vend != 0 && ' ' != *vend && '\t' != *vend && '\r' != *vend)
	  vend++; // pass over non-whitespace
      }
      else
      {
        vend = eol;  // assign rest of line to last variable
      }

      len = (ub4)(vend - vbeg);
      rwlstr2var(xev, loc, idl->idnum, vbeg, len, RWL_S2VREFORMAT);

      if (*vend)
	vbeg = vend+1; // start next variable
      else
        break; // running of of data to scan for
      idl = idl->idnxt;
    }
    return 1;
  
  }

  return 0;
}

/*
 * rwldoprintf implements both sprintf (to string)
 * and fprintf (to file)
 *
 */
void rwldoprintf(rwl_xeqenv *xev
, rwl_location *loc
, rwl_identifier *dst
, rwl_conlist *conlist
, ub4 pftype)
{
  FILE *ytfil;
  rwl_value *nn;
  ub4 i, len, yl, left, nvl, typ;
  ub8 ytspc, ytneed;
  sb4 prc;
  // how do we output null:
# define RWL_NVL_NIL  1 // nothing, empty string
# define RWL_NVL_STR  2 // actual string
# define RWL_NVL_ZERO 3 // the value 0
  text *null, *ytstr;
  text *fm, *dotpos;
  text c;
  text ytformat[256], *yf;
  rwl_value fnum, anum, nnum;

  memset(&fnum, 0, sizeof(fnum));
  memset(&anum, 0, sizeof(anum));
  memset(&nnum, 0, sizeof(nnum));

  ytformat[0] = 0;
  yf = ytformat;
  yl = 0;
  ytstr = 0;
  ytspc = 0;
  ytfil = 0;

  // The following macros exist to make coding simpler
  // below. They can ONLY be used in the rwldoprintf function
  // as they depend on several of its variables and
  // labels
  // Note that the si arguments are simple numbers
  // just used to make potential severe errors unique
  
  // add a number in decimal to the output format
# define rwlpfaddn(xx,si) \
  do \
  { \
    text numbuf[10]; \
    ub4 numout; \
    numout = (ub4) snprintf((char *)numbuf,sizeof(numbuf),"%u", xx); \
    if (numout<sizeof(numbuf) && yl+numout<sizeof(ytformat)-2) \
    { \
      rwlstrcpy(yf, numbuf); \
      yf += numout; \
      yl += numout; \
      *yf = 0; \
    } \
    else \
    { \
      rwlexecsevere(xev, loc, "[rwldoprintf-outofspacen%d;%s;%d;%s;%d]" \
      , si, ytformat, yl, numbuf, numout ); \
      goto cannotprintf; \
    } \
  } while (0)

  // add one character to the output format
# define rwlpfaddc(xx, si) \
  do \
  { \
    if (yl<sizeof(ytformat)-2) \
    { \
      *yf = xx; \
      yf++; \
      yl++; \
      *yf = 0; \
    } \
    else \
    { \
      rwlexecsevere(xev, loc, "[rwldoprintf-outofspacec%d;%s;%d]", si, ytformat, yl); \
      goto cannotprintf; \
    } \
  } while (0)

  // Get next value from conlist
# define rwlpfgetval(xx) \
  do \
  { \
    if (conlist) \
    { \
      rwlexpreval(conlist->estk, loc, xev, xx); \
      conlist = conlist->connxt; \
      i++;\
    } \
    else \
    { \
      rwlexecerror(xev, loc, RWL_ERROR_OUT_OF_PRINTF_VALUES, fnum.sval); \
      goto cannotprintf; \
    } \
  } \
  while (0)

// Call the appropriate printf function
// and if to a string, verify length
// is not exceeded
# define rwlcallpf(ff, xx, si) \
  do \
  { \
    switch (pftype) \
    { \
      case RWL_TYPE_FILE: \
	if (ytfil) \
	  fprintf(ytfil, (char *)ff, xx); \
	else \
	{ \
	  rwlexecsevere(xev, loc, "[rwldoprintf-ytfilnull%d]", si); \
	  goto cannotprintf; \
	} \
      break; \
      case RWL_TYPE_STR: \
      case RWL_TYPE_STREND: \
	if (ytstr) \
	  ytneed = (ub8) snprintf((char *)ytstr, ytspc, (char *)ff, xx); \
	else \
	{ \
	  rwlexecsevere(xev, loc, "[rwldoprintf-ytstrnull%d]", si); \
	  goto cannotprintf; \
	} \
	if (ytneed >= ytspc) \
	  goto outofstrspace; \
	ytspc -= ytneed; \
	ytstr += ytneed; \
      break; \
    } \
  } \
  while (0)

  if (!dst)
  {
    rwlexecsevere(xev, loc, "[rwldoprintf-nodst]");
    return;
  }

  if (!conlist)
  {
    rwlexecsevere(xev, loc, "[rwldoprintf-noconlist]");
    return;
  }

  //if (bit(xev->tflags, RWL_DEBUG_MISC))
  //  rwldebugcode(xev->rwm, loc, "calling printf to %s %d", dst->vname, pftype);

  nn = rwlnuminvar(xev, dst);

  switch (pftype)
  {
    case RWL_TYPE_FILE:
      if (RWL_TYPE_FILE != nn->vtype)
      {
	rwlexecsevere(xev, loc, "[rwldoprintf-notfile;%s;%d]", dst->vname, nn->vtype);
	return;
      }
      ytfil = nn->vptr;
    break;

    case RWL_TYPE_STREND: 
    case RWL_TYPE_STR: 
      nn->isnull = 0;
      if (RWL_TYPE_STR != nn->vtype)
      {
	rwlexecsevere(xev, loc, "[rwldoprintf-notstring;%s;%d]", dst->vname, nn->vtype);
	return;
      }
      if (RWL_SVALLOC_NOT == nn->vsalloc)
        rwlinitstrvar(xev, nn);

      if (nn->vsalloc != RWL_SVALLOC_FIX)
      {
	rwlexecsevere(xev, loc, "[rwldoprintf-notfix;%s;%d]", dst->vname, nn->vsalloc);
	return;
      }
      if (RWL_TYPE_STR == pftype)
      {
        // start at beginning
	ytstr = nn->sval;
	ytspc = nn->slen;
      }
      else
      {
        // start at end (the syntax was sprintf || variable , ...
	ub4 cl = (ub4) rwlstrlen(nn->sval);
	ytstr = nn->sval + cl;
	if (cl>nn->slen-1)
	{
	  rwlexecsevere(xev, loc, "[rwldoprintf-nospace;%s;%ld;%d]"
	    , dst->vname, nn->slen, cl);
	  return;
	}
	ytspc = nn->slen - cl;
      }
    break;
  }

  i = 0;
  // get the printf format string, which is the first concatenation
  rwlexpreval(conlist->estk, loc, xev, &fnum);
  if (!(fm = fnum.sval))
  {
    rwlexecsevere(xev, loc, "[rwldoprintf-strnull1;%s;%d;%d;%ld"
      , dst->vname, fnum.vsalloc, fnum.vtype, fnum.slen);
    return;
  }
  // advance conlist to next concatenation
  conlist = conlist->connxt;

  null=(text *)"";

  // Start the big loop that reads the format
  // and when a % is seen, handles that by
  // normally taking the next expression and 
  // outputting it appropriately
  while ((c = *fm))
  {
    if ('%' != c)
    {
      // Not a % - just output the character
      rwlcallpf("%c", c, 1);
      ++fm;
      continue;
    }

    // saw %
    c = *++fm;
    if ('%' == c)
    {
      // And another one, so user wants the % output
      rwlcallpf("%c", c, 2);
      ++fm;
      continue;
    }

    // ytformat becomes the format argument to the C
    // library printf function
    ytformat[0] = 0;
    yf = ytformat;
    yl = 0;

    // Is c now a flag

    nvl = RWL_NVL_NIL;
    rwlpfaddc('%', 3);

    left = 0;
    while (1)
    {
      switch (c)
      {
	// left justify
	case '-':
	  left = 1;
	  break;
	// Some flags in standard we just copy over
        case '#':
	case ' ':
	case '+':
	case '0':
	  rwlpfaddc(c, 4);
	  break;

	// Our own special ones
	case 't':
	case 'T':
	  nvl = RWL_NVL_STR;
	  rwlpfgetval(&nnum);
	  null = nnum.sval;
	  break;
	case 'N':
	  nvl = RWL_NVL_STR;
	  null = (text *)"NULL";
	  break;
	case 'n':
	  nvl = RWL_NVL_STR;
	  null = (text *)"null";
	  break;
	case 'b': 
	  nvl = RWL_NVL_STR;
	  null = (text *)"    ";
	  break;
	case 'z':
	  nvl = RWL_NVL_ZERO;
	  break;
	default:
	  goto endofflags;
      }
      c = *++fm;
    }
    endofflags:

    // look for length
    len = 0;

    if (isdigit(c))
    {
      // len in format
      while (isdigit(c))
      {
        len = 10*len + c-'0';
	c = *++fm;
      }
    }
    else if ('*' == c)
    {
      // len as an argument
      c = *++fm;
      rwlpfgetval(&anum);
      if (anum.ival<0)
      {
        len = (ub4) -anum.ival;
	left = !left;
      }
      else
	len = (ub4) anum.ival;
    }
    
    if (left)
      rwlpfaddc('-', 5);
    if (len)
      rwlpfaddn(len, 6);

    // see if precision is there
    prc = -1;
    dotpos = 0;
    // look for precision
    if ('.' == c)
    {
      c = *++fm;
      prc = 0;

      // Yep as integer?
      if (isdigit(c))
      {
	while (isdigit(c))
	{
	  prc = 10*prc + c-'0';
	  c = *++fm;
	}
      }
      else if ('*' == c)
      {
	// or as argument
	rwlpfgetval(&anum);
	prc = (sb4)anum.ival;
	if (prc<0)
	{
	  prc = 0;
	}
	c = *++fm;
      }
      if (prc>=0)
      {
	// dopos is where we put '.'
	dotpos = yf;
	rwlpfaddc('.', 7);
	rwlpfaddn(prc, 8);
      }

    }

    // Now look for the data type character
    // and potential length modifiers
    typ = 0;
    while (1)
    {
      switch (c)
      {
	// ignore length modifiers
	case 'h':
	case 'l':
	case 'L':
	case 'q':
	case 'j':
	case 'z':
	case 't':
	  break;

	case 'd':
	case 'i':
	case 'x':
	case 'X':
	  typ = RWL_TYPE_INT;
	  goto endofspecifier;

	case 'e':
	case 'E':
	case 'f':
	case 'F':
	case 'g':
	case 'G':
	  typ = RWL_TYPE_DBL;
	  goto endofspecifier;

	case 's':
	  typ = RWL_TYPE_STR;
	  goto endofspecifier;

	case 'A':
	case 'a':
	  typ = RWL_TYPE_DBL;
	  rwlexecerror(xev, loc, RWL_ERROR_UNSUPPORTED_CONVERSION, c, 'f');
	  goto endofspecifier;

	case 'c':
	case 'o':
	case 'u':
	  typ = RWL_TYPE_INT;
	  rwlexecerror(xev, loc, RWL_ERROR_UNSUPPORTED_CONVERSION, c, 'i');
	  goto endofspecifier;

	case 0:
	  rwlexecerror(xev, loc, RWL_ERROR_FPRINTF_PREMATURE_END);
	  goto cannotprintf;

	default:
	  if (isascii(c) && isprint(c))
	    rwlexecerror(xev, loc, RWL_ERROR_FPRINTF_BADCONV, c);
	  else
	    rwlexecerror(xev, loc, RWL_ERROR_FPRINTF_BADCONV_NONASCII, c);
	  goto cannotprintf;
      }
      c = *++fm;
    }
    endofspecifier:
   
    // Get the value to output
    rwlpfgetval(&anum);

    switch (typ)
    {
      case RWL_TYPE_INT:
	// user aksed to output integer
        if (anum.isnull)
	{
	  switch (nvl)
	  {
	    case RWL_NVL_NIL:
	      break;
	    case RWL_NVL_STR:
	      if (dotpos) // no precision when NULL
	        yf = dotpos;
	      rwlpfaddc('s', 9);
	      rwlcallpf(ytformat, null, 10);
	    break;
	    case RWL_NVL_ZERO:
#ifdef RWL_SB8PRINTFLENGTH
	      rwlpfaddc(RWL_SB8PRINTFLENGTH, 11);
#endif
	      rwlpfaddc(c, 12);
	      rwlcallpf(ytformat, 0, 13);
	    break;
	  }
	}
	else
	{
#ifdef RWL_SB8PRINTFLENGTH
	  rwlpfaddc(RWL_SB8PRINTFLENGTH, 14);
#endif
	  rwlpfaddc(c, 15);
	  rwlcallpf(ytformat, anum.ival, 16);
	}
	break;

      case RWL_TYPE_DBL:
	// user asked for double output
	if (anum.isnull)
	{
	  switch (nvl)
	  {
	    case RWL_NVL_NIL:
	      break;
	    case RWL_NVL_STR:
	      if (dotpos) // no precision when NULL
	        yf = dotpos;
	      rwlpfaddc('s', 17);
	      rwlcallpf(ytformat, null, 18);
	    break;
	    case RWL_NVL_ZERO:
	      rwlpfaddc(c, 19);
	      rwlcallpf(ytformat, 0.0, 20);
	    break;
	  }
	}
	else
	{
	  rwlpfaddc(c, 21);
	  rwlcallpf(ytformat, anum.dval, 22);
	}
      break;

      case RWL_TYPE_STR:
	// user wants the string
        rwlpfaddc('s', 23);
	if (anum.sval) 
	  rwlcallpf(ytformat, anum.sval, 24);
	else
	{
	  rwlexecsevere(xev, loc, "[rwldoprintf-strnull2;%s;%d;%d;%ld"
	    , dst->vname, anum.vsalloc, anum.vtype, anum.slen);
	  return;
	}
      break;
    }
    // on to the next character
    ++fm;
  }

  // Are there still values?
  if (conlist)
  {
    rwlexecerror(xev, loc, RWL_ERROR_FPRINTF_TOO_FEW_CONV, fnum.sval);
  }

  cannotprintf:
  if (RWL_SVALLOC_TEMP==anum.vsalloc || RWL_SVALLOC_FIX==anum.vsalloc) 
    rwlfreecode(xev->rwm, anum.sval, loc);
  if (RWL_SVALLOC_TEMP==fnum.vsalloc || RWL_SVALLOC_FIX==fnum.vsalloc) 
    rwlfreecode(xev->rwm, fnum.sval, loc);
  return;

  outofstrspace:
  rwlexecerror(xev, loc, RWL_ERROR_TOO_SHORT_STRING, dst->vname, nn->slen-1, nn->slen+ytneed);
}

/*
 * Check a string against a regular expression and return
 * substring matches into variables
 *
 */
void rwlregex(rwl_xeqenv *xev
, rwl_location *loc
, text *regex
, text *str
, rwl_idlist *idlist
, text *codename)
{
  sb4 res, l;
  ub4 i,idc;
  rwl_idlist *idl;
  regex_t reg;
  regmatch_t match;
  rwl_value *nn;
  rwl_identifier *vv;
  char errbuf[64];
  text *xstr;

  /*ASSERTS*/
  if (!str)
  {
    rwlexecsevere(xev, loc, "[rwlregex-nostr]");
    return;
  }

  if (!regex)
  {
    rwlexecsevere(xev, loc, "[rwlregex-noreg]");
    return;
  }

  if (!idlist)
  {
    rwlexecsevere(xev, loc, "[rwlregex-idlist]");
    return;
  }

  // count identifiers, and check variables
  idc = 0;
  idl = idlist;
  while (idl)
  {

    l = rwlverifyvg(xev, idl->idnam, idl->idnum, codename);
    /*ASSERT*/
    if (l<0)
    {
      rwlexecsevere(xev, loc, "[rwlregex-badvar:%s]", idl->idnam);
      return;
    }

    vv = rwlidgetmx(xev,loc, l);

    // Check variables, maybe initialize string
    switch (xev->evar[l].vtype)
    {
      case RWL_TYPE_INT: 
      case RWL_TYPE_DBL: 
        nn = rwlnuminvar(xev, vv);
	if (RWL_SVALLOC_FIX != nn->vsalloc) //ASSERT buffer is allocated as expected
	{
	  rwlexecsevere(xev, loc, "[rwlregex-notfix:%s;%d]", idl->idnam, nn->vsalloc);
	  rwlidrelmx(xev,loc,l);
	  return;
	}
	nn->isnull = RWL_ISNULL;
	nn->ival = 0;
	nn->dval = 0.0;
	nn->sval[0] = 0;
        break;

      case RWL_TYPE_STR: 
        nn = rwlnuminvar(xev, vv);
	if (RWL_SVALLOC_NOT == nn->vsalloc)
	  rwlinitstrvar(xev, nn);
	nn->isnull = RWL_ISNULL;
	nn->ival = 0;
	nn->dval = 0.0;
	nn->sval[0] = 0;
        break;

      default:
        rwlexecsevere(xev, loc, "[rwlregex-badtype:%s;%d;%d]"
	, idl->idnam, vv->vtype, l);
	rwlidrelmx(xev,loc,l);
        return;
    }

    rwlidrelmx(xev,loc,l);
    idl = idl->idnxt;
    idc++;
  }

  if ((res = regcomp(&reg, (char *)regex, REG_EXTENDED)))
  {
    // regex compile error
    (void) regerror(res, &reg, errbuf, sizeof(errbuf));
    rwlexecerror(xev, loc, RWL_ERROR_REGEX_COMPILE_ERROR, errbuf);
    goto regexfinish;
  }

  // loop while there are matches and identifiers
  i = 0;
  idl = idlist;
  xstr = str;
  while (idl && i<idc)
  {
    if (0!=regexec(&reg, (char *)xstr, 1, &match, i ? REG_NOTBOL : 0) // not matched
       || match.rm_so < 0 // or no posistion
       || match.rm_eo < 0)
      break; 
    // copy to variable with conversion back on integer/double
    rwlstr2var(xev, loc, idl->idnum
      , xstr + match.rm_so
      , (ub4)(match.rm_eo - match.rm_so), RWL_S2VREFORMAT);
    i++;
    idl = idl->idnxt;
    xstr += match.rm_eo; // start next match
  }

  regexfinish:
  regfree(&reg);

}

/*
 * Regular expression extract into variables
 *
 */
void rwlregextract(rwl_xeqenv *xev
, rwl_location *loc
, text *regex
, text *str
, rwl_idlist *idlist
, text *codename)
{
  sb4 res, l;
  ub4 i,idc;
  rwl_idlist *idl;
  regex_t reg;
  regmatch_t *match; // match array
  rwl_value *nn;
  rwl_identifier *vv;
  char errbuf[64];
  text *xstr;

  /*ASSERTS*/
  if (!str)
  {
    rwlexecsevere(xev, loc, "[rwlregexsubn-nostr]");
    return;
  }

  if (!regex)
  {
    rwlexecsevere(xev, loc, "[rwlregexsubn-noreg]");
    return;
  }

  if (!idlist)
  {
    rwlexecsevere(xev, loc, "[rwlregexsubn-idlist]");
    return;
  }

  // count identifiers, and check variables
  idc = 0;
  idl = idlist;
  while (idl)
  {

    l = rwlverifyvg(xev, idl->idnam, idl->idnum, codename);
    /*ASSERT*/
    if (l<0)
    {
      rwlexecsevere(xev, loc, "[rwlregexsubn-badvar:%s]", idl->idnam);
      return;
    }

    vv = rwlidgetmx(xev,loc, l);

    // Check variables, maybe initialize string
    switch (xev->evar[l].vtype)
    {
      case RWL_TYPE_INT: 
      case RWL_TYPE_DBL: 
        nn = rwlnuminvar(xev, vv);
	if (RWL_SVALLOC_FIX != nn->vsalloc) //ASSERT buffer is allocated as expected
	{
	  rwlexecsevere(xev, loc, "[rwlregexsubn-notfix:%s;%d]", idl->idnam, nn->vsalloc);
	  rwlidrelmx(xev,loc,l);
	  return;
	}
	nn->isnull = RWL_ISNULL;
	nn->ival = 0;
	nn->dval = 0.0;
	nn->sval[0] = 0;
        break;

      case RWL_TYPE_STR: 
        nn = rwlnuminvar(xev, vv);
	if (RWL_SVALLOC_NOT == nn->vsalloc)
	  rwlinitstrvar(xev, nn);
	nn->isnull = RWL_ISNULL;
	nn->ival = 0;
	nn->dval = 0.0;
	nn->sval[0] = 0;
        break;

      default:
        rwlexecsevere(xev, loc, "[rwlregexsubn-badtype:%s;%d;%d]"
	, idl->idnam, vv->vtype, l);
	rwlidrelmx(xev,loc,l);
        return;
    }

    rwlidrelmx(xev,loc,l);
    idl = idl->idnxt;
    idc++;
  }

  /*ASSERT*/
  if (idc<1)
  {
    rwlexecsevere(xev, loc, "[rwlregexsubn-badidc:%d]", idc);
    return;
  }

  match = rwlalloc(xev->rwm, (idc+1) * sizeof(regmatch_t)); // match[0] is whole
  if ((res = regcomp(&reg, (char *)regex, REG_EXTENDED)))
  {
    // regex compile error
    (void) regerror(res, &reg, errbuf, sizeof(errbuf));
    rwlexecerror(xev, loc, RWL_ERROR_REGEX_COMPILE_ERROR, errbuf);
    goto regexfinish;
  }

  idl = idlist;
  xstr = str;
  if (0==regexec(&reg, (char *)xstr, (size_t) idc+1, match, 0
      && match[0].rm_so>=0))
  {
    // There is at least one match
    i = 1;
    while (i<=idc && match[i].rm_so>=0)
    {
      rwlstr2var(xev, loc, idl->idnum
	, xstr + match[i].rm_so
	, (ub4)(match[i].rm_eo - match[i].rm_so), RWL_S2VREFORMAT);
      i++;
      idl = idl->idnxt;
    }
    i--;
    if (i < idc)
      rwlexecerror(xev, loc, RWL_ERROR_REGEXSUBN_TOO_FEW, i, idc);
  }

  regexfinish:
  regfree(&reg);
  rwlfree(xev->rwm, match);

}


/*
 * Make regular expression substitution
 *
 */
void rwlregexsub(rwl_xeqenv *xev
, rwl_location *loc
, text *regex
, text *str
, text *sub
, sb4  idnum
, text *idnam
, ub4 flags
, text *codename)
{
  sb4 res, cnt;
  ub4 i;
  ub4 tooshort;
  regoff_t j;
  regex_t reg;
  regmatch_t match[10]; // \0 until \9 in sub
  char errbuf[64];
  text *in1, *ut, *in2, *in3;
  rwl_value *nn;
  rwl_identifier *vv;

  /*ASSERTS*/
  if (!str)
  {
    rwlexecsevere(xev, loc, "[rwlregexsub-nostr]");
    return;
  }

  if (!regex)
  {
    rwlexecsevere(xev, loc, "[rwlregexsub-noreg]");
    return;
  }

  if (!sub)
  {
    rwlexecsevere(xev, loc, "[rwlregexsub-nosub]");
    return;
  }

  if ( 0 > rwlverifyvg(xev, idnam, idnum, codename))
  {
    rwlexecsevere(xev, loc, "[rwlregexsub-novar:%s;%d]", idnam,idnum);
    return;
  }

  vv = rwlidgetmx(xev,loc, idnum);
  
  switch (xev->evar[idnum].vtype)
  {
    case RWL_TYPE_STR: 
      nn = rwlnuminvar(xev, vv);
      if (RWL_SVALLOC_NOT == nn->vsalloc)
	rwlinitstrvar(xev, nn);
      nn->isnull = RWL_ISNULL;
      nn->ival = 0;
      nn->dval = 0.0;
      nn->sval[0] = 0;
      break;

    default:
      rwlexecsevere(xev, loc, "[rwlregexsub-badtype:%s;%d;%d]"
      , idnam, vv->vtype, idnum);
      rwlidrelmx(xev,loc,idnum);
      return;
  }

  if (nn->slen <= 1)
  {
    rwlexecsevere(xev, loc, "[rwlregexsub-badlen:%s;%d;%d;%d]"
      , idnam, vv->vtype, idnum, nn->slen);
    rwlidrelmx(xev,loc,idnum);
    return;
  }

  if ((res = regcomp(&reg, (char *)regex, REG_EXTENDED)))
  {
    // regex compile error
    (void) regerror(res, &reg, errbuf, sizeof(errbuf));
    rwlexecerror(xev, loc, RWL_ERROR_REGEX_COMPILE_ERROR, errbuf);
    goto regexsubfinish;
  }

  // scan through sub to see which \N there are
  cnt = 0; 

  in2 = sub;
  while (*in2)
  {
    if ('\\' == *in2 && in2[1] >= '0' && in2[1] <= '9')
    {
      if ((in2[1] - (text)'0') > cnt)
        cnt = (in2[1] - (text)'0');
    }
    in2++;
  }
  // cnt is the max \N we saw
  if (cnt < 0 || cnt > 9)
  {
    rwlexecsevere(xev, loc, "[rwlregexsub-badlen2:%s;%d;%d;%d]"
      , idnam, vv->vtype, idnum, cnt);
    goto regexsubfinish;
  }

  tooshort = 0;
  in3 = str;
  // cnt is max 9, and the match array has 10 elements, see regex(3)
  if (0==regexec(&reg, (char *)in3, (size_t) cnt+1, match, 0)
      && match[0].rm_so>=0)
  {
    // there is one match, actually do the replacement
    
    ut = nn->sval;

    /*
     * The replacement, i.e. the second part in sed s/part1/part2/
     * consists of three pieces:
     * in1 is everything up to the start of the match
     * in2 is the match with replacements
     * in3 is the rest
     */

    // loop if gsub
    do
    {
      // first copy until the start of the whole match
      in1 = in3; j=0;
      while (ut < nn->sval + nn->slen-1 && *in1 && j<match[0].rm_so)
      {
	*ut = *in1;
	ut++; in1++; j++;
      }

      tooshort += (ub4)(match[0].rm_so - j);

      // then copy the replacement string with potential \N codes
      in2 = sub;
      while (ut < nn->sval + nn->slen-1 && *in2)
      {
	if ('\\' == *in2) // see blackslash
	{
	  switch (in2[1])
	  {
	    case 0:
	      in2++;
	    break;

	    case '\\':
	      // followed by another backslash, copy one
	      in2 += 2;
	      *ut = '\\';
	      ut++;
	    break;
	  
	    case '0': i=0; goto backslashnumber;
	    case '1': i=1; goto backslashnumber;
	    case '2': i=2; goto backslashnumber;
	    case '3': i=3; goto backslashnumber;
	    case '4': i=4; goto backslashnumber;
	    case '5': i=5; goto backslashnumber;
	    case '6': i=6; goto backslashnumber;
	    case '7': i=7; goto backslashnumber;
	    case '8': i=8; goto backslashnumber;
	    case '9': i=9; goto backslashnumber;
	    backslashnumber:
	      in2 += 2;
	      j = match[i].rm_so;
	      if (j>=0) // j == -1 if not found, see regex(3)
	      {
		while (j < match[i].rm_eo && ut < nn->sval + nn->slen - 1)
		{
		  *ut = in3[j];
		  ut++; 
		  j++;
		}
		tooshort += (ub4) (match[i].rm_eo - j);
	      }
	    break;

	    default: // do like sed, ignore unknown character after backslash
	      in2 += 2;
	    break;
	  }
	}
	else
	{
	  *ut = *in2;
	  in2++; ut++;
	}
      }
      in3 += match[0].rm_eo;
    }
    while (bit(flags, RWL_P2_REGEXSUBG)
	   && *in3
	   && 0==regexec(&reg, (char *)in3, (size_t) cnt+1, match, 0)
	   && match[0].rm_so>=0);
    
    // finally copy from the end of the whole match
    while (ut < nn->sval + nn->slen-1 && *in3)
    {
      *ut = *in3;
      ut++; in3++; 
    }

    *ut = 0;
    if (tooshort || *in2 || *in3)
    {
      // If any part has not been copied in full, the result string was too short
      rwlexecerror(xev, loc, RWL_ERROR_TOO_SHORT_STRING
        , vv->vname, nn->slen-1, tooshort + rwlstrlen(nn->sval) + rwlstrlen(in2) + rwlstrlen(in3));
    }
    // not null and number representations
    nn->isnull = 0;
    nn->ival = rwlatosb8(nn->sval);
    nn->dval = rwlatof(nn->sval);
  }

  regexsubfinish:
  rwlidrelmx(xev,loc,idnum);
  regfree(&reg);

}

// extract hex from string into ub8
// without using sscanf
ub8 rwlhex2ub8(char *hex, ub4 maxl)
{
  ub4 i; 
  ub8 ret;

  // max 16 nibbles into an ub8
  if (maxl>2*sizeof(ub8))
    maxl=2*sizeof(ub8);

  i=0;
  ret = 0;
  while (hex[i] && i<maxl)
  {
    ret <<= 4;
    switch (hex[i])
    {
      case '0': break;
      case '1': ret |= (ub4)0x1; break;
      case '2': ret |= (ub4)0x2; break;
      case '3': ret |= (ub4)0x3; break;
      case '4': ret |= (ub4)0x4; break;
      case '5': ret |= (ub4)0x5; break;
      case '6': ret |= (ub4)0x6; break;
      case '7': ret |= (ub4)0x7; break;
      case '8': ret |= (ub4)0x8; break;
      case '9': ret |= (ub4)0x9; break;
      case 'A': /*FALLTHROUGH*/
      case 'a': ret |= (ub4)0xa; break;
      case 'B': /*FALLTHROUGH*/
      case 'b': ret |= (ub4)0xb; break;
      case 'C': /*FALLTHROUGH*/
      case 'c': ret |= (ub4)0xc; break;
      case 'D': /*FALLTHROUGH*/
      case 'd': ret |= (ub4)0xd; break;
      case 'E': /*FALLTHROUGH*/
      case 'e': ret |= (ub4)0xe; break;
      case 'F': /*FALLTHROUGH*/
      case 'f': ret |= (ub4)0xf; break;
      default: return ret;
    }
    i++;
  }
  return ret;
}

ub4 rwlcheckminval(rwl_xeqenv *xev
, rwl_location *loc
, sb8 inval // input value
, ub4 minval // minimum value
, ub4 repval // replacement value
, text *txt 
)
{
  if (inval < minval)
  {
    if (loc)
      rwlexecerror(xev, loc, RWL_ERROR_UNREASONABLE_PARAMETER, inval, txt, repval);
    else
      rwlerror(xev->rwm, RWL_ERROR_UNREASONABLE_PARAMETER, inval, txt, repval);
    return repval;
  }
  else
    return (ub4) inval;
}

FILE *rwlfopen(rwl_xeqenv *xev
, rwl_location *loc
, text *fnam
, char *omod
)
{
  (void)xev;/*unused*/
  (void)loc;/*unused*/
  return fopen((char *)fnam, omod);
}

/* 
 * rwldummyonbad make sure some subsequent calls 
 * either has a fully working database, or has a dummy
 * database that can be used for error reporting.
 *
 * see comment for RWL_CODE_SQLHEAD in rwlcoderun()
 *
 */
void rwldummyonbad(rwl_xeqenv *xev, text *dbnam)
{
  sb4 l2;

  l2 = RWL_VAR_NOTFOUND;

  if (dbnam)
    l2 = rwlfindvar(xev, dbnam, RWL_VAR_NOGUESS);

  if (l2<0
      || RWL_TYPE_CANCELLED == xev->evar[l2].vtype // avoid RWL-600
     ) 
  {
    if (l2>=0)
      xev->dummydb.vname = xev->evar[l2].vname; // allow error message text
    else
      xev->dummydb.vname = 0;
    xev->dxqdb = xev->curdb = &xev->dummydb;
  }
  else
    xev->dxqdb = xev->curdb = xev->evar[l2].vdata;
}

/*
 * Verify a string could be an identifer
 * if yes, see if data type is ok
 * and return the identifier
 *
 */
sb4 rwlbdident(rwl_xeqenv *xev
, rwl_location *loc
, text *str
, ub4 len
, rwl_sql *sq
, ub4 bdityp
, text *fname)
{
  regex_t reg;
  regmatch_t match;
  rwl_identifier *vv = 0;
  text *lstr = 0;
  sb4 var = RWL_VAR_NOTFOUND;

  /*ASSERTS*/
  if (!str)
  {
    rwlexecsevere(xev, loc, "[rwlbdident-nostr]");
    goto bdidentfinish;
  }

  if (regcomp(&reg, 
    (RWL_DEFINE==bdityp)
    ? "^[A-Za-z][A-Za-z0-9_]*$"
    : "^([A-Za-z][A-Za-z0-9_]*)|([0-9]+)$"
    , REG_EXTENDED))
  {
    // regex compile error
    rwlexecsevere(xev, loc, "[rwlbdident-regexfail]");
    goto bdidentfinish;
  }

  lstr = rwlalloc(xev->rwm, len+1);
  memcpy(lstr, str, len);
  lstr[len]=0;

  if (0==regexec(&reg, (char *)lstr, 1, &match, 0)) 
  {
    // match, assert rm_so, rm_eo
    if (0!=match.rm_so || (sb4)(len) != match.rm_eo)
    {
      // regex compile error
      rwlexecsevere(xev, loc, "[rwlbdident-match;%s;%d;%d;%d]"
      , sq->vname, match.rm_so, match.rm_eo, len);
      goto bdidentfinish;
    }
    if (RWL_BIND_ANY == bdityp) 
    {
      switch (lstr[0])
      { // bind that matches a number
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	  var = RWL_VAR_BINDNUM;
	  goto bdidentfinish;
      }
    }
  }
  else
  {
    switch (bdityp)
    {
      case RWL_DEFINE:
	rwlexecerror(xev, loc, RWL_ERROR_ALIAS_NEEDED, lstr, sq->vname);
      break;
      
      case RWL_BIND_ANY:
	rwlexecerror(xev, loc, RWL_ERROR_BIND_BAD_NAME, lstr, sq->vname);
      break;
    }
    goto bdidentfinish;
  }
  // do we want all lower case?
  if (!bit(sq->flags, RWL_SQLFLAG_ICASE))
  {
    text *tol = lstr;
    while (*tol)
    {
      if (isupper(*tol))
        *tol = (text) tolower(*tol);
      tol++;
    }
  }

  //bis(xev->tflags, RWL_P_FINDVAR_NOERR);
  var = rwlfindvar2(xev, lstr, RWL_VAR_NOGUESS, fname);
  //bic(xev->tflags, RWL_P_FINDVAR_NOERR);

  if (var<0)
    goto bdidentfinish;

  // we found the variable, check it is a reasonable type
  vv = xev->evar+var;
  switch (vv->vtype)
  {
    case RWL_TYPE_INT:
    case RWL_TYPE_DBL:
    case RWL_TYPE_STR:
    case RWL_TYPE_CLOB:
      break;

    default:
      switch (bdityp)
      {
	case RWL_DEFINE:
	  rwlexecerror(xev, loc, RWL_ERROR_INCORRECT_TYPE2, vv->stype, lstr, 
	    "implicit define");
	break;
	
	case RWL_BIND_ANY:
	  rwlexecerror(xev, loc, RWL_ERROR_INCORRECT_TYPE2, vv->stype, lstr, 
	    "implicit bind");
	break;
      }
      var = RWL_VAR_INVALID;
  }

  bdidentfinish:
  regfree(&reg);
  if (lstr)
    rwlfree(xev->rwm, lstr);

  return var;
}

// Highly optimized snprintf(s,len, "%.Nf",dval)
// As we are heavily converting double to string
// in all calculations, make it as fast as possible
// and the stuff below is faster than the full 
// snprintf. It is only used when the format
// is of the form %.Nf where N is a single digit.
//
// We split the double into its whole and 
// decimal part and use rwli2s on both
void rwld2s(rwl_main *rwm
, text *str
, double dval
, ub8 len
, ub4 prc // the single digit N above
)
{
  ub4 i;
  sb8 ival,pfac,iwhl,idec;
  ub8 ylen;
  text *yt;
  double pval;

  // if we don't have at least 30 characters
  // use snprintf
  if (len<30)
  {
    snprintf((char *)str, len, rwm->dformat, dval);
    return;
  }

  if (prc>=10)
  {
    rwlsevere(rwm,"[rwld2s-badprec;%d]", prc);
    prc=2;
  }

  // zero?
  if (0.0 == dval)
  {
    if (prc)
    {
      strcpy((char *)str,"0.");
      yt = str+2;
      while (prc--)
	*yt++ = '0';
      *yt = 0;
    }
    else
      strcpy((char *)str, "0");
    return;
  }

  // Negative?
  if (dval < 0.0)
  {
    pval = -dval;
    *str='-';
    yt = str+1;
    len--;
  }
  else
  {
    pval = dval;
    yt = str;
  }

  // Very large?
  if (pval>=1.0e13)
  {
    snprintf((char *)str, len, rwm->dformat, dval);
    return;
  }

  // will it fit
  if (( 12 /* 12 digits plus comma */
      + prc ) > (len-1)
    )
  {
    snprintf((char *)str, len, rwm->dformat, dval);
    return;
  }

  // We use the fact that the precision of an sb8
  // is higher than the number of significant
  // digits in a double
  
  // multiply by 10^prc and round

  pfac = 1;
  for (i=0; i<prc; i++)
  {
    pval *= 10.0;
    pfac *= 10;
  }

  ival = (sb8) round(pval); // rounded value of 10^prc*pval
  iwhl = ival/pfac; // the whole part of the result

  ylen = rwli2s(rwm, yt, iwhl, len, 0);
  if (prc)
  {
    yt += ylen;
    *yt++ = '.';
    len -= ylen+1;
    idec = ival - iwhl*pfac; // i.e. ival%pfac but avoiding division
    (void) rwli2s(rwm, yt, idec, len, (sb4) prc); 
  }
}
//
// Highly optimized snprintf(s,len, "%ld",ival)
// See comment above; it is only used when iformat
// has the default value
// minchr==0 means use exact number of characters needed
// minchr>0 means to prefix '0' as needed
// returns the number of (non-NULL) characters, this
// value is only used in rwld2s
ub8 rwli2s(rwl_main *rwm
, text *str
, sb8 ival
, ub8 len
, sb4 minchr
)
{
  sb8 inxt, ipos, idec;
  ub8 rl;
  text *yt;
  // The largest sb8 value is around 10^22, so 30 characters is guaranteed
  // to be sufficient
  text buffer[30]; 

  // zero?
  if (0==ival)
  {
    rl = 1;
    *str++ = '0';
    if (minchr)
      while (--minchr)
      {
	*str++ = '0';
	rl++;
      }
    *str = 0;
    return rl;
  }

  // negative
  if (ival<0)
  {
    ipos = -ival;
    *str++='-';
    len--;
  }
  else
  {
    ipos = ival;
  }

  // write characters from the back
  yt = buffer + sizeof(buffer)-1;
  *yt = 0;

  while (ipos)
  {
    // do 2 characters at a time to reduce 
    // the number of divisions
    //
    // Assume the optimizer does the / and % in a smart way!
    inxt = ipos/100;
    idec = ipos%100;
    switch(idec)
    {
      case  0: *--yt = '0'; *--yt = '0'; break;
      case  1: *--yt = '1'; *--yt = '0'; break;
      case  2: *--yt = '2'; *--yt = '0'; break;
      case  3: *--yt = '3'; *--yt = '0'; break;
      case  4: *--yt = '4'; *--yt = '0'; break;
      case  5: *--yt = '5'; *--yt = '0'; break;
      case  6: *--yt = '6'; *--yt = '0'; break;
      case  7: *--yt = '7'; *--yt = '0'; break;
      case  8: *--yt = '8'; *--yt = '0'; break;
      case  9: *--yt = '9'; *--yt = '0'; break;
      case 10: *--yt = '0'; *--yt = '1'; break;
      case 11: *--yt = '1'; *--yt = '1'; break;
      case 12: *--yt = '2'; *--yt = '1'; break;
      case 13: *--yt = '3'; *--yt = '1'; break;
      case 14: *--yt = '4'; *--yt = '1'; break;
      case 15: *--yt = '5'; *--yt = '1'; break;
      case 16: *--yt = '6'; *--yt = '1'; break;
      case 17: *--yt = '7'; *--yt = '1'; break;
      case 18: *--yt = '8'; *--yt = '1'; break;
      case 19: *--yt = '9'; *--yt = '1'; break;
      case 20: *--yt = '0'; *--yt = '2'; break;
      case 21: *--yt = '1'; *--yt = '2'; break;
      case 22: *--yt = '2'; *--yt = '2'; break;
      case 23: *--yt = '3'; *--yt = '2'; break;
      case 24: *--yt = '4'; *--yt = '2'; break;
      case 25: *--yt = '5'; *--yt = '2'; break;
      case 26: *--yt = '6'; *--yt = '2'; break;
      case 27: *--yt = '7'; *--yt = '2'; break;
      case 28: *--yt = '8'; *--yt = '2'; break;
      case 29: *--yt = '9'; *--yt = '2'; break;
      case 30: *--yt = '0'; *--yt = '3'; break;
      case 31: *--yt = '1'; *--yt = '3'; break;
      case 32: *--yt = '2'; *--yt = '3'; break;
      case 33: *--yt = '3'; *--yt = '3'; break;
      case 34: *--yt = '4'; *--yt = '3'; break;
      case 35: *--yt = '5'; *--yt = '3'; break;
      case 36: *--yt = '6'; *--yt = '3'; break;
      case 37: *--yt = '7'; *--yt = '3'; break;
      case 38: *--yt = '8'; *--yt = '3'; break;
      case 39: *--yt = '9'; *--yt = '3'; break;
      case 40: *--yt = '0'; *--yt = '4'; break;
      case 41: *--yt = '1'; *--yt = '4'; break;
      case 42: *--yt = '2'; *--yt = '4'; break;
      case 43: *--yt = '3'; *--yt = '4'; break;
      case 44: *--yt = '4'; *--yt = '4'; break;
      case 45: *--yt = '5'; *--yt = '4'; break;
      case 46: *--yt = '6'; *--yt = '4'; break;
      case 47: *--yt = '7'; *--yt = '4'; break;
      case 48: *--yt = '8'; *--yt = '4'; break;
      case 49: *--yt = '9'; *--yt = '4'; break;
      case 50: *--yt = '0'; *--yt = '5'; break;
      case 51: *--yt = '1'; *--yt = '5'; break;
      case 52: *--yt = '2'; *--yt = '5'; break;
      case 53: *--yt = '3'; *--yt = '5'; break;
      case 54: *--yt = '4'; *--yt = '5'; break;
      case 55: *--yt = '5'; *--yt = '5'; break;
      case 56: *--yt = '6'; *--yt = '5'; break;
      case 57: *--yt = '7'; *--yt = '5'; break;
      case 58: *--yt = '8'; *--yt = '5'; break;
      case 59: *--yt = '9'; *--yt = '5'; break;
      case 60: *--yt = '0'; *--yt = '6'; break;
      case 61: *--yt = '1'; *--yt = '6'; break;
      case 62: *--yt = '2'; *--yt = '6'; break;
      case 63: *--yt = '3'; *--yt = '6'; break;
      case 64: *--yt = '4'; *--yt = '6'; break;
      case 65: *--yt = '5'; *--yt = '6'; break;
      case 66: *--yt = '6'; *--yt = '6'; break;
      case 67: *--yt = '7'; *--yt = '6'; break;
      case 68: *--yt = '8'; *--yt = '6'; break;
      case 69: *--yt = '9'; *--yt = '6'; break;
      case 70: *--yt = '0'; *--yt = '7'; break;
      case 71: *--yt = '1'; *--yt = '7'; break;
      case 72: *--yt = '2'; *--yt = '7'; break;
      case 73: *--yt = '3'; *--yt = '7'; break;
      case 74: *--yt = '4'; *--yt = '7'; break;
      case 75: *--yt = '5'; *--yt = '7'; break;
      case 76: *--yt = '6'; *--yt = '7'; break;
      case 77: *--yt = '7'; *--yt = '7'; break;
      case 78: *--yt = '8'; *--yt = '7'; break;
      case 79: *--yt = '9'; *--yt = '7'; break;
      case 80: *--yt = '0'; *--yt = '8'; break;
      case 81: *--yt = '1'; *--yt = '8'; break;
      case 82: *--yt = '2'; *--yt = '8'; break;
      case 83: *--yt = '3'; *--yt = '8'; break;
      case 84: *--yt = '4'; *--yt = '8'; break;
      case 85: *--yt = '5'; *--yt = '8'; break;
      case 86: *--yt = '6'; *--yt = '8'; break;
      case 87: *--yt = '7'; *--yt = '8'; break;
      case 88: *--yt = '8'; *--yt = '8'; break;
      case 89: *--yt = '9'; *--yt = '8'; break;
      case 90: *--yt = '0'; *--yt = '9'; break;
      case 91: *--yt = '1'; *--yt = '9'; break;
      case 92: *--yt = '2'; *--yt = '9'; break;
      case 93: *--yt = '3'; *--yt = '9'; break;
      case 94: *--yt = '4'; *--yt = '9'; break;
      case 95: *--yt = '5'; *--yt = '9'; break;
      case 96: *--yt = '6'; *--yt = '9'; break;
      case 97: *--yt = '7'; *--yt = '9'; break;
      case 98: *--yt = '8'; *--yt = '9'; break;
      case 99: *--yt = '9'; *--yt = '9'; break;
    }
    ipos = inxt;
    if (yt<buffer+1)
    {
      rwlsevere(rwm,"[rwli2s-underflow:%ld;%ld;%ld]", buffer-yt, ipos, ival);
      break;
    }
    minchr -= 2;
  }
  while (minchr>0)
  {
    minchr--;
    *--yt = '0';
  }
  // If minchr was originally zero, it means it will be negative
  // in which case we always skips the first zero
  // If minchr was originally odd, it will also be negative now
  // so we skip the first zero resulting in an odd number of
  // characters returned
  // If minchr was originally even, it will now be zero
  // and we keep an initial zero returning an even number of
  // characters
  if (minchr && '0'==*yt)
  {
    rwlstrnncpy(str,yt+1,len);
    rl = (ub8)(buffer+sizeof(buffer)-yt-1);
  }
  else
  {
    rwlstrnncpy(str,yt,len);
    rl = (ub8)(buffer+sizeof(buffer)-yt);
  }
  if (rl>len)
    return len-1;
  else
    return rl-1;
}

rwlcomp(rwlmisc_c, RWL_GCCFLAGS)
