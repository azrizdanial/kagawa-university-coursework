#include <stdio.h>

int main(void)  {
    int i, n, fact = 1;
    printf("正の数を入力してください。 ");
    scanf("%d", &n);
 
    for (i = 1;  /* 通常 1行に書くところを 3行にわけた。*/
                i <= n;
                        i++) {
        fact = fact * i; 
    }
    printf("あなたの入力した数の階乗は %dです。\n", fact);

    return 0;
}