// const.c - declaring constants
// constants are, constant. the program cannot assign it to a different value in the way it can to a variable
// they can be declared using const before normal declaration

#include <stdio.h>

// this will calculate area of circle using user defined diameter input
int main(){

    const float PI = 3.141593;                               // convention to declare consts in UPPERCASE
    int diameter;                                            // input
    float radius, area, circu;

    printf("Enter the diameter of a circle in mm (int): ");
    scanf("%d", &diameter);                                  // accept input

    circu = PI * diameter;
    radius = diameter / 2;
    area = PI * (radius * radius);

    printf("The cirumference of this circle is %.2f mm\n", circu);
    printf("... and the area of this circle is %.2f sq.mm\n", area);

    return 0;
}