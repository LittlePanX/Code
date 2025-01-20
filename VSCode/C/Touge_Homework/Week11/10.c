// 转身乘号可用@表示，2个正整数转身乘法(A@B)的规则是：将被乘数A转身后再乘以乘数B。
// 例如：123@2的结果不是246，而是642，规则就是被乘数123先转身变成321再和2相乘，321被称为123的转身数。
// 然而，讨厌的C语言老师规定，一个数在转身时，末尾的0位置不变，例如：1200的转身数是2100，100的转身数还是100。
#include <stdio.h>
#include <math.h>
int change(int n)
{
    int cnt = 0;
    int t = 0;
    int ret;
    if (n % 10 == 0)
    {
        while (n % 10 == 0)
        {
            n /= 10;
            cnt++;
        }
        while (n > 0)
        {
            t = t * 10 + n % 10;
            n /= 10;
        }
        ret = t * pow(10, cnt);
    }
    else
    {
        while (n > 0)
        {
            t = t * 10 + n % 10;
            n /= 10;
        }
        ret = t;
    }
    return ret;
}
int main()
{
    int hang;
    scanf("%d", &hang);
    for (int i = 0; i < hang; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n", change(a) * b);
    }
    return 0;
}