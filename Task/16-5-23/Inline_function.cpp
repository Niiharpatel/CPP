#include <iostream>
using namespace std;

inline void area()
{
    float a;
    int r;
    cout << "Enter the value of r: " << endl;
    cin >> r;
    a = 3.14 * r * r;
    cout << "area of circle is: " << a;
}

int main()
{
    area();
    return 0;
}