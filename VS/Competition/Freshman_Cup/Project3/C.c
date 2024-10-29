#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a, b;
	char c;
	scanf("%d %d %c", &a, &b, &c);
	int sum = 0;
	if (b == 0 && c == '/' ){
		printf("Divided by zero!");
	}
	if (c == '+') {
		sum = a + b;
	}
	else if (c == '-') {
		sum = a - b; 
	}
	else if (c == '*') {
		sum = a * b;
	}
	else if (c == '/') {
		sum = a / b;
	}
	else {
		printf("Invalid operator!");
	}
	printf("%d", sum);
}