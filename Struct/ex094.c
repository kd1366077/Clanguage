#include<stdio.h>
struct profile
{
	char name[20];
	int birth[3];
	char blood[5];
};
main()
{
	struct profile pdat[5];
	struct profile* p;
	int i;
	p = pdat;

	for (i = 0; i < 5; i++)
	{
		printf("\n%dl–Ú‚Ì–¼‘O‚ð“ü—Í:", i + 1);
		scanf("%s", p->name);
		printf("%dl–Ú‚Ì¶”NŒŽ“ú‚ð‹ó”’‚Å‹æØ‚Á‚Ä“ü—Í:", i + 1);
		scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
		printf("%dl–Ú‚ÌŒŒ‰tŒ^‚ð“ü—Í:", i + 1);
		scanf("%s", p->blood);
		p++;
	}
	p = pdat;
	for (i = 0; i < 5 ; i++)
	{
		//Aƒf[ƒ^‚Ì‚Ý“Ç‚Ýž‚Ý
		if (strcmp(p->blood,"A") == 0)
		{
			printf("%s--", p->name);
			printf("%d”N%dŒŽ%d“ú¶‚Ü‚ê", p->birth[0], p->birth[1], p->birth[2]);
			printf("ŒŒ‰tŒ^--%sŒ^\n", p->blood);
		}
		p++;
	}
}