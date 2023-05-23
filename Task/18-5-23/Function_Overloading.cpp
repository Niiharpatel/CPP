#include <iostream>
using namespace std;

void v1(int x, int y)
{
    cout << "addition of two number =  " << x + y << endl;
}

void v1(int a, int b, int c)
{
    cout << "addition of three number =  " << a + b + c << endl;
}

int main()
{
    v1(10, 20);
    v1(10, 20, 30);

    return 0;
}