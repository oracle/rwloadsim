-- drop the RWP*Load Simulator repository schema tables
-- 
-- Copyright (c) 2020 Oracle Corporation
-- Licensed under the Universal Permissive License v 1.0
-- as shown at https://oss.oracle.com/licenses/upl/

-- History
-- bengsig         2018 - Creation

drop sequence runnumber_seq;

drop table runres purge;
drop table histogram purge;
drop table persec purge;
drop table ashdata purge;
drop table rwlash purge;
drop table rwlcpu purge;
drop table sysres purge;
drop table rwlrun purge;

drop view histogram_a;
drop view persec_a;
drop view runres_a;
drop view rwlcpu_a;
drop view percentiles;
drop view fractiles;
