# RWP\*Load Simulator Release Notes

## master

This branch is the current development branch that eventually will become 2.3.3
and it has these changes:

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

