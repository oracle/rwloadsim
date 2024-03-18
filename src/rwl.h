/*
 * RWP*Load Simulator
 *
 * Copyright (c) 2017, 2024 Oracle Corporation
 * Licensed under the Universal Permissive License v 1.0
 * as shown at https://oss.oracle.com/licenses/upl/
 *
 * Real World performance Load simulator common header
 *
 * rwl.h
 *
 * History
 *
 * bengsig  15-mar-2024 - $connecterror:accept
 * bengsig  13-mar-2024 - Save sql_id rather than a pointer to it
 * bengsig   7-mar-2024 - Development is now 3.1.3
 * bengsig   7-mar-2024 - Prepare 3.1.2
 * bengsig   7-mar-2024 - a few lob changes
 * bengsig   6-mar-2024 - include oci.h after all standard includes
 * bengsig   4-mar-2024 - atime, dtime
 * johnkenn 06-mar-2024 - readlob with offset
 * bengsig  28-feb-2024 - Change gencommand to have five arguments
 * bengsig  27-feb-2024 - winslashf2b functions
 * bengsig  20-feb-2024 - mkdtemp for Windows, etc
 * bengsig  15-feb-2024 - access Windows port
 * bengsig  14-feb-2024 - various Windows stuff
 * bengsig  14-feb-2024 - rwlyleng, rwlytext to ease debugging
 * bengsig  12-feb-2024 - \r\n on Windows
 * bengsig   6-feb-2024 - Own option processing
 * bengsig  31-jan-2024 - Provide own rand48 implementation
 * bengsig  30-jan-2024 - use *rand48_r functions, all includes in rwl.h
 * bengsig  23-jan-2024 - percentiles_oltp view
 * johnkenn 18-dec-2023 - Lob size and offset for streaming
 * bengsig  28-nov-2023 - $oraerror:nocount directive
 * bengsig   9-nov-2023 - Increase RWL_MAX_VAR
 * johnkenn 02-nov-2023 - trignometry sin, cos, atan2
 * bengsig   3-oct-2023 - Now development for 3.1.1
 * bengsig   2-oct-2023 - Releasing 3.1.0 
 * bengsig  22-sep-2023 - ampersand fixes
 * bengsig  21-sep-2023 - $errordetail:on directive
 * bengsig  20-sep-2023 - list iterator loop
 * bengsig  13-sep-2023 - ampersand replacement
 * bengsig   6-sep-2023 - sql logging
 * johnkenn 31-aug-2023 - Debugconv function header added
 * bengsig  10-aug-2023 - session pool timeout then action
 * bengsig   7-aug-2023 - rwlstatsincr better documented
 * bengsig  17-jul-2023 - rwlrem doing reminder per D. Knuth
 * bengsig  10-jul-2023 - ceil, trunc, floor functions
 * bengsig  30-jun-2023 - flushevery flushes count=0 for statisticsonly procedures
 * bengsig  21-jun-2023 - Now called 3.0.7 - eventually it will be 3.1.0
 * bengsig  19-jun-2023 - Release 3.0.6
 * bengsig  25-may-2023 - make rwlprogram known to tags/cscope
 * bengsig  15-may-2023 - statisticsonly
 * bengsig   1-may-2023 - $hostname: directive
 * bengsig  24-apr-2023 - Fix bug with plain every after queue every
 * bengsig  17-apr-2023 - Engineering notation output
 * bengsig  21-mar-2023 - Banner shows connection pool in use
 * bengsig  16-mar-2023 - Allow #undef RWL_USE_OCITHR (experimental!)
 * bengsig   1-mar-2023 - Optimize snprintf [id]format
 * bengsig   7-feb-2023 - Set hostname via -P/-M/-R
 * bengsig  11-jan-2023 - CQN Project
 * bengsig   9-jan-2023 - Bug 34952567 workaround
 * bengsig   4-jan-2023 - Add version 23
 * bengsig   2-jan-2023 - Release 3.0.5
 * bengsig  24-nov-2022 - Now development for next release
 * bengsig  24-nov-2022 - Release 3.0.4
 * bengsig  24-nov-2022 - --pretend-gen-banner (undocumented)
 * bengsig   3-nov-2022 - Harden code with rwl_type throughout
 * bengsig  31-oct-2022 - Add better queue time via $queueeverytiming:on
 * bengsig  26-oct-2022 - Add $niceabort:on directive
 * bengsig  18-oct-2022 - threads global variables
 * bengsig  12-oct-2022 - Session leak, flush times
 * bengsig  22-sep-2022 - Improve type handling in stacks
 * bengsig  19-sep-2022 - Future keywords
 * bengsig  10-aug-2022 - Output userhelp in order from rwl source file
 * bengsig  11-jul-2022 - $sessionpool_no_rlb directive
 * bengsig  28-jun-2022 - Generate project
 * bengsig  16-may-2022 - Debug bit 0x40 to printvar internal
 * bengsig  16-may-2022 - Flush local sql upon exit
 * bengsig  12-may-2022 - connect as sysdba etc
 * bengsig  11-may-2022 - Correct error pos in sql/string scan/parse
 * bengsig  09-may-2022 - Improved scan/parse error location
 * bengsig  28-apr-2022 - Add external credentials
 * bengsig  20-apr-2022 - Immediate sql concatenation is dynamic
 * bengsig  06-apr-2022 - flush array dml
 * bengsig  03-apr-2022 - Embedded sql
 * bengsig  31-mar-2022 - Main has default database if dedicated
 * bengsig  31-mar-2022 - Warn if using future sql keyword as identifier
 * bengsig  29-mar-2022 - rename rwlprintf to rwldoprintf
 * bengsig  24-mar-2022 - Immediate sql project
 * bengsig  04-mar-2022 - printf project
 * bengsig  01-mar-2022 - Implicit bind with array DML
 * bengsig  21-feb-2022 - Implicit bind and define
 * bengsig  11-jan-2021 - Add fname to oerstats when no sql
 * bengsig  25-nov-2021 - poolmin/max changes
 * bengsig  24-nov-2021 - $dbfailures directive
 * bengsig  16-aug-2021 - rwldummyonbad (code improvement)
 * bengsig  13-aug-2021 - Add break
 * bengsig  06-aug-2021 - Fix bug with return from inside cursor
 * bengsig  22-jul-2021 - Undid incorrect release number change
 * bengsig  22-jul-2021 - Make stats array insert 50 for faster flush
 * bengsig  20-jul-2021 - OCI_SUCCESS_WITH_INFO is not an error
 * bengsig  22-jun-2021 - Create 2.3.5 release
 * bengsig  22-jun-2021 - Add epochseconds
 * bengsig  21-jun-2021 - Improve error messaging on file
 * bengsig  15-jun-2021 - Add --default-threads-dedicated option
 * bengsig  10-jun-2021 - Add routine to check min values
 * bengsig  09-jun-2021 - Add modify database cursorcache/sessionpool
 * bengsig  07-jun-2021 - Fix core dump after bad expression in sql declaration
 * bengsig  08-apr-2021 - Add constants rwl_zero, etc
 * bengsig  08-apr-2021 - vname is const text *
 * bengsig  06-apr-2021 - serverrelease macro changes
 * bengsig  06-apr-2021 - Now 2.3.4
 * bengsig  25-mar-2021 - elseif, enum for rwl_code_t
 * bengsig  08-mar-2021 - Add cursor leak
 * bengsig  03-mar-2021 - Only set connection class in authp when changed
 * bengsig  01-mar-2021 - Enable yydebug via -D 0x4
 * bengsig  18-feb-2021 - Use bison 3 syntax (which desupports 2)
 * bengsig  10-feb-2021 - watermark
 * bengsig  28-jan-2021 - rwlcclassgood2 function prototype
 * bengsig  21-jan-2021 - add enum for rwl_pooltype
 * bengsig  20-jan-2021 - connectionpool
 * bengsig  19-jan-2021 - Allow while .. loop in addition to while .. execute
 * bengsig  18-jan-2021 - Incorrect version macro check
 * bengsig  13-jan-2021 - Banner shows UTC unless -t option
 * bengsig  11-jan-2021 - Switch to 2.3.1
 * bengsig  04-jan-2021 - Localvar
 * bengsig  23-dec-2020 - 11.2 on Solaris
 * bengsig  22-dec-2020 - rwlhex2ub8
 * bengsig  21-dec-2020 - parfait
 * bengsig  16-dec-2020 - exit
 * bengsig  02-dec-2020 - Directory structure change
 * bengsig  09-nov-2020 - ora01013:continue
 * bengsig  09-nov-2020 - ora01013:continue
 * bengsig  04-nov-2020 - Allow string length to be immediate_expression
 * bengsig  07-oct-2020 - Completely remove sharding that wasn't working anyway
 * bengsig  05-oct-2020 - Warn about double uniform/compare assign to integer
 * bengsig  23-sep-2020 - for .. loop syntax for control loops
 * bengsig  17-sep-2020 - Correct $longoption:publicsearch
 * bengsig  04-sep-2020 - Solaris port
 * bengsig  02-sep-2020 - Use enum rwl_type, rwl_vsalloc, rwl_stack_t
 * bengsig  31-aug-2020 - Add (dedicated) bounce/reconnect
 * bengsig  28-aug-2020 - Add zinam to rwl_main
 * bengsig  07-jul-2020 - Add instrb
 * bengsig  16-jun-2020 - Add serverrelease
 * bengsig  29-may-2020 - Warn and cut too long komment
 * bengsig  29-may-2020 - Add instance name to oer stats
 * bengsig  18-may-2020 - $useroption etc
 * bengsig  01-apr-2020 - Regular expressions
 * bengsig  15-apr-2020 - File reading
 * bengsig  26-mar-2020 - dynamic SQL
 * bengsig  12-mar-2020 - statemark
 * bengsig  06-mar-2020 - opensessioncount
 * bengsig  19-dec-2019 - Fix DRCP bounce in main
 * bengsig  29-nov-2019 - activesessioncount
 * bengsig  18-nov-2019 - Call OCIBreak in ctrl-c handler
 * bengsig  07-oct-2019 - access function
 * bengsig  25-sep-2019 - exp, log, round
 * bengsig  23-sep-2019 - Add system
 * bengsig  12-aug-2019 - added oerstats
 * bengsig  23-aug-2019 - $if: conditional compilation
 * bengsig  16-aug-2019 - Fixed a core dump after database declaration failure
 * bengsig  07-aug-2019 - Add getenv
 * bengsig  07-aug-2019 - Add rwlexpenv function
 * bengsig  30-jul-2019 - sql_id 
 * bengsig  29-jul-2019 - Information type error
 * bengsig  11-jun-2019 - array define
 * bengsig  24-mar-2019 - Release of version 2.1
 * bengsig  24-mar-2019 - Added erlangk function
 * bengsig  07-mar-2019 - Added substrb and lengthb functions
 * bengsig  28-feb-2019 - Fix RWL-600 [rwlmutexget-notinit] race condition
 * bengsig  27-feb-2019 - Added "and expresseion" to cursor loops
 * bengsig  15-feb-2019 - Moved thread ok from flags to thrbits
 * bengsig  13-feb-2019 - added persec contineous flush
 * bengsig  06-feb-2019 - OCIPing
 * bengsig  10-may-2017 - Creation
 */


#include "rwlport.h"

#include <stdarg.h>
#include <string.h>
#include <sys/types.h>
#if RWL_OS == RWL_WINDOWS
# define _USE_MATH_DEFINES
#endif
#include <math.h>
#include <ctype.h>
#include <errno.h>
#include <stdlib.h>
#include <time.h>
#if RWL_OS != RWL_WINDOWS
# include <sys/time.h>
# include <termios.h>
# include <sys/resource.h>
# include <unistd.h>
# include <sys/utsname.h>
# include <regex.h> 
# define RWL_F_OK F_OK
# define RWL_W_OK W_OK
# define RWL_X_OK X_OK
# define RWL_R_OK R_OK
# define RWL_HOSTNAMEMAX (sizeof(((struct utsname *)0)->nodename)) // max nodename from uname
# define RWL_DIRSEPSTR "/"  // direcotry separator as a string
# define RWL_DIRSEPCHR '/'  // direcotry separator as a character
# define rwl_clock_gettime(ts) clock_gettime(CLOCK_REALTIME, (ts))
#else
# define RWL_F_OK 00
# define RWL_W_OK 02
# define RWL_X_OK 00
# define RWL_R_OK 04
# define RWL_HOSTNAMEMAX 128 // just something arbitrary
# define RWL_DIRSEPSTR "\\"  // direcotry separator as a string
# define RWL_DIRSEPCHR '\\'  // direcotry separator as a character
# define rwl_clock_gettime(ts) (timespec_get((ts), TIME_UTC) ? 0 : 1)
# include <windows.h>
extern int nanosleep(struct timespec *, int);
#endif
#include <signal.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdio.h>

#include <oci.h>

#ifdef OCI_ERROR_MAXMSG_SIZE2
# define RWL_OCI_ERROR_MAXMSG OCI_ERROR_MAXMSG_SIZE2
#else
// On Solaris 11.2, only OCI_ERROR_MAXMSG_SIZE exists
# define RWL_OCI_ERROR_MAXMSG OCI_ERROR_MAXMSG_SIZE
#endif

/* OCI version dependent stuff */
#if (OCI_MAJOR_VERSION<=10)
# error "Cannot compile in version 10 or lower"
#endif

#if (OCI_MAJOR_VERSION==11)
/* Use the versions that have limited length */
# undef RWL_USE_BIN_DEF_OCI2
# define RWLDefineByPos(s,d,e,p,v,si,t,i,rl,rc,m) OCIDefineByPos(s,d,e,p,v,(sb4)si,t,i,rl,rc,m)
# define RWLBindByPos(s,b,e,p,v,si,t,i,a,rc,ma,cl,m) OCIBindByPos(s,b,e,p,v,(sb4)si,t,i,a,rc,ma,cl,m)
# define RWLBindByName(s,b,e,bn,bl,v,si,t,i,a,rc,ma,cl,m) OCIBindByName(s,b,e,bn,bl,v,(sb4)si,t,i,a,rc,ma,cl,m)
# define RWL_MAX_STRING_LENGTH 32766
# define RWL_OCI_VERSION 11
#endif

#if (OCI_MAJOR_VERSION>=12)
/* Use the "2" versions */
# define RWL_USE_BIN_DEF_OCI2
# define RWLDefineByPos(s,d,e,p,v,si,t,i,rl,rc,m) OCIDefineByPos2(s,d,e,p,v,(sb8)si,t,i,rl,rc,m)
# define RWLBindByPos(s,b,e,p,v,si,t,i,a,rc,ma,cl,m) OCIBindByPos2(s,b,e,p,v,si,t,i,a,rc,ma,cl,m)
# define RWLBindByName(s,b,e,bn,bl,v,si,t,i,a,rc,ma,cl,m) OCIBindByName2(s,b,e,bn,bl,v,si,t,i,a,rc,ma,cl,m)
# define RWL_MAX_STRING_LENGTH (SB4MAXVAL-2)
#endif

