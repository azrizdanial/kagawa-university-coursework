#include <stdio.h>
int main(void) {
    int no, i, x, y, a = 1;
    printf("個数を入力してください: ");
    scanf("%d", &no);

    for (i = 1; i <= no; i++) {
        if (i % 2 != 0) {
            printf("第 %d 項は %d\n", i, a);
            x = -3 * a + 1;
            a = x;
        } else {
            printf("第 %d 項は %d\n", i, a);
            y = -3 * a + 2;
            a = y;
        }
    }
    return 0;
}