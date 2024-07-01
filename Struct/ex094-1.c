#include<stdio.h>
struct day
{
	int nen;     //年
	int tsuki;   //月
	int hi;      //日
};
struct profile
{
	char name[20];      //名前
	struct day birth;   //誕生日
	char blood[5];      //血液型
};
main()
{
	struct profile pdat[5] =
	{
	   { "アインズ"    , { 2000,2,11 }, "A" },
	   { "アルベド"    , { 2000,8,24 }, "A" },
	   { "シャルティア", { 2000,2,13 }, "A" },
	   { "アウラ"		,{ 2000,6,14 }, "A" },
	   { "マーレ"      , { 2000,2,15 }, "A" },
	};
	struct profile* p;
	int i;
	p = pdat;
    
	for (i = 0; i < 5 ; i++)
	{
		//２月だけ読み込み
		if (p->birth.tsuki == 2)
		{
			printf("%s--", p->name);
			printf("%d年%d月%d日生まれ",p->birth.nen,p->birth.tsuki,p->birth.hi);
			printf("血液型--%s型\n", p->blood);
		}
		p++;
	}
}