## Utilities for database "ping" and network thoughput

There are two rwloadsim utility scripts included in the public directory that can
be used to measure Oracle Net (often referred to as SQL\*Net) performance.

One, connping.rwl, produces an output similar to ping, although three
values are included per output line:
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
The other script, nettest.rwl, does a similar measurement of OCIPing rates
and additionally esitmates the total available throughput from the database 
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
Both are documented using ```rwlman connping``` and ```rwlman nettest```.

## Navigation
* [index.md](index.md#rwpload-simulator-users-guide) Table of contents
* [YOUROWNWL.md](YOUROWNWL.md) Previous topic: Creating your own workload
* [MISCUTIL.md](MISCUTIL.md) Next topic: Miscellaneous utilities and include files
