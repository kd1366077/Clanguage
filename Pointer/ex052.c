#include<stdio.h>
main()
{
	int a = 100, b = 200, w;
	int *p_a = &a, *p_b = &b;

	printf("���s�O:a=%d \tb=%d \n", a, b);
	w = *p_a;        //w = a�Ɠ���
	*p_a = *p_b;     //a = b�Ɠ���
	*p_b = w;        //b = w�Ɠ���
	printf("���s��:a=%d \tb=%d \n", a, b);
	printf("&a=%d \t&b=%d \t&w=%d \n", &a, &b, &w);
	printf("&p_a=%d \t&p_b=%d \n", &p_a, &p_b);
}