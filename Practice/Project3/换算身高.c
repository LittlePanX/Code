#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	double foot;
	double inch;
	printf("请输入英尺和英寸");
	scanf("%lf %lf", &foot, &inch);
	printf("您的身高为%f米\n", (foot + inch / 12) * 0.3048);
	return 0;
}