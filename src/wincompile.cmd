rem RWP*Load Simulator
rem
rem Copyright (c) 2024 Oracle Corporation
rem Licensed under the Universal Permissive License v 1.0
rem as shown at https://oss.oracle.com/licenses/upl/
rem
rem Windows: modify rwlpatch.c and run nmake
rem
rem History
rem
rem bengsig  29-feb-2024  Creation
rem

set /p rwlpatch<rwlpatch.txt
set /a rwlpatch+=1
echo %rwlpatch% > rwlpatch.txt
echo unsigned int rwlpatch=%rwlpatch%; > rwlpatch.c
mkdir winobj
nmake /F Makefile.win
