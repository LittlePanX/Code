// 递归函数打印星期          *Truly importent*
#include <stdio.h>
int leapyear(int year)
{
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}
int dayofyearDmonth(int year, int month)
{
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (leapyear(year) && month == 2)
    {
        return 29;
    }
    return days[month - 1];
}
int weekday(int year, int month, int day)
{
    int days = 0, i;
    for (i = 1900; i < year; i++)
    {
        days += 365 + leapyear(i);
    }
    for (i = 1; i < month; i++)
    {
        days += dayofyearDmonth(year, i);
    }
    days += day;
    return days % 7;
} // 1900.1.1是星期一     周日-周六 0-6
int main()
{
    int year, month, day;
    scanf("%d%d%d", &year, &month, &day);
    int week = weekday(year, month, day);
    char *weekday[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    printf("%s", weekday[week]);
    return 0;
}