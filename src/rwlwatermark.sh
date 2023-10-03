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
# bengsig  27-sep-2021  Write to directory
# bengsig  09-feb-2021  Creation

# Move compile and source file dates from rwlpatch to here
#
# If we are compiling in a git enviroment, embed some
# information that we later can find using strings

if test -d "$1" 
then
  fil=$1/rwlwatermark.c
  rm -f $fil
  printf 'const char rwlwatermark[] = "\\n" \n' > $fil

  rightnow=`date`
  uname=`uname -a`

  printf '"rwlwatermark: %s\\n"\n' "$rightnow" >> $fil

  ( ls -ogtr `make -s sources` 2>/dev/null 
    gcc --version
    bison --version
    flex --version ) | while read x
  do
    printf '"rwlwatermark: %s\\n"\n' "$x"
  done >> $fil
  printf '"rwlwatermark: %s\\n"\n' "$uname" >> $fil

  if test -d ../.git && type -t git > /dev/null
  then
    # git directory is there and git command is found

    (cd ..; git status; git log -1 --format='%H') 2>/dev/null | sed 's/[\\"]/ /g' | while read x
    do
      printf '"rwlwatermark: %s\\n"\n' "$x"
    done >> $fil
  else
    printf '"rwlwatermark: No git information available"\n' >> $fil
  fi
  printf ';\n' >> $fil
else
  echo Directory "'"$1"'" does not exist 1>&2
  exit 1
fi
      
