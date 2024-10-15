#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	printf("输入数字直至输入 - 1时停止");
	int x;
	int sum = 0;
	int cnt = 0;
	int number[100];
	scanf("%d", &x);
	while (x != -1) {
		number[cnt] = x;
		sum += x;
		cnt++;
		scanf("%d", &x);
	}
	if (cnt > 0) {
		int i;
		double average = sum / cnt;
		for (i = 0; i < cnt; i++) {
			if (number[i] > average) {
				printf("%d", number[i]);
			}
		}
	}
	return 0;
}