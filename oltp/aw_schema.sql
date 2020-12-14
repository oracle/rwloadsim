rem
rem Copyright (c) 2020 Oracle Corporation
rem Licensed under the Universal Permissive License v 1.0
rem as shown at https://oss.oracle.com/licenses/upl/

rem
rem Owner  : bengsig
rem
rem NAME
rem   aw_schema.sql - RWL create Artificial Workload SCHEMA
rem
rem DESCRIPTON
rem   Creates database objects in the rwl_aw schema
rem
rem MODIFIED   (MM/DD/YY)
rem   bengsig   09/27/2020 - Modified for artificial workload
rem   bengsig   04/17/2020 - Modified for two schemas
rem   bengsig   09/18/2018 - Creation

define runschema1=&&1.
define runschema2=&&2.

create table aw_tok
( tokid number not null
, col1 number
, fill varchar2(50)
, constraint aw_tok_pk primary key(tokid)
)
/

create table aw_row
( tokid number not null
, rwnum number not null
, runid number not null
, val number(*)
, dat date not null
, fill varchar2(100)
, constraint aw_row_pk primary key(rwnum, runid)
)
/

create table aw_xtr
( tokid number not null
, rwnum number not null
, runid number not null
, val number(*)
, dat date not null
, fill varchar2(100)
, constraint aw_xtr_pk primary key(rwnum, runid)
)
/

create table aw_xin
( tokid number not null
, rwnum number not null
, runid number not null
, val number(*)
, dat date not null
, fill varchar2(100)
, constraint aw_xin_pk primary key(rwnum, runid)
)
/

begin
  -- Note that the number used here
  -- must match the setting in aw_declarations.rwl
  for i in 0..200000
  loop
    insert into aw_tok values 
      ( i 
      , round(dbms_random.value(0,100000))
      , dbms_random.string('a',50));
  end loop;
  commit;
end;
/

grant all on aw_tok to &&runschema1.;
grant all on aw_row to &&runschema1.;
grant all on aw_xtr to &&runschema1.;
grant all on aw_xin to &&runschema1.;

grant all on aw_tok to &&runschema2.;
grant all on aw_row to &&runschema2.;
grant all on aw_xtr to &&runschema2.;
grant all on aw_xin to &&runschema2.;
exit
