#include<stdio.h>
main()
{
	int s, i, data[11] = { 19,27,32,45,52,68,73,84,97,17,55 };
	printf("�T���l�����:");
	scanf("%d", &s);
	
	for (data[10] = s, i = 0; s != data[i]; i++);
	
		if (i == 10)
		{
			printf("������Ȃ����� \n");
		}
		else
		{
			printf("%d���Adata[%d]�Ŕ��� \n",s, i);
		}
	
}