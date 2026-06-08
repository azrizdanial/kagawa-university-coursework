#include <stdio.h>

int main(void) {
    int v[] = {49, 50, 59, 60, 69, 70, 79, 80, 89, 90, 99, 100};
    int n = sizeof(v) / sizeof(v[0]);

    for (int i = 0; i < n; i++) {
        if (v[i] < 60) {
            printf("%d 番めの %d 点は不可です。", i, v[i]);
        } else if (v[i] < 70) {
            printf("%d 番めの %d 点は可です。", i, v[i]);
        } else if (v[i] < 80) {
            printf("%d 番めの %d 点は良です。", i, v[i]);
        } else {
            printf("%d 番めの %d 点は優です。", i, v[i]);
        }
        putchar('\n');
    }

    return 0;
}
