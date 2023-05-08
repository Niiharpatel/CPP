#include <iostream>
using namespace std;

class demo
{
public:
    int id;
    string name;

    void getinfo();
    void setinfo();
};

void demo::getinfo()
{

    cout << "Enter the id" << endl;
    cin >> id;
    cout << "Enter the name" << endl;
    cin >> name;
}

void demo::setinfo()
{
    cout << "id is " << id << endl
         << "name is " << name << endl;
}

int main()
{
    demo obj1;
    obj1.getinfo();
    obj1.setinfo();

    return 0;
}