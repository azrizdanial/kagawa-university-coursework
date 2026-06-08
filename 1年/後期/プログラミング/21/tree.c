#include <math.h>
#include <stdio.h>

void drawTree(int d, double x, double y, double r, double t) {
    /* d --- 再帰呼出しの深さ、(x, y) --- 枝の根元の座標             */
    /* r --- 枝の長さ、        t      --- 枝の伸びる向き（ラジアン） */
    double r1;
    if (d == 0) return; /* 打切り */

    printf("%6.3f %6.3f %6.3f %6.3f\n", x, y, x + r * cos(t), y + r * sin(t));
    r1 = r;
    drawTree(d - 1, x + r1 * cos(t), y + r1 * sin(t), 0.5 * r, t);
    r1 = 0.5 * r;
    drawTree(d - 1, x + r1 * cos(t), y + r1 * sin(t), 0.5 * r, t + 3.1416 / 2);
    drawTree(d - 1, x + r1 * cos(t), y + r1 * sin(t), 0.5 * r, t - 3.1416 / 2);
}

int main(void) {
    drawTree(6, 128, 255, 128, -3.1416 / 2);
    return 0;
}