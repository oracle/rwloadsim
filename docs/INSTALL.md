# Installation and creation of repository

There are two types of binary distributions available at github releases:

* Complete binaries are in files that have -bin- in the name.
* Little more than executables are in files that have -binonly- in the name.

Complete binaries distributed in a file such rwloadsim-linux-x86_64-bin-3.0.0.tgz
can be used as is, i.e. without getting a clone or pull from github.
It should be used if you simply want a full run time environment
and it contains the following directories:

|Directory|Contents|
|---------|--------|
|bin|Executables|
|man/man1rwl|The reference documentation in the form of manual pages|
|man/man2rwl|The reference documentation for samples and oltp workload|
|admin|Primarily scripts to create the repository database|
|demo|All demonstrations named in the guide you are reading now|
|public|A set of publicly available rwl scripts|
|doc|The users guide as md files; you should normally read these directly on git|
|oltp|Files implementing the "oltp" workload|

If you prefer to have access to source code, but avoid building the executables,
you can clone or pull from github (which would allow you to potentially compile
rwloadsim yourself), and then 
use a file like rwloadsim-linux-x86_64-binonly-3.0.0.tgz.
This file contains little more than the compiled binaries of the rwloadsim program,
and you can simply un-tar this file
directly into your cloned or pulled directory; the result will be as if you had
been compiling yourself.

## Prerequisites

 * An Oracle client environment such as Instant Client is required.
 * For all practical purposes, access to databases are also needed.
 * For several samples and the oltp workload, gnuplot must be installed.
 * To browse sources, cscope is recommended

## Stand alone installation

On the system where you are going to run rwloadsim,
create a (possibly shared) directory where you simply
use a command like
```
tar -zxvf rwloadsim-linux-x86_64-bin-3.0.0.tgz
```
One install can be shared between several users as long as all have access to the directory.
If appropriate, you can put the directory on an NFS (or some other) share and make it available to multiple systems.
There is no requirement for which login user and group owns the software.
Note that none of these files potentially shared between users or systems contain any 
passwords or other sensitive information.

In addition to the rwloadsim distribution itself, you must also have an Oracle Client.
In the expanded bin directory, you will see executables named rwloadsimNN, where NN can be any of 11, 12, 18, 19, 21;
the number refers to the client version that was used to compile the software.
The client version you install much be the same as one of these, preferably the latest.
You can use Oracle Instant Client or a full client (or even server) install.

## Binary only install on top of clone or pull from github

Start by doing a pull or clone of the sources from github 
as if you would do your own compile, and then use a command like
```
tar -zxvf rwloadsim-linux-x86_64-binonly-3.0.0.tgz
```
to extract little more than the compiled rwloadsim binaries into your already existing pull or clone.

## Missing required libraries

On some platforms (Ubuntu is one such example), you may get an error like
```
rwloadsim19: error while loading shared libraries: libaio.so.1
```
if that is the case, you need to install the library by doing:
```
sudo apt install libaio1
```

On Oracle Linux 8, you may get an error like
```
rwloadsim19: error while loading shared libraries: libnsl.so.1:
cannot open shared object file: No such file or directory
```
if that is the case, you need to install the library by doing:
```
sudo yum install libnsl
```

If you experience other platforms where certain libraries may be missing, please 
create a github issue such that these instructions can be updated.

## Environment variables

For all users that are going to use rwloadsim, the following environment variables must be configured:

 * PATH must include the bin directory of your download/clone/installation of rwloadsim and must include the directory with sqlplus and other executables (either $ORACLE_HOME/bin or your instant client directory).
 * ORACLE_HOME must be set if you are using a full client.
 * LD_LIBRARY_PATH must include the directory of your client install that contains libclntsh.so.
 * Note that even if you are using an rpm based install of Instant Client, you still need to set LD_LIBRARY_PATH. The location would be something like /usr/lib/oracle/21/client64/lib.

You can simply execute
```
rwloadsim --version
```
to make sure environment is properly setup.

## Enable vim coloring

To enable vim use coloring for rwl files, all users need to un-tar the vim.tar file
found in the admin directory into their HOME directory.
Note that if you are using the source distribution, the vim.tar file does not exist until
you have been running make.

## Creating the repository

While rwloadsim can be used for various scripting without a repository, a repository is needed for any real
simulations.
The workload on the repository database is normally relatively low and most SQL is executed at the finish
of rwloadsim, as all statistics about the execution will be flushed.
One repository database can very well be shared between multiple otherwise unrelated projects; this is in fact
the suggested approach.
The repository database should be created by the same user who installs the rwloadsim software and is
done using the files in the admin directory.
You _must_ modify a few of these files to fit your actual environment for things like passwords and tablespace names.
Always use private copies of these files for this purpose.

The following files handle the repository:

|file|usage|
|----|-----|
|rwlschema.sql|Template for the ```create user``` command that creates the repository schema|
|rwloadsim.sql|All ```create table``` commands|
|rwlviews.sql|All ```create view``` commands|
|rwlgrants.sql|Necessary ```grant``` commands that can be used if you want the repository to be available for a secondary schema with less privileges|
|rwlsynonyms.sql|Necessary ```create synonym``` commands for a secondary schema|
|rwldrop.sql|All ```drop``` commands to remove all tables|

To create the repository, follow these steps:

 * Copy the rwlschema.sql file to a file of your own, and modify it to fit your environment; you will at least need to provide the password for the repository and ensure the tablespace name is correct. For security reasons, set the modes of the file and directory such that only you have access to it.
 * Login in as a dba user using sqlplus to your repository database and execute the file you just created; then log out.
 * Change directory to the admin sub directory of your rwloadsim distribution, login to sqlplus as a the user you just created and execute rwloadsim.sql and the rwlviews.sql; then log out.

If you want a secondary schema, follow these steps:

 * Log in as a dba user using sqlplus, and create a schema with at least 'create session', 'create view', 'create synonym' privileges; then log out.
 * Copy the rwlgrants.sql file to a file of you own, and modify it to contain the name of the secondary user.
 * Log in as your primary repository schema owner and execute the file you just created.
 * Log in as your secondary schema and execute rwlsynonyms.sql and then rwlviews.sql.

If you are sharing the repository between many different users/projects, having the secondary user is recommended as
the grants are set to only allow the needed access to the various repository tables.
For most tables, this is insert and select.

## Updating the repository to version 2.3.4

In version 2.3.4, there are a few auxiliary attribute columns added
to the rwlrun table, so any existing repository need to be updated
to reflect this.

If you have an existing repository and you are upgrading to a version
2.3.4 or later, you must execute the file rwl234.sql (which includes an
update to the rwlrun table) logged in using sqlplus to your primary
repository schema.
The rwl234.sql file is found in the admin directory of your distribution.

If you a using a secondary schema, you must also repeat the step above
involving the rwlgrants.sql file.

## Navigation
* [index.md](index.md#rwpload-simulator-users-guide) Table of contents
* [INTRODUCTION.md](INTRODUCTION.md) Previous topic: A brief introduction the RWP*Load Simulator
* [WORKING.md](WORKING.md) Next topic: Working with rwloadsim using a few examples
