#include<stdio.h>
main()
{
	int a, b, enzan;
	printf("���Z�q�����:");
	scanf("%d", &enzan);
	
	printf("2�̐��������:");
	scanf("%d%d", &a, &b);
	if (enzan == 1) {
		printf("%d \n", a+b);
	}
	else {
		if(enzan==2){
			printf("%d \n", a-b);
		 }
		else {
			if (enzan == 3) {
				printf("%d \n", a * b);
			}
			else {
				if (enzan == 4) {
					printf("%d \n", a/b);
				}
			}
		
		}
	}
}
