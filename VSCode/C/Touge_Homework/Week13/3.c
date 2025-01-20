#include <stdio.h>
long long hanoi(int num)
{
    /**********Begin**********/
    if (num == 1)
    {
        return 2;
    }
    else
    {
        return hanoi(num - 1) * 3 + 2;
    }
    /**********End**********/
}
int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        printf("%lld\n", hanoi(n));
    }
    return 0;
}