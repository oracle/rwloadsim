rem
rem Copyright (c) 2020 Oracle Corporation
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
rem   bengsig  08-dec-2020 - Creation 

define runschema1=&&1.
define runschema2=&&2.

CREATE TABLE customers
    ( customer_id        NUMBER(6)     
    , cust_first_name    VARCHAR2(40) CONSTRAINT cust_fname_nn NOT NULL
    , cust_last_name     VARCHAR2(30) CONSTRAINT cust_lname_nn NOT NULL
    , address_line_1      VARCHAR2(50)
    , address_line_2      VARCHAR2(50)
    , address_line_3      VARCHAR2(50)
    , credit_limit       NUMBER(9,2)
    , cust_email         VARCHAR2(40)
    , CONSTRAINT         customer_credit_limit_max
                         CHECK (credit_limit <= 10000)
    , CONSTRAINT         customer_id_min
                         CHECK (customer_id > 0)
    ) ;

ALTER TABLE customers 
ADD ( CONSTRAINT customers_pk
      PRIMARY KEY (customer_id)
    ) ;

CREATE TABLE order_items
    ( order_id           NUMBER(12) 
    , line_item_id       NUMBER(3)  NOT NULL
    , product_id         NUMBER(6)  NOT NULL
    , unit_price         NUMBER(8,2)
    , quantity           NUMBER(8)
    ) 
    ;

ALTER TABLE order_items
ADD ( CONSTRAINT order_items_pk PRIMARY KEY (order_id, line_item_id)
    );

CREATE TABLE orders
    ( order_id           NUMBER(12)
    , order_date         DATE CONSTRAINT order_date_nn NOT NULL
    , customer_id        NUMBER(6) CONSTRAINT order_customer_id_nn NOT NULL
    , order_status       varchar2(10)
    , order_total        NUMBER(8,2)
    , CONSTRAINT         order_status_lov
                         CHECK (order_status in ('ordered','shipped','paid'))
    , constraint         order_total_min
                         check (order_total >= 0)
    )
    ;

ALTER TABLE orders
ADD ( CONSTRAINT order_pk 
      PRIMARY KEY (order_id)
    );

CREATE TABLE warehouses
    ( warehouse_id       NUMBER(3) 
    , warehouse_name     VARCHAR2(35)
    , location_id        NUMBER(4)
    , constraint warehouses_pk primary key(warehouse_id)
    );
    
CREATE TABLE inventories
  ( product_id         NUMBER(6)
  , warehouse_id       NUMBER(3) CONSTRAINT inventory_warehouse_id_nn NOT NULL
  , quantity_on_hand   NUMBER(12) CONSTRAINT inventory_qoh_nn NOT NULL
  , CONSTRAINT inventory_pk PRIMARY KEY (product_id, warehouse_id)
  ) ;

CREATE TABLE products
    ( product_id          NUMBER(6) not null
    , product_name        VARCHAR2(50) not null
    , product_description VARCHAR2(2000)
    , category_id         NUMBER(2) not null
    , product_status      VARCHAR2(20)
    , list_price          NUMBER(8,2)
    , min_price           NUMBER(8,2)
    , CONSTRAINT          product_status_lov
                          CHECK (product_status in ('orderable'
                                                  ,'planned'
                                                  ,'under development'
                                                  ,'obsolete')
                               )
    ) ;

ALTER TABLE products 
ADD ( CONSTRAINT products_pk PRIMARY KEY (product_id)
    );

ALTER TABLE orders 
ADD ( CONSTRAINT orders_customer_id_fk 
      FOREIGN KEY (customer_id) 
      REFERENCES customers(customer_id) 
      ON DELETE SET NULL 
    ) ;

create index orders_customer
on orders(customer_id, order_id)
/

ALTER TABLE inventories 
ADD ( CONSTRAINT inventories_warehouses_fk 
      FOREIGN KEY (warehouse_id)
      REFERENCES warehouses (warehouse_id)
      ENABLE NOVALIDATE
    ) ;

ALTER TABLE inventories 
ADD ( CONSTRAINT inventories_product_id_fk 
      FOREIGN KEY (product_id)
      REFERENCES products (product_id)
    ) ;

ALTER TABLE order_items
ADD ( CONSTRAINT order_items_order_id_fk 
      FOREIGN KEY (order_id)
      REFERENCES orders(order_id)
      ON DELETE CASCADE
enable novalidate
    ) ;

ALTER TABLE order_items
ADD ( CONSTRAINT order_items_product_id_fk 
      FOREIGN KEY (product_id)
      REFERENCES products(product_id)
    ) ;

CREATE SEQUENCE orders_seq
 START WITH     1000
 cache 10000
 INCREMENT BY   1
/

grant all on customers to &&runschema1;
grant all on order_items to &&runschema1;
grant all on orders to &&runschema1;
grant all on warehouses to &&runschema1;
grant all on inventories to &&runschema1;
grant all on products to &&runschema1;
grant all on orders_seq to &&runschema1;

grant all on customers to &&runschema2;
grant all on order_items to &&runschema2;
grant all on orders to &&runschema2;
grant all on warehouses to &&runschema2;
grant all on inventories to &&runschema2;
grant all on products to &&runschema2;
grant all on orders_seq to &&runschema2;

exit
