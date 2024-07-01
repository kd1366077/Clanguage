#include<stdio.h>
main()
{
    int su;

    printf("整数を入力:");
    scanf("%d", &su);

    if (su < 0)
    {
        printf("マイナス");
    }
    else
    {
        printf("プラス");
    }
}