#if (OCI_MAJOR_VERSION<18)
// Use the old call and need to define macros as none exists in oci.h
# define RWLServerRelease(s,e,b,l,t,r) OCIServerRelease((s),(e),(b),(l),(t),(r))
# define RWL_SR_1(v) ((sword)(((v) >> 24) & 0x000000ff))   
# define RWL_SR_2(v) ((sword)(((v) >> 20) & 0x0000000f))  
# define RWL_SR_3(v) ((sword)(((v) >> 12) & 0x000000ff)) 
# define RWL_SR_4(v) ((sword)(((v) >> 8) & 0x0000000f)) 
# define RWL_SR_5(v) ((sword)(((v) >> 0) & 0x000000ff)) 
#else

// The following is for 18 or later
// Use the new call and macro for first number
# define RWL_SR_1(v) OCI_SERVER_RELEASE_REL(v) 
# define RWLServerRelease(s,e,b,l,t,r) OCIServerRelease2((s),(e),(b),(l),(t),(r),OCI_DEFAULT)

# if (OCI_MAJOR_VERSION<21)
// In 19 and 20 the version macros in oci.h for number 2 until 5 incorrectly 
// compare against 19. We therefore user our own macros
#  define RWL_SR_2(v)\
  ((RWL_SR_1(v) < 18)?  ((sword)(((v) >> 20) & 0x0000000f)): ((sword)(((v) >> 16) & 0x000000ff)))
#  define RWL_SR_3(v)\
  ((RWL_SR_1(v) < 18)?  ((sword)(((v) >> 12) & 0x000000ff)): ((sword)(((v) >> 12) & 0x0000000f)))
#  define RWL_SR_4(v)\
  ((RWL_SR_1(v) < 18)?  ((sword)(((v) >> 8) & 0x0000000f)): ((sword)(((v) >> 4) & 0x0000000ff)))
#  define RWL_SR_5(v)\
  ((RWL_SR_1(v) < 18)?  ((sword)(((v) >> 0) & 0x000000ff)): ((sword)(((v) >> 0) & 0x0000000f)))    
# else // at least 21 - directly use macros from oci.h

#  define RWL_SR_2(v) OCI_SERVER_RELEASE_REL_UPD(v)
#  define RWL_SR_3(v) OCI_SERVER_RELEASE_REL_UPD_REV(v) 
#  define RWL_SR_4(v) OCI_SERVER_RELEASE_REL_UPD_INC(v) 
#  define RWL_SR_5(v) OCI_SERVER_RELEASE_EXT(v) 
# endif
#endif

#if (OCI_MAJOR_VERSION==12)
# define RWL_OCI_VERSION 12
#endif

#if (OCI_MAJOR_VERSION==18)
# define RWL_OCI_VERSION 18
#endif

#if (OCI_MAJOR_VERSION==19)
# define RWL_OCI_VERSION 19
#endif

#if (OCI_MAJOR_VERSION==20)
# define RWL_OCI_VERSION 20
#endif

#if (OCI_MAJOR_VERSION==21)
# define RWL_OCI_VERSION 21
#endif

#if (OCI_MAJOR_VERSION==23)
# define RWL_OCI_VERSION 23
#endif

#define RWL_OCI_MINOR OCI_MINOR_VERSION

#undef RWL_USE_SQL_ID
#if ((OCI_MAJOR_VERSION>12) || (OCI_MAJOR_VERSION==12 && OCI_MINOR_VERSION>=2))
# define RWL_USE_SQL_ID
#endif

#undef RWL_USE_CQN
#if (OCI_MAJOR_VERSION>=19)
// Only define this if you understand the consequences
# undef RWL_USE_CQN
#endif

// Define the following if OCISessionPool on top of OCIConnectionPool
// gets supported
#undef RWL_DO_SPONCP

#define RWL_USE_OCITHR
#undef RWL_OWN_MALLOC /* to wrap malloc/free with checks, do NOT optimize! */

// We are extensively using ub1, ub2, ub4 to store 8, 16 or 32 bits
// with declaration and defines like
// ub2 rwlflag;
// #define RWL_FLAG_BITONE 0x0001 // tell what bit 1 means
// #define RWL_FLAG_BITTWO 0x0002 // tell what bit 2 means
// #define RWL_FLAG_BTHREE 0x0004 // tell what bit 3 means
//
// The following macros are used to set, clear and test these.
// Note that typeof() is a gcc extension
//
// If you need something else, define them in rwlports.h
#ifndef bit
# define bis(flag,b) ((flag) |= (typeof(flag))(b))
# define bic(flag,b) ((flag) &= (typeof(flag))(~(b)))
# define bit(flag,b) ((flag) &  (typeof(flag))(b))
#endif

struct rwl_option
{
  const char *longn;
  ub4  optbits;
#define RWL_OPT_NOLARG 0
#define RWL_OPT_HASARG 0x00000001 // option must have agument
  ub4  shortn;
};


/* typedefs are now found in rwltypedefs.h to make cscope behave nicely */
#include "rwltypedefs.h"

#define rwl_mutex OCIThreadMutex // Just to make later changes possible

/* rwl_location is used to identify error places */
struct rwl_location
{
  ub4 lineno; /* line number */
  ub4 errlin; /* line where an error occured */
  // ub4 prevel; /* previous error line */
  text *fname; /* file name */
  ub4 inpos; // position on line
};

extern ub4 rwlgetopt(rwl_main *, rwl_option *);
extern rwl_option rwloptions[];
extern ub4 rwloptcount;

// types
enum rwl_type
{
  RWL_TYPE_NONE = 0
, RWL_TYPE_INT = 1 /* integer (sb8) */
, RWL_TYPE_DBL = 2 /* double */
, RWL_TYPE_STR = 3 /* string */
#define RWL_DEFAULT_STRLEN 128 // if length not specified
, RWL_TYPE_PROC = 4 /* procedure */
, RWL_TYPE_SQL = 5 /* sql */
, RWL_TYPE_RAST = 6 /* random string array */
, RWL_TYPE_RAPROC = 7 /* random procedure array */
, RWL_TYPE_CANCELLED = 8 /* cancelled something due to error */
, RWL_TYPE_DB = 9 /* database */
, RWL_TYPE_FILE = 10 /* file for writing */
//, RWL_TYPE_unused11 = 11 
, RWL_TYPE_FUNC = 12 /* function with return value */
, RWL_TYPE_CLOB = 13 
, RWL_TYPE_BLOB = 14 
, RWL_TYPE_NCLOB = 15 
, RWL_TYPE_RAW = 16 /* raw - currently only used under hack flag -D 0x1 */
, RWL_TYPE_STREND = 17 // not a type, only used in rwldoprintf
};

enum rwl_pooltype
{
  RWL_DBPOOL_NONE = 0
, RWL_DBPOOL_DEDICATED = 1
#define RWL_DBPOOL_DEFAULT RWL_DBPOOL_DEDICATED
, RWL_DBPOOL_SESSION = 2
, RWL_DBPOOL_POOLED = 3 /* DRCP */
#define RWL_POOLED_AT_OK /* experimental, allow at with DRCP */
, RWL_DBPOOL_RECONNECT = 4 /* logon/logof */
, RWL_DBPOOL_RETHRDED = 5 /* logon/logof in main, dedicated in threads */
, RWL_DBPOOL_CONNECT = 6
, RWL_DBPOOL_UNAVAILABLE = 7 /* used for dead sessions */
};

/* database credentials */
struct rwl_cinfo
{
  text *connect;
  ub4   conlen; // Set to the length of the connect string
  text *username;
  text *password;
  text *vname; /* name of the variable */
  rwl_pooltype pooltype;
  ub4 poolmin;
  ub4 poolmax;
  ub4 poolincr;
  char *pooltext; /* used for various printing only */
  /* these for non-pooled connection: */
  OCIServer *srvhp;
  /* session pool */
  text *spstring;
  ub4 spslen;
  OCISPool *spool;
  /* these for both : */
  OCISession *seshp; /* OCI Authentication */
  OCISvcCtx  *svchp; /* Service context */
  OCIAuthInfo *authp; /* AuthInfo context */
  OCISubscription *subhp; // Subscription context 
  text *cclass; 
# define RWL_DEFAULT_CCLASS "rwloadsim"
  
  ub4 stmtcache; /* size of statement cache */
  ub4 ptimeout; /* session/conneciton pool timeout */
#define RWL_DBPOOL_DEFAULT_TIMEOUT 60 // for ptimeout
  double wtimeout; /* sessionpool wait timeout */

#define RWL_DEFAULT_STMTCACHE 20 /* Like on OCI */
  ub4 sbmode; // mode for OCISessionBegin
  ub4 flags;
  // These are "live" flags
#define RWL_DB_DIDDML     0x0000001 /* Some DML was done */
#define RWL_DB_DIDPLSQL   0x0000002 /* some PL/SQL was done */
#define RWL_DB_DIDDDL     0x0000004 /* some DDL was done */
#define RWL_DB_INUSE      0x0000008 /* in active use */
#define RWL_DB_DEAD       0x0000010 /* Set when e.g. 3114 is received */
#define RWL_DB_BOUNCING   0x0000020 // A database is being bounced
#define RWL_DB_RESULTS    0x0000040 /* This is the results database */
#define RWL_DB_DEFAULT    0x0000080 // this is the default database
#define RWL_DB_LEAK       0x0000100 // leak a session upon release
#define RWL_DB_CQNREG     0x0000200 // cqn registration is in effect

  // These are static flags
#define RWL_DB_REQMARK    0x0001000 // requestmark option set
#define RWL_DB_STATEMARK  0x0002000 // statemark option set
#define RWL_DB_USECPOOL   0x0004000 // Set when the database uses cpool connection
#define RWL_DB_CCACHUSER  0x0008000 // use set a value for cursorcache
#define RWL_DB_CREDEXT    0x0010000 // Use OCI_CRED_EXT (for wallet authentication)
#define RWL_DB_SP_NORLB   0x0020000 // Includ the OCI_SPC_NO_RLB during OCISessionPoolCreate
#define RWL_DB_SPTOBREAK  0x0040000 // Break to end of procedure if OCISessionGet timeout
#define RWL_DB_COPY_FLAGS (RWL_DB_SPTOBREAK|RWL_DB_CREDEXT|RWL_DB_REQMARK|RWL_DB_STATEMARK|RWL_DB_USECPOOL|RWL_DB_CCACHUSER|RWL_DB_SP_NORLB)
  rwl_estack *tobreak;    // time out break routine
  sb4 errcode;	// last error code

  // stuff for connectionpool
  OCICPool *cpool;
  text *cpstring;
  ub4 cpslen;
  text *cpvname; 
#define RWL_DB_SERVERR_LEN 20
  text serverr[RWL_DB_SERVERR_LEN]; // 
};

enum rwl_vsalloc
{ 
  RWL_SVALLOC_NOT = 0 /* no buffer allocated this MUST have value 0 */
  , RWL_SVALLOC_FIX = 1 /* fixed length, e.g. variable */
  , RWL_SVALLOC_CONST = 2 /* constant */
  , RWL_SVALLOC_TEMP = 3 /* temporary */
};

/* The following structure represents a "value"
 * As we really don't distinguish between 
 * double, sb4 and string, all three representations
 * are actually found, but there will still be a
 * "dominant" type.  The dominant type comes from
 * either the actual constant value or from a 
 * variable of that type
 *
 * Note that if fields are added, you need to modify
 * the constants rwl_null, etc in rwlexprcomp.c
 */
struct rwl_value
{
  double dval;  /* double representation */
  sb8 ival;  /* sb8 representation, or bitmask for FILE */
  void *vptr; // OCILobLocator or FILE
  void *v2ptr; // used by some 
  text *sval; /* string represenataion */
  ub8 slen; /* allocated length of string */
  /* for a variable of type string
   * slen is the declared size plus 1 for the null terminator
   * so e.g. string(5) bla has slen=6
   * sval is the actual buffer 
  */
  rwl_vsalloc vsalloc; /* how was sval allocated */
  rwl_type vtype; /* dominant type - one of RWL_TYPE_{INT,DBL,STR} */
  ub1 valflags; 
#define RWL_VALUE_FILE_OPENR      0x01 /* if this is a file, it is open for read */
#define RWL_VALUE_FILE_OPENW      0x02 /* if this is a file, it is open for write */
#define RWL_VALUE_FILEISPIPE      0x04 /* if this is a file, it is a pipe */
#define RWL_VALUE_FILEREPNOTOPEN  0x08 /* set when file not open has been reported during write */
#define RWL_VALUE_FILEOPENMAIN    0x10 /* set when the file was opened in main */
  sb2 isnull; /* false when good and not NULL */
#define RWL_ISNULL (-1) // MUST match the Oracle definition
#ifdef RWL_USE_BIN_DEF_OCI2
  ub4 alen; /* used with RWL_DEBUG_USEALEN and RWL_TYPE_RAW */
#else
  ub2 alen;
#endif

};
#define RWL_VALUE_ZERO {0,0,0,0,0,0,0,0,0,0,0}

// Some frequently used values, actually found in rwlexprcomp.c
extern const rwl_value rwl_null;  // NULL as an integer
extern const rwl_value rwl_blank; // blank string that is not null
extern const rwl_value rwl_zero;  // The value 0
extern const rwl_value rwl_one;   // The value 1
// And pointers to them
#define rwl_nullp (&rwl_null)
#define rwl_blankp (&rwl_blank)
#define rwl_zerop (&rwl_zero)
#define rwl_onep (&rwl_one)

// save statistics about ORA- errors

struct rwl_oerstat
{
  sb4 oernum; 		// ORA- number
#define RWL_OERSTAT_MAX_BUF 70
#define RWL_OERINST_MAX_BUF 17 // v$instance.instance_name is varchar2(16)
  text oertxt[RWL_OERSTAT_MAX_BUF];
  text oerinst[RWL_OERINST_MAX_BUF]; 
  text *oersqn; 		// which SQL was executing
  double oersec; 		// when
  rwl_oerstat *nxtoes;     // next in linked list
};

/*
 * rwl_xeqenv - execution environment
 *
 * this contains everything that is needed on a per thread basis
 * during actual execution.  It will be allocated after all parsing
 * is done based on which threads to create
 *
 * The most important contents of this is variables, which are modified
 * by individual threads and the stack frame od local variables
 */
struct rwl_xeqenv
{
  rwl_identifier *evar; /* array of identifiers */
  ub4 varcount; /* and its size */
  rwl_value xqnum, xqnum2, xqnum3; /* Miscelaneous temp use */
  ub4 thrnum; 
  ub4 tflags;
/* flags - see mflags in rwl_main */
  ub4 t2flags; // only in threads
#define RWL_T2_ISCQNCB      0x00000001 // Is executing a CQN callback
#define RWL_T2_NDSPARE      0x00000002 // We have a spare value for normal random
  double ndspare; // spare value for normal distributed random
  ub4 errbits; /* see rwlerror.h for bit values */


  rwl_main *rwm; /* pointer to main structure */
  sb4 status; /* Filled in at every OCI call */
  ub4 defasiz; /* we put default array sizse is although there
  		       currently isn't a way to change it per thread */
#define RWL_DEFASIZ 100 /* but it will limited by memory */

