#include <stdio.h>
int main(void) {
    int sw = 1;

    switch (sw) {
        case 1: printf("A ");
        case 2: printf("B ");
        case 3: printf("C "); break;
        default: printf("D "); break;
    }

    printf("Z\n");
    return 0;
}