#include < stdio.h>

int iLog7(int n) {
    int k;
    for (k = 0; n > 0; k++) {
        n /= 7;
    }
    return k;
}

int main(void) {
    int data[] = {1, 7, 100, 10000, 1000000, 1000000000};
    int no = sizeof(data) / sizeof(data[0]);

    for (int i = 0; i < no; i++) {
        int m = data[i];
        printf("iLog7(%d)= %d\n", m, iLog7(m));
    }
    return 0;
}