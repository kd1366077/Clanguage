#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int kazu;

	srand(time(0));
	rand();
	kazu = rand() % 100 + 1;

	if (kazu > 30)
	{
		printf("�ʏ�U��   %d \n",kazu);
    }
	else
	{
		printf("��S       %d \n",kazu);
	}
}