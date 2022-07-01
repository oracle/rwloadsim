## Generating stand alone executables
If you have some rwl scripts that you would like to distribute to other systems,
these systems will need an instalation of rwloadsim to execute these.
This requirement can be lifted using the *generate* option of rwloadsim,
which will create a single executable that has both the code to rwloadsim
itself and also includes your rwl script source code.

After generating such an executable, it can be copied to any system that
has an Oracle environment, such as Instant Client, a server or a full client
installation.
The only requirent is that the version of the Oracle environment on the target
system is the same version or newer than on the system, where you ran the generation.

As an example, the ociping.rwl and connping.rwl scripts available in the public
directory would be useful to distribute without having the need for a complete
rwloadsim install.  
To generate the former as an executable, you can simply do
```
rwloadsim --generate=ociping --generate-banner='RWP*OCIPing Utility' -u ociping.rwl
```
The executable, ociping, can then be copied to any system
that has the required Oracle environment, where it can be executed.

It is recommended that you generate executables in a version that is the lowest
you suspect to be available for actual execution.

## Navigation
* [index.md](index.md#rwpload-simulator-users-guide) Table of contents
* [INTERPRETER.md](INTERPRETER.md) Previous topic: Using rwloadsim as an interpreter
* [INTERRUPT.md](INTERRUPT.md) Next topic: Interrupting rwloadsim