  /*
   * The following declarations effectively becomes what would
   * be known as the stack frame in ordinary programming languages.
   * Entries in start[] will contain the program counter when the
   * subroutine starts executing and the locals[] array contains 
   * the an array of values of the arguments and local variables.
   * The third array contains the name of the routine we are executing
   * and is needed for proper lookup of local variables names as it
   * becomes the last argument to rwlfindvar2()/rwlfindvarug2().
   * Note that we don't support code blocks and nested local variables, 
   * all local variables (irrespective of where they are declared)
   * belong to the subroutine where they are declared
   */
#define RWL_MAX_CODE_RECURSION 42 /* should be enough */
  volatile ub4 start[RWL_MAX_CODE_RECURSION]; /* where to start executing */
  rwl_value *locals[RWL_MAX_CODE_RECURSION]; /* array of array of local stack values */
  text *xqcname[RWL_MAX_CODE_RECURSION]; 
  rwl_cinfo dummydb; // Just used for error reporting
  rwl_cinfo *savdb[RWL_MAX_CODE_RECURSION]; /* save db during the RWL_CODE_NEWDB/RWL_CODE_OLDDB wrapper */
  rwl_location *erloc[RWL_MAX_CODE_RECURSION]; /* error location, such that we have an error stack */
  ub1 pcflags[RWL_MAX_CODE_RECURSION]; /* various status flags, etc */
#define RWL_PCFLAG_CANCELCUR     0x01 // cancel a cursor 
#define RWL_PCFLAG_RETINCUR      0x02 // return inside cursor
  rwl_lilist *litail[RWL_MAX_CODE_RECURSION];
  volatile ub2 pcdepth; /* recursive depth, index to the above arrays */

  unsigned short xsubi[3]; /* for [en]rand48 */
  OCIError *errhp; // MUST be allocated per thread
  rwl_cinfo *curdb; /* database currently in use */
  rwl_cinfo *dxqdb; /* default execution database */
  sb4 vresdb; /* variable number for resdb variable */
  sb4 argcvar; /* var# of $# */
  sb4 arg1var; /* var# of $1 */
  sb4 usrvar; /* var# of USRSECONDS */
  sb4 sysvar; /* var# of SYSSECONDS */
  sb4 oraerrorvar; /* var# of oraerror */
  sb4 oraerrortextvar; /* var# of oraerrortext */
  struct sigaction *oldaction;
  rwl_oerstat *oerhead, *oertail; // head and tail of oer_stat linked list
  sb4 oercount;
  text *readbuffer; // Buffer used for readline
  text namebuf[RWL_PATH_MAX]; // STATIC buffer used for environment expansion. use strdup!!
  text slashconvert[RWL_PATH_MAX]; // used for converting slash to backslash
  sb4 clflagsvar; /* var# of i#clflags */
  sb8 *pclflags; // and pointer to the actual value
  sb4 arrivetimevar; /* var# of everytuntil */
  double *parrivetime; // and pointer
  ub8 dummyvar;
  rwl_mutex *regmut; // held while we register statements on subhp
  volatile ub4 breakcqn; 
  ub4 oraerrcount; // count of ORA- errors while session was held
  double otimesum; // sum of time spent doing OCI
  double dtimesum; // sum of dbtime from OCI_ATTR_CALL_TIME
};

/* rwl_value *rwlnuminvar(rwl_xeqenv *, rwl_identifier *)
 *
 * This function (macro) will return the correct rwl_value
 * from a given variable, which may be local or global.
 * If local, it is stored in the "stack frame", i.e.
 * xev->locals[], and if global, it is inside the 
 * identifier itself
 *
 * Note that 3val in a procedure/function is the total number
 * of local variables in that procedure/function, v3val in a local
 * variable is the index into locals[x] - see rwllocalvar().  
 */

#define rwlnuminvar(xev,v) \
    ( bit((v)->flags,RWL_IDENT_LOCAL) \
      ? xev->locals[xev->pcdepth]+(v)->v3val \
      : ( (v)->vtype==RWL_TYPE_FUNC \
          ? xev->locals[xev->pcdepth]+0 \
          : &(v)->num \
        ) \
    )

/* The following two are used when a procedure needs
 * to be called from outside an execution stack, i.e.
 * directly via rwlcoderun().  This is mostly due
 * to legacy code which does not handle local variables
 * that must be allocated by the calling environment.
 *
 * Ideally, this should be done in rwlcoderun(), but
 * there, we have no context like the rwl_variable
 * that stores the procedure.  So instead, "naked"
 * calls to rwlcoderun() are wrapped by these two.
 *
 * It is e.g. used by random procedure 
 */
void rwllocalsprepare(rwl_xeqenv *, rwl_identifier *, rwl_location *);
void rwllocalsrelease(rwl_xeqenv *, rwl_identifier *, rwl_location *);

#define RWL_MAX_IDLEN 30 /* Max length */

struct rwl_arvar // ampersand replacement variable
{
  text arvnam[RWL_MAX_IDLEN+1];
  sb4 arvnum;
  ub4 arpos;
  rwl_arvar *arnxt; // linked list
};
#define RWL_ARVAR_MAXLEN 100000  // arbitrary warning limit for total length

/* executable SQL statement
 *
 */
struct rwl_sql
{
  text *sql; /* actual sql statement text */
  ub4 sqllen; /* and its length - note that there can be zero bytes at end */
#define RWL_MAXSQL 200000 /* max lenght of one SQL statement (e.g. 1y4f4wtu63797 is just under 100k) */
  rwl_bindef *bindef; /* pointer to first bind/define definition */
  ub4 bincount; /* # binds */
  ub4 outcount; /* # bindouts */
  ub4 defcount; /* # defines */
  text *vname; /* name of the identifier holding the sql - only used for error reporting */
  text *sqlfile; /* if used, name of file containing the SQL */
  ub4 asiz; /* array size for binds in DML and loop sql fetches */
  ub4 flags;
#define RWL_SQFLAG_LEXPLS  0x00000001 /* Lexer says this is PL/SQL */
#define RWL_SQFLAG_ISDML   0x00000002 /* OCI this is DML */
#define RWL_SQFLAG_ISDDL   0x00000004 /* OCI this is DDL */
#define RWL_SQFLAG_ISPLS   0x00000008 /* OCI this is PL/SQL */
#define RWL_SQFLAG_ARRAYB  0x00000010 /* array bind */
#define RWL_SQFLAG_NOCURC  0x00000020 /* No CURsor Cache */
#define RWL_SQFLAG_ARMEM   0x00000040 /* set fetch array size by memory (i.e. default) */
#define RWL_SQFLAG_IGNERR  0x00000080 /* Ignore error, i.e. let user handle it */
#define RWL_SQFLAG_NOCTX   0x00000100 /* Only used in rwldberror3 */
#define RWL_SQFLAG_ARRAYD  0x00000200 /* array fetch and define */
#define RWL_SQFLAG_GOTID   0x00000400 /* sql_id field has been retrieved */
#define RWL_SQFLAG_DYNAMIC 0x00000800 /* This is a dynamic SQL */
#define RWL_SQFLAG_LEAK    0x00001000 /* Leak the cursor, omit OCIStmtRelease */
#define RWL_SQLFLAG_IBUSE  0x00002000 // Uses implicit bind
#define RWL_SQLFLAG_IBDONE 0x00004000 // implicit bind has been completed
#define RWL_SQLFLAG_IDUSE  0x00008000 // Uses implicit define
#define RWL_SQLFLAG_IDDONE 0x00010000 // implicit define has been completed
#define RWL_SQLFLAG_ICASE  0x00020000 // Do not convert implicit to lower case
#define RWL_SQLFLAG_BDPRT  0x00040000 // debug print of bindef has taken place
#define RWL_SQLFLAG_DYIREL 0x00080000 // DYnamic sql Implicit RELease
#define RWL_SQLFLAG_BONAM  0x00100000 // use boname to turn bind into bindout
#define RWL_SQLFLAG_ARDYN  0x00200000 // sql is dynamic using ampersand replacement
#define RWL_SQL_ARRAY_MEMORY 100000 /* 100k - rather randomly chosen */
  void **abd; /* array of array binds or array defines*/
  sb2  **ari; /* array of indicators */
  ub4 aix; /* index for next insert */
#define RWL_SQL_ID_LEN 13
  text sqlid[RWL_SQL_ID_LEN+1];
  text *boname;
  ub4 sqllino; // line# where declared, used for sqllogging
  text *adsql; // sql statement before &name. replacement
  ub4 adsqllen;
  ub4 admax;  // guaranteed max length after replacements
  rwl_arvar *arlist; // list of ampersand replacements
};

/* bind and define information
 *
 * Note that this never becomes an array, it is always
 * a linked list
 */
struct rwl_bindef
{
  text *vname; /* variable name */
  sb4 vguess; /* guess of where variable is */
  text *bname; /* named bind */
  ub4 pos; /* define or positional bind */
  rwl_bindef *next; /* linked list */
  rwl_type vtype; /* variable type (set from variable or direct) */
  ub1 bdtyp; /* one of these */
#define RWL_BIND_POS 1 /* bind by position */
#define RWL_BIND_NAME 2 /* bind by name */
#define RWL_DEFINE  3 /* define */
#define RWL_BINDOUT_POS 4 /* bind by position with return value */
#define RWL_BINDOUT_NAME 5 /* bind by name with return value */

#define RWL_BIND_UNK 6    // bind still unknown pos/name
#define RWL_BINDOUT_UNK 7 // bindout still unknown pos/name
#define RWL_BINDOUT_SAME 8 // bindout same variable and bind name
#define RWL_BIND_ANY 9  // either pos/name
#define RWL_BIND_SAME 10  // bind same variable and bind name

/* The direct bind and define are used internally by rwloadsim
 * where the variable is an ordinary C variable of type 
 * double, sb8 or char *
 *
 * Note that these MUST have the largest values or the
 * rwlbdisdir() macro needs to be changed
 */
#define RWL_DIRBIND 15 /* bind direct by position */
#define RWL_DIRDEFINE 16 /* define direct by position */
  ub1 bdflags;
#define RWL_BDFLAG_BNALLOC 0x01 // bname was rwlstrdup'ed and must be freed
#define RWL_BDFLAG_FIXED   0x02 // fixed at declaration time
#define RWL_BDFLAG_BOINCPL 0x04 // bindout was incomplete without pos/string
  OCIBind   *binhp;
  OCIDefine *defhp;
  /* the following are used with direct bind/define */
  void *pvar; /* address of actual direct variable */
  sb2 *pind; /* indicator */
  /* The following are used during array bind for DML */
  ub8 slen; /* max length when string */

};
/* boolean rwlbdisdir(rwl_bindef *) */
#define rwlbdisdir(pbd) ((pbd)->bdtyp>=RWL_DIRBIND)

// $userhelp list
struct rwl_helplist
{
  text *helptext; // the actual help text
  rwl_helplist *nexthlp; // linked list
  ub4 helpseq; // sequence number for output
};

// $argument $option directive list
struct rwl_arglist
{
  text *argname; // the name that becomes the variable name and the --argument name
  text *argvalue; // the actual value when end-user uses --argument
  text *arghelp; // Help text for the user argument
  rwl_arglist *nextarg; // linked list
  ub4 helpseq; // sequence number for output
  ub1 argflags;
#define RWL_USER_ARG_NOARG   0x01  // No value, i.e. add --no-bla
#define RWL_USER_ARG_USED    0x02  // Has been used
};
#define RWL_USER_ARG_OFFSET 500    // offset from ordinary option val in struct option

struct rwl_pathlist
{
  text *pathname; // name of entry in RWLOADISM_PATH
  rwl_pathlist *nextpath; // linked list pointer
};

struct rwl_lilist // linked list of assign expressions
{
  rwl_estack *listk;
  rwl_lilist *linxt;
};

/* rwl_main is filled while we parse input and is 
 * in most cases not modified
 * during execution (that is when rwl_xeqenv is the 
 * primary structure in use
 *
 * Fields here really could be considered like they
 * were global variables, but we do everything reentrant
 * */


struct rwl_main
{
  ub4 maxcode; /* # array elements in code array */
  ub4 maxident; /* # identifiers */
  double dval; /* last seen number as double */
  sb8 ival; /* last seen number as sb4 */
  sb8 declslen; // actual value of length in string(xx) declaration
  text *sval; /* various contexts returning string */
  text *inam; /* IDENTIFIER returned from scanner */
  text *previnam; /* and its previous value */
  text *zinam; /* IDENTIFIER returned from $if scanner */
  ub8 slen; /* and its length */
  /* These various fields are used as a replacement for local
   * variables that are use in different places during parsing
   */
  ub4 lexlino; /* lineno of if/loop/execute from lexer when at top level */
  ub4 sqllino; /* lineno temp store for sql declaration */
  ub4 sqltlin; // lineno where we started scanning for sql text
  ub4 posargs; /* # of positional arguments */
  ub4 fileargs; /* # of file arguments */
  // fields for rwlgetopt, also see the RWL_P4_OPTxxx bits in m4flags
  text **argv; // copies of those in main()
  ub4 argc;
  ub4 argix; // how far is rwlgetopt in processing argv
  ub4 shoptix; // index of next single character option in one argv element
  text *optval; // like optarg in normal getopt
  text **newargv; // like argv after option processing in normal getopt
  ub4 newargc;
  ub4 newind; // like optind in normal getopt
  //
  ub2 lvcount; /* local variable count (includes facnt) */
  ub1 facnt; /* formal argument count during procedure declaration */
  ub1 bdtyp; /* bind/define type */
  ub1 furlev; // function recursion level during parse - index to aacnt, funcn
  ub1 dtype; /* type of declaration */
  ub1 mqbdtyp; /* bind/define type for modify sql */
  ub1 supsemerr; // reason for superflous ';' 
#define RWL_SUPSEM_FUNC    1 // function header
#define RWL_SUPSEM_PROC    2 // function header
#define RWL_SUPSEM_THREAD  3 // thread header
#define RWL_SUPSEM_EMBSQL  4 // embedded sql without at clause
#define RWL_SUPSEM_CQNSTART  5 // querynotification start
#define RWL_SUPSEM_CQNTHEN  6 // querynotification start
  ub1 ynqueue; /* {NO}QUEUE EVERY */
#define RWL_QUEUE_EVERY 0x0001
#define RWL_NOQUEUE_EVERY 0x0002
  ub1 pre31fil; // on, off, warn
#define RWL_31_FIL_ON 1   // allow pre 3.1 file assign (e.g. "<" in file name)
#define RWL_31_FIL_OFF 2  // disallow pre 3.1 file assign
#define RWL_31_FIL_WARN 3 // allow, but warn about pre 3.1 file assign

  sb4 modsqlvar; 
#define RWL_MODSQL_CCON 1
#define RWL_MODSQL_CCOFF 2
#define RWL_MODSQL_ARRAY 3
#define RWL_MODSQL_BIND 4
#define RWL_MODSQL_BINDOUT 5
#define RWL_MODSQL_DEFINE 6
#define RWL_MODSQL_TEXT 7
#define RWL_MODSQL_RELEASE 8
  ub2 assignoper; /* see assignvar */
  ub2 skipdep; 
#define RWL_MAX_FUNC_RECURSION 42 // max recursive function call during expression parse
  ub2 aacnt[RWL_MAX_FUNC_RECURSION]; /* actual argument during parse of function */
  text *funcn[RWL_MAX_FUNC_RECURSION]; /* function name during parse */

