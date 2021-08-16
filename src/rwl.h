/*
 * RWP*Load Simulator
 *
 * Copyright (c) 2021 Oracle Corporation
 * Licensed under the Universal Permissive License v 1.0
 * as shown at https://oss.oracle.com/licenses/upl/
 *
 *
 *
 * Real World performance Load simulator common header
 *
 * rwl.h
 *
 * History
 *
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


#include <oci.h>

#ifdef OCI_ERROR_MAXMSG_SIZE2
# define RWL_OCI_ERROR_MAXMSG OCI_ERROR_MAXMSG_SIZE2
#else
// On Solaris 11.2, only OCI_ERROR_MAXMSG_SIZE exists
# define RWL_OCI_ERROR_MAXMSG OCI_ERROR_MAXMSG_SIZE
#endif

#define RWL_EXTRA_VERSION_TEXT ""

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

#define RWL_OCI_MINOR OCI_MINOR_VERSION

#undef RWL_USE_SQL_ID
#if ((OCI_MAJOR_VERSION>12) || (OCI_MAJOR_VERSION==12 && OCI_MINOR_VERSION>=2))
# define RWL_USE_SQL_ID
#endif


#include "rwlport.h"

#define RWL_USE_OCITHR
#undef RWL_OWN_MALLOC /* to wrap malloc/free with checks, do NOT optimize! */

#include <time.h>
#include <unistd.h>
#include <signal.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdio.h>
#include <getopt.h> 
#include <sys/utsname.h>

#define RWL_HOSTNAMEMAX (sizeof(((struct utsname *)0)->nodename)) // max nodename from uname


#ifndef RWL_USE_OCITHR
# include <pthread.h>
#endif


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

extern struct option rwllongoptions[];
ub4 rwloptcount;


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
  /* these for pooled connection: */
  text *pstring;
  ub4 pslen;
  OCISPool *spool;
  /* these for both : */
  OCISession *seshp; /* OCI Authentication */
  OCISvcCtx  *svchp; /* Service context */
  OCIAuthInfo *authp; /* AuthInfo context */
  text *cclass; 
# define RWL_DEFAULT_CCLASS "rwloadsim"
  
  ub4 stmtcache; /* size of statement cache */
  ub4 ptimeout; /* session/conneciton pool timeout */
#define RWL_DBPOOL_DEFAULT_TIMEOUT 60

#define RWL_DEFAULT_STMTCACHE 20 /* Like on OCI */
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

  // These are static flags
#define RWL_DB_REQMARK    0x0001000 // requestmark option set
#define RWL_DB_STATEMARK  0x0002000 // statemark option set
#define RWL_DB_USECPOOL   0x0004000 // Set when the database uses cpool connection
#define RWL_DB_CCACHUSER  0x0008000 // use set a value for cursorcache
#define RWL_DB_COPY_FLAGS (RWL_DB_REQMARK|RWL_DB_STATEMARK|RWL_DB_USECPOOL|RWL_DB_CCACHUSER)
  sb4 errcode;	// last error code

  // stuff for connectionpool
  OCICPool *cpool;
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
  ub1 valflags; 
#define RWL_VALUE_FILE_OPENR      0x01 /* if this is a file, it is open for read */
#define RWL_VALUE_FILE_OPENW      0x02 /* if this is a file, it is open for write */
#define RWL_VALUE_FILEISPIPE      0x04 /* if this is a file, it is a pipe */
#define RWL_VALUE_FILEREPNOTOPEN  0x08 /* set when file not open has been reported during write */
#define RWL_VALUE_FILEOPENMAIN    0x10 /* set when the file was opened in main */
  ub1 vtype; /* dominant type - one of RWL_TYPE_{INT,DBL,STR} */
  sb2 isnull; /* false when good and not NULL */
#define RWL_ISNULL (-1) // MUST match the Oracle definition
#ifdef RWL_USE_BIN_DEF_OCI2
  ub4 alen; /* used with RWL_DEBUG_USEALEN and RWL_TYPE_RAW */
#else
  ub2 alen;
#endif

};

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
  ub8 dummyvar;
};

