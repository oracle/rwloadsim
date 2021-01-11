rem create a few simple tables 
create table verysimple
( a number
, b varchar2(30)
)
/
create table dept
( deptno number(2) not null
, dname  varchar2(14)
, loc    varchar2(15)
, primary key(deptno)
)
/
insert into dept values (10,'ACCOUNTING','NEW YORK');
insert into dept values (20,'DEVELOPMENT','COPENHAGEN');
insert into dept values (30,'SALES','CHICAGO');
insert into dept values (40,'OPERATIONS','BOSTON');
commit;

create table emp
( empno     number(4) not null
, ename     varchar2(10)
, job       varchar2(10)
, mgr       number(4)
, hiredate  date
, sal       number(7,2)
, comm      number(7,2)
, deptno    number(2) not null
, primary key (empno)
)
/

alter session set nls_date_format='DD-mon-RR'
/
insert into emp
  values (7839,'KING','PRESIDENT',null,'17-nov-87',6000,null,10);
insert into emp
  values (7698,'BLAKE','MANAGER',7839,'1-may-91',2850,null,30);
insert into emp
  values (7782,'CLARK','MANAGER',7839,'9-jun-92',2450,null,10);
insert into emp
  values (7566,'JONES','MANAGER',7839,'2-apr-89',2975,null,20);
insert into emp
  values (7654,'MARTIN','SALESMAN',7698,'28-sep-88',1250,1400,30);
insert into emp
  values (7499,'ALLEN','SALESMAN',7698,'20-feb-93',1600,300,30);
insert into emp
  values (7844,'TURNER','SALESMAN',7698,'8-sep-01',1500,0,30);
insert into emp
  values (7900,'JAMES','CLERK',7698,'3-dec-11',950,null,30);
insert into emp
  values (7521,'WARD','SALESMAN',7698,'22-feb-96',1250,800,30);
insert into emp
  values (7902,'FORD','PROGRAMMER',7566,'03-feb-88',3000,null,20);
insert into emp
  values (7369,'SMITH','CLERK',7902,'17-dec-02',800,null,20);
insert into emp
  values (7788,'SCOTT','PROGRAMMER',7566,'09-dec-99',3000,null,20);
insert into emp
  values (7876,'ADAMS','CLERK',7788,'12-jan-13',1200,null,20);
insert into emp
  values (7934,'MILLER','CLERK',7782,'23-jan-19',1300,null,10);
commit;
