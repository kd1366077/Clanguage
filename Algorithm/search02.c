#include<stdio.h>
main()
{
	int s, i, data[11] = { 19,27,32,45,52,68,73,84,97,17,55 };
	printf("探索値を入力:");
	scanf("%d", &s);
	
	for (data[10] = s, i = 0; s != data[i]; i++);
	
		if (i == 10)
		{
			printf("見つからなかった \n");
		}
		else
		{
			printf("%dを、data[%d]で発見 \n",s, i);
		}
	
}