/*  Default and Parameterized Constructor
    
*/
#include <iostream>
#include <string.h>
using namespace std;

class Complex{
    int a, b;
    public:
        void printData(void){
            cout<<"The complex number is: "<<a<<" + "<<b<<"i"<<endl;
        }
        Complex(int x, int y); // Constructor
};

/*
Complex :: Complex(void){ // ---> This is a default constructor as it accepts no constructor
    a=0;
    b=0;
} 
*/

Complex :: Complex (int x, int y){ // ---> This is a default constructor as it takes two parameter
    a=x;
    b=y;
}

int main()
{
    // Complex a; --> For calling default Constructor

    // Implicit Call
    Complex a(4,6);

    // Explicit call
    Complex b = Complex(5,7);

    a.printData(); 

    b.printData();    
    
    return 0;
}