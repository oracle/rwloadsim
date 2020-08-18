begin
  dbms_connection_pool.stop_pool;
  dbms_connection_pool.configure_pool
    (minsize=>8
    , maxsize=>8
    --, num_cbrok=>2
    , inactivity_timeout=>10);
  dbms_connection_pool.start_pool;
end;
/
select * from dba_cpool_info
/
