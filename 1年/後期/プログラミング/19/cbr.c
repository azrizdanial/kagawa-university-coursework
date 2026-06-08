#include <stdio.h>

void a_set(int v[]) {
    v[0] = 9;
}

int main(void) {
    int a1[] = {1}, a2[] = {3};

    a_set(a1);
    a_set(a2);

    printf("a1[0] = %d\n", a1[0]);
    printf("a2[0] = %d\n", a2[0]);

    return 0;
}