// assign.c - operators to assign values 
// like python, +=, -= etc.

#include <stdio.h>

int main(){

    // declare and initialise ints
    int a = 5, b = 10;

    printf("This is a: %d, and this is b: %d.\n", a, b);

    printf("This is a += b: %d", a += b);

    return 0;

}

// had some issues as a was being defined again in a += b, so calling it in printf and then calling again in a += b was setting the first instance of a as 15, not 5
// basically avoid assigning in same expression if you are using the same variable elsewhere. set it as something else instead