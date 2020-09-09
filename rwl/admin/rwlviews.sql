-- create the RWP*Load Simulator repository views
-- 
-- Copyright (c) 2020 Oracle Corportaion
-- Licensed under the Universal Permissive License v 1.0
-- as shown at https://oss.oracle.com/licenses/upl/

-- History
-- bengsig  09-sep-2020 - Remove legacy
-- bengsig         2017 - Creation

create or replace view histogram_a
-- aggregate multi process runs
as
select runnumber
, pcount
, vname
, buckno
, power(2.0,(buckno-19)) bucktim
, sumbcount bcount
, sumttime  ttime
, to_number(decode(sumbcount,0,null,sumttime/sumbcount)) atime
from
(
  select runnumber
  , count(*) pcount
  , vname
  , buckno
  , sum(bcount) sumbcount
  , sum(ttime) sumttime
  from histogram
  group by runnumber, buckno, vname
)
/

create or replace view persec_a
-- aggregate multi process runs
as
select
  runnumber
, count(*) pcount
, vname  
, second  
, sum(scount) scount
from persec
group by runnumber, vname, second
/

create or replace view runres_a
( runnumber
, pcount
, vname
, wtime
, etime
, tcount
, avgw
, avge
, ecount
)
-- aggregate multi process runs
as
select
  runnumber
, count(*) pcount
, vname
, sum(wtime) wtime
, sum(etime) etime
, sum(tcount) tcount
, avg(decode(ecount,0,null,wtime/ecount)) avgw
, avg(decode(ecount,0,null,etime/ecount)) avge
, sum(ecount) ecount
from runres
group by runnumber, vname
/

create or replace view percentiles
-- show selected total execution time percentiles
as
select x.runnumber
, x.vname
, avg(y.avge+y.avgw/*+nvl(y.avgq,0)*/) avgt
, avg(pct50) pct50
, avg(pct90) pct90
, avg(pct95) pct95
, avg(pct98) pct98
, avg(pct99) pct99
, avg(pct995) pct995
, avg(pct998) pct998
, avg(pct999) pct999
, avg(pct9995) pct9995
from
(
select
runnumber
, vname
, case when x5000 not between leftt and rightt then null else
  leftb+(rightb-leftb)*(x5000-leftt)
  /decode(rightt,leftt,null,rightt-leftt)
  end pct50
, case when x9000 not between leftt and rightt then null else
  leftb+(rightb-leftb)*(x9000-leftt)
  /decode(rightt,leftt,null,rightt-leftt)
  end pct90
, case when x9500 not between leftt and rightt then null else
  leftb+(rightb-leftb)*(x9500-leftt)
  /decode(rightt,leftt,null,rightt-leftt)
  end pct95
, case when x9800 not between leftt and rightt then null else
  leftb+(rightb-leftb)*(x9800-leftt)
  /decode(rightt,leftt,null,rightt-leftt)
  end pct98
, case when x9900 not between leftt and rightt then null else
  leftb+(rightb-leftb)*(x9900-leftt)
  /decode(rightt,leftt,null,rightt-leftt)
  end pct99
, case when x9950 not between leftt and rightt then null else
  leftb+(rightb-leftb)*(x9950-leftt)
  /decode(rightt,leftt,null,rightt-leftt)
  end pct995
, case when x9980 not between leftt and rightt then null else
  leftb+(rightb-leftb)*(x9980-leftt)
  /decode(rightt,leftt,null,rightt-leftt)
  end pct998
, case when x9990 not between leftt and rightt then null else
  leftb+(rightb-leftb)*(x9990-leftt)
  /decode(rightt,leftt,null,rightt-leftt)
  end pct999
, case when x9995 not between leftt and rightt then null else
  leftb+(rightb-leftb)*(x9995-leftt)
  /decode(rightt,leftt,null,rightt-leftt)
  end pct9995
from
(
select runnumber
, vname
--, buckno
, bucktim/2 leftb
, bucktim rightb
, bcount
, nvl(sum(bcount)
      over
      ( partition by runnumber, vname
        order by bucktim
	rows between unbounded preceding
	and 1 preceding)
     , 0) leftt
, sum(bcount) over (partition by runnumber, vname order by bucktim) rightt
, sum(bcount) over (partition by runnumber, vname) gtotal
, sum(bcount) over (partition by runnumber, vname) * 0.5    x5000
, sum(bcount) over (partition by runnumber, vname) * 0.9    x9000
, sum(bcount) over (partition by runnumber, vname) * 0.95   x9500
, sum(bcount) over (partition by runnumber, vname) * 0.98   x9800
, sum(bcount) over (partition by runnumber, vname) * 0.99   x9900
, sum(bcount) over (partition by runnumber, vname) * 0.995  x9950
, sum(bcount) over (partition by runnumber, vname) * 0.998  x9980
, sum(bcount) over (partition by runnumber, vname) * 0.999  x9990
, sum(bcount) over (partition by runnumber, vname) * 0.9995  x9995
, 100 * sum(bcount) over (partition by runnumber, vname order by bucktim)
  / sum(bcount) over (partition by runnumber, vname)
  bcpct
from histogram_a
)
) x
join runres_a y
on x.runnumber = y.runnumber
and x.vname = y.vname
group by x.runnumber, x.vname
/

create or replace view fractiles
-- show total execution time histogram
-- as fractiles
as
select
  runnumber
, vname
--, buckno
, bucktim
, bcount
--, nvl(lag(fractile,1) over (partition by runnumber,vname order by runnumber,bucktim),0) prevfact
--, nvl(lag(bucktim,1) over (partition by runnumber,vname order by runnumber,bucktim),bucktim/2) prevtim
, fractile
from
(
select runnumber, vname, buckno, bucktim, bcount
, sum(bcount) over (partition by runnumber,vname order by buckno) 
/ sum(bcount) over (partition by runnumber,vname) * 100 fractile
from histogram_a
)
/
create or replace view rwlcpu_a
as
select
  runnumber
-- the actual second value is not exactly
-- the same in all processes so we 
-- calculate the average  ...
, avg(second) second
, count(*) pcount
, sum(cliusr) cliusr
, sum(clisys) clisys
, sum(num1) num1
, sum(num2) num2
, sum(num3) num3
, sum(num4) num4
, sum(num5) num5
from rwlcpu
group by runnumber
-- ... and do the group by on the rounded value
, round(second)
/
