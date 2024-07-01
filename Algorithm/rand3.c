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
		printf("’ÊíUŒ‚   %d \n",kazu);
    }
	else
	{
		printf("‰ïS       %d \n",kazu);
	}
}