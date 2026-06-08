#include <stdio.h>

int main(void) {
    int a;
    printf("整数を入力してください: ");
    scanf("%d", &a);

    if (a >= 10 && a <= 99) {
        printf("%d は 2 桁の正の整数です。", a);
    } else {
        printf("%d は 2 桁の正の整数ではありません。", a);
    }

    return 0;
}