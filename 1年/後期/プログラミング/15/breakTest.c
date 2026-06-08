#include <stdio.h>

#define NUM 5

int main(void) {
    int i;
    int a[NUM] = {1, 2, -2, -4, 5};

    for (i = 0; i < NUM; i++) {
        if (a[i] < 0) {
            break;
        }
        printf("a[%d] = %2d\n", i, a[i]);
    }

    return 0;
}