#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
char str[50];
int main() {
	FILE* fp;
	fp = fopen("F:\\GitHubCode\\Code\\Booktask\\P86\\3.10\\printf.txt", "w");
	scanf("%s", str);
	for (int i = 0; i < strlen(str); i++) {
		fprintf(fp, "%c\n", str[i]);
	}
	fclose(fp);
	return 0;
}