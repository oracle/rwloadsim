/*
 * RWP*Load Simulator
 *
 * Copyright (c) 2021 Oracle Corporation
 * Licensed under the Universal Permissive License v 1.0
 * as shown at https://oss.oracle.com/licenses/upl/
 *
 * Real World performance Load simulator main
 *
 * rwlmain.c
 *
 * History
 *
 * bengsig  28-jun-2022 - Generate project
 * bengsig  26-apr-2022 - user args may be missing after exit
 * bengsig  31-mar-2022 - Main has default database if dedicated
 * bengsig  24-nov-2021 - $dbfailures directive
 * bengsig  23-nov-2021 - Make sure processnumber always has a value
 * bengsig  22-nov-2021 - Add architecture text
 * bengsig  19-jul-2021 - Gcc 8 sign warning
 * bengsig  21-jun-2021 - Improve error messaging on file
 * bengsig  15-jun-2021 - Add --default-threads-dedicated option
 * bengsig  27-apr-2021 - Properly handle first file not found
 * bengsig  22-mar-2021 - Fix options
 * bengsig  01-mar-2021 - Allow yydebug via -D 0x4
 * bengsig  08-feb-2021 - treat rwlstopnow like RWL_P3_USEREXIT
 * bengsig  20-jan-2021 - connection pool
 * bengsig  13-jan-2021 - Banner shows UTC unless -t option
 * bengsig  04-jan-2021 - add -L --localnames
 * bengsig  21-dec-2020 - Parfait
 * bengsig  16-dec-2020 - move client mismatch error to allow $mute
 * bengsig  16-dec-2020 - exit
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

static const char * const options =
  "A:B:C:D:EF:GHI:K:L:M:NO:P:QR:ST:U:VWX:Y:Z:a:c:d:eghi:k:l:p:qrss:tuvwx:";
static const char * const usage = "usage: rwloadsim [options | -h (for help)] file ... args ...\n";
static const char * const helptext =
"RWP*Load Simulator options:\n"
"-h | --help              : Print this help and any user help\n"
"-v | --version           : Print client version\n"
"-q | --quiet             : Be queit\n"
#ifndef RWL_GEN_EXEC
"-s   | --statistics      : Gather statistics\n"
"-ss  | --histograms      : .. and also histograms\n"
"-sss | --persecond       : .. and per second counts\n"
"-r | --oer-statistics    : Gather statistics about ORA- errors\n"
"-O | --oer-max-stats N   : Gather at most this many ORA- errors (default 50)\n"
"-Z | --flush-stop N      : Flush per second until N seconds\n"
"-U | --flush-every N     : Flush per second counts every N seconds\n"
"-i | --integer intspec   : Overwrite integer default value\n"
"-d | --double dblspec    : Overwrite double default value\n"
"-k | --key resKey        : Key string to be inserted in results tables\n"
"-K | --comment comment   : Set run comment\n"
"   | --komment comment   : The same speeled with k\n"
"-P | --prepare file      : Prepare multi process execution by writing Mstring to\n"
"                           file\n"
"-M | --multirun-value\n"
"                 Mstring : Contents of multi process prepare file\n"
"-R | --multirun file     : Multi process execution by reading prepare file\n"
"-p | --procno procno     : Value for procno in runres\n"
"-x | --execute-code code : Execute 'code' before reading first file\n"
"-S | --set-action        : Set procedure name as action when session is acquired\n"
"-SS | --set-action-reset : Reset action upon release; requires extra database\n"
"                           roundtrip\n"
#endif
"-c | --clockstart N.N\n"
"   | --startseconds N.N  : Clock starts this many seconds after program start\n"
"                           (default 5.0)\n"
"-D | --debug xxx         : Set debug bits (xxx are hex digits)\n"
"-a | --arraysize N       : Set default array size for cursor loops\n"
"-C | --codesize N        : Maximum number of Code entries\n"
"-I | --namecount N       : Maximum number of Identifers\n"
"-L | --localnames N      : Maximum number of Local identifers per\n"
"                           procedure/function\n"
"-l | --default-database\n"
"                   u/p@c : Create a datafault database (@c is optional)\n"
"-X | --default-max-pool N: Make the default database use session pool 1..N\n" 
"-Y | --default-min-pool M: Make the default database use session pool M..N\n" 
"-g | --default-threads-dedicated\n"
"                         : Make the default database use threads dedicated\n" 
"-G | --default-reconnect : Make the default database use reconnect\n" 
"-A | --argument-count N  : Last N positional arguments become strings named\n"
"                           $1, $2, etc\n"
"-F | --file-count N      : First N arguments are files, the rest are positional\n"
"                           $1, $2, etc\n"
"-E | --event-notify      : Setup HA event notification\n"
"-Q | --queue             : Use backlog to simulatue queuing in control loops\n"
"                           using \"every\"\n"
"-N | --no-queue          : Traditional behavior in control loops using \"every\"\n"
"-W | --errortime         : Include timestamp in seconds after start on execution\n"
"                           errors\n"
"-V | --no-nameexpand     : Do not expand environment variables in file names\n"
"-B | --readbuffer N      : Maximum line length for readfile\n"
"-t | --banner-local      : Time in banner is local in stead of UTC\n"
#ifndef RWL_GEN_EXEC
"-w | --nowarn-deprecated : Do not warn when deprecated features are being used\n"
"-e | --compile-only      : Compile only, check for syntax errors and missing\n"
"                           declarations\n"
"-u | --publicsearch      : Add public directory in addition to RWLOADSIM_PATH\n"
"-T | --vi-tags file      : Create a vi tags file just before completion\n"
"     --generate=filename : Generate a single script binary\n"
"     --generate-name name\n"
"                         : Use name as the generated name rather than last\n"
"                           pathname in binary\n"
"     --generate-command command\n"
"                         : Use an alternative command to generate executable\n"
"     --generate-banner banner\n"
"                         : Provide an alternative banner for the generated\n"
"                           exeuctable\n"
"     --generate-directory directory\n"
"                         : Use the specified directory to save the generated\n"
"                           C source\n"
#endif
"-H | --userhelp          : Print help for useroption and userswitch\n"
"     --fullhelp          : Print full help in generated binary\n"

;

#define RWL_NOLARG no_argument
#define RWL_HASARG required_argument

struct option rwllongoptions[] = {
  {"help",		RWL_NOLARG, 0, 'h' }
, {"userhelp",		RWL_NOLARG, 0, 'H' }
, {"queue",		RWL_NOLARG, 0, 'Q' }
, {"no-queue",		RWL_NOLARG, 0, 'N' }
, {"banner-local",	RWL_NOLARG, 0, 't' }
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
, {"localnames",	RWL_HASARG, 0, 'L' } 
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
, {"default-threads-dedicated"
		      , RWL_NOLARG, 0, 'g' } 
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
, {"generate",      	RWL_HASARG, 0, '3' }
, {"generate-name",    	RWL_HASARG, 0, '4' }
, {"generate-command", 	RWL_HASARG, 0, '5' }
, {"generate-banner", 	RWL_HASARG, 0, '6' }
, {"generate-directory",RWL_HASARG, 0, '7' }
, {"fullhelp",		RWL_NOLARG, 0, '8' }
, {0,     		0	  , 0, 0 } 
} ;

ub4 rwloptcount = sizeof(rwllongoptions)/sizeof(struct option);


sb4 main(sb4 main_ac, char **main_av) 
{
  rwl_main *rwm;
  rwl_xeqenv *mxq;
  sb4 opt, i;
  ub4 abeg;
  int exitval;
  void *yyscanner;
  void *zzscanner;
#ifdef RWL_GEN_EXEC
  void *aascanner;
#endif
  FILE *xfile;
  sb4 xx;
  ub4 normalhelp, anyhelp ;
  char *dotfil;
  struct option *lngopt;
  rwl_arglist *usrargl;
  text *arglfiln = 0;
  text *firstbad = 0;
  ub4 argoptcount;
  sb4 ac; char **av;


  /* various initializtions */
  rwm = calloc(1, sizeof(rwl_main));
  if (!rwm)
  {
    rwlsevere(0,"[rwlmain-nomemory]");
    exit (RWL_ERROR_SEVERE);
  }
  bis(rwm->mflags, RWL_P_ONLYMAINTH); /* write to rwm allowd */

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
#ifdef RWL_GEN_EXEC
  rwm->loc.fname = (text *) rwlexecname;
  rwm->loc.lineno = rwm->loc.errlin = 0;
  rwlalex_init_extra(rwm, &aascanner);
  rwm->rwlascanner = aascanner;
