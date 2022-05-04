## A complete example 
The demo directory contains a more complete example that shows some of 
the potential of the RWP*Load Simulator such as: 

 * Modular approach with files containing declarations, test executions and actual simulation runs 
 * Examples with different "business processes" being simulated, and how they can be mixed 
 * Show how awr reports can be generated 
 * Use of multi-process runs 
 * Sample statistics usage from the rwloadsim results tables 

Note that this example was created in a previous release of rwloadsim, and that it 
therefore does not use newer features such as embedded sql.

The following files are available: 

|file|description|
|----|-----------|
|demouser.sql|SQL script to create an rwldemo user; it may need modification for tablespace allocation|
|demotables.sql|SQL script to create an extremely simple order system with headers and lines|
|demouser.rwl|Declaration of a rwl database that accesses the rwldemo user|
|insertdemo.rwl|Declaration of SQL and procedures that will insert orders into the system|
|querydemo.rwl|Declaration of two types of queries simulating respectively a simple order query, and a more complex query|
|massinsert.rwl|A simulation that really is a mass insert of orders|
|testquery.rwl|A small test of the querydemo.rwl procedures|
|awr.rwl|Declarations of everything necessary to create awr snapshots and report, this includes database, SQL statements and procedures|
|runsimulation.rwl|An actual simulation which executes a mix of the three "business" procedures, insert, simple query, complex query, and at the same time creates an awr of the run|

It is recommended that you copy the 
contents of the demo directory to a work directory of your own 
before running these demonstrations.

To run the demonstration, you should initially create the rwloadsim 
repository as described previously.
Next, create the rwldemo user using the demouser.sql script (after 
providing a proper password and potentially modifying tablespace name),
and load the tables into 
the new schema using demotables.sql.
You are now ready to add some data, and you can e.g. add 3000 orders by 
executing (you will need to modify demouser.rwl with password, and possibly
connect string): 
```
rwloadsim demouser.rwl insertdemo.rwl massinsert.rwl
```
You should see something like: 
```
RWP*Load Simulator Release 1.2.0.3 Beta on Fri Jul 20 04:51:24 2018

Created demouser as session pool (4..5) to:

Oracle Database 12c Enterprise Edition Release 12.2.0.1.0 - 64bit Production

created 1000 orders with 5519 order lines in thread 2
created 1000 orders with 5424 order lines in thread 1
created 1000 orders with 5567 order lines in thread 3
created 3000 orders with 16510 order lines in total
```
You can use sqlplus to actually query the rwl_demo_ord or rwl_demo_lin 
tables of your rwldemo schema.
Now load some more data by executing: 
```
rwloadsim -i runcount:=10000 demouser.rwl insertdemo.rwl massinsert.rwl
```
You should inspect the two files insertdemo.rwl and massinsert.rwl to 
see what actually happens.
You will e.g. see that massinsert.rwl starts a number of threads (3 by 
default) that each will execute a control loop inserting orders in a 
busy loop. 

Next, take a look at querydemo.rwl and testquery.rwl and execute: 
```
rwloadsim demouser.rwl querydemo.rwl testquery.rwl
```
The testquery.rwl starts two threads that execute the simple query and 
one thread that executes the complex query.
An output may be: 
```
RWP*Load Simulator Release 1.2.0.3 Beta on Fri Jul 20 04:56:55 2018

Created demouser as session pool (4..5) to:

Oracle Database 12c Enterprise Edition Release 12.2.0.1.0 - 64bit Production

selected 1 orders with 2 order lines in total
sumetotal 43839.42 in thread 3
selected 10 orders with 61 order lines in thread 2
selected 10 orders with 54 order lines in thread 1
selected 21 orders with 117 order lines in total
sumetotal 56494.25 in total
```
Also try 
```
rwloadsim -i showres:=2 demouser.rwl querydemo.rwl testquery.rwl
```
and see the difference; this shows how you can prepare your rwloadsim 
input files such that they can output some debug if needed. 

## Execution statistics 
Let us next go on to see how execution results are stored in the 
rwloadsim repository.
Repeat the above, but also give the -sss option and rwloadsim.rwl file 
as input (as before, you may need to modify password and add a connect 
string in this file): 
```
rwloadsim -sss rwloadsim.rwl demouser.rwl querydemo.rwl testquery.rwl
```
In addition to output like the above, it will also show a runnumber at 
the end.
This number is the primary key of the rwlrun table and the foreign key 
of all results tables.
Now logon via sqlplus to the rwloadsim user, and (here with runnumber 
144 as example), run these queries: 
```
SQL> select * from runres where runnumber=144;

 RUNNUMBER     PROCNO VNAME                WTIME      ETIME     ECOUNT     TCOUNT
---------- ---------- --------------- ---------- ---------- ---------- ----------
       144          0 qcomplex           .000961      .0776          4          1
       144          0 selorder           .002127    .016213         14          2
```
This example output shows that there were two different procedures 
being executed, qcomplex and selorder, the wtime and etime columns show 
the total time waited to get a session, respectively to execute the 
procedure, ecount shows the execution count, and tcount shows the 
number of threads where this procedure was executed. 

