// 1D matrix addition using operator overloading...
#include <iostream>
using namespace std;

class matrix
{
public:
    int a[5], b[5], c[5];
    int i;

    void find()
    {
        cout << "Enter the Value of matrix A: ";
        for (i = 0; i < 5; i++)
        {
            cin >> a[i];
        }

        cout << "Enter the Value of matrix B: ";
        for (i = 0; i < 5; i++)
        {
            cin >> b[i];
        }
    }

    void display();
    void operator+();
};

void matrix::operator+()
{
    for (i = 0; i < 5; i++)
    {
        c[i] = a[i] + b[i];
    }
}

void matrix::display()
{
    cout << "Matrix A: ";
    for (i = 0; i < 5; i++)
    {
        cout << " " << a[i];
    }

    cout << endl;

    cout << "Matrix B: ";
    for (i = 0; i < 5; i++)
    {
        cout << " " << b[i];
    }

    cout << endl;

    cout << "Addition of matrix A & B: ";
    for (i = 0; i < 5; i++)
    {
        cout << " " << c[i];
    }
}

int main()
{
    matrix a;
    a.find();

    +a;
    a.display();

    return 0;
}