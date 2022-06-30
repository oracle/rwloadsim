#!/bin/sh

# RWP*Load Simulator
#
# Copyright (c) 2021 Oracle Corporation
# Licensed under the Universal Permissive License v 1.0
# as shown at https://oss.oracle.com/licenses/upl/

# History
#
# bengsig  28-jun-2022 - Creation

# This script is called with exactly four parameters
# 1: full path to rwloadsim/lib
# 2: path (typically relative) to the generated executable
# 3: full path of the C source coe to compile
# 4: major compile version, such as 21, 19, 18

# It will generate an executable with a specific 
# rwl script

libdir=$1
binary=$2
cfile=$3
major=$4
loption=''

if test ! -z "$ORACLE_HOME"
then
  # We have ORACLE_HOME, check is it reasonable
  if test -r $ORACLE_HOME/lib/libclntsh.so
  then
    loption="-L$ORACLE_HOME/lib"
  fi
fi

if test -z "$loption"
then
  # So no ORACLE_HOME, try via LD_LIBRARY_PATH
  for dir in `echo $LD_LIBRARY_PATH | sed 's/:/ /g'`
  do
    if test -r $dir/libclntsh.so
    then
      loption="-L$dir"
      break;
    fi
  done
fi

if test -z "$loption" 
then
  # oops
  echo 'RWL-288: error: Neither ORACLE_HOME nor LD_LIBRARY_PATH contains libclntsh.so' 1>&2
  exit 1
fi

# Uncomment the following line if you want debug
# echo gcc -g -o $binary $libdir/rwlgenmain$major.o $cfile $loption -lclntsh -lm -lrt
# Compile the C source and link the executable
gcc -g -o $binary $libdir/rwlgenmain$major.o $cfile $loption -lclntsh -lm -lrt

# return exit code from gcc command
exit $?
