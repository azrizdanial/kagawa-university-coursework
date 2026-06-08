#include <stdio.h>

int main(void) {
    int a;
    printf("非負の整数を入力してください: ");
    scanf("%d", &a);
    for (int i = a; i >= 0; i--) {
        printf("%d", i);
        if (i % 9 == 0) {
            putchar('\n');
        } else if (i % 4 == 0) {
            putchar(';');
        } else {
            putchar(',');
        }
    }
    return 0;
}