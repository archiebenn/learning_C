// setvars.c - using the scanf() function to input variables inot a program
// date: 5-6-2026

// scanf() takes format specifiers (%d, %f, %s etc.) to define the type of data to be entered and then the name in which it will be stored
// the '&' before the variable name is the 'addressof' operator that directs the input to be stord in the variable name it precedes
// ie scanf("%d", &age);   will take an input integer (%d) and assign it to the age variable

#include <stdio.h>

int main(){
    char character; int a,b;                                   // declare variables

    printf("Enter any single keyboard character ");
    scanf("%c", &character);                                   // accept input character and assign to 'character'

    printf("Enter any two integers separated by a space ");
    scanf("%d" "%d", &a, &b);                                  // accepts two integers and assigns to 'a' and 'b' respectively

    printf("The letter entered was %c\n", character);
    printf("The two numbers entered were %d and %d\n", a, b);  // notice how print reads where to place the values with the format specifiers within the string

    return 0;
}