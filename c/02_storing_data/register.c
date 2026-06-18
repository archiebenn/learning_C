// register.c 

// registers are defined when a variables is to be heavily-used by a program. intention is for the compiler to place these variables in the machine register of the computer to speed access times
// their use is questionable as compilers are free to ignore this advice, but also harmless as register keyword will be ignored if not using
// can only be used with local internal variables
// UPDATE: this is deprecated in modern C (book is old), so not used. although still useful to understand

#include <stdio.h>

int main(){
    register int num = 0;

    while(num < 25){
        ++num; printf("Pass %d ...", num);
    }

    return 0;
}