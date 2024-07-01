#include<stdio.h>
main()
{
	char s[81];
    int i ;

	printf("ˆÃ†‰»•¶š—ñ‚ğ“ü—Í:");
	scanf("%s",s);

	for (i = 0; s[i] != '\0';i++)
	{
		s[i]--;
	}
	printf("•¡†Ï‚İ•¶š—ñ‚Í%s \n",&s[0]);
}