#include <stdio.h>
int main(void) {
    int n, i, x;

    printf("個数を入力してください: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        x = (2 * i * i) - (5 * i) + 2;
        printf("%d ", x);
    }
    printf("\n");

    return 0;
}