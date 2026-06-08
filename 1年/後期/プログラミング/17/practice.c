#include <stdio.h>

int double_num(int n) {
    return 2 * n;
}

int main(void) {
    int x = 7;
    printf("%d\n", double_num(x));
    return 0;
}
