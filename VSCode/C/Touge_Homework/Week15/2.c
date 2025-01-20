#include <stdio.h>
int a[10];
int main()
{
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 5; i < 10; i++)
    {
        printf("%d,", a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        if (i < 4)
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