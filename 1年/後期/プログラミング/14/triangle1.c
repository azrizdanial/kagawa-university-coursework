#include <stdio.h>

int main(void) {
    int i, j, n;

    printf("正の整数を入力して下さい: ");
    scanf("%d", &n);

    printf("start\n");
    for (i = 0; i < n--; i++) {
        for (j = 0; j <= n - i; j++) {
            printf("%d", j % 10); /* ただし i % 10 または j % 10 */
        }
        putchar('\n');
    }
    printf("end\n");

    return 0;
}