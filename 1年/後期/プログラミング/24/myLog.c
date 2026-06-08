#include <math.h>
#include <stdio.h>
#define K_LOG 20

double myLog(double x) {
    double sum = 0.0;
    double t = (1.0 - x);

    for (int n = 1; n <= K_LOG; n++) {
        sum += t / n;
        t *= (1.0 - x);
    }

    return -sum;
}

int main(void) {
    for (int i = 1; i <= 128; i++) {
        double x = i / 64.0;
        printf("log(%f) = \t%f\t%f\n", x, myLog(x), log(x));
    }
    return 0;
}
