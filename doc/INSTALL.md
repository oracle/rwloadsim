# Installation and creation of repository

Binaries are distributed in files name like rwloadsim-bin-2.2.5.tgz.
They contain the following directories:

|Directory|Contents|
|---------|--------|
|bin|Executables|
|man/man1rwl|The reference documentation in the form of manual pages|
|man/man2rwl|The reference documentation for workloads|
|admin|Primarily scripts to create the repository database|
|demo|All demonstrations named in the guide you are reading now|
|public|A set of publicly available rwl scripts|
|doc|The users guide as md files; you should normally read these directly on git|
|workloads|Various workloads that can be deployed immediatedly|
|oltp|Files implementing the "oltp" workload|

## Prerequisites

 * An Oracle client environment such as Instant Client is required.
 * For all practical purposes, access to databases are also needed.
 * For several workloads, gnuplot must be installed.

## Installation

On the system where you are going to run rwloadsim, create a publicly available directory where you simply
use a command like
```
tar -zxvf rwloadsim-bin-x.y.y.tgz
```
One install can be shared between several users as long as all have access to the directory.
If appropriate, you can put the directory on an NFS (or some other) share and make it available to multiple systems.
There is no requirement for which login user and group owns the software.

In addition to the rwloadsim distribution itself, you must also have an Oracle Client.
In the expanded bin directory, you will see executables named rwloadsimNN, where NN can be any of 11, 12, 18, 19;
the number refers to the client version that was used to compile the software.
The client version you install much be the same as one of these, preferably the latest.
You can use Oracle Instant Client or a full client (or even server) install.

## Environment variables

For all users that are going to use rwloadsim, the following environment variables must be configured:

 * PATH must include the bin directory of your download/clone/installation of rwloadsim and must includethe directory with sqlplus and other executables (either $ORACLE_HOME/bin or your instant client directory).
 * ORACLE_HOME must be set if you are using a full client.
 * LD_LIBRARY_PATH must include the directory of your client install that contains libclntsh.so.

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

 * Copy the rwlschema.sql file to a file of your own, and modify it to fit your environment; you will at least need to provide the password for the repository and ensure the tablespace name is correct.
 * Login in as a dba user using sqlplus to your repository database and execute the file you just created; then log out.
 * Login is a the user you just created and execute rwloadsim.sql and the rwlviews.sql; then log out.

If you want a secondary schema, follow these steps:

 * Log in as a dba user using sqlplus, and create a schema with at least 'create session', 'create view', 'create synonym' privileges; then log out.
 * Copy the rwlgrants.sql file to a file of you own, and modify it to contain the name of the secondary user.
 * Log in as your primary repository schema owner and execute the file you just created.
 * Log in as your secondary schema and execute rwlsynonyms.sql and then rwlviews.sql.

If you are sharing the repository between many different users/projects, having the secondary user is recommended as
the grants are set to only allow the needed access to the various repository tables.
For most tables, this is insert and select.

## Navigation
* [README.md](README.md) Table of contents
* [WORKING.md](WORKING.md) Previous topic: Working with rwloadsim using a few examples
* [SCALAR.md](SCALAR.md) Next topic: Declarations of scalars
