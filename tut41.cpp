/*  Multiple Inharitance
    Syntax:

        class Derived : visibility-mode base1, visibility-mode base2
        {
            Class Body of Derived Class
        }
*/
#include <iostream>
using namespace std;

class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};

class Base3
{
protected:
    int base3int;

public:
    void set_base3int(int a)
    {
        base3int = a;
    }
};

class Derived : public Base1, public Base2, public Base3 {
    public:
        void show(){
            cout<<"The value of Base1int is = "<<base1int<<endl;
            cout<<"The value of Base2int is = "<<base2int<<endl;
            cout<<"The value of Base3int is = "<<base3int<<endl;
            cout<<"The sum of Base1int, Base2int and Base3int is = "<<base1int+base2int+base3int<<endl;
        }
};

/*
The Inharited Derived Class will look like:
Data Members:
    base1int --> protected
    base2int --> protected
Member Function:
    set_base1int() --> public
    set_base2int() --> public
    show() --> public
*/

int main()
{
    Derived harry;

    harry.set_base1int(23);
    harry.set_base2int(5);
    harry.set_base3int(21);
    harry.show();

    return 0;
}