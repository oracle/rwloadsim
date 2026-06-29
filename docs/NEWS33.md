## News and updates for version 3.3.0 of the RWP\*Load Simulator

The most important changes in version 3.3.0 are:

### Threaded execution is now a statement

In previous versions, the ```run ... threads ...``` syntax used to start and control multiple threads
was an rwl program element that was only available at the top level, i.e. directly from main.
The syntax is now available as a statement, and can therefore be used inside procedures and other
compound statements.

### Full support for raw expressions

Variables of type raw can now be used in expressions of type raw, and they can be converted
to/from strings in several ways.

### Most compile and runtime limites have been removed

Most limits to things like depth of compilation or runtime stack, number of variables
and size of the generated code have been removed, and are now only limited by 
available memory.
The only limits left are maximum 30 nested $if $then $endif, and a maxium depth
of 42 $include files.

## Navigation
* [index.md](index.md#rwpload-simulator-users-guide) Table of contents
* [install.md](install.md) Previous topic: Install and create repository
* [NEWS32.md](NEWS32.md) Next topic: News in version 3.2 
