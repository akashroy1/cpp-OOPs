#include <iostream>
#include <string.h>
using namespace std;

int factorial(int n){
    if (n<=1)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}

int fibonacci (int n){
    if (n<2){
        return 1;
    }
    else
    {
        return fibonacci(n-2)+fibonacci(n-1);
    }
}

int main()
{
    /*int num;
    cout<<"Enter a number: ";
    cin>>num;*/

    int term;
    cout<<"Enter the position: ";
    cin>>term;
    
    // cout<<"The factorial of "<<num<<" is = "<<factorial(num)<<endl;

    cout<<"The "<<term<<" term of fibonaci series is = "<<fibonacci(term)<<endl;

    return 0;
}