#include<stdio.h>
main()
{
	int num, gokei;
	gokei = 0;

	while(1)
	{
		printf("”‚ğ“ü‚ê‚Ä:");
		scanf("%d", &num);
		if (num == -999)break;
			gokei += num;
	}
	printf("‡Œv=%d ",gokei);
	
}