  ub4 ratyp; /* random array type temp save */
  ub4 bdpos; /* bind/define position */
  sb4 ravarn; /* random array var number */
  text *raname; /* random proc/string name */
  text *sqname; /* sql name */
  text *scname; /* suroutine call name */
  sb4 scvarn; /* suroutine call variable number */
  sb4 decvarn; /* declaration variable number*/
  text *dbname; /* database name */
  text *ccdbname; /* database name to use in rwlcodecall */
  text *bdname; /* bind name */
  text *raentry; /* random array entry */
  text *strvnam; /* string name for sprintf */
  sb4   strvarn; /* file variable number for sprintf */
  text *filenam; /* file name for write/writeline */
  sb4 filvarn; /* fine variable number for write/writeline */
  text *lobnam; /* LOB variable name for readlob/rwitelob */
  sb4 lobvarn; /* LOB variable number for readlob/rwitelob */
  text *lobreadvnam;  // readlob string variable name
  sb4   lobreadvnum;  // readlob string variable number
  text *loblengthnam; /* LOB read length varible name for readlob */
  rwl_estack *lobreadlength; // readlob length
  rwl_estack *lobwritedata; // writelob data
  rwl_estack *loboffset;    // readlob/writelob offset
  
  rwl_sql *sqsav; /* temporary save of sql */
  sb4 sqsavvarn; // and its variable number
  rwl_cinfo *dbsav; /* temporary save of db (cinfo) used during database declaration */
  rwl_cinfo *maindb; // if a default database exists, this is it
  ub4 maintookses; 
  rwl_localvar *lvsav; /* procedure/function argument array */
  rwl_location loc ; /* input line number for error reporting */
  rwl_location runloc; /* location of first seen run */
  rwl_location *parfaitloc; // make parfait shut up, see statement in rwlparser.y
  char *errtxt ;  /* error text */
  void *rwlyscanner; /* opaque for us */
  void *rwlascanner; /* opaque for us */
  void *rwlzscanner; /* opaque for us */
  rwl_value pval; /* result of expression evaluation */
  rwl_pstack *phead; /* head of stack is fixed when first element is added */
  rwl_pstack *ptail; /* always points at last element added */
  text *assignvar; /* variable we assign to */
#define RWL_MAX_INCLUDE_RECURSION 42
  text *inclfil[RWL_MAX_INCLUDE_RECURSION+1]; // $include recursion filename
  ub4 incldep; // and depth

  // Fields for modify database identifier
  text *mdbnam;   // database name
  sb4   mdbvar;   // database varnum
  rwl_estack *mdbsphi; // new session pool hi
  rwl_estack *mdbsplo; // and maybe lo

  char *dformat; /* printf format for double to string (initially %.3f) */
#define RWL_DFORMAT_DEFAULT "%.2f"
  char *iformat; /* printf format for sb4 to string (normally %d) */
#define RWL_IFORMAT_DEFAULT "%ld"
#define RWL_PFBUF 32 /* sized to normally fit any of the above */
  rwl_xeqenv *mxq; /* execution environment for main thread */
  ub4 mflags;
// first the debug flags for main 
#define RWL_DEBUG_ALLOWHACK  0x00000001 /* allow special/hack features */
#define RWL_DEBUG_USEALEN    0x00000002 
#define RWL_DEBUG_YYDEBUG    0x00000004 /* set yydebug=1 */
#define RWL_DEBUG_PRINTYYERR 0x00000008 /* true when we want yyerror to print anything */
#define RWL_DEBUG_VARIABLE   0x00000010 /* debug variable */
#define RWL_DEBUG_EXECUTE    0x00000020 /* debug code execution */
#define RWL_DEBUG_PVINTERN   0x00000040 // printvar prints internal
#define RWL_DEBUG_MISC       0x00000080 /* miscellaneous, typically temporary debug */
// then debug flags for threads 
#define RWL_THR_DEVAL        0x00000100 /* print evalueation details */
#define RWL_THR_DSQL         0x00000200 /* debug database */
#define RWL_THR_DTHRSER      0x00000400 /* serialize threads in stead of calling pthread  */
#define RWL_DEBUG_BINDEF     0x00000800 /* Debug all bind and define settings */
// Masks for either
#define RWL_DEBUG_THREAD \
	( RWL_THR_DEVAL \
	| RWL_DEBUG_USEALEN \
	| RWL_DEBUG_ALLOWHACK \
	| RWL_DEBUG_BINDEF \
	| RWL_THR_DTHRSER \
	| RWL_THR_DTHRSER \
	| RWL_THR_DSQL)
#define RWL_DEBUG_MAIN \
	( RWL_DEBUG_PRINTYYERR \
	| RWL_DEBUG_YYDEBUG \
	| RWL_DEBUG_VARIABLE \
	| RWL_DEBUG_PVINTERN \
	| RWL_DEBUG_ALLOWHACK \
	| RWL_DEBUG_USEALEN \
	| RWL_DEBUG_MISC \
	| RWL_DEBUG_BINDEF \
	| RWL_DEBUG_EXECUTE )
// and now the rest 
#define RWL_P_STATISTICS     0x00001000 /* gather statistics */
#define RWL_P_HISTOGRAMS     0x00002000 /* gather statistic histograms */
#define RWL_P_PERSECSTAT     0x00004000 /* gather per second counts */
#define RWL_P_ONLYMAINTH     0x00008000 /* set when only main thread exists */
#define RWL_P_ISMAIN         0x00010000 /* set for thread used by main */
#define RWL_P_unused1        0x00020000 
#define RWL_P_SQLWASPLS      0x00040000 /* last NAMEDSQL lexed was a PL/SQL block */
#define RWL_P_PRINTTOFILE    0x00080000 /* set when printing (write) is to a file */
#define RWL_P_PRINTBLANK     0x00100000 /* next print should include blank */
#define RWL_P_PRINTLINE      0x00200000 /* latest print was a printline */
#define RWL_P_STOPONORA	     0x00400000 /* Stop at ORA- errors */
#define RWL_P_STOPNOW        0x00800000 /* Stop a thread as soon as posible */
#define RWL_P_IN_CBLOCK      0x01000000 /* Executing a control block */
#define RWL_P_DXEQMAIN       0x02000000 /* Direct execute in main */
#define RWL_P_SESRELDROP     0x04000000 /* session release also drops */
#define RWL_P_FINDVAR_NOERR  0x08000000 /* rwlfindvar should not report not found error */
#define RWL_P_RECON1017      0x10000000 // reconnect attempt after ORA-1017
#define RWL_P_MPREPARE       0x20000000 /* Multi process prepare */
#define RWL_P_MEXECUTE       0x40000000 /* Multi process execute */
#define RWL_P_QUIET          0x80000000 /* be quiet */

  ub4 m2flags; /* more flags - only in main */
#define RWL_P2_COMP_FUNC     0x00000001 /* compiling a function */
#define RWL_P2_HAS_RETURN    0x00000002 /* a return was seen */
#define RWL_P2_NOWARNDEP     0x00000004 /* don't warn against deprecated features */
#define RWL_P2_NOEXEC        0x00000008 /* No execution - parse only */
#define RWL_P2_BINDZERO	     0x00000010 /* bind posistions are numbered from 0 */
#define RWL_P2_BINDRAW       0x00000020 /* last bind/define has RAW set */
#define RWL_P2_INRCFILE      0x00000040 /* in a startup file */
#define RWL_P2_ERRORWTIM     0x00000080 /* $errortime:on set */
#define RWL_P2_EVERY         0x00000100 /* every set */
#define RWL_P2_WAIT          0x00000200 /* wait set */
#define RWL_P2_AT	     0x00000400 /* AT specified */
#define RWL_P2_CBLOCK_BAD    0x00000800 /* error during parse of control block */
#define RWL_P2_THROPTS (\
	RWL_P2_EVERY| \
	RWL_P2_WAIT| \
	RWL_P2_CBLOCK_BAD| \
	RWL_P2_AT) 
#define RWL_P2_SCANARG       0x00001000 /* scanning for variables in $arguments:begin/end */
#define RWL_P2_SCANFIRST     0x00002000 /* scanning first file */
#define RWL_P2_CBLOCK        0x00004000 /* Parsing a control block */
#define RWL_P2_unused        0x00008000 
#define RWL_P2_BADSQLFILTXT  0x00010000 /* Could not read SQL from file or from concatenation */
#define RWL_P2_ATDXEQMAIN    0x00020000 /* At clause found for direct execute in main */
#define RWL_P2_INTHING       0x00040000 /* Parsing a "thing " */
#define RWL_P2_ATDEFAULT     0x00080000 /* at default specified */
#define RWL_P2_EVTNOTIF      0x00100000 /* -E flag set */
#define RWL_P2_QUEUE         0x00200000 /* -Q flag set */
#define RWL_P2_SETACTION     0x00400000 /* --set-action -S flag set */
#define RWL_P2_SETACTRESET   0x00800000 /* --set-action-reset flag set */
#define RWL_P2_VERBOSE       0x01000000 /* --verbose or --version flag set */
#define RWL_P2_NOENVEXPAND   0x02000000 // --no-nameexpand is set 
#define RWL_P2_KKSET         0x04000000 /* Key or Komment was set by user */
#define RWL_P2_SOMEEXPFAIL   0x08000000 // some immediate expresison has failed
#define RWL_P2_OERSTATS      0x10000000 /* --oer-statistics */
#define RWL_P2_unused0x20000000 // 
#define RWL_P2_REGEXSUBG     0x40000000 // parsing regexsubg
#define RWL_P2_PUBLICSEARCH  0x80000000 // search in public

  ub4 m3flags; /* even more flags - only in main */
#define RWL_P3_CLHEADFOR     0x00000001 // keyword "for" initialized control loop
#define RWL_P3_USEREXIT      0x00000002 // user has been using exit
#define RWL_P3_LOCALTIME     0x00000004 // user wants banner time in local timezone
#define RWL_P3_PUBISBAD      0x00000008 // The public directory is bad
#define RWL_P3_BNOXPROC      0x00000010 // Build a procedure we never exec due to errors
#define RWL_P3_BNOXFUNC      0x00000020 // Build a function we never exec due to errors
#define RWL_P3_LOPTDEFDB     0x00000040 /* The default database comes from -l option */
#define RWL_P3_DEFRECONN     0x00000080 // --default-reconnect
#define RWL_P3_DEFTHRDED     0x00000100 // --default-threads-dedicated
#define RWL_P3_ALLIMPLBIN    0x00000200 // $allimplicit:bind
#define RWL_P3_ALLIMPLDEF    0x00000400 // $allimplicit:define
#define RWL_P3_IMPLCASE      0x00000800 // Make implicits case sensitive
#define RWL_P3_SPFCONCAT     0x00001000 // sprintf || identifier
#define RWL_P3_IMMEDSQL      0x00002000 // parsing an immediate sql
#define RWL_P3_WARNSQLKW     0x00004000 // warn about future SQL keyword
#define RWL_P3_SQLWASDML     0x00008000 // lexer says DML
#define RWL_P3_SQLWASQRY     0x00010000 // lexer says query
#define RWL_P3_IMMISDYN      0x00020000 // immediate sql is dynamic
#define RWL_P3_IMMPARSEFOR   0x00040000 // immediate sql is being parsed in a for cursor loop
#define RWL_P3_EXECGEN       0x00080000 // executing a generated rwl program
#define RWL_P3_GENERATE      0x00100000 // generating an executable
#define RWL_P3_GENERATE_OK   0x00200000 // OK to actually generate
#define RWL_P3_GEN_SENSITIVE 0x00400000 // During generation, a sensible keyword was found
#define RWL_P3_SP_NORLB      0x00800000 // $sessionpool_no_rlb:on (which is default)
#define RWL_P3_FUTNOTIDENT   0x01000000 // warn about an identifier becoming a keyword
#define RWL_P3_NICEABORT     0x02000000 // make the abort message simple
#define RWL_P3_QETIMES       0x04000000 // $queueeverytimes:on
#define RWL_P3_PRETGEN       0x08000000 // Pretend we are generated
#define RWL_P3_BINDOUTNAME   0x10000000 // inspect bind name as bindout
#define RWL_P3_MISBRACK      0x20000000 // () missing during parse
#define RWL_P3_RWLI2SOK      0x40000000 // Use rwli2s to convert sb8 to string
#define RWL_P3_RWLD2SOK      0x80000000 // Use rwld2s to convert double to string

  ub4 m4flags; /* even more flags - only in main */
#define RWL_P4_PROCHASSQL    0x00000001 // A procedure/function includes SQL 
#define RWL_P4_STATSONLY     0x00000002 // Procedure declare with statisticsonly
#define RWL_P4_SQLLOGGING    0x00000004 // $sqllogging directive on
#define RWL_P4_SQLLOGFILE    0x00000008 // $sqllogging to real file that we must close
#define RWL_P4_AMPERSAND     0x00000010 // ampersand replacement in embedded sql is on
#define RWL_P4_URLERRORON    0x00000020 // do not turn of error URL
#define RWL_P4_TRIGRAD       0x00000040 // Make triginometry functions use radians
#define RWL_P4_ERRNOCOUNT    0x00000080 // Stats don't increase count if error has occured
#define RWL_P4_OPTRESTART    0x00000100 // start from beginning in rwlgetopt
#define RWL_P4_OPTPRINTERR   0x00000200 // print errors in rwlgetopt
#define RWL_P4_OPTNEWCOUNT   0x00000400 // count elements in newargv
#define RWL_P4_OPTNEWCOPY    0x00000800 // create newargv
#define RWL_P4_OPTSCOLIST    0x00001000 // we are inside single character opt list
#define RWL_P4_CRNLSTRING    0x00002000 // $crnlstring:on
#define RWL_P4_CRNLWRITELINE 0x00004000 // $crnlwriteline:on
#define RWL_P4_CRNLREADLINE  0x00008000 // $crnlreadline:on
#define RWL_P4_CRNLGENERAL   0x00010000 // $crnlgeneral:on
#define RWL_P4_SLASHCONVERT  0x00020000 // $slashconvert:on
#define RWL_P4_STATSATIME    0x00040000 // $statsapptime:on
#define RWL_P4_STATSDTIME    0x00080000 // $statsdbtime:on
#define RWL_P4_CONERROK      0x00100000 // $connecterror:accept

  FILE *sqllogfile;

  int userexit; // value for user exit
  text *boname; // Prefix for automatic bind out name

  rwl_code *code; /* array of code elements */ 
  text *codename; /* name of code being currently parsed */
  sb4 badchar; /* count of illegal character in scanner */
#define RWL_MAX_ILLEGAL_CHAR 20 /* bail out */
  sb4 codeguess; /* guess of code variable being parsed */
  ub4 ccount; /* count of used elements */
  sb4 cbdbvarn; 
  // Here comes a list of fields that deal with recursive parse of statement list 
  // They are e.g. used when there are a loop inside an if/then/else
  sb4 rsldepth; /* depth of recursive statement list (rsl) during parse */
  sb4 rslerror; /* incremented if rsl had error */
#define RWL_MAX_RSL_DEPTH 42 /* That MUST be enough */
  ub4 rslpcsav[RWL_MAX_RSL_DEPTH]; /* save program counter of e.g. T_IF or T_ELSE */
  text *loopvar[RWL_MAX_RSL_DEPTH]; /* name of loop variable */
  sb4 rslmisc[RWL_MAX_RSL_DEPTH]; /* different use */ 
  ub1 rsllityp[RWL_MAX_RSL_DEPTH]; /* loop iterator type */
#define RWL_LI_DOTDOT 1   // for x := expr .. expr loop
#define RWL_LI_COMMA 2    // for x := expr, expr, expr, expr loop
#define RWL_LI_BAD 4      // for with syntax error
  rwl_lilist *rsllihead[RWL_MAX_RSL_DEPTH]; // expression list for comma loop
  rwl_lilist *rsllitail[RWL_MAX_RSL_DEPTH]; // expression list for comma loop
  ub1 rslflags[RWL_MAX_RSL_DEPTH]; /* flags */
