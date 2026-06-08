#include <stdio.h>

int max2(int a, int b) {
    return (a > b) ? a : b;
}

int main(void) {
    int x = 3, y = 5;

    printf("max=%d\n", max2(x, y));

    return 0;
}