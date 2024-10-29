#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int count = 0;
	int mynumber = 0;
	printf("欢迎来玩猜数游戏!\n");
	srand(time(0));
	int number = rand() % 100 + 1;
	printf("我已经为你准备好了一个数");
	do {
		printf("请输入你的猜数:");
		scanf("%d", &mynumber);
		count++;
		if (mynumber > number) {
			printf("你猜大了");
		}
		else if (mynumber < number) {
			printf("你猜小了");
		}
	} while (mynumber != number);
	if (count <= 7) {
		printf("恭喜你用%d次就猜对了！\n", count);
	}
	else {
		printf("你用了%d次才猜对。", count);
	}
	return 0;
}