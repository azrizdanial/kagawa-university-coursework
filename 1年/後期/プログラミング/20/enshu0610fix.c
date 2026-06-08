#include <stdio.h>

void intary_rcpy(int v1[], const int v2[], int n) {
    for (int i = 0; i < n; i++) {
        v1[i] = v2[n - 1 - i];
    }
}

int main(void) {
    int a[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int b[8];

    intary_rcpy(b, a, 8);

    for (int i = 0; i < 8; i++) {
        printf("%d ", b[i]);
    }
    return 0;
}
