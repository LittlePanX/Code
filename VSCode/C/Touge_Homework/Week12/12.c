#include <stdio.h>
int huiwen(int n)
{
    int num[8];
    for (int i = 0; i < 8; i++)
    {
        num[i] = n % 10;
        n /= 10;
    }
    for (int j = 0, k = 7; j <= 3, k >= 4; j++, k--)
    {
        if (num[j] != num[k])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n, y, r, i, t;
    scanf("%d", &i);
    t = i;
    r = i % 100;
    i /= 100;
    y = i % 100;
    n = i / 100;
    if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
    {
        if (y == 2)
        {
            if (r > 0 && r <= 29)
            {
                if (huiwen(t))
                {
                    printf("YES");
                }
            }
            else
            {
                printf("NO");
            }
        }
    }
    else if (y == 2)
    {
        if (r > 0 && r <= 28)
        {
            if (huiwen(t))
            {
                printf("YES");
            }
        }
        else
        {
            printf("NO");
        }
    }
    else if (y > 0 && y <= 12 && r > 0 && r <= 30)
    {
        if (huiwen(t))
        {
            printf("YES");
        }
    }
    else
    {
        printf("NO");
    }
    return 0;
}