#endif


  opterr = 0; /* do not print error in getop itself */

  // look very early for necessary options
  ac = main_ac;
  // getopt reorders, so we need a new copy:
  av = rwlalloc(rwm,(1+(ub4)ac)*sizeof (char *)); 
  for (i=0; i<main_ac; i++)
    av[i] = main_av[i];
  av[ac] = 0;

  /* first walk through arguments to get -D debug
   * and a few more essential options
   */
  while( -1 != (opt=getopt_long(ac,av,options, rwllongoptions, 0)))
  {
    switch(opt)
    {
      case 'D': /* add debug bit */
	rwm->mflags |= (ub4) strtol(optarg,0,16) & (RWL_DEBUG_MAIN|RWL_DEBUG_THREAD);
	if (bit(rwm->mflags,RWL_DEBUG_YYDEBUG))
	  rwlydebug = 1;
      break;


      case 'u': /* public search */
#ifdef RWL_GEN_EXEC
	rwlerror(rwm, RWL_ERROR_NOT_IN_GEN_EXEC, "-u option");
#else
        bis(rwm->m2flags, RWL_P2_PUBLICSEARCH);
#endif
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

      case 't': /* local time in banner */
        bis(rwm->m3flags, RWL_P3_LOCALTIME);
      break;
    }
  }

  rwlfree(rwm, av);
  optind = 1; /* to restart argument scan */

  rwlinit1(rwm, (text *)main_av[0]);

  OCIClientVersion( &rwm->cvrel, &rwm->cvupd
		  , &rwm->cvrev, &rwm->cvinc, &rwm->cvext);

