#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	char word[100];
	FILE* fp;
	fp = fopen("F:\\GitHubCode\\Code\\Booktask\\P86\\3.9\\score.txt", "r");
	fscanf(fp, "%s", word);
	printf("%s\n", word);
	fclose(fp);
	return 0;
}