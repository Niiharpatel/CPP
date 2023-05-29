#include <iostream>
#include <string.h>
using namespace std;

class student
{

public:
    string name;
    int roll_num;

    void info()
    {
        cout << "Enter the name: " << endl;
        cin >> name;
        cout << "Enter Roll Number: " << endl;
        cin >> roll_num;
    }
};

class test : public student
{
public:
    int mat, phy;

    void info1()
    {
        cout << "Enter the marks obtain in maths subject: " << endl;
        cin >> mat;
        cout << "Enter the marks obtain in Physics subject: " << endl;
        cin >> phy;
    }
};

class result : public test
{
public:
    int res;

    void info2()
    {
        cout << "Total marks obtain in test are: " << mat + phy << endl;
        res = mat + phy;

        cout << "\n===== Test Info =====" << endl;
        cout << "Name : " << name << endl;
        cout << "Roll No: " << roll_num << endl;
        cout << "Marks in Maths: " << mat << endl;
        cout << "Marks in Physics: " << phy << endl;
        cout << "Total marks obtain in test: " << res << endl;
    }
};

int main()
{
    result obj;
    obj.info();
    obj.info1();
    obj.info2();

    return 0;
}