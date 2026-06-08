#include <stdio.h>

int main(void) {
    int n = 7;

    if (n > 5) 
        printf("X ");
    if (n > 4) 
        printf("Y ");
    else if (n > 3) 
        printf("Z ");
    printf("W\n"); 

    return 0;
}