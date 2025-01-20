#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, n, u, v;
    scanf("%d%d", &a, &b);
    while (a != u || b != v)
    {
        for (n = 1; (int)sqrt(n + a) != sqrt(n + a) || (int)sqrt(n + b) != sqrt(n + b) && n <= 10000; n++)
            ;
        if (n > 10000)
        {
            printf("Not found!\n");
        }
        else
            printf("%d\n", n);
        u = a;
        v = b;
        scanf("%d%d", &a, &b);
    }
    return 0;
}