#include <stdio.h>
int a[10][10];
int main()
{
    int line, arrange;
    scanf("%d%d", &line, &arrange);
    int i, j;
    for (i = 0; i < line; i++)
    {
        for (j = 0; j < arrange; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (j = 0; j < arrange; j++)
    {
        for (i = 0; i < line; i++)
        {
            if (i < line - 1)
            {
                printf("%d ", a[i][j]);
            }
            else
            {
                printf("%d\n", a[i][j]);
            }
        }
    }
    return 0;
}