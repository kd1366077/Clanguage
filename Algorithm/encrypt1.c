#include<stdio.h>
main()
{
	char s[81];
    int i ;

	printf("�Í�������������:");
	scanf("%s",s);

	for (i = 0; s[i] != '\0';i++)
	{
		s[i]--;
	}
	printf("�����ςݕ������%s \n",&s[0]);
}