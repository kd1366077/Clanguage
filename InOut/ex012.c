#include<stdio.h>
main()
{
	char moji;
	moji = 'A';
	printf("moji=%c \nmoji=%c", moji, moji + 32);
	printf("moji=%c \nmoji=%c",moji+0x20);
}
