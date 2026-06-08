#include <stdio.h>

int main(void) {
    int i;
    int a[5] = {1, 2, -2, -4, 5};
    int n = 5;
    for (i = 0; i < n; i++) {
        if (a[i] < 0) {
            continue; /* continue; も試せ。 */
        }
        printf("a[%d] = %2d\n", i, a[i]);
    }
    return 0;
}