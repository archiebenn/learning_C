// comparisons.c - operators to compare values  
// similar to python but remember that TRUE or FALSE in python is 1 or 0 in C

#include <stdio.h>

int main(){ 

    int a = 0, b = 0, c = 1, d = 10;
    char e = 'a', f = 'A';

    printf("Equality comparison:\n");
    printf("0 == 0?: %d \n", a==b);
    printf("A == a?: %d \n", e==f);
    printf("0 == 1?: %d \n", a==c);        // ie. false - represented by 0 in C
    printf("0 > 1?: %d \n", a > c);
    printf("1 > 0?: %d \n", c > a);
    printf("0 >= 0? %d \n", a >= b);

    return 0;

}