rem
rem used in some workloads
rem
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
