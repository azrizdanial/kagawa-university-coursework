#include <limits.h>
#include <stdio.h>

int bar(const int v[]) {
    int idx = -1;
    for (int i = 0; v[i] != INT_MIN; i++) {
        if (v[i] < 60) {
            idx = i;
        }
    }
    return idx;
}

int vx[] = {87, 98, 50, 55, 95, INT_MIN};
int vy[] = {99, 60, 42, 91, 76, 54, INT_MIN};
int vz[] = {59, 80, 76, 93, 100, 79, 60, 84, INT_MIN};
int vw[] = {88, 78, 90, 60, 100, INT_MIN};

int main(void) {
    printf("bar(vx) = %d です。\n", bar(vx));
    printf("bar(vy) = %d です。\n", bar(vy));
    printf("bar(vz) = %d です。\n", bar(vz));
    printf("bar(vw) = %d です。\n", bar(vw));

    return 0;
}