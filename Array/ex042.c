#include<stdio.h>
main()
{
	char data[] = "Apple";
	int i;

	printf("1•¶š‚¸‚Â•\¦ \n");
	i = 0;
	while (data[i] != '\0')
	{
		printf("%c", data[i]);
		i++;
	}
	printf("\n•¶š—ñ‚Å•\¦ \n");
	//•¶š—ñ‚ÍŸè‚É'\0'‚ª‚Â‚­
	printf("%s\n", &data[0]);
}
