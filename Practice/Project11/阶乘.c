#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n = 0;
	int factor = 1;
	int i = 1;
	printf("请输入一个数:");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		factor *= i;
	}
	printf("%d!=%d", n, factor);
	return 0;
}