## Queuing system simulations 
One of the purposes of rwloadsim is to run simulation of On Line Transaction Processing 
applications.  
It is often assumed that such applications have random "arrival rates" of in-coming transactions
such as users using a web-site or making telephone calls.
Using 
```
every erlang2(1/x)
```
in a control loop simulates a queuing system 
with an Erlang distributed arrival rate of x per second.
Although rwloadsim does not actually have a queue, one will be 
simulated if you put the keyword "queue" in front of "every", or generally for all 
control loops if you supply the -Q option.
Without this, the "every" option of control loops calculates when the 
next loop should start based on the start of the current loop.
If the actual execution time of the current loop (including acquiring 
session from a session pool) is longer than this time, the next loop 
will simply start immediately as the calculated start time is passed.

If you use the -Q option or put "queue" in front of "every", the 
expected execution start time is calculated with respect to the initial 
common start time.

As a simple example, if you specify every 1, each execution will start 
exactly 1 second after the start of the previous without -Q, but if an 
execution is longer than 1 second, the next (and subsequently all 
following) executions will be delayed.
With the -Q option or "queue" keyword, the start time of execution N in 
the loop will be N (after the common start time), which may imply a 
number of consecutive executions will follow immediately after each 
other in the case where the first few take longer than 1s.

Using erlang2(1/x) when 1/x is much larger than the typical time per 
execution, there is little difference with or without the -Q option or using the "queue" keyword, 
but if 1/x is close to or even smaller than the typical time per 
execution, the total workload using -Q will be higher than without -Q.
If you use the -Q option, you can revert to the traditional behavior 
without backlog for an individual control loop by using "noqueue" 
before "every".

Note that some future version of rwloadsim may have -Q as the default.

## Navigation
* [index.md](index.md#rwpload-simulator-users-guide) Table of contents
* [MULTI.md](MULTI.md) Previous topic: Running multiple processes as one simulation
