#include <iostream>
using namespace std;
int main()
{
    int i = 0, j = 0, cnt = 0, a[100];
    cout << "请输入最多100个个位数,输入EOF表示结束输入" << endl;
    // cin >> a[cnt];   （输入0表示结束）
    while (cin >> a[cnt]) // while(a[cnt])
    {
        cnt++;
        // cin >> a[cnt];
    }
    for (i = cnt - 1; i > 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            int temp;
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (int k = 0; k < cnt; k++)
    {
        cout << a[k] << " ";
    }
    return 0;
}