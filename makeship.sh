# make the shipfile
#
# Changes
#
# bengsig  19-oct-2020 Add man pages
# bengsig  09-sep-2020 Creation

name=`rwloadsim -x '$mute:99' --version | sed -r -n 's/.*Release ([0-9]+\.[0-9]+\.[0-9]+).*/\1/ p'`
longname=`rwloadsim -x '$mute:99' --version | sed -r -n 's/.*Release ([0-9]+\.[0-9]+\.[0-9]+\.[0-9]+).*/\1/ p'`


banner=`rwloadsim -x '$mute:99' --version | sed -r -n 's/.*Release [\.0-9]+ ([A-Za-z ]+) using.*/\1/ p'`

if test "$banner" = Development 
then
  tgzfile=rwloadsim-$longname.tgz
else
  tgzfile=rwloadsim-$name.tgz
fi

rm -f $tgzfile
cwd=`pwd`
(cd; tar -cf $cwd/rwl/admin/vim.tar .vim/ftdetect/rws.vim .vim/ftdetect/rwl.vim .vim/syntax/rwl.vim)
tar -zcf $tgzfile --exclude-from=tar.exclude bin rwl/man rwl/admin rwl/demo rwl/public rwl/doc/*.md

echo Created $tgzfile containing a $banner release
