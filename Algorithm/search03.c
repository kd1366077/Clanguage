#include<stdio.h>
main()
{
	int s, low, mid, high;
	int data[11] = {13,28,36,45,56,62,67,73,86,88,91};
	printf("’Tõ’l‚ÍH");
	scanf("%d", &s);

	low = 0;
	high = 10;

	while (low<=high)
	{
		mid = (low + high) / 2;
		if (s == data[mid])
		{
			break;
		}
		if (s > data[mid])
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	if (low > high)
	{
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½ \n");
	}
	else
	{
		printf("%d‚ğ,data[%d]‚Å”­Œ© \n", s, mid);
	}
}