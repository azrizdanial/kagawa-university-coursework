#include <stdio.h>

int main(void) {
    int n, i, j, c = 0;

    printf("正の整数を入力して下さい: ");
    scanf("%d", &n);

    printf("start\n");

    for (i = 0; i < n; i += 2) {
        for (j = 0; j <= i; j++) {
            printf("%d", c % 10);
            c += 2;
        }
        putchar('\n');
    }
    printf("end\n");

    return 0;
}
