#include<stdio.h>
main()
{
	char data[] = "Language";
	char* p_data,ch;
	int i;
	int Flg = 0;

	printf("data[ ]=%s \n", data);
	printf("���������́H");
	scanf("%c",&ch);

	printf("�������ʂ́A");
	p_data = data;
	i = 0;

	//language��ǂݍ���
	while (*(p_data + i) != '\0')
	{
		//�����̌��𐔂���
		if (ch == *(p_data + i))
		{
			printf("%d ", 1 + i);
			Flg = 1;
		}
		i++;
	}
	if (Flg == 1)
	{
		printf("�����ڂł� \n");
	}
	else
	{
		printf("������܂���ł��� \n");
	}
}