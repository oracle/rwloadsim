## Utilities for database "ping" and network throughput

There are three rwloadsim utility scripts included in the public directory that can
be used to measure Oracle Net (often referred to as SQL\*Net) performance.
Compared to the tnsping utility that is shipped with Oracle, 
the measurements are all based on the connection to the database
and not only the connection to the tns listener.
They therefore require full database credentials connecting to your
database, i.e. both username, password and connect string.

Two of them, ociping.rwl and connping.rwl, produce output similar to
ping; the third does a more comprehensive network throughput test.

The first, ociping.rwl, only measures the time to do a simple SQL\*Net roundtrip using
OCIPing.

The second, connping.rwl, measures three values:
Time taken to do a complete database logon, time take to execute OCIPing, 
and time taken to execute 'select 1 from dual'.
At the end, the averages are shown.
Some lines from a sample output are:
```
connect: 127.85 ms, ociping: 0.11 ms, dualping: 0.11 ms, sid=1859, inst#=2
connect: 127.57 ms, ociping: 0.06 ms, dualping: 0.11 ms, sid=1859, inst#=2
connect: 125.28 ms, ociping: 0.06 ms, dualping: 0.17 ms, sid=1859, inst#=2
connect: 135.52 ms, ociping: 0.09 ms, dualping: 0.09 ms, sid=992, inst#=2
connect: 273.09 ms, ociping: 0.12 ms, dualping: 0.12 ms, sid=770, inst#=1
connect mean=206.14 stddev=113.75
ociping mean=0.09 stddev=0.02
dualping mean=0.12 stddev=0.02
```
The third script, netthroughput.rwl estimates the total available throughput
from the database to the client.
A sample call and output is:
```
rwloadsim --concurrency=10 -ul username/{password}@//host/db --period=20 netthroughput.rwl

RWP*Load Simulator Release 3.0.2.20 Development on Mon, 19 Sep 2022 08:44:52 UTC
Connected default database to:
Oracle Database 21c Enterprise Edition Release 21.0.0.0.0 - Production
Connecting sessions
All threads connected
Throughput test now running 20 s
Throughput estimate 1.574 GB/s logical, 1.574 GB/s physical
```
All are documented using ```rwlman ociping``` ```rwlman connping``` 
or ```rwlman nettest```.

### Stand alone executables

The three utilities are distributed as completely stand alone
executables in the file generated-linux-x86_64-bin-3.0.3.tgz.
It only contains the three files, and they can be used without a complete installation
of rwloadsim, as long as there is an Oracle client environment that can be an ordinary
installation or an Instant Client installation.
The version must be 19 or later, and you must have LD_LIBRARY_PATH include
the directory with libclntsh.so.
In an ORACLE_HOME based installation, this is $ORACLE_HOME/lib,
with Instant Client it is the top directory of the installation.

After download, simply execute
```
tar -zxvf generated-linux-x86_64-bin-3.0.3.tgz
```
and possibly move the executables to one of the directories in your PATH.
To get help for either, call it with the -h option.
A sample call of ociping is:
```
ociping -l username/{password}@//hostname/service --period=10

RWP*OCIPing Release 3.0.2.2 Production on Wed, 06 Jul 2022 11:12:13 UTC
Connected default database to:
Oracle Database 19c EE High Perf Release 19.0.0.0.0 - Production
0.564 0.0
0.610 1.0
0.736 2.0
0.512 3.0
0.707 4.0
0.668 5.0
0.494 6.0
0.498 7.0
0.514 8.0
0.669 9.0
ociping mean=0.597 stddev=0.088
```
which shows the Oracle Net roundtrip time every 1s for a total of 10s, and then finishes
by showing the average and standard deviation.

## Navigation
* [index.md](index.md#rwpload-simulator-users-guide) Table of contents
* [YOUROWNWL.md](YOUROWNWL.md) Previous topic: Creating your own workload
* [MISCUTIL.md](MISCUTIL.md) Next topic: Miscellaneous utilities and include files
