#include<stdio.h>
main()
{
	int a, b, i;
	i = 0;
	b = 0;
	printf("����:");
	while (scanf("%d", &a) != EOF)
	{
		b += a;
		i++;
		printf("����:");
	}
	printf("���v=%d ����=%.2f ", b, (float)b / i);
}