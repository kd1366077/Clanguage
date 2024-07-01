#include<stdio.h>
main()
{
	float  a[3][2],gokei;
	int i,j;
	
	for (j = 0; j < 3; j++)
	{

		for (i = 0, gokei = 0; i < 2; i++)
		{
			printf("a[%d][%d]=",j, i);
			scanf("%f", &a[j][i]);
			gokei += a[j][i];
		}
		printf("%ds–Ú‚Ì•½‹Ï=%.2f \n", j, gokei / 2);
	}
}