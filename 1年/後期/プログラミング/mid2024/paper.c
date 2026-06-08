#include <stdio.h>
int main(void) {
    int n = 9;
    switch (n % 3) {
        case 0: printf("S ");
        case 1: printf("T ");
        default: printf("U ");
    }
    switch (n % 4) {
        case 0: printf("X "); break;
        case 1: printf("Y "); break;
        default: printf("Z ");
    }

    return 0;
}