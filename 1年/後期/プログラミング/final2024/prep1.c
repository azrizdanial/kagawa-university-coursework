#include <stdio.h>

int main() {
    int a;
    printf("正の整数を入力してください: ");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++) {
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