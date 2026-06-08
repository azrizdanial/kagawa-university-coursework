#include <stdio.h>

void foo(int n) {
    if (n < 10) {
        foo(n + 2);
        printf("%d ", n);
        foo(n * 3);
    }
}

int main(void) {
    foo(8);
    return 0;
}