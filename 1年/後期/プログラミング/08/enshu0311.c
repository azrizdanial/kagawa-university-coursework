#include <stdio.h>

int main(void) {
    int A, B;

    printf("二つの整数を入力せよ。\n");
    printf("整数 A: ");
    scanf("%d", &A);
    printf("整数 B: ");
    scanf("%d", &B);

    if (A - B > 10 || A - B < -10) {
        printf("それらの差は 11 以上です。");
    } else {
        printf("それらの差は 10 以下です。");
    }

    return 0;
}