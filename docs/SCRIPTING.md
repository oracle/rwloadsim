## Using RWP\*Load Simulator for scripting

### The need for scripts

The ability to create _scripts_ that are sequences of 
calls to command line tools with some execution logic is very well
known in many computing environments.
In the simple case, a script may just have the purpose of executing
a long list of commands, that otherwise would have to be tediosly typed.
In more complex cases, the script may implement actual business logic.
In Linux, very well known scripting languages are bash (Bourne Again SHell)
and perl, and for the Oracle database, PL/SQL is in some ways a bit 
like a scripting language, although it is executed in the database server.

Many programming languages that also serve as scripting languages do have
the ability to interact with the Oracle database.
One example of this is python that via the python-oracledb interface
can combine SQL with procedure logic.
To use this, however, you need to learn the python programming language
and the ability to call SQL is an add on rather than an integrated part
of the language.

The RWP\*Load Simulator includes a programming language that is modelled
somewhat over the bash language with addition of variable declarations
somewhat like C.
Additionally, it executes SQL (and PL/SQL) in a way that resembles 
PL/SQL.
As a result, the rwl programming language fully integrates SQL with
typical scripting environments, and it therefore fills the somewhat
void between the Oracle database and simple client side
programming and scripting.

### Example use of rwloadsim for scripting

An example of how rwloadsim can be used for scripting is to
call some SQL with input as arguments from the command line
producing output written to either a file or to stdout.
The actual case is to produce a text version of an awr
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

# see what the user wants
if ofile != "" then
  yt >= ofile; # open the file for writing
end if;

# check values are provided
if dbid is null or inst is null
   or bsnap is null or esnap is null
then
  writeline stderr, "All of --dbid, --inst, --bsnap, --esnap must be provided";
  exit 2;
end if;

# Execute the query
# Note that the name of the select list element (output)
# and of the placeholders are matched to variable names
for 
  select output 
  from table(dbms_workload_repository.awr_report_text
  (:dbid,:inst,:bsnap,:esnap))
  /
loop
  if ofile != "" then
    writeline yt, output;
  else
    printline output;
  end if;
end loop;

if ofile != "" then
  yt := null; # close the file
end if;
```
Note that the above script is quite simple and it requires the
user to already know appropriate values for dbid, etc. which
is not normally the case.
For a complete implementation of awr generation, see the
awrreport.rwl script in the public directory.


## Navigation
* [index.md](index.md#rwpload-simulator-users-guide) Table of contents
* [WORKING.md](WORKING.md) Previous topic: Working with rwloadsim using a few examples
* [SCALAR.md](SCALAR.md) Next topic: Declarations of scalars such as integers and doubles
