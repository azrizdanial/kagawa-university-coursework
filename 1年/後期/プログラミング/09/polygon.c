#include <math.h> /* sin, cos のために必要 — 教 p.217*/
#include <stdio.h>
int main(void) {
    int n, i;
    printf("nを入力して下さい: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        double theta1 = 2 * 3.1416 * i / n;
        double theta2 = 2 * 3.1416 * (i + 1) / n;
        printf("%.3f %.3f %.3f %.3f\n",
             100 * cos(theta1), 100 * sin(theta1),
             100 * cos(theta2), 100 * sin(theta2));
    }
    return 0;
}