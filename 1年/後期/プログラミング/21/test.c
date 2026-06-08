#include <stdio.h>

void bar(int n) {
    if (n > 0) {
        bar(n - 2);
        printf("%d ", n);
        bar(n / 2);
    }
}

int main(void) {
    bar(5);
    return 0;
}