@echo off

rem RWP*Load Simulator
rem
rem Copyright (c) 2025 Oracle Corporation
rem Licensed under the Universal Permissive License v 1.0
rem as shown at https://oss.oracle.com/licenses/upl/
rem
rem call rwloadsim -u ocp.rwl

rem bengsig   27-mar-2025  Creation

rwloadsim --pretend-gen-banner="RWP*OCP" -u ocp.rwl %*
