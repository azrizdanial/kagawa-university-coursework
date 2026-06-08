#include <stdio.h>

int main(void) {
    int no;
    printf("正の整数を入力してください: ");
    scanf("%d", &no);

    if (no <= 0) {
        printf("end\n");
        return 0;
    }

    int num = 0;
    int count = 0;
    int i, j;

    for (i = 1; i <= no; i++) {
        for (j = 1; j <= i; j++) {
            if (count % 2 == 0) {
                printf("%d", num);
                num++ % 10;
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