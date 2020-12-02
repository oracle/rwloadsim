/*
 * RWP*Load Simulator
 *
 * Copyright (c) 2020 Oracle Corportaion
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

#include "rwl.h"

static text *rwlmergepersec = (text *)
"merge into persec p using\n"
"( select \n"
"  :1 runnumber, :2 procno ,:3 vname ,:4 second ,:5 scount\n"
"  from dual) v\n"
"on (p.runnumber=v.runnumber and p.procno=v.procno\n"
"  and p.vname=v.vname and p.second=v.second)\n"
"when matched then\n"
"  update set p.scount=p.scount+v.scount\n"
"when not matched then\n"
"  insert (runnumber, procno, vname, second, scount)\n"
"  values (v.runnumber, v.procno, v.vname, v.second, v.scount)\n";

void rwlinitdotfile(rwl_main *rwm, char *fnam, ub4 mustexist)
{
  /* try opening file and read for directives */
  text *rfn = rwlenvexp(rwm->mxq, 0, (text *)fnam);
  FILE *dotfil = rwlfopen(rfn,"r");
  void *dummy;
  int retv;
  ub4 show = 1;
  if (dotfil)
  {
    bis(rwm->m2flags, RWL_P2_INRCFILE);
    rwlyfileset(rwm, dotfil, (char *)rfn);
    while ((retv=rwlylex((union YYSTYPE *)&dummy, rwm->rwlyscanner)))
    {
      if (show)
	rwlerror(rwm, RWL_ONLY_DIRECTIVE_IN_DOT, rfn);
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

  rwlinit2(rwm, av0);

}

// See if we want to search public directory.
// Note that this can be called twice from either a command line option
// or if we also have $longoption:publicsearch in the first .rwl file
//
void rwlinit2(rwl_main *rwm, text *av0)
{

  if (bit(rwm->m2flags, RWL_P2_PUBLICSEARCH) && av0 && av0[0] && !rwm->publicdir)
  {
    // This code is the reason for rwloadsim.sh to do its
    // own PATH search
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
      rwlerror(rwm, RWL_ERROR_PUBLIC_BAD, rwm->publicdir);
    }
    // make rwm->publicdir be the name of the public directory relative to
    // the bin directory where we found the executable
    // Posistion 10 sizeof("public/")
    s1[6] = 0;

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
    tstamp = localtime(&sinceepoch);
    snprintf(rwm->xeqtime, RWL_XEQTIMBUF, "%04d-%02d-%02dT%02d:%02d:%02d"
      , tstamp->tm_year+1900, tstamp->tm_mon, tstamp->tm_mday
      , tstamp->tm_hour, tstamp->tm_min, tstamp->tm_sec);
    rwm->reskey = rwm->xeqtime;
  }

  // various other
  if (!rwm->komment)
    rwm->komment = "";
  rwm->maxlocals = RWL_MAX_LOCALVAR+1; // +1 for return value


  urandom = fopen("/dev/urandom","r");
  if (urandom && 3 == fread(rwm->mxq->xsubi, sizeof(rwm->mxq->xsubi[0]), 3, urandom))
  {
  #ifdef NEVER
    if (bit(rwm->mflags, RWL_DEBUG_MISC))
      rwldebug(rwm,"%4.4x%4.4x%4.4x"
		, rwm->mxq->xsubi[0]
		, rwm->mxq->xsubi[1]
		, rwm->mxq->xsubi[2])
  #endif
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
    rwlsevere(rwm,"[rwlinit-intern:%s;%d]", RWL_LOOPNUMBER_VAR, l);

  l = rwladdvar(rwm, RWL_THREADNUMBER_VAR, RWL_TYPE_INT, RWL_IDENT_INTERNAL);
  if (l<0)
    rwlsevere(rwm,"[rwlinit-intern:%s;%d]", RWL_THREADNUMBER_VAR, l);

  l = rwladdvar(rwm, RWL_RUNNUMBER_VAR, RWL_TYPE_INT, RWL_IDENT_INTERNAL);
  if (l<0)
    rwlsevere(rwm,"[rwlinit-intern:%s;%d]", RWL_RUNNUMBER_VAR, l);

  l = rwladdvar(rwm, RWL_EVERYUNTIL_VAR, RWL_TYPE_DBL, RWL_IDENT_INTERNAL);
  if (l<0)
    rwlsevere(rwm,"[rwlinit-intern:%s;%d]", RWL_EVERYUNTIL_VAR, l);

  l = rwladdvar(rwm, RWL_DUMMY_VAR, RWL_TYPE_INT, RWL_IDENT_NOPRINT);
  if (l<0)
    rwlsevere(rwm,"[rwlinit-intern:%s;%d]", RWL_DUMMY_VAR, l);

  l = rwladdvar(rwm, RWL_SYSSECONDS_VAR, RWL_TYPE_DBL, RWL_IDENT_INTERNAL);
  if (l<0)
    rwlsevere(rwm,"[rwlinit-intern:%s;%d]", RWL_SYSSECONDS_VAR, l);
  else
    rwm->mxq->sysvar = l;

  l = rwladdvar(rwm, RWL_USRSECONDS_VAR, RWL_TYPE_DBL, RWL_IDENT_INTERNAL);
  if (l<0)
    rwlsevere(rwm,"[rwlinit-intern:%s;%d]", RWL_USRSECONDS_VAR, l);
  else
    rwm->mxq->usrvar = l;

  l = rwladdvar(rwm, RWL_PROCNUMBER_VAR, RWL_TYPE_INT, RWL_IDENT_INTERNAL);
  if (l<0)
    rwlsevere(rwm,"[rwlinit-intern:%s;%d]", RWL_PROCNUMBER_VAR, l);

  l = rwladdvar(rwm, RWL_ORAERROR_VAR, RWL_TYPE_INT, RWL_IDENT_NOPRINT);
  if (l<0)
    rwlsevere(rwm,"[rwlinit-intern:%s;%d]", RWL_ORAERROR_VAR, l);
  else
    rwm->mxq->oraerrorvar = l;

  rwm->declslen = OCI_ERROR_MAXMSG_SIZE2;
  l = rwladdvar(rwm, RWL_ORAERRORTEXT_VAR, RWL_TYPE_STR, RWL_IDENT_NOPRINT);
  if (l<0)
    rwlsevere(rwm,"[rwlinit-intern:%s;%d]", RWL_ORAERRORTEXT_VAR, l);
  else
  {
    rwl_value *vp;
    rwm->mxq->oraerrortextvar = l;
    vp = &rwm->mxq->evar[l].num;
    vp->slen = OCI_ERROR_MAXMSG_SIZE2;
    rwlinitstrvar(rwm->mxq, vp);
  }

  rwm->mxq->argcvar = l = rwladdvar(rwm, RWL_DOLLARCOUNT_VAR, RWL_TYPE_INT, RWL_IDENT_INTERNAL);
  if (l<0)
    rwlsevere(rwm,"[rwlinit-intern:%s;%d]", RWL_DOLLARCOUNT_VAR, l);
  else
  {
    rwm->mxq->evar[l].num.ival = (sb8) rwm->posargs;
    rwm->mxq->evar[l].num.dval = (double) rwm->posargs;
    rwm->mxq->evar[l].num.isnull = 0;
    if (rwm->mxq->evar[l].num.vsalloc != RWL_SVALLOC_NOT)
	  snprintf((char *)rwm->mxq->evar[l].num.sval, rwm->mxq->evar[l].num.slen, rwm->iformat, rwm->posargs);
	  
  }

  rwm->declslen = 1;
  l = rwladdvar(rwm, RWL_EMPTY_VAR, RWL_TYPE_STR, RWL_IDENT_NOPRINT);
  if (l<0)
    rwlsevere(rwm,"[rwlinit-intern:%s;%d]", RWL_EMPTY_VAR, l);
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
    rwlsevere(rwm,"[rwlinit-intern:%s;%d]", RWL_STOPCOUNT_VAR, l);

  l = rwladdvar(rwm, RWL_STOPTIME_VAR, RWL_TYPE_DBL, RWL_IDENT_INTERNAL);
  if (l<0)
    rwlsevere(rwm,"[rwlinit-intern:%s;%d]", RWL_STOPTIME_VAR, l);

  l = rwladdvar(rwm, RWL_STARTTIME_VAR, RWL_TYPE_DBL, RWL_IDENT_INTERNAL);
  if (l<0)
    rwlsevere(rwm,"[rwlinit-intern:%s;%d]", RWL_STARTTIME_VAR, l);

  l = rwladdvar(rwm, RWL_STDERR_VAR, RWL_TYPE_FILE, RWL_IDENT_INTERNAL);
  if (l<0)
    rwlsevere(rwm,"[rwlinit-intern:%s;%d]", RWL_STDERR_VAR, l);
  else
  {
    rwl_identifier *vv;
    vv = rwm->mxq->evar+l;
    vv->num.vptr = (void *) stderr;
    bis(vv->num.valflags, RWL_VALUE_FILEOPENMAIN | RWL_VALUE_FILE_OPENW);
  }

  l = rwladdvar(rwm, RWL_STDOUT_VAR, RWL_TYPE_FILE, RWL_IDENT_INTERNAL);
  if (l<0)
    rwlsevere(rwm,"[rwlinit-intern:%s;%d]", RWL_STDOUT_VAR, l);
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
    rwlsevere(rwm,"[rwlinit-intern:%s;%d]", RWL_HOSTNAME_VAR, l);
  else
  {
    rwl_value *vp;
    vp = &rwm->mxq->evar[l].num;
    vp->slen = RWL_HOSTNAME_LEN;
    rwlinitstrvar(rwm->mxq, vp);
    if (0 != gethostname((char *)vp->sval, vp->slen))
    {
      int saveno = errno;
      if (0!=strerror_r(errno, etxt, sizeof(etxt)))
	strcpy(etxt,"unknown");
      rwlerror(rwm, RWL_ERROR_GENERIC_OS, "gethostname()",  etxt);
      if (ENAMETOOLONG != saveno)
	rwlstrnncpy(vp->sval, (text *)"<unknown>", RWL_HOSTNAME_LEN);
    }
    // gethostname may not necessarily null terminate on errors
    vp->sval[RWL_HOSTNAME_LEN-1] = 0;

  }

  l = rwladdvar(rwm, RWL_STDIN_VAR, RWL_TYPE_FILE, RWL_IDENT_INTERNAL);
  if (l<0)
    rwlsevere(rwm,"[rwlinit-intern:%s;%d]", RWL_STDIN_VAR, l);
  else
  {
    rwl_identifier *vv;
    vv = rwm->mxq->evar+l;
    vv->num.vptr = (void *) stdin;
    bis(vv->num.valflags, RWL_VALUE_FILEOPENMAIN | RWL_VALUE_FILE_OPENR);
  }

  /* The following only exist so that they can be turned into actually
   * used variables as needed without "make test" output change for those
   * tests that include "printvar all"
   *
   * So if you add a variable able, remove one below
   */

  l = rwladdvar(rwm, RWL_UNUSED_VAR "9" , RWL_TYPE_INT, RWL_IDENT_NOPRINT);
  if (l<0) rwlsevere(rwm,"[rwlinit-intern:%s;%d]", RWL_DUMMY_VAR "9", l);
  l = rwladdvar(rwm, RWL_UNUSED_VAR "8" , RWL_TYPE_INT, RWL_IDENT_NOPRINT);
  if (l<0) rwlsevere(rwm,"[rwlinit-intern:%s;%d]", RWL_DUMMY_VAR "8", l);
  l = rwladdvar(rwm, RWL_UNUSED_VAR "7" , RWL_TYPE_INT, RWL_IDENT_NOPRINT);
  if (l<0) rwlsevere(rwm,"[rwlinit-intern:%s;%d]", RWL_DUMMY_VAR "7", l);
  l = rwladdvar(rwm, RWL_UNUSED_VAR "6" , RWL_TYPE_INT, RWL_IDENT_NOPRINT);
  if (l<0) rwlsevere(rwm,"[rwlinit-intern:%s;%d]", RWL_DUMMY_VAR "6", l);
  l = rwladdvar(rwm, RWL_UNUSED_VAR "5" , RWL_TYPE_INT, RWL_IDENT_NOPRINT);
  if (l<0) rwlsevere(rwm,"[rwlinit-intern:%s;%d]", RWL_DUMMY_VAR "5", l);
  l = rwladdvar(rwm, RWL_UNUSED_VAR "4" , RWL_TYPE_INT, RWL_IDENT_NOPRINT);
  if (l<0) rwlsevere(rwm,"[rwlinit-intern:%s;%d]", RWL_DUMMY_VAR "4", l);
  l = rwladdvar(rwm, RWL_UNUSED_VAR "3" , RWL_TYPE_INT, RWL_IDENT_NOPRINT);
  if (l<0) rwlsevere(rwm,"[rwlinit-intern:%s;%d]", RWL_DUMMY_VAR "3", l);
  l = rwladdvar(rwm, RWL_UNUSED_VAR "2" , RWL_TYPE_INT, RWL_IDENT_NOPRINT);
  if (l<0) rwlsevere(rwm,"[rwlinit-intern:%s;%d]", RWL_DUMMY_VAR "2", l);
  l = rwladdvar(rwm, RWL_UNUSED_VAR "1" , RWL_TYPE_INT, RWL_IDENT_NOPRINT);
  if (l<0) rwlsevere(rwm,"[rwlinit-intern:%s;%d]", RWL_DUMMY_VAR "1", l);

}

/* init a new rwl_xeqenv */
void rwlinitxeqenv(rwl_xeqenv * xev)
{
  xev->vresdb = RWL_VAR_NOGUESS;
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
    rwlsevere(xev->rwm, "[rwlgetrusage-usrvar:%d]", xev->sysvar);
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
      snprintf((char *)vp->sval, vp->slen, xev->rwm->dformat, x);

  x = (double) usage.ru_utime.tv_sec + (double) usage.ru_utime.tv_usec/1.0e6;
  vp = &xev->evar[xev->usrvar].num;
  vp->dval = x;
  vp->ival = (sb8) round(x);
  vp->isnull = 0;
  if (vp->vsalloc != RWL_SVALLOC_NOT)
      snprintf((char *)vp->sval, vp->slen, xev->rwm->dformat, x);
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

  while (sss && !rwlstopnow)
  {
    if ((errnum=clock_nanosleep(CLOCK_REALTIME, 0 /*flags*/, &onesec, 0 /* remain */)))
    {
      if (errnum == EINTR) /* rwlstopnow gets true in the interrupt handler */
	break;
      if (0!=strerror_r(errnum, etxt, sizeof(etxt)))
	strcpy(etxt,"unknown");
      rwlexecerror(xev, cloc, RWL_ERROR_GENERIC_OS, "clock_nanosleep()", etxt);
      break;
    }
    sss--;
  }

  if (rwlstopnow)
    return;

  /* and the naneseconds */
  if ((errnum=clock_nanosleep(CLOCK_REALTIME, 0 /*flags*/, &wtime, 0 /* remain */)))
  {
    if (errnum == EINTR)
      return;
    if (0!=strerror_r(errnum, etxt, sizeof(etxt)))
      strcpy(etxt,"unknown");
    rwlexecerror(xev, cloc, RWL_ERROR_GENERIC_OS, "clock_nanosleep()", etxt);
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
  sb4 sss;
  sb4 errnum;
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
  while (sss>0 && !rwlstopnow)
  {
    if ((errnum=clock_nanosleep(CLOCK_REALTIME, 0 /*flags*/, &onesec, 0 /* remain */)))
    {
      if (errnum == EINTR) /* rwlstopnow gets true in the interrupt handler */
	break;
      if (0!=strerror_r(errnum, etxt, sizeof(etxt)))
	strcpy(etxt,"unknown");
      rwlexecerror(xev, cloc, RWL_ERROR_GENERIC_OS, "clock_nanosleep()", etxt);
      break;
    }
    sss--;
    wholeseconds += 1.0;
  }

  if (rwlstopnow)
    return wholeseconds;

  /* and finally sleep until the wanted wait until time */
  if ((errnum = clock_nanosleep(CLOCK_REALTIME, TIMER_ABSTIME , &wtime, 0 /* remain */)))
  {
    if (errnum == EINTR)
      return wholeseconds; // this is not precise as we may have waited....
    if (0!=strerror_r(errnum, etxt, sizeof(etxt)))
      strcpy(etxt,"unknown");
    rwlexecerror(xev, cloc, RWL_ERROR_GENERIC_OS, "clock_nanosleep()", etxt);
  }
  return idletime;
}

#ifdef RWL_OWN_MALLOC
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

  if (bit(rwm->mflags, RWL_DEBUG_ALLOC))
    rwldebugcode(rwm, cloc, "alloc at %s siz=%zd, ptr=0x%x", buf+1, nn, all +sizeof(ub8)+sizeof(size_t));
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
  if (bit(rwm->mflags, RWL_DEBUG_ALLOC))
    rwldebugcode(rwm, cloc, "free at %s;%d siz=%zd ptr=%p alloc:%s", fna, lno, nn
      , mem
      , all + nn + 2*sizeof(ub8) + sizeof(size_t)+1);
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
  rwl_stats *s = var->stats;
#ifdef NEVER
  if (bit(xev->tflags, RWL_DEBUG_MISC))
    rwldebug(xev->rwm,"0:%.6e 1:%.6e 2:%.6e 3:%.6e s:%.6e", t0d, t1d, t2d, t3, tdsum);
#endif
  /*assert*/
  if (t0d < 0.0 || t1d < 0.0 || t2d < 0.0)
  {
    rwlexecsevere(xev, eloc, "[rwlstatsincr-negative:%.3e;%.3e;%.3e]", t0d, t1d, t2d);
    return;
  }
  s->time0 += t0d;
  s->time1 += t1d;
  s->time2 += t2d;
  s->count++;
  /*
   * t0d and t1d are known to sometimes be zero, while
   * t2d is probably never zero, but it cannot be ruled out
   * so we simply ignore it rather than error out
   */
  if (bit(xev->tflags, RWL_P_HISTOGRAMS) && tdsum>0.0)
  {
    double d_buck;
    ub4 i_buck = 0;

    /* find the bucket */
    d_buck = log(tdsum) / M_LN2 + 20.0;

    /* 
     * sec~=0.000001 => d_buck==0
     * sec~=0.001    => d_buck==10 
     * sec==1.0      => d_buck==20
     * sec==1024     => d_buck==30
     */

    if (d_buck < 0.0)
    {
      rwlexecerror(xev, eloc, RWL_ERROR_HISTUNDERFLOW, i_buck, tdsum);
      i_buck = 0;
    }
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
      memcpy(np, s->persec, sizeof(*s->persec)*s->pssize);
      rwlfreecode(xev->rwm, s->persec, eloc);
      s->persec = np;
      s->pssize = ns;
    }
    // If we are flushing persec, mutex the increase
    RWL_SRC_ERROR_FRAME
    if (xev->rwm->flushstop) 
      rwlmutexget(xev, RWL_SRC_ERROR_LOC, var->var_mutex);
    s->persec[i_sec] ++;
    if (xev->rwm->flushstop) 
      rwlmutexrel(xev, RWL_SRC_ERROR_LOC, var->var_mutex);
    RWL_SRC_ERROR_END
  }
  stopcounting:
  return;
}

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

  /*
    b8->vname = (text *)"I#itime";
    b8->bdtyp = RWL_DIRBIND;
    b8->vtype = RWL_TYPE_DBL;
    b8->pvar = &stat->time0;
    b8->pind = &notnull;
    b8->pos = 8;
    b8->next = brno;
    mysq->bincount = 8;
  */

    mysq->sql = (text *)
	    "insert into runres(runnumber, procno, vname, wtime, etime, ecount, tcount/*, itime*/)\n"
	    "values (:1,:2,:3,:4,:5,:6,:7/*,:8*/)\n";
    mysq->sqllen = (ub4)rwlstrlen(mysq->sql);
    mysq->bindef = b4; /* head of the chain */
    mysq->vname = (text *)"I#insrunres";
    rwlsimplesql(rwm->mxq, RWL_SRC_ERROR_LOC, rdb, mysq);

    if (bit(rwm->mflags, RWL_P_HISTOGRAMS))
    {
      /* insert historams */
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
      b5->next = brno;

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
      mysq->bincount = 5;
      mysq->vname = (text *)"I#inspsersec";
      /* use array */
      mysq->asiz = RWL_STATS_ARRAY;
      bis(mysq->flags,RWL_SQFLAG_ARRAYB);
      rwlallocabd(rwm->mxq, RWL_SRC_ERROR_LOC, mysq);

      for (i=0; i<=hi; i++)
      {
	second = (ub8) i+1;
	scount = stat->persec[i];
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
#ifdef NEVER
      if (bit(xev->tflags, RWL_DEBUG_MISC))
	rwldebugcode(xev->rwm, RWL_SRC_ERROR_LOC, "flushoer %d %s %s %.2f %d"
	  , ost->oernum
	  , ost->oersqn
	  , ost->oertxt
	  , ost->oersec
	  , xev->rwm->oerstatseq);
#endif
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
      snprintf((char *)rwm->mxq->evar[vno].num.sval, rwm->mxq->evar[vno].num.slen, rwm->iformat, rwm->runnumber);


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
      tm = localtime(&tt);
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

      bhst->vname = RWL_HOSTNAME_VAR;
      bhst->vguess = rwlfindvar(rwm->mxq, RWL_HOSTNAME_VAR, RWL_VAR_NOGUESS);
      bhst->bdtyp = RWL_BIND_POS;
      bhst->vtype = RWL_TYPE_STR;
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
      }
	
      rwm->runnumber = (ub8) rwm->mxq->evar[brno->vguess].num.ival;
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
      FILE *Mfile = rwlfopen(rfn,"w");

      if (Mfile)
      {
	fprintf(Mfile, RWL_PFLAG_FORMAT, rwm->runnumber, rwlsinceepoch(rwm) + rwm->adjepoch);
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

  /* set a procno if the user hasn't */
  if (!rwm->procno)
    rwm->procno = (ub8) getpid();

  /* copy procno to processnumber variables */
  sb4 vno = rwlfindvar(rwm->mxq, RWL_PROCNUMBER_VAR, RWL_VAR_NOGUESS);
  if (vno<0)
  {
    rwlsevere(rwm, "[rwlgetrunnumber-noprocnovar:%d]", vno);
    return;
  }
  rwm->mxq->evar[vno].num.ival = (sb8) rwm->procno;
  rwm->mxq->evar[vno].num.dval = (double) rwm->procno;
  rwm->mxq->evar[vno].num.isnull = 0;
  if (rwm->mxq->evar[vno].num.vsalloc != RWL_SVALLOC_NOT)
    snprintf((char *)rwm->mxq->evar[vno].num.sval, rwm->mxq->evar[vno].num.slen, rwm->iformat, rwm->procno);

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
  char buf[RWL_PFBUF+2];
  ub4 i, fail=0;

  for (i=0; i<sizeof(in)/sizeof(double); i++)
  {
    snprintf(buf, RWL_PFBUF, rwm->dformat, in[i]);
    ut[i] = atof(buf);
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
  char buf[RWL_PFBUF+2];
  ub4 i, fail=0;

  for (i=0; i<sizeof(in)/sizeof(sb8); i++)
  {
    snprintf(buf, RWL_PFBUF, rwm->iformat, in[i]);
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
  tags = rwlfopen(rfn, "w");
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
    char *dot, *sls;
    fprintf(tags, "run\t%s\t%d\n", rwm->runloc.fname, rwm->runloc.lineno );


    dot = strrchr(rwm->runloc.fname,'.');
    sls = strrchr(rwm->runloc.fname,'/');
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
  /* ppsec[j][i] will contain the persec counter for relevant variable i at time current second minus j */
  rwl_sql *mysq;    
  rwl_bindef *brno; /* bind for runnumber */
  rwl_bindef *bpno; /* bind for procno */
  rwl_bindef *bvna; /* bind for vname */
  rwl_bindef *bsec; /* bind for second */
  rwl_bindef *bcnt; /* bind for persec count */

  sb2 notnull = 0;
  ub4 tooksess;
  rwl_cinfo *rdb;
  ub8 second;
  ub8 scount;

  text thisname[RWL_MAX_IDLEN+2];

  RWL_SRC_ERROR_FRAME

    if (bit(xev->tflags, RWL_DEBUG_MISC))
      rwldebugcode(xev->rwm, RWL_SRC_ERROR_LOC, "rwlflushrun stop=%d every=%d", xev->rwm->flushstop, xev->rwm->flushevery);

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
    ppsec = rwlalloccode(xev->rwm, sizeof(*ppsec)*xev->rwm->flushevery,RWL_SRC_ERROR_LOC);
    for (j=0; j<xev->rwm->flushevery; j++)
      ppsec[j] = rwlalloccode(xev->rwm, sizeof(**ppsec) * vcnt, RWL_SRC_ERROR_LOC);

    // get the variable numbers of the relevant ones and save in vnum array
    i=0;
    for (v=0; v<xev->varcount; v++)
    {
      if ( RWL_TYPE_PROC == xev->evar[v].vtype
	   && !bit(xev->evar[v].flags,RWL_IDENT_NOSTATS)
	 )
      {
	vnum[i] = v; 
#ifdef NEVER
	if (bit(xev->tflags, RWL_DEBUG_MISC))
	  rwldebugcode(xev->rwm, RWL_SRC_ERROR_LOC, "rwlflushrun relevant for %d %d %s"
	  , i, v, xev->evar[v].vname);
#endif
	i++;
      }
    }

    /* allocate and prepare binds etc */
    brno = (rwl_bindef *) rwlalloc(xev->rwm, sizeof(rwl_bindef));
    bpno = (rwl_bindef *) rwlalloc(xev->rwm, sizeof(rwl_bindef));
    bvna = (rwl_bindef *) rwlalloc(xev->rwm, sizeof(rwl_bindef));
    bsec = (rwl_bindef *) rwlalloc(xev->rwm, sizeof(rwl_bindef));
    bcnt = (rwl_bindef *) rwlalloc(xev->rwm, sizeof(rwl_bindef));
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
    // this is the end, don't set bcnt->next

    mysq->sql = rwlmergepersec;
    mysq->sqllen = (ub4)rwlstrlen(mysq->sql);
    mysq->bindef = brno; /* head of the chain */
    mysq->bincount = 5;
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

#ifdef NEVER
      if (bit(xev->tflags, RWL_DEBUG_MISC))
	rwldebugcode(xev->rwm, RWL_SRC_ERROR_LOC, "rwlflushrun waking up at %.2f"
	, rwlclock(xev, RWL_SRC_ERROR_LOC));
#endif

      // clear from last cycle
      for (j=0; j<xev->rwm->flushevery; j++)
	memset(ppsec[j], 0, vcnt * sizeof(**ppsec));

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
		rwldebugcode(xev->rwm, RWL_SRC_ERROR_LOC, "persec %s sec=%d t=%d i=%d s=%d persec=%d"
		, thv->vname, sec, t, i, s, thv->stats->persec[s]);
	      if (s<thv->stats->pssize)
	      {
		ppsec[s-sec+xev->rwm->flushevery][i] +=  thv->stats->persec[s];
		thv->stats->persec[s]=0;
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
    rwlfree(xev->rwm, mysq );

    for (j=0; j<xev->rwm->flushevery; j++)
      rwlfree(xev->rwm, ppsec[j]);
    rwlfree(xev->rwm, ppsec);
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
      else
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

  // No search if begin with /
  if ('/' == buf[0] && 0==access( (char *) buf, R_OK))
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
    if (yuck<0 || yuck>=RWL_PATH_MAX) // mostly to shut up pedantic gcc
      rwlexecerror(xev, loc, RWL_ERROR_EXPANSION_TRUNCATED, xev->rwm->publicdir, buf);
      
    if (0==access( (char *) xev->namebuf,R_OK))
    {
      if (!bit(eeflags, RWL_ENVEXP_NOTCD) && 0==access( (char *) buf, R_OK))
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
      if (yuck<0 || yuck>=RWL_PATH_MAX) // mostly to shut up pedantic gcc
	rwlexecerror(xev, loc, RWL_ERROR_EXPANSION_TRUNCATED, pl->pathname, buf);
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
  if (failcode)
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

  vv = xev->evar + varnum;
  nn = rwlnuminvar(xev, vv);
  //
  // similar to the code for RWL_STACK_ASN in rwlexpreval.c
  switch (vv->vtype)
  {
    case RWL_TYPE_INT: 
    case RWL_TYPE_DBL: 
      nn = rwlnuminvar(xev, vv);
      if (RWL_SVALLOC_FIX != nn->vsalloc) //ASSERT buffer is allocated as expected
      {
	rwlexecsevere(xev, loc, "[rwlstr2var-notfix:%s;%d]", vv->vname, nn->vsalloc);
	return;
      }
      break;

    case RWL_TYPE_STR: 
      nn = rwlnuminvar(xev, vv);
      if (RWL_SVALLOC_NOT == nn->vsalloc)
	rwlinitstrvar(xev, nn);
      break;

    default:
      rwlexecsevere(xev, loc, "[rwlstr2var-badtype:%s;%d;%d]"
      , vv->vname, vv->vtype, varnum);
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
	snprintf((char *)nn->sval, nn->slen-1, xev->rwm->iformat, nn->ival);
	break;
      case RWL_TYPE_DBL: 
	snprintf((char *)nn->sval, nn->slen-1, xev->rwm->dformat, nn->dval);
	break;
      default: // prevent compile warning about missing enum
        break;
    }
  }
  nn->isnull = 0;
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

    vv = xev->evar + l;

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
        return 0;
    }

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

    vv = xev->evar + l;

    // Check variables, maybe initialize string
    switch (xev->evar[l].vtype)
    {
      case RWL_TYPE_INT: 
      case RWL_TYPE_DBL: 
        nn = rwlnuminvar(xev, vv);
	if (RWL_SVALLOC_FIX != nn->vsalloc) //ASSERT buffer is allocated as expected
	{
	  rwlexecsevere(xev, loc, "[rwlregex-notfix:%s;%d]", idl->idnam, nn->vsalloc);
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
        return;
    }

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

    vv = xev->evar + l;

    // Check variables, maybe initialize string
    switch (xev->evar[l].vtype)
    {
      case RWL_TYPE_INT: 
      case RWL_TYPE_DBL: 
        nn = rwlnuminvar(xev, vv);
	if (RWL_SVALLOC_FIX != nn->vsalloc) //ASSERT buffer is allocated as expected
	{
	  rwlexecsevere(xev, loc, "[rwlregexsubn-notfix:%s;%d]", idl->idnam, nn->vsalloc);
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
        return;
    }

    idl = idl->idnxt;
    idc++;
  }

  /*ASSERT*/
  if (idc<1)
  {
    rwlexecsevere(xev, loc, "[rwlregexsubn-badidc:%d]", idc);
    return;
  }

  match = rwlalloc(rwm, (idc+1) * sizeof(regmatch_t)); // match[0] is whole
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
  rwlfree(rwm, match);

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

  vv = xev->evar + idnum;
  
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
      return;
  }

  if (nn->slen <= 1)
  {
    rwlexecsevere(xev, loc, "[rwlregexsub-badlen:%s;%d;%d;%d]"
      , idnam, vv->vtype, idnum, nn->slen);
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
    rwlexecsevere(xev, loc, "[rwlregexsub-badlen:%s;%d;%d;%d]"
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
  regfree(&reg);

}

rwlcomp(rwlmisc_c, RWL_GCCFLAGS)
