#include <stdio.h>
int a[10];
int main()
{
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        if (i < 9)
        {
            printf("%d,", a[i]);
        }
        else
        {
            printf("%d", a[i]);
        }
    }
    printf("\n");
    for (i = 9; i >= 0; i--)
    {
        if (i > 0)
        {
            printf("%d,", a[i]);
        }
        else
        {
            printf("%d", a[i]);
        }
    }
    return 0;
}