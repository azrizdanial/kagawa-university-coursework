#include <stdio.h>

void putStarsArr(const int vc[], int no) {
    for (int i = 0; i < no; i++) {
        for (int j = 0; j < vc[i]; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main(void) {
    int arr1[] = {1, 3, 1, 0, 9, 2, 4};
    int no1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {3, 6, 7, 9, 8, 2, 0, 15};
    int no2 = sizeof(arr2) / sizeof(arr2[0]);
    int arr3[] = {2, 3, 1, 8};
    int no3 = sizeof(arr3) / sizeof(arr3[0]);

    printf("例 1\n");
    putStarsArr(arr1, no1);
    printf("--------\n例 2\n");
    putStarsArr(arr2, no2);
    printf("--------\n例 3\n");
    putStarsArr(arr3, no3);

    return 0;
}