#define RWL_RSLFLAG_CURAND 0x01 // is using cursorand
#define RWL_RSLFLAG_WHILOP 0x02 // while has a loop keyword (and not execute)
#define RWL_RSLFLAG_ELSEIF 0x04 // We need to backtrack an elseif chain
#define RWL_RSLFLAG_MAYBRK 0x08 // Started something that can include break
#define RWL_RSLFLAG_BRKCUR 0x10 // And that something is a cursor
  ub4 rslpcbrk[RWL_MAX_RSL_DEPTH]; // pc of a break
  rwl_estack *cursorand; /* stack used in loop cursor and expression */

  struct timespec myepoch; /* process start timestamp */
#define RWL_XEQTIMBUF 50
  char xeqtime[RWL_XEQTIMBUF];
  double adjepoch; /* adjustment to seconds based timestamps (for e.g. rampup) */
#define RWL_DEFAULT_ADJ_EPOCH 5.0 /* assume max 5 seconds elapsed before threads starts */

  /* fields for parsing thread specifications */
  rwl_estack *starttime; 
  rwl_estack *stoptime; /* used when stop is used */
  rwl_estack *stopcount; /* used when count is used */
  rwl_estack *waittime;
  rwl_estack *everytime;
  ub4 totthr;   /* threads total to run */
  ub4 thritemno; /* thred procedure number */
  text *runname; /* name of procedure to run */
  rwl_estack *runstack; /* stack to run if procedure with arguments */

  /* fileds for parsing modify sql code */
  text *msqlinam; /* name of sql to be modified */
  rwl_estack *msqlstk; // expression e.g. sqltext or bind number

  /* array of execution environmen for worker threads */
  rwl_xeqenv *xqa;
#ifdef RWL_USE_OCITHR
  OCIThreadId     **thrid;
  OCIThreadHandle **thrhp;
#else
  pthread_t *xqthrid; /* array of opaque POSIX thread identifiers */
#endif
  ub4 xqi; /* index to it */
  rwl_thrinfo *threadlist; /* matches "threadlist" in parser */
  rwl_thrinfo *mythr; /* points to current during parse */
  ub1 *thrbits; // contains thread relevant bits stored in main
#define RWL_TB_THREADOK 0x01

  ub4 addvarbits; /* controls if rwladdvar allows redefinition */
  rwl_rast *rast; /* head of random string array durin parse */

  text *reskey; /* results data key - completely opaque to rwloadsim */
  text *komment; /* also opaque */
#define RWL_MAX_KOMMENT 100 // needs to match rwlrun.komment declaration in rwloadsim.sql
  ub8 procno;
  ub8 runnumber;
  text *Mname; /* name of file to store Moption */
  text *resdb; /* name of results database variable */
  text *defdb; /* name of default execution database */
  ub4 argX, argY; /* save -X and -Y values */

  OCIEnv   *envhp;
  sword cvrel, cvupd, cvrev, cvinc, cvext; // client version fields
#define rwl122ormore(rwm) ((rwm)->cvrel>12 || ((rwm)->cvrel==12 && (rwm)->cvupd>=2))

  ub4 histbucks; /* #buckets in histograms */

#define RWL_FLUSH_EVERY_MIN 1 // also the default
#define RWL_FLUSH_STOP_MIN 5
  ub4 flushstop, flushevery;

  ub4 sqllen; // set when SQL read from file
  text *vitagsfile;
  text *sqlfile;

  /* Fields used for $if $then directive
   *
   * If you have N nested $if/$else/$endif, there will be 2**N 
   * different code paths, out of which only 1 is going to be 
   * included.  All the rest (2**N - 1) are excluded.  We use 
   * a bit per nested depth to tell that code is excluded, and
   * only when no bits are set, do we include the code.  Hence
   * simply using 'if (!rwm->ifdirbit)' tells if code is 
   * included.  This is therefore used everywhere in rwllexer.l
   */
  ub4 ifdirdep; // depth
  ub4 ifdirbit; // set bit 1<<ifdirdep when FALSE
  rwl_location ifdirloc; // location of last seen $if at ifdirdep=0
#define RWL_MAX_IFDD 30
  sb8 oerstatseq; // inserted as oerstats.oeseq to allow table to have primary key;
#define RWL_MAX_OERCOUNT 50; // used to prevent runaway error saving
  sb4 oermaxstat;
  ub4 maxlocals; /* Max # of local variables */
#define RWL_MAX_LOCALVAR 200 /* default value */
  rwl_idlist *idlist, *idtail; // list and tail of identifers during parse of e.g. regex
  rwl_arglist *usrargl; // list of $useroption $userswitch entries
  rwl_arglist *lngargl; // list of $longoption entries
  rwl_helplist *helphead; // list of $userhelp options
  rwl_pathlist *pathlist; // list of RWLOADSIM_PATH elements
  rwl_conlist *conhead, *contail; // head and tail of concatenations 
  text *publicdir; // full pathname of public directory
  text *libdir; // full pathname of lib directory
  ub4 maxreadlen; // length of buffer for readline

  // Fields used for regular expressions
  rwl_estack *reg_estk, *str_estk, *sub_estk;
#define RWL_MAXREADLEN 2050 // default value

  ub4 dbfailures; // maxidead from $tempfailures directive
  // misc use
  text *misctxt;
  ub4 embdmlasiz;
  ub4 embqryasiz;
  text *genfile; // file name for --generate option
  text *genname; // the name to generate, default the last path component of file
  text *genbanner; // the banner to display in the generated code
  text *gencfile; // file name of the temporary C source
  text *gentmpdir; // directory with the C source
  text *gendirectory; // Users own directory for the C source
#define RWL_TD_TEMPL "/tmp/rwloadsim.XXXXXX"
  text *gencommand; 
#if RWL_OS == RWL_WINDOWS
# define RWL_GENCOM_DEFAULT (text *)"%s/wingen.cmd %s %s %s %d"
#else
# define RWL_GENCOM_DEFAULT (text *)"%s/generate.sh %s %s %s %d"
#endif
  ub4 helpseq;

  // Fields for CQN
  text *cqnat; // database name
  double  cqnstart;   // registration start time
  double  cqnstop;   // registration stop time
  double cqnnow; // runseconds when cqn is initiated
  ub4 cqnreg; // pc of RWL_CODE_CQNREG
  text *hostname; // sval in RWL_HOSTNAME_VAR
  text *usrhostname; // hostname from $hostname directive

  // misc stuff
  text *musymbol;
  text *lineend; // "\n" except "\r\n" on windows
  text *rwlytext;
  ub4 rwlyleng;
  ub4 musymlen;
  text sqlbuffer[RWL_MAXSQL+2];  /* text of last SQL */ 
} ;

struct rwl_conlist
{
  rwl_estack *estk;  	// expression
  rwl_conlist *connxt;	// linked list pointer
};

struct rwl_idlist
{
  sb4 idnum;   		// variable number
  text *idnam;  	// variable name
  rwl_idlist *idnxt;	// linked list pointer
};

/* variables at parse time
 *
 * These are only used during parsing of expressions
 */
struct rwl_pvariable
{
  const text *vname; /* variable name */
  sb4 guess; /* guess of its variable number */
#define RWL_VAR_NOGUESS (-1)
#define RWL_VAR_NOTFOUND (-2)
#define RWL_VAR_NOTLOCAL (-3)
#define RWL_VAR_DEFDB (-4) // only used in rwlparser.y statement for at default
#define RWL_VAR_INVALID (-5) // var found but bad type
#define RWL_VAR_BINDNUM (-6) // only from rwlbdident meaning bind is numeric
  rwl_location loc; /* location of declaration */
};

/* identifiers
 *
 * these are stored in the execution time context
 * but are generally created during parse time
 *
 * Local variables are dealt with a bit differently:
 *   pname is set to the name of the procedure/function 
 *   flags bit RWL_IDENT_LOCAL is set
 *   num.ival is the array index of the local variable
 *
 */
struct rwl_identifier
{
  text *vname; /* identifier (variable) name */
  text *pname; /* procedure/functaion name for local variables */
  rwl_value num; /* execution time value */
  rwl_location loc; /* location of declaration */
  ub4 vval; /* value - only used for some types */
  ub4 v2val; /* value2 - only used for some types */
  void *vdata; /* pointer to data for some types */
  void *v2data; /* pointer to data for some types */
  text *iline; // buffer for file reading
  rwl_type vtype; /* identifer(variable) and constant types */
  ub2 v3val; /* value3 - only used for some types */
  ub2 flags;
#define RWL_IDENT_COMMAND_LINE    0x0001 /* declared and initialized on command line */
#define RWL_IDENT_IGN_DECL_ASSIGN 0x0002 /* ignore assignment during declaration */
#define RWL_IDENT_INTERNAL        0x0004 /* variable is only used internally */
#define RWL_IDENT_THRSUM          0x0008 /* sum the value from threads */
#define RWL_IDENT_NOPRINT         0x0010 /* Don't print at rwlvarprint */
#define RWL_IDENT_NOSTATS         0x0020 /* Don't gather statistics */
#define RWL_IDENT_LOCAL           0x0040 /* Local variable */
#define RWL_IDENT_PRIVATE         0x0080 /* Private variable */
#define RWL_IDENT_GLOBAL          0x0100 /* Global variable */
#define RWL_IDENT_STATSONLY       0x0200 /* a statisticsonly procedure */
#define RWL_IDENT_THRSPEC (RWL_IDENT_GLOBAL|RWL_IDENT_PRIVATE|RWL_IDENT_THRSUM)
  char *stype; /* string representation for debug and error messages*/
  rwl_stats *stats; /* allocated when statistics are collected */
  rwl_mutex *var_mutex; /* allocated for relevant variables when flushstop is used */

};

/*
 * The rwlidgetmx/rwlidrelmx pair is used in the global variable
 * project.
 *
 * rwlidgetmx takes three arguments, xev, loc and a variable number
 * and returns the rwl_identifer * to be used. If the variable is
 * global it is mutexed and taken from xev->mxq, otherwise it is
 * ordinary (not global) and taken from xev.
 *
 * rwlidrelmx takes the same arguments and releases the mutex
 * if global, otherwise does nothing.
 */
#define rwlidgetmx(xev,loc,vnum) \
  (bit((xev)->evar[(vnum)].flags,RWL_IDENT_GLOBAL) \
  ? (rwlmutexget(xev,loc,(xev)->rwm->mxq->evar[(vnum)].var_mutex) \
     , (xev)->rwm->mxq->evar+(vnum)) \
  : (xev)->evar+(vnum))

#define rwlidrelmx(xev,loc,vnum) do { \
  if (bit((xev)->evar[(vnum)].flags,RWL_IDENT_GLOBAL)) \
    rwlmutexrel(xev,loc,(xev)->rwm->mxq->evar[(vnum)].var_mutex); \
  } while (0)

#define RWL_MAX_VAR 600 /* default number of variables */
// This is an array that we do not increase in runtime
// Doing so would be major change, but user can specify -I
// to set a larger size

/* local variables in procedure/functions
 * this is allocated as an array.
 * and is saved in vdata 
 * for the identifier holding the procedure
 *
 * Some entries are fixed:
 * 0 - the return value (unused for a procedure)
 * 1..N - the formal arguments
 * N+1..max - the local variables
 *
 * */
struct rwl_localvar
{
  text *aname; /* agument name */
  sb4 aguess; /* guess of location */
  rwl_type atype; /* the type of the argument */
};

enum rwl_stack_t
{
  RWL_STACK_notinuse = 0
, RWL_STACK_NUM /* value constant */
, RWL_STACK_VAR /* variable */
, RWL_STACK_ASN /* assignment operator */
, RWL_STACK_END /* end of stack */
, RWL_STACK_NOV /* a variable that does not exist */
, RWL_STACK_ASNINT /* assign to an interllay created variable */
, RWL_STACK_APP /* append assignment operator */
, RWL_STACK_ASNPLUS /* += assignment operator */
#define RWL_STACK_IS_ASSIGN(x) \
			( RWL_STACK_ASN==(x) \
			||RWL_STACK_APP==(x) \
			||RWL_STACK_ASNPLUS==(x))
#define RWL_STACK_ASSIGN_TEXT(x) \
  (RWL_STACK_APP==(x)         ? "append"  \
    : (RWL_STACK_ASNPLUS==(x) ? "add-assign" \
    : "assignment" ))
/* calculations */
, RWL_STACK_ADD /* add function */
, RWL_STACK_MUL /* multiply function */
, RWL_STACK_DIV /* division function */
, RWL_STACK_MOD /* modulus function */
, RWL_STACK_SUB /* subtract */

, RWL_STACK_MINUS /* unary minus */
, RWL_STACK_NOT /* not */

, RWL_STACK_LESS /* < */
, RWL_STACK_GREATER /* > */
, RWL_STACK_LESSEQ /* <= */
, RWL_STACK_GREATEREQ /* >= */
, RWL_STACK_BETWEEN /* between */ 

, RWL_STACK_EQUAL /* = */
, RWL_STACK_NOTEQUAL /* != */

, RWL_STACK_AND /* and */
, RWL_STACK_OR /* or */
, RWL_STACK_CONCAT /* or */

, RWL_STACK_UNIFORM /* uniform() distribution function */
, RWL_STACK_ERLANG /* erlang() distribution function */
, RWL_STACK_ERLANG2 /* erlang2() distribution function */
, RWL_STACK_ISNULL /* isnull() function and IS NULL */
, RWL_STACK_ISNOTNULL /* IS NOT NULL */
, RWL_STACK_RUNSECONDS /* runseconds function */
, RWL_STACK_EPOCHSECONDS /* epochseconds function */
, RWL_STACK_SQRT /* sqrt() function */
, RWL_STACK_SIN /* sin() function */
, RWL_STACK_COS /* cos() function */
, RWL_STACK_ATAN2 /* atan2(y,x) function */
, RWL_STACK_LENGTHB /* lengthb() function */
, RWL_STACK_SUBSTRB2 /* substrb(s,p) function */
, RWL_STACK_SUBSTRB3 /* substrb(s,p,l) function */
, RWL_STACK_VAR_LB /* just length of string variable */
, RWL_STACK_ERLANGK /* erlangk() distribution function */
#define RWL_ERLANGK_MAXK 20 // max value of k
, RWL_STACK_NORMALRANDOM /* normalrandom() distribution function */
, RWL_STACK_SQL_ID // sql_id function
, RWL_STACK_GETENV // getenv function
, RWL_STACK_SYSTEM // system function
, RWL_STACK_LOG  // log(x) function
, RWL_STACK_LOGB // log(b,x) function
, RWL_STACK_EXP  // exp(x) function
, RWL_STACK_EXPB // exp(b,x) function
, RWL_STACK_ROUND // round(x) function
, RWL_STACK_CEIL
, RWL_STACK_TRUNC
, RWL_STACK_FLOOR
, RWL_STACK_SYSTEM2STR // system with two arguments
, RWL_STACK_ACCESS // access() function
, RWL_STACK_ACTIVESESSIONCOUNT // activesessioncount() function
, RWL_STACK_OPENSESSIONCOUNT // opensessioncount() function
, RWL_STACK_SERVERRELEASE // serverrelease() function
, RWL_STACK_INSTRB2 // instr(t,s)
, RWL_STACK_INSTRB3 // instr(t,s,p)

, RWL_STACK_FUNCCALL /* call af declared function */
, RWL_STACK_PROCCALL /* call af declared procedure */

, RWL_STACK_CONDITIONAL /* ? :  */ 
, RWL_STACK_WINSLASHF2B // rwlwinslashf2b
, RWL_STACK_WINSLASHF2BB // rwlwinslashf2bb
};

