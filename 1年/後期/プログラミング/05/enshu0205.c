#include <stdio.h>

int main (void){

    int a,b;

    puts("二つの整数を入力せよ。");
    printf("整数 a:");
    scanf("%d", &a);
    printf("整数 b:");
    scanf("%d", &b);

    printf("a の値 は b の値の %f%% です。\n",(double)a/b*100);

    return 0;
}