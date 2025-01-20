#include <stdio.h>

int calculateRightAnswers(int a, char c, int b, int d)
{
    int right = 0;
    if (c == '+')
    {
        if (a + b == d)
        {
            right++;
        }
    }
    else if (c == '-')
    {
        if (a - b == d)
        {
            right++;
        }
    }
    else if (c == '*')
    {
        if (a * b == d)
        {
            right++;
        }
    }
    else if (c == '/')
    {
        if (b != 0)
        {
            if (a / b == d)
            {
                right++;
            }
        }
    }
    return right;
}

int main()
{
    int N, M, i, j, a, b, d, right;
    char c;
    float grade;
    scanf("%d", &N);
    for (i = 1; i <= N; i++)
    {
        scanf("%d", &M);
        for (j = 1, right = 0; j <= M; j++)
        {
            scanf("%d%c%d=%d", &a, &c, &b, &d);
            right += calculateRightAnswers(a, c, b, d);
        }
        grade = 100.0 * right / M;
        printf("%.2f\n", grade);
    }
    return 0;
}