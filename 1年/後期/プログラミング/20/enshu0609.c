#include <stdio.h>

int rev_intary(int v[], int n) {
    int t;
    for (int i = 0; i < n / 2; i++) {
        t = v[i];
        v[i] = v[n - 1 - i];
        v[n - 1 - i] = t;
    }
    return t;
}

int main(void) {
    int a[6] = {1, 2, 3, 4, 5, 6};

    rev_intary(a, 6);

    for (int i = 0; i < 6; i++) {
        printf("%d\n", a[i]);
    }

    return 0;
}