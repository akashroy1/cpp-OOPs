/*  Dinamic Inisialization of Objects using Constructor
*/
#include <iostream>
#include <string.h>
using namespace std;

class BankDeposit{
    int principal;
    int years;
    float interestRate;
    float returnValue;

    public:
        BankDeposit(){}
        BankDeposit(int x, int y, float r); // r ll be like 0.04
        BankDeposit(int x, int y, int r); // r ll be like 10, 15 etc.
        void show();
};

BankDeposit :: BankDeposit(int x, int y, float r){
    principal = x;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + r);
    }  
}

BankDeposit :: BankDeposit(int x, int y, int r){
    principal = x;
    years = y;
    interestRate = float(r)/100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + r);
    }  
}

void BankDeposit :: show(){
    cout<<endl<<"Principal amount was "<<principal<<" SReturn value after "<<years<<" years is = "<<returnValue<<endl;
}

int main()
{
    BankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    /*
    cout<<"Enter the value of p, y and r"<<endl;
    cin>>p>>y>>r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();   
    
    cout<<"Enter the value of p, y and R"<<endl;
    cin>>p>>y>>R;
    bd2 = BankDeposit(p, y, R);
    bd1.show();   
    */

   bd3.show();

    return 0;
}