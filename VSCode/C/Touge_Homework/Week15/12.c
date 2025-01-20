#include <stdio.h>
int a[20];
void swap(int *a, int n)
{
    int i, j, min;
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (*(a + j) < *(a + min))
            {
                min = j;
            }
        }
        int temp = *(a + i);
        *(a + i) = *(a + min);
        *(a + min) = temp;
    }
}
int main()
{
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    swap(a, n);
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}