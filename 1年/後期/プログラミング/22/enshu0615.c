#include <stdio.h>

void put_count(void) {
    static int a = 1;
    printf(" put_count: %d 回目\n", a++);
}

int main(void) {
    put_count();
    put_count();
    put_count();

    return 0;
}