#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	double x;
	double y;
	scanf("%lf", &x);
	if (x < 10) {
		if (x < 1) {
			y = x;
		}
		else {
			y = 2*x - 1;
		}
	}
	else {
		y = 3 * x + 11;
	}
	printf("YµÄÖµÎª%f", y);
	return 0;
}