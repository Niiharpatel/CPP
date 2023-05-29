#include <iostream>
using namespace std;

// To find area of circle, rectangle and triangle using function overloading.......
float pi = 3.14;

void v1(int a, int b)
{

    cout << "Area Of Rectangle is: " << a * b << endl;
}

void v1(float x, float area, float breadth)
{
    cout << "Area Of Triangle is: " << x * area * breadth << endl;
}

void v1(float r)
{
    cout << "Area Of Circle is: " << pi * r * r << endl;
}

int main()
{
    v1(10, 20);
    v1(0.5, 5, 10);
    v1(2);

    return 0;
}