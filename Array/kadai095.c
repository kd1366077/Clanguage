#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	int i,gokei,gokei2;
	gokei = 0;
	gokei2 = 0;

	printf("�z��a=");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);

		gokei =gokei + a[i];
	}
	printf("\n���v=%d \t����=%d \n", gokei,gokei/10);
	printf("�z��b=");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", b[i]);

		gokei2 = gokei2 + b[i];
	}
	printf("\n���v=%d \t����=%d \n", gokei2, gokei2 / 10);
}