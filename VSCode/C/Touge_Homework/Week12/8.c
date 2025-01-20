#include <stdio.h>
// 编写最大公约数GCD函数
/*********Begin*********/
int gcd(int a, int b)
{
    int t;
    int i;
    if (a > b)
    { // a永远为小的那一个
        t = a;
        a = b;
        b = t;
    }
    for (i = a; i > 0; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            break;
        }
    }
    return i;
}
/*********End**********/

// 编写最小公倍数LCM函数
/*********Begin*********/
int lcm(int a, int b)
{
    int t;
    int i;
    if (a > b)
    { // a永远为小的那一个
        t = a;
        a = b;
        b = t;
    }
    for (i = b; i > 0; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            break;
        }
    }
    return i;
}
/*********End**********/
int main(void)
{
    /*********Begin*********/
    int a, b;
    scanf("%d%d", &a, &b);
    if (a < 0 || b < 0)
    {
        printf("Input Error");
    }
    else
    {
        printf("%d %d", gcd(a, b), lcm(a, b));
    }
    /*********End**********/
    return 0;
}