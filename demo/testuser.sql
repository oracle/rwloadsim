-- create the RWP*Load Simulator repository user
-- modify to suit your database for password
-- and tablespace
create user rwltest identified by {password}
quota unlimited on users
/
grant
  create table
, create view
, create sequence
, create session
to rwltest
/
