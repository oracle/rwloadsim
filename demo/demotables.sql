drop table rwl_demo_lin purge;
drop table rwl_demo_ref purge;
drop table rwl_demo_ord purge;
drop sequence rwl_demo_ordno;
create table rwl_demo_ord 
(ordno number
, b number
, pl varchar2(100)
, c number)
/
alter table rwl_demo_ord 
add constraint rwl_demo_ordpk primary key (ordno)
/
create table rwl_demo_ref 
(refno number not null
, g number
, pl varchar2(1000))
/
alter table rwl_demo_ref
add constraint rwl_demo_refpk primary key(refno)
/
insert into rwl_demo_ref(refno,g,pl)
select rownum
, dbms_random.value
, rpad(dbms_random.string ('a',20),1000,'_')
from 
dual connect by rownum <= 200
/
commit
/
create table rwl_demo_lin 
( ordno number not null constraint rwl_demo_lin_ord references rwl_demo_ord(ordno)
, linno number not null
, e number
, pl varchar2(100)
-- refno values 1, 2 .. 200 are possible
, refno number not null constraint rwl_demo_lin_ref references rwl_demo_ref(refno))
/
alter table rwl_demo_lin 
add constraint rwl_demo_linpk primary key 
(ordno, linno)
/
create sequence rwl_demo_ordno cache 10000
/
