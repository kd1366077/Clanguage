#include<stdio.h>
main()
{
	int data[] = { 30,7,25,16,10 };
	int w;
	int i, j;

	for (i = 1; i < 5; i++)    
	{
		for (j = i-1; j < i; j--)
		{
			if (data[j+1] >= data[j]) break;
				//“ü‚ê‘Ö‚¦ˆ—
				w = data[j+1];
				data[j+1] = data[j];
				data[j] = w;
		}
	}
	for (i = 0;i < 5; i++)
	{
		printf("%d\n", data[i]);
	}
}