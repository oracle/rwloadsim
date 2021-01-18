#!/bin/bash
#
# RWP*Load Simulator test suite
#
# Copyright (c) 2021 Oracle Corporation
# Licensed under the Universal Permissive License v 1.0
# as shown at https://oss.oracle.com/licenses/upl/
#
# History
#
# bengsig  05-jan-2021  Add RWLTESTUSER environment check
# bengsig  02-dec-2020  Directory structure change
# bengsig  09-sep-2020  Verify prepare.sh has been executed
# bengsig  07-sep-2020  Solaris port, some streamlining
# bengsig         2017  Creation
#
if test x$1 = x-q
then
  shift 
  echo=no
  quiet='-q'
else
  echo=yes
  quiet=''
fi

if test -z "$RWLTESTUSER"
then
  echo You must set RWLTESTUSER environment 1>&2
  exit 1
fi

if ! test -f ../demo/182-3.rwl
then
  echo "You need to run 'sh prepare.sh' before you can perform tests" 1>&2
  exit 1
fi

rwloadsim=rwloadsim

diffarg='-c'

# extraarg='-D 0x80' # normally empty

if test $# -gt 0
then
  testlist="$*"
else
  testlist='1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99 100 101 102 103 104 105 106 107 108 109 110 111 112 113 114 115 116 117 118 119 120 121 122 123 124 125 126 127 128 129 130 131 132 133 134 135 136 137 138 139 140 141 142 143 144 145 146 147 148 149 150 151 152 153 154 155 156 157 158 159 160 161 162 163 164 165 166 167 168 169 170 171 172 173 174 175 176 177 178 179 180 181 182 183 184 185 186 187 188 189 190 191 192 193 194 195 196 197 198 199 200 201 202 203 204 205'
fi

diffokcount=0;
ociokcount=0;
ocilist=''
okcount=0;
errokcount=0;
badcount=0;
badlist=''
redolist=''
diffoklist=''

