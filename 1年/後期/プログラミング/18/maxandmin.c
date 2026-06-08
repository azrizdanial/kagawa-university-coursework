#include <stdio.h>

int main(void) {
    int grades[10][5] = {{64, 89, 46, 98, 75}, {23, 13, 56, 33, 29},
                         {89, 92, 98, 88, 98}, {45, 42, 56, 60, 39},
                         {65, 62, 60, 70, 64}, {95, 94, 92, 90, 130},
                         {88, 74, 89, 80, 78}, {-11, 1, 9, 18, 14},
                         {72, 84, 82, 77, 92}, {46, 39, 5, 80, 21}};
    int max[5];
    int min[5];
    int m = 10, n = 5;
    int i, j;

    for (j = 0; j < n; j++) {
        max[j] = grades[0][j];
        min[j] = grades[0][j];

        for (i = 1; i < m; i++) {
            if (grades[i][j] > max[j]) {
                max[j] = grades[i][j];
            }

            if (grades[i][j] < min[j]) {
                min[j] = grades[i][j];
            }
        }
    }

    for (j = 0; j < n; j++) {
        printf("第 %d 回のテストの最高点は %3d 点、最低点は %3d 点です。\n",
               j + 1, max[j], min[j]);
    }

    return 0;
}