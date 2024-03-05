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
-- bengsig  19-dec-2023  Add ignore_parsefailure column to oltpxc
-- bengsig   3-oct-2023  Add parsefailure column to oltpxc
-- bengsig  25-apr-2023  Creation
--
alter table oltpxc add
( parsefailure number 
, ignore_parsefailure number)
/

update oltpxc set parsefailure = 0
, ignore_parsefailure=0
/
commit
/

alter table oltpxc add
( cpusec number
, waitsec number
)
/
update oltpxc set cpusec=0
, waitsec=0
/
commit
/

alter table persec add
( atime number (*,6)
, dtime number (*,6) 
)
/

alter table runres add
( atime number (*,6) 
, dtime number (*,6) 
)
/
