#include <stdio.h>
int main(void)
{
    /*********Begin*********/
    int num;
    scanf("%d", &num);
    int s;
    if (num >= 1)
    {
        for (int i = 1; i <= num; i++)
        {
            s += jc(i);
        }
    }
    else if (num = 0)
    {
        s = 1;
    }
    else
    {
        s = 0;
    }
    printf("%d", s);
    /*********End**********/
    return 0;
}
int jc(int i)
{
    int ret = 1;
    for (int j = i; j > 0; j--)
    {
        ret *= j;
    }
    return ret;
}