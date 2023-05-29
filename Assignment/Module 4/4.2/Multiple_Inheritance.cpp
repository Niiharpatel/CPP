#include <iostream>
#include <string.h>
using namespace std;

class person
{
public:
    string name;
    int age;
    void info()
    {
        cout << "Enter your name: " << endl;
        cin >> name;
        cout << "Enter age: " << endl;
        cin >> age;
    }
};

class student
{
public:
    float per;
    void info1()
    {
        cout << "Enter Percentage: " << endl;
        cin >> per;
    }
};

class teacher : public person, public student
{
public:
    int sal;
    void info2()
    {
        cout << "Enter Salary: " << endl;
        cin >> sal;

        cout << "\n====== Info ======" << endl;
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Percentage : " << per << endl;
        cout << "Salary : " << sal << endl;
    }
};

int main()
{
    teacher obj;
    obj.info();
    obj.info1();
    obj.info2();

    return 0;
}