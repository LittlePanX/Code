#include <stdio.h>
void printLine(int k, int a, int b, int c, int d, int e)
{
    if (a >= k || b >= k || c >= k || d >= k || e >= k)
    {
        if (a >= k)
        {
            if (b >= k || c >= k || d >= k || e >= k)
            {
                printf("* ");
            }
            else
            {
                printf("*");
            }
        }
        else
        {
            printf("  ");
        }

        if (b >= k)
        {
            if (c >= k || d >= k || e >= k)
            {
                printf("* ");
            }
            else
            {
                printf("*");
            }
        }
        else
        {
            if (c >= k || d >= k || e >= k)
            {
                printf("  ");
            }
        }

        if (c >= k)
        {
            if (d >= k || e >= k)
            {
                printf("* ");
            }
            else
            {
                printf("*");
            }
        }
        else
        {
            if (d >= k || e >= k)
            {
                printf("  ");
            }
        }

        if (d >= k)
        {
            if (e >= k)
            {
                printf("* ");
            }
            else
            {
                printf("*");
            }
        }
        else
        {
            if (e >= k)
            {
                printf("  ");
            }
        }

        if (e >= k)
        {
            printf("*");
        }

        printf("\n");
    }
}

int main()
{
    int repeat, i, j, k, a, b, c, d, e;
    int n, x;
    scanf("%d", &repeat);
    for (i = 1; i <= repeat; i++)
    {
        scanf("%d", &n);
        a = 0, b = 0, c = 0, d = 0, e = 0;
        for (j = 1; j <= n; j++)
        {
            scanf("%d", &x);
            if (x == 1)
            {
                a++;
            }
            else if (x == 2)
            {
                b++;
            }
            else if (x == 3)
            {
                c++;
            }
            else if (x == 4)
            {
                d++;
            }
            else if (x == 5)
            {
                e++;
            }
        }
        for (k = 20; k >= 1; k--)
        {
            printLine(k, a, b, c, d, e);
        }
        printf("1 2 3 4 5\n");
    }
    return 0;
}
