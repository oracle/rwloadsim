-- update the RWP*Load Simulator repository
-- for version 3.0.6
--
-- Copyright (c) 2023 Oracle Corporation
-- Licensed under the Universal Permissive License v 1.0
-- as shown at https://oss.oracle.com/licenses/upl/
--
-- Changes
-- 
-- NAME     DATE         COMMENTS
-- bengsig  25-apr-2023  Creation
--
drop table oltpxc purge
/

create table oltpxc
( key varchar2(30) not null
, hostname varchar2(64) not null
, ratefactor number
, loadfactor number
, hardparse number
, minpool number
, maxpool number
, cursorleak number
, sessionleak number
, cursorcache number
, logoffrate number
, badplan number
, proccount number
, nopool number
, stopnow number
, mtittype number
, affinity number
, rowspins number
, arraysize number
, constraint oltpxc_pk primary key(key, hostname)
)
/
