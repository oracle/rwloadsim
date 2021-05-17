# Introduction to the RWP\*Load Simulator

The RWP*Load Simulator is a tool developed by the Real World Performance group at Oracle Corporation.
While it on one side nicely fills the somewhat void space between the Oracle database,
Linux scripting, and programming in e.g. C or Java,
it also bridges a bit of the way into complex benchmarking tools.

If you ever had a need to do any of these:

* Write scripts for Linux (bash, awk, sed) that integrates easily with the Oracle database
* Simulate workloads while experimenting with database or application side parameters
* Experiment with different connection methods or different sizes of session pools
* Exercise limits of your environment; find where the "hockey stick" curve bends
* Automatically create html reports with graphs showing scaling, performance, etc
* Get statistics about application or database performance to embed in reports

and you found the standard sqlplus tool to be too limited and found that writing
a full application in e.g. Java, C++ or Python to be too complex,
you are likely to find rwloadsim to suit you well.

You will find a [*Users Guide* here](index.md#rwpload-simulator-users-guide) 
and a *Reference manual* is
available after installation using ```rwlman``` and online at [refman/README.md](refman/README.md).

## Small examples

As a very small example, this code will display rows from the EMP table
that you probably have used before.
You need one file that has database credentials (that need to be correct), called rwltest.rwl:
```
# This is used for testing - it should point to a valid schema
database rwltest username "rwltest" password "{password}" 
  # connect "//host/service:dedicated" 
  default;
```
If the following then is in a file called emp.rwl
```
# Include the database
$include:"rwltest.rwl"

# and some variables
integer empno, deptno:=10, numemps:=0; $useroption:deptno
string ename;

# and a sql statement:
sql selemps
  select empno, ename from emp where deptno=:1;
  define 1 empno, 2 ename; # As it is a query, define the select list elements
  bind 1 deptno; # Bind the single placeholder to a variable
  array 10; # Set an array size
end;

for selemps loop # Execute a cursor loop
  printline empno, ename; # print something to stdout
  numemps := numemps + 1; # count the number of rows
end loop;

if numemps=0 then # If there were no rows, print a message
  printline "No employees in department", deptno;
end if;
```
You can execute ```rwloadsim --deptno=20 emp.rwl``` and you will get a list of employees in department 20.

Another example (with many details left out) of a simulation is:
```
# Database under test, use a session pool sized between 2 and 5
database testdb username ... ... sessionpool 2..5;
# And a similar one for awr generation
database testsystem username "system" ... ... sessionpool 1;

# Declare procedures that implement three simulated business functions:
# They would each contain sql statements and some procedural logic
procedure make_order() ... ... end;
procedure search_product() ... ... end;
procedure ship_order() ... ... end;
# Pick either procedure randomly with some percentage probability
random procedure array simulate_business
( make_order 25, seach_product 55, ship_order 20);

# Run an actual simulation for 300 seconds
run
  # Start 30 threads doing the business simulation
  threads 30 at testdb 
    for
      every erlang2(0.2) # simulate 5 per second arrival rate
      stop 300 # finish after 300 seconds
    loop
      simulate_business(); # Randomly execute some business function
    end loop;
  end threads;
  # Start 1 thread doing awr
  threads 1 at testsystem
    integer begsnap; # Variable to save initial snapshot id
    wait 5; begsnap := beginawr();
    wait 290; endawr(begsnap);
  end;
end;
```
If you run something like this using rwloadsim, the following will happen:

* A session pool with up to five connections to the database will be created for the user doing the simulated business transactions.
* A separate session pool with just one connection will be created to use for awr generation.
* Three different procedures that implement the actual simulation of different business transactions are declared in addition to a mix of probabilities of executing each.
* An actual simulation will run for 300 seconds with 30 worker threads.
* With a simulated arrival rate of 5 per second (in each thread) a randomly chosen business transaction will be executed.
* When a simulated business transaction starts, it will first get a session from the pool and release it as soon as it has completed. So while each worker process waits until executing something next time, it will hold no session.
* Another single worker thread will execute routines (not shown here) to respectively create an initial awr snapshot and a terminating one which may also create an actual awr report.

The RWP*Load Simulator comes complete with a users guide that you can read a bit further down,
reference documentation that is available after install by typing ```rwlman```
or online at [refman/README.md](refman/README.md),
a set of simple demos to get you started (including one like the example above),
a few scripts to measure Oracle Net performance,
and a complete oltp workload that is ready to put your Oracle database under test.
The latter is vaguely similar to Swingbench.

It is important to understand that rwloadsim is not a general purpose application programming environment; it is a scripting and workload simulation tool.
If you attempt using it beyond its design goals, you will quickly observe limitations.
As just one example, there is a complete lack of a graphical interface, and the only reason you can get html pages with graphics out of it is that you can write code that generates html and code that calls gnuplot.

You should typically start with a binary distribution (found at Github releases), but you can also build it from sources or just look the sources to get under the hood.
It is written in C with use of flex and bison.
It is strongly recommended that you also have gnuplot and that you have a place to put html files such that you can view them from a browser.

## Navigation
* [index.md](index.md#rwpload-simulator-users-guide) Table of contents
* [WHATISIT.md](WHATISIT.md) Previous topic: What is the RWP*Load Simulator
* [INSTALL.md](INSTALL.md) Next topic: Install the software from binary distribution and create the repository
