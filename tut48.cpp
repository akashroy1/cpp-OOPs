/*  Constructor in Derived Class
    Example
    Order of Execution of Constructor
    Case1:
        class B: public A {
            A() then B()
        };
    Case2:
        class A: public B, public C {
            First B() then C() and then A()
        };
    Case3:
        class A: public B, virtual public C {
            First C() then B() and then A()
        };
    
*/
#include <iostream>
using namespace std;

class Base1{
    int data;
    public:
        Base1(int i){
            data = i;
            cout<<"Base1 Class Constructor Called"<<endl;
        }
        void printDataBase1(void){
            cout<<"The value of Data is "<<data<<endl;
        }
};
class Base2{
    int data;
    public:
        Base2(int i){
            data = i;
            cout<<"Base2 Class Constructor Called"<<endl;
        }
        void printDataBase2(void){
            cout<<"The value of Data is "<<data<<endl;
        }
};

class Derived : public Base1, public Base2 {
    int derived1, derived2;
    public:
        Derived(int a, int b, int c, int d): Base1(a), Base2(b) {
            derived1 = c;
            derived2 = d;
        }
        void printDataDerived(void){
            cout<<"The value of Derived1 is "<<derived1<<endl;
            cout<<"The value of Derived2 is "<<derived2<<endl;
        }
};

int main()
{
    Derived harry(1,2,3,4);
    harry.printDataBase1();
    harry.printDataBase2();
    harry.printDataDerived();
    
    return 0;
}