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

Declare a database called testdeafult, that will have a connection 
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
To use it, you must explicitly name it using at testpool:
```
database testpool
  username "username"
  password "{password}"
  connect "//host/service:dedicated"
  sessionpool 1..5;
```
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

## Navigation
* [index.md](index.md#rwpload-simulator-users-guide) Table of contents
* [FILE.md](FILE.md) Previous topic: Use of files and pipe-lines
* [ATCLAUSE.md](ATCLAUSE.md) Next topic: Using the at clause to choose a database
