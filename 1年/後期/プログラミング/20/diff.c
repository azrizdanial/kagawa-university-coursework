#include <stdio.h>

void diff(int v[], int no) {
    for (int i = no - 1; i > 0; i--) {
        v[i] = v[i] - v[i - 1];
    }
}

void print_array(const int v[], int n) {
    printf("{ ");
    for (int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("}\n");
}

int main(void) {
    int arr[] = {7, -2, 0, 4, 13, 2, 9, -8, 1, 3};
    int no = sizeof(arr) / sizeof(arr[0]);

    int i;
    printf("適用前: ");
    print_array(arr, no);
    diff(arr, no);
    printf("適用後: ");
    print_array(arr, no);

    return 0;
}