#include <iostream>
using namespace std;

class area
{

public:
    int a, ans, ans1;

    inline void getinfo()
    {
        cout << "Enter the value of a: " << endl;
        cin >> a;
        ans = a * a;
        ans1 = a * a * a;
    }

    inline void setinfo()
    {
        cout << "Ans of multiplication is: " << ans << endl;
        cout << "Ans of cubic is: " << ans1 << endl;
    }
};

int main()
{
    area obj;
    obj.getinfo();
    obj.setinfo();

    return 0;
}