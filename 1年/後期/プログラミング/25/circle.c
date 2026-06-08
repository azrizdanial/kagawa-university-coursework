#include "svg.h"

#define C 12

int main(void) {
    double x,y,w,h;
    start();
    for (int i = 0; i <= C; i++) {
        x = 130.0;
        y = 130.0 - (i * 5.0);
        w = 130.0 - (i * 10.0);
        h = 130.0 - (i * 10.0);
        
        stroke(hsl360(i * 360.0 / C, 100, 50));
        fill(hsl360(i * 360.0 / C, 100, 50));
        ellipse(x, y, w, h);
    }
    finish();
    return 0;
}