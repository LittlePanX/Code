#include <stdio.h>
#include <math.h>

// 定义main函数
int main()
{
    // 请在此添加您的代码
    /*****************Begin******************/
    double x0, x1 = 0.0;
    x0 = x1;
    x1 = 1.0;
    while (fabs(x0 - x1) >= 1e-6)
    {
        x0 = x1;
        x1 = cos(x0);
    }
    printf("root=%lf", x0);
    /***************** End ******************/
    return 0;
}
