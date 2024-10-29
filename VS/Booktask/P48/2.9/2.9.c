#include <stdio.h>
int main() {
	int max = 0, min = 1000000000, maxx = -1000000000, minn = 0, num;
	for (int i = 0; i < 20; i++) {
		scanf("%d", &num);
		if (num > 0) {
			if (num > max) {
				max = num;
			}
			if (num < min) {
				min = num;
			}
		}
		if (num < 0) {
			if (num > maxx) {
				maxx = num;
			}
			if (num < minn) {
				minn = num;
			}
		}
	}
	printf("最大正整数为:%d\n最小正整数为:%d\n最大负整数为:%d\n最小负整数为:%d\n", max, min, maxx, minn);
	return 0;
}
