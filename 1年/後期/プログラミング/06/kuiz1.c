#include <stdio.h>

int main(void) {
    int k = 6;

    if (0 < k && k < 8) {
        printf("A ");
    } else {
        printf("B ");
    }
    if (k < 3 || 5 < k) {
        printf("C ");
    } else {
        printf("D ");
    }
    puts("");
    return 0;
}