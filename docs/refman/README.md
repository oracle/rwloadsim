## RWP\*Load Simulator reference manual

This is rwloadsim reference manual including both the tool itself,
the programming language, the supplied oltp workload, and 
all other included rwl scripts and files.

For online reading, you must use the link
[https://oracle.github.io/rwloadsim/refman/](https://oracle.github.io/rwloadsim/refman/).
If you are reading from github.com, you will see the hmtl source in stead of
the formatted version.

After installation, the reference manual will be available as
rwlman pages that are very similar to ordinary man pages.
You can simply type ```rwlman``` to get started.

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
* [printfstatement - How to use printf, fprintf or sprintf for output formatting](printfstatement.html)
* [lobdeclaration - Declaring LOB variables](lobdeclaration.html)
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
* [oerstats - ORA-error statistics](oerstats.html)
* [histogram - Histogram distribution of execution times](histogram.html)
* [percentiles - Percentile distribution of execution times](percentiles.html)
* [sysres - System statistics gathered by the oltp workload](sysres.html)
* [rwlcpu - Auxiliary table used by the oltp workload](rwlcpu.html)

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
* [oltpforever - Start a continuous run](oltpforever.html)
* [oltpday - Create a report for a day of oltpforeer](oltpday.html)
* [oltpparams - Show parameters used by oltprun](oltpparams.html)
* [oltpcheckkey - Verify some key has not been used before](oltpcheckkey.html)
* [oltpscale - Create a scaling run with increasing process count](oltpscale.html)
* [oltpscalereport - Recreate the report for a scaling run](oltpscalereport.html)

### Utilities and include files

* [awreport - Create an awr report](awreport.html)
* [ashplot - Create a plot of ash data](ashplot.html)
* [ociping - Run "ping" showing round-trip times to a database](ociping.html)
* [connping - Run "ping" showing connection and round-trip times to a database](connping.html)
* [netthroughput - Estimate Oracle Network throughput](netthroughput.html)
* [ovid2 - Generate nice looking random strings](ovid2.html)
* [sqlid2file - Save sql text to a file based on sql_id](sqlid2file.html)
* [sqlmonitorawr - Create a sqlmonitor from data in awr repository](sqlmonitorawr.html)
* [sqlmonitor - Create a sqlmonitor from data in gv$ views](sqlmonitor.html)
