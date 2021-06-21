## RWP\*Load Simulator reference manual

The reference manual to rwloadsim and the provided workloads,
public include files etc is available after install as
rwlman pages that are very similar to oridinary man pages.
You can simply type ```rwlman``` to get started.

They are formatted for online reading
via [https://oracle.github.io/rwloadsim/refman/](https://oracle.github.io/rwloadsim/refman/).
Note that if you are browsing the source files directly at github, you will see the html
source and not the formatted versions.

### Introduction to rwloadsim

* [rwlman - Overview of all rwlman pages](rwlman.html)
* [rwloadsim - Calling the rwloadsim executable](rwloadsim.html)
* [rwlerror - Explaining errors using rwlerror](rwlerror.html)
* [rwlprogram - Overview of the rwl language syntax](rwlprogram.html)
* [multiprocess - Using multiple processes for one simulation](multiprocess.html)

### Language syntax

* [simpledeclaration - Variable declaration in general](simpledeclaration.html)
* [expression - Expressions, constants, precedence rules, standard function](expression.html)
* [identifier - Identifier syntax and list of predefined variables](identifier.html)
* [statement - Execution of simple statements, assignments](statement.html)
* [database - Overview of databases and sql](database.html)
* [databasedeclaration - Declaring databases](databasedeclaration.html)
* [sqldeclaration - Declaring static and dynamic SQL and PL/SQL](sqldeclaration.html)
* [sqlexecution - Executing SQL, PL/SQL or cursor loops](sqlexecution.html)
* [sqlstatement - Changing properties of sql](sqlstatement.html)
* [databasestatement - Performing operations on databases, transactions, lob](databasestatement.html)
* [atclause - Choosing a particular database](atclause.html)
* [compoundstatement - Compound statements, if/then/else, loops](compoundstatement.html)
* [controlloop - Use the controlloop to specify workload](controlloop.html)
* [declaration - Overview of complex declarations](declaration.html)
* [proceduredeclaration - Declaring procedures and functions](proceduredeclaration.html)
* [randomproceduredeclaration - Declaring random procedures](randomproceduredeclaration.html)
* [randomstringdeclaration - Declaring random strings](randomstringdeclaration.html)
* [filestatement - Use of operating system files, pipe-lines](filestatement.html)
* [lobdeclaration - Declaraing LOB variables](lobdeclaration.html)
* [regex - Use of regular expressions](regex.html)
* [threadexecution - Using multiple threads for simulation](threadexecution.html)

### Directives

* [directive - All directives](directive.html)
* [conditional - Directives for conditional compilation](conditional.html)
* [include - Directives for include files](include.html)
* [useroption - Directives for user options and switches](useroption.html)

### Statistics tables and views

* [statistics - Overview of statistics gathering](statistics.html)
* [rwlrun - Overall information about tun](rwlrun.html)
* [runres - Execution statistics for each procedure](runres.html)
* [persec - Per second throughput](persec.html)
* [histogram - Histogram distribution of execution times](histogram.html)
* [sysres - System statistics gathered by the oltp workload](sysres.html)
* [rwlcpu](rwlcpu.html)
* [oerstats](oerstats.html)
* [percentiles](percentiles.html)

### OLTP workload

* [oltp - Introduction](oltp.html)
* [oltpsetup - Setup and preparation](oltpsetup.html)
* [oltpverify - Verify your setup](oltpverify.html)
* [oltpcreate - Create all schemas](oltpcreate.html)
* [oltpawcols - Recreate the awcols table](oltpawcols.html)
* [oltpfilloe - Refill the order entry tables](oltpfilloe.html)
* [oltpdrop - Drop all schemas](oltpdrop.html)
* [oltpcore - Make a single run with stdout/stderr shown on terminal](oltpcore.html)
* [oltprun - Make a single run saving stdout/stderr](oltprun.html)
* [oltpplot - Recreate html and graphics for one run](oltpplot.html)
* [oltpplus - Start sqlplus as some of your database users](oltpplus.html)
* [oltpforever - Start a contineous run](oltpforever.html)
* [oltpday - Create a report for a day of oltpforeer](oltpday.html)
* [oltpparams - Show parameters used by oltprun](oltpparams.html)
* [oltpcheckkey - Verify some key has not been used before](oltpcheckkey.html)
* [oltpscale - Create a scaling run with increasing process count](oltpscale.html)
* [oltpscalereport - Recreate the report for a scaling run](oltpscalereport.html)

### Utilities and include files

* [ociping - Run "ping" showing roundtrip times to a database](ociping.html)
* [connping - Run "ping" showing connection and roundtrip times to a database](connping.html)
* [nettest - Run a comprehensive network test to a database](nettest.html)
* [ovid2 - Generate nice looking random strings](ovid2.html)
* [sqlid2file - Save sql text to a file based on sql_id](sqlid2file.html)
* [sqlmonitorawr - Create a sqlmonitor from data in awr repository](sqlmonitorawr.html)
* [sqlmonitor - Create a sqlmonitor from data in gv$ views](sqlmonitor.html)
