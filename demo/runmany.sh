#!/bin/sh

# set number of processes in multi process run
proccount=5

# Give them a rampup time that depends on process count
rampup=`expr 5 + 2 '*' $proccount`

rwloadsim -c $rampup -P Moption.txt rwloadsim.rwl

# Only have one process create awr
extraoptions='--doawr'

p=1;

while test $p -le $proccount
do
  rwloadsim $extraoptions -R Moption.txt --totaltime=300 runsimulation.rwl &
  extraoptions='-q --no-doawr' # Now quiet and no awr
  p=`expr $p + 1`
done

wait
