#include <stdio.h>
int main()
{
    int num;
    int ret = 0, ret2 = 0;
    scanf("%d", &num);
    for (int i = 3; i < num / 2; i += 2)
    {
        ret = 1;
        ret2 = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
                ret = 0;
        }
        if ((num - i) / 2 != 0)
        {
            for (int j = 2; j < num - i; j++)
            {
                if ((num - i) % j == 0)
                    ret2 = 0;
            }
        }
        if (ret == 1 && ret2 == 1 && i != num - i)
        {
            printf("%d=%d+%d\n", num, i, num - i);
        }
    }
    return 0;
}