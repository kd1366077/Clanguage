#include<stdio.h>
main()
{
	char data[] = "Language";
	char* p_data,ch;
	int i;
	int Flg = 0;

	printf("data[ ]=%s \n", data);
	printf("検索文字は？");
	scanf("%c",&ch);

	printf("検索結果は、");
	p_data = data;
	i = 0;

	//languageを読み込む
	while (*(p_data + i) != '\0')
	{
		//文字の個数を数える
		if (ch == *(p_data + i))
		{
			printf("%d ", 1 + i);
			Flg = 1;
		}
		i++;
	}
	if (Flg == 1)
	{
		printf("文字目です \n");
	}
	else
	{
		printf("見つかりませんでした \n");
	}
}