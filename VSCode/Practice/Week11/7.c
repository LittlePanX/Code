#include <stdio.h>
int main()
{
    int a, b, c, d, t1, t2, i, min;
    int a1, b1, c1, d1;
    char o, o1;
    scanf("%d/%d%c%d/%d", &a, &b, &o, &c, &d);
    while (1)
    {
        if (o == '+')
        {
            t1 = a * d + c * b;
            t2 = b * d;
        }
        else
        {
            t1 = a * d - c * b;
            t2 = b * d;
        }
        min = (t1 > t2 ? t2 : t1);
        for (i = min < 0 ? -min : min; i > 1; i--)
        {
            if (t2 % i == 0 && t1 % i == 0)
            {
                t2 /= i;
                t1 /= i;
            }
        }
        if (t2 == 1)
        {
            printf("%d\n", t1);
        }
        else if (t1 == 0)
        {
            printf("0\n");
        }
        else if (t1 > 0 && t2 < 0)
        {
            printf("-%d/%d\n", t1, -t2);
        }
        else if (t1 < 0 && t2 < 0)
        {
            printf("%d/%d\n", -t1, -t2);
        }
        else
            printf("%d/%d\n", t1, t2);
        a1 = a, b1 = b, c1 = c, d1 = d;
        o1 = o;
        scanf("%d/%d%c%d/%d", &a, &b, &o, &c, &d);
        if (a1 == a && b1 == b && c1 == c && d1 == d && o1 == o)
            break;
    }
    return 0;
}