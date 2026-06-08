#include <stdio.h>

int main(void) {
    int a;

    printf("整数を入力せよ。: ");
    scanf("%d", &a);

    if (a < 0) {
        printf("絶対値は %d です。", a * -1);
    } else {
        printf("絶対値は %d です。", a);
    }
    return 0;
}