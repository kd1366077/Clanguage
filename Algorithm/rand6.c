#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int player,cpu;
	printf("�����o���܂���? \n ( 1:�O�[, 2:�`���L, 3:�p�[) > ");
	scanf("%d",&player);
	player--;

	if (player == 0)printf("�v���C���[�̓O�[�ł� \n");
	if (player == 1)printf("�v���C���[�̓`���L�ł� \n");
	if (player == 2)printf("�v���C���[�̓p�[�ł� \n");

	cpu = rand() % 3;
	if (cpu == 0)printf("CPU�̓O�[�ł� \n");
	if (cpu == 1)printf("CPU�̓`���L�ł� \n");
	if (cpu == 2)printf("CPU�̓p�[�ł� \n");
	
	if (player == cpu)
	{
		printf("�������ł� \n");
	}
	if (player == 0)
	{
		if (cpu == 1)printf("�v���C���[�̏����ł� \n");
		if (cpu == 2)printf("CPU�̏����ł� \n");
	}
	if (player == 1)
	{
		if (cpu == 0)printf("CPU�̏����ł� \n");
		if (cpu == 2)printf("�v���C���[�̏����ł� \n");
	}
	if (player == 2)
	{
		if (cpu == 0)printf("�v���C���[�̏����ł� \n");
		if (cpu == 1)printf("CPU�̏����ł� \n");
	}
}