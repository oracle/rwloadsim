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

## Navigation
* [index.md](index.md#rwpload-simulator-users-guide) Table of contents
* [YOUROWNWL.md](YOUROWNWL.md) Previous topic: Creating your own workload
* [MISCUTIL.md](MISCUTIL.md) Next topic: Miscellaneous utilities and include files
