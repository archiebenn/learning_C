// cast.c - converting data types
// this is known as casting and essentially forces one data type to another

#include <stdio.h>

int main(){
    // declare originals
    int num1, num2;
    float dec;
    char letter;

    // initialise float and char
    dec = 4.6;
    letter = 'A';         // learmed here that 'A' != "A". 'A' = char, "A" = a string literal (pointer to a char array - can be basically any number of chars long)

    // cast dec and letter
    num1 = (int) letter;
    num2 = (int) dec;

    // print values
    printf("The char A cast to an int is: %d\nThe float 4.6 cast to an int is: %d", num1, num2);

    return 0;
    
}

/*
The char A cast to an int is: 65         - this is because characters are represented by ASCII (range 0-127). Uppercase A ASCII = 65 so takes on this when cast as an int
The float 4.6 cast to an int is: 4       - note that floats aren't rounded, they are simply truncated
*/