-- create the RWP*Load Simulator repository user
create user rwltest identified by rwltest
quota unlimited on users
/
grant
  create table
, create view
, create sequence
, create session
to rwltest
/
