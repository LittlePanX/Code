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
    /* struct */ Student stu;
    stu.name = "潘钰楷";
    stu.age = 18;
    stu.score = 100;
    cout << "姓名:" << stu.name << endl;
    cout << "年龄:" << stu.age << endl;
    cout << "分数:" << stu.score << endl;
    return 0;
}