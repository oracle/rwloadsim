/* 
 * RWP*Load Simulator
 *
 * Copyright (c) 2020 Oracle Corporation
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
 * bengsig  04-sep-2020  Solaris porting
 * bengsig  07-aug-2019  Creation
 */

/* set this to a printf format that can be used for an sb8/int64_t */
#define RWL_SB8PRINTF "%ld"

/* set this to a function that converts a string to an sb8/int64_t */
#define rwlatosb8(s) atol((char *)s)

#define RWL_LINUX 1
#define RWL_SOLARIS 2

#ifdef __linux
# define RWL_OS RWL_LINUX
# define RWL_PATH_MAX PATH_MAX // max total path name normally 4096
# define RWL_NAME_MAX NAME_MAX // max individual file name normally 255
# define RWL_HOSTNAMEMAX HOST_NAME_MAX // max hostname from gethostname
# define RWL_WEXITSTATUS(x) WEXITSTATUS(x)
#endif 

#ifdef __sun
# define RWL_OS RWL_SOLARIS
// We need a few extra includes on Solaris 
# include <netdb.h>
# include <sys/wait.h>
# define RWL_PATH_MAX PATH_MAX // max total path name normally 4096
# define RWL_NAME_MAX PATH_MAX // NAME_MAX is not there on Solaris
# define RWL_HOSTNAMEMAX MAXHOSTNAMELEN // max hostname from gethostname
# define RWL_WEXITSTATUS(x) WEXITSTATUS(x) // 
#endif

#ifndef RWL_OS
# error "You need to provide rwlport.h for your platform"
#endif

