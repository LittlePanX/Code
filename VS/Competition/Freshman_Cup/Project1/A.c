#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int x, y, z, i, j;
	scanf("%d %d %d", &x, &y, &z);
	i = x - y;
	j = x + z;
	printf("%d %d", i, j);
}