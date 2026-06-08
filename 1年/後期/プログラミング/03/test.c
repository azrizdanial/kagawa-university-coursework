// 読み込んだ整数値の最下位桁の数字を表示

#include <stdio.h>

int main(void)
{
	printf("%d/%d\n", 10, 24);
	printf("(%d, %d, %d)\n", 12, 34, 5);
    printf("%.4f\n", 1.0 / 3);
    printf("%x\n", 127);
    printf("%d\n", 3 / 10);
    printf("%d\n", 11 % 3);
    puts("100%");
    printf("100%%\n");
    printf("%d/%d\n", 10, 24);
    printf("(%d, %d, %d)\n", 12, 34, 5);
    printf("%f\n", (double)1 / 2); //BETUL
    printf("%f\n", 1.0 / 2); //BETUL
    printf("%f\n", (double)(1 / 2)); //SALAH
    printf("%.4f\n", 1.0 / 3); //Output=0.333
    printf("%x\n", 32); //Output=20
	
	return 0;
}