## Setup and use of the oltp workload

This is a complete oltp workload that uses the RWP\*Load Simulator
together with a comprehensive set of scripts allowing you to run
several different types of tests against different types and sizes
of databases.  

If you have been using the demonstration found in the demo sub-directory
of rwloadsim itself, you will find that the oltp workload is
a heavily expanded set of tests.
They include a broad set of oltp style "business transactions", some
of which are somewhat realistic dealing with order processing, while
others are completely artificial.
The artificial ones are designed to show typical oltp database behavior.

There are several ways to use this workload; you can make individual runs,
you can make sets of runs that show scalability, and you can make runs
that are supposed to run 24/7.
The latter can be used to show change in your database behavior over time.

Results are generally presented in generated web-pages, including many types
of graphs. 
If further processing is needed, everything is stored in the usual rwloadsim
repository database.

You may (well, you probably will) find that the scripts are somewhat 
convoluted with many moving parts including some odd usage of both
rwloadsim, sqlplus, standard UNIX scripting, etc.
This is the result of a long evolution over time, but in most cases,
you will only need to do a small amount of configurations in order 
to call the top level scripts appropriately.
If, however, you want to expand the scripts or change them to suit
your specific purposes, you need to be prepared to spend some time
understanding the details.

There is a [OLTPQUICKSTART.md](OLTPQUICKSTART.md) file that has very
brief instructions for the experienced user of the workload,
and you can access a man page using ```rwlman oltpsetup```.

### Prerequisites

In order to run this workload, the following is required:

 * A Linux installation with standard tools like bash, awk, sed.
 * Ability to run as root is highly preferred although this can be delegated.
 * The RWP\*Load Simulator; a binary distribution (which does include the workload) is fine.
 * An Oracle client (Instant Client is fine) including sqlplus.
 * The gnuplot command *must* be installed.
 * A httpd installation *must* be available and must be prepared such that you have write
access to a directory that is exposed externally from a browser.
 * A database that will be running the workload,
dba access is required to create schemas, gather awr snapshots, query v$-views and more.
Any type, including on-premise, autonomous, single instance, RAC, multi-tenant is supported.
 * A database to hold the rwloadsim repository;
this should preferably be a *separate* database from the one under test,
and it can very well be shared between multiple projects.
 * If you have upgraded to version 2.3.4 or newer,
an already existing repository
must have have the rwl234.sql script found in the
admin directory applied to it.

You will be going to make many "runs"; each will store various files into two different directories:

 * A results directory that can be considered intermediate.
The size required is typically up to 300kB per run, so the total size will not grow rapidly.
 * A directory for various html files, images, awr reports, etc, which will be exposed via the http daemon mentioned above.
The size required for each run is typically 2MB plus 1-2MB for each instance in your database under test; the total size can therefore be substantial.

### Preparation

You will need a Linux account on a system that you should consider as your "application server".
You must define one (or more) projects, that you are going to use to show behavior in
different circumstances.
These could be different databases; they could be databases running on different servers
or they could be different ways to connect to the same database such as using shared and
dedicated connections.
In the simple case, you may just have one project, which in that case typically would
be given the same name as the database.
Project names should be short and meaningful and cannot not contain white space characters.
Good names would be dbone, dbtwo_a, dbtwo_b, db-shr, db-ded.
By default, the project name will also be the key used when storing results in the
rwloadsim repository, and therefore, we will be using {key} below.

On your "application server" system, you need to have the two directories mentioned above for each project; they must be separate and should not
simply be your home directory.
There should be one directory, called the results directory, where intermediate files are stored, and there
should be one directory, called the awr directory, where all externally visible html, images, etc will be stored.
If your http daemon is Apache, it will by default expose files off /var/www/html, and the recommend approach is
to create a directory with sufficient space somewhere in your file system and create a symbolic link in
/var/www/html pointing to this directory.
As it is likely you will use multiple projects, the suggested approach is to have
one directory visible via a browser, and then create project specific directories.

As an example, if you have access to a /home2/mylogin directory,
you could have these two directories, where the sub-directories named {key}
refers to the project and is discussed
in detail below.
```
/home2/mylogin/results/{key}
/home2/mylogin/html/{key}
```
and have a symbolic link named /var/www/html/rwloltp pointing to /home2/mylogin/html.
If the symbolic link is named "rwloltp", a url like http://yourhost/rwloltp
will point to the top directory for all projects, and clicking the link that is
the project specific directory, will allow browsing of 
the files generated during execution of runs for your specific project.
Do make sure this is working before continuing.

