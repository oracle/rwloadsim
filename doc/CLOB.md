## Using LOB data 
The RWP\*Load Simulator has support for reading and writing
complete CLOB from/to 
a database.
You can declare variables of type clob which can be used for bind or 
define of SQL statements, and which can be used with writelob and 
readlob statements.
A clob variable is handled like an OCILobLocator.
The writelob statement takes an arbitrary expression (as a string) and 
writes it to the CLOB, and the readlob statement reads a CLOB from the 
database into a string variable.
At present, only complete CLOB's can be written or read; there is no 
support for piece-wise reading/writing and no support for NCLOB or BLOB.

A clob variable is initialized as empty by setting the 
OCI_ATTR_LOBEMPTY attribute.
When writing using writelob, the existing contents of the CLOB will be 
overwritten with the new data and its size will be the length of the 
string.

The following shows an example of a procedure that inserts a clob into 
a table.
```
string(1000000) lobtext := "this could be up to 1MB long";

procedure inslob()
is
  clob cl1; # This effectively becomes like an OCILobLocator
  integer id;

  # Insert a row with an empty lob
  sql ins insert into hasclob(id,cl1)
          values (rwlseq.nextval, empty_clob())
          returning id into :1;
    bindout 1 id;
  end;

  # Select it into the lob locator
  sql sel select cl1
          from hasclob where id=:1;
    define 1 cl1;
    bind 1 id;
  end;

  ins;
  sel;
  # write the lob and commit
  writelob cl1,lobtext;
  commit;
end;
```

* [RANPROC.md](RANPROC.md) Previous topic: Randomly executing some procedure
* [REGEX.md](REGEX.md) Next topic: Dealing with regular expression search and substitute
