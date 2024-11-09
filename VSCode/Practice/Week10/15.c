#include <stdio.h>
int main()
{
    int rate;
    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
    while (scanf("%d", &rate) == 1)
    {
        switch (rate)
        {
        case 1:
            cnt1++;
            break;
        case 2:
            cnt2++;
            break;
        case 3:
            cnt3++;
            break;
        }
    }
    int sum;
    sum = cnt1 * 1000 + cnt1 / 3 * 1000 + cnt2 * 500 + cnt2 / 6 * 500 + cnt3 * 200 + cnt3 / 10 * 200;
    printf("%d", sum);
    return 0;
}