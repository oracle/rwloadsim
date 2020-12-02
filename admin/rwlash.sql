-- create extra RWP*Load Simulator repository tables
-- 
-- Copyright (c) 2020 Oracle Corportaion
-- Licensed under the Universal Permissive License v 1.0
-- as shown at https://oss.oracle.com/licenses/upl/

-- History
-- bengsig  09-sep-2020 - File rename
-- bengsig         2019 - Creation

-- 
-- These tables are used in some workloads
-- 
create table rwlash
( runnumber number not null
, enum number not null
, ename varchar2(64)
, constraint rwlash_pk
  primary key(runnumber, enum)
)
/
create table ashdata
( runnumber number not null
, second number not null
, cpu number
, e1 number
, e2 number
, e3 number
, e4 number
, e5 number
, e6 number
, other number
, constraint ashdata_pk
  primary key(runnumber, second)
)
/
