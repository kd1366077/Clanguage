#include<stdio.h>
main()
{
	char st[] = "orange";
	int cnt;

	//cnt = 0;
	//;をforの最後に付けると空文になる
	for (cnt = 0; st[cnt] != '\0'; cnt++);
	{
		//cnt++;
	}
	printf("文字列:%s \n", &st[0]);
	printf("文字数は%d文字 \n", cnt);
}