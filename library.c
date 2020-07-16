#include <stdio.h>
#include <dlfcn.h>

__attribute__((constructor))
void so_main()
{
    printf("Injected!\n");
}
