#include<stdio.h>
main()
{
	float box[3], gokei;
	int  i;
	gokei = 0;
			
		for (i = 0; i < 3; i++)
		{
			printf("ŽÀ”‚ð“ü—Í:");
			scanf("%f", &box[i]);
			gokei += box[i];
	    }
		printf("‡Œv‚Í%.2f‚Å‚· \n", gokei);
		printf("•½‹Ï‚Í%.2f‚Å‚· \n", gokei / 3);
}