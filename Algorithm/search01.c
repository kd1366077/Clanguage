#include<stdio.h>
main()
{
	int s, i, data[] = { 31,12,23,54,95,26,97,48,69,100 };
	printf("探索値は？ ");
	scanf("%d", &s);

	for (i = 0; i < 10; i++)
	{
		if (s == data[i])
		{
			break;
		}
	}
	if (i >= 10)
	{
		printf("見つからなかった \n");
	}
	else
	{
		printf("%dにあった \n", i);
	}
	
}