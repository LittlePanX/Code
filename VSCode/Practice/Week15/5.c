#include <stdio.h>
int a[10][10];
int main()
{
    int hang, lie, num;
    scanf("%d%d", &hang, &lie);
    int i, j;
    for (i = 0; i < hang; i++)
    {
        for (j = 0; j < lie; j++)
        {
            scanf("%d", &num);
            a[i][j] = num;
        }
    }
    int max = a[0][0];
    int min = a[0][0];
    for (i = 0; i < hang; i++)
    {
        for (j = 0; j < lie; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
            if (a[i][j] < min)
            {
                min = a[i][j];
            }
        }
    }
    int high;
    high = max - min;
    printf("%d", high);
    return 0;
}