/* rwl_value *rwlnuminvar(rwl_xeqenv *, rwl_identifier *)
 *
 * This function (macro) will return the correct rwl_value
 * from a given variable, which may be local or global.
 * If local, it is stored in the "stack frame", i.e.
 * xev->locals[], and if global, it is inside the 
 * identifier itself
 *
 * Note that v3val in a procedure/function is the total number
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
#define RWL_SQL_ARRAY_MEMORY 100000 /* 100k - rather randomly chosen */
  void **abd; /* array of array binds or array defines*/
  sb2  **ari; /* array of indicators */
  ub4 aix; /* index for next insert */
  text *sqlid; ub4 sqlidlen;
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
  ub1 bdtyp; /* one of these */
#define RWL_BIND_POS 1 /* bind by position */
#define RWL_BIND_NAME 2 /* bind by name */
#define RWL_DEFINE  3 /* define */
#define RWL_BINDOUT_POS 4 /* bind by position with return value */
#define RWL_BINDOUT_NAME 5 /* bind by name with return value */

#define RWL_BIND_UNK 6    // bind still unknown pos/name
#define RWL_BINDOUT_UNK 7 // bindout still unknown pos/name
/* The direct bind and define are used internally by rwloadsim
 * where the variable is an ordinary C variable of type 
 * double, sb8 or char *
 *
 * Note that these MUST have the largest values or the
 * rwlbdisdir() macro needs to be changed
 */
#define RWL_DIRBIND 10 /* bind direct by position */
#define RWL_DIRDEFINE 11 /* define direct by position */
  ub1 vtype; /* variable type (set from variable or direct) */
  ub1 bdflags;
#define RWL_BDFLAG_BNALLOC 0x01 // bname was rwlstrdup'ed and must be freed
#define RWL_BDFLAG_FIXED   0x02 // fixed at declaration time
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

// $argument $option directive list
struct rwl_arglist
{
  text *argname; // the name that becomes the variable name and the --argument name
  text *argvalue; // the actual value when end-user uses --argument
  text *arghelp; // Help text for the user argument
  rwl_arglist *nextarg; // linked list
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
  ub4 posargs; /* # of positional arguments */
  ub4 fileargs; /* # of file arguments */
  ub1 lvcount; /* local variable count (includes facnt) */
  ub1 facnt; /* formal argument count during procedure declaration */
  ub1 bdtyp; /* bind/define type */
  ub1 furlev; // function recursion level during parse - index to aacnt, funcn
  ub1 dtype; /* type of declaration */
  ub1 mqbdtyp; /* bind/define type for modify sql */
  ub1 supsemerr; // reason for superflous ';' 
#define RWL_SUPSEM_FUNC    1 // function header
#define RWL_SUPSEM_PROC    2 // function header
#define RWL_SUPSEM_THREAD  3 // thread header
  ub1 ynqueue; /* {NO}QUEUE EVERY */
#define RWL_QUEUE_EVERY 0x0001
#define RWL_NOQUEUE_EVERY 0x0002

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
  text *filenam; /* file name for write/writeline */
  sb4 filvarn; /* fine variable number for write/writeline */
  text *lobnam; /* LOB variable name for readlob/rwitelob */
  sb4 lobvarn; /* LOB variable number for readlob/rwitelob */
  rwl_sql *sqsav; /* temporary save of sql */
  rwl_cinfo *dbsav; /* temporary save of db (cinfo) used during database declaration */
  rwl_localvar *lvsav; /* procedure/function argument array */
  rwl_location loc ; /* input line number for error reporting */
  rwl_location runloc; /* location of first seen run */
  rwl_location *parfaitloc; // make parfait shut up, see statement in rwlparser.y
  char *errtxt ;  /* error text */
  void *rwlyscanner; /* opaque for us */
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
#define RWL_DEBUG_ALLOC      0x00000040 /* debug alloc/free */
#define RWL_DEBUG_MISC       0x00000080 /* miscellaneous, typically temporary debug */
#define RWL_DEBUG_MAIN \
	( RWL_DEBUG_PRINTYYERR \
	| RWL_DEBUG_YYDEBUG \
	| RWL_DEBUG_VARIABLE \
	| RWL_DEBUG_ALLOC \
	| RWL_DEBUG_ALLOWHACK \
	| RWL_DEBUG_USEALEN \
	| RWL_DEBUG_MISC \
	| RWL_DEBUG_EXECUTE )
// then debug flags for threads 
#define RWL_THR_DEVAL        0x00000100 /* print evalueation details */
#define RWL_THR_DSQL         0x00000200 /* debug database */
#define RWL_THR_DTHRSER      0x00000400 /* serialize threads in stead of calling pthread  */
#define RWL_DEBUG_THREAD \
	( RWL_THR_DEVAL \
	| RWL_DEBUG_USEALEN \
	| RWL_DEBUG_ALLOWHACK \
	| RWL_THR_DTHRSER \
	| RWL_THR_DSQL)
// and now the rest 
#define RWL_P_STOPNOW        0x00000800 /* Stop a thread as soon as posible */
#define RWL_P_STATISTICS     0x00001000 /* gather statistics */
#define RWL_P_HISTOGRAMS     0x00002000 /* gather statistic histograms */
#define RWL_P_PERSECSTAT     0x00004000 /* gather per second counts */
#define RWL_P_ONLYMAINTH     0x00008000 /* set when only main thread exists */
#define RWL_P_ISMAIN         0x00010000 /* set for thread used by main */
#define RWL_P_PROCHASSQL     0x00020000 /* set when compiling a procedure that needs database */
#define RWL_P_SQLWASPLS      0x00040000 /* last NAMEDSQL lexed was a PL/SQL block */
#define RWL_P_PRINTTOFILE    0x00080000 /* set when printing (write) is to a file */
#define RWL_P_PRINTBLANK     0x00100000 /* next print should include blank */
#define RWL_P_PRINTLINE      0x00200000 /* latest print was a printline */
#define RWL_P_STOPONORA	     0x00400000 /* Stop at ORA- errors */
#define RWL_P_unused         0x00800000 
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
#define RWL_P2_MAYBECOMMAW   0x20000000 // warn against missing comma
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

