#include <stdio.h>
// _課題: プログラミング, 22週目, maxSoFar.c

int maxSoFar(int no) {
    static int x = 0;
    if (no < 0) {
        int temp = x;
        x = 0;
        return temp;
    }
    if (no > x) {
        x = no;
    }
    return x;
}

int main(void) {
    int a, b;
    do {
        printf("整数を入力してください: ");
        scanf("%d", &a);
        printf("これまでの非負の入力の最大値は %d です。\n", maxSoFar(a));
        printf("入力を続けますか? (Yes -> 0/No -> 9): ");
        scanf("%d", &b);
    } while (b == 0);

    return 0;
}
