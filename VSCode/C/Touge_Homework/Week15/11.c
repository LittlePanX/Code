#include <stdio.h>
void swap(int *a, int *b)
{
    int t;
    if (*a > *b)
    {
        t = *a;
        *a = *b;
        *b = t;
    }
}
int a[50];
int main()
{
    int n, i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            swap(&a[j], &a[j + 1]);
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}