/*
 * RWP*Load Simulator
 *
 * Copyright (c) 2024, 2017 Oracle Corporation
 * Licensed under the Universal Permissive License v 1.0
 * as shown at https://oss.oracle.com/licenses/upl/
 *
 * Real World performance Load simulator main
 *
 * rwlmain.c
 *
 * History
 *
 * bengsig  28-feb-2024 - No public directory in generated exeuctable
 * bengsig  21-feb-2024 - All files allow useroption during generate
 * bengsig  21-feb-2024 - strerror_r -> rwlstrerror
 * bengsig  20-feb-2024 - mkdtemp on Windows, etc
 * bengsig  12-feb-2024 - \r\n on Windows
 * bengsig   6-feb-2024 - Own option processing
 * bengsig  30-jan-2024 - All includes in rwl.h
 * bengsig  14-nov-2023 - nicer code for only long args
 * bengsig   9-nov-2023 - --mute option
 * bengsig   6-sep-2023 - sql logging
 * bengsig  25-jul-2023 - -l option sets RWL_DB_DEFAULT
 * johnkenn 26-jun-2023 - Alias for 0x20 debug option
 * bengsig  21-jun-2023 - Preparing for 3.1
 * bengsig  17-apr-2023 - Engineering notation output
 * bengsig   1-mar-2023 - Optimize snprintf [id]format
 * bengsig   7-feb-2023 - Set hostname via -P/-M/-R
 * bengsig  02-jan-2023 - make $pre31fileassign:warn the default
 * bengsig  14-dec-2022 - Move RWL-059 check; don't set adj to 0 when neg
 * bengsig  24-nov-2022 - Arguments are all positional in generated
 * bengsig  31-oct-2022 - Add better queue time via $queueeverytiming:on
 * bengsig  15-sep-2022 - New file assignment operators
 * bengsig  18-aug-2022 - malloc dump in generated binary
 * bengsig  18-aug-2022 - Correct help text
 * bengsig  10-aug-2022 - Output userhelp in order from rwl source file
 * bengsig  13-jul-2022 - Check for missing files (RWL-099) after -x
 * bengsig  11-jul-2022 - Set name correct in generated file
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

#include "rwl.h"

static const char * const usage = "usage: rwloadsim [options | -h (for help)] file ... args ..." RWL_LINEEND;
static const char * const helptext =
"RWP*Load Simulator options:" RWL_LINEEND
#ifdef RWL_GEN_EXEC
"-h | -H | --userhelp     : Print help for useroption and userswitch" RWL_LINEEND
"          --fullhelp     : Print full help in generated binary" RWL_LINEEND
#else
"-h | --help              : Print this help and any user help" RWL_LINEEND
"-H | --userhelp          : Only print help for useroption and userswitch" RWL_LINEEND
#endif
"-v | --version           : Print client version" RWL_LINEEND
"-q | --quiet             : Be queit" RWL_LINEEND
#ifndef RWL_GEN_EXEC
"-s   | --statistics      : Gather statistics" RWL_LINEEND
"-ss  | --histograms      : .. and also histograms" RWL_LINEEND
"-sss | --persecond       : .. and per second counts" RWL_LINEEND
"-r | --oer-statistics    : Gather statistics about ORA- errors" RWL_LINEEND
"-O | --oer-max-stats N   : Gather at most this many ORA- errors (default 50)" RWL_LINEEND
"-Z | --flush-stop N      : Flush per second until N seconds" RWL_LINEEND
"-U | --flush-every N     : Flush per second counts every N seconds" RWL_LINEEND
"-i | --integer intspec   : Overwrite integer default value" RWL_LINEEND
"-d | --double dblspec    : Overwrite double default value" RWL_LINEEND
"-k | --key resKey        : Key string to be inserted in results tables" RWL_LINEEND
"-K | --comment comment   : Set run comment" RWL_LINEEND
"   | --komment comment   : The same speeled with k" RWL_LINEEND
"-P | --prepare file      : Prepare multi process execution by writing Mstring to" RWL_LINEEND
"                           file" RWL_LINEEND
"-M | --multirun-value" RWL_LINEEND
"                 Mstring : Contents of multi process prepare file" RWL_LINEEND
"-R | --multirun file     : Multi process execution by reading prepare file" RWL_LINEEND
"-p | --procno procno     : Value for procno in runres" RWL_LINEEND
"-x | --execute-code code : Execute 'code' before reading first file" RWL_LINEEND
#endif
"-c | --clockstart N.N" RWL_LINEEND
"   | --startseconds N.N  : Clock starts this many seconds after program start" RWL_LINEEND
"                           (default 5.0)" RWL_LINEEND
"-D | --debug xxx         : Set debug bits (xxx are hex digits)" RWL_LINEEND
"-a | --arraysize N       : Set default array size for cursor loops" RWL_LINEEND
"-C | --codesize N        : Maximum number of Code entries" RWL_LINEEND
"-I | --namecount N       : Maximum number of Identifers" RWL_LINEEND
"-L | --localnames N      : Maximum number of Local identifers per" RWL_LINEEND
"                           procedure/function" RWL_LINEEND
"-l | --default-database" RWL_LINEEND
"                   u/p@c : Create a datafault database (@c is optional)" RWL_LINEEND
"-X | --default-max-pool N: Make the default database use session pool 1..N" RWL_LINEEND 
"-Y | --default-min-pool M: Make the default database use session pool M..N" RWL_LINEEND 
"-g | --default-threads-dedicated" RWL_LINEEND
"                         : Make the default database use threads dedicated" RWL_LINEEND 
"-G | --default-reconnect : Make the default database use reconnect" RWL_LINEEND 
"-A | --argument-count N  : Last N positional arguments become strings named" RWL_LINEEND
"                           $1, $2, etc" RWL_LINEEND
"-F | --file-count N      : First N arguments are files, the rest are positional" RWL_LINEEND
"                           $1, $2, etc" RWL_LINEEND
"-E | --event-notify      : Setup HA event notification" RWL_LINEEND
"-Q | --queue             : Use backlog to simulatue queuing in control loops" RWL_LINEEND
"                           using \"every\"" RWL_LINEEND
"-N | --no-queue          : Traditional behavior in control loops using \"every\"" RWL_LINEEND
"-W | --errortime         : Include timestamp in seconds after start on execution" RWL_LINEEND
"                           errors" RWL_LINEEND
"-V | --no-nameexpand     : Do not expand environment variables in file names" RWL_LINEEND
"-B | --readbuffer N      : Maximum line length for readfile" RWL_LINEEND
"-t | --banner-local      : Time in banner is local in stead of UTC" RWL_LINEEND
"-S | --set-action        : Set procedure name as action when session is acquired" RWL_LINEEND
"-SS | --set-action-reset : Reset action upon release; requires extra database" RWL_LINEEND
"                           roundtrip" RWL_LINEEND
"      --mute NNN         : Mute error RWL-NNN" RWL_LINEEND
"--sqllogging-stdout      : Log all sql execution to stdout" RWL_LINEEND
"--sqllogging-stderr      : Log all sql execution to stderr" RWL_LINEEND
"--sqllogging-file file   : Log all sql execution to named file" RWL_LINEEND
"--sqllogging-append file : Open the named for for append and log all sql execution" RWL_LINEEND
"                           to it" RWL_LINEEND
#ifndef RWL_GEN_EXEC
"-w | --nowarn-deprecated : Do not warn when deprecated features are being used" RWL_LINEEND
"-e | --compile-only      : Compile only, check for syntax errors and missing" RWL_LINEEND
"                           declarations" RWL_LINEEND
"-u | --publicsearch      : Add public directory in addition to RWLOADSIM_PATH" RWL_LINEEND
"-T | --vi-tags file      : Create a vi tags file just before completion" RWL_LINEEND
"     --generate=filename : Generate a single script binary" RWL_LINEEND
"     --generate-name name" RWL_LINEEND
"                         : Use name as the generated name rather than last" RWL_LINEEND
"                           pathname in binary" RWL_LINEEND
"     --generate-command command" RWL_LINEEND
"                         : Use an alternative command to generate executable" RWL_LINEEND
"     --generate-banner banner" RWL_LINEEND
"                         : Provide an alternative banner for the generated" RWL_LINEEND
"                           exeuctable" RWL_LINEEND
"     --generate-directory directory" RWL_LINEEND
"                         : Use the specified directory to save the generated" RWL_LINEEND
"                           C source" RWL_LINEEND
#else
"     --list-generated    : Print the generated rwl to stdout and exit" RWL_LINEEND
#endif

;

// use numbers in the range 130-RWL_USER_ARG_OFFSET (500)
// for those args that only exist as long
#define RWL_ARG_PRETEND_GEN_BANNER	130
#define RWL_ARG_SQLLOGGING_STDERR  	131
#define RWL_ARG_SQLLOGGING_STDOUT	132
#define RWL_ARG_SQLLOGGING_FILE		133
#define RWL_ARG_SQLLOGGING_APPEND	134
#define RWL_ARG_STATISTICS              135
#define RWL_ARG_HISTOGRAMS		136
#define RWL_ARG_PERSECOND 		137
#define RWL_ARG_FULLHELP		138
#define RWL_ARG_LIST_GENERATED		139
#define RWL_ARG_GENERATE		140
#define RWL_ARG_GENERATE_NAME		141
#define RWL_ARG_GENERATE_COMMAND	142
#define RWL_ARG_GENERATE_BANNER		143
#define RWL_ARG_GENERATE_DIRECTORY	144
#define RWL_ARG_MUTE			145
#define RWL_ARG_SET_ACTION_RESET        146


rwl_option rwloptions[] = {
  {"help",		RWL_OPT_NOLARG, 'h' }
, {"userhelp",		RWL_OPT_NOLARG, 'H' }
, {"queue",		RWL_OPT_NOLARG, 'Q' }
, {"no-queue",		RWL_OPT_NOLARG, 'N' }
, {"banner-local",	RWL_OPT_NOLARG, 't' }
, {"no-nameexpand",	RWL_OPT_NOLARG, 'V' }
, {"quiet",		RWL_OPT_NOLARG, 'q' }
, {"zz-undocumented-1",	RWL_OPT_NOLARG, 's' } // needed as -s is different from --statistics
, {"statistics",	RWL_OPT_NOLARG, RWL_ARG_STATISTICS } 
, {"histograms",	RWL_OPT_NOLARG, RWL_ARG_HISTOGRAMS } 
, {"persecond",		RWL_OPT_NOLARG, RWL_ARG_PERSECOND } 
, {"flush-every",	RWL_OPT_HASARG, 'U' } 
, {"flush-stop",	RWL_OPT_HASARG, 'Z' } 
, {"debug",		RWL_OPT_HASARG, 'D' } 
, {"integer",		RWL_OPT_HASARG, 'i' } 
, {"double",		RWL_OPT_HASARG, 'd' } 
, {"arraysize",		RWL_OPT_HASARG, 'a' } 
, {"readbuffer",	RWL_OPT_HASARG, 'B' } 
, {"clockstart",	RWL_OPT_HASARG, 'c' } 
, {"startseconds",	RWL_OPT_HASARG, 'c' } 
, {"codesize",		RWL_OPT_HASARG, 'C' } 
, {"namecount",		RWL_OPT_HASARG, 'I' } 
, {"localnames",	RWL_OPT_HASARG, 'L' } 
, {"key",		RWL_OPT_HASARG, 'k' } 
, {"comment",		RWL_OPT_HASARG, 'K' } 
, {"komment",		RWL_OPT_HASARG, 'K' } 
, {"prepare-file",	RWL_OPT_HASARG, 'P' } 
, {"prepare-value",	RWL_OPT_HASARG, 'M' } 
, {"multirun-file",	RWL_OPT_HASARG, 'R' } 
, {"procno",		RWL_OPT_HASARG, 'p' } 
, {"default-database",	RWL_OPT_HASARG, 'l' } 
, {"default-min-pool",	RWL_OPT_HASARG, 'Y' } 
, {"default-max-pool",	RWL_OPT_HASARG, 'X' } 
, {"default-reconnect",	RWL_OPT_NOLARG, 'G' } 
, {"default-threads-dedicated"
		      , RWL_OPT_NOLARG, 'g' } 
, {"nowarn-deprecated",	RWL_OPT_NOLARG, 'w' } 
, {"compile-only",	RWL_OPT_NOLARG, 'e' } 
, {"argument-count",	RWL_OPT_HASARG, 'A' } 
, {"file-count",	RWL_OPT_HASARG, 'F' } 
, {"execute-code",	RWL_OPT_HASARG, 'x' } 
, {"event-notify",	RWL_OPT_NOLARG, 'E' } 
, {"set-action",	RWL_OPT_NOLARG, 'S' } 
, {"set-action-reset",	RWL_OPT_NOLARG, RWL_ARG_SET_ACTION_RESET } 
, {"vi-tags",	        RWL_OPT_HASARG, 'T' } 
, {"version",	        RWL_OPT_NOLARG, 'v' } 
, {"verbose",	        RWL_OPT_NOLARG, 'v' } 
, {"errortime",	        RWL_OPT_NOLARG, 'W' } 
, {"oer-statistics",    RWL_OPT_NOLARG, 'r' } 
, {"oer-max-stats",     RWL_OPT_HASARG, 'O' } 
, {"publicsearch",      RWL_OPT_NOLARG, 'u' }
, {"generate",      	RWL_OPT_HASARG, RWL_ARG_GENERATE }
, {"generate-name",    	RWL_OPT_HASARG, RWL_ARG_GENERATE_NAME }
, {"generate-command", 	RWL_OPT_HASARG, RWL_ARG_GENERATE_COMMAND }
, {"generate-banner", 	RWL_OPT_HASARG, RWL_ARG_GENERATE_BANNER }
, {"generate-directory",RWL_OPT_HASARG, RWL_ARG_GENERATE_DIRECTORY }
, {"fullhelp",		RWL_OPT_NOLARG, RWL_ARG_FULLHELP }
, {"list-generated",   	RWL_OPT_NOLARG, RWL_ARG_LIST_GENERATED }
, {"pretend-gen-banner",RWL_OPT_HASARG, RWL_ARG_PRETEND_GEN_BANNER }
, {"sqllogging-stdout",	RWL_OPT_NOLARG, RWL_ARG_SQLLOGGING_STDOUT }
, {"sqllogging-stderr",	RWL_OPT_NOLARG, RWL_ARG_SQLLOGGING_STDERR }
, {"sqllogging-file"   ,RWL_OPT_HASARG, RWL_ARG_SQLLOGGING_FILE }
, {"sqllogging-append" ,RWL_OPT_HASARG, RWL_ARG_SQLLOGGING_APPEND }
, {"mute"              ,RWL_OPT_HASARG, RWL_ARG_MUTE }
, {0		       ,0     	  , 0 } 
} ;

ub4 rwloptcount = sizeof(rwloptions)/sizeof(rwl_option);




sb4 main(sb4 main_ac, char **main_av) 
{
  rwl_main *rwm;
  rwl_xeqenv *mxq;
  ub4 i, opt, abeg;
  int exitval;
  void *yyscanner;
  void *zzscanner;
#ifdef RWL_GEN_EXEC
  void *aascanner;
  ub4 listgen;
#endif
  FILE *xfile;
  sb4 xx;
  ub4 normalhelp, anyhelp;
  char *dotfil;
  rwl_arglist *usrargl;
  text *arglfiln = 0;
  text *firstbad = 0;
  ub4 argoptcount;
  rwl_option *lngopt;


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
  rwm->pre31fil = RWL_31_FIL_OFF;
  rwm->musymbol = (text *) "\302\265"; // µ is UTF8, 0xc2b5
  rwm->musymlen = (ub4) rwlstrlen(rwm->musymbol);
#ifndef RWL_GEN_EXEC
  rwm->loc.fname = (text *) "\"program startup\"";
#endif

  mxq = rwlalloc(rwm, sizeof(rwl_xeqenv));
  mxq->vresdb = RWL_VAR_NOGUESS;

  /* main thread has a pointer to its own thread 
   * and similar back to main 
   */
  rwm->mxq = mxq;
  mxq->rwm = rwm;

  rwm->dformat= RWL_DFORMAT_DEFAULT;
  rwm->iformat= RWL_IFORMAT_DEFAULT;
  bis(rwm->m3flags, RWL_P3_RWLI2SOK|RWL_P3_RWLD2SOK);
  rwm->lineend = (text *) "\n";
