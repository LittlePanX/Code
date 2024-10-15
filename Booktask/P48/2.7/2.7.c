#include <stdio.h>
#include <math.h>
#define PI 3.14
int main() {
	int a[73];
	int i = 0;
	for (int j = 0; j <= 360; j += 5) {
		a[i] = j;
		printf("%f\n", sin(a[i] * PI / 180));
		i++;
	}
	return 0;
}