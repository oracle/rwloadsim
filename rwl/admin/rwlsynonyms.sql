rem
rem If you have an extra users grant access to the
rem rwloadsim repository, run this to create synonyms
rem and also run rwlviews.sql
rem
create or replace synonym HISTOGRAM for rwloadsim.HISTOGRAM;
create or replace synonym PERSEC for rwloadsim.PERSEC;
create or replace synonym RUNCPU for rwloadsim.RUNCPU;
create or replace synonym RUNRES for rwloadsim.RUNRES;
create or replace synonym RWLCPU for rwloadsim.RWLCPU;
create or replace synonym RWLRUN for rwloadsim.RWLRUN;
create or replace synonym SYSRES for rwloadsim.SYSRES;
create or replace synonym runnumber_seq for rwloadsim.runnumber_seq;