  int userexit; // value for user exit

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

  char *reskey; /* results data key - completely opaque to rwloadsim */
  char *komment; /* also opaque */
#define RWL_MAX_KOMMENT 100 // needs to match rwlrun.komment declaration in rwloadsim.sql
  ub8 procno;
  ub8 runnumber;
  char *Mname; /* name of file to store Moption */
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

  ub4 sqllen;
  char *vitagsfile;
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
  rwl_pathlist *pathlist; // list of RWLOADSIM_PATH elements
  text *publicdir; // full pathname of public directory
  ub4 maxreadlen; // length of buffer for readline

  // Fields used for regular expressions
  rwl_estack *reg_estk, *str_estk, *sub_estk;
#define RWL_MAXREADLEN 2050 // default value

  // misc use
  text *misctxt;
  text sqlbuffer[RWL_MAXSQL+2];  /* text of last SQL */ 
} ;

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
  rwl_location loc; /* location of declaration */
};

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
#define RWL_MAX_IDLEN 30 /* Max length */
  rwl_value num; /* execution time value */
  rwl_location loc; /* location of declaration */
  ub4 vval; /* value - only used for some types */
  ub4 v2val; /* value2 - only used for some types */
  void *vdata; /* pointer to data for some types */
  void *v2data; /* pointer to data for some types */
  text *iline; // buffer for file reading
  ub1 v3val; /* value3 - only used for some types */
  rwl_type vtype; /* identifer(variable) and constant types */
  ub2 flags;
#define RWL_IDENT_COMMAND_LINE    0x0001 /* declared and initialized on command line */
#define RWL_IDENT_IGN_DECL_ASSIGN 0x0002 /* ignore assignment during declaration */
#define RWL_IDENT_INTERNAL        0x0004 /* variable is only used internally */
#define RWL_IDENT_THRSUM          0x0008 /* sum the value from threads */
#define RWL_IDENT_NOPRINT         0x0010 /* Don't print at rwlvarprint */
#define RWL_IDENT_NOSTATS         0x0020 /* Don't gather statistics */
#define RWL_IDENT_LOCAL           0x0040 /* Local variable */
#define RWL_IDENT_PRIVATE         0x0080 /* Private variable */
#define RWL_IDENT_THRSPEC (RWL_IDENT_PRIVATE|RWL_IDENT_THRSUM)
  char *stype; /* string representation for debug and error messages*/
  rwl_stats *stats; /* allocated when statistics are collected */
  rwl_mutex *var_mutex; /* allocated for relevant variables when flushstop is used */

};

