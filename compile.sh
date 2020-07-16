clang++ -g target.cpp -o target
clang -std=gnu99 -ggdb -D_GNU_SOURCE -shared -o libinject.so -fPIC library.c