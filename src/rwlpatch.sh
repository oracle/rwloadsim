#!/bin/bash
#
# Copyright (c) 2021 Oracle Corporation
# Licensed under the Universal Permissive License v 1.0
# as shown at https://oss.oracle.com/licenses/upl/
#
# Create a new rwlpatch.c file
#
# History
# 
# bengsig  16-dec-2020  Make first patch zero
# bengsig  14-dec-2020  Allow non existing rwlpatch.txt
# bengsig  04-sep-2020  Solaris port, use printf in stead of echo
# bengsig  11-jun-2017  Create

if test -f rwlpatch.txt
then
  patch=`cat rwlpatch.txt`
  newpatch=`expr $patch + 1`
else
  newpatch=0
fi

rightnow=`date`
uname=`uname -a`

printf '%s\n' "$newpatch" > rwlpatch.txt
printf '#include "rwl.h"\n' > rwlpatch.c
printf 'ub4 rwlpatch = %s;\n' "$newpatch" >> rwlpatch.c
printf 'const char rwlcompiledate[] = "rwlcompileinformation: %s";\n' "$rightnow" >> rwlpatch.c
printf 'const char rwlsourcedates[] = \n' >> rwlpatch.c

ls -ogtr `make -s sources` 2>/dev/null | while read x
do
  printf '"rwlcompileinformation: %s\\n"\n' "$x"
done >> rwlpatch.c
printf ';\n' >> rwlpatch.c
printf 'const char rwluname[] = "rwlcompileinformation: %s";\n' "$uname" >> rwlpatch.c
  
