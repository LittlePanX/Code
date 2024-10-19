#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int board[3][3];
	int i, j;
	int numofx = 0;
	int numofo = 0;
	int result = -1;//-1没人赢，1X赢，0O赢
	//遍历读入
	printf("1表示X,0表示O,请输入9个数:");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			scanf("%d", &board[i][j]);
		}
	}
	//检查行
	for (i = 0; i < 3 && result == -1; i++) {
		numofo = numofx = 0;
		for (j = 0; j < 3; j++) {
			if (board[i][j] == 1) {
				numofx++;
			}
			else {
				numofo++;
			}
		}
		if (numofo == 3) {
			result = 0;
		}
		else if (numofx == 3) {
			result = 1;
		}
	}
	//检查列
	if (result == -1) {
		for (j = 0; j < 3 && result == -1; j++) {
			numofo = numofx = 0;
			for (i = 0; i < 3; i++) {
				if (board[i][j] == 1) {
					numofx++;
				}
				else {
					numofo++;
				}
			}
			if (numofo == 3) {
				result = 0;
			}
			else if (numofx == 3) {
				result = 1;
			}
		}
	}
	//检查对角线
	for (i = 0; i < 3; i++) {
		if (board[i][i] == 1) {
			numofx++;
		}
		else {
			numofo++;
		}
	}
	if (numofo == 3) {
		result = 0;
	}
	else if (numofx == 3) {
		result = 1;
	}
	numofo = numofx = 0;
	for (i = 0; i < 3; i++) {
		if (board[i][2 - i] == 1) {
			numofx++;
		}
		else {
			numofo++;
		}
	}
	if (numofo == 3) {
		result = 0;
	}
	else if (numofx == 3) {
		result = 1;
	}
	if (result == 1) {
		printf("X赢了");
	}
	else if (result == 0) {
		printf("O赢了");
	}
	else {
		printf("没人赢");
	}
	return 0;
}