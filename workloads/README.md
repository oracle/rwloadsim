## Sample workloads for RWP\*Load Simulator

This directory contains configurations files for various sample
workloads.
Each workload has executable shell scripts in the bin directory
and has the rwl (and typically sql) scripts for the workload in 
a workload specific directory; typically named after the workload.
Additionally, there are rwlman pages in man/man1rwl.
All of these should be considered read-only.

Files needed to be modified by the user are in this directory with
names beginning with the workload names.

The following lists available workloads

## Measuring database connection performance

There are two rwl scripts included in the public directory that
can be used to estimate the performance of your database network
connections.

 * connping.rwl works similarly to ping showing actual database network times for both estiablishing connections and using an existing connection.
 * nettest.rwl does a similar ping test and can also be used to estimate the throughput from the database to the client.

Further documentation is available using ```rwlman connping``` respectively ```rwlman nettest```.

## oltp - A general oltp-style workload

See [OLTP.md](OLTP.md) for details
