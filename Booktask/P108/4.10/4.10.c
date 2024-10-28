#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int show = 0;
	int a = 0;
	int x = 0;
	printf("请输入一个数:");
	scanf("%d", &x);
	while (x > 0) {
		a = x % 10;
		show = show * 10 + a;
		x = x / 10;
	}
	printf("%d", show);
	return 0;
}