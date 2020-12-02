# make the shipfile

# Copyright (c) 2020 Oracle Corportaion
# Licensed under the Universal Permissive License v 1.0
# as shown at https://oss.oracle.com/licenses/upl/
#
# Changes
#
# bengsig  02-dec-2020 Fix vim file; rename tgz
# bengsig  19-oct-2020 Add man pages
# bengsig  09-sep-2020 Creation

name=`rwloadsim -x '$mute:99' --version | sed -r -n 's/.*Release ([0-9]+\.[0-9]+\.[0-9]+).*/\1/ p'`
longname=`rwloadsim -x '$mute:99' --version | sed -r -n 's/.*Release ([0-9]+\.[0-9]+\.[0-9]+\.[0-9]+).*/\1/ p'`


banner=`rwloadsim -x '$mute:99' --version | sed -r -n 's/.*Release [\.0-9]+ ([A-Za-z ]+) using.*/\1/ p'`

if test "$banner" = Development 
then
  tgzfile=rwloadsim-bin-$longname.tgz
else
  tgzfile=rwloadsim-bin-$name.tgz
fi

rm -f $tgzfile
(cd admin; rm -f vim.tar; tar -cf vim.tar .vim/ftdetect/rws.vim .vim/ftdetect/rwl.vim .vim/syntax/rwl.vim)
tar -zcf $tgzfile --exclude-from=tar.exclude bin man admin demo public doc/*.md ./DISTRIBUTION.txt ./LICENSE.txt

echo Created $tgzfile containing a $banner release
