// array.c - arrays in C
// arrays need to be declared as per their data type
// can be used to store chars of a string

#include <stdio.h>

int main(){

    // declare/initialise int array
    int arr[3] = {10,2,8};

    // edit element in array
    arr[1] = 55;

    // display
    printf("The three ints in this array are: %d, %d, and %d\n", arr[0], arr[1], arr[2]);

    // using arrays for strings
    // one of the most significant uses of arrays in C is for storing chars which make up a string
    // \0 promotes the array to string status
    char name[7] = {'A', 'r', 'c', 'h', 'i', 'e', '\0'};

    // equally, less verbose way of defining strings:
    char surname[] = "Benn";

    printf("My name is %s %s", name, surname);

    return 0;
}