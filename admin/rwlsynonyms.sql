-- create synonyms to RWP*Load Simulator repository schema
-- 
-- Copyright (c) 2020 Oracle Corporation
-- Licensed under the Universal Permissive License v 1.0
-- as shown at https://oss.oracle.com/licenses/upl/

-- History
-- bengsig  03-dec-2020 - Add ash 
-- bengsig         2017 - Creation

--
-- If you have an extra users granted access to the
-- rwloadsim repository, run this to create synonyms
-- and also run rwlviews.sql
--
create or replace synonym HISTOGRAM for rwloadsim.HISTOGRAM;
create or replace synonym PERSEC for rwloadsim.PERSEC;
create or replace synonym RUNCPU for rwloadsim.RUNCPU;
create or replace synonym RUNRES for rwloadsim.RUNRES;
create or replace synonym RWLCPU for rwloadsim.RWLCPU;
create or replace synonym RWLRUN for rwloadsim.RWLRUN;
create or replace synonym SYSRES for rwloadsim.SYSRES;
create or replace synonym rwlash for rwloadsim.rwlash;
create or replace synonym ashdata for rwloadsim.ashdata;
create or replace synonym oerstats for rwloadsim.oerstats;
create or replace synonym runnumber_seq for rwloadsim.runnumber_seq;

