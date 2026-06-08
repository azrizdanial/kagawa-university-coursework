#include <stdio.h>
int main(void) {
    int no, i, a = 0, count = 0;
    printf("正の整数を入力してください: ");
    scanf("%d", &no);

    for (i = 1; i <= no; i++) {
        if (count != 8) {
            count++;
            printf("%d ", a);
            a += 4;
        } else {
            printf("\n%d ", a);
            a += 4;
            count = 0;
            continue;
        }
    }

    return 0;
}