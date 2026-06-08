#include "svg.h"

#define N 8

void drawSquare(double x, double y, double size, int n) {
    if (n == 0) return;

    double h = size / 2;

    fill(hsl360(n * 360 / N, 100, 50));

    rect(x, y + h, h, h);
    rect(x + h, y, h, h);

    drawSquare(x, y + h, h, n - 1);
    drawSquare(x + h, y, h, n - 1);
}

int main(void) {
    start();

    fill(hsl360(0, 100, 50));
    rect(50, 25, 150, 150);

    drawSquare(50, 25, 150, 7);

    finish();
    return 0;
}
