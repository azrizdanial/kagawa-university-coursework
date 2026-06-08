#include <stdio.h>

int sumn23(int m) {
    int sum = 0, count = 0;
    for (int i = 1; count < m; i += 2) {
        if (i % 3 != 0) {
            sum += i;
            count++;
        }
    }

    return sum;
}

int main(void) {
    int data[] = {0, 5, 10, 15, 50, 100};
    int n = sizeof(data) / sizeof(data[0]);  // data の要素数

    for (int i = 0; i < n; i++) {
        int m = data[i];
        printf("sumn23(%d) = %d\n", m, sumn23(m));
    }
    return 0;
}