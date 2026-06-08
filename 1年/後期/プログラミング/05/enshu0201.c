#include <stdio.h>

int main (void){

    int a,b,c=100;

    puts("二つの整数を入力せよ。");
    printf("整数 a:");
    scanf("%d", &a);
    printf("整数 b:");
    scanf("%d", &b);

    printf("a の値 は b の値の %.0f%% です。\n",(double)a / b*c);

    return 0;
}