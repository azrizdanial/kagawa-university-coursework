#include <stdio.h>

int main(void) {
    int a, i, j, k = 9;
    printf("非負の整数を入力してください: ");
    scanf("%d", &a);
    printf("begin\n");
    for (i = 0; i < a; i++) {
        for (j = 1; j < a - i; j++) {
            printf(" ");
        }
        for (; j <= a; j++) {
            printf("%d", k % 10);
            k += 9;
        }
        printf("\n");
    }
    printf("end\n");
    return 0;
}