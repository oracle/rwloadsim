create user rwldemo identified by "{password}"
quota unlimited on users
/
grant
  create table
, create view
, create sequence
, create session
, create procedure
to rwldemo
/
