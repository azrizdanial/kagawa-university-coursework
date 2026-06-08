#include <math.h>
#include <stdio.h>
#define K_EXP 10

double myExp(double y) {
    double sum = 1.0;
    double temp = 1.0;

    for (int n = 1; n <= K_EXP; n++) {
        temp *= y / n;
        sum += temp;
    }
    return sum;
}

int main(void) {
    for (int i = 0; i <= 256; i++) {
        double x = (i - 128) / 64.0;
        printf("exp(%f) = \t%f\t%f\n", x, myExp(x), exp(x));
    }
    return 0;
}
