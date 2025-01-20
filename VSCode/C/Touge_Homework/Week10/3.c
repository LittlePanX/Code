#include <stdio.h>
int main(void)
{
    /*********Begin*********/
    int num, sum = 1;
    scanf("%d", &num);
    int p = num;
    int cnt = 0;
    int a[100];
    while (num != 0)
    {
        num /= 10;
        cnt++;
    }
    for (int j = 0; j < cnt; j++)
    {
        a[j] = p % 10;
        p /= 10;
    }
    for (int i = 0; i < cnt; i++)
    {
        sum *= a[i];
    }
    printf("%d", sum);
    /*********End**********/
    return 0;
}