# linux-inject-test

Clone linux-inject by running the command:
```
$ chmod +x ./clone.sh && ./clone.sh
```
Compile linux-inject  
Compile the target program and the library by running the command:  
```
$ chmod +x ./compile.sh && ./compile.sh
```
Open a new terminal and run "target":  
```
$ ./target
```
Inject the library "libinject.so" by running:
```
sudo linux-inject/inject -n target libinject.so
```