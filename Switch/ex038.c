#include<stdio.h>
mian()
{
	int su;
	printf("���������:");
	scanf("%d", &su);
	switch (su / 10)
	{
	case '1':
		printf("10�_�� \n");
		break;
	case '2':
		printf("20�_�� \n");
		break;
	case '3':
		printf("30�_�� \n");
		break;
	case'4':
		printf("40�_�� \n");
		break;
	default:
		printf("�G���[ \n");
	}
}