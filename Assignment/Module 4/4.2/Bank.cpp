#include <iostream>
#include <string.h>
using namespace std;

class Datamember
{

public:
    string name;
    int acc_n, type_acc, balance, depo_amt, withdraw_amt, total_bal;

    void getinfo()
    {
        cout << "Enter the name of dipositor:" << endl;
        cin >> name;
        cout << "Enter the account number:" << endl;
        cin >> acc_n;
        cout << "type of account: Saving Account" << endl;
        cout << "Enter the balance amount in account is:" << endl;
        cin >> balance;
        cout << "Enter the Diposite amount:" << endl;
        cin >> depo_amt;
    }

    void setinfo()
    {
        cout << "===== User Info =====" << endl;
        cout << name << endl;
        cout << acc_n << endl;
        cout << "Saving Account" << endl;
        cout << "total amount after deposite: " << balance + depo_amt << endl;
        cout << "Enter the amount you want to withdraw:" << endl;
        cin >> withdraw_amt;
        total_bal = balance + depo_amt - withdraw_amt;
        cout << "Total balance amount is:" << total_bal << endl;
    }
};

int main()
{
    Datamember obj;
    obj.getinfo();
    obj.setinfo();

    return 0;
}