#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int t, num, renum = 0;
    scanf("%d", &num);
    t = num;
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
    return 0;
}