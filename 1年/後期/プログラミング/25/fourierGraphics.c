#include <math.h>

#include "svg.h"

#define N 7

double fourier(double x) {
    double y = 0.0;
    for (int j = 1; j <= N; j++) {
        y += sin(j * x) / j;
    }
    return y;
}

int main(void) {
    start();

    double x1 = -10.0;
    double y1 = fourier(x1);

    for (int i = 1; i <= 1000; i++) {
        double x2 = -10.0 + i / 50.0;
        double y2 = fourier(x2);

        stroke(hsl360(i * 360 / N, 100, 50));
        line(148.0 + 10.0 * x1, 105.0 + 40.0 * y1, 148.0 + 10.0 * x2,
             105.0 + 40.0 * y2);

        x1 = x2;
        y1 = y2;
    }

    finish();
    return 0;
}
