#include <stdio.h>

int main(void) {
    int i, n;
    printf("正の整数を入力してください: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d", i);
        if (i % 5 == 0) {
            putchar('*');
        } else {
            putchar('_');
        }
        if (i % 8 == 0) {
            putchar('\n');
        } 
    }
    putchar('\n');

    return 0;
}