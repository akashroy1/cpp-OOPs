/*  Constructor Overloading
    Same as Function Overloading with Constructor Function
*/
#include <iostream>
#include <string.h>
using namespace std;

class Complex{
    int a, b;
    public:
        Complex(int x, int y);
        Complex(int x);
        Complex();
        void printNumber();
};

Complex :: Complex(int x, int y){
    a = x;
    b = y;
}

Complex :: Complex(int x){
    a = x;
    b = 0;
}
Complex :: Complex(){
    a = 0;
    b = 0;
}

void Complex :: printNumber(){
    cout<<"The complex number is: "<<a<<" + "<<b<<"i"<<endl;
}

int main()
{
    Complex c1(4,6);
    c1.printNumber();

    Complex c2(5);
    c2.printNumber();

    Complex c3;
    c3.printNumber();

    return 0;
}