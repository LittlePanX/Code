#include <stdio.h>
void Rua();
int main()
{
    Rua(); // 调用递归函数
    return 0;
}

void Rua()
{
    /**********Begin**********/
    int num;
    if (scanf("%d", &num) == 1)
    {
        Rua();
        printf("%d\n", num);
    }
    /**********End**********/
}