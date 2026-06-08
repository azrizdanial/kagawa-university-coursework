#include <stdio.h>
int main(void) {
    int no, i;
    double x, sum;

    printf("項数を入力してください: ");
    scanf("%d", &no);

    for (i = 1; i <= no; i++) {
        double x = 1.0 / (2 * i - 1);
        if (i % 2 != 0) {
            sum += x;
        } else {
            sum -= x;
        }
        printf("第 %d 項まででの近似値: %.3f\n", i, sum * 4);
    }
    printf("円周率の近似値は: %.3f\n", sum * 4);
    return 0;
}