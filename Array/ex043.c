#include<stdio.h>
main()
{
	char st[] = "orange";
	int cnt;

	//cnt = 0;
	//;‚ğfor‚ÌÅŒã‚É•t‚¯‚é‚Æ‹ó•¶‚É‚È‚é
	for (cnt = 0; st[cnt] != '\0'; cnt++);
	{
		//cnt++;
	}
	printf("•¶š—ñ:%s \n", &st[0]);
	printf("•¶š”‚Í%d•¶š \n", cnt);
}