#include <iostream>
#include <string>
using namespace std;
struct Student
{
    string name;
    int age;
    int score;
};
int main()
{
    struct Student stu[3] = {
        {"张三", 18, 100},
        {"李四", 19, 90},
        {"王五", 20, 80}};
    for (int i = 0; i < 3; i++)
    {
        cout << "姓名:" << stu[i].name << endl;
        cout << "年龄:" << stu[i].age << endl;
        cout << "分数:" << stu[i].score << endl;
    }
    return 0;
}