#include<stdio.h>
main()
{
	int num,i;
	printf("”‚Í?");
	scanf("%d", &num);

	do
	{
		i = 0;
		do 
		{
			i++;
			printf("*");

		} while (i < 5);
		printf("\n");
		num--;

	} while (num > 0);
}