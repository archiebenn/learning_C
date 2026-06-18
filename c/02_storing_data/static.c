// static.c - larger C programs tend to have multiple source code files which are compiled together to form an executable
// global external variables are normally accessible to any function within the files which are compiled together
// static keyword allows the same variable name to appear within these collections of compiled files, (NOT) within one file

#include <stdio.h>

// declare and initialise a static global variable
static int num = 100;    // this essentially means any other .c files compiled with this can use the variable num if they call static too. if not would get errors

int main(void){          // calling void ensures no variables can be passed to main, but not required

        printf("Static global variable for this .c file is %d.\n\nThis cannot be called in any other .c files compiled together with this one, so only global within THIS file.", num);

        return 0;
}