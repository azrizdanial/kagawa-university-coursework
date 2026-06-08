#include <stdio.h>
int main(void) {
    int no, product = 0;

    printf("正の整数を入力してください: ");
    scanf("%d", &no);

    while (no > product) {
        printf("%d ", product);
        product += 7;
    }

    return 0;
}