#if RWL_OS == RWL_WINDOWS
  // do windows stuff
  //
  // Note that we do NOT set crnl for string,
  // writeline and general as MSVC/Windows itself
  // add the \r when writing files that are of 
  // line oriented nature.  We probably should
  // remove the code all together, but since it is
  // here, we keep it in. See the following for an explanation
  // https://stackoverflow.com/questions/1535922/c-change-newline-from-crlf-to-lf
  // Note that we keep crnl conversion for readline as it doesn't
  // harm and may be useful in case of oddities.
  bis(rwm->m4flags, RWL_P4_SLASHCONVERT
  			|RWL_P4_CRNLREADLINE
  			// |RWL_P4_CRNLSTRING
  			// |RWL_P4_CRNLWRITELINE
			// |RWL_P4_CRNLGENERAL
			);
  //rwm->lineend = (text *) "\r\n";
#endif

  /* tell the parsers about rwm and vice versa */
  rwlylex_init_extra(rwm, &yyscanner);
  rwm->rwlyscanner = yyscanner;
  rwlzlex_init_extra(rwm, &zzscanner);
  rwm->rwlzscanner = zzscanner;
  // Get RWLOADSIMINIT
  rwlinitfromenv(rwm);
#ifdef RWL_GEN_EXEC
  rwm->loc.fname = (text *) rwlexecname;
  rwm->loc.lineno = 1;
  rwm->loc.errlin = 0;
  rwlalex_init_extra(rwm, &aascanner);
  rwm->rwlascanner = aascanner;
