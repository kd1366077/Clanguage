#include<stdio.h>
struct day
{
	int nen;     //�N
	int tsuki;   //��
	int hi;      //��
};
struct profile
{
	char name[20];      //���O
	struct day birth;   //�a����
	char blood[5];      //���t�^
};
main()
{
	struct profile pdat[5] =
	{
	   { "�A�C���Y"    , { 2000,2,11 }, "A" },
	   { "�A���x�h"    , { 2000,8,24 }, "A" },
	   { "�V�����e�B�A", { 2000,2,13 }, "A" },
	   { "�A�E��"		,{ 2000,6,14 }, "A" },
	   { "�}�[��"      , { 2000,2,15 }, "A" },
	};
	struct profile* p;
	int i;
	p = pdat;
    
	for (i = 0; i < 5 ; i++)
	{
		//�Q�������ǂݍ���
		if (p->birth.tsuki == 2)
		{
			printf("%s--", p->name);
			printf("%d�N%d��%d�����܂�",p->birth.nen,p->birth.tsuki,p->birth.hi);
			printf("���t�^--%s�^\n", p->blood);
		}
		p++;
	}
}