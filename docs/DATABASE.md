## Database declaration
A named database declaration tells rwloadsim a database and a schema to 
connect to (username, password and connect string) and tells how the 
connection is done (e.g. dedicated or using a session pool).
You can declare as many databases as needed, and you can mark one 
database as being the "default" database, which is used when no 
explicit database is named.
You can similarly mark one database as the "results" database, which is 
used by rwloadsim to store run time results.

The following lists some examples with explanation.

Declare a database called testdefault, that will have a connection 
established in the main threads and all threads, and
which will be used by default when no at database is used:
```
database testdefault
  username "username"
  password "{password}"
  connect "//host/service:dedicated"
  dedicated 
  default;
```
Declare a database called testpool using a session pool with between 1 
and 5 sessions.
A session will be acquired as needed.
This type of pool is often referred to as a "stateless connection pool" because
no database state can be kept when the connection is released back to the pool.
In Java/JDBC terms, this much like UCP or Universal Connection Pool.
To use it, you must explicitly name it using at testpool:
```
database testpool
  username "username/{password}@//host/service:dedicated"
  sessionpool 1..5;
```
This example also shows how you can provide all three parts
as the username 
by separating them by respectively / and @ similarly to how sqlplus does it.

Declare a database called testthronly, that will have a connection 
established in the main threads only if actually needed, but
persistently in all threads:
```
database testthronly
  username "username"
  password "{password}"
  connect "//host/service:dedicated"
  threads dedicated;
```
Declare a database called testdrcp, that will have a connection 
established as a drcp connection whenever a procedure needs a database 
session:
```
database testdrcp
  username "username"
  password "{password}"
  connect "//host/service:pooled"
  drcp;
```
Declare a database called testpooldrcp, it will be a session pool with 
variable size between 0 and 5 in your rwloadsim program, and it will 
further be connected to a pooled data source such as PRCP or DRCP:
```
database testpooldrcp
  username "username"
  password "{password}"
  connect "//host/service:pooled"
  sessionpool 0..5;
```
Note that even when you declare multiple database, there is no support for
two-phase-commit.
You should not expect two-phase-commit in a later release.

## Password security
For security reasons, you do not need to include actual database passwords
in your file with database declaration.
If you omit the password clause, rwloadsim will prompt you for it.
If you do include it, you must always ensure the files containing passwords
are not accessible to anybody else.

## Connection pools
In addition to session pooling (often referred to as 
"stateless connection pool"), rwloadsim also supports connection pools
that are implemented using OCIConnectionPool.
A connection pool is in some ways similar to running shared server 
in the database, as the application side establishes a number of connections
to server processes in the database.
These server processes will automatically be _shared_ by multiple sessions.
Consider this example:
```
database cpool
  username "username" password "{password}"
  connect "//host/service"
  connectionpool 1..4;

database realdb
  username "username" password "{password}"
  connect connectionpool cpool
  dedicated default;

procedure dbwork() ... end ;
  
run
  threads 10
    dbwork();
  end threads;
end run;
```
The first database, cpool, is a connection pool with initially one
connection and one server process that can grow to a maximum of four;
this database cannot be used directly as it has no session associated with it.
The next database, realdb, uses the pool in stead of connecting directly 
to the database server.
Therefore the ten sessions that are created in the ten threads, will 
share those four processes when doing the actual database work.
Note that as with shared server, the memory used by the sessions
for cursors etc
will be allocated in the database shared memory rather than in
process memory.

## Modifying database settings
Certain settings of databases can be modified using a ```modify database``` statement. 
As an example, you can change the number of entries in a session pool database using a command like:
```
modify database testpool sessionpool 1..2;
```
which would set the range for sessions in the pool to between 1 and 2.
See ```rwlman databasestatement``` for details.
## Navigation
* [index.md](index.md#rwpload-simulator-users-guide) Table of contents
* [FILE.md](FILE.md) Previous topic: Use of files and pipe-lines
* [ATCLAUSE.md](ATCLAUSE.md) Next topic: Using the at clause to choose a database
