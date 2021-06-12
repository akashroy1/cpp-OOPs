/*  Ambiguity Resolution in Inharitance
    If we have Function of same name in 2 Base Class Then Ambiguity Comes

    If we Create Function of Same name in Derived Class the Ambiguity Resolves Autometically
*/
#include <iostream>
using namespace std;

class Base1 {
    public:
        void greet(){
            cout<<"How are you?"<<endl;
        }
};
class Base2 {
    public:
        void greet(){
            cout<<"Kamon Acho?"<<endl;
        }
};

class Derived : public Base1, public Base2 {
    int a;
    public:
        void greet(){
            Base1 :: greet();
        }
};

class B1 {
    public:
        void say(){
            cout<<"Hello World"<<endl;
        }
};
class B2 {
    public:
        void say(){
            cout<<"Hi Folks"<<endl;
        }
};

class D : public B1, public B2 {
    public:
        void say(){
            cout<<"Bostir Chele Pocha Bolchi"<<endl;
        }
};

int main()
{
    /*
    Ambiguity 1
    Base1 base1obj;
    Base2 base2obj;
    Derived d;

    base1obj.greet();
    base2obj.greet();
    d.greet();  // Ambiguity Error Comes If we haven't clear it in Derived Class
    */

   B1 b1;
   B2 b2;

   D d;
   d.say(); // Ambiguity Not Come Because we have cleared in Derived `D` Class

    return 0;
}