#define RWL_MAX_VAR 500 /* default number of variables */
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
, RWL_STACK_LENGTHB /* lengthb() function */
, RWL_STACK_SUBSTRB2 /* substrb(s,p) function */
, RWL_STACK_SUBSTRB3 /* substrb(s,p,l) function */
, RWL_STACK_VAR_LB /* just length of string variable */
, RWL_STACK_ERLANGK /* erlangk() distribution function */
#define RWL_ERLANGK_MAXK 20 // max value of k
, RWL_STACK_SQL_ID // sql_id function
, RWL_STACK_GETENV // getenv function
, RWL_STACK_SYSTEM // system function
, RWL_STACK_LOG  // log(x) function
, RWL_STACK_LOGB // log(b,x) function
, RWL_STACK_EXP  // exp(x) function
, RWL_STACK_EXPB // exp(b,x) function
, RWL_STACK_ROUND // round(x) function
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
  // The reason for the union below is legacy from the
  // very beginning as an attept to save some memory
  union rwl_es_union
  {
    struct rwl_es_struct
    {
      sb4 rwl_es_var; /* variable number if a variable */
      const text *rwl_es_name; /* variable name is a variable */
      ub2 rwl_es_aacnt; /* actual argument count for function call */
    } rwl_es_s;
    rwl_value rwl_es_num; /* constant value if a constant */
  } rwl_es_u;
#define esvar rwl_es_u.rwl_es_s.rwl_es_var
#define esname rwl_es_u.rwl_es_s.rwl_es_name
#define esaacnt rwl_es_u.rwl_es_s.rwl_es_aacnt
#define esnum rwl_es_u.rwl_es_num
  rwl_stack_t elemtype; /* a value, and operator, etc */
  ub1 eflags; /* low order bits are used in pstack */
#define RWL_EST_UNIFORM  0x01 /* there is UNIFORM on stack */
#define RWL_EST_HASDBL   0x02 /* there is double variable or constant */
#define RWL_EST_ERLANG   0x04 /* there is erlang/erlang2 on the stack */
#define rwlestintwait(x) (bit((x)->eflags,RWL_EST_UNIFORM) && \
			  ! bit((x)->eflags, RWL_EST_HASDBL|RWL_EST_ERLANG))
#define RWL_EST_HASMOD   0x08 /* there is a % on stack */
#define RWL_EST_HASCMP   0x10 /* there is a comparison on stack */
#define RWL_EST_ASNINT   0x20 /* assigns to integer */
  ub1 skipnxt;
  ub1 skipend;
  ub1 branchtype;
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
, RWL_CODE_WRITELOB // Write a LOB from an expression - ceptr1/ceint2 is name/guess of LOB, ceptr3 is rwl_estack* to write to it
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
, RWL_CODE_MODCCACHE // modify cursor cache

/* these MUST come last */
, RWL_CODE_END // return/finish */
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
  double time0, time1, time2; /* different use in different cases */
  ub4 *persec; /* array of per second counters */
  ub4 pssize;  /* and its size */
#define RWL_PERSEC_SECONDS 120 /* initial size of persec */
#define RWL_PERSEC_MAX 7201 /* max 2 hours */
  ub8 count; /* count of executions */
  ub8 tcount; /* count of threads */
  rwl_histogram hist[]; /* currently not variable size - either full or not */
};

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
 * - a u means an ub4
 * -   x means ignored arg
 */
