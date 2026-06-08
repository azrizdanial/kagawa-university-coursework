#include <stdio.h>

#define NUM 5

int main(void) {
    int i;
    int a[NUM];

    for (i = 0; i < NUM; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}