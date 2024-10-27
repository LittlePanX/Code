#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int num[10000];
int main() {
	int a;
	int cnt = -1;
	while ((scanf("%d", &a) != EOF)) {
		cnt++;
		num[cnt] = a;
	}
	for (int i = 0; i < cnt; i++) {
		printf("%d ", num[i + 1] - num[i]);
	}
	return 0;
}