#include<stdio.h>
main()
{
	int num, gokei;
	gokei = 0;

	while(1)
	{
		printf("数を入れて:");
		scanf("%d", &num);
		if (num == -999)break;
			gokei += num;
	}
	printf("合計=%d ",gokei);
	
}