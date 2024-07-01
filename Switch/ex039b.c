#include<stdio.h>
main()
{
	char shori;
	int su, su2,su3,s;
	printf("処理を入力:");
	scanf("%c", &shori);

	printf("整数を入力:");
	scanf("%d%d%d",& su,&su2,&su3);

	switch (shori)
	{
		//最大値を求める
	case 'd':
		s = su;
		if (s < su2) { s = su2; }
		if (s < su3) { s = su3; }
		{
			printf("最大値は%dです \n", s);
		}
		break;
		//最小値を求める
	case 's':
		s = su;
		if (s > su2) { s = su2; }
		if (s > su3) { s = su3; }
		{
			printf("最小値は%dです \n", s);
		}
		break;
		//平均を求める
	case 'h':
		printf("平均は%.2fです \n", (float)(su + su2 + su3) / 3);
		break;
		//合計を求める
	case 'g':
		printf("合計は%dです \n", su + su2 +su3 );
		break;
	default:
		printf("エラー \n");
	}
}