#include <stdio.h>
#include <math.h>

int main(void) {
    int n, i, j;

    printf("nを入力して下さい: "); scanf("%d", &n);

    for (i = 0; i < n; i++) {
        double th1 = 2 * 3.1416 *  i / n;
        for (j = i + 1; j < n; j++) {
            double th2 = 2 * 3.1416 *  j / n;
            printf("%.3f %.3f %.3f %.3f\n",
                100 * cos(th1), 100 * sin(th1),
                100 * cos(th2), 100 * sin(th2));
        }
    }

    return 0;
}