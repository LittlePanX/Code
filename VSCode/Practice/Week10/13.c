#include <stdio.h>
int main()
{
    int a, b, c;
    int cnt = 0;
    while (scanf("%d%d%d", &a, &b, &c) == 3)
    {
        if (a + b == c)
        {
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}