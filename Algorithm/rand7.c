#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int ans,num,cnt;
	cnt = 0;
	scanf("%d", &ans);

	srand(time(0));
	rand();
	ans = rand() % 1000 + 1;
	printf("�P�`�P�O�O�O�����: \n");

	do
	{
		printf("������̐��́H");
		scanf("%d", &num);
		if (ans < num)
		{
			printf("������̐���菬�����ł� \n");
		}
		if (ans > num)
		{
			printf("������̐����傫���ł� \n");
		}
		cnt++;
	} while (ans != num);
	printf("����!!%d��ڂœ�����܂��� \n", cnt);
}