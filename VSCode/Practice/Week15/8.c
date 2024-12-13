#include <stdio.h>
int a[20][20];
int main()
{
    int n;
    scanf("%d", &n);
    int i, j;
    for (i = 0; i < n; i += 2)
    {
        for (j = 0; j < n; j++)
        {
            a[i][j] = i * n + (j + 1);
        }
    }
    for (i = 1; i < n; i += 2)
    {
        for (j = 0; j < n; j++)
        {
            a[i][j] = (i + 1) * n - j;
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] < 10)
            {
                if (j == n - 1)
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
                if (j == n - 1)
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
                if (j == n - 1)
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