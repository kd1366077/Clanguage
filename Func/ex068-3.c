#include<stdio.h>
main()
{
	int c;

	//getchar�֐��́u���͏I���v�̏ꍇ��EOF(-1)��߂�l�Ƃ��ĕԂ�����
	while ((c=getchar())!=EOF)
	{
		putchar(c);
	}
}