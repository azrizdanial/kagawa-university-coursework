#include <math.h>

#include "svg.h"

#define N 7
#define MAX 1000

int main(void) {
    double x, y;
    double px, py; /* previous point */
    int i, k;

    start();
    stroke(hsl360(0, 0, 0));

    for (i = 0; i <= MAX; i++) {
        x = -10 + i / 50.0;

        /* Fourier sum */
        y = 0;
        for (k = 1; k <= N; k++) {
            y += sin(k * x) / k;
        }

        /* transform */
        double sx = 148 + 10 * x;
        double sy = 105 + 40 * y;

        /* draw only after first point exists */
        if (i > 0) {
            line(px, py, sx, sy);
        }

        px = sx;
        py = sy;
    }

    finish();
    return 0;
}
