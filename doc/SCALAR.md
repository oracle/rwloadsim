## Scalar declarations
Scalars can be declared globally or locally inside 
a procedure.
There is only one name-space for global declarations so all identifiers 
must be unique within all the files provided to a single execution of 
rwloadsim.
Most declarations can be made private which implies they are only 
available in the rwl input file in which they are declared.

All simple variables can be initialized at declaration time, and all 
variables declared outside functions and procedures are global by 
default.
When worker threads are started, variables are initialized to their 
values from the main thread, except for variables with the threads sum 
attribute, which are initialized as zero in worker threads, and summed 
to the value in the main thread after worker threads finish.

Variables declared with the private keyword are only available in the 
rwl source file where they are declared.
Variables declared inside procedures and functions are local to that 
procedure or function.

Variables in the first .rwl file named on the command line that also are
found as $useroption or $userswitch directives can be initialized at 
the command line, in which case the command line value will overwrite 
any value assigned during declaration.

Some example variable declarations:
```
integer abracadbra := 27, b; $useroption:abracadabra
# declare two integers, the first will be initialiazed and its value
# can be overwritten by the user using a --abracadabra option.

double threads sum total:=0; 
# declare a double, which is initialized and
# which will be summed when workers finish 

string(30) filename := "output.txt";
# declare a string and assign it the value "output.txt" 
```

* [INSTALL.md](INSTALL.md) Previous topic: Installation and creating repository
* [PROCFUNC.md](PROCFUNC.md) Next topic: Declaring procedures and functions
