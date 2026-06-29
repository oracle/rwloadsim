-- update the RWP*Load Simulator repository
-- for version 3.2.2
--
-- Copyright (c) 2025 Oracle Corporation
-- Licensed under the Universal Permissive License v 1.0
-- as shown at https://oss.oracle.com/licenses/upl/
--
-- Changes
-- 
-- NAME     DATE         COMMENTS
--
-- bengsig  12-sep-2025  add ranfilllen to oltpxc
--

alter table oltpxc add
( ranfilllen number )
/
