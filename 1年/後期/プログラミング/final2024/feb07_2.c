#include <stdio.h>

int main(void) {
    int i, j, k = 9, n;
    printf("非負の整数を入力してください: ");
    scanf("%d", &n);
    printf("begin\n");
    for (i = 0; i < n; i++) {
        for (j = 1; j < n - i; j++) {
            putchar(' ');
        }
        for (; j <= n; j++) {
            printf("%d", k % 10);
            k += 9;   
        }
        putchar('\n');
    } 
    printf("end\n");
    return 0;
}