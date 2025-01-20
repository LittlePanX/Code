#include <stdio.h>
void solve()
{
    /*********Begin*********/
    int a = 1, b;
    int i;
    int suma = 0, sumb = 0;
    while (a <= 3000)
    {
    start:
        suma = 0;
        sumb = 0;
        a++;
        for (i = 1; i <= a / 2; i++)
        {
            if (a % i == 0)
            {
                suma = suma + i;
            }
        }
        if (a != suma && a < suma)
        {
            b = suma;
        }
        else
        {
            goto start;
        }
        for (i = 1; i <= b / 2; i++)
        {
            if (b % i == 0)
            {
                sumb = sumb + i;
            }
        }
        if (sumb == a)
        {
            printf("(%d,%d)", a, b);
        }
    }
    /*********End**********/
}
int main(void)
{
    solve();
    return 0;
}