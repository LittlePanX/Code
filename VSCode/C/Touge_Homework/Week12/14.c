#include <stdio.h>
#include <math.h>
int sushu(int x)
{
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int m, n, i, j;
    scanf("%d%d", &m, &n);
    for (i = 1, j = m; i <= n; i++)
    {
        do
        {
            j++;
        } while (!(sushu(j) && sushu(j + 2)));
        printf("%d,%d\n", j, j + 2);
    }
    return 0;
}