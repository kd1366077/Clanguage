#include<stdio.h>
main()
{
	int a,b,c,gokei;
	printf("������3����: ");
	scanf("%d%d%d", &a,&b,&c);
	gokei = a + b + c;
	printf("���v%d ",gokei);
	//printf("����%.2f", gokei / 3.0);
	printf("����%.2f",(float)gokei / 3);
}