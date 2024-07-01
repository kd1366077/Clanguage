#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int kazu,i;

	
	rand();
	kazu = rand() % 300 + 1;

	for (i = 0; i < 100; i++)
	{
		printf("%03d  \n", kazu);
		kazu = rand() % 300 + 1;
	}
}