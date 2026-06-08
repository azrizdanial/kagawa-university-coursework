#include "svg.h"

int main(void) {
    start();
    noFill();

    ellipse(150, 100, 150, 150);

    for (int i = 0; i < 100; i++) {
        stroke(hsl360(i * 7, 100, 50));
        ellipse(150, 100, 150 - i * 10, 150 - i * 10);
    }

    stroke(hsl360(0, 0, 0));

    for (int i = 0; i < 2; i++) {
        int x = 110 + 80 * i;

        ellipse(x, 80, 50, 50);

        fill(hsl360(0, 0, 0));
        ellipse(x, 80, 20, 20);
        noFill();
    }
    rect(125, 130, 50, 20);
    finish();
    return 0;
}