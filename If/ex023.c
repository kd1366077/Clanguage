#include<stdio.h>
main()
{
	int h, m, s;
	printf("�b�������:");
	scanf("%d",&s);
	if (5000 >= s) {
		h = s / 3600;
		s = s % 3600;
		m = s / 60;
		h = s % 60;
	}
	else {
		printf("���̓G���[ \n");
	}
	printf("%d����%d��%d�b�@\n", h, m, s);
}