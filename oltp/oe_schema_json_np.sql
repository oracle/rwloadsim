rem
rem Copyright (c) 2021 Oracle Corporation
rem Licensed under the Universal Permissive License v 1.0
rem as shown at https://oss.oracle.com/licenses/upl/

rem
rem NAME
rem   oe_schema_np.sql - RWL create Order Entry SCHEMA No Partitions
rem
rem DESCRIPTON
rem   Creates database objects. 
rem
rem MODIFIED   (MM/DD/YY)
rem   bengsig  04/17/2026 - Change column to type json
rem   mkdash   02/17/2026 - Creation

define runschema1=&&1.
define runschema2=&&2.

CREATE TABLE orders_json (
    order_id INTEGER GENERATED ALWAYS AS IDENTITY
    , order_details  json 
    )    
    ;

ALTER TABLE orders_json
ADD ( CONSTRAINT orders_json_pk 
      PRIMARY KEY (order_id)
    );   

grant all on orders_json to &&runschema1;
grant all on orders_json to &&runschema2;

exit
