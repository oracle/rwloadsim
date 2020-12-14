define rwl_oe=&&1.
define rwl_at=&&2.
define rwl_aq=&&3.

create or replace synonym customers for &&rwl_oe..customers;
create or replace synonym order_items for &&rwl_oe..order_items;
create or replace synonym orders for &&rwl_oe..orders;
create or replace synonym warehouses for &&rwl_oe..warehouses;
create or replace synonym inventories for &&rwl_oe..inventories;
create or replace synonym products for &&rwl_oe..products;
create or replace synonym orders_seq for &&rwl_oe..orders_seq;

create or replace synonym aw_tok for &&rwl_at..aw_tok;
create or replace synonym aw_row for &&rwl_at..aw_row;
create or replace synonym aw_xtr for &&rwl_at..aw_xtr;
create or replace synonym aw_xin for &&rwl_at..aw_xin;

create or replace synonym aw_cols for &&rwl_aq..aw_cols;

exit
