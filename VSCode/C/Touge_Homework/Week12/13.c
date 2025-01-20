#include <stdio.h>
int days(int a, int b, int c)
{
    int sum = 0;
    int daysInMonth[] = {0, 31, (a % 4 == 0 && a % 100 != 0 || a % 400 == 0) ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for (int i = 1; i < b; i++)
    {
        sum += daysInMonth[i];
    }
    sum += c;
    return sum;
}
int main()
{
    int y, m1, d1, m2, d2, differ;
    scanf("%d%d%d%d%d", &y, &m1, &d1, &m2, &d2);
    differ = days(y, m2, d2) - days(y, m1, d1);
    printf("%d", differ);
    return 0;
}