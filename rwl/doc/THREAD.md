## Thread execution
A primary purpose of the RWP*Load Simulator lies in its name: to 
simulate database load.
Rwloadsim is multi-threaded and it can therefore have a number of 
threads doing actual database work, i.e. simulation of some business 
process and typically have some threads dealing with database 
connections as session pools.
The worker threads are handled directly via the rwl language using
the run command that initiates worker thread handling.
Each (set of 
indentical) threads are started by the threads command and the final 
end command finishes all threads.

A very simple example is:
```
procedure abc() ... end; 
run
  threads 10
    for stop 60 loop
      abc();
    end loop;
  end threads;
end run;
```
This will start ten worker threads, each having a control loop that, 
starting at (approximately) the same time, doing nothing but calling 
the procedure abc() in a busy loop and stop after 60s.
The threads command is somewhat similar to starting a background job in 
the shell using &, and the terminating end run is somewhat similar to 
the wait command in the shell.
Assuming the procedure abc() contains SQL and assuming a default 
database has been declared with a sessionpool, each call to abc() will 
acquire a session from the pool upon entry and release it upon exit.

There is no requirement to have a control loop in the threads, but the 
control loop is the mechanism designed to control the timing of each 
thread, including the frequency of execution.

The following examples show some more details around this:
```
procedure abc() ... end;
procedure def() ... end;
procedure xyz() ... end; 

random procedure array doit (abc 20, def 80);

run
  threads 10 at mydb
    for every erlang2(0.1) stop 300 loop
      doit();
    end;
  end;
  threads 1
    for start 10 count 2 loop xyz(); end;
  end; 
end;
```
Start 10 worker threads that will start start at (approximately) the 
same time, each will simulate a random arrival rate of 10 per second, 
in 20% of the cases will execute "abc", and 80% of the cases will 
execute "def", stop after 5 minutes.
Assuming both abc() and def() execute SQL, each execution of either will acquire and 
release sessions from the named database, mydb.
Start another single thread, that with a delay of 10 seconds will 
execute the procedure "xyz" twice.

Another example showing some other possibilities are:
```
integer exectime := 120;
integer onetwothree := 2; 

run
  threads 10
    for start threadnumber*0.1 every 1 stop exectime loop something(); end;
  end;
  threads onetwothree # start two threads that will execute three different things
    for count 10 loop one() end;
    for start 30 count 5 loop two() end;
    for start 50 count 1 loop three(); end;
  end;
  threads 1 at system # start 1 thread at a named database
    wait(10-runseconds);
    begawr();
    wait(exectime-runseconds-10);
    endawr();
  end;
end;
```
This example shows several useful features:

 * The first ten worker threads will ramp up in their start, as each 
control loop has a starttime which is 0.1s times the actual thread 
number.

 * The first ten threads will execute the procedure "something" once 
every second, and it will stop after 120s (the value of the exectime 
variable).
If it contains SQL, the procedure something() will acquire and release 
database sessions.

 * The next two threads will first execute "one" ten times, then 30s after the starttime execute "two" five times, and then 50s after the starttime execute "three" once.  Note that all start (and stop) times are relative to the initial starttime, i.e. the (approximately) common starttime for all threads.  
 * If any start time is passed, start will be immediate.  If - as an example - in this case each execution of "two" takes 3s, the total time to execute it ten times is 30s, which means the execution in the third thread statement of "three" will be delayed.  
 * The last single thread will be using the named, non-default database, 10s after the initial starttime the procedure "begawr()" will be executed and 10s before the finish of the ten first threads the procedure "endawr()" will be executed.  

The overall rwloadsim program continues when all threads have finished.
If you have more than one thread execution in your rwloadsim program, 
i.e. more than one run command, be aware that the common start time for 
control loops is not reset before the second or subsequent run command.

If a procedure is long-running, it may potentially finish after the 
stop time of a thread.
In such a case, the procedure will not be interrupted, so actual thread 
finish time may be after the stop time.

