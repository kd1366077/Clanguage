#include<stdio.h>
main()
{
	char moji[100];
	int cnt;

	printf("文字列は:");
	scanf("%s",& moji[0]);

	for (cnt = 0; moji[cnt]!='\0'; cnt++);
	{
		
	}
	printf("文字列:%s  文字数:%d \n", moji, cnt);
}