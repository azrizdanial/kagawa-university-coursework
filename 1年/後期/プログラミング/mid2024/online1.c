#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 60; i++) {
        if (i % 2 != 0 || i % 3 != 0) {
            printf("%d を 2 で割った余りは %d、3 で割った余りは %d です。\n", i,
                   i % 2, i % 3);
        } else {
            continue;
        }
    }

    return 0;
}