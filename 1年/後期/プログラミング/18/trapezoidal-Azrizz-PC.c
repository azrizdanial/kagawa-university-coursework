#include <stdio.h>

int trapezoidal_formula(int n, double a, double b, double (*f)(double)) {
    double h = (b - a) / n;
    double sum = 0.5 * (f(a) + f(b));
    for (int i = 1; i < n; i++) {
        sum += f(a + i * h);
    }
    return sum * h;
}

int main(void) {
    int a, b, n,i ;

    printf("Input a: ");
    scanf("%d", &a);
    printf("Input b: ");
    scanf("%d", &b);
    printf("Input n: ");
    scanf("%d", &n);

    printf("区間幅: %d", );
    printf("%d 回目までの和は %f です。", i, trapezoidal_formula(n, a, b, f));
    printf("[%.3f,%.3f]で分割数 %d の結果は %f です。", a, b, n,
           trapezoidal_formula(n, a, b, f));

    return 0;
}