/*
 * RWP*Load Simulator
 *
 * Copyright (c) 2021 Oracle Corporation
 * Licensed under the Universal Permissive License v 1.0
 * as shown at https://oss.oracle.com/licenses/upl/
 *
 * Real World performance Load simulator main for rwlerror
 *
 * rwlmainerror.c
 *
 * History
 *
 * bengsig  15-feb-2021 - Creation
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#include "rwl.h"

// This struct is only used here
// where we have description from RWLEDESC macro
struct rwl_error_desc 
{
  rwl_error rwlerror;
  char *description;
};

/* compile time service for error description array
 *
 * When compiling this, we need to allow missing
 * entries in initializers (causing gcc to emit warning.)
 * Avoid this by adding RWLEDESC(0) to entries in rwlerror.h
 * that do not have a real entry.
 */

#undef RWLERROR
#undef RWLEDESC
// Note that rwlerror is a struct inside the rwl_error_desc struct
// so we need an extra set of curleys around txt, cat
// Also note that this macro finishes the previous entry
// and leaves the new one unfinished
#define RWLERROR(txt,cat) } , { { txt, cat }
// This is all needed such that a missing RWLEDESC macro invocation
// implies the missing initializer that the compiler will warn about
#define RWLEDESC(desc) , desc

static struct rwl_error_desc rwlerrordescs[] =
{
// Note the 0 entry starts with its own curly that
// does not finish
  { { "No error", 0 } 
#include "rwlerror.h"
// and the closing curly of the last entry comes here
  } 
} ;
#define RWL_ERROR_COUNT (sizeof(rwlerrordescs)/sizeof(struct rwl_error_desc))

// Redefine the normal ones
#undef RWLERROR
#undef RWLEDESC

#define RWLERROR(txt,cat) 
#define RWLEDESC(desc)

sb4 main(sb4 ac, char **av) 
{
  sb4 err, i, retcode = 0;
  char *sev, *txt, *p;

  // This is just a simple emplementation of a loop
  for (i = 1;  i<ac; i++)
  {
    
    // See if input matches rwl-NNN
    if (strlen(av[i]) >4 && '-' == av[i][3])
    {
      char lower[4]; 
      sb4 l;
      for (l=0; l<3; l++)
        lower[l] = tolower(av[i][l]);
      if (0==strncmp(lower,"rwl", 3))
	err = (sb4)atoi(av[i]+4);
      else
        err = 0; 
    }
    else
      err = (sb4)atoi(av[i]);

    if (600 == err)
    {
      // RWL-600 is special
      fputs("RWL-600 internal error: '%s'\n"
      "An abnormal situation caused an internal error in rwloadsim.\n"
      "This is in most cases due to a programming error and it\n"
      "should be reported with as much evidence as possible.\n\n", stdout);
    }
    else if (601 == err)
    {
      // RWL-601 also
      fputs("RWL-601 debug: '%s'\n"
      "This output is produced when running with any debug bits set using the\n"
      "-D option. The actual debug output is dependent on the source code,\n"
      "which you need to read to get all details.\n\n", stdout);
    }
    else if (err>0 && err<(sb4)RWL_ERROR_COUNT)
    {
      // A valid error number
      if (bit(rwlerrordescs[err].rwlerror.cat,RWL_ERROR_WARNING))
	sev="warning";
      else if (bit(rwlerrordescs[err].rwlerror.cat,RWL_ERROR_INFORMATION))
	sev="information";
      else if (bit(rwlerrordescs[err].rwlerror.cat,RWL_ERROR_SEVERE))
	sev="critical error";
      else
	sev="error";

      // Before printing the text from RWLERROR we make it nicer
      // by replacing \n by space, and take out RWL-nnn: if there
      if (bit(rwlerrordescs[err].rwlerror.cat,RWL_ERROR_RWLDASH))
        txt = strdup(rwlerrordescs[err].rwlerror.txt + sizeof("RWL-nnn:"));
      else
        txt = strdup(rwlerrordescs[err].rwlerror.txt);
      for (p=txt; *p; p++)
      {
        if ('\n' == *p)
	  *p=' ';
      }
      // Kill a terminating space (that was a \n)
      if (' ' == p[-1] && p>txt)
        p[-1] = 0;

      fprintf(stdout, "RWL-%03d %s: \"%s\"\n", err, sev, txt);
      // Print description if it exists; a real string in RWLEDESC()
      if (rwlerrordescs[err].description)
        fprintf(stdout, "%s.\n", rwlerrordescs[err].description);
      if (bit(rwlerrordescs[err].rwlerror.cat,RWL_ERROR_YY))
        fputs("You can run rwloadsim with -D0x8 option for details from the bison parser.\n", stdout);
      if (!rwlerrordescs[err].description && !bit(rwlerrordescs[err].rwlerror.cat,RWL_ERROR_YY))
        fputs("No further information available.\n", stdout);
      fputs("\n", stdout);
      free(txt);
    }
    else
    {
      fprintf(stderr, "rwlerror: argument %d (%s) is not a valid RWL- error number\n\n", i, av[i]);
      retcode = 1;
    }
  }
  return retcode;
}

      

