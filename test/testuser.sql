rem 
rem drop and recreate the rwltest user
rem

drop user rwltest cascade;

rem change password - but NOT name - of rwltest user as needed
rem you may also need to change the command for a different 
rem default tablespace
create user rwltest identified by {password} quota unlimited on users
/
grant
create table
, create view
, create sequence
, create session
, alter session
, create procedure
, change notification
to rwltest
/

