#include <stdio.h>

int main(void) {
    int i, j;

    for (i = 0, j = 5; i < j; i++, j--) {
        printf("i = %d, j = %d", i, j);
    }

    return 0;
}