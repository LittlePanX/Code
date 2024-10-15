#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int x;
	printf("请输入一个数:");
	scanf("%d", &x);
	int mask = 1;
	int t = x;
	while (t > 9) {
		t /= 10;
		mask *= 10;
	}
	do {
		int d = x / mask;
		printf("%d", d);
		if (mask > 9) {
			printf(" ");
		}
		x %= mask;
		mask /= 10;
	} while (mask > 0);
	printf("\n");
	return 0;
}