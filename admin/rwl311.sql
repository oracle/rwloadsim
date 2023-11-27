-- update the RWP*Load Simulator repository
-- for version 3.1.1
--
-- Copyright (c) 2023 Oracle Corporation
-- Licensed under the Universal Permissive License v 1.0
-- as shown at https://oss.oracle.com/licenses/upl/
--
-- Changes
-- 
-- NAME     DATE         COMMENTS
-- bengsig   3-oct-2023  Add parsefailure column to oltpxc
-- bengsig  25-apr-2023  Creation
--
alter table oltpxc add
( parsefailure number )
/

update oltpxc set parsefailure = 0
/
commit
/