Note that if you are running secure Linux, you probably need to become root and execute
```
chcon unconfined_u:object_r:httpd_sys_content_t:s0 /home2/mylogin/html
```
to set the proper security context on your awr directory.

Also note, that the full path of both directories cannot contain
any white space characters.

### Creating clickable svg graphs
When gnuplot generates graphical output, it is generated in png as well as svg format.
The latter are clickable assuming the javascript resources are available in your to your webserver,
which is typically done by copying these files to an appropriate location under your web server root.
If you are running a default Apache installation and your gnuplot version is 4.6, do the following as root:
```
cd /var/www/html
mkdir -p usr/share/gnuplot/4.6/js/
cp /usr/share/gnuplot/4.6/js/* usr/share/gnuplot/4.6/js/
```
If you are running a different webserver and/or a different version of gnuplot, you will need to adjust 
the commands appropriately.

### Installing the RWP\*Load Simulator

Please follow instructions for rwloadsim itself.
During installation, you will also be installing an oracle client such as Instant Client, including sqlplus.
As example locations for respectively rwloadsim and Instant Client assuming the above mentioned
/home2/mylogin directory exists could be:
```
/home2/mylogin/rwloadsim
/home2/mylogin/instantclient_19_9
```
These two directories can very well be shared among multiple users or even systems via 
e.g. an NFS mount, as they do not contain any sensitive information such as passwords.
Unless you have an existing repository database, you are strongly advised to also create one;
if your "application server" has sufficient 
capacity to include this database, you can do so.
Otherwise, use a separately located databases for your repository.

### Installation

In your installation of the RWP\*Load Simulator,
the oltp directory contains the files that are needed by the oltp workload.
You need to have copies of two of these files (only) in your
own working directory.
You should therefore first 
create this directory (private to you) where your real work will take place,
and where you put copies of these two files;
the copies must be named after your project.

The files you need to make your own copies of are:

 * ```oltp.env``` where environment variables needed by the specific project are set.
 * ```oltp.rwl``` where a large number of variables used by almost all rwl scripts are set.

So you should create {key}.env and {key}.rwl in your working directory.
The only setting that _must_ be set in {key}.env is the environment RWLOLTP_NAME
which should be your project name, i.e. {key}. 
Other environment variables that are commented out in oltp.env can be set if appropriate.

If you have multiple projects, you can create multiple such pairs of files
in the same directory
and easily switch between
them using the . or source command in the shell.
If your projects are called dbtwo_a and dbtwo_b, you can switch between them by doing
either of:
```
. ./dbtwo_a.env
. ./dbtwo_b.env
```
### Preparing your workload

The entire configuration of the workload is done in a single rwl file named
after your project, i.e. {key}.rwl, which you initially create as a copy 
of oltp.rwl.
The file has many details about the use of the different parameters;
a few explanations are:

The test suite uses a number of different database declarations that all have a connect string,
a username and a password.
There are two different database declarations used for DBA work, five different schemas that are used
for the actual workload, and a number of pooled and non-pooled database declarations.
Often, you can use the same connect string for all of these; exceptions are mentioned in {key}.rwl.

The two directories mentioned previously must be named in the file.

There is a tablespace name parameter that identifies the tablespace where all tables will be put.
The tablespace should have at least 20-30 GB available.

If your database does not have the partitioning option, you must set the value of the orders\_hashcount parameter
to 0.
Doing so will imply the two tables orders and order\_items will grow without bounds; with partitioning the scripts
will keep their size below a certain limit.

Note that this file typically contains account passwords; you must therefore ensure
the file can only be read by you, e.g. by giving it permission 0600.
You can also decide not to include passwords, in that case, rwloadsim will prompt for them.

For your initial tests, it is highly recommended that you don't change any other parameters.

The scale of the workload is primarily controlled by the number of processes started, which again is 
an argument to the shell scripts such as oltprun.
The default parameters (ratefactor=0.2, threadcount=50) are such that a run with just one process
will use in the order of 0.2-0.3 database cpu seconds per second depending on the cpu speed of the 
database server.

