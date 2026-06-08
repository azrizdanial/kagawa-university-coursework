#include <stdio.h>

int main(void) {
    int i, j, n;
    printf("nを入力して下さい:"); scanf("%d", &n);
    for (i = 1; i <= n; i++) {    
        for (j = 1; j <= i; j++) {
            printf("%d", j % 10); 
        }
        printf("\n");
    }
    return 0;
}