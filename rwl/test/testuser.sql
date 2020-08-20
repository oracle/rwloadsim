rem change the following as needed
connect / as sysdba

drop user rwltest cascade;

whenever sqlerror exit failure
rem change password - but NOT name - of rwltest user as needed
create user rwltest identified by {password} quota unlimited on users
/
grant
create table
, create view
, create sequence
, create session
, alter session
, create procedure
to rwltest
/

rem the following may require login to the root container
rem if you are using a multitenant database.

grant execute on dbms_lock to rwltest;

rem also set the correct password here
connect rwltest/{password}

CREATE TABLE EMP
       (EMPNO NUMBER(4) NOT NULL,
        ENAME VARCHAR2(10),
        JOB VARCHAR2(9),
        MGR NUMBER(4),
        HIREDATE DATE,
        SAL NUMBER(7, 2),
        COMM NUMBER(7, 2),
        DEPTNO NUMBER(2));

INSERT INTO EMP VALUES
        (7369, 'SMITH',  'CLERK',     7902,
        TO_DATE('17-DEC-1980', 'DD-MON-YYYY'),  800, NULL, 20);
INSERT INTO EMP VALUES
        (7499, 'ALLEN',  'SALESMAN',  7698,
        TO_DATE('20-FEB-1981', 'DD-MON-YYYY'), 1600,  300, 30);
INSERT INTO EMP VALUES
        (7521, 'WARD',   'SALESMAN',  7698,
        TO_DATE('22-FEB-1981', 'DD-MON-YYYY'), 1250,  500, 30);
INSERT INTO EMP VALUES
        (7566, 'JONES',  'MANAGER',   7839,
        TO_DATE('2-APR-1981', 'DD-MON-YYYY'),  2975, NULL, 20);
INSERT INTO EMP VALUES
        (7654, 'MARTIN', 'SALESMAN',  7698,
        TO_DATE('28-SEP-1981', 'DD-MON-YYYY'), 1250, 1400, 30);
INSERT INTO EMP VALUES
        (7698, 'BLAKE',  'MANAGER',   7839,
        TO_DATE('1-MAY-1981', 'DD-MON-YYYY'),  2850, NULL, 30);
INSERT INTO EMP VALUES
        (7782, 'CLARK',  'MANAGER',   7839,
        TO_DATE('9-JUN-1981', 'DD-MON-YYYY'),  2450, NULL, 10);
INSERT INTO EMP VALUES
        (7788, 'SCOTT',  'ANALYST',   7566,
        TO_DATE('09-DEC-1982', 'DD-MON-YYYY'), 3000, NULL, 20);
INSERT INTO EMP VALUES
        (7839, 'KING',   'PRESIDENT', NULL,
        TO_DATE('17-NOV-1981', 'DD-MON-YYYY'), 5000, NULL, 10);
INSERT INTO EMP VALUES
        (7844, 'TURNER', 'SALESMAN',  7698,
        TO_DATE('8-SEP-1981', 'DD-MON-YYYY'),  1500,    0, 30);
INSERT INTO EMP VALUES
        (7876, 'ADAMS',  'CLERK',     7788,
        TO_DATE('12-JAN-1983', 'DD-MON-YYYY'), 1100, NULL, 20);
INSERT INTO EMP VALUES
        (7900, 'JAMES',  'CLERK',     7698,
        TO_DATE('3-DEC-1981', 'DD-MON-YYYY'),   950, NULL, 30);
INSERT INTO EMP VALUES
        (7902, 'FORD',   'ANALYST',   7566,
        TO_DATE('3-DEC-1981', 'DD-MON-YYYY'),  3000, NULL, 20);
INSERT INTO EMP VALUES
        (7934, 'MILLER', 'CLERK',     7782,
        TO_DATE('23-JAN-1982', 'DD-MON-YYYY'), 1300, NULL, 10);

COMMIT;

CREATE TABLE DEPT
       (DEPTNO NUMBER(2),
        DNAME VARCHAR2(14),
        LOC VARCHAR2(13) );

INSERT INTO DEPT VALUES (10, 'ACCOUNTING', 'NEW YORK');
INSERT INTO DEPT VALUES (20, 'RESEARCH',   'DALLAS');
INSERT INTO DEPT VALUES (30, 'SALES',      'CHICAGO');
INSERT INTO DEPT VALUES (40, 'OPERATIONS', 'BOSTON');

COMMIT;


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
create table rwltest(id number not null
, stuff varchar2(20)
, constraint rwltest_pk primary key(id)
)
/
create sequence rwlseq
/
begin
  for i in 1..20 loop
    insert into rwltest values (rwlseq.nextval, lpad(rwlseq.currval,10,'+'));
  end loop;
  commit;
end;
/

create table rwltest34
( line varchar2(120)
, pk number primary key
)
/

begin
  for i in 1..10 loop
    insert into rwltest34 values (lpad(i,5*i,'_'), i);
  end loop;
  for i in 11..15 loop
    insert into rwltest34 values (lpad(i,100,'_'), i);
  end loop;
  for i in 16..20 loop
    insert into rwltest34 values (lpad(i,6*i,'_'), i);
  end loop;
end;
/

create table hasblob
( id number primary key
, cl1 blob
, cl2 blob
)
/

create table hasclob
( id number primary key
, cl1 clob
, cl2 clob
)
/

@../admin/rwloadsim
@../admin/rwlviews

exit