for i in $testlist
do
  unset RWLOADSIMRC
  pre=''
  post=''
  case $i in
    197|158)
      pre='-sss'
    ;;
    149)
      pre='-r'
    ;;
    142)
      pre='-k bla142'
    ;;
    144)
      VALUE1=0 VALUE2=0
    ;;
    145)
      VALUE1=1 VALUE2=0
    ;;
    146)
      VALUE1=0 VALUE2=1
    ;;
    147)
      VALUE1=1 VALUE2=1
    ;;
    140)
      export A140=140 BB=bb
    ;;
    77)
      export RWLOADSIMRC=77-rc.rwl
    ;;
    57)
      pre='-D 0x100'
    ;;
    48|52|79|31|37|60|61)
      pre='-c 0.1'
    ;;
    13|14|15|17|18|19|28|29|36)
      pre='rwlrand.rwl'
    ;;
    8)
      pre='--integer max:=1234'
    ;;
    38|65)
      pre='-c 0.1 testuserinfo.rwl testpool.rwl'
    ;;
    49)
      pre='-c 0.1 testuserinfo.rwl testthrded.rwl'
    ;;
    42)
      pre='-c 0.1 testuserinfo.rwl testdefault.rwl testdrcp.rwl'
    ;;
    20|21|22|69|41|68|72|74|76|81|88)
      pre='-c 0.1 testuserinfo.rwl testdefault.rwl'
    ;;
    90)
      pre='--histograms --persec --comment TestRun --clockstart 0.1'
    ;;
    62|83)
      pre='-sss -K TestRun -c 0.1 testuserinfo.rwl testpool.rwl testresults.rwl'
    ;;
    82|84|86)
      pre='-sss -K TestRun -c 0.1 testuserinfo.rwl testdefault.rwl testresults.rwl'
    ;;
    80|43)
      pre='-sss -K TestRun -c 3.0 testuserinfo.rwl testpool.rwl testresults.rwl'
    ;;
    40|87)
      pre='-c 0.1 testuserinfo.rwl testdefault.rwl testpool.rwl'
    ;;
    24|25|26|34|35|39|66)
      pre='-c 0.1 testuserinfo.rwl testdefault.rwl testpool.rwl'
    ;;
    44)
      pre='-c 0.1 testuserinfo.rwl testdefault.rwl testpool.rwl testsystem.rwl'
    ;;
    70)
      pre='--double pi:=3.14159'
      post='70-2.rwl  70-3.rwl  70-4.rwl  70-5.rwl 70-6.rwl'
    ;;
    71)
      pre='testuserinfo.rwl testdefault.rwl' 
      post='71-2.rwl'
    ;;
    105)
      pre='-A 2'
      post='fortytwo 37'
    ;;
    107)
      pre='--argument-count=5'
      post='42 fortytwo 37.5 22.22 6'
    ;;
    110)
      pre='--file-count=2 4.rwl --'
      post='one two 3 4 5.0 66.66 syv -888'
    ;;
    114)
      pre='--file-count=1'
      post='2 a'
    ;;
    126)
      pre='--flush-every=2 --flush-stop=9'
    ;;
    180)
      pre='--len4 12345 --abc 42'
    ;;
  esac

  diffok=no
  ociok=no
  errok=no
  thisisgood=yes
  case $i in
    28|29|35|39|40|43|126|136|151|152|156|197) diffok=yes;;
  esac
  case $i in
    21|41|68|88) ociok=yes;;
  esac
  case $i in
    151|156|184|177|158|197) errok=yes;;
  esac

  case $i in
    173 | 175) 
      test $echo = yes && echo '>>>>>>>>' $i: $rwloadsim $extraarg $pre $i.rwl "< $i.iii"
      $rwloadsim -q $extraarg $pre $i.rwl < $i.iii > testres/$i.out 2> testres/$i.err
      ;;
    179)
      rm -f testres/$i.out testres/$i.err
      for arg in '' '--abc 42' '--no-yesorno' '--abc "-42"' '--nooryes' '--hello Howdy_verden --abc 424242' '--hello Howdy_verden --nooryes --abc 42424'
      do
	test $echo = yes && echo '>>>>>>>>' $i: $rwloadsim $arg $i.rwl
	$rwloadsim -q $arg $i.rwl >> testres/$i.out 2>> testres/$i.err
      done
      ;;
    182)
      # Make the proper stderr not depend on directory
      # Point at top rwloadsim directory
      topdir=`pwd | sed s'%/test$%%'`
      # and use below to edit stderr using sed
      rm -f testres/$i.out testres/$i.err
      for arg in '--case182=1' '-u --case182=2'
      do
	test $echo = yes && echo '>>>>>>>>' $i: $rwloadsim $arg $i.rwl
	$rwloadsim -q $arg $i.rwl 2>&1 >> testres/$i.out | sed 's%'$topdir'%CWD%' >> testres/$i.err
      done
      for arg in '--case182=3' '-u --case182=4'
      do
	test $echo = yes && echo '>>>>>>>>' $i: env RWLOADSIM_PATH=./demo $rwloadsim $arg $i.rwl
	env RWLOADSIM_PATH=./demo $rwloadsim -q $arg $i.rwl 2>&1 >> testres/$i.out | sed 's%'$topdir'%CWD%' >> testres/$i.err
      done
      for arg in '--case182=5' '-u --case182=6'
      do
	test $echo = yes && echo '>>>>>>>>' $i: env RWLOADSIM_PATH=demo:public $rwloadsim $arg $i.rwl
	env RWLOADSIM_PATH=demo:public $rwloadsim -q $arg $i.rwl 2>&1 >> testres/$i.out | sed 's%'$topdir'%CWD%' >> testres/$i.err
      done
      ;;
    144|145|146|147)
      test $echo = yes && echo '>>>>>>>>' $i: env VALUE1=$VALUE1 VALUE2=$VALUE2 $rwloadsim $extraarg $pre $i.rwl $post
      env VALUE1=$VALUE1 VALUE2=$VALUE2 $rwloadsim -q $extraarg $pre $i.rwl $post > testres/$i.out 2> testres/$i.err
      ;;
    *)
      test $echo = yes && echo '>>>>>>>>' $i: $rwloadsim $extraarg $pre $i.rwl $post
      $rwloadsim -q $extraarg $pre $i.rwl $post > testres/$i.out 2> testres/$i.err
      ;;
  esac
  if diff $diffarg testres/$i.out.good testres/$i.out
  then
     okcount=`expr $okcount + 1`
  else
    if test $diffok = yes
    then
      echo small differences in test $i.out are acceptable
      diffokcount=`expr $diffokcount + 1`
      diffoklist="$i
      $diffoklist"
    else
      badcount=`expr $badcount + 1`
      badlist="$i.out $badlist"
      thisisgood=no
    fi
  fi
  if diff $diffarg testres/$i.err.good testres/$i.err 
  then
      errokcount=`expr $errokcount + 1`
  else
    if test $ociok = yes
    then
      echo differences in test $i.out may be due to OCI issue
      ociokcount=`expr $ociokcount + 1`
      ocilist="$i
      $ocilist"
    else
      if test $errok = yes
      then
        echo difference in $i.err are possibly acceptable
	ociokcount=`expr $ociokcount + 1`
	ocilist="$i
	$ocilist"
      else
	badcount=`expr $badcount + 1`
	badlist="$i.err $badlist"
	thisisgood=no
      fi
    fi
  fi
  if test -f testres/$i.txt.good 
  then
    if diff $diffarg testres/$i.txt.good testres/$i.txt
    then
      :
    else
	badcount=`expr $badcount + 1`
	badlist="$i.txt $badlist"
	thisisgood=no
    fi
  fi

  # run some again in a special way with longer execution
  case $i in
    13|18|19)
      test $echo = yes && echo '>>>>>>>>' $i long: $rwloadsim $extraarg -q -i 'max:=100000' -D 0x0 rwlrand.rwl ${i}.rwl
      $rwloadsim $extraarg -q -i 'max:=100000' -D 0x0 rwlrand.rwl ${i}.rwl 2> testres/${i}x.err | 
	awk -f ${i}.awk > testres/${i}y.out 2> testres/${i}y.err 
	for x in ${i}x.err ${i}y.err ${i}y.out
	do
	  if diff $diffarg testres/$x.good testres/$x
	  then
	    okcount=`expr $okcount + 1`
	  else
	    badcount=`expr $badcount + 1`
	    badlist="$x $badlist"
	    thisisgood=no
	  fi
	done
    ;;
  esac
  if test $thisisgood = no
  then
    redolist="$i
    $redolist"
  fi
done

echo "good count: $okcount"
echo "good stderr count: $errokcount"
echo "bad count: $badcount"
echo "probably good stdout count: $diffokcount"
echo "probably good stderr count: $ociokcount"
if test $badcount -gt 0
then
  echo badlist: $badlist
  echo You are required to rerun:
  echo sh test.sh $quiet $redolist
fi
if test '(' $ociokcount -gt 0 ')' -o '(' $diffokcount -gt 0 ')'
then
  echo You are recommended to rerun:
  echo sh test.sh $quiet `echo "$ocilist $diffoklist" | sort -n -u`
fi

if test '(' $ociokcount -gt 0 ')' -o '(' $diffokcount -gt 0 ')' -o '(' $badcount -gt 0 ')'
then
  echo To rerun all these, do:
  echo sh test.sh $quiet `echo "$redolist $ocilist $diffoklist" | sort -n -u`
fi

