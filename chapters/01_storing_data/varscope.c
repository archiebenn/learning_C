// extvars.c - global vs local scope variables

#include <stdio.h>

int global = 10;    // declare global variable

// empty function to declare and intiate a local var
void foo(){
    int local = 5;
    printf("Global (accessible within foo()): %d\nLocal (only within foo()): %d\n", global, local);
}

int main(){
    printf("Global (within main()): %d\n", global);
    // printf("Local: %d\n", local);  // error - local doesn't exist here
    foo();

    return 0;
}