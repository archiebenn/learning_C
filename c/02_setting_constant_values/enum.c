// enum.c - using enum keyword
// enum creates a sequence of integer CONSTANTS 
// constant names are comma separated within {}
// constants can be assigned any individual value but each following coonstant's value increments by 1

#include <stdio.h>

// this represents values of ball colours in snooker (red = 1, up to black =7)
int main(){

    enum colours {RED = 1, YELLOW, GREEN, BROWN, BLUE, PINK, BLACK};  // note name could have been ommitted andnote CONSTS in caps (enum = consts int sequence)
    int total; 

    printf("I potted a red ball worth %d points\n", RED);               // 1
    printf("I potted a green ball worth %d points\n", GREEN);           // 3
    printf("I potted a black ball worth %d points\n", BLACK);           // 7

    total = RED + GREEN + BLACK;
    printf("Altogether I potted %d points\n", total);

    return 0;

}