#ifdef RWL_GEN_EXEC
  // scan the in-memory file for arguments and options

  rwm->loc.fname = (text *)"";
  bis(rwm->m2flags, RWL_P2_SCANFIRST|RWL_P2_SCANARG);
  rwlascanstring(rwm, rwlexecdata);
  bic(rwm->m2flags, RWL_P2_SCANFIRST|RWL_P2_SCANARG);

#endif
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
      text *rfn;
      int retv;
      bis(rwm->m2flags, RWL_P2_SCANFIRST|RWL_P2_SCANARG);
      
      rfn = rwlenvexp1(rwm->mxq, 0, (text *)main_av[i]
        , bit(rwm->m2flags, RWL_P2_PUBLICSEARCH) ? RWL_ENVEXP_PUBLIC | RWL_ENVEXP_PATH
	  : RWL_ENVEXP_PATH );
      if (rfn && (ffile = rwlfopen(rwm->mxq, 0, rfn, "r")))
      {
	arglfiln = rwlstrdup(rwm, (text *)main_av[i]);
	rwlyfileset(rwm, ffile, rfn);
	while ((retv=rwlalex((union YYSTYPE *)&dummy, rwm->rwlyscanner)))
	{
	  ; // do nothing, all is done in the lexer
	}
      }
      else
        firstbad = (text *) main_av[i];  // report it after banner
      bic(rwm->m2flags, RWL_P2_SCANFIRST|RWL_P2_SCANARG);
      break;
    }
  }

  if (!bit(rwm->mflags, RWL_P_QUIET))
  {
    time_t tt;
    struct tm *tm;
    char strtim[100];
    size_t ret;
    tt = time(0);
    if (bit(rwm->m3flags, RWL_P3_LOCALTIME))
    {
      tm = localtime(&tt);
      ret = strftime(strtim, sizeof(strtim), "on %a, %d %b %Y %T %Z", tm);
    }
    else
    {
      tm = gmtime(&tt);
      ret = strftime(strtim, sizeof(strtim), "on %a, %d %b %Y %T UTC", tm);
    }
    if (!ret)
      strtim[0] = 0;

    if (bit(rwm->m2flags, RWL_P2_VERBOSE))
	printf(
#ifdef RWL_GEN_EXEC 
	"\n%s Release %d.%d.%d.%d %s for %s using client %d.%d %s\n", rwlexecbanner
#else
	"\nRWP*Load Simulator Release %d.%d.%d.%d %s for %s using client %d.%d %s\n"
#endif
      , RWL_VERSION_MAJOR
      , RWL_VERSION_MINOR
      , RWL_VERSION_RELEASE
      , rwlpatch
      , RWL_VERSION_TEXT
      , RWL_ARCH_NAME
      , RWL_OCI_VERSION, RWL_OCI_MINOR
      , strtim);
    else
      printf(
#ifdef RWL_GEN_EXEC
      "\n%s Release %d.%d.%d.%d %s %s\n", rwlexecbanner
#else
      "\nRWP*Load Simulator Release %d.%d.%d.%d %s %s\n"
#endif
      , RWL_VERSION_MAJOR
      , RWL_VERSION_MINOR
      , RWL_VERSION_RELEASE
      , rwlpatch
      , RWL_VERSION_TEXT
      , strtim);

  }

#ifdef RWL_PORT_BETA
  rwlerror(rwm, RWL_PORT_IS_BETA, RWL_ARCH_NAME);
#endif
  
  // report if we couldn't open first file
  if (firstbad)
    rwlerror(rwm, RWL_ERROR_FILE_NOT_OPEN, firstbad);

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
  /* now walk through arguments to get values
   * that must be known when rwlinit2 is called
   */
  while( -1 != (opt=getopt_long(ac,av,options, lngopt, 0)))
  {
    switch(opt)
    {
      case 'W': /* Include error time */
        bis(rwm->m2flags, RWL_P2_ERRORWTIM);
      break;

      case 'u': /* public search */
#ifndef RWL_GEN_EXEC
        bis(rwm->m2flags, RWL_P2_PUBLICSEARCH);
#endif
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

      case 'L': 
	rwm->maxlocals = (ub4) atoi(optarg) + 1; // plus 1 for return value
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

      case 'p': /* set procno */
	rwm->procno = (ub8) rwlatosb8(optarg);
      break;

      case 'k': 
	rwm->reskey = optarg;
	bis(rwm->m2flags, RWL_P2_KKSET);
      break;


    }
  }

  rwlinit2(rwm, (text *)main_av[0]);
#ifdef RWL_GEN_EXEC
  rwm->publicdir = 0;
#else
  if (bit(rwm->m3flags, RWL_P3_PUBISBAD))
    rwlerror(rwm, RWL_ERROR_PUBLIC_BAD, rwm->publicdir ? rwm->publicdir : (text *)"unavailable");
