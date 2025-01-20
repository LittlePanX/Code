#include <stdio.h>
int main()
{
    int num;
    char ch;
    int cnt;
    while (scanf("%d %c", &num, &ch) == 2)
    {
        for (int i = 0; i < 2 * num - 1; i++)
        {
            if (i <= num)
            {
                cnt = i;
                for (int j = 0; j < cnt * 2 - 1; j++)
                {
                    printf("%c", ch);
                }
                printf("\n");
            }
            else if (i > num)
            {
                cnt = 2 * num - i;
                for (int j = 0; j < cnt * 2 - 1; j++)
                {
                    printf("%c", ch);
                }
                printf("\n");
            }
        }
        printf("\n");
    }
    return 0;
}