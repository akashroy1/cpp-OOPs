/*  Friend Function 
    It is such a function that is a foreign function but it can access all the private data  of a class
    If the function is Declared in the class as a frienf function.
    It is not a member function and not in the scope of the function (Clearly explained in Properties (down))
*/
#include <iostream>
#include <string.h>
using namespace std;

class complex {
    int a, b;
    public:
        void setNumber(int n1, int n2){
            a=n1;
            b=n2;
        }
        // Below lines states that non member - sumComplex function is allowed to do anything with my private Data & Members
        friend complex sumComplex(complex o1, complex o2);
        void printNumber(){
            cout<<"Your Complex Number is: "<<a<<" + "<<b<<"i"<<endl;
        }
};

complex sumComplex(complex o1, complex o2){
    complex o3;
    o3.setNumber((o1.a+o2.a), (o1.b+o2.b));

    return o3;
}
/* Properties of Friend Function
    1. Not in the scope of class 
    2. Since it is not in the scope of the class, it cannot be called from the object of that class
        Ex- Like in this program 
        c1.sumComplex is invalid
    3. Can be invoked without the help of any object
    4. Usually containsthe objects as arguements
    5. Can be declared inside the public or private section of the function
    6. It can't access the members directly by the names and need object_name.member_name to access any members
*/

int main()
{
    complex c1;   
    complex c2;
    complex sum;

    c1.setNumber(1, 4);   
    c1.printNumber();   

    c2.setNumber(5, 8);
    c2.printNumber();   

    sum = sumComplex(c1, c2);
    sum.printNumber();

    return 0;
}