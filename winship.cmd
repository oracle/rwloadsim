rem RWP*Load Simulator
rem
rem Copyright (c) 2024 Oracle Corporation
rem Licensed under the Universal Permissive License v 1.0
rem as shown at https://oss.oracle.com/licenses/upl/
rem
rem Create the zip file for shipping on Windows
rem
rem History
rem
rem bengsig  29-feb-2024  Creation
rem

del rwloadsim-Windows-x86_64-bin-3.1.1.zip

7z a rwloadsim-Windows-x86_64-bin-3.1.1.zip .\DISTRIBUTION.txt .\LICENSE.txt .\SECURITY.md .\CONTRIBUTING.md .\README.md .\CHANGELOG.md
7z a rwloadsim-Windows-x86_64-bin-3.1.1.zip admin demo public docs
7z a rwloadsim-Windows-x86_64-bin-3.1.1.zip bin\*.cmd bin\rwlerror.exe bin\rwloadsim.exe lib\rwlgenexec.obj lib\rwlgenobjects.lib lib\wingen.cmd
7z l rwloadsim-Windows-x86_64-bin-3.1.1.zip 
