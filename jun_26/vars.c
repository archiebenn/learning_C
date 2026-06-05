/* script to learn about variables in C */

/* different to R/python as you first declare the variable data type and the name, then the value later 

these declarations should be made before any executable code appears in a program 

data types = format specifiers (for printf or scanf) = explanation:
int = %d = integer whole number
float = %f = floating point number
char = %c = single character
*/


#include <stdio.h>

int main() {
    // declare variables 
    int num1, num2;
    char letter;
    float decimal;

    // initialise variables 
    num1 = 100;
    num2 = 14;
    letter = 'A';
    decimal = 7.42; 

    /* now something to print using double data type (up to 10 d.p) 
    nb. %f sets it to 6dp */
    double pi = 3.1415926536;
    printf("The value of pi is approximately %f", pi );
    return 0;
}
