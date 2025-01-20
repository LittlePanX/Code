#include <stdio.h>
int main()
{
    long long n, m = 0, t;
    scanf("%lld", &n);
    do
    {
        do
        {
            t = n % 10;
            m += t;
            n /= 10;
        } while (n != 0);
        if (m / 10 == 0)
        {
            break;
        }
        else
        {
            n = m;
            m = 0;
        }
    } while (1);
    printf("%lld", m);
    return 0;
}
