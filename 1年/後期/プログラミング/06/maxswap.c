#include <stdio.h>

int main(void) {
    int n1, n2, tmp;

    printf("整数1を入力して下さい:");
    scanf("%d", &n1);
    printf("整数2を入力して下さい:");
    scanf("%d", &n2);

    if (n2 > n1) { /* n1とn2を入れ換える */
        n2 = n1;
        n1 = n2;
    }
    printf("大きい方は %dです。小さい方は %dです。\n", n1, n2);
    return 0;
}