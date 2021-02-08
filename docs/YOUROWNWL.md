## Creatig your own workload

If your goal is to create your own workload rather than using the oltp workload
you should start considering which business processes you want to simulate
and which SQL statements are used for each.
Rwloadsim can be programmed to execute any SQL statement and your simulation
is likely to at least consist of a mix of queries and dml.
An important aspect is the random nature of a simulation, where rwloadsim
has several ways to generate random values for both integers, doubles and
strings.

For the number types, you can use the function uniform to generate uniformly
distributed numbers or erlang, erlang2, erlangk to generate positive numbers
with a specified average; a suggested description is the wikipedia article
on the Erlang family of continuous probability distributions.

To create random strings, you can include the ovid2.rwl file, which has two
public functions that create respectively a string consisting of a given
number of words or a string of approximately some length.
See the rwlman page on ovid2 for details.

The next step in your own workload simulation is to create rwloadsim
procedures that implement your business functions; each procedure
should implement one business function.
On top of these, create a random procedure array that executes
your procedures with the probability required.

The core of your rwloadsim program will then be a run command that
starts a number of threads executing a randomly chosen procedure 
at a certain rate using a control loop.
When a procedure (that has SQL or has the statistics attribute) is
started, it will ensure a database session exist, which in the common
case of a session pool will mean acquiring a session from the pool.
Upon exit from the procedure, the session is returned back to the pool.

Using the rwloadsim repository and the -s option to rwloadsim,
statistics about execution will be gathered.
This can subsequently be used to create reports including graphs
by the help of gnuplot.

The [complete example](COMPLEXAMPLE.md) is created based on
exactly the approach, and is therefore good as a starting point
for you own workload.

The [provied oltp workload](../workloads/OLTP.md) is an example of a workload that
uses many features of rwloadsim in combination with shell scripts.
If you want to understand this in details, it is recommended to start with the
core shell script, oltpcore available in the bin directory.


## Navigation
* [index.md](index.md#rwpload-simulator-users-guide) Table of contents
* [COMPLEXAMPLE.md](COMPLEXAMPLE.md) Previous topic: A complete example
* [ORACLENET.md](ORACLENET.md) Next topic: Database "ping" and throughput scripts
