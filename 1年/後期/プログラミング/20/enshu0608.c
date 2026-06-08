#include <stdio.h>

int min_of(const int v[], int n) {
    int min = v[0];

    for (int i = 1; i < n; i++) {
        if (v[i] < min) {
            min = v[i];
        }
    }
    return min;
}

int main(void) {
    int a[5] = {4, 100, 20, 36, -9};
    printf("最小値: %d", min_of(a, 5));

    return 0;
}