#else
  rwm->loc.fname = (text *) "\"program startup\"";
#endif


  rwm->argc = (ub4) main_ac;
  rwm->argv = (text **)main_av;
  /* first walk through arguments to get -D debug
   * and a few more essential options
   */
  bis(rwm->m4flags, RWL_P4_OPTRESTART);
  while( (opt=rwlgetopt(rwm,rwloptions)))
  {
    switch(opt)
    {
      case RWL_ARG_MUTE:
	rwlerrormute(rwm, (ub4) rwlatoi(rwm->optval), 1);
      break;

      case 'D': /* add debug bit */
      rwm->mflags |= rwldebugconv(rwm, rwm->optval);
      if (bit(rwm->mflags,RWL_DEBUG_YYDEBUG))
        rwlydebug = 1;
          break;

      case RWL_ARG_PRETEND_GEN_BANNER: // --pretend-gen-banner
#ifndef RWL_GEN_EXEC
        rwm->genbanner = rwm->optval;
	bis(rwm->m3flags, RWL_P3_PRETGEN);
#endif
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

#ifdef RWL_GEN_EXEC
  rwlinit1(rwm, 0);
#else
  rwlinit1(rwm, (text *)main_av[0]);
#endif

  OCIClientVersion( &rwm->cvrel, &rwm->cvupd
		  , &rwm->cvrev, &rwm->cvinc, &rwm->cvext);

#ifdef RWL_GEN_EXEC
  // scan the in-memory file for arguments and options

  bis(rwm->m2flags, RWL_P2_SCANFIRST|RWL_P2_SCANARG);
  rwlascanstring(rwm, rwlexecdata);
  bic(rwm->m2flags, RWL_P2_SCANFIRST|RWL_P2_SCANARG);

#endif
  // before calling getopt for real
  // look for anything that looks like a real file
  // such that we can scan that file for $argument and $option
  for (i = 0;  i<(ub4) main_ac; i++)
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
	"%s%s Release %d.%d.%d.%d %s for %s using client %d.%d %s%s"
	, rwm->lineend
#ifdef RWL_GEN_EXEC 
	, rwlexecbanner
#else
	, (bit(rwm->m3flags, RWL_P3_PRETGEN) ? rwm->genbanner : (text *)"RWP*Load Simulator")
#endif
      , RWL_VERSION_MAJOR
      , RWL_VERSION_MINOR
      , RWL_VERSION_RELEASE
      , rwlpatch
      , RWL_VERSION_TEXT
      , RWL_ARCH_NAME
      , RWL_OCI_VERSION, RWL_OCI_MINOR
      , strtim, rwm->lineend);
    else
      printf(
      "%s%s Release %d.%d.%d.%d %s %s%s"
        , rwm->lineend
#ifdef RWL_GEN_EXEC 
	, rwlexecbanner
#else
	, (bit(rwm->m3flags, RWL_P3_PRETGEN) ? rwm->genbanner : (text *)"RWP*Load Simulator")
#endif
      , RWL_VERSION_MAJOR
      , RWL_VERSION_MINOR
      , RWL_VERSION_RELEASE
      , rwlpatch
      , RWL_VERSION_TEXT
      , strtim, rwm->lineend);

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
    lngopt = rwlalloc(rwm, sizeof(rwl_option) * (rwloptcount + argoptcount));
    memcpy(lngopt, rwloptions, sizeof(rwl_option) * rwloptcount);
    usrargl = rwm->usrargl;
    uuu = rwloptcount-1; // The last is a zero entry
    while (usrargl)
    {
      lngopt[uuu].longn = (char *)usrargl->argname;
      lngopt[uuu].shortn  = (RWL_USER_ARG_OFFSET + uuu + 1 - rwloptcount);
      if (bit(usrargl->argflags, RWL_USER_ARG_NOARG))
      { // add both the option and --no-option
	text *noarg = rwlalloc(rwm, rwlstrlen(usrargl->argname) + 4 /*sizeof("no-") and nul*/);
	lngopt[uuu].optbits  = RWL_OPT_NOLARG;
	uuu++;
	rwlstrcpy(noarg, "no-");
	rwlstrcpy(noarg+3, usrargl->argname);
	lngopt[uuu].longn = (char *)noarg;
	lngopt[uuu].shortn  = (RWL_USER_ARG_OFFSET + uuu + 1 - rwloptcount);
	lngopt[uuu].optbits  = RWL_OPT_NOLARG;
      }
      else
	lngopt[uuu].optbits  = RWL_OPT_HASARG;
      uuu++;

      usrargl = usrargl->nextarg;
    }
  }
  else
    lngopt = rwloptions;


  if (rwm->lngargl)
  {
    // there are arguments from first rwl file
    rwl_arglist *arp;
    ub4 a, llc = 0;
    // count them
    arp = rwm->lngargl;
    while (arp)
    {
      llc++;
      arp = arp->nextarg;
    }
    rwm->argc = (ub4) main_ac + llc;
    rwm->argv = rwlalloc(rwm, (1 + (ub4) main_ac) * (sizeof(char *)));
    rwm->argv[0] = (text *)main_av[0];
    // and add them at positions 1 .. llc
    a = llc;
    arp = rwm->lngargl;
    while (arp)
    {
      rwm->argv[a] = arp->argname; // -- was added in rwlarglex.l
      arp = arp->nextarg;
      a--;
    }
    // and copy all those from main
    for (a=1; a<(ub4) main_ac; a++)
      rwm->argv[a+llc] = (text *)main_av[a];
  }

  // walk through arguments to count non options
  // this is necessary as we cannot do proper processes
  // until we have those added from $longoption etc
  bis(rwm->m4flags, RWL_P4_OPTRESTART | RWL_P4_OPTNEWCOUNT);
  while(rwlgetopt(rwm,lngopt))
    ;
 
  /* now walk through arguments to get values
   * that must be known when rwlinit2 is called
   * and to create the newarg array
   */
  bis(rwm->m4flags, RWL_P4_OPTRESTART | RWL_P4_OPTNEWCOPY);
  while( (opt=rwlgetopt(rwm,lngopt)))
  {
    switch(opt)
    {
      case RWL_ARG_SQLLOGGING_STDERR: // --sqllogging-stderr
	if (bit(rwm->m4flags, RWL_P4_SQLLOGGING))
	  rwlerror(rwm, RWL_ERROR_SQL_LOGGING_ALREADY);
	else
	  rwm->sqllogfile = stderr;
	bis(rwm->m4flags, RWL_P4_SQLLOGGING);
      break;

      case RWL_ARG_SQLLOGGING_STDOUT: // --sqllogging-stdout
	if (bit(rwm->m4flags, RWL_P4_SQLLOGGING))
	  rwlerror(rwm, RWL_ERROR_SQL_LOGGING_ALREADY);
	else
	  rwm->sqllogfile = stdout;
	bis(rwm->m4flags, RWL_P4_SQLLOGGING);
      break;

      case RWL_ARG_SQLLOGGING_FILE: // --sqllogging-file
	if (bit(rwm->m4flags, RWL_P4_SQLLOGGING))
	  rwlerror(rwm, RWL_ERROR_SQL_LOGGING_ALREADY);
	else
	{
	  text *rfn = rwlenvexp(rwm->mxq, 0, rwm->optval);
	  if (!rfn || !(rwm->sqllogfile=rwlfopen(rwm->mxq, 0, rfn,"w")))
	  {
	    char etxt[100];
	    if (0!=rwlstrerror(errno, etxt, sizeof(etxt)))
	      strcpy(etxt,"unknown");
	    rwlerror(rwm, RWL_ERROR_CANNOTOPEN_FILEWRITE, rfn, etxt);
	  }
	  else
	    bis(rwm->m4flags, RWL_P4_SQLLOGGING|RWL_P4_SQLLOGFILE);
	}
      break;

      case RWL_ARG_SQLLOGGING_APPEND: // --sqllogging-append
	if (bit(rwm->m4flags, RWL_P4_SQLLOGGING))
	  rwlerror(rwm, RWL_ERROR_SQL_LOGGING_ALREADY);
	else
	{
	  text *rfn = rwlenvexp(rwm->mxq, 0, rwm->optval);
	  if (!rfn || !(rwm->sqllogfile=rwlfopen(rwm->mxq, 0, rfn,"a")))
	  {
	    char etxt[100];
	    if (0!=rwlstrerror(errno, etxt, sizeof(etxt)))
	      strcpy(etxt,"unknown");
	    rwlerror(rwm, RWL_ERROR_CANNOTOPEN_FILEWRITE, rfn, etxt);
	  }
	  else
	    bis(rwm->m4flags, RWL_P4_SQLLOGGING|RWL_P4_SQLLOGFILE);
	}
      break;

      case 'W': /* Include error time */
        bis(rwm->m2flags, RWL_P2_ERRORWTIM);
      break;

      case 'u': /* public search */
#ifndef RWL_GEN_EXEC
        bis(rwm->m2flags, RWL_P2_PUBLICSEARCH);
#endif
      break;

      case 'S': /* use --set-action */
        if (bit(rwm->m2flags, RWL_P2_SETACTION))
	  bis(rwm->m2flags, RWL_P2_SETACTRESET);
	else
	  bis(rwm->m2flags, RWL_P2_SETACTION);
      break;

      case RWL_ARG_SET_ACTION_RESET: /* --set-action-reset */
	bis(rwm->m2flags, RWL_P2_SETACTRESET | RWL_P2_SETACTION);
      break;

      case 'E': /* Event notification */
        bis(rwm->m2flags, RWL_P2_EVTNOTIF);
      break;

      case 'L': 
	rwm->maxlocals = (ub4) rwlatoi(rwm->optval) + 1; // plus 1 for return value
      break;

#ifndef RWL_GEN_EXEC
      case 'A': 
	rwm->posargs = (ub4) rwlatoi(rwm->optval);
      break;

      case 'F': 
	rwm->fileargs = (ub4) rwlatoi(rwm->optval);
      break;
#endif

      case 'C': 
	rwm->maxcode = (ub4) rwlatoi(rwm->optval);
      break;

      case 'I': 
	rwm->maxident = (ub4) rwlatoi(rwm->optval);
      break;

      case 'K': 
#ifdef RWL_GEN_EXEC
	rwlerror(rwm, RWL_ERROR_NOT_IN_GEN_EXEC, "-K option");
#else
        {
	  ub4 klen ;
	  rwm->komment = rwm->optval;
	  if ((klen=(ub4)rwlstrlen(rwm->komment)) > RWL_MAX_KOMMENT)
	  {
	    rwlerror(rwm, RWL_ERROR_KOMMENT_TOO_LONG, klen, RWL_MAX_KOMMENT);
	    rwm->komment[RWL_MAX_KOMMENT] = 0;
	  }
	  bis(rwm->m2flags, RWL_P2_KKSET);
	}
#endif
      break;

      case 'B': /* maximum readline line */
	rwm->maxreadlen = (ub4) rwlatoi(rwm->optval);
      break;

      case 'p': /* set procno */
	rwm->procno = (ub8) rwlatosb8(rwm->optval);
      break;

      case 'k': 
#ifdef RWL_GEN_EXEC
	rwlerror(rwm, RWL_ERROR_NOT_IN_GEN_EXEC, "-k option");
#else
	rwm->reskey = rwm->optval;
	bis(rwm->m2flags, RWL_P2_KKSET);
#endif
      break;


    }
  }

