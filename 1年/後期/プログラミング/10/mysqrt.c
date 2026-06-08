#include <stdio.h>

int main(void) {
    double a; //input
    double x1, x2; //x1=old, x2=new
    double diff; //different x1,x2

    printf("平方根を求めたい正の数を入力してください: ");
    scanf("%lf", &a);
    x1 = a / 2.0;
    do {
        x2 = 0.5 * (x1 + a / x1);
        if (x2 > x1) {
            diff = x2 - x1;
        } else
            diff = x1 - x2;
        printf("現在の近似値と前項との差（の絶対値）: %.3f , %.3f\n", x2, diff);
        x1 = x2;
    } while (diff >= 0.001);
    printf("%.3f の平方根の近似値は %.3f です。", a, x2);
    return 0;
}