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
The third script, nettest.rwl, does a similar measurement of OCIPing rates
and additionally estimates the total available throughput from the database 
to the client.
Some lines from a sample output are:
```
Performing ping test for 30 s
connect mean 288.61 ms, stddev 303.95
ociping mean 0.09 ms, stddev 0.02
dualping mean 0.13ms, stddev 0.02

Actual throughput test now running 30 s
Throughput estimate 2.65 GB/s
```
All are documented using ```rwlman ociping``` ```rwlman connping``` 
or ```rwlman nettest```.

### Stand alone executables

The two utilities ociping, and connping, are distributed as completely stand alone
executables in the file generated-linux-x86_64-bin-3.0.2.tgz.
It only contains the two files, and they can be used without a complete installation
of rwloadsim, as long as there is an Oracle client environment that can be an ordinary
installation or an Instant Client installation.
The version must be 19 or later.

After download, simply execute
```
tar -zxvf generated-linux-x86_64-bin-3.0.2.tgz
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
