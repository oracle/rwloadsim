## Avoiding connection storms 
It is well known, that connection storms can cause severe trouble and 
rwloadsim has been created to avoid them if at all possible.
If you are using session pools, only specifying the maximum pool size
will make OCI create all the connections when the pool is created, i.e. 
when the database is declared.
If you specify both the minimum and 
maximum pool size, the minimum will be created when the database is 
declared, but the pool may suddenly increase to its maximum size if 
needed by your workload.
If you are using dedicated connections, rwloadsim will create one for 
each thread, and this will be done serially before the threads actually 
start running. 

The -c option (control loop start time) is important with respect to 
this.
Rwloadsim is created such that all control loops (typically one per 
thread) actually start working at (approximately) the same time, which 
will be some seconds after start of rwloadsim.
This time is what the -c option specifies.
The default is (arbitrarily) chosen at 5s, which should allow 
moderately sized session pools and moderate counts of threads with 
dedicated connections to complete connection ramp up before actually 
starting.
If you have large session pools or large number of threads with 
dedicated connections, you are strongly advised to increase the control 
loop start time.
You can similarly decrease it if you have very low counts.
If the start time is not sufficient, you will both risk connection 
storms, and there is a risk that control loops will start too late.
See the description of the start, wait and every options to control 
loops. 

Particular care is needed if you are using multi process execution.

Note that all start times are approximate, and that they can vary as 
the Operating System isn't a real-time Operating System.
The actual implementation of the start times is via the 
clock_nanosleep() system call with a first argument of CLOCK_REALTIME 
and a second argument of TIMER_ABSTIME; see the notes of the 
clock_nanosleep(2) manual page. 

The control loop start time is saved in the results database as an 
ORACLE date in the rdate column of the rwlrun table; this is 
always in UTC timezone irrespective of your settings.

## Navigation
* [index.md](index.md) Table of contents
* [SAMPLEOLTP.md](SAMPLEOLTP.md) Previous topic: Description of the sample oltp workload
* [ERROR.md](ERROR.md) Next topic: Error handling during parse and execution
