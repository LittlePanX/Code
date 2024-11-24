#include <stdio.h>
double x(int a)
{
    double ret = 1;
    for (int i = 1; i <= a; i++)
    {
        ret *= i;
    }
    return ret;
}
double y(int a)
{
    double ret = 1;
    for (int i = 3; i <= (2 * a + 1); i += 2)
    {
        ret *= i;
    }
    return ret;
}
double z(double x, double y)
{
    double ret;
    ret = 1.0 * x / y;
    return ret;
}
int main()
{
    int n;
    scanf("%d", &n);
    double s = 1;
    for (int i = 1; i <= n; i++)
    {
        s += z(x(i), y(i));
    }
    printf("%.10f", s);
    return 0;
}