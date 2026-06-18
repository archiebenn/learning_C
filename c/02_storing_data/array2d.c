// array2d.c - multi-dimensional arrays in C
// can have multiple dimensions, but abive 2 indices is less common
// e.g an array of 2 indices is like tabular data/format

#include <stdio.h>

int main(){

    // declare/initialise 2d array (2x3)
    // ABC
    // 123
    // note that in this array the characters are stored as their ASCII value then converted back to characters using %c below
    int tab[2][3] = { {'A', 'B', 'C'}, {1, 2, 3}};

    printf("Element at [0][0] corresponds to %c\n", tab[0][0]);
    printf("Element at [0][1] corresponds to %c\n", tab[0][1]);
    printf("Element at [0][2] corresponds to %c\n", tab[0][2]);

    printf("Element at [1][0] corresponds to %d\n", tab[1][0]);
    printf("Element at [1][1] corresponds to %d\n", tab[1][1]);
    printf("Element at [1][2] corresponds to %d\n", tab[1][2]);

    return 0;

}
