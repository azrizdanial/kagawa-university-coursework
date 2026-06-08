#include <stdio.h>

int main(void) {
    int n = 5;
    if (n % 2 != 0)
        if (n > 6)
            printf("A ");
        else 
            printf("B ");
    else
        printf("C ");
    printf("D\n");
    return 0;
}