#include<stdio.h>
main()
{
	char ch;
	
	printf("���������:");
	scanf("%c", &ch);
	if ((ch >= 'A' && ch <= 'Z')||(ch >= 'a' && ch <= 'z')){
		printf("�A���t�@�x�b�g \n");
	}
	else {
		if ((ch >= '1')&&(ch <= '9')) {
			printf("���� \n");
		}
		else {
			printf("���̑��̕��� \n");
		}
	}
}