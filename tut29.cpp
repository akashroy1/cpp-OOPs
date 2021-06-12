/*  Constructor in Class
    If we want to set the value withe the declaration of the object we can use constructor
    like int n = 5;

    Constructor is basically a special member function with same name as of the class
    It is used to initialize the onjects of the class
    and it is autometically invoked.
*/
#include <iostream>
#include <string.h>
using namespace std;

/*  ------------ Charactericstics of Constructors ------------
    1. It should be declared in the public section of the class
    2. They are autometically invoked whenever the object is created
    3. Can't return values amd do not have return types
    4. It can have default arguements
    5. WE ca't refer to their address
*/

class Complex{
    int a, b;
    public:
        void printData(void){
            cout<<"The complex number is: "<<a<<" + "<<b<<"i"<<endl;
        }
        Complex(void); // Constructor Declareation
};

Complex :: Complex(void){ // ---> This is a default constructor as it accepts no constructor
    a=0;
    b=0;
}

int main()
{
    Complex c1, c2, c3;
    c1.printData();
    c2.printData();
    c3.printData();
    
    
    return 0;
}