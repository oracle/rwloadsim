#!/bin/bash
#
# Copyright (c) 2020 Oracle Corporation
# Licensed under the Universal Permissive License v 1.0
# as shown at https://oss.oracle.com/licenses/upl/
#
# Create a new rwlpatch.c file
#
# History
# 
# bengsig  04-sep-2020  Solaris port, use printf in stead of echo
# bengsig  11-jun-2017  Create

patch=`cat rwlpatch.txt`

newpatch=`expr $patch + 1`
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
  
