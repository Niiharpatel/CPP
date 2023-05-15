#include <iostream>
using namespace std;

class vehicle
{

public:
    void v1()
    {
        cout << "Hello i m vehicle" << endl;
    }
};

class car : public vehicle // single level inheritance..
{

public:
    void c1()
    {
        cout << "hello i m car" << endl;
    }
};

class speed
{

public:
    void s1()
    {
        cout << "Hello i m speed" << endl;
    }
};

class ferrari : public speed, public car // multiple inheritance..
{

public:
    void f1()
    {

        cout << "hello i m ferrari" << endl;
    }
};

int main()
{
    ferrari obj;
    obj.c1();
    obj.f1();
    obj.s1();
    obj.v1();

    return 0;
}