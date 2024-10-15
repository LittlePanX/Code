#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int sum = 0;
	int count = 0;
	int number;
	scanf("%d", &number);
	while (number != -1) {
		sum += number;
		count++;
		scanf("%d", &number);
	}
	printf("平均数为%f\n", 1.0 * sum / count);
	return 0;
}