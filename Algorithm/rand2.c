#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int dice;

	srand(time(0));
    dice = rand()%301-100;

	printf("�T�C�R����%d�ł� \n", dice);
}
