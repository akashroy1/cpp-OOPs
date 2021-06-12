/*  Pointer to objects and Arrow Function

    Arrow Operator -
        (*ptr).setData(2,3); --> is exactly same as 
        (*ptr)->setData(2,3); 

*/
#include <iostream>
using namespace std;

class Complex {
    int real, imaginary;
    public:
        void getData(){
            cout<<"The real part is "<<real<<endl;
            cout<<"The imaginary part is "<<imaginary<<endl;
        }
        void setData(int a, int b){
            real = a;
            imaginary =b;
        }
};

int main()
{
    // Complex c1;
    // Complex* ptr = &c1;
    Complex *ptr = new Complex;

    // (*ptr).setData(2,3);  or,
    ptr->setData(2, 3);

    // (*ptr).getData(); Also Same as -
    ptr->getData();


    // Array of Objects
    int n = 3;
    // cin>>n;
    Complex* ptr1 = new Complex[n];

    ptr1->setData(4,5);
    ptr1->getData();
    
    (ptr1+1)->setData(6,8);
    (ptr1+1)->getData();

    
    return 0;
}