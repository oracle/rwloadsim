-- create the RWP*Load Simulator repository user
create user rwloadsim identified by rwloadsim
default tablespace users
quota unlimited on users
/
grant
  create table
, create view
, create sequence
, create session
to rwloadsim
/
