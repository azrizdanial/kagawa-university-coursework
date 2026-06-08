#include <math.h>
#include <stdio.h>
#define K_EXP 10
#define K_LOG 20

double myExp(double y) {
    double sum = 1.0;
    double temp = 1.0;

    for (int n = 1; n <= K_EXP; n++) {
        temp *= y / n;
        sum += temp;
    }
    return sum;
}
double myLog(double x) {
    double sum = 0.0;
    double t = (1.0 - x);

    for (int n = 1; n <= K_LOG; n++) {
        sum += t / n;
        t *= (1.0 - x);
    }

    return -sum;
}

double myPowSmall(double x, double y) {
    return myExp(y * myLog(x));
}

int main(void) {
    printf("pow(1.414, 0.5)  = \t%f\t%f\n", myPowSmall(1.414, 0.5),
           pow(1.414, 0.5));
    printf("pow(0.707, -0.5) = \t%f\t%f\n", myPowSmall(0.707, -0.5),
           pow(0.707, -0.5));
    printf("pow(1.2, 0.25)   = \t%f\t%f\n", myPowSmall(1.2, 0.25),
           pow(1.2, 0.25));

    return 0;
}
