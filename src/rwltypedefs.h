/*
 * RWP*Load Simulator
 *
 * Copyright (c) 2023 Oracle Corporation
 * Licensed under the Universal Permissive License v 1.0
 * as shown at https://oss.oracle.com/licenses/upl/
 *
 * Real World performance Load simulator typedefs
 *
 * rwltypdefs.h
 *
 * This file is only necessary to make cscope behave nicely
 *
 * History
 *
 * bengsig  30-jan-2024 - All includes in rwl.h
 * bengsig  20-sep-2023 - list iterator loop
 * bengsig  12-sep-2023 ampersand replacement
 * bengsig  29-jun-2022 generate project
 * bengsig  04-mar-2022 printf project
 * bengsig  21-jan-2021 add rwl_pooltyp
 * bengsig  06-oct-2020 Remove sharding
 * bengsig  12-jun-2017 Creation
 */


typedef struct rwl_xeqenv rwl_xeqenv;
typedef struct rwl_main rwl_main;
typedef struct rwl_value rwl_value;
typedef struct rwl_pvariable rwl_pvariable;
typedef struct rwl_identifier rwl_identifier;
typedef struct rwl_location rwl_location;
typedef struct rwl_pstack rwl_pstack;
typedef struct rwl_estack rwl_estack;
typedef struct rwl_rast rwl_rast;
typedef struct rwl_rastvar rwl_rastvar;
typedef struct rwl_code rwl_code;
typedef struct rwl_arvar rwl_arvar;
typedef struct rwl_sql rwl_sql;
typedef struct rwl_bindef rwl_bindef;
typedef struct rwl_cinfo rwl_cinfo;
typedef struct rwl_error rwl_error;
typedef struct rwl_thrinfo rwl_thrinfo;
typedef struct rwl_stats rwl_stats;
typedef struct rwl_histogram rwl_histogram;
typedef struct rwl_qmesg rwl_qmesg;
typedef struct rwl_localvar rwl_localvar;
typedef struct rwl_oerstat rwl_oerstat;
typedef struct rwl_idlist rwl_idlist;
typedef struct rwl_arglist rwl_arglist;
typedef struct rwl_helplist rwl_helplist;
typedef struct rwl_pathlist rwl_pathlist;
typedef struct rwl_conlist rwl_conlist;
typedef struct rwl_lilist rwl_lilist;
typedef enum rwl_vsalloc rwl_vsalloc;
typedef enum rwl_type rwl_type;
typedef enum rwl_pooltype rwl_pooltype;
typedef enum rwl_stack_t rwl_stack_t;
typedef enum rwl_code_t rwl_code_t;
