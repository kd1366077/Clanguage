#include<stdio.h>
main()
{
	int gokei, ia;
	//gokeiを0にリッセト
	gokei = 0;
	ia = 0;
	//printf("数を入れて:");
	//scanf("%d", &ia);

	//iaが-999でなければループ
	while (ia != -999)
	{
		gokei += ia;
		printf("数を入れて:");
		scanf("%d", &ia);
	}
	printf("合計=%d \n", gokei);
}