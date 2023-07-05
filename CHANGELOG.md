# RWP\*Load Simulator Release Notes

## 3.1.0

* Bug fixes
* $pre31fileassign:off is now default
* Ociping enhanced to create graphs of many executions

## 3.0.6

* Bug fixes
* $pre31fileassign:warn is now default
* Allow bindout in embedded and immediate sql
* Added an activity burst in oltp workload
* Save CPU using faster code to convert integer/double to string
* Add normalrandom function returning normal distributed random numbers
* Various improvements for connectionpool
* Double values are assigned to integer using trunc
* Add statisticsonly attribue
* This will be the last 3.0 release

## 3.0.5

* Bug fixes
* Rename awreport to awrreport
* Improve awrdump messages

## 3.0.4

* Bug fixes
* Correct handling of data types in expression evaluation
* Variables of type integer, double, string can be made shared among all threads
* The oltp workload has new features to allow it to be used for live demonstration
* An oltp workload run can be set to gradually increase the arrival rate
* $queueeverytiming:on directive to include emulated queue time
* Updated awreport and new awrdump utilities

## 3.0.3

* Improve output in connping/ociping
* Directive to not use runtime load balancing in session pools
* Various bug fixes
* Various doc/help improvements
* oltp: Save and report buffer cache/shared pool size
* oltp: Output details about aw\_cols size and access
* oltp: Option to emulate batch with no wait time
* New more secure syntax for file/pipe open
* Public utility netthroughput.rwl replaces nettest.rwl
* Add case, switch, when as future keywords

## 3.0.2

* Generate executables with rwl scripts included
* Keyword username can be omitted
* Various bug fixes
* The defined function returns false if e.g. a database hasn't connected
* -X, -Y, etc also impact declared default database
* Now building on Oracle Linux 8

## 3.0.1

* Implicit bind/define and printf are now Production
* Immediate SQL execution
* Embedded SQL
* Various small updates and bugfixes
* SQL scan is now initiated by _any_ SQL keyword; these can therefore not be used as identifiers.
* Test database is now multitenant and version 21.3
* If there is a default database, a session is availble in main
* User options and switches with hyphen when variable has underscore
* Flush a sql with dml array without commit
* Use external authentication if neither username nor password is set
* There is a system statement similar to the system function
* Improved error messages at syntax errors
* Authentication such as sysdba is possible

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

