#include <stdio.h>
double s(int n);
int main(void)
{
    /*********Begin*********/
    double sum1 = 0, sum2 = 0;
    for (int i = 1; i < 100; i += 2)
    {
        sum1 += s(i);
    }
    for (int j = 2; j < 101; j += 2)
    {
        sum2 += s(j);
    }
    double sum = sum1 - sum2;
    printf("%.3f", sum);
    /*********End**********/
    return 0;
}
double s(int n)
{
    double ret;
    ret = 1.0 / n;
    return ret;
}