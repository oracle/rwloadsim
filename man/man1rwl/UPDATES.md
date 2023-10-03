## Updating rwlman pages

The rwlman pages must be synchronized to docs/refman for online viewing at github, more specifically
at [https://oracle.github.io/rwloadsim/refman/](https://oracle.github.io/rwloadsim/refman/).

This is done by creating the html versions of the rwlman pages via docs/refman/Makefile.refman
that uses groff with its html terminal to create the html version.
The file is not very pretty, but it does allow online reading of the rwlman pages
that are the reference manual.

If you modify an existing rwlman page, subsequently cd to docs/refman and
run ```make -f Makefile.refman```, which
will update the html version of that rwlman page.

If you add a new rwlman page, you need to add the name to the appropropriate ALL macro in
Makefile.refman and as a dependency below, and then run the make command.

This also applies if the new file, say yyy.1rwl, is just a '.so xxx.1rwl', you still need
to add it to the ALL macro and as a dependency.
The result will actually be multiple files with the same contents, but github no longer 
supports symbolic links for "github pages", which is what we used before.

In either case, you need to use git add for both the new or updated .1rwl file in this
directory and the new or updated .html file in the docs/refman directory.
