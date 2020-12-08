/*
 * RWP*Load Simulator
 *
 * Copyright (c) 2020 Oracle Corporation
 * Licensed under the Universal Permissive License v 1.0
 * as shown at https://oss.oracle.com/licenses/upl/
 *
 * Real World performance Load simulator main
 *
 * rwlmain.c
 *
 * History
 *
 * bengsig  02-dec-2020 - Directory structure change
 * bengsig  17-sep-2020 - Add check for --publicsearch in second option scan
 * bengsig  04-sep-2020 - Add check for fscanf of M file; gcc warnings
 * bengsig  07-jul-2020 - Add help text for user options
 * bengsig  06-jul-2020 - Make sure $longoption:quiet is used
 * bengsig  29-may-2020 - Warn and cut too long komment
 * bengsig  19-may-2020 - RWLOADSIM_PATH etc
 * bengsig  15-may-2020 - $useroption etc
 * bengsig  15-apr-2020 - File reading
 * bengsig  14-apr-2020 - Clear username and password if provided on command line
 * bengsig  18-nov-2019 - Call OCIBreak in ctrl-c handler
 * bengsig  20-sep-2019 - terminate longopt array by zero entry
 * bengsig  12-aug-2019 - added oerstats
 * bengsig  23-aug-2019 - Conditional compilation
 * bengsig  xx-xxx-2017 - Creation
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <getopt.h>
#include <ctype.h>
#include <time.h>
#include <errno.h>

#include "rwl.h"

static const char * const options = "HGuB:O:rvSNQR:P:M:p:C:I:shqD:i:s:d:x:a:c:K:k:wel:A:F:ET:X:Y:WV" ;
static const char * const usage = "usage: rwloadsim [options | -h (for help)] file ... args ...\n";
static const char * const helptext =
"RWP*Load Simulator options:\n"
"-h | --help              : Print this help and any user help\n"
"-v | --version           : Print client version\n"
"-q | --quiet             : Be queit\n"
"-s   | --statistics      : Gather statistics\n"
"-ss  | --histograms      : .. and also histograms\n"
"-sss | --persecond       : .. and per second counts\n"
"-r | --oer-statistics    : Gather statistics about ORA- errors\n"
"-O | --oer-max-stats N   : Gather at most this many ORA- errors (default 50)\n"
"-Z | --flush-stop N      : Flush per second until N seconds\n"
"-U | --flush-every N     : Flush per second counts every N seconds\n"
"-D | --debug xxx         : Set debug bits (xxx are hex digits)\n"
"-i | --integer intspec   : Overwrite integer default value\n"
"-d | --double dblspec    : Overwrite double default value\n"
"-a | --arraysize N       : Set default array size for cursor loops\n"
"-c | --clockstart N.N\n"
"   | --startseconds N.N  : Clock starts this many seconds after program start (default 5.0)\n"
"-C | --codesize N        : Maximum number of Code entries\n"
"-I | --namecount N       : Maximum number of Identifers\n"
"-k | --key resKey        : Key string to be inserted in results tables\n"
"-K | --comment comment   : Set run comment\n"
"   | --komment comment   : The same speeled with k\n"
"-P | --prepare file      : Prepare multi process execution by writing Mstring to file\n"
"-M | --multirun-value\n"
"                 Mstring : Contents of multi process prepare file\n"
"-R | --multirun file     : Multi process execution by reading prepare file\n"
"-p | --procno procno     : Value for procno in runres\n"
"-l | --default-database\n"
"                   u/p@c : Create a datafault database (@c is optional)\n"
"-X | --default-max-pool N: Make the default database use session pool 1..N\n" 
"-Y | --default-min-pool M: Make the default database use session pool M..N\n" 
"-G | --default-reconnect : Make the default database use reconnect\n" 
"-w | --nowarn-deprecated : Do not warn when deprecated features are being used\n"
"-e | --compile-only      : Do not execute functions, procedures, threads and database\n"
"-A | --argument-count N  : Last N positional arguments become strings named $1, $2, etc\n"
"-F | --file-count N      : First N arguments are files, the rest are positional $1, $2, etc\n"
"-x | --execute-code code : Execute 'code' before reading first file\n"
"-S | --set-action        : Set procedure name as action when session is acquired\n"
"-SS | --set-action-reset : Reset action upon release; requires extra database roundtrip\n"
"-E | --event-notify      : Setup HA event notification\n"
"-Q | --queue             : Use backlog to simulatue queuing in control loops using \"every\"\n"
"-N | --no-queue          : Traditional behavior in control loops using \"every\"\n"
"-W | --errortime         : Include timestamp in seconds after start on execution errors\n"
"-V | --no-nameexpand     : Do not expand environment variables in file names\n"
"-u | --publicsearch      : Add public directory in addition to RWLOADSIM_PATH\n"
"-B | --readbuffer N      : Maximum line length for readfile\n"
"-T | --vi-tags file      : Create a vi tags file just before completion\n"
"-H | --userhelp          : Print help for useroption and userswitch\n"

;

#define RWL_NOLARG no_argument
#define RWL_HASARG required_argument

struct option rwllongoptions[] = {
  {"help",		RWL_NOLARG, 0, 'h' }
, {"userhelp",		RWL_NOLARG, 0, 'H' }
, {"queue",		RWL_NOLARG, 0, 'Q' }
, {"no-queue",		RWL_NOLARG, 0, 'N' }
, {"no-nameexpand",	RWL_NOLARG, 0, 'V' }
, {"quiet",		RWL_NOLARG, 0, 'q' }
, {"statistics",	RWL_NOLARG, 0, '1' } // not in ordinary options
, {"histograms",	RWL_NOLARG, 0, 'z' } // not in ordinary options
, {"persecond",		RWL_NOLARG, 0, 'y' } // not in ordinary options
, {"flush-every",	RWL_HASARG, 0, 'U' } 
, {"flush-stop",	RWL_HASARG, 0, 'Z' } 
, {"debug",		RWL_HASARG, 0, 'D' } 
, {"integer",		RWL_HASARG, 0, 'i' } 
, {"double",		RWL_HASARG, 0, 'd' } 
, {"arraysize",		RWL_HASARG, 0, 'a' } 
, {"readbuffer",	RWL_HASARG, 0, 'B' } 
, {"clockstart",	RWL_HASARG, 0, 'c' } 
, {"startseconds",	RWL_HASARG, 0, 'c' } 
, {"codesize",		RWL_HASARG, 0, 'C' } 
, {"namecount",		RWL_HASARG, 0, 'I' } 
, {"key",		RWL_HASARG, 0, 'k' } 
, {"comment",		RWL_HASARG, 0, 'K' } 
, {"komment",		RWL_HASARG, 0, 'K' } 
, {"prepare-file",	RWL_HASARG, 0, 'P' } 
, {"prepare-value",	RWL_HASARG, 0, 'M' } 
, {"multirun-file",	RWL_HASARG, 0, 'R' } 
, {"procno",		RWL_HASARG, 0, 'p' } 
, {"default-database",	RWL_HASARG, 0, 'l' } 
, {"default-min-pool",	RWL_HASARG, 0, 'Y' } 
, {"default-max-pool",	RWL_HASARG, 0, 'X' } 
, {"default-reconnect",	RWL_NOLARG, 0, 'G' } 
, {"nowarn-deprecated",	RWL_NOLARG, 0, 'w' } 
, {"compile-only",	RWL_NOLARG, 0, 'e' } 
, {"argument-count",	RWL_HASARG, 0, 'A' } 
, {"file-count",	RWL_HASARG, 0, 'F' } 
, {"execute-code",	RWL_HASARG, 0, 'x' } 
, {"event-notify",	RWL_NOLARG, 0, 'E' } 
, {"set-action",	RWL_NOLARG, 0, 'S' } 
, {"set-action-reset",	RWL_NOLARG, 0, '2' } 
, {"vi-tags",	        RWL_HASARG, 0, 'T' } 
, {"version",	        RWL_NOLARG, 0, 'v' } 
, {"verbose",	        RWL_NOLARG, 0, 'v' } 
, {"errortime",	        RWL_NOLARG, 0, 'W' } 
, {"oer-statistics",    RWL_NOLARG, 0, 'r' } 
, {"oer-max-stats",     RWL_HASARG, 0, 'O' } 
, {"publicsearch",      RWL_NOLARG, 0, 'u' }
, {0,     		0	  , 0, 0 } 
} ;

ub4 rwloptcount = sizeof(rwllongoptions)/sizeof(struct option);


sb4 main(sb4 main_ac, char **main_av) 
{
  rwl_main *rwm;
  rwl_xeqenv *mxq;
  sb4 opt, i;
  ub4 abeg;
  ub4 exitval;
  void *yyscanner;
  void *zzscanner;
  FILE *xfile;
  sb4 xx;
  ub4 normalhelp, anyhelp ;
  char *dotfil;
  struct option *lngopt;
  rwl_arglist *usrargl;
  text *arglfiln = 0;
  ub4 argoptcount;
  sb4 ac; char **av;

#ifdef NEVER
  for (i=0; i<main_ac; i++)
    puts(main_av[i]);
#endif
  

  /* various initializtions */
  rwm = calloc(1, sizeof(rwl_main));
  if (!rwm)
  {
    rwlsevere(0,"[rwlmain-nomemory]");
    exit (RWL_ERROR_SEVERE);
  }

  rwm_glob = rwm; // save also in global var for use in ctrl-c handler

  rwm->flushevery = RWL_FLUSH_EVERY_MIN;
  rwm->oermaxstat = RWL_MAX_OERCOUNT;

  mxq = rwlalloc(rwm, sizeof(rwl_xeqenv));
  rwlinitxeqenv(mxq);

  /* main thread has a pointer to its own thread 
   * and similar back to main 
   */
  rwm->mxq = mxq;
  mxq->rwm = rwm;

  rwm->dformat= RWL_DFORMAT_DEFAULT;
  rwm->iformat= RWL_IFORMAT_DEFAULT;

  /* tell the parsers about rwm and vice versa */
  rwlylex_init_extra(rwm, &yyscanner);
  rwm->rwlyscanner = yyscanner;
  rwlzlex_init_extra(rwm, &zzscanner);
  rwm->rwlzscanner = zzscanner;


  opterr = 0; /* do not print error in getop itself */

  // look very early for necessary options
  ac = main_ac;
  // getopt reorders, so we need a new copy:
  av = rwlalloc(rwm,(1+(ub4)ac)*sizeof (char *)); 
  for (i=0; i<main_ac; i++)
    av[i] = main_av[i];
  av[ac] = 0;

  /* first walk through arguments to get -D 
   * debug
   */
  while( -1 != (opt=getopt_long(ac,av,options, rwllongoptions, 0)))
  {
    switch(opt)
    {
      case 'D': /* add debug bit */
	rwm->mflags |= (ub4) strtol(optarg,0,16) & (RWL_DEBUG_MAIN|RWL_DEBUG_THREAD);
      break;

      case 'u': /* public search */
        bis(rwm->m2flags, RWL_P2_PUBLICSEARCH);
      break;

      case 'v': /* verbose or version */
        bis(rwm->m2flags, RWL_P2_VERBOSE);
      break;

      case 'W': /* Include error time */
        bis(rwm->m2flags, RWL_P2_ERRORWTIM);
      break;

      case 'q': /* quiet */
        bis(rwm->mflags, RWL_P_QUIET);
      break;
    }
  }
  rwlfree(rwm, av);
  optind = 1; /* to restart argument scan */

  rwlinit1(rwm, (text *)main_av[0]);

  OCIClientVersion( &rwm->cvrel, &rwm->cvupd
		  , &rwm->cvrev, &rwm->cvinc, &rwm->cvext);

  // before calling getopt for real
  // look for anything that looks like a real file
  // such that we can scan that file for $argument and $option
  for (i = 0;  i<main_ac; i++)
  {
    sb4 last4 = (sb4) strlen(main_av[i])-4;
    if (main_av[i][0] != '-' && last4 >= 1 && !strcmp(main_av[i]+last4,".rwl"))
    {
      // scan the first file first time to look for $arguments
      FILE *ffile;
      void *dummy;
      text *rfn = rwlenvexp1(rwm->mxq, 0, (text *)main_av[i], RWL_ENVEXP_PUBLIC | RWL_ENVEXP_PATH);
      int retv;
      bis(rwm->m2flags, RWL_P2_SCANFIRST|RWL_P2_SCANARG);
      
      if (rfn && (ffile = rwlfopen((char *)rfn, "r")))
      {
	arglfiln = rwlstrdup(rwm, (text *)main_av[i]);
	rwlyfileset(rwm, ffile, (char *)rfn);
	while ((retv=rwlalex((union YYSTYPE *)&dummy, rwm->rwlyscanner)))
	{
	  ; // do nothing, all is done in the lexer
	}
      }
      //else
	// rwlerror(rwm, RWL_ERROR_FILE_NOT_OPEN, main_av[i]);
      bic(rwm->m2flags, RWL_P2_SCANFIRST|RWL_P2_SCANARG);
      break;
    }
  }

  if (!bit(rwm->mflags, RWL_P_QUIET))
  {
    time_t tt;
    time(&tt);
    if (bit(rwm->m2flags, RWL_P2_VERBOSE))
	printf("\nRWP*Load Simulator Release %d.%d.%d.%d %s using client %d.%d on %s\n"
      , RWL_VERSION_MAJOR
      , RWL_VERSION_MINOR
      , RWL_VERSION_RELEASE
      , rwlpatch
      , RWL_VERSION_TEXT
      , RWL_OCI_VERSION, RWL_OCI_MINOR
      , ctime(&tt));
    else
      printf("\nRWP*Load Simulator Release %d.%d.%d.%d %s on %s\n"
      , RWL_VERSION_MAJOR
      , RWL_VERSION_MINOR
      , RWL_VERSION_RELEASE
      , rwlpatch
      , RWL_VERSION_TEXT
      , ctime(&tt));

    if (RWL_OCI_VERSION != rwm->cvrel || RWL_OCI_MINOR != rwm->cvupd)
    {
      rwlerror(rwm, RWL_ERROR_CLIENT_MISMATCH
      		, RWL_OCI_VERSION, RWL_OCI_MINOR, rwm->cvrel, rwm->cvupd);
    }
  }

  usrargl = rwm->usrargl;
  argoptcount = 0;
  while (usrargl)
  {
    argoptcount++;
    if (bit(usrargl->argflags, RWL_USER_ARG_NOARG))
      argoptcount++;
    usrargl = usrargl->nextarg;
  }

  if (argoptcount)
  {
    // user wants options, add them
    ub4 uuu;
    lngopt = rwlalloc(rwm, sizeof(struct option) * (rwloptcount + argoptcount));
    memcpy(lngopt, rwllongoptions, sizeof(struct option) * rwloptcount);
    usrargl = rwm->usrargl;
    uuu = rwloptcount-1; // The last is a zero entry
    while (usrargl)
    {
      lngopt[uuu].name = (char *) usrargl->argname;
      lngopt[uuu].val  = (int) (RWL_USER_ARG_OFFSET + uuu + 1 - rwloptcount);
      if (bit(usrargl->argflags, RWL_USER_ARG_NOARG))
      { // add both the option and --no-option
	char *noarg = rwlalloc(rwm, rwlstrlen(usrargl->argname) + 4 /*sizeof("no-") and nul*/);
	lngopt[uuu].has_arg  = RWL_NOLARG;
	uuu++;
	strcpy(noarg, "no-");
	strcpy(noarg+3, (char *)usrargl->argname);
	lngopt[uuu].name = noarg;
	lngopt[uuu].val  = (int) (RWL_USER_ARG_OFFSET + uuu + 1 - rwloptcount);
	lngopt[uuu].has_arg  = RWL_NOLARG;
      }
      else
	lngopt[uuu].has_arg  = RWL_HASARG;
      uuu++;

      usrargl = usrargl->nextarg;
    }
  }
  else
    lngopt = rwllongoptions;


  if (rwm->lngargl)
  {
    // there are arguments from first rwl file
    rwl_arglist *arp;
    sb4 a, llc = 0;
    // count them
    arp = rwm->lngargl;
    while (arp)
    {
      llc++;
      arp = arp->nextarg;
    }
    ac = main_ac + llc;
    av = rwlalloc(rwm, (1 + (ub4)ac) * (sizeof(char *)));
    av[0] = main_av[0];
    // and add them at positions 1 .. llc
    a = llc;
    arp = rwm->lngargl;
    while (arp)
    {
      av[a] = (char *)arp->argname; // -- was added in rwlarglex.l
      arp = arp->nextarg;
      a--;
    }
    // and copy all those from main
    for (a=1; a<main_ac; a++)
      av[a+llc] = main_av[a];
  }
  else
  {
    ac = main_ac;
    av = main_av;
  }
 
  // This hack depends on the fact that getopt_long prints 
  // av[0] on stderr in front of any error messages
  // We really should implement own getopt processing
  av[0] = "RWL-111: error";
  optind = 1; /* to restart argument scan */
  opterr = 1; /* and now print errors */
  /* first walk through arguments to get values
   * that must be known when rwlinit is called
   */
  while( -1 != (opt=getopt_long(ac,av,options, lngopt, 0)))
  {
    switch(opt)
    {
      case 'W': /* Include error time */
        bis(rwm->m2flags, RWL_P2_ERRORWTIM);
      break;

      case 'u': /* public search */
        bis(rwm->m2flags, RWL_P2_PUBLICSEARCH);
      break;

      case 'A': 
	rwm->posargs = (ub4) atoi(optarg);
      break;

      case 'S': /* use --set-action */
        if (bit(rwm->m2flags, RWL_P2_SETACTION))
	  bis(rwm->m2flags, RWL_P2_SETACTRESET);
	else
	  bis(rwm->m2flags, RWL_P2_SETACTION);
      break;

      case '2': /* --set-action-reset */
	bis(rwm->m2flags, RWL_P2_SETACTRESET | RWL_P2_SETACTION);
      break;

      case 'E': /* Event notification */
        bis(rwm->m2flags, RWL_P2_EVTNOTIF);
      break;

      case 'F': 
	rwm->fileargs = (ub4) atoi(optarg);
      break;

      case 'C': 
	rwm->maxcode = (ub4) atoi(optarg);
      break;

      case 'I': 
	rwm->maxident = (ub4) atoi(optarg);
      break;

      case 'K': 
        {
	  ub4 klen ;
	  rwm->komment = optarg;
	  if ((klen=(ub4)strlen(rwm->komment)) > RWL_MAX_KOMMENT)
	  {
	    rwlerror(rwm, RWL_ERROR_KOMMENT_TOO_LONG, klen, RWL_MAX_KOMMENT);
	    rwm->komment[RWL_MAX_KOMMENT] = 0;
	  }
	  bis(rwm->m2flags, RWL_P2_KKSET);
	}
      break;

      case 'B': /* maximum readline line */
	rwm->maxreadlen = (ub4) atoi(optarg);
      break;

      case 'k': 
	rwm->reskey = optarg;
	bis(rwm->m2flags, RWL_P2_KKSET);
      break;

    }
  }

  rwlinit2(rwm, (text *)main_av[0]);

  /* read either $RWLOADSIMRC or $HOME/.rwloadsim.rwl */
  if ((dotfil=getenv("RWLOADSIMRC")))
    rwlinitdotfile(rwm, dotfil, 1 /*must exist*/ );
  else
  {
    char *home = getenv("HOME");
    if (home)
    {
      dotfil = rwlalloc(rwm,strlen(home)+strlen("/.rwloadsim.rwl")+1);
      sprintf(dotfil,"%s/.rwloadsim.rwl", home);
      rwlinitdotfile(rwm, dotfil, 0 /* not exist is OK */);
      rwlfree(rwm, dotfil);
    }
  }

  rwm->loc.fname = "\"program startup\"";
  rwm->loc.lineno = rwm->loc.errlin = 0;

  if (!rwm->maxcode) rwm->maxcode = RWL_MAX_CODE;
  if (!rwm->maxident) rwm->maxident = RWL_MAX_VAR;
  if (!rwm->maxreadlen) rwm->maxreadlen = RWL_MAXREADLEN;

  rwm->code = rwlalloc(rwm, rwm->maxcode*sizeof(rwl_code));
  bis(rwm->mflags, RWL_P_ONLYMAINTH); /* write to rwm allowd */

  mxq->evar = rwlalloc(rwm, rwm->maxident*sizeof(rwl_identifier));

  if (!rwm->fileargs && !rwm->posargs)
  { 
    // If user didn't specify these counts, see if there is an "--" or ";" marker
    for (abeg=1, i=optind; i < ac; abeg++, i++)
    {
      if (0==strcmp(av[i],"--") || 0==strcmp(av[i],";"))
      {
        rwm->fileargs = abeg;
	break;
      }
    }
  }

  if (rwm->fileargs)
  {
    if (rwm->posargs) 
      rwlerror(rwm, RWL_ERROR_BOTH_F_AND_A_FLAG);
    if ((ub4)(ac-optind) < rwm->fileargs)
    {
      rwlerror(rwm, RWL_ERROR_NOT_ENOUGH_ARGUMENTS);
      goto errorexit;
    }
    else
      rwm->posargs = (ub4) (ac - optind) - rwm->fileargs;
  }

  rwlinit3(rwm);
