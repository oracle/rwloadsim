-- update the RWP*Load Simulator repository
-- for version 3.1.3
--
-- Copyright (c) 2023 Oracle Corporation
-- Licensed under the Universal Permissive License v 1.0
-- as shown at https://oss.oracle.com/licenses/upl/
--
-- Changes
-- 
-- NAME     DATE         COMMENTS
--
-- bengsig  26-apr-2024  osstat
-- bengsig  19-mar-2024  Created
--
create table cstorm
( runnumber number not null
, threadnumber number not null
, begtime number
, endtime number
, offtime number
, errnum number
, errtxt varchar2(200)
, primary key(runnumber, threadnumber)
) ;

create table osstat
( runnumber number not null
, second number not null
, usr1 number(*,6), usr2 number(*,6), usr3 number(*,6), usr4 number(*,6)
, usr5 number(*,6), usr6 number(*,6), usr7 number(*,6), usr8 number(*,6)
, sys1 number(*,6), sys2 number(*,6), sys3 number(*,6), sys4 number(*,6)
, sys5 number(*,6), sys6 number(*,6), sys7 number(*,6), sys8 number(*,6)
, primary key(runnumber, second)
)
/

