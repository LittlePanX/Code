#include <stdio.h>
int main()
{
    /*********Begin*********/
    int a, b, t, x;
    int q, w;
    scanf("%d %d", &a, &b);
    q = a;
    w = b;
    while (b != 0)
    {
        t = b;
        b = a % b;
        a = t;
    }
    for (int i = 3; i < 1000000000; i++)
    {
        if (i % q == 0 && i % w == 0)
        {
            x = i;
            break;
        }
    }
    printf("最大公约数是:%d\n", a);
    printf("最小公倍数是:%d\n", x);
    /*********End**********/
    return 0;
}