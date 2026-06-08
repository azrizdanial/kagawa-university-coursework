#include <stdio.h>

int main(void) {
    int data[6][9] = {{7, 7, 5, 4, 6, 2, 3, 1, 0}, {7, -1, 5, 4, 6, 2, 3, 1, 0},
                      {5, 5, 5, 4, 6, 2, 3, 1, 0}, {4, 4, 4, 6, 6, 2, 3, 1, 0},
                      {6, 6, 6, 6, 2, 3, 1, 1, 0}, {6, 6, 6, 2, 3, 3, 1, 0, 9}};
    int m = 6, n = 9;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (data[i][j] > 0 && data[i][j] <= 7) {
                printf("\033[9%dm■\033[39m", j);
            } else {
                printf("□");
            }
        }
        putchar('\n');
    }
    return 0;
}