-- update the RWP*Load Simulator repository
-- for version 3.2.1
--
-- Copyright (c) 2025 Oracle Corporation
-- Licensed under the Universal Permissive License v 1.0
-- as shown at https://oss.oracle.com/licenses/upl/
--
-- Changes
-- 
-- NAME     DATE         COMMENTS
--
-- bengsig  12-jan-2025  add mtit_threads to oltpxc
--

alter table oltpxc add
( mtit_threads number )
/

-- Used by outlier generation in foreverday
create table oltp_outliers
( vname varchar2(30) not null primary key
, lim50 number
, lim90 number
, lim95 number
, lim98 number
)
/

insert into oltp_outliers values ('make_order'     , 0.015, 0.025, 0.1 , 0.2);
insert into oltp_outliers values ('complex_query'  , 0.04 , 0.3  , 0.7 , 1  );
insert into oltp_outliers values ('query_order'    , 0.004, 0.006, 0.02, 0.1);
insert into oltp_outliers values ('search_products', 0.02 , 0.05 , 0.3 , 0.8);
insert into oltp_outliers values ('aw_transaction' , 0.015, 0.025, 0.1 , 0.2);
commit;
