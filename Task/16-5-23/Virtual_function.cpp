#include <iostream>
using namespace std;

class demo
{
public:
    virtual void v1() = 0;

    void f1()
    {
        cout << "hello i m pure virtual function" << endl;
    }
};

class demo1 : public demo
{
public:
    void v1()
    {
        cout << "i m abstract class" << endl;
    }
};
int main()
{
    demo1 obj;
    obj.v1();
    obj.f1();

    return 0;
}