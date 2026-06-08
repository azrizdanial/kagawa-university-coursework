#include <stdio.h>

int main(void) {
    int no, power = 2;

    printf("正の整数を入力してください: ");
    scanf("%d", &no);

    while (power <= no) {
        printf("%d ", power);
        power *= 2;
    }
    return 0;
}