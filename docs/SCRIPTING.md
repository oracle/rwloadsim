## Using RWP\*Load Simulator for scripting

### The need for scripts

The ability to create _scripts_ that are sequences of 
calls to command line tools with some execution logic is very well
known in many computing environments.
In the simple case, a script may just have the purpose of executing
a long list of commands, that otherwise would have to be tediosly typed.
In more complex cases, the script may use various types of procedural 
logic such as loops, if/then/else, etc.
In Linux, very well known scripting languages are bash (Bourne Again SHell)
and perl, and for the Oracle database, PL/SQL is in some ways a bit 
like a scripting language, although it is executed in the database server.

Many programming languages that also serve as scripting languages have
the ability to interact with the Oracle database.
One example of this is python that via the python-oracledb interface
can combine SQL with procedural logic.
To use this, however, you need to learn the python programming language
and the ability to call SQL is an add on rather than an integrated part
of the language.

The RWP\*Load Simulator includes a programming language that is modelled
somewhat over the bash language with addition of variable declarations
somewhat like C.
Additionally, it executes SQL (and PL/SQL) in a way that resembles 
PL/SQL.
As a result, the rwl programming language fully integrates SQL with
typical scripting environments, and it therefore fills the
void between the Oracle database and simple client side
programming and scripting.

The result is that rwloadsim is a quite powerfull scripting language,
that exactly makes it useful for integration between the Oracle database
and the classic Linux/UNIX environment.

### Features in rwloadsim for scripting

As the primary goal of using rwloadsim as a scripting language is
to combine SQL or PL/SQL execution with procedural logic, a database
connection with always be required. 
The most appropriate to do this is to use the -l option to rwloadsim
which will establish a default database, implying all SQL and PL/SQL
executed will be using that particular database.
For details on this, see ```rwlman rwloadsim```.
This is a bit like starting sqlplus with database credentials on
the command line and then executing sql scripts using the @ command
in sqlplus.
In the example below, there is an initial
```
$if not defined(default database) $then
  writeline stderr, "Missing or incorrect -l option";
  exit 1;
$endif
```
which should always be present in rwloadsim scripts using the
-l option to provide database credentials. 
It ensures no actual script execution takes place if the user
provided credentials are missing or incorrect, e.g. due to 
an incorrect password.

Another feature that is very relevant for scripting is the ability
for rwloadsim to take either positional arguments or to make 
declared variables settable on the command line using -- followed
by the name of the variable.
The latter is described in detail in ```rwlman useroption```.

Finally, the implicit mathing of place holder and/or select list elements
in SQL or PL/SQL to variables of the same name is very useful when
using rwloadsim as a scripting language. 
The ```rwlman sqlexecution``` documentation explains this in details.

### Example use of rwloadsim for scripting

A very typical use of rwloadsim for scripting is to 
call some SQL with input from the command line
producing output written to a file.
The sample case shown here produces a text version of an awr
report with dbid, instance and begin/end snapshot as parameters.

```
# simple awr generation

# Did the user give us a database via -l?
$if not defined(default database) $then
  writeline stderr, "Missing or incorrect -l option";
  exit 1;
$endif

# declare some variables
integer dbid, inst;
integer bsnap, esnap;
# make them settable on command line
$useroption:dbid
$useroption:inst
$useroption:bsnap
$useroption:esnap

# and some more
string(1000) ofile, output;
file yt;
$useroption:ofile

# check values are provided
if dbid is null or inst is null
   or bsnap is null or esnap is null
then
  writeline stderr, "All of --dbid, --inst, --bsnap, --esnap must be provided";
  exit 2;
end if;

# If the user didn't give an output file name, set one
if ofile = "" then
  sprintf ofile, "%d_%d_%d.txt", dbid, bsnap, esnap;
end if;
yt >= ofile; # open the file for writing

# Execute the query
# Note that the name of the select list element (output)
# and of the placeholders are matched to variable names
for 
  select output 
  from table(dbms_workload_repository.awr_report_text
  (:dbid,:inst,:bsnap,:esnap))
  /
loop
  writeline yt, output;
end loop;

yt := null; # close the file
```
If the above is stored in a file called simpleawr.rwl,
a typical call of this is:
```
rwloadsim -l username/{password}@//host/service --dbid=123456789 --inst=1 --bsnap=401 --esnab=402 simplearw.rwl
```
Note that the above script is quite simple and it requires the
user to already know appropriate values for dbid, etc. which
is not normally the case.
For a complete implementation of awr generation, see the
[awrreport.rwl](../public/awrreport.rwl) script in the public directory.


## Navigation
* [index.md](index.md#rwpload-simulator-users-guide) Table of contents
* [WORKING.md](WORKING.md) Previous topic: Working with rwloadsim using a few examples
* [SCALAR.md](SCALAR.md) Next topic: Declarations of scalars such as integers and doubles
