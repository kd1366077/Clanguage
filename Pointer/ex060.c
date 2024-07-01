#include<stdio.h>
main()
{
	char data[] = "Language";
	char* p_data,ch;
	int i;
	int Flg = 0;

	printf("data[ ]=%s \n", data);
	printf("ŒŸõ•¶š‚ÍH");
	scanf("%c",&ch);

	printf("ŒŸõŒ‹‰Ê‚ÍA");
	p_data = data;
	i = 0;

	//language‚ğ“Ç‚İ‚Ş
	while (*(p_data + i) != '\0')
	{
		//•¶š‚ÌŒÂ”‚ğ”‚¦‚é
		if (ch == *(p_data + i))
		{
			printf("%d ", 1 + i);
			Flg = 1;
		}
		i++;
	}
	if (Flg == 1)
	{
		printf("•¶š–Ú‚Å‚· \n");
	}
	else
	{
		printf("Œ©‚Â‚©‚è‚Ü‚¹‚ñ‚Å‚µ‚½ \n");
	}
}