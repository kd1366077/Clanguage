#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	int i, w[10];

	i = 0;

	printf("�z��a�Ɣz��b����������� \n");
	printf("�z��a=");
	for (i = 0; i < 10; i++)
	{
		w[i] = a[i];
		a[i] = b[i];
		printf("%d ", a[i]);
	}
	printf("\n�z��b=");
	for (i = 0; i < 10; i++)
	{
		a[i] = b[i];
		b[i] = w[i];
		printf("%d ", b[i]);
	}
}