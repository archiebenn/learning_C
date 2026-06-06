// maxmin.c - 
// int variables can take on a range of positive/negative values depending on system
// e.g if int is created by default as long can be from -2147483648 to 2147483647
// if int is created as short by default it can be from -32768 to 32768
// this size can be specified during declaration. e.g: long int num1;

#include <stdio.h>
#include <limits.h>      // this header file contains implementation-defined limits for the size of each data type. e.g INT_MIN and INT_MAX for int

int main (){
    printf("Max int: %d\t", INT_MAX);
    printf("Min int: %d\t", INT_MIN);
    printf("Max short: %d\t", SHRT_MAX);
    printf("Min short: %d\t", SHRT_MIN);
    printf("Max long: %ld\t", LONG_MAX);
    printf("Min long: %ld\t", LONG_MIN);

    //  byte has 8 bits. unsigned uses all 8 to store a positive number (0–255) while signed uses 7 for the number and 1 to indicate positive/negative (-128–127).

    // sizeof operator can be used to examine the amount of memory assigned to different data types:
    printf("\n");
    printf("short int takes up %zu bytes\n", sizeof(short int));        // %zu as sizeof() returns a size_t object
    printf("long int takes up %zu bytes\n", sizeof(long int));
    printf("unsigned long int takes up %zu bytes\n", sizeof(unsigned long int));
    printf("float takes up %zu bytes\n", sizeof(float));
    printf("char takes up %zu byte\n", sizeof(char));
    printf("double takes up %zu bytes\n", sizeof(double));

    return 0;
}