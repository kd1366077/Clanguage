#include<stdio.h>
main()
{
	char st[] = "orange";
	int cnt;

	//cnt = 0;
	//;��for�̍Ō�ɕt����Ƌ󕶂ɂȂ�
	for (cnt = 0; st[cnt] != '\0'; cnt++);
	{
		//cnt++;
	}
	printf("������:%s \n", &st[0]);
	printf("��������%d���� \n", cnt);
}