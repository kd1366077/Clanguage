#include<stdio.h>
main()
{
	float a, b, c,gokei;
	gokei = a + b + c;
	printf("1つ目の実数: \n");
	scanf("%f", &a);
	printf("2つ目の実数: \n");
	scanf("%f", &b);
	printf("3つ目の実数: \n");
	scanf("%f", &c);
	printf("合計=%f", gokei);
	printf("平均=%f", gokei / 3);
}