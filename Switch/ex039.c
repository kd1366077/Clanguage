#include<stdio.h>
main()
{
	char shori;
	int su, su2;
	printf("���������:");
	scanf("%c", &shori);

	printf("���������:");
	scanf("%d%d",& su,&su2);

	switch (shori)
	{
		//�ő�l�����߂�
	case 'd':
		if (su>su2)
		{
			printf("�ő�l��%d�ł� \n", su);
		}
		else
		{
			printf("�ő�l��%d�ł� \n", su2);
		}
		break;
		//�ŏ��l�����߂�
	case 's':
		if (su < su2)
		{
			printf("�ŏ��l��%d�ł� \n", su);
		}
		else
		{
			printf("�ŏ��l��%d�ł� \n", su2);
		}
		break;
		//���ς����߂�
	case 'h':
		printf("���ς�%.2f�ł� \n", (float)(su + su2) / 2);
		break;
		//���v�����߂�
	case 'g':
		printf("���v��%d�ł� \n", su + su2);
		break;
	default:
		printf("�G���[ \n");
	}
}