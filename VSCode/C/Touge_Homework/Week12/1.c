#include <stdio.h>
int is_triangle(int, int, int);
int main()
{
    int n, a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    n = is_triangle(a, b, c);
    switch (n)
    {
    case 0:
        printf("regular triangle!");
        break;
    case 1:
        printf("equilateral triangle!");
        break;
    case 2:
        printf("isosceles triangle!");
        break;
    case 3:
        printf("not a triangle!");
        break;
    }
}
int is_triangle(int a, int b, int c)
{
    /**********Begin**********/
    if (a + b > c && a - b < c)
    {
        if (a == b || b == c || c == a)
        {
            return 2;
        }
        else if (a == b && b == c)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 3;
    }
    /**********End**********/
}