#include<stdio.h>
main()
{
	char shori;
	int su, su2;
	printf("処理を入力:");
	scanf("%c", &shori);

	printf("整数を入力:");
	scanf("%d%d",& su,&su2);

	switch (shori)
	{
		//最大値を求める
	case 'd':
		if (su>su2)
		{
			printf("最大値は%dです \n", su);
		}
		else
		{
			printf("最大値は%dです \n", su2);
		}
		break;
		//最小値を求める
	case 's':
		if (su < su2)
		{
			printf("最小値は%dです \n", su);
		}
		else
		{
			printf("最小値は%dです \n", su2);
		}
		break;
		//平均を求める
	case 'h':
		printf("平均は%.2fです \n", (float)(su + su2) / 2);
		break;
		//合計を求める
	case 'g':
		printf("合計は%dです \n", su + su2);
		break;
	default:
		printf("エラー \n");
	}
}