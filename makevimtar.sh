# 
# Create the vim.tar file for distribution

pwd=`pwd`
cd ./rwl/admin
rm -f vim.tar
tar -cvf vim.tar .vim/ftdetect/rwl.vim .vim/ftdetect/rws.vim .vim/syntax/rwl.vim

echo You can now install vim detection and syntax by doing
echo 'cd $HOME'
echo tar -xvf $pwd/rwl/admin/vim.tar
