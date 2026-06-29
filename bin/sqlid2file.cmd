@echo off

rem RWP*Load Simulator
rem
rem Copyright (c) 2025 Oracle Corporation
rem Licensed under the Universal Permissive License v 1.0
rem as shown at https://oss.oracle.com/licenses/upl/
rem
rem call rwloadsim -u sqlid2file.rwl

rem bengsig  10-dec-2025  Creation

rwloadsim --pretend-gen-banner="RWP*SQLID To File" -u sqlid2file.rwl %*
