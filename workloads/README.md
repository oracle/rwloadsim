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

## oltp - A general oltp-style workload

See [OLTP.md](OLTP.md) for details
