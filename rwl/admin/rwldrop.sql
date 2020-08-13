-- drop the RWP*Load Simulator repository
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