#define rwlcodeaddpupupu(rwlp,ctype,parg1,arg2,parg3,arg4,parg5,arg6) rwlcodeadd(rwlp,ctype,parg1,arg2,parg3,arg4,parg5,arg6,0) 
#define rwlcodeaddpuppp(rwlp,ctype,parg1,arg2,parg3,parg5,parg7) rwlcodeadd(rwlp,(ctype),parg1,arg2,parg3,0,parg5,0,parg7) 
#define rwlcodeaddpupp(rwlp,ctype,parg1,arg2,parg3,parg5) rwlcodeadd(rwlp,ctype,parg1,arg2,parg3,0,parg5,0,0) 
#define rwlcodeaddpupu(rwlp,ctype,parg1,arg2,parg3,arg4) rwlcodeadd(rwlp,ctype,parg1,arg2,parg3,arg4,0,0,0) 
#define rwlcodeaddpup(rwlp,ctype,parg1,arg2,parg3) rwlcodeadd(rwlp,ctype,parg1,arg2,parg3,0,0,0,0) 
#define rwlcodeaddppu(rwlp,ctype,parg1,parg3,arg4) rwlcodeadd(rwlp,ctype,parg1,0,parg3,arg4,0,0,0) 
#define rwlcodeaddppp(rwlp,ctype,parg1,parg3,parg5) rwlcodeadd(rwlp,ctype,parg1,0,parg3,0,parg5,0,0) 
#define rwlcodeaddpu(rwlp,ctype,parg1,arg2) rwlcodeadd(rwlp,ctype,parg1,arg2,0,0,0,0,0) 
#define rwlcodeaddp(rwlp,ctype,parg1)       rwlcodeadd(rwlp,ctype,parg1,0   ,0,0,0,0,0) 
#define rwlcodeaddxu(rwlp,ctype,arg4) rwlcodeadd(rwlp,ctype,0,0,0,arg4,0,0,0) 
#define rwlcodeadd0(rwlp,ctype)           rwlcodeadd(rwlp,ctype,0   ,0   ,0,0,0,0,0) 
extern void rwlcoderun(rwl_xeqenv *); /* , ub4, rwl_cinfo *); */
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
extern void rwlociping(rwl_xeqenv *, rwl_location *, rwl_cinfo *);
extern void rwlsetcclass(rwl_xeqenv *, rwl_location *, rwl_cinfo *);
extern ub4 rwlcclassgood2(rwl_xeqenv *, rwl_location *, text *); // during exec
extern void rwldbmodsesp(rwl_xeqenv *, rwl_location *, rwl_cinfo *, ub4, ub4);
extern void rwldbmodccache(rwl_xeqenv *, rwl_location *, rwl_cinfo *, ub4);

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
extern void rwlzparsestring(rwl_main *, char *);
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
extern void rwlinit3(rwl_main *); // initialization after all argument parsing
extern void rwlinitdotfile(rwl_main *, char *, ub4);
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
extern void rwlthreadcreate(rwl_main *, ub4 tnum, void (*) (rwl_xeqenv *));
extern void rwlthreadawait(rwl_main *, ub4 tnum);
extern void rwlstatsincr(rwl_xeqenv *, rwl_identifier *, rwl_location *
	, double, double, double, double); 
extern void rwlstatsflush(rwl_main *, rwl_stats *, text *);
extern void rwloerflush(rwl_xeqenv *);
extern void rwlflushrun(rwl_xeqenv *); // run the thread that flushes persec
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
#define rwlstrstr(s,c) ((text *)strstr((char *)(s),(char *)(c)))
#define rwlstrcat(d,s) strcat((char *)(d),(char *)(s))
#define rwlstrcmp(l,r) strcmp((char *)(l), (char *)(r))
#define rwlgetenv(e) ((text *)getenv((char *)(e)))
extern FILE *rwlfopen(rwl_xeqenv *, rwl_location *, text *, char *);
extern void rwlallocabd(rwl_xeqenv *, rwl_location *, rwl_sql *);
extern void rwlfreeabd(rwl_xeqenv *, rwl_location *, rwl_sql *);

extern void rwlalloclob(rwl_xeqenv *, rwl_location *, OCILobLocator **);
extern void rwlfreelob(rwl_xeqenv *, rwl_location *, OCILobLocator *);
extern void rwlwritelob(rwl_xeqenv *, OCILobLocator *, rwl_cinfo *, rwl_value *, rwl_location *);
extern void rwlreadlob(rwl_xeqenv *, OCILobLocator *, rwl_cinfo *, rwl_value *, rwl_location *);
extern void rwldummyonbad(rwl_xeqenv *, text *); // Use dummy database if default is bad

extern void rwlbuilddb(rwl_main *);
#define RWL_DEFAULT_DBNAME (text *)"default$database" // used with -l option

#define rwlatof(x) atof((char *)x)

extern ub8 rwlhex2ub8(char *, ub4);

