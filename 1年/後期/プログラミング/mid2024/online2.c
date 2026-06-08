#include <stdio.h>

int main(void) {
    int no, i, j;
    int num = 0, count = 0;

    printf("正の整数を入力してください: ");
    scanf("%d", &no);

    for (i = 1; i <= no; i++) {
        for (j = 1; j <= i; j++) {
            if (count % 2 == 0) {
                printf("%d", num%10);
                num++;
            } else {
                putchar('@');
            }
            count++;
        }
        printf("\n");
    }
    printf("end\n");

    return 0;
}