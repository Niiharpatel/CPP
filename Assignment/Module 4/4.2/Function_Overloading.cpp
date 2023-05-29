#include <iostream>
using namespace std;

void v1(int x, int y)
{
    cout << "Addition of two value is: " << x + y << endl;
    cout << "Substraction of two value is: " << x - y << endl;
    cout << "Division of two value is: " << x / y << endl;
    cout << "Multiplication of two value is: " << x * y << endl;
}

void v1(int a, int b, int c)
{
    cout << "\nAddition of three value is: " << a + b + c << endl;
    cout << "Substraction of three value is: " << a - b - c << endl;
    cout << "Division of three value is: " << (a / b) / c << endl;
    cout << "Multiplication of three value is: " << a * b * c << endl;
}

int main()
{
    v1(5, 10);
    v1(5, 10, 15);
    return 0;

    return 0;
}