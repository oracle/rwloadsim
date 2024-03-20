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

