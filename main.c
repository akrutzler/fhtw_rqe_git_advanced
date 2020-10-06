
#include "stdio.h"

int main(int argc, char **argv)
{
    printf("Hello world!\n");
    
    if (argc > 1) {
        printf("First argument: %s\n", argv[1]);
    }
    
    printf("Good bye!\n");
    
    return 0;
}