### Available shell scripts

The following shell scripts are found the in the bin directory:

|Name|Usage|
|----|-----|
|oltpverify|Verify directories and parameter settings|
|oltpcreate|Create all schemas|
|oltpfilloe|Drops and recreates the OE schema|
|oltpcheckkey|Check if some key exists in the repository schema|
|oltpdrop|Drops all schemas except the repository|
|oltpcore|Perform a single run without saving all output|
|oltprun|Perform a single run preparing all output for browsing|
|oltpplot|Create all graphs and html files from one run|
|oltpscale|Perform a scaling run over a range of process counts|
|oltpscalereport|Create all graphs and html files after a scale run|
|oltpforever|Executes runs continuously until stopped|
|oltpforever2|Separate another overlapping continuous run by ½hour|
|oltpday|Create graphs and html files for one full day of continuous execution|

Use rwlman with the name of either shell script to get it usage.

### Verify parameter settings

The script oltpverify is used to verify the parameters 
that are set in your file such as {key}.rwl.

You should check that the directories exist by calling
```
oltpverify -d
```
and if it displays a message that directories are fine, you should
verify you can access the system account of your database by calling
```
oltpverify -s
```
which should finish with a line saying:
```
repository:nottested systemdb:ok cruserdb:ok runuser:nottested
```
If you have an existing rwloadsim repository, you can verify connections to
it are working by doing
```
oltpverify -t
```

### Create schemas
The five schemas used can now be created by calling
```
oltpcreate
```
If any errors are shown, correct these before continuing.
Note that if you have set ```results_in_test``` to a non-zero value, a repository schema will also
be created in your database under test; this is _not_ the recommended approach.

To drop all schemas (except repository), execute
```
oltpdrop
```

Once you have created the schemas, you can use the oltpverify script with the -a option,
which should finish with this line:
```
repository:ok systemdb:ok cruserdb:ok runuser:ok
```

### Initial test runs

To confirm everything has been configured properly, simply type 
```
oltpcore -r 195
```
which will perform a run that lasts just under 200s.
There should be no error messages, neither from sqlplus, bash nor rwloadsim.
It will produce output while it progresses; some of these are:
```
RWP*Load Simulator Release 2.2.5.28 Development using client 19.9 on Mon Dec  7 17:21:01 2020

Connected rwl_aw for threads dedicated to:
Oracle Database 19c Enterprise Edition Release 19.0.0.0.0 - Production

truncated aw tables
Preparing runnumber 27354
**** remaining: 0
**** started all background jobs at Mon Dec 7 17:21:05 UTC 2020
...
runnumber 27354 at 20.03 inst 2 3 aw_transaction
runnumber 27354 at 20.03 inst 2 5 awindex_query
runnumber 27354 at 20.03 inst 2 1 complex_query
...
runnumber 27354 at 20.04 total 18
...
runnumber 27354 at 194.50 total 17
doing ash from 2020.12.07T17:21:07
**** runperiod=195 over at Mon Dec 7 17:24:23 UTC 2020
making awr for 3132122639 2 816 817
...
**** 10 extra seconds over at Mon Dec 7 17:24:33 UTC 2020
**** looking for still running processes at Mon Dec 7 17:25:03 UTC 2020
...
ash data copied to repository
```
If there are errors, you need to fix them before continuing.
Once all errors - if any - are fixed, you should stop using oltpcore as it does not save
stdout and stderr from the run.
In stead, use oltprun, oltpscale or oltpforever for real runs.

Now do a run using oltprun; if you have an X-Windows environment with the DISPLAY variable set, 
you should try also using the -g option:
```
oltprun -g
```
It will run for five minutes while producing output similar to what you have seen previously;
the only change is that stderr is not shown; it is saved in a file.
Both stdout and stderr will be available via your browser after the run has completed.

Finally, point your browser the the URL that exposes the awr directory.
Initially, you will just see a directory named rNN, where NN will be 0 if you are using a newly
created rwloadsim repository, otherwise NN will be the runnumber divided by 1000.
Click that directory and then click the directory that has the same name as the runnumber.