/* parse time evaluation stack
 *
 * During parse of an expression, we create
 * a linked list of stack elements to avoid
 * using an array.
 *
 * Once the stack is completed, we replace
 * it with an array where some fields are different
 *
 */
struct rwl_pstack
{
  rwl_pvariable psvar; /* if a variable */
  rwl_value psnum; /* if a constant */
  rwl_stack_t elemtype; /* what kind of element is it */

  ub1 skipnxt;
  ub1 skipend;
  ub1 branchtype; /* see also below */
#define RWL_EXP_ORBRANCH   1 /* end of left or branch */
#define RWL_EXP_ANDBRANCH  2 /* end of left and branch */
#define RWL_EXP_CONDBRANCH1  3 /* end of conditional condition */
#define RWL_EXP_CONDBRANCH2  4 /* begin of conditional false part */
  ub2 aacnt; /* actual argument count for function call */
  ub4 filasn;
  struct rwl_pstack *next; /* next element on the stack */
};
#define MAXSTACK 1000 /* just to catch programming errors */

/* execute time evaluation stack
 *
 * For execution, the parsed stack is 
 * made into an array that we simply
 * go through starting from the first element
 * for actual execution.  Note that all fields
 * must be invariant after creation as all
 * threads share one copy.
 *
 */
struct rwl_estack
{
  // Some fields are only used in certain cases
  sb4 esvar; /* variable number if a variable */
  const text *esname; /* variable name if a variable */
  ub2 esaacnt; /* actual argument count for function call */
  rwl_value esnum; /* constant value if a constant */
  rwl_stack_t elemtype; /* a value, and operator, etc */
  rwl_type evaltype; // The type use for e.g. comparison
  ub1 skipnxt;
  ub1 skipend;
  ub1 branchtype;
  ub4 filasn; 
};

/* procedural code to evaluate
 * 
 * This describes what our p-code
 * machine can execute.
 *
 * Note that the use of the up to 7 arguments is a bit messy
 * due to legacy and evolution
 */
enum rwl_code_t
{
  RWL_CODE_notinuse = 0
, RWL_CODE_HEAD // Code head - no arguments
, RWL_CODE_ASSIGN // Numerical assignment with expression : cptr is rwl_estack* with assignment on top
, RWL_CODE_STACK // just an expression (really used for procedure call)
, RWL_CODE_SQLCCON // Turn SQL cursor cache on - ceptr1 is variable name, ceint2 location guess
, RWL_CODE_SQLCCOFF // Turn SQL cursor cache off - ceptr1 is variable name, ceint2 location guess
, RWL_CODE_SQL // simple SQL execution (dml, ddl, one row query) - ceptr1 is variable name, ceint2 location guess
, RWL_CODE_CURLOOP // query with fetch loop calling procedure */
, RWL_CODE_APPEND // String append assignment with expression - ceptr1 is stack 
, RWL_CODE_IF // if expression if ! true goto else/endif/forl */
, RWL_CODE_ELSE// else part begins here */
, RWL_CODE_ELSEIF // elseif 
, RWL_CODE_ENDIF // end if */
, RWL_CODE_PRINT // print expression - ceptr1 is stack 
, RWL_CODE_NEWLINE // print \n */
, RWL_CODE_WAIT // sleep */
, RWL_CODE_FORL // for loop end, just goto if */
, RWL_CODE_PRINTBLANK // print expression plus blank - ceptr1 is stack 
, RWL_CODE_RAPROC // call some random code - ceptr1 is variable name, ceint2 location guess
, RWL_CODE_SQLHEAD // Code head for procedure with database calls */
, RWL_CODE_HEADSTATS // Code head for procedure with statisticsonly
, RWL_CODE_COMMIT // execute database commit - no arguments
, RWL_CODE_ROLLBACK // execute database rollback - no arguments
, RWL_CODE_ENDCUR // end of cursor loop */
, RWL_CODE_WRITE // write expression to file */
, RWL_CODE_WRITEBLANK // write expression and blank to file */
, RWL_CODE_NEWLINEFILE // write \n to file */
, RWL_CODE_SUSPEND // suspend until - ceptr1 is stack 
, RWL_CODE_SQLAT // simple SQL at a non-default database - ceptr1/ceint2 name/guess of sql, ceptr3/ceint4 name/guess of database
, RWL_CODE_CURLOOPAT // cursor loop at a non-default database 
// - ceptr1/ceint2 name/guess of sql, ceptr3/ceint5 name/guess of database
// ceent2 is pc or CUREND
, RWL_CODE_SHIFT
/* build in procedures */
, RWL_CODE_GETRUSAGE // call rwlgetrusage - no args
, RWL_CODE_RETURN // return statement - ceptr1/ceint2 is name/guess of procedure/function where return is from
, RWL_CODE_READLOB // Read a LOB into a string - ceptr1/ceint2 is name/guess of LOB, ceptr3/ceint4 of string variable
, RWL_CODE_READLOB_LO // Read a LOB into a string with offset and read length - ceptr5 of int - ceptr of int
, RWL_CODE_WRITELOB // Write a LOB from an expression - ceptr1/ceint2 is name/guess of LOB, ceptr3 is rwl_estack* to write to it
, RWL_CODE_WRITELOB_O // // Write a LOB from an expression - ceptr1/ceint2 is name/guess of LOB, ceptr3 is rwl_estack* to write to it, ceptr4 is rwl_estack* for offset
// control control block execution does not nest
, RWL_CODE_CBLOCK_BEG // Begin of control block - no arguments
, RWL_CODE_CBLOCK_END // End of control block - no arguments
// change database 
, RWL_CODE_NEWDB // set a new datbase for next RWL_CODE_STACK - ceptr1/ceint2 is name/guess of database
, RWL_CODE_DEFDB // excplicitly set the default database
, RWL_CODE_OLDDB // reset previous database - no args
, RWL_CODE_PCINCR // push pcdepth - no args
, RWL_CODE_PCDECR // pop pcdepth - no args
, RWL_CODE_SQLARRAY // modify sql array size
, RWL_CODE_SESRELDROP // Mark database session to be dropped
, RWL_CODE_OCIPING // execute OCIPing - no arguments
, RWL_CODE_FFLUSH // fflush file */
, RWL_CODE_CANCELCUR // Cancel cursor fetch
, RWL_CODE_ABORT // abort immeditedly
, RWL_CODE_DYNSREL // dynamic sql release - ceptr1/ceint2 is name/guess of sql
, RWL_CODE_DYNSTXT // dyql text - ceptr1/ceint2 is name/guess of sql, ceptr3 is stack
, RWL_CODE_DYNBINDEF // dyql text - ceptr1/ceint2 is name/guess of sql, ceptr3 is stack
, RWL_CODE_READLINE // read a line from file and return into identifiers
, RWL_CODE_READLOOP // loop readline ceptr1/ceint2 is name/ruess of file, ceptr3 is id list
, RWL_CODE_READLAND // loop readline and expression as above plus ceptr5 being the and expression
, RWL_CODE_READEND // end of readline loop
, RWL_CODE_REGEX // match regex to string, ceptr1 is regex ceptr3 is string ceptr5 is idlist
, RWL_CODE_REGEXSUB // regex substitute, similar to sed s/search/replace/
, RWL_CODE_REGEXSUBG // regex substitute, similar to sed s/search/replace/g
, RWL_CODE_REGEXTRACT // regex match and extract to variables, 
, RWL_CODE_EXIT // exit
, RWL_CODE_BREAK // break
, RWL_CODE_CURBRK // break a cursor
, RWL_CODE_SETCCLASS // modify database connectionclass
, RWL_CODE_SQLLEAK // modify sql leak
, RWL_CODE_MODSESP // modify session pool min/max
, RWL_CODE_MODDBLEAK // leak a session 
, RWL_CODE_MODCCACHE // modify cursor cache
, RWL_CODE_FPRINTF // fprintf file concatlist
, RWL_CODE_SPRINTF // fprintf file concatlist
, RWL_CODE_SQLFLUSH // modify sql array execute (i.e. flush)
, RWL_CODE_CQNREG // start cqn registration
, RWL_CODE_CQNREGDONE // start registration done
, RWL_CODE_CQNUNREG // unregister cqn
, RWL_CODE_CQNISCB // set is callback flag
, RWL_CODE_CQNBREAK // break cqn
, RWL_CODE_LIBEG  // loop iterator begin
, RWL_CODE_LITOP  // loop iterator top of loop
, RWL_CODE_LIEND  // loop iterator end of loop

// these MUST come last for rwlprintvar
, RWL_CODE_END // return/finish */
, RWL_CODE_STATEND // return from procedure with statisticsonly
, RWL_CODE_SQLEND // return from something with database calls - ceptr1 is variable name (of procedure), ceint2 location guess
};

struct rwl_code
{
  rwl_code_t ctyp; /* operator - code type */

  // Here are the up to level arguments
  void *ceptr1; /* 1st pointer argument */
  sb4 ceint2; /* 2nd integer argument */ 
  void *ceptr3; /* 3rd pointer argument */
  sb4 ceint4; /* 4th integer argument */
  void *ceptr5; /* 5th pointer */
  sb4 ceint6; /* 6th argument sb4 */
  void *ceptr7; // 7th pointer argument
  char *cname; /* mnemonic for debug */
  rwl_location cloc; /* location where it was declared */
};

#define RWL_MAX_CODE 2000 /* number of elements in code array */
// The array is fixed in size, user can set side with -C
// Changing it to variable size will be a major project

struct rwl_rast /* random string during parse */
{
  struct rwl_rast *next; /* pointer to next */
  text *str; /* entry string value (actual string or procedure name ) */
  double wht; /* entry weight */
  sb4 vgs; /* variable guess if code */
};

struct rwl_rastvar /* random string as a variable */
{
  ub4 cnt; /* count of entries */
  text **pstr; /* array of string values (or procedure names) */
  double *pwht; /* array of weights */
  sb4 *pvgs; /* array variable guess if code */
};

/* Internal variable names
 * Note that "runseconds" to the user is like
 * a read-only variable, while it really is a
 * function without arguments 
 */
#define RWL_LOOPNUMBER_VAR (text *)"loopnumber"
#define RWL_THREADNUMBER_VAR (text *)"threadnumber"
#define RWL_RUNNUMBER_VAR (text *)"runnumber"
#define RWL_PROCNUMBER_VAR (text *)"processnumber"
#define RWL_EVERYUNTIL_VAR (text *)"everyuntil"
#define RWL_STOPTIME_VAR (text *)"i#stoptime"
#define RWL_STOPCOUNT_VAR (text *)"i#stopcount"
#define RWL_STARTTIME_VAR (text *)"i#starttime"
#define RWL_USRSECONDS_VAR (text *)"usrseconds"
#define RWL_SYSSECONDS_VAR (text *)"sysseconds"
#define RWL_ORAERROR_VAR (text*)"oraerror"
#define RWL_ORAERRORTEXT_VAR (text*)"oraerrortext"
#define RWL_EMPTY_VAR (text*)"i#empty"
#define RWL_DUMMY_VAR (text *)"i#dummyinteger"
#define RWL_UNUSED_VAR (text *)"i#unused"
#define RWL_DOLLARCOUNT_VAR (text *)"$#"
#define RWL_STDERR_VAR (text *)"stderr"
#define RWL_STDOUT_VAR (text *)"stdout"
#define RWL_STDIN_VAR (text *)"stdin"
#define RWL_HOSTNAME_VAR (text *)"hostname"
#define RWL_HOSTNAME_LEN (RWL_HOSTNAMEMAX+2)
#define RWL_CLFLAGS_VAR (text *)"i#clflags"
#define RWL_ARRIVETIME_VAR (text *)"i#arrivetime"

/* information about what threads do
 *
 * This structure contains the static information about 
 * the different threads that execute in the same batch.
 * There is one of these for each "threadhead" in the parser
 */

struct rwl_thrinfo
{
  text *pname; /* name of the procedure holding the code */
  sb4 lguess; /* variable # of it */
  ub4 count; /* number of threads concurrently executed */
  rwl_thrinfo *next; /* pointer to the next */
  text *dbnam;
};

/* histogram of time - is allocated as array */
struct rwl_histogram
{
  ub4 count; /* count in the bucket */
  double ttime; /* total time in the bucket */
};

/* execution time statistics structure */
struct rwl_stats
{
  //rwl_mutex *mutex_stats; // moved to rwl_identifier due to RWL-600 [rwlmutexget-notinit]
  double wtime, etime, atime, dtime; // wait exec, application time
  ub4 *persec; /* array of per second counters */
  double *wtimsum; // array of per second wait time
  double *etimsum; // array of per second wait time
  double *atimsum; // array of per second wait time
  double *dtimsum; // array of per second wait time
  ub4 pssize;  /* and its size */
#define RWL_PERSEC_SECONDS 120 /* initial size of persec */
#define RWL_PERSEC_MAX 7201 /* max 2 hours */
  ub8 count; /* count of executions */
#ifdef NEVER
  double ttime; // some of times
#endif
  ub8 tcount; /* count of threads */
  rwl_histogram hist[]; /* currently not variable size - either full or not */
};

// Note that if you change the next value, you MUST make a coresponding
// change in the percentiles_oltp view in rwlviews.sql
#define RWL_MAX_HIST_BUCK 30 /* about 1024 seconds */
#define RWL_STATS_ARRAY 50 /* array size for various stats insert */


// Function declarations
// Note that many functions have evolved over time
// so in lack of overloading in C, there are macros
// that specify different argument counts
extern void rwlrastbeg(rwl_main *, text *, ub4);
extern void rwlrastadd(rwl_main *, text *, double);
extern void rwlrastfin(rwl_main *, text *, sb4);
extern void rwlrastval(rwl_xeqenv *,rwl_value *, rwl_identifier *);
extern sb4 rwlrastvar(rwl_xeqenv *, rwl_identifier *);
extern void rwlrastclear(rwl_main *);
extern sb4 rwladdvar2(rwl_main *, text *, rwl_type, ub2, text *);
#define rwladdvar(rwm, n, u1, u2) rwladdvar2(rwm, n, u1, u2, 0);
extern sb4 rwlfindvar2(rwl_xeqenv *, const text *, sb4, text *);
#define rwlfindvar(xe, n, v) rwlfindvar2(xe,n,v,0)
extern sb4 rwlverifyvg(rwl_xeqenv *, const text *, sb4, text *);
extern sb4 rwlfindvarug2(rwl_xeqenv *, const text *, sb4 *, text *);
#define rwlfindvarug(xe, v, ad) rwlfindvarug2(xe,v,ad,0)
extern sb4 rwllocalvar(rwl_xeqenv *, text *, sb4 *, rwl_identifier *);

