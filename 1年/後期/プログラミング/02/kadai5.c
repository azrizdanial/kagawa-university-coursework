#include <stdio.h>

int main(void)
{
    int n1;
    printf("整数を入力してください:"); 
    scanf("%d", &n1);

    int sum = (n1*2)+1;
    printf("その数に 2 を掛けて 1 を足すと %d です。\n", sum);

    return 0;
}