#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	char s[300];
	int a[300] = { 0 };
	for (int i = 0; i < 3; i++) {
		scanf("%c:=%d;", &s[i], &a[i]);
	}
	for (int i = 0; i < 3; i++) {
		printf("%d", a[i]);
		printf(" ");
	}
}