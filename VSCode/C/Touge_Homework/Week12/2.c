// time(0)为当前时间，srand()为随机数种子，rand()为随机数
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    /**********Begin**********/
    srand(time(0));
    if (rand() % 2 == 0)
    {
        printf("win");
    }
    else
    {
        printf("lose");
    }
    /**********End**********/
    return 0;
}