#include <iostream>
using namespace std;
template <typename T>

class data
{
public:
    T x;
    int i, j, a, b, temp;

    data()
    {
        cout << "Enter the Number: ";
        cin >> x;

        int a[x];
        for (i = 0; i < x; i++)
        {
            cin >> a[i];
        }

        for (i = 0; i < x; i++)
        {
            for (j = 0; j <= x; j++)
            {
                if (a[j] < a[i])
                {
                    temp = a[j];
                    a[j] = a[i];
                    a[i] = temp;
                }
            }
        }
        for (i = 0; i < x; i++)
        {
            cout << a[i];
        }
    }
};

int main()
{
    data<int> z;

    return 0;
}