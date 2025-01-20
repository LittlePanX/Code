#include <stdio.h>
char kong(char c)
{
    if (c == ' ')
    {
        scanf(" %c", &c);
        return kong(c);
    }
    return c;
}
int factorial(int x)
{
    int t = 1;
    for (int i = 2; i <= x; i++)
    {
        t *= i;
    }
    return t;
}
int main()
{
    int a, b, result;
    char c;
    while (scanf("%d", &a) == 1)
    {
        scanf(" %c", &c);
        c = kong(c);
        switch (c)
        {
        case '!':
            printf("%d\n", factorial(a));
            break;
        case '+':
            scanf("%d", &b);
            printf("%d\n", a + b);
            break;
        case '-':
            scanf("%d", &b);
            printf("%d\n", a - b);
            break;
        case '*':
            scanf("%d", &b);
            printf("%d\n", a * b);
            break;
        case '/':
            scanf("%d", &b);
            if (b == 0)
            {
                printf("error\n");
            }
            else
            {
                printf("%d\n", a / b);
            }
            break;
        case '%':
            scanf("%d", &b);
            if (b == 0)
            {
                printf("error\n");
            }
            else
            {
                printf("%d\n", a % b);
            }
            break;
        }
    }
    return 0;
}