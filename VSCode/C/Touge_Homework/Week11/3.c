#include <stdio.h>
int main()
{
    char num[100];
    char ch;
    int cnt = 0;
    while (scanf("%c", &ch) == 1 && ch != '\n')
    {
        num[cnt] = ch;
        cnt++;
    }
    if ((cnt % 2) != 0)
    {
        for (int i = 0; i < cnt; i += 2)
        {
            if (num[i] == '0' && num[i - 2] == '0')
            {
                if (num[i] == '0' && num[i + 2] != '0')
                {
                    printf("0");
                }
                continue;
            }
            else
            {
                printf("%c", num[i]);
            }
        }
        printf(" ");
        for (int j = 1; j < cnt; j += 2)
        {
            if (num[j] == '0' && num[j - 2] == '0')
            {
                if (num[j] == '0' && num[j + 2] != '0')
                {
                    printf("0");
                }
                continue;
            }
            else
            {
                printf("%c", num[j]);
            }
        }
    }
    else
    {
        for (int k = 1; k < cnt; k += 2)
        {
            if (num[k] == '0' && num[k - 2] == '0')
            {
                if (num[k] == '0' && num[k + 2] != '0')
                {
                    printf("0");
                }
                continue;
            }
            else
            {
                printf("%c", num[k]);
            }
        }
        printf(" ");
        for (int l = 0; l < cnt; l += 2)
        {
            if (num[l] == '0' && num[l - 2] == '0')
            {
                if (num[l] == '0' && num[l + 2] != '0')
                {
                    printf("0");
                }
                continue;
            }
            else
            {
                printf("%c", num[l]);
            }
        }
    }
    return 0;
}