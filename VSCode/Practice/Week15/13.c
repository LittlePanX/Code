#include <stdio.h>
#include <string.h>
char ch[50];
int main()
{
    scanf("%s", ch);
    int length = strlen(ch);
    char *p = ch;
    int i = 0;
    while (i < length)
    {
        printf("%s\n", (p + i));
        i++;
    }
    return 0;
}