The page will in the first part contain a number of links to things like awr reports, various graphs
in both svg and png format and to a text file that contains both stdout (that was shown during the run)
and stderr from the run.
If any ORA-errors occurred during the run, that will also be shown.
Some of the graphs will be embedded directly in the page as well.
Note that the ash graphs are a balance between having good resolution and visibility of the
number of sessions on cpu and the number of sessions in wait.
As the latter can be very high, the y-axis my be too short to accommodate all periods with sessions 
waiting.

### Using oltprun for individual runs

The oltprun script can be used to execute individual runs where you can change parameters
(in your {key}.rwl file) or change arguments to oltprun.
It accepts the following options:

|option|usage|
|------|-----|
|-H|Show help|
|-n N|Set the number of processes, default 1|
|-k key|Set the value of the key to be used in repository, default $RWLOLTP\_NAME|
|-r N|set the runperiod in seconds, default 295|
|-g|show running graphs - requires X windows|
|-R file|Set non default file to run, default run.rwl|
|-a|allocate partitions at beginning of run|
|-2|use side 2|

 * The most simple way to increase the load on your database is to use the -n option to specify a higher process count.
 * The default run period of 295 seconds is chosen as a balance between time spent and validity of results. Choosing run periods that are a bit shorter than a multiple of 300s will produce graphs with nice x-axes.
 * If you want to experiment with other run files than the default run.rwl, you can specify one using the -R option.
 * To get a running graph of your run, use the -g option. If you have RWLOLTP\_GNUPLOT1 and/or RWLOLTP\_GNUPLOT2 set in your environment, they should be -geometry options to gnuplot and will be used for respectively time/session and throughput plots.
 * If your orders and order\_lines tables are partitioned, you can use the -a option to make sure an empty set of partitions are created at the start of the run. Only use this if the automatic allocation via interval partitions appears to cause trouble.
 * The -2 option should only be used indirectly via the oltpforever2 script.

The {key}.rwl file sets a parameter called rwl\_title that is a text string shown on all generated html and graphic files.
If you in some run want to add additional text, you can provide that on the command line to oltprun.
As an example
```
oltprun -r 595 -g -n 15 yet another test
```
will run a test that lasts just under 10 minutes, shows running graphic, uses 15 processes,
and generates html and graphics files that include the text "yet another test" in addition to the text
of your rwl\_title parameter.

At [SAMPLEOLTP.md](SAMPLEOLTP.md), there are examples of the graphs being produced.

### Generating bursts during the run

A goal of performance testing and simulation is to see how well the database deals with changes in workload.
The rwloltp workload is prepared to allow one burst in workload during the test.
The burst is specified by these settings in {key}.rwl:
|parameter|usage|
|---------|-----|
|burst\_start|The time in seconds after run start when the burst should start|
|burst\_length|The length in seconds of the burst|
|burst\_factor|The factor (as a double) by which the workload will be increased during the burst|

If the burst\_start time is after the run period provided by the -r option, if the burst\_length is zero,
or the burst\_factor is 1, no burst will take place.

### Create scalability runs using oltpscale

An often wanted measure performance measure is to find the workload at which the database can no longer
keep up due to e.g. lack of cpu resources.
The oltpscale script is designed to do exactly that as it performs a sequence of runs with increasing
number of processes and eventually produces a scaling report from these runs.

As oltpscale needs to produce graphs based on multiple runs, it need to run queries
against the repository that return exactly these runs.
These queries are using key and hostname (of the server where you execute oltpscale, i.e. 
your application server), so each oltpscale runs needs a separate key.
Therefore, a unique key must be chosen (such as {key}scale1, {key}sclA, or similar.)
To ensure no runs exist in your repository, execute 
```
oltpcheckkey {keytobechecked}
```
It will either display a line saying the key does not exist or a line saying how many runs
already exist with that key executed from your server.
If runs exist, you need to pick a new key.

The oltpscale script has these options:
|option|usage|
|------|-----|
|-H|show this help|
|-l N|Specify lowest number of process (and interval unless -i is used)|
|-h N|Specify highest number of process|
|-n N|Ignore lo/hi and act as if this was just calling oltprun|
|-i N|Specify interval of process count between runs|
|-k key|Set the value of the key to be used in repository|
|-r|Set the runperiod in seconds, default 595|
|-g|Show running graphs - requires X windows|
|-A|Allow reuse of key|
|-a|Pre allocate partitions|

