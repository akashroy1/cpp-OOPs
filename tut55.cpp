/*  Pointer to derived Class
*/
#include <iostream>
using namespace std;

class BaseClass {
    public:
        int var_Base;
        void display(){
            cout<<"Displaying Base Class Variable var_Base "<<var_Base<<endl;
        }

};

class DerivedClass : public BaseClass {
    public:
        int var_Derived;
        void display(){
            cout<<"Displaying Base Class Variable var_Base "<<var_Base<<endl;
            cout<<"Displaying Base Class Variable var_Derived "<<var_Derived<<endl;
        }
};

int main()
{
    BaseClass* baseClassPointer;
    BaseClass obj_Base;
    DerivedClass obj_Derived;
    baseClassPointer = &obj_Derived; // Pointing Base Class Pointer to Derived Class

    baseClassPointer->var_Base = 34;
    baseClassPointer->display();

    baseClassPointer->var_Base = 3400;
    baseClassPointer->display();
    // baseClassPointer->var_Derived = 134; --> error

    DerivedClass* derivedClassPointer;
    derivedClassPointer = &obj_Derived;
    derivedClassPointer->var_Derived = 98;
    derivedClassPointer->var_Base = 9800;
    derivedClassPointer->display();
    
    return 0;
}