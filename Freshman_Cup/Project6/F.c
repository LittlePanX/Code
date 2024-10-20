#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int w[100000] = { 0 }, c[100000] = { 0 };
int n, m, cnt = 0;
int main() {

	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%d", &w[i]);
	}
	for (int j = 0; j < m; j++) {
		scanf("%d", &c[j]);
	}
	for (int i = 0; i < n; i++) {
		if (w[i] >= c[i]) {
			cnt++;
		}
	}
	printf("%d", cnt);
}