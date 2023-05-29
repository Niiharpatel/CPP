#include <iostream>
using namespace std;

class cal
{
public:
    int a, b, add, mul, divi, sub, modu;
    cal() // constructor....same as class name..
    {
        cout << "Enter the value of a = " << endl;
        cin >> a;
        cout << "Enter the value of b = " << endl;
        cin >> b;
        add = a + b;
        mul = a * b;
        divi = a / b;
        sub = a - b;
        modu = a % b;
    }

    void setinfo()
    {
        cout << "Addition is: " << add << endl;
        cout << "Multiplication is: " << mul << endl;
        cout << "Division is: " << divi << endl;
        cout << "Substraction is: " << sub << endl;
        cout << "Modulus is: " << modu << endl;
    }
};

int main()
{
    cal obj;
    obj.setinfo();

    return 0;
}