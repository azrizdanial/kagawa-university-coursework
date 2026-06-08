#include <stdio.h>
int main(void) {
    int k;
    for (k = 300; k >= 100; k -= 3) {
        printf("%d ", k);
    }
    putchar('\n');
    return 0;
}