#!/bin/bash
#
# Copyright (c) 2023 Oracle Corporation
# Licensed under the Universal Permissive License v 1.0
# as shown at https://oss.oracle.com/licenses/upl/
#
# Create a new rwlwatermark.c file
#
# History
# 
# bengsig  09-feb-2021  Creation

# Move compile and source file dates from rwlpatch to here
#
# If we are compiling in a git enviroment, embed some
# information that we later can find using strings

rm -f rwlwatermark.c
printf 'const char rwlwatermark[] = "\\n" \n' > rwlwatermark.c

rightnow=`date`
uname=`uname -a`

printf '"rwlwatermark: %s\\n"\n' "$rightnow" >> rwlwatermark.c

( ls -ogtr `make -s sources` 2>/dev/null 
  gcc --version
  bison --version
  flex --version ) | while read x
do
  printf '"rwlwatermark: %s\\n"\n' "$x"
done >> rwlwatermark.c
printf '"rwlwatermark: %s\\n"\n' "$uname" >> rwlwatermark.c

if test -d ../.git && type -t git > /dev/null
then
  # git directory is there and git command is found

  (cd ..; git status; git log -1 --format='%H') 2>/dev/null | sed 's/[\\"]/ /g' | while read x
  do
    printf '"rwlwatermark: %s\\n"\n' "$x"
  done >> rwlwatermark.c
else
  printf '"rwlwatermark: No git information available"\n' >> rwlwatermark.c
fi
printf ';\n' >> rwlwatermark.c
    
