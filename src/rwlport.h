/* 
 * RWP*Load Simulator
 *
 * Copyright (c) 2023 Oracle Corporation
 * Licensed under the Universal Permissive License v 1.0
 * as shown at https://oss.oracle.com/licenses/upl/
 *
 * These are the typical values
 * on an 64-bit plaform where
 * int is 4 bytes, 
 * long is 8 bytes
 *
 * History
 *
 * bengsig  31-jan-2024 - Provide own rand48 implementation
 * bengsig  30-jan-2024 - All includes in rwl.h
 * bengsig  04-mar-2022 - printf project
 * bengsig  22-nov-2021 - OS X beta port
 * bengsig  22-dec-2020 - Use uname on Linux and Solaris in stead of gethostname
 * bengsig  04-sep-2020 - Solaris porting
 * bengsig  07-aug-2019 - Creation
 */

/* set this to a printf format that can be used for an sb8/int64_t */
#define RWL_SB8PRINTF "%ld"
/* set to 'l' if printf requires this before d,x,y,i for sb8 output */
#define RWL_SB8PRINTFLENGTH 'l'

/* set this to a function that converts a string to an sb8/int64_t */
#define rwlatosb8(s) atol((char *)s)

#define RWL_LINUX 1
#define RWL_SOLARIS 2
#define RWL_MACH 3

#undef RWL_OS
#undef RWL_SYSTEM_THREADSAFE
#undef RWL_CLOCK_GETTIME
#undef RWL_PORT_BETA
#undef RWL_OWN_RAND48

/* Each port must have these defines; see linux below as example
# define RWL_OS // a value from the above list
# define RWL_PATH_MAX // max total path name normally 4096
# define RWL_NAME_MAX // max individual file name normally 255
# define RWL_WEXITSTATUS(x) // get exit status of child process after wait
# define RWL_ARCH_NAME // Text string to be included in the output of --version
# define RWL_SYSTEM_THREADSAFE // Define if system() is threadsafe
# define RWL_CLOCK_NANOSLEEP // Define if clock_nanosleep including TIMER_ABSTIME is available
# define RWL_PORT_BETA // Define until full and thorough testing has been completed
*/

#if defined(__linux) && defined(__x86_64)
# define RWL_OS RWL_LINUX
# define RWL_PATH_MAX PATH_MAX // max total path name normally 4096
# define RWL_NAME_MAX NAME_MAX // max individual file name normally 255
# define RWL_WEXITSTATUS(x) WEXITSTATUS(x)
# define RWL_ARCH_NAME "Linux x86_64"
# define RWL_SYSTEM_THREADSAFE // system() is threadsafe
# define RWL_CLOCK_NANOSLEEP 
# define RWL_OWN_RAND48
#endif 

#if defined(__linux) && defined(__aarch64__)
# define RWL_OS RWL_LINUX
# define RWL_PATH_MAX PATH_MAX // max total path name normally 4096
# define RWL_NAME_MAX NAME_MAX // max individual file name normally 255
# define RWL_WEXITSTATUS(x) WEXITSTATUS(x)
# define RWL_ARCH_NAME "Linux aarch64"
# define RWL_SYSTEM_THREADSAFE // system() is threadsafe
# define RWL_CLOCK_NANOSLEEP
# define RWL_OWN_RAND48
#endif 

#if defined(__sun) && defined(__sparc)
# define RWL_OS RWL_SOLARIS
// We need a few extra includes on Solaris 
# include <netdb.h>
# include <sys/wait.h>
# define RWL_PATH_MAX PATH_MAX // max total path name normally 4096
# define RWL_NAME_MAX PATH_MAX // NAME_MAX is not there on Solaris
# define RWL_WEXITSTATUS(x) WEXITSTATUS(x) // 
# define RWL_ARCH_NAME "Solaris Sparc"
# define RWL_CLOCK_NANOSLEEP
#endif

#if defined(__MACH__) && defined(__x86_64)
# define RWL_OS RWL_MACH
# define RWL_PATH_MAX PATH_MAX // max total path name normally 4096
# define RWL_NAME_MAX NAME_MAX // max individual file name normally 255
# define RWL_WEXITSTATUS(x) WEXITSTATUS(x)
# define RWL_ARCH_NAME "OS X x86_64"
# define RWL_PORT_BETA // Surely not thoroughly tested on OS X
#endif

#ifndef RWL_OS
# error "You need to provide rwlport.h for your platform"
#endif

