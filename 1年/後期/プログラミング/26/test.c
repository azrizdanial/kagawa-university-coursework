#include <stdio.h>

void foo(int n) {
    if (n <= 16) {
        foo(n + 3);
        printf("%d ", n % 10);
        foo(n * 4);
   }
}

int main(void) {
    foo(1);
    putchar('\n');
    return 0;
}