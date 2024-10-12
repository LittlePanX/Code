#include <stdio.h>
int main() {
	int sum = 0;
	for (int i = 3; i < 1000; i += 3) {
		sum += i;
	}
	printf("%d", sum);
	return 0;
}