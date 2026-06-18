// conditional definitions
// #if macro 

// existence of a constant definition can be tested with an #ifdef directive
// for example, to test for the existence of system constant defined by C compiler itself based on OS:

#include <stdio.h>

#ifdef _WIN32                   // checks IF windows
    #define SYS "Windows"
#endif
#ifdef linux                    // checks IF linux
    #define SYS "Linux"         // if so, set SYS constant to "Linux"
#endif

int main(){
    
    printf("Operating system used to compile: %s", SYS);

    return 0;
}