#include <limits.h>
#include <stdio.h>
// ＿課題職別用コメント

int maxOfArray(const int no[]) {
    int max = INT_MIN;
    for (int i = 0; no[i] != INT_MIN; i++) {
        if (no[i] > max) {
            max = no[i];
        }
    }
    return max;
}

int main(void) {
    int test1[] = {10, -11, 12,  7,
                   6,  -15, -16, INT_MIN};  // maxOfArray(test1) は 12
    int test2[] = {8, 14, -12, -8,     9,
                   5, 24, -4,  INT_MIN};  // maxOfArray(test2) は 24
    int test3[] = {INT_MIN};              // maxOfArray(test3) は INT_MIN
    int test4[] = {9, INT_MIN};           // maxOfArray(test4) は 9

    printf("test1の最大値: %d\n", maxOfArray(test1));
    printf("test2の最大値: %d\n", maxOfArray(test2));
    printf("test3の最大値: %d\n", maxOfArray(test3));
    printf("test4の最大値: %d\n", maxOfArray(test4));
    return 0;
}