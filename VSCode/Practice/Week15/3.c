#include <stdio.h>
#include <math.h>
int a[20];
int main()
{
    int cnt = 0;
    int sum = 0;
    int i = 0;
    for (i = 0; i < 20; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    double average = 0;
    average = sum / 20.0;
    printf("所有评委平均分:%.3f分.\n", average);
    printf("不合格得分:");
    for (i = 0; i < 20; i++)
    {
        if (fabs(a[i] - average) > 10)
        {
            printf("%d ", a[i]);
            cnt++;
            sum -= a[i];
        }
    }
    printf(".\n");
    double last = 0;
    if (cnt == 20)
    {
        printf("无合格打分.");
    }
    else
    {
        last = sum * 1.0 / (20 - cnt);
        printf("最后得分:%.3f分.", last);
    }
    return 0;
}