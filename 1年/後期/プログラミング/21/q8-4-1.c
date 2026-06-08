#include <stdio.h>

void foo(int n) {
    if (n > 0) {
        foo(n - 1);
        printf("%d ", n);
        foo(n / 2);
    }
}

int main(void) {
    for (int i = 1; i <= 4; i++) {
        foo(i);
        putchar('\n');
    }
}