#ifdef NEVER
  if (bit(rwm->mflags, RWL_DEBUG_MISC))
  {
    rwldebug(rwm, "sizeof(rwl_main)=%d, sizeof(rwl_xeqenv)=%d\n", sizeof(rwl_main), sizeof(rwl_xeqenv));
  }
#endif


  mxq->defasiz = RWL_DEFASIZ;

  if (!rwlinitoci(rwm))
    goto errorexit;

  if ((sb4) rwm->posargs+optind > ac)
  {
    rwlerror(rwm, RWL_ERROR_NOT_ENOUGH_ARGUMENTS);
    goto errorexit;
  }


  /* find positional arguments */
  for (abeg=1, i=ac - (sb4) rwm->posargs; i < ac ; abeg++, i++)
  {
    sb4 vno;
    ub8 len;
    rwl_value *dv;
    text dollar[10]; // arg name $1, $2, etc
    snprintf((char *)dollar,sizeof(dollar)-1, "$%d", abeg);
    len = strlen(av[i])+1; // length including null
    rwm->ival = (sb8) len;
    vno = rwladdvar(rwm, rwlstrdup(rwm, dollar), RWL_TYPE_STR, RWL_IDENT_INTERNAL);
    if (vno<0)
      rwlsevere(rwm,"[rwlmain-dollarvar:%s;%d]", dollar, vno);
    else
    {
      if (1 == abeg)
        rwm->mxq->arg1var = vno;
      dv = &rwm->mxq->evar[vno].num;
      rwlinitstrvar(rwm->mxq, dv);
      dv->ival = rwlatosb8((text *)av[i]);
      dv->dval = rwlatof((text *)av[i]);
      rwlstrnncpy(dv->sval, (text *)av[i], len);
    }

  }

  xfile = 0; /* Use a temporary file for i,d,x options */
  opterr = 0; /* don't print error in getopt */

  /* do the full option parse */
  optind = 1; /* to restart argument scan */
  anyhelp = normalhelp = 0; /* help? */
  while( -1 != (opt=getopt_long(ac,av,options, lngopt, 0)))
  {
    switch(opt)
    {
      case 's': /* stats - repeat for also histograms */
        if (bit(rwm->mflags, RWL_P_HISTOGRAMS))
	{
	  bis(rwm->mflags, RWL_P_PERSECSTAT);
	}
        if (bit(rwm->mflags, RWL_P_STATISTICS))
	{
	  bis(rwm->mflags, RWL_P_HISTOGRAMS);
	  rwm->histbucks = RWL_MAX_HIST_BUCK;
	}
      /*FALLTHROUGH*/
      case '1': /* stats from long optoins */
        bis(rwm->mflags, RWL_P_STATISTICS);
      break;

      case 'z': /* --histograms */
        bis(rwm->mflags, RWL_P_STATISTICS | RWL_P_HISTOGRAMS);
	rwm->histbucks = RWL_MAX_HIST_BUCK;
      break;

      case 'O': /* --oer-max-statistics */
	rwm->oermaxstat = (sb4) atoi(optarg);
      break;

      case 'r': /* --oer-statistics */
        bis(rwm->mflags, RWL_P_STATISTICS);
        bis(rwm->m2flags, RWL_P2_OERSTATS);
      break;

      case 'y': /* --persecond */
        bis(rwm->mflags, RWL_P_STATISTICS | RWL_P_PERSECSTAT);
      break;

      case 'N': /* Better queue simulation */
        bic(rwm->m2flags, RWL_P2_QUEUE);
      break;

      case 'Q': /* Better queue simulation */
        bis(rwm->m2flags, RWL_P2_QUEUE);
      break;

      case 'V': // do not use environment expansion in file names
        bis(rwm->m2flags, RWL_P2_NOENVEXPAND);
      break;

      case 'e': /* no execution */
        bis(rwm->m2flags, RWL_P2_NOEXEC);
      break;

      case 'w': /* quiet about deprecated code */
        bis(rwm->m2flags, RWL_P2_NOWARNDEP);
      break;

      case 'q': /* quiet */
        bis(rwm->mflags, RWL_P_QUIET);
      break;

      case 'Z': // --flush-stop
	{
	  int tmp = atoi(optarg);
	  if (tmp<RWL_FLUSH_STOP_MIN) 
	    rwlerror(rwm, RWL_ERROR_FLUSH_STOP_LOW, RWL_FLUSH_STOP_MIN);
	  else
	  {
	    rwm->flushstop = (ub4) tmp; 
	    bis(rwm->mflags, RWL_P_STATISTICS | RWL_P_PERSECSTAT);
	  }
	}
      break;

      case 'U': // --flush-every
	{
	  int tmp = atoi(optarg);
	  if (tmp<1) 
	    rwlerror(rwm, RWL_ERROR_FLUSH_EVERY_LOW, 1);
	  else
	    rwm->flushevery = (ub4) tmp;
	}
      break;

      case 'c': /* default clock offset */
	rwm->adjepoch = atof(optarg);
      break;

      case 'p': /* set procno */
	rwm->procno = (ub8) rwlatosb8(optarg);
      break;

      case 'a': /* default array size */
	mxq->defasiz = (ub4) atoi(optarg);
      break;

      case 'd': /* add double variable */
	if (!xfile) /* open temp file if not already open */
	{
	  if (!(xfile = tmpfile()))
	  {
	    rwlerror(rwm, RWL_ERROR_CANNOT_CREATE_TEMPFILE);
	    goto errorexit;
	  }
	}
	fprintf(xfile, "double %s;\n", optarg);
      break;

      case 'i': /* add integer variable */
	if (!xfile) /* open temp file if not already open */
	{
	  if (!(xfile = tmpfile()))
	  {
	    rwlerror(rwm, RWL_ERROR_CANNOT_CREATE_TEMPFILE);
	    goto errorexit;
	  }
	}
	fprintf(xfile, "integer %s;\n", optarg);
      break;

      case 'x': /* execute something */
	if (!xfile) /* open temp file if not already open */
	{
	  if (!(xfile = tmpfile()))
	  {
	    rwlerror(rwm, RWL_ERROR_CANNOT_CREATE_TEMPFILE);
	    goto errorexit;
	  }
	}
	fprintf(xfile, "%s\n", optarg);
      break;

      case 'l':
        {
	  text *pw, *cs;
	  sb4 ld;
	  
	  ld = rwladdvar(rwm, RWL_DEFAULT_DBNAME, RWL_TYPE_DB, 0)
	  if (ld>=0)
	  {
	    ub8 blanklen;
	    // fill in the fields that make this the default and make it dedicated
	    rwm->dbsav = (rwl_cinfo *) rwlalloc(rwm, sizeof(rwl_cinfo));
	    rwm->defdb = rwm->dbname = rwm->dbsav->vname = RWL_DEFAULT_DBNAME;
	    rwm->dbsav->pooltext = "unset";
	    rwm->dbsav->cclass = (text *)RWL_DEFAULT_CCLASS; 
	    rwm->dbsav->stmtcache = RWL_DEFAULT_STMTCACHE;
	    rwm->defdb = rwm->dbname = RWL_DEFAULT_DBNAME;
	    rwm->mxq->evar[ld].vdata = rwm->dbsav;
	    cs = (text *)strchr(optarg,'@');
	    if (cs)
	    {
	      rwm->dbsav->connect = rwlstrdup(rwm, cs+1);
	      *cs=0;
	    }
	    pw = (text *)strchr(optarg,'/');
	    if (pw)
	    {
	      rwm->dbsav->password = rwlstrdup(rwm, pw+1);
	      // clear / and password
	      blanklen = rwlstrlen(pw) + 1;
	      memset(pw,0,blanklen);
	    }
	    rwm->dbsav->username = rwlstrdup(rwm, (text *)optarg);
	    // clear username
	    blanklen = strlen(optarg);
	    memset(optarg,0,blanklen);
	    bis(rwm->m2flags, RWL_P2_LOPTDEFDB);
	    // WAS HERE: rwlbuilddb(rwm);
	  }
	}
	break;

      case 'G': /* default db reconnect */
        bis(rwm->mflags,RWL_P_DEFRECONN);
      break;

      case 'X': /* default db is pooled */
        rwm->argX = (ub4) atoi(optarg);
      break;

      case 'Y': 
        rwm->argY = (ub4) atoi(optarg);
      break;

      case 'T': /* vi tags file createion */
	rwm->vitagsfile = optarg;
      break;

      case 'P': /* Prepare multi process */
	if (bit(rwm->mflags, RWL_P_MEXECUTE))
	  rwlerror(rwm, RWL_NOT_PREPARE_AND_EXECUTE_MULTI);
	else
	{
          bis(rwm->mflags, RWL_P_MPREPARE);
	  rwm->Mname = optarg;
	}
      break;

      case 'R': /* Run multi process execute */
	if (bit(rwm->mflags, RWL_P_MPREPARE))
	  rwlerror(rwm, RWL_NOT_PREPARE_AND_EXECUTE_MULTI);
	else
        {
	  text *rfn = rwlenvexp(rwm->mxq, 0, (text *)optarg);
	  FILE *rfile;
	  if (!rfn || !(rfile=rwlfopen(rfn,"r")))
	  {
	    //char etxt[100];
	    //if (0!=strerror_r(errno, etxt, sizeof(etxt)))
	    //  strcpy(etxt,"unknown");
	    rwlerror(rwm, RWL_ERROR_FILE_NOT_OPEN, rfn/*, etxt*/);
	  }
	  else
	  {
	    int q;
	    double x = 0.0;
	    bis(rwm->mflags, RWL_P_MEXECUTE);
	    if (2 !=  (q=fscanf(rfile, RWL_MFLAG_FORMAT,&rwm->runnumber, &x)))
	      rwlsevere(rwm,"[rwlmain-mexbadscan:%s;%d]", rfn, q);
	    rwm->adjepoch = x - rwlsinceepoch(rwm);
	    (void) fclose(rfile);
	    rwlgetrunnumber(rwm); // to set the value into the variable
	  }
	}
	break;

      case 'M': /* Multi process execute */
	if (bit(rwm->mflags, RWL_P_MPREPARE))
	  rwlerror(rwm, RWL_NOT_PREPARE_AND_EXECUTE_MULTI);
	else
        {
	  double x = 0.0;
	  bis(rwm->mflags, RWL_P_MEXECUTE);
	  sscanf(optarg, RWL_MFLAG_FORMAT,&rwm->runnumber, &x);
	  rwm->adjepoch = x - rwlsinceepoch(rwm);
	  rwlgetrunnumber(rwm); // to set the value into the variable
	}
	break;

      case 'h':
        normalhelp++;
	// fall thru
      case 'H':
        anyhelp++;
      break;

      case '?':
	fputs(usage, stderr);
	exit(1);
      break;

      default:
        if (opt>=RWL_USER_ARG_OFFSET)
	{
	  text *oo;
	  oo = (text *) lngopt[(ub4)opt - RWL_USER_ARG_OFFSET - 1 + rwloptcount].name;
	  // find it and add the value
	  usrargl = rwm->usrargl;
	  while (usrargl)
	  {
	    if (!rwlstrcmp(usrargl->argname, oo))
	    {
	      // name match
	      if (bit(usrargl->argflags,RWL_USER_ARG_NOARG))
	        usrargl->argvalue = (text *)"1";
	      else
	        usrargl->argvalue = (text *)optarg;
	      break;
	    }
	    else if (   !strncmp((char *)oo,"no-",3) 
	             && !rwlstrcmp(oo+3,usrargl->argname)
		     && bit(usrargl->argflags,RWL_USER_ARG_NOARG))
	    {
	      usrargl->argvalue = (text *)"0";
	      break;
	    }

	    usrargl = usrargl->nextarg;
	  }
	  if (usrargl->argvalue && (bit(rwm->mflags, RWL_DEBUG_MISC)))
	  {
	      rwldebug(rwm, "%s := %s" , oo , usrargl->argvalue);
	  }
	}
      break;
        
    }
  }

  if (anyhelp)
  {
    if (normalhelp)
      puts(helptext);
    // and print the user argument help texts
    usrargl = rwm->usrargl;
    if (usrargl && arglfiln)
      printf("RWP*Load Simulator user options from %s:\n", arglfiln);
    while (usrargl)
    {
      puts((char *)usrargl->arghelp);
      usrargl = usrargl->nextarg;
    }
    exit(0);
  }
  
  mxq->tflags = rwm->mflags | RWL_P_ISMAIN;

  if (bit(rwm->m2flags, RWL_P2_LOPTDEFDB))
  {
    if (rwm->argX)
    {
      rwm->dbsav->poolmax = rwm->argX;
      if (rwm->argY)
	rwm->dbsav->poolmin = rwm->argY;
      else
	rwm->dbsav->poolmin = 1;
      rwm->dbsav->pooltype = RWL_DBPOOL_SESSION;
      rwm->dbsav->pooltext = "sessionpool";
      if (bit(rwm->mflags, RWL_P_DEFRECONN))
        rwlerror(rwm, RWL_ERROR_DBPOOL_ALREADY);
        
    }
    else
    {
      if (rwm->argY)
        rwlerror(rwm, RWL_ERROR_ONLY_POOL_MIN_SET);
      if (bit(rwm->mflags, RWL_P_DEFRECONN))
      {
	rwm->dbsav->pooltype = RWL_DBPOOL_RECONNECT;
	rwm->dbsav->pooltext = "reconnect";
      }
      else
      {
	rwm->dbsav->pooltype = RWL_DBPOOL_DEDICATED;
	rwm->dbsav->pooltext = "dedicated";
      }
    }
    rwlbuilddb(rwm);
  }

  /* check various parameters */
  if (bit(rwm->mflags, RWL_DEBUG_ALLOWHACK))
  {
    rwlerror(rwm, RWL_ERROR_HACK_ALLOWED);
  }

  if (bit(rwm->mflags, RWL_P_MEXECUTE) 
      && bit(rwm->m2flags, RWL_P2_KKSET))
    rwlerror(rwm, RWL_ERROR_KK_NOT_USEFUL);

  if (rwm->adjepoch <0.0)
  {
    rwlerror(rwm, RWL_ERROR_CLOCKOFF_NEGATIVE, rwm->adjepoch);
    rwm->adjepoch = 0.0;
  }
  if (rwm->adjepoch >600.0)
  {
    rwlerror(rwm, RWL_ERROR_CLOCKOFF_UNREASONABLE, rwm->adjepoch, 600.0);
    rwm->adjepoch = RWL_DEFAULT_ADJ_EPOCH;
  }

  /* do we have a temp file from arguments */
  if (xfile)
  {
    if (bit(mxq->errbits,RWL_ERROR_SEVERE))
      goto endparse;
    /* read the file via the parser */
    fflush(xfile);
    rewind(xfile);
    rwlyfileset(rwm, xfile, "command line");
    /* allow overwrite of default values */
    bis(rwm->addvarbits, RWL_IDENT_COMMAND_LINE);
    xx=rwlyparse(rwm);
    if (rwm->ifdirdep)
      rwlerror(rwm, RWL_ERROR_DIRIF_NOT_FINISH
      , rwm->ifdirloc.fname, rwm->ifdirloc.lineno);
    if (xx) /* if incomplete, report error */
      rwlerror(rwm, RWL_ERROR_PREMATUREEND);
    /* stop overwrite defaults */
    bic(rwm->addvarbits, RWL_IDENT_COMMAND_LINE);
  }

  if (optind>=ac - (sb4)rwm->posargs)
    rwlerror(rwm, RWL_ERROR_NO_INPUT);
  /* parse all real input files */
  for (abeg=1, i=optind; i < (ac - (sb4)rwm->posargs); abeg++, i++)
  {
    if (bit(mxq->errbits,RWL_ERROR_SEVERE))
      goto endparse;
    if (!strcmp(av[i],"-"))
      rwlerror(rwm, RWL_ERROR_NO_STDIN);
    else if (strcmp(av[i],"--")&&strcmp(av[i],";")) // Just ignore -- and ;
    { 
      if (0==strncmp(av[i],"-x",2))
      {
        if (av[i][2])
	{
	  if (!(xfile = tmpfile()))
	    rwlerror(rwm, RWL_ERROR_CANNOT_CREATE_TEMPFILE);
	  else
	  {
	    char cla[20];
	    fprintf(xfile, "%s\n", av[i]+2);
	    /* read the file via the parser */
	    fflush(xfile);
	    rewind(xfile);
	    snprintf(cla, sizeof(cla), "argument %d", abeg);
	    rwlyfileset(rwm, xfile, cla);
	    /* allow overwrite of default values */
	    bis(rwm->addvarbits, RWL_IDENT_COMMAND_LINE);
	    xx=rwlyparse(rwm);

	    // check $if is matched
	    if (rwm->ifdirdep)
	      rwlerror(rwm, RWL_ERROR_DIRIF_NOT_FINISH
	      , rwm->ifdirloc.fname, rwm->ifdirloc.lineno);
	    if (xx) /* if incomplete, report error */
	      rwlerror(rwm, RWL_ERROR_PREMATUREEND);
	    /* stop overwrite defaults */
	    bic(rwm->addvarbits, RWL_IDENT_COMMAND_LINE);
	  }
	}
	else
	  rwlerror(rwm, RWL_ERROR_MISSING_X_ARG, abeg);
      }
      else
      { 
	text *rfn = rwlenvexp1(rwm->mxq, 0, (text *)av[i], RWL_ENVEXP_PUBLIC|RWL_ENVEXP_PATH);
	if (!rfn || !(xfile = rwlfopen((char *)rfn, "r")))
	  rwlerror(rwm, RWL_ERROR_FILE_NOT_OPEN, (text *)av[i]);
	else
	{
	  /* tell lexer about the file name */
	  rwlyfileset(rwm, xfile, (char *)rfn);
	  if (i==optind) // is this the first file being rescanned?
	    bis(rwm->m2flags, RWL_P2_SCANFIRST);
	  xx=rwlyparse(rwm); // to go into parse, use this tag: rwpload
	  
	  // check $if is matched
	  if (rwm->ifdirdep)
	    rwlerror(rwm, RWL_ERROR_DIRIF_NOT_FINISH
	    , rwm->ifdirloc.fname, rwm->ifdirloc.lineno);
	  if (xx)
	  {
	    rwm->loc.errlin = rwm->loc.lineno-1;
	    rwlerror(rwm, RWL_ERROR_PREMATUREEND);
	  }
	  bic(rwm->m2flags, RWL_P2_SCANFIRST);
	}
      }
    }
  }
