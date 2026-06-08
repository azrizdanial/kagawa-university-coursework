#include <stdio.h>

int main(void) {
    int a = 1, b = 2, x = 3, y = 4, t;

    t = a;
    a = b;
    b = t;
    x = y;
    y = x;

    printf("%d %d %d %d\n", a, b, x, y);
    return 0;
}