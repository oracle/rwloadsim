/* 
 * RWP*Load Simulator
 *
 * Copyright (c) 2024 Oracle Corporation
 * Licensed under the Universal Permissive License v 1.0
 * as shown at https://oss.oracle.com/licenses/upl/
 *
 * bengsig   5-mar-2024   Created
 *
 * rwlport.c is only used in certain cases
 *
 * Note that it ONLY includes rwlport.h and not rwl.h
 */

#include "rwlport.h"

#if RWL_OS == RWL_LINUX
/*
  On Linux, we need to have the RUSAGE_THREAD define, which is only
  included if _GNU_SOURCES is set. However, we do not want to set
  that in general, so we use rwlport.c to handle it just for the
  call to getrusage. Also, this is only needed as long as 
  OCI_ATTR_CALL_TIME cannot itself figure out if a roundtrip was made.
  See discussion in rwl.h
*/
# define _GNU_SOURCE
# include <sys/time.h>
# include <sys/resource.h>

int rwlgetthreadusage(struct rusage *ru)
{
  return getrusage(RUSAGE_THREAD, ru);
}
#endif  

int rwl_not_being_used = 42;
