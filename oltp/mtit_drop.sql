rem
rem Copyright (c) 2023 Oracle Corporation
rem Licensed under the Universal Permissive License v 1.0
rem as shown at https://oss.oracle.com/licenses/upl/

rem
rem Owner  : bengsig
rem
rem Name
rem   mtit_drop.sql - Drop Max Throughput Insert Tranaction objects
rem
rem History
rem   bengsig  17-jun-2024 - partitioned index rename
rem   bengsig  10-jun-2024 - hcc
rem   bengsig   9-sep-2023 - rename seq
rem   bengsig  10-may-2023 - Creation

drop table aw_mtit_noix purge
/

drop table aw_mtit_hcc purge
/

drop table aw_mtit_ix purge
/

drop table aw_mtit_revix purge
/

drop table aw_mtit_partix purge
/

drop table aw_mtit_revixempty purge
/

drop sequence aw_mtit_seq_small
/

drop sequence aw_mtit_seq_large
/

drop sequence aw_mtit_seq_hcc
/

drop sequence aw_mtit_seq_large2rev
/

drop sequence aw_mtit_seq_scale
/

exit
