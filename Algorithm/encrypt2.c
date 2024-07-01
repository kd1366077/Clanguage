#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	char s[21];
	int i,n, k[20];

	printf("•¶š—ñ:");
	scanf("%s", &s);
	i = 0;
	srand(time(0));

	while (s[i] != '\0')
	{
		k[i] = rand() % 5;
		s[i] = s[i] + k[i];
		i++;
	}
	printf("ˆÃ†‰»•¶š—ñ%s \n", s);
	n = 0;

	while (n < i)
	{
		printf("%d", k[n]);
		n++;
	}
}