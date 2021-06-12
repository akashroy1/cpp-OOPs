#include <iostream>
#include <string.h>
using namespace std;

int sum(int a, int b){
    return a+b;
}

int main()
{
    int num1, num2;
    cout<<"Enter first Number:";
    cin>>num1;
    cout<<"Enter second Number:";
    cin>>num2;
    cout<<"The sum is: "<<sum(num1, num2)<<endl;

    return 0;
}