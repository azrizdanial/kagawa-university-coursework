#include <limits.h>
#include <stdio.h>

int findLast(int v[]) {
    int sum = 0, idx = -1;
    for (int i = 0; v[i] != INT_MIN; i++) {
        sum += v[i];
        if (sum > 0) {
            idx = i;
        }
    }
    return idx;
}

int vx[] = {1, 2, -3, 2, 2, -1, -6, 2, INT_MIN};
int vy[] = {-1, 2, 2, -3, -1, 3, 1, -1, -3, INT_MIN};
int vz[] = {-3, 1, -1, 2, -3, 1, 1, INT_MIN};
int vw[] = {INT_MIN};

int main(void) {
    printf("findLast(vx) = %d です。\n", findLast(vx));
    printf("findLast(vy) = %d です。\n", findLast(vy));
    printf("findLast(vz) = %d です。\n", findLast(vz));
    printf("findLast(vw) = %d です。\n", findLast(vw));

    return 0;
}