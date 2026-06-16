// enumtypes.c - enumerated sequences can be considered as a new data type in its own right 
// varibles of this data type can be declared like any other using: data-type variable-name;

#include <stdio.h>

int main(){
    
    // declare enum/sequence of consts (snooker values)
    enum colours {
        RED = 1, YELLOW, GREEN, BROWN, BLUE, PINK, BLACK
    };  

    // declare a variable of the enumerated data type
    enum colours fingers;

    // initialise/assign variable using consts from the enum list using a cast
    fingers = (enum colours) PINK + BROWN;     // casts the sum of these ints back to an enum colours data type (otherwise C will error as returns an int while fingers is an enum colours)

    /*
    here, fingers is promoted to an int by printf hence the use of %d 
    this is actually for ANY data type with bit size (4 bytes) < int bit size - they all go to int types when using printf/any varidic function
    enum = 4 bytes, so same as int and is essentially unchanged but seen as an int for this function regardless.
    so a variable of char  letter = 'A'; is always promoted to int as char = 1 byte (hence the 'A' = 65 as an int and can be called as %d)
    */
    printf("Value: %d\n", fingers);        
    return 0;

}