#ifdef RWL_GEN_EXEC
  rwm->publicdir = 0;
#else
  rwlinit2(rwm, (text *)main_av[0]);
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
      dotfil = rwlalloc(rwm,strlen(home)+strlen(RWL_DIRSEPSTR ".rwloadsim.rwl")+1);
      sprintf(dotfil,"%s" RWL_DIRSEPSTR ".rwloadsim.rwl", home);
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

#ifndef RWL_GEN_EXEC
  // because we may have read dotfil
  rwm->loc.fname = (text *) "\"program startup\"";
#endif
  rwm->loc.lineno = rwm->loc.errlin = 0;

  if (!rwm->maxcode) rwm->maxcode = RWL_MAX_CODE;
  if (!rwm->maxident) rwm->maxident = RWL_MAX_VAR;
  if (!rwm->maxreadlen) rwm->maxreadlen = RWL_MAXREADLEN;

  rwm->code = rwlalloc(rwm, rwm->maxcode*sizeof(rwl_code));

  mxq->evar = rwlalloc(rwm, rwm->maxident*sizeof(rwl_identifier));

#ifdef RWL_GEN_EXEC
  // in generated, all are positional by defalt
  rwm->fileargs = 0;
  for (abeg=1, i=rwm->newind; i < rwm->newargc; abeg++, i++)
  {
    // but a ; or -- marker may tell otherwise
    if (0==rwlstrcmp(rwm->newargv[i],"--") || 0==rwlstrcmp(rwm->newargv[i],";"))
    {
      rwm->fileargs = abeg;
      break;
    }
  }
  rwm->posargs = (ub4) (rwm->newargc - rwm->newind) - rwm->fileargs;
