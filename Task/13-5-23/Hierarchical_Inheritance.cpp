#include <iostream>
using namespace std;

class info // main class....only main class inherit with other classes
{
public:
    int id;
    string name;

    void getinfo()
    {
        cout << "Enter the Id: " << endl;
        cin >> id;
        cout << "Enter the name: " << endl;
        cin >> name;
    }

    void setinfo()
    {
        cout << "id is: " << id << "Name is: " << name << endl;
    }
};

class teacher : public info
{

public:
    int t_salary;

    void getinfo1()
    {
        cout << "Enter the salary: " << endl;
        cin >> t_salary;
    }

    void setinfo1()
    {

        cout << "Teacher Salary is : " << t_salary << endl;
    }
};

class pri : public info
{
public:
    int p_salary;

    void getinfo2()
    {

        int p_salary;

        cout << "Enter the salary: " << endl;
        cin >> p_salary;
    }

    void setinfo2()
    {
        cout << "Principal salary is: " << p_salary << endl;
    }
};

int main()
{
    teacher t1;
    t1.getinfo();
    t1.getinfo1();
    t1.setinfo();
    t1.setinfo1();

    pri p1;
    p1.getinfo();
    p1.getinfo2();
    p1.setinfo();
    p1.setinfo2();

    return 0;
}