#include <stdio.h>
void six(int n)
{
    if (n <= 9)
    {
        printf("%d", n);
    }
    else if (n > 9 && n < 16)
    {
        printf("%c", 55 + n);
    }
    else if (n == 16)
    {
        printf("10");
    }
    else if (n > 16)
    {
        six(n / 16);
        if (n % 16 <= 9)
        {
            printf("%d", n % 16);
        }
        else if (n % 16 > 9)
        {
            printf("%c", 55 + n % 16);
        }
    }
}
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = n; i <= m; i++)
    {
        six(i);
        printf(" ");
    }
    return 0;
}