extern void rwlcancelvar(rwl_main *, text *, sb4);
extern void rwlexprbeg(rwl_main *);
extern void rwlexprpush2(rwl_main *, const void *, rwl_stack_t, ub4 );
#define rwlexprpush(rwm, vv, u2) rwlexprpush2(rwm, vv, u2, 0)
#define rwlexprpush0(rwm, u2) rwlexprpush2(rwm, 0, u2, 0)
extern rwl_estack *rwlexprfinish(rwl_main *);
extern void rwlexprclear(rwl_main *);
extern void rwlexpreval(rwl_estack *, rwl_location *, rwl_xeqenv *, rwl_value *);
extern void rwlexprprint(rwl_estack *, rwl_location *, rwl_xeqenv *, FILE *);
extern void rwlexprdestroy(rwl_main *, rwl_estack *);
extern void rwlprintallvars(rwl_main *);
extern void rwlprintvar(rwl_xeqenv *, ub4);
extern void rwlvitags(rwl_main *);
extern void rwlfinishbreaks(rwl_main *, ub4);
extern void rwlcodeadd(rwl_main *, rwl_code_t, void *, ub4 , void *, ub4, void *, ub4, void *); /* seven arguments */
/*
 * The various calls to rwlcodeadd take different type of arguments.
 * The letters in the macros tell the type of arguments:
 * - a p means a pointer
 * - a u means an ub4 (well, it really is sb4)
 * -   x means ignored arg
 */
#define rwlcodeaddpupupup(rwlp,ctype,parg1,arg2,parg3,arg4,parg5,arg6,parg7) rwlcodeadd(rwlp,ctype,parg1,arg2,parg3,arg4,parg5,arg6,parg7)
#define rwlcodeaddpupupu(rwlp,ctype,parg1,arg2,parg3,arg4,parg5,arg6) rwlcodeadd(rwlp,ctype,parg1,arg2,parg3,arg4,parg5,arg6,0) 
#define rwlcodeaddpupupp(rwlp,ctype,parg1,arg2,parg3,arg4,parg5,parg7) rwlcodeadd(rwlp,ctype,parg1,arg2,parg3,arg4,parg5,0,parg7) 
#define rwlcodeaddpuppp(rwlp,ctype,parg1,arg2,parg3,parg5,parg7) rwlcodeadd(rwlp,(ctype),parg1,arg2,parg3,0,parg5,0,parg7) 
#define rwlcodeaddpupp(rwlp,ctype,parg1,arg2,parg3,parg5) rwlcodeadd(rwlp,ctype,parg1,arg2,parg3,0,parg5,0,0) 
#define rwlcodeaddpupup(rwlp,ctype,parg1,arg2,parg3,arg4,parg5) rwlcodeadd(rwlp,ctype,parg1,arg2,parg3,arg4,parg5,0,0)
#define rwlcodeaddpupu(rwlp,ctype,parg1,arg2,parg3,arg4) rwlcodeadd(rwlp,ctype,parg1,arg2,parg3,arg4,0,0,0) 
#define rwlcodeaddpup(rwlp,ctype,parg1,arg2,parg3) rwlcodeadd(rwlp,ctype,parg1,arg2,parg3,0,0,0,0) 
#define rwlcodeaddppu(rwlp,ctype,parg1,parg3,arg4) rwlcodeadd(rwlp,ctype,parg1,0,parg3,arg4,0,0,0) 
#define rwlcodeaddppp(rwlp,ctype,parg1,parg3,parg5) rwlcodeadd(rwlp,ctype,parg1,0,parg3,0,parg5,0,0) 
#define rwlcodeaddpu(rwlp,ctype,parg1,arg2) rwlcodeadd(rwlp,ctype,parg1,arg2,0,0,0,0,0) 
#define rwlcodeaddp(rwlp,ctype,parg1)       rwlcodeadd(rwlp,ctype,parg1,0   ,0,0,0,0,0) 
#define rwlcodeaddxu(rwlp,ctype,arg4) rwlcodeadd(rwlp,ctype,0,0,0,arg4,0,0,0) 
#define rwlcodeaddu(rwlp,ctype,arg2) rwlcodeadd(rwlp,ctype,0,arg2,0,0,0,0,0) 
#define rwlcodeadd0(rwlp,ctype)           rwlcodeadd(rwlp,ctype,0   ,0   ,0,0,0,0,0) 
extern void rwlcqncall(rwl_xeqenv *); /* callback for cqn */
extern ub4 rwlensuresession2(rwl_xeqenv *, rwl_location *, rwl_cinfo *, rwl_sql *, text *);
#define rwlensuresession(x,l,c,s) rwlensuresession2(x,l,c,s,0)
extern void rwlreleasesession2(rwl_xeqenv *, rwl_location *, rwl_cinfo *, rwl_sql *, text *);
#define rwlreleasesession(x,l,c,s) rwlreleasesession2(x,l,c,s,0)
extern ub4 rwlensureresdb(rwl_xeqenv *, rwl_location *, rwl_sql *, rwl_cinfo **);
extern void rwlreleaseresdb(rwl_xeqenv *, rwl_location *, rwl_sql *);
extern void rwlsimplesql2(rwl_xeqenv *, rwl_location *, rwl_cinfo *, rwl_sql *, text *);
#define rwlsimplesql(x,l,c,s) rwlsimplesql2(x,l,c,s,0)
extern void rwlflushsql2(rwl_xeqenv *, rwl_location *, rwl_cinfo *, rwl_sql *, text *);
#define rwlflushsql(x,l,c,s) rwlflushsql2(x,l,c,s,0)
extern void rwlloopsql(rwl_xeqenv *, rwl_location *, rwl_cinfo *, rwl_sql *, ub4, text *);
extern void rwldbconnect(rwl_xeqenv *, rwl_location *, rwl_cinfo *);
extern sb8 rwldbsescount(rwl_xeqenv *, rwl_location *, rwl_cinfo *, ub4);
extern void rwlcommit2(rwl_xeqenv *, rwl_location *, rwl_cinfo *, text *);
extern void rwlrollback2(rwl_xeqenv *, rwl_location *, rwl_cinfo *, text *);
#define rwlcommit(x,l,c) rwlcommit2(x,l,c,0)
#define rwlrollback(x,l,c) rwlrollback2(x,l,c,0)
extern void rwlociping(rwl_xeqenv *, rwl_location *, rwl_cinfo *, text *);
extern void rwlcqnregister(rwl_xeqenv *, rwl_location *, rwl_cinfo *, ub4, text *);
extern void rwlcqnregdone(rwl_xeqenv *, rwl_location *, rwl_cinfo *, text *);
extern void rwlcqnunreg(rwl_xeqenv *, rwl_location *, rwl_cinfo *, text *);
extern void rwlsetcclass(rwl_xeqenv *, rwl_location *, rwl_cinfo *);
extern ub4 rwlcclassgood2(rwl_xeqenv *, rwl_location *, text *); // during exec
extern void rwldbmodsesp(rwl_xeqenv *, rwl_location *, rwl_cinfo *, ub4, ub4);
extern void rwldbmodccache(rwl_xeqenv *, rwl_location *, rwl_cinfo *, ub4);

extern void rwlgetbinds(rwl_xeqenv *, OCIStmt *, OCIError *, rwl_sql *, rwl_location *, text *);
extern void rwlgetdefines(rwl_xeqenv *, OCIStmt *, OCIError *, rwl_sql *, rwl_location *, text *);
extern sb4 rwlbdident(rwl_xeqenv *, rwl_location *, text *, ub4, rwl_sql *, ub4, text *); 
extern rwl_bindef *rwlsearchdef(rwl_sql *, ub4);
extern rwl_bindef *rwlsearchbind(rwl_sql *, ub4, text *);

#if RWL_OS == RWL_LINUX
// The following two macros wrap OCI calls that we need to time
// when either of $statsapptime:on or $statsdbtime:on is set.
//
// Simply do something like this (without ; after the macros)
// 
// RWL_OATIME_BEGIN(xev, loc, db->seshp, sq, fname)
//   xev->status = OCIStmtExecute( ... )
// RWL_OATIME_END
//
// If no session handle is availble, use 0
// If no sql is available, use 0
// 
// Note that at present, we need the extra r argument which
// will be 1 in those cases where the OCI call may not actually
// have done a roundtrip. In that case, we need to find some
// way to see if a roundtrip has been done, which we check
// using the ru_nvcsw count from getrusage, which is the number
// of voluntary context switches, effectively read/write from
// the socket.
// Once a fix to OCI will be available, we can either always
// get OCI_ATTR_CALL_TIME and will know it returns 0 if there 
// was no roundtrip, or we can get a roundtrip count and only
// get OCI_ATTR_CALL_TIME if a real roundtrip took place
extern int rwlgetthreadusage(struct rusage *);
# define RWL_OATIME_BEGIN(e,l,s,q,f,r) \
  { \
    rwl_xeqenv *owxev = (e); \
    rwl_location *owloc = (l); \
    OCISession *owsession = (s); \
    rwl_sql *owsql = (q); \
    text *owfname = (f); \
    double owclock = 0; \
    sb8 owcalltime; \
    sb4 owdoct, owruneeded = (r); \
    struct rusage owru1, owru2; \
    if (owruneeded && owsession && bit(owxev->rwm->m4flags,RWL_P4_STATSDTIME)) \
      (void) rwlgetthreadusage(&owru1); \
    if (bit(owxev->rwm->m4flags,RWL_P4_STATSATIME)) \
      owclock = rwlclock(owxev,owloc); \

# define RWL_OATIME_END \
    if (bit(owxev->rwm->m4flags,RWL_P4_STATSATIME)) \
      owxev->otimesum += rwlclock(owxev,owloc) - owclock; \
    if (bit(owxev->rwm->m4flags,RWL_P4_STATSDTIME) && owsession) \
    { \
      if (owruneeded) \
      { \
	(void) rwlgetthreadusage(&owru2); \
	owdoct = owru2.ru_nvcsw > owru1.ru_nvcsw; \
      } \
      else owdoct = 1; \
      if (owdoct) \
      { \
	sb4 st = OCIAttrGet(owsession, OCI_HTYPE_SESSION, &owcalltime \
		   , 0, OCI_ATTR_CALL_TIME, owxev->errhp ) ; \
	if (OCI_SUCCESS != st) \
	  rwldberror2(owxev, owloc, owsql, owfname); \
	else \
	  owxev->dtimesum += 1.0e-6 * (double) owcalltime; \
      } \
    } \
  }

#else // not on Linux
# define RWL_OATIME_BEGIN(e,l,s,q,f,r)
# define RWL_OATIME_END
#endif
extern ub4 rwlcheckminval(rwl_xeqenv *, rwl_location *, sb8, ub4, ub4, text *);

#define rwlcclassgood(r,t) rwlcclassgood2((r)->mxq, 0, t) // during parse
extern void rwlmutexinit(rwl_main *, rwl_location *, rwl_mutex **);
extern void rwlmutexget(rwl_xeqenv *, rwl_location *, rwl_mutex *);
extern void rwlmutexrel(rwl_xeqenv *, rwl_location *, rwl_mutex *);
extern void rwlmutexdestroy(rwl_main *, rwl_location *, rwl_mutex **);
extern void rwlgetrunnumber(rwl_main *);
extern void rwlmillisleep(double);
extern void rwlpwprompt(rwl_cinfo *);
extern void rwlexprimmed(rwl_main *);
extern void rwlrun(rwl_main *);
extern void rwlyfileset(rwl_main *, FILE *, text *);
extern void rwlsetoption(rwl_main *, text *);
extern sb4 rwlyparse(rwl_main *);
extern sb4 rwlzparse(rwl_main *);
extern void rwlzparsestring(rwl_main *, text *);
extern sb4 rwlyparsestring(rwl_main *, const char *);
extern void rwlascanstring(rwl_main *, const char *);
extern sb4 rwlylex(void *, void *);
extern sb4 rwlylex_init_extra(rwl_main *, void **);
extern sb4 rwlylex_destroy(void *);
extern sb4 rwlzlex(void *, void *);
extern sb4 rwlzlex_init_extra(rwl_main *, void **);
extern sb4 rwlzlex_destroy(void *);
extern sb4 rwlalex(void *, void *);
extern sb4 rwlalex_init_extra(rwl_main *, void **);
extern sb4 rwlalex_destroy(void *);
extern void rwldbdisconnect(rwl_xeqenv *, rwl_location *, rwl_cinfo *);
extern void rwlreleaseallvars(rwl_xeqenv *);
extern void rwlinit1(rwl_main *, text *); // early initializion before parsing arguments
extern void rwlinit2(rwl_main *, text *); // initialization after doing first .rwl file scan
extern void rwlinit3(rwl_main *); // initialization after important argument parsing
extern void rwlyt2assert(rwl_main *); // verify sort
extern void rwlinitdotfile(rwl_main *, char *, ub4);
extern void rwlinitfromenv(rwl_main *);
extern void rwlinitxeqenv(rwl_xeqenv *);
extern double rwlclock(rwl_xeqenv *, rwl_location *);
extern double rwlunixepoch(rwl_xeqenv *, rwl_location *);
extern void rwlgetrusage(rwl_xeqenv *, rwl_location *);
extern double rwlsinceepoch(rwl_main *);
extern void rwlwait(rwl_xeqenv *, rwl_location *, double);
extern double rwlwaituntil(rwl_xeqenv *, rwl_location *, double);
extern void rwlinitstrvar(rwl_xeqenv *, rwl_value *);
extern void rwlloophead(rwl_main *);
extern void rwlloopfinish(rwl_main *);
extern void rwlrunthreads(rwl_main *);
extern void rwlcodehead(rwl_main *, ub4);
extern void rwlcodetail(rwl_main *);
extern void rwlcodecall(rwl_main *);
#ifdef RWL_USE_OCITHR
extern void rwlthreadcreate(rwl_main *, ub4 tnum, void (*) (rwl_xeqenv *));
extern void rwlcoderun(rwl_xeqenv *); /* , ub4, rwl_cinfo *); */
extern void rwlflushrun(rwl_xeqenv *); // run the thread that flushes persec
#else
extern void rwlthreadcreate(rwl_main *, ub4 tnum, void *(*) (rwl_xeqenv *));
extern void *rwlcoderun(rwl_xeqenv *); /* , ub4, rwl_cinfo *); */
extern void *rwlflushrun(rwl_xeqenv *); // run the thread that flushes persec
#endif
extern void rwlthreadawait(rwl_main *, ub4 tnum);
extern void rwlstatsincr(rwl_xeqenv *, rwl_identifier *, rwl_location *
	, double, double, double, double, double); 
extern void rwlstatsflush(rwl_main *, rwl_stats *, text *);
extern void rwloerflush(rwl_xeqenv *);
extern void rwlstrnncpy(text *, text *, ub8); // note that semantics is DIFFERENT from strncpy()
extern text *rwlstrdup2(rwl_main *, text *, ub4);
#define rwlstrdup(m,t) rwlstrdup2((m),(t),0)
// We (almost) never call standard Clib functions directly, 
// in stead we have rwl versions that are macros
// This is in particular used because we have text * (which is
// unsigned char *) as the primary character data type
#define rwlstrlen(x) strlen((char *)(x))
#define rwlstrcpy(d,s) strcpy((char *)(d),(char *)(s))
#define rwlstrchr(s,c) ((text *)strchr((char *)(s),(int)(c)))
#define rwlstrrchr(s,c) ((text *)strrchr((char *)(s),(int)(c)))
#define rwlstrstr(s,c) ((text *)strstr((char *)(s),(char *)(c)))
#define rwlstrcat(d,s) strcat((char *)(d),(char *)(s))
#define rwlstrcmp(l,r) strcmp((char *)(l), (char *)(r))
#define rwlstrncmp(l,r,n) strncmp((char *)(l), (char *)(r),n)
#define rwlstrtok(l,r) ((text *)strtok((char *)(l), (char *)(r)))
#define rwlgetenv(e) ((text *)getenv((char *)(e)))
#define rwlrem(a,b) (a-floor(a/b)*b)
extern FILE *rwlfopen(rwl_xeqenv *, rwl_location *, text *, char *);
extern void rwlallocabd(rwl_xeqenv *, rwl_location *, rwl_sql *);
extern void rwlfreeabd(rwl_xeqenv *, rwl_location *, rwl_sql *);

