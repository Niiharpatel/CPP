#include <iostream>
using namespace std;

class cal
{
public:
    int a, b, add, sub, mul, divi, modu;

    void getinfo()
    {
        cout << "Enter the value of a = " << endl;
        cin >> a;
        cout << "Enter the value of b = " << endl;
        cin >> b;
        add = a + b;
        sub = a - b;
        mul = a * b;
        divi = a / b;
        modu = a % b;
    }

    void setinfo()
    {

        cout << "\nAddition is = " << add << endl;
        cout << "Substraction is = " << sub << endl;
        cout << "Multiplication is = " << mul << endl;
        cout << "Division is = " << divi << endl;
        cout << "Modulus is = " << modu << endl;
    }
};

int main()
{
    cal obj;
    obj.getinfo();
    obj.setinfo();

    return 0;
}