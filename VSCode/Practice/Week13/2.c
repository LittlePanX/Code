#include <stdio.h>
int ack(int, int);
int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    printf("%d", ack(m, n));
    return 0;
}

int ack(int m, int n)
{
    /**********Begin**********/
    int ret;
    if (m == 0)
    {
        ret = n + 1;
        return ret;
    }
    else if (m > 0 && n == 0)
    {
        ret = ack(m - 1, 1);
        return ret;
    }
    else if (m > 0 && n > 0)
    {
        ret = ack(m - 1, ack(m, n - 1));
        return ret;
    }
    /**********End**********/
}