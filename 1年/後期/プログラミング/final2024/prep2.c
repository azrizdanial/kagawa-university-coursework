#include <stdio.h>

int main(void) {
    int a, k = 9;
    printf("非負の整数を入力してください: ");
    scanf("%d", &a);
    printf("begin\n");
    for (int i = 1; i <= a; i++) {
        for (int j = 0; j < a - i; j++) {
            putchar(' ');
        }
        for (int j = 0; j < i; j++) {
            printf("%d", k % 10);
            k += 9;
        }
        putchar('\n');
    }
    printf("end\n");
    return 0;
}