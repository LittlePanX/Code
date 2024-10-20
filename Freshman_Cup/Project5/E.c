#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int num(int x, int y) {
	int money1, money2;
	int cnt1 = 0, cnt2 = 0;
	scanf("%d %d", &money1, &money2);
	while (x != 0 && y != 0) {
		x -= 1;
		y -= 1;
		cnt2++;
	}
	while (x != 0 || y != 0) {
		if (x != 0) {
			x -= 1;
			cnt1++;
		}
		else if (y != 0) {
			y -= 1;
			cnt1++;
		}
	}
	int sum = cnt1 * money1 + cnt2 * money2;
	return sum;
}
int main() {
	int n, x, y;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &x, &y);
		printf("%d\n", num(x, y));
	}
}