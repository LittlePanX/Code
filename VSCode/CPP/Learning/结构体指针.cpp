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
    struct Student stu = {"Tom", 18, 100};
    struct Student *p = &stu;
    p->name = "潘钰楷";
    cout << "姓名:" << p->name << endl;
    cout << "年龄:" << p->age << endl;
    cout << "分数:" << p->score << endl;
    return 0;
}