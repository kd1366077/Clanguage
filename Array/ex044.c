#include<stdio.h>
main()
{
	char moji1[100], moji2[100], w[100];
	int i;
		
	printf("•¶Žš—ñ1‚ð“ü—Í:");
	scanf("%s", &moji1[0]);

	printf("•¶Žš—ñ2‚ð“ü—Í:");
	scanf("%s", &moji2[0]);

	printf("moji1=%s \t moji2=%s \n",&moji1,moji2);
	printf("“ü‚ê‘Ö‚¦‚é‚Æ\n");
	for (i = 0; w[i] = moji1[i]; i++);
	for (i = 0; moji1[i] = moji2[i]; i++);
	for (i = 0; moji2[i] = w[i]; i++);
	printf("moji1=%s \t moji2=%s \n" ,&moji1[0], &moji2[0]);
}