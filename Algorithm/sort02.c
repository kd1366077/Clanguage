#include<stdio.h>
main()
{
	int data[] = { 30,7,25,16,10 };
	int w;
	int i, j;

	for (i = 4; i > 0; i--)    //比較回数ループ
	{
		for (j = 0; j < i; j++)
		{
			if ((data[j] > data[i]))
			{
				//入れ替え処理
				w = data[j];
				data[j] = data[j+1];
				data[j+1] = w;
			}
		}
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d\n", data[i]);
	}
}