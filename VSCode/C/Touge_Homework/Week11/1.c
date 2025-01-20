#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d", &a);
    int sum1 = 0, sum2 = 0;
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0 && i != a)
        {
            sum1 += i;
        }
    }
    for (b = 0; b < 10000; b++)
    {
        for (int j = 1; j <= b; j++)
        {
            if (b % j == 0 && j != b)
            {
                sum2 += j;
            }
        }
        if (sum1 == b && sum2 == a)
        {
            break;
        }
        sum2 = 0;
    }
    if (sum1 == b && sum2 == a)
    {
        printf("%d", b);
    }
    else
    {
        printf("-1");
    }
    return 0;
}