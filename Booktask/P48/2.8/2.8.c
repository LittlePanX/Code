#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a[20];
	int j = 0, k = 0, l = 0;//j为0，k为正，l为负(计个数）
	int kk = 0, ll = 0;//求和变量
	double kkk = 0, lll = 0;//平均数
	printf("请输入20个数:");
	for (int i = 0; i < 20; i++) {
		scanf("%d", &a[i]);
		if (a[i] == 0) {
			j++;
		}
		else if (a[i] > 0) {
			k++;
			kk += a[i];
		}
		else if (a[i] < 0) {
			l++;
			ll += a[i];
		}
	}
	kkk = kk * 1.0 / k;
	lll = ll * 1.0 / l;
	printf("%d个正整数,%d个负整数，%d个0\n", k, l, j);
	printf("正整数之和为%d,负整数之和为%d\n", kk, ll);
	if (k == 0) {
		printf("无正整数的平均数\n");
	}
	else {
		printf("正整数的平均数为%.2f\n", kkk);
	}
	if (l == 0) {
		printf("无负整数的平均数\n");
	}
	else {
		printf("负整数的平均数为%.2f\n", lll);
	}
	return 0;
}