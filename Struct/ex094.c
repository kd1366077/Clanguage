#include<stdio.h>
struct profile
{
	char name[20];
	int birth[3];
	char blood[5];
};
main()
{
	struct profile pdat[5];
	struct profile* p;
	int i;
	p = pdat;

	for (i = 0; i < 5; i++)
	{
		printf("\n%d�l�ڂ̖��O�����:", i + 1);
		scanf("%s", p->name);
		printf("%d�l�ڂ̐��N�������󔒂ŋ�؂��ē���:", i + 1);
		scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
		printf("%d�l�ڂ̌��t�^�����:", i + 1);
		scanf("%s", p->blood);
		p++;
	}
	p = pdat;
	for (i = 0; i < 5 ; i++)
	{
		//A�f�[�^�̂ݓǂݍ���
		if (strcmp(p->blood,"A") == 0)
		{
			printf("%s--", p->name);
			printf("%d�N%d��%d�����܂�", p->birth[0], p->birth[1], p->birth[2]);
			printf("���t�^--%s�^\n", p->blood);
		}
		p++;
	}
}