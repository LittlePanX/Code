#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int day, week, dayleft;
	scanf("%d", &day);
	week = day / 7;
	dayleft = day % 7;
	printf("%dÖÜ%dÌì", week, dayleft);
	return 0;
}