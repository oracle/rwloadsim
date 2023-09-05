rem
rem Copyright (c) 2023 Oracle Corporation
rem Licensed under the Universal Permissive License v 1.0
rem as shown at https://oss.oracle.com/licenses/upl/

rem
rem Owner  : bengsig
rem
rem Name
rem   mtit_grant.sql - Grant MTIT 
rem
rem History
rem   bengsig  10-may-2023 - Creation

grant all on aw_mtit_noix to &&1
/

grant all on aw_mtit_ix to &&1
/

grant all on aw_mtit_revix to &&1
/

grant all on aw_mtit_ixp8 to &&1
/

grant all on aw_mtit_cdr to &&1
/

grant all on aw_mtit_seq_small to &&1
/

grant all on aw_mtit_seq_large to &&1
/

grant all on aw_mtit_seq_large2rev to &&1
/

grant all on aw_mtit_seq_scale to &&1
/

exit
