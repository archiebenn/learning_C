// typedef.c - defining/renaming custom data types
// 17-6-2026
// typedef keyword allows you to shorten the names of custom data types
// so typdef is just useful for when type names get long - nothing more really


#include <stdio.h>

// snooker colours again
// remember enum is a special case in C which basically says 'make this a new data type called enum x'
enum colours{
    RED = 1, YELLOW, GREEN, BROWN, BLUE, PINK, BLACK
};

// declare a custom data type of the enum colours type
// MUST BE DONE BEFORE THEY CAN BE DECLARED in the program so do before main()
// this typedef shortensd the custom data type (enum colours) into the word COLOURS, so is a helper 
typedef enum colours COLOURS;

// declare/rename an unsigned short int type
typedef unsigned short int USHRT;

int main(){

    // declare variables of the custom data type 
    COLOURS num = 16;                                // COLOURS is enum but still can be assigned other ints (not just those with colour names attached)
    USHRT fingers = (COLOURS) BROWN + PINK;          // eqvn. to doing 'unsigned short int fingers = ...'

    // display
    printf("Values: %d %d\n", num, fingers);

    return 0;

}