extern void rwlalloclob(rwl_xeqenv *, rwl_location *, OCILobLocator **);
extern void rwlfreelob(rwl_xeqenv *, rwl_location *, OCILobLocator *);
extern void rwlwritelob(rwl_xeqenv *, OCILobLocator *, rwl_cinfo *, rwl_value *, rwl_location *, text *);
extern void rwlwritelobo(rwl_xeqenv *, OCILobLocator *, rwl_cinfo *, rwl_value *, rwl_value *, rwl_location *, text *);
extern void rwlreadlob(rwl_xeqenv *, OCILobLocator *, rwl_cinfo *, rwl_value *, rwl_location *, text *);
extern void rwlreadloblo(rwl_xeqenv *, OCILobLocator *, rwl_cinfo *, rwl_value *, text *,rwl_value *, rwl_value *, rwl_location *, text *);
extern void rwldummyonbad(rwl_xeqenv *, text *); // Use dummy database if default is bad
extern ub4 rwldebugconv(rwl_main *,text *);

extern void rwlbuilddb(rwl_main *);
#define RWL_DEFAULT_DBNAME (text *)"default$database" // used with -l option

#define rwlatof(x) atof((char *)x)
#define rwlatoi(x) atoi((char *)x)

extern ub8 rwlhex2ub8(unsigned char *, ub4);
// Use highly optimized snprintf for most used dformat, iformat
extern void rwld2s(rwl_main *, unsigned char *, double, ub8, ub4);
#define rwlsnpdformat(rwm, s, l, d) do { \
  if (bit((rwm)->m3flags, RWL_P3_RWLD2SOK)) \
    rwld2s(rwm,s,d,l,(ub4)(rwm)->dformat[2]-'0'); \
  else \
    snprintf((char *)s, l, rwm->dformat, d); } while (0)

extern ub8 rwli2s(rwl_main *, text *, sb8, ub8, sb4);
#define rwlsnpiformat(rwm, s, l, i) do { \
  if (bit((rwm)->m3flags, RWL_P3_RWLI2SOK)) \
    (void) rwli2s(rwm,s,i,l,0) ; \
  else \
    snprintf((char *)s, l, rwm->iformat, i) ; } while (0)


// dynamic SQL
extern void rwldynsrelease(rwl_xeqenv *, rwl_location *, rwl_sql *, text *);
extern void rwldynstext(rwl_xeqenv *, rwl_location *, rwl_sql *, rwl_value *, text *);
extern void rwldynsbindef(rwl_xeqenv *, rwl_location *, rwl_sql *, rwl_value *, sb4 , text *, ub1, text * );
extern ub4 rwldynarcheck(rwl_main *);
extern ub4 rwldynarcomp(rwl_main *);
extern void rwldynarreplace(rwl_xeqenv *, rwl_location *, rwl_sql *, text*);

// readline, regex
extern ub4 rwlreadline(rwl_xeqenv *, rwl_location *, rwl_identifier *, rwl_idlist *, text *);
#if RWL_OS != RWL_WINDOWS
extern void rwlregex(rwl_xeqenv *, rwl_location *, text *, text *, rwl_idlist *, text *);
extern void rwlregextract(rwl_xeqenv *, rwl_location *, text *, text *, rwl_idlist *, text *);
extern void rwlregexsub(rwl_xeqenv *, rwl_location *, text *, text *, text *, sb4, text *, ub4, text *);
#endif
extern void rwlstr2var(rwl_xeqenv *, rwl_location *, sb4 , text *, ub4 , ub4);
#define RWL_S2VREFORMAT 0x00000001 // convert integer/double back to string

// Does all printf functionality
extern void rwldoprintf(rwl_xeqenv *, rwl_location *, rwl_identifier *, rwl_conlist *, ub4);
extern void rwlpfeng(rwl_main *, text *, ub4, double, sb4, ub4);


/* memory allocation and free
 * These are used to harden code as they verify
 * under- and overwrites, and double free attempts
 *
 * If you consider using them, you should compile 
 * with -O0 */
#ifdef RWL_OWN_MALLOC
# ifdef __OPTIMIZE__
#  error "Do not optimize own malloc"
# endif
extern void *rwldoalloc(rwl_main *,  rwl_location *, size_t, sb4 , char *);
# define rwlalloc(rwm,nn) rwldoalloc(rwm,0, nn, __LINE__,__FILE__)
# define rwlalloccode(rwm,nn,loc) rwldoalloc(rwm,loc,nn, __LINE__,__FILE__)
# define rwlalloccodenc(rwm,nn,loc) rwldoalloc(rwm,loc,nn, __LINE__,__FILE__)
# define RWL_ALLOC_HEAD 0x12340badfeadfead
# define RWL_ALLOC_TAIL 0x4321feedbadf00de
# define RWL_ALLOC_FREE 0xd00dabcddeadbeef
#else
// Note that LOTS of code DEPENDS on the fact that the memory 
// returned my rwlalloc/rwlalloccode is cleared to zero
# define rwlalloc(rwm,nn) calloc(1,nn)
# define rwlalloccode(rwm,nn,loc) calloc(1,nn)
# define rwlalloccodenc(rwm,nn,loc) malloc(nn)
#endif

#ifdef RWL_OWN_MALLOC
extern void rwldofree(rwl_main *,rwl_location *,  void *, sb4, char *);
# define rwlfree(rwm,b) rwldofree(rwm,0,b, __LINE__,__FILE__)
# define rwlfreecode(rwm,b,loc) rwldofree(rwm,loc,b, __LINE__,__FILE__)
#else
# define rwlfree(rwm,b) free(b)
# define rwlfreecode(rwm,b,loc) free(b)
#endif

/* error handling */

struct rwl_error
{
  const char *txt; // text
  ub4 cat; // categories
#define RWL_ERROR_SEVERE        0x0001 /* severe, stop immediatedly */
#define RWL_ERROR_PARSE         0x0002 /* error during parsing, don't execute */
#define RWL_ERROR_MINOR         0x0004 /* continue parse, and allow execute */
#define RWL_ERROR_RUNTIME       0x0008 /* a real runtime error such as zero divice */
#define RWL_ERROR_STOP_BEFORE_RUN (RWL_ERROR_PARSE|RWL_ERROR_SEVERE)
#define RWL_ERROR_NOFILE        0x0010 /* error does not have a file context */
#define RWL_ERROR_WARNING       0x0020 /* warning, never stop */
#define RWL_ERROR_MUTE          0x0040 /* mute this error via $mute directive */
#define RWL_ERROR_HASNL         0x0080 /* Error text has newline, so don't print it */
#define RWL_ERROR_ONCEPERLINE   0x0100 /* Only print this error once per line */
#define RWL_ERROR_INFORMATION   0x0200 /* just an information, never stop */
// unused                       0x0400 
#define RWL_ERROR_RWLDASH       0x0800 /* The text includes RWL-nnn */
#define RWL_ERROR_RUNMINOR      0x1000 /* a minor runtime error not causing non-zero exit */
#define RWL_ERROR_SQLLOGGING    0x2000 /* The sql logging error */
};
/* Errors that are returned from main */
#define RWL_EXIT_ERRORS (RWL_ERROR_SEVERE\
	|RWL_ERROR_PARSE\
	|RWL_ERROR_MINOR\
	|RWL_ERROR_RUNTIME)

// More prototypes
void rwlerror(rwl_main *, ub4, ...);
void rwlexecerror(rwl_xeqenv *, rwl_location *, ub4, ...);
void rwlsqlerrlin(rwl_xeqenv *, rwl_location *, rwl_sql *, ub4);
void rwldberror3(rwl_xeqenv *, rwl_location *, rwl_sql *, text *, ub4);
#define rwldberror0(x,l) rwldberror3(x,l,0,0,0)
#define rwldberror(x,l,s) rwldberror3(x,l,s,0,0)
#define rwldberror1(x,l,f) rwldberror3(x,l,0,f,0)
#define rwldberror2(x,l,s,f) rwldberror3(x,l,s,f,0)
#define RWL_DBE3_NOPRINT RWL_SQFLAG_IGNERR  // do not print
#define RWL_DBE3_NOCTX   RWL_SQFLAG_NOCTX  // no full context 
#include "rwlerror.h"
void rwldbclearerr(rwl_xeqenv *);
void rwlsqllogging(rwl_xeqenv *, rwl_location *, rwl_sql *, text *);
void rwldbevent(void *, OCIEvent *);
void rwlsevere(rwl_main *, char *, ...);
void rwlexecsevere(rwl_xeqenv *, rwl_location *, char *, ...);
void rwldebug(rwl_main *, char *, ...);
void rwldebugnonl(rwl_main *, char *, ...);
void rwldebugcode(rwl_main *, rwl_location *, char *, ...);
void rwldebugcodenonl(rwl_main *, rwl_location *, char *, ...);
void rwlerrormute(rwl_main *, ub4, ub4);
void rwlcheckdformat(rwl_main *);
void rwlcheckiformat(rwl_main *);
void rwlshiftdollar(rwl_xeqenv *, rwl_location *);
sb4 rwlinitoci(rwl_main *);
void rwlfinishoci(rwl_main *);
text *rwlslashf2b(rwl_xeqenv *, text *);
#if RWL_OS == RWL_WINDOWS
# define rwlwinslash(xev, fil) (bit((xev)->rwm->m4flags, RWL_P4_SLASHCONVERT) ? (rwlslashf2b((xev),(fil))) : (fil))
#else
# define rwlwinslash(xev, fil) (fil)
#endif
text *rwlenvexp2(rwl_xeqenv *, rwl_location *, text *, ub4, ub4);
#define RWL_ENVEXP_PATH   0x01 // search for the file in $RWLOADSIM_PATH
#define RWL_ENVEXP_STRIP  0x02 // strip characters off end
#define RWL_ENVEXP_PUBLIC 0x04 // first search for file in public
#define RWL_ENVEXP_NOTCD  0x08 // Do not search in current directory
#define rwlenvexp(x,l,t) rwlenvexp2((x),(l),(t),0,0)
#define rwlenvexp1(x,l,t,e) rwlenvexp2((x),(l),(t),(e),0)

/* Is variable in scope? */
#define rwlinscope(var,fil,fun) (var /* not NULL */ && (  \
     !bit((var)->flags,RWL_IDENT_LOCAL|RWL_IDENT_PRIVATE) /*global*/ \
  || ( bit((var)->flags,RWL_IDENT_LOCAL) && (fun) && 0==rwlstrcmp((var)->pname,(fun)) ) /*local and in this function */ \
  || ( bit((var)->flags,RWL_IDENT_PRIVATE) && 0==rwlstrcmp((var)->loc.fname, (fil)) ) /* private and in this file */ ))

// random functions
#ifdef RWL_OWN_RAND48
extern sb8 rwlnrand48(rwl_xeqenv *);
extern double rwlerand48(rwl_xeqenv *);
#else
# define rwlnrand48(e) (nrand48((e)->xsubi))
# define rwlerand48(e) (erand48((e)->xsubi))
#endif

#if RWL_OS == RWL_WINDOWS
# define rwlpopen(p,m) _popen((char *)(p),(m))
# define rwlpclose(s) _pclose((s))
# define rwlstrerror(e,b,l) strerror_s((b),(l),(e))
extern char *rwlmkdtemp(rwl_main *, char *);
#else
# define rwlpopen(p,m) popen((char *)(p),(m))
# define rwlpclose(s) pclose((s))
# define rwlmkdtemp(m,t) mkdtemp((t))
# define rwlstrerror(e,b,l) strerror_r((e),(b),(l))
#endif

extern int rwlydebug;
/* Handle interrupt */
#if RWL_OS == RWL_WINDOWS
// using signal on windows
void rwlctrlc(int);
#else
void rwlctrlc();
#endif
volatile sig_atomic_t rwlstopnow; 
#define RWL_STOP_MARK 1  // mark that we should stop asap
#define RWL_STOP_BREAK 2 // and also tell we have sent OCIBreak 
volatile sig_atomic_t rwlctrlcount; 
volatile sig_atomic_t rwlcont1013; // If true, continue after ORA-01013
volatile rwl_main *rwm_glob;
#define RWL_MAX_CTRLC 10 // send SIGQUIT to myself after this many ctrl-c
void rwlechoon(int);
void rwlechooff(int); 

#ifdef RWL_GEN_EXEC
extern const char rwlexecdata[];
extern const char rwlexecname[];
extern const char rwlexecbanner[];
#endif

// we are using queue simulation using backlog if
// either:
//    the user asked for it on command line
//    and
//    the user has explicitly specifified it in his loop syntax
//    and
//    what the user explicitly specified was NOT noqueue
// or
//    the use has explicitly specified it
//    and
//    the user explicitly specified it as queue
#define rwlqueueevery(r) \
  ( \
    ( \
      bit((r)->m2flags, RWL_P2_QUEUE) \
      && (r)->ynqueue \
      && !bit((r)->ynqueue, RWL_NOQUEUE_EVERY) \
    ) \
    || \
    ( \
      (r)->ynqueue \
      && bit((r)->ynqueue, RWL_QUEUE_EVERY) \
    ) \
  )


/* error frames for source file error localtions
 *
 * The RWL_SRC_ERROR_FRAME and RWL_SRC_ERROR_END pair
 * are used to wrap code where we need to use the
 * filename and linenumber from the source file
 * rather than from an input file in various places
 * where an rwl_location * is needed.  The rwl_location *
 * argument to e.g. rwlexecerror() is then given as
 * RWL_SRC_ERROR_LOC
 */

#define RWL_SRC_ERROR_FRAME \
	{ rwl_location rwl_src_error_loc \
	= { __LINE__, __LINE__, (text *) __FILE__, 0 };
#define RWL_SRC_ERROR_LOC \
	( rwl_src_error_loc.lineno \
	= rwl_src_error_loc.errlin \
	= __LINE__ \
	, &rwl_src_error_loc)
#define RWL_SRC_ERROR_END }


/* misc other defines */
#define RWL_PFLAG_FORMAT RWL_SB8PRINTF ":%.3f:%s\n" /* printf runnumber, time, hostname */
#define RWL_MFLAG_FORMAT RWL_SB8PRINTF ":%lf:%ms"    /* opposite sscanf */

#define RWL_EXTRA_VERSION_TEXT ""

#define RWL_VERSION_MAJOR 3
#define RWL_VERSION_MINOR 1
#define RWL_VERSION_RELEASE 2
#define RWL_VERSION_TEXT "Development" RWL_EXTRA_VERSION_TEXT
#define RWL_VERSION_DATE // undef to not include compile date 
extern ub4 rwlpatch;

// make rwlprogram a known symbol to tags/cscope
#define rwlprogram rwlyparse

#define rwlcomp(s,x) const char s[] = "rwlwatermark: " rwlxstr(x) " " __FILE__ ;
#define rwlxstr(x) #x

