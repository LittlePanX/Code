#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int i;
	int n;
	double sum = 0.0;
	double sigh = 1.0;
	scanf("%d", &n);
	for     (i = 1; i <= n; i++) {
		sum += sigh / i;
		sigh = -sigh;
	}
	printf("%f", sum);
	return 0;
}