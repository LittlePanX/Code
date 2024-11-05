#include <stdio.h>
int main()
{
    double s = 1;
    double a = 1;
    double b = 1;
    for (int i = 1, j = 3; i < 11; i++, j += 2)
    {
        a *= i;
        b *= j;
        s += (a / b);
    }
    printf("%f", s);
}