// Estimation for event management system............

#include <iostream>
#include <string.h>
using namespace std;

class data
{
    string event, fname, lname;
    int guest;
    int min;

public:
    void getinfo() // Value get from user..
    {
        cout << endl;
        cout << "********** Event Management **********" << endl;
        cout << endl;
        cout << "Enter the name of the event: " << endl;
        cin >> event;
        cout << "Enter the customer's first and last name: " << endl;
        cin >> fname >> lname;
        cout << endl;
        cout << "Enter the number of guests: " << endl;
        cin >> guest;
        cout << endl;
        cout << "Enter the number of minutes in the event: " << endl;
        cin >> min;
    }

    void setinfo()
    {
        double CostPerHour = 18.50; // variables declaration...
        double CostPerMinute = .40;
        double CostOfDinner = 20.70;
        double server, sercost, Cost1, Cost2, foodcost, avgcost, totlcost, depositamt;

        server = guest / 20; // to find number of servers..
        cout << endl;

        cout << "=============== Event estimate for: " << fname << " " << lname << " ===============" << endl;

        cout << "Number of Servers:" << server << endl;

        Cost1 = (min / 60) * CostPerHour; // to find servers cost..
        Cost2 = (min % 60) * CostPerMinute;
        sercost = Cost1 + Cost2;

        cout << "Cost for Servers: " << sercost << endl;

        foodcost = guest * CostOfDinner; // to find foodcost..
        cout << "Cost for Food: " << foodcost << endl;

        avgcost = foodcost / guest; // to find average cost...
        cout << "Average cost per person: " << avgcost << endl;

        cout << endl;
        totlcost = foodcost + (sercost * server); // to find total cost...
        cout << "Total cost is: " << totlcost << endl;

        depositamt = totlcost * .25; // to find deposite amount...
        cout << "Please deposit a 25% deposit to reserve the event" << endl;
        cout << "The deposit needed is: " << depositamt;
    }
};

int main()
{
    data obj;
    obj.getinfo();
    obj.setinfo();

    return 0;
}