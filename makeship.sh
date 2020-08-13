# make the shipfile

name=`rwloadsim -x '$mute:99' --version | sed -r -n 's/.*Release ([0-9]+\.[0-9]+\.[0-9]+).*/\1/ p'`
longname=`rwloadsim -x '$mute:99' --version | sed -r -n 's/.*Release ([0-9]+\.[0-9]+\.[0-9]+\.[0-9]+).*/\1/ p'`


banner=`rwloadsim -x '$mute:99' --version | sed -r -n 's/.*Release [\.0-9]+ ([A-Za-z ]+) using.*/\1/ p'`

if test $banner = Development 
then
  tgzfile=rwloadsim-$longname.tgz
else
  tgzfile=rwloadsim-$name.tgz
fi

rm -f $tgzfile
cwd=`pwd`
(cd; tar -cf $cwd/rwl/admin/vim.tar .vim/ftdetect/rws.vim .vim/ftdetect/rwl.vim .vim/syntax/rwl.vim)
tar -zcf $tgzfile --exclude-from=tar.exclude bin rwl/admin rwl/demo rwl/public rwl/doc

echo Created $tgzfile containing a $banner release