endparse:
  rwlylex_destroy(yyscanner);
  rwlzlex_destroy(zzscanner);

  if (bit(rwm->mflags, RWL_P_MPREPARE))
  {
    /* prepare for multi process run */
    if (rwm->resdb)
    {
      text *rfn = rwlenvexp(rwm->mxq, 0, (text *)rwm->Mname);
      FILE *Mfile = rwlfopen(rfn,"w");

      if (Mfile)
      {
        rwlgetrunnumber(rwm);
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
    }
    else
    {
      rwlerror(rwm, RWL_ERROR_NO_STATS_WITHOUT_RESDB);
    }
  }

  // Verify user arguments have been used
  usrargl = rwm->usrargl;
  while (usrargl)
  {
    if (!bit(usrargl->argflags,RWL_USER_ARG_USED))
      rwlerror(rwm, RWL_ERROR_ARGUMENT_NOT_USED, usrargl->argname);
    usrargl = usrargl->nextarg;
  }

  if (rwm->vitagsfile)
    rwlvitags(rwm);
  
errorexit:
  /* flush and free ora errors */
  if (mxq->oerhead)
  {
    rwl_oerstat *ost;
    if (rwm->resdb)
      rwloerflush(mxq);
    else
      rwlerror(rwm, RWL_ERROR_NO_STATS_WITHOUT_RESDB);
    while (mxq->oerhead)
    {
      ost = mxq->oerhead;
      mxq->oerhead = mxq->oerhead->nxtoes;
      rwlfree(rwm, ost);
    }
    mxq->oertail = 0;
  }
  /* free resources and ext */ 
  rwlreleaseallvars(mxq);
  rwlfree(rwm, mxq->evar);
  rwlfinishoci(rwm);
  rwlfree(rwm, rwm->code);
  exitval=mxq->errbits;
  if (  RWL_SVALLOC_NOT != mxq->xqnum2.vsalloc
     && RWL_SVALLOC_CONST != mxq->xqnum2.vsalloc
     )
    rwlfree(rwm, mxq->xqnum2.sval);
  if (  RWL_SVALLOC_NOT != mxq->xqnum.vsalloc
     && RWL_SVALLOC_CONST != mxq->xqnum.vsalloc
     )
    rwlfree(rwm, mxq->xqnum.sval);
  rwlfree(rwm, mxq);
  free(rwm);

  /* return the bit severity values */
  exit(exitval&RWL_EXIT_ERRORS);
}

rwlcomp(rwlmain_c, RWL_GCCFLAGS)


