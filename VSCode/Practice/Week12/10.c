#include <stdio.h>
int ejz(int n)
{
    int y = 0, l = 0;
    while (n > 0)
    {
        if (n % 2)
        {
            y++;
        }
        else
        {
            l++;
        }
        n /= 2;
    }
    if (y > l)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int k1, k2;
    int cnt1 = 0, cnt0 = 0;
    scanf("%d%d", &k1, &k2);
    for (int i = k1; i <= k2; i++)
    {
        if (ejz(i))
        {
            cnt1++;
        }
        else
        {
            cnt0++;
        }
    }
    printf("%d %d", cnt1, cnt0);
    return 0;
}
