#include "svg.h"

#define N 50

int main(void) {
    double x1, y1, x2, y2;

    start();

    for (int i = 0; i <= N; i++) {
        stroke(hsl360(i * 360.0 / N, 100, 50));
        x1 = 40.0 + (200.0 * i) / N;
        y1 = 25.0 + (160.0 * (N - i)) / N;
        x2 = 40.0 + (200.0 * (N - i)) / N;
        y2 = 185.0;

        line(x1, y1, x2, y2);
    }

    finish();
    return 0;
}
