#include <stdio.h>

void i_set(int v) {
    v = 0;
}

int main(void) {
    int a1 = 1, a2 = 3;

    i_set(a1);
    i_set(a2);

    printf("a1 = %d\n", a1);
    printf("a2 = %d\n", a2);

    return 0;
}