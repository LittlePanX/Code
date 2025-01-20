// 十进制转换为二进制
#include <stdio.h>
int a[10000];
void change(int num)
{
    int i = 0;
    if (num > 0)
    {
        while (num > 0)
        {
            a[i] = num % 2;
            i++;
            num /= 2;
        }
        for (int j = i - 1; j >= 0; j--)
        {
            printf("%d", a[j]);
        }
    }
    else
    {
        printf("0");
    }
}
int main()
{
    int num;
    while (scanf("%d", &num) == 1)
    {
        change(num);
        printf("\n");
    }
    return 0;
}