rem
rem Copyright (c) 2026 Oracle Corporation
rem Licensed under the Universal Permissive License v 1.0
rem as shown at https://oss.oracle.com/licenses/upl/

rem NAME
rem   oe_schema_json.sql - RWL create Json Order Entry SCHEMA
rem
rem DESCRIPTON
rem   Creates database objects.
rem
rem MODIFIED   (MM/DD/YY)
rem   bengsig  04/17/2026 - Change column to type json
rem   mkdash   02/17/2026 - Creation

rem this version partitions the orders and orderitems
rem tables by interval (1000000) and by hash (8 partitions)
rem which has two effects:
rem
rem You avoid heavy TX contention during "make_order_json"
rem You get the possibility to drop older partitions to
rem   make the table size now grow unbounded
rem The latter is manual and done by oe_orders_drop_partition
rem and you can run that occasionally

define hashcount=&&1.
define runschema1=&&2.
define runschema2=&&3.

CREATE TABLE orders_json (
    order_id INTEGER GENERATED ALWAYS AS IDENTITY
    , order_details  json
    )
    partition by range (order_id)
    interval (1000)
    subpartition by hash(order_id) subpartitions &&hashcount.
    ( partition values less than (1000) )
    ;

ALTER TABLE orders_json
ADD ( CONSTRAINT orders_json_pk
      PRIMARY KEY (order_id)
    using index local
    );

grant all on orders_json to &&runschema1;
grant all on orders_json to &&runschema2;

create table orders_json_dummy
partition by hash(order_id)
partitions &&hashcount.
as select * from orders_json
/
alter table orders_json_dummy
add constraint json_order_dummy_pk primary key(order_id)
using index local
/
exit