#endif

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

  if (!bit(rwm->mflags, RWL_P_QUIET)
    && (RWL_OCI_VERSION != rwm->cvrel || RWL_OCI_MINOR != rwm->cvupd))
  {
    rwlerror(rwm, RWL_ERROR_CLIENT_MISMATCH
	      , RWL_OCI_VERSION, RWL_OCI_MINOR, rwm->cvrel, rwm->cvupd);
  }

  rwm->loc.fname = (text *) "\"program startup\"";
  rwm->loc.lineno = rwm->loc.errlin = 0;

  if (!rwm->maxcode) rwm->maxcode = RWL_MAX_CODE;
  if (!rwm->maxident) rwm->maxident = RWL_MAX_VAR;
  if (!rwm->maxreadlen) rwm->maxreadlen = RWL_MAXREADLEN;

  rwm->code = rwlalloc(rwm, rwm->maxcode*sizeof(rwl_code));

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
      rwlerror(rwm, RWL_ERROR_NOT_ENOUGH_ARGUMENTS ,
#ifdef RWL_GEN_EXEC 
	rwlexecname
#else
	"rwloadsim"
#endif
      );
      goto errorexit;
    }
    else
      rwm->posargs = (ub4) (ac - optind) - rwm->fileargs;
  }
#ifdef RWL_GEN_EXEC
  else
  {
    // fileargs=0 in generated means all are positional
    rwm->posargs = (ub4) (ac - optind);
  }
#endif

  rwlinit3(rwm);

  mxq->defasiz = RWL_DEFASIZ;

  if (!rwlinitoci(rwm))
    goto errorexit;

  if ((sb4) rwm->posargs+optind > ac)
  {
    rwlerror(rwm, RWL_ERROR_NOT_ENOUGH_ARGUMENTS,
#ifdef RWL_GEN_EXEC 
	rwlexecname
#else
	"rwloadsim"
#endif
    );
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
#ifdef RWL_GEN_EXEC
	rwlerror(rwm, RWL_ERROR_NOT_IN_GEN_EXEC, "-s option");
#else
        bis(rwm->mflags, RWL_P_STATISTICS);
#endif
      break;

      case 'z': /* --histograms */
#ifdef RWL_GEN_EXEC
	rwlerror(rwm, RWL_ERROR_NOT_IN_GEN_EXEC, "-s option");
#else
        bis(rwm->mflags, RWL_P_STATISTICS | RWL_P_HISTOGRAMS);
	rwm->histbucks = RWL_MAX_HIST_BUCK;
#endif
      break;

      case 'O': /* --oer-max-statistics */
#ifdef RWL_GEN_EXEC
	rwlerror(rwm, RWL_ERROR_NOT_IN_GEN_EXEC, "-O option");
#else
	rwm->oermaxstat = (sb4) atoi(optarg);
#endif
      break;

      case 'r': /* --oer-statistics */
#ifdef RWL_GEN_EXEC
	rwlerror(rwm, RWL_ERROR_NOT_IN_GEN_EXEC, "-r option");
#else
        bis(rwm->mflags, RWL_P_STATISTICS);
        bis(rwm->m2flags, RWL_P2_OERSTATS);
#endif
      break;

      case 'y': /* --persecond */
#ifdef RWL_GEN_EXEC
	rwlerror(rwm, RWL_ERROR_NOT_IN_GEN_EXEC, "--persecond option");
#else
        bis(rwm->mflags, RWL_P_STATISTICS | RWL_P_PERSECSTAT);
#endif
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
#ifdef RWL_GEN_EXEC
	rwlerror(rwm, RWL_ERROR_NOT_IN_GEN_EXEC, "-Z option");
#else
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
#endif
      break;

      case 'U': // --flush-every
#ifdef RWL_GEN_EXEC
	rwlerror(rwm, RWL_ERROR_NOT_IN_GEN_EXEC, "-U option");
#else
	{
	  int tmp = atoi(optarg);
	  if (tmp<1) 
	    rwlerror(rwm, RWL_ERROR_FLUSH_EVERY_LOW, 1);
	  else
	    rwm->flushevery = (ub4) tmp;
	}
#endif
      break;

      case 'c': /* default clock offset */
	rwm->adjepoch = atof(optarg);
      break;

      case 'a': /* default array size */
	mxq->defasiz = (ub4) atoi(optarg);
      break;

      case 'd': /* add double variable */
#ifdef RWL_GEN_EXEC
	rwlerror(rwm, RWL_ERROR_NOT_IN_GEN_EXEC, "-d option");
#else
	if (!xfile) /* open temp file if not already open */
	{
	  if (!(xfile = tmpfile()))
	  {
	    rwlerror(rwm, RWL_ERROR_CANNOT_CREATE_TEMPFILE);
	    goto errorexit;
	  }
	}
	fprintf(xfile, "double %s;\n", optarg);
#endif
      break;

      case 'i': /* add integer variable */
#ifdef RWL_GEN_EXEC
	rwlerror(rwm, RWL_ERROR_NOT_IN_GEN_EXEC, "-i option");
#else
	if (!xfile) /* open temp file if not already open */
	{
	  if (!(xfile = tmpfile()))
	  {
	    rwlerror(rwm, RWL_ERROR_CANNOT_CREATE_TEMPFILE);
	    goto errorexit;
	  }
	}
	fprintf(xfile, "integer %s;\n", optarg);
#endif
      break;

      case 'x': /* execute something */
#ifdef RWL_GEN_EXEC
	rwlerror(rwm, RWL_ERROR_NOT_IN_GEN_EXEC, "-x option");
#else
	if (!xfile) /* open temp file if not already open */
	{
	  if (!(xfile = tmpfile()))
	  {
	    rwlerror(rwm, RWL_ERROR_CANNOT_CREATE_TEMPFILE);
	    goto errorexit;
	  }
	}
	fprintf(xfile, "%s\n", optarg);
#endif
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
	    // rwm->dbsav->cclass = rwlstrdup(rwm, (text *)RWL_DEFAULT_CCLASS);  // must be able to free
	    rwm->dbsav->stmtcache = RWL_DEFAULT_STMTCACHE;
	    // maxidead is zero for the db on command line
	    rwm->defdb = rwm->dbname = RWL_DEFAULT_DBNAME;
	    rwm->mxq->evar[ld].vdata = rwm->dbsav;
	    cs = (text *)strchr(optarg,'@');
	    if (cs)
	    {
	      rwm->dbsav->connect = rwlstrdup(rwm, cs+1);
	      rwm->dbsav->conlen = (ub4) rwlstrlen(rwm->dbsav->connect);
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
	    bis(rwm->m3flags, RWL_P3_LOPTDEFDB);
	    // WAS HERE: rwlbuilddb(rwm);
	  }
	}
	break;

      case 'g': /* default db threads dedicated */
        bis(rwm->m3flags,RWL_P3_DEFTHRDED);
      break;

      case 'G': /* default db reconnect */
        bis(rwm->m3flags,RWL_P3_DEFRECONN);
      break;

      case 'X': /* default db is pooled */
        rwm->argX = (ub4) atoi(optarg);
      break;

      case 'Y': 
        rwm->argY = (ub4) atoi(optarg);
      break;

      case 'T': /* vi tags file createion */
