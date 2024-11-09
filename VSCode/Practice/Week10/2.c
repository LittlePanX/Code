#include <stdio.h>
#include <string.h>
char ch[1000];
int main(void)
{
    /*********Begin*********/
    int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;
    gets(ch);
    for (int i = 0; i < strlen(ch); i++)
    {
        if (ch[i] >= 'A' && ch[i] <= 'Z' || ch[i] >= 'a' && ch[i] <= 'z')
        {
            cnt1++;
        }
        else if (ch[i] >= '0' && ch[i] <= '9')
        {
            cnt2++;
        }
        else if (ch[i] == ' ')
        {
            cnt3++;
        }
        else
        {
            cnt4++;
        }
    }
    printf("%d %d %d %d", cnt1, cnt2, cnt3, cnt4);
    /*********End**********/
    return 0;
}