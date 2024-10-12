#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a, b, c;
	int min = 0;
	scanf("%d %d %d", &a, &b, &c);
	if (a < b) {
		if (a < c) {
			min = a;
		}
		else if (b > c) {
			min = c;
		}
	}
	else if (c > b) {
		min = b;
	}
	printf("最小值为%d", min);
	return 0;
}