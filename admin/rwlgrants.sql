-- create grants for the RWP*Load Simulator repository schema
-- 
-- Copyright (c) 2021 Oracle Corporation
-- Licensed under the Universal Permissive License v 1.0
-- as shown at https://oss.oracle.com/licenses/upl/

-- History
-- bengsig  26-apr-2024 - osstat
-- bengsig   5-apr-2023 - oltpxc
-- bengsig  19-mar-2023 - cstorm
-- bengsig   8-aug-2023 - Missing grant to PERSEC
-- bengsig         2017 - Creation

-- Use this if you want an extra user
-- to access your rwloadsim repository.
--
-- you will need to modify the name "rwlpublic" 
-- below to match your other schema
-- 
-- Note that we explicitly disallow updates
-- and deletes when possible such that users cannot
-- modify other users results
-- 
grant insert,select on HISTOGRAM to rwlpublic;
grant insert,select on PERSEC to rwlpublic;
grant insert,select on RUNCPU to rwlpublic;
grant insert,select on RUNRES to rwlpublic;
grant insert,select on RWLCPU to rwlpublic;
grant insert,select on RWLRUN to rwlpublic;
grant insert,update,select on PERSEC to rwlpublic;
grant update(dbname) on rwlrun to rwlpublic;
grant update(dbversion) on rwlrun to rwlpublic;
grant update(nattr1) on rwlrun to rwlpublic;
grant update(nattr2) on rwlrun to rwlpublic;
grant update(nattr3) on rwlrun to rwlpublic;
grant update(sattr1) on rwlrun to rwlpublic;
grant update(sattr2) on rwlrun to rwlpublic;
grant update(sattr3) on rwlrun to rwlpublic;
grant insert,select on SYSRES to rwlpublic;
grant insert,select on OERSTATS to rwlpublic;
grant insert,select on ashdata to rwlpublic;
grant insert,select on rwlash to rwlpublic;
grant insert,select on cstorm to rwlpublic;
grant insert,update,select on oltpxc to rwlpublic;
grant select on runnumber_seq to rwlpublic;
grant insert,select on osstat to rwlpublic;
