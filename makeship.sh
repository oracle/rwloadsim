# make the shipfile

# Copyright (c) 2020 Oracle Corportaion
# Licensed under the Universal Permissive License v 1.0
# as shown at https://oss.oracle.com/licenses/upl/
#
# Changes
#
# bengsig  23-dec-2020 Include H/W in tar name
# bengsig  02-dec-2020 Fix vim file; rename tgz
# bengsig  19-oct-2020 Add man pages
# bengsig  09-sep-2020 Creation

name=`rwloadsim -x '$mute:99' --version | sed -r -n 's/.*Release ([0-9]+\.[0-9]+\.[0-9]+).*/\1/ p'`
longname=`rwloadsim -x '$mute:99' --version | sed -r -n 's/.*Release ([0-9]+\.[0-9]+\.[0-9]+\.[0-9]+).*/\1/ p'`


banner=`rwloadsim -x '$mute:99' --version | sed -r -n 's/.*Release [\.0-9]+ ([A-Za-z ]+) using.*/\1/ p'`

os=`uname -s | tr 'A-Z/ ' 'a-z._'`'-'`uname -p | tr '/ ' '._'`

if test "$banner" = Development 
then
  tgzfile=rwloadsim-$os-bin-$longname.tgz
else
  tgzfile=rwloadsim-$os-bin-$name.tgz
fi

rm -f $tgzfile
(cd admin; rm -f vim.tar; tar -cf vim.tar .vim/ftdetect/rws.vim .vim/ftdetect/rwl.vim .vim/syntax/rwl.vim)
tar -zcf $tgzfile --exclude-from=tar.exclude ./DISTRIBUTION.txt ./LICENSE.txt ./SECURITY.md ./CONTRIBUTING.md ./README.md ./CHANGELOG.md bin man admin demo public doc workloads oltp

echo Created $tgzfile containing a $banner release
