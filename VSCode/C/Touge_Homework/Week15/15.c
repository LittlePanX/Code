#include <stdio.h>
#include <string.h>
char ch1[100];
char ch2[100];
int main()
{
    int cnt = 0;
    fgets(ch1, 100, stdin);
    scanf("%s", ch2);
    char *p = ch1;
    int len1 = strlen(ch1);
    int len2 = strlen(ch2);
    for (int i = 0; i < len1 - len2 + 1; i++)
    {
        char a[100];
        for (int j = 0; j < len2; j++)
        {
            a[j] = *(p + i + j);
        }
        if (strcmp(a, ch2) == 0)
        {
            printf("%d\n", i);
            cnt++;
        }
    }
    if (cnt == 0)
    {
        printf("-1");
    }
    return 0;
}