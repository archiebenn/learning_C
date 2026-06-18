// using #if #elif #else for conditional branching
// essentially the same as in python and can be used to hide/show parts of the program e.g in debugging

#include <stdio.h>

#define DEBUG 2

int main(){

    #if DEBUG == 1
        printf("Debug status is 1\n");
    #elif DEBUG == 2
        printf("Debug status is 2\n");
    #else
        printf("Default debug status \n");
    #endif

    #undef DEBUG         // used to 'un define' a constant

    #ifndef DEBUG        // if not defined
        printf("Debug status is OFF\n");
    #endif

    return 0;
}