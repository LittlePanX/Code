#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n;
	int i;
	double sum = 0.0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		sum += 1.0 / i;
	}
	printf("%f", sum);
	return 0;
}