#include <stdio.h>

void qux(int a[], int b[]) {
    a[0] -= 2;
    b[0] -= 3;
}

int main(void) {
    int x[] = {3};
    int y[] = {4};

    qux(x, y);
    printf("x[0] = %d, y[0] = %d\n", x[0], y[0]);

    return 0;
}