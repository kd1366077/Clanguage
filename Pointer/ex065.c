#include<stdio.h>
#include<string.h>
main()
{
	char* p_tbl[] = { "Programming2","Algorithm","Programming1","C" };
	char* w;
	int  i,j;

	//３で回すのは一人ずつ比べた時に
	for (i = 0; i < 3; i++)
	{
		
		for (j = i + 1; j < 4; j++)
		{
			//１つ目と２つ目を比べて１つ目がでかいと１。２つ目がでかいと-１
			if (strcmp(p_tbl[i], p_tbl[j]) > 0)
			{
				w = p_tbl[i];
				p_tbl[i] = p_tbl[j];
				p_tbl[j] = w;
			}
		}
	}
	for (i = 0; i < 4; i++)
	{
		printf("%s\n", p_tbl[i]);
	}
}