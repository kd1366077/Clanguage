#include<stdio.h>
main()
{
	char s[81];
    int i ;

	printf("����������:");
	scanf("%s",s);

	for (i = 0; s[i] != '\0';i++)
	{
		s[i]++;
	}
	printf("�Í����������%s \n",&s[0]);
}