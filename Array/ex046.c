#include<stdio.h>
main()
{
	int i,j,gokei;
	int a[][3] = { {10,20,30},{ 1,2,3 } };

	for (j = 0; j < 2; j++)
	{
		for (gokei = 0, i = 0; i <= 2; i++)
		{
			printf("a[%d][%d]=%d \n\n", j, i, a[j][i]);
			gokei += a[j][i];
		}
		printf("%ds–Ú‚Ì‡Œv=%d \n\n\n", j, gokei);
	}
}