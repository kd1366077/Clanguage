#include<stdio.h>
main()
{
	int a, b, i;
	i = 0;
	b = 0;
	printf("®”:");
	while (scanf("%d", &a) != EOF)
	{
		b += a;
		i++;
		printf("®”:");
	}
	printf("‡Œv=%d •½‹Ï=%.2f ", b, (float)b / i);
}