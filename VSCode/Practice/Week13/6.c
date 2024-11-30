int sum = 0;
int jiahe(int n)
{
    sum += n;
    if (n == 1)
    {
        return sum;
    }
    else
    {
        n--;
        jiahe(n);
    }
}
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", jiahe(n));
    return 0;
}