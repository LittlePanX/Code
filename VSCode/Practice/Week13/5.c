long long gcd(long long a, long long b)
{
    if (a % b == 0)
    {
        return b;
    }
    else
    {
        return gcd(b, a % b);
    }
}
#include <stdio.h>
int main()
{
    long long a, b;
    while (scanf("%lld %lld", &a, &b) != EOF)
    {
        printf("%lld", gcd(a, b));
    }
    return 0;
}