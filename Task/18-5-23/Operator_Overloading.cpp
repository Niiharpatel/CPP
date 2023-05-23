#include <iostream>
using namespace std;

class demo
{
public:
    int x, y, z;
    void getdata(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    void operator-();
    void display();
};

void demo::display()
{
    cout << "x = " << x << "\ny = " << y << "\nz = " << z << endl;
}

void demo::operator-()
{
    x = -x;
    y = -y;
    z = -z;
}

int main()
{
    demo obj;
    obj.getdata(10, 20, 30);
    obj.display();

    -obj;
    obj.display();

    return 0;
}