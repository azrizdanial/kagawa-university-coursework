#include <stdio.h>

int oddc54(int n) {
    int a = 4;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (a % 2 == 0) {
            count++;
        }
        a = (5 * a) / 4;
    }

    return count;
}

#include <stdio.h>

int oddc54(int n);

int main(void) {
    int data[] = {0, 5, 10, 20, 30, 50};
    int n = sizeof(data) / sizeof(data[0]);

    for (int i = 0; i < n; i++) {
        int m = data[i];
        printf("oddc54(%d) = %d\n", m, oddc54(m));
    }

    return 0;
}
