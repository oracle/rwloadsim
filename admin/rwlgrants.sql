-- create grants for the RWP*Load Simulator repository schema
-- 
-- Copyright (c) 2020 Oracle Corporation
-- Licensed under the Universal Permissive License v 1.0
-- as shown at https://oss.oracle.com/licenses/upl/

-- History
-- bengsig         2017 - Creation

-- Use this if you want an extra user
-- to access your rwloadsim repository.
--
-- you will need to modify the name "rwlpublic" 
-- below to match your other schema
-- 
-- Note that we explicitly disallow updates
-- and deletes such that users cannot
-- modify other users results
-- 
grant insert,select on HISTOGRAM to rwlpublic;
grant insert,select on PERSEC to rwlpublic;
grant insert,select on RUNCPU to rwlpublic;
grant insert,select on RUNRES to rwlpublic;
grant insert,select on RWLCPU to rwlpublic;
grant insert,select on RWLRUN to rwlpublic;
grant update(dbname) on rwlrun to rwlpublic;
grant update(dbversion) on rwlrun to rwlpublic;
grant insert,select on SYSRES to rwlpublic;
grant insert,select on OERSTATS to rwlpublic;
grant insert,select on ashdata to rwlpublic;
grant insert,select on rwlash to rwlpublic;
grant select on runnumber_seq to rwlpublic;