#ifdef RWL_GEN_EXEC
	rwlerror(rwm, RWL_ERROR_NOT_IN_GEN_EXEC, "-T option");
#else
	rwm->vitagsfile = optarg;
#endif
      break;

      case 'P': /* Prepare multi process */
#ifdef RWL_GEN_EXEC
	rwlerror(rwm, RWL_ERROR_NOT_IN_GEN_EXEC, "-P option");
#else
	if (bit(rwm->mflags, RWL_P_MEXECUTE))
	  rwlerror(rwm, RWL_ERROR_NOT_PREPARE_AND_EXECUTE_MULTI);
	else
	{
          bis(rwm->mflags, RWL_P_MPREPARE);
	  rwm->Mname = optarg;
	}
#endif
      break;

      case 'R': /* Run multi process execute */
#ifdef RWL_GEN_EXEC
	rwlerror(rwm, RWL_ERROR_NOT_IN_GEN_EXEC, "-R option");
#else
	if (bit(rwm->mflags, RWL_P_MPREPARE))
	  rwlerror(rwm, RWL_ERROR_NOT_PREPARE_AND_EXECUTE_MULTI);
	else
        {
	  text *rfn = rwlenvexp(rwm->mxq, 0, (text *)optarg);
	  FILE *rfile;
	  if (!rfn || !(rfile=rwlfopen(rwm->mxq, 0, rfn,"r")))
	  {
	    rwlerror(rwm, RWL_ERROR_FILE_NOT_OPEN, rfn);
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
#endif
	break;

      case 'M': /* Multi process execute */
#ifdef RWL_GEN_EXEC
	rwlerror(rwm, RWL_ERROR_NOT_IN_GEN_EXEC, "-M option");
#else
	if (bit(rwm->mflags, RWL_P_MPREPARE))
	  rwlerror(rwm, RWL_ERROR_NOT_PREPARE_AND_EXECUTE_MULTI);
	else
        {
	  double x = 0.0;
	  bis(rwm->mflags, RWL_P_MEXECUTE);
	  sscanf(optarg, RWL_MFLAG_FORMAT,&rwm->runnumber, &x);
	  rwm->adjepoch = x - rwlsinceepoch(rwm);
	  rwlgetrunnumber(rwm); // to set the value into the variable
	}
#endif
	break;

#ifdef RWL_GEN_EXEC
      // In generated code, make -h/--help just be the help on any
      // userswitch/useroption, and require --fullhelp to also 
      // get the standard ones
      case '8': //also --fullhelp
        normalhelp++;
	// fall thru
      case 'h': //also --help
      case 'H': //also --userhelp
        anyhelp++;
      break;
#else
      case 'h': //also --help
      case '8': //also --fullhelp
        normalhelp++;
	// fall thru
      case 'H': //also --userhelp
        anyhelp++;
      break;
#endif

      case '3': // --generate
#ifdef RWL_GEN_EXEC
	rwlerror(rwm, RWL_ERROR_NOT_IN_GEN_EXEC, "--generate option");
#else
        bis(rwm->m3flags, RWL_P3_GENERATE|RWL_P3_GENERATE_OK);
        bis(rwm->m2flags, RWL_P2_NOEXEC);
	rwlerrormute(rwm, RWL_ERROR_NOEXEC, 0);
        rwm->genfile = (text *)optarg;
#endif
      break;

      case '4': // --generate-name
#ifdef RWL_GEN_EXEC
	rwlerror(rwm, RWL_ERROR_NOT_IN_GEN_EXEC, "--generate-name option");
#else
        rwm->genname = (text *)optarg;
#endif
      break;

      case '5': // --generate-command
#ifdef RWL_GEN_EXEC
	rwlerror(rwm, RWL_ERROR_NOT_IN_GEN_EXEC, "--generate-command option");
#else
        rwm->gencommand = (text *)optarg;
#endif
      break;

      case '6': // --generate-banner
#ifdef RWL_GEN_EXEC
	rwlerror(rwm, RWL_ERROR_NOT_IN_GEN_EXEC, "--generate-banner option");
#else
        rwm->genbanner = (text *)optarg;
#endif
      break;

      case '7': // --generate-directory
#ifdef RWL_GEN_EXEC
	rwlerror(rwm, RWL_ERROR_NOT_IN_GEN_EXEC, "--generate-banner option");
#else
        rwm->gendirectory = (text *)optarg;
#endif
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
    rwl_helplist *hl;
    if (normalhelp)
      puts(helptext);
    // and print the user argument help texts
    usrargl = rwm->usrargl;
    if (usrargl && arglfiln)
      printf("RWP*Load Simulator user options and help from %s:\n", arglfiln);
    // print any user provided help text
    hl = rwm->helphead;
    while (hl)
    {
      puts((char *)hl->helptext);
      hl = hl->nexthlp;
    }
    while (usrargl)
    {
      puts((char *)usrargl->arghelp);
      rwlfree(rwm, usrargl->arghelp); // shut up parfait
      usrargl = usrargl->nextarg;
    }

      
    exit(0);
  }
  
  mxq->tflags = rwm->mflags | RWL_P_ISMAIN;

  if (bit(rwm->m3flags, RWL_P3_LOPTDEFDB))
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
      if (bit(rwm->m3flags, RWL_P3_DEFRECONN|RWL_P3_DEFTHRDED))
        rwlerror(rwm, RWL_ERROR_DBPOOL_ALREADY);
        
    }
    else
    {
      if (rwm->argY)
        rwlerror(rwm, RWL_ERROR_ONLY_POOL_MIN_SET);
      if (bit(rwm->m3flags, RWL_P3_DEFRECONN))
      {
	rwm->dbsav->pooltype = RWL_DBPOOL_RECONNECT;
	rwm->dbsav->pooltext = "reconnect";
	if (bit(rwm->m3flags, RWL_P3_DEFTHRDED))
	  rwlerror(rwm, RWL_ERROR_DBPOOL_ALREADY);
      }
      else if (bit(rwm->m3flags, RWL_P3_DEFTHRDED))
      {
	rwm->dbsav->pooltype = RWL_DBPOOL_RETHRDED;
	rwm->dbsav->pooltext = "threads dedicated";
      }
      else
      {
	rwm->dbsav->pooltype = RWL_DBPOOL_DEDICATED;
	rwm->dbsav->pooltext = "dedicated";
      }
    }
    if (bit(rwm->m3flags, RWL_P3_GENERATE))
    {
      bic(rwm->m3flags, RWL_P3_GENERATE_OK);
      rwlerror(rwm, RWL_ERROR_NOT_FOR_GEN_EXEC, "database declaration");
    }
    else
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

