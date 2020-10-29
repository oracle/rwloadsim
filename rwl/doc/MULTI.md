## Multi-process execution 
In normal cases, in particular on small to medium sized hardware, only 
one simulation will run at a time, that is only one rwloadsim process.
But for large hardware configurations, you may want to have multiple 
(identical or different) simulations running concurrently.
As an example, consider a shell script doing: 
```
procs=10; p=1;
while test $p -le $procs
do
  rwloadsim -sss -k test1 -K "comment to test1" ... &
  p=`expr $i + p`
done
wait
```
which will start 10 rwloadsim processes in the background and wait for 
these to finish.
This will all work as expected, however the 10 executions will be 
individual, and their start times of actual simulations will not be 
coordinated.
Also, for the purpose of statistics gathering, the 10 rwloadsim 
executions will be individual, and results will be saved with 10 
different runnumbers. 

Rwloadsim has been designed to allow a multi-process simulation to 
behave as one.
This is done as a two-step process; the first step does little more 
than get a sequence number from the repository, which will become the 
runnumber, and the second step (which is the real simulation) uses that 
sequence number and it also attempts making sure control loops in all 
threads in each start at (approximately) the same time.
This is controlled via the -P and -M/-R options.

The -P option tells rwloadsim to prepare a multi-process run, which it 
does by writing a value that contains the runnumber and clock start 
time information to a file.
The -R option reads the contents of the file such that multiple 
individual processes coordinate runnumber and start time.
The -M option needs the contents of the file created via the -P option 
but does otherwise behave like -M.
You can use the option that best suits your scripting.
In order to do a multi-process run, you need to change the shell script 
slightly: 
```
procs=10; i=1;
rwloadsim -P preparefile.txt -k test1 -K "comment to test1" resultsdb.rwl 

while test $i -le $procs
do
  rwloadsim -R preparefile.txt -sss ... &
  i=`expr $i + 1`
done
wait
```
Alternatively using the -M option, your shell script may look like 
this: 
```
procs=10; i=1;
rwloadsim -P Moption.txt -k test1 -K "comment to test1" resultsdb.rwl
Moption=`cat Moption.txt` 

while test $i -le $procs
do
  rwloadsim -M $Moption -sss ... &
  i=`expr $i + 1`
done
wait
```
The first execution of rwloadsim should only have a single rwl input 
file, namely one that contains a database declaration for the 
repository database.
(If other files are given as input, they will be 
executed, but you are advised against this.) 
All subsequent executions of rwloadsim will get the runnumber and their 
control loop start time from the -R or -M option produced be the first 
run.
When these finish, they will insert rows into the results tables (per 
the -s option), and these rows will have the process id stored in the 
procno column rather than the default 0.
Subsequent queries against the results tables can use aggregations to 
aggregate results, such that all executions are considered as one 
single run.

When installing rwloadsim, there will be aggregation views created 
named runres_a, histogram_a and persec_a, that do not have the procno 
column, but instead have a pcount column being the count of processes.
If you prefer to control the procno value rather than having it as the 
process id, the -p option can be used. 

In multi-process runs, you will often want a later control block start 
time than then default of 5s after process start; it should not only 
cover the ramp-up of threads and session pools in individual processes, 
but should also cover the ramp-up of the multiple processes by the 
shell.
You may also need to take time into account taken between the rwloadsim 
prepare call (with the -P option) and the actual start time of the 
processes in the background with the -M/-R option.
In multi-process runs, the complete ramp-up time is provided via the -c 
option to the prepare call.
If you e.g. want 15 seconds total ramp-up time, use a call like: 
```
rwloadsim -c 15 -P preparefile.txt -q resultsdb.rwl 
```
The generated value in preparefile.txt will ensure all control loops in 
threads in all rwloadsim processes start at (approximately) 15s after 
the prepare call.
As with single-process execution, if the clock start time is passed 
when a thread actually starts a control loop, start will be delayed and 
immediate.
If too long time has passes until a process is started in the 
background, a warning about a negative clock start time is shown.
An implication of this is that the -P/-M/-R options should only be used 
in scripts and not when using rwloadsim interactively; if there is a 
(too) long time between the call to rwloadsim with the -P option, and 
the calls with the -M/-R option, timing will not be as expected.
Also, although actually possible, you should not have any real runs in 
the input files to the call with -P; only a declaration of the results 
database is needed.

The actual contents of the file created by run with the -P option is a 
short text string in the format NNN:SSSSSSSS.MMM,
where NNN is the runnumber, SSSSSSSS.MMM is a double number representing
the number of seconds (with millisecond resolution) since an epoch,
which will correspond to the 
control loop start time in the threads of all rwloadsim processes using 
the same R/M option.
This interpretation may change in the future, so it should not be 
relied upon, however the text string output to the -P file argument is 
guaranteed to have no white-space.

There is no semantic difference between using the -R and the -M options 
and you can use the one that fits your scripting model best.

## Using multiple hosts 
The option pair -P followed by -R or -M is used to make multiple 
processes have a common start time for all control loops.
As each of these processes are individual and as there is no inter 
process communication between them, you can just as well arrange (e.g. 
via ssh) that these processes actually execute on different hosts.
Such a configuration can e.g. be used if there is a limitation to how 
much can be executed from a single client system. 

For this to work well, you need to ensure that the timestamp on the 
multiple hosts are in sync, e.g. by using an NTP server.
The -P option that prepares a multi-process run does little more than 
calculating the timestamp at which the individual processes will start; 
hence an offset in time synchronization between multiple hosts, will 
directly impact the control loop start time. 

The -c option value used when preparing such a multi-host, 
multi-process run should take any overhead of ssh into account. 

