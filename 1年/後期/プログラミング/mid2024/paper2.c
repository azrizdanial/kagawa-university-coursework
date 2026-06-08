#include <stdio.h>
int main(void) {
    int i, j, n = 6;
    for (i = n; i >= 0; i -= 2) {
        for (j = i; j <= 2 * i; j += 3) {
            printf("(%d,%d) ", i, j);
        }
        putchar('\n');
    }
    return 0;
}
