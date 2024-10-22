#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void f(int* p);
int main() {
	int i = 6;
	printf("i的地址为%p\n", &i);
	printf("i的值为%d\n", i);
	f(&i);
	printf("经过f函数后i的值为%d\n", i);
	return 0;
}
void f(int* p) {
	printf("函数显示i的地址为%p\n", p);
	printf("函数显示i的值为%d\n", *p);
	*p = 24;
}