#include <stdio.h>

int main(void) {
    int a;

    printf("正の整数を入力してください: ");
    scanf("%d", &a);

    a = a % 10;
    if (a == 6) {
        printf("最下位の桁は 6 です。");
    } else if (a == 9) {
        printf("最下位の桁は 9 です。");
    } else {
        printf("最下位の桁は 6 でも 9 でもありません。");
    }

    return 0;
}