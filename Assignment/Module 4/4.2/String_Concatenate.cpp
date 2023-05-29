// Concatenate the two strings using Operator Overloading......
#include <iostream>
using namespace std;

class data
{
public:
    string a, b, c;

    void find()
    {
        cout << "Enter your name: " << endl;
        cin >> a;
        cout << "Enter your surname: " << endl;
        cin >> b;
    }

    void operator+();
    void display();
};

void data::operator+()
{
    c = a + b;
}

void data::display()
{
    cout << "\nYour Full name is: " << c << endl;
}

int main()
{
    data a;
    a.find();

    +a;
    a.display();

    return 0;
}