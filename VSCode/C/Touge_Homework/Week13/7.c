#include <stdio.h>
void ejz(int n)
{
    if (n < 2)
    {
        printf("%d", n);
    }
    else
    {
        ejz(n / 2);
        printf("%d", n % 2);
    }
}
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = n; i <= m; i++)
    {
        ejz(i);
        printf("\n");
    }
    return 0;
}