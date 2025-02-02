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
    cout << p->name << endl;
    cout << p->age << endl;
    cout << p->score << endl;
    return 0;
}