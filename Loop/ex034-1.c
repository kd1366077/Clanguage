#include<stdio.h>
main()
{
	int num;
	printf("����?");
	scanf("%d", &num);
	do
	{
		num--;
		printf("***** \n");
	} while (num > 0);
}
