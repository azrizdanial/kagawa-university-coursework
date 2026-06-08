#include <stdio.h>

int main(void) {
    int n;

    n = 3;
    do {
        printf("%d ", n);
    } while (n-- > 0);

    return 0;
}