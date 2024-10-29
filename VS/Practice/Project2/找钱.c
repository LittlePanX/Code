#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int amount = 0;
	int price = 0;
	printf("请输入余额",amount);
	scanf("%d", &amount);
	printf("请输入价格", price);
	scanf("%d", & price);
	int change = amount - price;
	printf("找您%d\n",change);
    return 0;
}