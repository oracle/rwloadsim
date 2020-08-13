#!/bin/sh

# set number of processes in multi process run
proccount=5

# Give them a rampup time that depends on process count
rampup=`expr 5 + 2 '*' $proccount`

rwloadsim -c $rampup -P Moption.txt rwloadsim.rwl

doawr=1 

bequiet=''

p=1;

while test $p -le $proccount
do
  rwloadsim $bequiet -R Moption.txt -i doawr:=$doawr -d totaltime:=300 -sss awr.rwl rwloadsim.rwl demouser.rwl insertdemo.rwl querydemo.rwl runsimulation.rwl &
  doawr=0 # Make sure only one gathers awr
  bequiet='-q' # And only make the first one show connect messages
  p=`expr $p + 1`
done

wait
