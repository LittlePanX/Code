// Plan A
#include <stdio.h>
char ch[100];
int main()
{
    int cnt = 1;
    gets(ch);
    char *p = ch;
    int len = sizeof(ch) / sizeof(ch[0]);
    for (int i = 0; i < len; i++)
    {
        if (*(p + i) == ' ' && *(p + i - 1) != ' ')
        {
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}

/* Plan B
#include <stdio.h>
char ch[100];
int main()
{
    int cnt = 1;
    int i = 0;
    while ((ch[i] = getchar()) != EOF)
    {
        i++;
    }
    char *p = ch;
    int len = sizeof(ch) / sizeof(ch[0]);
    for (i = 0; i < len; i++)
    {
        if (*(p + i) == ' ' && *(p + i - 1) != ' ')
        {
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
} */