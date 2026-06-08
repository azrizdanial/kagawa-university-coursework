#include <stdio.h>
int main(void) {
    int n, i, j;
    int num = 0, count = 0;
    printf("正の整数を入力してください: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            if (count % 2 == 0) {
                printf("%d", num % 10);
                num++;
            } else {
                putchar('@');
            }
            count++;
        }
        putchar('\n');
    }
    printf("end\n");
    return 0;
}