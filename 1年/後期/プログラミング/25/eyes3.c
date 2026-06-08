#include "svg.h"

#define C 3

void drawEllipses(int depth, int n, double cx, double cy) {
    if (depth == C) {
        return;
    }

    double w = 50.0 / n;
    double h = w;

    stroke(hsl360(depth * 360.0 / C, 100, 50));

    for (int j = 0; j < n; j++) {
        double x = cx - (n - 1) * h / 2.0 + j * h;
        ellipse(x, cy, w, w);
        ellipse(x + 50.0, cy, w, w);
        ellipse(x + 25.0, cy - 43.0, w, w);
    }
    drawEllipses(depth + 1, n * 2, cx, cy);
}

int main(void) {
    start();
    noFill();

    drawEllipses(0, 1, 100.0, 105.0);

    finish();
    return 0;
}
