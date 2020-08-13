rem Use this if you want to an extra user
rem to access your rwloadsim repository.
rem
rem you will need to modify the name "rwlpublic" 
rem below
rem 
rem Note that we explicitly disallow updates
rem and deletes such that users cannot
rem modify other users results
rem 
grant insert,select on HISTOGRAM to rwlpublic;
grant insert,select on PERSEC to rwlpublic;
grant insert,select on RUNCPU to rwlpublic;
grant insert,select on RUNRES to rwlpublic;
grant insert,select on RWLCPU to rwlpublic;
grant insert,select on RWLRUN to rwlpublic;
grant update(dbname) on rwlrun to rwlpublic;
grant update(dbversion) on rwlrun to rwlpublic;
grant insert,select on SYSRES to rwlpublic;
grant insert,select on ORASTATS to rwlpublic;
grant select on runnumber_seq to rwlpublic;

