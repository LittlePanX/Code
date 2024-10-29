#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int x = 0;
	int n = 0;
	printf("请输入一个数:");
	scanf("%d", &x);
	n++;
	x /= 10;
	while (x > 0) {
		n++;
		x /= 10;
	}
	printf("该数为%d位数",n);
	return 0;
}