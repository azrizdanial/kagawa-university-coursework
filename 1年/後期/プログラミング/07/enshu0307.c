#include <stdio.h>

int main(void) {
    int a, b, c, d;

    printf("整数 a を入力してください。: ");
    scanf("%d", &a);
    printf("整数 b を入力してください。: ");
    scanf("%d", &b);
    printf("整数 c を入力してください。: ");
    scanf("%d", &c);
    printf("整数 d を入力してください。: ");
    scanf("%d", &d);

    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    if (d > max) {
        max = d;
    }

    printf("最大値は %d です。\n", max);

    return 0;
}