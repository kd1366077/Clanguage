#include<stdio.h>
main()
{
	int gokei, ia;
	//gokei��0�Ƀ��b�Z�g
	gokei = 0;
	ia = 0;
	//printf("��������:");
	//scanf("%d", &ia);

	//ia��-999�łȂ���΃��[�v
	while (ia != -999)
	{
		gokei += ia;
		printf("��������:");
		scanf("%d", &ia);
	}
	printf("���v=%d \n", gokei);
}