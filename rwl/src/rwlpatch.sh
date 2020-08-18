#!/bin/bash

patch=`cat rwlpatch.txt`

newpatch=`expr $patch + 1`

echo $newpatch > rwlpatch.txt
echo '#include "rwl.h"' > rwlpatch.c
echo "ub4 rwlpatch = $newpatch ; " >> rwlpatch.c
echo 'const char rwlcompiledate[] = "rwlcompileinformation: '`date`'";' >> rwlpatch.c
echo 'const char rwlsourcedates[] = ' >> rwlpatch.c

ls -ogtr `make -s sources` 2>/dev/null | while read x
do
  echo '"rwlcompileinformation: '"$x"'\n"'
done >> rwlpatch.c
echo ';' >> rwlpatch.c
echo 'const char rwluname[] = "rwlcompileinformation: '`uname -a`'";' >> rwlpatch.c
  
