#include <stdio.h>
int a[10][10];
int main()
{
    int n, num;
    scanf("%d", &n);
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &num);
            a[i][j] = num;
        }
    }
    int up = 0;
    int down = 0;
    for (i = 0; i < n; i++)
    {
        for (j = n - 1; j >= i; j--)
        {
            up += a[i][j];
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            down += a[i][j];
        }
    }
    printf("%d %d", up, down);
    return 0;
}