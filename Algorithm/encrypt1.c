#include<stdio.h>
main()
{
	char s[81];
    int i ;

	printf("暗号化文字列を入力:");
	scanf("%s",s);

	for (i = 0; s[i] != '\0';i++)
	{
		s[i]--;
	}
	printf("複号済み文字列は%s \n",&s[0]);
}