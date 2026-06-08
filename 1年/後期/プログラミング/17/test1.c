#include <stdio.h>

int main(void) {
    int i;
    int data[] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55};
    int n = 10;  // 要素数

    for (i = n - 1; i >= 0; i--) {
        printf("%d ", data[i]);
    }
    printf("\n");

    return 0;
}