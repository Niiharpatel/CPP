// To swap the two values using templates ......

#include <iostream>
using namespace std;
template <typename T>

class data
{
public:
    T a, b;

    data(T a, T b)
    {
        cout << "Before swapping value of a is: " << a << endl;
        cout << "Before swapping value of b is: " << b << endl;
    }

    void aft()
    {
        a = a + b;
        b = a - b;
        a = a - b;

        cout << "After swapping value of a is: " << a << endl;
        cout << "After swapping value of b is: " << b << endl;
    }
};

int main()
{
    data<float> z(10, 5);
    z.aft();

    return 0;
}