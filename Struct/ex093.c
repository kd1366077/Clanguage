#include<stdio.h>
struct syohin_data
{
	char name[20];
	int tanka;
	int kosuu;
	int kingaku;
};
main()
{
	struct syohin_data syohin[3] = {
		{"‚¦‚ñ‚Ò‚Â",30,5},
		{"Á‚µƒSƒ€",50,2},
		{"•M” ",500,3} };
	struct syohin_data* p;
	int kingaku;
	p = syohin;
	int i;
	for (i = 0; i < 3; i++)
	{
		kingaku = p->tanka * p ->kosuu;
		printf("¤•i–¼:%s\t", p->name);
		printf("’P@‰¿:%4d\t", p->tanka);
		printf("ŒÂ@”:%4d\t", p->kosuu);
		printf("‹à@Šz:\\%4d\n", kingaku);
		p++;
	}
}