#include <stdio.h>

void foo(int x[]) {
    printf("sizeof(x) = %u\n", (unsigned)sizeof(x));
}

int main(void) {
    int a[] = {1, 2, 3};
    printf("sizeof(a) = %u\n", (unsigned)sizeof(a));
    foo(a);
    return 0;
}
