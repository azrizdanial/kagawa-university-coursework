#include < stdio.h>

int main(void) {
    int i;

    for (i = 1; i <= 60; i++) {
        if (i % 2 != 0 || i % 3 != 0) {
            int a = i % 2, b = i % 3;
            printf("%d を 2 で割った余りは %d、3 で割った余りは %d です。\n", i,
                   a, b);
        }
    }

    return 0;
}