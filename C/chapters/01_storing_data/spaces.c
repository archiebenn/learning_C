// spaces.c - testing out formatting program outputs

#include <stdio.h>

int main(){

    int num = 1;                                     // declare and initialise num

    printf("Using %%0d results in %0d\n", num);
    printf("Using %%5d results in %5d\n", num);      // different numbers of spaces/0s can be added to the ouptput with these
    printf("Using %%05d results in %05d\n", num);

    float pi = 3.141592;                             // declare and initialise pi (float is to approx. 6dp)

    printf("This is pi to 3dp using %%.3f: %.3f\n", pi);
    printf("Can also add whitespace/0s to the start with %%05.5f: %05.5f\n", pi);
    printf("And you can left align with a minimum space specifier (5 here) using %%-5.2f: %-5.2f end\n", pi);    
    printf("And you can left align with a minimum space specifier (9 here) using %%-9.2f: %-9.2f end\n", pi);   // %-9.2f = at least 9 chars wide, 2dp, left-aligned.
    printf("And you can left align with a minimum space specifier (9 here) using %%-9.6f: %-9.6f end\n", pi);   // %-9.6f = at least 9 chars wide, 6dp, left-aligned.
    printf("And you can left align with a minimum space specifier (9 here) using %%-20.6f: %-20.6f end\n", pi); // %-9.6f = at least 20 chars wide, 6dp, left-aligned.
    return 0;
}