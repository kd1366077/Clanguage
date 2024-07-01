#include<stdio.h>
struct syohin_data
{
	char name[20];
	int tanka;
};
void display3(struct syohin_data* p_syohin);

main()
{
	struct syohin_data p_syohin = { "Á‚µƒSƒ€",50 };
	//struct syohin_data* p;
	//p = &syohin;

	display3(&p_syohin);
}
void display3(struct syohin_data* p_syohin)
{
	printf("%s \t%d", p_syohin->name, p_syohin->tanka);
}