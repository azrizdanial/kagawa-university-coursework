#include <stdio.h>

double function(double x) {
    return 1.0 / (1.0 + x * x);
}

double trapezoidal_formula(double a, double b, int n) {
    double h = (b - a) / n;
    printf("区間幅: %.3f\n", h);

    double sum = 0.0;

    sum += 0.5 * function(a);
    sum += 0.5 * function(b);

    for (int i = 1; i < n; i++) {
        double x = a + i * h;
        sum += function(x);

        if (i % 10 == 0) {
            printf("%d 回目までの和は %.3f です。\n", i, sum * h);
        }
    }

    return sum * h;
}
int main(void) {
    double a, b;
    int n;

    printf("Input a: ");
    scanf("%lf", &a);
    printf("Input b: ");
    scanf("%lf", &b);
    printf("Input n: ");
    scanf("%d", &n);

    printf("[%.3f,%.3f]で分割数 %d の結果は %f です。", a, b, n,
           trapezoidal_formula(a, b, n));

    return 0;
}