The typically used options are:

 * The range of process counts that will be started is provided as the argument to the -l and -h options.
If these are set to e.g. 2 and 10, runs with process counts of 2, 4, 6, 8, 10 will be performed.
 * The unique key must be provided using the -k option
 * Any arguments in addition to options will be added as text string to html files, graphs, etc.

When execution has finished, a html file will be created named after the key and made available
for browsing at the awr directory.
It contains a scalability graph including throughput, database cpu and database time,
and it includes links to individual run data (that is to the results of each run).
In addition, it includes graphs that show the execution time fractiles for a subset of the transactions
in the workload.

A simple example of calling oltpscale is:
```
oltpcheckkey scale1a
oltpscale -l 1 -h 4 -r 295 -k scale1a my first scale test
```
which will make four runs with process counts of 1,2,3, and 4, each taking just under 300s using.
When completed, you can browse to your externally visible awr directory where a file named scale1a.html
will contain the results of the run.
If you then realize you really should have made runs with as many as 6 processes, you can
make the two missing ones by
```
oltpscale -A -l 5 -h 6 -i 1 -r 295 -k scale1a my first scale test
```
The -A option is needed such that oltpscale will accept there are already runs with scale1a as key, 
and the -i option is needed to use an interval of 1
between the lowest (5) and highest (6) process counts.

At [SAMPLEOLTP.md](SAMPLEOLTP.md#scaling-execution), there is an example of scalability graphs.

### Making continuous runs

If your goal is to investigate long term behavior, you will want to repeat a 
certain run over and over.
This is what the oltpforever script is designed to do; it will do little more
than repeating a run until it is gracefully terminated or is canceled using
ctrl-c.
The script does little more than executing oltprun repeatedly each with a runtime
of 1h; there is a parameter that you can configure in your {key}.rwl file,
forever\_proccount.
When oltpforever is started, a file named {key}.run will be created; if you 
remove this file, oltpforever will terminate gracefully when its current
run has completed.

As oltpforever does little more than executing oltprun in a loop, there will
be a period (typically around 1 min) after each 1h run during which saving
of results to the repository and cleanup will take place before the next
start of oltprun.
This implies that there will be periods without load against the database under
test.
If you want to achieve having a load at all times, you can execute oltpforever2
in a separate shell window. 
This will add a workload (by calling oltprun) that is exactly the the one
created by oltprun from oltpforever, but it will be shifted ½hour.
As a result, results saving and cleanup of one will be roughly halfway into
the other, ensuring there is always something running against your database.
Interaction between the two scripts is done via files named {key}.2time
(with a time-stamp to start) and {key}.2args with the arguments needed for oltprun.
If you want to use oltpforever2, start it in a separate window at most ½hour 
after you have started oltpforever.
You will see a countdown until oltpforever2 is ½hour after oltpforever, and
oltpforever will subsequently control when oltpforever2 runs.

When deciding the size of the workload (i.e. the forever\_proccount value),
you need to take into account if you are going to run with only oltpforever
or if you also want to run oltpforever2.
In practical terms, forever\_proccount should be half of the wanted workload
if you are running with both.
When running with both, you will see that database cpu and database time will 
drop to about half for about one minute halfway through each run,
as that is the time when the other one is saving results, doing cleanup 
and prepare for the next run.

### Experimenting with changes to the rwl scripts

All rwl scripts used by the oltp workload are found in the oltp directory
which automatically will be added to RWLOADSIM_PATH when calling the 
executable shell scripts such as oltprun.
Due to the way these scripts are used by rwloadsim either as parameters
or as $include files, there is a simple approach to experimenting with
_changes_ to these scripts.
You can simply copy any rwl file from the oltp directory to your current
working directory, where you already have your project .env and .rwl files,
and rwloadsim will use your copy of the file in stead of the one found in
the oltp directory.
You can therefore experiment with modifications by editing your copy of the file.

## Navigation
* [index.md](index.md#rwpload-simulator-users-guide) Table of contents
* [SAMPLEOLTP.md](SAMPLEOLTP.md) Previous topic: Sample use cases with the oltp workload
* [OLTPQUICKSTART.md](OLTPQUICKSTART.md) Next topic: Quickstart of the oltp workload for experienced users

