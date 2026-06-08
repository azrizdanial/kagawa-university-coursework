#include <stdio.h>
int main(void) {
    int i, n, fact = 1;
    printf("正の数を入力してください。 ");
    scanf("%d", &n);
    for (i = 1 /* ① */; /* 通常 1 行を 3 行にわけた。*/
         i <= n /* ② */; i++ /* ③ */) {
        fact = fact * i;
    }
    printf("あなたの入力した数の階乗は %dです。\n", fact);
    return 0;
}
