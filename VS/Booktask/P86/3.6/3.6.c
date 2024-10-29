#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
char ch[10000];
int main() {
	int a;
	int cnt = -1;
	while ((scanf("%c", &a) != EOF)) {
		cnt++;
		ch[cnt] = a;
	}
	char max = '/0';
	for (int i = 0; i < cnt + 1; i++) {
		if (max < ch[i]) {
			max = ch[i];
		}
	}
	printf("%c", max);
	return 0;
}