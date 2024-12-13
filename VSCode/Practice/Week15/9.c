#include <stdio.h>
int a[50][50];
int main()
{
    int n, i = 1, j = 1, sum = 1;
    scanf("%d", &n);
    a[i][j] = 1;
    while (sum < n * n)
    {
        while (j + 1 <= n && a[i][j + 1] == 0)
        {
            a[i][++j] = ++sum;
        }
        while (i + 1 <= n && a[i + 1][j] == 0)
        {
            a[++i][j] = ++sum;
        }
        while (j - 1 >= 1 && a[i][j - 1] == 0)
        {
            a[i][--j] = ++sum;
        }
        while (i - 1 >= 1 && a[i - 1][j] == 0)
        {
            a[--i][j] = ++sum;
        }
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (a[i][j] < 10)
            {
                if (j == n)
                {
                    printf("00%d\n", a[i][j]);
                }
                else
                {
                    printf("00%d ", a[i][j]);
                }
            }
            else if (a[i][j] < 100)
            {
                if (j == n)
                {
                    printf("0%d\n", a[i][j]);
                }
                else
                {
                    printf("0%d ", a[i][j]);
                }
            }
            else
            {
                if (j == n)
                {
                    printf("%d\n", a[i][j]);
                }
                else
                {
                    printf("%d ", a[i][j]);
                }
            }
        }
    }
    return 0;
}