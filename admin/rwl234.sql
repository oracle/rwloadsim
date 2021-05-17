-- update the RWP*Load Simulator repository
-- for version 2.3.4
--
-- Copyright (c) 2021 Oracle Corporation
-- Licensed under the Universal Permissive License v 1.0
-- as shown at https://oss.oracle.com/licenses/upl/
--
-- Changes
-- 
-- NAME     DATE         COMMENTS
-- bengsig  17-may-2021  Creation
--
alter table rwlrun add
( nattr1 number
, nattr2 number
, nattr3 number
, sattr1 varchar2(1000)
, sattr2 varchar2(1000)
, sattr3 varchar2(1000)
)
/
