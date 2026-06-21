// logic.c - logical operators for use with BOOL operands
// && = logical AND
// || logical OR
// ! logical NOT
// in C, a 1 represents a BOOL true, while 0 represents FALSE

#include <stdio.h>

int main(){

    // a = TRUE, b = FALSE
    int a = 1, b = 0;

    // AND
    printf("AND\na && a = %d (true)\n", a && a);
    printf("a && b = %d (false)\n", a && b);
    printf("b && b = %d (false)\n\n", b && b);

    // OR
    printf("OR\na || a = %d (true as both 1)\n", a || a);
    printf("a || b = %d (true as a is TRUE)\n", a || b);
    printf("b || b = %d (false as both 0)\n\n", b || b);

    // NOT
    printf("NOT\na (TRUE) = %d !a (not TRUE) = %d\n", a, !a);
    printf("b (FALSE) = %d !b (not FALSE) = %d\n", b, !b);

    return 0;

}
