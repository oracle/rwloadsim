# RWP\*Load Simulator Release Notes

## master

This should always be considered as a development branch.

## 2.3.0

Released publicly at github; labeled Limited Production

* Minor changes to oltp workload scripts
* Lots of documentation improvement
* Hardening after parfait and fortify
* Add exit statement
* Add oltp workload
* Fix bug with reconnect database in threads
* Move directories rwl/* one level up. This makes --publicsearch incompatible with previous distribution.

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

