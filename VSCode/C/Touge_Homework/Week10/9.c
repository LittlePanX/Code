#include <stdio.h>
int main(void)
{
    /*********Begin*********/
    int a, n;
    scanf("%d %d", &a, &n);
    int sum = 0;
    int t = a;
    for (int i = 0; i < n; i++)
    {
        sum += a;
        a = a * 10 + t;
    }
    printf("%d", sum);
    /*********End**********/
    return 0;
}