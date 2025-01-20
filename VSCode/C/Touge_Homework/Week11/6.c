#include <stdio.h>
#include <math.h>
int f(int n)
{
    int ret = 0;
    int cnt = 0;
    int m = pow(n, 2);
    int t = n;
    while (t > 0)
    {
        t /= 10;
        cnt++;
    }
    if (m % (int)pow(10, cnt) == n)
    {
        ret = n;
    }
    return ret;
}
int main()
{
    int N;
    scanf("%d", &N);
    while (f(N) == 0)
    {
        N++;
    }
    printf("%d", N);
    return 0;
}