// 二つの変数に整数値を代入して表示

#include <stdio.h>

int main(void)
{
	int A,B;							// xとyはint型の変数

	A = 57;								// xに57を代入
	B = A + 12;							// yにx + 12を代入

	printf("Aの値は%dです。\n", A);		// xの値を表示
	printf("Bの値は%dです。\n", B);		// yの値を表示

	return 0;
}