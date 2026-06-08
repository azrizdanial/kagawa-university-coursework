#include <stdio.h>

int main (void){

    int t;

    printf("身長を入力せと：");
    scanf("%d",&t);
    
    double g= (double)(t - 100) * 0.9; 
    printf("標準体重は %.1f です。",g );

    return 0;
}