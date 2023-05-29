#include <iostream>
#include <string.h>
using namespace std;

class cricketer
{
public:
    string name;
    int total_run, avg, best_per, innings;

    void getinfo()
    {

        cout << "Enter the name of cricketer:" << endl;
        cin >> name;
        cout << "Enter the total innings played: " << endl;
        cin >> innings;
        cout << "Enter the total run made by the cricketer:" << endl;
        cin >> total_run;
        cout << "Enter the best innings:" << endl;
        cin >> best_per;
    }
};

class batsman : public cricketer

{
public:
    void setinfo()
    {
        cout << "\nNAME: " << name << endl;
        cout << "Total Innings: " << innings << endl;
        cout << "Total Run: " << total_run << endl;
        cout << "Best Performance: " << best_per << endl;
        avg = total_run / innings;
        cout << "Average Run: " << avg << endl;
    }
};

int main()
{
    batsman obj;
    obj.getinfo();
    obj.setinfo();

    return 0;
}