The total time for execution (that is session wait time plus actual 
execution time) is grouped into buckets and the results are saved in 
the histogram table as this query shows: 
```
SQL> select * from histogram where runnumber=144
  2  order by vname, buckno;

 RUNNUMBER     PROCNO VNAME               BUCKNO    BUCKTIM     BCOUNT      TTIME
---------- ---------- --------------- ---------- ---------- ---------- ----------
       144          0 qcomplex                12   .0078125          1    .005058
       144          0 qcomplex                13    .015625          1    .011962
       144          0 qcomplex                14     .03125          1    .018795
       144          0 qcomplex                15      .0625          1    .042746
       144          0 selorder                10 .001953125         12    .014195
       144          0 selorder                11  .00390625          2    .004145
```
You can for example see that there were 12 executions of "selorder" 
that took less that 1.95ms and 2 that took between 1.95ms and 3.9ms.
Similarly, there were 1 execution in each of the execution time 
intervals ending at 7.8ms, 15.6ms, 31.2ms and 62.5ms respectively for 
the "qcomplex" procedure.
The TTIME column shows the total execution time for all executes in 
that particular execution time bucket.
The BUCKTIM column is the high end limit for the range of the bucket, 
the low end limit is BUCKTIM/2 (which is the high end of the preceding 
bucket). 

Finally take a look at the persec table, which shows the number of 
execute in each 1s interval since the start of the simulation: 
```
SQL >select * from persec where runnumber=144
  2  order by vname, second
  3  /

 RUNNUMBER     PROCNO VNAME                              SECOND     SCOUNT
---------- ---------- ------------------------------ ---------- ----------
       144          0 qcomplex                                1          1
       144          0 qcomplex                                2          1
       144          0 qcomplex                                3          1
       144          0 qcomplex                                4          1
       144          0 selorder                                1          0
       144          0 selorder                                2          2
       144          0 selorder                                3          4
       144          0 selorder                                4          4
       144          0 selorder                                5          4
```
The four entries for the qcomplex procedure show that there was one 
execution in the each of the first four seconds.
For the selorder procedure, there were no executes in the first second, 
two in the second, and four in each of the next three.
If you take a look at testquery.rwl, you will see that these counts are 
expected, as both the execution of selorder and of qcomplex have a 
fixed arrival rate specified with every 0.5 and every 1 respectively.
For the two threads executing selorder, you will also see that the 
start time is specified as 1*threadnumber, so the actual work will 
start with a delay, which is visible in the last column above for 
selorder. 

## A real simulation 
A real simulation would execute things much faster than every second, 
it would run for a longer time, and it would also need to create an awr 
report.
First take a look at awr.rwl and potentially modify the username and/or 
password for the account that can execute the dbms_workload_repository 
package; you may also need to add a connect string.
Next, take a look at runsimulation.rwl which combines everything.
In addition to have $include directives to include all necessary files,
it also shows the $statistics:all that has the same effect as providing
options to rwloadsim to enable statistics gathering.
The core of it contains: 
```
run
  # Start a number of real worker threads
  threads thrcount # start 20 threads
  at demouser      # Using this database
    for
      every erlang2(0.05)  # simulate arrival rate of 20 per second
      stop totaltime       # until this time
    loop
      doeither(); # executing this
    end;
  end;

  # Use one thread to gather and make awr
  threads !!doawr # make sure 0 or 1 threads start
  at awruser
    # begin 5 seconds into run
    wait 5;
    beginawr();
    # end 5 seconds before finish
    wait totaltime-runseconds-5;
    makeawr();
  end;
end;
```
There are two groups of threads, one doing the actual simulation and 
one simply taking an awr.
The first group only has a control loop, the number of threads and the 
stop time are provided as variables (that have default values which can 
be changed on the rwloadsim command line), and it executes a procedure 
called "doeither".
This is defined as a random procedure array, so it will effectively 
call either of the three procedures, insorder, selorder, qcomplex with 
certain probability. 

