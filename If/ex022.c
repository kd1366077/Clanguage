#include<stdio.h>
main()
{
	int year;
	printf("西暦を入力:");
	scanf("%d", &year);
	if (1988 >= year) {
		printf("昭和生まれです \n");
	}
	else {
		printf("平成生まれです \n");
	}
}