#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	FILE* fp;//声明一个file类型的变量
	char name[20];
	int x;
	fp = fopen("F:\\GitHubCode\\Code\\Practice\\Projec23\\try.txt", "w");//用fopen函数fp变量与实际文件相关联"只写"
	fprintf(fp, "%s %d", "ABC", 123);//在文件中输出ABC 123
	fclose(fp);
	return 0;
}

//int main() {
//	FILE* fp;
//	char name[20];
//	int x;
//	fp = fopen("F:\\GitHubCode\\Code\\Practice\\Projec23\\try.txt", "r");//用fopen函数fp变量与实际文件相关联"只读"
//	if (!fp) return -1;//如果找不到文件fp会返回0，所以!fp返回1，if执行，"return -1"表示文件未找到
//	fscanf(fp, "%s%d", name, &x);//从对应文件中读入文本内容
//	printf("%s %d\n", name, x);//在编译器中输出
//	fclose(fp);
//	return 0;
//}