#ifndef RWL_GEN_EXEC
  if (optind>=ac - (sb4)rwm->posargs)
    rwlerror(rwm, RWL_ERROR_NO_INPUT);
  // Are we generating
  if (bit(rwm->m3flags, RWL_P3_GENERATE))
  {
    if (!rwm->genname) // not given by user 
    {
      if ((rwm->genname = rwlstrrchr(rwm->genfile,'/')))
        rwm->genname++;
      else
	rwm->genname = rwm->genfile;
      if (rwlstrchr(rwm->genname, '/'))
      {
        rwlerror(rwm, RWL_ERROR_ILLEGAL_FILE_NAME, rwm->genname);
	bic(rwm->m3flags, RWL_P3_GENERATE_OK);
      }
    }
    if (!rwm->gencommand)
      rwm->gencommand = RWL_GENCOM_DEFAULT;
  }

  /* do we have a temp file from arguments */
  if (xfile)
  {
    if (bit(mxq->errbits,RWL_ERROR_SEVERE))
      goto endparse;
    /* read the file via the parser */
    fflush(xfile);
    rewind(xfile);
    rwlyfileset(rwm, xfile, (text*)"command line");
    /* allow overwrite of default values */
    bis(rwm->addvarbits, RWL_IDENT_COMMAND_LINE);
    xx=rwlyparse(rwm);
    if (bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
      rwm->ifdirdep = 0; // since we may have skipped $endif
    if (rwm->ifdirdep)
      rwlerror(rwm, RWL_ERROR_DIRIF_NOT_FINISH
      , rwm->ifdirloc.fname, rwm->ifdirloc.lineno);
    if (xx) /* if incomplete, report error */
      rwlerror(rwm, RWL_ERROR_PREMATUREEND);
    /* stop overwrite defaults */
    bic(rwm->addvarbits, RWL_IDENT_COMMAND_LINE);
  }

  if (bit(rwm->m3flags, RWL_P3_GENERATE))
  {
    // create the c source, and fill it with initial contents
    // Since it must have a .c suffix for gcc
    // to recongize it, we use a temporary directory
    char template[sizeof(RWL_TD_TEMPL)+1];
    text cfilnam[RWL_PATH_MAX];
    char etxt[100];
    text *dn;
    FILE *cyt;
    if (rwm->gendirectory)
      rwm->gentmpdir = rwm->gendirectory;
    else
    {
      // user doesn't want own directory
      strcpy(template, RWL_TD_TEMPL);
      if (!(dn = (text *) mkdtemp(template)))
      {
	if (0!=strerror_r(errno, etxt, sizeof(etxt)))
	  strcpy(etxt,"unknown");
	rwlerror(rwm, RWL_ERROR_GENERIC_OS, "mkdtemp", etxt);
	bic(rwm->m3flags, RWL_P3_GENERATE|RWL_P3_GENERATE_OK);
	goto cannotcreatec;
      }
      rwm->gentmpdir = rwlstrdup(rwm, dn);
    }
    snprintf((char *)cfilnam, sizeof(cfilnam), "%s/%s.c", rwm->gentmpdir, rwm->genname);
    rwm->gencfile = rwlstrdup(rwm, cfilnam);
    if (!(cyt = rwlfopen(rwm->mxq, 0, rwm->gencfile,  "w")))
    {
      char etxt[100];
      if (0!=strerror_r(errno, etxt, sizeof(etxt)))
	strcpy(etxt,"unknown");
      rwlerror(rwm, RWL_ERROR_CANNOTOPEN_FILEWRITE, cfilnam, etxt);
      bic(rwm->m3flags, RWL_P3_GENERATE|RWL_P3_GENERATE_OK);
      goto cannotcreatec;
    }
    fprintf(cyt, "/* %s generated by rwloadsim */\n", rwm->gencfile); 
    fprintf(cyt, "const char rwlexecname[] = \"%s\";\n", rwm->genname);
    if (rwm->genbanner)
      fprintf(cyt, "const char rwlexecbanner[] = \"%s\";\n", rwm->genbanner);
    else
      fprintf(cyt, "const char rwlexecbanner[] = \"RWP*Load Simulator (%s)\";\n", rwm->genname);
    fputs("const char rwlexecdata[] = {\n", cyt);
    fclose(cyt);
    cannotcreatec: ;
  }
#endif
  /* parse all real input files */
  for (abeg=1, i=optind; i < (ac - (sb4)rwm->posargs); abeg++, i++)
  {
    if (bit(mxq->errbits,RWL_ERROR_SEVERE) || bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
      goto endparse;
    if (!strcmp(av[i],"-"))
      rwlerror(rwm, RWL_ERROR_NO_STDIN);
    else if (strcmp(av[i],"--")&&strcmp(av[i],";")) // Just ignore -- and ;
    { 
      if (0==strncmp(av[i],"-x",2))
      {
#ifdef RWL_GEN_EXEC
	rwlerror(rwm, RWL_ERROR_NOT_IN_GEN_EXEC, "-x argument");
#else
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
	    rwlyfileset(rwm, xfile, (text *)cla);
	    /* allow overwrite of default values */
	    bis(rwm->addvarbits, RWL_IDENT_COMMAND_LINE);
	    xx=rwlyparse(rwm);
	    if (bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
	      rwm->ifdirdep = 0; // since we may have skipped $endif

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
#endif
      }
      else
      { 
	text *rfn = rwlenvexp1(rwm->mxq, 0, (text *)av[i]
        , (ub4) ( RWL_ENVEXP_PATH 
	  | (bit(rwm->m2flags, RWL_P2_PUBLICSEARCH) ? RWL_ENVEXP_PUBLIC : 0))
	);
	if (!rfn || !(xfile = rwlfopen(rwm->mxq, 0, rfn, "r")))
	{
	  if ((1!=abeg || !firstbad)) // don't report first file if already done
	    rwlerror(rwm, RWL_ERROR_FILE_NOT_OPEN, (text *)av[i]);
	}
	else
	{
	  if (bit(rwm->m3flags, RWL_P3_GENERATE_OK))
	  {
	    FILE *cyt;
	    unsigned char cc;
	    if (!rwm->gencfile)
	    {
	      rwlsevere(rwm,"[rwlmain-nocname]");
	      goto cannotappendc;
	    }
	    if (!(cyt = rwlfopen(rwm->mxq, 0, rwm->gencfile,  "a")))
	    {
	      char etxt[100];
	      if (0!=strerror_r(errno, etxt, sizeof(etxt)))
	        strcpy(etxt,"unknown");
	      rwlerror(rwm, RWL_ERROR_CANNOTOPEN_FILEWRITE, rwm->gencfile, etxt);
	      bic(rwm->m3flags, RWL_P3_GENERATE|RWL_P3_GENERATE_OK);
	      goto cannotappendc;
	    }
	    fprintf(cyt, "/* rwl source from %s */\n", rfn); 
	    while (fread(&cc, sizeof(cc), 1, xfile))
	    {
	      fprintf(cyt, "%d,\n", cc);
	    }
	    fprintf(cyt, "'\\n', '\\n', \n");
	    fclose(cyt);
	    cannotappendc:
	    rewind(xfile);
	  }

	  /* tell lexer about the file name */
	  rwlyfileset(rwm, xfile, rfn);
	  if (i==optind) // is this the first file being rescanned?
	    bis(rwm->m2flags, RWL_P2_SCANFIRST);
	  xx=rwlyparse(rwm); // to go into parser, use this vi-tag: rwlprogram
	  if (bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
	    rwm->ifdirdep = 0; // since we may have skipped $endif
	  
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
#ifdef RWL_GEN_EXEC
  if (bit(mxq->errbits,RWL_ERROR_SEVERE) || bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
    goto endparse;
  /* tell lexer about the original file name */
  bis(rwm->m2flags, RWL_P2_SCANFIRST);
  bis(rwm->m3flags, RWL_P3_EXECGEN);
  xx = rwlyparsestring(rwm, rwlexecdata);
  if (bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
    rwm->ifdirdep = 0; // since we may have skipped $endif
  
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
  bic(rwm->m3flags, RWL_P3_EXECGEN);

#endif
  endparse:
  if (rwm->maintookses)
  {
    if (!rwm->maindb)
      rwlsevere(rwm,"[rwlmain-releasedbnone:%d]", rwm->maintookses);
    else
      rwlreleasesession(rwm->mxq, &rwm->loc, rwm->maindb, 0);
    rwm->maindb = 0;
    rwm->maintookses = 0;
  }
  rwlylex_destroy(yyscanner);
  rwlzlex_destroy(zzscanner);

#ifndef RWL_GEN_EXEC
  if (bit(rwm->m3flags, RWL_P3_GENERATE_OK))
  {
    // link the new binary
    int sysres, wstat;
    char command[RWL_PATH_MAX];
    FILE *cyt;
    // first terminate the C source
    if (!rwm->gencfile)
    {
      rwlsevere(rwm,"[rwlmain-nocname2]");
      goto cannotfinishc;
    }
    if (!(cyt = rwlfopen(rwm->mxq, 0, rwm->gencfile,  "a")))
    {
      char etxt[100];
      if (0!=strerror_r(errno, etxt, sizeof(etxt)))
	strcpy(etxt,"unknown");
      rwlerror(rwm, RWL_ERROR_CANNOTOPEN_FILEWRITE, rwm->gencfile, etxt);
      bic(rwm->m3flags, RWL_P3_GENERATE|RWL_P3_GENERATE_OK);
      goto cannotfinishc;
    }
    fprintf(cyt, "0, 0, 0 \n};\n");
    fclose(cyt);
    if (bit(rwm->m3flags, RWL_P3_GEN_SENSITIVE))
      rwlerror(rwm, RWL_ERROR_GEN_SENSITIVE_KEYWORDS);
    snprintf(command, sizeof(command), (char *)rwm->gencommand
      , rwm->libdir, rwm->genfile, rwm->gencfile, RWL_OCI_VERSION);
    sysres = system(command);
    if (-1 == sysres)
    {
      rwlerror(rwm, RWL_ERROR_GENERIC_OS, "system", "<unknown>");
      wstat = 1;
    }
    else
      wstat = RWL_WEXITSTATUS(sysres);

    if (wstat)
      rwlerror(rwm, RWL_ERROR_CANNOT_LINK, command, wstat);
    else
      rwlerror(rwm, RWL_ERROR_GENERATED_EXECUTABLE, rwm->genfile);
    cannotfinishc:
    if (!rwm->gendirectory)
    {
      // clean up the tmp file and dir
      unlink((char *)rwm->gencfile);
      rmdir((char *)rwm->gentmpdir);
    }
  }

  if (bit(rwm->mflags, RWL_P_MPREPARE))
  {
    /* prepare for multi process run */
    if (rwm->resdb)
    {
      text *rfn = rwlenvexp(rwm->mxq, 0, (text *)rwm->Mname);
      FILE *Mfile = rwlfopen(rwm->mxq, 0, rfn,"w");

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
#endif

  if (!bit(rwm->m3flags, RWL_P3_USEREXIT))
  {
    // If not userexit verify user arguments have been used
    usrargl = rwm->usrargl;
    while (usrargl)
    {
      if (!bit(usrargl->argflags,RWL_USER_ARG_USED))
	rwlerror(rwm, RWL_ERROR_ARGUMENT_NOT_USED, usrargl->argname);
      usrargl = usrargl->nextarg;
    }
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

  // Are we exiting because user said so?
  if (bit(rwm->m3flags, RWL_P3_USEREXIT))
    exitval = rwm->userexit;
  else
    exitval = (int) (mxq->errbits & RWL_EXIT_ERRORS);

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
  exit(exitval);
}

rwlcomp(rwlmain_c, RWL_GCCFLAGS)


