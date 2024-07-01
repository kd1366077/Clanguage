#include<stdio.h>
mian()
{
	int su;
	printf("整数を入力:");
	scanf("%d", &su);
	switch (su / 10)
	{
	case '1':
		printf("10点台 \n");
		break;
	case '2':
		printf("20点台 \n");
		break;
	case '3':
		printf("30点台 \n");
		break;
	case'4':
		printf("40点台 \n");
		break;
	default:
		printf("エラー \n");
	}
}