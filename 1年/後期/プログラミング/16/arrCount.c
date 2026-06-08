#include <stdio.h>

int main(void) {
    int even = 0, odd = 0;
    int v[] = {1, -9, 97, -12, 0, 110, -95, 46, 39, 2, 19, -89};
    int n = sizeof(v) / sizeof(v[0]);
    for (int i = 0; i < n; i++) {
        if (v[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
        printf("%d 番目の要素までの偶数の個数は %d、奇数の個数は %d です。\n",
               i, even, odd);
    }
    return 0;
}