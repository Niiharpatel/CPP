#include <iostream>
using namespace std;

int main()
{

    int a, b, temp;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    temp = a;
    a = b;
    b = temp;

    cout << "\nafter the swapping value of a is: " << a;
    cout << "\nafter the swapping value of b is: " << b;

    return 0;
}