-- update the RWP*Load Simulator repository
-- for version 3.0.4
--
-- Copyright (c) 2021 Oracle Corporation
-- Licensed under the Universal Permissive License v 1.0
-- as shown at https://oss.oracle.com/licenses/upl/
--
-- Changes
-- 
-- NAME     DATE         COMMENTS
-- bengsig   1-dec-2022  Prevent quick loss of sequence numbers
-- bengsig  11-oct-2022  Creation
--
alter table persec add
( WTIME number(*,6)
, ETIME number(*,6)
)
/

alter sequence runnumber_seq nocache
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
, blockcontention number
, proccount number
, nopool number
, stopnow number
, constraint oltpxc_pk primary key(key, hostname)
)
/