// dynamic SQL
extern void rwldynsrelease(rwl_xeqenv *, rwl_location *, rwl_sql *, text *);
extern void rwldynstext(rwl_xeqenv *, rwl_location *, rwl_sql *, rwl_value *, text *);
extern void rwldynsbindef(rwl_xeqenv *, rwl_location *, rwl_sql *, rwl_value *, sb4 , text *, ub1, text * );

// readline, regex
extern ub4 rwlreadline(rwl_xeqenv *, rwl_location *, rwl_identifier *, rwl_idlist *, text *);
extern void rwlregex(rwl_xeqenv *, rwl_location *, text *, text *, rwl_idlist *, text *);
extern void rwlregextract(rwl_xeqenv *, rwl_location *, text *, text *, rwl_idlist *, text *);
extern void rwlregexsub(rwl_xeqenv *, rwl_location *, text *, text *, text *, sb4, text *, ub4, text *);
extern void rwlstr2var(rwl_xeqenv *, rwl_location *, sb4 , text *, ub4 , ub4);
#define RWL_S2VREFORMAT 0x00000001 // convert integer/double back to string


/* memory allocation and free
 * These are used to harden code
 *
 * NOTE that they have NOT be used for a long time
 * and ARE therefore not tested to actually work
 *
 * If you consider using them, you MUST compile 
 * with -O0 */
#ifdef RWL_OWN_MALLOC
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
#define RWL_ERROR_YY            0x0400 /* further information from -D0x8 */
#define RWL_ERROR_RWLDASH       0x0800 /* The text includes RWL-nnn */
#define RWL_ERROR_RUNMINOR      0x1000 /* a minor runtime error not causing non-zero exit */
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
#define rwldberror2(x,l,s,f) rwldberror3(x,l,s,f,0)
#define RWL_DBE3_NOPRINT RWL_SQFLAG_IGNERR  // do not print
#define RWL_DBE3_NOCTX   RWL_SQFLAG_NOCTX  // no full context 
#include "rwlerror.h"
void rwldbclearerr(rwl_xeqenv *);
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
double rwlclock(rwl_xeqenv *, rwl_location *);
void rwlshiftdollar(rwl_xeqenv *, rwl_location *);
sb4 rwlinitoci(rwl_main *);
void rwlfinishoci(rwl_main *);
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
  || ( bit((var)->flags,RWL_IDENT_LOCAL) && fname && 0==rwlstrcmp((var)->pname,fun) ) /*local and in this function */ \
  || ( bit((var)->flags,RWL_IDENT_PRIVATE) && 0==rwlstrcmp((var)->loc.fname, fil) ) /* private and in this file */ ))

extern int rwlydebug;
/* Handle interrupt */
void rwlctrlc();
volatile sig_atomic_t rwlstopnow; 
#define RWL_STOP_MARK 1  // mark that we should stop asap
#define RWL_STOP_BREAK 2 // and also tell we have sent OCIBreak 
volatile sig_atomic_t rwlctrlcount; 
volatile sig_atomic_t rwlcont1013; // If true, continue after ORA-01013
volatile rwl_main *rwm_glob;
#define RWL_MAX_CTRLC 10 // send SIGQUIT to myself after this many ctrl-c
void rwlechoon(int);
void rwlechooff(int); 

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
	= { __LINE__, __LINE__, (text *) __FILE__ };
#define RWL_SRC_ERROR_LOC \
	( rwl_src_error_loc.lineno \
	= rwl_src_error_loc.errlin \
	= __LINE__ \
	, &rwl_src_error_loc)
#define RWL_SRC_ERROR_END }


/* misc other defines */
#define RWL_PFLAG_FORMAT RWL_SB8PRINTF ":%.3f\n" /* printf runnumber and time */
#define RWL_MFLAG_FORMAT RWL_SB8PRINTF ":%lf"    /* opposite sscanf */

#define RWL_VERSION_MAJOR 2
#define RWL_VERSION_MINOR 3
#define RWL_VERSION_RELEASE 6
#define RWL_VERSION_TEXT "Development" RWL_EXTRA_VERSION_TEXT
#define RWL_VERSION_DATE // undef to not include compile date 
extern ub4 rwlpatch;


#define rwlcomp(s,x) const char s[] = "rwlwatermark: " rwlxstr(x) " " __FILE__ ;
#define rwlxstr(x) #x

