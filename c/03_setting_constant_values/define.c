// define.c - using #define to define text string constants 
// #define CONSTANT-NAME "text string"
// IN GENERAL, it is preferred to use const over #define

#include <stdio.h>

/*
like #include, #define should come at the top of the script
this is similar to const in that it defines a constant, but they differ greatly overall
e.g const uses type checking and allocates memory for the constant e.g const float PI = 3.14159, while #define does neither
also #define is global, const is function/block scope
so why use #define? in cases when the constant doesn't need a type and to avoid additional memory allocation
also, consts are part of C language and dealt with at runtime and the compiler checks type safety, whereas #define is handles by the preprocessor

*/
#define LINE "__________________"
#define TITLE "This C script on #define"
#define NAME "Archie B"

int main(){

    printf("\n \t %s \n \n \t %s \n", LINE, TITLE);
    printf("\t by %s \n \t %s \n", NAME, LINE);

    return 0;
}