rem RWP*Load Simulator
rem
rem Copyright (c) 2024 Oracle Corporation
rem Licensed under the Universal Permissive License v 1.0
rem as shown at https://oss.oracle.com/licenses/upl/
rem
rem Create a generated executable with include rwl code
rem
rem History
rem
rem bengsig  29-feb-2024  Creation
rem

rem %1 is our own lib directory
rem %2 is the name of the executable without .exe
rem %3 is the full name of the C source
rem %4 is the client major version but is unused

cl "/Fe:%2.exe" "%3" "%1\rwlgenexec.obj" "%1\rwlgenobjects.lib" "%INSTANT_CLIENT%\sdk\lib\msvc\oci.lib"
del "%2%.obj"
