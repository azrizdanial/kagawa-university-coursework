#include <stdio.h>

void printQuaternary(int n) {
    if (n >= 4) {
        printQuaternary(n / 4);
    }
    printf("%d", n % 4);
}

int main(void) {
    int num;
    do {
        printf("整数を入力してください: ");
        scanf("%d", &num);
        printf("その数の 4 進数による表現は ");
        printQuaternary(num);
        printf(" です。\n");
    } while (num != 0);

    return 0;
}

//quaternary.c