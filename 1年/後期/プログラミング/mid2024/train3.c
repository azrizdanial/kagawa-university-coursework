#include <stdio.h>

int main(void) {
    int len;
    int k = 0;

    printf("正の整数を入力してください: ");
    scanf("%d", &len);
    for (int i = 1; i <= len; i++) {
        for (int j = 1; j <= i; j++) {
            if (k % 2 == 0) {
                printf("%d", k / 2 % 10);
            } else {
                putchar('@');
            }
            k++;
        }
        putchar('\n');
    }
    printf("end\n");

    return 0;
}