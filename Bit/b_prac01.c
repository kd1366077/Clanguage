#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define Skil_Num 3
#define Mob_Num 3

typedef struct
{
	char name[20];
	int type;	//�X�L�����
	int use_mp;	//mp�g�p��
	int effect;	//����
}Skill;
typedef struct
{
	char name[20];
	int hp;
	int atk;
	int def;
	UINT state;
}Spec;
typedef struct 
{
	Spec sp;	//spec�^�\���̕ϐ�
	int maxhp;	//�ő�hp
	int mp;		//mp
	Skill skl[Skil_Num];
}Chara;
typedef struct	//mob�^�\����
{
	Spec sp;	//spec�^�\���̕ϐ�
	int rate;	//��Ԉُ�U���������[�g���\�L
}Mob;

enum  BitState
{
	Base = 0,			//00000000 �ʏ���
	Poison=1<<0,		//00000001 �ŏ��
	Sleep=1<<1,			//00000010 ������
	Paralysis=1<<2,		//00000100 ��჏��
	Burn=1<<3,			//00001000 �Ώ����
	AtkUp=1<<4,			//00010000 �U���̓A�b�v
	AtkDown=1<<5		//00100000 �U���̓_�E��
};

typedef unsigned int UINT;
void DisplayStatus(UINT s);
void ChangeFlag(UINT* s);
void ClearFlag(UINT* s);

main()
{
	UINT MyState = Base;
	//MyState |= (Poison | Sleep);
	//MyState |= Poison;
	//MyState |= Sleep;

	DisplayStatus(MyState);
	ChangeFlag(&MyState);
	DisplayStatus(MyState);
	ClearFlag(&MyState);
	DisplayStatus(MyState);
}

void DisplayStatus(UINT s)
{
	printf("****���݂̏��****\n");
	if (s & Poison)
	{
		printf("��\n");
	}
	if(s & Sleep)
	{
		printf("����\n");
	}
	if(s & Paralysis)
	{
		printf("���\n");
	}
	if(s & Burn)
	{
		printf("�Ώ�\n");
	}
	if(s & AtkUp)
	{
		printf("�U���̓A�b�v\n");
	}
	if(s & AtkDown)
	{
		printf("�U���̓_�E��\n");
	}
	if (s == Base)
	{
		printf("�ʏ���\n");
	}
	printf("******************\n");
}

void ChangeFlag(UINT* s)
{
	int a;
	while (1)
	{
		printf("�ǂ̏�Ԃɂ��܂���\n");
		printf("1:�� 2:���� 3:��� 4:�Ώ� 5:�U���́� 6:�U���́� 0:�I��");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		switch (a)
		{
		case 1:
			*s |= Poison;
			break;
		case 2:
			*s |= Sleep;
			break;
		case 3:
			*s |= Paralysis;
			break;
		case 4:
			*s |= Burn;
			break;
		case 5:
			*s |= AtkUp;
			break;
		case 6:
			*s |= AtkDown;
			break;
		default:
			break;
		}
	}
}

void ClearFlag(UINT* s)
{
	int a;
	while (1)
	{
		printf("�ǂ̏�Ԃ��������܂���\n");
		printf("1:�� 2:���� 3:��� 4:�Ώ� 5:�U���́� 6:�U���́� 0:�I��");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		switch (a)
		{
		case 1:
			*s &= ~Poison;
			break;
		case 2:
			*s &= ~Sleep;
			break;
		case 3:
			*s &= ~Paralysis;
			break;
		case 4:
			*s &= ~Burn;
			break;
		case 5:
			*s &= ~AtkUp;
			break;
		case 6:
			*s &= ~AtkDown;
			break;
		default:
			break;
		}
	}
}