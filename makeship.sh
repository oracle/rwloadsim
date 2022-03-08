# make the shipfile

# Copyright (c) 2022 Oracle Corportaion
# Licensed under the Universal Permissive License v 1.0
# as shown at https://oss.oracle.com/licenses/upl/
#
# Changes
#
# bengsig   8-mar-2022 Updated banner 
# bengsig  14-jun-2021 workloads directory has gone
# bengsig  15-jan-2021 Include tags and cscope.out in binonly
# bengsig  11-jan-2021 Replace README.md and CHANGELOG.md with BINONLY.txt in binonly
# bengsig  07-jan-2021 Add binonly tgz file
# bengsig  23-dec-2020 Include H/W in tar name
# bengsig  02-dec-2020 Fix vim file; rename tgz
# bengsig  19-oct-2020 Add man pages
# bengsig  09-sep-2020 Creation

name=`rwloadsim -x '$mute:99' --version | sed -r -n 's/.*Release ([0-9]+\.[0-9]+\.[0-9]+).*/\1/ p'`
longname=`rwloadsim -x '$mute:99' --version | sed -r -n 's/.*Release ([0-9]+\.[0-9]+\.[0-9]+\.[0-9]+).*/\1/ p'`


banner=`rwloadsim -x '$mute:99' --version | sed -r -n 's/.*Release [\.0-9]+ ([A-Za-z ]+) for.*/\1/ p'`

os=`uname -s | tr 'A-Z/ ' 'a-z._'`'-'`uname -p | tr '/ ' '._'`

if test "$banner" = Development 
then
  tgzfile=rwloadsim-$os-bin-$longname.tgz
  tgzbinonly=rwloadsim-$os-binonly-$longname.tgz
else
  tgzfile=rwloadsim-$os-bin-$name.tgz
  tgzbinonly=rwloadsim-$os-binonly-$name.tgz
fi

rm -f $tgzfile $tgzbinonly
# Create a new vim.tar
(cd admin; rm -f vim.tar; tar -cf vim.tar .vim/ftdetect/rws.vim .vim/ftdetect/rwl.vim .vim/syntax/rwl.vim)
# Make sure tags and cscope.out are newest
(cd src; make ctags)

# And create the two files
tar -zcf $tgzfile --exclude-from=tar.exclude ./DISTRIBUTION.txt ./LICENSE.txt ./SECURITY.md ./CONTRIBUTING.md ./README.md ./CHANGELOG.md bin man admin demo public docs oltp
tar -zcf $tgzbinonly ./DISTRIBUTION.txt ./LICENSE.txt ./SECURITY.md ./CONTRIBUTING.md ./BINONLY.txt bin/rwloadsim?? admin/vim.tar src/tags src/cscope.out

echo Created $tgzfile and $tgzbinonly containing a $banner release
