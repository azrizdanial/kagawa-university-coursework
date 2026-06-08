#include "svg.h"

#define C 4

int main(void) {
    start();
    noFill();

    double cx = 100.0;
    double cy = 105.0;

    int n = 1;

    for (int i = 0; i < C; i++) {
        double w = 100.0 / n;
        double h = w;

        stroke(hsl360(i * 360.0 / C, 100, 50));

        for (int j = 0; j < n; j++) {
            double x = cx - (n - 1) * h / 2.0 + j * h;
            ellipse(x, cy, w, w);
            ellipse(x + 100.0, cy, w, w);
        }

        n *= 2;
    }

    finish();
    return 0;
}
