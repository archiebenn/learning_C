// arithmetic.c - going over some operators in C
// generally as expected/same as python but different in incerement/decrement operators
// ++ and -- are used, and can be placed before (++i) or after (i++) to different effects
// if before, value is immediately changed, if after its value is noted first and then it is changed. e.g below

#include <stdio.h>

int main(){

    int a = 4, b = 8, c = 1, d = 1, result ;

    result = a + b;
    printf("Added numbers total: %d\n\n", result);
    
    printf("Postfix increment c++ (c=1) is: %d\n", c++);
    printf("Now postfix increment is: %d\n\n", c);

    printf("Prefix increment ++d (d=1) is: %d\n", ++d);
    printf("Now prefix increment is %d\n", d);

    return 0;
}