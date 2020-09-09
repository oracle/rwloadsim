-- create the RWP*Load Simulator repository user
-- 
-- Copyright (c) 2020 Oracle Corportaion
-- Licensed under the Universal Permissive License v 1.0
-- as shown at https://oss.oracle.com/licenses/upl/

-- History
-- bengsig  09-sep-2020 - Rename file, modify password
-- bengsig         2017 - Creation


-- Modify with a password following the requirements of
-- your database
-- Modify to suit your tablespace needs
create user rwloadsim identified by {password}
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
