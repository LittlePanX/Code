#include <stdio.h>
#include <math.h>
long double f(long double x)
{
    long double ret;
    ret = pow(x, 5) - 2 * pow(x, 4) + pow(x, 2) - 3;
    return ret;
}
int main()
{
    long double e;
    scanf("%llf", &e);
    long double a = 0, b = 2;
    long double x;
    x = (a + b) / 2;
    while (fabs(f(x)) > e)
    {
        if (f(x) * f(a) > 0)
        {
            a = x;
        }
        else
        {
            b = x;
        }
        x = (a + b) / 2;
    }
    printf("%.8llf", x);
    return 0;
}