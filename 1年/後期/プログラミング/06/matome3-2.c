#include <stdio.h>

int main(void) {
    int no;

    printf("整数を入力せよ：");
    scanf("%d", &no);

    if (no == 0) puts("その数は 0です。");
    if (no > 0)
        puts("その数は正です。");
    else
        puts("その数は負です。");

    return 0;
}