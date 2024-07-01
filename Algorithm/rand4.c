#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int un,i;

	srand(time(0));
	un = rand() % 5 + 1;
	printf("¡“ú‚Ì‰^¨‚Í,");

	for (i = 0; i < un; i++)
	{
		printf("š ");
	}
	printf("‚Å‚· \n");
}