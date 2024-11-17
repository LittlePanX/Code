#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    int t;
    int a[4], b[4];
    for (int i = 3; i >= 0; i--)
    {
        a[i] = num % 10;
        num /= 10;
    }
    for (int i = 0; i < 4; i++)
    {
        b[i] = a[i];
    }
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            if (a[i] < a[i + 1])
            {
                t = a[i];
                a[i] = a[i + 1];
                a[i + 1] = t;
            }
        }
    }
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            if (b[i] > b[i + 1])
            {
                t = b[i];
                b[i] = b[i + 1];
                b[i + 1] = t;
            }
        }
    }
    int max = 0, min = 0;
    for (int i = 0; i < 4; i++)
    {
        max = max * 10 + a[i];
    }
    for (int i = 0; i < 4; i++)
    {
        min = min * 10 + b[i];
    }
    int res;
    res = max - min;
    while (res != 6174)
    {
        if (b[0] == 0)
        {
            printf("%d-0%d=%d\n", max, min, res);
        }
        else
            printf("%d-%d=%d\n", max, min, res);
        num = res;
        for (int i = 3; i >= 0; i--)
        {
            a[i] = num % 10;
            num /= 10;
        }
        for (int i = 0; i < 4; i++)
        {
            b[i] = a[i];
        }
        for (int j = 0; j < 3; j++)
        {
            for (int i = 0; i < 3; i++)
            {
                if (a[i] < a[i + 1])
                {
                    t = a[i];
                    a[i] = a[i + 1];
                    a[i + 1] = t;
                }
            }
        }
        for (int j = 0; j < 3; j++)
        {
            for (int i = 0; i < 3; i++)
            {
                if (b[i] > b[i + 1])
                {
                    t = b[i];
                    b[i] = b[i + 1];
                    b[i + 1] = t;
                }
            }
        }
        max = 0;
        min = 0;
        for (int i = 0; i < 4; i++)
        {
            max = max * 10 + a[i];
        }
        for (int i = 0; i < 4; i++)
        {
            min = min * 10 + b[i];
        }
        res = max - min;
    }
    if (b[0] == 0)
    {
        printf("%d-0%d=%d\n", max, min, res);
    }
    else
        printf("%d-%d=%d\n", max, min, res);
    return 0;
}