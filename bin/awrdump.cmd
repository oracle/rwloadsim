@echo off

rem RWP*Load Simulator
rem
rem Copyright (c) 2024 Oracle Corporation
rem Licensed under the Universal Permissive License v 1.0
rem as shown at https://oss.oracle.com/licenses/upl/
rem
rem call rwloadsim -u awrdump.rwl

rem bengsig   6-mar-2024  Creation

rwloadsim --pretend-gen-banner="RWP*AWR Dump Repository" -u awrdump.rwl %*