#else
  if (bit(rwm->m3flags, RWL_P3_GENERATE))
  {
    if (rwm->posargs || rwm->fileargs)
    {
      rwlerror(rwm, RWL_ERROR_GEN_EXEC_ONLY_POS);
      rwm->fileargs = rwm->posargs = 0;
    }
  }

  if (!rwm->fileargs && !rwm->posargs)
  { 
    // If user didn't specify these counts, see if there is an "--" or ";" marker
    for (abeg=1, i=rwm->newind; i < rwm->newargc; abeg++, i++)
    {
      if (0==rwlstrcmp(rwm->newargv[i],"--") || 0==rwlstrcmp(rwm->newargv[i],";"))
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
    if ((ub4)(rwm->newargc-rwm->newind) < rwm->fileargs)
    {
      rwlerror(rwm, RWL_ERROR_NOT_ENOUGH_ARGUMENTS ,
	"rwloadsim"
      );
      goto errorexit;
    }
    else
      rwm->posargs = (ub4) (rwm->newargc - rwm->newind) - rwm->fileargs;
  }
#endif

  rwlinit3(rwm);
  rwlinitxeqenv(mxq);
  if (bit(rwm->mflags, RWL_DEBUG_MAIN))
    rwlyt2assert(rwm); // only run when some debug is wanted

  mxq->defasiz = RWL_DEFASIZ;

  if (!rwlinitoci(rwm))
    goto errorexit;

  if (rwm->posargs+rwm->newind > rwm->newargc)
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
  for (abeg=1, i=rwm->newargc - rwm->posargs; i < rwm->newargc ; abeg++, i++)
  {
    sb4 vno;
    ub8 len;
    rwl_value *dv;
    text dollar[10]; // arg name $1, $2, etc
    snprintf((char *)dollar,sizeof(dollar)-1, "$%d", abeg);
    len = rwlstrlen(rwm->newargv[i])+1; // length including null
    rwm->declslen = (sb8) len;
    vno = rwladdvar(rwm, rwlstrdup(rwm, dollar), RWL_TYPE_STR, RWL_IDENT_INTERNAL);
    if (vno<0)
      rwlsevere(rwm,"[rwlmain-dollarvar:%s;%d]", dollar, vno);
    else
    {
      if (1 == abeg)
        rwm->mxq->arg1var = vno;
      dv = &rwm->mxq->evar[vno].num;
      rwlinitstrvar(rwm->mxq, dv);
      dv->ival = rwlatosb8((text *)rwm->newargv[i]);
      dv->dval = rwlatof((text *)rwm->newargv[i]);
      rwlstrnncpy(dv->sval, (text *)rwm->newargv[i], len);
    }

  }

  xfile = 0; /* Use a temporary file for i,d,x options */

  /* do the full option parse */
  bis(rwm->m4flags, RWL_P4_OPTRESTART | RWL_P4_OPTPRINTERR);
  anyhelp = normalhelp = 0; /* help? */
#ifdef RWL_GEN_EXEC
  listgen = 0;
#endif
  while( (opt=rwlgetopt(rwm,lngopt)))
  {
#ifndef RWL_GEN_EXEC
    char *scan_hostname;
    double scan_startseconds;
#endif
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
      case RWL_ARG_STATISTICS: /* stats from long optoins */
#ifdef RWL_GEN_EXEC
	rwlerror(rwm, RWL_ERROR_NOT_IN_GEN_EXEC, "-s option");
#else
        bis(rwm->mflags, RWL_P_STATISTICS);
#endif
      break;

      case RWL_ARG_HISTOGRAMS: /* --histograms */
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
	rwm->oermaxstat = (sb4) rwlatoi(rwm->optval);
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

      case RWL_ARG_PERSECOND: /* --persecond */
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
#ifdef RWL_GEN_EXEC
	rwlerror(rwm, RWL_ERROR_NOT_IN_GEN_EXEC, "-e option");
#else
        bis(rwm->m2flags, RWL_P2_NOEXEC);
#endif
      break;

      case 'w': /* quiet about deprecated code */
#ifdef RWL_GEN_EXEC
	rwlerror(rwm, RWL_ERROR_NOT_IN_GEN_EXEC, "-w option");
#else
        bis(rwm->m2flags, RWL_P2_NOWARNDEP);
#endif
      break;

      case 'q': /* quiet */
        bis(rwm->mflags, RWL_P_QUIET);
      break;

      case 'Z': // --flush-stop
#ifdef RWL_GEN_EXEC
	rwlerror(rwm, RWL_ERROR_NOT_IN_GEN_EXEC, "-Z option");
#else
	{
	  int tmp = rwlatoi(rwm->optval);
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
	  int tmp = rwlatoi(rwm->optval);
	  if (tmp<1) 
	    rwlerror(rwm, RWL_ERROR_FLUSH_EVERY_LOW, 1);
	  else
	    rwm->flushevery = (ub4) tmp;
	}
#endif
      break;

      case 'c': /* default clock offset */
	rwm->adjepoch = rwlatof(rwm->optval);
      break;

      case 'a': /* default array size */
	mxq->defasiz = (ub4) rwlatoi(rwm->optval);
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
	fprintf(xfile, "double %s;\n", rwm->optval);
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
	fprintf(xfile, "integer %s;\n", rwm->optval);
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
	fprintf(xfile, "%s\n", rwm->optval);
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
	    bis(rwm->dbsav->flags, RWL_DB_DEFAULT);
	    rwm->defdb = rwm->dbname = rwm->dbsav->vname = RWL_DEFAULT_DBNAME;
	    rwm->dbsav->pooltext = "unset";
	    // rwm->dbsav->cclass = rwlstrdup(rwm, (text *)RWL_DEFAULT_CCLASS);  // must be able to free
	    rwm->dbsav->stmtcache = RWL_DEFAULT_STMTCACHE;
	    // maxidead is zero for the db on command line
	    rwm->defdb = rwm->dbname = RWL_DEFAULT_DBNAME;
	    rwm->mxq->evar[ld].vdata = rwm->dbsav;
	    cs = rwlstrchr(rwm->optval,'@');
	    if (cs)
	    {
	      rwm->dbsav->connect = rwlstrdup(rwm, cs+1);
	      rwm->dbsav->conlen = (ub4) rwlstrlen(rwm->dbsav->connect);
	      *cs=0;
	    }
	    pw = rwlstrchr(rwm->optval,'/');
	    if (pw)
	    {
	      rwm->dbsav->password = rwlstrdup(rwm, pw+1);
	      // clear / and password
	      blanklen = rwlstrlen(pw) + 1;
	      memset(pw,0,blanklen);
	    }
	    rwm->dbsav->username = rwlstrdup(rwm, rwm->optval);
	    // clear username
	    blanklen = rwlstrlen(rwm->optval);
	    memset(rwm->optval,0,blanklen);
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
        rwm->argX = (ub4) rwlatoi(rwm->optval);
      break;

      case 'Y': 
        rwm->argY = (ub4) rwlatoi(rwm->optval);
      break;

      case 'T': /* vi tags file createion */
#ifdef RWL_GEN_EXEC
	rwlerror(rwm, RWL_ERROR_NOT_IN_GEN_EXEC, "-T option");
#else
	rwm->vitagsfile = rwm->optval;
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
	  rwm->Mname = rwm->optval;
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
	  text *rfn = rwlenvexp(rwm->mxq, 0, rwm->optval);
	  FILE *rfile;
	  if (!rfn || !(rfile=rwlfopen(rwm->mxq, 0, rfn,"r")))
	  {
	    rwlerror(rwm, RWL_ERROR_FILE_NOT_OPEN, rfn);
	  }
	  else
	  {
	    int q;
	    scan_startseconds = 0.0;
	    scan_hostname = 0;
	    bis(rwm->mflags, RWL_P_MEXECUTE);
	    if (3 !=  (q=fscanf(rfile, RWL_MFLAG_FORMAT,&rwm->runnumber, &scan_startseconds, &scan_hostname)))
	      rwlsevere(rwm,"[rwlmain-mexbadscan:%s;%d]", rfn, q);
	    (void) fclose(rfile);
	  handlemultiexecute:
	    if (!rwm->hostname || !scan_hostname)
	    {
	      rwlsevere(rwm,"[rwlmain-nullhostmulxeq:0x%p;0x%p]", rwm->hostname, scan_hostname);
	    }
	    else
	    {
	      rwlstrnncpy(rwm->hostname, (text *)scan_hostname, RWL_HOSTNAME_LEN);
	      free(scan_hostname);
	    }
	    rwm->adjepoch = scan_startseconds - rwlsinceepoch(rwm);
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
	  scan_startseconds = 0.0;
	  scan_hostname = 0;
	  bis(rwm->mflags, RWL_P_MEXECUTE);
	  sscanf((char *)rwm->optval, RWL_MFLAG_FORMAT,&rwm->runnumber, &scan_startseconds, &scan_hostname);
	  goto handlemultiexecute;
	}
#endif
	break;

#ifdef RWL_GEN_EXEC
      // In generated code, make -h/--help just be the help on any
      // userswitch/useroption, and require --fullhelp to also 
      // get the standard ones
      case RWL_ARG_FULLHELP: //also --fullhelp
        normalhelp++;
	// fall thru
      case 'h': //also --help
      case 'H': //also --userhelp
        anyhelp++;
      break;

      case RWL_ARG_LIST_GENERATED: // --list-generated
        listgen = 1;
      break;
#else
      case 'h': //also --help
        if (bit(rwm->m3flags, RWL_P3_PRETGEN))
	{
	  anyhelp++;
	  break;
	}
	// fall thru
      case RWL_ARG_FULLHELP: //also --fullhelp
        normalhelp++;
	// fall thru
      case 'H': //also --userhelp
        anyhelp++;
      break;

      case RWL_ARG_LIST_GENERATED:
        if (bit(rwm->m3flags, RWL_P3_GENERATE))
	  rwlerror(rwm, RWL_ERROR_NOT_FOR_GEN_EXEC, "--list-generated");
	else
	  rwlerror(rwm, RWL_ERROR_BAD_OPTION, "--list-generated");
      break;

#endif

      case RWL_ARG_GENERATE: // --generate
#ifdef RWL_GEN_EXEC
	rwlerror(rwm, RWL_ERROR_NOT_IN_GEN_EXEC, "--generate option");
#else
        bis(rwm->m3flags, RWL_P3_GENERATE|RWL_P3_GENERATE_OK);
        bis(rwm->m2flags, RWL_P2_NOEXEC);
	rwlerrormute(rwm, RWL_ERROR_NOEXEC, 0);
        rwm->genfile = rwlstrdup(rwm, rwlwinslash(rwm->mxq,rwm->optval));
#endif
      break;

      case RWL_ARG_GENERATE_NAME: // --generate-name
#ifdef RWL_GEN_EXEC
	rwlerror(rwm, RWL_ERROR_NOT_IN_GEN_EXEC, "--generate-name option");
#else
        rwm->genname = rwm->optval;
#endif
      break;

      case RWL_ARG_GENERATE_COMMAND: // --generate-command
#ifdef RWL_GEN_EXEC
	rwlerror(rwm, RWL_ERROR_NOT_IN_GEN_EXEC, "--generate-command option");
#else
        rwm->gencommand = rwm->optval;
#endif
      break;

      case RWL_ARG_GENERATE_BANNER: // --generate-banner
#ifdef RWL_GEN_EXEC
	rwlerror(rwm, RWL_ERROR_NOT_IN_GEN_EXEC, "--generate-banner option");
#else
        rwm->genbanner = rwm->optval;
#endif
      break;

      case RWL_ARG_GENERATE_DIRECTORY: // --generate-directory
#ifdef RWL_GEN_EXEC
	rwlerror(rwm, RWL_ERROR_NOT_IN_GEN_EXEC, "--generate-banner option");
#else
        rwm->gendirectory = rwm->optval;
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
	  oo = (text *) lngopt[(ub4)opt - RWL_USER_ARG_OFFSET - 1 + rwloptcount].longn;
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
	        usrargl->argvalue = rwm->optval;
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
    if (usrargl && arglfiln && !bit(rwm->m3flags, RWL_P3_PRETGEN))
      printf("RWP*Load Simulator user options and help from %s:\n", arglfiln);
    // print any user provided help text
    hl = rwm->helphead;
    while (hl || usrargl)
    {
      if ((hl && usrargl && (hl->helpseq < usrargl->helpseq)) || (hl && !usrargl))
      {
	puts((char *)hl->helptext);
	hl = hl->nexthlp;
      }
      if ((hl && usrargl && (hl->helpseq > usrargl->helpseq)) || (usrargl && !hl))
      {
	puts((char *)usrargl->arghelp);
	rwlfree(rwm, usrargl->arghelp); // shut up parfait
	usrargl = usrargl->nextarg;
      }
      if (hl && usrargl && hl->helpseq == usrargl->helpseq)
      {
	rwlsevere(rwm,"[rwlmain-badhelp;%d;%d]", hl->helpseq, rwm->helpseq);
	hl = hl->nexthlp;
	usrargl = usrargl->nextarg;
      }
    }

      
    exit(0);
  }

#ifdef RWL_GEN_EXEC
  if (listgen)
  {
    fputs(rwlexecdata, stdout);
    exit(0);
  }
#endif
  
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

#ifndef RWL_GEN_EXEC
  // Are we generating
  if (bit(rwm->m3flags, RWL_P3_GENERATE))
  {
    if (!rwm->genname) // not given by user 
    {
      if ((rwm->genname = rwlstrrchr(rwm->genfile,RWL_DIRSEPCHR)))
        rwm->genname++;
      else
	rwm->genname = rwm->genfile;
      if (rwlstrchr(rwm->genname, RWL_DIRSEPCHR))
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
  if (rwm->newind>=rwm->newargc - rwm->posargs)
    rwlerror(rwm, RWL_ERROR_NO_INPUT);

  if (rwm->adjepoch <0.0)
  {
    rwlerror(rwm, RWL_ERROR_CLOCKOFF_NEGATIVE, rwm->adjepoch);
    // don't do this: rwm->adjepoch = 0.0;
  }
  if (rwm->adjepoch >600.0)
  {
    rwlerror(rwm, RWL_ERROR_CLOCKOFF_UNREASONABLE, rwm->adjepoch, 600.0);
    rwm->adjepoch = RWL_DEFAULT_ADJ_EPOCH;
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
      if (!(dn = (text *) rwlmkdtemp(rwm, template)))
      {
	if (0!=rwlstrerror(errno, etxt, sizeof(etxt)))
	  strcpy(etxt,"unknown");
	rwlerror(rwm, RWL_ERROR_GENERIC_OS, "mkdtemp", etxt);
	bic(rwm->m3flags, RWL_P3_GENERATE|RWL_P3_GENERATE_OK);
	goto cannotcreatec;
      }
      rwm->gentmpdir = rwlstrdup(rwm, dn);
    }
    snprintf((char *)cfilnam, sizeof(cfilnam), "%s/%s.c", rwm->gentmpdir, rwm->genname);
    rwm->gencfile = rwlstrdup(rwm, rwlwinslash(rwm->mxq,cfilnam));
    if (!(cyt = rwlfopen(rwm->mxq, 0, rwm->gencfile,  "w")))
    {
      char etxt[100];
      if (0!=rwlstrerror(errno, etxt, sizeof(etxt)))
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
  for (abeg=1, i=rwm->newind; i < (rwm->newargc - rwm->posargs); abeg++, i++)
  {
    if (bit(mxq->errbits,RWL_ERROR_SEVERE) || bit(rwm->m3flags, RWL_P3_USEREXIT) || rwlstopnow)
      goto endparse;
    if (!rwlstrcmp(rwm->newargv[i],"-"))
      rwlerror(rwm, RWL_ERROR_NO_STDIN);
    else if (rwlstrcmp(rwm->newargv[i],"--")&&rwlstrcmp(rwm->newargv[i],";")) // Just ignore -- and ;
    { 
      if (0==rwlstrncmp(rwm->newargv[i],"-x",2))
      {
#ifdef RWL_GEN_EXEC
	rwlerror(rwm, RWL_ERROR_NOT_IN_GEN_EXEC, "-x argument");
#else
        if (rwm->newargv[i][2])
	{
	  if (!(xfile = tmpfile()))
	    rwlerror(rwm, RWL_ERROR_CANNOT_CREATE_TEMPFILE);
	  else
	  {
	    char cla[20];
	    fprintf(xfile, "%s\n", rwm->newargv[i]+2);
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
	text *rfn = rwlenvexp1(rwm->mxq, 0, (text *)rwm->newargv[i]
        , (ub4) ( RWL_ENVEXP_PATH 
	  | (bit(rwm->m2flags, RWL_P2_PUBLICSEARCH) ? RWL_ENVEXP_PUBLIC : 0))
	);
	if (!rfn || !(xfile = rwlfopen(rwm->mxq, 0, rfn, "r")))
	{
	  if ((1!=abeg || !firstbad)) // don't report first file if already done
	    rwlerror(rwm, RWL_ERROR_FILE_NOT_OPEN, (text *)rwm->newargv[i]);
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
	      if (0!=rwlstrerror(errno, etxt, sizeof(etxt)))
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
	  if (i==rwm->newind) // is this the first file being rescanned?
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
	  if (!bit(rwm->m3flags, RWL_P3_GENERATE_OK))
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
  rwm->loc.fname = (text *) rwlexecname;
  rwm->loc.lineno = 1;
  rwm->loc.errlin = 0;
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
  if (!bit(rwm->mxq->errbits, RWL_ERROR_STOP_BEFORE_RUN) && bit(rwm->m3flags, RWL_P3_GENERATE_OK))
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
      if (0!=rwlstrerror(errno, etxt, sizeof(etxt)))
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
      , rwm->libdir , rwm->libdir
      , rwm->genfile
      , rwm->gencfile, RWL_OCI_VERSION);
    sysres = system(command);
    if (-1 == sysres)
    {
      rwlerror(rwm, RWL_ERROR_GENERIC_OS, "system", "<unknown>");
      wstat = 1;
    }
    else
      wstat = RWL_WEXITSTATUS(sysres);

    if (wstat)
      rwlerror(rwm, RWL_ERROR_CANNOT_LINK, rwm->lineend, command, rwm->lineend, wstat);
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
	fprintf(Mfile, RWL_PFLAG_FORMAT, rwm->runnumber, rwlsinceepoch(rwm) + rwm->adjepoch, rwm->hostname);
	fclose(Mfile);
      }
      else
      {
	char etxt[100];
	if (0!=rwlstrerror(errno, etxt, sizeof(etxt)))
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

  // close sqllogfile if a real file
  if (bit(rwm->m4flags, RWL_P4_SQLLOGFILE))
  {
    fclose(rwm->sqllogfile);
  }
  bic(rwm->m4flags, RWL_P4_SQLLOGGING|RWL_P4_SQLLOGFILE);
  rwm->sqllogfile = 0;

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


