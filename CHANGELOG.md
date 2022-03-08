# RWP\*Load Simulator Release Notes

## 3.0.0

* Implicit bind and define for much simplified scripting
* fprintf for smarter output

## 2.3.6

* Allow connect re-attempts during initial database creation
* Allow database credentails u/p@c as one string (username)
* Add a break statement to break out of loops
* Various bug fixes
* Various improvemets in oltp workload
* Various man page and other documentation improvements
* Started OS X port, still in BETA!
* Add oltpplot options to augment graphs with timestamp information
* Not released, becomes 3.0.0 release

## 2.3.5

* rwlrun table has extra columns for aux use nattr[123], sattr[123]
* Streamlined oltp workload and its documentation
* Reorganized some reference manual pages
* Add -W -K options to oltpcore
* The sql or pl/sql text can alternatively be a concatenation
* Add oltpplus command to call sqlplus as various users
* Add modify database commands to change cursor cache size and sessionpool parameters
* Add epochseconds variable returning the UNIX epoch
* Default database from -l option can be threads dedicated
* Improved scan of first file
* Various bug fixes

## 2.3.4

* Internal development relase only

## 2.3.3

* Add possibility to leak cursors to simulate bad application behavior
* Add (chain of) elseif to if statement
* Support bison >= 3.04 only; stop using deprecated bison features
* Provide yydebug using debug bit (-D) 0x4
* Various bug fixes

## 2.3.2

* include with < > always searches in publicdir, so -u option is only for command line files
* Add user provided connection class for drcp and session pool
* Add connectionpool (using OCIConnectionPool)
* Allow use of "loop" keyword with "while"
* The serverrelease function accepts the keyword default or results
* Many updates to documentation
* Add rwlman references pages to homepage on github
* Various bugfixes

## 2.3.1

* Various improvements to docs and rwlman pages
* Banner shows UTC time by default (as time in repository is also UTC) 
* Rename doc directory to docs and make it available as a github page
* Few associated modifications to files in the docs directory
* Minor bug fixes
* Released with Production label

## 2.3.0

Released publicly at github; labeled Limited Production

* Smarter escape handing in strings
* Minor changes to oltp workload scripts
* Lots of documentation improvement
* Hardening after parfait and fortify
* Add exit statement
* Add oltp workload
* Fix bug with reconnect database in threads
* Move directories rwl/* one level up. This makes --publicsearch incompatible with previous distribution

## 2.2.4

* Add regexextract
* Allow doubles being input in exponential notation
* Allow string length to be immediate_expression
* Bug with dynamic SQL in threads fixed; tests added
* Warnings about uniform and comparison when double is taken as integer
* New syntax for control loop (old still supported, but not documented)
* Remove all sharding code that wasn't working anyway
* Correct $longoption:publicsearch 
* Allow concatenation as procedure/function arguments
* Fix wrong casts from ub4 to ub8
* Replace strcpy+strcat with snprintf to remove overrun risk
* Improve some diagnostics for bad input
* Remove legacy in various places and lots of #ifdef NEVER
* Various minor bug fixes
* Add tests for clob inside pl/sql
* Major changes to documentation

