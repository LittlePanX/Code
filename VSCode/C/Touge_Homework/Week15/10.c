#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, num;
    int a[20];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &num);
    int *p = a;
    int distance = abs(num - *p);
    int min = *p;
    for (int i = 0; i < n - 1; i++)
    {
        if (abs(num - *(p + i)) < distance)
        {
            distance = abs(num - *(p + i));
            min = *(p + i);
        }
    }
    printf("%d", min);
    return 0;
}