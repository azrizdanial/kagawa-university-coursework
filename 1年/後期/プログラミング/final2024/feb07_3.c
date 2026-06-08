#include <stdio.h>

int sumn23(int n) {
    int sum = 0, count = 0;
    for (int k = 1; count < n; k += 2) {
        if (k % 3 != 0) {
            count++;
            sum += k;
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