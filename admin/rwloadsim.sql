-- create the RWP*Load Simulator repository
--
-- Copyright (c) 2020 Oracle Corportaion
-- Licensed under the Universal Permissive License v 1.0
-- as shown at https://oss.oracle.com/licenses/upl/
--
-- Changes
-- 
-- NAME     DATE         COMMENTS
-- bengsig  03-dec-2020  Include rwlash
-- bengsig  09-sep-2020  Remove legacy
-- bengsig  17-jun-2020  Add dbversion column to rwlrun
-- bengsig  12-sep-2019  Add oerstats
-- bengsig  28-may-2019  Make persec IOT to save space
-- bengsig  01-oct-2018  Creation

create sequence runnumber_seq;

create table rwlrun
( runnumber number not null
, key varchar2(30)
, komment varchar2(100) -- must match RWL_MAX_KOMMENT
, rdate date not null
, hostname varchar2(64)
, dbname varchar2(256) -- not filled by rwloadsim itself
, dbversion varchar2(20) -- not filled by rwloadsim itself
, constraint rwlrun_pk primary key(runnumber)
)
/
create table runres
( runnumber number not null
, procno    number not null
, vname     varchar2(30) not null
, wtime     number(*,6)
, etime     number(*,6)
, ecount    number
, tcount    number
, constraint runres_pk primary key(runnumber, procno, vname)
)
/

create table histogram
( runnumber number not null
, procno    number not null
, vname     varchar2(30) not null
, buckno    number not null
, bucktim   number as (power(2.0,(buckno-19))) virtual
, bcount    number
, ttime     number (*,6) 
, constraint histogram_pk primary key(runnumber, procno, vname, buckno)
)
/

create table persec
( runnumber number not null
, procno    number not null
, vname     varchar2(30) not null
, second    number not null
, scount    number
, constraint persec_pk primary key(runnumber, procno, vname, second)
)
organization index
/

create table oerstats
( runnumber number not null
, procno    number not null
, oer       number not null
, second    number(*,6) not null
, oertxt    varchar2(70) -- match RWL_OERSTAT_MAX_BUF
, sname     varchar2(30) -- name of SQL
, oeseq     number not null
, oerinst   varchar2(16) -- match v$instance.instance_name
, constraint oerstats_pk primary key(runnumber, procno, oeseq)
)
/

-- The following tables are not being used directly 
-- by rwloadsim itself, but is used in a large number
-- of demonstration workloads
create table rwlcpu
( runnumber number not null
-- this table is used to save usr and sys 
-- CPU of the rwloadsim process itself
, procno number not null
, second number not null
, cliusr     number(*,6)
, clisys    number(*,6)
-- the following columns are for various purposes
, num1 number
, num2 number
, num3 number
, num4 number
, num5 number
, constraint rwlcpu_pk primary key(runnumber, procno, second)
)
/
create table sysres 
-- This table is used to store various data gathered 
-- every second (or other interval) by queries against
-- v$views or the like. You should run a query 
-- every so often (say once per second) and then insert
-- a row into this table that includes the runnumber
-- and the value returned by runseconds, plus some
-- result name and interesting values.  An example
-- is to query v$sys_time_model pick values
-- which could be inserted into val1, val2, etc
-- with resname e.g. TIMM
--
( runnumber number not null
, second number not null
, resname varchar2(10) not null
, constraint sysres_pk primary key(runnumber, resname, second)
, val1 number
, val2 number
, val3 number
, val4 number
, val5 number
, val6 number
, val7 number
, val8 number
, val9 number
)
/
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
