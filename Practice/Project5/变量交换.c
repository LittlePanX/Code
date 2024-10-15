#include <stdio.h>
int main()
{
	int a = 1;
	int b = 2;
	int c = 0;
	c = a;
	a = b;
	b = c;
	printf("%d %d", a, b);
	return 0;
}