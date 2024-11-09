#include <stdio.h>
int main()
{
    int t, num, renum = 0;
    while (scanf("%d", &num) == 1)
    {
        t = num;
        renum = 0;
        while (t != 0)
        {
            renum = renum * 10 + t % 10;
            t /= 10;
        }
        if (num == renum)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
