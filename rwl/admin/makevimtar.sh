# 
# Create the vim.tar file for distribution

rm -f vim.tar
tar -cvf vim.tar .vim/ftdetect/rwl.vim .vim/ftdetect/rws.vim .vim/syntax/rwl.vim
