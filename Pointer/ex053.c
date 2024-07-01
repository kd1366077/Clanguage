#include<stdio.h>
main()
{
	int a = 100, b = 200,w ;
	int* p_a = &a, * p_b = &b;

	printf("é¿çsëO:*p_a=%d \t*p_b=%d \n", *p_a, *p_b);
	printf("&a=%d \tp_a=%d \n", &a, p_a);
	printf("&b=%d \tp_b=%d \n", &b, p_b);
	w = *p_a;
	*p_a = *p_b;
	*p_b = w;
	p_a = &b;
	p_b = &a;
	printf("é¿çså„:*p_a=%d \t*p_b=%d \n", *p_a, *p_b);
	printf("&a=%d \tp_a=%d \n", &a, p_a);
	printf("&b=%d \tp_b=%d \n", &b, p_b);
}