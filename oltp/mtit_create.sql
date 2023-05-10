rem
rem Copyright (c) 2023 Oracle Corporation
rem Licensed under the Universal Permissive License v 1.0
rem as shown at https://oss.oracle.com/licenses/upl/

rem
rem Owner  : bengsig
rem
rem Name
rem   mtit_create.sql - Create Max Throughput Insert Tranaction
rem
rem History
rem   bengsig  10-may-2023 - Creation

create table aw_mtit_noix
( seq  number not null
, rno  number not null
, val  number not null
, payload varchar2(2000)
)
/

create table aw_mtit_ix
( seq  number not null
, rno  number not null
, val  number not null
, payload varchar2(2000)
, primary key (seq, rno)
)
/

create table aw_mtit_revix
( seq  number not null
, rno  number not null
, val  number not null
, payload varchar2(2000)
, primary key (seq, rno) using index reverse
)
/

create table aw_mtit_ixp8
( seq  number not null
, rno  number not null
, val  number not null
, payload varchar2(2000)
, primary key (seq, rno) using index
    global partition by hash(seq)
    partitions 8
)
/

create table aw_mtit_cdr
( typ  number not null
, fno  number not null
, seq  number not null
, val  number not null
, payload varchar2(2000)
, primary key (typ, fno, seq)
)
/

create sequence aw_mit_seq_small cache 20
/

create sequence aw_mit_seq_large cache 20000
/

create sequence aw_mit_seq_scale cache 20000 scale
/

exit
