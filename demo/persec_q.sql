select * from
(select vname, second, scount from persec_a where runnumber = (select max(runnumber) from rwlrun))
pivot
(sum(scount) for vname in ('selorder' as selorder, 'insorder' as insorder, 'qcomplex' as qcomplex))
order by second
/