The second group has has a sequence of simple statements, it 
effectively calls a procedure called beginawr() after 5 seconds, which 
effectively gathers a snapshot in the workload repository.
It then waits until 5 seconds before endtime, and calls makeawr(), 
which gathers a second snapshot and actually writes the awr file (by 
default in text format; see the awr.rwl file). 

Now execute: 
```
rwloadsim runsimulation.rwl
```
it will run for about a minute and upon completion show something like: 
```
created 1475 orders with 8127 order lines in total
selected 3814 orders with 20803 order lines in total
sumetotal 11711940.24 in total
runnumber: 146
```
Your rwloadsim repository will now contain data from this run, and you 
can e.g. run queries like (you need to specify your actual runnumber 
shown): 
```
SQL> select vname, wtime/ecount avgw, etime/ecount avge
  2  , (wtime+etime)/ecount avgt
  3  from runres where runnumber=146;

VNAME                                AVGW       AVGE       AVGT
------------------------------ ---------- ---------- ----------
insorder                       .000041883 .001258232 .001300115
qcomplex                       .000038146 .015732283 .015770429
selorder                       .000054529 .000891503 .000946032

SQL> select * from histogram where runnumber=146
  2   and vname = 'selorder' order by buckno;

 RUNNUMBER     PROCNO VNAME               BUCKNO    BUCKTIM     BCOUNT      TTIME
---------- ---------- --------------- ---------- ---------- ---------- ----------
       146          0 selorder                 8 .000488281         15    .006649
       146          0 selorder                 9 .000976563       3091    2.32041
       146          0 selorder                10 .001953125        669    .741815
       146          0 selorder                11  .00390625         11    .027817
       146          0 selorder                12   .0078125         22    .137362
       146          0 selorder                13    .015625         20    .206681
       146          0 selorder                14     .03125          0          0
       146          0 selorder                15      .0625          3    .183512
```
The first query shows the average wait time to get a session, the 
average execution time for the database work, and the average total 
time for the three procedures.
The second query shows the histogram of execution times for the 
"selorder" query; most executions (3091) were in the (rounded) interval 
[0.5ms;1ms], 15 were even faster and 3 were in the (rounded) interval 
[31ms;62ms].
You can run similar queries for the other procedures, and you can query 
the "persec" table to see how many executions there were of each in 
each of the 60 seconds total elapsed time.
There are also two views named fractiles and percentiles respectively, 
and you can e.g. execute: 
```
SQL> select * from fractiles where runnumber=146
  2  and vname='selorder' order by bucktim;

 RUNNUMBER VNAME                             BUCKTIM     BCOUNT   FRACTILE
---------- ------------------------------ ---------- ---------- ----------
       146 selorder                       .000488281         15 .391542678
       146 selorder                       .000976563       3091 81.0754372
       146 selorder                       .001953125        669 98.5382407
       146 selorder                        .00390625         11  98.825372
       146 selorder                         .0078125         22 99.3996346
       146 selorder                          .015625         20 99.9216915
       146 selorder                           .03125          0 99.9216915
       146 selorder                            .0625          3        100
```
to show the fractile information in the histogram.
As an example, this results tells that approximately 81% of the 
executions of selorder were faster than (about) 1ms.
Similarly, you can do 
```
SQL> select vname, pct90, pct95, pct98 from percentiles
  2  where runnumber=146;

VNAME                               PCT90      PCT95      PCT98
------------------------------ ---------- ---------- ----------
insorder                       .001854784  .00192695 .003092448
qcomplex                       .040267857   .0540625 .062339286
selorder                       .001475646 .001755258 .001923025
```
showing the 90%, 95% and 98% percentiles of execution times for the 
three procedures. 
## A multi-process run 
The final step in this complete example is to show a multi-process run.
It requires two steps:
A prepare step with the -P option producing a file that will be read by 
the -R option, and an actual execution step with many processes having 
the same file as -R option.
The shell script runmany.sh does exactly this.
It initially does: 
```
rwloadsim -q -P Moption.txt rwloadsim.rwl
```
and then in a loop starts a number of processes in the background 
similar to 
```
rwloadsim -R Moption.txt --totaltime=300 runsimulation.rwl & 
```
and finally waits for the background processes to finish.
Some details are left out here, as an example, it is necessary to 
ensure awr is only generated by one of the processes.
When executing, you need to be able to create about 50 sessions in your 
database.
If you type 
```
./runmany.sh
```
it will run for about 5 minutes and upon finishing, you will see 
something like this (repeated five times for each process): 
```
created 7299 orders with 40083 order lines in total
selected 19202 orders with 105399 order lines in total
sumetotal 55399747.91 in total
runnumber: 147
```
An awr file will have been created (find its name by doing ls -ltr), 
and an extract from the SQL ordered by CPU might be: 
```
SQL ordered by CPU Time                     DB/Inst: C2/c2  Snaps: 18963-18964

    CPU                   CPU per           Elapsed                     
        
  Time (s)  Executions    Exec (s) %Total   Time (s)   %CPU    %IO    SQL Id    
---------- ------------ ---------- ------ ---------- ------ ------ -------------
      35.2       14,265       0.00   21.4       82.9   42.4     .3 61ht2hkmagbn5
Module: rwloadsim@slc09nzr (TNS V1-V3)
select /*+use_nl(l o) use_nl(r l) index(o pk_ord)*/ o.ordno , o.b , o.c , o.  
pl , l.linno , l.e , l.pl , r.g , sum(l.e) over (partition by o.ordno) 
sume , count(l.e) over (partition by o.ordno) cntl , sum(length(translate(l.pl,
' abcdefghijklmnopqrstuvwxyz','-'))) over (order by o.ordno) sltp from rwl_demo_or

       4.0       92,074       0.00    2.4        8.2   48.6    2.7 855gyybkhcnc9
Module: rwloadsim@slc09nzr (TNS V1-V3)
select l.ordno , l.linno , l.e, l.pl , l.refno , r.g, r.pl from rwl_demo_lin l
join rwl_demo_ref r on l.refno = r.refno where l.ordno = :1 order by l.linno
```
Let us now finally see a few queries against the rwloadsim repository.
Because this was a multi process run, the procno column of the various 
tables will now have a non-zero value, and there will be a total of 
five different values as seen here: 
```
SQL> select * from runres where runnumber=147
  2  and vname = 'qcomplex';

 RUNNUMBER     PROCNO VNAME                               WTIME      ETIME     ECOUNT
---------- ---------- ------------------------------ ---------- ---------- ----------
       147       9179 qcomplex                           .25899   57.71752       2933
       147       9182 qcomplex                          .290062  58.146928       2980
       147       9176 qcomplex                          .107874  57.712318       2999
       147       9172 qcomplex                          .097843  58.014568       2937
       147       9174 qcomplex                          .097493  56.297332       2906
```
You would very likely need to aggregate this and for that purpose, each 
of the three tables, runres, histogram and persec, have aggregate views 
where the procno column is replaced by a pcount column; the view are 
named as the base table with an appended _a.
As an example: 
```
SQL> select * from runres_a where runnumber=147;

 RUNNUMBER     PCOUNT VNAME                               WTIME      ETIME     ECOUNT
---------- ---------- ------------------------------ ---------- ---------- ----------
       147          5 qcomplex                          .852262 287.888666      14755
       147          5 selorder                         3.802066  90.211869      95625
       147          5 insorder                          1.24865 132.845251      36669 
```
An example of a more complex query using the pivot clause to generate 
per second execution counts for each of the three procedures is 
available in persec_q.sql.
An example (with just the few first and few last result rows) is: 
```
SQL >set echo on
SQL >@persec_q
SQL >select * from
  2  (select vname, second, scount from persec_a where runnumber = (select max(runnumber) from rwlrun))
  3  pivot
  4  (sum(scount) for vname in ('selorder' as selorder, 'insorder' as insorder, 'qcomplex' as qcomplex))
  5  order by second
  6  /

    SECOND   SELORDER   INSORDER   QCOMPLEX
---------- ---------- ---------- ----------
         1        282        112         40
         2        299        126         61
         3        319        129         54
         4        317        125         50
         5        317        112         46
         6        307        118         53
         7        320        121         53
...

       297        280        128         43

    SECOND   SELORDER   INSORDER   QCOMPLEX
---------- ---------- ---------- ----------
       298        307        125         34
       299        306        123         36
       300        341        132         45
```
If the output from this is saved to a spool file, you could 
subsequently use gnuplot or some other tool with graphing possibilities 
to produce graphs.

The oltp workload that is distributed with rwloadsim has some roots
in this sample and although it is quite complex, you will recognize
some of the same constructs: Shell script to wrap rwloadsim calls,
generation of awr, actual workload implemented in various rwl files, etc.

## Navigation
* [index.md](index.md#rwpload-simulator-users-guide) Table of contents
* [DIRECTIVES.md](DIRECTIVES.md) Previous topic: Using directives to modify behavior
* [YOUROWNWL.md](YOUROWNWL.md) Next topic: Creating your own workload
