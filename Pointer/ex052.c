#include<stdio.h>
main()
{
	int a = 100, b = 200, w;
	int *p_a = &a, *p_b = &b;

	printf("実行前:a=%d \tb=%d \n", a, b);
	w = *p_a;        //w = aと同じ
	*p_a = *p_b;     //a = bと同じ
	*p_b = w;        //b = wと同じ
	printf("実行後:a=%d \tb=%d \n", a, b);
	printf("&a=%d \t&b=%d \t&w=%d \n", &a, &b, &w);
	printf("&p_a=%d \t&p_b=%d \n", &p_a, &p_b);
}