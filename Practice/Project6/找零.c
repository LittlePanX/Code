#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("请输入货物金额和票面（空一格隔开）：");
	int bill = 0;
	int money = 0;
	scanf("%d %d", &bill, &money);
	if (bill <= money) {
		printf("找您%d元\n", money - bill);
		printf("谢谢惠顾！欢迎下次光临！");
	}
	else {
		printf("您还差%d元", bill - money);
	}
		return 0;
}