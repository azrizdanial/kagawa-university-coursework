#include <stdio.h>
int main(void) {
    int n, count = 1, k = 1;
    printf("正の整数を入力してください: ");
    scanf("%d", &n);
    printf("start\n");

    for (int i = 0; i < n; i++) {
        for (int j = n; j > i; j--) {
            if (count % 3 == 0) {
                putchar('*');
            } else {
                printf("%d", k % 10);
                k++;
            }
            count++;
        }
        putchar('\n');
        count = 1;
    }
    printf("end\n");
    return 0;
}