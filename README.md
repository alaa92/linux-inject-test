# linux-inject-test

Compile linux-inject  
Compile the target program and the library by running the command:  
```
$ ./compile.sh
```
Open a new terminal and run "target":  
```
$ ./target
```
Inject the library "libinject.so" by running:
```
sudo linux-inject/inject -n target libinject.so
```