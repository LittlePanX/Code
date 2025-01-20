#include <stdio.h>
int main()
{
    int n, y, r;
    scanf("%d%d%d", &n, &y, &r);
    if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
    {
        if (y == 2)
        {
            if (r > 0 && r <= 29)
            {
                printf("YES");
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
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else if (y > 0 && y <= 12 && r > 0 && r <= 30)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}