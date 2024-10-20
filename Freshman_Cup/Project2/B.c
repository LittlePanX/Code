#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	long long max = -10000000000, min = 10000000000;
	long long i;
	long long n;
	long long a[1000000] = { 0 };
	scanf("%lld", &n);
	for (i = 0; i < n; i++) {
		scanf("%lld", &a[i]);
	}
	for (i = 0; i < n; i++) {
		if (a[i] > max) {
			max = a[i];
		}
		if (a[i] < min) {
			min = a[i];
		}
	}
	long long sum = max + min;
	printf("%lld", sum);
}