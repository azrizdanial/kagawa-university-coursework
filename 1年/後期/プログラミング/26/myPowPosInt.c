#include <math.h>
#include <stdio.h>

double myPowPosInt(double x, int y) {
    double result = 1.0;
    for (int i = 0; i < y; i++) {
        result *= x;
    }
    return result;
}

int main(void) {
    printf("pow(1.414, 2) = %f\t%f\n", myPowPosInt(1.414, 2), pow(1.414, 2));
    printf("pow(2.01, 30) = %f\t%f\n", myPowPosInt(2.01, 30), pow(2.01, 30));
    printf("pow(-0.5, 0)  = %f\t%f\n", myPowPosInt(-0.5, 0), pow(-0.5, 0));

    return 0;
}