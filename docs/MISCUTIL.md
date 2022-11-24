## Miscellaneous utilities and include files

A number of small utilities and include files are available in the public directory.
For details, please see the appropriate rwlman page.

|Utility|Description|
|-------|-----------|
|ovid2|Generate a readable string of random Latin words|
|sqlid2file|Extracts the sql text of a provided sqlid from either gv$sql or awr_hist_sqltext and saves it in a file|
|sqlmonitor|Creates a sql monitor for a given sqlid from data available in the shared pool|
|sqlmonitorawr|Creates a sql monitor for a given sqlid from data available in the awr repository|
|awreport|List available awr repositories and create awr or ash reports|
|awrdump|Extract awr data as datapump dump file and potentially copy it to an OCI bucket|

The latter two are available as shell scripts in a full rwloadsim installation
and also distributed as stand alone executables.

## Navigation
* [index.md](index.md#rwpload-simulator-users-guide) Table of contents
* [ORACLENET.md](ORACLENET.md) Previous topic: Database "ping" and network throughput scripts
* [SAMPLEOLTP.md](SAMPLEOLTP.md) Next topic: The sample oltp workload
