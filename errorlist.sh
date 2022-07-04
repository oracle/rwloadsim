#!/bin/bash

echo '## Complete list of RWL- errors'
echo

i=1;

echo Note that an error is expected 1>&2
while rwlerror --generate-md $i 
do
  i=`expr $i + 1`
done

rwlerror --generate-md 600
rwlerror --generate-md 601

exit 0
