#include <iostream>
#include <string.h>
using namespace std;

typedef struct employee
{
    int eId;
    string name;
    int salary;
}ep;

union currency
{
    int rice;
    char car;
    float pound;
};


int main()
{
    /* struct employee akash;
    ep akash;

    akash.eId=88;
    akash.name="Akash";
    akash.salary=500000;

    cout<<"The id is: "<<akash.eId<<endl;
    cout<<"His name is: "<<akash.name<<endl;
    cout<<"Salary: "<<akash.salary<<endl;
    */

    /* union currency money;
    money.pound = 12;
    money.car='A';
    cout<<money.pound<<endl;
    cout<<money.car<<endl;
    */

    enum Meal{Breakfast, Lunch, Dinner};
    cout<<Breakfast<<endl;
    cout<<Lunch<<endl;
    cout<<Dinner<<endl;

    return 0;
}