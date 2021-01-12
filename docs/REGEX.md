## Regular expression search and substitute
The three statements, regex, regexsub, regexsubg that use regular 
expressions are closely built upon the standard C functions described 
in regex(3) and regex(7) using the extended regular expression syntax.
Therefore the implementation details of those apply to these statements 
with the result they are similar to "egrep" or "sed" with the -r 
option.  
### regex
The regex statement takes three or more arguments, the first is an 
extended regular expression, the second is a string that will be 
searched, and the subsequent are variables that will retrieve the 
first, second, etc occurrence within the string of the regular 
expression.  

As a small example:
```
integer a,b;

regex "[0-9]+", "ab12cd34ef56", a,b;

printline a,b;
```
will assign the values 12 and 34 respectively to the two variables and 
print them.
If only one variable is provided, the whole search string will be 
assigned to it if there is a match.
In either case, the variables will be null if there is no match.

This second code snippet shows how the regex statement can be used to 
extract two doubles from a text string:
```
string s := "text -84 more text 0.5";

double a,b;

regex "(-?)[0-9]+(\\.[0-9]*)?",s,a,b;

printline a*b;
```
When executed, it will output the value -42.00 being the product of the 
two numbers found in the text string.
Note that in a string that becomes the first argument to regex, you 
need to escape the backslash character to get the single backslash 
needed by the regular expression to make the "." be itself rather than 
the match any character symbol.
### regexsub regexsubg
The regexsub statement takes exactly four arguments, the first is a 
regular expression, the second is a search string, the third is a 
substitute string and the last is a string variable that will receive 
the search string with the first occurrence of the regular expression 
being substituted.
The regexsubg statement substitutes all occurrences of the regular 
expression.
You can parenthesize any part of the regular expression and use \1, \2, 
etc. to refer to them in the substitute string; note that the \ must be 
escaped by another \.
If the regular expression is not found and no replacement takes place, 
the string variable will be null.

When executed, this small example:
```
string res;

# replace all o by O
regexsubg "o", "hello world","O",res; 
printline res;

# reverse two words consisting of a-z
regexsub "([a-z]+) ([a-z]+)", "hello world", "\\2 \\1",res;
printline res;
```
will output these two lines:
```
hellO wOrld
world hello
```
If you have the following three files:

grep.rwl containing:
```
# A simple implementation of "egrep" using rwloadsim
$longoption:file-count=1 # Just this file
$longoption:quiet 

string(2048) line; # Holds an input line
integer found;     # just used to check for null

# read lines from stdin
for readline stdin, line loop
  # search for the regular expression in $1
  regex $1, line, found;
  # and print the line if found
  if found is not null then
    printline line;
  end if;
end loop;
```
sed.rwl containing:
```
# A simple implementation of "sed" using rwloadsim
$longoption:file-count=1 # Just this file
$longoption:quiet 

string(1024) line; # Holds an input line
string(1024) sub;  # Line after subsitute

# read lines from stdin
for readline stdin, line loop
  # search for regular expression and substitute
  regexsubg $1, line, $2, sub;
  if sub is not null then
    printline sub;
  end if;
end loop;
```
and hello.txt containing:
```
hello
world
again
```
You could do the following to substitute all 'l' with 'x' and print the 
line if at least one substitution took place:
```
$ rwloadsim sed.rwl l x < hello.txt
hexxo
worxd
```
The following would "grep" for the pattern "hello":
```
$ rwloadsim grep.rwl hello < hello.txt
hello
```
Note that in both cases, the inclusion of the $longoption:file-count=1 
directive implies rwloadsim will only read one input file and provide 
the rest of the arguments as the $ variables.
Similarly, the $longoption:quiet implies the usual rwloadsim banner is 
not printed.

## Navigation
* [index.md](index.md) Table of contents
* [SIMULATOR.md](SIMULATOR.md) Previous topic: Simulating workload using threads
* [RWLOADSIM.md](RWLOADSIM.md) Next topic: Calling the rwloadsim tool
