#include <stdio.h>

int is_even(int v) {
    if (v % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main(void) {
    int x;
    printf("Input a number: ");
    scanf("%d", &x);
    printf("%d\n", is_even(x));
    return 0;
}