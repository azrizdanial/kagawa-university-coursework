#include <stdio.h>

int x = 9;

void foo(void) {
    printf("%d ", x);
}

int main(void) {
    int x = 5;
    printf("%d ", x);
    for (int i = 0; i < 2; i++) {
        int x = 2 * i;
        printf("%d ", x);
    }

    foo();

    printf("%d ", x);
    return 0;
}
