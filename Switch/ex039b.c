#include<stdio.h>
main()
{
	char shori;
	int su, su2,su3,s;
	printf("���������:");
	scanf("%c", &shori);

	printf("���������:");
	scanf("%d%d%d",& su,&su2,&su3);

	switch (shori)
	{
		//�ő�l�����߂�
	case 'd':
		s = su;
		if (s < su2) { s = su2; }
		if (s < su3) { s = su3; }
		{
			printf("�ő�l��%d�ł� \n", s);
		}
		break;
		//�ŏ��l�����߂�
	case 's':
		s = su;
		if (s > su2) { s = su2; }
		if (s > su3) { s = su3; }
		{
			printf("�ŏ��l��%d�ł� \n", s);
		}
		break;
		//���ς����߂�
	case 'h':
		printf("���ς�%.2f�ł� \n", (float)(su + su2 + su3) / 3);
		break;
		//���v�����߂�
	case 'g':
		printf("���v��%d�ł� \n", su + su2 +su3 );
		break;
	default:
		printf("�G���[ \n");
	}
}